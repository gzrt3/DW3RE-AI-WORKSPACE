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

// Function: entry_0029b9e8
// Address: 0x29b9e8 - 0x2bfab4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_0029b9e8_part50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x2b3c50u: goto label_2b3c50;
        case 0x2b3c54u: goto label_2b3c54;
        case 0x2b3c58u: goto label_2b3c58;
        case 0x2b3c5cu: goto label_2b3c5c;
        case 0x2b3c60u: goto label_2b3c60;
        case 0x2b3c64u: goto label_2b3c64;
        case 0x2b3c68u: goto label_2b3c68;
        case 0x2b3c6cu: goto label_2b3c6c;
        case 0x2b3c70u: goto label_2b3c70;
        case 0x2b3c74u: goto label_2b3c74;
        case 0x2b3c78u: goto label_2b3c78;
        case 0x2b3c7cu: goto label_2b3c7c;
        case 0x2b3c80u: goto label_2b3c80;
        case 0x2b3c84u: goto label_2b3c84;
        case 0x2b3c88u: goto label_2b3c88;
        case 0x2b3c8cu: goto label_2b3c8c;
        case 0x2b3c90u: goto label_2b3c90;
        case 0x2b3c94u: goto label_2b3c94;
        case 0x2b3c98u: goto label_2b3c98;
        case 0x2b3c9cu: goto label_2b3c9c;
        case 0x2b3ca0u: goto label_2b3ca0;
        case 0x2b3ca4u: goto label_2b3ca4;
        case 0x2b3ca8u: goto label_2b3ca8;
        case 0x2b3cacu: goto label_2b3cac;
        case 0x2b3cb0u: goto label_2b3cb0;
        case 0x2b3cb4u: goto label_2b3cb4;
        case 0x2b3cb8u: goto label_2b3cb8;
        case 0x2b3cbcu: goto label_2b3cbc;
        case 0x2b3cc0u: goto label_2b3cc0;
        case 0x2b3cc4u: goto label_2b3cc4;
        case 0x2b3cc8u: goto label_2b3cc8;
        case 0x2b3cccu: goto label_2b3ccc;
        case 0x2b3cd0u: goto label_2b3cd0;
        case 0x2b3cd4u: goto label_2b3cd4;
        case 0x2b3cd8u: goto label_2b3cd8;
        case 0x2b3cdcu: goto label_2b3cdc;
        case 0x2b3ce0u: goto label_2b3ce0;
        case 0x2b3ce4u: goto label_2b3ce4;
        case 0x2b3ce8u: goto label_2b3ce8;
        case 0x2b3cecu: goto label_2b3cec;
        case 0x2b3cf0u: goto label_2b3cf0;
        case 0x2b3cf4u: goto label_2b3cf4;
        case 0x2b3cf8u: goto label_2b3cf8;
        case 0x2b3cfcu: goto label_2b3cfc;
        case 0x2b3d00u: goto label_2b3d00;
        case 0x2b3d04u: goto label_2b3d04;
        case 0x2b3d08u: goto label_2b3d08;
        case 0x2b3d0cu: goto label_2b3d0c;
        case 0x2b3d10u: goto label_2b3d10;
        case 0x2b3d14u: goto label_2b3d14;
        case 0x2b3d18u: goto label_2b3d18;
        case 0x2b3d1cu: goto label_2b3d1c;
        case 0x2b3d20u: goto label_2b3d20;
        case 0x2b3d24u: goto label_2b3d24;
        case 0x2b3d28u: goto label_2b3d28;
        case 0x2b3d2cu: goto label_2b3d2c;
        case 0x2b3d30u: goto label_2b3d30;
        case 0x2b3d34u: goto label_2b3d34;
        case 0x2b3d38u: goto label_2b3d38;
        case 0x2b3d3cu: goto label_2b3d3c;
        case 0x2b3d40u: goto label_2b3d40;
        case 0x2b3d44u: goto label_2b3d44;
        case 0x2b3d48u: goto label_2b3d48;
        case 0x2b3d4cu: goto label_2b3d4c;
        case 0x2b3d50u: goto label_2b3d50;
        case 0x2b3d54u: goto label_2b3d54;
        case 0x2b3d58u: goto label_2b3d58;
        case 0x2b3d5cu: goto label_2b3d5c;
        case 0x2b3d60u: goto label_2b3d60;
        case 0x2b3d64u: goto label_2b3d64;
        case 0x2b3d68u: goto label_2b3d68;
        case 0x2b3d6cu: goto label_2b3d6c;
        case 0x2b3d70u: goto label_2b3d70;
        case 0x2b3d74u: goto label_2b3d74;
        case 0x2b3d78u: goto label_2b3d78;
        case 0x2b3d7cu: goto label_2b3d7c;
        case 0x2b3d80u: goto label_2b3d80;
        case 0x2b3d84u: goto label_2b3d84;
        case 0x2b3d88u: goto label_2b3d88;
        case 0x2b3d8cu: goto label_2b3d8c;
        case 0x2b3d90u: goto label_2b3d90;
        case 0x2b3d94u: goto label_2b3d94;
        case 0x2b3d98u: goto label_2b3d98;
        case 0x2b3d9cu: goto label_2b3d9c;
        case 0x2b3da0u: goto label_2b3da0;
        case 0x2b3da4u: goto label_2b3da4;
        case 0x2b3da8u: goto label_2b3da8;
        case 0x2b3dacu: goto label_2b3dac;
        case 0x2b3db0u: goto label_2b3db0;
        case 0x2b3db4u: goto label_2b3db4;
        case 0x2b3db8u: goto label_2b3db8;
        case 0x2b3dbcu: goto label_2b3dbc;
        case 0x2b3dc0u: goto label_2b3dc0;
        case 0x2b3dc4u: goto label_2b3dc4;
        case 0x2b3dc8u: goto label_2b3dc8;
        case 0x2b3dccu: goto label_2b3dcc;
        case 0x2b3dd0u: goto label_2b3dd0;
        case 0x2b3dd4u: goto label_2b3dd4;
        case 0x2b3dd8u: goto label_2b3dd8;
        case 0x2b3ddcu: goto label_2b3ddc;
        case 0x2b3de0u: goto label_2b3de0;
        case 0x2b3de4u: goto label_2b3de4;
        case 0x2b3de8u: goto label_2b3de8;
        case 0x2b3decu: goto label_2b3dec;
        case 0x2b3df0u: goto label_2b3df0;
        case 0x2b3df4u: goto label_2b3df4;
        case 0x2b3df8u: goto label_2b3df8;
        case 0x2b3dfcu: goto label_2b3dfc;
        case 0x2b3e00u: goto label_2b3e00;
        case 0x2b3e04u: goto label_2b3e04;
        case 0x2b3e08u: goto label_2b3e08;
        case 0x2b3e0cu: goto label_2b3e0c;
        case 0x2b3e10u: goto label_2b3e10;
        case 0x2b3e14u: goto label_2b3e14;
        case 0x2b3e18u: goto label_2b3e18;
        case 0x2b3e1cu: goto label_2b3e1c;
        case 0x2b3e20u: goto label_2b3e20;
        case 0x2b3e24u: goto label_2b3e24;
        case 0x2b3e28u: goto label_2b3e28;
        case 0x2b3e2cu: goto label_2b3e2c;
        case 0x2b3e30u: goto label_2b3e30;
        case 0x2b3e34u: goto label_2b3e34;
        case 0x2b3e38u: goto label_2b3e38;
        case 0x2b3e3cu: goto label_2b3e3c;
        case 0x2b3e40u: goto label_2b3e40;
        case 0x2b3e44u: goto label_2b3e44;
        case 0x2b3e48u: goto label_2b3e48;
        case 0x2b3e4cu: goto label_2b3e4c;
        case 0x2b3e50u: goto label_2b3e50;
        case 0x2b3e54u: goto label_2b3e54;
        case 0x2b3e58u: goto label_2b3e58;
        case 0x2b3e5cu: goto label_2b3e5c;
        case 0x2b3e60u: goto label_2b3e60;
        case 0x2b3e64u: goto label_2b3e64;
        case 0x2b3e68u: goto label_2b3e68;
        case 0x2b3e6cu: goto label_2b3e6c;
        case 0x2b3e70u: goto label_2b3e70;
        case 0x2b3e74u: goto label_2b3e74;
        case 0x2b3e78u: goto label_2b3e78;
        case 0x2b3e7cu: goto label_2b3e7c;
        case 0x2b3e80u: goto label_2b3e80;
        case 0x2b3e84u: goto label_2b3e84;
        case 0x2b3e88u: goto label_2b3e88;
        case 0x2b3e8cu: goto label_2b3e8c;
        case 0x2b3e90u: goto label_2b3e90;
        case 0x2b3e94u: goto label_2b3e94;
        case 0x2b3e98u: goto label_2b3e98;
        case 0x2b3e9cu: goto label_2b3e9c;
        case 0x2b3ea0u: goto label_2b3ea0;
        case 0x2b3ea4u: goto label_2b3ea4;
        case 0x2b3ea8u: goto label_2b3ea8;
        case 0x2b3eacu: goto label_2b3eac;
        case 0x2b3eb0u: goto label_2b3eb0;
        case 0x2b3eb4u: goto label_2b3eb4;
        case 0x2b3eb8u: goto label_2b3eb8;
        case 0x2b3ebcu: goto label_2b3ebc;
        case 0x2b3ec0u: goto label_2b3ec0;
        case 0x2b3ec4u: goto label_2b3ec4;
        case 0x2b3ec8u: goto label_2b3ec8;
        case 0x2b3eccu: goto label_2b3ecc;
        case 0x2b3ed0u: goto label_2b3ed0;
        case 0x2b3ed4u: goto label_2b3ed4;
        case 0x2b3ed8u: goto label_2b3ed8;
        case 0x2b3edcu: goto label_2b3edc;
        case 0x2b3ee0u: goto label_2b3ee0;
        case 0x2b3ee4u: goto label_2b3ee4;
        case 0x2b3ee8u: goto label_2b3ee8;
        case 0x2b3eecu: goto label_2b3eec;
        case 0x2b3ef0u: goto label_2b3ef0;
        case 0x2b3ef4u: goto label_2b3ef4;
        case 0x2b3ef8u: goto label_2b3ef8;
        case 0x2b3efcu: goto label_2b3efc;
        case 0x2b3f00u: goto label_2b3f00;
        case 0x2b3f04u: goto label_2b3f04;
        case 0x2b3f08u: goto label_2b3f08;
        case 0x2b3f0cu: goto label_2b3f0c;
        case 0x2b3f10u: goto label_2b3f10;
        case 0x2b3f14u: goto label_2b3f14;
        case 0x2b3f18u: goto label_2b3f18;
        case 0x2b3f1cu: goto label_2b3f1c;
        case 0x2b3f20u: goto label_2b3f20;
        case 0x2b3f24u: goto label_2b3f24;
        case 0x2b3f28u: goto label_2b3f28;
        case 0x2b3f2cu: goto label_2b3f2c;
        case 0x2b3f30u: goto label_2b3f30;
        case 0x2b3f34u: goto label_2b3f34;
        case 0x2b3f38u: goto label_2b3f38;
        case 0x2b3f3cu: goto label_2b3f3c;
        case 0x2b3f40u: goto label_2b3f40;
        case 0x2b3f44u: goto label_2b3f44;
        case 0x2b3f48u: goto label_2b3f48;
        case 0x2b3f4cu: goto label_2b3f4c;
        case 0x2b3f50u: goto label_2b3f50;
        case 0x2b3f54u: goto label_2b3f54;
        case 0x2b3f58u: goto label_2b3f58;
        case 0x2b3f5cu: goto label_2b3f5c;
        case 0x2b3f60u: goto label_2b3f60;
        case 0x2b3f64u: goto label_2b3f64;
        case 0x2b3f68u: goto label_2b3f68;
        case 0x2b3f6cu: goto label_2b3f6c;
        case 0x2b3f70u: goto label_2b3f70;
        case 0x2b3f74u: goto label_2b3f74;
        case 0x2b3f78u: goto label_2b3f78;
        case 0x2b3f7cu: goto label_2b3f7c;
        case 0x2b3f80u: goto label_2b3f80;
        case 0x2b3f84u: goto label_2b3f84;
        case 0x2b3f88u: goto label_2b3f88;
        case 0x2b3f8cu: goto label_2b3f8c;
        case 0x2b3f90u: goto label_2b3f90;
        case 0x2b3f94u: goto label_2b3f94;
        case 0x2b3f98u: goto label_2b3f98;
        case 0x2b3f9cu: goto label_2b3f9c;
        case 0x2b3fa0u: goto label_2b3fa0;
        case 0x2b3fa4u: goto label_2b3fa4;
        case 0x2b3fa8u: goto label_2b3fa8;
        case 0x2b3facu: goto label_2b3fac;
        case 0x2b3fb0u: goto label_2b3fb0;
        case 0x2b3fb4u: goto label_2b3fb4;
        case 0x2b3fb8u: goto label_2b3fb8;
        case 0x2b3fbcu: goto label_2b3fbc;
        case 0x2b3fc0u: goto label_2b3fc0;
        case 0x2b3fc4u: goto label_2b3fc4;
        case 0x2b3fc8u: goto label_2b3fc8;
        case 0x2b3fccu: goto label_2b3fcc;
        case 0x2b3fd0u: goto label_2b3fd0;
        case 0x2b3fd4u: goto label_2b3fd4;
        case 0x2b3fd8u: goto label_2b3fd8;
        case 0x2b3fdcu: goto label_2b3fdc;
        case 0x2b3fe0u: goto label_2b3fe0;
        case 0x2b3fe4u: goto label_2b3fe4;
        case 0x2b3fe8u: goto label_2b3fe8;
        case 0x2b3fecu: goto label_2b3fec;
        case 0x2b3ff0u: goto label_2b3ff0;
        case 0x2b3ff4u: goto label_2b3ff4;
        case 0x2b3ff8u: goto label_2b3ff8;
        case 0x2b3ffcu: goto label_2b3ffc;
        case 0x2b4000u: goto label_2b4000;
        case 0x2b4004u: goto label_2b4004;
        case 0x2b4008u: goto label_2b4008;
        case 0x2b400cu: goto label_2b400c;
        case 0x2b4010u: goto label_2b4010;
        case 0x2b4014u: goto label_2b4014;
        case 0x2b4018u: goto label_2b4018;
        case 0x2b401cu: goto label_2b401c;
        case 0x2b4020u: goto label_2b4020;
        case 0x2b4024u: goto label_2b4024;
        case 0x2b4028u: goto label_2b4028;
        case 0x2b402cu: goto label_2b402c;
        case 0x2b4030u: goto label_2b4030;
        case 0x2b4034u: goto label_2b4034;
        case 0x2b4038u: goto label_2b4038;
        case 0x2b403cu: goto label_2b403c;
        case 0x2b4040u: goto label_2b4040;
        case 0x2b4044u: goto label_2b4044;
        case 0x2b4048u: goto label_2b4048;
        case 0x2b404cu: goto label_2b404c;
        case 0x2b4050u: goto label_2b4050;
        case 0x2b4054u: goto label_2b4054;
        case 0x2b4058u: goto label_2b4058;
        case 0x2b405cu: goto label_2b405c;
        case 0x2b4060u: goto label_2b4060;
        case 0x2b4064u: goto label_2b4064;
        case 0x2b4068u: goto label_2b4068;
        case 0x2b406cu: goto label_2b406c;
        case 0x2b4070u: goto label_2b4070;
        case 0x2b4074u: goto label_2b4074;
        case 0x2b4078u: goto label_2b4078;
        case 0x2b407cu: goto label_2b407c;
        case 0x2b4080u: goto label_2b4080;
        case 0x2b4084u: goto label_2b4084;
        default: return;
    }

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
            goto label_2b3c58;
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
            goto label_2b3c64;
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
            goto label_2b3c70;
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
            goto label_2b3c7c;
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
            goto label_2b3c88;
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
            goto label_2b3c94;
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
label_2b3c50:
    // 0x2b3c50: 0x1fb3ffb  .word       0x01FB3FFB                   # dsra        $a3, $k1, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3c50u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 27) >> 31);
label_2b3c54:
    // 0x2b3c54: 0x400583  .word       0x00400583                   # sra         $zero, $zero, 22 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3c54u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 22));
label_2b3c58:
    // 0x2b3c58: 0x1fc3ffe  .word       0x01FC3FFE                   # dsrl32      $a3, $gp, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3c58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 28) >> (32 + 31));
label_2b3c5c:
    // 0x2b3c5c: 0x9705c2  .word       0x009705C2                   # srl         $zero, $s7, 23 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3c5cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 23), 23));
label_2b3c60:
    // 0x2b3c60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3c60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3c64:
    // 0x2b3c64: 0x4005c3  .word       0x004005C3                   # sra         $zero, $zero, 23 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3c64u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 23));
label_2b3c68:
    // 0x2b3c68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3c68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3c6c:
    // 0x2b3c6c: 0x980602  .word       0x00980602                   # srl         $zero, $t8, 24 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3c6cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 24), 24));
label_2b3c70:
    // 0x2b3c70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3c70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3c74:
    // 0x2b3c74: 0x400603  .word       0x00400603                   # sra         $zero, $zero, 24 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3c74u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 24));
label_2b3c78:
    // 0x2b3c78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3c78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3c7c:
    // 0x2b3c7c: 0x1f9c93c  .word       0x01F9C93C                   # dsll32      $t9, $t9, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3c7cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << (32 + 4));
label_2b3c80:
    // 0x2b3c80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3c80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3c84:
    // 0x2b3c84: 0x1fbd93c  .word       0x01FBD93C                   # dsll32      $k1, $k1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3c84u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 27) << (32 + 4));
label_2b3c88:
    // 0x2b3c88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3c88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3c8c:
    // 0x2b3c8c: 0x1fce13c  .word       0x01FCE13C                   # dsll32      $gp, $gp, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3c8cu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 28) << (32 + 4));
label_2b3c90:
    // 0x2b3c90: 0x3ef8000  .word       0x03EF8000                   # sll         $s0, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3c90u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 15), 0));
label_2b3c94:
    // 0x2b3c94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3c94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3c98:
    // 0x2b3c98: 0x3ef8803  .word       0x03EF8803                   # sra         $s1, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3c98u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 15), 0));
label_2b3c9c:
    // 0x2b3c9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3c9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3ca0:
    // 0x2b3ca0: 0x3ef9006  srlv        $s2, $t7, $ra
    ctx->pc = 0x2b3ca0u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2b3ca4:
    // 0x2b3ca4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3ca4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3ca8:
    // 0x2b3ca8: 0x3efc801  .word       0x03EFC801                   # INVALID     $ra, $t7, -0x37FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3ca8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B3CA8 raw=0x03EFC801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b3cac:
    // 0x2b3cac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3cacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3cb0:
    // 0x2b3cb0: 0x3efd804  sllv        $k1, $t7, $ra
    ctx->pc = 0x2b3cb0u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2b3cb4:
    // 0x2b3cb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3cb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3cb8:
    // 0x2b3cb8: 0x3efe007  srav        $gp, $t7, $ra
    ctx->pc = 0x2b3cb8u;
    SET_GPR_S32(ctx, 28, SRA32(GPR_S32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2b3cbc:
    // 0x2b3cbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3cbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3cc0:
    // 0x2b3cc0: 0x3efb002  .word       0x03EFB002                   # srl         $s6, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3cc0u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 15), 0));
label_2b3cc4:
    // 0x2b3cc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3cc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3cc8:
    // 0x2b3cc8: 0x3efb805  .word       0x03EFB805                   # INVALID     $ra, $t7, -0x47FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3cc8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B3CC8 raw=0x03EFB805"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b3ccc:
    // 0x2b3ccc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3cccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3cd0:
    // 0x2b3cd0: 0x3efc008  .word       0x03EFC008                   # jr          $ra # 000FC000 <InstrIdType: CPU_SPECIAL>
label_2b3cd4:
    if (ctx->pc == 0x2B3CD4u) {
        ctx->pc = 0x2B3CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3CD0u;
        // 0x2b3cd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3CD8u;
        goto label_2b3cd8;
    }
    ctx->pc = 0x2B3CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3CD0u;
        // 0x2b3cd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3CD8u;
label_2b3cd8:
    // 0x2b3cd8: 0x100e7009  beq         $zero, $t6, . + 4 + (0x7009 << 2)
label_2b3cdc:
    if (ctx->pc == 0x2B3CDCu) {
        ctx->pc = 0x2B3CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3CD8u;
        // 0x2b3cdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3CE0u;
        goto label_2b3ce0;
    }
    ctx->pc = 0x2B3CD8u;
    {
        const bool branch_taken_0x2b3cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B3CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3CD8u;
        // 0x2b3cdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3cd8) {
            ctx->pc = 0x2CFD00u;
            return;
        }
    }
    ctx->pc = 0x2B3CE0u;
label_2b3ce0:
    // 0x2b3ce0: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2b3ce0u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2b3ce4:
    // 0x2b3ce4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3ce4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3ce8:
    // 0x2b3ce8: 0xa8e0805  j           func_A382014
label_2b3cec:
    if (ctx->pc == 0x2B3CECu) {
        ctx->pc = 0x2B3CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3CE8u;
        // 0x2b3cec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3CF0u;
        goto label_2b3cf0;
    }
    ctx->pc = 0x2B3CE8u;
    ctx->pc = 0x2B3CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3CE8u;
    // 0x2b3cec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA382014u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA382014u, 0x2B3CE8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B3CF0u;
label_2b3cf0:
    // 0x2b3cf0: 0x40000008  .word       0x40000008                   # mfc0        $zero, Index # 00000008 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b3cf0u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b3cf4:
    // 0x2b3cf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3cf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3cf8:
    // 0x2b3cf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3cf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3cfc:
    // 0x2b3cfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3cfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3d00:
    // 0x2b3d00: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2b3d00u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2b3d04:
    // 0x2b3d04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3d04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3d08:
    // 0x2b3d08: 0x420f000a  .word       0x420F000A                   # INVALID     $s0, $t7, 0xA # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b3d08u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0xA at 0x2B3D08 raw=0x420F000A"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b3d0c:
    // 0x2b3d0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3d0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3d10:
    // 0x2b3d10: 0x100e00db  beq         $zero, $t6, . + 4 + (0xDB << 2)
label_2b3d14:
    if (ctx->pc == 0x2B3D14u) {
        ctx->pc = 0x2B3D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D10u;
        // 0x2b3d14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3D18u;
        goto label_2b3d18;
    }
    ctx->pc = 0x2B3D10u;
    {
        const bool branch_taken_0x2b3d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B3D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D10u;
        // 0x2b3d14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d10) {
            ctx->pc = 0x2B4080u;
            goto label_2b4080;
        }
    }
    ctx->pc = 0x2B3D18u;
label_2b3d18:
    // 0x2b3d18: 0x420f0041  .word       0x420F0041                   # tlbr # 000F0040 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b3d18u;
    runtime->handleTLBR(rdram, ctx);
label_2b3d1c:
    // 0x2b3d1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3d1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3d20:
    // 0x2b3d20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3d20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3d24:
    // 0x2b3d24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3d24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3d28:
    // 0x2b3d28: 0x420f001c  .word       0x420F001C                   # INVALID     $s0, $t7, 0x1C # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b3d28u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1C at 0x2B3D28 raw=0x420F001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b3d2c:
    // 0x2b3d2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3d2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3d30:
    // 0x2b3d30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3d30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3d34:
    // 0x2b3d34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3d34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3d38:
    // 0x2b3d38: 0x11e117ff  beq         $t7, $at, . + 4 + (0x17FF << 2)
label_2b3d3c:
    if (ctx->pc == 0x2B3D3Cu) {
        ctx->pc = 0x2B3D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D38u;
        // 0x2b3d3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3D40u;
        goto label_2b3d40;
    }
    ctx->pc = 0x2B3D38u;
    {
        const bool branch_taken_0x2b3d38 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 1));
        ctx->pc = 0x2B3D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D38u;
        // 0x2b3d3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d38) {
            ctx->pc = 0x2B9D38u;
            { ctx->pc = 0x2b9d38; return; }
        }
    }
    ctx->pc = 0x2B3D40u;
label_2b3d40:
    // 0x2b3d40: 0x80010872  lb          $at, 0x872($zero)
    ctx->pc = 0x2b3d40u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x872u));
label_2b3d44:
    // 0x2b3d44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3d44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3d48:
    // 0x2b3d48: 0x400007a1  .word       0x400007A1                   # mfc0        $zero, Index # 000007A1 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b3d48u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b3d4c:
    // 0x2b3d4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3d4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3d50:
    // 0x2b3d50: 0xa213fff  j           func_884FFFC
label_2b3d54:
    if (ctx->pc == 0x2B3D54u) {
        ctx->pc = 0x2B3D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D50u;
        // 0x2b3d54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3D58u;
        goto label_2b3d58;
    }
    ctx->pc = 0x2B3D50u;
    ctx->pc = 0x2B3D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3D50u;
    // 0x2b3d54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x884FFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x884FFFCu, 0x2B3D50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B3D58u;
label_2b3d58:
    // 0x2b3d58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3d58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3d5c:
    // 0x2b3d5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3d5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3d60:
    // 0x2b3d60: 0x81ee837f  lb          $t6, -0x7C81($t7)
    ctx->pc = 0x2b3d60u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935423)));
label_2b3d64:
    // 0x2b3d64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3d64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3d68:
    // 0x2b3d68: 0x81ee8b7f  lb          $t6, -0x7481($t7)
    ctx->pc = 0x2b3d68u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937471)));
label_2b3d6c:
    // 0x2b3d6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3d6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3d70:
    // 0x2b3d70: 0x81ee937f  lb          $t6, -0x6C81($t7)
    ctx->pc = 0x2b3d70u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939519)));
label_2b3d74:
    // 0x2b3d74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3d74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3d78:
    // 0x2b3d78: 0x81ee9b7f  lb          $t6, -0x6481($t7)
    ctx->pc = 0x2b3d78u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941567)));
label_2b3d7c:
    // 0x2b3d7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3d7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3d80:
    // 0x2b3d80: 0x81eeab7f  lb          $t6, -0x5481($t7)
    ctx->pc = 0x2b3d80u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945663)));
label_2b3d84:
    // 0x2b3d84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3d84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3d88:
    // 0x2b3d88: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2b3d8c:
    if (ctx->pc == 0x2B3D8Cu) {
        ctx->pc = 0x2B3D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D88u;
        // 0x2b3d8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3D90u;
        goto label_2b3d90;
    }
    ctx->pc = 0x2B3D88u;
    {
        const bool branch_taken_0x2b3d88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B3D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D88u;
        // 0x2b3d8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d88) {
            ctx->pc = 0x2CFD90u;
            return;
        }
    }
    ctx->pc = 0x2B3D90u;
label_2b3d90:
    // 0x2b3d90: 0x810273ff  lb          $v0, 0x73FF($t0)
    ctx->pc = 0x2b3d90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2b3d94:
    // 0x2b3d94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3d94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3d98:
    // 0x2b3d98: 0x808373ff  lb          $v1, 0x73FF($a0)
    ctx->pc = 0x2b3d98u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2b3d9c:
    // 0x2b3d9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3d9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3da0:
    // 0x2b3da0: 0x804473ff  lb          $a0, 0x73FF($v0)
    ctx->pc = 0x2b3da0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2b3da4:
    // 0x2b3da4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3da4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3da8:
    // 0x2b3da8: 0x802573ff  lb          $a1, 0x73FF($at)
    ctx->pc = 0x2b3da8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2b3dac:
    // 0x2b3dac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3dacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3db0:
    // 0x2b3db0: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2b3db4:
    if (ctx->pc == 0x2B3DB4u) {
        ctx->pc = 0x2B3DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3DB0u;
        // 0x2b3db4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3DB8u;
        goto label_2b3db8;
    }
    ctx->pc = 0x2B3DB0u;
    {
        const bool branch_taken_0x2b3db0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B3DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3DB0u;
        // 0x2b3db4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3db0) {
            ctx->pc = 0x2CFDB8u;
            return;
        }
    }
    ctx->pc = 0x2B3DB8u;
label_2b3db8:
    // 0x2b3db8: 0x810673ff  lb          $a2, 0x73FF($t0)
    ctx->pc = 0x2b3db8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2b3dbc:
    // 0x2b3dbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3dbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3dc0:
    // 0x2b3dc0: 0x808773ff  lb          $a3, 0x73FF($a0)
    ctx->pc = 0x2b3dc0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2b3dc4:
    // 0x2b3dc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3dc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3dc8:
    // 0x2b3dc8: 0x804873ff  lb          $t0, 0x73FF($v0)
    ctx->pc = 0x2b3dc8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2b3dcc:
    // 0x2b3dcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3dccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3dd0:
    // 0x2b3dd0: 0x802973ff  lb          $t1, 0x73FF($at)
    ctx->pc = 0x2b3dd0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2b3dd4:
    // 0x2b3dd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3dd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3dd8:
    // 0x2b3dd8: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2b3ddc:
    if (ctx->pc == 0x2B3DDCu) {
        ctx->pc = 0x2B3DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3DD8u;
        // 0x2b3ddc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3DE0u;
        goto label_2b3de0;
    }
    ctx->pc = 0x2B3DD8u;
    {
        const bool branch_taken_0x2b3dd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B3DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3DD8u;
        // 0x2b3ddc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3dd8) {
            ctx->pc = 0x2CFDE0u;
            return;
        }
    }
    ctx->pc = 0x2B3DE0u;
label_2b3de0:
    // 0x2b3de0: 0x810a73ff  lb          $t2, 0x73FF($t0)
    ctx->pc = 0x2b3de0u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2b3de4:
    // 0x2b3de4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3de4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3de8:
    // 0x2b3de8: 0x808b73ff  lb          $t3, 0x73FF($a0)
    ctx->pc = 0x2b3de8u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2b3dec:
    // 0x2b3dec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3decu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3df0:
    // 0x2b3df0: 0x804c73ff  lb          $t4, 0x73FF($v0)
    ctx->pc = 0x2b3df0u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2b3df4:
    // 0x2b3df4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3df4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3df8:
    // 0x2b3df8: 0x802d73ff  lb          $t5, 0x73FF($at)
    ctx->pc = 0x2b3df8u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2b3dfc:
    // 0x2b3dfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3dfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3e00:
    // 0x2b3e00: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2b3e00u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2B3E00 raw=0x48007800");
 /* MITIGATED */
label_2b3e04:
    // 0x2b3e04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3e04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3e08:
    // 0x2b3e08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3e08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3e0c:
    // 0x2b3e0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3e0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3e10:
    // 0x2b3e10: 0x800f0070  lb          $t7, 0x70($zero)
    ctx->pc = 0x2b3e10u;
    SET_GPR_S32(ctx, 15, (int8_t)FAST_READ8(0x70u));
label_2b3e14:
    // 0x2b3e14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3e14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3e18:
    // 0x2b3e18: 0x810a73fe  lb          $t2, 0x73FE($t0)
    ctx->pc = 0x2b3e18u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2b3e1c:
    // 0x2b3e1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3e1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3e20:
    // 0x2b3e20: 0x808b73fe  lb          $t3, 0x73FE($a0)
    ctx->pc = 0x2b3e20u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2b3e24:
    // 0x2b3e24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3e24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3e28:
    // 0x2b3e28: 0x804c73fe  lb          $t4, 0x73FE($v0)
    ctx->pc = 0x2b3e28u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2b3e2c:
    // 0x2b3e2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3e2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3e30:
    // 0x2b3e30: 0x802d73fe  lb          $t5, 0x73FE($at)
    ctx->pc = 0x2b3e30u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2b3e34:
    // 0x2b3e34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3e34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3e38:
    // 0x2b3e38: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2b3e3c:
    if (ctx->pc == 0x2B3E3Cu) {
        ctx->pc = 0x2B3E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E38u;
        // 0x2b3e3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3E40u;
        goto label_2b3e40;
    }
    ctx->pc = 0x2B3E38u;
    {
        const bool branch_taken_0x2b3e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B3E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E38u;
        // 0x2b3e3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3e38) {
            ctx->pc = 0x2CFE40u;
            return;
        }
    }
    ctx->pc = 0x2B3E40u;
label_2b3e40:
    // 0x2b3e40: 0x810673fe  lb          $a2, 0x73FE($t0)
    ctx->pc = 0x2b3e40u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2b3e44:
    // 0x2b3e44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3e44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3e48:
    // 0x2b3e48: 0x0  nop
    ctx->pc = 0x2b3e48u;
    // NOP
label_2b3e4c:
    // 0x2b3e4c: 0x4a000550  vmaxx       $vf21, $vf0, $vf0x
    ctx->pc = 0x2b3e4cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
label_2b3e50:
    // 0x2b3e50: 0x808773fe  lb          $a3, 0x73FE($a0)
    ctx->pc = 0x2b3e50u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2b3e54:
    // 0x2b3e54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3e54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3e58:
    // 0x2b3e58: 0x804873fe  lb          $t0, 0x73FE($v0)
    ctx->pc = 0x2b3e58u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2b3e5c:
    // 0x2b3e5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3e5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3e60:
    // 0x2b3e60: 0x802973fe  lb          $t1, 0x73FE($at)
    ctx->pc = 0x2b3e60u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2b3e64:
    // 0x2b3e64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3e64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3e68:
    // 0x2b3e68: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2b3e6c:
    if (ctx->pc == 0x2B3E6Cu) {
        ctx->pc = 0x2B3E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E68u;
        // 0x2b3e6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3E70u;
        goto label_2b3e70;
    }
    ctx->pc = 0x2B3E68u;
    {
        const bool branch_taken_0x2b3e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B3E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E68u;
        // 0x2b3e6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3e68) {
            ctx->pc = 0x2CFE70u;
            return;
        }
    }
    ctx->pc = 0x2B3E70u;
label_2b3e70:
    // 0x2b3e70: 0x810273fe  lb          $v0, 0x73FE($t0)
    ctx->pc = 0x2b3e70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2b3e74:
    // 0x2b3e74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3e74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3e78:
    // 0x2b3e78: 0x808373fe  lb          $v1, 0x73FE($a0)
    ctx->pc = 0x2b3e78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2b3e7c:
    // 0x2b3e7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3e7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3e80:
    // 0x2b3e80: 0x804473fe  lb          $a0, 0x73FE($v0)
    ctx->pc = 0x2b3e80u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2b3e84:
    // 0x2b3e84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3e84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3e88:
    // 0x2b3e88: 0x802573fe  lb          $a1, 0x73FE($at)
    ctx->pc = 0x2b3e88u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2b3e8c:
    // 0x2b3e8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3e8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3e90:
    // 0x2b3e90: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2b3e94:
    if (ctx->pc == 0x2B3E94u) {
        ctx->pc = 0x2B3E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E90u;
        // 0x2b3e94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3E98u;
        goto label_2b3e98;
    }
    ctx->pc = 0x2B3E90u;
    {
        const bool branch_taken_0x2b3e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B3E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E90u;
        // 0x2b3e94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3e90) {
            ctx->pc = 0x2CFE98u;
            return;
        }
    }
    ctx->pc = 0x2B3E98u;
label_2b3e98:
    // 0x2b3e98: 0x81f5737c  lb          $s5, 0x737C($t7)
    ctx->pc = 0x2b3e98u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2b3e9c:
    // 0x2b3e9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3e9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3ea0:
    // 0x2b3ea0: 0x81f3737c  lb          $s3, 0x737C($t7)
    ctx->pc = 0x2b3ea0u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2b3ea4:
    // 0x2b3ea4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3ea4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3ea8:
    // 0x2b3ea8: 0x81f2737c  lb          $s2, 0x737C($t7)
    ctx->pc = 0x2b3ea8u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2b3eac:
    // 0x2b3eac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3eacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3eb0:
    // 0x2b3eb0: 0x81f1737c  lb          $s1, 0x737C($t7)
    ctx->pc = 0x2b3eb0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2b3eb4:
    // 0x2b3eb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3eb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3eb8:
    // 0x2b3eb8: 0x81f0737c  lb          $s0, 0x737C($t7)
    ctx->pc = 0x2b3eb8u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2b3ebc:
    // 0x2b3ebc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3ebcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3ec0:
    // 0x2b3ec0: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2b3ec0u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2B3EC0 raw=0x48000800");
 /* MITIGATED */
label_2b3ec4:
    // 0x2b3ec4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3ec4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3ec8:
    // 0x2b3ec8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3ec8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3ecc:
    // 0x2b3ecc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3eccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3ed0:
    // 0x2b3ed0: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2b3ed4:
    if (ctx->pc == 0x2B3ED4u) {
        ctx->pc = 0x2B3ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3ED0u;
        // 0x2b3ed4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3ED8u;
        goto label_2b3ed8;
    }
    ctx->pc = 0x2B3ED0u;
    {
        const bool branch_taken_0x2b3ed0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B3ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3ED0u;
        // 0x2b3ed4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ed0) {
            ctx->pc = 0x2B5ED0u;
            { ctx->pc = 0x2b5ed0; return; }
        }
    }
    ctx->pc = 0x2B3ED8u;
label_2b3ed8:
    // 0x2b3ed8: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2b3edc:
    if (ctx->pc == 0x2B3EDCu) {
        ctx->pc = 0x2B3EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3ED8u;
        // 0x2b3edc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3EE0u;
        goto label_2b3ee0;
    }
    ctx->pc = 0x2B3ED8u;
    {
        const bool branch_taken_0x2b3ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B3EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3ED8u;
        // 0x2b3edc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ed8) {
            ctx->pc = 0x2C9EE0u;
            return;
        }
    }
    ctx->pc = 0x2B3EE0u;
label_2b3ee0:
    // 0x2b3ee0: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b3ee0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b3ee4:
    // 0x2b3ee4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3ee4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3ee8:
    // 0x2b3ee8: 0x10050004  beq         $zero, $a1, . + 4 + (0x4 << 2)
label_2b3eec:
    if (ctx->pc == 0x2B3EECu) {
        ctx->pc = 0x2B3EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3EE8u;
        // 0x2b3eec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3EF0u;
        goto label_2b3ef0;
    }
    ctx->pc = 0x2B3EE8u;
    {
        const bool branch_taken_0x2b3ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B3EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3EE8u;
        // 0x2b3eec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ee8) {
            ctx->pc = 0x2B3EFCu;
            goto label_2b3efc;
        }
    }
    ctx->pc = 0x2B3EF0u;
label_2b3ef0:
    // 0x2b3ef0: 0x800b2af0  lb          $t3, 0x2AF0($zero)
    ctx->pc = 0x2b3ef0u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2AF0u));
label_2b3ef4:
    // 0x2b3ef4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3ef4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3ef8:
    // 0x2b3ef8: 0xb0b1000  j           func_C2C4000
label_2b3efc:
    if (ctx->pc == 0x2B3EFCu) {
        ctx->pc = 0x2B3EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3EF8u;
        // 0x2b3efc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3F00u;
        goto label_2b3f00;
    }
    ctx->pc = 0x2B3EF8u;
    ctx->pc = 0x2B3EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3EF8u;
    // 0x2b3efc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2B3EF8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B3F00u;
label_2b3f00:
    // 0x2b3f00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3f00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3f04:
    // 0x2b3f04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3f04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3f08:
    // 0x2b3f08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3f08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3f0c:
    // 0x2b3f0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3f0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3f10:
    // 0x2b3f10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3f10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3f14:
    // 0x2b3f14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3f14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3f18:
    // 0x2b3f18: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2b3f18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2b3f1c:
    // 0x2b3f1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3f1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3f20:
    // 0x2b3f20: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2b3f20u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2B3F20 raw=0x48000800");
 /* MITIGATED */
label_2b3f24:
    // 0x2b3f24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3f24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3f28:
    // 0x2b3f28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3f28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3f2c:
    // 0x2b3f2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3f2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3f30:
    // 0x2b3f30: 0x420107f3  .word       0x420107F3                   # INVALID     $s0, $at, 0x7F3 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b3f30u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x33 at 0x2B3F30 raw=0x420107F3"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b3f34:
    // 0x2b3f34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3f34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3f38:
    // 0x2b3f38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3f38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3f3c:
    // 0x2b3f3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3f3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3f40:
    // 0x2b3f40: 0x1d61ffa  .word       0x01D61FFA                   # dsrl        $v1, $s6, 31 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) >> 31);
label_2b3f44:
    // 0x2b3f44: 0x1e0ffd8  .word       0x01E0FFD8                   # mult        $ra, $t7, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b3f44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2b3f48:
    // 0x2b3f48: 0x1d71ffc  .word       0x01D71FFC                   # dsll32      $v1, $s7, 31 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 31));
label_2b3f4c:
    // 0x2b3f4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3f4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3f50:
    // 0x2b3f50: 0x1d81ffe  .word       0x01D81FFE                   # dsrl32      $v1, $t8, 31 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) >> (32 + 31));
label_2b3f54:
    // 0x2b3f54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3f54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3f58:
    // 0x2b3f58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3f58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3f5c:
    // 0x2b3f5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3f5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3f60:
    // 0x2b3f60: 0x1f53ff8  .word       0x01F53FF8                   # dsll        $a3, $s5, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3f60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 21) << 31);
label_2b3f64:
    // 0x2b3f64: 0x960582  .word       0x00960582                   # srl         $zero, $s6, 22 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3f64u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 22), 22));
label_2b3f68:
    // 0x2b3f68: 0x1f33ffb  .word       0x01F33FFB                   # dsra        $a3, $s3, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3f68u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 19) >> 31);
label_2b3f6c:
    // 0x2b3f6c: 0x400583  .word       0x00400583                   # sra         $zero, $zero, 22 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3f6cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 22));
label_2b3f70:
    // 0x2b3f70: 0x1f43ffe  .word       0x01F43FFE                   # dsrl32      $a3, $s4, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3f70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 20) >> (32 + 31));
label_2b3f74:
    // 0x2b3f74: 0x9705c2  .word       0x009705C2                   # srl         $zero, $s7, 23 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3f74u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 23), 23));
label_2b3f78:
    // 0x2b3f78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3f78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3f7c:
    // 0x2b3f7c: 0x4005c3  .word       0x004005C3                   # sra         $zero, $zero, 23 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3f7cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 23));
label_2b3f80:
    // 0x2b3f80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3f80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3f84:
    // 0x2b3f84: 0x980602  .word       0x00980602                   # srl         $zero, $t8, 24 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3f84u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 24), 24));
label_2b3f88:
    // 0x2b3f88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3f88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3f8c:
    // 0x2b3f8c: 0x400603  .word       0x00400603                   # sra         $zero, $zero, 24 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3f8cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 24));
label_2b3f90:
    // 0x2b3f90: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b3f90u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b3f94:
    // 0x2b3f94: 0x1f5a93c  .word       0x01F5A93C                   # dsll32      $s5, $s5, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3f94u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 4));
label_2b3f98:
    // 0x2b3f98: 0x10080066  beq         $zero, $t0, . + 4 + (0x66 << 2)
label_2b3f9c:
    if (ctx->pc == 0x2B3F9Cu) {
        ctx->pc = 0x2B3F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F98u;
        // 0x2b3f9c: 0x1f3993c  .word       0x01F3993C                   # dsll32      $s3, $s3, 4 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3FA0u;
        goto label_2b3fa0;
    }
    ctx->pc = 0x2B3F98u;
    {
        const bool branch_taken_0x2b3f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B3F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F98u;
        // 0x2b3f9c: 0x1f3993c  .word       0x01F3993C                   # dsll32      $s3, $s3, 4 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3f98) {
            ctx->pc = 0x2B4134u;
            { ctx->pc = 0x2b4134; return; }
        }
    }
    ctx->pc = 0x2B3FA0u;
label_2b3fa0:
    // 0x2b3fa0: 0x10090086  beq         $zero, $t1, . + 4 + (0x86 << 2)
label_2b3fa4:
    if (ctx->pc == 0x2B3FA4u) {
        ctx->pc = 0x2B3FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3FA0u;
        // 0x2b3fa4: 0x1f4a13c  .word       0x01F4A13C                   # dsll32      $s4, $s4, 4 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3FA8u;
        goto label_2b3fa8;
    }
    ctx->pc = 0x2B3FA0u;
    {
        const bool branch_taken_0x2b3fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B3FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3FA0u;
        // 0x2b3fa4: 0x1f4a13c  .word       0x01F4A13C                   # dsll32      $s4, $s4, 4 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3fa0) {
            ctx->pc = 0x2B41BCu;
            { ctx->pc = 0x2b41bc; return; }
        }
    }
    ctx->pc = 0x2B3FA8u;
label_2b3fa8:
    // 0x2b3fa8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3fa8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3fac:
    // 0x2b3fac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3facu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3fb0:
    // 0x2b3fb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3fb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3fb4:
    // 0x2b3fb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3fb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3fb8:
    // 0x2b3fb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3fb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3fbc:
    // 0x2b3fbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3fbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3fc0:
    // 0x2b3fc0: 0x3e8a801  .word       0x03E8A801                   # INVALID     $ra, $t0, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3fc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B3FC0 raw=0x03E8A801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b3fc4:
    // 0x2b3fc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3fc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3fc8:
    // 0x2b3fc8: 0x3e89804  sllv        $s3, $t0, $ra
    ctx->pc = 0x2b3fc8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2b3fcc:
    // 0x2b3fcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3fccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3fd0:
    // 0x2b3fd0: 0x3e8a007  srav        $s4, $t0, $ra
    ctx->pc = 0x2b3fd0u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2b3fd4:
    // 0x2b3fd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3fd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3fd8:
    // 0x2b3fd8: 0x3e8a80a  movz        $s5, $ra, $t0
    ctx->pc = 0x2b3fd8u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 31));
label_2b3fdc:
    // 0x2b3fdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3fdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3fe0:
    // 0x2b3fe0: 0x3e8b002  .word       0x03E8B002                   # srl         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3fe0u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_2b3fe4:
    // 0x2b3fe4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3fe4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3fe8:
    // 0x2b3fe8: 0x3e8b805  .word       0x03E8B805                   # INVALID     $ra, $t0, -0x47FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3fe8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B3FE8 raw=0x03E8B805"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b3fec:
    // 0x2b3fec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3fecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3ff0:
    // 0x2b3ff0: 0x3e8c008  .word       0x03E8C008                   # jr          $ra # 0008C000 <InstrIdType: CPU_SPECIAL>
label_2b3ff4:
    if (ctx->pc == 0x2B3FF4u) {
        ctx->pc = 0x2B3FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3FF0u;
        // 0x2b3ff4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3FF8u;
        goto label_2b3ff8;
    }
    ctx->pc = 0x2B3FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3FF0u;
        // 0x2b3ff4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3FF8u;
label_2b3ff8:
    // 0x2b3ff8: 0x3e8b00b  movn        $s6, $ra, $t0
    ctx->pc = 0x2b3ff8u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 31));
label_2b3ffc:
    // 0x2b3ffc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3ffcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4000:
    // 0x2b4000: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2b4000u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2b4004:
    // 0x2b4004: 0x81f182bc  lb          $s1, -0x7D44($t7)
    ctx->pc = 0x2b4004u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935228)));
label_2b4008:
    // 0x2b4008: 0x3eaaaaaa  .word       0x3EAAAAAA                   # lui         $t2, 0xAAAA # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2b4008u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43690 << 16));
label_2b400c:
    // 0x2b400c: 0x81e09723  lb          $zero, -0x68DD($t7)
    ctx->pc = 0x2b400cu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294940451)));
label_2b4010:
    // 0x2b4010: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4010u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4014:
    // 0x2b4014: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4014u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4018:
    // 0x2b4018: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4018u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b401c:
    // 0x2b401c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b401cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4020:
    // 0x2b4020: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4020u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4024:
    // 0x2b4024: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4024u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4028:
    // 0x2b4028: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4028u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b402c:
    // 0x2b402c: 0x1e0e71e  .word       0x01E0E71E                   # ddiv        $gp, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b402cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2B402C raw=0x01E0E71E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4030:
    // 0x2b4030: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4030u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4034:
    // 0x2b4034: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4034u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4038:
    // 0x2b4038: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4038u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b403c:
    // 0x2b403c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b403cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4040:
    // 0x2b4040: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4040u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4044:
    // 0x2b4044: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4044u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4048:
    // 0x2b4048: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4048u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b404c:
    // 0x2b404c: 0x1fc866c  .word       0x01FC866C                   # dadd        $s0, $t7, $gp # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b404cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_2b4050:
    // 0x2b4050: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4050u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4054:
    // 0x2b4054: 0x1fc8eac  .word       0x01FC8EAC                   # dadd        $s1, $t7, $gp # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4054u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_2b4058:
    // 0x2b4058: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4058u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b405c:
    // 0x2b405c: 0x1fc96ec  .word       0x01FC96EC                   # dadd        $s2, $t7, $gp # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b405cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_2b4060:
    // 0x2b4060: 0x3f808312  .word       0x3F808312                   # lui         $zero, 0x8312 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2b4060u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)33554 << 16));
label_2b4064:
    // 0x2b4064: 0x81e0e1bf  lb          $zero, -0x1E41($t7)
    ctx->pc = 0x2b4064u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294959551)));
label_2b4068:
    // 0x2b4068: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4068u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b406c:
    // 0x2b406c: 0x1e0cda3  .word       0x01E0CDA3                   # subu        $t9, $t7, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b406cu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2b4070:
    // 0x2b4070: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4070u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4074:
    // 0x2b4074: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4074u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2b4078:
    // 0x2b4078: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4078u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b407c:
    // 0x2b407c: 0x1e0d5e3  .word       0x01E0D5E3                   # subu        $k0, $t7, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b407cu;
    SET_GPR_S32(ctx, 26, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2b4080:
    // 0x2b4080: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4080u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4084:
    // 0x2b4084: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4084u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
    ctx->pc = 0x2b4088u;
    return;
}

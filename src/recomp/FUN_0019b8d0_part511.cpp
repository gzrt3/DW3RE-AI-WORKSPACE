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


void FUN_0019b8d0_part511(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x294930u: goto label_294930;
        case 0x294934u: goto label_294934;
        case 0x294938u: goto label_294938;
        case 0x29493cu: goto label_29493c;
        case 0x294940u: goto label_294940;
        case 0x294944u: goto label_294944;
        case 0x294948u: goto label_294948;
        case 0x29494cu: goto label_29494c;
        case 0x294950u: goto label_294950;
        case 0x294954u: goto label_294954;
        case 0x294958u: goto label_294958;
        case 0x29495cu: goto label_29495c;
        case 0x294960u: goto label_294960;
        case 0x294964u: goto label_294964;
        case 0x294968u: goto label_294968;
        case 0x29496cu: goto label_29496c;
        case 0x294970u: goto label_294970;
        case 0x294974u: goto label_294974;
        case 0x294978u: goto label_294978;
        case 0x29497cu: goto label_29497c;
        case 0x294980u: goto label_294980;
        case 0x294984u: goto label_294984;
        case 0x294988u: goto label_294988;
        case 0x29498cu: goto label_29498c;
        case 0x294990u: goto label_294990;
        case 0x294994u: goto label_294994;
        case 0x294998u: goto label_294998;
        case 0x29499cu: goto label_29499c;
        case 0x2949a0u: goto label_2949a0;
        case 0x2949a4u: goto label_2949a4;
        case 0x2949a8u: goto label_2949a8;
        case 0x2949acu: goto label_2949ac;
        case 0x2949b0u: goto label_2949b0;
        case 0x2949b4u: goto label_2949b4;
        case 0x2949b8u: goto label_2949b8;
        case 0x2949bcu: goto label_2949bc;
        case 0x2949c0u: goto label_2949c0;
        case 0x2949c4u: goto label_2949c4;
        case 0x2949c8u: goto label_2949c8;
        case 0x2949ccu: goto label_2949cc;
        case 0x2949d0u: goto label_2949d0;
        case 0x2949d4u: goto label_2949d4;
        case 0x2949d8u: goto label_2949d8;
        case 0x2949dcu: goto label_2949dc;
        case 0x2949e0u: goto label_2949e0;
        case 0x2949e4u: goto label_2949e4;
        case 0x2949e8u: goto label_2949e8;
        case 0x2949ecu: goto label_2949ec;
        case 0x2949f0u: goto label_2949f0;
        case 0x2949f4u: goto label_2949f4;
        case 0x2949f8u: goto label_2949f8;
        case 0x2949fcu: goto label_2949fc;
        case 0x294a00u: goto label_294a00;
        case 0x294a04u: goto label_294a04;
        case 0x294a08u: goto label_294a08;
        case 0x294a0cu: goto label_294a0c;
        case 0x294a10u: goto label_294a10;
        case 0x294a14u: goto label_294a14;
        case 0x294a18u: goto label_294a18;
        case 0x294a1cu: goto label_294a1c;
        case 0x294a20u: goto label_294a20;
        case 0x294a24u: goto label_294a24;
        case 0x294a28u: goto label_294a28;
        case 0x294a2cu: goto label_294a2c;
        case 0x294a30u: goto label_294a30;
        case 0x294a34u: goto label_294a34;
        case 0x294a38u: goto label_294a38;
        case 0x294a3cu: goto label_294a3c;
        case 0x294a40u: goto label_294a40;
        case 0x294a44u: goto label_294a44;
        case 0x294a48u: goto label_294a48;
        case 0x294a4cu: goto label_294a4c;
        case 0x294a50u: goto label_294a50;
        case 0x294a54u: goto label_294a54;
        case 0x294a58u: goto label_294a58;
        case 0x294a5cu: goto label_294a5c;
        case 0x294a60u: goto label_294a60;
        case 0x294a64u: goto label_294a64;
        case 0x294a68u: goto label_294a68;
        case 0x294a6cu: goto label_294a6c;
        case 0x294a70u: goto label_294a70;
        case 0x294a74u: goto label_294a74;
        case 0x294a78u: goto label_294a78;
        case 0x294a7cu: goto label_294a7c;
        case 0x294a80u: goto label_294a80;
        case 0x294a84u: goto label_294a84;
        case 0x294a88u: goto label_294a88;
        case 0x294a8cu: goto label_294a8c;
        case 0x294a90u: goto label_294a90;
        case 0x294a94u: goto label_294a94;
        case 0x294a98u: goto label_294a98;
        case 0x294a9cu: goto label_294a9c;
        case 0x294aa0u: goto label_294aa0;
        case 0x294aa4u: goto label_294aa4;
        case 0x294aa8u: goto label_294aa8;
        case 0x294aacu: goto label_294aac;
        case 0x294ab0u: goto label_294ab0;
        case 0x294ab4u: goto label_294ab4;
        case 0x294ab8u: goto label_294ab8;
        case 0x294abcu: goto label_294abc;
        case 0x294ac0u: goto label_294ac0;
        case 0x294ac4u: goto label_294ac4;
        case 0x294ac8u: goto label_294ac8;
        case 0x294accu: goto label_294acc;
        case 0x294ad0u: goto label_294ad0;
        case 0x294ad4u: goto label_294ad4;
        case 0x294ad8u: goto label_294ad8;
        case 0x294adcu: goto label_294adc;
        case 0x294ae0u: goto label_294ae0;
        case 0x294ae4u: goto label_294ae4;
        case 0x294ae8u: goto label_294ae8;
        case 0x294aecu: goto label_294aec;
        case 0x294af0u: goto label_294af0;
        case 0x294af4u: goto label_294af4;
        case 0x294af8u: goto label_294af8;
        case 0x294afcu: goto label_294afc;
        case 0x294b00u: goto label_294b00;
        case 0x294b04u: goto label_294b04;
        case 0x294b08u: goto label_294b08;
        case 0x294b0cu: goto label_294b0c;
        case 0x294b10u: goto label_294b10;
        case 0x294b14u: goto label_294b14;
        case 0x294b18u: goto label_294b18;
        case 0x294b1cu: goto label_294b1c;
        case 0x294b20u: goto label_294b20;
        case 0x294b24u: goto label_294b24;
        case 0x294b28u: goto label_294b28;
        case 0x294b2cu: goto label_294b2c;
        case 0x294b30u: goto label_294b30;
        case 0x294b34u: goto label_294b34;
        case 0x294b38u: goto label_294b38;
        case 0x294b3cu: goto label_294b3c;
        case 0x294b40u: goto label_294b40;
        case 0x294b44u: goto label_294b44;
        case 0x294b48u: goto label_294b48;
        case 0x294b4cu: goto label_294b4c;
        case 0x294b50u: goto label_294b50;
        case 0x294b54u: goto label_294b54;
        case 0x294b58u: goto label_294b58;
        case 0x294b5cu: goto label_294b5c;
        case 0x294b60u: goto label_294b60;
        case 0x294b64u: goto label_294b64;
        case 0x294b68u: goto label_294b68;
        case 0x294b6cu: goto label_294b6c;
        case 0x294b70u: goto label_294b70;
        case 0x294b74u: goto label_294b74;
        case 0x294b78u: goto label_294b78;
        case 0x294b7cu: goto label_294b7c;
        case 0x294b80u: goto label_294b80;
        case 0x294b84u: goto label_294b84;
        case 0x294b88u: goto label_294b88;
        case 0x294b8cu: goto label_294b8c;
        case 0x294b90u: goto label_294b90;
        case 0x294b94u: goto label_294b94;
        case 0x294b98u: goto label_294b98;
        case 0x294b9cu: goto label_294b9c;
        case 0x294ba0u: goto label_294ba0;
        case 0x294ba4u: goto label_294ba4;
        case 0x294ba8u: goto label_294ba8;
        case 0x294bacu: goto label_294bac;
        case 0x294bb0u: goto label_294bb0;
        case 0x294bb4u: goto label_294bb4;
        case 0x294bb8u: goto label_294bb8;
        case 0x294bbcu: goto label_294bbc;
        case 0x294bc0u: goto label_294bc0;
        case 0x294bc4u: goto label_294bc4;
        case 0x294bc8u: goto label_294bc8;
        case 0x294bccu: goto label_294bcc;
        case 0x294bd0u: goto label_294bd0;
        case 0x294bd4u: goto label_294bd4;
        case 0x294bd8u: goto label_294bd8;
        case 0x294bdcu: goto label_294bdc;
        case 0x294be0u: goto label_294be0;
        case 0x294be4u: goto label_294be4;
        case 0x294be8u: goto label_294be8;
        case 0x294becu: goto label_294bec;
        case 0x294bf0u: goto label_294bf0;
        case 0x294bf4u: goto label_294bf4;
        case 0x294bf8u: goto label_294bf8;
        case 0x294bfcu: goto label_294bfc;
        case 0x294c00u: goto label_294c00;
        case 0x294c04u: goto label_294c04;
        case 0x294c08u: goto label_294c08;
        case 0x294c0cu: goto label_294c0c;
        case 0x294c10u: goto label_294c10;
        case 0x294c14u: goto label_294c14;
        case 0x294c18u: goto label_294c18;
        case 0x294c1cu: goto label_294c1c;
        case 0x294c20u: goto label_294c20;
        case 0x294c24u: goto label_294c24;
        case 0x294c28u: goto label_294c28;
        case 0x294c2cu: goto label_294c2c;
        case 0x294c30u: goto label_294c30;
        case 0x294c34u: goto label_294c34;
        case 0x294c38u: goto label_294c38;
        case 0x294c3cu: goto label_294c3c;
        case 0x294c40u: goto label_294c40;
        case 0x294c44u: goto label_294c44;
        case 0x294c48u: goto label_294c48;
        case 0x294c4cu: goto label_294c4c;
        case 0x294c50u: goto label_294c50;
        case 0x294c54u: goto label_294c54;
        case 0x294c58u: goto label_294c58;
        case 0x294c5cu: goto label_294c5c;
        case 0x294c60u: goto label_294c60;
        case 0x294c64u: goto label_294c64;
        case 0x294c68u: goto label_294c68;
        case 0x294c6cu: goto label_294c6c;
        case 0x294c70u: goto label_294c70;
        case 0x294c74u: goto label_294c74;
        case 0x294c78u: goto label_294c78;
        case 0x294c7cu: goto label_294c7c;
        case 0x294c80u: goto label_294c80;
        case 0x294c84u: goto label_294c84;
        case 0x294c88u: goto label_294c88;
        case 0x294c8cu: goto label_294c8c;
        case 0x294c90u: goto label_294c90;
        case 0x294c94u: goto label_294c94;
        case 0x294c98u: goto label_294c98;
        case 0x294c9cu: goto label_294c9c;
        case 0x294ca0u: goto label_294ca0;
        case 0x294ca4u: goto label_294ca4;
        case 0x294ca8u: goto label_294ca8;
        case 0x294cacu: goto label_294cac;
        case 0x294cb0u: goto label_294cb0;
        case 0x294cb4u: goto label_294cb4;
        case 0x294cb8u: goto label_294cb8;
        case 0x294cbcu: goto label_294cbc;
        case 0x294cc0u: goto label_294cc0;
        case 0x294cc4u: goto label_294cc4;
        case 0x294cc8u: goto label_294cc8;
        case 0x294cccu: goto label_294ccc;
        case 0x294cd0u: goto label_294cd0;
        case 0x294cd4u: goto label_294cd4;
        case 0x294cd8u: goto label_294cd8;
        case 0x294cdcu: goto label_294cdc;
        case 0x294ce0u: goto label_294ce0;
        case 0x294ce4u: goto label_294ce4;
        case 0x294ce8u: goto label_294ce8;
        case 0x294cecu: goto label_294cec;
        case 0x294cf0u: goto label_294cf0;
        case 0x294cf4u: goto label_294cf4;
        case 0x294cf8u: goto label_294cf8;
        case 0x294cfcu: goto label_294cfc;
        case 0x294d00u: goto label_294d00;
        case 0x294d04u: goto label_294d04;
        case 0x294d08u: goto label_294d08;
        case 0x294d0cu: goto label_294d0c;
        case 0x294d10u: goto label_294d10;
        case 0x294d14u: goto label_294d14;
        case 0x294d18u: goto label_294d18;
        case 0x294d1cu: goto label_294d1c;
        case 0x294d20u: goto label_294d20;
        case 0x294d24u: goto label_294d24;
        case 0x294d28u: goto label_294d28;
        case 0x294d2cu: goto label_294d2c;
        case 0x294d30u: goto label_294d30;
        case 0x294d34u: goto label_294d34;
        case 0x294d38u: goto label_294d38;
        case 0x294d3cu: goto label_294d3c;
        case 0x294d40u: goto label_294d40;
        case 0x294d44u: goto label_294d44;
        case 0x294d48u: goto label_294d48;
        case 0x294d4cu: goto label_294d4c;
        case 0x294d50u: goto label_294d50;
        case 0x294d54u: goto label_294d54;
        case 0x294d58u: goto label_294d58;
        case 0x294d5cu: goto label_294d5c;
        case 0x294d60u: goto label_294d60;
        case 0x294d64u: goto label_294d64;
        case 0x294d68u: goto label_294d68;
        case 0x294d6cu: goto label_294d6c;
        case 0x294d70u: goto label_294d70;
        case 0x294d74u: goto label_294d74;
        case 0x294d78u: goto label_294d78;
        case 0x294d7cu: goto label_294d7c;
        case 0x294d80u: goto label_294d80;
        case 0x294d84u: goto label_294d84;
        case 0x294d88u: goto label_294d88;
        case 0x294d8cu: goto label_294d8c;
        case 0x294d90u: goto label_294d90;
        case 0x294d94u: goto label_294d94;
        case 0x294d98u: goto label_294d98;
        case 0x294d9cu: goto label_294d9c;
        case 0x294da0u: goto label_294da0;
        case 0x294da4u: goto label_294da4;
        case 0x294da8u: goto label_294da8;
        case 0x294dacu: goto label_294dac;
        case 0x294db0u: goto label_294db0;
        case 0x294db4u: goto label_294db4;
        case 0x294db8u: goto label_294db8;
        case 0x294dbcu: goto label_294dbc;
        case 0x294dc0u: goto label_294dc0;
        case 0x294dc4u: goto label_294dc4;
        case 0x294dc8u: goto label_294dc8;
        case 0x294dccu: goto label_294dcc;
        case 0x294dd0u: goto label_294dd0;
        case 0x294dd4u: goto label_294dd4;
        case 0x294dd8u: goto label_294dd8;
        case 0x294ddcu: goto label_294ddc;
        case 0x294de0u: goto label_294de0;
        case 0x294de4u: goto label_294de4;
        case 0x294de8u: goto label_294de8;
        case 0x294decu: goto label_294dec;
        case 0x294df0u: goto label_294df0;
        case 0x294df4u: goto label_294df4;
        case 0x294df8u: goto label_294df8;
        case 0x294dfcu: goto label_294dfc;
        case 0x294e00u: goto label_294e00;
        case 0x294e04u: goto label_294e04;
        case 0x294e08u: goto label_294e08;
        case 0x294e0cu: goto label_294e0c;
        case 0x294e10u: goto label_294e10;
        case 0x294e14u: goto label_294e14;
        case 0x294e18u: goto label_294e18;
        case 0x294e1cu: goto label_294e1c;
        case 0x294e20u: goto label_294e20;
        case 0x294e24u: goto label_294e24;
        case 0x294e28u: goto label_294e28;
        case 0x294e2cu: goto label_294e2c;
        case 0x294e30u: goto label_294e30;
        case 0x294e34u: goto label_294e34;
        case 0x294e38u: goto label_294e38;
        case 0x294e3cu: goto label_294e3c;
        case 0x294e40u: goto label_294e40;
        case 0x294e44u: goto label_294e44;
        case 0x294e48u: goto label_294e48;
        case 0x294e4cu: goto label_294e4c;
        case 0x294e50u: goto label_294e50;
        case 0x294e54u: goto label_294e54;
        case 0x294e58u: goto label_294e58;
        case 0x294e5cu: goto label_294e5c;
        case 0x294e60u: goto label_294e60;
        case 0x294e64u: goto label_294e64;
        case 0x294e68u: goto label_294e68;
        case 0x294e6cu: goto label_294e6c;
        case 0x294e70u: goto label_294e70;
        case 0x294e74u: goto label_294e74;
        case 0x294e78u: goto label_294e78;
        case 0x294e7cu: goto label_294e7c;
        case 0x294e80u: goto label_294e80;
        case 0x294e84u: goto label_294e84;
        case 0x294e88u: goto label_294e88;
        case 0x294e8cu: goto label_294e8c;
        case 0x294e90u: goto label_294e90;
        case 0x294e94u: goto label_294e94;
        case 0x294e98u: goto label_294e98;
        case 0x294e9cu: goto label_294e9c;
        case 0x294ea0u: goto label_294ea0;
        case 0x294ea4u: goto label_294ea4;
        case 0x294ea8u: goto label_294ea8;
        case 0x294eacu: goto label_294eac;
        case 0x294eb0u: goto label_294eb0;
        case 0x294eb4u: goto label_294eb4;
        case 0x294eb8u: goto label_294eb8;
        case 0x294ebcu: goto label_294ebc;
        case 0x294ec0u: goto label_294ec0;
        case 0x294ec4u: goto label_294ec4;
        case 0x294ec8u: goto label_294ec8;
        case 0x294eccu: goto label_294ecc;
        case 0x294ed0u: goto label_294ed0;
        case 0x294ed4u: goto label_294ed4;
        case 0x294ed8u: goto label_294ed8;
        case 0x294edcu: goto label_294edc;
        case 0x294ee0u: goto label_294ee0;
        case 0x294ee4u: goto label_294ee4;
        case 0x294ee8u: goto label_294ee8;
        case 0x294eecu: goto label_294eec;
        case 0x294ef0u: goto label_294ef0;
        case 0x294ef4u: goto label_294ef4;
        case 0x294ef8u: goto label_294ef8;
        case 0x294efcu: goto label_294efc;
        case 0x294f00u: goto label_294f00;
        case 0x294f04u: goto label_294f04;
        case 0x294f08u: goto label_294f08;
        case 0x294f0cu: goto label_294f0c;
        case 0x294f10u: goto label_294f10;
        case 0x294f14u: goto label_294f14;
        case 0x294f18u: goto label_294f18;
        case 0x294f1cu: goto label_294f1c;
        case 0x294f20u: goto label_294f20;
        case 0x294f24u: goto label_294f24;
        case 0x294f28u: goto label_294f28;
        case 0x294f2cu: goto label_294f2c;
        case 0x294f30u: goto label_294f30;
        case 0x294f34u: goto label_294f34;
        case 0x294f38u: goto label_294f38;
        case 0x294f3cu: goto label_294f3c;
        case 0x294f40u: goto label_294f40;
        case 0x294f44u: goto label_294f44;
        case 0x294f48u: goto label_294f48;
        case 0x294f4cu: goto label_294f4c;
        case 0x294f50u: goto label_294f50;
        case 0x294f54u: goto label_294f54;
        case 0x294f58u: goto label_294f58;
        case 0x294f5cu: goto label_294f5c;
        case 0x294f60u: goto label_294f60;
        case 0x294f64u: goto label_294f64;
        case 0x294f68u: goto label_294f68;
        case 0x294f6cu: goto label_294f6c;
        case 0x294f70u: goto label_294f70;
        case 0x294f74u: goto label_294f74;
        case 0x294f78u: goto label_294f78;
        case 0x294f7cu: goto label_294f7c;
        case 0x294f80u: goto label_294f80;
        case 0x294f84u: goto label_294f84;
        case 0x294f88u: goto label_294f88;
        case 0x294f8cu: goto label_294f8c;
        case 0x294f90u: goto label_294f90;
        case 0x294f94u: goto label_294f94;
        case 0x294f98u: goto label_294f98;
        case 0x294f9cu: goto label_294f9c;
        case 0x294fa0u: goto label_294fa0;
        case 0x294fa4u: goto label_294fa4;
        case 0x294fa8u: goto label_294fa8;
        case 0x294facu: goto label_294fac;
        case 0x294fb0u: goto label_294fb0;
        case 0x294fb4u: goto label_294fb4;
        case 0x294fb8u: goto label_294fb8;
        case 0x294fbcu: goto label_294fbc;
        case 0x294fc0u: goto label_294fc0;
        case 0x294fc4u: goto label_294fc4;
        case 0x294fc8u: goto label_294fc8;
        case 0x294fccu: goto label_294fcc;
        case 0x294fd0u: goto label_294fd0;
        case 0x294fd4u: goto label_294fd4;
        case 0x294fd8u: goto label_294fd8;
        case 0x294fdcu: goto label_294fdc;
        case 0x294fe0u: goto label_294fe0;
        case 0x294fe4u: goto label_294fe4;
        case 0x294fe8u: goto label_294fe8;
        case 0x294fecu: goto label_294fec;
        case 0x294ff0u: goto label_294ff0;
        case 0x294ff4u: goto label_294ff4;
        case 0x294ff8u: goto label_294ff8;
        case 0x294ffcu: goto label_294ffc;
        case 0x295000u: goto label_295000;
        case 0x295004u: goto label_295004;
        case 0x295008u: goto label_295008;
        case 0x29500cu: goto label_29500c;
        case 0x295010u: goto label_295010;
        case 0x295014u: goto label_295014;
        case 0x295018u: goto label_295018;
        case 0x29501cu: goto label_29501c;
        case 0x295020u: goto label_295020;
        case 0x295024u: goto label_295024;
        case 0x295028u: goto label_295028;
        case 0x29502cu: goto label_29502c;
        case 0x295030u: goto label_295030;
        case 0x295034u: goto label_295034;
        case 0x295038u: goto label_295038;
        case 0x29503cu: goto label_29503c;
        case 0x295040u: goto label_295040;
        case 0x295044u: goto label_295044;
        case 0x295048u: goto label_295048;
        case 0x29504cu: goto label_29504c;
        case 0x295050u: goto label_295050;
        case 0x295054u: goto label_295054;
        case 0x295058u: goto label_295058;
        case 0x29505cu: goto label_29505c;
        case 0x295060u: goto label_295060;
        case 0x295064u: goto label_295064;
        case 0x295068u: goto label_295068;
        case 0x29506cu: goto label_29506c;
        case 0x295070u: goto label_295070;
        case 0x295074u: goto label_295074;
        case 0x295078u: goto label_295078;
        case 0x29507cu: goto label_29507c;
        case 0x295080u: goto label_295080;
        case 0x295084u: goto label_295084;
        case 0x295088u: goto label_295088;
        case 0x29508cu: goto label_29508c;
        case 0x295090u: goto label_295090;
        case 0x295094u: goto label_295094;
        case 0x295098u: goto label_295098;
        case 0x29509cu: goto label_29509c;
        case 0x2950a0u: goto label_2950a0;
        case 0x2950a4u: goto label_2950a4;
        case 0x2950a8u: goto label_2950a8;
        case 0x2950acu: goto label_2950ac;
        case 0x2950b0u: goto label_2950b0;
        case 0x2950b4u: goto label_2950b4;
        case 0x2950b8u: goto label_2950b8;
        case 0x2950bcu: goto label_2950bc;
        case 0x2950c0u: goto label_2950c0;
        case 0x2950c4u: goto label_2950c4;
        case 0x2950c8u: goto label_2950c8;
        case 0x2950ccu: goto label_2950cc;
        case 0x2950d0u: goto label_2950d0;
        case 0x2950d4u: goto label_2950d4;
        case 0x2950d8u: goto label_2950d8;
        case 0x2950dcu: goto label_2950dc;
        case 0x2950e0u: goto label_2950e0;
        case 0x2950e4u: goto label_2950e4;
        case 0x2950e8u: goto label_2950e8;
        case 0x2950ecu: goto label_2950ec;
        case 0x2950f0u: goto label_2950f0;
        case 0x2950f4u: goto label_2950f4;
        case 0x2950f8u: goto label_2950f8;
        case 0x2950fcu: goto label_2950fc;
        default: return;
    }

label_294930:
    // 0x294930: 0x14290  .word       0x00014290                   # mfhi        $t0 # 00010280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294930u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_294934:
    // 0x294934: 0x156  .word       0x00000156                   # dsrlv       $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294934u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_294938:
    // 0x294938: 0xaadd0  .word       0x000AADD0                   # mfhi        $s5 # 000A05C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294938u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_29493c:
    // 0x29493c: 0x0  nop
    ctx->pc = 0x29493cu;
    // NOP
label_294940:
    // 0x294940: 0x143e6  .word       0x000143E6                   # xor         $t0, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294940u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_294944:
    // 0x294944: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x294944u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_294948:
    // 0x294948: 0x39520  .word       0x00039520                   # add         $s2, $zero, $v1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294948u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_29494c:
    // 0x29494c: 0x0  nop
    ctx->pc = 0x29494cu;
    // NOP
label_294950:
    // 0x294950: 0x14459  .word       0x00014459                   # multu       $zero, $at # 00004440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294950u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_294954:
    // 0x294954: 0xf3  tltu        $zero, $zero, 3
    ctx->pc = 0x294954u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_294958:
    // 0x294958: 0x793e4  .word       0x000793E4                   # and         $s2, $zero, $a3 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294958u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) & GPR_U64(ctx, 7));
label_29495c:
    // 0x29495c: 0x0  nop
    ctx->pc = 0x29495cu;
    // NOP
label_294960:
    // 0x294960: 0x1454c  .word       0x0001454C                   # syscall     277 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294960u;
    ctx->pc = 0x294964u;
runtime->handleSyscall(rdram, ctx, 0x515u);
label_294964:
    // 0x294964: 0xdb  .word       0x000000DB                   # divu        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294964u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_294968:
    // 0x294968: 0x6d528  .word       0x0006D528                   # mfsa        $k0 # 00060500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x294968u;
    SET_GPR_U32(ctx, 26, ctx->sa);
label_29496c:
    // 0x29496c: 0x0  nop
    ctx->pc = 0x29496cu;
    // NOP
label_294970:
    // 0x294970: 0x14627  .word       0x00014627                   # nor         $t0, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294970u;
    SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_294974:
    // 0x294974: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294974u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294974 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294978:
    // 0x294978: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294978u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29497c:
    // 0x29497c: 0x0  nop
    ctx->pc = 0x29497cu;
    // NOP
label_294980:
    // 0x294980: 0x14628  .word       0x00014628                   # mfsa        $t0 # 00010600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x294980u;
    SET_GPR_U32(ctx, 8, ctx->sa);
label_294984:
    // 0x294984: 0xda  .word       0x000000DA                   # div         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294984u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_294988:
    // 0x294988: 0x6ccb0  tge         $zero, $a2, 818
    ctx->pc = 0x294988u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_29498c:
    // 0x29498c: 0x0  nop
    ctx->pc = 0x29498cu;
    // NOP
label_294990:
    // 0x294990: 0x14702  srl         $t0, $at, 28
    ctx->pc = 0x294990u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 1), 28));
label_294994:
    // 0x294994: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294994u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294994 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294998:
    // 0x294998: 0xf0  tge         $zero, $zero, 3
    ctx->pc = 0x294998u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29499c:
    // 0x29499c: 0x0  nop
    ctx->pc = 0x29499cu;
    // NOP
label_2949a0:
    // 0x2949a0: 0x14703  sra         $t0, $at, 28
    ctx->pc = 0x2949a0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 1), 28));
label_2949a4:
    // 0x2949a4: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x2949a4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2949a8:
    // 0x2949a8: 0x10460  .word       0x00010460                   # add         $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2949a8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2949ac:
    // 0x2949ac: 0x0  nop
    ctx->pc = 0x2949acu;
    // NOP
label_2949b0:
    // 0x2949b0: 0x14724  .word       0x00014724                   # and         $t0, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2949b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_2949b4:
    // 0x2949b4: 0x11  mthi        $zero
    ctx->pc = 0x2949b4u;
    ctx->hi = GPR_U64(ctx, 0);
label_2949b8:
    // 0x2949b8: 0x87d0  .word       0x000087D0                   # mfhi        $s0 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2949b8u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_2949bc:
    // 0x2949bc: 0x0  nop
    ctx->pc = 0x2949bcu;
    // NOP
label_2949c0:
    // 0x2949c0: 0x14735  .word       0x00014735                   # INVALID     $zero, $at, 0x4735 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2949c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2949C0 raw=0x00014735"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2949c4:
    // 0x2949c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2949c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2949C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2949c8:
    // 0x2949c8: 0x788  .word       0x00000788                   # jr          $zero # 00000780 <InstrIdType: CPU_SPECIAL>
label_2949cc:
    if (ctx->pc == 0x2949CCu) {
        ctx->pc = 0x2949D0u;
        goto label_2949d0;
    }
    ctx->pc = 0x2949C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2949C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2949D0u;
label_2949d0:
    // 0x2949d0: 0x14736  tne         $zero, $at, 284
    ctx->pc = 0x2949d0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2949d4:
    // 0x2949d4: 0x68  .word       0x00000068                   # mfsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2949d4u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2949d8:
    // 0x2949d8: 0x33fc0  sll         $a3, $v1, 31
    ctx->pc = 0x2949d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 31));
label_2949dc:
    // 0x2949dc: 0x0  nop
    ctx->pc = 0x2949dcu;
    // NOP
label_2949e0:
    // 0x2949e0: 0x1479e  .word       0x0001479E                   # ddiv        $t0, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2949e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2949E0 raw=0x0001479E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2949e4:
    // 0x2949e4: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x2949e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2949e8:
    // 0x2949e8: 0xb670  tge         $zero, $zero, 729
    ctx->pc = 0x2949e8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2949ec:
    // 0x2949ec: 0x0  nop
    ctx->pc = 0x2949ecu;
    // NOP
label_2949f0:
    // 0x2949f0: 0x147b5  .word       0x000147B5                   # INVALID     $zero, $at, 0x47B5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2949f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2949F0 raw=0x000147B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2949f4:
    // 0x2949f4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x2949f4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2949f8:
    // 0x2949f8: 0xd290  .word       0x0000D290                   # mfhi        $k0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2949f8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2949fc:
    // 0x2949fc: 0x0  nop
    ctx->pc = 0x2949fcu;
    // NOP
label_294a00:
    // 0x294a00: 0x147d0  .word       0x000147D0                   # mfhi        $t0 # 000107C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294a00u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_294a04:
    // 0x294a04: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x294a04u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_294a08:
    // 0x294a08: 0x12e1c  .word       0x00012E1C                   # dmult       $zero, $at # 00002E00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294a08u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x294A08 raw=0x00012E1C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294a0c:
    // 0x294a0c: 0x0  nop
    ctx->pc = 0x294a0cu;
    // NOP
label_294a10:
    // 0x294a10: 0x147f6  tne         $zero, $at, 287
    ctx->pc = 0x294a10u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_294a14:
    // 0x294a14: 0x25  move        $zero, $zero
    ctx->pc = 0x294a14u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_294a18:
    // 0x294a18: 0x12490  .word       0x00012490                   # mfhi        $a0 # 00010480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294a18u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_294a1c:
    // 0x294a1c: 0x0  nop
    ctx->pc = 0x294a1cu;
    // NOP
label_294a20:
    // 0x294a20: 0x1481b  divu        $t1, $zero, $at
    ctx->pc = 0x294a20u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_294a24:
    // 0x294a24: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x294a24u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_294a28:
    // 0x294a28: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x294a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_294a2c:
    // 0x294a2c: 0x0  nop
    ctx->pc = 0x294a2cu;
    // NOP
label_294a30:
    // 0x294a30: 0x1481f  ddivu       $t1, $zero, $at
    ctx->pc = 0x294a30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x294A30 raw=0x0001481F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294a34:
    // 0x294a34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294a34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294A34 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294a38:
    // 0x294a38: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x294a38u;
    
label_294a3c:
    // 0x294a3c: 0x0  nop
    ctx->pc = 0x294a3cu;
    // NOP
label_294a40:
    // 0x294a40: 0x14820  add         $t1, $zero, $at
    ctx->pc = 0x294a40u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_294a44:
    // 0x294a44: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x294a44u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_294a48:
    // 0x294a48: 0x1c20  .word       0x00001C20                   # add         $v1, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294a48u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_294a4c:
    // 0x294a4c: 0x0  nop
    ctx->pc = 0x294a4cu;
    // NOP
label_294a50:
    // 0x294a50: 0x14824  and         $t1, $zero, $at
    ctx->pc = 0x294a50u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_294a54:
    // 0x294a54: 0x8  jr          $zero
label_294a58:
    if (ctx->pc == 0x294A58u) {
        ctx->pc = 0x294A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294A54u;
        // 0x294a58: 0x3bd8  .word       0x00003BD8                   # mult        $a3, $zero, $zero # 000003C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x294A5Cu;
        goto label_294a5c;
    }
    ctx->pc = 0x294A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x294A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294A54u;
        // 0x294a58: 0x3bd8  .word       0x00003BD8                   # mult        $a3, $zero, $zero # 000003C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294A54u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x294A5Cu;
label_294a5c:
    // 0x294a5c: 0x0  nop
    ctx->pc = 0x294a5cu;
    // NOP
label_294a60:
    // 0x294a60: 0x1482c  dadd        $t1, $zero, $at
    ctx->pc = 0x294a60u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_294a64:
    // 0x294a64: 0x10  mfhi        $zero
    ctx->pc = 0x294a64u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_294a68:
    // 0x294a68: 0x79f0  tge         $zero, $zero, 487
    ctx->pc = 0x294a68u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_294a6c:
    // 0x294a6c: 0x0  nop
    ctx->pc = 0x294a6cu;
    // NOP
label_294a70:
    // 0x294a70: 0x1483c  dsll32      $t1, $at, 0
    ctx->pc = 0x294a70u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 1) << (32 + 0));
label_294a74:
    // 0x294a74: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x294a74u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_294a78:
    // 0x294a78: 0x12c0  sll         $v0, $zero, 11
    ctx->pc = 0x294a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_294a7c:
    // 0x294a7c: 0x0  nop
    ctx->pc = 0x294a7cu;
    // NOP
label_294a80:
    // 0x294a80: 0x1483f  dsra32      $t1, $at, 0
    ctx->pc = 0x294a80u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 1) >> (32 + 0));
label_294a84:
    // 0x294a84: 0x180  sll         $zero, $zero, 6
    ctx->pc = 0x294a84u;
    
label_294a88:
    // 0x294a88: 0xbfec0  sll         $ra, $t3, 27
    ctx->pc = 0x294a88u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 11), 27));
label_294a8c:
    // 0x294a8c: 0x0  nop
    ctx->pc = 0x294a8cu;
    // NOP
label_294a90:
    // 0x294a90: 0x149bf  dsra32      $t1, $at, 6
    ctx->pc = 0x294a90u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 1) >> (32 + 6));
label_294a94:
    // 0x294a94: 0xb8  dsll        $zero, $zero, 2
    ctx->pc = 0x294a94u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 2);
label_294a98:
    // 0x294a98: 0x5bfc0  sll         $s7, $a1, 31
    ctx->pc = 0x294a98u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 5), 31));
label_294a9c:
    // 0x294a9c: 0x0  nop
    ctx->pc = 0x294a9cu;
    // NOP
label_294aa0:
    // 0x294aa0: 0x14a77  .word       0x00014A77                   # INVALID     $zero, $at, 0x4A77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294aa0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x294AA0 raw=0x00014A77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294aa4:
    // 0x294aa4: 0x172  tlt         $zero, $zero, 5
    ctx->pc = 0x294aa4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_294aa8:
    // 0x294aa8: 0xb8f74  teq         $zero, $t3, 573
    ctx->pc = 0x294aa8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_294aac:
    // 0x294aac: 0x0  nop
    ctx->pc = 0x294aacu;
    // NOP
label_294ab0:
    // 0x294ab0: 0x14be9  .word       0x00014BE9                   # mtsa        $zero # 00014BC0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x294ab0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_294ab4:
    // 0x294ab4: 0x170  tge         $zero, $zero, 5
    ctx->pc = 0x294ab4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_294ab8:
    // 0x294ab8: 0xb7fa4  .word       0x000B7FA4                   # and         $t7, $zero, $t3 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ab8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) & GPR_U64(ctx, 11));
label_294abc:
    // 0x294abc: 0x0  nop
    ctx->pc = 0x294abcu;
    // NOP
label_294ac0:
    // 0x294ac0: 0x14d59  .word       0x00014D59                   # multu       $zero, $at # 00004D40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ac0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_294ac4:
    // 0x294ac4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ac4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294AC4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294ac8:
    // 0x294ac8: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ac8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_294acc:
    // 0x294acc: 0x0  nop
    ctx->pc = 0x294accu;
    // NOP
label_294ad0:
    // 0x294ad0: 0x14d5a  .word       0x00014D5A                   # div         $t1, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ad0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_294ad4:
    // 0x294ad4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ad4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294AD4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294ad8:
    // 0x294ad8: 0x4c  syscall     1
    ctx->pc = 0x294ad8u;
    ctx->pc = 0x294ADCu;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_294adc:
    // 0x294adc: 0x0  nop
    ctx->pc = 0x294adcu;
    // NOP
label_294ae0:
    // 0x294ae0: 0x14d5b  .word       0x00014D5B                   # divu        $t1, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ae0u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_294ae4:
    // 0x294ae4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ae4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294AE4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294ae8:
    // 0x294ae8: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x294ae8u;
    
label_294aec:
    // 0x294aec: 0x0  nop
    ctx->pc = 0x294aecu;
    // NOP
label_294af0:
    // 0x294af0: 0x14d5c  .word       0x00014D5C                   # dmult       $zero, $at # 00004D40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294af0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x294AF0 raw=0x00014D5C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294af4:
    // 0x294af4: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x294af4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_294af8:
    // 0x294af8: 0x10460  .word       0x00010460                   # add         $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294af8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_294afc:
    // 0x294afc: 0x0  nop
    ctx->pc = 0x294afcu;
    // NOP
label_294b00:
    // 0x294b00: 0x14d7d  .word       0x00014D7D                   # INVALID     $zero, $at, 0x4D7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294b00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x294B00 raw=0x00014D7D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294b04:
    // 0x294b04: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x294b04u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_294b08:
    // 0x294b08: 0x99b0  tge         $zero, $zero, 614
    ctx->pc = 0x294b08u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_294b0c:
    // 0x294b0c: 0x0  nop
    ctx->pc = 0x294b0cu;
    // NOP
label_294b10:
    // 0x294b10: 0x14d91  .word       0x00014D91                   # mthi        $zero # 00014D80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294b10u;
    ctx->hi = GPR_U64(ctx, 0);
label_294b14:
    // 0x294b14: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x294b14u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_294b18:
    // 0x294b18: 0x848  .word       0x00000848                   # jr          $zero # 00000840 <InstrIdType: CPU_SPECIAL>
label_294b1c:
    if (ctx->pc == 0x294B1Cu) {
        ctx->pc = 0x294B20u;
        goto label_294b20;
    }
    ctx->pc = 0x294B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294B18u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x294B20u;
label_294b20:
    // 0x294b20: 0x14d93  .word       0x00014D93                   # mtlo        $zero # 00014D80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294b20u;
    ctx->lo = GPR_U64(ctx, 0);
label_294b24:
    // 0x294b24: 0x81  .word       0x00000081                   # INVALID     $zero, $zero, 0x81 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294b24u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294B24 raw=0x00000081"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294b28:
    // 0x294b28: 0x403b0  tge         $zero, $a0, 14
    ctx->pc = 0x294b28u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_294b2c:
    // 0x294b2c: 0x0  nop
    ctx->pc = 0x294b2cu;
    // NOP
label_294b30:
    // 0x294b30: 0x14e14  .word       0x00014E14                   # dsllv       $t1, $at, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294b30u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_294b34:
    // 0x294b34: 0x5d  .word       0x0000005D                   # dmultu      $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294b34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x294B34 raw=0x0000005D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294b38:
    // 0x294b38: 0x2e2b0  tge         $zero, $v0, 906
    ctx->pc = 0x294b38u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_294b3c:
    // 0x294b3c: 0x0  nop
    ctx->pc = 0x294b3cu;
    // NOP
label_294b40:
    // 0x294b40: 0x14e71  tgeu        $zero, $at, 313
    ctx->pc = 0x294b40u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_294b44:
    // 0x294b44: 0x47  .word       0x00000047                   # srav        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294b44u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_294b48:
    // 0x294b48: 0x23510  .word       0x00023510                   # mfhi        $a2 # 00020500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294b48u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_294b4c:
    // 0x294b4c: 0x0  nop
    ctx->pc = 0x294b4cu;
    // NOP
label_294b50:
    // 0x294b50: 0x14eb8  dsll        $t1, $at, 26
    ctx->pc = 0x294b50u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 1) << 26);
label_294b54:
    // 0x294b54: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x294b54u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x294B54 raw=0x0000001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294b58:
    // 0x294b58: 0xf4d0  .word       0x0000F4D0                   # mfhi        $fp # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294b58u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_294b5c:
    // 0x294b5c: 0x0  nop
    ctx->pc = 0x294b5cu;
    // NOP
label_294b60:
    // 0x294b60: 0x14ed7  .word       0x00014ED7                   # dsrav       $t1, $at, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294b60u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_294b64:
    // 0x294b64: 0x29  mtsa        $zero
    ctx->pc = 0x294b64u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_294b68:
    // 0x294b68: 0x14610  .word       0x00014610                   # mfhi        $t0 # 00010600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294b68u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_294b6c:
    // 0x294b6c: 0x0  nop
    ctx->pc = 0x294b6cu;
    // NOP
label_294b70:
    // 0x294b70: 0x14f00  sll         $t1, $at, 28
    ctx->pc = 0x294b70u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 1), 28));
label_294b74:
    // 0x294b74: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x294b74u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_294b78:
    // 0x294b78: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x294b78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_294b7c:
    // 0x294b7c: 0x0  nop
    ctx->pc = 0x294b7cu;
    // NOP
label_294b80:
    // 0x294b80: 0x14f04  .word       0x00014F04                   # sllv        $t1, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294b80u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_294b84:
    // 0x294b84: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294b84u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294B84 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294b88:
    // 0x294b88: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x294b88u;
    
label_294b8c:
    // 0x294b8c: 0x0  nop
    ctx->pc = 0x294b8cu;
    // NOP
label_294b90:
    // 0x294b90: 0x14f05  .word       0x00014F05                   # INVALID     $zero, $at, 0x4F05 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294b90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x294B90 raw=0x00014F05"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294b94:
    // 0x294b94: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x294b94u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_294b98:
    // 0x294b98: 0x2ad0  .word       0x00002AD0                   # mfhi        $a1 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294b98u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_294b9c:
    // 0x294b9c: 0x0  nop
    ctx->pc = 0x294b9cu;
    // NOP
label_294ba0:
    // 0x294ba0: 0x14f0b  .word       0x00014F0B                   # movn        $t1, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ba0u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_294ba4:
    // 0x294ba4: 0x18a  .word       0x0000018A                   # movz        $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ba4u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_294ba8:
    // 0x294ba8: 0xc4980  sll         $t1, $t4, 6
    ctx->pc = 0x294ba8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 12), 6));
label_294bac:
    // 0x294bac: 0x0  nop
    ctx->pc = 0x294bacu;
    // NOP
label_294bb0:
    // 0x294bb0: 0x15095  .word       0x00015095                   # INVALID     $zero, $at, 0x5095 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294bb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x294BB0 raw=0x00015095"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294bb4:
    // 0x294bb4: 0x327  .word       0x00000327                   # not         $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294bb4u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_294bb8:
    // 0x294bb8: 0x193490  .word       0x00193490                   # mfhi        $a2 # 00190480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294bb8u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_294bbc:
    // 0x294bbc: 0x0  nop
    ctx->pc = 0x294bbcu;
    // NOP
label_294bc0:
    // 0x294bc0: 0x153bc  dsll32      $t2, $at, 14
    ctx->pc = 0x294bc0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 1) << (32 + 14));
label_294bc4:
    // 0x294bc4: 0x244  .word       0x00000244                   # sllv        $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294bc4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_294bc8:
    // 0x294bc8: 0x121d2c  .word       0x00121D2C                   # dadd        $v1, $zero, $s2 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294bc8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_294bcc:
    // 0x294bcc: 0x0  nop
    ctx->pc = 0x294bccu;
    // NOP
label_294bd0:
    // 0x294bd0: 0x15600  sll         $t2, $at, 24
    ctx->pc = 0x294bd0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 1), 24));
label_294bd4:
    // 0x294bd4: 0x199  .word       0x00000199                   # multu       $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294bd4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_294bd8:
    // 0x294bd8: 0xcc394  .word       0x000CC394                   # dsllv       $t8, $t4, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294bd8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 12) << (GPR_U32(ctx, 0) & 0x3F));
label_294bdc:
    // 0x294bdc: 0x0  nop
    ctx->pc = 0x294bdcu;
    // NOP
label_294be0:
    // 0x294be0: 0x15799  .word       0x00015799                   # multu       $zero, $at # 00005780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294be0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_294be4:
    // 0x294be4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294be4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294BE4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294be8:
    // 0x294be8: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294be8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_294bec:
    // 0x294bec: 0x0  nop
    ctx->pc = 0x294becu;
    // NOP
label_294bf0:
    // 0x294bf0: 0x1579a  .word       0x0001579A                   # div         $t2, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294bf0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_294bf4:
    // 0x294bf4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294bf4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294BF4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294bf8:
    // 0x294bf8: 0x4c  syscall     1
    ctx->pc = 0x294bf8u;
    ctx->pc = 0x294BFCu;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_294bfc:
    // 0x294bfc: 0x0  nop
    ctx->pc = 0x294bfcu;
    // NOP
label_294c00:
    // 0x294c00: 0x1579b  .word       0x0001579B                   # divu        $t2, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294c00u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_294c04:
    // 0x294c04: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294c04u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294C04 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294c08:
    // 0x294c08: 0x2d0  .word       0x000002D0                   # mfhi        $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294c08u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_294c0c:
    // 0x294c0c: 0x0  nop
    ctx->pc = 0x294c0cu;
    // NOP
label_294c10:
    // 0x294c10: 0x1579c  .word       0x0001579C                   # dmult       $zero, $at # 00005780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294c10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x294C10 raw=0x0001579C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294c14:
    // 0x294c14: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x294c14u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_294c18:
    // 0x294c18: 0x10460  .word       0x00010460                   # add         $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294c18u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_294c1c:
    // 0x294c1c: 0x0  nop
    ctx->pc = 0x294c1cu;
    // NOP
label_294c20:
    // 0x294c20: 0x157bd  .word       0x000157BD                   # INVALID     $zero, $at, 0x57BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294c20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x294C20 raw=0x000157BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294c24:
    // 0x294c24: 0x42  srl         $zero, $zero, 1
    ctx->pc = 0x294c24u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 1));
label_294c28:
    // 0x294c28: 0x20f10  .word       0x00020F10                   # mfhi        $at # 00020700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294c28u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_294c2c:
    // 0x294c2c: 0x0  nop
    ctx->pc = 0x294c2cu;
    // NOP
label_294c30:
    // 0x294c30: 0x157ff  dsra32      $t2, $at, 31
    ctx->pc = 0x294c30u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 1) >> (32 + 31));
label_294c34:
    // 0x294c34: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x294c34u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_294c38:
    // 0x294c38: 0x1250  .word       0x00001250                   # mfhi        $v0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294c38u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_294c3c:
    // 0x294c3c: 0x0  nop
    ctx->pc = 0x294c3cu;
    // NOP
label_294c40:
    // 0x294c40: 0x15802  srl         $t3, $at, 0
    ctx->pc = 0x294c40u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 1), 0));
label_294c44:
    // 0x294c44: 0x56  .word       0x00000056                   # dsrlv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294c44u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_294c48:
    // 0x294c48: 0x2abf0  tge         $zero, $v0, 687
    ctx->pc = 0x294c48u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_294c4c:
    // 0x294c4c: 0x0  nop
    ctx->pc = 0x294c4cu;
    // NOP
label_294c50:
    // 0x294c50: 0x15858  .word       0x00015858                   # mult        $t3, $zero, $at # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x294c50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_294c54:
    // 0x294c54: 0x169  .word       0x00000169                   # mtsa        $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x294c54u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_294c58:
    // 0x294c58: 0xb4124  .word       0x000B4124                   # and         $t0, $zero, $t3 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294c58u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) & GPR_U64(ctx, 11));
label_294c5c:
    // 0x294c5c: 0x0  nop
    ctx->pc = 0x294c5cu;
    // NOP
label_294c60:
    // 0x294c60: 0x159c1  .word       0x000159C1                   # INVALID     $zero, $at, 0x59C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294c60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294C60 raw=0x000159C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294c64:
    // 0x294c64: 0x107  .word       0x00000107                   # srav        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294c64u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_294c68:
    // 0x294c68: 0x832d0  .word       0x000832D0                   # mfhi        $a2 # 000802C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294c68u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_294c6c:
    // 0x294c6c: 0x0  nop
    ctx->pc = 0x294c6cu;
    // NOP
label_294c70:
    // 0x294c70: 0x15ac8  .word       0x00015AC8                   # jr          $zero # 00015AC0 <InstrIdType: CPU_SPECIAL>
label_294c74:
    if (ctx->pc == 0x294C74u) {
        ctx->pc = 0x294C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C70u;
        // 0x294c74: 0x29  mtsa        $zero (Delay Slot)
        ctx->sa = GPR_U32(ctx, 0) & 0x7F;
        ctx->in_delay_slot = false;
        ctx->pc = 0x294C78u;
        goto label_294c78;
    }
    ctx->pc = 0x294C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x294C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C70u;
        // 0x294c74: 0x29  mtsa        $zero (Delay Slot)
        ctx->sa = GPR_U32(ctx, 0) & 0x7F;
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294C70u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x294C78u;
label_294c78:
    // 0x294c78: 0x141c0  sll         $t0, $at, 7
    ctx->pc = 0x294c78u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 1), 7));
label_294c7c:
    // 0x294c7c: 0x0  nop
    ctx->pc = 0x294c7cu;
    // NOP
label_294c80:
    // 0x294c80: 0x15af1  tgeu        $zero, $at, 363
    ctx->pc = 0x294c80u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_294c84:
    // 0x294c84: 0x7e  dsrl32      $zero, $zero, 1
    ctx->pc = 0x294c84u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 1));
label_294c88:
    // 0x294c88: 0x3eac0  sll         $sp, $v1, 11
    ctx->pc = 0x294c88u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
label_294c8c:
    // 0x294c8c: 0x0  nop
    ctx->pc = 0x294c8cu;
    // NOP
label_294c90:
    // 0x294c90: 0x15b6f  .word       0x00015B6F                   # dsubu       $t3, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294c90u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_294c94:
    // 0x294c94: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x294c94u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_294c98:
    // 0x294c98: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x294c98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_294c9c:
    // 0x294c9c: 0x0  nop
    ctx->pc = 0x294c9cu;
    // NOP
label_294ca0:
    // 0x294ca0: 0x15b73  tltu        $zero, $at, 365
    ctx->pc = 0x294ca0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_294ca4:
    // 0x294ca4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ca4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294CA4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294ca8:
    // 0x294ca8: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x294ca8u;
    
label_294cac:
    // 0x294cac: 0x0  nop
    ctx->pc = 0x294cacu;
    // NOP
label_294cb0:
    // 0x294cb0: 0x15b74  teq         $zero, $at, 365
    ctx->pc = 0x294cb0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_294cb4:
    // 0x294cb4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294cb4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294CB4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294cb8:
    // 0x294cb8: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x294cb8u;
    
label_294cbc:
    // 0x294cbc: 0x0  nop
    ctx->pc = 0x294cbcu;
    // NOP
label_294cc0:
    // 0x294cc0: 0x15b75  .word       0x00015B75                   # INVALID     $zero, $at, 0x5B75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294cc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x294CC0 raw=0x00015B75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294cc4:
    // 0x294cc4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x294cc4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_294cc8:
    // 0x294cc8: 0x1950  .word       0x00001950                   # mfhi        $v1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294cc8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_294ccc:
    // 0x294ccc: 0x0  nop
    ctx->pc = 0x294cccu;
    // NOP
label_294cd0:
    // 0x294cd0: 0x15b79  .word       0x00015B79                   # INVALID     $zero, $at, 0x5B79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294cd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x294CD0 raw=0x00015B79"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294cd4:
    // 0x294cd4: 0x190  .word       0x00000190                   # mfhi        $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294cd4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_294cd8:
    // 0x294cd8: 0xc7ae0  .word       0x000C7AE0                   # add         $t7, $zero, $t4 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294cd8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_294cdc:
    // 0x294cdc: 0x0  nop
    ctx->pc = 0x294cdcu;
    // NOP
label_294ce0:
    // 0x294ce0: 0x15d09  .word       0x00015D09                   # jalr        $t3, $zero # 00010500 <InstrIdType: CPU_SPECIAL>
label_294ce4:
    if (ctx->pc == 0x294CE4u) {
        ctx->pc = 0x294CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294CE0u;
        // 0x294ce4: 0xee  .word       0x000000EE                   # dsub        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x294CE8u;
        goto label_294ce8;
    }
    ctx->pc = 0x294CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 11, 0x294CE8u);
        ctx->pc = 0x294CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294CE0u;
        // 0x294ce4: 0xee  .word       0x000000EE                   # dsub        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294CE0u, 0x294CE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x294CE8u;
label_294ce8:
    // 0x294ce8: 0x76b60  .word       0x00076B60                   # add         $t5, $zero, $a3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ce8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_294cec:
    // 0x294cec: 0x0  nop
    ctx->pc = 0x294cecu;
    // NOP
label_294cf0:
    // 0x294cf0: 0x15df7  .word       0x00015DF7                   # INVALID     $zero, $at, 0x5DF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294cf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x294CF0 raw=0x00015DF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294cf4:
    // 0x294cf4: 0x28d  break       0, 10
    ctx->pc = 0x294cf4u;
    runtime->handleBreak(rdram, ctx);
label_294cf8:
    // 0x294cf8: 0x14603c  dsll32      $t4, $s4, 0
    ctx->pc = 0x294cf8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 20) << (32 + 0));
label_294cfc:
    // 0x294cfc: 0x0  nop
    ctx->pc = 0x294cfcu;
    // NOP
label_294d00:
    // 0x294d00: 0x16084  .word       0x00016084                   # sllv        $t4, $at, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294d00u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_294d04:
    // 0x294d04: 0x3bc  dsll32      $zero, $zero, 14
    ctx->pc = 0x294d04u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 14));
label_294d08:
    // 0x294d08: 0x1dddf8  dsll        $k1, $sp, 23
    ctx->pc = 0x294d08u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 29) << 23);
label_294d0c:
    // 0x294d0c: 0x0  nop
    ctx->pc = 0x294d0cu;
    // NOP
label_294d10:
    // 0x294d10: 0x16440  sll         $t4, $at, 17
    ctx->pc = 0x294d10u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_294d14:
    // 0x294d14: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294d14u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294D14 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294d18:
    // 0x294d18: 0x7c0  sll         $zero, $zero, 31
    ctx->pc = 0x294d18u;
    
label_294d1c:
    // 0x294d1c: 0x0  nop
    ctx->pc = 0x294d1cu;
    // NOP
label_294d20:
    // 0x294d20: 0x16441  .word       0x00016441                   # INVALID     $zero, $at, 0x6441 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294d20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294D20 raw=0x00016441"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294d24:
    // 0x294d24: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294d24u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294D24 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294d28:
    // 0x294d28: 0x90  .word       0x00000090                   # mfhi        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294d28u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_294d2c:
    // 0x294d2c: 0x0  nop
    ctx->pc = 0x294d2cu;
    // NOP
label_294d30:
    // 0x294d30: 0x16442  srl         $t4, $at, 17
    ctx->pc = 0x294d30u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 1), 17));
label_294d34:
    // 0x294d34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294d34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294D34 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294d38:
    // 0x294d38: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x294d38u;
    
label_294d3c:
    // 0x294d3c: 0x0  nop
    ctx->pc = 0x294d3cu;
    // NOP
label_294d40:
    // 0x294d40: 0x16443  sra         $t4, $at, 17
    ctx->pc = 0x294d40u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 1), 17));
label_294d44:
    // 0x294d44: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x294d44u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_294d48:
    // 0x294d48: 0x10460  .word       0x00010460                   # add         $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294d48u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_294d4c:
    // 0x294d4c: 0x0  nop
    ctx->pc = 0x294d4cu;
    // NOP
label_294d50:
    // 0x294d50: 0x16464  .word       0x00016464                   # and         $t4, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294d50u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_294d54:
    // 0x294d54: 0x27  not         $zero, $zero
    ctx->pc = 0x294d54u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_294d58:
    // 0x294d58: 0x137e0  .word       0x000137E0                   # add         $a2, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294d58u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_294d5c:
    // 0x294d5c: 0x0  nop
    ctx->pc = 0x294d5cu;
    // NOP
label_294d60:
    // 0x294d60: 0x1648b  .word       0x0001648B                   # movn        $t4, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294d60u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_294d64:
    // 0x294d64: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x294d64u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_294d68:
    // 0x294d68: 0x1190  .word       0x00001190                   # mfhi        $v0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294d68u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_294d6c:
    // 0x294d6c: 0x0  nop
    ctx->pc = 0x294d6cu;
    // NOP
label_294d70:
    // 0x294d70: 0x1648e  .word       0x0001648E                   # INVALID     $zero, $at, 0x648E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294d70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x294D70 raw=0x0001648E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294d74:
    // 0x294d74: 0x13b  dsra        $zero, $zero, 4
    ctx->pc = 0x294d74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 4);
label_294d78:
    // 0x294d78: 0x9d1d0  .word       0x0009D1D0                   # mfhi        $k0 # 000901C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294d78u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_294d7c:
    // 0x294d7c: 0x0  nop
    ctx->pc = 0x294d7cu;
    // NOP
label_294d80:
    // 0x294d80: 0x165c9  .word       0x000165C9                   # jalr        $t4, $zero # 000105C0 <InstrIdType: CPU_SPECIAL>
label_294d84:
    if (ctx->pc == 0x294D84u) {
        ctx->pc = 0x294D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294D80u;
        // 0x294d84: 0x6a  .word       0x0000006A                   # slt         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x294D88u;
        goto label_294d88;
    }
    ctx->pc = 0x294D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 12, 0x294D88u);
        ctx->pc = 0x294D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294D80u;
        // 0x294d84: 0x6a  .word       0x0000006A                   # slt         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294D80u, 0x294D88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x294D88u;
label_294d88:
    // 0x294d88: 0x34d80  sll         $t1, $v1, 22
    ctx->pc = 0x294d88u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 22));
label_294d8c:
    // 0x294d8c: 0x0  nop
    ctx->pc = 0x294d8cu;
    // NOP
label_294d90:
    // 0x294d90: 0x16633  tltu        $zero, $at, 408
    ctx->pc = 0x294d90u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_294d94:
    // 0x294d94: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x294d94u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_294d98:
    // 0x294d98: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x294d98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_294d9c:
    // 0x294d9c: 0x0  nop
    ctx->pc = 0x294d9cu;
    // NOP
label_294da0:
    // 0x294da0: 0x16637  .word       0x00016637                   # INVALID     $zero, $at, 0x6637 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294da0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x294DA0 raw=0x00016637"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294da4:
    // 0x294da4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294da4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294DA4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294da8:
    // 0x294da8: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x294da8u;
    
label_294dac:
    // 0x294dac: 0x0  nop
    ctx->pc = 0x294dacu;
    // NOP
label_294db0:
    // 0x294db0: 0x16638  dsll        $t4, $at, 24
    ctx->pc = 0x294db0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 1) << 24);
label_294db4:
    // 0x294db4: 0xd9  .word       0x000000D9                   # multu       $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294db4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_294db8:
    // 0x294db8: 0x6c4c8  .word       0x0006C4C8                   # jr          $zero # 0006C4C0 <InstrIdType: CPU_SPECIAL>
label_294dbc:
    if (ctx->pc == 0x294DBCu) {
        ctx->pc = 0x294DC0u;
        goto label_294dc0;
    }
    ctx->pc = 0x294DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294DB8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x294DC0u;
label_294dc0:
    // 0x294dc0: 0x16711  .word       0x00016711                   # mthi        $zero # 00016700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294dc0u;
    ctx->hi = GPR_U64(ctx, 0);
label_294dc4:
    // 0x294dc4: 0xa1  .word       0x000000A1                   # addu        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294dc4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_294dc8:
    // 0x294dc8: 0x500b0  tge         $zero, $a1, 2
    ctx->pc = 0x294dc8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
label_294dcc:
    // 0x294dcc: 0x0  nop
    ctx->pc = 0x294dccu;
    // NOP
label_294dd0:
    // 0x294dd0: 0x167b2  tlt         $zero, $at, 414
    ctx->pc = 0x294dd0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_294dd4:
    // 0x294dd4: 0x58  .word       0x00000058                   # mult        $zero, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x294dd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_294dd8:
    // 0x294dd8: 0x2bbd0  .word       0x0002BBD0                   # mfhi        $s7 # 000203C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294dd8u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_294ddc:
    // 0x294ddc: 0x0  nop
    ctx->pc = 0x294ddcu;
    // NOP
label_294de0:
    // 0x294de0: 0x1680a  movz        $t5, $zero, $at
    ctx->pc = 0x294de0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
label_294de4:
    // 0x294de4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x294de4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_294de8:
    // 0x294de8: 0xa50  .word       0x00000A50                   # mfhi        $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294de8u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_294dec:
    // 0x294dec: 0x0  nop
    ctx->pc = 0x294decu;
    // NOP
label_294df0:
    // 0x294df0: 0x1680c  .word       0x0001680C                   # syscall     416 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294df0u;
    ctx->pc = 0x294DF4u;
runtime->handleSyscall(rdram, ctx, 0x5A0u);
label_294df4:
    // 0x294df4: 0x10e  .word       0x0000010E                   # INVALID     $zero, $zero, 0x10E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294df4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x294DF4 raw=0x0000010E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294df8:
    // 0x294df8: 0x86820  add         $t5, $zero, $t0
    ctx->pc = 0x294df8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 8);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_294dfc:
    // 0x294dfc: 0x0  nop
    ctx->pc = 0x294dfcu;
    // NOP
label_294e00:
    // 0x294e00: 0x1691a  .word       0x0001691A                   # div         $t5, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e00u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_294e04:
    // 0x294e04: 0x39  .word       0x00000039                   # INVALID     $zero, $zero, 0x39 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e04u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x294E04 raw=0x00000039"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294e08:
    // 0x294e08: 0x1c730  tge         $zero, $at, 796
    ctx->pc = 0x294e08u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_294e0c:
    // 0x294e0c: 0x0  nop
    ctx->pc = 0x294e0cu;
    // NOP
label_294e10:
    // 0x294e10: 0x16953  .word       0x00016953                   # mtlo        $zero # 00016940 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e10u;
    ctx->lo = GPR_U64(ctx, 0);
label_294e14:
    // 0x294e14: 0x91  .word       0x00000091                   # mthi        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e14u;
    ctx->hi = GPR_U64(ctx, 0);
label_294e18:
    // 0x294e18: 0x48044  .word       0x00048044                   # sllv        $s0, $a0, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e18u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 0) & 0x1F));
label_294e1c:
    // 0x294e1c: 0x0  nop
    ctx->pc = 0x294e1cu;
    // NOP
label_294e20:
    // 0x294e20: 0x169e4  .word       0x000169E4                   # and         $t5, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e20u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_294e24:
    // 0x294e24: 0x91  .word       0x00000091                   # mthi        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e24u;
    ctx->hi = GPR_U64(ctx, 0);
label_294e28:
    // 0x294e28: 0x48154  .word       0x00048154                   # dsllv       $s0, $a0, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e28u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) << (GPR_U32(ctx, 0) & 0x3F));
label_294e2c:
    // 0x294e2c: 0x0  nop
    ctx->pc = 0x294e2cu;
    // NOP
label_294e30:
    // 0x294e30: 0x16a75  .word       0x00016A75                   # INVALID     $zero, $at, 0x6A75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x294E30 raw=0x00016A75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294e34:
    // 0x294e34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294E34 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294e38:
    // 0x294e38: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e38u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_294e3c:
    // 0x294e3c: 0x0  nop
    ctx->pc = 0x294e3cu;
    // NOP
label_294e40:
    // 0x294e40: 0x16a76  tne         $zero, $at, 425
    ctx->pc = 0x294e40u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_294e44:
    // 0x294e44: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e44u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294E44 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294e48:
    // 0x294e48: 0x4c  syscall     1
    ctx->pc = 0x294e48u;
    ctx->pc = 0x294E4Cu;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_294e4c:
    // 0x294e4c: 0x0  nop
    ctx->pc = 0x294e4cu;
    // NOP
label_294e50:
    // 0x294e50: 0x16a77  .word       0x00016A77                   # INVALID     $zero, $at, 0x6A77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x294E50 raw=0x00016A77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294e54:
    // 0x294e54: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e54u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294E54 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294e58:
    // 0x294e58: 0xf0  tge         $zero, $zero, 3
    ctx->pc = 0x294e58u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_294e5c:
    // 0x294e5c: 0x0  nop
    ctx->pc = 0x294e5cu;
    // NOP
label_294e60:
    // 0x294e60: 0x16a78  dsll        $t5, $at, 9
    ctx->pc = 0x294e60u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 1) << 9);
label_294e64:
    // 0x294e64: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x294e64u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_294e68:
    // 0x294e68: 0x10460  .word       0x00010460                   # add         $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e68u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_294e6c:
    // 0x294e6c: 0x0  nop
    ctx->pc = 0x294e6cu;
    // NOP
label_294e70:
    // 0x294e70: 0x16a99  .word       0x00016A99                   # multu       $zero, $at # 00006A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e70u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_294e74:
    // 0x294e74: 0xc  syscall     0
    ctx->pc = 0x294e74u;
    ctx->pc = 0x294E78u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_294e78:
    // 0x294e78: 0x5c50  .word       0x00005C50                   # mfhi        $t3 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e78u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_294e7c:
    // 0x294e7c: 0x0  nop
    ctx->pc = 0x294e7cu;
    // NOP
label_294e80:
    // 0x294e80: 0x16aa5  .word       0x00016AA5                   # or          $t5, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e80u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_294e84:
    // 0x294e84: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e84u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294E84 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294e88:
    // 0x294e88: 0x4a0  .word       0x000004A0                   # add         $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e88u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_294e8c:
    // 0x294e8c: 0x0  nop
    ctx->pc = 0x294e8cu;
    // NOP
label_294e90:
    // 0x294e90: 0x16aa6  .word       0x00016AA6                   # xor         $t5, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e90u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_294e94:
    // 0x294e94: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x294e94u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_294e98:
    // 0x294e98: 0x16bb0  tge         $zero, $at, 430
    ctx->pc = 0x294e98u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_294e9c:
    // 0x294e9c: 0x0  nop
    ctx->pc = 0x294e9cu;
    // NOP
label_294ea0:
    // 0x294ea0: 0x16ad4  .word       0x00016AD4                   # dsllv       $t5, $at, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ea0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_294ea4:
    // 0x294ea4: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x294ea4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x294EA4 raw=0x0000001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294ea8:
    // 0x294ea8: 0xed24  .word       0x0000ED24                   # and         $sp, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ea8u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_294eac:
    // 0x294eac: 0x0  nop
    ctx->pc = 0x294eacu;
    // NOP
label_294eb0:
    // 0x294eb0: 0x16af2  tlt         $zero, $at, 427
    ctx->pc = 0x294eb0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_294eb4:
    // 0x294eb4: 0x23  negu        $zero, $zero
    ctx->pc = 0x294eb4u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_294eb8:
    // 0x294eb8: 0x114f0  tge         $zero, $at, 83
    ctx->pc = 0x294eb8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_294ebc:
    // 0x294ebc: 0x0  nop
    ctx->pc = 0x294ebcu;
    // NOP
label_294ec0:
    // 0x294ec0: 0x16b15  .word       0x00016B15                   # INVALID     $zero, $at, 0x6B15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ec0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x294EC0 raw=0x00016B15"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294ec4:
    // 0x294ec4: 0xf  sync
    ctx->pc = 0x294ec4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_294ec8:
    // 0x294ec8: 0x72c0  sll         $t6, $zero, 11
    ctx->pc = 0x294ec8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_294ecc:
    // 0x294ecc: 0x0  nop
    ctx->pc = 0x294eccu;
    // NOP
label_294ed0:
    // 0x294ed0: 0x16b24  .word       0x00016B24                   # and         $t5, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ed0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_294ed4:
    // 0x294ed4: 0x11  mthi        $zero
    ctx->pc = 0x294ed4u;
    ctx->hi = GPR_U64(ctx, 0);
label_294ed8:
    // 0x294ed8: 0x83f0  tge         $zero, $zero, 527
    ctx->pc = 0x294ed8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_294edc:
    // 0x294edc: 0x0  nop
    ctx->pc = 0x294edcu;
    // NOP
label_294ee0:
    // 0x294ee0: 0x16b35  .word       0x00016B35                   # INVALID     $zero, $at, 0x6B35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ee0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x294EE0 raw=0x00016B35"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294ee4:
    // 0x294ee4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x294ee4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_294ee8:
    // 0x294ee8: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x294ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_294eec:
    // 0x294eec: 0x0  nop
    ctx->pc = 0x294eecu;
    // NOP
label_294ef0:
    // 0x294ef0: 0x16b39  .word       0x00016B39                   # INVALID     $zero, $at, 0x6B39 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ef0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x294EF0 raw=0x00016B39"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294ef4:
    // 0x294ef4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ef4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294EF4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294ef8:
    // 0x294ef8: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x294ef8u;
    
label_294efc:
    // 0x294efc: 0x0  nop
    ctx->pc = 0x294efcu;
    // NOP
label_294f00:
    // 0x294f00: 0x16b3a  dsrl        $t5, $at, 12
    ctx->pc = 0x294f00u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 1) >> 12);
label_294f04:
    // 0x294f04: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x294f04u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_294f08:
    // 0x294f08: 0x11d0  .word       0x000011D0                   # mfhi        $v0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294f08u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_294f0c:
    // 0x294f0c: 0x0  nop
    ctx->pc = 0x294f0cu;
    // NOP
label_294f10:
    // 0x294f10: 0x16b3d  .word       0x00016B3D                   # INVALID     $zero, $at, 0x6B3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294f10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x294F10 raw=0x00016B3D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294f14:
    // 0x294f14: 0x181  .word       0x00000181                   # INVALID     $zero, $zero, 0x181 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294f14u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294F14 raw=0x00000181"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294f18:
    // 0x294f18: 0xc02c0  sll         $zero, $t4, 11
    ctx->pc = 0x294f18u;
    
label_294f1c:
    // 0x294f1c: 0x0  nop
    ctx->pc = 0x294f1cu;
    // NOP
label_294f20:
    // 0x294f20: 0x16cbe  dsrl32      $t5, $at, 18
    ctx->pc = 0x294f20u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 1) >> (32 + 18));
label_294f24:
    // 0x294f24: 0xad  .word       0x000000AD                   # daddu       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294f24u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_294f28:
    // 0x294f28: 0x561c0  sll         $t4, $a1, 7
    ctx->pc = 0x294f28u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
label_294f2c:
    // 0x294f2c: 0x0  nop
    ctx->pc = 0x294f2cu;
    // NOP
label_294f30:
    // 0x294f30: 0x16d6b  .word       0x00016D6B                   # sltu        $t5, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294f30u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_294f34:
    // 0x294f34: 0x8d  break       0, 2
    ctx->pc = 0x294f34u;
    runtime->handleBreak(rdram, ctx);
label_294f38:
    // 0x294f38: 0x46774  teq         $zero, $a0, 413
    ctx->pc = 0x294f38u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_294f3c:
    // 0x294f3c: 0x0  nop
    ctx->pc = 0x294f3cu;
    // NOP
label_294f40:
    // 0x294f40: 0x16df8  dsll        $t5, $at, 23
    ctx->pc = 0x294f40u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 1) << 23);
label_294f44:
    // 0x294f44: 0x9d  .word       0x0000009D                   # dmultu      $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294f44u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x294F44 raw=0x0000009D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294f48:
    // 0x294f48: 0x4e240  sll         $gp, $a0, 9
    ctx->pc = 0x294f48u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
label_294f4c:
    // 0x294f4c: 0x0  nop
    ctx->pc = 0x294f4cu;
    // NOP
label_294f50:
    // 0x294f50: 0x16e95  .word       0x00016E95                   # INVALID     $zero, $at, 0x6E95 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294f50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x294F50 raw=0x00016E95"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294f54:
    // 0x294f54: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294f54u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294F54 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294f58:
    // 0x294f58: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294f58u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_294f5c:
    // 0x294f5c: 0x0  nop
    ctx->pc = 0x294f5cu;
    // NOP
label_294f60:
    // 0x294f60: 0x16e96  .word       0x00016E96                   # dsrlv       $t5, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294f60u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_294f64:
    // 0x294f64: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294f64u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294F64 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294f68:
    // 0x294f68: 0x4c  syscall     1
    ctx->pc = 0x294f68u;
    ctx->pc = 0x294F6Cu;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_294f6c:
    // 0x294f6c: 0x0  nop
    ctx->pc = 0x294f6cu;
    // NOP
label_294f70:
    // 0x294f70: 0x16e97  .word       0x00016E97                   # dsrav       $t5, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294f70u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_294f74:
    // 0x294f74: 0x9d  .word       0x0000009D                   # dmultu      $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294f74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x294F74 raw=0x0000009D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294f78:
    // 0x294f78: 0x4e180  sll         $gp, $a0, 6
    ctx->pc = 0x294f78u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_294f7c:
    // 0x294f7c: 0x0  nop
    ctx->pc = 0x294f7cu;
    // NOP
label_294f80:
    // 0x294f80: 0x16f34  teq         $zero, $at, 444
    ctx->pc = 0x294f80u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_294f84:
    // 0x294f84: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294f84u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294F84 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294f88:
    // 0x294f88: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x294f88u;
    
label_294f8c:
    // 0x294f8c: 0x0  nop
    ctx->pc = 0x294f8cu;
    // NOP
label_294f90:
    // 0x294f90: 0x16f35  .word       0x00016F35                   # INVALID     $zero, $at, 0x6F35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294f90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x294F90 raw=0x00016F35"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294f94:
    // 0x294f94: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x294f94u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_294f98:
    // 0x294f98: 0x10460  .word       0x00010460                   # add         $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294f98u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_294f9c:
    // 0x294f9c: 0x0  nop
    ctx->pc = 0x294f9cu;
    // NOP
label_294fa0:
    // 0x294fa0: 0x16f56  .word       0x00016F56                   # dsrlv       $t5, $at, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294fa0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_294fa4:
    // 0x294fa4: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294fa4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x294FA4 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294fa8:
    // 0x294fa8: 0xa680  sll         $s4, $zero, 26
    ctx->pc = 0x294fa8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_294fac:
    // 0x294fac: 0x0  nop
    ctx->pc = 0x294facu;
    // NOP
label_294fb0:
    // 0x294fb0: 0x16f6b  .word       0x00016F6B                   # sltu        $t5, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294fb0u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_294fb4:
    // 0x294fb4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294fb4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294FB4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294fb8:
    // 0x294fb8: 0x7f8  dsll        $zero, $zero, 31
    ctx->pc = 0x294fb8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 31);
label_294fbc:
    // 0x294fbc: 0x0  nop
    ctx->pc = 0x294fbcu;
    // NOP
label_294fc0:
    // 0x294fc0: 0x16f6c  .word       0x00016F6C                   # dadd        $t5, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294fc0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_294fc4:
    // 0x294fc4: 0x12  mflo        $zero
    ctx->pc = 0x294fc4u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_294fc8:
    // 0x294fc8: 0x8fa0  .word       0x00008FA0                   # add         $s1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294fc8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_294fcc:
    // 0x294fcc: 0x0  nop
    ctx->pc = 0x294fccu;
    // NOP
label_294fd0:
    // 0x294fd0: 0x16f7e  dsrl32      $t5, $at, 29
    ctx->pc = 0x294fd0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 1) >> (32 + 29));
label_294fd4:
    // 0x294fd4: 0x7f  dsra32      $zero, $zero, 1
    ctx->pc = 0x294fd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 1));
label_294fd8:
    // 0x294fd8: 0x3f538  dsll        $fp, $v1, 20
    ctx->pc = 0x294fd8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) << 20);
label_294fdc:
    // 0x294fdc: 0x0  nop
    ctx->pc = 0x294fdcu;
    // NOP
label_294fe0:
    // 0x294fe0: 0x16ffd  .word       0x00016FFD                   # INVALID     $zero, $at, 0x6FFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294fe0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x294FE0 raw=0x00016FFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294fe4:
    // 0x294fe4: 0x50  .word       0x00000050                   # mfhi        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294fe4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_294fe8:
    // 0x294fe8: 0x279d0  .word       0x000279D0                   # mfhi        $t7 # 000201C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294fe8u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_294fec:
    // 0x294fec: 0x0  nop
    ctx->pc = 0x294fecu;
    // NOP
label_294ff0:
    // 0x294ff0: 0x1704d  break       1, 449
    ctx->pc = 0x294ff0u;
    runtime->handleBreak(rdram, ctx);
label_294ff4:
    // 0x294ff4: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x294ff4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_294ff8:
    // 0x294ff8: 0x57e0  .word       0x000057E0                   # add         $t2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ff8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_294ffc:
    // 0x294ffc: 0x0  nop
    ctx->pc = 0x294ffcu;
    // NOP
label_295000:
    // 0x295000: 0x17058  .word       0x00017058                   # mult        $t6, $zero, $at # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x295000u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_295004:
    // 0x295004: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x295004u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x295004 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295008:
    // 0x295008: 0xe560  .word       0x0000E560                   # add         $gp, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295008u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_29500c:
    // 0x29500c: 0x0  nop
    ctx->pc = 0x29500cu;
    // NOP
label_295010:
    // 0x295010: 0x17075  .word       0x00017075                   # INVALID     $zero, $at, 0x7075 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295010u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x295010 raw=0x00017075"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295014:
    // 0x295014: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x295014u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295018:
    // 0x295018: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x295018u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29501c:
    // 0x29501c: 0x0  nop
    ctx->pc = 0x29501cu;
    // NOP
label_295020:
    // 0x295020: 0x17079  .word       0x00017079                   # INVALID     $zero, $at, 0x7079 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295020u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x295020 raw=0x00017079"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295024:
    // 0x295024: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295024u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295024 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295028:
    // 0x295028: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x295028u;
    
label_29502c:
    // 0x29502c: 0x0  nop
    ctx->pc = 0x29502cu;
    // NOP
label_295030:
    // 0x295030: 0x1707a  dsrl        $t6, $at, 1
    ctx->pc = 0x295030u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) >> 1);
label_295034:
    // 0x295034: 0x9  jalr        $zero, $zero
label_295038:
    if (ctx->pc == 0x295038u) {
        ctx->pc = 0x295038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295034u;
        // 0x295038: 0x46a0  .word       0x000046A0                   # add         $t0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29503Cu;
        goto label_29503c;
    }
    ctx->pc = 0x295034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x295038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295034u;
        // 0x295038: 0x46a0  .word       0x000046A0                   # add         $t0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295034u, 0x29503Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29503Cu;
label_29503c:
    // 0x29503c: 0x0  nop
    ctx->pc = 0x29503cu;
    // NOP
label_295040:
    // 0x295040: 0x17083  sra         $t6, $at, 2
    ctx->pc = 0x295040u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 1), 2));
label_295044:
    // 0x295044: 0x79  .word       0x00000079                   # INVALID     $zero, $zero, 0x79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295044u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x295044 raw=0x00000079"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295048:
    // 0x295048: 0x3c7e8  .word       0x0003C7E8                   # mfsa        $t8 # 000307C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x295048u;
    SET_GPR_U32(ctx, 24, ctx->sa);
label_29504c:
    // 0x29504c: 0x0  nop
    ctx->pc = 0x29504cu;
    // NOP
label_295050:
    // 0x295050: 0x170fc  dsll32      $t6, $at, 3
    ctx->pc = 0x295050u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) << (32 + 3));
label_295054:
    // 0x295054: 0x4c  syscall     1
    ctx->pc = 0x295054u;
    ctx->pc = 0x295058u;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_295058:
    // 0x295058: 0x25f90  .word       0x00025F90                   # mfhi        $t3 # 00020780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295058u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_29505c:
    // 0x29505c: 0x0  nop
    ctx->pc = 0x29505cu;
    // NOP
label_295060:
    // 0x295060: 0x17148  .word       0x00017148                   # jr          $zero # 00017140 <InstrIdType: CPU_SPECIAL>
label_295064:
    if (ctx->pc == 0x295064u) {
        ctx->pc = 0x295064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295060u;
        // 0x295064: 0x3  sra         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295068u;
        goto label_295068;
    }
    ctx->pc = 0x295060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x295064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295060u;
        // 0x295064: 0x3  sra         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295060u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x295068u;
label_295068:
    // 0x295068: 0x1310  .word       0x00001310                   # mfhi        $v0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295068u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_29506c:
    // 0x29506c: 0x0  nop
    ctx->pc = 0x29506cu;
    // NOP
label_295070:
    // 0x295070: 0x1714b  .word       0x0001714B                   # movn        $t6, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295070u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 0));
label_295074:
    // 0x295074: 0xc2  srl         $zero, $zero, 3
    ctx->pc = 0x295074u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 3));
label_295078:
    // 0x295078: 0x60c10  .word       0x00060C10                   # mfhi        $at # 00060400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295078u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_29507c:
    // 0x29507c: 0x0  nop
    ctx->pc = 0x29507cu;
    // NOP
label_295080:
    // 0x295080: 0x1720d  break       1, 456
    ctx->pc = 0x295080u;
    runtime->handleBreak(rdram, ctx);
label_295084:
    // 0x295084: 0x1b5  .word       0x000001B5                   # INVALID     $zero, $zero, 0x1B5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295084u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x295084 raw=0x000001B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295088:
    // 0x295088: 0xda250  .word       0x000DA250                   # mfhi        $s4 # 000D0240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295088u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_29508c:
    // 0x29508c: 0x0  nop
    ctx->pc = 0x29508cu;
    // NOP
label_295090:
    // 0x295090: 0x173c2  srl         $t6, $at, 15
    ctx->pc = 0x295090u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 1), 15));
label_295094:
    // 0x295094: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295094u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_295098:
    // 0x295098: 0x2ff84  .word       0x0002FF84                   # sllv        $ra, $v0, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295098u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_29509c:
    // 0x29509c: 0x0  nop
    ctx->pc = 0x29509cu;
    // NOP
label_2950a0:
    // 0x2950a0: 0x17422  .word       0x00017422                   # neg         $t6, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2950a0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2950a4:
    // 0x2950a4: 0x16a  .word       0x0000016A                   # slt         $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2950a4u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2950a8:
    // 0x2950a8: 0xb4f3c  dsll32      $t1, $t3, 28
    ctx->pc = 0x2950a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) << (32 + 28));
label_2950ac:
    // 0x2950ac: 0x0  nop
    ctx->pc = 0x2950acu;
    // NOP
label_2950b0:
    // 0x2950b0: 0x1758c  .word       0x0001758C                   # syscall     470 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2950b0u;
    ctx->pc = 0x2950B4u;
runtime->handleSyscall(rdram, ctx, 0x5D6u);
label_2950b4:
    // 0x2950b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2950b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2950B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2950b8:
    // 0x2950b8: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2950b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2950bc:
    // 0x2950bc: 0x0  nop
    ctx->pc = 0x2950bcu;
    // NOP
label_2950c0:
    // 0x2950c0: 0x1758d  break       1, 470
    ctx->pc = 0x2950c0u;
    runtime->handleBreak(rdram, ctx);
label_2950c4:
    // 0x2950c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2950c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2950C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2950c8:
    // 0x2950c8: 0x4c  syscall     1
    ctx->pc = 0x2950c8u;
    ctx->pc = 0x2950CCu;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_2950cc:
    // 0x2950cc: 0x0  nop
    ctx->pc = 0x2950ccu;
    // NOP
label_2950d0:
    // 0x2950d0: 0x1758e  .word       0x0001758E                   # INVALID     $zero, $at, 0x758E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2950d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2950D0 raw=0x0001758E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2950d4:
    // 0x2950d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2950d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2950D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2950d8:
    // 0x2950d8: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x2950d8u;
    
label_2950dc:
    // 0x2950dc: 0x0  nop
    ctx->pc = 0x2950dcu;
    // NOP
label_2950e0:
    // 0x2950e0: 0x1758f  .word       0x0001758F                   # sync.p # 00017000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2950e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2950e4:
    // 0x2950e4: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x2950e4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2950e8:
    // 0x2950e8: 0x10460  .word       0x00010460                   # add         $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2950e8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2950ec:
    // 0x2950ec: 0x0  nop
    ctx->pc = 0x2950ecu;
    // NOP
label_2950f0:
    // 0x2950f0: 0x175b0  tge         $zero, $at, 470
    ctx->pc = 0x2950f0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2950f4:
    // 0x2950f4: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x2950f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2950f8:
    // 0x2950f8: 0xb8a0  .word       0x0000B8A0                   # add         $s7, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2950f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_2950fc:
    // 0x2950fc: 0x0  nop
    ctx->pc = 0x2950fcu;
    // NOP
    ctx->pc = 0x295100u;
    return;
}

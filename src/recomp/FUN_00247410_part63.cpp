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

// Function: FUN_00247410
// Address: 0x247410 - 0x2874a4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_00247410_part63(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x265870u: goto label_265870;
        case 0x265874u: goto label_265874;
        case 0x265878u: goto label_265878;
        case 0x26587cu: goto label_26587c;
        case 0x265880u: goto label_265880;
        case 0x265884u: goto label_265884;
        case 0x265888u: goto label_265888;
        case 0x26588cu: goto label_26588c;
        case 0x265890u: goto label_265890;
        case 0x265894u: goto label_265894;
        case 0x265898u: goto label_265898;
        case 0x26589cu: goto label_26589c;
        case 0x2658a0u: goto label_2658a0;
        case 0x2658a4u: goto label_2658a4;
        case 0x2658a8u: goto label_2658a8;
        case 0x2658acu: goto label_2658ac;
        case 0x2658b0u: goto label_2658b0;
        case 0x2658b4u: goto label_2658b4;
        case 0x2658b8u: goto label_2658b8;
        case 0x2658bcu: goto label_2658bc;
        case 0x2658c0u: goto label_2658c0;
        case 0x2658c4u: goto label_2658c4;
        case 0x2658c8u: goto label_2658c8;
        case 0x2658ccu: goto label_2658cc;
        case 0x2658d0u: goto label_2658d0;
        case 0x2658d4u: goto label_2658d4;
        case 0x2658d8u: goto label_2658d8;
        case 0x2658dcu: goto label_2658dc;
        case 0x2658e0u: goto label_2658e0;
        case 0x2658e4u: goto label_2658e4;
        case 0x2658e8u: goto label_2658e8;
        case 0x2658ecu: goto label_2658ec;
        case 0x2658f0u: goto label_2658f0;
        case 0x2658f4u: goto label_2658f4;
        case 0x2658f8u: goto label_2658f8;
        case 0x2658fcu: goto label_2658fc;
        case 0x265900u: goto label_265900;
        case 0x265904u: goto label_265904;
        case 0x265908u: goto label_265908;
        case 0x26590cu: goto label_26590c;
        case 0x265910u: goto label_265910;
        case 0x265914u: goto label_265914;
        case 0x265918u: goto label_265918;
        case 0x26591cu: goto label_26591c;
        case 0x265920u: goto label_265920;
        case 0x265924u: goto label_265924;
        case 0x265928u: goto label_265928;
        case 0x26592cu: goto label_26592c;
        case 0x265930u: goto label_265930;
        case 0x265934u: goto label_265934;
        case 0x265938u: goto label_265938;
        case 0x26593cu: goto label_26593c;
        case 0x265940u: goto label_265940;
        case 0x265944u: goto label_265944;
        case 0x265948u: goto label_265948;
        case 0x26594cu: goto label_26594c;
        case 0x265950u: goto label_265950;
        case 0x265954u: goto label_265954;
        case 0x265958u: goto label_265958;
        case 0x26595cu: goto label_26595c;
        case 0x265960u: goto label_265960;
        case 0x265964u: goto label_265964;
        case 0x265968u: goto label_265968;
        case 0x26596cu: goto label_26596c;
        case 0x265970u: goto label_265970;
        case 0x265974u: goto label_265974;
        case 0x265978u: goto label_265978;
        case 0x26597cu: goto label_26597c;
        case 0x265980u: goto label_265980;
        case 0x265984u: goto label_265984;
        case 0x265988u: goto label_265988;
        case 0x26598cu: goto label_26598c;
        case 0x265990u: goto label_265990;
        case 0x265994u: goto label_265994;
        case 0x265998u: goto label_265998;
        case 0x26599cu: goto label_26599c;
        case 0x2659a0u: goto label_2659a0;
        case 0x2659a4u: goto label_2659a4;
        case 0x2659a8u: goto label_2659a8;
        case 0x2659acu: goto label_2659ac;
        case 0x2659b0u: goto label_2659b0;
        case 0x2659b4u: goto label_2659b4;
        case 0x2659b8u: goto label_2659b8;
        case 0x2659bcu: goto label_2659bc;
        case 0x2659c0u: goto label_2659c0;
        case 0x2659c4u: goto label_2659c4;
        case 0x2659c8u: goto label_2659c8;
        case 0x2659ccu: goto label_2659cc;
        case 0x2659d0u: goto label_2659d0;
        case 0x2659d4u: goto label_2659d4;
        case 0x2659d8u: goto label_2659d8;
        case 0x2659dcu: goto label_2659dc;
        case 0x2659e0u: goto label_2659e0;
        case 0x2659e4u: goto label_2659e4;
        case 0x2659e8u: goto label_2659e8;
        case 0x2659ecu: goto label_2659ec;
        case 0x2659f0u: goto label_2659f0;
        case 0x2659f4u: goto label_2659f4;
        case 0x2659f8u: goto label_2659f8;
        case 0x2659fcu: goto label_2659fc;
        case 0x265a00u: goto label_265a00;
        case 0x265a04u: goto label_265a04;
        case 0x265a08u: goto label_265a08;
        case 0x265a0cu: goto label_265a0c;
        case 0x265a10u: goto label_265a10;
        case 0x265a14u: goto label_265a14;
        case 0x265a18u: goto label_265a18;
        case 0x265a1cu: goto label_265a1c;
        case 0x265a20u: goto label_265a20;
        case 0x265a24u: goto label_265a24;
        case 0x265a28u: goto label_265a28;
        case 0x265a2cu: goto label_265a2c;
        case 0x265a30u: goto label_265a30;
        case 0x265a34u: goto label_265a34;
        case 0x265a38u: goto label_265a38;
        case 0x265a3cu: goto label_265a3c;
        case 0x265a40u: goto label_265a40;
        case 0x265a44u: goto label_265a44;
        case 0x265a48u: goto label_265a48;
        case 0x265a4cu: goto label_265a4c;
        case 0x265a50u: goto label_265a50;
        case 0x265a54u: goto label_265a54;
        case 0x265a58u: goto label_265a58;
        case 0x265a5cu: goto label_265a5c;
        case 0x265a60u: goto label_265a60;
        case 0x265a64u: goto label_265a64;
        case 0x265a68u: goto label_265a68;
        case 0x265a6cu: goto label_265a6c;
        case 0x265a70u: goto label_265a70;
        case 0x265a74u: goto label_265a74;
        case 0x265a78u: goto label_265a78;
        case 0x265a7cu: goto label_265a7c;
        case 0x265a80u: goto label_265a80;
        case 0x265a84u: goto label_265a84;
        case 0x265a88u: goto label_265a88;
        case 0x265a8cu: goto label_265a8c;
        case 0x265a90u: goto label_265a90;
        case 0x265a94u: goto label_265a94;
        case 0x265a98u: goto label_265a98;
        case 0x265a9cu: goto label_265a9c;
        case 0x265aa0u: goto label_265aa0;
        case 0x265aa4u: goto label_265aa4;
        case 0x265aa8u: goto label_265aa8;
        case 0x265aacu: goto label_265aac;
        case 0x265ab0u: goto label_265ab0;
        case 0x265ab4u: goto label_265ab4;
        case 0x265ab8u: goto label_265ab8;
        case 0x265abcu: goto label_265abc;
        case 0x265ac0u: goto label_265ac0;
        case 0x265ac4u: goto label_265ac4;
        case 0x265ac8u: goto label_265ac8;
        case 0x265accu: goto label_265acc;
        case 0x265ad0u: goto label_265ad0;
        case 0x265ad4u: goto label_265ad4;
        case 0x265ad8u: goto label_265ad8;
        case 0x265adcu: goto label_265adc;
        case 0x265ae0u: goto label_265ae0;
        case 0x265ae4u: goto label_265ae4;
        case 0x265ae8u: goto label_265ae8;
        case 0x265aecu: goto label_265aec;
        case 0x265af0u: goto label_265af0;
        case 0x265af4u: goto label_265af4;
        case 0x265af8u: goto label_265af8;
        case 0x265afcu: goto label_265afc;
        case 0x265b00u: goto label_265b00;
        case 0x265b04u: goto label_265b04;
        case 0x265b08u: goto label_265b08;
        case 0x265b0cu: goto label_265b0c;
        case 0x265b10u: goto label_265b10;
        case 0x265b14u: goto label_265b14;
        case 0x265b18u: goto label_265b18;
        case 0x265b1cu: goto label_265b1c;
        case 0x265b20u: goto label_265b20;
        case 0x265b24u: goto label_265b24;
        case 0x265b28u: goto label_265b28;
        case 0x265b2cu: goto label_265b2c;
        case 0x265b30u: goto label_265b30;
        case 0x265b34u: goto label_265b34;
        case 0x265b38u: goto label_265b38;
        case 0x265b3cu: goto label_265b3c;
        case 0x265b40u: goto label_265b40;
        case 0x265b44u: goto label_265b44;
        case 0x265b48u: goto label_265b48;
        case 0x265b4cu: goto label_265b4c;
        case 0x265b50u: goto label_265b50;
        case 0x265b54u: goto label_265b54;
        case 0x265b58u: goto label_265b58;
        case 0x265b5cu: goto label_265b5c;
        case 0x265b60u: goto label_265b60;
        case 0x265b64u: goto label_265b64;
        case 0x265b68u: goto label_265b68;
        case 0x265b6cu: goto label_265b6c;
        case 0x265b70u: goto label_265b70;
        case 0x265b74u: goto label_265b74;
        case 0x265b78u: goto label_265b78;
        case 0x265b7cu: goto label_265b7c;
        case 0x265b80u: goto label_265b80;
        case 0x265b84u: goto label_265b84;
        case 0x265b88u: goto label_265b88;
        case 0x265b8cu: goto label_265b8c;
        case 0x265b90u: goto label_265b90;
        case 0x265b94u: goto label_265b94;
        case 0x265b98u: goto label_265b98;
        case 0x265b9cu: goto label_265b9c;
        case 0x265ba0u: goto label_265ba0;
        case 0x265ba4u: goto label_265ba4;
        case 0x265ba8u: goto label_265ba8;
        case 0x265bacu: goto label_265bac;
        case 0x265bb0u: goto label_265bb0;
        case 0x265bb4u: goto label_265bb4;
        case 0x265bb8u: goto label_265bb8;
        case 0x265bbcu: goto label_265bbc;
        case 0x265bc0u: goto label_265bc0;
        case 0x265bc4u: goto label_265bc4;
        case 0x265bc8u: goto label_265bc8;
        case 0x265bccu: goto label_265bcc;
        case 0x265bd0u: goto label_265bd0;
        case 0x265bd4u: goto label_265bd4;
        case 0x265bd8u: goto label_265bd8;
        case 0x265bdcu: goto label_265bdc;
        case 0x265be0u: goto label_265be0;
        case 0x265be4u: goto label_265be4;
        case 0x265be8u: goto label_265be8;
        case 0x265becu: goto label_265bec;
        case 0x265bf0u: goto label_265bf0;
        case 0x265bf4u: goto label_265bf4;
        case 0x265bf8u: goto label_265bf8;
        case 0x265bfcu: goto label_265bfc;
        case 0x265c00u: goto label_265c00;
        case 0x265c04u: goto label_265c04;
        case 0x265c08u: goto label_265c08;
        case 0x265c0cu: goto label_265c0c;
        case 0x265c10u: goto label_265c10;
        case 0x265c14u: goto label_265c14;
        case 0x265c18u: goto label_265c18;
        case 0x265c1cu: goto label_265c1c;
        case 0x265c20u: goto label_265c20;
        case 0x265c24u: goto label_265c24;
        case 0x265c28u: goto label_265c28;
        case 0x265c2cu: goto label_265c2c;
        case 0x265c30u: goto label_265c30;
        case 0x265c34u: goto label_265c34;
        case 0x265c38u: goto label_265c38;
        case 0x265c3cu: goto label_265c3c;
        case 0x265c40u: goto label_265c40;
        case 0x265c44u: goto label_265c44;
        case 0x265c48u: goto label_265c48;
        case 0x265c4cu: goto label_265c4c;
        case 0x265c50u: goto label_265c50;
        case 0x265c54u: goto label_265c54;
        case 0x265c58u: goto label_265c58;
        case 0x265c5cu: goto label_265c5c;
        case 0x265c60u: goto label_265c60;
        case 0x265c64u: goto label_265c64;
        case 0x265c68u: goto label_265c68;
        case 0x265c6cu: goto label_265c6c;
        case 0x265c70u: goto label_265c70;
        case 0x265c74u: goto label_265c74;
        case 0x265c78u: goto label_265c78;
        case 0x265c7cu: goto label_265c7c;
        case 0x265c80u: goto label_265c80;
        case 0x265c84u: goto label_265c84;
        case 0x265c88u: goto label_265c88;
        case 0x265c8cu: goto label_265c8c;
        case 0x265c90u: goto label_265c90;
        case 0x265c94u: goto label_265c94;
        case 0x265c98u: goto label_265c98;
        case 0x265c9cu: goto label_265c9c;
        case 0x265ca0u: goto label_265ca0;
        case 0x265ca4u: goto label_265ca4;
        case 0x265ca8u: goto label_265ca8;
        case 0x265cacu: goto label_265cac;
        case 0x265cb0u: goto label_265cb0;
        case 0x265cb4u: goto label_265cb4;
        case 0x265cb8u: goto label_265cb8;
        case 0x265cbcu: goto label_265cbc;
        case 0x265cc0u: goto label_265cc0;
        case 0x265cc4u: goto label_265cc4;
        case 0x265cc8u: goto label_265cc8;
        case 0x265cccu: goto label_265ccc;
        case 0x265cd0u: goto label_265cd0;
        case 0x265cd4u: goto label_265cd4;
        case 0x265cd8u: goto label_265cd8;
        case 0x265cdcu: goto label_265cdc;
        case 0x265ce0u: goto label_265ce0;
        case 0x265ce4u: goto label_265ce4;
        case 0x265ce8u: goto label_265ce8;
        case 0x265cecu: goto label_265cec;
        case 0x265cf0u: goto label_265cf0;
        case 0x265cf4u: goto label_265cf4;
        case 0x265cf8u: goto label_265cf8;
        case 0x265cfcu: goto label_265cfc;
        case 0x265d00u: goto label_265d00;
        case 0x265d04u: goto label_265d04;
        case 0x265d08u: goto label_265d08;
        case 0x265d0cu: goto label_265d0c;
        case 0x265d10u: goto label_265d10;
        case 0x265d14u: goto label_265d14;
        case 0x265d18u: goto label_265d18;
        case 0x265d1cu: goto label_265d1c;
        case 0x265d20u: goto label_265d20;
        case 0x265d24u: goto label_265d24;
        case 0x265d28u: goto label_265d28;
        case 0x265d2cu: goto label_265d2c;
        case 0x265d30u: goto label_265d30;
        case 0x265d34u: goto label_265d34;
        case 0x265d38u: goto label_265d38;
        case 0x265d3cu: goto label_265d3c;
        case 0x265d40u: goto label_265d40;
        case 0x265d44u: goto label_265d44;
        case 0x265d48u: goto label_265d48;
        case 0x265d4cu: goto label_265d4c;
        case 0x265d50u: goto label_265d50;
        case 0x265d54u: goto label_265d54;
        case 0x265d58u: goto label_265d58;
        case 0x265d5cu: goto label_265d5c;
        case 0x265d60u: goto label_265d60;
        case 0x265d64u: goto label_265d64;
        case 0x265d68u: goto label_265d68;
        case 0x265d6cu: goto label_265d6c;
        case 0x265d70u: goto label_265d70;
        case 0x265d74u: goto label_265d74;
        case 0x265d78u: goto label_265d78;
        case 0x265d7cu: goto label_265d7c;
        case 0x265d80u: goto label_265d80;
        case 0x265d84u: goto label_265d84;
        case 0x265d88u: goto label_265d88;
        case 0x265d8cu: goto label_265d8c;
        case 0x265d90u: goto label_265d90;
        case 0x265d94u: goto label_265d94;
        case 0x265d98u: goto label_265d98;
        case 0x265d9cu: goto label_265d9c;
        case 0x265da0u: goto label_265da0;
        case 0x265da4u: goto label_265da4;
        case 0x265da8u: goto label_265da8;
        case 0x265dacu: goto label_265dac;
        case 0x265db0u: goto label_265db0;
        case 0x265db4u: goto label_265db4;
        case 0x265db8u: goto label_265db8;
        case 0x265dbcu: goto label_265dbc;
        case 0x265dc0u: goto label_265dc0;
        case 0x265dc4u: goto label_265dc4;
        case 0x265dc8u: goto label_265dc8;
        case 0x265dccu: goto label_265dcc;
        case 0x265dd0u: goto label_265dd0;
        case 0x265dd4u: goto label_265dd4;
        case 0x265dd8u: goto label_265dd8;
        case 0x265ddcu: goto label_265ddc;
        case 0x265de0u: goto label_265de0;
        case 0x265de4u: goto label_265de4;
        case 0x265de8u: goto label_265de8;
        case 0x265decu: goto label_265dec;
        case 0x265df0u: goto label_265df0;
        case 0x265df4u: goto label_265df4;
        case 0x265df8u: goto label_265df8;
        case 0x265dfcu: goto label_265dfc;
        case 0x265e00u: goto label_265e00;
        case 0x265e04u: goto label_265e04;
        case 0x265e08u: goto label_265e08;
        case 0x265e0cu: goto label_265e0c;
        case 0x265e10u: goto label_265e10;
        case 0x265e14u: goto label_265e14;
        case 0x265e18u: goto label_265e18;
        case 0x265e1cu: goto label_265e1c;
        case 0x265e20u: goto label_265e20;
        case 0x265e24u: goto label_265e24;
        case 0x265e28u: goto label_265e28;
        case 0x265e2cu: goto label_265e2c;
        case 0x265e30u: goto label_265e30;
        case 0x265e34u: goto label_265e34;
        case 0x265e38u: goto label_265e38;
        case 0x265e3cu: goto label_265e3c;
        case 0x265e40u: goto label_265e40;
        case 0x265e44u: goto label_265e44;
        case 0x265e48u: goto label_265e48;
        case 0x265e4cu: goto label_265e4c;
        case 0x265e50u: goto label_265e50;
        case 0x265e54u: goto label_265e54;
        case 0x265e58u: goto label_265e58;
        case 0x265e5cu: goto label_265e5c;
        case 0x265e60u: goto label_265e60;
        case 0x265e64u: goto label_265e64;
        case 0x265e68u: goto label_265e68;
        case 0x265e6cu: goto label_265e6c;
        case 0x265e70u: goto label_265e70;
        case 0x265e74u: goto label_265e74;
        case 0x265e78u: goto label_265e78;
        case 0x265e7cu: goto label_265e7c;
        case 0x265e80u: goto label_265e80;
        case 0x265e84u: goto label_265e84;
        case 0x265e88u: goto label_265e88;
        case 0x265e8cu: goto label_265e8c;
        case 0x265e90u: goto label_265e90;
        case 0x265e94u: goto label_265e94;
        case 0x265e98u: goto label_265e98;
        case 0x265e9cu: goto label_265e9c;
        case 0x265ea0u: goto label_265ea0;
        case 0x265ea4u: goto label_265ea4;
        case 0x265ea8u: goto label_265ea8;
        case 0x265eacu: goto label_265eac;
        case 0x265eb0u: goto label_265eb0;
        case 0x265eb4u: goto label_265eb4;
        case 0x265eb8u: goto label_265eb8;
        case 0x265ebcu: goto label_265ebc;
        case 0x265ec0u: goto label_265ec0;
        case 0x265ec4u: goto label_265ec4;
        case 0x265ec8u: goto label_265ec8;
        case 0x265eccu: goto label_265ecc;
        case 0x265ed0u: goto label_265ed0;
        case 0x265ed4u: goto label_265ed4;
        case 0x265ed8u: goto label_265ed8;
        case 0x265edcu: goto label_265edc;
        case 0x265ee0u: goto label_265ee0;
        case 0x265ee4u: goto label_265ee4;
        case 0x265ee8u: goto label_265ee8;
        case 0x265eecu: goto label_265eec;
        case 0x265ef0u: goto label_265ef0;
        case 0x265ef4u: goto label_265ef4;
        case 0x265ef8u: goto label_265ef8;
        case 0x265efcu: goto label_265efc;
        case 0x265f00u: goto label_265f00;
        case 0x265f04u: goto label_265f04;
        case 0x265f08u: goto label_265f08;
        case 0x265f0cu: goto label_265f0c;
        case 0x265f10u: goto label_265f10;
        case 0x265f14u: goto label_265f14;
        case 0x265f18u: goto label_265f18;
        case 0x265f1cu: goto label_265f1c;
        case 0x265f20u: goto label_265f20;
        case 0x265f24u: goto label_265f24;
        case 0x265f28u: goto label_265f28;
        case 0x265f2cu: goto label_265f2c;
        case 0x265f30u: goto label_265f30;
        case 0x265f34u: goto label_265f34;
        case 0x265f38u: goto label_265f38;
        case 0x265f3cu: goto label_265f3c;
        case 0x265f40u: goto label_265f40;
        case 0x265f44u: goto label_265f44;
        case 0x265f48u: goto label_265f48;
        case 0x265f4cu: goto label_265f4c;
        case 0x265f50u: goto label_265f50;
        case 0x265f54u: goto label_265f54;
        case 0x265f58u: goto label_265f58;
        case 0x265f5cu: goto label_265f5c;
        case 0x265f60u: goto label_265f60;
        case 0x265f64u: goto label_265f64;
        case 0x265f68u: goto label_265f68;
        case 0x265f6cu: goto label_265f6c;
        case 0x265f70u: goto label_265f70;
        case 0x265f74u: goto label_265f74;
        case 0x265f78u: goto label_265f78;
        case 0x265f7cu: goto label_265f7c;
        case 0x265f80u: goto label_265f80;
        case 0x265f84u: goto label_265f84;
        case 0x265f88u: goto label_265f88;
        case 0x265f8cu: goto label_265f8c;
        case 0x265f90u: goto label_265f90;
        case 0x265f94u: goto label_265f94;
        case 0x265f98u: goto label_265f98;
        case 0x265f9cu: goto label_265f9c;
        case 0x265fa0u: goto label_265fa0;
        case 0x265fa4u: goto label_265fa4;
        case 0x265fa8u: goto label_265fa8;
        case 0x265facu: goto label_265fac;
        case 0x265fb0u: goto label_265fb0;
        case 0x265fb4u: goto label_265fb4;
        case 0x265fb8u: goto label_265fb8;
        case 0x265fbcu: goto label_265fbc;
        case 0x265fc0u: goto label_265fc0;
        case 0x265fc4u: goto label_265fc4;
        case 0x265fc8u: goto label_265fc8;
        case 0x265fccu: goto label_265fcc;
        case 0x265fd0u: goto label_265fd0;
        case 0x265fd4u: goto label_265fd4;
        case 0x265fd8u: goto label_265fd8;
        case 0x265fdcu: goto label_265fdc;
        case 0x265fe0u: goto label_265fe0;
        case 0x265fe4u: goto label_265fe4;
        case 0x265fe8u: goto label_265fe8;
        case 0x265fecu: goto label_265fec;
        case 0x265ff0u: goto label_265ff0;
        case 0x265ff4u: goto label_265ff4;
        case 0x265ff8u: goto label_265ff8;
        case 0x265ffcu: goto label_265ffc;
        case 0x266000u: goto label_266000;
        case 0x266004u: goto label_266004;
        case 0x266008u: goto label_266008;
        case 0x26600cu: goto label_26600c;
        case 0x266010u: goto label_266010;
        case 0x266014u: goto label_266014;
        case 0x266018u: goto label_266018;
        case 0x26601cu: goto label_26601c;
        case 0x266020u: goto label_266020;
        case 0x266024u: goto label_266024;
        case 0x266028u: goto label_266028;
        case 0x26602cu: goto label_26602c;
        case 0x266030u: goto label_266030;
        case 0x266034u: goto label_266034;
        case 0x266038u: goto label_266038;
        case 0x26603cu: goto label_26603c;
        default: return;
    }

label_265870:
    // 0x265870: 0xfe51  .word       0x0000FE51                   # mthi        $zero # 0000FE40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265870u;
    ctx->hi = GPR_U64(ctx, 0);
label_265874:
    // 0x265874: 0x4600  sll         $t0, $zero, 24
    ctx->pc = 0x265874u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_265878:
    // 0x265878: 0x0  nop
    ctx->pc = 0x265878u;
    // NOP
label_26587c:
    // 0x26587c: 0x0  nop
    ctx->pc = 0x26587cu;
    // NOP
label_265880:
    // 0x265880: 0xfe5a  .word       0x0000FE5A                   # div         $ra, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265880u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_265884:
    // 0x265884: 0x3c90  .word       0x00003C90                   # mfhi        $a3 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265884u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_265888:
    // 0x265888: 0x0  nop
    ctx->pc = 0x265888u;
    // NOP
label_26588c:
    // 0x26588c: 0x0  nop
    ctx->pc = 0x26588cu;
    // NOP
label_265890:
    // 0x265890: 0xfe62  .word       0x0000FE62                   # neg         $ra, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265890u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
label_265894:
    // 0x265894: 0x4a00  sll         $t1, $zero, 8
    ctx->pc = 0x265894u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_265898:
    // 0x265898: 0x0  nop
    ctx->pc = 0x265898u;
    // NOP
label_26589c:
    // 0x26589c: 0x0  nop
    ctx->pc = 0x26589cu;
    // NOP
label_2658a0:
    // 0x2658a0: 0xfe6c  .word       0x0000FE6C                   # dadd        $ra, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2658a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_2658a4:
    // 0x2658a4: 0x4260  .word       0x00004260                   # add         $t0, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2658a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2658a8:
    // 0x2658a8: 0x0  nop
    ctx->pc = 0x2658a8u;
    // NOP
label_2658ac:
    // 0x2658ac: 0x0  nop
    ctx->pc = 0x2658acu;
    // NOP
label_2658b0:
    // 0x2658b0: 0xfe75  .word       0x0000FE75                   # INVALID     $zero, $zero, -0x18B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2658b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2658B0 raw=0x0000FE75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2658b4:
    // 0x2658b4: 0x4e40  sll         $t1, $zero, 25
    ctx->pc = 0x2658b4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_2658b8:
    // 0x2658b8: 0x0  nop
    ctx->pc = 0x2658b8u;
    // NOP
label_2658bc:
    // 0x2658bc: 0x0  nop
    ctx->pc = 0x2658bcu;
    // NOP
label_2658c0:
    // 0x2658c0: 0xfe7f  dsra32      $ra, $zero, 25
    ctx->pc = 0x2658c0u;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 0) >> (32 + 25));
label_2658c4:
    // 0x2658c4: 0x4cc0  sll         $t1, $zero, 19
    ctx->pc = 0x2658c4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_2658c8:
    // 0x2658c8: 0x0  nop
    ctx->pc = 0x2658c8u;
    // NOP
label_2658cc:
    // 0x2658cc: 0x0  nop
    ctx->pc = 0x2658ccu;
    // NOP
label_2658d0:
    // 0x2658d0: 0xfe89  .word       0x0000FE89                   # jalr        $zero # 00000680 <InstrIdType: CPU_SPECIAL>
label_2658d4:
    if (ctx->pc == 0x2658D4u) {
        ctx->pc = 0x2658D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2658D0u;
        // 0x2658d4: 0x88e0  .word       0x000088E0                   # add         $s1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2658D8u;
        goto label_2658d8;
    }
    ctx->pc = 0x2658D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 31, 0x2658D8u);
        ctx->pc = 0x2658D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2658D0u;
        // 0x2658d4: 0x88e0  .word       0x000088E0                   # add         $s1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2658D0u, 0x2658D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2658D8u;
label_2658d8:
    // 0x2658d8: 0x0  nop
    ctx->pc = 0x2658d8u;
    // NOP
label_2658dc:
    // 0x2658dc: 0x0  nop
    ctx->pc = 0x2658dcu;
    // NOP
label_2658e0:
    // 0x2658e0: 0xfe9b  .word       0x0000FE9B                   # divu        $ra, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2658e0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2658e4:
    // 0x2658e4: 0x83b0  tge         $zero, $zero, 526
    ctx->pc = 0x2658e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2658e8:
    // 0x2658e8: 0x0  nop
    ctx->pc = 0x2658e8u;
    // NOP
label_2658ec:
    // 0x2658ec: 0x0  nop
    ctx->pc = 0x2658ecu;
    // NOP
label_2658f0:
    // 0x2658f0: 0xfeac  .word       0x0000FEAC                   # dadd        $ra, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2658f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_2658f4:
    // 0x2658f4: 0x5fb0  tge         $zero, $zero, 382
    ctx->pc = 0x2658f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2658f8:
    // 0x2658f8: 0x0  nop
    ctx->pc = 0x2658f8u;
    // NOP
label_2658fc:
    // 0x2658fc: 0x0  nop
    ctx->pc = 0x2658fcu;
    // NOP
label_265900:
    // 0x265900: 0xfeb8  dsll        $ra, $zero, 26
    ctx->pc = 0x265900u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) << 26);
label_265904:
    // 0x265904: 0x5410  .word       0x00005410                   # mfhi        $t2 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265904u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_265908:
    // 0x265908: 0x0  nop
    ctx->pc = 0x265908u;
    // NOP
label_26590c:
    // 0x26590c: 0x0  nop
    ctx->pc = 0x26590cu;
    // NOP
label_265910:
    // 0x265910: 0xfec3  sra         $ra, $zero, 27
    ctx->pc = 0x265910u;
    SET_GPR_S32(ctx, 31, SRA32(GPR_S32(ctx, 0), 27));
label_265914:
    // 0x265914: 0x6220  .word       0x00006220                   # add         $t4, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265914u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_265918:
    // 0x265918: 0x0  nop
    ctx->pc = 0x265918u;
    // NOP
label_26591c:
    // 0x26591c: 0x0  nop
    ctx->pc = 0x26591cu;
    // NOP
label_265920:
    // 0x265920: 0xfed0  .word       0x0000FED0                   # mfhi        $ra # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265920u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_265924:
    // 0x265924: 0x6aa0  .word       0x00006AA0                   # add         $t5, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265924u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_265928:
    // 0x265928: 0x0  nop
    ctx->pc = 0x265928u;
    // NOP
label_26592c:
    // 0x26592c: 0x0  nop
    ctx->pc = 0x26592cu;
    // NOP
label_265930:
    // 0x265930: 0xfede  .word       0x0000FEDE                   # ddiv        $ra, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265930u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x265930 raw=0x0000FEDE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265934:
    // 0x265934: 0x5590  .word       0x00005590                   # mfhi        $t2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265934u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_265938:
    // 0x265938: 0x0  nop
    ctx->pc = 0x265938u;
    // NOP
label_26593c:
    // 0x26593c: 0x0  nop
    ctx->pc = 0x26593cu;
    // NOP
label_265940:
    // 0x265940: 0xfee9  .word       0x0000FEE9                   # mtsa        $zero # 0000FEC0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x265940u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_265944:
    // 0x265944: 0x3f10  .word       0x00003F10                   # mfhi        $a3 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265944u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_265948:
    // 0x265948: 0x0  nop
    ctx->pc = 0x265948u;
    // NOP
label_26594c:
    // 0x26594c: 0x0  nop
    ctx->pc = 0x26594cu;
    // NOP
label_265950:
    // 0x265950: 0xfef1  tgeu        $zero, $zero, 1019
    ctx->pc = 0x265950u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265954:
    // 0x265954: 0x9100  sll         $s2, $zero, 4
    ctx->pc = 0x265954u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_265958:
    // 0x265958: 0x0  nop
    ctx->pc = 0x265958u;
    // NOP
label_26595c:
    // 0x26595c: 0x0  nop
    ctx->pc = 0x26595cu;
    // NOP
label_265960:
    // 0x265960: 0xff04  .word       0x0000FF04                   # sllv        $ra, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265960u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_265964:
    // 0x265964: 0xb310  .word       0x0000B310                   # mfhi        $s6 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265964u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_265968:
    // 0x265968: 0x0  nop
    ctx->pc = 0x265968u;
    // NOP
label_26596c:
    // 0x26596c: 0x0  nop
    ctx->pc = 0x26596cu;
    // NOP
label_265970:
    // 0x265970: 0xff1b  .word       0x0000FF1B                   # divu        $ra, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265970u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_265974:
    // 0x265974: 0x8670  tge         $zero, $zero, 537
    ctx->pc = 0x265974u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265978:
    // 0x265978: 0x0  nop
    ctx->pc = 0x265978u;
    // NOP
label_26597c:
    // 0x26597c: 0x0  nop
    ctx->pc = 0x26597cu;
    // NOP
label_265980:
    // 0x265980: 0xff2c  .word       0x0000FF2C                   # dadd        $ra, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265980u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_265984:
    // 0x265984: 0x87a0  .word       0x000087A0                   # add         $s0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265984u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_265988:
    // 0x265988: 0x0  nop
    ctx->pc = 0x265988u;
    // NOP
label_26598c:
    // 0x26598c: 0x0  nop
    ctx->pc = 0x26598cu;
    // NOP
label_265990:
    // 0x265990: 0xff3d  .word       0x0000FF3D                   # INVALID     $zero, $zero, -0xC3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265990u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x265990 raw=0x0000FF3D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265994:
    // 0x265994: 0x3930  tge         $zero, $zero, 228
    ctx->pc = 0x265994u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265998:
    // 0x265998: 0x0  nop
    ctx->pc = 0x265998u;
    // NOP
label_26599c:
    // 0x26599c: 0x0  nop
    ctx->pc = 0x26599cu;
    // NOP
label_2659a0:
    // 0x2659a0: 0xff45  .word       0x0000FF45                   # INVALID     $zero, $zero, -0xBB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2659a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2659A0 raw=0x0000FF45"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2659a4:
    // 0x2659a4: 0x3de0  .word       0x00003DE0                   # add         $a3, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2659a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_2659a8:
    // 0x2659a8: 0x0  nop
    ctx->pc = 0x2659a8u;
    // NOP
label_2659ac:
    // 0x2659ac: 0x0  nop
    ctx->pc = 0x2659acu;
    // NOP
label_2659b0:
    // 0x2659b0: 0xff4d  break       0, 1021
    ctx->pc = 0x2659b0u;
    runtime->handleBreak(rdram, ctx);
label_2659b4:
    // 0x2659b4: 0x6a40  sll         $t5, $zero, 9
    ctx->pc = 0x2659b4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_2659b8:
    // 0x2659b8: 0x0  nop
    ctx->pc = 0x2659b8u;
    // NOP
label_2659bc:
    // 0x2659bc: 0x0  nop
    ctx->pc = 0x2659bcu;
    // NOP
label_2659c0:
    // 0x2659c0: 0xff5b  .word       0x0000FF5B                   # divu        $ra, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2659c0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2659c4:
    // 0x2659c4: 0x35b0  tge         $zero, $zero, 214
    ctx->pc = 0x2659c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2659c8:
    // 0x2659c8: 0x0  nop
    ctx->pc = 0x2659c8u;
    // NOP
label_2659cc:
    // 0x2659cc: 0x0  nop
    ctx->pc = 0x2659ccu;
    // NOP
label_2659d0:
    // 0x2659d0: 0xff62  .word       0x0000FF62                   # neg         $ra, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2659d0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
label_2659d4:
    // 0x2659d4: 0x5a50  .word       0x00005A50                   # mfhi        $t3 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2659d4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2659d8:
    // 0x2659d8: 0x0  nop
    ctx->pc = 0x2659d8u;
    // NOP
label_2659dc:
    // 0x2659dc: 0x0  nop
    ctx->pc = 0x2659dcu;
    // NOP
label_2659e0:
    // 0x2659e0: 0xff6e  .word       0x0000FF6E                   # dsub        $ra, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2659e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_2659e4:
    // 0x2659e4: 0x98c0  sll         $s3, $zero, 3
    ctx->pc = 0x2659e4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_2659e8:
    // 0x2659e8: 0x0  nop
    ctx->pc = 0x2659e8u;
    // NOP
label_2659ec:
    // 0x2659ec: 0x0  nop
    ctx->pc = 0x2659ecu;
    // NOP
label_2659f0:
    // 0x2659f0: 0xff82  srl         $ra, $zero, 30
    ctx->pc = 0x2659f0u;
    SET_GPR_S32(ctx, 31, (int32_t)SRL32(GPR_U32(ctx, 0), 30));
label_2659f4:
    // 0x2659f4: 0x65d0  .word       0x000065D0                   # mfhi        $t4 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2659f4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_2659f8:
    // 0x2659f8: 0x0  nop
    ctx->pc = 0x2659f8u;
    // NOP
label_2659fc:
    // 0x2659fc: 0x0  nop
    ctx->pc = 0x2659fcu;
    // NOP
label_265a00:
    // 0x265a00: 0xff8f  .word       0x0000FF8F                   # sync.p # 0000F800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265a00u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_265a04:
    // 0x265a04: 0x4f40  sll         $t1, $zero, 29
    ctx->pc = 0x265a04u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_265a08:
    // 0x265a08: 0x0  nop
    ctx->pc = 0x265a08u;
    // NOP
label_265a0c:
    // 0x265a0c: 0x0  nop
    ctx->pc = 0x265a0cu;
    // NOP
label_265a10:
    // 0x265a10: 0xff99  .word       0x0000FF99                   # multu       $zero, $zero # 0000FF80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265a10u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_265a14:
    // 0x265a14: 0x2660  .word       0x00002660                   # add         $a0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265a14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_265a18:
    // 0x265a18: 0x0  nop
    ctx->pc = 0x265a18u;
    // NOP
label_265a1c:
    // 0x265a1c: 0x0  nop
    ctx->pc = 0x265a1cu;
    // NOP
label_265a20:
    // 0x265a20: 0xff9e  .word       0x0000FF9E                   # ddiv        $ra, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265a20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x265A20 raw=0x0000FF9E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265a24:
    // 0x265a24: 0x6b30  tge         $zero, $zero, 428
    ctx->pc = 0x265a24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265a28:
    // 0x265a28: 0x0  nop
    ctx->pc = 0x265a28u;
    // NOP
label_265a2c:
    // 0x265a2c: 0x0  nop
    ctx->pc = 0x265a2cu;
    // NOP
label_265a30:
    // 0x265a30: 0xffac  .word       0x0000FFAC                   # dadd        $ra, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265a30u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_265a34:
    // 0x265a34: 0x57b0  tge         $zero, $zero, 350
    ctx->pc = 0x265a34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265a38:
    // 0x265a38: 0x0  nop
    ctx->pc = 0x265a38u;
    // NOP
label_265a3c:
    // 0x265a3c: 0x0  nop
    ctx->pc = 0x265a3cu;
    // NOP
label_265a40:
    // 0x265a40: 0xffb7  .word       0x0000FFB7                   # INVALID     $zero, $zero, -0x49 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265a40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x265A40 raw=0x0000FFB7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265a44:
    // 0x265a44: 0x86e0  .word       0x000086E0                   # add         $s0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265a44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_265a48:
    // 0x265a48: 0x0  nop
    ctx->pc = 0x265a48u;
    // NOP
label_265a4c:
    // 0x265a4c: 0x0  nop
    ctx->pc = 0x265a4cu;
    // NOP
label_265a50:
    // 0x265a50: 0xffc8  .word       0x0000FFC8                   # jr          $zero # 0000FFC0 <InstrIdType: CPU_SPECIAL>
label_265a54:
    if (ctx->pc == 0x265A54u) {
        ctx->pc = 0x265A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265A50u;
        // 0x265a54: 0x6730  tge         $zero, $zero, 412 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x265A58u;
        goto label_265a58;
    }
    ctx->pc = 0x265A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x265A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265A50u;
        // 0x265a54: 0x6730  tge         $zero, $zero, 412 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265A50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x265A58u;
label_265a58:
    // 0x265a58: 0x0  nop
    ctx->pc = 0x265a58u;
    // NOP
label_265a5c:
    // 0x265a5c: 0x0  nop
    ctx->pc = 0x265a5cu;
    // NOP
label_265a60:
    // 0x265a60: 0xffd5  .word       0x0000FFD5                   # INVALID     $zero, $zero, -0x2B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265a60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x265A60 raw=0x0000FFD5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265a64:
    // 0x265a64: 0x6a90  .word       0x00006A90                   # mfhi        $t5 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265a64u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_265a68:
    // 0x265a68: 0x0  nop
    ctx->pc = 0x265a68u;
    // NOP
label_265a6c:
    // 0x265a6c: 0x0  nop
    ctx->pc = 0x265a6cu;
    // NOP
label_265a70:
    // 0x265a70: 0xffe3  .word       0x0000FFE3                   # negu        $ra, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265a70u;
    SET_GPR_S32(ctx, 31, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_265a74:
    // 0x265a74: 0x5ef0  tge         $zero, $zero, 379
    ctx->pc = 0x265a74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265a78:
    // 0x265a78: 0x0  nop
    ctx->pc = 0x265a78u;
    // NOP
label_265a7c:
    // 0x265a7c: 0x0  nop
    ctx->pc = 0x265a7cu;
    // NOP
label_265a80:
    // 0x265a80: 0xffef  .word       0x0000FFEF                   # dsubu       $ra, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265a80u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_265a84:
    // 0x265a84: 0x7990  .word       0x00007990                   # mfhi        $t7 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265a84u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_265a88:
    // 0x265a88: 0x0  nop
    ctx->pc = 0x265a88u;
    // NOP
label_265a8c:
    // 0x265a8c: 0x0  nop
    ctx->pc = 0x265a8cu;
    // NOP
label_265a90:
    // 0x265a90: 0xffff  dsra32      $ra, $zero, 31
    ctx->pc = 0x265a90u;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 0) >> (32 + 31));
label_265a94:
    // 0x265a94: 0x67f0  tge         $zero, $zero, 415
    ctx->pc = 0x265a94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265a98:
    // 0x265a98: 0x0  nop
    ctx->pc = 0x265a98u;
    // NOP
label_265a9c:
    // 0x265a9c: 0x0  nop
    ctx->pc = 0x265a9cu;
    // NOP
label_265aa0:
    // 0x265aa0: 0x1000c  .word       0x0001000C                   # syscall     0 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265aa0u;
    ctx->pc = 0x265AA4u;
runtime->handleSyscall(rdram, ctx, 0x400u);
label_265aa4:
    // 0x265aa4: 0x58e0  .word       0x000058E0                   # add         $t3, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265aa4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_265aa8:
    // 0x265aa8: 0x0  nop
    ctx->pc = 0x265aa8u;
    // NOP
label_265aac:
    // 0x265aac: 0x0  nop
    ctx->pc = 0x265aacu;
    // NOP
label_265ab0:
    // 0x265ab0: 0x10018  mult        $zero, $zero, $at
    ctx->pc = 0x265ab0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_265ab4:
    // 0x265ab4: 0x4570  tge         $zero, $zero, 277
    ctx->pc = 0x265ab4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265ab8:
    // 0x265ab8: 0x0  nop
    ctx->pc = 0x265ab8u;
    // NOP
label_265abc:
    // 0x265abc: 0x0  nop
    ctx->pc = 0x265abcu;
    // NOP
label_265ac0:
    // 0x265ac0: 0x10021  addu        $zero, $zero, $at
    ctx->pc = 0x265ac0u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_265ac4:
    // 0x265ac4: 0x6ca0  .word       0x00006CA0                   # add         $t5, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265ac4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_265ac8:
    // 0x265ac8: 0x0  nop
    ctx->pc = 0x265ac8u;
    // NOP
label_265acc:
    // 0x265acc: 0x0  nop
    ctx->pc = 0x265accu;
    // NOP
label_265ad0:
    // 0x265ad0: 0x1002f  dsubu       $zero, $zero, $at
    ctx->pc = 0x265ad0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_265ad4:
    // 0x265ad4: 0x5c10  .word       0x00005C10                   # mfhi        $t3 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265ad4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_265ad8:
    // 0x265ad8: 0x0  nop
    ctx->pc = 0x265ad8u;
    // NOP
label_265adc:
    // 0x265adc: 0x0  nop
    ctx->pc = 0x265adcu;
    // NOP
label_265ae0:
    // 0x265ae0: 0x1003b  dsra        $zero, $at, 0
    ctx->pc = 0x265ae0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> 0);
label_265ae4:
    // 0x265ae4: 0x41c0  sll         $t0, $zero, 7
    ctx->pc = 0x265ae4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_265ae8:
    // 0x265ae8: 0x0  nop
    ctx->pc = 0x265ae8u;
    // NOP
label_265aec:
    // 0x265aec: 0x0  nop
    ctx->pc = 0x265aecu;
    // NOP
label_265af0:
    // 0x265af0: 0x10044  .word       0x00010044                   # sllv        $zero, $at, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265af0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_265af4:
    // 0x265af4: 0x3490  .word       0x00003490                   # mfhi        $a2 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265af4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_265af8:
    // 0x265af8: 0x0  nop
    ctx->pc = 0x265af8u;
    // NOP
label_265afc:
    // 0x265afc: 0x0  nop
    ctx->pc = 0x265afcu;
    // NOP
label_265b00:
    // 0x265b00: 0x1004b  .word       0x0001004B                   # movn        $zero, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265b00u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_265b04:
    // 0x265b04: 0x5f80  sll         $t3, $zero, 30
    ctx->pc = 0x265b04u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_265b08:
    // 0x265b08: 0x0  nop
    ctx->pc = 0x265b08u;
    // NOP
label_265b0c:
    // 0x265b0c: 0x0  nop
    ctx->pc = 0x265b0cu;
    // NOP
label_265b10:
    // 0x265b10: 0x10057  .word       0x00010057                   # dsrav       $zero, $at, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265b10u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_265b14:
    // 0x265b14: 0x8780  sll         $s0, $zero, 30
    ctx->pc = 0x265b14u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_265b18:
    // 0x265b18: 0x0  nop
    ctx->pc = 0x265b18u;
    // NOP
label_265b1c:
    // 0x265b1c: 0x0  nop
    ctx->pc = 0x265b1cu;
    // NOP
label_265b20:
    // 0x265b20: 0x10068  .word       0x00010068                   # mfsa        $zero # 00010040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x265b20u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_265b24:
    // 0x265b24: 0x34d0  .word       0x000034D0                   # mfhi        $a2 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265b24u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_265b28:
    // 0x265b28: 0x0  nop
    ctx->pc = 0x265b28u;
    // NOP
label_265b2c:
    // 0x265b2c: 0x0  nop
    ctx->pc = 0x265b2cu;
    // NOP
label_265b30:
    // 0x265b30: 0x1006f  .word       0x0001006F                   # dsubu       $zero, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265b30u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_265b34:
    // 0x265b34: 0x3770  tge         $zero, $zero, 221
    ctx->pc = 0x265b34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265b38:
    // 0x265b38: 0x0  nop
    ctx->pc = 0x265b38u;
    // NOP
label_265b3c:
    // 0x265b3c: 0x0  nop
    ctx->pc = 0x265b3cu;
    // NOP
label_265b40:
    // 0x265b40: 0x10076  tne         $zero, $at, 1
    ctx->pc = 0x265b40u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_265b44:
    // 0x265b44: 0x51d0  .word       0x000051D0                   # mfhi        $t2 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265b44u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_265b48:
    // 0x265b48: 0x0  nop
    ctx->pc = 0x265b48u;
    // NOP
label_265b4c:
    // 0x265b4c: 0x0  nop
    ctx->pc = 0x265b4cu;
    // NOP
label_265b50:
    // 0x265b50: 0x10081  .word       0x00010081                   # INVALID     $zero, $at, 0x81 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265b50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x265B50 raw=0x00010081"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265b54:
    // 0x265b54: 0x6f00  sll         $t5, $zero, 28
    ctx->pc = 0x265b54u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_265b58:
    // 0x265b58: 0x0  nop
    ctx->pc = 0x265b58u;
    // NOP
label_265b5c:
    // 0x265b5c: 0x0  nop
    ctx->pc = 0x265b5cu;
    // NOP
label_265b60:
    // 0x265b60: 0x1008f  .word       0x0001008F                   # sync # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265b60u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_265b64:
    // 0x265b64: 0x29c0  sll         $a1, $zero, 7
    ctx->pc = 0x265b64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_265b68:
    // 0x265b68: 0x0  nop
    ctx->pc = 0x265b68u;
    // NOP
label_265b6c:
    // 0x265b6c: 0x0  nop
    ctx->pc = 0x265b6cu;
    // NOP
label_265b70:
    // 0x265b70: 0x10095  .word       0x00010095                   # INVALID     $zero, $at, 0x95 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265b70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x265B70 raw=0x00010095"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265b74:
    // 0x265b74: 0x5c10  .word       0x00005C10                   # mfhi        $t3 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265b74u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_265b78:
    // 0x265b78: 0x0  nop
    ctx->pc = 0x265b78u;
    // NOP
label_265b7c:
    // 0x265b7c: 0x0  nop
    ctx->pc = 0x265b7cu;
    // NOP
label_265b80:
    // 0x265b80: 0x100a1  .word       0x000100A1                   # addu        $zero, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265b80u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_265b84:
    // 0x265b84: 0x56d0  .word       0x000056D0                   # mfhi        $t2 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265b84u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_265b88:
    // 0x265b88: 0x0  nop
    ctx->pc = 0x265b88u;
    // NOP
label_265b8c:
    // 0x265b8c: 0x0  nop
    ctx->pc = 0x265b8cu;
    // NOP
label_265b90:
    // 0x265b90: 0x100ac  .word       0x000100AC                   # dadd        $zero, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265b90u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_265b94:
    // 0x265b94: 0x4e00  sll         $t1, $zero, 24
    ctx->pc = 0x265b94u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_265b98:
    // 0x265b98: 0x0  nop
    ctx->pc = 0x265b98u;
    // NOP
label_265b9c:
    // 0x265b9c: 0x0  nop
    ctx->pc = 0x265b9cu;
    // NOP
label_265ba0:
    // 0x265ba0: 0x100b6  tne         $zero, $at, 2
    ctx->pc = 0x265ba0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_265ba4:
    // 0x265ba4: 0x3c20  .word       0x00003C20                   # add         $a3, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265ba4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_265ba8:
    // 0x265ba8: 0x0  nop
    ctx->pc = 0x265ba8u;
    // NOP
label_265bac:
    // 0x265bac: 0x0  nop
    ctx->pc = 0x265bacu;
    // NOP
label_265bb0:
    // 0x265bb0: 0x100be  dsrl32      $zero, $at, 2
    ctx->pc = 0x265bb0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) >> (32 + 2));
label_265bb4:
    // 0x265bb4: 0x5ff0  tge         $zero, $zero, 383
    ctx->pc = 0x265bb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265bb8:
    // 0x265bb8: 0x0  nop
    ctx->pc = 0x265bb8u;
    // NOP
label_265bbc:
    // 0x265bbc: 0x0  nop
    ctx->pc = 0x265bbcu;
    // NOP
label_265bc0:
    // 0x265bc0: 0x100ca  .word       0x000100CA                   # movz        $zero, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265bc0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_265bc4:
    // 0x265bc4: 0x8470  tge         $zero, $zero, 529
    ctx->pc = 0x265bc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265bc8:
    // 0x265bc8: 0x0  nop
    ctx->pc = 0x265bc8u;
    // NOP
label_265bcc:
    // 0x265bcc: 0x0  nop
    ctx->pc = 0x265bccu;
    // NOP
label_265bd0:
    // 0x265bd0: 0x100db  .word       0x000100DB                   # divu        $zero, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265bd0u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_265bd4:
    // 0x265bd4: 0x4d60  .word       0x00004D60                   # add         $t1, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265bd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_265bd8:
    // 0x265bd8: 0x0  nop
    ctx->pc = 0x265bd8u;
    // NOP
label_265bdc:
    // 0x265bdc: 0x0  nop
    ctx->pc = 0x265bdcu;
    // NOP
label_265be0:
    // 0x265be0: 0x100e5  .word       0x000100E5                   # or          $zero, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265be0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_265be4:
    // 0x265be4: 0x48b0  tge         $zero, $zero, 290
    ctx->pc = 0x265be4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265be8:
    // 0x265be8: 0x0  nop
    ctx->pc = 0x265be8u;
    // NOP
label_265bec:
    // 0x265bec: 0x0  nop
    ctx->pc = 0x265becu;
    // NOP
label_265bf0:
    // 0x265bf0: 0x100ef  .word       0x000100EF                   # dsubu       $zero, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265bf0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_265bf4:
    // 0x265bf4: 0x3ad0  .word       0x00003AD0                   # mfhi        $a3 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265bf4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_265bf8:
    // 0x265bf8: 0x0  nop
    ctx->pc = 0x265bf8u;
    // NOP
label_265bfc:
    // 0x265bfc: 0x0  nop
    ctx->pc = 0x265bfcu;
    // NOP
label_265c00:
    // 0x265c00: 0x100f7  .word       0x000100F7                   # INVALID     $zero, $at, 0xF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265c00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x265C00 raw=0x000100F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265c04:
    // 0x265c04: 0x5170  tge         $zero, $zero, 325
    ctx->pc = 0x265c04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265c08:
    // 0x265c08: 0x0  nop
    ctx->pc = 0x265c08u;
    // NOP
label_265c0c:
    // 0x265c0c: 0x0  nop
    ctx->pc = 0x265c0cu;
    // NOP
label_265c10:
    // 0x265c10: 0x10102  srl         $zero, $at, 4
    ctx->pc = 0x265c10u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 1), 4));
label_265c14:
    // 0x265c14: 0x3f10  .word       0x00003F10                   # mfhi        $a3 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265c14u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_265c18:
    // 0x265c18: 0x0  nop
    ctx->pc = 0x265c18u;
    // NOP
label_265c1c:
    // 0x265c1c: 0x0  nop
    ctx->pc = 0x265c1cu;
    // NOP
label_265c20:
    // 0x265c20: 0x1010a  .word       0x0001010A                   # movz        $zero, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265c20u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_265c24:
    // 0x265c24: 0x5430  tge         $zero, $zero, 336
    ctx->pc = 0x265c24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265c28:
    // 0x265c28: 0x0  nop
    ctx->pc = 0x265c28u;
    // NOP
label_265c2c:
    // 0x265c2c: 0x0  nop
    ctx->pc = 0x265c2cu;
    // NOP
label_265c30:
    // 0x265c30: 0x10115  .word       0x00010115                   # INVALID     $zero, $at, 0x115 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265c30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x265C30 raw=0x00010115"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265c34:
    // 0x265c34: 0x57d0  .word       0x000057D0                   # mfhi        $t2 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265c34u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_265c38:
    // 0x265c38: 0x0  nop
    ctx->pc = 0x265c38u;
    // NOP
label_265c3c:
    // 0x265c3c: 0x0  nop
    ctx->pc = 0x265c3cu;
    // NOP
label_265c40:
    // 0x265c40: 0x10120  .word       0x00010120                   # add         $zero, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265c40u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_265c44:
    // 0x265c44: 0x5fc0  sll         $t3, $zero, 31
    ctx->pc = 0x265c44u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_265c48:
    // 0x265c48: 0x0  nop
    ctx->pc = 0x265c48u;
    // NOP
label_265c4c:
    // 0x265c4c: 0x0  nop
    ctx->pc = 0x265c4cu;
    // NOP
label_265c50:
    // 0x265c50: 0x1012c  .word       0x0001012C                   # dadd        $zero, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265c50u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_265c54:
    // 0x265c54: 0x5430  tge         $zero, $zero, 336
    ctx->pc = 0x265c54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265c58:
    // 0x265c58: 0x0  nop
    ctx->pc = 0x265c58u;
    // NOP
label_265c5c:
    // 0x265c5c: 0x0  nop
    ctx->pc = 0x265c5cu;
    // NOP
label_265c60:
    // 0x265c60: 0x10137  .word       0x00010137                   # INVALID     $zero, $at, 0x137 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265c60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x265C60 raw=0x00010137"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265c64:
    // 0x265c64: 0x41e0  .word       0x000041E0                   # add         $t0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265c64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_265c68:
    // 0x265c68: 0x0  nop
    ctx->pc = 0x265c68u;
    // NOP
label_265c6c:
    // 0x265c6c: 0x0  nop
    ctx->pc = 0x265c6cu;
    // NOP
label_265c70:
    // 0x265c70: 0x10140  sll         $zero, $at, 5
    ctx->pc = 0x265c70u;
    
label_265c74:
    // 0x265c74: 0x3360  .word       0x00003360                   # add         $a2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265c74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_265c78:
    // 0x265c78: 0x0  nop
    ctx->pc = 0x265c78u;
    // NOP
label_265c7c:
    // 0x265c7c: 0x0  nop
    ctx->pc = 0x265c7cu;
    // NOP
label_265c80:
    // 0x265c80: 0x10147  .word       0x00010147                   # srav        $zero, $at, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265c80u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_265c84:
    // 0x265c84: 0x7090  .word       0x00007090                   # mfhi        $t6 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265c84u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_265c88:
    // 0x265c88: 0x0  nop
    ctx->pc = 0x265c88u;
    // NOP
label_265c8c:
    // 0x265c8c: 0x0  nop
    ctx->pc = 0x265c8cu;
    // NOP
label_265c90:
    // 0x265c90: 0x10156  .word       0x00010156                   # dsrlv       $zero, $at, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265c90u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_265c94:
    // 0x265c94: 0x4880  sll         $t1, $zero, 2
    ctx->pc = 0x265c94u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_265c98:
    // 0x265c98: 0x0  nop
    ctx->pc = 0x265c98u;
    // NOP
label_265c9c:
    // 0x265c9c: 0x0  nop
    ctx->pc = 0x265c9cu;
    // NOP
label_265ca0:
    // 0x265ca0: 0x10160  .word       0x00010160                   # add         $zero, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265ca0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_265ca4:
    // 0x265ca4: 0x68b0  tge         $zero, $zero, 418
    ctx->pc = 0x265ca4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265ca8:
    // 0x265ca8: 0x0  nop
    ctx->pc = 0x265ca8u;
    // NOP
label_265cac:
    // 0x265cac: 0x0  nop
    ctx->pc = 0x265cacu;
    // NOP
label_265cb0:
    // 0x265cb0: 0x1016e  .word       0x0001016E                   # dsub        $zero, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265cb0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_265cb4:
    // 0x265cb4: 0x6d60  .word       0x00006D60                   # add         $t5, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265cb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_265cb8:
    // 0x265cb8: 0x0  nop
    ctx->pc = 0x265cb8u;
    // NOP
label_265cbc:
    // 0x265cbc: 0x0  nop
    ctx->pc = 0x265cbcu;
    // NOP
label_265cc0:
    // 0x265cc0: 0x1017c  dsll32      $zero, $at, 5
    ctx->pc = 0x265cc0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) << (32 + 5));
label_265cc4:
    // 0x265cc4: 0x9210  .word       0x00009210                   # mfhi        $s2 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265cc4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_265cc8:
    // 0x265cc8: 0x0  nop
    ctx->pc = 0x265cc8u;
    // NOP
label_265ccc:
    // 0x265ccc: 0x0  nop
    ctx->pc = 0x265cccu;
    // NOP
label_265cd0:
    // 0x265cd0: 0x1018f  .word       0x0001018F                   # sync # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265cd0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_265cd4:
    // 0x265cd4: 0xb580  sll         $s6, $zero, 22
    ctx->pc = 0x265cd4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_265cd8:
    // 0x265cd8: 0x0  nop
    ctx->pc = 0x265cd8u;
    // NOP
label_265cdc:
    // 0x265cdc: 0x0  nop
    ctx->pc = 0x265cdcu;
    // NOP
label_265ce0:
    // 0x265ce0: 0x101a6  .word       0x000101A6                   # xor         $zero, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265ce0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_265ce4:
    // 0x265ce4: 0x6ee0  .word       0x00006EE0                   # add         $t5, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265ce4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_265ce8:
    // 0x265ce8: 0x0  nop
    ctx->pc = 0x265ce8u;
    // NOP
label_265cec:
    // 0x265cec: 0x0  nop
    ctx->pc = 0x265cecu;
    // NOP
label_265cf0:
    // 0x265cf0: 0x101b4  teq         $zero, $at, 6
    ctx->pc = 0x265cf0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_265cf4:
    // 0x265cf4: 0x5e00  sll         $t3, $zero, 24
    ctx->pc = 0x265cf4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_265cf8:
    // 0x265cf8: 0x0  nop
    ctx->pc = 0x265cf8u;
    // NOP
label_265cfc:
    // 0x265cfc: 0x0  nop
    ctx->pc = 0x265cfcu;
    // NOP
label_265d00:
    // 0x265d00: 0x101c0  sll         $zero, $at, 7
    ctx->pc = 0x265d00u;
    
label_265d04:
    // 0x265d04: 0x56c0  sll         $t2, $zero, 27
    ctx->pc = 0x265d04u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_265d08:
    // 0x265d08: 0x0  nop
    ctx->pc = 0x265d08u;
    // NOP
label_265d0c:
    // 0x265d0c: 0x0  nop
    ctx->pc = 0x265d0cu;
    // NOP
label_265d10:
    // 0x265d10: 0x101cb  .word       0x000101CB                   # movn        $zero, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265d10u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_265d14:
    // 0x265d14: 0x54e0  .word       0x000054E0                   # add         $t2, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265d14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_265d18:
    // 0x265d18: 0x0  nop
    ctx->pc = 0x265d18u;
    // NOP
label_265d1c:
    // 0x265d1c: 0x0  nop
    ctx->pc = 0x265d1cu;
    // NOP
label_265d20:
    // 0x265d20: 0x101d6  .word       0x000101D6                   # dsrlv       $zero, $at, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265d20u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_265d24:
    // 0x265d24: 0x4bb0  tge         $zero, $zero, 302
    ctx->pc = 0x265d24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265d28:
    // 0x265d28: 0x0  nop
    ctx->pc = 0x265d28u;
    // NOP
label_265d2c:
    // 0x265d2c: 0x0  nop
    ctx->pc = 0x265d2cu;
    // NOP
label_265d30:
    // 0x265d30: 0x101e0  .word       0x000101E0                   # add         $zero, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265d30u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_265d34:
    // 0x265d34: 0x3bb0  tge         $zero, $zero, 238
    ctx->pc = 0x265d34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265d38:
    // 0x265d38: 0x0  nop
    ctx->pc = 0x265d38u;
    // NOP
label_265d3c:
    // 0x265d3c: 0x0  nop
    ctx->pc = 0x265d3cu;
    // NOP
label_265d40:
    // 0x265d40: 0x101e8  .word       0x000101E8                   # mfsa        $zero # 000101C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x265d40u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_265d44:
    // 0x265d44: 0x65b0  tge         $zero, $zero, 406
    ctx->pc = 0x265d44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265d48:
    // 0x265d48: 0x0  nop
    ctx->pc = 0x265d48u;
    // NOP
label_265d4c:
    // 0x265d4c: 0x0  nop
    ctx->pc = 0x265d4cu;
    // NOP
label_265d50:
    // 0x265d50: 0x101f5  .word       0x000101F5                   # INVALID     $zero, $at, 0x1F5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265d50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x265D50 raw=0x000101F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265d54:
    // 0x265d54: 0xb090  .word       0x0000B090                   # mfhi        $s6 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265d54u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_265d58:
    // 0x265d58: 0x0  nop
    ctx->pc = 0x265d58u;
    // NOP
label_265d5c:
    // 0x265d5c: 0x0  nop
    ctx->pc = 0x265d5cu;
    // NOP
label_265d60:
    // 0x265d60: 0x1020c  .word       0x0001020C                   # syscall     8 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265d60u;
    ctx->pc = 0x265D64u;
runtime->handleSyscall(rdram, ctx, 0x408u);
label_265d64:
    // 0x265d64: 0x4390  .word       0x00004390                   # mfhi        $t0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265d64u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_265d68:
    // 0x265d68: 0x0  nop
    ctx->pc = 0x265d68u;
    // NOP
label_265d6c:
    // 0x265d6c: 0x0  nop
    ctx->pc = 0x265d6cu;
    // NOP
label_265d70:
    // 0x265d70: 0x10215  .word       0x00010215                   # INVALID     $zero, $at, 0x215 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265d70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x265D70 raw=0x00010215"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265d74:
    // 0x265d74: 0x65b0  tge         $zero, $zero, 406
    ctx->pc = 0x265d74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265d78:
    // 0x265d78: 0x0  nop
    ctx->pc = 0x265d78u;
    // NOP
label_265d7c:
    // 0x265d7c: 0x0  nop
    ctx->pc = 0x265d7cu;
    // NOP
label_265d80:
    // 0x265d80: 0x10222  .word       0x00010222                   # neg         $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265d80u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_265d84:
    // 0x265d84: 0x47a0  .word       0x000047A0                   # add         $t0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265d84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_265d88:
    // 0x265d88: 0x0  nop
    ctx->pc = 0x265d88u;
    // NOP
label_265d8c:
    // 0x265d8c: 0x0  nop
    ctx->pc = 0x265d8cu;
    // NOP
label_265d90:
    // 0x265d90: 0x1022b  .word       0x0001022B                   # sltu        $zero, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265d90u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_265d94:
    // 0x265d94: 0x4aa0  .word       0x00004AA0                   # add         $t1, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265d94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_265d98:
    // 0x265d98: 0x0  nop
    ctx->pc = 0x265d98u;
    // NOP
label_265d9c:
    // 0x265d9c: 0x0  nop
    ctx->pc = 0x265d9cu;
    // NOP
label_265da0:
    // 0x265da0: 0x10235  .word       0x00010235                   # INVALID     $zero, $at, 0x235 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265da0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x265DA0 raw=0x00010235"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265da4:
    // 0x265da4: 0x4360  .word       0x00004360                   # add         $t0, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265da4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_265da8:
    // 0x265da8: 0x0  nop
    ctx->pc = 0x265da8u;
    // NOP
label_265dac:
    // 0x265dac: 0x0  nop
    ctx->pc = 0x265dacu;
    // NOP
label_265db0:
    // 0x265db0: 0x1023e  dsrl32      $zero, $at, 8
    ctx->pc = 0x265db0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) >> (32 + 8));
label_265db4:
    // 0x265db4: 0x2dd0  .word       0x00002DD0                   # mfhi        $a1 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265db4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_265db8:
    // 0x265db8: 0x0  nop
    ctx->pc = 0x265db8u;
    // NOP
label_265dbc:
    // 0x265dbc: 0x0  nop
    ctx->pc = 0x265dbcu;
    // NOP
label_265dc0:
    // 0x265dc0: 0x10244  .word       0x00010244                   # sllv        $zero, $at, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265dc0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_265dc4:
    // 0x265dc4: 0x2eb0  tge         $zero, $zero, 186
    ctx->pc = 0x265dc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265dc8:
    // 0x265dc8: 0x0  nop
    ctx->pc = 0x265dc8u;
    // NOP
label_265dcc:
    // 0x265dcc: 0x0  nop
    ctx->pc = 0x265dccu;
    // NOP
label_265dd0:
    // 0x265dd0: 0x1024a  .word       0x0001024A                   # movz        $zero, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265dd0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_265dd4:
    // 0x265dd4: 0x9e70  tge         $zero, $zero, 633
    ctx->pc = 0x265dd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265dd8:
    // 0x265dd8: 0x0  nop
    ctx->pc = 0x265dd8u;
    // NOP
label_265ddc:
    // 0x265ddc: 0x0  nop
    ctx->pc = 0x265ddcu;
    // NOP
label_265de0:
    // 0x265de0: 0x1025e  .word       0x0001025E                   # ddiv        $zero, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265de0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x265DE0 raw=0x0001025E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265de4:
    // 0x265de4: 0x32b0  tge         $zero, $zero, 202
    ctx->pc = 0x265de4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265de8:
    // 0x265de8: 0x0  nop
    ctx->pc = 0x265de8u;
    // NOP
label_265dec:
    // 0x265dec: 0x0  nop
    ctx->pc = 0x265decu;
    // NOP
label_265df0:
    // 0x265df0: 0x10265  .word       0x00010265                   # or          $zero, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265df0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_265df4:
    // 0x265df4: 0x45f0  tge         $zero, $zero, 279
    ctx->pc = 0x265df4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265df8:
    // 0x265df8: 0x0  nop
    ctx->pc = 0x265df8u;
    // NOP
label_265dfc:
    // 0x265dfc: 0x0  nop
    ctx->pc = 0x265dfcu;
    // NOP
label_265e00:
    // 0x265e00: 0x1026e  .word       0x0001026E                   # dsub        $zero, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265e00u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_265e04:
    // 0x265e04: 0x45f0  tge         $zero, $zero, 279
    ctx->pc = 0x265e04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265e08:
    // 0x265e08: 0x0  nop
    ctx->pc = 0x265e08u;
    // NOP
label_265e0c:
    // 0x265e0c: 0x0  nop
    ctx->pc = 0x265e0cu;
    // NOP
label_265e10:
    // 0x265e10: 0x10277  .word       0x00010277                   # INVALID     $zero, $at, 0x277 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265e10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x265E10 raw=0x00010277"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265e14:
    // 0x265e14: 0x54a0  .word       0x000054A0                   # add         $t2, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265e14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_265e18:
    // 0x265e18: 0x0  nop
    ctx->pc = 0x265e18u;
    // NOP
label_265e1c:
    // 0x265e1c: 0x0  nop
    ctx->pc = 0x265e1cu;
    // NOP
label_265e20:
    // 0x265e20: 0x10282  srl         $zero, $at, 10
    ctx->pc = 0x265e20u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 1), 10));
label_265e24:
    // 0x265e24: 0x4b40  sll         $t1, $zero, 13
    ctx->pc = 0x265e24u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_265e28:
    // 0x265e28: 0x0  nop
    ctx->pc = 0x265e28u;
    // NOP
label_265e2c:
    // 0x265e2c: 0x0  nop
    ctx->pc = 0x265e2cu;
    // NOP
label_265e30:
    // 0x265e30: 0x1028c  .word       0x0001028C                   # syscall     10 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265e30u;
    ctx->pc = 0x265E34u;
runtime->handleSyscall(rdram, ctx, 0x40Au);
label_265e34:
    // 0x265e34: 0x5540  sll         $t2, $zero, 21
    ctx->pc = 0x265e34u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_265e38:
    // 0x265e38: 0x0  nop
    ctx->pc = 0x265e38u;
    // NOP
label_265e3c:
    // 0x265e3c: 0x0  nop
    ctx->pc = 0x265e3cu;
    // NOP
label_265e40:
    // 0x265e40: 0x10297  .word       0x00010297                   # dsrav       $zero, $at, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265e40u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_265e44:
    // 0x265e44: 0x5c80  sll         $t3, $zero, 18
    ctx->pc = 0x265e44u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_265e48:
    // 0x265e48: 0x0  nop
    ctx->pc = 0x265e48u;
    // NOP
label_265e4c:
    // 0x265e4c: 0x0  nop
    ctx->pc = 0x265e4cu;
    // NOP
label_265e50:
    // 0x265e50: 0x102a3  .word       0x000102A3                   # negu        $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265e50u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_265e54:
    // 0x265e54: 0xa550  .word       0x0000A550                   # mfhi        $s4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265e54u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_265e58:
    // 0x265e58: 0x0  nop
    ctx->pc = 0x265e58u;
    // NOP
label_265e5c:
    // 0x265e5c: 0x0  nop
    ctx->pc = 0x265e5cu;
    // NOP
label_265e60:
    // 0x265e60: 0x102b8  dsll        $zero, $at, 10
    ctx->pc = 0x265e60u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) << 10);
label_265e64:
    // 0x265e64: 0xcf50  .word       0x0000CF50                   # mfhi        $t9 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265e64u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_265e68:
    // 0x265e68: 0x0  nop
    ctx->pc = 0x265e68u;
    // NOP
label_265e6c:
    // 0x265e6c: 0x0  nop
    ctx->pc = 0x265e6cu;
    // NOP
label_265e70:
    // 0x265e70: 0x102d2  .word       0x000102D2                   # mflo        $zero # 000102C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265e70u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_265e74:
    // 0x265e74: 0xaf20  .word       0x0000AF20                   # add         $s5, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265e74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_265e78:
    // 0x265e78: 0x0  nop
    ctx->pc = 0x265e78u;
    // NOP
label_265e7c:
    // 0x265e7c: 0x0  nop
    ctx->pc = 0x265e7cu;
    // NOP
label_265e80:
    // 0x265e80: 0x102e8  .word       0x000102E8                   # mfsa        $zero # 000102C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x265e80u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_265e84:
    // 0x265e84: 0x9d30  tge         $zero, $zero, 628
    ctx->pc = 0x265e84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265e88:
    // 0x265e88: 0x0  nop
    ctx->pc = 0x265e88u;
    // NOP
label_265e8c:
    // 0x265e8c: 0x0  nop
    ctx->pc = 0x265e8cu;
    // NOP
label_265e90:
    // 0x265e90: 0x102fc  dsll32      $zero, $at, 11
    ctx->pc = 0x265e90u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) << (32 + 11));
label_265e94:
    // 0x265e94: 0xafa0  .word       0x0000AFA0                   # add         $s5, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265e94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_265e98:
    // 0x265e98: 0x0  nop
    ctx->pc = 0x265e98u;
    // NOP
label_265e9c:
    // 0x265e9c: 0x0  nop
    ctx->pc = 0x265e9cu;
    // NOP
label_265ea0:
    // 0x265ea0: 0x10312  .word       0x00010312                   # mflo        $zero # 00010300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265ea0u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_265ea4:
    // 0x265ea4: 0xab50  .word       0x0000AB50                   # mfhi        $s5 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265ea4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_265ea8:
    // 0x265ea8: 0x0  nop
    ctx->pc = 0x265ea8u;
    // NOP
label_265eac:
    // 0x265eac: 0x0  nop
    ctx->pc = 0x265eacu;
    // NOP
label_265eb0:
    // 0x265eb0: 0x10328  .word       0x00010328                   # mfsa        $zero # 00010300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x265eb0u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_265eb4:
    // 0x265eb4: 0x6230  tge         $zero, $zero, 392
    ctx->pc = 0x265eb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265eb8:
    // 0x265eb8: 0x0  nop
    ctx->pc = 0x265eb8u;
    // NOP
label_265ebc:
    // 0x265ebc: 0x0  nop
    ctx->pc = 0x265ebcu;
    // NOP
label_265ec0:
    // 0x265ec0: 0x10335  .word       0x00010335                   # INVALID     $zero, $at, 0x335 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265ec0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x265EC0 raw=0x00010335"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265ec4:
    // 0x265ec4: 0x6990  .word       0x00006990                   # mfhi        $t5 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265ec4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_265ec8:
    // 0x265ec8: 0x0  nop
    ctx->pc = 0x265ec8u;
    // NOP
label_265ecc:
    // 0x265ecc: 0x0  nop
    ctx->pc = 0x265eccu;
    // NOP
label_265ed0:
    // 0x265ed0: 0x10343  sra         $zero, $at, 13
    ctx->pc = 0x265ed0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 1), 13));
label_265ed4:
    // 0x265ed4: 0x7650  .word       0x00007650                   # mfhi        $t6 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265ed4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_265ed8:
    // 0x265ed8: 0x0  nop
    ctx->pc = 0x265ed8u;
    // NOP
label_265edc:
    // 0x265edc: 0x0  nop
    ctx->pc = 0x265edcu;
    // NOP
label_265ee0:
    // 0x265ee0: 0x10352  .word       0x00010352                   # mflo        $zero # 00010340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265ee0u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_265ee4:
    // 0x265ee4: 0xc2a0  .word       0x0000C2A0                   # add         $t8, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265ee4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_265ee8:
    // 0x265ee8: 0x0  nop
    ctx->pc = 0x265ee8u;
    // NOP
label_265eec:
    // 0x265eec: 0x0  nop
    ctx->pc = 0x265eecu;
    // NOP
label_265ef0:
    // 0x265ef0: 0x1036b  .word       0x0001036B                   # sltu        $zero, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265ef0u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_265ef4:
    // 0x265ef4: 0x72d0  .word       0x000072D0                   # mfhi        $t6 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265ef4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_265ef8:
    // 0x265ef8: 0x0  nop
    ctx->pc = 0x265ef8u;
    // NOP
label_265efc:
    // 0x265efc: 0x0  nop
    ctx->pc = 0x265efcu;
    // NOP
label_265f00:
    // 0x265f00: 0x1037a  dsrl        $zero, $at, 13
    ctx->pc = 0x265f00u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) >> 13);
label_265f04:
    // 0x265f04: 0x7160  .word       0x00007160                   # add         $t6, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265f04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_265f08:
    // 0x265f08: 0x0  nop
    ctx->pc = 0x265f08u;
    // NOP
label_265f0c:
    // 0x265f0c: 0x0  nop
    ctx->pc = 0x265f0cu;
    // NOP
label_265f10:
    // 0x265f10: 0x10389  .word       0x00010389                   # jalr        $zero, $zero # 00010380 <InstrIdType: CPU_SPECIAL>
label_265f14:
    if (ctx->pc == 0x265F14u) {
        ctx->pc = 0x265F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265F10u;
        // 0x265f14: 0x5aa0  .word       0x00005AA0                   # add         $t3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x265F18u;
        goto label_265f18;
    }
    ctx->pc = 0x265F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x265F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265F10u;
        // 0x265f14: 0x5aa0  .word       0x00005AA0                   # add         $t3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265F10u, 0x265F18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x265F18u;
label_265f18:
    // 0x265f18: 0x0  nop
    ctx->pc = 0x265f18u;
    // NOP
label_265f1c:
    // 0x265f1c: 0x0  nop
    ctx->pc = 0x265f1cu;
    // NOP
label_265f20:
    // 0x265f20: 0x10395  .word       0x00010395                   # INVALID     $zero, $at, 0x395 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265f20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x265F20 raw=0x00010395"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265f24:
    // 0x265f24: 0x51c0  sll         $t2, $zero, 7
    ctx->pc = 0x265f24u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_265f28:
    // 0x265f28: 0x0  nop
    ctx->pc = 0x265f28u;
    // NOP
label_265f2c:
    // 0x265f2c: 0x0  nop
    ctx->pc = 0x265f2cu;
    // NOP
label_265f30:
    // 0x265f30: 0x103a0  .word       0x000103A0                   # add         $zero, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265f30u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_265f34:
    // 0x265f34: 0x4170  tge         $zero, $zero, 261
    ctx->pc = 0x265f34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265f38:
    // 0x265f38: 0x0  nop
    ctx->pc = 0x265f38u;
    // NOP
label_265f3c:
    // 0x265f3c: 0x0  nop
    ctx->pc = 0x265f3cu;
    // NOP
label_265f40:
    // 0x265f40: 0x103a9  .word       0x000103A9                   # mtsa        $zero # 00010380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x265f40u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_265f44:
    // 0x265f44: 0x2d40  sll         $a1, $zero, 21
    ctx->pc = 0x265f44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_265f48:
    // 0x265f48: 0x0  nop
    ctx->pc = 0x265f48u;
    // NOP
label_265f4c:
    // 0x265f4c: 0x0  nop
    ctx->pc = 0x265f4cu;
    // NOP
label_265f50:
    // 0x265f50: 0x103af  .word       0x000103AF                   # dsubu       $zero, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265f50u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_265f54:
    // 0x265f54: 0x7b50  .word       0x00007B50                   # mfhi        $t7 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265f54u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_265f58:
    // 0x265f58: 0x0  nop
    ctx->pc = 0x265f58u;
    // NOP
label_265f5c:
    // 0x265f5c: 0x0  nop
    ctx->pc = 0x265f5cu;
    // NOP
label_265f60:
    // 0x265f60: 0x103bf  dsra32      $zero, $at, 14
    ctx->pc = 0x265f60u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> (32 + 14));
label_265f64:
    // 0x265f64: 0x8540  sll         $s0, $zero, 21
    ctx->pc = 0x265f64u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_265f68:
    // 0x265f68: 0x0  nop
    ctx->pc = 0x265f68u;
    // NOP
label_265f6c:
    // 0x265f6c: 0x0  nop
    ctx->pc = 0x265f6cu;
    // NOP
label_265f70:
    // 0x265f70: 0x103d0  .word       0x000103D0                   # mfhi        $zero # 000103C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265f70u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_265f74:
    // 0x265f74: 0x4890  .word       0x00004890                   # mfhi        $t1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265f74u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_265f78:
    // 0x265f78: 0x0  nop
    ctx->pc = 0x265f78u;
    // NOP
label_265f7c:
    // 0x265f7c: 0x0  nop
    ctx->pc = 0x265f7cu;
    // NOP
label_265f80:
    // 0x265f80: 0x103da  .word       0x000103DA                   # div         $zero, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265f80u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_265f84:
    // 0x265f84: 0x48f0  tge         $zero, $zero, 291
    ctx->pc = 0x265f84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265f88:
    // 0x265f88: 0x0  nop
    ctx->pc = 0x265f88u;
    // NOP
label_265f8c:
    // 0x265f8c: 0x0  nop
    ctx->pc = 0x265f8cu;
    // NOP
label_265f90:
    // 0x265f90: 0x103e4  .word       0x000103E4                   # and         $zero, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265f90u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_265f94:
    // 0x265f94: 0x4e40  sll         $t1, $zero, 25
    ctx->pc = 0x265f94u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_265f98:
    // 0x265f98: 0x0  nop
    ctx->pc = 0x265f98u;
    // NOP
label_265f9c:
    // 0x265f9c: 0x0  nop
    ctx->pc = 0x265f9cu;
    // NOP
label_265fa0:
    // 0x265fa0: 0x103ee  .word       0x000103EE                   # dsub        $zero, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265fa0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_265fa4:
    // 0x265fa4: 0x6600  sll         $t4, $zero, 24
    ctx->pc = 0x265fa4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_265fa8:
    // 0x265fa8: 0x0  nop
    ctx->pc = 0x265fa8u;
    // NOP
label_265fac:
    // 0x265fac: 0x0  nop
    ctx->pc = 0x265facu;
    // NOP
label_265fb0:
    // 0x265fb0: 0x103fb  dsra        $zero, $at, 15
    ctx->pc = 0x265fb0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> 15);
label_265fb4:
    // 0x265fb4: 0x3b10  .word       0x00003B10                   # mfhi        $a3 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265fb4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_265fb8:
    // 0x265fb8: 0x0  nop
    ctx->pc = 0x265fb8u;
    // NOP
label_265fbc:
    // 0x265fbc: 0x0  nop
    ctx->pc = 0x265fbcu;
    // NOP
label_265fc0:
    // 0x265fc0: 0x10403  sra         $zero, $at, 16
    ctx->pc = 0x265fc0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 1), 16));
label_265fc4:
    // 0x265fc4: 0x6a40  sll         $t5, $zero, 9
    ctx->pc = 0x265fc4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_265fc8:
    // 0x265fc8: 0x0  nop
    ctx->pc = 0x265fc8u;
    // NOP
label_265fcc:
    // 0x265fcc: 0x0  nop
    ctx->pc = 0x265fccu;
    // NOP
label_265fd0:
    // 0x265fd0: 0x10411  .word       0x00010411                   # mthi        $zero # 00010400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265fd0u;
    ctx->hi = GPR_U64(ctx, 0);
label_265fd4:
    // 0x265fd4: 0x5720  .word       0x00005720                   # add         $t2, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265fd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_265fd8:
    // 0x265fd8: 0x0  nop
    ctx->pc = 0x265fd8u;
    // NOP
label_265fdc:
    // 0x265fdc: 0x0  nop
    ctx->pc = 0x265fdcu;
    // NOP
label_265fe0:
    // 0x265fe0: 0x1041c  .word       0x0001041C                   # dmult       $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265fe0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x265FE0 raw=0x0001041C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265fe4:
    // 0x265fe4: 0x7320  .word       0x00007320                   # add         $t6, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265fe4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_265fe8:
    // 0x265fe8: 0x0  nop
    ctx->pc = 0x265fe8u;
    // NOP
label_265fec:
    // 0x265fec: 0x0  nop
    ctx->pc = 0x265fecu;
    // NOP
label_265ff0:
    // 0x265ff0: 0x1042b  .word       0x0001042B                   # sltu        $zero, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265ff0u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_265ff4:
    // 0x265ff4: 0x7270  tge         $zero, $zero, 457
    ctx->pc = 0x265ff4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265ff8:
    // 0x265ff8: 0x0  nop
    ctx->pc = 0x265ff8u;
    // NOP
label_265ffc:
    // 0x265ffc: 0x0  nop
    ctx->pc = 0x265ffcu;
    // NOP
label_266000:
    // 0x266000: 0x1043a  dsrl        $zero, $at, 16
    ctx->pc = 0x266000u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) >> 16);
label_266004:
    // 0x266004: 0x7e20  .word       0x00007E20                   # add         $t7, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266004u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_266008:
    // 0x266008: 0x0  nop
    ctx->pc = 0x266008u;
    // NOP
label_26600c:
    // 0x26600c: 0x0  nop
    ctx->pc = 0x26600cu;
    // NOP
label_266010:
    // 0x266010: 0x1044a  .word       0x0001044A                   # movz        $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266010u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_266014:
    // 0x266014: 0xc350  .word       0x0000C350                   # mfhi        $t8 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266014u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_266018:
    // 0x266018: 0x0  nop
    ctx->pc = 0x266018u;
    // NOP
label_26601c:
    // 0x26601c: 0x0  nop
    ctx->pc = 0x26601cu;
    // NOP
label_266020:
    // 0x266020: 0x10463  .word       0x00010463                   # negu        $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266020u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_266024:
    // 0x266024: 0x7e80  sll         $t7, $zero, 26
    ctx->pc = 0x266024u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_266028:
    // 0x266028: 0x0  nop
    ctx->pc = 0x266028u;
    // NOP
label_26602c:
    // 0x26602c: 0x0  nop
    ctx->pc = 0x26602cu;
    // NOP
label_266030:
    // 0x266030: 0x10473  tltu        $zero, $at, 17
    ctx->pc = 0x266030u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_266034:
    // 0x266034: 0x52e0  .word       0x000052E0                   # add         $t2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266034u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_266038:
    // 0x266038: 0x0  nop
    ctx->pc = 0x266038u;
    // NOP
label_26603c:
    // 0x26603c: 0x0  nop
    ctx->pc = 0x26603cu;
    // NOP
    ctx->pc = 0x266040u;
    return;
}

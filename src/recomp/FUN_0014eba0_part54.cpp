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

// Function: FUN_0014eba0
// Address: 0x14eba0 - 0x2ced24
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0014eba0_part54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1689b0u: goto label_1689b0;
        case 0x1689b4u: goto label_1689b4;
        case 0x1689b8u: goto label_1689b8;
        case 0x1689bcu: goto label_1689bc;
        case 0x1689c0u: goto label_1689c0;
        case 0x1689c4u: goto label_1689c4;
        case 0x1689c8u: goto label_1689c8;
        case 0x1689ccu: goto label_1689cc;
        case 0x1689d0u: goto label_1689d0;
        case 0x1689d4u: goto label_1689d4;
        case 0x1689d8u: goto label_1689d8;
        case 0x1689dcu: goto label_1689dc;
        case 0x1689e0u: goto label_1689e0;
        case 0x1689e4u: goto label_1689e4;
        case 0x1689e8u: goto label_1689e8;
        case 0x1689ecu: goto label_1689ec;
        case 0x1689f0u: goto label_1689f0;
        case 0x1689f4u: goto label_1689f4;
        case 0x1689f8u: goto label_1689f8;
        case 0x1689fcu: goto label_1689fc;
        case 0x168a00u: goto label_168a00;
        case 0x168a04u: goto label_168a04;
        case 0x168a08u: goto label_168a08;
        case 0x168a0cu: goto label_168a0c;
        case 0x168a10u: goto label_168a10;
        case 0x168a14u: goto label_168a14;
        case 0x168a18u: goto label_168a18;
        case 0x168a1cu: goto label_168a1c;
        case 0x168a20u: goto label_168a20;
        case 0x168a24u: goto label_168a24;
        case 0x168a28u: goto label_168a28;
        case 0x168a2cu: goto label_168a2c;
        case 0x168a30u: goto label_168a30;
        case 0x168a34u: goto label_168a34;
        case 0x168a38u: goto label_168a38;
        case 0x168a3cu: goto label_168a3c;
        case 0x168a40u: goto label_168a40;
        case 0x168a44u: goto label_168a44;
        case 0x168a48u: goto label_168a48;
        case 0x168a4cu: goto label_168a4c;
        case 0x168a50u: goto label_168a50;
        case 0x168a54u: goto label_168a54;
        case 0x168a58u: goto label_168a58;
        case 0x168a5cu: goto label_168a5c;
        case 0x168a60u: goto label_168a60;
        case 0x168a64u: goto label_168a64;
        case 0x168a68u: goto label_168a68;
        case 0x168a6cu: goto label_168a6c;
        case 0x168a70u: goto label_168a70;
        case 0x168a74u: goto label_168a74;
        case 0x168a78u: goto label_168a78;
        case 0x168a7cu: goto label_168a7c;
        case 0x168a80u: goto label_168a80;
        case 0x168a84u: goto label_168a84;
        case 0x168a88u: goto label_168a88;
        case 0x168a8cu: goto label_168a8c;
        case 0x168a90u: goto label_168a90;
        case 0x168a94u: goto label_168a94;
        case 0x168a98u: goto label_168a98;
        case 0x168a9cu: goto label_168a9c;
        case 0x168aa0u: goto label_168aa0;
        case 0x168aa4u: goto label_168aa4;
        case 0x168aa8u: goto label_168aa8;
        case 0x168aacu: goto label_168aac;
        case 0x168ab0u: goto label_168ab0;
        case 0x168ab4u: goto label_168ab4;
        case 0x168ab8u: goto label_168ab8;
        case 0x168abcu: goto label_168abc;
        case 0x168ac0u: goto label_168ac0;
        case 0x168ac4u: goto label_168ac4;
        case 0x168ac8u: goto label_168ac8;
        case 0x168accu: goto label_168acc;
        case 0x168ad0u: goto label_168ad0;
        case 0x168ad4u: goto label_168ad4;
        case 0x168ad8u: goto label_168ad8;
        case 0x168adcu: goto label_168adc;
        case 0x168ae0u: goto label_168ae0;
        case 0x168ae4u: goto label_168ae4;
        case 0x168ae8u: goto label_168ae8;
        case 0x168aecu: goto label_168aec;
        case 0x168af0u: goto label_168af0;
        case 0x168af4u: goto label_168af4;
        case 0x168af8u: goto label_168af8;
        case 0x168afcu: goto label_168afc;
        case 0x168b00u: goto label_168b00;
        case 0x168b04u: goto label_168b04;
        case 0x168b08u: goto label_168b08;
        case 0x168b0cu: goto label_168b0c;
        case 0x168b10u: goto label_168b10;
        case 0x168b14u: goto label_168b14;
        case 0x168b18u: goto label_168b18;
        case 0x168b1cu: goto label_168b1c;
        case 0x168b20u: goto label_168b20;
        case 0x168b24u: goto label_168b24;
        case 0x168b28u: goto label_168b28;
        case 0x168b2cu: goto label_168b2c;
        case 0x168b30u: goto label_168b30;
        case 0x168b34u: goto label_168b34;
        case 0x168b38u: goto label_168b38;
        case 0x168b3cu: goto label_168b3c;
        case 0x168b40u: goto label_168b40;
        case 0x168b44u: goto label_168b44;
        case 0x168b48u: goto label_168b48;
        case 0x168b4cu: goto label_168b4c;
        case 0x168b50u: goto label_168b50;
        case 0x168b54u: goto label_168b54;
        case 0x168b58u: goto label_168b58;
        case 0x168b5cu: goto label_168b5c;
        case 0x168b60u: goto label_168b60;
        case 0x168b64u: goto label_168b64;
        case 0x168b68u: goto label_168b68;
        case 0x168b6cu: goto label_168b6c;
        case 0x168b70u: goto label_168b70;
        case 0x168b74u: goto label_168b74;
        case 0x168b78u: goto label_168b78;
        case 0x168b7cu: goto label_168b7c;
        case 0x168b80u: goto label_168b80;
        case 0x168b84u: goto label_168b84;
        case 0x168b88u: goto label_168b88;
        case 0x168b8cu: goto label_168b8c;
        case 0x168b90u: goto label_168b90;
        case 0x168b94u: goto label_168b94;
        case 0x168b98u: goto label_168b98;
        case 0x168b9cu: goto label_168b9c;
        case 0x168ba0u: goto label_168ba0;
        case 0x168ba4u: goto label_168ba4;
        case 0x168ba8u: goto label_168ba8;
        case 0x168bacu: goto label_168bac;
        case 0x168bb0u: goto label_168bb0;
        case 0x168bb4u: goto label_168bb4;
        case 0x168bb8u: goto label_168bb8;
        case 0x168bbcu: goto label_168bbc;
        case 0x168bc0u: goto label_168bc0;
        case 0x168bc4u: goto label_168bc4;
        case 0x168bc8u: goto label_168bc8;
        case 0x168bccu: goto label_168bcc;
        case 0x168bd0u: goto label_168bd0;
        case 0x168bd4u: goto label_168bd4;
        case 0x168bd8u: goto label_168bd8;
        case 0x168bdcu: goto label_168bdc;
        case 0x168be0u: goto label_168be0;
        case 0x168be4u: goto label_168be4;
        case 0x168be8u: goto label_168be8;
        case 0x168becu: goto label_168bec;
        case 0x168bf0u: goto label_168bf0;
        case 0x168bf4u: goto label_168bf4;
        case 0x168bf8u: goto label_168bf8;
        case 0x168bfcu: goto label_168bfc;
        case 0x168c00u: goto label_168c00;
        case 0x168c04u: goto label_168c04;
        case 0x168c08u: goto label_168c08;
        case 0x168c0cu: goto label_168c0c;
        case 0x168c10u: goto label_168c10;
        case 0x168c14u: goto label_168c14;
        case 0x168c18u: goto label_168c18;
        case 0x168c1cu: goto label_168c1c;
        case 0x168c20u: goto label_168c20;
        case 0x168c24u: goto label_168c24;
        case 0x168c28u: goto label_168c28;
        case 0x168c2cu: goto label_168c2c;
        case 0x168c30u: goto label_168c30;
        case 0x168c34u: goto label_168c34;
        case 0x168c38u: goto label_168c38;
        case 0x168c3cu: goto label_168c3c;
        case 0x168c40u: goto label_168c40;
        case 0x168c44u: goto label_168c44;
        case 0x168c48u: goto label_168c48;
        case 0x168c4cu: goto label_168c4c;
        case 0x168c50u: goto label_168c50;
        case 0x168c54u: goto label_168c54;
        case 0x168c58u: goto label_168c58;
        case 0x168c5cu: goto label_168c5c;
        case 0x168c60u: goto label_168c60;
        case 0x168c64u: goto label_168c64;
        case 0x168c68u: goto label_168c68;
        case 0x168c6cu: goto label_168c6c;
        case 0x168c70u: goto label_168c70;
        case 0x168c74u: goto label_168c74;
        case 0x168c78u: goto label_168c78;
        case 0x168c7cu: goto label_168c7c;
        case 0x168c80u: goto label_168c80;
        case 0x168c84u: goto label_168c84;
        case 0x168c88u: goto label_168c88;
        case 0x168c8cu: goto label_168c8c;
        case 0x168c90u: goto label_168c90;
        case 0x168c94u: goto label_168c94;
        case 0x168c98u: goto label_168c98;
        case 0x168c9cu: goto label_168c9c;
        case 0x168ca0u: goto label_168ca0;
        case 0x168ca4u: goto label_168ca4;
        case 0x168ca8u: goto label_168ca8;
        case 0x168cacu: goto label_168cac;
        case 0x168cb0u: goto label_168cb0;
        case 0x168cb4u: goto label_168cb4;
        case 0x168cb8u: goto label_168cb8;
        case 0x168cbcu: goto label_168cbc;
        case 0x168cc0u: goto label_168cc0;
        case 0x168cc4u: goto label_168cc4;
        case 0x168cc8u: goto label_168cc8;
        case 0x168cccu: goto label_168ccc;
        case 0x168cd0u: goto label_168cd0;
        case 0x168cd4u: goto label_168cd4;
        case 0x168cd8u: goto label_168cd8;
        case 0x168cdcu: goto label_168cdc;
        case 0x168ce0u: goto label_168ce0;
        case 0x168ce4u: goto label_168ce4;
        case 0x168ce8u: goto label_168ce8;
        case 0x168cecu: goto label_168cec;
        case 0x168cf0u: goto label_168cf0;
        case 0x168cf4u: goto label_168cf4;
        case 0x168cf8u: goto label_168cf8;
        case 0x168cfcu: goto label_168cfc;
        case 0x168d00u: goto label_168d00;
        case 0x168d04u: goto label_168d04;
        case 0x168d08u: goto label_168d08;
        case 0x168d0cu: goto label_168d0c;
        case 0x168d10u: goto label_168d10;
        case 0x168d14u: goto label_168d14;
        case 0x168d18u: goto label_168d18;
        case 0x168d1cu: goto label_168d1c;
        case 0x168d20u: goto label_168d20;
        case 0x168d24u: goto label_168d24;
        case 0x168d28u: goto label_168d28;
        case 0x168d2cu: goto label_168d2c;
        case 0x168d30u: goto label_168d30;
        case 0x168d34u: goto label_168d34;
        case 0x168d38u: goto label_168d38;
        case 0x168d3cu: goto label_168d3c;
        case 0x168d40u: goto label_168d40;
        case 0x168d44u: goto label_168d44;
        case 0x168d48u: goto label_168d48;
        case 0x168d4cu: goto label_168d4c;
        case 0x168d50u: goto label_168d50;
        case 0x168d54u: goto label_168d54;
        case 0x168d58u: goto label_168d58;
        case 0x168d5cu: goto label_168d5c;
        case 0x168d60u: goto label_168d60;
        case 0x168d64u: goto label_168d64;
        case 0x168d68u: goto label_168d68;
        case 0x168d6cu: goto label_168d6c;
        case 0x168d70u: goto label_168d70;
        case 0x168d74u: goto label_168d74;
        case 0x168d78u: goto label_168d78;
        case 0x168d7cu: goto label_168d7c;
        case 0x168d80u: goto label_168d80;
        case 0x168d84u: goto label_168d84;
        case 0x168d88u: goto label_168d88;
        case 0x168d8cu: goto label_168d8c;
        case 0x168d90u: goto label_168d90;
        case 0x168d94u: goto label_168d94;
        case 0x168d98u: goto label_168d98;
        case 0x168d9cu: goto label_168d9c;
        case 0x168da0u: goto label_168da0;
        case 0x168da4u: goto label_168da4;
        case 0x168da8u: goto label_168da8;
        case 0x168dacu: goto label_168dac;
        case 0x168db0u: goto label_168db0;
        case 0x168db4u: goto label_168db4;
        case 0x168db8u: goto label_168db8;
        case 0x168dbcu: goto label_168dbc;
        case 0x168dc0u: goto label_168dc0;
        case 0x168dc4u: goto label_168dc4;
        case 0x168dc8u: goto label_168dc8;
        case 0x168dccu: goto label_168dcc;
        case 0x168dd0u: goto label_168dd0;
        case 0x168dd4u: goto label_168dd4;
        case 0x168dd8u: goto label_168dd8;
        case 0x168ddcu: goto label_168ddc;
        case 0x168de0u: goto label_168de0;
        case 0x168de4u: goto label_168de4;
        case 0x168de8u: goto label_168de8;
        case 0x168decu: goto label_168dec;
        case 0x168df0u: goto label_168df0;
        case 0x168df4u: goto label_168df4;
        case 0x168df8u: goto label_168df8;
        case 0x168dfcu: goto label_168dfc;
        case 0x168e00u: goto label_168e00;
        case 0x168e04u: goto label_168e04;
        case 0x168e08u: goto label_168e08;
        case 0x168e0cu: goto label_168e0c;
        case 0x168e10u: goto label_168e10;
        case 0x168e14u: goto label_168e14;
        case 0x168e18u: goto label_168e18;
        case 0x168e1cu: goto label_168e1c;
        case 0x168e20u: goto label_168e20;
        case 0x168e24u: goto label_168e24;
        case 0x168e28u: goto label_168e28;
        case 0x168e2cu: goto label_168e2c;
        case 0x168e30u: goto label_168e30;
        case 0x168e34u: goto label_168e34;
        case 0x168e38u: goto label_168e38;
        case 0x168e3cu: goto label_168e3c;
        case 0x168e40u: goto label_168e40;
        case 0x168e44u: goto label_168e44;
        case 0x168e48u: goto label_168e48;
        case 0x168e4cu: goto label_168e4c;
        case 0x168e50u: goto label_168e50;
        case 0x168e54u: goto label_168e54;
        case 0x168e58u: goto label_168e58;
        case 0x168e5cu: goto label_168e5c;
        case 0x168e60u: goto label_168e60;
        case 0x168e64u: goto label_168e64;
        case 0x168e68u: goto label_168e68;
        case 0x168e6cu: goto label_168e6c;
        case 0x168e70u: goto label_168e70;
        case 0x168e74u: goto label_168e74;
        case 0x168e78u: goto label_168e78;
        case 0x168e7cu: goto label_168e7c;
        case 0x168e80u: goto label_168e80;
        case 0x168e84u: goto label_168e84;
        case 0x168e88u: goto label_168e88;
        case 0x168e8cu: goto label_168e8c;
        case 0x168e90u: goto label_168e90;
        case 0x168e94u: goto label_168e94;
        case 0x168e98u: goto label_168e98;
        case 0x168e9cu: goto label_168e9c;
        case 0x168ea0u: goto label_168ea0;
        case 0x168ea4u: goto label_168ea4;
        case 0x168ea8u: goto label_168ea8;
        case 0x168eacu: goto label_168eac;
        case 0x168eb0u: goto label_168eb0;
        case 0x168eb4u: goto label_168eb4;
        case 0x168eb8u: goto label_168eb8;
        case 0x168ebcu: goto label_168ebc;
        case 0x168ec0u: goto label_168ec0;
        case 0x168ec4u: goto label_168ec4;
        case 0x168ec8u: goto label_168ec8;
        case 0x168eccu: goto label_168ecc;
        case 0x168ed0u: goto label_168ed0;
        case 0x168ed4u: goto label_168ed4;
        case 0x168ed8u: goto label_168ed8;
        case 0x168edcu: goto label_168edc;
        case 0x168ee0u: goto label_168ee0;
        case 0x168ee4u: goto label_168ee4;
        case 0x168ee8u: goto label_168ee8;
        case 0x168eecu: goto label_168eec;
        case 0x168ef0u: goto label_168ef0;
        case 0x168ef4u: goto label_168ef4;
        case 0x168ef8u: goto label_168ef8;
        case 0x168efcu: goto label_168efc;
        case 0x168f00u: goto label_168f00;
        case 0x168f04u: goto label_168f04;
        case 0x168f08u: goto label_168f08;
        case 0x168f0cu: goto label_168f0c;
        case 0x168f10u: goto label_168f10;
        case 0x168f14u: goto label_168f14;
        case 0x168f18u: goto label_168f18;
        case 0x168f1cu: goto label_168f1c;
        case 0x168f20u: goto label_168f20;
        case 0x168f24u: goto label_168f24;
        case 0x168f28u: goto label_168f28;
        case 0x168f2cu: goto label_168f2c;
        case 0x168f30u: goto label_168f30;
        case 0x168f34u: goto label_168f34;
        case 0x168f38u: goto label_168f38;
        case 0x168f3cu: goto label_168f3c;
        case 0x168f40u: goto label_168f40;
        case 0x168f44u: goto label_168f44;
        case 0x168f48u: goto label_168f48;
        case 0x168f4cu: goto label_168f4c;
        case 0x168f50u: goto label_168f50;
        case 0x168f54u: goto label_168f54;
        case 0x168f58u: goto label_168f58;
        case 0x168f5cu: goto label_168f5c;
        case 0x168f60u: goto label_168f60;
        case 0x168f64u: goto label_168f64;
        case 0x168f68u: goto label_168f68;
        case 0x168f6cu: goto label_168f6c;
        case 0x168f70u: goto label_168f70;
        case 0x168f74u: goto label_168f74;
        case 0x168f78u: goto label_168f78;
        case 0x168f7cu: goto label_168f7c;
        case 0x168f80u: goto label_168f80;
        case 0x168f84u: goto label_168f84;
        case 0x168f88u: goto label_168f88;
        case 0x168f8cu: goto label_168f8c;
        case 0x168f90u: goto label_168f90;
        case 0x168f94u: goto label_168f94;
        case 0x168f98u: goto label_168f98;
        case 0x168f9cu: goto label_168f9c;
        case 0x168fa0u: goto label_168fa0;
        case 0x168fa4u: goto label_168fa4;
        case 0x168fa8u: goto label_168fa8;
        case 0x168facu: goto label_168fac;
        case 0x168fb0u: goto label_168fb0;
        case 0x168fb4u: goto label_168fb4;
        case 0x168fb8u: goto label_168fb8;
        case 0x168fbcu: goto label_168fbc;
        case 0x168fc0u: goto label_168fc0;
        case 0x168fc4u: goto label_168fc4;
        case 0x168fc8u: goto label_168fc8;
        case 0x168fccu: goto label_168fcc;
        case 0x168fd0u: goto label_168fd0;
        case 0x168fd4u: goto label_168fd4;
        case 0x168fd8u: goto label_168fd8;
        case 0x168fdcu: goto label_168fdc;
        case 0x168fe0u: goto label_168fe0;
        case 0x168fe4u: goto label_168fe4;
        case 0x168fe8u: goto label_168fe8;
        case 0x168fecu: goto label_168fec;
        case 0x168ff0u: goto label_168ff0;
        case 0x168ff4u: goto label_168ff4;
        case 0x168ff8u: goto label_168ff8;
        case 0x168ffcu: goto label_168ffc;
        case 0x169000u: goto label_169000;
        case 0x169004u: goto label_169004;
        case 0x169008u: goto label_169008;
        case 0x16900cu: goto label_16900c;
        case 0x169010u: goto label_169010;
        case 0x169014u: goto label_169014;
        case 0x169018u: goto label_169018;
        case 0x16901cu: goto label_16901c;
        case 0x169020u: goto label_169020;
        case 0x169024u: goto label_169024;
        case 0x169028u: goto label_169028;
        case 0x16902cu: goto label_16902c;
        case 0x169030u: goto label_169030;
        case 0x169034u: goto label_169034;
        case 0x169038u: goto label_169038;
        case 0x16903cu: goto label_16903c;
        case 0x169040u: goto label_169040;
        case 0x169044u: goto label_169044;
        case 0x169048u: goto label_169048;
        case 0x16904cu: goto label_16904c;
        case 0x169050u: goto label_169050;
        case 0x169054u: goto label_169054;
        case 0x169058u: goto label_169058;
        case 0x16905cu: goto label_16905c;
        case 0x169060u: goto label_169060;
        case 0x169064u: goto label_169064;
        case 0x169068u: goto label_169068;
        case 0x16906cu: goto label_16906c;
        case 0x169070u: goto label_169070;
        case 0x169074u: goto label_169074;
        case 0x169078u: goto label_169078;
        case 0x16907cu: goto label_16907c;
        case 0x169080u: goto label_169080;
        case 0x169084u: goto label_169084;
        case 0x169088u: goto label_169088;
        case 0x16908cu: goto label_16908c;
        case 0x169090u: goto label_169090;
        case 0x169094u: goto label_169094;
        case 0x169098u: goto label_169098;
        case 0x16909cu: goto label_16909c;
        case 0x1690a0u: goto label_1690a0;
        case 0x1690a4u: goto label_1690a4;
        case 0x1690a8u: goto label_1690a8;
        case 0x1690acu: goto label_1690ac;
        case 0x1690b0u: goto label_1690b0;
        case 0x1690b4u: goto label_1690b4;
        case 0x1690b8u: goto label_1690b8;
        case 0x1690bcu: goto label_1690bc;
        case 0x1690c0u: goto label_1690c0;
        case 0x1690c4u: goto label_1690c4;
        case 0x1690c8u: goto label_1690c8;
        case 0x1690ccu: goto label_1690cc;
        case 0x1690d0u: goto label_1690d0;
        case 0x1690d4u: goto label_1690d4;
        case 0x1690d8u: goto label_1690d8;
        case 0x1690dcu: goto label_1690dc;
        case 0x1690e0u: goto label_1690e0;
        case 0x1690e4u: goto label_1690e4;
        case 0x1690e8u: goto label_1690e8;
        case 0x1690ecu: goto label_1690ec;
        case 0x1690f0u: goto label_1690f0;
        case 0x1690f4u: goto label_1690f4;
        case 0x1690f8u: goto label_1690f8;
        case 0x1690fcu: goto label_1690fc;
        case 0x169100u: goto label_169100;
        case 0x169104u: goto label_169104;
        case 0x169108u: goto label_169108;
        case 0x16910cu: goto label_16910c;
        case 0x169110u: goto label_169110;
        case 0x169114u: goto label_169114;
        case 0x169118u: goto label_169118;
        case 0x16911cu: goto label_16911c;
        case 0x169120u: goto label_169120;
        case 0x169124u: goto label_169124;
        case 0x169128u: goto label_169128;
        case 0x16912cu: goto label_16912c;
        case 0x169130u: goto label_169130;
        case 0x169134u: goto label_169134;
        case 0x169138u: goto label_169138;
        case 0x16913cu: goto label_16913c;
        case 0x169140u: goto label_169140;
        case 0x169144u: goto label_169144;
        case 0x169148u: goto label_169148;
        case 0x16914cu: goto label_16914c;
        case 0x169150u: goto label_169150;
        case 0x169154u: goto label_169154;
        case 0x169158u: goto label_169158;
        case 0x16915cu: goto label_16915c;
        case 0x169160u: goto label_169160;
        case 0x169164u: goto label_169164;
        case 0x169168u: goto label_169168;
        case 0x16916cu: goto label_16916c;
        case 0x169170u: goto label_169170;
        case 0x169174u: goto label_169174;
        case 0x169178u: goto label_169178;
        case 0x16917cu: goto label_16917c;
        default: return;
    }

label_1689b0:
    if (ctx->pc == 0x1689B0u) {
        ctx->pc = 0x1689B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689ACu;
        // 0x1689b0: 0xe6400028  swc1        $f0, 0x28($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1689B4u;
        goto label_1689b4;
    }
    ctx->pc = 0x1689ACu;
    {
        const bool branch_taken_0x1689ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1689B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689ACu;
        // 0x1689b0: 0xe6400028  swc1        $f0, 0x28($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1689ac) {
            ctx->pc = 0x1689DCu;
            goto label_1689dc;
        }
    }
    ctx->pc = 0x1689B4u;
label_1689b4:
    // 0x1689b4: 0x0  nop
    ctx->pc = 0x1689b4u;
    // NOP
label_1689b8:
    // 0x1689b8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1689bc:
    if (ctx->pc == 0x1689BCu) {
        ctx->pc = 0x1689BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689B8u;
        // 0x1689bc: 0xe64c0030  swc1        $f12, 0x30($s2) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1689C0u;
        goto label_1689c0;
    }
    ctx->pc = 0x1689B8u;
    {
        const bool branch_taken_0x1689b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1689BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689B8u;
        // 0x1689bc: 0xe64c0030  swc1        $f12, 0x30($s2) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1689b8) {
            ctx->pc = 0x1689DCu;
            goto label_1689dc;
        }
    }
    ctx->pc = 0x1689C0u;
label_1689c0:
    // 0x1689c0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_1689c4:
    if (ctx->pc == 0x1689C4u) {
        ctx->pc = 0x1689C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689C0u;
        // 0x1689c4: 0xe64c0034  swc1        $f12, 0x34($s2) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1689C8u;
        goto label_1689c8;
    }
    ctx->pc = 0x1689C0u;
    {
        const bool branch_taken_0x1689c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1689C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689C0u;
        // 0x1689c4: 0xe64c0034  swc1        $f12, 0x34($s2) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1689c0) {
            ctx->pc = 0x1689DCu;
            goto label_1689dc;
        }
    }
    ctx->pc = 0x1689C8u;
label_1689c8:
    // 0x1689c8: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x1689c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1689cc:
    // 0x1689cc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1689ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1689d0:
    // 0x1689d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1689d4:
    if (ctx->pc == 0x1689D4u) {
        ctx->pc = 0x1689D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689D0u;
        // 0x1689d4: 0xe6400034  swc1        $f0, 0x34($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1689D8u;
        goto label_1689d8;
    }
    ctx->pc = 0x1689D0u;
    {
        const bool branch_taken_0x1689d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1689D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689D0u;
        // 0x1689d4: 0xe6400034  swc1        $f0, 0x34($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1689d0) {
            ctx->pc = 0x1689DCu;
            goto label_1689dc;
        }
    }
    ctx->pc = 0x1689D8u;
label_1689d8:
    // 0x1689d8: 0xe64c0038  swc1        $f12, 0x38($s2)
    ctx->pc = 0x1689d8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
label_1689dc:
    // 0x1689dc: 0x0  nop
    ctx->pc = 0x1689dcu;
    // NOP
label_1689e0:
    // 0x1689e0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1689e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1689e4:
    // 0x1689e4: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1689e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1689e8:
    // 0x1689e8: 0x2c31818  mult        $v1, $s6, $v1
    ctx->pc = 0x1689e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1689ec:
    // 0x1689ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1689ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1689f0:
    // 0x1689f0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1689f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1689f4:
    // 0x1689f4: 0x0  nop
    ctx->pc = 0x1689f4u;
    // NOP
label_1689f8:
    // 0x1689f8: 0x2fe182b  sltu        $v1, $s7, $fp
    ctx->pc = 0x1689f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_1689fc:
    // 0x1689fc: 0x1460ff69  bnez        $v1, . + 4 + (-0x97 << 2)
label_168a00:
    if (ctx->pc == 0x168A00u) {
        ctx->pc = 0x168A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689FCu;
        // 0x168a00: 0x274082a  slt         $at, $s3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x168A04u;
        goto label_168a04;
    }
    ctx->pc = 0x1689FCu;
    {
        const bool branch_taken_0x1689fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x168A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689FCu;
        // 0x168a00: 0x274082a  slt         $at, $s3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1689fc) {
            ctx->pc = 0x1687A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1687a4; return; }
        }
    }
    ctx->pc = 0x168A04u;
label_168a04:
    // 0x168a04: 0x1420015a  bnez        $at, . + 4 + (0x15A << 2)
label_168a08:
    if (ctx->pc == 0x168A08u) {
        ctx->pc = 0x168A0Cu;
        goto label_168a0c;
    }
    ctx->pc = 0x168A04u;
    {
        const bool branch_taken_0x168a04 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x168a04) {
            ctx->pc = 0x168F70u;
            goto label_168f70;
        }
    }
    ctx->pc = 0x168A0Cu;
label_168a0c:
    // 0x168a0c: 0x9223008d  lbu         $v1, 0x8D($s1)
    ctx->pc = 0x168a0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 141)));
label_168a10:
    // 0x168a10: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x168a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_168a14:
    // 0x168a14: 0x10600151  beqz        $v1, . + 4 + (0x151 << 2)
label_168a18:
    if (ctx->pc == 0x168A18u) {
        ctx->pc = 0x168A1Cu;
        goto label_168a1c;
    }
    ctx->pc = 0x168A14u;
    {
        const bool branch_taken_0x168a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x168a14) {
            ctx->pc = 0x168F5Cu;
            goto label_168f5c;
        }
    }
    ctx->pc = 0x168A1Cu;
label_168a1c:
    // 0x168a1c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x168a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_168a20:
    // 0x168a20: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168a24:
    // 0x168a24: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x168a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_168a28:
    // 0x168a28: 0xc06d52a  jal         func_1B54A8
label_168a2c:
    if (ctx->pc == 0x168A2Cu) {
        ctx->pc = 0x168A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A28u;
        // 0x168a2c: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x168A30u;
        goto label_168a30;
    }
    ctx->pc = 0x168A28u;
    SET_GPR_U32(ctx, 31, 0x168A30u);
    ctx->pc = 0x168A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168A28u;
    // 0x168a2c: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B54A8u;
    { ctx->pc = 0x1b54a8; return; }
    ctx->pc = 0x168A30u;
label_168a30:
    // 0x168a30: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x168a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_168a34:
    // 0x168a34: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x168a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_168a38:
    // 0x168a38: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168a3c:
    // 0x168a3c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x168a3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_168a40:
    // 0x168a40: 0xc06d52a  jal         func_1B54A8
label_168a44:
    if (ctx->pc == 0x168A44u) {
        ctx->pc = 0x168A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A40u;
        // 0x168a44: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x168A48u;
        goto label_168a48;
    }
    ctx->pc = 0x168A40u;
    SET_GPR_U32(ctx, 31, 0x168A48u);
    ctx->pc = 0x168A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168A40u;
    // 0x168a44: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B54A8u;
    { ctx->pc = 0x1b54a8; return; }
    ctx->pc = 0x168A48u;
label_168a48:
    // 0x168a48: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x168a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_168a4c:
    // 0x168a4c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x168a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_168a50:
    // 0x168a50: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168a54:
    // 0x168a54: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x168a54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_168a58:
    // 0x168a58: 0xc06d52a  jal         func_1B54A8
label_168a5c:
    if (ctx->pc == 0x168A5Cu) {
        ctx->pc = 0x168A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A58u;
        // 0x168a5c: 0xc62c0008  lwc1        $f12, 0x8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x168A60u;
        goto label_168a60;
    }
    ctx->pc = 0x168A58u;
    SET_GPR_U32(ctx, 31, 0x168A60u);
    ctx->pc = 0x168A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168A58u;
    // 0x168a5c: 0xc62c0008  lwc1        $f12, 0x8($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B54A8u;
    { ctx->pc = 0x1b54a8; return; }
    ctx->pc = 0x168A60u;
label_168a60:
    // 0x168a60: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x168a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_168a64:
    // 0x168a64: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x168a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_168a68:
    // 0x168a68: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x168a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_168a6c:
    // 0x168a6c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168a70:
    // 0x168a70: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x168a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_168a74:
    // 0x168a74: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x168a74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_168a78:
    // 0x168a78: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x168a78u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_168a7c:
    // 0x168a7c: 0x4602a036  c.le.s      $f20, $f2
    ctx->pc = 0x168a7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_168a80:
    // 0x168a80: 0x0  nop
    ctx->pc = 0x168a80u;
    // NOP
label_168a84:
    // 0x168a84: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_168a88:
    if (ctx->pc == 0x168A88u) {
        ctx->pc = 0x168A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A84u;
        // 0x168a88: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168A8Cu;
        goto label_168a8c;
    }
    ctx->pc = 0x168A84u;
    {
        const bool branch_taken_0x168a84 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x168A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A84u;
        // 0x168a88: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168a84) {
            ctx->pc = 0x168AA0u;
            goto label_168aa0;
        }
    }
    ctx->pc = 0x168A8Cu;
label_168a8c:
    // 0x168a8c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x168a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_168a90:
    // 0x168a90: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168a94:
    // 0x168a94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168a98:
    // 0x168a98: 0x1000000d  b           . + 4 + (0xD << 2)
label_168a9c:
    if (ctx->pc == 0x168A9Cu) {
        ctx->pc = 0x168A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A98u;
        // 0x168a9c: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x168AA0u;
        goto label_168aa0;
    }
    ctx->pc = 0x168A98u;
    {
        const bool branch_taken_0x168a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A98u;
        // 0x168a9c: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168a98) {
            ctx->pc = 0x168AD0u;
            goto label_168ad0;
        }
    }
    ctx->pc = 0x168AA0u;
label_168aa0:
    // 0x168aa0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168aa4:
    // 0x168aa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168aa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168aa8:
    // 0x168aa8: 0x0  nop
    ctx->pc = 0x168aa8u;
    // NOP
label_168aac:
    // 0x168aac: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x168aacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_168ab0:
    // 0x168ab0: 0x0  nop
    ctx->pc = 0x168ab0u;
    // NOP
label_168ab4:
    // 0x168ab4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_168ab8:
    if (ctx->pc == 0x168AB8u) {
        ctx->pc = 0x168ABCu;
        goto label_168abc;
    }
    ctx->pc = 0x168AB4u;
    {
        const bool branch_taken_0x168ab4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x168ab4) {
            ctx->pc = 0x168AD0u;
            goto label_168ad0;
        }
    }
    ctx->pc = 0x168ABCu;
label_168abc:
    // 0x168abc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x168abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_168ac0:
    // 0x168ac0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168ac4:
    // 0x168ac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168ac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168ac8:
    // 0x168ac8: 0x10000001  b           . + 4 + (0x1 << 2)
label_168acc:
    if (ctx->pc == 0x168ACCu) {
        ctx->pc = 0x168ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168AC8u;
        // 0x168acc: 0x46140500  add.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x168AD0u;
        goto label_168ad0;
    }
    ctx->pc = 0x168AC8u;
    {
        const bool branch_taken_0x168ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168AC8u;
        // 0x168acc: 0x46140500  add.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ac8) {
            ctx->pc = 0x168AD0u;
            goto label_168ad0;
        }
    }
    ctx->pc = 0x168AD0u;
label_168ad0:
    // 0x168ad0: 0xc6220020  lwc1        $f2, 0x20($s1)
    ctx->pc = 0x168ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_168ad4:
    // 0x168ad4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x168ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_168ad8:
    // 0x168ad8: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x168ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_168adc:
    // 0x168adc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168ae0:
    // 0x168ae0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168ae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168ae4:
    // 0x168ae4: 0x0  nop
    ctx->pc = 0x168ae4u;
    // NOP
label_168ae8:
    // 0x168ae8: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x168ae8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_168aec:
    // 0x168aec: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x168aecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_168af0:
    // 0x168af0: 0x0  nop
    ctx->pc = 0x168af0u;
    // NOP
label_168af4:
    // 0x168af4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_168af8:
    if (ctx->pc == 0x168AF8u) {
        ctx->pc = 0x168AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168AF4u;
        // 0x168af8: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168AFCu;
        goto label_168afc;
    }
    ctx->pc = 0x168AF4u;
    {
        const bool branch_taken_0x168af4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x168AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168AF4u;
        // 0x168af8: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168af4) {
            ctx->pc = 0x168B10u;
            goto label_168b10;
        }
    }
    ctx->pc = 0x168AFCu;
label_168afc:
    // 0x168afc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x168afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_168b00:
    // 0x168b00: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168b04:
    // 0x168b04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168b04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168b08:
    // 0x168b08: 0x1000000d  b           . + 4 + (0xD << 2)
label_168b0c:
    if (ctx->pc == 0x168B0Cu) {
        ctx->pc = 0x168B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168B08u;
        // 0x168b0c: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x168B10u;
        goto label_168b10;
    }
    ctx->pc = 0x168B08u;
    {
        const bool branch_taken_0x168b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168B08u;
        // 0x168b0c: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168b08) {
            ctx->pc = 0x168B40u;
            goto label_168b40;
        }
    }
    ctx->pc = 0x168B10u;
label_168b10:
    // 0x168b10: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168b14:
    // 0x168b14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168b14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168b18:
    // 0x168b18: 0x0  nop
    ctx->pc = 0x168b18u;
    // NOP
label_168b1c:
    // 0x168b1c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x168b1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_168b20:
    // 0x168b20: 0x0  nop
    ctx->pc = 0x168b20u;
    // NOP
label_168b24:
    // 0x168b24: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_168b28:
    if (ctx->pc == 0x168B28u) {
        ctx->pc = 0x168B2Cu;
        goto label_168b2c;
    }
    ctx->pc = 0x168B24u;
    {
        const bool branch_taken_0x168b24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x168b24) {
            ctx->pc = 0x168B40u;
            goto label_168b40;
        }
    }
    ctx->pc = 0x168B2Cu;
label_168b2c:
    // 0x168b2c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x168b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_168b30:
    // 0x168b30: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168b34:
    // 0x168b34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168b34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168b38:
    // 0x168b38: 0x10000001  b           . + 4 + (0x1 << 2)
label_168b3c:
    if (ctx->pc == 0x168B3Cu) {
        ctx->pc = 0x168B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168B38u;
        // 0x168b3c: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x168B40u;
        goto label_168b40;
    }
    ctx->pc = 0x168B38u;
    {
        const bool branch_taken_0x168b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168B38u;
        // 0x168b3c: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168b38) {
            ctx->pc = 0x168B40u;
            goto label_168b40;
        }
    }
    ctx->pc = 0x168B40u;
label_168b40:
    // 0x168b40: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x168b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_168b44:
    // 0x168b44: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x168b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_168b48:
    // 0x168b48: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x168b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_168b4c:
    // 0x168b4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168b50:
    // 0x168b50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168b54:
    // 0x168b54: 0x0  nop
    ctx->pc = 0x168b54u;
    // NOP
label_168b58:
    // 0x168b58: 0x46011541  sub.s       $f21, $f2, $f1
    ctx->pc = 0x168b58u;
    ctx->f[21] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_168b5c:
    // 0x168b5c: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x168b5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_168b60:
    // 0x168b60: 0x0  nop
    ctx->pc = 0x168b60u;
    // NOP
label_168b64:
    // 0x168b64: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_168b68:
    if (ctx->pc == 0x168B68u) {
        ctx->pc = 0x168B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168B64u;
        // 0x168b68: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168B6Cu;
        goto label_168b6c;
    }
    ctx->pc = 0x168B64u;
    {
        const bool branch_taken_0x168b64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x168B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168B64u;
        // 0x168b68: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168b64) {
            ctx->pc = 0x168B80u;
            goto label_168b80;
        }
    }
    ctx->pc = 0x168B6Cu;
label_168b6c:
    // 0x168b6c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x168b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_168b70:
    // 0x168b70: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168b74:
    // 0x168b74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168b74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168b78:
    // 0x168b78: 0x1000000d  b           . + 4 + (0xD << 2)
label_168b7c:
    if (ctx->pc == 0x168B7Cu) {
        ctx->pc = 0x168B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168B78u;
        // 0x168b7c: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x168B80u;
        goto label_168b80;
    }
    ctx->pc = 0x168B78u;
    {
        const bool branch_taken_0x168b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168B78u;
        // 0x168b7c: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168b78) {
            ctx->pc = 0x168BB0u;
            goto label_168bb0;
        }
    }
    ctx->pc = 0x168B80u;
label_168b80:
    // 0x168b80: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168b84:
    // 0x168b84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168b88:
    // 0x168b88: 0x0  nop
    ctx->pc = 0x168b88u;
    // NOP
label_168b8c:
    // 0x168b8c: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x168b8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_168b90:
    // 0x168b90: 0x0  nop
    ctx->pc = 0x168b90u;
    // NOP
label_168b94:
    // 0x168b94: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_168b98:
    if (ctx->pc == 0x168B98u) {
        ctx->pc = 0x168B9Cu;
        goto label_168b9c;
    }
    ctx->pc = 0x168B94u;
    {
        const bool branch_taken_0x168b94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x168b94) {
            ctx->pc = 0x168BB0u;
            goto label_168bb0;
        }
    }
    ctx->pc = 0x168B9Cu;
label_168b9c:
    // 0x168b9c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x168b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_168ba0:
    // 0x168ba0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168ba4:
    // 0x168ba4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168ba8:
    // 0x168ba8: 0x10000001  b           . + 4 + (0x1 << 2)
label_168bac:
    if (ctx->pc == 0x168BACu) {
        ctx->pc = 0x168BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168BA8u;
        // 0x168bac: 0x46150540  add.s       $f21, $f0, $f21 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x168BB0u;
        goto label_168bb0;
    }
    ctx->pc = 0x168BA8u;
    {
        const bool branch_taken_0x168ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168BA8u;
        // 0x168bac: 0x46150540  add.s       $f21, $f0, $f21 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ba8) {
            ctx->pc = 0x168BB0u;
            goto label_168bb0;
        }
    }
    ctx->pc = 0x168BB0u;
label_168bb0:
    // 0x168bb0: 0xc06d448  jal         func_1B5120
label_168bb4:
    if (ctx->pc == 0x168BB4u) {
        ctx->pc = 0x168BB8u;
        goto label_168bb8;
    }
    ctx->pc = 0x168BB0u;
    SET_GPR_U32(ctx, 31, 0x168BB8u);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x168BB8u;
label_168bb8:
    // 0x168bb8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x168bb8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_168bbc:
    // 0x168bbc: 0xc06d448  jal         func_1B5120
label_168bc0:
    if (ctx->pc == 0x168BC0u) {
        ctx->pc = 0x168BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168BBCu;
        // 0x168bc0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x168BC4u;
        goto label_168bc4;
    }
    ctx->pc = 0x168BBCu;
    SET_GPR_U32(ctx, 31, 0x168BC4u);
    ctx->pc = 0x168BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168BBCu;
    // 0x168bc0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x168BC4u;
label_168bc4:
    // 0x168bc4: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x168bc4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_168bc8:
    // 0x168bc8: 0xc06d448  jal         func_1B5120
label_168bcc:
    if (ctx->pc == 0x168BCCu) {
        ctx->pc = 0x168BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168BC8u;
        // 0x168bcc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x168BD0u;
        goto label_168bd0;
    }
    ctx->pc = 0x168BC8u;
    SET_GPR_U32(ctx, 31, 0x168BD0u);
    ctx->pc = 0x168BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168BC8u;
    // 0x168bcc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x168BD0u;
label_168bd0:
    // 0x168bd0: 0x46140540  add.s       $f21, $f0, $f20
    ctx->pc = 0x168bd0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_168bd4:
    // 0x168bd4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x168bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_168bd8:
    // 0x168bd8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168bdc:
    // 0x168bdc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x168bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_168be0:
    // 0x168be0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x168be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_168be4:
    // 0x168be4: 0x0  nop
    ctx->pc = 0x168be4u;
    // NOP
label_168be8:
    // 0x168be8: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x168be8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_168bec:
    // 0x168bec: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x168becu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_168bf0:
    // 0x168bf0: 0x0  nop
    ctx->pc = 0x168bf0u;
    // NOP
label_168bf4:
    // 0x168bf4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_168bf8:
    if (ctx->pc == 0x168BF8u) {
        ctx->pc = 0x168BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168BF4u;
        // 0x168bf8: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168BFCu;
        goto label_168bfc;
    }
    ctx->pc = 0x168BF4u;
    {
        const bool branch_taken_0x168bf4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x168BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168BF4u;
        // 0x168bf8: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168bf4) {
            ctx->pc = 0x168C10u;
            goto label_168c10;
        }
    }
    ctx->pc = 0x168BFCu;
label_168bfc:
    // 0x168bfc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x168bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_168c00:
    // 0x168c00: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168c04:
    // 0x168c04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168c08:
    // 0x168c08: 0x1000000d  b           . + 4 + (0xD << 2)
label_168c0c:
    if (ctx->pc == 0x168C0Cu) {
        ctx->pc = 0x168C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168C08u;
        // 0x168c0c: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x168C10u;
        goto label_168c10;
    }
    ctx->pc = 0x168C08u;
    {
        const bool branch_taken_0x168c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168C08u;
        // 0x168c0c: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168c08) {
            ctx->pc = 0x168C40u;
            goto label_168c40;
        }
    }
    ctx->pc = 0x168C10u;
label_168c10:
    // 0x168c10: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168c14:
    // 0x168c14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168c14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168c18:
    // 0x168c18: 0x0  nop
    ctx->pc = 0x168c18u;
    // NOP
label_168c1c:
    // 0x168c1c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x168c1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_168c20:
    // 0x168c20: 0x0  nop
    ctx->pc = 0x168c20u;
    // NOP
label_168c24:
    // 0x168c24: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_168c28:
    if (ctx->pc == 0x168C28u) {
        ctx->pc = 0x168C2Cu;
        goto label_168c2c;
    }
    ctx->pc = 0x168C24u;
    {
        const bool branch_taken_0x168c24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x168c24) {
            ctx->pc = 0x168C40u;
            goto label_168c40;
        }
    }
    ctx->pc = 0x168C2Cu;
label_168c2c:
    // 0x168c2c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x168c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_168c30:
    // 0x168c30: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168c34:
    // 0x168c34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168c38:
    // 0x168c38: 0x10000001  b           . + 4 + (0x1 << 2)
label_168c3c:
    if (ctx->pc == 0x168C3Cu) {
        ctx->pc = 0x168C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168C38u;
        // 0x168c3c: 0x46020080  add.s       $f2, $f0, $f2 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x168C40u;
        goto label_168c40;
    }
    ctx->pc = 0x168C38u;
    {
        const bool branch_taken_0x168c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168C38u;
        // 0x168c3c: 0x46020080  add.s       $f2, $f0, $f2 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168c38) {
            ctx->pc = 0x168C40u;
            goto label_168c40;
        }
    }
    ctx->pc = 0x168C40u;
label_168c40:
    // 0x168c40: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x168c40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_168c44:
    // 0x168c44: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x168c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_168c48:
    // 0x168c48: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x168c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_168c4c:
    // 0x168c4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168c50:
    // 0x168c50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168c50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168c54:
    // 0x168c54: 0x0  nop
    ctx->pc = 0x168c54u;
    // NOP
label_168c58:
    // 0x168c58: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x168c58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_168c5c:
    // 0x168c5c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x168c5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_168c60:
    // 0x168c60: 0x0  nop
    ctx->pc = 0x168c60u;
    // NOP
label_168c64:
    // 0x168c64: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_168c68:
    if (ctx->pc == 0x168C68u) {
        ctx->pc = 0x168C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168C64u;
        // 0x168c68: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168C6Cu;
        goto label_168c6c;
    }
    ctx->pc = 0x168C64u;
    {
        const bool branch_taken_0x168c64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x168C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168C64u;
        // 0x168c68: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168c64) {
            ctx->pc = 0x168C80u;
            goto label_168c80;
        }
    }
    ctx->pc = 0x168C6Cu;
label_168c6c:
    // 0x168c6c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x168c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_168c70:
    // 0x168c70: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168c74:
    // 0x168c74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168c78:
    // 0x168c78: 0x1000000d  b           . + 4 + (0xD << 2)
label_168c7c:
    if (ctx->pc == 0x168C7Cu) {
        ctx->pc = 0x168C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168C78u;
        // 0x168c7c: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x168C80u;
        goto label_168c80;
    }
    ctx->pc = 0x168C78u;
    {
        const bool branch_taken_0x168c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168C78u;
        // 0x168c7c: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168c78) {
            ctx->pc = 0x168CB0u;
            goto label_168cb0;
        }
    }
    ctx->pc = 0x168C80u;
label_168c80:
    // 0x168c80: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168c84:
    // 0x168c84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168c88:
    // 0x168c88: 0x0  nop
    ctx->pc = 0x168c88u;
    // NOP
label_168c8c:
    // 0x168c8c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x168c8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_168c90:
    // 0x168c90: 0x0  nop
    ctx->pc = 0x168c90u;
    // NOP
label_168c94:
    // 0x168c94: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_168c98:
    if (ctx->pc == 0x168C98u) {
        ctx->pc = 0x168C9Cu;
        goto label_168c9c;
    }
    ctx->pc = 0x168C94u;
    {
        const bool branch_taken_0x168c94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x168c94) {
            ctx->pc = 0x168CB0u;
            goto label_168cb0;
        }
    }
    ctx->pc = 0x168C9Cu;
label_168c9c:
    // 0x168c9c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x168c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_168ca0:
    // 0x168ca0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168ca4:
    // 0x168ca4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168ca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168ca8:
    // 0x168ca8: 0x10000001  b           . + 4 + (0x1 << 2)
label_168cac:
    if (ctx->pc == 0x168CACu) {
        ctx->pc = 0x168CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168CA8u;
        // 0x168cac: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x168CB0u;
        goto label_168cb0;
    }
    ctx->pc = 0x168CA8u;
    {
        const bool branch_taken_0x168ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168CA8u;
        // 0x168cac: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ca8) {
            ctx->pc = 0x168CB0u;
            goto label_168cb0;
        }
    }
    ctx->pc = 0x168CB0u;
label_168cb0:
    // 0x168cb0: 0x27b000d4  addiu       $s0, $sp, 0xD4
    ctx->pc = 0x168cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_168cb4:
    // 0x168cb4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x168cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_168cb8:
    // 0x168cb8: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x168cb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_168cbc:
    // 0x168cbc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168cc0:
    // 0x168cc0: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x168cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_168cc4:
    // 0x168cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168cc8:
    // 0x168cc8: 0x0  nop
    ctx->pc = 0x168cc8u;
    // NOP
label_168ccc:
    // 0x168ccc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x168cccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_168cd0:
    // 0x168cd0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x168cd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_168cd4:
    // 0x168cd4: 0x0  nop
    ctx->pc = 0x168cd4u;
    // NOP
label_168cd8:
    // 0x168cd8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_168cdc:
    if (ctx->pc == 0x168CDCu) {
        ctx->pc = 0x168CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168CD8u;
        // 0x168cdc: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168CE0u;
        goto label_168ce0;
    }
    ctx->pc = 0x168CD8u;
    {
        const bool branch_taken_0x168cd8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x168CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168CD8u;
        // 0x168cdc: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168cd8) {
            ctx->pc = 0x168CF4u;
            goto label_168cf4;
        }
    }
    ctx->pc = 0x168CE0u;
label_168ce0:
    // 0x168ce0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x168ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_168ce4:
    // 0x168ce4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168ce8:
    // 0x168ce8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168ce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168cec:
    // 0x168cec: 0x1000000d  b           . + 4 + (0xD << 2)
label_168cf0:
    if (ctx->pc == 0x168CF0u) {
        ctx->pc = 0x168CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168CECu;
        // 0x168cf0: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x168CF4u;
        goto label_168cf4;
    }
    ctx->pc = 0x168CECu;
    {
        const bool branch_taken_0x168cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168CECu;
        // 0x168cf0: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168cec) {
            ctx->pc = 0x168D24u;
            goto label_168d24;
        }
    }
    ctx->pc = 0x168CF4u;
label_168cf4:
    // 0x168cf4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168cf8:
    // 0x168cf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168cf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168cfc:
    // 0x168cfc: 0x0  nop
    ctx->pc = 0x168cfcu;
    // NOP
label_168d00:
    // 0x168d00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x168d00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_168d04:
    // 0x168d04: 0x0  nop
    ctx->pc = 0x168d04u;
    // NOP
label_168d08:
    // 0x168d08: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_168d0c:
    if (ctx->pc == 0x168D0Cu) {
        ctx->pc = 0x168D10u;
        goto label_168d10;
    }
    ctx->pc = 0x168D08u;
    {
        const bool branch_taken_0x168d08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x168d08) {
            ctx->pc = 0x168D24u;
            goto label_168d24;
        }
    }
    ctx->pc = 0x168D10u;
label_168d10:
    // 0x168d10: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x168d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_168d14:
    // 0x168d14: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168d18:
    // 0x168d18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168d1c:
    // 0x168d1c: 0x10000001  b           . + 4 + (0x1 << 2)
label_168d20:
    if (ctx->pc == 0x168D20u) {
        ctx->pc = 0x168D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D1Cu;
        // 0x168d20: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x168D24u;
        goto label_168d24;
    }
    ctx->pc = 0x168D1Cu;
    {
        const bool branch_taken_0x168d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D1Cu;
        // 0x168d20: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d1c) {
            ctx->pc = 0x168D24u;
            goto label_168d24;
        }
    }
    ctx->pc = 0x168D24u;
label_168d24:
    // 0x168d24: 0x27b200d8  addiu       $s2, $sp, 0xD8
    ctx->pc = 0x168d24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_168d28:
    // 0x168d28: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x168d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_168d2c:
    // 0x168d2c: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x168d2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_168d30:
    // 0x168d30: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168d34:
    // 0x168d34: 0xc6220024  lwc1        $f2, 0x24($s1)
    ctx->pc = 0x168d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_168d38:
    // 0x168d38: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x168d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_168d3c:
    // 0x168d3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168d3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168d40:
    // 0x168d40: 0x0  nop
    ctx->pc = 0x168d40u;
    // NOP
label_168d44:
    // 0x168d44: 0x46011501  sub.s       $f20, $f2, $f1
    ctx->pc = 0x168d44u;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_168d48:
    // 0x168d48: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x168d48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_168d4c:
    // 0x168d4c: 0x0  nop
    ctx->pc = 0x168d4cu;
    // NOP
label_168d50:
    // 0x168d50: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_168d54:
    if (ctx->pc == 0x168D54u) {
        ctx->pc = 0x168D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D50u;
        // 0x168d54: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168D58u;
        goto label_168d58;
    }
    ctx->pc = 0x168D50u;
    {
        const bool branch_taken_0x168d50 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x168D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D50u;
        // 0x168d54: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d50) {
            ctx->pc = 0x168D6Cu;
            goto label_168d6c;
        }
    }
    ctx->pc = 0x168D58u;
label_168d58:
    // 0x168d58: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x168d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_168d5c:
    // 0x168d5c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168d60:
    // 0x168d60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168d60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168d64:
    // 0x168d64: 0x1000000d  b           . + 4 + (0xD << 2)
label_168d68:
    if (ctx->pc == 0x168D68u) {
        ctx->pc = 0x168D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D64u;
        // 0x168d68: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x168D6Cu;
        goto label_168d6c;
    }
    ctx->pc = 0x168D64u;
    {
        const bool branch_taken_0x168d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D64u;
        // 0x168d68: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d64) {
            ctx->pc = 0x168D9Cu;
            goto label_168d9c;
        }
    }
    ctx->pc = 0x168D6Cu;
label_168d6c:
    // 0x168d6c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168d70:
    // 0x168d70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168d70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168d74:
    // 0x168d74: 0x0  nop
    ctx->pc = 0x168d74u;
    // NOP
label_168d78:
    // 0x168d78: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x168d78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_168d7c:
    // 0x168d7c: 0x0  nop
    ctx->pc = 0x168d7cu;
    // NOP
label_168d80:
    // 0x168d80: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_168d84:
    if (ctx->pc == 0x168D84u) {
        ctx->pc = 0x168D88u;
        goto label_168d88;
    }
    ctx->pc = 0x168D80u;
    {
        const bool branch_taken_0x168d80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x168d80) {
            ctx->pc = 0x168D9Cu;
            goto label_168d9c;
        }
    }
    ctx->pc = 0x168D88u;
label_168d88:
    // 0x168d88: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x168d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_168d8c:
    // 0x168d8c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168d90:
    // 0x168d90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168d94:
    // 0x168d94: 0x10000001  b           . + 4 + (0x1 << 2)
label_168d98:
    if (ctx->pc == 0x168D98u) {
        ctx->pc = 0x168D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D94u;
        // 0x168d98: 0x46140500  add.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x168D9Cu;
        goto label_168d9c;
    }
    ctx->pc = 0x168D94u;
    {
        const bool branch_taken_0x168d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D94u;
        // 0x168d98: 0x46140500  add.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d94) {
            ctx->pc = 0x168D9Cu;
            goto label_168d9c;
        }
    }
    ctx->pc = 0x168D9Cu;
label_168d9c:
    // 0x168d9c: 0xc6220020  lwc1        $f2, 0x20($s1)
    ctx->pc = 0x168d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_168da0:
    // 0x168da0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x168da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_168da4:
    // 0x168da4: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x168da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_168da8:
    // 0x168da8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168dac:
    // 0x168dac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168dacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168db0:
    // 0x168db0: 0x0  nop
    ctx->pc = 0x168db0u;
    // NOP
label_168db4:
    // 0x168db4: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x168db4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_168db8:
    // 0x168db8: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x168db8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_168dbc:
    // 0x168dbc: 0x0  nop
    ctx->pc = 0x168dbcu;
    // NOP
label_168dc0:
    // 0x168dc0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_168dc4:
    if (ctx->pc == 0x168DC4u) {
        ctx->pc = 0x168DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168DC0u;
        // 0x168dc4: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168DC8u;
        goto label_168dc8;
    }
    ctx->pc = 0x168DC0u;
    {
        const bool branch_taken_0x168dc0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x168DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168DC0u;
        // 0x168dc4: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168dc0) {
            ctx->pc = 0x168DDCu;
            goto label_168ddc;
        }
    }
    ctx->pc = 0x168DC8u;
label_168dc8:
    // 0x168dc8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x168dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_168dcc:
    // 0x168dcc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168dd0:
    // 0x168dd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168dd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168dd4:
    // 0x168dd4: 0x1000000d  b           . + 4 + (0xD << 2)
label_168dd8:
    if (ctx->pc == 0x168DD8u) {
        ctx->pc = 0x168DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168DD4u;
        // 0x168dd8: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x168DDCu;
        goto label_168ddc;
    }
    ctx->pc = 0x168DD4u;
    {
        const bool branch_taken_0x168dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168DD4u;
        // 0x168dd8: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168dd4) {
            ctx->pc = 0x168E0Cu;
            goto label_168e0c;
        }
    }
    ctx->pc = 0x168DDCu;
label_168ddc:
    // 0x168ddc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168de0:
    // 0x168de0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168de0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168de4:
    // 0x168de4: 0x0  nop
    ctx->pc = 0x168de4u;
    // NOP
label_168de8:
    // 0x168de8: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x168de8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_168dec:
    // 0x168dec: 0x0  nop
    ctx->pc = 0x168decu;
    // NOP
label_168df0:
    // 0x168df0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_168df4:
    if (ctx->pc == 0x168DF4u) {
        ctx->pc = 0x168DF8u;
        goto label_168df8;
    }
    ctx->pc = 0x168DF0u;
    {
        const bool branch_taken_0x168df0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x168df0) {
            ctx->pc = 0x168E0Cu;
            goto label_168e0c;
        }
    }
    ctx->pc = 0x168DF8u;
label_168df8:
    // 0x168df8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x168df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_168dfc:
    // 0x168dfc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168e00:
    // 0x168e00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168e04:
    // 0x168e04: 0x10000001  b           . + 4 + (0x1 << 2)
label_168e08:
    if (ctx->pc == 0x168E08u) {
        ctx->pc = 0x168E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E04u;
        // 0x168e08: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x168E0Cu;
        goto label_168e0c;
    }
    ctx->pc = 0x168E04u;
    {
        const bool branch_taken_0x168e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E04u;
        // 0x168e08: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e04) {
            ctx->pc = 0x168E0Cu;
            goto label_168e0c;
        }
    }
    ctx->pc = 0x168E0Cu;
label_168e0c:
    // 0x168e0c: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x168e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_168e10:
    // 0x168e10: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x168e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_168e14:
    // 0x168e14: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x168e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_168e18:
    // 0x168e18: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168e1c:
    // 0x168e1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168e1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168e20:
    // 0x168e20: 0x0  nop
    ctx->pc = 0x168e20u;
    // NOP
label_168e24:
    // 0x168e24: 0x46011581  sub.s       $f22, $f2, $f1
    ctx->pc = 0x168e24u;
    ctx->f[22] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_168e28:
    // 0x168e28: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x168e28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_168e2c:
    // 0x168e2c: 0x0  nop
    ctx->pc = 0x168e2cu;
    // NOP
label_168e30:
    // 0x168e30: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_168e34:
    if (ctx->pc == 0x168E34u) {
        ctx->pc = 0x168E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E30u;
        // 0x168e34: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168E38u;
        goto label_168e38;
    }
    ctx->pc = 0x168E30u;
    {
        const bool branch_taken_0x168e30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x168E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E30u;
        // 0x168e34: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e30) {
            ctx->pc = 0x168E4Cu;
            goto label_168e4c;
        }
    }
    ctx->pc = 0x168E38u;
label_168e38:
    // 0x168e38: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x168e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_168e3c:
    // 0x168e3c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168e40:
    // 0x168e40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168e44:
    // 0x168e44: 0x1000000d  b           . + 4 + (0xD << 2)
label_168e48:
    if (ctx->pc == 0x168E48u) {
        ctx->pc = 0x168E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E44u;
        // 0x168e48: 0x4600b581  sub.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x168E4Cu;
        goto label_168e4c;
    }
    ctx->pc = 0x168E44u;
    {
        const bool branch_taken_0x168e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E44u;
        // 0x168e48: 0x4600b581  sub.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e44) {
            ctx->pc = 0x168E7Cu;
            goto label_168e7c;
        }
    }
    ctx->pc = 0x168E4Cu;
label_168e4c:
    // 0x168e4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168e50:
    // 0x168e50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168e50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168e54:
    // 0x168e54: 0x0  nop
    ctx->pc = 0x168e54u;
    // NOP
label_168e58:
    // 0x168e58: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x168e58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_168e5c:
    // 0x168e5c: 0x0  nop
    ctx->pc = 0x168e5cu;
    // NOP
label_168e60:
    // 0x168e60: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_168e64:
    if (ctx->pc == 0x168E64u) {
        ctx->pc = 0x168E68u;
        goto label_168e68;
    }
    ctx->pc = 0x168E60u;
    {
        const bool branch_taken_0x168e60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x168e60) {
            ctx->pc = 0x168E7Cu;
            goto label_168e7c;
        }
    }
    ctx->pc = 0x168E68u;
label_168e68:
    // 0x168e68: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x168e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_168e6c:
    // 0x168e6c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168e70:
    // 0x168e70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168e70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168e74:
    // 0x168e74: 0x10000001  b           . + 4 + (0x1 << 2)
label_168e78:
    if (ctx->pc == 0x168E78u) {
        ctx->pc = 0x168E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E74u;
        // 0x168e78: 0x46160580  add.s       $f22, $f0, $f22 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x168E7Cu;
        goto label_168e7c;
    }
    ctx->pc = 0x168E74u;
    {
        const bool branch_taken_0x168e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E74u;
        // 0x168e78: 0x46160580  add.s       $f22, $f0, $f22 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e74) {
            ctx->pc = 0x168E7Cu;
            goto label_168e7c;
        }
    }
    ctx->pc = 0x168E7Cu;
label_168e7c:
    // 0x168e7c: 0xc06d448  jal         func_1B5120
label_168e80:
    if (ctx->pc == 0x168E80u) {
        ctx->pc = 0x168E84u;
        goto label_168e84;
    }
    ctx->pc = 0x168E7Cu;
    SET_GPR_U32(ctx, 31, 0x168E84u);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x168E84u;
label_168e84:
    // 0x168e84: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x168e84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_168e88:
    // 0x168e88: 0xc06d448  jal         func_1B5120
label_168e8c:
    if (ctx->pc == 0x168E8Cu) {
        ctx->pc = 0x168E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E88u;
        // 0x168e8c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x168E90u;
        goto label_168e90;
    }
    ctx->pc = 0x168E88u;
    SET_GPR_U32(ctx, 31, 0x168E90u);
    ctx->pc = 0x168E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168E88u;
    // 0x168e8c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x168E90u;
label_168e90:
    // 0x168e90: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x168e90u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_168e94:
    // 0x168e94: 0xc06d448  jal         func_1B5120
label_168e98:
    if (ctx->pc == 0x168E98u) {
        ctx->pc = 0x168E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E94u;
        // 0x168e98: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x168E9Cu;
        goto label_168e9c;
    }
    ctx->pc = 0x168E94u;
    SET_GPR_U32(ctx, 31, 0x168E9Cu);
    ctx->pc = 0x168E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168E94u;
    // 0x168e98: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x168E9Cu;
label_168e9c:
    // 0x168e9c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x168e9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_168ea0:
    // 0x168ea0: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x168ea0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_168ea4:
    // 0x168ea4: 0x0  nop
    ctx->pc = 0x168ea4u;
    // NOP
label_168ea8:
    // 0x168ea8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_168eac:
    if (ctx->pc == 0x168EACu) {
        ctx->pc = 0x168EB0u;
        goto label_168eb0;
    }
    ctx->pc = 0x168EA8u;
    {
        const bool branch_taken_0x168ea8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x168ea8) {
            ctx->pc = 0x168ED0u;
            goto label_168ed0;
        }
    }
    ctx->pc = 0x168EB0u;
label_168eb0:
    // 0x168eb0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x168eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_168eb4:
    // 0x168eb4: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x168eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_168eb8:
    // 0x168eb8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x168eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_168ebc:
    // 0x168ebc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x168ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_168ec0:
    // 0x168ec0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x168ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_168ec4:
    // 0x168ec4: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x168ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_168ec8:
    // 0x168ec8: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x168ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_168ecc:
    // 0x168ecc: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x168eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_168ed0:
    // 0x168ed0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x168ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168ed4:
    // 0x168ed4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x168ed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168ed8:
    // 0x168ed8: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x168ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_168edc:
    // 0x168edc: 0x3c04c049  lui         $a0, 0xC049
    ctx->pc = 0x168edcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49225 << 16));
label_168ee0:
    // 0x168ee0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x168ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_168ee4:
    // 0x168ee4: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x168ee4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_168ee8:
    // 0x168ee8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x168ee8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_168eec:
    // 0x168eec: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x168eecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_168ef0:
    // 0x168ef0: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x168ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_168ef4:
    // 0x168ef4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x168ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_168ef8:
    // 0x168ef8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x168ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_168efc:
    // 0x168efc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x168efcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_168f00:
    // 0x168f00: 0x2263821  addu        $a3, $s1, $a2
    ctx->pc = 0x168f00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_168f04:
    // 0x168f04: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x168f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_168f08:
    // 0x168f08: 0xc4e40020  lwc1        $f4, 0x20($a3)
    ctx->pc = 0x168f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_168f0c:
    // 0x168f0c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x168f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_168f10:
    // 0x168f10: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x168f10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_168f14:
    // 0x168f14: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x168f14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_168f18:
    // 0x168f18: 0x0  nop
    ctx->pc = 0x168f18u;
    // NOP
label_168f1c:
    // 0x168f1c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_168f20:
    if (ctx->pc == 0x168F20u) {
        ctx->pc = 0x168F24u;
        goto label_168f24;
    }
    ctx->pc = 0x168F1Cu;
    {
        const bool branch_taken_0x168f1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x168f1c) {
            ctx->pc = 0x168F2Cu;
            goto label_168f2c;
        }
    }
    ctx->pc = 0x168F24u;
label_168f24:
    // 0x168f24: 0x10000007  b           . + 4 + (0x7 << 2)
label_168f28:
    if (ctx->pc == 0x168F28u) {
        ctx->pc = 0x168F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F24u;
        // 0x168f28: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x168F2Cu;
        goto label_168f2c;
    }
    ctx->pc = 0x168F24u;
    {
        const bool branch_taken_0x168f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F24u;
        // 0x168f28: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f24) {
            ctx->pc = 0x168F44u;
            goto label_168f44;
        }
    }
    ctx->pc = 0x168F2Cu;
label_168f2c:
    // 0x168f2c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x168f2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_168f30:
    // 0x168f30: 0x0  nop
    ctx->pc = 0x168f30u;
    // NOP
label_168f34:
    // 0x168f34: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_168f38:
    if (ctx->pc == 0x168F38u) {
        ctx->pc = 0x168F3Cu;
        goto label_168f3c;
    }
    ctx->pc = 0x168F34u;
    {
        const bool branch_taken_0x168f34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x168f34) {
            ctx->pc = 0x168F44u;
            goto label_168f44;
        }
    }
    ctx->pc = 0x168F3Cu;
label_168f3c:
    // 0x168f3c: 0x10000001  b           . + 4 + (0x1 << 2)
label_168f40:
    if (ctx->pc == 0x168F40u) {
        ctx->pc = 0x168F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F3Cu;
        // 0x168f40: 0x46001000  add.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x168F44u;
        goto label_168f44;
    }
    ctx->pc = 0x168F3Cu;
    {
        const bool branch_taken_0x168f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F3Cu;
        // 0x168f40: 0x46001000  add.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f3c) {
            ctx->pc = 0x168F44u;
            goto label_168f44;
        }
    }
    ctx->pc = 0x168F44u;
label_168f44:
    // 0x168f44: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x168f44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_168f48:
    // 0x168f48: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x168f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_168f4c:
    // 0x168f4c: 0x28a30003  slti        $v1, $a1, 0x3
    ctx->pc = 0x168f4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_168f50:
    // 0x168f50: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x168f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_168f54:
    // 0x168f54: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_168f58:
    if (ctx->pc == 0x168F58u) {
        ctx->pc = 0x168F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F54u;
        // 0x168f58: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x168F5Cu;
        goto label_168f5c;
    }
    ctx->pc = 0x168F54u;
    {
        const bool branch_taken_0x168f54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x168F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F54u;
        // 0x168f58: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f54) {
            ctx->pc = 0x168F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168f00;
        }
    }
    ctx->pc = 0x168F5Cu;
label_168f5c:
    // 0x168f5c: 0x0  nop
    ctx->pc = 0x168f5cu;
    // NOP
label_168f60:
    // 0x168f60: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x168f60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_168f64:
    // 0x168f64: 0x274082a  slt         $at, $s3, $s4
    ctx->pc = 0x168f64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_168f68:
    // 0x168f68: 0x1020fea8  beqz        $at, . + 4 + (-0x158 << 2)
label_168f6c:
    if (ctx->pc == 0x168F6Cu) {
        ctx->pc = 0x168F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F68u;
        // 0x168f6c: 0x26310090  addiu       $s1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168F70u;
        goto label_168f70;
    }
    ctx->pc = 0x168F68u;
    {
        const bool branch_taken_0x168f68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x168F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F68u;
        // 0x168f6c: 0x26310090  addiu       $s1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f68) {
            ctx->pc = 0x168A0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168a0c;
        }
    }
    ctx->pc = 0x168F70u;
label_168f70:
    // 0x168f70: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x168f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_168f74:
    // 0x168f74: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x168f74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_168f78:
    // 0x168f78: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x168f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_168f7c:
    // 0x168f7c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x168f7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_168f80:
    // 0x168f80: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x168f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_168f84:
    // 0x168f84: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x168f84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_168f88:
    // 0x168f88: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x168f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_168f8c:
    // 0x168f8c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x168f8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_168f90:
    // 0x168f90: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x168f90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_168f94:
    // 0x168f94: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x168f94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_168f98:
    // 0x168f98: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x168f98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_168f9c:
    // 0x168f9c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x168f9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_168fa0:
    // 0x168fa0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x168fa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_168fa4:
    // 0x168fa4: 0x3e00008  jr          $ra
label_168fa8:
    if (ctx->pc == 0x168FA8u) {
        ctx->pc = 0x168FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168FA4u;
        // 0x168fa8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168FACu;
        goto label_168fac;
    }
    ctx->pc = 0x168FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168FA4u;
        // 0x168fa8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168FACu;
label_168fac:
    // 0x168fac: 0x0  nop
    ctx->pc = 0x168facu;
    // NOP
label_168fb0:
    // 0x168fb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x168fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_168fb4:
    // 0x168fb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x168fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_168fb8:
    // 0x168fb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x168fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_168fbc:
    // 0x168fbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x168fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_168fc0:
    // 0x168fc0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x168fc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_168fc4:
    // 0x168fc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_168fc8:
    // 0x168fc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x168fc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_168fcc:
    // 0x168fcc: 0x2a020034  slti        $v0, $s0, 0x34
    ctx->pc = 0x168fccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)52) ? 1 : 0);
label_168fd0:
    // 0x168fd0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_168fd4:
    if (ctx->pc == 0x168FD4u) {
        ctx->pc = 0x168FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168FD0u;
        // 0x168fd4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168FD8u;
        goto label_168fd8;
    }
    ctx->pc = 0x168FD0u;
    {
        const bool branch_taken_0x168fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168FD0u;
        // 0x168fd4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168fd0) {
            ctx->pc = 0x168FE0u;
            goto label_168fe0;
        }
    }
    ctx->pc = 0x168FD8u;
label_168fd8:
    // 0x168fd8: 0x10000042  b           . + 4 + (0x42 << 2)
label_168fdc:
    if (ctx->pc == 0x168FDCu) {
        ctx->pc = 0x168FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168FD8u;
        // 0x168fdc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168FE0u;
        goto label_168fe0;
    }
    ctx->pc = 0x168FD8u;
    {
        const bool branch_taken_0x168fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168FD8u;
        // 0x168fdc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168fd8) {
            ctx->pc = 0x1690E4u;
            goto label_1690e4;
        }
    }
    ctx->pc = 0x168FE0u;
label_168fe0:
    // 0x168fe0: 0xc055de8  jal         func_1577A0
label_168fe4:
    if (ctx->pc == 0x168FE4u) {
        ctx->pc = 0x168FE8u;
        goto label_168fe8;
    }
    ctx->pc = 0x168FE0u;
    SET_GPR_U32(ctx, 31, 0x168FE8u);
    ctx->pc = 0x1577A0u;
    { ctx->pc = 0x1577a0; return; }
    ctx->pc = 0x168FE8u;
label_168fe8:
    // 0x168fe8: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x168fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_168fec:
    // 0x168fec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x168fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_168ff0:
    // 0x168ff0: 0x8c23c9c4  lw          $v1, -0x363C($at)
    ctx->pc = 0x168ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953412)));
label_168ff4:
    // 0x168ff4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_168ff8:
    if (ctx->pc == 0x168FF8u) {
        ctx->pc = 0x168FFCu;
        goto label_168ffc;
    }
    ctx->pc = 0x168FF4u;
    {
        const bool branch_taken_0x168ff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x168ff4) {
            ctx->pc = 0x169000u;
            goto label_169000;
        }
    }
    ctx->pc = 0x168FFCu;
label_168ffc:
    // 0x168ffc: 0x26100034  addiu       $s0, $s0, 0x34
    ctx->pc = 0x168ffcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
label_169000:
    // 0x169000: 0xc060134  jal         func_1804D0
label_169004:
    if (ctx->pc == 0x169004u) {
        ctx->pc = 0x169008u;
        goto label_169008;
    }
    ctx->pc = 0x169000u;
    SET_GPR_U32(ctx, 31, 0x169008u);
    ctx->pc = 0x1804D0u;
    { ctx->pc = 0x1804d0; return; }
    ctx->pc = 0x169008u;
label_169008:
    // 0x169008: 0xc05af50  jal         func_16BD40
label_16900c:
    if (ctx->pc == 0x16900Cu) {
        ctx->pc = 0x169010u;
        goto label_169010;
    }
    ctx->pc = 0x169008u;
    SET_GPR_U32(ctx, 31, 0x169010u);
    ctx->pc = 0x16BD40u;
    { ctx->pc = 0x16bd40; return; }
    ctx->pc = 0x169010u;
label_169010:
    // 0x169010: 0xc05b578  jal         func_16D5E0
label_169014:
    if (ctx->pc == 0x169014u) {
        ctx->pc = 0x169014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169010u;
        // 0x169014: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169018u;
        goto label_169018;
    }
    ctx->pc = 0x169010u;
    SET_GPR_U32(ctx, 31, 0x169018u);
    ctx->pc = 0x169014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169010u;
    // 0x169014: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    { ctx->pc = 0x16d5e0; return; }
    ctx->pc = 0x169018u;
label_169018:
    // 0x169018: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_16901c:
    if (ctx->pc == 0x16901Cu) {
        ctx->pc = 0x16901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169018u;
        // 0x16901c: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169020u;
        goto label_169020;
    }
    ctx->pc = 0x169018u;
    {
        const bool branch_taken_0x169018 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x16901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169018u;
        // 0x16901c: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169018) {
            ctx->pc = 0x16902Cu;
            goto label_16902c;
        }
    }
    ctx->pc = 0x169020u;
label_169020:
    // 0x169020: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x169020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_169024:
    // 0x169024: 0x10000002  b           . + 4 + (0x2 << 2)
label_169028:
    if (ctx->pc == 0x169028u) {
        ctx->pc = 0x169028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169024u;
        // 0x169028: 0x24429790  addiu       $v0, $v0, -0x6870 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16902Cu;
        goto label_16902c;
    }
    ctx->pc = 0x169024u;
    {
        const bool branch_taken_0x169024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169024u;
        // 0x169028: 0x24429790  addiu       $v0, $v0, -0x6870 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169024) {
            ctx->pc = 0x169030u;
            goto label_169030;
        }
    }
    ctx->pc = 0x16902Cu;
label_16902c:
    // 0x16902c: 0x24429810  addiu       $v0, $v0, -0x67F0
    ctx->pc = 0x16902cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940688));
label_169030:
    // 0x169030: 0xaf8286e4  sw          $v0, -0x791C($gp)
    ctx->pc = 0x169030u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936292), GPR_U32(ctx, 2));
label_169034:
    // 0x169034: 0xaf9186e8  sw          $s1, -0x7918($gp)
    ctx->pc = 0x169034u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936296), GPR_U32(ctx, 17));
label_169038:
    // 0x169038: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x169038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_16903c:
    // 0x16903c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x16903cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_169040:
    // 0x169040: 0x24426290  addiu       $v0, $v0, 0x6290
    ctx->pc = 0x169040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25232));
label_169044:
    // 0x169044: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x169044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169048:
    // 0x169048: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x169048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16904c:
    // 0x16904c: 0x24053200  addiu       $a1, $zero, 0x3200
    ctx->pc = 0x16904cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12800));
label_169050:
    // 0x169050: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x169050u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_169054:
    // 0x169054: 0x24063fff  addiu       $a2, $zero, 0x3FFF
    ctx->pc = 0x169054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
label_169058:
    // 0x169058: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x169058u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16905c:
    // 0x16905c: 0xc08d950  jal         func_236540
label_169060:
    if (ctx->pc == 0x169060u) {
        ctx->pc = 0x169060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16905Cu;
        // 0x169060: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169064u;
        goto label_169064;
    }
    ctx->pc = 0x16905Cu;
    SET_GPR_U32(ctx, 31, 0x169064u);
    ctx->pc = 0x169060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16905Cu;
    // 0x169060: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236540u;
    { ctx->pc = 0x236540; return; }
    ctx->pc = 0x169064u;
label_169064:
    // 0x169064: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x169064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_169068:
    // 0x169068: 0x3c080017  lui         $t0, 0x17
    ctx->pc = 0x169068u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)23 << 16));
label_16906c:
    // 0x16906c: 0x8c2aca48  lw          $t2, -0x35B8($at)
    ctx->pc = 0x16906cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953544)));
label_169070:
    // 0x169070: 0x3c090017  lui         $t1, 0x17
    ctx->pc = 0x169070u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)23 << 16));
label_169074:
    // 0x169074: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x169074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_169078:
    // 0x169078: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x169078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16907c:
    // 0x16907c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16907cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169080:
    // 0x169080: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x169080u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169084:
    // 0x169084: 0x25089750  addiu       $t0, $t0, -0x68B0
    ctx->pc = 0x169084u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294940496));
label_169088:
    // 0x169088: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x169088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_16908c:
    // 0x16908c: 0x8c2bca4c  lw          $t3, -0x35B4($at)
    ctx->pc = 0x16908cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953548)));
label_169090:
    // 0x169090: 0xc05a440  jal         func_169100
label_169094:
    if (ctx->pc == 0x169094u) {
        ctx->pc = 0x169094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169090u;
        // 0x169094: 0x25299720  addiu       $t1, $t1, -0x68E0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294940448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169098u;
        goto label_169098;
    }
    ctx->pc = 0x169090u;
    SET_GPR_U32(ctx, 31, 0x169098u);
    ctx->pc = 0x169094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169090u;
    // 0x169094: 0x25299720  addiu       $t1, $t1, -0x68E0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294940448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169100u;
    goto label_169100;
    ctx->pc = 0x169098u;
label_169098:
    // 0x169098: 0xc05a61c  jal         func_169870
label_16909c:
    if (ctx->pc == 0x16909Cu) {
        ctx->pc = 0x16909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169098u;
        // 0x16909c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1690A0u;
        goto label_1690a0;
    }
    ctx->pc = 0x169098u;
    SET_GPR_U32(ctx, 31, 0x1690A0u);
    ctx->pc = 0x16909Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169098u;
    // 0x16909c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169870u;
    { ctx->pc = 0x169870; return; }
    ctx->pc = 0x1690A0u;
label_1690a0:
    // 0x1690a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1690a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1690a4:
    // 0x1690a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1690a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1690a8:
    // 0x1690a8: 0x24063fff  addiu       $a2, $zero, 0x3FFF
    ctx->pc = 0x1690a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
label_1690ac:
    // 0x1690ac: 0xc08d950  jal         func_236540
label_1690b0:
    if (ctx->pc == 0x1690B0u) {
        ctx->pc = 0x1690B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1690ACu;
        // 0x1690b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1690B4u;
        goto label_1690b4;
    }
    ctx->pc = 0x1690ACu;
    SET_GPR_U32(ctx, 31, 0x1690B4u);
    ctx->pc = 0x1690B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1690ACu;
    // 0x1690b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236540u;
    { ctx->pc = 0x236540; return; }
    ctx->pc = 0x1690B4u;
label_1690b4:
    // 0x1690b4: 0x620ffe0  bltz        $s1, . + 4 + (-0x20 << 2)
label_1690b8:
    if (ctx->pc == 0x1690B8u) {
        ctx->pc = 0x1690BCu;
        goto label_1690bc;
    }
    ctx->pc = 0x1690B4u;
    {
        const bool branch_taken_0x1690b4 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x1690b4) {
            ctx->pc = 0x169038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169038;
        }
    }
    ctx->pc = 0x1690BCu;
label_1690bc:
    // 0x1690bc: 0xaf8086e4  sw          $zero, -0x791C($gp)
    ctx->pc = 0x1690bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936292), GPR_U32(ctx, 0));
label_1690c0:
    // 0x1690c0: 0xc0600d0  jal         func_180340
label_1690c4:
    if (ctx->pc == 0x1690C4u) {
        ctx->pc = 0x1690C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1690C0u;
        // 0x1690c4: 0xaf8086e8  sw          $zero, -0x7918($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936296), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1690C8u;
        goto label_1690c8;
    }
    ctx->pc = 0x1690C0u;
    SET_GPR_U32(ctx, 31, 0x1690C8u);
    ctx->pc = 0x1690C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1690C0u;
    // 0x1690c4: 0xaf8086e8  sw          $zero, -0x7918($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936296), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180340u;
    { ctx->pc = 0x180340; return; }
    ctx->pc = 0x1690C8u;
label_1690c8:
    // 0x1690c8: 0xc060158  jal         func_180560
label_1690cc:
    if (ctx->pc == 0x1690CCu) {
        ctx->pc = 0x1690D0u;
        goto label_1690d0;
    }
    ctx->pc = 0x1690C8u;
    SET_GPR_U32(ctx, 31, 0x1690D0u);
    ctx->pc = 0x180560u;
    { ctx->pc = 0x180560; return; }
    ctx->pc = 0x1690D0u;
label_1690d0:
    // 0x1690d0: 0xc060258  jal         func_180960
label_1690d4:
    if (ctx->pc == 0x1690D4u) {
        ctx->pc = 0x1690D8u;
        goto label_1690d8;
    }
    ctx->pc = 0x1690D0u;
    SET_GPR_U32(ctx, 31, 0x1690D8u);
    ctx->pc = 0x180960u;
    { ctx->pc = 0x180960; return; }
    ctx->pc = 0x1690D8u;
label_1690d8:
    // 0x1690d8: 0xc060258  jal         func_180960
label_1690dc:
    if (ctx->pc == 0x1690DCu) {
        ctx->pc = 0x1690E0u;
        goto label_1690e0;
    }
    ctx->pc = 0x1690D8u;
    SET_GPR_U32(ctx, 31, 0x1690E0u);
    ctx->pc = 0x180960u;
    { ctx->pc = 0x180960; return; }
    ctx->pc = 0x1690E0u;
label_1690e0:
    // 0x1690e0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1690e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1690e4:
    // 0x1690e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1690e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1690e8:
    // 0x1690e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1690e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1690ec:
    // 0x1690ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1690ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1690f0:
    // 0x1690f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1690f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1690f4:
    // 0x1690f4: 0x3e00008  jr          $ra
label_1690f8:
    if (ctx->pc == 0x1690F8u) {
        ctx->pc = 0x1690F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1690F4u;
        // 0x1690f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1690FCu;
        goto label_1690fc;
    }
    ctx->pc = 0x1690F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1690F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1690F4u;
        // 0x1690f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1690F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1690FCu;
label_1690fc:
    // 0x1690fc: 0x0  nop
    ctx->pc = 0x1690fcu;
    // NOP
label_169100:
    // 0x169100: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x169100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_169104:
    // 0x169104: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x169104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_169108:
    // 0x169108: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x169108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_16910c:
    // 0x16910c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x16910cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_169110:
    // 0x169110: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x169110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_169114:
    // 0x169114: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x169114u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_169118:
    // 0x169118: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x169118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_16911c:
    // 0x16911c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x16911cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_169120:
    // 0x169120: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x169120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_169124:
    // 0x169124: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x169124u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_169128:
    // 0x169128: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x169128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_16912c:
    // 0x16912c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x16912cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_169130:
    // 0x169130: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x169130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_169134:
    // 0x169134: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x169134u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_169138:
    // 0x169138: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x169138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16913c:
    // 0x16913c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x16913cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_169140:
    // 0x169140: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x169140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_169144:
    // 0x169144: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x169144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_169148:
    // 0x169148: 0x3c070029  lui         $a3, 0x29
    ctx->pc = 0x169148u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)41 << 16));
label_16914c:
    // 0x16914c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x16914cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_169150:
    // 0x169150: 0x24e704b0  addiu       $a3, $a3, 0x4B0
    ctx->pc = 0x169150u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1200));
label_169154:
    // 0x169154: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x169154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_169158:
    // 0x169158: 0x78e50000  lq          $a1, 0x0($a3)
    ctx->pc = 0x169158u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_16915c:
    // 0x16915c: 0x78e40010  lq          $a0, 0x10($a3)
    ctx->pc = 0x16915cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 16)));
label_169160:
    // 0x169160: 0x78e30020  lq          $v1, 0x20($a3)
    ctx->pc = 0x169160u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 32)));
label_169164:
    // 0x169164: 0x78e20030  lq          $v0, 0x30($a3)
    ctx->pc = 0x169164u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 48)));
label_169168:
    // 0x169168: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x169168u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
label_16916c:
    // 0x16916c: 0x7cc40010  sq          $a0, 0x10($a2)
    ctx->pc = 0x16916cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 4));
label_169170:
    // 0x169170: 0x7cc30020  sq          $v1, 0x20($a2)
    ctx->pc = 0x169170u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 3));
label_169174:
    // 0x169174: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x169174u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
label_169178:
    // 0x169178: 0x78e30040  lq          $v1, 0x40($a3)
    ctx->pc = 0x169178u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 64)));
label_16917c:
    // 0x16917c: 0xdce20050  ld          $v0, 0x50($a3)
    ctx->pc = 0x16917cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 80)));
    ctx->pc = 0x169180u;
    return;
}

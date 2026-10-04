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


void FUN_0017faa0_part560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2909d0u: goto label_2909d0;
        case 0x2909d4u: goto label_2909d4;
        case 0x2909d8u: goto label_2909d8;
        case 0x2909dcu: goto label_2909dc;
        case 0x2909e0u: goto label_2909e0;
        case 0x2909e4u: goto label_2909e4;
        case 0x2909e8u: goto label_2909e8;
        case 0x2909ecu: goto label_2909ec;
        case 0x2909f0u: goto label_2909f0;
        case 0x2909f4u: goto label_2909f4;
        case 0x2909f8u: goto label_2909f8;
        case 0x2909fcu: goto label_2909fc;
        case 0x290a00u: goto label_290a00;
        case 0x290a04u: goto label_290a04;
        case 0x290a08u: goto label_290a08;
        case 0x290a0cu: goto label_290a0c;
        case 0x290a10u: goto label_290a10;
        case 0x290a14u: goto label_290a14;
        case 0x290a18u: goto label_290a18;
        case 0x290a1cu: goto label_290a1c;
        case 0x290a20u: goto label_290a20;
        case 0x290a24u: goto label_290a24;
        case 0x290a28u: goto label_290a28;
        case 0x290a2cu: goto label_290a2c;
        case 0x290a30u: goto label_290a30;
        case 0x290a34u: goto label_290a34;
        case 0x290a38u: goto label_290a38;
        case 0x290a3cu: goto label_290a3c;
        case 0x290a40u: goto label_290a40;
        case 0x290a44u: goto label_290a44;
        case 0x290a48u: goto label_290a48;
        case 0x290a4cu: goto label_290a4c;
        case 0x290a50u: goto label_290a50;
        case 0x290a54u: goto label_290a54;
        case 0x290a58u: goto label_290a58;
        case 0x290a5cu: goto label_290a5c;
        case 0x290a60u: goto label_290a60;
        case 0x290a64u: goto label_290a64;
        case 0x290a68u: goto label_290a68;
        case 0x290a6cu: goto label_290a6c;
        case 0x290a70u: goto label_290a70;
        case 0x290a74u: goto label_290a74;
        case 0x290a78u: goto label_290a78;
        case 0x290a7cu: goto label_290a7c;
        case 0x290a80u: goto label_290a80;
        case 0x290a84u: goto label_290a84;
        case 0x290a88u: goto label_290a88;
        case 0x290a8cu: goto label_290a8c;
        case 0x290a90u: goto label_290a90;
        case 0x290a94u: goto label_290a94;
        case 0x290a98u: goto label_290a98;
        case 0x290a9cu: goto label_290a9c;
        case 0x290aa0u: goto label_290aa0;
        case 0x290aa4u: goto label_290aa4;
        case 0x290aa8u: goto label_290aa8;
        case 0x290aacu: goto label_290aac;
        case 0x290ab0u: goto label_290ab0;
        case 0x290ab4u: goto label_290ab4;
        case 0x290ab8u: goto label_290ab8;
        case 0x290abcu: goto label_290abc;
        case 0x290ac0u: goto label_290ac0;
        case 0x290ac4u: goto label_290ac4;
        case 0x290ac8u: goto label_290ac8;
        case 0x290accu: goto label_290acc;
        case 0x290ad0u: goto label_290ad0;
        case 0x290ad4u: goto label_290ad4;
        case 0x290ad8u: goto label_290ad8;
        case 0x290adcu: goto label_290adc;
        case 0x290ae0u: goto label_290ae0;
        case 0x290ae4u: goto label_290ae4;
        case 0x290ae8u: goto label_290ae8;
        case 0x290aecu: goto label_290aec;
        case 0x290af0u: goto label_290af0;
        case 0x290af4u: goto label_290af4;
        case 0x290af8u: goto label_290af8;
        case 0x290afcu: goto label_290afc;
        case 0x290b00u: goto label_290b00;
        case 0x290b04u: goto label_290b04;
        case 0x290b08u: goto label_290b08;
        case 0x290b0cu: goto label_290b0c;
        case 0x290b10u: goto label_290b10;
        case 0x290b14u: goto label_290b14;
        case 0x290b18u: goto label_290b18;
        case 0x290b1cu: goto label_290b1c;
        case 0x290b20u: goto label_290b20;
        case 0x290b24u: goto label_290b24;
        case 0x290b28u: goto label_290b28;
        case 0x290b2cu: goto label_290b2c;
        case 0x290b30u: goto label_290b30;
        case 0x290b34u: goto label_290b34;
        case 0x290b38u: goto label_290b38;
        case 0x290b3cu: goto label_290b3c;
        case 0x290b40u: goto label_290b40;
        case 0x290b44u: goto label_290b44;
        case 0x290b48u: goto label_290b48;
        case 0x290b4cu: goto label_290b4c;
        case 0x290b50u: goto label_290b50;
        case 0x290b54u: goto label_290b54;
        case 0x290b58u: goto label_290b58;
        case 0x290b5cu: goto label_290b5c;
        case 0x290b60u: goto label_290b60;
        case 0x290b64u: goto label_290b64;
        case 0x290b68u: goto label_290b68;
        case 0x290b6cu: goto label_290b6c;
        case 0x290b70u: goto label_290b70;
        case 0x290b74u: goto label_290b74;
        case 0x290b78u: goto label_290b78;
        case 0x290b7cu: goto label_290b7c;
        case 0x290b80u: goto label_290b80;
        case 0x290b84u: goto label_290b84;
        case 0x290b88u: goto label_290b88;
        case 0x290b8cu: goto label_290b8c;
        case 0x290b90u: goto label_290b90;
        case 0x290b94u: goto label_290b94;
        case 0x290b98u: goto label_290b98;
        case 0x290b9cu: goto label_290b9c;
        case 0x290ba0u: goto label_290ba0;
        case 0x290ba4u: goto label_290ba4;
        case 0x290ba8u: goto label_290ba8;
        case 0x290bacu: goto label_290bac;
        case 0x290bb0u: goto label_290bb0;
        case 0x290bb4u: goto label_290bb4;
        case 0x290bb8u: goto label_290bb8;
        case 0x290bbcu: goto label_290bbc;
        case 0x290bc0u: goto label_290bc0;
        case 0x290bc4u: goto label_290bc4;
        case 0x290bc8u: goto label_290bc8;
        case 0x290bccu: goto label_290bcc;
        case 0x290bd0u: goto label_290bd0;
        case 0x290bd4u: goto label_290bd4;
        case 0x290bd8u: goto label_290bd8;
        case 0x290bdcu: goto label_290bdc;
        case 0x290be0u: goto label_290be0;
        case 0x290be4u: goto label_290be4;
        case 0x290be8u: goto label_290be8;
        case 0x290becu: goto label_290bec;
        case 0x290bf0u: goto label_290bf0;
        case 0x290bf4u: goto label_290bf4;
        case 0x290bf8u: goto label_290bf8;
        case 0x290bfcu: goto label_290bfc;
        case 0x290c00u: goto label_290c00;
        case 0x290c04u: goto label_290c04;
        case 0x290c08u: goto label_290c08;
        case 0x290c0cu: goto label_290c0c;
        case 0x290c10u: goto label_290c10;
        case 0x290c14u: goto label_290c14;
        case 0x290c18u: goto label_290c18;
        case 0x290c1cu: goto label_290c1c;
        case 0x290c20u: goto label_290c20;
        case 0x290c24u: goto label_290c24;
        case 0x290c28u: goto label_290c28;
        case 0x290c2cu: goto label_290c2c;
        case 0x290c30u: goto label_290c30;
        case 0x290c34u: goto label_290c34;
        case 0x290c38u: goto label_290c38;
        case 0x290c3cu: goto label_290c3c;
        case 0x290c40u: goto label_290c40;
        case 0x290c44u: goto label_290c44;
        case 0x290c48u: goto label_290c48;
        case 0x290c4cu: goto label_290c4c;
        case 0x290c50u: goto label_290c50;
        case 0x290c54u: goto label_290c54;
        case 0x290c58u: goto label_290c58;
        case 0x290c5cu: goto label_290c5c;
        case 0x290c60u: goto label_290c60;
        case 0x290c64u: goto label_290c64;
        case 0x290c68u: goto label_290c68;
        case 0x290c6cu: goto label_290c6c;
        case 0x290c70u: goto label_290c70;
        case 0x290c74u: goto label_290c74;
        case 0x290c78u: goto label_290c78;
        case 0x290c7cu: goto label_290c7c;
        case 0x290c80u: goto label_290c80;
        case 0x290c84u: goto label_290c84;
        case 0x290c88u: goto label_290c88;
        case 0x290c8cu: goto label_290c8c;
        case 0x290c90u: goto label_290c90;
        case 0x290c94u: goto label_290c94;
        case 0x290c98u: goto label_290c98;
        case 0x290c9cu: goto label_290c9c;
        case 0x290ca0u: goto label_290ca0;
        case 0x290ca4u: goto label_290ca4;
        case 0x290ca8u: goto label_290ca8;
        case 0x290cacu: goto label_290cac;
        case 0x290cb0u: goto label_290cb0;
        case 0x290cb4u: goto label_290cb4;
        case 0x290cb8u: goto label_290cb8;
        case 0x290cbcu: goto label_290cbc;
        case 0x290cc0u: goto label_290cc0;
        case 0x290cc4u: goto label_290cc4;
        case 0x290cc8u: goto label_290cc8;
        case 0x290cccu: goto label_290ccc;
        case 0x290cd0u: goto label_290cd0;
        case 0x290cd4u: goto label_290cd4;
        case 0x290cd8u: goto label_290cd8;
        case 0x290cdcu: goto label_290cdc;
        case 0x290ce0u: goto label_290ce0;
        case 0x290ce4u: goto label_290ce4;
        case 0x290ce8u: goto label_290ce8;
        case 0x290cecu: goto label_290cec;
        case 0x290cf0u: goto label_290cf0;
        case 0x290cf4u: goto label_290cf4;
        case 0x290cf8u: goto label_290cf8;
        case 0x290cfcu: goto label_290cfc;
        case 0x290d00u: goto label_290d00;
        case 0x290d04u: goto label_290d04;
        case 0x290d08u: goto label_290d08;
        case 0x290d0cu: goto label_290d0c;
        case 0x290d10u: goto label_290d10;
        case 0x290d14u: goto label_290d14;
        case 0x290d18u: goto label_290d18;
        case 0x290d1cu: goto label_290d1c;
        case 0x290d20u: goto label_290d20;
        case 0x290d24u: goto label_290d24;
        case 0x290d28u: goto label_290d28;
        case 0x290d2cu: goto label_290d2c;
        case 0x290d30u: goto label_290d30;
        case 0x290d34u: goto label_290d34;
        case 0x290d38u: goto label_290d38;
        case 0x290d3cu: goto label_290d3c;
        case 0x290d40u: goto label_290d40;
        case 0x290d44u: goto label_290d44;
        case 0x290d48u: goto label_290d48;
        case 0x290d4cu: goto label_290d4c;
        case 0x290d50u: goto label_290d50;
        case 0x290d54u: goto label_290d54;
        case 0x290d58u: goto label_290d58;
        case 0x290d5cu: goto label_290d5c;
        case 0x290d60u: goto label_290d60;
        case 0x290d64u: goto label_290d64;
        case 0x290d68u: goto label_290d68;
        case 0x290d6cu: goto label_290d6c;
        case 0x290d70u: goto label_290d70;
        case 0x290d74u: goto label_290d74;
        case 0x290d78u: goto label_290d78;
        case 0x290d7cu: goto label_290d7c;
        case 0x290d80u: goto label_290d80;
        case 0x290d84u: goto label_290d84;
        case 0x290d88u: goto label_290d88;
        case 0x290d8cu: goto label_290d8c;
        case 0x290d90u: goto label_290d90;
        case 0x290d94u: goto label_290d94;
        case 0x290d98u: goto label_290d98;
        case 0x290d9cu: goto label_290d9c;
        case 0x290da0u: goto label_290da0;
        case 0x290da4u: goto label_290da4;
        case 0x290da8u: goto label_290da8;
        case 0x290dacu: goto label_290dac;
        case 0x290db0u: goto label_290db0;
        case 0x290db4u: goto label_290db4;
        case 0x290db8u: goto label_290db8;
        case 0x290dbcu: goto label_290dbc;
        case 0x290dc0u: goto label_290dc0;
        case 0x290dc4u: goto label_290dc4;
        case 0x290dc8u: goto label_290dc8;
        case 0x290dccu: goto label_290dcc;
        case 0x290dd0u: goto label_290dd0;
        case 0x290dd4u: goto label_290dd4;
        case 0x290dd8u: goto label_290dd8;
        case 0x290ddcu: goto label_290ddc;
        case 0x290de0u: goto label_290de0;
        case 0x290de4u: goto label_290de4;
        case 0x290de8u: goto label_290de8;
        case 0x290decu: goto label_290dec;
        case 0x290df0u: goto label_290df0;
        case 0x290df4u: goto label_290df4;
        case 0x290df8u: goto label_290df8;
        case 0x290dfcu: goto label_290dfc;
        case 0x290e00u: goto label_290e00;
        case 0x290e04u: goto label_290e04;
        case 0x290e08u: goto label_290e08;
        case 0x290e0cu: goto label_290e0c;
        case 0x290e10u: goto label_290e10;
        case 0x290e14u: goto label_290e14;
        case 0x290e18u: goto label_290e18;
        case 0x290e1cu: goto label_290e1c;
        case 0x290e20u: goto label_290e20;
        case 0x290e24u: goto label_290e24;
        case 0x290e28u: goto label_290e28;
        case 0x290e2cu: goto label_290e2c;
        case 0x290e30u: goto label_290e30;
        case 0x290e34u: goto label_290e34;
        case 0x290e38u: goto label_290e38;
        case 0x290e3cu: goto label_290e3c;
        case 0x290e40u: goto label_290e40;
        case 0x290e44u: goto label_290e44;
        case 0x290e48u: goto label_290e48;
        case 0x290e4cu: goto label_290e4c;
        case 0x290e50u: goto label_290e50;
        case 0x290e54u: goto label_290e54;
        case 0x290e58u: goto label_290e58;
        case 0x290e5cu: goto label_290e5c;
        case 0x290e60u: goto label_290e60;
        case 0x290e64u: goto label_290e64;
        case 0x290e68u: goto label_290e68;
        case 0x290e6cu: goto label_290e6c;
        case 0x290e70u: goto label_290e70;
        case 0x290e74u: goto label_290e74;
        case 0x290e78u: goto label_290e78;
        case 0x290e7cu: goto label_290e7c;
        case 0x290e80u: goto label_290e80;
        case 0x290e84u: goto label_290e84;
        case 0x290e88u: goto label_290e88;
        case 0x290e8cu: goto label_290e8c;
        case 0x290e90u: goto label_290e90;
        case 0x290e94u: goto label_290e94;
        case 0x290e98u: goto label_290e98;
        case 0x290e9cu: goto label_290e9c;
        case 0x290ea0u: goto label_290ea0;
        case 0x290ea4u: goto label_290ea4;
        case 0x290ea8u: goto label_290ea8;
        case 0x290eacu: goto label_290eac;
        case 0x290eb0u: goto label_290eb0;
        case 0x290eb4u: goto label_290eb4;
        case 0x290eb8u: goto label_290eb8;
        case 0x290ebcu: goto label_290ebc;
        case 0x290ec0u: goto label_290ec0;
        case 0x290ec4u: goto label_290ec4;
        case 0x290ec8u: goto label_290ec8;
        case 0x290eccu: goto label_290ecc;
        case 0x290ed0u: goto label_290ed0;
        case 0x290ed4u: goto label_290ed4;
        case 0x290ed8u: goto label_290ed8;
        case 0x290edcu: goto label_290edc;
        case 0x290ee0u: goto label_290ee0;
        case 0x290ee4u: goto label_290ee4;
        case 0x290ee8u: goto label_290ee8;
        case 0x290eecu: goto label_290eec;
        case 0x290ef0u: goto label_290ef0;
        case 0x290ef4u: goto label_290ef4;
        case 0x290ef8u: goto label_290ef8;
        case 0x290efcu: goto label_290efc;
        case 0x290f00u: goto label_290f00;
        case 0x290f04u: goto label_290f04;
        case 0x290f08u: goto label_290f08;
        case 0x290f0cu: goto label_290f0c;
        case 0x290f10u: goto label_290f10;
        case 0x290f14u: goto label_290f14;
        case 0x290f18u: goto label_290f18;
        case 0x290f1cu: goto label_290f1c;
        case 0x290f20u: goto label_290f20;
        case 0x290f24u: goto label_290f24;
        case 0x290f28u: goto label_290f28;
        case 0x290f2cu: goto label_290f2c;
        case 0x290f30u: goto label_290f30;
        case 0x290f34u: goto label_290f34;
        case 0x290f38u: goto label_290f38;
        case 0x290f3cu: goto label_290f3c;
        case 0x290f40u: goto label_290f40;
        case 0x290f44u: goto label_290f44;
        case 0x290f48u: goto label_290f48;
        case 0x290f4cu: goto label_290f4c;
        case 0x290f50u: goto label_290f50;
        case 0x290f54u: goto label_290f54;
        case 0x290f58u: goto label_290f58;
        case 0x290f5cu: goto label_290f5c;
        case 0x290f60u: goto label_290f60;
        case 0x290f64u: goto label_290f64;
        case 0x290f68u: goto label_290f68;
        case 0x290f6cu: goto label_290f6c;
        case 0x290f70u: goto label_290f70;
        case 0x290f74u: goto label_290f74;
        case 0x290f78u: goto label_290f78;
        case 0x290f7cu: goto label_290f7c;
        case 0x290f80u: goto label_290f80;
        case 0x290f84u: goto label_290f84;
        case 0x290f88u: goto label_290f88;
        case 0x290f8cu: goto label_290f8c;
        case 0x290f90u: goto label_290f90;
        case 0x290f94u: goto label_290f94;
        case 0x290f98u: goto label_290f98;
        case 0x290f9cu: goto label_290f9c;
        case 0x290fa0u: goto label_290fa0;
        case 0x290fa4u: goto label_290fa4;
        case 0x290fa8u: goto label_290fa8;
        case 0x290facu: goto label_290fac;
        case 0x290fb0u: goto label_290fb0;
        case 0x290fb4u: goto label_290fb4;
        case 0x290fb8u: goto label_290fb8;
        case 0x290fbcu: goto label_290fbc;
        case 0x290fc0u: goto label_290fc0;
        case 0x290fc4u: goto label_290fc4;
        case 0x290fc8u: goto label_290fc8;
        case 0x290fccu: goto label_290fcc;
        case 0x290fd0u: goto label_290fd0;
        case 0x290fd4u: goto label_290fd4;
        case 0x290fd8u: goto label_290fd8;
        case 0x290fdcu: goto label_290fdc;
        case 0x290fe0u: goto label_290fe0;
        case 0x290fe4u: goto label_290fe4;
        case 0x290fe8u: goto label_290fe8;
        case 0x290fecu: goto label_290fec;
        case 0x290ff0u: goto label_290ff0;
        case 0x290ff4u: goto label_290ff4;
        case 0x290ff8u: goto label_290ff8;
        case 0x290ffcu: goto label_290ffc;
        case 0x291000u: goto label_291000;
        case 0x291004u: goto label_291004;
        case 0x291008u: goto label_291008;
        case 0x29100cu: goto label_29100c;
        case 0x291010u: goto label_291010;
        case 0x291014u: goto label_291014;
        case 0x291018u: goto label_291018;
        case 0x29101cu: goto label_29101c;
        case 0x291020u: goto label_291020;
        case 0x291024u: goto label_291024;
        case 0x291028u: goto label_291028;
        case 0x29102cu: goto label_29102c;
        case 0x291030u: goto label_291030;
        case 0x291034u: goto label_291034;
        case 0x291038u: goto label_291038;
        case 0x29103cu: goto label_29103c;
        case 0x291040u: goto label_291040;
        case 0x291044u: goto label_291044;
        case 0x291048u: goto label_291048;
        case 0x29104cu: goto label_29104c;
        case 0x291050u: goto label_291050;
        case 0x291054u: goto label_291054;
        case 0x291058u: goto label_291058;
        case 0x29105cu: goto label_29105c;
        case 0x291060u: goto label_291060;
        case 0x291064u: goto label_291064;
        case 0x291068u: goto label_291068;
        case 0x29106cu: goto label_29106c;
        case 0x291070u: goto label_291070;
        case 0x291074u: goto label_291074;
        case 0x291078u: goto label_291078;
        case 0x29107cu: goto label_29107c;
        case 0x291080u: goto label_291080;
        case 0x291084u: goto label_291084;
        case 0x291088u: goto label_291088;
        case 0x29108cu: goto label_29108c;
        case 0x291090u: goto label_291090;
        case 0x291094u: goto label_291094;
        case 0x291098u: goto label_291098;
        case 0x29109cu: goto label_29109c;
        case 0x2910a0u: goto label_2910a0;
        case 0x2910a4u: goto label_2910a4;
        case 0x2910a8u: goto label_2910a8;
        case 0x2910acu: goto label_2910ac;
        case 0x2910b0u: goto label_2910b0;
        case 0x2910b4u: goto label_2910b4;
        case 0x2910b8u: goto label_2910b8;
        case 0x2910bcu: goto label_2910bc;
        case 0x2910c0u: goto label_2910c0;
        case 0x2910c4u: goto label_2910c4;
        case 0x2910c8u: goto label_2910c8;
        case 0x2910ccu: goto label_2910cc;
        case 0x2910d0u: goto label_2910d0;
        case 0x2910d4u: goto label_2910d4;
        case 0x2910d8u: goto label_2910d8;
        case 0x2910dcu: goto label_2910dc;
        case 0x2910e0u: goto label_2910e0;
        case 0x2910e4u: goto label_2910e4;
        case 0x2910e8u: goto label_2910e8;
        case 0x2910ecu: goto label_2910ec;
        case 0x2910f0u: goto label_2910f0;
        case 0x2910f4u: goto label_2910f4;
        case 0x2910f8u: goto label_2910f8;
        case 0x2910fcu: goto label_2910fc;
        case 0x291100u: goto label_291100;
        case 0x291104u: goto label_291104;
        case 0x291108u: goto label_291108;
        case 0x29110cu: goto label_29110c;
        case 0x291110u: goto label_291110;
        case 0x291114u: goto label_291114;
        case 0x291118u: goto label_291118;
        case 0x29111cu: goto label_29111c;
        case 0x291120u: goto label_291120;
        case 0x291124u: goto label_291124;
        case 0x291128u: goto label_291128;
        case 0x29112cu: goto label_29112c;
        case 0x291130u: goto label_291130;
        case 0x291134u: goto label_291134;
        case 0x291138u: goto label_291138;
        case 0x29113cu: goto label_29113c;
        case 0x291140u: goto label_291140;
        case 0x291144u: goto label_291144;
        case 0x291148u: goto label_291148;
        case 0x29114cu: goto label_29114c;
        case 0x291150u: goto label_291150;
        case 0x291154u: goto label_291154;
        case 0x291158u: goto label_291158;
        case 0x29115cu: goto label_29115c;
        case 0x291160u: goto label_291160;
        case 0x291164u: goto label_291164;
        case 0x291168u: goto label_291168;
        case 0x29116cu: goto label_29116c;
        case 0x291170u: goto label_291170;
        case 0x291174u: goto label_291174;
        case 0x291178u: goto label_291178;
        case 0x29117cu: goto label_29117c;
        case 0x291180u: goto label_291180;
        case 0x291184u: goto label_291184;
        case 0x291188u: goto label_291188;
        case 0x29118cu: goto label_29118c;
        case 0x291190u: goto label_291190;
        case 0x291194u: goto label_291194;
        case 0x291198u: goto label_291198;
        case 0x29119cu: goto label_29119c;
        default: return;
    }

label_2909d0:
    // 0x2909d0: 0x2909c8  .word       0x002909C8                   # jr          $at # 000909C0 <InstrIdType: CPU_SPECIAL>
label_2909d4:
    if (ctx->pc == 0x2909D4u) {
        ctx->pc = 0x2909D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2909D0u;
        // 0x2909d4: 0x2909c8  .word       0x002909C8                   # jr          $at # 000909C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2909D8u;
        goto label_2909d8;
    }
    ctx->pc = 0x2909D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x2909D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2909D0u;
        // 0x2909d4: 0x2909c8  .word       0x002909C8                   # jr          $at # 000909C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2909D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2909D8u;
label_2909d8:
    // 0x2909d8: 0x2909d0  .word       0x002909D0                   # mfhi        $at # 002901C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2909d8u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_2909dc:
    // 0x2909dc: 0x2909d0  .word       0x002909D0                   # mfhi        $at # 002901C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2909dcu;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_2909e0:
    // 0x2909e0: 0x2909d8  .word       0x002909D8                   # mult        $at, $at, $t1 # 000001C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2909e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_2909e4:
    // 0x2909e4: 0x2909d8  .word       0x002909D8                   # mult        $at, $at, $t1 # 000001C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2909e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_2909e8:
    // 0x2909e8: 0x2909e0  .word       0x002909E0                   # add         $at, $at, $t1 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2909e8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_2909ec:
    // 0x2909ec: 0x2909e0  .word       0x002909E0                   # add         $at, $at, $t1 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2909ecu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_2909f0:
    // 0x2909f0: 0x2909e8  .word       0x002909E8                   # mfsa        $at # 002901C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2909f0u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_2909f4:
    // 0x2909f4: 0x2909e8  .word       0x002909E8                   # mfsa        $at # 002901C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2909f4u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_2909f8:
    // 0x2909f8: 0x2909f0  tge         $at, $t1, 39
    ctx->pc = 0x2909f8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_2909fc:
    // 0x2909fc: 0x2909f0  tge         $at, $t1, 39
    ctx->pc = 0x2909fcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_290a00:
    // 0x290a00: 0x2909f8  .word       0x002909F8                   # dsll        $at, $t1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290a00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 9) << 7);
label_290a04:
    // 0x290a04: 0x2909f8  .word       0x002909F8                   # dsll        $at, $t1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290a04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 9) << 7);
label_290a08:
    // 0x290a08: 0x290a00  .word       0x00290A00                   # sll         $at, $t1, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290a08u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_290a0c:
    // 0x290a0c: 0x290a00  .word       0x00290A00                   # sll         $at, $t1, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_290a10:
    // 0x290a10: 0x290a08  .word       0x00290A08                   # jr          $at # 00090A00 <InstrIdType: CPU_SPECIAL>
label_290a14:
    if (ctx->pc == 0x290A14u) {
        ctx->pc = 0x290A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A10u;
        // 0x290a14: 0x290a08  .word       0x00290A08                   # jr          $at # 00090A00 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x290A18u;
        goto label_290a18;
    }
    ctx->pc = 0x290A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x290A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A10u;
        // 0x290a14: 0x290a08  .word       0x00290A08                   # jr          $at # 00090A00 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290A10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x290A18u;
label_290a18:
    // 0x290a18: 0x290a10  .word       0x00290A10                   # mfhi        $at # 00290200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290a18u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_290a1c:
    // 0x290a1c: 0x290a10  .word       0x00290A10                   # mfhi        $at # 00290200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290a1cu;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_290a20:
    // 0x290a20: 0x290a18  .word       0x00290A18                   # mult        $at, $at, $t1 # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290a20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_290a24:
    // 0x290a24: 0x290a18  .word       0x00290A18                   # mult        $at, $at, $t1 # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290a24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_290a28:
    // 0x290a28: 0x290a20  .word       0x00290A20                   # add         $at, $at, $t1 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290a28u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_290a2c:
    // 0x290a2c: 0x290a20  .word       0x00290A20                   # add         $at, $at, $t1 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290a2cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_290a30:
    // 0x290a30: 0x290a28  .word       0x00290A28                   # mfsa        $at # 00290200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290a30u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_290a34:
    // 0x290a34: 0x290a28  .word       0x00290A28                   # mfsa        $at # 00290200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290a34u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_290a38:
    // 0x290a38: 0x290a30  tge         $at, $t1, 40
    ctx->pc = 0x290a38u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_290a3c:
    // 0x290a3c: 0x290a30  tge         $at, $t1, 40
    ctx->pc = 0x290a3cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_290a40:
    // 0x290a40: 0x290a38  .word       0x00290A38                   # dsll        $at, $t1, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290a40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 9) << 8);
label_290a44:
    // 0x290a44: 0x290a38  .word       0x00290A38                   # dsll        $at, $t1, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290a44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 9) << 8);
label_290a48:
    // 0x290a48: 0x290a40  .word       0x00290A40                   # sll         $at, $t1, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290a48u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 9));
label_290a4c:
    // 0x290a4c: 0x290a40  .word       0x00290A40                   # sll         $at, $t1, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 9));
label_290a50:
    // 0x290a50: 0x290a48  .word       0x00290A48                   # jr          $at # 00090A40 <InstrIdType: CPU_SPECIAL>
label_290a54:
    if (ctx->pc == 0x290A54u) {
        ctx->pc = 0x290A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A50u;
        // 0x290a54: 0x290a48  .word       0x00290A48                   # jr          $at # 00090A40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x290A58u;
        goto label_290a58;
    }
    ctx->pc = 0x290A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x290A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A50u;
        // 0x290a54: 0x290a48  .word       0x00290A48                   # jr          $at # 00090A40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290A50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x290A58u;
label_290a58:
    // 0x290a58: 0x290a50  .word       0x00290A50                   # mfhi        $at # 00290240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290a58u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_290a5c:
    // 0x290a5c: 0x290a50  .word       0x00290A50                   # mfhi        $at # 00290240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290a5cu;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_290a60:
    // 0x290a60: 0x290a58  .word       0x00290A58                   # mult        $at, $at, $t1 # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290a60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_290a64:
    // 0x290a64: 0x290a58  .word       0x00290A58                   # mult        $at, $at, $t1 # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290a64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_290a68:
    // 0x290a68: 0x290a60  .word       0x00290A60                   # add         $at, $at, $t1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290a68u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_290a6c:
    // 0x290a6c: 0x290a60  .word       0x00290A60                   # add         $at, $at, $t1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290a6cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_290a70:
    // 0x290a70: 0x290a68  .word       0x00290A68                   # mfsa        $at # 00290240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290a70u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_290a74:
    // 0x290a74: 0x290a68  .word       0x00290A68                   # mfsa        $at # 00290240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290a74u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_290a78:
    // 0x290a78: 0x290a70  tge         $at, $t1, 41
    ctx->pc = 0x290a78u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_290a7c:
    // 0x290a7c: 0x290a70  tge         $at, $t1, 41
    ctx->pc = 0x290a7cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_290a80:
    // 0x290a80: 0x290a78  .word       0x00290A78                   # dsll        $at, $t1, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290a80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 9) << 9);
label_290a84:
    // 0x290a84: 0x290a78  .word       0x00290A78                   # dsll        $at, $t1, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290a84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 9) << 9);
label_290a88:
    // 0x290a88: 0x290a80  .word       0x00290A80                   # sll         $at, $t1, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290a88u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 10));
label_290a8c:
    // 0x290a8c: 0x290a80  .word       0x00290A80                   # sll         $at, $t1, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 10));
label_290a90:
    // 0x290a90: 0x290a88  .word       0x00290A88                   # jr          $at # 00090A80 <InstrIdType: CPU_SPECIAL>
label_290a94:
    if (ctx->pc == 0x290A94u) {
        ctx->pc = 0x290A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A90u;
        // 0x290a94: 0x290a88  .word       0x00290A88                   # jr          $at # 00090A80 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x290A98u;
        goto label_290a98;
    }
    ctx->pc = 0x290A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x290A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A90u;
        // 0x290a94: 0x290a88  .word       0x00290A88                   # jr          $at # 00090A80 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290A90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x290A98u;
label_290a98:
    // 0x290a98: 0x290a90  .word       0x00290A90                   # mfhi        $at # 00290280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290a98u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_290a9c:
    // 0x290a9c: 0x290a90  .word       0x00290A90                   # mfhi        $at # 00290280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290a9cu;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_290aa0:
    // 0x290aa0: 0x290a98  .word       0x00290A98                   # mult        $at, $at, $t1 # 00000280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290aa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_290aa4:
    // 0x290aa4: 0x290a98  .word       0x00290A98                   # mult        $at, $at, $t1 # 00000280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290aa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_290aa8:
    // 0x290aa8: 0x290aa0  .word       0x00290AA0                   # add         $at, $at, $t1 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290aa8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_290aac:
    // 0x290aac: 0x290aa0  .word       0x00290AA0                   # add         $at, $at, $t1 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290aacu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_290ab0:
    // 0x290ab0: 0x290aa8  .word       0x00290AA8                   # mfsa        $at # 00290280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290ab0u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_290ab4:
    // 0x290ab4: 0x290aa8  .word       0x00290AA8                   # mfsa        $at # 00290280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290ab4u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_290ab8:
    // 0x290ab8: 0x290ab0  tge         $at, $t1, 42
    ctx->pc = 0x290ab8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_290abc:
    // 0x290abc: 0x290ab0  tge         $at, $t1, 42
    ctx->pc = 0x290abcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_290ac0:
    // 0x290ac0: 0x290ab8  .word       0x00290AB8                   # dsll        $at, $t1, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290ac0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 9) << 10);
label_290ac4:
    // 0x290ac4: 0x290ab8  .word       0x00290AB8                   # dsll        $at, $t1, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290ac4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 9) << 10);
label_290ac8:
    // 0x290ac8: 0x290ac0  .word       0x00290AC0                   # sll         $at, $t1, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 11));
label_290acc:
    // 0x290acc: 0x290ac0  .word       0x00290AC0                   # sll         $at, $t1, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290accu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 11));
label_290ad0:
    // 0x290ad0: 0x290ac8  .word       0x00290AC8                   # jr          $at # 00090AC0 <InstrIdType: CPU_SPECIAL>
label_290ad4:
    if (ctx->pc == 0x290AD4u) {
        ctx->pc = 0x290AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290AD0u;
        // 0x290ad4: 0x290ac8  .word       0x00290AC8                   # jr          $at # 00090AC0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x290AD8u;
        goto label_290ad8;
    }
    ctx->pc = 0x290AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x290AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290AD0u;
        // 0x290ad4: 0x290ac8  .word       0x00290AC8                   # jr          $at # 00090AC0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290AD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x290AD8u;
label_290ad8:
    // 0x290ad8: 0x290ad0  .word       0x00290AD0                   # mfhi        $at # 002902C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290ad8u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_290adc:
    // 0x290adc: 0x290ad0  .word       0x00290AD0                   # mfhi        $at # 002902C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290adcu;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_290ae0:
    // 0x290ae0: 0x290ad8  .word       0x00290AD8                   # mult        $at, $at, $t1 # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290ae0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_290ae4:
    // 0x290ae4: 0x290ad8  .word       0x00290AD8                   # mult        $at, $at, $t1 # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290ae4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_290ae8:
    // 0x290ae8: 0x290ae0  .word       0x00290AE0                   # add         $at, $at, $t1 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290ae8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_290aec:
    // 0x290aec: 0x290ae0  .word       0x00290AE0                   # add         $at, $at, $t1 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290aecu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_290af0:
    // 0x290af0: 0x290ae8  .word       0x00290AE8                   # mfsa        $at # 002902C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290af0u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_290af4:
    // 0x290af4: 0x290ae8  .word       0x00290AE8                   # mfsa        $at # 002902C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290af4u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_290af8:
    // 0x290af8: 0x290af0  tge         $at, $t1, 43
    ctx->pc = 0x290af8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_290afc:
    // 0x290afc: 0x290af0  tge         $at, $t1, 43
    ctx->pc = 0x290afcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_290b00:
    // 0x290b00: 0x290af8  .word       0x00290AF8                   # dsll        $at, $t1, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290b00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 9) << 11);
label_290b04:
    // 0x290b04: 0x290af8  .word       0x00290AF8                   # dsll        $at, $t1, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290b04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 9) << 11);
label_290b08:
    // 0x290b08: 0x290b00  .word       0x00290B00                   # sll         $at, $t1, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290b08u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 12));
label_290b0c:
    // 0x290b0c: 0x290b00  .word       0x00290B00                   # sll         $at, $t1, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 12));
label_290b10:
    // 0x290b10: 0x290b08  .word       0x00290B08                   # jr          $at # 00090B00 <InstrIdType: CPU_SPECIAL>
label_290b14:
    if (ctx->pc == 0x290B14u) {
        ctx->pc = 0x290B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B10u;
        // 0x290b14: 0x290b08  .word       0x00290B08                   # jr          $at # 00090B00 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x290B18u;
        goto label_290b18;
    }
    ctx->pc = 0x290B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x290B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B10u;
        // 0x290b14: 0x290b08  .word       0x00290B08                   # jr          $at # 00090B00 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290B10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x290B18u;
label_290b18:
    // 0x290b18: 0x290b10  .word       0x00290B10                   # mfhi        $at # 00290300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290b18u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_290b1c:
    // 0x290b1c: 0x290b10  .word       0x00290B10                   # mfhi        $at # 00290300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290b1cu;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_290b20:
    // 0x290b20: 0x290b18  .word       0x00290B18                   # mult        $at, $at, $t1 # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290b20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_290b24:
    // 0x290b24: 0x290b18  .word       0x00290B18                   # mult        $at, $at, $t1 # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290b24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_290b28:
    // 0x290b28: 0x290b20  .word       0x00290B20                   # add         $at, $at, $t1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290b28u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_290b2c:
    // 0x290b2c: 0x290b20  .word       0x00290B20                   # add         $at, $at, $t1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290b2cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_290b30:
    // 0x290b30: 0x290b28  .word       0x00290B28                   # mfsa        $at # 00290300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290b30u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_290b34:
    // 0x290b34: 0x290b28  .word       0x00290B28                   # mfsa        $at # 00290300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290b34u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_290b38:
    // 0x290b38: 0x290b30  tge         $at, $t1, 44
    ctx->pc = 0x290b38u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_290b3c:
    // 0x290b3c: 0x290b30  tge         $at, $t1, 44
    ctx->pc = 0x290b3cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_290b40:
    // 0x290b40: 0x290b38  .word       0x00290B38                   # dsll        $at, $t1, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290b40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 9) << 12);
label_290b44:
    // 0x290b44: 0x290b38  .word       0x00290B38                   # dsll        $at, $t1, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290b44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 9) << 12);
label_290b48:
    // 0x290b48: 0x290b40  .word       0x00290B40                   # sll         $at, $t1, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290b48u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 13));
label_290b4c:
    // 0x290b4c: 0x290b40  .word       0x00290B40                   # sll         $at, $t1, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 13));
label_290b50:
    // 0x290b50: 0x290b48  .word       0x00290B48                   # jr          $at # 00090B40 <InstrIdType: CPU_SPECIAL>
label_290b54:
    if (ctx->pc == 0x290B54u) {
        ctx->pc = 0x290B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B50u;
        // 0x290b54: 0x290b48  .word       0x00290B48                   # jr          $at # 00090B40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x290B58u;
        goto label_290b58;
    }
    ctx->pc = 0x290B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x290B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B50u;
        // 0x290b54: 0x290b48  .word       0x00290B48                   # jr          $at # 00090B40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290B50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x290B58u;
label_290b58:
    // 0x290b58: 0x290b50  .word       0x00290B50                   # mfhi        $at # 00290340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290b58u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_290b5c:
    // 0x290b5c: 0x290b50  .word       0x00290B50                   # mfhi        $at # 00290340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290b5cu;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_290b60:
    // 0x290b60: 0x290b58  .word       0x00290B58                   # mult        $at, $at, $t1 # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290b60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_290b64:
    // 0x290b64: 0x290b58  .word       0x00290B58                   # mult        $at, $at, $t1 # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290b64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_290b68:
    // 0x290b68: 0x290b60  .word       0x00290B60                   # add         $at, $at, $t1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290b68u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_290b6c:
    // 0x290b6c: 0x290b60  .word       0x00290B60                   # add         $at, $at, $t1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290b6cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_290b70:
    // 0x290b70: 0x290b68  .word       0x00290B68                   # mfsa        $at # 00290340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290b70u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_290b74:
    // 0x290b74: 0x290b68  .word       0x00290B68                   # mfsa        $at # 00290340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290b74u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_290b78:
    // 0x290b78: 0x290b70  tge         $at, $t1, 45
    ctx->pc = 0x290b78u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_290b7c:
    // 0x290b7c: 0x290b70  tge         $at, $t1, 45
    ctx->pc = 0x290b7cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_290b80:
    // 0x290b80: 0x290b78  .word       0x00290B78                   # dsll        $at, $t1, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290b80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 9) << 13);
label_290b84:
    // 0x290b84: 0x290b78  .word       0x00290B78                   # dsll        $at, $t1, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290b84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 9) << 13);
label_290b88:
    // 0x290b88: 0x290b80  .word       0x00290B80                   # sll         $at, $t1, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290b88u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 14));
label_290b8c:
    // 0x290b8c: 0x290b80  .word       0x00290B80                   # sll         $at, $t1, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 14));
label_290b90:
    // 0x290b90: 0x290b88  .word       0x00290B88                   # jr          $at # 00090B80 <InstrIdType: CPU_SPECIAL>
label_290b94:
    if (ctx->pc == 0x290B94u) {
        ctx->pc = 0x290B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B90u;
        // 0x290b94: 0x290b88  .word       0x00290B88                   # jr          $at # 00090B80 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x290B98u;
        goto label_290b98;
    }
    ctx->pc = 0x290B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x290B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B90u;
        // 0x290b94: 0x290b88  .word       0x00290B88                   # jr          $at # 00090B80 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290B90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x290B98u;
label_290b98:
    // 0x290b98: 0x290b90  .word       0x00290B90                   # mfhi        $at # 00290380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290b98u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_290b9c:
    // 0x290b9c: 0x290b90  .word       0x00290B90                   # mfhi        $at # 00290380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290b9cu;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_290ba0:
    // 0x290ba0: 0x290b98  .word       0x00290B98                   # mult        $at, $at, $t1 # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290ba0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_290ba4:
    // 0x290ba4: 0x290b98  .word       0x00290B98                   # mult        $at, $at, $t1 # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290ba4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_290ba8:
    // 0x290ba8: 0x290ba0  .word       0x00290BA0                   # add         $at, $at, $t1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290ba8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_290bac:
    // 0x290bac: 0x290ba0  .word       0x00290BA0                   # add         $at, $at, $t1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290bacu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_290bb0:
    // 0x290bb0: 0x290ba8  .word       0x00290BA8                   # mfsa        $at # 00290380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290bb0u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_290bb4:
    // 0x290bb4: 0x290ba8  .word       0x00290BA8                   # mfsa        $at # 00290380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290bb4u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_290bb8:
    // 0x290bb8: 0x290bb0  tge         $at, $t1, 46
    ctx->pc = 0x290bb8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_290bbc:
    // 0x290bbc: 0x290bb0  tge         $at, $t1, 46
    ctx->pc = 0x290bbcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_290bc0:
    // 0x290bc0: 0x290bb8  .word       0x00290BB8                   # dsll        $at, $t1, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290bc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 9) << 14);
label_290bc4:
    // 0x290bc4: 0x290bb8  .word       0x00290BB8                   # dsll        $at, $t1, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290bc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 9) << 14);
label_290bc8:
    // 0x290bc8: 0x290bc0  .word       0x00290BC0                   # sll         $at, $t1, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 15));
label_290bcc:
    // 0x290bcc: 0x290bc0  .word       0x00290BC0                   # sll         $at, $t1, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290bccu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 15));
label_290bd0:
    // 0x290bd0: 0x290bc8  .word       0x00290BC8                   # jr          $at # 00090BC0 <InstrIdType: CPU_SPECIAL>
label_290bd4:
    if (ctx->pc == 0x290BD4u) {
        ctx->pc = 0x290BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BD0u;
        // 0x290bd4: 0x290bc8  .word       0x00290BC8                   # jr          $at # 00090BC0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x290BD8u;
        goto label_290bd8;
    }
    ctx->pc = 0x290BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x290BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BD0u;
        // 0x290bd4: 0x290bc8  .word       0x00290BC8                   # jr          $at # 00090BC0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290BD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x290BD8u;
label_290bd8:
    // 0x290bd8: 0x290bd0  .word       0x00290BD0                   # mfhi        $at # 002903C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290bd8u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_290bdc:
    // 0x290bdc: 0x290bd0  .word       0x00290BD0                   # mfhi        $at # 002903C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290bdcu;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_290be0:
    // 0x290be0: 0x290bd8  .word       0x00290BD8                   # mult        $at, $at, $t1 # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290be0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_290be4:
    // 0x290be4: 0x290bd8  .word       0x00290BD8                   # mult        $at, $at, $t1 # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290be4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_290be8:
    // 0x290be8: 0x290be0  .word       0x00290BE0                   # add         $at, $at, $t1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290be8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_290bec:
    // 0x290bec: 0x290be0  .word       0x00290BE0                   # add         $at, $at, $t1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290becu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_290bf0:
    // 0x290bf0: 0x290be8  .word       0x00290BE8                   # mfsa        $at # 002903C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290bf0u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_290bf4:
    // 0x290bf4: 0x290be8  .word       0x00290BE8                   # mfsa        $at # 002903C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290bf4u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_290bf8:
    // 0x290bf8: 0x290bf0  tge         $at, $t1, 47
    ctx->pc = 0x290bf8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_290bfc:
    // 0x290bfc: 0x290bf0  tge         $at, $t1, 47
    ctx->pc = 0x290bfcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_290c00:
    // 0x290c00: 0x290bf8  .word       0x00290BF8                   # dsll        $at, $t1, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290c00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 9) << 15);
label_290c04:
    // 0x290c04: 0x290bf8  .word       0x00290BF8                   # dsll        $at, $t1, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290c04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 9) << 15);
label_290c08:
    // 0x290c08: 0x290c00  .word       0x00290C00                   # sll         $at, $t1, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290c08u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_290c0c:
    // 0x290c0c: 0x290c00  .word       0x00290C00                   # sll         $at, $t1, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_290c10:
    // 0x290c10: 0x290c08  .word       0x00290C08                   # jr          $at # 00090C00 <InstrIdType: CPU_SPECIAL>
label_290c14:
    if (ctx->pc == 0x290C14u) {
        ctx->pc = 0x290C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C10u;
        // 0x290c14: 0x290c08  .word       0x00290C08                   # jr          $at # 00090C00 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x290C18u;
        goto label_290c18;
    }
    ctx->pc = 0x290C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x290C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C10u;
        // 0x290c14: 0x290c08  .word       0x00290C08                   # jr          $at # 00090C00 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290C10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x290C18u;
label_290c18:
    // 0x290c18: 0x290c10  .word       0x00290C10                   # mfhi        $at # 00290400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290c18u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_290c1c:
    // 0x290c1c: 0x290c10  .word       0x00290C10                   # mfhi        $at # 00290400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290c1cu;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_290c20:
    // 0x290c20: 0x290c18  .word       0x00290C18                   # mult        $at, $at, $t1 # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290c20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_290c24:
    // 0x290c24: 0x290c18  .word       0x00290C18                   # mult        $at, $at, $t1 # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290c24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_290c28:
    // 0x290c28: 0x290c20  .word       0x00290C20                   # add         $at, $at, $t1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290c28u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_290c2c:
    // 0x290c2c: 0x290c20  .word       0x00290C20                   # add         $at, $at, $t1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290c2cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_290c30:
    // 0x290c30: 0x20000  sll         $zero, $v0, 0
    ctx->pc = 0x290c30u;
    
label_290c34:
    // 0x290c34: 0x0  nop
    ctx->pc = 0x290c34u;
    // NOP
label_290c38:
    // 0x290c38: 0x0  nop
    ctx->pc = 0x290c38u;
    // NOP
label_290c3c:
    // 0x290c3c: 0x0  nop
    ctx->pc = 0x290c3cu;
    // NOP
label_290c40:
    // 0x290c40: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x290c40u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_290c44:
    // 0x290c44: 0x0  nop
    ctx->pc = 0x290c44u;
    // NOP
label_290c48:
    // 0x290c48: 0x0  nop
    ctx->pc = 0x290c48u;
    // NOP
label_290c4c:
    // 0x290c4c: 0x0  nop
    ctx->pc = 0x290c4cu;
    // NOP
label_290c50:
    // 0x290c50: 0x0  nop
    ctx->pc = 0x290c50u;
    // NOP
label_290c54:
    // 0x290c54: 0x0  nop
    ctx->pc = 0x290c54u;
    // NOP
label_290c58:
    // 0x290c58: 0x0  nop
    ctx->pc = 0x290c58u;
    // NOP
label_290c5c:
    // 0x290c5c: 0x0  nop
    ctx->pc = 0x290c5cu;
    // NOP
label_290c60:
    // 0x290c60: 0x0  nop
    ctx->pc = 0x290c60u;
    // NOP
label_290c64:
    // 0x290c64: 0x0  nop
    ctx->pc = 0x290c64u;
    // NOP
label_290c68:
    // 0x290c68: 0x0  nop
    ctx->pc = 0x290c68u;
    // NOP
label_290c6c:
    // 0x290c6c: 0x0  nop
    ctx->pc = 0x290c6cu;
    // NOP
label_290c70:
    // 0x290c70: 0x0  nop
    ctx->pc = 0x290c70u;
    // NOP
label_290c74:
    // 0x290c74: 0x0  nop
    ctx->pc = 0x290c74u;
    // NOP
label_290c78:
    // 0x290c78: 0x0  nop
    ctx->pc = 0x290c78u;
    // NOP
label_290c7c:
    // 0x290c7c: 0x0  nop
    ctx->pc = 0x290c7cu;
    // NOP
label_290c80:
    // 0x290c80: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x290c80u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_290c84:
    // 0x290c84: 0x0  nop
    ctx->pc = 0x290c84u;
    // NOP
label_290c88:
    // 0x290c88: 0x0  nop
    ctx->pc = 0x290c88u;
    // NOP
label_290c8c:
    // 0x290c8c: 0x0  nop
    ctx->pc = 0x290c8cu;
    // NOP
label_290c90:
    // 0x290c90: 0x0  nop
    ctx->pc = 0x290c90u;
    // NOP
label_290c94:
    // 0x290c94: 0x55  .word       0x00000055                   # INVALID     $zero, $zero, 0x55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290c94u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x290C94 raw=0x00000055"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290c98:
    // 0x290c98: 0x2a700  sll         $s4, $v0, 28
    ctx->pc = 0x290c98u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 28));
label_290c9c:
    // 0x290c9c: 0x0  nop
    ctx->pc = 0x290c9cu;
    // NOP
label_290ca0:
    // 0x290ca0: 0x55  .word       0x00000055                   # INVALID     $zero, $zero, 0x55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290ca0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x290CA0 raw=0x00000055"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290ca4:
    // 0x290ca4: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x290ca4u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290ca8:
    // 0x290ca8: 0x18780  sll         $s0, $at, 30
    ctx->pc = 0x290ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 1), 30));
label_290cac:
    // 0x290cac: 0x0  nop
    ctx->pc = 0x290cacu;
    // NOP
label_290cb0:
    // 0x290cb0: 0x86  .word       0x00000086                   # srlv        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290cb0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_290cb4:
    // 0x290cb4: 0xf  sync
    ctx->pc = 0x290cb4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_290cb8:
    // 0x290cb8: 0x7200  sll         $t6, $zero, 8
    ctx->pc = 0x290cb8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_290cbc:
    // 0x290cbc: 0x0  nop
    ctx->pc = 0x290cbcu;
    // NOP
label_290cc0:
    // 0x290cc0: 0x95  .word       0x00000095                   # INVALID     $zero, $zero, 0x95 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290cc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x290CC0 raw=0x00000095"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290cc4:
    // 0x290cc4: 0xc  syscall     0
    ctx->pc = 0x290cc4u;
    ctx->pc = 0x290CC8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_290cc8:
    // 0x290cc8: 0x5d80  sll         $t3, $zero, 22
    ctx->pc = 0x290cc8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_290ccc:
    // 0x290ccc: 0x0  nop
    ctx->pc = 0x290cccu;
    // NOP
label_290cd0:
    // 0x290cd0: 0xa1  .word       0x000000A1                   # addu        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290cd0u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_290cd4:
    // 0x290cd4: 0x147  .word       0x00000147                   # srav        $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290cd4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_290cd8:
    // 0x290cd8: 0xa3600  sll         $a2, $t2, 24
    ctx->pc = 0x290cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 24));
label_290cdc:
    // 0x290cdc: 0x0  nop
    ctx->pc = 0x290cdcu;
    // NOP
label_290ce0:
    // 0x290ce0: 0x1e8  .word       0x000001E8                   # mfsa        $zero # 000001C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290ce0u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_290ce4:
    // 0x290ce4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290ce4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x290CE4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290ce8:
    // 0x290ce8: 0x43c  dsll32      $zero, $zero, 16
    ctx->pc = 0x290ce8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 16));
label_290cec:
    // 0x290cec: 0x0  nop
    ctx->pc = 0x290cecu;
    // NOP
label_290cf0:
    // 0x290cf0: 0x0  nop
    ctx->pc = 0x290cf0u;
    // NOP
label_290cf4:
    // 0x290cf4: 0x44  .word       0x00000044                   # sllv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290cf4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_290cf8:
    // 0x290cf8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x290cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_290cfc:
    // 0x290cfc: 0x0  nop
    ctx->pc = 0x290cfcu;
    // NOP
label_290d00:
    // 0x290d00: 0x44  .word       0x00000044                   # sllv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290d00u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_290d04:
    // 0x290d04: 0x22  neg         $zero, $zero
    ctx->pc = 0x290d04u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_290d08:
    // 0x290d08: 0x10840  sll         $at, $at, 1
    ctx->pc = 0x290d08u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290d0c:
    // 0x290d0c: 0x0  nop
    ctx->pc = 0x290d0cu;
    // NOP
label_290d10:
    // 0x290d10: 0x66  .word       0x00000066                   # xor         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290d10u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_290d14:
    // 0x290d14: 0xad  .word       0x000000AD                   # daddu       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290d14u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290d18:
    // 0x290d18: 0x56730  tge         $zero, $a1, 412
    ctx->pc = 0x290d18u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
label_290d1c:
    // 0x290d1c: 0x0  nop
    ctx->pc = 0x290d1cu;
    // NOP
label_290d20:
    // 0x290d20: 0x113  .word       0x00000113                   # mtlo        $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290d20u;
    ctx->lo = GPR_U64(ctx, 0);
label_290d24:
    // 0x290d24: 0x36  tne         $zero, $zero, 0
    ctx->pc = 0x290d24u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290d28:
    // 0x290d28: 0x1acb8  dsll        $s5, $at, 18
    ctx->pc = 0x290d28u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 1) << 18);
label_290d2c:
    // 0x290d2c: 0x0  nop
    ctx->pc = 0x290d2cu;
    // NOP
label_290d30:
    // 0x290d30: 0x149  .word       0x00000149                   # jalr        $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
label_290d34:
    if (ctx->pc == 0x290D34u) {
        ctx->pc = 0x290D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D30u;
        // 0x290d34: 0x17af  .word       0x000017AF                   # dsubu       $v0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290D38u;
        goto label_290d38;
    }
    ctx->pc = 0x290D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x290D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D30u;
        // 0x290d34: 0x17af  .word       0x000017AF                   # dsubu       $v0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290D30u, 0x290D38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x290D38u;
label_290d38:
    // 0x290d38: 0xbd7800  .word       0x00BD7800                   # sll         $t7, $sp, 0 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290d38u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 29), 0));
label_290d3c:
    // 0x290d3c: 0x0  nop
    ctx->pc = 0x290d3cu;
    // NOP
label_290d40:
    // 0x290d40: 0x18f8  dsll        $v1, $zero, 3
    ctx->pc = 0x290d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) << 3);
label_290d44:
    // 0x290d44: 0x161a  .word       0x0000161A                   # div         $v0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290d44u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_290d48:
    // 0x290d48: 0xb0d000  .word       0x00B0D000                   # sll         $k0, $s0, 0 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290d48u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 16), 0));
label_290d4c:
    // 0x290d4c: 0x0  nop
    ctx->pc = 0x290d4cu;
    // NOP
label_290d50:
    // 0x290d50: 0x2f12  .word       0x00002F12                   # mflo        $a1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290d50u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_290d54:
    // 0x290d54: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290d54u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290d58:
    // 0x290d58: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290d58u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290d5c:
    // 0x290d5c: 0x0  nop
    ctx->pc = 0x290d5cu;
    // NOP
label_290d60:
    // 0x290d60: 0x2f45  .word       0x00002F45                   # INVALID     $zero, $zero, 0x2F45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290d60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x290D60 raw=0x00002F45"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290d64:
    // 0x290d64: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290d64u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290d68:
    // 0x290d68: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290d68u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290d6c:
    // 0x290d6c: 0x0  nop
    ctx->pc = 0x290d6cu;
    // NOP
label_290d70:
    // 0x290d70: 0x2f78  dsll        $a1, $zero, 29
    ctx->pc = 0x290d70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << 29);
label_290d74:
    // 0x290d74: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290d74u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290d78:
    // 0x290d78: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290d78u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290d7c:
    // 0x290d7c: 0x0  nop
    ctx->pc = 0x290d7cu;
    // NOP
label_290d80:
    // 0x290d80: 0x2fab  .word       0x00002FAB                   # sltu        $a1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290d80u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_290d84:
    // 0x290d84: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290d84u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290d88:
    // 0x290d88: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290d88u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290d8c:
    // 0x290d8c: 0x0  nop
    ctx->pc = 0x290d8cu;
    // NOP
label_290d90:
    // 0x290d90: 0x2fde  .word       0x00002FDE                   # ddiv        $a1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290d90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x290D90 raw=0x00002FDE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290d94:
    // 0x290d94: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290d94u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290d98:
    // 0x290d98: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290d98u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290d9c:
    // 0x290d9c: 0x0  nop
    ctx->pc = 0x290d9cu;
    // NOP
label_290da0:
    // 0x290da0: 0x3011  .word       0x00003011                   # mthi        $zero # 00003000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290da0u;
    ctx->hi = GPR_U64(ctx, 0);
label_290da4:
    // 0x290da4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290da4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290da8:
    // 0x290da8: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290da8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290dac:
    // 0x290dac: 0x0  nop
    ctx->pc = 0x290dacu;
    // NOP
label_290db0:
    // 0x290db0: 0x3044  .word       0x00003044                   # sllv        $a2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290db0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_290db4:
    // 0x290db4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290db4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290db8:
    // 0x290db8: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290db8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290dbc:
    // 0x290dbc: 0x0  nop
    ctx->pc = 0x290dbcu;
    // NOP
label_290dc0:
    // 0x290dc0: 0x3077  .word       0x00003077                   # INVALID     $zero, $zero, 0x3077 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290dc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x290DC0 raw=0x00003077"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290dc4:
    // 0x290dc4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290dc4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290dc8:
    // 0x290dc8: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290dc8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290dcc:
    // 0x290dcc: 0x0  nop
    ctx->pc = 0x290dccu;
    // NOP
label_290dd0:
    // 0x290dd0: 0x30aa  .word       0x000030AA                   # slt         $a2, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290dd0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_290dd4:
    // 0x290dd4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290dd4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290dd8:
    // 0x290dd8: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290dd8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290ddc:
    // 0x290ddc: 0x0  nop
    ctx->pc = 0x290ddcu;
    // NOP
label_290de0:
    // 0x290de0: 0x30dd  .word       0x000030DD                   # dmultu      $zero, $zero # 000030C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290de0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x290DE0 raw=0x000030DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290de4:
    // 0x290de4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290de4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290de8:
    // 0x290de8: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290de8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290dec:
    // 0x290dec: 0x0  nop
    ctx->pc = 0x290decu;
    // NOP
label_290df0:
    // 0x290df0: 0x3110  .word       0x00003110                   # mfhi        $a2 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290df0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_290df4:
    // 0x290df4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290df4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290df8:
    // 0x290df8: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290df8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290dfc:
    // 0x290dfc: 0x0  nop
    ctx->pc = 0x290dfcu;
    // NOP
label_290e00:
    // 0x290e00: 0x3143  sra         $a2, $zero, 5
    ctx->pc = 0x290e00u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 0), 5));
label_290e04:
    // 0x290e04: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290e04u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290e08:
    // 0x290e08: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290e08u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290e0c:
    // 0x290e0c: 0x0  nop
    ctx->pc = 0x290e0cu;
    // NOP
label_290e10:
    // 0x290e10: 0x3176  tne         $zero, $zero, 197
    ctx->pc = 0x290e10u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290e14:
    // 0x290e14: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290e14u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290e18:
    // 0x290e18: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290e18u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290e1c:
    // 0x290e1c: 0x0  nop
    ctx->pc = 0x290e1cu;
    // NOP
label_290e20:
    // 0x290e20: 0x31a9  .word       0x000031A9                   # mtsa        $zero # 00003180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290e20u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_290e24:
    // 0x290e24: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290e24u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290e28:
    // 0x290e28: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290e28u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290e2c:
    // 0x290e2c: 0x0  nop
    ctx->pc = 0x290e2cu;
    // NOP
label_290e30:
    // 0x290e30: 0x31dc  .word       0x000031DC                   # dmult       $zero, $zero # 000031C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290e30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x290E30 raw=0x000031DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290e34:
    // 0x290e34: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290e34u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290e38:
    // 0x290e38: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290e38u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290e3c:
    // 0x290e3c: 0x0  nop
    ctx->pc = 0x290e3cu;
    // NOP
label_290e40:
    // 0x290e40: 0x320f  .word       0x0000320F                   # sync # 00003000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290e40u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_290e44:
    // 0x290e44: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290e44u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290e48:
    // 0x290e48: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290e48u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290e4c:
    // 0x290e4c: 0x0  nop
    ctx->pc = 0x290e4cu;
    // NOP
label_290e50:
    // 0x290e50: 0x3242  srl         $a2, $zero, 9
    ctx->pc = 0x290e50u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 0), 9));
label_290e54:
    // 0x290e54: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290e54u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290e58:
    // 0x290e58: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290e58u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290e5c:
    // 0x290e5c: 0x0  nop
    ctx->pc = 0x290e5cu;
    // NOP
label_290e60:
    // 0x290e60: 0x3275  .word       0x00003275                   # INVALID     $zero, $zero, 0x3275 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290e60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x290E60 raw=0x00003275"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290e64:
    // 0x290e64: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290e64u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290e68:
    // 0x290e68: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290e68u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290e6c:
    // 0x290e6c: 0x0  nop
    ctx->pc = 0x290e6cu;
    // NOP
label_290e70:
    // 0x290e70: 0x32a8  .word       0x000032A8                   # mfsa        $a2 # 00000280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290e70u;
    SET_GPR_U32(ctx, 6, ctx->sa);
label_290e74:
    // 0x290e74: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290e74u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290e78:
    // 0x290e78: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290e78u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290e7c:
    // 0x290e7c: 0x0  nop
    ctx->pc = 0x290e7cu;
    // NOP
label_290e80:
    // 0x290e80: 0x32db  .word       0x000032DB                   # divu        $a2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290e80u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_290e84:
    // 0x290e84: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290e84u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290e88:
    // 0x290e88: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290e88u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290e8c:
    // 0x290e8c: 0x0  nop
    ctx->pc = 0x290e8cu;
    // NOP
label_290e90:
    // 0x290e90: 0x330e  .word       0x0000330E                   # INVALID     $zero, $zero, 0x330E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290e90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x290E90 raw=0x0000330E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290e94:
    // 0x290e94: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290e94u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290e98:
    // 0x290e98: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290e98u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290e9c:
    // 0x290e9c: 0x0  nop
    ctx->pc = 0x290e9cu;
    // NOP
label_290ea0:
    // 0x290ea0: 0x3341  .word       0x00003341                   # INVALID     $zero, $zero, 0x3341 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290ea0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x290EA0 raw=0x00003341"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290ea4:
    // 0x290ea4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290ea4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290ea8:
    // 0x290ea8: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290ea8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290eac:
    // 0x290eac: 0x0  nop
    ctx->pc = 0x290eacu;
    // NOP
label_290eb0:
    // 0x290eb0: 0x3374  teq         $zero, $zero, 205
    ctx->pc = 0x290eb0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290eb4:
    // 0x290eb4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290eb4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290eb8:
    // 0x290eb8: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290eb8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290ebc:
    // 0x290ebc: 0x0  nop
    ctx->pc = 0x290ebcu;
    // NOP
label_290ec0:
    // 0x290ec0: 0x33a7  .word       0x000033A7                   # not         $a2, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290ec0u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_290ec4:
    // 0x290ec4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290ec4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290ec8:
    // 0x290ec8: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290ec8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290ecc:
    // 0x290ecc: 0x0  nop
    ctx->pc = 0x290eccu;
    // NOP
label_290ed0:
    // 0x290ed0: 0x33da  .word       0x000033DA                   # div         $a2, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290ed0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_290ed4:
    // 0x290ed4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290ed4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290ed8:
    // 0x290ed8: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290ed8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290edc:
    // 0x290edc: 0x0  nop
    ctx->pc = 0x290edcu;
    // NOP
label_290ee0:
    // 0x290ee0: 0x340d  break       0, 208
    ctx->pc = 0x290ee0u;
    runtime->handleBreak(rdram, ctx);
label_290ee4:
    // 0x290ee4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290ee4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290ee8:
    // 0x290ee8: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290ee8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290eec:
    // 0x290eec: 0x0  nop
    ctx->pc = 0x290eecu;
    // NOP
label_290ef0:
    // 0x290ef0: 0x3440  sll         $a2, $zero, 17
    ctx->pc = 0x290ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_290ef4:
    // 0x290ef4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290ef4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290ef8:
    // 0x290ef8: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290ef8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290efc:
    // 0x290efc: 0x0  nop
    ctx->pc = 0x290efcu;
    // NOP
label_290f00:
    // 0x290f00: 0x3473  tltu        $zero, $zero, 209
    ctx->pc = 0x290f00u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290f04:
    // 0x290f04: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290f04u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290f08:
    // 0x290f08: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290f08u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290f0c:
    // 0x290f0c: 0x0  nop
    ctx->pc = 0x290f0cu;
    // NOP
label_290f10:
    // 0x290f10: 0x34a6  .word       0x000034A6                   # xor         $a2, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290f10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_290f14:
    // 0x290f14: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290f14u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290f18:
    // 0x290f18: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290f18u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290f1c:
    // 0x290f1c: 0x0  nop
    ctx->pc = 0x290f1cu;
    // NOP
label_290f20:
    // 0x290f20: 0x34d9  .word       0x000034D9                   # multu       $zero, $zero # 000034C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290f20u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_290f24:
    // 0x290f24: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290f24u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290f28:
    // 0x290f28: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290f28u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290f2c:
    // 0x290f2c: 0x0  nop
    ctx->pc = 0x290f2cu;
    // NOP
label_290f30:
    // 0x290f30: 0x350c  syscall     212
    ctx->pc = 0x290f30u;
    ctx->pc = 0x290F34u;
runtime->handleSyscall(rdram, ctx, 0xD4u);
label_290f34:
    // 0x290f34: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290f34u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290f38:
    // 0x290f38: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290f38u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290f3c:
    // 0x290f3c: 0x0  nop
    ctx->pc = 0x290f3cu;
    // NOP
label_290f40:
    // 0x290f40: 0x353f  dsra32      $a2, $zero, 20
    ctx->pc = 0x290f40u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> (32 + 20));
label_290f44:
    // 0x290f44: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290f44u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290f48:
    // 0x290f48: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290f48u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290f4c:
    // 0x290f4c: 0x0  nop
    ctx->pc = 0x290f4cu;
    // NOP
label_290f50:
    // 0x290f50: 0x3572  tlt         $zero, $zero, 213
    ctx->pc = 0x290f50u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290f54:
    // 0x290f54: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290f54u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290f58:
    // 0x290f58: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290f58u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290f5c:
    // 0x290f5c: 0x0  nop
    ctx->pc = 0x290f5cu;
    // NOP
label_290f60:
    // 0x290f60: 0x35a5  .word       0x000035A5                   # move        $a2, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290f60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_290f64:
    // 0x290f64: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290f64u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290f68:
    // 0x290f68: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290f68u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290f6c:
    // 0x290f6c: 0x0  nop
    ctx->pc = 0x290f6cu;
    // NOP
label_290f70:
    // 0x290f70: 0x35d8  .word       0x000035D8                   # mult        $a2, $zero, $zero # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x290f70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_290f74:
    // 0x290f74: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290f74u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290f78:
    // 0x290f78: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290f78u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290f7c:
    // 0x290f7c: 0x0  nop
    ctx->pc = 0x290f7cu;
    // NOP
label_290f80:
    // 0x290f80: 0x360b  .word       0x0000360B                   # movn        $a2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290f80u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_290f84:
    // 0x290f84: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290f84u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290f88:
    // 0x290f88: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290f88u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290f8c:
    // 0x290f8c: 0x0  nop
    ctx->pc = 0x290f8cu;
    // NOP
label_290f90:
    // 0x290f90: 0x363e  dsrl32      $a2, $zero, 24
    ctx->pc = 0x290f90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) >> (32 + 24));
label_290f94:
    // 0x290f94: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290f94u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290f98:
    // 0x290f98: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290f98u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290f9c:
    // 0x290f9c: 0x0  nop
    ctx->pc = 0x290f9cu;
    // NOP
label_290fa0:
    // 0x290fa0: 0x3671  tgeu        $zero, $zero, 217
    ctx->pc = 0x290fa0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290fa4:
    // 0x290fa4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290fa4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290fa8:
    // 0x290fa8: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290fa8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290fac:
    // 0x290fac: 0x0  nop
    ctx->pc = 0x290facu;
    // NOP
label_290fb0:
    // 0x290fb0: 0x36a4  .word       0x000036A4                   # and         $a2, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290fb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_290fb4:
    // 0x290fb4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290fb4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290fb8:
    // 0x290fb8: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290fb8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290fbc:
    // 0x290fbc: 0x0  nop
    ctx->pc = 0x290fbcu;
    // NOP
label_290fc0:
    // 0x290fc0: 0x36d7  .word       0x000036D7                   # dsrav       $a2, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290fc0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_290fc4:
    // 0x290fc4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290fc4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290fc8:
    // 0x290fc8: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290fc8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290fcc:
    // 0x290fcc: 0x0  nop
    ctx->pc = 0x290fccu;
    // NOP
label_290fd0:
    // 0x290fd0: 0x370a  .word       0x0000370A                   # movz        $a2, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290fd0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_290fd4:
    // 0x290fd4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x290fd4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290fd8:
    // 0x290fd8: 0x19040  sll         $s2, $at, 1
    ctx->pc = 0x290fd8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290fdc:
    // 0x290fdc: 0x0  nop
    ctx->pc = 0x290fdcu;
    // NOP
label_290fe0:
    // 0x290fe0: 0x373d  .word       0x0000373D                   # INVALID     $zero, $zero, 0x373D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290fe0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x290FE0 raw=0x0000373D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290fe4:
    // 0x290fe4: 0x35  .word       0x00000035                   # INVALID     $zero, $zero, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290fe4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x290FE4 raw=0x00000035"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290fe8:
    // 0x290fe8: 0x1a040  sll         $s4, $at, 1
    ctx->pc = 0x290fe8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290fec:
    // 0x290fec: 0x0  nop
    ctx->pc = 0x290fecu;
    // NOP
label_290ff0:
    // 0x290ff0: 0x3772  tlt         $zero, $zero, 221
    ctx->pc = 0x290ff0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290ff4:
    // 0x290ff4: 0x35  .word       0x00000035                   # INVALID     $zero, $zero, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290ff4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x290FF4 raw=0x00000035"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290ff8:
    // 0x290ff8: 0x1a040  sll         $s4, $at, 1
    ctx->pc = 0x290ff8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290ffc:
    // 0x290ffc: 0x0  nop
    ctx->pc = 0x290ffcu;
    // NOP
label_291000:
    // 0x291000: 0x37a7  .word       0x000037A7                   # not         $a2, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291000u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_291004:
    // 0x291004: 0x25  move        $zero, $zero
    ctx->pc = 0x291004u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_291008:
    // 0x291008: 0x12040  sll         $a0, $at, 1
    ctx->pc = 0x291008u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29100c:
    // 0x29100c: 0x0  nop
    ctx->pc = 0x29100cu;
    // NOP
label_291010:
    // 0x291010: 0x37cc  syscall     223
    ctx->pc = 0x291010u;
    ctx->pc = 0x291014u;
runtime->handleSyscall(rdram, ctx, 0xDFu);
label_291014:
    // 0x291014: 0x35  .word       0x00000035                   # INVALID     $zero, $zero, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291014u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x291014 raw=0x00000035"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291018:
    // 0x291018: 0x1a040  sll         $s4, $at, 1
    ctx->pc = 0x291018u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29101c:
    // 0x29101c: 0x0  nop
    ctx->pc = 0x29101cu;
    // NOP
label_291020:
    // 0x291020: 0x3801  .word       0x00003801                   # INVALID     $zero, $zero, 0x3801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291020u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x291020 raw=0x00003801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291024:
    // 0x291024: 0x35  .word       0x00000035                   # INVALID     $zero, $zero, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291024u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x291024 raw=0x00000035"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291028:
    // 0x291028: 0x1a040  sll         $s4, $at, 1
    ctx->pc = 0x291028u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29102c:
    // 0x29102c: 0x0  nop
    ctx->pc = 0x29102cu;
    // NOP
label_291030:
    // 0x291030: 0x3836  tne         $zero, $zero, 224
    ctx->pc = 0x291030u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291034:
    // 0x291034: 0x35  .word       0x00000035                   # INVALID     $zero, $zero, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291034u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x291034 raw=0x00000035"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291038:
    // 0x291038: 0x1a040  sll         $s4, $at, 1
    ctx->pc = 0x291038u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29103c:
    // 0x29103c: 0x0  nop
    ctx->pc = 0x29103cu;
    // NOP
label_291040:
    // 0x291040: 0x386b  .word       0x0000386B                   # sltu        $a3, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291040u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_291044:
    // 0x291044: 0x35  .word       0x00000035                   # INVALID     $zero, $zero, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291044u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x291044 raw=0x00000035"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291048:
    // 0x291048: 0x1a040  sll         $s4, $at, 1
    ctx->pc = 0x291048u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29104c:
    // 0x29104c: 0x0  nop
    ctx->pc = 0x29104cu;
    // NOP
label_291050:
    // 0x291050: 0x38a0  .word       0x000038A0                   # add         $a3, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291050u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_291054:
    // 0x291054: 0x35  .word       0x00000035                   # INVALID     $zero, $zero, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291054u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x291054 raw=0x00000035"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291058:
    // 0x291058: 0x1a040  sll         $s4, $at, 1
    ctx->pc = 0x291058u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29105c:
    // 0x29105c: 0x0  nop
    ctx->pc = 0x29105cu;
    // NOP
label_291060:
    // 0x291060: 0x38d5  .word       0x000038D5                   # INVALID     $zero, $zero, 0x38D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291060u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x291060 raw=0x000038D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291064:
    // 0x291064: 0x35  .word       0x00000035                   # INVALID     $zero, $zero, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291064u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x291064 raw=0x00000035"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291068:
    // 0x291068: 0x1a040  sll         $s4, $at, 1
    ctx->pc = 0x291068u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29106c:
    // 0x29106c: 0x0  nop
    ctx->pc = 0x29106cu;
    // NOP
label_291070:
    // 0x291070: 0x390a  .word       0x0000390A                   # movz        $a3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291070u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_291074:
    // 0x291074: 0x25  move        $zero, $zero
    ctx->pc = 0x291074u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_291078:
    // 0x291078: 0x12040  sll         $a0, $at, 1
    ctx->pc = 0x291078u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29107c:
    // 0x29107c: 0x0  nop
    ctx->pc = 0x29107cu;
    // NOP
label_291080:
    // 0x291080: 0x392f  .word       0x0000392F                   # dsubu       $a3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291080u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_291084:
    // 0x291084: 0x25  move        $zero, $zero
    ctx->pc = 0x291084u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_291088:
    // 0x291088: 0x12040  sll         $a0, $at, 1
    ctx->pc = 0x291088u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29108c:
    // 0x29108c: 0x0  nop
    ctx->pc = 0x29108cu;
    // NOP
label_291090:
    // 0x291090: 0x3954  .word       0x00003954                   # dsllv       $a3, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291090u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_291094:
    // 0x291094: 0x25  move        $zero, $zero
    ctx->pc = 0x291094u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_291098:
    // 0x291098: 0x12040  sll         $a0, $at, 1
    ctx->pc = 0x291098u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29109c:
    // 0x29109c: 0x0  nop
    ctx->pc = 0x29109cu;
    // NOP
label_2910a0:
    // 0x2910a0: 0x3979  .word       0x00003979                   # INVALID     $zero, $zero, 0x3979 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2910a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2910A0 raw=0x00003979"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2910a4:
    // 0x2910a4: 0x25  move        $zero, $zero
    ctx->pc = 0x2910a4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2910a8:
    // 0x2910a8: 0x12040  sll         $a0, $at, 1
    ctx->pc = 0x2910a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_2910ac:
    // 0x2910ac: 0x0  nop
    ctx->pc = 0x2910acu;
    // NOP
label_2910b0:
    // 0x2910b0: 0x399e  .word       0x0000399E                   # ddiv        $a3, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2910b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2910B0 raw=0x0000399E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2910b4:
    // 0x2910b4: 0x25  move        $zero, $zero
    ctx->pc = 0x2910b4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2910b8:
    // 0x2910b8: 0x12040  sll         $a0, $at, 1
    ctx->pc = 0x2910b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_2910bc:
    // 0x2910bc: 0x0  nop
    ctx->pc = 0x2910bcu;
    // NOP
label_2910c0:
    // 0x2910c0: 0x39c3  sra         $a3, $zero, 7
    ctx->pc = 0x2910c0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 0), 7));
label_2910c4:
    // 0x2910c4: 0x25  move        $zero, $zero
    ctx->pc = 0x2910c4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2910c8:
    // 0x2910c8: 0x12040  sll         $a0, $at, 1
    ctx->pc = 0x2910c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_2910cc:
    // 0x2910cc: 0x0  nop
    ctx->pc = 0x2910ccu;
    // NOP
label_2910d0:
    // 0x2910d0: 0x39e8  .word       0x000039E8                   # mfsa        $a3 # 000001C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2910d0u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_2910d4:
    // 0x2910d4: 0x25  move        $zero, $zero
    ctx->pc = 0x2910d4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2910d8:
    // 0x2910d8: 0x12040  sll         $a0, $at, 1
    ctx->pc = 0x2910d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_2910dc:
    // 0x2910dc: 0x0  nop
    ctx->pc = 0x2910dcu;
    // NOP
label_2910e0:
    // 0x2910e0: 0x3a0d  break       0, 232
    ctx->pc = 0x2910e0u;
    runtime->handleBreak(rdram, ctx);
label_2910e4:
    // 0x2910e4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x2910e4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2910e8:
    // 0x2910e8: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2910e8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2910ec:
    // 0x2910ec: 0x0  nop
    ctx->pc = 0x2910ecu;
    // NOP
label_2910f0:
    // 0x2910f0: 0x3a40  sll         $a3, $zero, 9
    ctx->pc = 0x2910f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_2910f4:
    // 0x2910f4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x2910f4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2910f8:
    // 0x2910f8: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2910f8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2910fc:
    // 0x2910fc: 0x0  nop
    ctx->pc = 0x2910fcu;
    // NOP
label_291100:
    // 0x291100: 0x3a73  tltu        $zero, $zero, 233
    ctx->pc = 0x291100u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291104:
    // 0x291104: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x291104u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291108:
    // 0x291108: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291108u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29110c:
    // 0x29110c: 0x0  nop
    ctx->pc = 0x29110cu;
    // NOP
label_291110:
    // 0x291110: 0x3aa6  .word       0x00003AA6                   # xor         $a3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291110u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_291114:
    // 0x291114: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x291114u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291118:
    // 0x291118: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291118u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29111c:
    // 0x29111c: 0x0  nop
    ctx->pc = 0x29111cu;
    // NOP
label_291120:
    // 0x291120: 0x3ad9  .word       0x00003AD9                   # multu       $zero, $zero # 00003AC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291120u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_291124:
    // 0x291124: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x291124u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291128:
    // 0x291128: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291128u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29112c:
    // 0x29112c: 0x0  nop
    ctx->pc = 0x29112cu;
    // NOP
label_291130:
    // 0x291130: 0x3b0c  syscall     236
    ctx->pc = 0x291130u;
    ctx->pc = 0x291134u;
runtime->handleSyscall(rdram, ctx, 0xECu);
label_291134:
    // 0x291134: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x291134u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291138:
    // 0x291138: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291138u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29113c:
    // 0x29113c: 0x0  nop
    ctx->pc = 0x29113cu;
    // NOP
label_291140:
    // 0x291140: 0x3b3f  dsra32      $a3, $zero, 12
    ctx->pc = 0x291140u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> (32 + 12));
label_291144:
    // 0x291144: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x291144u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291148:
    // 0x291148: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291148u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29114c:
    // 0x29114c: 0x0  nop
    ctx->pc = 0x29114cu;
    // NOP
label_291150:
    // 0x291150: 0x3b72  tlt         $zero, $zero, 237
    ctx->pc = 0x291150u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291154:
    // 0x291154: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x291154u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291158:
    // 0x291158: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291158u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29115c:
    // 0x29115c: 0x0  nop
    ctx->pc = 0x29115cu;
    // NOP
label_291160:
    // 0x291160: 0x3ba5  .word       0x00003BA5                   # move        $a3, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291160u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_291164:
    // 0x291164: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x291164u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291168:
    // 0x291168: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291168u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29116c:
    // 0x29116c: 0x0  nop
    ctx->pc = 0x29116cu;
    // NOP
label_291170:
    // 0x291170: 0x3bd8  .word       0x00003BD8                   # mult        $a3, $zero, $zero # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x291170u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_291174:
    // 0x291174: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x291174u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291178:
    // 0x291178: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291178u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29117c:
    // 0x29117c: 0x0  nop
    ctx->pc = 0x29117cu;
    // NOP
label_291180:
    // 0x291180: 0x3c0b  .word       0x00003C0B                   # movn        $a3, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291180u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_291184:
    // 0x291184: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x291184u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291188:
    // 0x291188: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291188u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29118c:
    // 0x29118c: 0x0  nop
    ctx->pc = 0x29118cu;
    // NOP
label_291190:
    // 0x291190: 0x3c3e  dsrl32      $a3, $zero, 16
    ctx->pc = 0x291190u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) >> (32 + 16));
label_291194:
    // 0x291194: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x291194u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291198:
    // 0x291198: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291198u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29119c:
    // 0x29119c: 0x0  nop
    ctx->pc = 0x29119cu;
    // NOP
    ctx->pc = 0x2911a0u;
    return;
}

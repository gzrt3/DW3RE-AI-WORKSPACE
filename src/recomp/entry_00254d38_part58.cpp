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

// Function: entry_00254d38
// Address: 0x254d38 - 0x27d478
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_00254d38_part58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x270a88u: goto label_270a88;
        case 0x270a8cu: goto label_270a8c;
        case 0x270a90u: goto label_270a90;
        case 0x270a94u: goto label_270a94;
        case 0x270a98u: goto label_270a98;
        case 0x270a9cu: goto label_270a9c;
        case 0x270aa0u: goto label_270aa0;
        case 0x270aa4u: goto label_270aa4;
        case 0x270aa8u: goto label_270aa8;
        case 0x270aacu: goto label_270aac;
        case 0x270ab0u: goto label_270ab0;
        case 0x270ab4u: goto label_270ab4;
        case 0x270ab8u: goto label_270ab8;
        case 0x270abcu: goto label_270abc;
        case 0x270ac0u: goto label_270ac0;
        case 0x270ac4u: goto label_270ac4;
        case 0x270ac8u: goto label_270ac8;
        case 0x270accu: goto label_270acc;
        case 0x270ad0u: goto label_270ad0;
        case 0x270ad4u: goto label_270ad4;
        case 0x270ad8u: goto label_270ad8;
        case 0x270adcu: goto label_270adc;
        case 0x270ae0u: goto label_270ae0;
        case 0x270ae4u: goto label_270ae4;
        case 0x270ae8u: goto label_270ae8;
        case 0x270aecu: goto label_270aec;
        case 0x270af0u: goto label_270af0;
        case 0x270af4u: goto label_270af4;
        case 0x270af8u: goto label_270af8;
        case 0x270afcu: goto label_270afc;
        case 0x270b00u: goto label_270b00;
        case 0x270b04u: goto label_270b04;
        case 0x270b08u: goto label_270b08;
        case 0x270b0cu: goto label_270b0c;
        case 0x270b10u: goto label_270b10;
        case 0x270b14u: goto label_270b14;
        case 0x270b18u: goto label_270b18;
        case 0x270b1cu: goto label_270b1c;
        case 0x270b20u: goto label_270b20;
        case 0x270b24u: goto label_270b24;
        case 0x270b28u: goto label_270b28;
        case 0x270b2cu: goto label_270b2c;
        case 0x270b30u: goto label_270b30;
        case 0x270b34u: goto label_270b34;
        case 0x270b38u: goto label_270b38;
        case 0x270b3cu: goto label_270b3c;
        case 0x270b40u: goto label_270b40;
        case 0x270b44u: goto label_270b44;
        case 0x270b48u: goto label_270b48;
        case 0x270b4cu: goto label_270b4c;
        case 0x270b50u: goto label_270b50;
        case 0x270b54u: goto label_270b54;
        case 0x270b58u: goto label_270b58;
        case 0x270b5cu: goto label_270b5c;
        case 0x270b60u: goto label_270b60;
        case 0x270b64u: goto label_270b64;
        case 0x270b68u: goto label_270b68;
        case 0x270b6cu: goto label_270b6c;
        case 0x270b70u: goto label_270b70;
        case 0x270b74u: goto label_270b74;
        case 0x270b78u: goto label_270b78;
        case 0x270b7cu: goto label_270b7c;
        case 0x270b80u: goto label_270b80;
        case 0x270b84u: goto label_270b84;
        case 0x270b88u: goto label_270b88;
        case 0x270b8cu: goto label_270b8c;
        case 0x270b90u: goto label_270b90;
        case 0x270b94u: goto label_270b94;
        case 0x270b98u: goto label_270b98;
        case 0x270b9cu: goto label_270b9c;
        case 0x270ba0u: goto label_270ba0;
        case 0x270ba4u: goto label_270ba4;
        case 0x270ba8u: goto label_270ba8;
        case 0x270bacu: goto label_270bac;
        case 0x270bb0u: goto label_270bb0;
        case 0x270bb4u: goto label_270bb4;
        case 0x270bb8u: goto label_270bb8;
        case 0x270bbcu: goto label_270bbc;
        case 0x270bc0u: goto label_270bc0;
        case 0x270bc4u: goto label_270bc4;
        case 0x270bc8u: goto label_270bc8;
        case 0x270bccu: goto label_270bcc;
        case 0x270bd0u: goto label_270bd0;
        case 0x270bd4u: goto label_270bd4;
        case 0x270bd8u: goto label_270bd8;
        case 0x270bdcu: goto label_270bdc;
        case 0x270be0u: goto label_270be0;
        case 0x270be4u: goto label_270be4;
        case 0x270be8u: goto label_270be8;
        case 0x270becu: goto label_270bec;
        case 0x270bf0u: goto label_270bf0;
        case 0x270bf4u: goto label_270bf4;
        case 0x270bf8u: goto label_270bf8;
        case 0x270bfcu: goto label_270bfc;
        case 0x270c00u: goto label_270c00;
        case 0x270c04u: goto label_270c04;
        case 0x270c08u: goto label_270c08;
        case 0x270c0cu: goto label_270c0c;
        case 0x270c10u: goto label_270c10;
        case 0x270c14u: goto label_270c14;
        case 0x270c18u: goto label_270c18;
        case 0x270c1cu: goto label_270c1c;
        case 0x270c20u: goto label_270c20;
        case 0x270c24u: goto label_270c24;
        case 0x270c28u: goto label_270c28;
        case 0x270c2cu: goto label_270c2c;
        case 0x270c30u: goto label_270c30;
        case 0x270c34u: goto label_270c34;
        case 0x270c38u: goto label_270c38;
        case 0x270c3cu: goto label_270c3c;
        case 0x270c40u: goto label_270c40;
        case 0x270c44u: goto label_270c44;
        case 0x270c48u: goto label_270c48;
        case 0x270c4cu: goto label_270c4c;
        case 0x270c50u: goto label_270c50;
        case 0x270c54u: goto label_270c54;
        case 0x270c58u: goto label_270c58;
        case 0x270c5cu: goto label_270c5c;
        case 0x270c60u: goto label_270c60;
        case 0x270c64u: goto label_270c64;
        case 0x270c68u: goto label_270c68;
        case 0x270c6cu: goto label_270c6c;
        case 0x270c70u: goto label_270c70;
        case 0x270c74u: goto label_270c74;
        case 0x270c78u: goto label_270c78;
        case 0x270c7cu: goto label_270c7c;
        case 0x270c80u: goto label_270c80;
        case 0x270c84u: goto label_270c84;
        case 0x270c88u: goto label_270c88;
        case 0x270c8cu: goto label_270c8c;
        case 0x270c90u: goto label_270c90;
        case 0x270c94u: goto label_270c94;
        case 0x270c98u: goto label_270c98;
        case 0x270c9cu: goto label_270c9c;
        case 0x270ca0u: goto label_270ca0;
        case 0x270ca4u: goto label_270ca4;
        case 0x270ca8u: goto label_270ca8;
        case 0x270cacu: goto label_270cac;
        case 0x270cb0u: goto label_270cb0;
        case 0x270cb4u: goto label_270cb4;
        case 0x270cb8u: goto label_270cb8;
        case 0x270cbcu: goto label_270cbc;
        case 0x270cc0u: goto label_270cc0;
        case 0x270cc4u: goto label_270cc4;
        case 0x270cc8u: goto label_270cc8;
        case 0x270cccu: goto label_270ccc;
        case 0x270cd0u: goto label_270cd0;
        case 0x270cd4u: goto label_270cd4;
        case 0x270cd8u: goto label_270cd8;
        case 0x270cdcu: goto label_270cdc;
        case 0x270ce0u: goto label_270ce0;
        case 0x270ce4u: goto label_270ce4;
        case 0x270ce8u: goto label_270ce8;
        case 0x270cecu: goto label_270cec;
        case 0x270cf0u: goto label_270cf0;
        case 0x270cf4u: goto label_270cf4;
        case 0x270cf8u: goto label_270cf8;
        case 0x270cfcu: goto label_270cfc;
        case 0x270d00u: goto label_270d00;
        case 0x270d04u: goto label_270d04;
        case 0x270d08u: goto label_270d08;
        case 0x270d0cu: goto label_270d0c;
        case 0x270d10u: goto label_270d10;
        case 0x270d14u: goto label_270d14;
        case 0x270d18u: goto label_270d18;
        case 0x270d1cu: goto label_270d1c;
        case 0x270d20u: goto label_270d20;
        case 0x270d24u: goto label_270d24;
        case 0x270d28u: goto label_270d28;
        case 0x270d2cu: goto label_270d2c;
        case 0x270d30u: goto label_270d30;
        case 0x270d34u: goto label_270d34;
        case 0x270d38u: goto label_270d38;
        case 0x270d3cu: goto label_270d3c;
        case 0x270d40u: goto label_270d40;
        case 0x270d44u: goto label_270d44;
        case 0x270d48u: goto label_270d48;
        case 0x270d4cu: goto label_270d4c;
        case 0x270d50u: goto label_270d50;
        case 0x270d54u: goto label_270d54;
        case 0x270d58u: goto label_270d58;
        case 0x270d5cu: goto label_270d5c;
        case 0x270d60u: goto label_270d60;
        case 0x270d64u: goto label_270d64;
        case 0x270d68u: goto label_270d68;
        case 0x270d6cu: goto label_270d6c;
        case 0x270d70u: goto label_270d70;
        case 0x270d74u: goto label_270d74;
        case 0x270d78u: goto label_270d78;
        case 0x270d7cu: goto label_270d7c;
        case 0x270d80u: goto label_270d80;
        case 0x270d84u: goto label_270d84;
        case 0x270d88u: goto label_270d88;
        case 0x270d8cu: goto label_270d8c;
        case 0x270d90u: goto label_270d90;
        case 0x270d94u: goto label_270d94;
        case 0x270d98u: goto label_270d98;
        case 0x270d9cu: goto label_270d9c;
        case 0x270da0u: goto label_270da0;
        case 0x270da4u: goto label_270da4;
        case 0x270da8u: goto label_270da8;
        case 0x270dacu: goto label_270dac;
        case 0x270db0u: goto label_270db0;
        case 0x270db4u: goto label_270db4;
        case 0x270db8u: goto label_270db8;
        case 0x270dbcu: goto label_270dbc;
        case 0x270dc0u: goto label_270dc0;
        case 0x270dc4u: goto label_270dc4;
        case 0x270dc8u: goto label_270dc8;
        case 0x270dccu: goto label_270dcc;
        case 0x270dd0u: goto label_270dd0;
        case 0x270dd4u: goto label_270dd4;
        case 0x270dd8u: goto label_270dd8;
        case 0x270ddcu: goto label_270ddc;
        case 0x270de0u: goto label_270de0;
        case 0x270de4u: goto label_270de4;
        case 0x270de8u: goto label_270de8;
        case 0x270decu: goto label_270dec;
        case 0x270df0u: goto label_270df0;
        case 0x270df4u: goto label_270df4;
        case 0x270df8u: goto label_270df8;
        case 0x270dfcu: goto label_270dfc;
        case 0x270e00u: goto label_270e00;
        case 0x270e04u: goto label_270e04;
        case 0x270e08u: goto label_270e08;
        case 0x270e0cu: goto label_270e0c;
        case 0x270e10u: goto label_270e10;
        case 0x270e14u: goto label_270e14;
        case 0x270e18u: goto label_270e18;
        case 0x270e1cu: goto label_270e1c;
        case 0x270e20u: goto label_270e20;
        case 0x270e24u: goto label_270e24;
        case 0x270e28u: goto label_270e28;
        case 0x270e2cu: goto label_270e2c;
        case 0x270e30u: goto label_270e30;
        case 0x270e34u: goto label_270e34;
        case 0x270e38u: goto label_270e38;
        case 0x270e3cu: goto label_270e3c;
        case 0x270e40u: goto label_270e40;
        case 0x270e44u: goto label_270e44;
        case 0x270e48u: goto label_270e48;
        case 0x270e4cu: goto label_270e4c;
        case 0x270e50u: goto label_270e50;
        case 0x270e54u: goto label_270e54;
        case 0x270e58u: goto label_270e58;
        case 0x270e5cu: goto label_270e5c;
        case 0x270e60u: goto label_270e60;
        case 0x270e64u: goto label_270e64;
        case 0x270e68u: goto label_270e68;
        case 0x270e6cu: goto label_270e6c;
        case 0x270e70u: goto label_270e70;
        case 0x270e74u: goto label_270e74;
        case 0x270e78u: goto label_270e78;
        case 0x270e7cu: goto label_270e7c;
        case 0x270e80u: goto label_270e80;
        case 0x270e84u: goto label_270e84;
        case 0x270e88u: goto label_270e88;
        case 0x270e8cu: goto label_270e8c;
        case 0x270e90u: goto label_270e90;
        case 0x270e94u: goto label_270e94;
        case 0x270e98u: goto label_270e98;
        case 0x270e9cu: goto label_270e9c;
        case 0x270ea0u: goto label_270ea0;
        case 0x270ea4u: goto label_270ea4;
        case 0x270ea8u: goto label_270ea8;
        case 0x270eacu: goto label_270eac;
        case 0x270eb0u: goto label_270eb0;
        case 0x270eb4u: goto label_270eb4;
        case 0x270eb8u: goto label_270eb8;
        case 0x270ebcu: goto label_270ebc;
        case 0x270ec0u: goto label_270ec0;
        case 0x270ec4u: goto label_270ec4;
        case 0x270ec8u: goto label_270ec8;
        case 0x270eccu: goto label_270ecc;
        case 0x270ed0u: goto label_270ed0;
        case 0x270ed4u: goto label_270ed4;
        case 0x270ed8u: goto label_270ed8;
        case 0x270edcu: goto label_270edc;
        case 0x270ee0u: goto label_270ee0;
        case 0x270ee4u: goto label_270ee4;
        case 0x270ee8u: goto label_270ee8;
        case 0x270eecu: goto label_270eec;
        case 0x270ef0u: goto label_270ef0;
        case 0x270ef4u: goto label_270ef4;
        case 0x270ef8u: goto label_270ef8;
        case 0x270efcu: goto label_270efc;
        case 0x270f00u: goto label_270f00;
        case 0x270f04u: goto label_270f04;
        case 0x270f08u: goto label_270f08;
        case 0x270f0cu: goto label_270f0c;
        case 0x270f10u: goto label_270f10;
        case 0x270f14u: goto label_270f14;
        case 0x270f18u: goto label_270f18;
        case 0x270f1cu: goto label_270f1c;
        case 0x270f20u: goto label_270f20;
        case 0x270f24u: goto label_270f24;
        case 0x270f28u: goto label_270f28;
        case 0x270f2cu: goto label_270f2c;
        case 0x270f30u: goto label_270f30;
        case 0x270f34u: goto label_270f34;
        case 0x270f38u: goto label_270f38;
        case 0x270f3cu: goto label_270f3c;
        case 0x270f40u: goto label_270f40;
        case 0x270f44u: goto label_270f44;
        case 0x270f48u: goto label_270f48;
        case 0x270f4cu: goto label_270f4c;
        case 0x270f50u: goto label_270f50;
        case 0x270f54u: goto label_270f54;
        case 0x270f58u: goto label_270f58;
        case 0x270f5cu: goto label_270f5c;
        case 0x270f60u: goto label_270f60;
        case 0x270f64u: goto label_270f64;
        case 0x270f68u: goto label_270f68;
        case 0x270f6cu: goto label_270f6c;
        case 0x270f70u: goto label_270f70;
        case 0x270f74u: goto label_270f74;
        case 0x270f78u: goto label_270f78;
        case 0x270f7cu: goto label_270f7c;
        case 0x270f80u: goto label_270f80;
        case 0x270f84u: goto label_270f84;
        case 0x270f88u: goto label_270f88;
        case 0x270f8cu: goto label_270f8c;
        case 0x270f90u: goto label_270f90;
        case 0x270f94u: goto label_270f94;
        case 0x270f98u: goto label_270f98;
        case 0x270f9cu: goto label_270f9c;
        case 0x270fa0u: goto label_270fa0;
        case 0x270fa4u: goto label_270fa4;
        case 0x270fa8u: goto label_270fa8;
        case 0x270facu: goto label_270fac;
        case 0x270fb0u: goto label_270fb0;
        case 0x270fb4u: goto label_270fb4;
        case 0x270fb8u: goto label_270fb8;
        case 0x270fbcu: goto label_270fbc;
        case 0x270fc0u: goto label_270fc0;
        case 0x270fc4u: goto label_270fc4;
        case 0x270fc8u: goto label_270fc8;
        case 0x270fccu: goto label_270fcc;
        case 0x270fd0u: goto label_270fd0;
        case 0x270fd4u: goto label_270fd4;
        case 0x270fd8u: goto label_270fd8;
        case 0x270fdcu: goto label_270fdc;
        case 0x270fe0u: goto label_270fe0;
        case 0x270fe4u: goto label_270fe4;
        case 0x270fe8u: goto label_270fe8;
        case 0x270fecu: goto label_270fec;
        case 0x270ff0u: goto label_270ff0;
        case 0x270ff4u: goto label_270ff4;
        case 0x270ff8u: goto label_270ff8;
        case 0x270ffcu: goto label_270ffc;
        case 0x271000u: goto label_271000;
        case 0x271004u: goto label_271004;
        case 0x271008u: goto label_271008;
        case 0x27100cu: goto label_27100c;
        case 0x271010u: goto label_271010;
        case 0x271014u: goto label_271014;
        case 0x271018u: goto label_271018;
        case 0x27101cu: goto label_27101c;
        case 0x271020u: goto label_271020;
        case 0x271024u: goto label_271024;
        case 0x271028u: goto label_271028;
        case 0x27102cu: goto label_27102c;
        case 0x271030u: goto label_271030;
        case 0x271034u: goto label_271034;
        case 0x271038u: goto label_271038;
        case 0x27103cu: goto label_27103c;
        case 0x271040u: goto label_271040;
        case 0x271044u: goto label_271044;
        case 0x271048u: goto label_271048;
        case 0x27104cu: goto label_27104c;
        case 0x271050u: goto label_271050;
        case 0x271054u: goto label_271054;
        case 0x271058u: goto label_271058;
        case 0x27105cu: goto label_27105c;
        case 0x271060u: goto label_271060;
        case 0x271064u: goto label_271064;
        case 0x271068u: goto label_271068;
        case 0x27106cu: goto label_27106c;
        case 0x271070u: goto label_271070;
        case 0x271074u: goto label_271074;
        case 0x271078u: goto label_271078;
        case 0x27107cu: goto label_27107c;
        case 0x271080u: goto label_271080;
        case 0x271084u: goto label_271084;
        case 0x271088u: goto label_271088;
        case 0x27108cu: goto label_27108c;
        case 0x271090u: goto label_271090;
        case 0x271094u: goto label_271094;
        case 0x271098u: goto label_271098;
        case 0x27109cu: goto label_27109c;
        case 0x2710a0u: goto label_2710a0;
        case 0x2710a4u: goto label_2710a4;
        case 0x2710a8u: goto label_2710a8;
        case 0x2710acu: goto label_2710ac;
        case 0x2710b0u: goto label_2710b0;
        case 0x2710b4u: goto label_2710b4;
        case 0x2710b8u: goto label_2710b8;
        case 0x2710bcu: goto label_2710bc;
        case 0x2710c0u: goto label_2710c0;
        case 0x2710c4u: goto label_2710c4;
        case 0x2710c8u: goto label_2710c8;
        case 0x2710ccu: goto label_2710cc;
        case 0x2710d0u: goto label_2710d0;
        case 0x2710d4u: goto label_2710d4;
        case 0x2710d8u: goto label_2710d8;
        case 0x2710dcu: goto label_2710dc;
        case 0x2710e0u: goto label_2710e0;
        case 0x2710e4u: goto label_2710e4;
        case 0x2710e8u: goto label_2710e8;
        case 0x2710ecu: goto label_2710ec;
        case 0x2710f0u: goto label_2710f0;
        case 0x2710f4u: goto label_2710f4;
        case 0x2710f8u: goto label_2710f8;
        case 0x2710fcu: goto label_2710fc;
        case 0x271100u: goto label_271100;
        case 0x271104u: goto label_271104;
        case 0x271108u: goto label_271108;
        case 0x27110cu: goto label_27110c;
        case 0x271110u: goto label_271110;
        case 0x271114u: goto label_271114;
        case 0x271118u: goto label_271118;
        case 0x27111cu: goto label_27111c;
        case 0x271120u: goto label_271120;
        case 0x271124u: goto label_271124;
        case 0x271128u: goto label_271128;
        case 0x27112cu: goto label_27112c;
        case 0x271130u: goto label_271130;
        case 0x271134u: goto label_271134;
        case 0x271138u: goto label_271138;
        case 0x27113cu: goto label_27113c;
        case 0x271140u: goto label_271140;
        case 0x271144u: goto label_271144;
        case 0x271148u: goto label_271148;
        case 0x27114cu: goto label_27114c;
        case 0x271150u: goto label_271150;
        case 0x271154u: goto label_271154;
        case 0x271158u: goto label_271158;
        case 0x27115cu: goto label_27115c;
        case 0x271160u: goto label_271160;
        case 0x271164u: goto label_271164;
        case 0x271168u: goto label_271168;
        case 0x27116cu: goto label_27116c;
        case 0x271170u: goto label_271170;
        case 0x271174u: goto label_271174;
        case 0x271178u: goto label_271178;
        case 0x27117cu: goto label_27117c;
        case 0x271180u: goto label_271180;
        case 0x271184u: goto label_271184;
        case 0x271188u: goto label_271188;
        case 0x27118cu: goto label_27118c;
        case 0x271190u: goto label_271190;
        case 0x271194u: goto label_271194;
        case 0x271198u: goto label_271198;
        case 0x27119cu: goto label_27119c;
        case 0x2711a0u: goto label_2711a0;
        case 0x2711a4u: goto label_2711a4;
        case 0x2711a8u: goto label_2711a8;
        case 0x2711acu: goto label_2711ac;
        case 0x2711b0u: goto label_2711b0;
        case 0x2711b4u: goto label_2711b4;
        case 0x2711b8u: goto label_2711b8;
        case 0x2711bcu: goto label_2711bc;
        case 0x2711c0u: goto label_2711c0;
        case 0x2711c4u: goto label_2711c4;
        case 0x2711c8u: goto label_2711c8;
        case 0x2711ccu: goto label_2711cc;
        case 0x2711d0u: goto label_2711d0;
        case 0x2711d4u: goto label_2711d4;
        case 0x2711d8u: goto label_2711d8;
        case 0x2711dcu: goto label_2711dc;
        case 0x2711e0u: goto label_2711e0;
        case 0x2711e4u: goto label_2711e4;
        case 0x2711e8u: goto label_2711e8;
        case 0x2711ecu: goto label_2711ec;
        case 0x2711f0u: goto label_2711f0;
        case 0x2711f4u: goto label_2711f4;
        case 0x2711f8u: goto label_2711f8;
        case 0x2711fcu: goto label_2711fc;
        case 0x271200u: goto label_271200;
        case 0x271204u: goto label_271204;
        case 0x271208u: goto label_271208;
        case 0x27120cu: goto label_27120c;
        case 0x271210u: goto label_271210;
        case 0x271214u: goto label_271214;
        case 0x271218u: goto label_271218;
        case 0x27121cu: goto label_27121c;
        case 0x271220u: goto label_271220;
        case 0x271224u: goto label_271224;
        case 0x271228u: goto label_271228;
        case 0x27122cu: goto label_27122c;
        case 0x271230u: goto label_271230;
        case 0x271234u: goto label_271234;
        case 0x271238u: goto label_271238;
        case 0x27123cu: goto label_27123c;
        case 0x271240u: goto label_271240;
        case 0x271244u: goto label_271244;
        case 0x271248u: goto label_271248;
        case 0x27124cu: goto label_27124c;
        case 0x271250u: goto label_271250;
        case 0x271254u: goto label_271254;
        default: return;
    }

label_270a88:
    // 0x270a88: 0x0  nop
    ctx->pc = 0x270a88u;
    // NOP
label_270a8c:
    // 0x270a8c: 0x0  nop
    ctx->pc = 0x270a8cu;
    // NOP
label_270a90:
    // 0x270a90: 0x6b47  .word       0x00006B47                   # srav        $t5, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270a90u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_270a94:
    // 0x270a94: 0xdf50  .word       0x0000DF50                   # mfhi        $k1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270a94u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_270a98:
    // 0x270a98: 0x0  nop
    ctx->pc = 0x270a98u;
    // NOP
label_270a9c:
    // 0x270a9c: 0x0  nop
    ctx->pc = 0x270a9cu;
    // NOP
label_270aa0:
    // 0x270aa0: 0x6b63  .word       0x00006B63                   # negu        $t5, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270aa0u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_270aa4:
    // 0x270aa4: 0xc350  .word       0x0000C350                   # mfhi        $t8 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270aa4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_270aa8:
    // 0x270aa8: 0x0  nop
    ctx->pc = 0x270aa8u;
    // NOP
label_270aac:
    // 0x270aac: 0x0  nop
    ctx->pc = 0x270aacu;
    // NOP
label_270ab0:
    // 0x270ab0: 0x6b7c  dsll32      $t5, $zero, 13
    ctx->pc = 0x270ab0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) << (32 + 13));
label_270ab4:
    // 0x270ab4: 0xb770  tge         $zero, $zero, 733
    ctx->pc = 0x270ab4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270ab8:
    // 0x270ab8: 0x0  nop
    ctx->pc = 0x270ab8u;
    // NOP
label_270abc:
    // 0x270abc: 0x0  nop
    ctx->pc = 0x270abcu;
    // NOP
label_270ac0:
    // 0x270ac0: 0x6b93  .word       0x00006B93                   # mtlo        $zero # 00006B80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270ac0u;
    ctx->lo = GPR_U64(ctx, 0);
label_270ac4:
    // 0x270ac4: 0xc9a0  .word       0x0000C9A0                   # add         $t9, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270ac4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_270ac8:
    // 0x270ac8: 0x0  nop
    ctx->pc = 0x270ac8u;
    // NOP
label_270acc:
    // 0x270acc: 0x0  nop
    ctx->pc = 0x270accu;
    // NOP
label_270ad0:
    // 0x270ad0: 0x6bad  .word       0x00006BAD                   # daddu       $t5, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270ad0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270ad4:
    // 0x270ad4: 0xce00  sll         $t9, $zero, 24
    ctx->pc = 0x270ad4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_270ad8:
    // 0x270ad8: 0x0  nop
    ctx->pc = 0x270ad8u;
    // NOP
label_270adc:
    // 0x270adc: 0x0  nop
    ctx->pc = 0x270adcu;
    // NOP
label_270ae0:
    // 0x270ae0: 0x6bc7  .word       0x00006BC7                   # srav        $t5, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270ae0u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_270ae4:
    // 0x270ae4: 0x7500  sll         $t6, $zero, 20
    ctx->pc = 0x270ae4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_270ae8:
    // 0x270ae8: 0x0  nop
    ctx->pc = 0x270ae8u;
    // NOP
label_270aec:
    // 0x270aec: 0x0  nop
    ctx->pc = 0x270aecu;
    // NOP
label_270af0:
    // 0x270af0: 0x6bd6  .word       0x00006BD6                   # dsrlv       $t5, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270af0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_270af4:
    // 0x270af4: 0x58d0  .word       0x000058D0                   # mfhi        $t3 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270af4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_270af8:
    // 0x270af8: 0x0  nop
    ctx->pc = 0x270af8u;
    // NOP
label_270afc:
    // 0x270afc: 0x0  nop
    ctx->pc = 0x270afcu;
    // NOP
label_270b00:
    // 0x270b00: 0x6be2  .word       0x00006BE2                   # neg         $t5, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270b00u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
label_270b04:
    // 0x270b04: 0x4ce0  .word       0x00004CE0                   # add         $t1, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270b04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_270b08:
    // 0x270b08: 0x0  nop
    ctx->pc = 0x270b08u;
    // NOP
label_270b0c:
    // 0x270b0c: 0x0  nop
    ctx->pc = 0x270b0cu;
    // NOP
label_270b10:
    // 0x270b10: 0x6bec  .word       0x00006BEC                   # dadd        $t5, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270b10u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_270b14:
    // 0x270b14: 0x75a0  .word       0x000075A0                   # add         $t6, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270b14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_270b18:
    // 0x270b18: 0x0  nop
    ctx->pc = 0x270b18u;
    // NOP
label_270b1c:
    // 0x270b1c: 0x0  nop
    ctx->pc = 0x270b1cu;
    // NOP
label_270b20:
    // 0x270b20: 0x6bfb  dsra        $t5, $zero, 15
    ctx->pc = 0x270b20u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 0) >> 15);
label_270b24:
    // 0x270b24: 0x6e60  .word       0x00006E60                   # add         $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270b24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_270b28:
    // 0x270b28: 0x0  nop
    ctx->pc = 0x270b28u;
    // NOP
label_270b2c:
    // 0x270b2c: 0x0  nop
    ctx->pc = 0x270b2cu;
    // NOP
label_270b30:
    // 0x270b30: 0x6c09  .word       0x00006C09                   # jalr        $t5, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
label_270b34:
    if (ctx->pc == 0x270B34u) {
        ctx->pc = 0x270B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B30u;
        // 0x270b34: 0x6640  sll         $t4, $zero, 25 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270B38u;
        goto label_270b38;
    }
    ctx->pc = 0x270B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 13, 0x270B38u);
        ctx->pc = 0x270B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B30u;
        // 0x270b34: 0x6640  sll         $t4, $zero, 25 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270B30u, 0x270B38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x270B38u;
label_270b38:
    // 0x270b38: 0x0  nop
    ctx->pc = 0x270b38u;
    // NOP
label_270b3c:
    // 0x270b3c: 0x0  nop
    ctx->pc = 0x270b3cu;
    // NOP
label_270b40:
    // 0x270b40: 0x6c16  .word       0x00006C16                   # dsrlv       $t5, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270b40u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_270b44:
    // 0x270b44: 0x9b60  .word       0x00009B60                   # add         $s3, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270b44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_270b48:
    // 0x270b48: 0x0  nop
    ctx->pc = 0x270b48u;
    // NOP
label_270b4c:
    // 0x270b4c: 0x0  nop
    ctx->pc = 0x270b4cu;
    // NOP
label_270b50:
    // 0x270b50: 0x6c2a  .word       0x00006C2A                   # slt         $t5, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270b50u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_270b54:
    // 0x270b54: 0x35c0  sll         $a2, $zero, 23
    ctx->pc = 0x270b54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_270b58:
    // 0x270b58: 0x0  nop
    ctx->pc = 0x270b58u;
    // NOP
label_270b5c:
    // 0x270b5c: 0x0  nop
    ctx->pc = 0x270b5cu;
    // NOP
label_270b60:
    // 0x270b60: 0x6c31  tgeu        $zero, $zero, 432
    ctx->pc = 0x270b60u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270b64:
    // 0x270b64: 0x62e0  .word       0x000062E0                   # add         $t4, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270b64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_270b68:
    // 0x270b68: 0x0  nop
    ctx->pc = 0x270b68u;
    // NOP
label_270b6c:
    // 0x270b6c: 0x0  nop
    ctx->pc = 0x270b6cu;
    // NOP
label_270b70:
    // 0x270b70: 0x6c3e  dsrl32      $t5, $zero, 16
    ctx->pc = 0x270b70u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) >> (32 + 16));
label_270b74:
    // 0x270b74: 0x4ec0  sll         $t1, $zero, 27
    ctx->pc = 0x270b74u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_270b78:
    // 0x270b78: 0x0  nop
    ctx->pc = 0x270b78u;
    // NOP
label_270b7c:
    // 0x270b7c: 0x0  nop
    ctx->pc = 0x270b7cu;
    // NOP
label_270b80:
    // 0x270b80: 0x6c48  .word       0x00006C48                   # jr          $zero # 00006C40 <InstrIdType: CPU_SPECIAL>
label_270b84:
    if (ctx->pc == 0x270B84u) {
        ctx->pc = 0x270B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B80u;
        // 0x270b84: 0x4cc0  sll         $t1, $zero, 19 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270B88u;
        goto label_270b88;
    }
    ctx->pc = 0x270B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x270B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B80u;
        // 0x270b84: 0x4cc0  sll         $t1, $zero, 19 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270B80u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x270B88u;
label_270b88:
    // 0x270b88: 0x0  nop
    ctx->pc = 0x270b88u;
    // NOP
label_270b8c:
    // 0x270b8c: 0x0  nop
    ctx->pc = 0x270b8cu;
    // NOP
label_270b90:
    // 0x270b90: 0x6c52  .word       0x00006C52                   # mflo        $t5 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270b90u;
    SET_GPR_U64(ctx, 13, ctx->lo);
label_270b94:
    // 0x270b94: 0x6c20  .word       0x00006C20                   # add         $t5, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270b94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_270b98:
    // 0x270b98: 0x0  nop
    ctx->pc = 0x270b98u;
    // NOP
label_270b9c:
    // 0x270b9c: 0x0  nop
    ctx->pc = 0x270b9cu;
    // NOP
label_270ba0:
    // 0x270ba0: 0x6c60  .word       0x00006C60                   # add         $t5, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270ba0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_270ba4:
    // 0x270ba4: 0x6de0  .word       0x00006DE0                   # add         $t5, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270ba4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_270ba8:
    // 0x270ba8: 0x0  nop
    ctx->pc = 0x270ba8u;
    // NOP
label_270bac:
    // 0x270bac: 0x0  nop
    ctx->pc = 0x270bacu;
    // NOP
label_270bb0:
    // 0x270bb0: 0x6c6e  .word       0x00006C6E                   # dsub        $t5, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270bb0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_270bb4:
    // 0x270bb4: 0x3a30  tge         $zero, $zero, 232
    ctx->pc = 0x270bb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270bb8:
    // 0x270bb8: 0x0  nop
    ctx->pc = 0x270bb8u;
    // NOP
label_270bbc:
    // 0x270bbc: 0x0  nop
    ctx->pc = 0x270bbcu;
    // NOP
label_270bc0:
    // 0x270bc0: 0x6c76  tne         $zero, $zero, 433
    ctx->pc = 0x270bc0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270bc4:
    // 0x270bc4: 0x8f80  sll         $s1, $zero, 30
    ctx->pc = 0x270bc4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_270bc8:
    // 0x270bc8: 0x0  nop
    ctx->pc = 0x270bc8u;
    // NOP
label_270bcc:
    // 0x270bcc: 0x0  nop
    ctx->pc = 0x270bccu;
    // NOP
label_270bd0:
    // 0x270bd0: 0x6c88  .word       0x00006C88                   # jr          $zero # 00006C80 <InstrIdType: CPU_SPECIAL>
label_270bd4:
    if (ctx->pc == 0x270BD4u) {
        ctx->pc = 0x270BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270BD0u;
        // 0x270bd4: 0x5370  tge         $zero, $zero, 333 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x270BD8u;
        goto label_270bd8;
    }
    ctx->pc = 0x270BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x270BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270BD0u;
        // 0x270bd4: 0x5370  tge         $zero, $zero, 333 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270BD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x270BD8u;
label_270bd8:
    // 0x270bd8: 0x0  nop
    ctx->pc = 0x270bd8u;
    // NOP
label_270bdc:
    // 0x270bdc: 0x0  nop
    ctx->pc = 0x270bdcu;
    // NOP
label_270be0:
    // 0x270be0: 0x6c93  .word       0x00006C93                   # mtlo        $zero # 00006C80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270be0u;
    ctx->lo = GPR_U64(ctx, 0);
label_270be4:
    // 0x270be4: 0x79b0  tge         $zero, $zero, 486
    ctx->pc = 0x270be4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270be8:
    // 0x270be8: 0x0  nop
    ctx->pc = 0x270be8u;
    // NOP
label_270bec:
    // 0x270bec: 0x0  nop
    ctx->pc = 0x270becu;
    // NOP
label_270bf0:
    // 0x270bf0: 0x6ca3  .word       0x00006CA3                   # negu        $t5, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270bf0u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_270bf4:
    // 0x270bf4: 0xcdb0  tge         $zero, $zero, 822
    ctx->pc = 0x270bf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270bf8:
    // 0x270bf8: 0x0  nop
    ctx->pc = 0x270bf8u;
    // NOP
label_270bfc:
    // 0x270bfc: 0x0  nop
    ctx->pc = 0x270bfcu;
    // NOP
label_270c00:
    // 0x270c00: 0x6cbd  .word       0x00006CBD                   # INVALID     $zero, $zero, 0x6CBD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270c00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x270C00 raw=0x00006CBD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270c04:
    // 0x270c04: 0x7300  sll         $t6, $zero, 12
    ctx->pc = 0x270c04u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_270c08:
    // 0x270c08: 0x0  nop
    ctx->pc = 0x270c08u;
    // NOP
label_270c0c:
    // 0x270c0c: 0x0  nop
    ctx->pc = 0x270c0cu;
    // NOP
label_270c10:
    // 0x270c10: 0x6ccc  syscall     435
    ctx->pc = 0x270c10u;
    ctx->pc = 0x270C14u;
runtime->handleSyscall(rdram, ctx, 0x1B3u);
label_270c14:
    // 0x270c14: 0x7350  .word       0x00007350                   # mfhi        $t6 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270c14u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_270c18:
    // 0x270c18: 0x0  nop
    ctx->pc = 0x270c18u;
    // NOP
label_270c1c:
    // 0x270c1c: 0x0  nop
    ctx->pc = 0x270c1cu;
    // NOP
label_270c20:
    // 0x270c20: 0x6cdb  .word       0x00006CDB                   # divu        $t5, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270c20u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_270c24:
    // 0x270c24: 0x9560  .word       0x00009560                   # add         $s2, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270c24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_270c28:
    // 0x270c28: 0x0  nop
    ctx->pc = 0x270c28u;
    // NOP
label_270c2c:
    // 0x270c2c: 0x0  nop
    ctx->pc = 0x270c2cu;
    // NOP
label_270c30:
    // 0x270c30: 0x6cee  .word       0x00006CEE                   # dsub        $t5, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270c30u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_270c34:
    // 0x270c34: 0x4b80  sll         $t1, $zero, 14
    ctx->pc = 0x270c34u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_270c38:
    // 0x270c38: 0x0  nop
    ctx->pc = 0x270c38u;
    // NOP
label_270c3c:
    // 0x270c3c: 0x0  nop
    ctx->pc = 0x270c3cu;
    // NOP
label_270c40:
    // 0x270c40: 0x6cf8  dsll        $t5, $zero, 19
    ctx->pc = 0x270c40u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) << 19);
label_270c44:
    // 0x270c44: 0x5640  sll         $t2, $zero, 25
    ctx->pc = 0x270c44u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_270c48:
    // 0x270c48: 0x0  nop
    ctx->pc = 0x270c48u;
    // NOP
label_270c4c:
    // 0x270c4c: 0x0  nop
    ctx->pc = 0x270c4cu;
    // NOP
label_270c50:
    // 0x270c50: 0x6d03  sra         $t5, $zero, 20
    ctx->pc = 0x270c50u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 0), 20));
label_270c54:
    // 0x270c54: 0x3c80  sll         $a3, $zero, 18
    ctx->pc = 0x270c54u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_270c58:
    // 0x270c58: 0x0  nop
    ctx->pc = 0x270c58u;
    // NOP
label_270c5c:
    // 0x270c5c: 0x0  nop
    ctx->pc = 0x270c5cu;
    // NOP
label_270c60:
    // 0x270c60: 0x6d0b  .word       0x00006D0B                   # movn        $t5, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270c60u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
label_270c64:
    // 0x270c64: 0xad00  sll         $s5, $zero, 20
    ctx->pc = 0x270c64u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_270c68:
    // 0x270c68: 0x0  nop
    ctx->pc = 0x270c68u;
    // NOP
label_270c6c:
    // 0x270c6c: 0x0  nop
    ctx->pc = 0x270c6cu;
    // NOP
label_270c70:
    // 0x270c70: 0x6d21  .word       0x00006D21                   # addu        $t5, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270c70u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_270c74:
    // 0x270c74: 0x91f0  tge         $zero, $zero, 583
    ctx->pc = 0x270c74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270c78:
    // 0x270c78: 0x0  nop
    ctx->pc = 0x270c78u;
    // NOP
label_270c7c:
    // 0x270c7c: 0x0  nop
    ctx->pc = 0x270c7cu;
    // NOP
label_270c80:
    // 0x270c80: 0x6d34  teq         $zero, $zero, 436
    ctx->pc = 0x270c80u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270c84:
    // 0x270c84: 0x8070  tge         $zero, $zero, 513
    ctx->pc = 0x270c84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270c88:
    // 0x270c88: 0x0  nop
    ctx->pc = 0x270c88u;
    // NOP
label_270c8c:
    // 0x270c8c: 0x0  nop
    ctx->pc = 0x270c8cu;
    // NOP
label_270c90:
    // 0x270c90: 0x6d45  .word       0x00006D45                   # INVALID     $zero, $zero, 0x6D45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270c90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x270C90 raw=0x00006D45"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270c94:
    // 0x270c94: 0x66b0  tge         $zero, $zero, 410
    ctx->pc = 0x270c94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270c98:
    // 0x270c98: 0x0  nop
    ctx->pc = 0x270c98u;
    // NOP
label_270c9c:
    // 0x270c9c: 0x0  nop
    ctx->pc = 0x270c9cu;
    // NOP
label_270ca0:
    // 0x270ca0: 0x6d52  .word       0x00006D52                   # mflo        $t5 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270ca0u;
    SET_GPR_U64(ctx, 13, ctx->lo);
label_270ca4:
    // 0x270ca4: 0xa430  tge         $zero, $zero, 656
    ctx->pc = 0x270ca4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270ca8:
    // 0x270ca8: 0x0  nop
    ctx->pc = 0x270ca8u;
    // NOP
label_270cac:
    // 0x270cac: 0x0  nop
    ctx->pc = 0x270cacu;
    // NOP
label_270cb0:
    // 0x270cb0: 0x6d67  .word       0x00006D67                   # not         $t5, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270cb0u;
    SET_GPR_U64(ctx, 13, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_270cb4:
    // 0x270cb4: 0x5500  sll         $t2, $zero, 20
    ctx->pc = 0x270cb4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_270cb8:
    // 0x270cb8: 0x0  nop
    ctx->pc = 0x270cb8u;
    // NOP
label_270cbc:
    // 0x270cbc: 0x0  nop
    ctx->pc = 0x270cbcu;
    // NOP
label_270cc0:
    // 0x270cc0: 0x6d72  tlt         $zero, $zero, 437
    ctx->pc = 0x270cc0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270cc4:
    // 0x270cc4: 0x61e0  .word       0x000061E0                   # add         $t4, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270cc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_270cc8:
    // 0x270cc8: 0x0  nop
    ctx->pc = 0x270cc8u;
    // NOP
label_270ccc:
    // 0x270ccc: 0x0  nop
    ctx->pc = 0x270cccu;
    // NOP
label_270cd0:
    // 0x270cd0: 0x6d7f  dsra32      $t5, $zero, 21
    ctx->pc = 0x270cd0u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 0) >> (32 + 21));
label_270cd4:
    // 0x270cd4: 0xc4a0  .word       0x0000C4A0                   # add         $t8, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270cd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_270cd8:
    // 0x270cd8: 0x0  nop
    ctx->pc = 0x270cd8u;
    // NOP
label_270cdc:
    // 0x270cdc: 0x0  nop
    ctx->pc = 0x270cdcu;
    // NOP
label_270ce0:
    // 0x270ce0: 0x6d98  .word       0x00006D98                   # mult        $t5, $zero, $zero # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x270ce0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_270ce4:
    // 0x270ce4: 0x78d0  .word       0x000078D0                   # mfhi        $t7 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270ce4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_270ce8:
    // 0x270ce8: 0x0  nop
    ctx->pc = 0x270ce8u;
    // NOP
label_270cec:
    // 0x270cec: 0x0  nop
    ctx->pc = 0x270cecu;
    // NOP
label_270cf0:
    // 0x270cf0: 0x6da8  .word       0x00006DA8                   # mfsa        $t5 # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x270cf0u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_270cf4:
    // 0x270cf4: 0x7f80  sll         $t7, $zero, 30
    ctx->pc = 0x270cf4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_270cf8:
    // 0x270cf8: 0x0  nop
    ctx->pc = 0x270cf8u;
    // NOP
label_270cfc:
    // 0x270cfc: 0x0  nop
    ctx->pc = 0x270cfcu;
    // NOP
label_270d00:
    // 0x270d00: 0x6db8  dsll        $t5, $zero, 22
    ctx->pc = 0x270d00u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) << 22);
label_270d04:
    // 0x270d04: 0x6f10  .word       0x00006F10                   # mfhi        $t5 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270d04u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_270d08:
    // 0x270d08: 0x0  nop
    ctx->pc = 0x270d08u;
    // NOP
label_270d0c:
    // 0x270d0c: 0x0  nop
    ctx->pc = 0x270d0cu;
    // NOP
label_270d10:
    // 0x270d10: 0x6dc6  .word       0x00006DC6                   # srlv        $t5, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270d10u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_270d14:
    // 0x270d14: 0xc550  .word       0x0000C550                   # mfhi        $t8 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270d14u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_270d18:
    // 0x270d18: 0x0  nop
    ctx->pc = 0x270d18u;
    // NOP
label_270d1c:
    // 0x270d1c: 0x0  nop
    ctx->pc = 0x270d1cu;
    // NOP
label_270d20:
    // 0x270d20: 0x6ddf  .word       0x00006DDF                   # ddivu       $t5, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270d20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x270D20 raw=0x00006DDF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270d24:
    // 0x270d24: 0x4c30  tge         $zero, $zero, 304
    ctx->pc = 0x270d24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270d28:
    // 0x270d28: 0x0  nop
    ctx->pc = 0x270d28u;
    // NOP
label_270d2c:
    // 0x270d2c: 0x0  nop
    ctx->pc = 0x270d2cu;
    // NOP
label_270d30:
    // 0x270d30: 0x6de9  .word       0x00006DE9                   # mtsa        $zero # 00006DC0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x270d30u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_270d34:
    // 0x270d34: 0x7100  sll         $t6, $zero, 4
    ctx->pc = 0x270d34u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_270d38:
    // 0x270d38: 0x0  nop
    ctx->pc = 0x270d38u;
    // NOP
label_270d3c:
    // 0x270d3c: 0x0  nop
    ctx->pc = 0x270d3cu;
    // NOP
label_270d40:
    // 0x270d40: 0x6df8  dsll        $t5, $zero, 23
    ctx->pc = 0x270d40u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) << 23);
label_270d44:
    // 0x270d44: 0xb480  sll         $s6, $zero, 18
    ctx->pc = 0x270d44u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_270d48:
    // 0x270d48: 0x0  nop
    ctx->pc = 0x270d48u;
    // NOP
label_270d4c:
    // 0x270d4c: 0x0  nop
    ctx->pc = 0x270d4cu;
    // NOP
label_270d50:
    // 0x270d50: 0x6e0f  .word       0x00006E0F                   # sync.p # 00006800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270d50u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_270d54:
    // 0x270d54: 0x7ad0  .word       0x00007AD0                   # mfhi        $t7 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270d54u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_270d58:
    // 0x270d58: 0x0  nop
    ctx->pc = 0x270d58u;
    // NOP
label_270d5c:
    // 0x270d5c: 0x0  nop
    ctx->pc = 0x270d5cu;
    // NOP
label_270d60:
    // 0x270d60: 0x6e1f  .word       0x00006E1F                   # ddivu       $t5, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270d60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x270D60 raw=0x00006E1F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270d64:
    // 0x270d64: 0x5fa0  .word       0x00005FA0                   # add         $t3, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270d64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_270d68:
    // 0x270d68: 0x0  nop
    ctx->pc = 0x270d68u;
    // NOP
label_270d6c:
    // 0x270d6c: 0x0  nop
    ctx->pc = 0x270d6cu;
    // NOP
label_270d70:
    // 0x270d70: 0x6e2b  .word       0x00006E2B                   # sltu        $t5, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270d70u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_270d74:
    // 0x270d74: 0xf7e0  .word       0x0000F7E0                   # add         $fp, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270d74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_270d78:
    // 0x270d78: 0x0  nop
    ctx->pc = 0x270d78u;
    // NOP
label_270d7c:
    // 0x270d7c: 0x0  nop
    ctx->pc = 0x270d7cu;
    // NOP
label_270d80:
    // 0x270d80: 0x6e4a  .word       0x00006E4A                   # movz        $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270d80u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
label_270d84:
    // 0x270d84: 0xeb10  .word       0x0000EB10                   # mfhi        $sp # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270d84u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_270d88:
    // 0x270d88: 0x0  nop
    ctx->pc = 0x270d88u;
    // NOP
label_270d8c:
    // 0x270d8c: 0x0  nop
    ctx->pc = 0x270d8cu;
    // NOP
label_270d90:
    // 0x270d90: 0x6e68  .word       0x00006E68                   # mfsa        $t5 # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x270d90u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_270d94:
    // 0x270d94: 0x9de0  .word       0x00009DE0                   # add         $s3, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270d94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_270d98:
    // 0x270d98: 0x0  nop
    ctx->pc = 0x270d98u;
    // NOP
label_270d9c:
    // 0x270d9c: 0x0  nop
    ctx->pc = 0x270d9cu;
    // NOP
label_270da0:
    // 0x270da0: 0x6e7c  dsll32      $t5, $zero, 25
    ctx->pc = 0x270da0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) << (32 + 25));
label_270da4:
    // 0x270da4: 0xa4a0  .word       0x0000A4A0                   # add         $s4, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270da4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_270da8:
    // 0x270da8: 0x0  nop
    ctx->pc = 0x270da8u;
    // NOP
label_270dac:
    // 0x270dac: 0x0  nop
    ctx->pc = 0x270dacu;
    // NOP
label_270db0:
    // 0x270db0: 0x6e91  .word       0x00006E91                   # mthi        $zero # 00006E80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270db0u;
    ctx->hi = GPR_U64(ctx, 0);
label_270db4:
    // 0x270db4: 0xb130  tge         $zero, $zero, 708
    ctx->pc = 0x270db4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270db8:
    // 0x270db8: 0x0  nop
    ctx->pc = 0x270db8u;
    // NOP
label_270dbc:
    // 0x270dbc: 0x0  nop
    ctx->pc = 0x270dbcu;
    // NOP
label_270dc0:
    // 0x270dc0: 0x6ea8  .word       0x00006EA8                   # mfsa        $t5 # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x270dc0u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_270dc4:
    // 0x270dc4: 0x5830  tge         $zero, $zero, 352
    ctx->pc = 0x270dc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270dc8:
    // 0x270dc8: 0x0  nop
    ctx->pc = 0x270dc8u;
    // NOP
label_270dcc:
    // 0x270dcc: 0x0  nop
    ctx->pc = 0x270dccu;
    // NOP
label_270dd0:
    // 0x270dd0: 0x6eb4  teq         $zero, $zero, 442
    ctx->pc = 0x270dd0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270dd4:
    // 0x270dd4: 0xed60  .word       0x0000ED60                   # add         $sp, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270dd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_270dd8:
    // 0x270dd8: 0x0  nop
    ctx->pc = 0x270dd8u;
    // NOP
label_270ddc:
    // 0x270ddc: 0x0  nop
    ctx->pc = 0x270ddcu;
    // NOP
label_270de0:
    // 0x270de0: 0x6ed2  .word       0x00006ED2                   # mflo        $t5 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270de0u;
    SET_GPR_U64(ctx, 13, ctx->lo);
label_270de4:
    // 0x270de4: 0xe1e0  .word       0x0000E1E0                   # add         $gp, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270de4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_270de8:
    // 0x270de8: 0x0  nop
    ctx->pc = 0x270de8u;
    // NOP
label_270dec:
    // 0x270dec: 0x0  nop
    ctx->pc = 0x270decu;
    // NOP
label_270df0:
    // 0x270df0: 0x6eef  .word       0x00006EEF                   # dsubu       $t5, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270df0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_270df4:
    // 0x270df4: 0xc720  .word       0x0000C720                   # add         $t8, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270df4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_270df8:
    // 0x270df8: 0x0  nop
    ctx->pc = 0x270df8u;
    // NOP
label_270dfc:
    // 0x270dfc: 0x0  nop
    ctx->pc = 0x270dfcu;
    // NOP
label_270e00:
    // 0x270e00: 0x6f08  .word       0x00006F08                   # jr          $zero # 00006F00 <InstrIdType: CPU_SPECIAL>
label_270e04:
    if (ctx->pc == 0x270E04u) {
        ctx->pc = 0x270E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E00u;
        // 0x270e04: 0xd0c0  sll         $k0, $zero, 3 (Delay Slot)
        SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270E08u;
        goto label_270e08;
    }
    ctx->pc = 0x270E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x270E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E00u;
        // 0x270e04: 0xd0c0  sll         $k0, $zero, 3 (Delay Slot)
        SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270E00u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x270E08u;
label_270e08:
    // 0x270e08: 0x0  nop
    ctx->pc = 0x270e08u;
    // NOP
label_270e0c:
    // 0x270e0c: 0x0  nop
    ctx->pc = 0x270e0cu;
    // NOP
label_270e10:
    // 0x270e10: 0x6f23  .word       0x00006F23                   # negu        $t5, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270e10u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_270e14:
    // 0x270e14: 0x110c0  sll         $v0, $at, 3
    ctx->pc = 0x270e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), 3));
label_270e18:
    // 0x270e18: 0x0  nop
    ctx->pc = 0x270e18u;
    // NOP
label_270e1c:
    // 0x270e1c: 0x0  nop
    ctx->pc = 0x270e1cu;
    // NOP
label_270e20:
    // 0x270e20: 0x6f46  .word       0x00006F46                   # srlv        $t5, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270e20u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_270e24:
    // 0x270e24: 0xd750  .word       0x0000D750                   # mfhi        $k0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270e24u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_270e28:
    // 0x270e28: 0x0  nop
    ctx->pc = 0x270e28u;
    // NOP
label_270e2c:
    // 0x270e2c: 0x0  nop
    ctx->pc = 0x270e2cu;
    // NOP
label_270e30:
    // 0x270e30: 0x6f61  .word       0x00006F61                   # addu        $t5, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270e30u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_270e34:
    // 0x270e34: 0x8be0  .word       0x00008BE0                   # add         $s1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270e34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_270e38:
    // 0x270e38: 0x0  nop
    ctx->pc = 0x270e38u;
    // NOP
label_270e3c:
    // 0x270e3c: 0x0  nop
    ctx->pc = 0x270e3cu;
    // NOP
label_270e40:
    // 0x270e40: 0x6f73  tltu        $zero, $zero, 445
    ctx->pc = 0x270e40u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270e44:
    // 0x270e44: 0xb960  .word       0x0000B960                   # add         $s7, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270e44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_270e48:
    // 0x270e48: 0x0  nop
    ctx->pc = 0x270e48u;
    // NOP
label_270e4c:
    // 0x270e4c: 0x0  nop
    ctx->pc = 0x270e4cu;
    // NOP
label_270e50:
    // 0x270e50: 0x6f8b  .word       0x00006F8B                   # movn        $t5, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270e50u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
label_270e54:
    // 0x270e54: 0xeca0  .word       0x0000ECA0                   # add         $sp, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270e54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_270e58:
    // 0x270e58: 0x0  nop
    ctx->pc = 0x270e58u;
    // NOP
label_270e5c:
    // 0x270e5c: 0x0  nop
    ctx->pc = 0x270e5cu;
    // NOP
label_270e60:
    // 0x270e60: 0x6fa9  .word       0x00006FA9                   # mtsa        $zero # 00006F80 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x270e60u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_270e64:
    // 0x270e64: 0xe490  .word       0x0000E490                   # mfhi        $gp # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270e64u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_270e68:
    // 0x270e68: 0x0  nop
    ctx->pc = 0x270e68u;
    // NOP
label_270e6c:
    // 0x270e6c: 0x0  nop
    ctx->pc = 0x270e6cu;
    // NOP
label_270e70:
    // 0x270e70: 0x6fc6  .word       0x00006FC6                   # srlv        $t5, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270e70u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_270e74:
    // 0x270e74: 0xef00  sll         $sp, $zero, 28
    ctx->pc = 0x270e74u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_270e78:
    // 0x270e78: 0x0  nop
    ctx->pc = 0x270e78u;
    // NOP
label_270e7c:
    // 0x270e7c: 0x0  nop
    ctx->pc = 0x270e7cu;
    // NOP
label_270e80:
    // 0x270e80: 0x6fe4  .word       0x00006FE4                   # and         $t5, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270e80u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_270e84:
    // 0x270e84: 0x11110  .word       0x00011110                   # mfhi        $v0 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270e84u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_270e88:
    // 0x270e88: 0x0  nop
    ctx->pc = 0x270e88u;
    // NOP
label_270e8c:
    // 0x270e8c: 0x0  nop
    ctx->pc = 0x270e8cu;
    // NOP
label_270e90:
    // 0x270e90: 0x7007  srav        $t6, $zero, $zero
    ctx->pc = 0x270e90u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_270e94:
    // 0x270e94: 0xec10  .word       0x0000EC10                   # mfhi        $sp # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270e94u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_270e98:
    // 0x270e98: 0x0  nop
    ctx->pc = 0x270e98u;
    // NOP
label_270e9c:
    // 0x270e9c: 0x0  nop
    ctx->pc = 0x270e9cu;
    // NOP
label_270ea0:
    // 0x270ea0: 0x7025  move        $t6, $zero
    ctx->pc = 0x270ea0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_270ea4:
    // 0x270ea4: 0x9cc0  sll         $s3, $zero, 19
    ctx->pc = 0x270ea4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_270ea8:
    // 0x270ea8: 0x0  nop
    ctx->pc = 0x270ea8u;
    // NOP
label_270eac:
    // 0x270eac: 0x0  nop
    ctx->pc = 0x270eacu;
    // NOP
label_270eb0:
    // 0x270eb0: 0x7039  .word       0x00007039                   # INVALID     $zero, $zero, 0x7039 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270eb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x270EB0 raw=0x00007039"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270eb4:
    // 0x270eb4: 0x10700  sll         $zero, $at, 28
    ctx->pc = 0x270eb4u;
    
label_270eb8:
    // 0x270eb8: 0x0  nop
    ctx->pc = 0x270eb8u;
    // NOP
label_270ebc:
    // 0x270ebc: 0x0  nop
    ctx->pc = 0x270ebcu;
    // NOP
label_270ec0:
    // 0x270ec0: 0x705a  .word       0x0000705A                   # div         $t6, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270ec0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_270ec4:
    // 0x270ec4: 0xf760  .word       0x0000F760                   # add         $fp, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270ec4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_270ec8:
    // 0x270ec8: 0x0  nop
    ctx->pc = 0x270ec8u;
    // NOP
label_270ecc:
    // 0x270ecc: 0x0  nop
    ctx->pc = 0x270eccu;
    // NOP
label_270ed0:
    // 0x270ed0: 0x7079  .word       0x00007079                   # INVALID     $zero, $zero, 0x7079 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270ed0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x270ED0 raw=0x00007079"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270ed4:
    // 0x270ed4: 0x104d0  .word       0x000104D0                   # mfhi        $zero # 000104C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270ed4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_270ed8:
    // 0x270ed8: 0x0  nop
    ctx->pc = 0x270ed8u;
    // NOP
label_270edc:
    // 0x270edc: 0x0  nop
    ctx->pc = 0x270edcu;
    // NOP
label_270ee0:
    // 0x270ee0: 0x709a  .word       0x0000709A                   # div         $t6, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270ee0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_270ee4:
    // 0x270ee4: 0xcfe0  .word       0x0000CFE0                   # add         $t9, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270ee4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_270ee8:
    // 0x270ee8: 0x0  nop
    ctx->pc = 0x270ee8u;
    // NOP
label_270eec:
    // 0x270eec: 0x0  nop
    ctx->pc = 0x270eecu;
    // NOP
label_270ef0:
    // 0x270ef0: 0x70b4  teq         $zero, $zero, 450
    ctx->pc = 0x270ef0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270ef4:
    // 0x270ef4: 0xfba0  .word       0x0000FBA0                   # add         $ra, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270ef4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_270ef8:
    // 0x270ef8: 0x0  nop
    ctx->pc = 0x270ef8u;
    // NOP
label_270efc:
    // 0x270efc: 0x0  nop
    ctx->pc = 0x270efcu;
    // NOP
label_270f00:
    // 0x270f00: 0x70d4  .word       0x000070D4                   # dsllv       $t6, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270f00u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_270f04:
    // 0x270f04: 0xc8d0  .word       0x0000C8D0                   # mfhi        $t9 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270f04u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_270f08:
    // 0x270f08: 0x0  nop
    ctx->pc = 0x270f08u;
    // NOP
label_270f0c:
    // 0x270f0c: 0x0  nop
    ctx->pc = 0x270f0cu;
    // NOP
label_270f10:
    // 0x270f10: 0x70ee  .word       0x000070EE                   # dsub        $t6, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270f10u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_270f14:
    // 0x270f14: 0xe4c0  sll         $gp, $zero, 19
    ctx->pc = 0x270f14u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_270f18:
    // 0x270f18: 0x0  nop
    ctx->pc = 0x270f18u;
    // NOP
label_270f1c:
    // 0x270f1c: 0x0  nop
    ctx->pc = 0x270f1cu;
    // NOP
label_270f20:
    // 0x270f20: 0x710b  .word       0x0000710B                   # movn        $t6, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270f20u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 0));
label_270f24:
    // 0x270f24: 0xfd90  .word       0x0000FD90                   # mfhi        $ra # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270f24u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_270f28:
    // 0x270f28: 0x0  nop
    ctx->pc = 0x270f28u;
    // NOP
label_270f2c:
    // 0x270f2c: 0x0  nop
    ctx->pc = 0x270f2cu;
    // NOP
label_270f30:
    // 0x270f30: 0x712b  .word       0x0000712B                   # sltu        $t6, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270f30u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_270f34:
    // 0x270f34: 0xed50  .word       0x0000ED50                   # mfhi        $sp # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270f34u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_270f38:
    // 0x270f38: 0x0  nop
    ctx->pc = 0x270f38u;
    // NOP
label_270f3c:
    // 0x270f3c: 0x0  nop
    ctx->pc = 0x270f3cu;
    // NOP
label_270f40:
    // 0x270f40: 0x7149  .word       0x00007149                   # jalr        $t6, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
label_270f44:
    if (ctx->pc == 0x270F44u) {
        ctx->pc = 0x270F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270F40u;
        // 0x270f44: 0xcf50  .word       0x0000CF50                   # mfhi        $t9 # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 25, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x270F48u;
        goto label_270f48;
    }
    ctx->pc = 0x270F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 14, 0x270F48u);
        ctx->pc = 0x270F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270F40u;
        // 0x270f44: 0xcf50  .word       0x0000CF50                   # mfhi        $t9 # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 25, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270F40u, 0x270F48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x270F48u;
label_270f48:
    // 0x270f48: 0x0  nop
    ctx->pc = 0x270f48u;
    // NOP
label_270f4c:
    // 0x270f4c: 0x0  nop
    ctx->pc = 0x270f4cu;
    // NOP
label_270f50:
    // 0x270f50: 0x7163  .word       0x00007163                   # negu        $t6, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270f50u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_270f54:
    // 0x270f54: 0xdd00  sll         $k1, $zero, 20
    ctx->pc = 0x270f54u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_270f58:
    // 0x270f58: 0x0  nop
    ctx->pc = 0x270f58u;
    // NOP
label_270f5c:
    // 0x270f5c: 0x0  nop
    ctx->pc = 0x270f5cu;
    // NOP
label_270f60:
    // 0x270f60: 0x717f  dsra32      $t6, $zero, 5
    ctx->pc = 0x270f60u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 0) >> (32 + 5));
label_270f64:
    // 0x270f64: 0xd6c0  sll         $k0, $zero, 27
    ctx->pc = 0x270f64u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_270f68:
    // 0x270f68: 0x0  nop
    ctx->pc = 0x270f68u;
    // NOP
label_270f6c:
    // 0x270f6c: 0x0  nop
    ctx->pc = 0x270f6cu;
    // NOP
label_270f70:
    // 0x270f70: 0x719a  .word       0x0000719A                   # div         $t6, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270f70u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_270f74:
    // 0x270f74: 0x8760  .word       0x00008760                   # add         $s0, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270f74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_270f78:
    // 0x270f78: 0x0  nop
    ctx->pc = 0x270f78u;
    // NOP
label_270f7c:
    // 0x270f7c: 0x0  nop
    ctx->pc = 0x270f7cu;
    // NOP
label_270f80:
    // 0x270f80: 0x71ab  .word       0x000071AB                   # sltu        $t6, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270f80u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_270f84:
    // 0x270f84: 0x8d10  .word       0x00008D10                   # mfhi        $s1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270f84u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_270f88:
    // 0x270f88: 0x0  nop
    ctx->pc = 0x270f88u;
    // NOP
label_270f8c:
    // 0x270f8c: 0x0  nop
    ctx->pc = 0x270f8cu;
    // NOP
label_270f90:
    // 0x270f90: 0x71bd  .word       0x000071BD                   # INVALID     $zero, $zero, 0x71BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270f90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x270F90 raw=0x000071BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270f94:
    // 0x270f94: 0x12030  tge         $zero, $at, 128
    ctx->pc = 0x270f94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_270f98:
    // 0x270f98: 0x0  nop
    ctx->pc = 0x270f98u;
    // NOP
label_270f9c:
    // 0x270f9c: 0x0  nop
    ctx->pc = 0x270f9cu;
    // NOP
label_270fa0:
    // 0x270fa0: 0x71e2  .word       0x000071E2                   # neg         $t6, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270fa0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_270fa4:
    // 0x270fa4: 0x9b00  sll         $s3, $zero, 12
    ctx->pc = 0x270fa4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_270fa8:
    // 0x270fa8: 0x0  nop
    ctx->pc = 0x270fa8u;
    // NOP
label_270fac:
    // 0x270fac: 0x0  nop
    ctx->pc = 0x270facu;
    // NOP
label_270fb0:
    // 0x270fb0: 0x71f6  tne         $zero, $zero, 455
    ctx->pc = 0x270fb0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270fb4:
    // 0x270fb4: 0x9ba0  .word       0x00009BA0                   # add         $s3, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270fb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_270fb8:
    // 0x270fb8: 0x0  nop
    ctx->pc = 0x270fb8u;
    // NOP
label_270fbc:
    // 0x270fbc: 0x0  nop
    ctx->pc = 0x270fbcu;
    // NOP
label_270fc0:
    // 0x270fc0: 0x720a  .word       0x0000720A                   # movz        $t6, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270fc0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 0));
label_270fc4:
    // 0x270fc4: 0xa960  .word       0x0000A960                   # add         $s5, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270fc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_270fc8:
    // 0x270fc8: 0x0  nop
    ctx->pc = 0x270fc8u;
    // NOP
label_270fcc:
    // 0x270fcc: 0x0  nop
    ctx->pc = 0x270fccu;
    // NOP
label_270fd0:
    // 0x270fd0: 0x7220  .word       0x00007220                   # add         $t6, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270fd0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_270fd4:
    // 0x270fd4: 0x9060  .word       0x00009060                   # add         $s2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270fd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_270fd8:
    // 0x270fd8: 0x0  nop
    ctx->pc = 0x270fd8u;
    // NOP
label_270fdc:
    // 0x270fdc: 0x0  nop
    ctx->pc = 0x270fdcu;
    // NOP
label_270fe0:
    // 0x270fe0: 0x7233  tltu        $zero, $zero, 456
    ctx->pc = 0x270fe0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270fe4:
    // 0x270fe4: 0xd950  .word       0x0000D950                   # mfhi        $k1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270fe4u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_270fe8:
    // 0x270fe8: 0x0  nop
    ctx->pc = 0x270fe8u;
    // NOP
label_270fec:
    // 0x270fec: 0x0  nop
    ctx->pc = 0x270fecu;
    // NOP
label_270ff0:
    // 0x270ff0: 0x724f  .word       0x0000724F                   # sync # 00007000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270ff0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_270ff4:
    // 0x270ff4: 0xfa70  tge         $zero, $zero, 1001
    ctx->pc = 0x270ff4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270ff8:
    // 0x270ff8: 0x0  nop
    ctx->pc = 0x270ff8u;
    // NOP
label_270ffc:
    // 0x270ffc: 0x0  nop
    ctx->pc = 0x270ffcu;
    // NOP
label_271000:
    // 0x271000: 0x726f  .word       0x0000726F                   # dsubu       $t6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271000u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_271004:
    // 0x271004: 0xcbe0  .word       0x0000CBE0                   # add         $t9, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271004u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_271008:
    // 0x271008: 0x0  nop
    ctx->pc = 0x271008u;
    // NOP
label_27100c:
    // 0x27100c: 0x0  nop
    ctx->pc = 0x27100cu;
    // NOP
label_271010:
    // 0x271010: 0x7289  .word       0x00007289                   # jalr        $t6, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
label_271014:
    if (ctx->pc == 0x271014u) {
        ctx->pc = 0x271014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271010u;
        // 0x271014: 0xd550  .word       0x0000D550                   # mfhi        $k0 # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 26, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x271018u;
        goto label_271018;
    }
    ctx->pc = 0x271010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 14, 0x271018u);
        ctx->pc = 0x271014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271010u;
        // 0x271014: 0xd550  .word       0x0000D550                   # mfhi        $k0 # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 26, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271010u, 0x271018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x271018u;
label_271018:
    // 0x271018: 0x0  nop
    ctx->pc = 0x271018u;
    // NOP
label_27101c:
    // 0x27101c: 0x0  nop
    ctx->pc = 0x27101cu;
    // NOP
label_271020:
    // 0x271020: 0x72a4  .word       0x000072A4                   # and         $t6, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271020u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_271024:
    // 0x271024: 0xb970  tge         $zero, $zero, 741
    ctx->pc = 0x271024u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271028:
    // 0x271028: 0x0  nop
    ctx->pc = 0x271028u;
    // NOP
label_27102c:
    // 0x27102c: 0x0  nop
    ctx->pc = 0x27102cu;
    // NOP
label_271030:
    // 0x271030: 0x72bc  dsll32      $t6, $zero, 10
    ctx->pc = 0x271030u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) << (32 + 10));
label_271034:
    // 0x271034: 0xdd50  .word       0x0000DD50                   # mfhi        $k1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271034u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_271038:
    // 0x271038: 0x0  nop
    ctx->pc = 0x271038u;
    // NOP
label_27103c:
    // 0x27103c: 0x0  nop
    ctx->pc = 0x27103cu;
    // NOP
label_271040:
    // 0x271040: 0x72d8  .word       0x000072D8                   # mult        $t6, $zero, $zero # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x271040u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_271044:
    // 0x271044: 0xb950  .word       0x0000B950                   # mfhi        $s7 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271044u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_271048:
    // 0x271048: 0x0  nop
    ctx->pc = 0x271048u;
    // NOP
label_27104c:
    // 0x27104c: 0x0  nop
    ctx->pc = 0x27104cu;
    // NOP
label_271050:
    // 0x271050: 0x72f0  tge         $zero, $zero, 459
    ctx->pc = 0x271050u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271054:
    // 0x271054: 0xa4f0  tge         $zero, $zero, 659
    ctx->pc = 0x271054u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271058:
    // 0x271058: 0x0  nop
    ctx->pc = 0x271058u;
    // NOP
label_27105c:
    // 0x27105c: 0x0  nop
    ctx->pc = 0x27105cu;
    // NOP
label_271060:
    // 0x271060: 0x7305  .word       0x00007305                   # INVALID     $zero, $zero, 0x7305 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271060u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x271060 raw=0x00007305"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_271064:
    // 0x271064: 0xa310  .word       0x0000A310                   # mfhi        $s4 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271064u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_271068:
    // 0x271068: 0x0  nop
    ctx->pc = 0x271068u;
    // NOP
label_27106c:
    // 0x27106c: 0x0  nop
    ctx->pc = 0x27106cu;
    // NOP
label_271070:
    // 0x271070: 0x731a  .word       0x0000731A                   # div         $t6, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271070u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_271074:
    // 0x271074: 0xadf0  tge         $zero, $zero, 695
    ctx->pc = 0x271074u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271078:
    // 0x271078: 0x0  nop
    ctx->pc = 0x271078u;
    // NOP
label_27107c:
    // 0x27107c: 0x0  nop
    ctx->pc = 0x27107cu;
    // NOP
label_271080:
    // 0x271080: 0x7330  tge         $zero, $zero, 460
    ctx->pc = 0x271080u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271084:
    // 0x271084: 0xc940  sll         $t9, $zero, 5
    ctx->pc = 0x271084u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_271088:
    // 0x271088: 0x0  nop
    ctx->pc = 0x271088u;
    // NOP
label_27108c:
    // 0x27108c: 0x0  nop
    ctx->pc = 0x27108cu;
    // NOP
label_271090:
    // 0x271090: 0x734a  .word       0x0000734A                   # movz        $t6, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271090u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 0));
label_271094:
    // 0x271094: 0xed20  .word       0x0000ED20                   # add         $sp, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271094u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_271098:
    // 0x271098: 0x0  nop
    ctx->pc = 0x271098u;
    // NOP
label_27109c:
    // 0x27109c: 0x0  nop
    ctx->pc = 0x27109cu;
    // NOP
label_2710a0:
    // 0x2710a0: 0x7368  .word       0x00007368                   # mfsa        $t6 # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2710a0u;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_2710a4:
    // 0x2710a4: 0x88c0  sll         $s1, $zero, 3
    ctx->pc = 0x2710a4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_2710a8:
    // 0x2710a8: 0x0  nop
    ctx->pc = 0x2710a8u;
    // NOP
label_2710ac:
    // 0x2710ac: 0x0  nop
    ctx->pc = 0x2710acu;
    // NOP
label_2710b0:
    // 0x2710b0: 0x737a  dsrl        $t6, $zero, 13
    ctx->pc = 0x2710b0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) >> 13);
label_2710b4:
    // 0x2710b4: 0xdbe0  .word       0x0000DBE0                   # add         $k1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2710b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_2710b8:
    // 0x2710b8: 0x0  nop
    ctx->pc = 0x2710b8u;
    // NOP
label_2710bc:
    // 0x2710bc: 0x0  nop
    ctx->pc = 0x2710bcu;
    // NOP
label_2710c0:
    // 0x2710c0: 0x7396  .word       0x00007396                   # dsrlv       $t6, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2710c0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2710c4:
    // 0x2710c4: 0xade0  .word       0x0000ADE0                   # add         $s5, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2710c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_2710c8:
    // 0x2710c8: 0x0  nop
    ctx->pc = 0x2710c8u;
    // NOP
label_2710cc:
    // 0x2710cc: 0x0  nop
    ctx->pc = 0x2710ccu;
    // NOP
label_2710d0:
    // 0x2710d0: 0x73ac  .word       0x000073AC                   # dadd        $t6, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2710d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_2710d4:
    // 0x2710d4: 0xafe0  .word       0x0000AFE0                   # add         $s5, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2710d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_2710d8:
    // 0x2710d8: 0x0  nop
    ctx->pc = 0x2710d8u;
    // NOP
label_2710dc:
    // 0x2710dc: 0x0  nop
    ctx->pc = 0x2710dcu;
    // NOP
label_2710e0:
    // 0x2710e0: 0x73c2  srl         $t6, $zero, 15
    ctx->pc = 0x2710e0u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 0), 15));
label_2710e4:
    // 0x2710e4: 0xdb60  .word       0x0000DB60                   # add         $k1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2710e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_2710e8:
    // 0x2710e8: 0x0  nop
    ctx->pc = 0x2710e8u;
    // NOP
label_2710ec:
    // 0x2710ec: 0x0  nop
    ctx->pc = 0x2710ecu;
    // NOP
label_2710f0:
    // 0x2710f0: 0x73de  .word       0x000073DE                   # ddiv        $t6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2710f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2710F0 raw=0x000073DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2710f4:
    // 0x2710f4: 0xade0  .word       0x0000ADE0                   # add         $s5, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2710f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_2710f8:
    // 0x2710f8: 0x0  nop
    ctx->pc = 0x2710f8u;
    // NOP
label_2710fc:
    // 0x2710fc: 0x0  nop
    ctx->pc = 0x2710fcu;
    // NOP
label_271100:
    // 0x271100: 0x73f4  teq         $zero, $zero, 463
    ctx->pc = 0x271100u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271104:
    // 0x271104: 0xe990  .word       0x0000E990                   # mfhi        $sp # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271104u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_271108:
    // 0x271108: 0x0  nop
    ctx->pc = 0x271108u;
    // NOP
label_27110c:
    // 0x27110c: 0x0  nop
    ctx->pc = 0x27110cu;
    // NOP
label_271110:
    // 0x271110: 0x7412  .word       0x00007412                   # mflo        $t6 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271110u;
    SET_GPR_U64(ctx, 14, ctx->lo);
label_271114:
    // 0x271114: 0xfc80  sll         $ra, $zero, 18
    ctx->pc = 0x271114u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_271118:
    // 0x271118: 0x0  nop
    ctx->pc = 0x271118u;
    // NOP
label_27111c:
    // 0x27111c: 0x0  nop
    ctx->pc = 0x27111cu;
    // NOP
label_271120:
    // 0x271120: 0x7432  tlt         $zero, $zero, 464
    ctx->pc = 0x271120u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271124:
    // 0x271124: 0xb7f0  tge         $zero, $zero, 735
    ctx->pc = 0x271124u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271128:
    // 0x271128: 0x0  nop
    ctx->pc = 0x271128u;
    // NOP
label_27112c:
    // 0x27112c: 0x0  nop
    ctx->pc = 0x27112cu;
    // NOP
label_271130:
    // 0x271130: 0x7449  .word       0x00007449                   # jalr        $t6, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
label_271134:
    if (ctx->pc == 0x271134u) {
        ctx->pc = 0x271134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271130u;
        // 0x271134: 0xc0c0  sll         $t8, $zero, 3 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271138u;
        goto label_271138;
    }
    ctx->pc = 0x271130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 14, 0x271138u);
        ctx->pc = 0x271134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271130u;
        // 0x271134: 0xc0c0  sll         $t8, $zero, 3 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271130u, 0x271138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x271138u;
label_271138:
    // 0x271138: 0x0  nop
    ctx->pc = 0x271138u;
    // NOP
label_27113c:
    // 0x27113c: 0x0  nop
    ctx->pc = 0x27113cu;
    // NOP
label_271140:
    // 0x271140: 0x7462  .word       0x00007462                   # neg         $t6, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271140u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_271144:
    // 0x271144: 0x13390  .word       0x00013390                   # mfhi        $a2 # 00010380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271144u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_271148:
    // 0x271148: 0x0  nop
    ctx->pc = 0x271148u;
    // NOP
label_27114c:
    // 0x27114c: 0x0  nop
    ctx->pc = 0x27114cu;
    // NOP
label_271150:
    // 0x271150: 0x7489  .word       0x00007489                   # jalr        $t6, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
label_271154:
    if (ctx->pc == 0x271154u) {
        ctx->pc = 0x271154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271150u;
        // 0x271154: 0xca30  tge         $zero, $zero, 808 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x271158u;
        goto label_271158;
    }
    ctx->pc = 0x271150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 14, 0x271158u);
        ctx->pc = 0x271154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271150u;
        // 0x271154: 0xca30  tge         $zero, $zero, 808 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271150u, 0x271158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x271158u;
label_271158:
    // 0x271158: 0x0  nop
    ctx->pc = 0x271158u;
    // NOP
label_27115c:
    // 0x27115c: 0x0  nop
    ctx->pc = 0x27115cu;
    // NOP
label_271160:
    // 0x271160: 0x74a3  .word       0x000074A3                   # negu        $t6, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271160u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_271164:
    // 0x271164: 0xc280  sll         $t8, $zero, 10
    ctx->pc = 0x271164u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_271168:
    // 0x271168: 0x0  nop
    ctx->pc = 0x271168u;
    // NOP
label_27116c:
    // 0x27116c: 0x0  nop
    ctx->pc = 0x27116cu;
    // NOP
label_271170:
    // 0x271170: 0x74bc  dsll32      $t6, $zero, 18
    ctx->pc = 0x271170u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) << (32 + 18));
label_271174:
    // 0x271174: 0xa550  .word       0x0000A550                   # mfhi        $s4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271174u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_271178:
    // 0x271178: 0x0  nop
    ctx->pc = 0x271178u;
    // NOP
label_27117c:
    // 0x27117c: 0x0  nop
    ctx->pc = 0x27117cu;
    // NOP
label_271180:
    // 0x271180: 0x74d1  .word       0x000074D1                   # mthi        $zero # 000074C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271180u;
    ctx->hi = GPR_U64(ctx, 0);
label_271184:
    // 0x271184: 0xf030  tge         $zero, $zero, 960
    ctx->pc = 0x271184u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271188:
    // 0x271188: 0x0  nop
    ctx->pc = 0x271188u;
    // NOP
label_27118c:
    // 0x27118c: 0x0  nop
    ctx->pc = 0x27118cu;
    // NOP
label_271190:
    // 0x271190: 0x74f0  tge         $zero, $zero, 467
    ctx->pc = 0x271190u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271194:
    // 0x271194: 0xd440  sll         $k0, $zero, 17
    ctx->pc = 0x271194u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_271198:
    // 0x271198: 0x0  nop
    ctx->pc = 0x271198u;
    // NOP
label_27119c:
    // 0x27119c: 0x0  nop
    ctx->pc = 0x27119cu;
    // NOP
label_2711a0:
    // 0x2711a0: 0x750b  .word       0x0000750B                   # movn        $t6, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2711a0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 0));
label_2711a4:
    // 0x2711a4: 0xc140  sll         $t8, $zero, 5
    ctx->pc = 0x2711a4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_2711a8:
    // 0x2711a8: 0x0  nop
    ctx->pc = 0x2711a8u;
    // NOP
label_2711ac:
    // 0x2711ac: 0x0  nop
    ctx->pc = 0x2711acu;
    // NOP
label_2711b0:
    // 0x2711b0: 0x7524  .word       0x00007524                   # and         $t6, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2711b0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2711b4:
    // 0x2711b4: 0x10320  .word       0x00010320                   # add         $zero, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2711b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2711b8:
    // 0x2711b8: 0x0  nop
    ctx->pc = 0x2711b8u;
    // NOP
label_2711bc:
    // 0x2711bc: 0x0  nop
    ctx->pc = 0x2711bcu;
    // NOP
label_2711c0:
    // 0x2711c0: 0x7545  .word       0x00007545                   # INVALID     $zero, $zero, 0x7545 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2711c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2711C0 raw=0x00007545"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2711c4:
    // 0x2711c4: 0x103b0  tge         $zero, $at, 14
    ctx->pc = 0x2711c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2711c8:
    // 0x2711c8: 0x0  nop
    ctx->pc = 0x2711c8u;
    // NOP
label_2711cc:
    // 0x2711cc: 0x0  nop
    ctx->pc = 0x2711ccu;
    // NOP
label_2711d0:
    // 0x2711d0: 0x7566  .word       0x00007566                   # xor         $t6, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2711d0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2711d4:
    // 0x2711d4: 0x11f50  .word       0x00011F50                   # mfhi        $v1 # 00010740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2711d4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2711d8:
    // 0x2711d8: 0x0  nop
    ctx->pc = 0x2711d8u;
    // NOP
label_2711dc:
    // 0x2711dc: 0x0  nop
    ctx->pc = 0x2711dcu;
    // NOP
label_2711e0:
    // 0x2711e0: 0x758a  .word       0x0000758A                   # movz        $t6, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2711e0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 0));
label_2711e4:
    // 0x2711e4: 0xbe90  .word       0x0000BE90                   # mfhi        $s7 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2711e4u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_2711e8:
    // 0x2711e8: 0x0  nop
    ctx->pc = 0x2711e8u;
    // NOP
label_2711ec:
    // 0x2711ec: 0x0  nop
    ctx->pc = 0x2711ecu;
    // NOP
label_2711f0:
    // 0x2711f0: 0x75a2  .word       0x000075A2                   # neg         $t6, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2711f0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2711f4:
    // 0x2711f4: 0xf790  .word       0x0000F790                   # mfhi        $fp # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2711f4u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_2711f8:
    // 0x2711f8: 0x0  nop
    ctx->pc = 0x2711f8u;
    // NOP
label_2711fc:
    // 0x2711fc: 0x0  nop
    ctx->pc = 0x2711fcu;
    // NOP
label_271200:
    // 0x271200: 0x75c1  .word       0x000075C1                   # INVALID     $zero, $zero, 0x75C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271200u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x271200 raw=0x000075C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_271204:
    // 0x271204: 0xeac0  sll         $sp, $zero, 11
    ctx->pc = 0x271204u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_271208:
    // 0x271208: 0x0  nop
    ctx->pc = 0x271208u;
    // NOP
label_27120c:
    // 0x27120c: 0x0  nop
    ctx->pc = 0x27120cu;
    // NOP
label_271210:
    // 0x271210: 0x75df  .word       0x000075DF                   # ddivu       $t6, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271210u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x271210 raw=0x000075DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_271214:
    // 0x271214: 0xa160  .word       0x0000A160                   # add         $s4, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271214u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_271218:
    // 0x271218: 0x0  nop
    ctx->pc = 0x271218u;
    // NOP
label_27121c:
    // 0x27121c: 0x0  nop
    ctx->pc = 0x27121cu;
    // NOP
label_271220:
    // 0x271220: 0x75f4  teq         $zero, $zero, 471
    ctx->pc = 0x271220u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271224:
    // 0x271224: 0xbe20  .word       0x0000BE20                   # add         $s7, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271224u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_271228:
    // 0x271228: 0x0  nop
    ctx->pc = 0x271228u;
    // NOP
label_27122c:
    // 0x27122c: 0x0  nop
    ctx->pc = 0x27122cu;
    // NOP
label_271230:
    // 0x271230: 0x760c  syscall     472
    ctx->pc = 0x271230u;
    ctx->pc = 0x271234u;
runtime->handleSyscall(rdram, ctx, 0x1D8u);
label_271234:
    // 0x271234: 0xd950  .word       0x0000D950                   # mfhi        $k1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271234u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_271238:
    // 0x271238: 0x0  nop
    ctx->pc = 0x271238u;
    // NOP
label_27123c:
    // 0x27123c: 0x0  nop
    ctx->pc = 0x27123cu;
    // NOP
label_271240:
    // 0x271240: 0x7628  .word       0x00007628                   # mfsa        $t6 # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x271240u;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_271244:
    // 0x271244: 0xbb60  .word       0x0000BB60                   # add         $s7, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271244u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_271248:
    // 0x271248: 0x0  nop
    ctx->pc = 0x271248u;
    // NOP
label_27124c:
    // 0x27124c: 0x0  nop
    ctx->pc = 0x27124cu;
    // NOP
label_271250:
    // 0x271250: 0x7640  sll         $t6, $zero, 25
    ctx->pc = 0x271250u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_271254:
    // 0x271254: 0xabe0  .word       0x0000ABE0                   # add         $s5, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271254u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
    ctx->pc = 0x271258u;
    return;
}

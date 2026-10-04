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


void entry_00254d38_part60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x271a28u: goto label_271a28;
        case 0x271a2cu: goto label_271a2c;
        case 0x271a30u: goto label_271a30;
        case 0x271a34u: goto label_271a34;
        case 0x271a38u: goto label_271a38;
        case 0x271a3cu: goto label_271a3c;
        case 0x271a40u: goto label_271a40;
        case 0x271a44u: goto label_271a44;
        case 0x271a48u: goto label_271a48;
        case 0x271a4cu: goto label_271a4c;
        case 0x271a50u: goto label_271a50;
        case 0x271a54u: goto label_271a54;
        case 0x271a58u: goto label_271a58;
        case 0x271a5cu: goto label_271a5c;
        case 0x271a60u: goto label_271a60;
        case 0x271a64u: goto label_271a64;
        case 0x271a68u: goto label_271a68;
        case 0x271a6cu: goto label_271a6c;
        case 0x271a70u: goto label_271a70;
        case 0x271a74u: goto label_271a74;
        case 0x271a78u: goto label_271a78;
        case 0x271a7cu: goto label_271a7c;
        case 0x271a80u: goto label_271a80;
        case 0x271a84u: goto label_271a84;
        case 0x271a88u: goto label_271a88;
        case 0x271a8cu: goto label_271a8c;
        case 0x271a90u: goto label_271a90;
        case 0x271a94u: goto label_271a94;
        case 0x271a98u: goto label_271a98;
        case 0x271a9cu: goto label_271a9c;
        case 0x271aa0u: goto label_271aa0;
        case 0x271aa4u: goto label_271aa4;
        case 0x271aa8u: goto label_271aa8;
        case 0x271aacu: goto label_271aac;
        case 0x271ab0u: goto label_271ab0;
        case 0x271ab4u: goto label_271ab4;
        case 0x271ab8u: goto label_271ab8;
        case 0x271abcu: goto label_271abc;
        case 0x271ac0u: goto label_271ac0;
        case 0x271ac4u: goto label_271ac4;
        case 0x271ac8u: goto label_271ac8;
        case 0x271accu: goto label_271acc;
        case 0x271ad0u: goto label_271ad0;
        case 0x271ad4u: goto label_271ad4;
        case 0x271ad8u: goto label_271ad8;
        case 0x271adcu: goto label_271adc;
        case 0x271ae0u: goto label_271ae0;
        case 0x271ae4u: goto label_271ae4;
        case 0x271ae8u: goto label_271ae8;
        case 0x271aecu: goto label_271aec;
        case 0x271af0u: goto label_271af0;
        case 0x271af4u: goto label_271af4;
        case 0x271af8u: goto label_271af8;
        case 0x271afcu: goto label_271afc;
        case 0x271b00u: goto label_271b00;
        case 0x271b04u: goto label_271b04;
        case 0x271b08u: goto label_271b08;
        case 0x271b0cu: goto label_271b0c;
        case 0x271b10u: goto label_271b10;
        case 0x271b14u: goto label_271b14;
        case 0x271b18u: goto label_271b18;
        case 0x271b1cu: goto label_271b1c;
        case 0x271b20u: goto label_271b20;
        case 0x271b24u: goto label_271b24;
        case 0x271b28u: goto label_271b28;
        case 0x271b2cu: goto label_271b2c;
        case 0x271b30u: goto label_271b30;
        case 0x271b34u: goto label_271b34;
        case 0x271b38u: goto label_271b38;
        case 0x271b3cu: goto label_271b3c;
        case 0x271b40u: goto label_271b40;
        case 0x271b44u: goto label_271b44;
        case 0x271b48u: goto label_271b48;
        case 0x271b4cu: goto label_271b4c;
        case 0x271b50u: goto label_271b50;
        case 0x271b54u: goto label_271b54;
        case 0x271b58u: goto label_271b58;
        case 0x271b5cu: goto label_271b5c;
        case 0x271b60u: goto label_271b60;
        case 0x271b64u: goto label_271b64;
        case 0x271b68u: goto label_271b68;
        case 0x271b6cu: goto label_271b6c;
        case 0x271b70u: goto label_271b70;
        case 0x271b74u: goto label_271b74;
        case 0x271b78u: goto label_271b78;
        case 0x271b7cu: goto label_271b7c;
        case 0x271b80u: goto label_271b80;
        case 0x271b84u: goto label_271b84;
        case 0x271b88u: goto label_271b88;
        case 0x271b8cu: goto label_271b8c;
        case 0x271b90u: goto label_271b90;
        case 0x271b94u: goto label_271b94;
        case 0x271b98u: goto label_271b98;
        case 0x271b9cu: goto label_271b9c;
        case 0x271ba0u: goto label_271ba0;
        case 0x271ba4u: goto label_271ba4;
        case 0x271ba8u: goto label_271ba8;
        case 0x271bacu: goto label_271bac;
        case 0x271bb0u: goto label_271bb0;
        case 0x271bb4u: goto label_271bb4;
        case 0x271bb8u: goto label_271bb8;
        case 0x271bbcu: goto label_271bbc;
        case 0x271bc0u: goto label_271bc0;
        case 0x271bc4u: goto label_271bc4;
        case 0x271bc8u: goto label_271bc8;
        case 0x271bccu: goto label_271bcc;
        case 0x271bd0u: goto label_271bd0;
        case 0x271bd4u: goto label_271bd4;
        case 0x271bd8u: goto label_271bd8;
        case 0x271bdcu: goto label_271bdc;
        case 0x271be0u: goto label_271be0;
        case 0x271be4u: goto label_271be4;
        case 0x271be8u: goto label_271be8;
        case 0x271becu: goto label_271bec;
        case 0x271bf0u: goto label_271bf0;
        case 0x271bf4u: goto label_271bf4;
        case 0x271bf8u: goto label_271bf8;
        case 0x271bfcu: goto label_271bfc;
        case 0x271c00u: goto label_271c00;
        case 0x271c04u: goto label_271c04;
        case 0x271c08u: goto label_271c08;
        case 0x271c0cu: goto label_271c0c;
        case 0x271c10u: goto label_271c10;
        case 0x271c14u: goto label_271c14;
        case 0x271c18u: goto label_271c18;
        case 0x271c1cu: goto label_271c1c;
        case 0x271c20u: goto label_271c20;
        case 0x271c24u: goto label_271c24;
        case 0x271c28u: goto label_271c28;
        case 0x271c2cu: goto label_271c2c;
        case 0x271c30u: goto label_271c30;
        case 0x271c34u: goto label_271c34;
        case 0x271c38u: goto label_271c38;
        case 0x271c3cu: goto label_271c3c;
        case 0x271c40u: goto label_271c40;
        case 0x271c44u: goto label_271c44;
        case 0x271c48u: goto label_271c48;
        case 0x271c4cu: goto label_271c4c;
        case 0x271c50u: goto label_271c50;
        case 0x271c54u: goto label_271c54;
        case 0x271c58u: goto label_271c58;
        case 0x271c5cu: goto label_271c5c;
        case 0x271c60u: goto label_271c60;
        case 0x271c64u: goto label_271c64;
        case 0x271c68u: goto label_271c68;
        case 0x271c6cu: goto label_271c6c;
        case 0x271c70u: goto label_271c70;
        case 0x271c74u: goto label_271c74;
        case 0x271c78u: goto label_271c78;
        case 0x271c7cu: goto label_271c7c;
        case 0x271c80u: goto label_271c80;
        case 0x271c84u: goto label_271c84;
        case 0x271c88u: goto label_271c88;
        case 0x271c8cu: goto label_271c8c;
        case 0x271c90u: goto label_271c90;
        case 0x271c94u: goto label_271c94;
        case 0x271c98u: goto label_271c98;
        case 0x271c9cu: goto label_271c9c;
        case 0x271ca0u: goto label_271ca0;
        case 0x271ca4u: goto label_271ca4;
        case 0x271ca8u: goto label_271ca8;
        case 0x271cacu: goto label_271cac;
        case 0x271cb0u: goto label_271cb0;
        case 0x271cb4u: goto label_271cb4;
        case 0x271cb8u: goto label_271cb8;
        case 0x271cbcu: goto label_271cbc;
        case 0x271cc0u: goto label_271cc0;
        case 0x271cc4u: goto label_271cc4;
        case 0x271cc8u: goto label_271cc8;
        case 0x271cccu: goto label_271ccc;
        case 0x271cd0u: goto label_271cd0;
        case 0x271cd4u: goto label_271cd4;
        case 0x271cd8u: goto label_271cd8;
        case 0x271cdcu: goto label_271cdc;
        case 0x271ce0u: goto label_271ce0;
        case 0x271ce4u: goto label_271ce4;
        case 0x271ce8u: goto label_271ce8;
        case 0x271cecu: goto label_271cec;
        case 0x271cf0u: goto label_271cf0;
        case 0x271cf4u: goto label_271cf4;
        case 0x271cf8u: goto label_271cf8;
        case 0x271cfcu: goto label_271cfc;
        case 0x271d00u: goto label_271d00;
        case 0x271d04u: goto label_271d04;
        case 0x271d08u: goto label_271d08;
        case 0x271d0cu: goto label_271d0c;
        case 0x271d10u: goto label_271d10;
        case 0x271d14u: goto label_271d14;
        case 0x271d18u: goto label_271d18;
        case 0x271d1cu: goto label_271d1c;
        case 0x271d20u: goto label_271d20;
        case 0x271d24u: goto label_271d24;
        case 0x271d28u: goto label_271d28;
        case 0x271d2cu: goto label_271d2c;
        case 0x271d30u: goto label_271d30;
        case 0x271d34u: goto label_271d34;
        case 0x271d38u: goto label_271d38;
        case 0x271d3cu: goto label_271d3c;
        case 0x271d40u: goto label_271d40;
        case 0x271d44u: goto label_271d44;
        case 0x271d48u: goto label_271d48;
        case 0x271d4cu: goto label_271d4c;
        case 0x271d50u: goto label_271d50;
        case 0x271d54u: goto label_271d54;
        case 0x271d58u: goto label_271d58;
        case 0x271d5cu: goto label_271d5c;
        case 0x271d60u: goto label_271d60;
        case 0x271d64u: goto label_271d64;
        case 0x271d68u: goto label_271d68;
        case 0x271d6cu: goto label_271d6c;
        case 0x271d70u: goto label_271d70;
        case 0x271d74u: goto label_271d74;
        case 0x271d78u: goto label_271d78;
        case 0x271d7cu: goto label_271d7c;
        case 0x271d80u: goto label_271d80;
        case 0x271d84u: goto label_271d84;
        case 0x271d88u: goto label_271d88;
        case 0x271d8cu: goto label_271d8c;
        case 0x271d90u: goto label_271d90;
        case 0x271d94u: goto label_271d94;
        case 0x271d98u: goto label_271d98;
        case 0x271d9cu: goto label_271d9c;
        case 0x271da0u: goto label_271da0;
        case 0x271da4u: goto label_271da4;
        case 0x271da8u: goto label_271da8;
        case 0x271dacu: goto label_271dac;
        case 0x271db0u: goto label_271db0;
        case 0x271db4u: goto label_271db4;
        case 0x271db8u: goto label_271db8;
        case 0x271dbcu: goto label_271dbc;
        case 0x271dc0u: goto label_271dc0;
        case 0x271dc4u: goto label_271dc4;
        case 0x271dc8u: goto label_271dc8;
        case 0x271dccu: goto label_271dcc;
        case 0x271dd0u: goto label_271dd0;
        case 0x271dd4u: goto label_271dd4;
        case 0x271dd8u: goto label_271dd8;
        case 0x271ddcu: goto label_271ddc;
        case 0x271de0u: goto label_271de0;
        case 0x271de4u: goto label_271de4;
        case 0x271de8u: goto label_271de8;
        case 0x271decu: goto label_271dec;
        case 0x271df0u: goto label_271df0;
        case 0x271df4u: goto label_271df4;
        case 0x271df8u: goto label_271df8;
        case 0x271dfcu: goto label_271dfc;
        case 0x271e00u: goto label_271e00;
        case 0x271e04u: goto label_271e04;
        case 0x271e08u: goto label_271e08;
        case 0x271e0cu: goto label_271e0c;
        case 0x271e10u: goto label_271e10;
        case 0x271e14u: goto label_271e14;
        case 0x271e18u: goto label_271e18;
        case 0x271e1cu: goto label_271e1c;
        case 0x271e20u: goto label_271e20;
        case 0x271e24u: goto label_271e24;
        case 0x271e28u: goto label_271e28;
        case 0x271e2cu: goto label_271e2c;
        case 0x271e30u: goto label_271e30;
        case 0x271e34u: goto label_271e34;
        case 0x271e38u: goto label_271e38;
        case 0x271e3cu: goto label_271e3c;
        case 0x271e40u: goto label_271e40;
        case 0x271e44u: goto label_271e44;
        case 0x271e48u: goto label_271e48;
        case 0x271e4cu: goto label_271e4c;
        case 0x271e50u: goto label_271e50;
        case 0x271e54u: goto label_271e54;
        case 0x271e58u: goto label_271e58;
        case 0x271e5cu: goto label_271e5c;
        case 0x271e60u: goto label_271e60;
        case 0x271e64u: goto label_271e64;
        case 0x271e68u: goto label_271e68;
        case 0x271e6cu: goto label_271e6c;
        case 0x271e70u: goto label_271e70;
        case 0x271e74u: goto label_271e74;
        case 0x271e78u: goto label_271e78;
        case 0x271e7cu: goto label_271e7c;
        case 0x271e80u: goto label_271e80;
        case 0x271e84u: goto label_271e84;
        case 0x271e88u: goto label_271e88;
        case 0x271e8cu: goto label_271e8c;
        case 0x271e90u: goto label_271e90;
        case 0x271e94u: goto label_271e94;
        case 0x271e98u: goto label_271e98;
        case 0x271e9cu: goto label_271e9c;
        case 0x271ea0u: goto label_271ea0;
        case 0x271ea4u: goto label_271ea4;
        case 0x271ea8u: goto label_271ea8;
        case 0x271eacu: goto label_271eac;
        case 0x271eb0u: goto label_271eb0;
        case 0x271eb4u: goto label_271eb4;
        case 0x271eb8u: goto label_271eb8;
        case 0x271ebcu: goto label_271ebc;
        case 0x271ec0u: goto label_271ec0;
        case 0x271ec4u: goto label_271ec4;
        case 0x271ec8u: goto label_271ec8;
        case 0x271eccu: goto label_271ecc;
        case 0x271ed0u: goto label_271ed0;
        case 0x271ed4u: goto label_271ed4;
        case 0x271ed8u: goto label_271ed8;
        case 0x271edcu: goto label_271edc;
        case 0x271ee0u: goto label_271ee0;
        case 0x271ee4u: goto label_271ee4;
        case 0x271ee8u: goto label_271ee8;
        case 0x271eecu: goto label_271eec;
        case 0x271ef0u: goto label_271ef0;
        case 0x271ef4u: goto label_271ef4;
        case 0x271ef8u: goto label_271ef8;
        case 0x271efcu: goto label_271efc;
        case 0x271f00u: goto label_271f00;
        case 0x271f04u: goto label_271f04;
        case 0x271f08u: goto label_271f08;
        case 0x271f0cu: goto label_271f0c;
        case 0x271f10u: goto label_271f10;
        case 0x271f14u: goto label_271f14;
        case 0x271f18u: goto label_271f18;
        case 0x271f1cu: goto label_271f1c;
        case 0x271f20u: goto label_271f20;
        case 0x271f24u: goto label_271f24;
        case 0x271f28u: goto label_271f28;
        case 0x271f2cu: goto label_271f2c;
        case 0x271f30u: goto label_271f30;
        case 0x271f34u: goto label_271f34;
        case 0x271f38u: goto label_271f38;
        case 0x271f3cu: goto label_271f3c;
        case 0x271f40u: goto label_271f40;
        case 0x271f44u: goto label_271f44;
        case 0x271f48u: goto label_271f48;
        case 0x271f4cu: goto label_271f4c;
        case 0x271f50u: goto label_271f50;
        case 0x271f54u: goto label_271f54;
        case 0x271f58u: goto label_271f58;
        case 0x271f5cu: goto label_271f5c;
        case 0x271f60u: goto label_271f60;
        case 0x271f64u: goto label_271f64;
        case 0x271f68u: goto label_271f68;
        case 0x271f6cu: goto label_271f6c;
        case 0x271f70u: goto label_271f70;
        case 0x271f74u: goto label_271f74;
        case 0x271f78u: goto label_271f78;
        case 0x271f7cu: goto label_271f7c;
        case 0x271f80u: goto label_271f80;
        case 0x271f84u: goto label_271f84;
        case 0x271f88u: goto label_271f88;
        case 0x271f8cu: goto label_271f8c;
        case 0x271f90u: goto label_271f90;
        case 0x271f94u: goto label_271f94;
        case 0x271f98u: goto label_271f98;
        case 0x271f9cu: goto label_271f9c;
        case 0x271fa0u: goto label_271fa0;
        case 0x271fa4u: goto label_271fa4;
        case 0x271fa8u: goto label_271fa8;
        case 0x271facu: goto label_271fac;
        case 0x271fb0u: goto label_271fb0;
        case 0x271fb4u: goto label_271fb4;
        case 0x271fb8u: goto label_271fb8;
        case 0x271fbcu: goto label_271fbc;
        case 0x271fc0u: goto label_271fc0;
        case 0x271fc4u: goto label_271fc4;
        case 0x271fc8u: goto label_271fc8;
        case 0x271fccu: goto label_271fcc;
        case 0x271fd0u: goto label_271fd0;
        case 0x271fd4u: goto label_271fd4;
        case 0x271fd8u: goto label_271fd8;
        case 0x271fdcu: goto label_271fdc;
        case 0x271fe0u: goto label_271fe0;
        case 0x271fe4u: goto label_271fe4;
        case 0x271fe8u: goto label_271fe8;
        case 0x271fecu: goto label_271fec;
        case 0x271ff0u: goto label_271ff0;
        case 0x271ff4u: goto label_271ff4;
        case 0x271ff8u: goto label_271ff8;
        case 0x271ffcu: goto label_271ffc;
        case 0x272000u: goto label_272000;
        case 0x272004u: goto label_272004;
        case 0x272008u: goto label_272008;
        case 0x27200cu: goto label_27200c;
        case 0x272010u: goto label_272010;
        case 0x272014u: goto label_272014;
        case 0x272018u: goto label_272018;
        case 0x27201cu: goto label_27201c;
        case 0x272020u: goto label_272020;
        case 0x272024u: goto label_272024;
        case 0x272028u: goto label_272028;
        case 0x27202cu: goto label_27202c;
        case 0x272030u: goto label_272030;
        case 0x272034u: goto label_272034;
        case 0x272038u: goto label_272038;
        case 0x27203cu: goto label_27203c;
        case 0x272040u: goto label_272040;
        case 0x272044u: goto label_272044;
        case 0x272048u: goto label_272048;
        case 0x27204cu: goto label_27204c;
        case 0x272050u: goto label_272050;
        case 0x272054u: goto label_272054;
        case 0x272058u: goto label_272058;
        case 0x27205cu: goto label_27205c;
        case 0x272060u: goto label_272060;
        case 0x272064u: goto label_272064;
        case 0x272068u: goto label_272068;
        case 0x27206cu: goto label_27206c;
        case 0x272070u: goto label_272070;
        case 0x272074u: goto label_272074;
        case 0x272078u: goto label_272078;
        case 0x27207cu: goto label_27207c;
        case 0x272080u: goto label_272080;
        case 0x272084u: goto label_272084;
        case 0x272088u: goto label_272088;
        case 0x27208cu: goto label_27208c;
        case 0x272090u: goto label_272090;
        case 0x272094u: goto label_272094;
        case 0x272098u: goto label_272098;
        case 0x27209cu: goto label_27209c;
        case 0x2720a0u: goto label_2720a0;
        case 0x2720a4u: goto label_2720a4;
        case 0x2720a8u: goto label_2720a8;
        case 0x2720acu: goto label_2720ac;
        case 0x2720b0u: goto label_2720b0;
        case 0x2720b4u: goto label_2720b4;
        case 0x2720b8u: goto label_2720b8;
        case 0x2720bcu: goto label_2720bc;
        case 0x2720c0u: goto label_2720c0;
        case 0x2720c4u: goto label_2720c4;
        case 0x2720c8u: goto label_2720c8;
        case 0x2720ccu: goto label_2720cc;
        case 0x2720d0u: goto label_2720d0;
        case 0x2720d4u: goto label_2720d4;
        case 0x2720d8u: goto label_2720d8;
        case 0x2720dcu: goto label_2720dc;
        case 0x2720e0u: goto label_2720e0;
        case 0x2720e4u: goto label_2720e4;
        case 0x2720e8u: goto label_2720e8;
        case 0x2720ecu: goto label_2720ec;
        case 0x2720f0u: goto label_2720f0;
        case 0x2720f4u: goto label_2720f4;
        case 0x2720f8u: goto label_2720f8;
        case 0x2720fcu: goto label_2720fc;
        case 0x272100u: goto label_272100;
        case 0x272104u: goto label_272104;
        case 0x272108u: goto label_272108;
        case 0x27210cu: goto label_27210c;
        case 0x272110u: goto label_272110;
        case 0x272114u: goto label_272114;
        case 0x272118u: goto label_272118;
        case 0x27211cu: goto label_27211c;
        case 0x272120u: goto label_272120;
        case 0x272124u: goto label_272124;
        case 0x272128u: goto label_272128;
        case 0x27212cu: goto label_27212c;
        case 0x272130u: goto label_272130;
        case 0x272134u: goto label_272134;
        case 0x272138u: goto label_272138;
        case 0x27213cu: goto label_27213c;
        case 0x272140u: goto label_272140;
        case 0x272144u: goto label_272144;
        case 0x272148u: goto label_272148;
        case 0x27214cu: goto label_27214c;
        case 0x272150u: goto label_272150;
        case 0x272154u: goto label_272154;
        case 0x272158u: goto label_272158;
        case 0x27215cu: goto label_27215c;
        case 0x272160u: goto label_272160;
        case 0x272164u: goto label_272164;
        case 0x272168u: goto label_272168;
        case 0x27216cu: goto label_27216c;
        case 0x272170u: goto label_272170;
        case 0x272174u: goto label_272174;
        case 0x272178u: goto label_272178;
        case 0x27217cu: goto label_27217c;
        case 0x272180u: goto label_272180;
        case 0x272184u: goto label_272184;
        case 0x272188u: goto label_272188;
        case 0x27218cu: goto label_27218c;
        case 0x272190u: goto label_272190;
        case 0x272194u: goto label_272194;
        case 0x272198u: goto label_272198;
        case 0x27219cu: goto label_27219c;
        case 0x2721a0u: goto label_2721a0;
        case 0x2721a4u: goto label_2721a4;
        case 0x2721a8u: goto label_2721a8;
        case 0x2721acu: goto label_2721ac;
        case 0x2721b0u: goto label_2721b0;
        case 0x2721b4u: goto label_2721b4;
        case 0x2721b8u: goto label_2721b8;
        case 0x2721bcu: goto label_2721bc;
        case 0x2721c0u: goto label_2721c0;
        case 0x2721c4u: goto label_2721c4;
        case 0x2721c8u: goto label_2721c8;
        case 0x2721ccu: goto label_2721cc;
        case 0x2721d0u: goto label_2721d0;
        case 0x2721d4u: goto label_2721d4;
        case 0x2721d8u: goto label_2721d8;
        case 0x2721dcu: goto label_2721dc;
        case 0x2721e0u: goto label_2721e0;
        case 0x2721e4u: goto label_2721e4;
        case 0x2721e8u: goto label_2721e8;
        case 0x2721ecu: goto label_2721ec;
        case 0x2721f0u: goto label_2721f0;
        case 0x2721f4u: goto label_2721f4;
        default: return;
    }

label_271a28:
    // 0x271a28: 0x0  nop
    ctx->pc = 0x271a28u;
    // NOP
label_271a2c:
    // 0x271a2c: 0x0  nop
    ctx->pc = 0x271a2cu;
    // NOP
label_271a30:
    // 0x271a30: 0x80c3  sra         $s0, $zero, 3
    ctx->pc = 0x271a30u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 0), 3));
label_271a34:
    // 0x271a34: 0x4a80  sll         $t1, $zero, 10
    ctx->pc = 0x271a34u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_271a38:
    // 0x271a38: 0x0  nop
    ctx->pc = 0x271a38u;
    // NOP
label_271a3c:
    // 0x271a3c: 0x0  nop
    ctx->pc = 0x271a3cu;
    // NOP
label_271a40:
    // 0x271a40: 0x80cd  break       0, 515
    ctx->pc = 0x271a40u;
    runtime->handleBreak(rdram, ctx);
label_271a44:
    // 0x271a44: 0xb4e0  .word       0x0000B4E0                   # add         $s6, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271a44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_271a48:
    // 0x271a48: 0x0  nop
    ctx->pc = 0x271a48u;
    // NOP
label_271a4c:
    // 0x271a4c: 0x0  nop
    ctx->pc = 0x271a4cu;
    // NOP
label_271a50:
    // 0x271a50: 0x80e4  .word       0x000080E4                   # and         $s0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271a50u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_271a54:
    // 0x271a54: 0x7d50  .word       0x00007D50                   # mfhi        $t7 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271a54u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_271a58:
    // 0x271a58: 0x0  nop
    ctx->pc = 0x271a58u;
    // NOP
label_271a5c:
    // 0x271a5c: 0x0  nop
    ctx->pc = 0x271a5cu;
    // NOP
label_271a60:
    // 0x271a60: 0x80f4  teq         $zero, $zero, 515
    ctx->pc = 0x271a60u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271a64:
    // 0x271a64: 0x7f30  tge         $zero, $zero, 508
    ctx->pc = 0x271a64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271a68:
    // 0x271a68: 0x0  nop
    ctx->pc = 0x271a68u;
    // NOP
label_271a6c:
    // 0x271a6c: 0x0  nop
    ctx->pc = 0x271a6cu;
    // NOP
label_271a70:
    // 0x271a70: 0x8104  .word       0x00008104                   # sllv        $s0, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271a70u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_271a74:
    // 0x271a74: 0x6710  .word       0x00006710                   # mfhi        $t4 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271a74u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_271a78:
    // 0x271a78: 0x0  nop
    ctx->pc = 0x271a78u;
    // NOP
label_271a7c:
    // 0x271a7c: 0x0  nop
    ctx->pc = 0x271a7cu;
    // NOP
label_271a80:
    // 0x271a80: 0x8111  .word       0x00008111                   # mthi        $zero # 00008100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271a80u;
    ctx->hi = GPR_U64(ctx, 0);
label_271a84:
    // 0x271a84: 0x6910  .word       0x00006910                   # mfhi        $t5 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271a84u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_271a88:
    // 0x271a88: 0x0  nop
    ctx->pc = 0x271a88u;
    // NOP
label_271a8c:
    // 0x271a8c: 0x0  nop
    ctx->pc = 0x271a8cu;
    // NOP
label_271a90:
    // 0x271a90: 0x811f  .word       0x0000811F                   # ddivu       $s0, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271a90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x271A90 raw=0x0000811F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_271a94:
    // 0x271a94: 0x8ac0  sll         $s1, $zero, 11
    ctx->pc = 0x271a94u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_271a98:
    // 0x271a98: 0x0  nop
    ctx->pc = 0x271a98u;
    // NOP
label_271a9c:
    // 0x271a9c: 0x0  nop
    ctx->pc = 0x271a9cu;
    // NOP
label_271aa0:
    // 0x271aa0: 0x8131  tgeu        $zero, $zero, 516
    ctx->pc = 0x271aa0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271aa4:
    // 0x271aa4: 0xa160  .word       0x0000A160                   # add         $s4, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271aa4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_271aa8:
    // 0x271aa8: 0x0  nop
    ctx->pc = 0x271aa8u;
    // NOP
label_271aac:
    // 0x271aac: 0x0  nop
    ctx->pc = 0x271aacu;
    // NOP
label_271ab0:
    // 0x271ab0: 0x8146  .word       0x00008146                   # srlv        $s0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_271ab4:
    // 0x271ab4: 0x91c0  sll         $s2, $zero, 7
    ctx->pc = 0x271ab4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_271ab8:
    // 0x271ab8: 0x0  nop
    ctx->pc = 0x271ab8u;
    // NOP
label_271abc:
    // 0x271abc: 0x0  nop
    ctx->pc = 0x271abcu;
    // NOP
label_271ac0:
    // 0x271ac0: 0x8159  .word       0x00008159                   # multu       $zero, $zero # 00008140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271ac0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_271ac4:
    // 0x271ac4: 0x9360  .word       0x00009360                   # add         $s2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271ac4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_271ac8:
    // 0x271ac8: 0x0  nop
    ctx->pc = 0x271ac8u;
    // NOP
label_271acc:
    // 0x271acc: 0x0  nop
    ctx->pc = 0x271accu;
    // NOP
label_271ad0:
    // 0x271ad0: 0x816c  .word       0x0000816C                   # dadd        $s0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271ad0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_271ad4:
    // 0x271ad4: 0x91e0  .word       0x000091E0                   # add         $s2, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271ad4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_271ad8:
    // 0x271ad8: 0x0  nop
    ctx->pc = 0x271ad8u;
    // NOP
label_271adc:
    // 0x271adc: 0x0  nop
    ctx->pc = 0x271adcu;
    // NOP
label_271ae0:
    // 0x271ae0: 0x817f  dsra32      $s0, $zero, 5
    ctx->pc = 0x271ae0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (32 + 5));
label_271ae4:
    // 0x271ae4: 0xa150  .word       0x0000A150                   # mfhi        $s4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271ae4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_271ae8:
    // 0x271ae8: 0x0  nop
    ctx->pc = 0x271ae8u;
    // NOP
label_271aec:
    // 0x271aec: 0x0  nop
    ctx->pc = 0x271aecu;
    // NOP
label_271af0:
    // 0x271af0: 0x8194  .word       0x00008194                   # dsllv       $s0, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271af0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_271af4:
    // 0x271af4: 0x7c20  .word       0x00007C20                   # add         $t7, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271af4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_271af8:
    // 0x271af8: 0x0  nop
    ctx->pc = 0x271af8u;
    // NOP
label_271afc:
    // 0x271afc: 0x0  nop
    ctx->pc = 0x271afcu;
    // NOP
label_271b00:
    // 0x271b00: 0x81a4  .word       0x000081A4                   # and         $s0, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271b00u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_271b04:
    // 0x271b04: 0xa630  tge         $zero, $zero, 664
    ctx->pc = 0x271b04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271b08:
    // 0x271b08: 0x0  nop
    ctx->pc = 0x271b08u;
    // NOP
label_271b0c:
    // 0x271b0c: 0x0  nop
    ctx->pc = 0x271b0cu;
    // NOP
label_271b10:
    // 0x271b10: 0x81b9  .word       0x000081B9                   # INVALID     $zero, $zero, -0x7E47 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271b10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x271B10 raw=0x000081B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_271b14:
    // 0x271b14: 0xa310  .word       0x0000A310                   # mfhi        $s4 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271b14u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_271b18:
    // 0x271b18: 0x0  nop
    ctx->pc = 0x271b18u;
    // NOP
label_271b1c:
    // 0x271b1c: 0x0  nop
    ctx->pc = 0x271b1cu;
    // NOP
label_271b20:
    // 0x271b20: 0x81ce  .word       0x000081CE                   # INVALID     $zero, $zero, -0x7E32 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271b20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x271B20 raw=0x000081CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_271b24:
    // 0x271b24: 0xa2d0  .word       0x0000A2D0                   # mfhi        $s4 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271b24u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_271b28:
    // 0x271b28: 0x0  nop
    ctx->pc = 0x271b28u;
    // NOP
label_271b2c:
    // 0x271b2c: 0x0  nop
    ctx->pc = 0x271b2cu;
    // NOP
label_271b30:
    // 0x271b30: 0x81e3  .word       0x000081E3                   # negu        $s0, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271b30u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_271b34:
    // 0x271b34: 0x7b50  .word       0x00007B50                   # mfhi        $t7 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271b34u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_271b38:
    // 0x271b38: 0x0  nop
    ctx->pc = 0x271b38u;
    // NOP
label_271b3c:
    // 0x271b3c: 0x0  nop
    ctx->pc = 0x271b3cu;
    // NOP
label_271b40:
    // 0x271b40: 0x81f3  tltu        $zero, $zero, 519
    ctx->pc = 0x271b40u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271b44:
    // 0x271b44: 0xb390  .word       0x0000B390                   # mfhi        $s6 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271b44u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_271b48:
    // 0x271b48: 0x0  nop
    ctx->pc = 0x271b48u;
    // NOP
label_271b4c:
    // 0x271b4c: 0x0  nop
    ctx->pc = 0x271b4cu;
    // NOP
label_271b50:
    // 0x271b50: 0x820a  .word       0x0000820A                   # movz        $s0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271b50u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_271b54:
    // 0x271b54: 0x11960  .word       0x00011960                   # add         $v1, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271b54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_271b58:
    // 0x271b58: 0x0  nop
    ctx->pc = 0x271b58u;
    // NOP
label_271b5c:
    // 0x271b5c: 0x0  nop
    ctx->pc = 0x271b5cu;
    // NOP
label_271b60:
    // 0x271b60: 0x822e  .word       0x0000822E                   # dsub        $s0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271b60u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_271b64:
    // 0x271b64: 0x90c0  sll         $s2, $zero, 3
    ctx->pc = 0x271b64u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_271b68:
    // 0x271b68: 0x0  nop
    ctx->pc = 0x271b68u;
    // NOP
label_271b6c:
    // 0x271b6c: 0x0  nop
    ctx->pc = 0x271b6cu;
    // NOP
label_271b70:
    // 0x271b70: 0x8241  .word       0x00008241                   # INVALID     $zero, $zero, -0x7DBF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271b70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x271B70 raw=0x00008241"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_271b74:
    // 0x271b74: 0x7170  tge         $zero, $zero, 453
    ctx->pc = 0x271b74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271b78:
    // 0x271b78: 0x0  nop
    ctx->pc = 0x271b78u;
    // NOP
label_271b7c:
    // 0x271b7c: 0x0  nop
    ctx->pc = 0x271b7cu;
    // NOP
label_271b80:
    // 0x271b80: 0x8250  .word       0x00008250                   # mfhi        $s0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271b80u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_271b84:
    // 0x271b84: 0xc960  .word       0x0000C960                   # add         $t9, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271b84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_271b88:
    // 0x271b88: 0x0  nop
    ctx->pc = 0x271b88u;
    // NOP
label_271b8c:
    // 0x271b8c: 0x0  nop
    ctx->pc = 0x271b8cu;
    // NOP
label_271b90:
    // 0x271b90: 0x826a  .word       0x0000826A                   # slt         $s0, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271b90u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_271b94:
    // 0x271b94: 0x6c80  sll         $t5, $zero, 18
    ctx->pc = 0x271b94u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_271b98:
    // 0x271b98: 0x0  nop
    ctx->pc = 0x271b98u;
    // NOP
label_271b9c:
    // 0x271b9c: 0x0  nop
    ctx->pc = 0x271b9cu;
    // NOP
label_271ba0:
    // 0x271ba0: 0x8278  dsll        $s0, $zero, 9
    ctx->pc = 0x271ba0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) << 9);
label_271ba4:
    // 0x271ba4: 0x7e50  .word       0x00007E50                   # mfhi        $t7 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271ba4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_271ba8:
    // 0x271ba8: 0x0  nop
    ctx->pc = 0x271ba8u;
    // NOP
label_271bac:
    // 0x271bac: 0x0  nop
    ctx->pc = 0x271bacu;
    // NOP
label_271bb0:
    // 0x271bb0: 0x8288  .word       0x00008288                   # jr          $zero # 00008280 <InstrIdType: CPU_SPECIAL>
label_271bb4:
    if (ctx->pc == 0x271BB4u) {
        ctx->pc = 0x271BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271BB0u;
        // 0x271bb4: 0xa0e0  .word       0x0000A0E0                   # add         $s4, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x271BB8u;
        goto label_271bb8;
    }
    ctx->pc = 0x271BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x271BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271BB0u;
        // 0x271bb4: 0xa0e0  .word       0x0000A0E0                   # add         $s4, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271BB0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x271BB8u;
label_271bb8:
    // 0x271bb8: 0x0  nop
    ctx->pc = 0x271bb8u;
    // NOP
label_271bbc:
    // 0x271bbc: 0x0  nop
    ctx->pc = 0x271bbcu;
    // NOP
label_271bc0:
    // 0x271bc0: 0x829d  .word       0x0000829D                   # dmultu      $zero, $zero # 00008280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271bc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x271BC0 raw=0x0000829D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_271bc4:
    // 0x271bc4: 0x87f0  tge         $zero, $zero, 543
    ctx->pc = 0x271bc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271bc8:
    // 0x271bc8: 0x0  nop
    ctx->pc = 0x271bc8u;
    // NOP
label_271bcc:
    // 0x271bcc: 0x0  nop
    ctx->pc = 0x271bccu;
    // NOP
label_271bd0:
    // 0x271bd0: 0x82ae  .word       0x000082AE                   # dsub        $s0, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271bd0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_271bd4:
    // 0x271bd4: 0x9530  tge         $zero, $zero, 596
    ctx->pc = 0x271bd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271bd8:
    // 0x271bd8: 0x0  nop
    ctx->pc = 0x271bd8u;
    // NOP
label_271bdc:
    // 0x271bdc: 0x0  nop
    ctx->pc = 0x271bdcu;
    // NOP
label_271be0:
    // 0x271be0: 0x82c1  .word       0x000082C1                   # INVALID     $zero, $zero, -0x7D3F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271be0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x271BE0 raw=0x000082C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_271be4:
    // 0x271be4: 0xa060  .word       0x0000A060                   # add         $s4, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271be4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_271be8:
    // 0x271be8: 0x0  nop
    ctx->pc = 0x271be8u;
    // NOP
label_271bec:
    // 0x271bec: 0x0  nop
    ctx->pc = 0x271becu;
    // NOP
label_271bf0:
    // 0x271bf0: 0x82d6  .word       0x000082D6                   # dsrlv       $s0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271bf0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_271bf4:
    // 0x271bf4: 0x9050  .word       0x00009050                   # mfhi        $s2 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271bf4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_271bf8:
    // 0x271bf8: 0x0  nop
    ctx->pc = 0x271bf8u;
    // NOP
label_271bfc:
    // 0x271bfc: 0x0  nop
    ctx->pc = 0x271bfcu;
    // NOP
label_271c00:
    // 0x271c00: 0x82e9  .word       0x000082E9                   # mtsa        $zero # 000082C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x271c00u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_271c04:
    // 0x271c04: 0xc040  sll         $t8, $zero, 1
    ctx->pc = 0x271c04u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_271c08:
    // 0x271c08: 0x0  nop
    ctx->pc = 0x271c08u;
    // NOP
label_271c0c:
    // 0x271c0c: 0x0  nop
    ctx->pc = 0x271c0cu;
    // NOP
label_271c10:
    // 0x271c10: 0x8302  srl         $s0, $zero, 12
    ctx->pc = 0x271c10u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 0), 12));
label_271c14:
    // 0x271c14: 0x9a70  tge         $zero, $zero, 617
    ctx->pc = 0x271c14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271c18:
    // 0x271c18: 0x0  nop
    ctx->pc = 0x271c18u;
    // NOP
label_271c1c:
    // 0x271c1c: 0x0  nop
    ctx->pc = 0x271c1cu;
    // NOP
label_271c20:
    // 0x271c20: 0x8316  .word       0x00008316                   # dsrlv       $s0, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271c20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_271c24:
    // 0x271c24: 0x7030  tge         $zero, $zero, 448
    ctx->pc = 0x271c24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271c28:
    // 0x271c28: 0x0  nop
    ctx->pc = 0x271c28u;
    // NOP
label_271c2c:
    // 0x271c2c: 0x0  nop
    ctx->pc = 0x271c2cu;
    // NOP
label_271c30:
    // 0x271c30: 0x8325  .word       0x00008325                   # move        $s0, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271c30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_271c34:
    // 0x271c34: 0xa420  .word       0x0000A420                   # add         $s4, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271c34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_271c38:
    // 0x271c38: 0x0  nop
    ctx->pc = 0x271c38u;
    // NOP
label_271c3c:
    // 0x271c3c: 0x0  nop
    ctx->pc = 0x271c3cu;
    // NOP
label_271c40:
    // 0x271c40: 0x833a  dsrl        $s0, $zero, 12
    ctx->pc = 0x271c40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) >> 12);
label_271c44:
    // 0x271c44: 0x7ea0  .word       0x00007EA0                   # add         $t7, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271c44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_271c48:
    // 0x271c48: 0x0  nop
    ctx->pc = 0x271c48u;
    // NOP
label_271c4c:
    // 0x271c4c: 0x0  nop
    ctx->pc = 0x271c4cu;
    // NOP
label_271c50:
    // 0x271c50: 0x834a  .word       0x0000834A                   # movz        $s0, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271c50u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_271c54:
    // 0x271c54: 0x84c0  sll         $s0, $zero, 19
    ctx->pc = 0x271c54u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_271c58:
    // 0x271c58: 0x0  nop
    ctx->pc = 0x271c58u;
    // NOP
label_271c5c:
    // 0x271c5c: 0x0  nop
    ctx->pc = 0x271c5cu;
    // NOP
label_271c60:
    // 0x271c60: 0x835b  .word       0x0000835B                   # divu        $s0, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271c60u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_271c64:
    // 0x271c64: 0x9d30  tge         $zero, $zero, 628
    ctx->pc = 0x271c64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271c68:
    // 0x271c68: 0x0  nop
    ctx->pc = 0x271c68u;
    // NOP
label_271c6c:
    // 0x271c6c: 0x0  nop
    ctx->pc = 0x271c6cu;
    // NOP
label_271c70:
    // 0x271c70: 0x836f  .word       0x0000836F                   # dsubu       $s0, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271c70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_271c74:
    // 0x271c74: 0x9990  .word       0x00009990                   # mfhi        $s3 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271c74u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_271c78:
    // 0x271c78: 0x0  nop
    ctx->pc = 0x271c78u;
    // NOP
label_271c7c:
    // 0x271c7c: 0x0  nop
    ctx->pc = 0x271c7cu;
    // NOP
label_271c80:
    // 0x271c80: 0x8383  sra         $s0, $zero, 14
    ctx->pc = 0x271c80u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 0), 14));
label_271c84:
    // 0x271c84: 0xaf50  .word       0x0000AF50                   # mfhi        $s5 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271c84u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_271c88:
    // 0x271c88: 0x0  nop
    ctx->pc = 0x271c88u;
    // NOP
label_271c8c:
    // 0x271c8c: 0x0  nop
    ctx->pc = 0x271c8cu;
    // NOP
label_271c90:
    // 0x271c90: 0x8399  .word       0x00008399                   # multu       $zero, $zero # 00008380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271c90u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_271c94:
    // 0x271c94: 0x9800  sll         $s3, $zero, 0
    ctx->pc = 0x271c94u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_271c98:
    // 0x271c98: 0x0  nop
    ctx->pc = 0x271c98u;
    // NOP
label_271c9c:
    // 0x271c9c: 0x0  nop
    ctx->pc = 0x271c9cu;
    // NOP
label_271ca0:
    // 0x271ca0: 0x83ac  .word       0x000083AC                   # dadd        $s0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271ca0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_271ca4:
    // 0x271ca4: 0x9f00  sll         $s3, $zero, 28
    ctx->pc = 0x271ca4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_271ca8:
    // 0x271ca8: 0x0  nop
    ctx->pc = 0x271ca8u;
    // NOP
label_271cac:
    // 0x271cac: 0x0  nop
    ctx->pc = 0x271cacu;
    // NOP
label_271cb0:
    // 0x271cb0: 0x83c0  sll         $s0, $zero, 15
    ctx->pc = 0x271cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_271cb4:
    // 0x271cb4: 0x7f50  .word       0x00007F50                   # mfhi        $t7 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271cb4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_271cb8:
    // 0x271cb8: 0x0  nop
    ctx->pc = 0x271cb8u;
    // NOP
label_271cbc:
    // 0x271cbc: 0x0  nop
    ctx->pc = 0x271cbcu;
    // NOP
label_271cc0:
    // 0x271cc0: 0x83d0  .word       0x000083D0                   # mfhi        $s0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271cc0u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_271cc4:
    // 0x271cc4: 0x9280  sll         $s2, $zero, 10
    ctx->pc = 0x271cc4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_271cc8:
    // 0x271cc8: 0x0  nop
    ctx->pc = 0x271cc8u;
    // NOP
label_271ccc:
    // 0x271ccc: 0x0  nop
    ctx->pc = 0x271cccu;
    // NOP
label_271cd0:
    // 0x271cd0: 0x83e3  .word       0x000083E3                   # negu        $s0, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_271cd4:
    // 0x271cd4: 0xeb10  .word       0x0000EB10                   # mfhi        $sp # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271cd4u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_271cd8:
    // 0x271cd8: 0x0  nop
    ctx->pc = 0x271cd8u;
    // NOP
label_271cdc:
    // 0x271cdc: 0x0  nop
    ctx->pc = 0x271cdcu;
    // NOP
label_271ce0:
    // 0x271ce0: 0x8401  .word       0x00008401                   # INVALID     $zero, $zero, -0x7BFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271ce0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x271CE0 raw=0x00008401"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_271ce4:
    // 0x271ce4: 0xdd20  .word       0x0000DD20                   # add         $k1, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271ce4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_271ce8:
    // 0x271ce8: 0x0  nop
    ctx->pc = 0x271ce8u;
    // NOP
label_271cec:
    // 0x271cec: 0x0  nop
    ctx->pc = 0x271cecu;
    // NOP
label_271cf0:
    // 0x271cf0: 0x841d  .word       0x0000841D                   # dmultu      $zero, $zero # 00008400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271cf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x271CF0 raw=0x0000841D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_271cf4:
    // 0x271cf4: 0x2400  sll         $a0, $zero, 16
    ctx->pc = 0x271cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_271cf8:
    // 0x271cf8: 0x0  nop
    ctx->pc = 0x271cf8u;
    // NOP
label_271cfc:
    // 0x271cfc: 0x0  nop
    ctx->pc = 0x271cfcu;
    // NOP
label_271d00:
    // 0x271d00: 0x8422  .word       0x00008422                   # neg         $s0, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271d00u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
label_271d04:
    // 0x271d04: 0xab50  .word       0x0000AB50                   # mfhi        $s5 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271d04u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_271d08:
    // 0x271d08: 0x0  nop
    ctx->pc = 0x271d08u;
    // NOP
label_271d0c:
    // 0x271d0c: 0x0  nop
    ctx->pc = 0x271d0cu;
    // NOP
label_271d10:
    // 0x271d10: 0x8438  dsll        $s0, $zero, 16
    ctx->pc = 0x271d10u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) << 16);
label_271d14:
    // 0x271d14: 0x3910  .word       0x00003910                   # mfhi        $a3 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271d14u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_271d18:
    // 0x271d18: 0x0  nop
    ctx->pc = 0x271d18u;
    // NOP
label_271d1c:
    // 0x271d1c: 0x0  nop
    ctx->pc = 0x271d1cu;
    // NOP
label_271d20:
    // 0x271d20: 0x8440  sll         $s0, $zero, 17
    ctx->pc = 0x271d20u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_271d24:
    // 0x271d24: 0xd740  sll         $k0, $zero, 29
    ctx->pc = 0x271d24u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_271d28:
    // 0x271d28: 0x0  nop
    ctx->pc = 0x271d28u;
    // NOP
label_271d2c:
    // 0x271d2c: 0x0  nop
    ctx->pc = 0x271d2cu;
    // NOP
label_271d30:
    // 0x271d30: 0x845b  .word       0x0000845B                   # divu        $s0, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271d30u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_271d34:
    // 0x271d34: 0xaaa0  .word       0x0000AAA0                   # add         $s5, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271d34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_271d38:
    // 0x271d38: 0x0  nop
    ctx->pc = 0x271d38u;
    // NOP
label_271d3c:
    // 0x271d3c: 0x0  nop
    ctx->pc = 0x271d3cu;
    // NOP
label_271d40:
    // 0x271d40: 0x8471  tgeu        $zero, $zero, 529
    ctx->pc = 0x271d40u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271d44:
    // 0x271d44: 0x11e70  tge         $zero, $at, 121
    ctx->pc = 0x271d44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_271d48:
    // 0x271d48: 0x0  nop
    ctx->pc = 0x271d48u;
    // NOP
label_271d4c:
    // 0x271d4c: 0x0  nop
    ctx->pc = 0x271d4cu;
    // NOP
label_271d50:
    // 0x271d50: 0x8495  .word       0x00008495                   # INVALID     $zero, $zero, -0x7B6B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271d50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x271D50 raw=0x00008495"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_271d54:
    // 0x271d54: 0x9770  tge         $zero, $zero, 605
    ctx->pc = 0x271d54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271d58:
    // 0x271d58: 0x0  nop
    ctx->pc = 0x271d58u;
    // NOP
label_271d5c:
    // 0x271d5c: 0x0  nop
    ctx->pc = 0x271d5cu;
    // NOP
label_271d60:
    // 0x271d60: 0x84a8  .word       0x000084A8                   # mfsa        $s0 # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x271d60u;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_271d64:
    // 0x271d64: 0xaab0  tge         $zero, $zero, 682
    ctx->pc = 0x271d64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271d68:
    // 0x271d68: 0x0  nop
    ctx->pc = 0x271d68u;
    // NOP
label_271d6c:
    // 0x271d6c: 0x0  nop
    ctx->pc = 0x271d6cu;
    // NOP
label_271d70:
    // 0x271d70: 0x84be  dsrl32      $s0, $zero, 18
    ctx->pc = 0x271d70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) >> (32 + 18));
label_271d74:
    // 0x271d74: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x271d74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_271d78:
    // 0x271d78: 0x0  nop
    ctx->pc = 0x271d78u;
    // NOP
label_271d7c:
    // 0x271d7c: 0x0  nop
    ctx->pc = 0x271d7cu;
    // NOP
label_271d80:
    // 0x271d80: 0x84cf  .word       0x000084CF                   # sync.p # 00008000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271d80u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_271d84:
    // 0x271d84: 0xf790  .word       0x0000F790                   # mfhi        $fp # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271d84u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_271d88:
    // 0x271d88: 0x0  nop
    ctx->pc = 0x271d88u;
    // NOP
label_271d8c:
    // 0x271d8c: 0x0  nop
    ctx->pc = 0x271d8cu;
    // NOP
label_271d90:
    // 0x271d90: 0x84ee  .word       0x000084EE                   # dsub        $s0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271d90u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_271d94:
    // 0x271d94: 0x4d20  .word       0x00004D20                   # add         $t1, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271d94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_271d98:
    // 0x271d98: 0x0  nop
    ctx->pc = 0x271d98u;
    // NOP
label_271d9c:
    // 0x271d9c: 0x0  nop
    ctx->pc = 0x271d9cu;
    // NOP
label_271da0:
    // 0x271da0: 0x84f8  dsll        $s0, $zero, 19
    ctx->pc = 0x271da0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) << 19);
label_271da4:
    // 0x271da4: 0xc430  tge         $zero, $zero, 784
    ctx->pc = 0x271da4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271da8:
    // 0x271da8: 0x0  nop
    ctx->pc = 0x271da8u;
    // NOP
label_271dac:
    // 0x271dac: 0x0  nop
    ctx->pc = 0x271dacu;
    // NOP
label_271db0:
    // 0x271db0: 0x8511  .word       0x00008511                   # mthi        $zero # 00008500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271db0u;
    ctx->hi = GPR_U64(ctx, 0);
label_271db4:
    // 0x271db4: 0xa5f0  tge         $zero, $zero, 663
    ctx->pc = 0x271db4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271db8:
    // 0x271db8: 0x0  nop
    ctx->pc = 0x271db8u;
    // NOP
label_271dbc:
    // 0x271dbc: 0x0  nop
    ctx->pc = 0x271dbcu;
    // NOP
label_271dc0:
    // 0x271dc0: 0x8526  .word       0x00008526                   # xor         $s0, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271dc0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_271dc4:
    // 0x271dc4: 0x9ff0  tge         $zero, $zero, 639
    ctx->pc = 0x271dc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271dc8:
    // 0x271dc8: 0x0  nop
    ctx->pc = 0x271dc8u;
    // NOP
label_271dcc:
    // 0x271dcc: 0x0  nop
    ctx->pc = 0x271dccu;
    // NOP
label_271dd0:
    // 0x271dd0: 0x853a  dsrl        $s0, $zero, 20
    ctx->pc = 0x271dd0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) >> 20);
label_271dd4:
    // 0x271dd4: 0xc4c0  sll         $t8, $zero, 19
    ctx->pc = 0x271dd4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_271dd8:
    // 0x271dd8: 0x0  nop
    ctx->pc = 0x271dd8u;
    // NOP
label_271ddc:
    // 0x271ddc: 0x0  nop
    ctx->pc = 0x271ddcu;
    // NOP
label_271de0:
    // 0x271de0: 0x8553  .word       0x00008553                   # mtlo        $zero # 00008540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271de0u;
    ctx->lo = GPR_U64(ctx, 0);
label_271de4:
    // 0x271de4: 0x4830  tge         $zero, $zero, 288
    ctx->pc = 0x271de4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271de8:
    // 0x271de8: 0x0  nop
    ctx->pc = 0x271de8u;
    // NOP
label_271dec:
    // 0x271dec: 0x0  nop
    ctx->pc = 0x271decu;
    // NOP
label_271df0:
    // 0x271df0: 0x855d  .word       0x0000855D                   # dmultu      $zero, $zero # 00008540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271df0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x271DF0 raw=0x0000855D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_271df4:
    // 0x271df4: 0x7430  tge         $zero, $zero, 464
    ctx->pc = 0x271df4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271df8:
    // 0x271df8: 0x0  nop
    ctx->pc = 0x271df8u;
    // NOP
label_271dfc:
    // 0x271dfc: 0x0  nop
    ctx->pc = 0x271dfcu;
    // NOP
label_271e00:
    // 0x271e00: 0x856c  .word       0x0000856C                   # dadd        $s0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271e00u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_271e04:
    // 0x271e04: 0xaec0  sll         $s5, $zero, 27
    ctx->pc = 0x271e04u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_271e08:
    // 0x271e08: 0x0  nop
    ctx->pc = 0x271e08u;
    // NOP
label_271e0c:
    // 0x271e0c: 0x0  nop
    ctx->pc = 0x271e0cu;
    // NOP
label_271e10:
    // 0x271e10: 0x8582  srl         $s0, $zero, 22
    ctx->pc = 0x271e10u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 0), 22));
label_271e14:
    // 0x271e14: 0x13b50  .word       0x00013B50                   # mfhi        $a3 # 00010340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271e14u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_271e18:
    // 0x271e18: 0x0  nop
    ctx->pc = 0x271e18u;
    // NOP
label_271e1c:
    // 0x271e1c: 0x0  nop
    ctx->pc = 0x271e1cu;
    // NOP
label_271e20:
    // 0x271e20: 0x85aa  .word       0x000085AA                   # slt         $s0, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271e20u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_271e24:
    // 0x271e24: 0x27a0  .word       0x000027A0                   # add         $a0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271e24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_271e28:
    // 0x271e28: 0x0  nop
    ctx->pc = 0x271e28u;
    // NOP
label_271e2c:
    // 0x271e2c: 0x0  nop
    ctx->pc = 0x271e2cu;
    // NOP
label_271e30:
    // 0x271e30: 0x85af  .word       0x000085AF                   # dsubu       $s0, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271e30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_271e34:
    // 0x271e34: 0xb470  tge         $zero, $zero, 721
    ctx->pc = 0x271e34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271e38:
    // 0x271e38: 0x0  nop
    ctx->pc = 0x271e38u;
    // NOP
label_271e3c:
    // 0x271e3c: 0x0  nop
    ctx->pc = 0x271e3cu;
    // NOP
label_271e40:
    // 0x271e40: 0x85c6  .word       0x000085C6                   # srlv        $s0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271e40u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_271e44:
    // 0x271e44: 0x8be0  .word       0x00008BE0                   # add         $s1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271e44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_271e48:
    // 0x271e48: 0x0  nop
    ctx->pc = 0x271e48u;
    // NOP
label_271e4c:
    // 0x271e4c: 0x0  nop
    ctx->pc = 0x271e4cu;
    // NOP
label_271e50:
    // 0x271e50: 0x85d8  .word       0x000085D8                   # mult        $s0, $zero, $zero # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x271e50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_271e54:
    // 0x271e54: 0x9680  sll         $s2, $zero, 26
    ctx->pc = 0x271e54u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_271e58:
    // 0x271e58: 0x0  nop
    ctx->pc = 0x271e58u;
    // NOP
label_271e5c:
    // 0x271e5c: 0x0  nop
    ctx->pc = 0x271e5cu;
    // NOP
label_271e60:
    // 0x271e60: 0x85eb  .word       0x000085EB                   # sltu        $s0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271e60u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_271e64:
    // 0x271e64: 0x4e80  sll         $t1, $zero, 26
    ctx->pc = 0x271e64u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_271e68:
    // 0x271e68: 0x0  nop
    ctx->pc = 0x271e68u;
    // NOP
label_271e6c:
    // 0x271e6c: 0x0  nop
    ctx->pc = 0x271e6cu;
    // NOP
label_271e70:
    // 0x271e70: 0x85f5  .word       0x000085F5                   # INVALID     $zero, $zero, -0x7A0B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271e70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x271E70 raw=0x000085F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_271e74:
    // 0x271e74: 0xe160  .word       0x0000E160                   # add         $gp, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271e74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_271e78:
    // 0x271e78: 0x0  nop
    ctx->pc = 0x271e78u;
    // NOP
label_271e7c:
    // 0x271e7c: 0x0  nop
    ctx->pc = 0x271e7cu;
    // NOP
label_271e80:
    // 0x271e80: 0x8612  .word       0x00008612                   # mflo        $s0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271e80u;
    SET_GPR_U64(ctx, 16, ctx->lo);
label_271e84:
    // 0x271e84: 0xe590  .word       0x0000E590                   # mfhi        $gp # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271e84u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_271e88:
    // 0x271e88: 0x0  nop
    ctx->pc = 0x271e88u;
    // NOP
label_271e8c:
    // 0x271e8c: 0x0  nop
    ctx->pc = 0x271e8cu;
    // NOP
label_271e90:
    // 0x271e90: 0x862f  .word       0x0000862F                   # dsubu       $s0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271e90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_271e94:
    // 0x271e94: 0xe960  .word       0x0000E960                   # add         $sp, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271e94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_271e98:
    // 0x271e98: 0x0  nop
    ctx->pc = 0x271e98u;
    // NOP
label_271e9c:
    // 0x271e9c: 0x0  nop
    ctx->pc = 0x271e9cu;
    // NOP
label_271ea0:
    // 0x271ea0: 0x864d  break       0, 537
    ctx->pc = 0x271ea0u;
    runtime->handleBreak(rdram, ctx);
label_271ea4:
    // 0x271ea4: 0xa1e0  .word       0x0000A1E0                   # add         $s4, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271ea4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_271ea8:
    // 0x271ea8: 0x0  nop
    ctx->pc = 0x271ea8u;
    // NOP
label_271eac:
    // 0x271eac: 0x0  nop
    ctx->pc = 0x271eacu;
    // NOP
label_271eb0:
    // 0x271eb0: 0x8662  .word       0x00008662                   # neg         $s0, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271eb0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
label_271eb4:
    // 0x271eb4: 0xc2c0  sll         $t8, $zero, 11
    ctx->pc = 0x271eb4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_271eb8:
    // 0x271eb8: 0x0  nop
    ctx->pc = 0x271eb8u;
    // NOP
label_271ebc:
    // 0x271ebc: 0x0  nop
    ctx->pc = 0x271ebcu;
    // NOP
label_271ec0:
    // 0x271ec0: 0x867b  dsra        $s0, $zero, 25
    ctx->pc = 0x271ec0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> 25);
label_271ec4:
    // 0x271ec4: 0x5d90  .word       0x00005D90                   # mfhi        $t3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271ec4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_271ec8:
    // 0x271ec8: 0x0  nop
    ctx->pc = 0x271ec8u;
    // NOP
label_271ecc:
    // 0x271ecc: 0x0  nop
    ctx->pc = 0x271eccu;
    // NOP
label_271ed0:
    // 0x271ed0: 0x8687  .word       0x00008687                   # srav        $s0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271ed0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_271ed4:
    // 0x271ed4: 0x9ec0  sll         $s3, $zero, 27
    ctx->pc = 0x271ed4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_271ed8:
    // 0x271ed8: 0x0  nop
    ctx->pc = 0x271ed8u;
    // NOP
label_271edc:
    // 0x271edc: 0x0  nop
    ctx->pc = 0x271edcu;
    // NOP
label_271ee0:
    // 0x271ee0: 0x869b  .word       0x0000869B                   # divu        $s0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271ee0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_271ee4:
    // 0x271ee4: 0x5ba0  .word       0x00005BA0                   # add         $t3, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271ee4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_271ee8:
    // 0x271ee8: 0x0  nop
    ctx->pc = 0x271ee8u;
    // NOP
label_271eec:
    // 0x271eec: 0x0  nop
    ctx->pc = 0x271eecu;
    // NOP
label_271ef0:
    // 0x271ef0: 0x86a7  .word       0x000086A7                   # not         $s0, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271ef0u;
    SET_GPR_U64(ctx, 16, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_271ef4:
    // 0x271ef4: 0xc6a0  .word       0x0000C6A0                   # add         $t8, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271ef4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_271ef8:
    // 0x271ef8: 0x0  nop
    ctx->pc = 0x271ef8u;
    // NOP
label_271efc:
    // 0x271efc: 0x0  nop
    ctx->pc = 0x271efcu;
    // NOP
label_271f00:
    // 0x271f00: 0x86c0  sll         $s0, $zero, 27
    ctx->pc = 0x271f00u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_271f04:
    // 0x271f04: 0x7700  sll         $t6, $zero, 28
    ctx->pc = 0x271f04u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_271f08:
    // 0x271f08: 0x0  nop
    ctx->pc = 0x271f08u;
    // NOP
label_271f0c:
    // 0x271f0c: 0x0  nop
    ctx->pc = 0x271f0cu;
    // NOP
label_271f10:
    // 0x271f10: 0x86cf  .word       0x000086CF                   # sync.p # 00008000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271f10u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_271f14:
    // 0x271f14: 0x9520  .word       0x00009520                   # add         $s2, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271f14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_271f18:
    // 0x271f18: 0x0  nop
    ctx->pc = 0x271f18u;
    // NOP
label_271f1c:
    // 0x271f1c: 0x0  nop
    ctx->pc = 0x271f1cu;
    // NOP
label_271f20:
    // 0x271f20: 0x86e2  .word       0x000086E2                   # neg         $s0, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271f20u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
label_271f24:
    // 0x271f24: 0xab30  tge         $zero, $zero, 684
    ctx->pc = 0x271f24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271f28:
    // 0x271f28: 0x0  nop
    ctx->pc = 0x271f28u;
    // NOP
label_271f2c:
    // 0x271f2c: 0x0  nop
    ctx->pc = 0x271f2cu;
    // NOP
label_271f30:
    // 0x271f30: 0x86f8  dsll        $s0, $zero, 27
    ctx->pc = 0x271f30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) << 27);
label_271f34:
    // 0x271f34: 0xe9e0  .word       0x0000E9E0                   # add         $sp, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271f34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_271f38:
    // 0x271f38: 0x0  nop
    ctx->pc = 0x271f38u;
    // NOP
label_271f3c:
    // 0x271f3c: 0x0  nop
    ctx->pc = 0x271f3cu;
    // NOP
label_271f40:
    // 0x271f40: 0x8716  .word       0x00008716                   # dsrlv       $s0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271f40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_271f44:
    // 0x271f44: 0xdb20  .word       0x0000DB20                   # add         $k1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271f44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_271f48:
    // 0x271f48: 0x0  nop
    ctx->pc = 0x271f48u;
    // NOP
label_271f4c:
    // 0x271f4c: 0x0  nop
    ctx->pc = 0x271f4cu;
    // NOP
label_271f50:
    // 0x271f50: 0x8732  tlt         $zero, $zero, 540
    ctx->pc = 0x271f50u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271f54:
    // 0x271f54: 0xb290  .word       0x0000B290                   # mfhi        $s6 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271f54u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_271f58:
    // 0x271f58: 0x0  nop
    ctx->pc = 0x271f58u;
    // NOP
label_271f5c:
    // 0x271f5c: 0x0  nop
    ctx->pc = 0x271f5cu;
    // NOP
label_271f60:
    // 0x271f60: 0x8749  .word       0x00008749                   # jalr        $s0, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
label_271f64:
    if (ctx->pc == 0x271F64u) {
        ctx->pc = 0x271F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F60u;
        // 0x271f64: 0x85e0  .word       0x000085E0                   # add         $s0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x271F68u;
        goto label_271f68;
    }
    ctx->pc = 0x271F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 16, 0x271F68u);
        ctx->pc = 0x271F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F60u;
        // 0x271f64: 0x85e0  .word       0x000085E0                   # add         $s0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271F60u, 0x271F68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x271F68u;
label_271f68:
    // 0x271f68: 0x0  nop
    ctx->pc = 0x271f68u;
    // NOP
label_271f6c:
    // 0x271f6c: 0x0  nop
    ctx->pc = 0x271f6cu;
    // NOP
label_271f70:
    // 0x271f70: 0x875a  .word       0x0000875A                   # div         $s0, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271f70u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_271f74:
    // 0x271f74: 0x74c0  sll         $t6, $zero, 19
    ctx->pc = 0x271f74u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_271f78:
    // 0x271f78: 0x0  nop
    ctx->pc = 0x271f78u;
    // NOP
label_271f7c:
    // 0x271f7c: 0x0  nop
    ctx->pc = 0x271f7cu;
    // NOP
label_271f80:
    // 0x271f80: 0x8769  .word       0x00008769                   # mtsa        $zero # 00008740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x271f80u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_271f84:
    // 0x271f84: 0x3a70  tge         $zero, $zero, 233
    ctx->pc = 0x271f84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271f88:
    // 0x271f88: 0x0  nop
    ctx->pc = 0x271f88u;
    // NOP
label_271f8c:
    // 0x271f8c: 0x0  nop
    ctx->pc = 0x271f8cu;
    // NOP
label_271f90:
    // 0x271f90: 0x8771  tgeu        $zero, $zero, 541
    ctx->pc = 0x271f90u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271f94:
    // 0x271f94: 0x6640  sll         $t4, $zero, 25
    ctx->pc = 0x271f94u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_271f98:
    // 0x271f98: 0x0  nop
    ctx->pc = 0x271f98u;
    // NOP
label_271f9c:
    // 0x271f9c: 0x0  nop
    ctx->pc = 0x271f9cu;
    // NOP
label_271fa0:
    // 0x271fa0: 0x877e  dsrl32      $s0, $zero, 29
    ctx->pc = 0x271fa0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) >> (32 + 29));
label_271fa4:
    // 0x271fa4: 0x43a0  .word       0x000043A0                   # add         $t0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271fa4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_271fa8:
    // 0x271fa8: 0x0  nop
    ctx->pc = 0x271fa8u;
    // NOP
label_271fac:
    // 0x271fac: 0x0  nop
    ctx->pc = 0x271facu;
    // NOP
label_271fb0:
    // 0x271fb0: 0x8787  .word       0x00008787                   # srav        $s0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271fb0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_271fb4:
    // 0x271fb4: 0x6bf0  tge         $zero, $zero, 431
    ctx->pc = 0x271fb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271fb8:
    // 0x271fb8: 0x0  nop
    ctx->pc = 0x271fb8u;
    // NOP
label_271fbc:
    // 0x271fbc: 0x0  nop
    ctx->pc = 0x271fbcu;
    // NOP
label_271fc0:
    // 0x271fc0: 0x8795  .word       0x00008795                   # INVALID     $zero, $zero, -0x786B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271fc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x271FC0 raw=0x00008795"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_271fc4:
    // 0x271fc4: 0x6550  .word       0x00006550                   # mfhi        $t4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271fc4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_271fc8:
    // 0x271fc8: 0x0  nop
    ctx->pc = 0x271fc8u;
    // NOP
label_271fcc:
    // 0x271fcc: 0x0  nop
    ctx->pc = 0x271fccu;
    // NOP
label_271fd0:
    // 0x271fd0: 0x87a2  .word       0x000087A2                   # neg         $s0, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271fd0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
label_271fd4:
    // 0x271fd4: 0x4d00  sll         $t1, $zero, 20
    ctx->pc = 0x271fd4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_271fd8:
    // 0x271fd8: 0x0  nop
    ctx->pc = 0x271fd8u;
    // NOP
label_271fdc:
    // 0x271fdc: 0x0  nop
    ctx->pc = 0x271fdcu;
    // NOP
label_271fe0:
    // 0x271fe0: 0x87ac  .word       0x000087AC                   # dadd        $s0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271fe0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_271fe4:
    // 0x271fe4: 0x6df0  tge         $zero, $zero, 439
    ctx->pc = 0x271fe4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271fe8:
    // 0x271fe8: 0x0  nop
    ctx->pc = 0x271fe8u;
    // NOP
label_271fec:
    // 0x271fec: 0x0  nop
    ctx->pc = 0x271fecu;
    // NOP
label_271ff0:
    // 0x271ff0: 0x87ba  dsrl        $s0, $zero, 30
    ctx->pc = 0x271ff0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) >> 30);
label_271ff4:
    // 0x271ff4: 0x43f0  tge         $zero, $zero, 271
    ctx->pc = 0x271ff4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271ff8:
    // 0x271ff8: 0x0  nop
    ctx->pc = 0x271ff8u;
    // NOP
label_271ffc:
    // 0x271ffc: 0x0  nop
    ctx->pc = 0x271ffcu;
    // NOP
label_272000:
    // 0x272000: 0x87c3  sra         $s0, $zero, 31
    ctx->pc = 0x272000u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 0), 31));
label_272004:
    // 0x272004: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x272004u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_272008:
    // 0x272008: 0x0  nop
    ctx->pc = 0x272008u;
    // NOP
label_27200c:
    // 0x27200c: 0x0  nop
    ctx->pc = 0x27200cu;
    // NOP
label_272010:
    // 0x272010: 0x87d4  .word       0x000087D4                   # dsllv       $s0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272010u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_272014:
    // 0x272014: 0x6b90  .word       0x00006B90                   # mfhi        $t5 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272014u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_272018:
    // 0x272018: 0x0  nop
    ctx->pc = 0x272018u;
    // NOP
label_27201c:
    // 0x27201c: 0x0  nop
    ctx->pc = 0x27201cu;
    // NOP
label_272020:
    // 0x272020: 0x87e2  .word       0x000087E2                   # neg         $s0, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272020u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
label_272024:
    // 0x272024: 0x25c0  sll         $a0, $zero, 23
    ctx->pc = 0x272024u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_272028:
    // 0x272028: 0x0  nop
    ctx->pc = 0x272028u;
    // NOP
label_27202c:
    // 0x27202c: 0x0  nop
    ctx->pc = 0x27202cu;
    // NOP
label_272030:
    // 0x272030: 0x87e7  .word       0x000087E7                   # not         $s0, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272030u;
    SET_GPR_U64(ctx, 16, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_272034:
    // 0x272034: 0x38a0  .word       0x000038A0                   # add         $a3, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272034u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_272038:
    // 0x272038: 0x0  nop
    ctx->pc = 0x272038u;
    // NOP
label_27203c:
    // 0x27203c: 0x0  nop
    ctx->pc = 0x27203cu;
    // NOP
label_272040:
    // 0x272040: 0x87ef  .word       0x000087EF                   # dsubu       $s0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272040u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_272044:
    // 0x272044: 0x7bf0  tge         $zero, $zero, 495
    ctx->pc = 0x272044u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272048:
    // 0x272048: 0x0  nop
    ctx->pc = 0x272048u;
    // NOP
label_27204c:
    // 0x27204c: 0x0  nop
    ctx->pc = 0x27204cu;
    // NOP
label_272050:
    // 0x272050: 0x87ff  dsra32      $s0, $zero, 31
    ctx->pc = 0x272050u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (32 + 31));
label_272054:
    // 0x272054: 0x5470  tge         $zero, $zero, 337
    ctx->pc = 0x272054u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272058:
    // 0x272058: 0x0  nop
    ctx->pc = 0x272058u;
    // NOP
label_27205c:
    // 0x27205c: 0x0  nop
    ctx->pc = 0x27205cu;
    // NOP
label_272060:
    // 0x272060: 0x880a  movz        $s1, $zero, $zero
    ctx->pc = 0x272060u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_272064:
    // 0x272064: 0x7f90  .word       0x00007F90                   # mfhi        $t7 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272064u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_272068:
    // 0x272068: 0x0  nop
    ctx->pc = 0x272068u;
    // NOP
label_27206c:
    // 0x27206c: 0x0  nop
    ctx->pc = 0x27206cu;
    // NOP
label_272070:
    // 0x272070: 0x881a  div         $s1, $zero, $zero
    ctx->pc = 0x272070u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_272074:
    // 0x272074: 0x8fa0  .word       0x00008FA0                   # add         $s1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272074u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_272078:
    // 0x272078: 0x0  nop
    ctx->pc = 0x272078u;
    // NOP
label_27207c:
    // 0x27207c: 0x0  nop
    ctx->pc = 0x27207cu;
    // NOP
label_272080:
    // 0x272080: 0x882c  dadd        $s1, $zero, $zero
    ctx->pc = 0x272080u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_272084:
    // 0x272084: 0x8f80  sll         $s1, $zero, 30
    ctx->pc = 0x272084u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_272088:
    // 0x272088: 0x0  nop
    ctx->pc = 0x272088u;
    // NOP
label_27208c:
    // 0x27208c: 0x0  nop
    ctx->pc = 0x27208cu;
    // NOP
label_272090:
    // 0x272090: 0x883e  dsrl32      $s1, $zero, 0
    ctx->pc = 0x272090u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) >> (32 + 0));
label_272094:
    // 0x272094: 0x7a20  .word       0x00007A20                   # add         $t7, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272094u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_272098:
    // 0x272098: 0x0  nop
    ctx->pc = 0x272098u;
    // NOP
label_27209c:
    // 0x27209c: 0x0  nop
    ctx->pc = 0x27209cu;
    // NOP
label_2720a0:
    // 0x2720a0: 0x884e  .word       0x0000884E                   # INVALID     $zero, $zero, -0x77B2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2720a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2720A0 raw=0x0000884E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2720a4:
    // 0x2720a4: 0xd970  tge         $zero, $zero, 869
    ctx->pc = 0x2720a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2720a8:
    // 0x2720a8: 0x0  nop
    ctx->pc = 0x2720a8u;
    // NOP
label_2720ac:
    // 0x2720ac: 0x0  nop
    ctx->pc = 0x2720acu;
    // NOP
label_2720b0:
    // 0x2720b0: 0x886a  .word       0x0000886A                   # slt         $s1, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2720b0u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2720b4:
    // 0x2720b4: 0x43f0  tge         $zero, $zero, 271
    ctx->pc = 0x2720b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2720b8:
    // 0x2720b8: 0x0  nop
    ctx->pc = 0x2720b8u;
    // NOP
label_2720bc:
    // 0x2720bc: 0x0  nop
    ctx->pc = 0x2720bcu;
    // NOP
label_2720c0:
    // 0x2720c0: 0x8873  tltu        $zero, $zero, 545
    ctx->pc = 0x2720c0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2720c4:
    // 0x2720c4: 0x6ff0  tge         $zero, $zero, 447
    ctx->pc = 0x2720c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2720c8:
    // 0x2720c8: 0x0  nop
    ctx->pc = 0x2720c8u;
    // NOP
label_2720cc:
    // 0x2720cc: 0x0  nop
    ctx->pc = 0x2720ccu;
    // NOP
label_2720d0:
    // 0x2720d0: 0x8881  .word       0x00008881                   # INVALID     $zero, $zero, -0x777F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2720d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2720D0 raw=0x00008881"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2720d4:
    // 0x2720d4: 0x7ac0  sll         $t7, $zero, 11
    ctx->pc = 0x2720d4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_2720d8:
    // 0x2720d8: 0x0  nop
    ctx->pc = 0x2720d8u;
    // NOP
label_2720dc:
    // 0x2720dc: 0x0  nop
    ctx->pc = 0x2720dcu;
    // NOP
label_2720e0:
    // 0x2720e0: 0x8891  .word       0x00008891                   # mthi        $zero # 00008880 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2720e0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2720e4:
    // 0x2720e4: 0x8050  .word       0x00008050                   # mfhi        $s0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2720e4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_2720e8:
    // 0x2720e8: 0x0  nop
    ctx->pc = 0x2720e8u;
    // NOP
label_2720ec:
    // 0x2720ec: 0x0  nop
    ctx->pc = 0x2720ecu;
    // NOP
label_2720f0:
    // 0x2720f0: 0x88a2  .word       0x000088A2                   # neg         $s1, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2720f0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
label_2720f4:
    // 0x2720f4: 0x4a40  sll         $t1, $zero, 9
    ctx->pc = 0x2720f4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_2720f8:
    // 0x2720f8: 0x0  nop
    ctx->pc = 0x2720f8u;
    // NOP
label_2720fc:
    // 0x2720fc: 0x0  nop
    ctx->pc = 0x2720fcu;
    // NOP
label_272100:
    // 0x272100: 0x88ac  .word       0x000088AC                   # dadd        $s1, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272100u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_272104:
    // 0x272104: 0x8450  .word       0x00008450                   # mfhi        $s0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272104u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_272108:
    // 0x272108: 0x0  nop
    ctx->pc = 0x272108u;
    // NOP
label_27210c:
    // 0x27210c: 0x0  nop
    ctx->pc = 0x27210cu;
    // NOP
label_272110:
    // 0x272110: 0x88bd  .word       0x000088BD                   # INVALID     $zero, $zero, -0x7743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272110u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x272110 raw=0x000088BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272114:
    // 0x272114: 0x9330  tge         $zero, $zero, 588
    ctx->pc = 0x272114u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272118:
    // 0x272118: 0x0  nop
    ctx->pc = 0x272118u;
    // NOP
label_27211c:
    // 0x27211c: 0x0  nop
    ctx->pc = 0x27211cu;
    // NOP
label_272120:
    // 0x272120: 0x88d0  .word       0x000088D0                   # mfhi        $s1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272120u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_272124:
    // 0x272124: 0x7f20  .word       0x00007F20                   # add         $t7, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272124u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_272128:
    // 0x272128: 0x0  nop
    ctx->pc = 0x272128u;
    // NOP
label_27212c:
    // 0x27212c: 0x0  nop
    ctx->pc = 0x27212cu;
    // NOP
label_272130:
    // 0x272130: 0x88e0  .word       0x000088E0                   # add         $s1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272130u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_272134:
    // 0x272134: 0x7620  .word       0x00007620                   # add         $t6, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272134u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_272138:
    // 0x272138: 0x0  nop
    ctx->pc = 0x272138u;
    // NOP
label_27213c:
    // 0x27213c: 0x0  nop
    ctx->pc = 0x27213cu;
    // NOP
label_272140:
    // 0x272140: 0x88ef  .word       0x000088EF                   # dsubu       $s1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272140u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_272144:
    // 0x272144: 0x4e30  tge         $zero, $zero, 312
    ctx->pc = 0x272144u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272148:
    // 0x272148: 0x0  nop
    ctx->pc = 0x272148u;
    // NOP
label_27214c:
    // 0x27214c: 0x0  nop
    ctx->pc = 0x27214cu;
    // NOP
label_272150:
    // 0x272150: 0x88f9  .word       0x000088F9                   # INVALID     $zero, $zero, -0x7707 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272150u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x272150 raw=0x000088F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272154:
    // 0x272154: 0x5900  sll         $t3, $zero, 4
    ctx->pc = 0x272154u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_272158:
    // 0x272158: 0x0  nop
    ctx->pc = 0x272158u;
    // NOP
label_27215c:
    // 0x27215c: 0x0  nop
    ctx->pc = 0x27215cu;
    // NOP
label_272160:
    // 0x272160: 0x8905  .word       0x00008905                   # INVALID     $zero, $zero, -0x76FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272160u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x272160 raw=0x00008905"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272164:
    // 0x272164: 0x7c30  tge         $zero, $zero, 496
    ctx->pc = 0x272164u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272168:
    // 0x272168: 0x0  nop
    ctx->pc = 0x272168u;
    // NOP
label_27216c:
    // 0x27216c: 0x0  nop
    ctx->pc = 0x27216cu;
    // NOP
label_272170:
    // 0x272170: 0x8915  .word       0x00008915                   # INVALID     $zero, $zero, -0x76EB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272170u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x272170 raw=0x00008915"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272174:
    // 0x272174: 0x7cc0  sll         $t7, $zero, 19
    ctx->pc = 0x272174u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_272178:
    // 0x272178: 0x0  nop
    ctx->pc = 0x272178u;
    // NOP
label_27217c:
    // 0x27217c: 0x0  nop
    ctx->pc = 0x27217cu;
    // NOP
label_272180:
    // 0x272180: 0x8925  .word       0x00008925                   # move        $s1, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272180u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_272184:
    // 0x272184: 0xa7a0  .word       0x0000A7A0                   # add         $s4, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272184u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_272188:
    // 0x272188: 0x0  nop
    ctx->pc = 0x272188u;
    // NOP
label_27218c:
    // 0x27218c: 0x0  nop
    ctx->pc = 0x27218cu;
    // NOP
label_272190:
    // 0x272190: 0x893a  dsrl        $s1, $zero, 4
    ctx->pc = 0x272190u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) >> 4);
label_272194:
    // 0x272194: 0x5670  tge         $zero, $zero, 345
    ctx->pc = 0x272194u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272198:
    // 0x272198: 0x0  nop
    ctx->pc = 0x272198u;
    // NOP
label_27219c:
    // 0x27219c: 0x0  nop
    ctx->pc = 0x27219cu;
    // NOP
label_2721a0:
    // 0x2721a0: 0x8945  .word       0x00008945                   # INVALID     $zero, $zero, -0x76BB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2721a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2721A0 raw=0x00008945"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2721a4:
    // 0x2721a4: 0x8bb0  tge         $zero, $zero, 558
    ctx->pc = 0x2721a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2721a8:
    // 0x2721a8: 0x0  nop
    ctx->pc = 0x2721a8u;
    // NOP
label_2721ac:
    // 0x2721ac: 0x0  nop
    ctx->pc = 0x2721acu;
    // NOP
label_2721b0:
    // 0x2721b0: 0x8957  .word       0x00008957                   # dsrav       $s1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2721b0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2721b4:
    // 0x2721b4: 0x6ba0  .word       0x00006BA0                   # add         $t5, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2721b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2721b8:
    // 0x2721b8: 0x0  nop
    ctx->pc = 0x2721b8u;
    // NOP
label_2721bc:
    // 0x2721bc: 0x0  nop
    ctx->pc = 0x2721bcu;
    // NOP
label_2721c0:
    // 0x2721c0: 0x8965  .word       0x00008965                   # move        $s1, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2721c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2721c4:
    // 0x2721c4: 0x8950  .word       0x00008950                   # mfhi        $s1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2721c4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2721c8:
    // 0x2721c8: 0x0  nop
    ctx->pc = 0x2721c8u;
    // NOP
label_2721cc:
    // 0x2721cc: 0x0  nop
    ctx->pc = 0x2721ccu;
    // NOP
label_2721d0:
    // 0x2721d0: 0x8977  .word       0x00008977                   # INVALID     $zero, $zero, -0x7689 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2721d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2721D0 raw=0x00008977"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2721d4:
    // 0x2721d4: 0x99f0  tge         $zero, $zero, 615
    ctx->pc = 0x2721d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2721d8:
    // 0x2721d8: 0x0  nop
    ctx->pc = 0x2721d8u;
    // NOP
label_2721dc:
    // 0x2721dc: 0x0  nop
    ctx->pc = 0x2721dcu;
    // NOP
label_2721e0:
    // 0x2721e0: 0x898b  .word       0x0000898B                   # movn        $s1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2721e0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_2721e4:
    // 0x2721e4: 0x7280  sll         $t6, $zero, 10
    ctx->pc = 0x2721e4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_2721e8:
    // 0x2721e8: 0x0  nop
    ctx->pc = 0x2721e8u;
    // NOP
label_2721ec:
    // 0x2721ec: 0x0  nop
    ctx->pc = 0x2721ecu;
    // NOP
label_2721f0:
    // 0x2721f0: 0x899a  .word       0x0000899A                   # div         $s1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2721f0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2721f4:
    // 0x2721f4: 0x5c20  .word       0x00005C20                   # add         $t3, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2721f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
    ctx->pc = 0x2721f8u;
    return;
}

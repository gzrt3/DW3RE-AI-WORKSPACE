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

// Function: FUN_0019b5e8
// Address: 0x19b5e8 - 0x29b5f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b5e8_part405(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x260a28u: goto label_260a28;
        case 0x260a2cu: goto label_260a2c;
        case 0x260a30u: goto label_260a30;
        case 0x260a34u: goto label_260a34;
        case 0x260a38u: goto label_260a38;
        case 0x260a3cu: goto label_260a3c;
        case 0x260a40u: goto label_260a40;
        case 0x260a44u: goto label_260a44;
        case 0x260a48u: goto label_260a48;
        case 0x260a4cu: goto label_260a4c;
        case 0x260a50u: goto label_260a50;
        case 0x260a54u: goto label_260a54;
        case 0x260a58u: goto label_260a58;
        case 0x260a5cu: goto label_260a5c;
        case 0x260a60u: goto label_260a60;
        case 0x260a64u: goto label_260a64;
        case 0x260a68u: goto label_260a68;
        case 0x260a6cu: goto label_260a6c;
        case 0x260a70u: goto label_260a70;
        case 0x260a74u: goto label_260a74;
        case 0x260a78u: goto label_260a78;
        case 0x260a7cu: goto label_260a7c;
        case 0x260a80u: goto label_260a80;
        case 0x260a84u: goto label_260a84;
        case 0x260a88u: goto label_260a88;
        case 0x260a8cu: goto label_260a8c;
        case 0x260a90u: goto label_260a90;
        case 0x260a94u: goto label_260a94;
        case 0x260a98u: goto label_260a98;
        case 0x260a9cu: goto label_260a9c;
        case 0x260aa0u: goto label_260aa0;
        case 0x260aa4u: goto label_260aa4;
        case 0x260aa8u: goto label_260aa8;
        case 0x260aacu: goto label_260aac;
        case 0x260ab0u: goto label_260ab0;
        case 0x260ab4u: goto label_260ab4;
        case 0x260ab8u: goto label_260ab8;
        case 0x260abcu: goto label_260abc;
        case 0x260ac0u: goto label_260ac0;
        case 0x260ac4u: goto label_260ac4;
        case 0x260ac8u: goto label_260ac8;
        case 0x260accu: goto label_260acc;
        case 0x260ad0u: goto label_260ad0;
        case 0x260ad4u: goto label_260ad4;
        case 0x260ad8u: goto label_260ad8;
        case 0x260adcu: goto label_260adc;
        case 0x260ae0u: goto label_260ae0;
        case 0x260ae4u: goto label_260ae4;
        case 0x260ae8u: goto label_260ae8;
        case 0x260aecu: goto label_260aec;
        case 0x260af0u: goto label_260af0;
        case 0x260af4u: goto label_260af4;
        case 0x260af8u: goto label_260af8;
        case 0x260afcu: goto label_260afc;
        case 0x260b00u: goto label_260b00;
        case 0x260b04u: goto label_260b04;
        case 0x260b08u: goto label_260b08;
        case 0x260b0cu: goto label_260b0c;
        case 0x260b10u: goto label_260b10;
        case 0x260b14u: goto label_260b14;
        case 0x260b18u: goto label_260b18;
        case 0x260b1cu: goto label_260b1c;
        case 0x260b20u: goto label_260b20;
        case 0x260b24u: goto label_260b24;
        case 0x260b28u: goto label_260b28;
        case 0x260b2cu: goto label_260b2c;
        case 0x260b30u: goto label_260b30;
        case 0x260b34u: goto label_260b34;
        case 0x260b38u: goto label_260b38;
        case 0x260b3cu: goto label_260b3c;
        case 0x260b40u: goto label_260b40;
        case 0x260b44u: goto label_260b44;
        case 0x260b48u: goto label_260b48;
        case 0x260b4cu: goto label_260b4c;
        case 0x260b50u: goto label_260b50;
        case 0x260b54u: goto label_260b54;
        case 0x260b58u: goto label_260b58;
        case 0x260b5cu: goto label_260b5c;
        case 0x260b60u: goto label_260b60;
        case 0x260b64u: goto label_260b64;
        case 0x260b68u: goto label_260b68;
        case 0x260b6cu: goto label_260b6c;
        case 0x260b70u: goto label_260b70;
        case 0x260b74u: goto label_260b74;
        case 0x260b78u: goto label_260b78;
        case 0x260b7cu: goto label_260b7c;
        case 0x260b80u: goto label_260b80;
        case 0x260b84u: goto label_260b84;
        case 0x260b88u: goto label_260b88;
        case 0x260b8cu: goto label_260b8c;
        case 0x260b90u: goto label_260b90;
        case 0x260b94u: goto label_260b94;
        case 0x260b98u: goto label_260b98;
        case 0x260b9cu: goto label_260b9c;
        case 0x260ba0u: goto label_260ba0;
        case 0x260ba4u: goto label_260ba4;
        case 0x260ba8u: goto label_260ba8;
        case 0x260bacu: goto label_260bac;
        case 0x260bb0u: goto label_260bb0;
        case 0x260bb4u: goto label_260bb4;
        case 0x260bb8u: goto label_260bb8;
        case 0x260bbcu: goto label_260bbc;
        case 0x260bc0u: goto label_260bc0;
        case 0x260bc4u: goto label_260bc4;
        case 0x260bc8u: goto label_260bc8;
        case 0x260bccu: goto label_260bcc;
        case 0x260bd0u: goto label_260bd0;
        case 0x260bd4u: goto label_260bd4;
        case 0x260bd8u: goto label_260bd8;
        case 0x260bdcu: goto label_260bdc;
        case 0x260be0u: goto label_260be0;
        case 0x260be4u: goto label_260be4;
        case 0x260be8u: goto label_260be8;
        case 0x260becu: goto label_260bec;
        case 0x260bf0u: goto label_260bf0;
        case 0x260bf4u: goto label_260bf4;
        case 0x260bf8u: goto label_260bf8;
        case 0x260bfcu: goto label_260bfc;
        case 0x260c00u: goto label_260c00;
        case 0x260c04u: goto label_260c04;
        case 0x260c08u: goto label_260c08;
        case 0x260c0cu: goto label_260c0c;
        case 0x260c10u: goto label_260c10;
        case 0x260c14u: goto label_260c14;
        case 0x260c18u: goto label_260c18;
        case 0x260c1cu: goto label_260c1c;
        case 0x260c20u: goto label_260c20;
        case 0x260c24u: goto label_260c24;
        case 0x260c28u: goto label_260c28;
        case 0x260c2cu: goto label_260c2c;
        case 0x260c30u: goto label_260c30;
        case 0x260c34u: goto label_260c34;
        case 0x260c38u: goto label_260c38;
        case 0x260c3cu: goto label_260c3c;
        case 0x260c40u: goto label_260c40;
        case 0x260c44u: goto label_260c44;
        case 0x260c48u: goto label_260c48;
        case 0x260c4cu: goto label_260c4c;
        case 0x260c50u: goto label_260c50;
        case 0x260c54u: goto label_260c54;
        case 0x260c58u: goto label_260c58;
        case 0x260c5cu: goto label_260c5c;
        case 0x260c60u: goto label_260c60;
        case 0x260c64u: goto label_260c64;
        case 0x260c68u: goto label_260c68;
        case 0x260c6cu: goto label_260c6c;
        case 0x260c70u: goto label_260c70;
        case 0x260c74u: goto label_260c74;
        case 0x260c78u: goto label_260c78;
        case 0x260c7cu: goto label_260c7c;
        case 0x260c80u: goto label_260c80;
        case 0x260c84u: goto label_260c84;
        case 0x260c88u: goto label_260c88;
        case 0x260c8cu: goto label_260c8c;
        case 0x260c90u: goto label_260c90;
        case 0x260c94u: goto label_260c94;
        case 0x260c98u: goto label_260c98;
        case 0x260c9cu: goto label_260c9c;
        case 0x260ca0u: goto label_260ca0;
        case 0x260ca4u: goto label_260ca4;
        case 0x260ca8u: goto label_260ca8;
        case 0x260cacu: goto label_260cac;
        case 0x260cb0u: goto label_260cb0;
        case 0x260cb4u: goto label_260cb4;
        case 0x260cb8u: goto label_260cb8;
        case 0x260cbcu: goto label_260cbc;
        case 0x260cc0u: goto label_260cc0;
        case 0x260cc4u: goto label_260cc4;
        case 0x260cc8u: goto label_260cc8;
        case 0x260cccu: goto label_260ccc;
        case 0x260cd0u: goto label_260cd0;
        case 0x260cd4u: goto label_260cd4;
        case 0x260cd8u: goto label_260cd8;
        case 0x260cdcu: goto label_260cdc;
        case 0x260ce0u: goto label_260ce0;
        case 0x260ce4u: goto label_260ce4;
        case 0x260ce8u: goto label_260ce8;
        case 0x260cecu: goto label_260cec;
        case 0x260cf0u: goto label_260cf0;
        case 0x260cf4u: goto label_260cf4;
        case 0x260cf8u: goto label_260cf8;
        case 0x260cfcu: goto label_260cfc;
        case 0x260d00u: goto label_260d00;
        case 0x260d04u: goto label_260d04;
        case 0x260d08u: goto label_260d08;
        case 0x260d0cu: goto label_260d0c;
        case 0x260d10u: goto label_260d10;
        case 0x260d14u: goto label_260d14;
        case 0x260d18u: goto label_260d18;
        case 0x260d1cu: goto label_260d1c;
        case 0x260d20u: goto label_260d20;
        case 0x260d24u: goto label_260d24;
        case 0x260d28u: goto label_260d28;
        case 0x260d2cu: goto label_260d2c;
        case 0x260d30u: goto label_260d30;
        case 0x260d34u: goto label_260d34;
        case 0x260d38u: goto label_260d38;
        case 0x260d3cu: goto label_260d3c;
        case 0x260d40u: goto label_260d40;
        case 0x260d44u: goto label_260d44;
        case 0x260d48u: goto label_260d48;
        case 0x260d4cu: goto label_260d4c;
        case 0x260d50u: goto label_260d50;
        case 0x260d54u: goto label_260d54;
        case 0x260d58u: goto label_260d58;
        case 0x260d5cu: goto label_260d5c;
        case 0x260d60u: goto label_260d60;
        case 0x260d64u: goto label_260d64;
        case 0x260d68u: goto label_260d68;
        case 0x260d6cu: goto label_260d6c;
        case 0x260d70u: goto label_260d70;
        case 0x260d74u: goto label_260d74;
        case 0x260d78u: goto label_260d78;
        case 0x260d7cu: goto label_260d7c;
        case 0x260d80u: goto label_260d80;
        case 0x260d84u: goto label_260d84;
        case 0x260d88u: goto label_260d88;
        case 0x260d8cu: goto label_260d8c;
        case 0x260d90u: goto label_260d90;
        case 0x260d94u: goto label_260d94;
        case 0x260d98u: goto label_260d98;
        case 0x260d9cu: goto label_260d9c;
        case 0x260da0u: goto label_260da0;
        case 0x260da4u: goto label_260da4;
        case 0x260da8u: goto label_260da8;
        case 0x260dacu: goto label_260dac;
        case 0x260db0u: goto label_260db0;
        case 0x260db4u: goto label_260db4;
        case 0x260db8u: goto label_260db8;
        case 0x260dbcu: goto label_260dbc;
        case 0x260dc0u: goto label_260dc0;
        case 0x260dc4u: goto label_260dc4;
        case 0x260dc8u: goto label_260dc8;
        case 0x260dccu: goto label_260dcc;
        case 0x260dd0u: goto label_260dd0;
        case 0x260dd4u: goto label_260dd4;
        case 0x260dd8u: goto label_260dd8;
        case 0x260ddcu: goto label_260ddc;
        case 0x260de0u: goto label_260de0;
        case 0x260de4u: goto label_260de4;
        case 0x260de8u: goto label_260de8;
        case 0x260decu: goto label_260dec;
        case 0x260df0u: goto label_260df0;
        case 0x260df4u: goto label_260df4;
        case 0x260df8u: goto label_260df8;
        case 0x260dfcu: goto label_260dfc;
        case 0x260e00u: goto label_260e00;
        case 0x260e04u: goto label_260e04;
        case 0x260e08u: goto label_260e08;
        case 0x260e0cu: goto label_260e0c;
        case 0x260e10u: goto label_260e10;
        case 0x260e14u: goto label_260e14;
        case 0x260e18u: goto label_260e18;
        case 0x260e1cu: goto label_260e1c;
        case 0x260e20u: goto label_260e20;
        case 0x260e24u: goto label_260e24;
        case 0x260e28u: goto label_260e28;
        case 0x260e2cu: goto label_260e2c;
        case 0x260e30u: goto label_260e30;
        case 0x260e34u: goto label_260e34;
        case 0x260e38u: goto label_260e38;
        case 0x260e3cu: goto label_260e3c;
        case 0x260e40u: goto label_260e40;
        case 0x260e44u: goto label_260e44;
        case 0x260e48u: goto label_260e48;
        case 0x260e4cu: goto label_260e4c;
        case 0x260e50u: goto label_260e50;
        case 0x260e54u: goto label_260e54;
        case 0x260e58u: goto label_260e58;
        case 0x260e5cu: goto label_260e5c;
        case 0x260e60u: goto label_260e60;
        case 0x260e64u: goto label_260e64;
        case 0x260e68u: goto label_260e68;
        case 0x260e6cu: goto label_260e6c;
        case 0x260e70u: goto label_260e70;
        case 0x260e74u: goto label_260e74;
        case 0x260e78u: goto label_260e78;
        case 0x260e7cu: goto label_260e7c;
        case 0x260e80u: goto label_260e80;
        case 0x260e84u: goto label_260e84;
        case 0x260e88u: goto label_260e88;
        case 0x260e8cu: goto label_260e8c;
        case 0x260e90u: goto label_260e90;
        case 0x260e94u: goto label_260e94;
        case 0x260e98u: goto label_260e98;
        case 0x260e9cu: goto label_260e9c;
        case 0x260ea0u: goto label_260ea0;
        case 0x260ea4u: goto label_260ea4;
        case 0x260ea8u: goto label_260ea8;
        case 0x260eacu: goto label_260eac;
        case 0x260eb0u: goto label_260eb0;
        case 0x260eb4u: goto label_260eb4;
        case 0x260eb8u: goto label_260eb8;
        case 0x260ebcu: goto label_260ebc;
        case 0x260ec0u: goto label_260ec0;
        case 0x260ec4u: goto label_260ec4;
        case 0x260ec8u: goto label_260ec8;
        case 0x260eccu: goto label_260ecc;
        case 0x260ed0u: goto label_260ed0;
        case 0x260ed4u: goto label_260ed4;
        case 0x260ed8u: goto label_260ed8;
        case 0x260edcu: goto label_260edc;
        case 0x260ee0u: goto label_260ee0;
        case 0x260ee4u: goto label_260ee4;
        case 0x260ee8u: goto label_260ee8;
        case 0x260eecu: goto label_260eec;
        case 0x260ef0u: goto label_260ef0;
        case 0x260ef4u: goto label_260ef4;
        case 0x260ef8u: goto label_260ef8;
        case 0x260efcu: goto label_260efc;
        case 0x260f00u: goto label_260f00;
        case 0x260f04u: goto label_260f04;
        case 0x260f08u: goto label_260f08;
        case 0x260f0cu: goto label_260f0c;
        case 0x260f10u: goto label_260f10;
        case 0x260f14u: goto label_260f14;
        case 0x260f18u: goto label_260f18;
        case 0x260f1cu: goto label_260f1c;
        case 0x260f20u: goto label_260f20;
        case 0x260f24u: goto label_260f24;
        case 0x260f28u: goto label_260f28;
        case 0x260f2cu: goto label_260f2c;
        case 0x260f30u: goto label_260f30;
        case 0x260f34u: goto label_260f34;
        case 0x260f38u: goto label_260f38;
        case 0x260f3cu: goto label_260f3c;
        case 0x260f40u: goto label_260f40;
        case 0x260f44u: goto label_260f44;
        case 0x260f48u: goto label_260f48;
        case 0x260f4cu: goto label_260f4c;
        case 0x260f50u: goto label_260f50;
        case 0x260f54u: goto label_260f54;
        case 0x260f58u: goto label_260f58;
        case 0x260f5cu: goto label_260f5c;
        case 0x260f60u: goto label_260f60;
        case 0x260f64u: goto label_260f64;
        case 0x260f68u: goto label_260f68;
        case 0x260f6cu: goto label_260f6c;
        case 0x260f70u: goto label_260f70;
        case 0x260f74u: goto label_260f74;
        case 0x260f78u: goto label_260f78;
        case 0x260f7cu: goto label_260f7c;
        case 0x260f80u: goto label_260f80;
        case 0x260f84u: goto label_260f84;
        case 0x260f88u: goto label_260f88;
        case 0x260f8cu: goto label_260f8c;
        case 0x260f90u: goto label_260f90;
        case 0x260f94u: goto label_260f94;
        case 0x260f98u: goto label_260f98;
        case 0x260f9cu: goto label_260f9c;
        case 0x260fa0u: goto label_260fa0;
        case 0x260fa4u: goto label_260fa4;
        case 0x260fa8u: goto label_260fa8;
        case 0x260facu: goto label_260fac;
        case 0x260fb0u: goto label_260fb0;
        case 0x260fb4u: goto label_260fb4;
        case 0x260fb8u: goto label_260fb8;
        case 0x260fbcu: goto label_260fbc;
        case 0x260fc0u: goto label_260fc0;
        case 0x260fc4u: goto label_260fc4;
        case 0x260fc8u: goto label_260fc8;
        case 0x260fccu: goto label_260fcc;
        case 0x260fd0u: goto label_260fd0;
        case 0x260fd4u: goto label_260fd4;
        case 0x260fd8u: goto label_260fd8;
        case 0x260fdcu: goto label_260fdc;
        case 0x260fe0u: goto label_260fe0;
        case 0x260fe4u: goto label_260fe4;
        case 0x260fe8u: goto label_260fe8;
        case 0x260fecu: goto label_260fec;
        case 0x260ff0u: goto label_260ff0;
        case 0x260ff4u: goto label_260ff4;
        case 0x260ff8u: goto label_260ff8;
        case 0x260ffcu: goto label_260ffc;
        case 0x261000u: goto label_261000;
        case 0x261004u: goto label_261004;
        case 0x261008u: goto label_261008;
        case 0x26100cu: goto label_26100c;
        case 0x261010u: goto label_261010;
        case 0x261014u: goto label_261014;
        case 0x261018u: goto label_261018;
        case 0x26101cu: goto label_26101c;
        case 0x261020u: goto label_261020;
        case 0x261024u: goto label_261024;
        case 0x261028u: goto label_261028;
        case 0x26102cu: goto label_26102c;
        case 0x261030u: goto label_261030;
        case 0x261034u: goto label_261034;
        case 0x261038u: goto label_261038;
        case 0x26103cu: goto label_26103c;
        case 0x261040u: goto label_261040;
        case 0x261044u: goto label_261044;
        case 0x261048u: goto label_261048;
        case 0x26104cu: goto label_26104c;
        case 0x261050u: goto label_261050;
        case 0x261054u: goto label_261054;
        case 0x261058u: goto label_261058;
        case 0x26105cu: goto label_26105c;
        case 0x261060u: goto label_261060;
        case 0x261064u: goto label_261064;
        case 0x261068u: goto label_261068;
        case 0x26106cu: goto label_26106c;
        case 0x261070u: goto label_261070;
        case 0x261074u: goto label_261074;
        case 0x261078u: goto label_261078;
        case 0x26107cu: goto label_26107c;
        case 0x261080u: goto label_261080;
        case 0x261084u: goto label_261084;
        case 0x261088u: goto label_261088;
        case 0x26108cu: goto label_26108c;
        case 0x261090u: goto label_261090;
        case 0x261094u: goto label_261094;
        case 0x261098u: goto label_261098;
        case 0x26109cu: goto label_26109c;
        case 0x2610a0u: goto label_2610a0;
        case 0x2610a4u: goto label_2610a4;
        case 0x2610a8u: goto label_2610a8;
        case 0x2610acu: goto label_2610ac;
        case 0x2610b0u: goto label_2610b0;
        case 0x2610b4u: goto label_2610b4;
        case 0x2610b8u: goto label_2610b8;
        case 0x2610bcu: goto label_2610bc;
        case 0x2610c0u: goto label_2610c0;
        case 0x2610c4u: goto label_2610c4;
        case 0x2610c8u: goto label_2610c8;
        case 0x2610ccu: goto label_2610cc;
        case 0x2610d0u: goto label_2610d0;
        case 0x2610d4u: goto label_2610d4;
        case 0x2610d8u: goto label_2610d8;
        case 0x2610dcu: goto label_2610dc;
        case 0x2610e0u: goto label_2610e0;
        case 0x2610e4u: goto label_2610e4;
        case 0x2610e8u: goto label_2610e8;
        case 0x2610ecu: goto label_2610ec;
        case 0x2610f0u: goto label_2610f0;
        case 0x2610f4u: goto label_2610f4;
        case 0x2610f8u: goto label_2610f8;
        case 0x2610fcu: goto label_2610fc;
        case 0x261100u: goto label_261100;
        case 0x261104u: goto label_261104;
        case 0x261108u: goto label_261108;
        case 0x26110cu: goto label_26110c;
        case 0x261110u: goto label_261110;
        case 0x261114u: goto label_261114;
        case 0x261118u: goto label_261118;
        case 0x26111cu: goto label_26111c;
        case 0x261120u: goto label_261120;
        case 0x261124u: goto label_261124;
        case 0x261128u: goto label_261128;
        case 0x26112cu: goto label_26112c;
        case 0x261130u: goto label_261130;
        case 0x261134u: goto label_261134;
        case 0x261138u: goto label_261138;
        case 0x26113cu: goto label_26113c;
        case 0x261140u: goto label_261140;
        case 0x261144u: goto label_261144;
        case 0x261148u: goto label_261148;
        case 0x26114cu: goto label_26114c;
        case 0x261150u: goto label_261150;
        case 0x261154u: goto label_261154;
        case 0x261158u: goto label_261158;
        case 0x26115cu: goto label_26115c;
        case 0x261160u: goto label_261160;
        case 0x261164u: goto label_261164;
        case 0x261168u: goto label_261168;
        case 0x26116cu: goto label_26116c;
        case 0x261170u: goto label_261170;
        case 0x261174u: goto label_261174;
        case 0x261178u: goto label_261178;
        case 0x26117cu: goto label_26117c;
        case 0x261180u: goto label_261180;
        case 0x261184u: goto label_261184;
        case 0x261188u: goto label_261188;
        case 0x26118cu: goto label_26118c;
        case 0x261190u: goto label_261190;
        case 0x261194u: goto label_261194;
        case 0x261198u: goto label_261198;
        case 0x26119cu: goto label_26119c;
        case 0x2611a0u: goto label_2611a0;
        case 0x2611a4u: goto label_2611a4;
        case 0x2611a8u: goto label_2611a8;
        case 0x2611acu: goto label_2611ac;
        case 0x2611b0u: goto label_2611b0;
        case 0x2611b4u: goto label_2611b4;
        case 0x2611b8u: goto label_2611b8;
        case 0x2611bcu: goto label_2611bc;
        case 0x2611c0u: goto label_2611c0;
        case 0x2611c4u: goto label_2611c4;
        case 0x2611c8u: goto label_2611c8;
        case 0x2611ccu: goto label_2611cc;
        case 0x2611d0u: goto label_2611d0;
        case 0x2611d4u: goto label_2611d4;
        case 0x2611d8u: goto label_2611d8;
        case 0x2611dcu: goto label_2611dc;
        case 0x2611e0u: goto label_2611e0;
        case 0x2611e4u: goto label_2611e4;
        case 0x2611e8u: goto label_2611e8;
        case 0x2611ecu: goto label_2611ec;
        case 0x2611f0u: goto label_2611f0;
        case 0x2611f4u: goto label_2611f4;
        default: return;
    }

label_260a28:
    // 0x260a28: 0x0  nop
    ctx->pc = 0x260a28u;
    // NOP
label_260a2c:
    // 0x260a2c: 0x0  nop
    ctx->pc = 0x260a2cu;
    // NOP
label_260a30:
    // 0x260a30: 0xb1f6  tne         $zero, $zero, 711
    ctx->pc = 0x260a30u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260a34:
    // 0x260a34: 0xa4a0  .word       0x0000A4A0                   # add         $s4, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260a34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_260a38:
    // 0x260a38: 0x0  nop
    ctx->pc = 0x260a38u;
    // NOP
label_260a3c:
    // 0x260a3c: 0x0  nop
    ctx->pc = 0x260a3cu;
    // NOP
label_260a40:
    // 0x260a40: 0xb20b  .word       0x0000B20B                   # movn        $s6, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260a40u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_260a44:
    // 0x260a44: 0x57e0  .word       0x000057E0                   # add         $t2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260a44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_260a48:
    // 0x260a48: 0x0  nop
    ctx->pc = 0x260a48u;
    // NOP
label_260a4c:
    // 0x260a4c: 0x0  nop
    ctx->pc = 0x260a4cu;
    // NOP
label_260a50:
    // 0x260a50: 0xb216  .word       0x0000B216                   # dsrlv       $s6, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260a50u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_260a54:
    // 0x260a54: 0x5770  tge         $zero, $zero, 349
    ctx->pc = 0x260a54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260a58:
    // 0x260a58: 0x0  nop
    ctx->pc = 0x260a58u;
    // NOP
label_260a5c:
    // 0x260a5c: 0x0  nop
    ctx->pc = 0x260a5cu;
    // NOP
label_260a60:
    // 0x260a60: 0xb221  .word       0x0000B221                   # addu        $s6, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260a60u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_260a64:
    // 0x260a64: 0x13550  .word       0x00013550                   # mfhi        $a2 # 00010540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260a64u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_260a68:
    // 0x260a68: 0x0  nop
    ctx->pc = 0x260a68u;
    // NOP
label_260a6c:
    // 0x260a6c: 0x0  nop
    ctx->pc = 0x260a6cu;
    // NOP
label_260a70:
    // 0x260a70: 0xb248  .word       0x0000B248                   # jr          $zero # 0000B240 <InstrIdType: CPU_SPECIAL>
label_260a74:
    if (ctx->pc == 0x260A74u) {
        ctx->pc = 0x260A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260A70u;
        // 0x260a74: 0x6c50  .word       0x00006C50                   # mfhi        $t5 # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 13, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x260A78u;
        goto label_260a78;
    }
    ctx->pc = 0x260A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x260A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260A70u;
        // 0x260a74: 0x6c50  .word       0x00006C50                   # mfhi        $t5 # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 13, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260A70u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x260A78u;
label_260a78:
    // 0x260a78: 0x0  nop
    ctx->pc = 0x260a78u;
    // NOP
label_260a7c:
    // 0x260a7c: 0x0  nop
    ctx->pc = 0x260a7cu;
    // NOP
label_260a80:
    // 0x260a80: 0xb256  .word       0x0000B256                   # dsrlv       $s6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260a80u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_260a84:
    // 0x260a84: 0x2ce0  .word       0x00002CE0                   # add         $a1, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260a84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_260a88:
    // 0x260a88: 0x0  nop
    ctx->pc = 0x260a88u;
    // NOP
label_260a8c:
    // 0x260a8c: 0x0  nop
    ctx->pc = 0x260a8cu;
    // NOP
label_260a90:
    // 0x260a90: 0xb25c  .word       0x0000B25C                   # dmult       $zero, $zero # 0000B240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260a90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x260A90 raw=0x0000B25C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_260a94:
    // 0x260a94: 0x2b80  sll         $a1, $zero, 14
    ctx->pc = 0x260a94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_260a98:
    // 0x260a98: 0x0  nop
    ctx->pc = 0x260a98u;
    // NOP
label_260a9c:
    // 0x260a9c: 0x0  nop
    ctx->pc = 0x260a9cu;
    // NOP
label_260aa0:
    // 0x260aa0: 0xb262  .word       0x0000B262                   # neg         $s6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260aa0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 22, (int32_t)tmp); }
label_260aa4:
    // 0x260aa4: 0x3c50  .word       0x00003C50                   # mfhi        $a3 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260aa4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_260aa8:
    // 0x260aa8: 0x0  nop
    ctx->pc = 0x260aa8u;
    // NOP
label_260aac:
    // 0x260aac: 0x0  nop
    ctx->pc = 0x260aacu;
    // NOP
label_260ab0:
    // 0x260ab0: 0xb26a  .word       0x0000B26A                   # slt         $s6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260ab0u;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_260ab4:
    // 0x260ab4: 0xcfc0  sll         $t9, $zero, 31
    ctx->pc = 0x260ab4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_260ab8:
    // 0x260ab8: 0x0  nop
    ctx->pc = 0x260ab8u;
    // NOP
label_260abc:
    // 0x260abc: 0x0  nop
    ctx->pc = 0x260abcu;
    // NOP
label_260ac0:
    // 0x260ac0: 0xb284  .word       0x0000B284                   # sllv        $s6, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260ac0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_260ac4:
    // 0x260ac4: 0x2830  tge         $zero, $zero, 160
    ctx->pc = 0x260ac4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260ac8:
    // 0x260ac8: 0x0  nop
    ctx->pc = 0x260ac8u;
    // NOP
label_260acc:
    // 0x260acc: 0x0  nop
    ctx->pc = 0x260accu;
    // NOP
label_260ad0:
    // 0x260ad0: 0xb28a  .word       0x0000B28A                   # movz        $s6, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260ad0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_260ad4:
    // 0x260ad4: 0x7b90  .word       0x00007B90                   # mfhi        $t7 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260ad4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_260ad8:
    // 0x260ad8: 0x0  nop
    ctx->pc = 0x260ad8u;
    // NOP
label_260adc:
    // 0x260adc: 0x0  nop
    ctx->pc = 0x260adcu;
    // NOP
label_260ae0:
    // 0x260ae0: 0xb29a  .word       0x0000B29A                   # div         $s6, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260ae0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_260ae4:
    // 0x260ae4: 0x135b0  tge         $zero, $at, 214
    ctx->pc = 0x260ae4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_260ae8:
    // 0x260ae8: 0x0  nop
    ctx->pc = 0x260ae8u;
    // NOP
label_260aec:
    // 0x260aec: 0x0  nop
    ctx->pc = 0x260aecu;
    // NOP
label_260af0:
    // 0x260af0: 0xb2c1  .word       0x0000B2C1                   # INVALID     $zero, $zero, -0x4D3F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260af0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x260AF0 raw=0x0000B2C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_260af4:
    // 0x260af4: 0xb3d0  .word       0x0000B3D0                   # mfhi        $s6 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260af4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_260af8:
    // 0x260af8: 0x0  nop
    ctx->pc = 0x260af8u;
    // NOP
label_260afc:
    // 0x260afc: 0x0  nop
    ctx->pc = 0x260afcu;
    // NOP
label_260b00:
    // 0x260b00: 0xb2d8  .word       0x0000B2D8                   # mult        $s6, $zero, $zero # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x260b00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_260b04:
    // 0x260b04: 0x8170  tge         $zero, $zero, 517
    ctx->pc = 0x260b04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260b08:
    // 0x260b08: 0x0  nop
    ctx->pc = 0x260b08u;
    // NOP
label_260b0c:
    // 0x260b0c: 0x0  nop
    ctx->pc = 0x260b0cu;
    // NOP
label_260b10:
    // 0x260b10: 0xb2e9  .word       0x0000B2E9                   # mtsa        $zero # 0000B2C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x260b10u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_260b14:
    // 0x260b14: 0xc760  .word       0x0000C760                   # add         $t8, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260b14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_260b18:
    // 0x260b18: 0x0  nop
    ctx->pc = 0x260b18u;
    // NOP
label_260b1c:
    // 0x260b1c: 0x0  nop
    ctx->pc = 0x260b1cu;
    // NOP
label_260b20:
    // 0x260b20: 0xb302  srl         $s6, $zero, 12
    ctx->pc = 0x260b20u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 0), 12));
label_260b24:
    // 0x260b24: 0x38c0  sll         $a3, $zero, 3
    ctx->pc = 0x260b24u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_260b28:
    // 0x260b28: 0x0  nop
    ctx->pc = 0x260b28u;
    // NOP
label_260b2c:
    // 0x260b2c: 0x0  nop
    ctx->pc = 0x260b2cu;
    // NOP
label_260b30:
    // 0x260b30: 0xb30a  .word       0x0000B30A                   # movz        $s6, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260b30u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_260b34:
    // 0x260b34: 0xb890  .word       0x0000B890                   # mfhi        $s7 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260b34u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_260b38:
    // 0x260b38: 0x0  nop
    ctx->pc = 0x260b38u;
    // NOP
label_260b3c:
    // 0x260b3c: 0x0  nop
    ctx->pc = 0x260b3cu;
    // NOP
label_260b40:
    // 0x260b40: 0xb322  .word       0x0000B322                   # neg         $s6, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260b40u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 22, (int32_t)tmp); }
label_260b44:
    // 0x260b44: 0xca50  .word       0x0000CA50                   # mfhi        $t9 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260b44u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_260b48:
    // 0x260b48: 0x0  nop
    ctx->pc = 0x260b48u;
    // NOP
label_260b4c:
    // 0x260b4c: 0x0  nop
    ctx->pc = 0x260b4cu;
    // NOP
label_260b50:
    // 0x260b50: 0xb33c  dsll32      $s6, $zero, 12
    ctx->pc = 0x260b50u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << (32 + 12));
label_260b54:
    // 0x260b54: 0x9dc0  sll         $s3, $zero, 23
    ctx->pc = 0x260b54u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_260b58:
    // 0x260b58: 0x0  nop
    ctx->pc = 0x260b58u;
    // NOP
label_260b5c:
    // 0x260b5c: 0x0  nop
    ctx->pc = 0x260b5cu;
    // NOP
label_260b60:
    // 0x260b60: 0xb350  .word       0x0000B350                   # mfhi        $s6 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260b60u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_260b64:
    // 0x260b64: 0xcfa0  .word       0x0000CFA0                   # add         $t9, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260b64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_260b68:
    // 0x260b68: 0x0  nop
    ctx->pc = 0x260b68u;
    // NOP
label_260b6c:
    // 0x260b6c: 0x0  nop
    ctx->pc = 0x260b6cu;
    // NOP
label_260b70:
    // 0x260b70: 0xb36a  .word       0x0000B36A                   # slt         $s6, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260b70u;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_260b74:
    // 0x260b74: 0x1ba30  tge         $zero, $at, 744
    ctx->pc = 0x260b74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_260b78:
    // 0x260b78: 0x0  nop
    ctx->pc = 0x260b78u;
    // NOP
label_260b7c:
    // 0x260b7c: 0x0  nop
    ctx->pc = 0x260b7cu;
    // NOP
label_260b80:
    // 0x260b80: 0xb3a2  .word       0x0000B3A2                   # neg         $s6, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260b80u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 22, (int32_t)tmp); }
label_260b84:
    // 0x260b84: 0x5300  sll         $t2, $zero, 12
    ctx->pc = 0x260b84u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_260b88:
    // 0x260b88: 0x0  nop
    ctx->pc = 0x260b88u;
    // NOP
label_260b8c:
    // 0x260b8c: 0x0  nop
    ctx->pc = 0x260b8cu;
    // NOP
label_260b90:
    // 0x260b90: 0xb3ad  .word       0x0000B3AD                   # daddu       $s6, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260b90u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_260b94:
    // 0x260b94: 0x58c0  sll         $t3, $zero, 3
    ctx->pc = 0x260b94u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_260b98:
    // 0x260b98: 0x0  nop
    ctx->pc = 0x260b98u;
    // NOP
label_260b9c:
    // 0x260b9c: 0x0  nop
    ctx->pc = 0x260b9cu;
    // NOP
label_260ba0:
    // 0x260ba0: 0xb3b9  .word       0x0000B3B9                   # INVALID     $zero, $zero, -0x4C47 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260ba0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x260BA0 raw=0x0000B3B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_260ba4:
    // 0x260ba4: 0xbac0  sll         $s7, $zero, 11
    ctx->pc = 0x260ba4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_260ba8:
    // 0x260ba8: 0x0  nop
    ctx->pc = 0x260ba8u;
    // NOP
label_260bac:
    // 0x260bac: 0x0  nop
    ctx->pc = 0x260bacu;
    // NOP
label_260bb0:
    // 0x260bb0: 0xb3d1  .word       0x0000B3D1                   # mthi        $zero # 0000B3C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260bb0u;
    ctx->hi = GPR_U64(ctx, 0);
label_260bb4:
    // 0x260bb4: 0xe850  .word       0x0000E850                   # mfhi        $sp # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260bb4u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_260bb8:
    // 0x260bb8: 0x0  nop
    ctx->pc = 0x260bb8u;
    // NOP
label_260bbc:
    // 0x260bbc: 0x0  nop
    ctx->pc = 0x260bbcu;
    // NOP
label_260bc0:
    // 0x260bc0: 0xb3ef  .word       0x0000B3EF                   # dsubu       $s6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260bc0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_260bc4:
    // 0x260bc4: 0xc480  sll         $t8, $zero, 18
    ctx->pc = 0x260bc4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_260bc8:
    // 0x260bc8: 0x0  nop
    ctx->pc = 0x260bc8u;
    // NOP
label_260bcc:
    // 0x260bcc: 0x0  nop
    ctx->pc = 0x260bccu;
    // NOP
label_260bd0:
    // 0x260bd0: 0xb408  .word       0x0000B408                   # jr          $zero # 0000B400 <InstrIdType: CPU_SPECIAL>
label_260bd4:
    if (ctx->pc == 0x260BD4u) {
        ctx->pc = 0x260BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260BD0u;
        // 0x260bd4: 0x13e0  .word       0x000013E0                   # add         $v0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x260BD8u;
        goto label_260bd8;
    }
    ctx->pc = 0x260BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x260BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260BD0u;
        // 0x260bd4: 0x13e0  .word       0x000013E0                   # add         $v0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260BD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x260BD8u;
label_260bd8:
    // 0x260bd8: 0x0  nop
    ctx->pc = 0x260bd8u;
    // NOP
label_260bdc:
    // 0x260bdc: 0x0  nop
    ctx->pc = 0x260bdcu;
    // NOP
label_260be0:
    // 0x260be0: 0xb40b  .word       0x0000B40B                   # movn        $s6, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260be0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_260be4:
    // 0x260be4: 0x6580  sll         $t4, $zero, 22
    ctx->pc = 0x260be4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_260be8:
    // 0x260be8: 0x0  nop
    ctx->pc = 0x260be8u;
    // NOP
label_260bec:
    // 0x260bec: 0x0  nop
    ctx->pc = 0x260becu;
    // NOP
label_260bf0:
    // 0x260bf0: 0xb418  .word       0x0000B418                   # mult        $s6, $zero, $zero # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x260bf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_260bf4:
    // 0x260bf4: 0x1d90  .word       0x00001D90                   # mfhi        $v1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260bf4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_260bf8:
    // 0x260bf8: 0x0  nop
    ctx->pc = 0x260bf8u;
    // NOP
label_260bfc:
    // 0x260bfc: 0x0  nop
    ctx->pc = 0x260bfcu;
    // NOP
label_260c00:
    // 0x260c00: 0xb41c  .word       0x0000B41C                   # dmult       $zero, $zero # 0000B400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260c00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x260C00 raw=0x0000B41C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_260c04:
    // 0x260c04: 0x5560  .word       0x00005560                   # add         $t2, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260c04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_260c08:
    // 0x260c08: 0x0  nop
    ctx->pc = 0x260c08u;
    // NOP
label_260c0c:
    // 0x260c0c: 0x0  nop
    ctx->pc = 0x260c0cu;
    // NOP
label_260c10:
    // 0x260c10: 0xb427  .word       0x0000B427                   # not         $s6, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260c10u;
    SET_GPR_U64(ctx, 22, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_260c14:
    // 0x260c14: 0x70e0  .word       0x000070E0                   # add         $t6, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260c14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_260c18:
    // 0x260c18: 0x0  nop
    ctx->pc = 0x260c18u;
    // NOP
label_260c1c:
    // 0x260c1c: 0x0  nop
    ctx->pc = 0x260c1cu;
    // NOP
label_260c20:
    // 0x260c20: 0xb436  tne         $zero, $zero, 720
    ctx->pc = 0x260c20u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260c24:
    // 0x260c24: 0x7470  tge         $zero, $zero, 465
    ctx->pc = 0x260c24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260c28:
    // 0x260c28: 0x0  nop
    ctx->pc = 0x260c28u;
    // NOP
label_260c2c:
    // 0x260c2c: 0x0  nop
    ctx->pc = 0x260c2cu;
    // NOP
label_260c30:
    // 0x260c30: 0xb445  .word       0x0000B445                   # INVALID     $zero, $zero, -0x4BBB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260c30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x260C30 raw=0x0000B445"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_260c34:
    // 0x260c34: 0x3600  sll         $a2, $zero, 24
    ctx->pc = 0x260c34u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_260c38:
    // 0x260c38: 0x0  nop
    ctx->pc = 0x260c38u;
    // NOP
label_260c3c:
    // 0x260c3c: 0x0  nop
    ctx->pc = 0x260c3cu;
    // NOP
label_260c40:
    // 0x260c40: 0xb44c  syscall     721
    ctx->pc = 0x260c40u;
    ctx->pc = 0x260C44u;
runtime->handleSyscall(rdram, ctx, 0x2D1u);
label_260c44:
    // 0x260c44: 0x3c00  sll         $a3, $zero, 16
    ctx->pc = 0x260c44u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_260c48:
    // 0x260c48: 0x0  nop
    ctx->pc = 0x260c48u;
    // NOP
label_260c4c:
    // 0x260c4c: 0x0  nop
    ctx->pc = 0x260c4cu;
    // NOP
label_260c50:
    // 0x260c50: 0xb454  .word       0x0000B454                   # dsllv       $s6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260c50u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_260c54:
    // 0x260c54: 0x27d0  .word       0x000027D0                   # mfhi        $a0 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260c54u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_260c58:
    // 0x260c58: 0x0  nop
    ctx->pc = 0x260c58u;
    // NOP
label_260c5c:
    // 0x260c5c: 0x0  nop
    ctx->pc = 0x260c5cu;
    // NOP
label_260c60:
    // 0x260c60: 0xb459  .word       0x0000B459                   # multu       $zero, $zero # 0000B440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260c60u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_260c64:
    // 0x260c64: 0x6220  .word       0x00006220                   # add         $t4, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260c64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_260c68:
    // 0x260c68: 0x0  nop
    ctx->pc = 0x260c68u;
    // NOP
label_260c6c:
    // 0x260c6c: 0x0  nop
    ctx->pc = 0x260c6cu;
    // NOP
label_260c70:
    // 0x260c70: 0xb466  .word       0x0000B466                   # xor         $s6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260c70u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_260c74:
    // 0x260c74: 0x2a70  tge         $zero, $zero, 169
    ctx->pc = 0x260c74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260c78:
    // 0x260c78: 0x0  nop
    ctx->pc = 0x260c78u;
    // NOP
label_260c7c:
    // 0x260c7c: 0x0  nop
    ctx->pc = 0x260c7cu;
    // NOP
label_260c80:
    // 0x260c80: 0xb46c  .word       0x0000B46C                   # dadd        $s6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260c80u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, r); }
label_260c84:
    // 0x260c84: 0x9f90  .word       0x00009F90                   # mfhi        $s3 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260c84u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_260c88:
    // 0x260c88: 0x0  nop
    ctx->pc = 0x260c88u;
    // NOP
label_260c8c:
    // 0x260c8c: 0x0  nop
    ctx->pc = 0x260c8cu;
    // NOP
label_260c90:
    // 0x260c90: 0xb480  sll         $s6, $zero, 18
    ctx->pc = 0x260c90u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_260c94:
    // 0x260c94: 0x5070  tge         $zero, $zero, 321
    ctx->pc = 0x260c94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260c98:
    // 0x260c98: 0x0  nop
    ctx->pc = 0x260c98u;
    // NOP
label_260c9c:
    // 0x260c9c: 0x0  nop
    ctx->pc = 0x260c9cu;
    // NOP
label_260ca0:
    // 0x260ca0: 0xb48b  .word       0x0000B48B                   # movn        $s6, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260ca0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_260ca4:
    // 0x260ca4: 0x3290  .word       0x00003290                   # mfhi        $a2 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260ca4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_260ca8:
    // 0x260ca8: 0x0  nop
    ctx->pc = 0x260ca8u;
    // NOP
label_260cac:
    // 0x260cac: 0x0  nop
    ctx->pc = 0x260cacu;
    // NOP
label_260cb0:
    // 0x260cb0: 0xb492  .word       0x0000B492                   # mflo        $s6 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260cb0u;
    SET_GPR_U64(ctx, 22, ctx->lo);
label_260cb4:
    // 0x260cb4: 0x8390  .word       0x00008390                   # mfhi        $s0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260cb4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_260cb8:
    // 0x260cb8: 0x0  nop
    ctx->pc = 0x260cb8u;
    // NOP
label_260cbc:
    // 0x260cbc: 0x0  nop
    ctx->pc = 0x260cbcu;
    // NOP
label_260cc0:
    // 0x260cc0: 0xb4a3  .word       0x0000B4A3                   # negu        $s6, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260cc0u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_260cc4:
    // 0x260cc4: 0x2cf0  tge         $zero, $zero, 179
    ctx->pc = 0x260cc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260cc8:
    // 0x260cc8: 0x0  nop
    ctx->pc = 0x260cc8u;
    // NOP
label_260ccc:
    // 0x260ccc: 0x0  nop
    ctx->pc = 0x260cccu;
    // NOP
label_260cd0:
    // 0x260cd0: 0xb4a9  .word       0x0000B4A9                   # mtsa        $zero # 0000B480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x260cd0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_260cd4:
    // 0x260cd4: 0xac40  sll         $s5, $zero, 17
    ctx->pc = 0x260cd4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_260cd8:
    // 0x260cd8: 0x0  nop
    ctx->pc = 0x260cd8u;
    // NOP
label_260cdc:
    // 0x260cdc: 0x0  nop
    ctx->pc = 0x260cdcu;
    // NOP
label_260ce0:
    // 0x260ce0: 0xb4bf  dsra32      $s6, $zero, 18
    ctx->pc = 0x260ce0u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 0) >> (32 + 18));
label_260ce4:
    // 0x260ce4: 0x1be0  .word       0x00001BE0                   # add         $v1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260ce4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_260ce8:
    // 0x260ce8: 0x0  nop
    ctx->pc = 0x260ce8u;
    // NOP
label_260cec:
    // 0x260cec: 0x0  nop
    ctx->pc = 0x260cecu;
    // NOP
label_260cf0:
    // 0x260cf0: 0xb4c3  sra         $s6, $zero, 19
    ctx->pc = 0x260cf0u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 0), 19));
label_260cf4:
    // 0x260cf4: 0x10360  .word       0x00010360                   # add         $zero, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260cf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_260cf8:
    // 0x260cf8: 0x0  nop
    ctx->pc = 0x260cf8u;
    // NOP
label_260cfc:
    // 0x260cfc: 0x0  nop
    ctx->pc = 0x260cfcu;
    // NOP
label_260d00:
    // 0x260d00: 0xb4e4  .word       0x0000B4E4                   # and         $s6, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260d00u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_260d04:
    // 0x260d04: 0x98c0  sll         $s3, $zero, 3
    ctx->pc = 0x260d04u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_260d08:
    // 0x260d08: 0x0  nop
    ctx->pc = 0x260d08u;
    // NOP
label_260d0c:
    // 0x260d0c: 0x0  nop
    ctx->pc = 0x260d0cu;
    // NOP
label_260d10:
    // 0x260d10: 0xb4f8  dsll        $s6, $zero, 19
    ctx->pc = 0x260d10u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << 19);
label_260d14:
    // 0x260d14: 0xb180  sll         $s6, $zero, 6
    ctx->pc = 0x260d14u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_260d18:
    // 0x260d18: 0x0  nop
    ctx->pc = 0x260d18u;
    // NOP
label_260d1c:
    // 0x260d1c: 0x0  nop
    ctx->pc = 0x260d1cu;
    // NOP
label_260d20:
    // 0x260d20: 0xb50f  .word       0x0000B50F                   # sync.p # 0000B000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260d20u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_260d24:
    // 0x260d24: 0x4680  sll         $t0, $zero, 26
    ctx->pc = 0x260d24u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_260d28:
    // 0x260d28: 0x0  nop
    ctx->pc = 0x260d28u;
    // NOP
label_260d2c:
    // 0x260d2c: 0x0  nop
    ctx->pc = 0x260d2cu;
    // NOP
label_260d30:
    // 0x260d30: 0xb518  .word       0x0000B518                   # mult        $s6, $zero, $zero # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x260d30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_260d34:
    // 0x260d34: 0xb3d0  .word       0x0000B3D0                   # mfhi        $s6 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260d34u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_260d38:
    // 0x260d38: 0x0  nop
    ctx->pc = 0x260d38u;
    // NOP
label_260d3c:
    // 0x260d3c: 0x0  nop
    ctx->pc = 0x260d3cu;
    // NOP
label_260d40:
    // 0x260d40: 0xb52f  .word       0x0000B52F                   # dsubu       $s6, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260d40u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_260d44:
    // 0x260d44: 0xa670  tge         $zero, $zero, 665
    ctx->pc = 0x260d44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260d48:
    // 0x260d48: 0x0  nop
    ctx->pc = 0x260d48u;
    // NOP
label_260d4c:
    // 0x260d4c: 0x0  nop
    ctx->pc = 0x260d4cu;
    // NOP
label_260d50:
    // 0x260d50: 0xb544  .word       0x0000B544                   # sllv        $s6, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260d50u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_260d54:
    // 0x260d54: 0x2810  mfhi        $a1
    ctx->pc = 0x260d54u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_260d58:
    // 0x260d58: 0x0  nop
    ctx->pc = 0x260d58u;
    // NOP
label_260d5c:
    // 0x260d5c: 0x0  nop
    ctx->pc = 0x260d5cu;
    // NOP
label_260d60:
    // 0x260d60: 0xb54a  .word       0x0000B54A                   # movz        $s6, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260d60u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_260d64:
    // 0x260d64: 0x1f40  sll         $v1, $zero, 29
    ctx->pc = 0x260d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_260d68:
    // 0x260d68: 0x0  nop
    ctx->pc = 0x260d68u;
    // NOP
label_260d6c:
    // 0x260d6c: 0x0  nop
    ctx->pc = 0x260d6cu;
    // NOP
label_260d70:
    // 0x260d70: 0xb54e  .word       0x0000B54E                   # INVALID     $zero, $zero, -0x4AB2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260d70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x260D70 raw=0x0000B54E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_260d74:
    // 0x260d74: 0x41e0  .word       0x000041E0                   # add         $t0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260d74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_260d78:
    // 0x260d78: 0x0  nop
    ctx->pc = 0x260d78u;
    // NOP
label_260d7c:
    // 0x260d7c: 0x0  nop
    ctx->pc = 0x260d7cu;
    // NOP
label_260d80:
    // 0x260d80: 0xb557  .word       0x0000B557                   # dsrav       $s6, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260d80u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_260d84:
    // 0x260d84: 0xa540  sll         $s4, $zero, 21
    ctx->pc = 0x260d84u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_260d88:
    // 0x260d88: 0x0  nop
    ctx->pc = 0x260d88u;
    // NOP
label_260d8c:
    // 0x260d8c: 0x0  nop
    ctx->pc = 0x260d8cu;
    // NOP
label_260d90:
    // 0x260d90: 0xb56c  .word       0x0000B56C                   # dadd        $s6, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260d90u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, r); }
label_260d94:
    // 0x260d94: 0xa3f0  tge         $zero, $zero, 655
    ctx->pc = 0x260d94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260d98:
    // 0x260d98: 0x0  nop
    ctx->pc = 0x260d98u;
    // NOP
label_260d9c:
    // 0x260d9c: 0x0  nop
    ctx->pc = 0x260d9cu;
    // NOP
label_260da0:
    // 0x260da0: 0xb581  .word       0x0000B581                   # INVALID     $zero, $zero, -0x4A7F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260da0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x260DA0 raw=0x0000B581"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_260da4:
    // 0x260da4: 0x56c0  sll         $t2, $zero, 27
    ctx->pc = 0x260da4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_260da8:
    // 0x260da8: 0x0  nop
    ctx->pc = 0x260da8u;
    // NOP
label_260dac:
    // 0x260dac: 0x0  nop
    ctx->pc = 0x260dacu;
    // NOP
label_260db0:
    // 0x260db0: 0xb58c  syscall     726
    ctx->pc = 0x260db0u;
    ctx->pc = 0x260DB4u;
runtime->handleSyscall(rdram, ctx, 0x2D6u);
label_260db4:
    // 0x260db4: 0xa540  sll         $s4, $zero, 21
    ctx->pc = 0x260db4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_260db8:
    // 0x260db8: 0x0  nop
    ctx->pc = 0x260db8u;
    // NOP
label_260dbc:
    // 0x260dbc: 0x0  nop
    ctx->pc = 0x260dbcu;
    // NOP
label_260dc0:
    // 0x260dc0: 0xb5a1  .word       0x0000B5A1                   # addu        $s6, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260dc0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_260dc4:
    // 0x260dc4: 0x76e0  .word       0x000076E0                   # add         $t6, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260dc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_260dc8:
    // 0x260dc8: 0x0  nop
    ctx->pc = 0x260dc8u;
    // NOP
label_260dcc:
    // 0x260dcc: 0x0  nop
    ctx->pc = 0x260dccu;
    // NOP
label_260dd0:
    // 0x260dd0: 0xb5b0  tge         $zero, $zero, 726
    ctx->pc = 0x260dd0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260dd4:
    // 0x260dd4: 0xbd70  tge         $zero, $zero, 757
    ctx->pc = 0x260dd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260dd8:
    // 0x260dd8: 0x0  nop
    ctx->pc = 0x260dd8u;
    // NOP
label_260ddc:
    // 0x260ddc: 0x0  nop
    ctx->pc = 0x260ddcu;
    // NOP
label_260de0:
    // 0x260de0: 0xb5c8  .word       0x0000B5C8                   # jr          $zero # 0000B5C0 <InstrIdType: CPU_SPECIAL>
label_260de4:
    if (ctx->pc == 0x260DE4u) {
        ctx->pc = 0x260DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DE0u;
        // 0x260de4: 0x5e20  .word       0x00005E20                   # add         $t3, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x260DE8u;
        goto label_260de8;
    }
    ctx->pc = 0x260DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x260DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DE0u;
        // 0x260de4: 0x5e20  .word       0x00005E20                   # add         $t3, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260DE0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x260DE8u;
label_260de8:
    // 0x260de8: 0x0  nop
    ctx->pc = 0x260de8u;
    // NOP
label_260dec:
    // 0x260dec: 0x0  nop
    ctx->pc = 0x260decu;
    // NOP
label_260df0:
    // 0x260df0: 0xb5d4  .word       0x0000B5D4                   # dsllv       $s6, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260df0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_260df4:
    // 0x260df4: 0x70e0  .word       0x000070E0                   # add         $t6, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260df4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_260df8:
    // 0x260df8: 0x0  nop
    ctx->pc = 0x260df8u;
    // NOP
label_260dfc:
    // 0x260dfc: 0x0  nop
    ctx->pc = 0x260dfcu;
    // NOP
label_260e00:
    // 0x260e00: 0xb5e3  .word       0x0000B5E3                   # negu        $s6, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260e00u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_260e04:
    // 0x260e04: 0x4cc0  sll         $t1, $zero, 19
    ctx->pc = 0x260e04u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_260e08:
    // 0x260e08: 0x0  nop
    ctx->pc = 0x260e08u;
    // NOP
label_260e0c:
    // 0x260e0c: 0x0  nop
    ctx->pc = 0x260e0cu;
    // NOP
label_260e10:
    // 0x260e10: 0xb5ed  .word       0x0000B5ED                   # daddu       $s6, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260e10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_260e14:
    // 0x260e14: 0x2ae0  .word       0x00002AE0                   # add         $a1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260e14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_260e18:
    // 0x260e18: 0x0  nop
    ctx->pc = 0x260e18u;
    // NOP
label_260e1c:
    // 0x260e1c: 0x0  nop
    ctx->pc = 0x260e1cu;
    // NOP
label_260e20:
    // 0x260e20: 0xb5f3  tltu        $zero, $zero, 727
    ctx->pc = 0x260e20u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260e24:
    // 0x260e24: 0xc450  .word       0x0000C450                   # mfhi        $t8 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260e24u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_260e28:
    // 0x260e28: 0x0  nop
    ctx->pc = 0x260e28u;
    // NOP
label_260e2c:
    // 0x260e2c: 0x0  nop
    ctx->pc = 0x260e2cu;
    // NOP
label_260e30:
    // 0x260e30: 0xb60c  syscall     728
    ctx->pc = 0x260e30u;
    ctx->pc = 0x260E34u;
runtime->handleSyscall(rdram, ctx, 0x2D8u);
label_260e34:
    // 0x260e34: 0x5690  .word       0x00005690                   # mfhi        $t2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260e34u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_260e38:
    // 0x260e38: 0x0  nop
    ctx->pc = 0x260e38u;
    // NOP
label_260e3c:
    // 0x260e3c: 0x0  nop
    ctx->pc = 0x260e3cu;
    // NOP
label_260e40:
    // 0x260e40: 0xb617  .word       0x0000B617                   # dsrav       $s6, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260e40u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_260e44:
    // 0x260e44: 0x17e20  .word       0x00017E20                   # add         $t7, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260e44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_260e48:
    // 0x260e48: 0x0  nop
    ctx->pc = 0x260e48u;
    // NOP
label_260e4c:
    // 0x260e4c: 0x0  nop
    ctx->pc = 0x260e4cu;
    // NOP
label_260e50:
    // 0x260e50: 0xb647  .word       0x0000B647                   # srav        $s6, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260e50u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_260e54:
    // 0x260e54: 0x4180  sll         $t0, $zero, 6
    ctx->pc = 0x260e54u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_260e58:
    // 0x260e58: 0x0  nop
    ctx->pc = 0x260e58u;
    // NOP
label_260e5c:
    // 0x260e5c: 0x0  nop
    ctx->pc = 0x260e5cu;
    // NOP
label_260e60:
    // 0x260e60: 0xb650  .word       0x0000B650                   # mfhi        $s6 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260e60u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_260e64:
    // 0x260e64: 0x13a40  sll         $a3, $at, 9
    ctx->pc = 0x260e64u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 9));
label_260e68:
    // 0x260e68: 0x0  nop
    ctx->pc = 0x260e68u;
    // NOP
label_260e6c:
    // 0x260e6c: 0x0  nop
    ctx->pc = 0x260e6cu;
    // NOP
label_260e70:
    // 0x260e70: 0xb678  dsll        $s6, $zero, 25
    ctx->pc = 0x260e70u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << 25);
label_260e74:
    // 0x260e74: 0xa590  .word       0x0000A590                   # mfhi        $s4 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260e74u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_260e78:
    // 0x260e78: 0x0  nop
    ctx->pc = 0x260e78u;
    // NOP
label_260e7c:
    // 0x260e7c: 0x0  nop
    ctx->pc = 0x260e7cu;
    // NOP
label_260e80:
    // 0x260e80: 0xb68d  break       0, 730
    ctx->pc = 0x260e80u;
    runtime->handleBreak(rdram, ctx);
label_260e84:
    // 0x260e84: 0x5110  .word       0x00005110                   # mfhi        $t2 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260e84u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_260e88:
    // 0x260e88: 0x0  nop
    ctx->pc = 0x260e88u;
    // NOP
label_260e8c:
    // 0x260e8c: 0x0  nop
    ctx->pc = 0x260e8cu;
    // NOP
label_260e90:
    // 0x260e90: 0xb698  .word       0x0000B698                   # mult        $s6, $zero, $zero # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x260e90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_260e94:
    // 0x260e94: 0x5980  sll         $t3, $zero, 6
    ctx->pc = 0x260e94u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_260e98:
    // 0x260e98: 0x0  nop
    ctx->pc = 0x260e98u;
    // NOP
label_260e9c:
    // 0x260e9c: 0x0  nop
    ctx->pc = 0x260e9cu;
    // NOP
label_260ea0:
    // 0x260ea0: 0xb6a4  .word       0x0000B6A4                   # and         $s6, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260ea0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_260ea4:
    // 0x260ea4: 0x4e40  sll         $t1, $zero, 25
    ctx->pc = 0x260ea4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_260ea8:
    // 0x260ea8: 0x0  nop
    ctx->pc = 0x260ea8u;
    // NOP
label_260eac:
    // 0x260eac: 0x0  nop
    ctx->pc = 0x260eacu;
    // NOP
label_260eb0:
    // 0x260eb0: 0xb6ae  .word       0x0000B6AE                   # dsub        $s6, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260eb0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, r); }
label_260eb4:
    // 0x260eb4: 0xd970  tge         $zero, $zero, 869
    ctx->pc = 0x260eb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260eb8:
    // 0x260eb8: 0x0  nop
    ctx->pc = 0x260eb8u;
    // NOP
label_260ebc:
    // 0x260ebc: 0x0  nop
    ctx->pc = 0x260ebcu;
    // NOP
label_260ec0:
    // 0x260ec0: 0xb6ca  .word       0x0000B6CA                   # movz        $s6, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260ec0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_260ec4:
    // 0x260ec4: 0xe070  tge         $zero, $zero, 897
    ctx->pc = 0x260ec4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260ec8:
    // 0x260ec8: 0x0  nop
    ctx->pc = 0x260ec8u;
    // NOP
label_260ecc:
    // 0x260ecc: 0x0  nop
    ctx->pc = 0x260eccu;
    // NOP
label_260ed0:
    // 0x260ed0: 0xb6e7  .word       0x0000B6E7                   # not         $s6, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260ed0u;
    SET_GPR_U64(ctx, 22, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_260ed4:
    // 0x260ed4: 0xc500  sll         $t8, $zero, 20
    ctx->pc = 0x260ed4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_260ed8:
    // 0x260ed8: 0x0  nop
    ctx->pc = 0x260ed8u;
    // NOP
label_260edc:
    // 0x260edc: 0x0  nop
    ctx->pc = 0x260edcu;
    // NOP
label_260ee0:
    // 0x260ee0: 0xb700  sll         $s6, $zero, 28
    ctx->pc = 0x260ee0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_260ee4:
    // 0x260ee4: 0x2630  tge         $zero, $zero, 152
    ctx->pc = 0x260ee4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260ee8:
    // 0x260ee8: 0x0  nop
    ctx->pc = 0x260ee8u;
    // NOP
label_260eec:
    // 0x260eec: 0x0  nop
    ctx->pc = 0x260eecu;
    // NOP
label_260ef0:
    // 0x260ef0: 0xb705  .word       0x0000B705                   # INVALID     $zero, $zero, -0x48FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260ef0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x260EF0 raw=0x0000B705"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_260ef4:
    // 0x260ef4: 0x8a10  .word       0x00008A10                   # mfhi        $s1 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260ef4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_260ef8:
    // 0x260ef8: 0x0  nop
    ctx->pc = 0x260ef8u;
    // NOP
label_260efc:
    // 0x260efc: 0x0  nop
    ctx->pc = 0x260efcu;
    // NOP
label_260f00:
    // 0x260f00: 0xb717  .word       0x0000B717                   # dsrav       $s6, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260f00u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_260f04:
    // 0x260f04: 0x5240  sll         $t2, $zero, 9
    ctx->pc = 0x260f04u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_260f08:
    // 0x260f08: 0x0  nop
    ctx->pc = 0x260f08u;
    // NOP
label_260f0c:
    // 0x260f0c: 0x0  nop
    ctx->pc = 0x260f0cu;
    // NOP
label_260f10:
    // 0x260f10: 0xb722  .word       0x0000B722                   # neg         $s6, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260f10u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 22, (int32_t)tmp); }
label_260f14:
    // 0x260f14: 0xd000  sll         $k0, $zero, 0
    ctx->pc = 0x260f14u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_260f18:
    // 0x260f18: 0x0  nop
    ctx->pc = 0x260f18u;
    // NOP
label_260f1c:
    // 0x260f1c: 0x0  nop
    ctx->pc = 0x260f1cu;
    // NOP
label_260f20:
    // 0x260f20: 0xb73c  dsll32      $s6, $zero, 28
    ctx->pc = 0x260f20u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << (32 + 28));
label_260f24:
    // 0x260f24: 0xdcc0  sll         $k1, $zero, 19
    ctx->pc = 0x260f24u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_260f28:
    // 0x260f28: 0x0  nop
    ctx->pc = 0x260f28u;
    // NOP
label_260f2c:
    // 0x260f2c: 0x0  nop
    ctx->pc = 0x260f2cu;
    // NOP
label_260f30:
    // 0x260f30: 0xb758  .word       0x0000B758                   # mult        $s6, $zero, $zero # 00000740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x260f30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_260f34:
    // 0x260f34: 0xb8e0  .word       0x0000B8E0                   # add         $s7, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260f34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_260f38:
    // 0x260f38: 0x0  nop
    ctx->pc = 0x260f38u;
    // NOP
label_260f3c:
    // 0x260f3c: 0x0  nop
    ctx->pc = 0x260f3cu;
    // NOP
label_260f40:
    // 0x260f40: 0xb770  tge         $zero, $zero, 733
    ctx->pc = 0x260f40u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260f44:
    // 0x260f44: 0xb1c0  sll         $s6, $zero, 7
    ctx->pc = 0x260f44u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_260f48:
    // 0x260f48: 0x0  nop
    ctx->pc = 0x260f48u;
    // NOP
label_260f4c:
    // 0x260f4c: 0x0  nop
    ctx->pc = 0x260f4cu;
    // NOP
label_260f50:
    // 0x260f50: 0xb787  .word       0x0000B787                   # srav        $s6, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260f50u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_260f54:
    // 0x260f54: 0x28650  .word       0x00028650                   # mfhi        $s0 # 00020640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260f54u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_260f58:
    // 0x260f58: 0x0  nop
    ctx->pc = 0x260f58u;
    // NOP
label_260f5c:
    // 0x260f5c: 0x0  nop
    ctx->pc = 0x260f5cu;
    // NOP
label_260f60:
    // 0x260f60: 0xb7d8  .word       0x0000B7D8                   # mult        $s6, $zero, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x260f60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_260f64:
    // 0x260f64: 0x12cc0  sll         $a1, $at, 19
    ctx->pc = 0x260f64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 1), 19));
label_260f68:
    // 0x260f68: 0x0  nop
    ctx->pc = 0x260f68u;
    // NOP
label_260f6c:
    // 0x260f6c: 0x0  nop
    ctx->pc = 0x260f6cu;
    // NOP
label_260f70:
    // 0x260f70: 0xb7fe  dsrl32      $s6, $zero, 31
    ctx->pc = 0x260f70u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) >> (32 + 31));
label_260f74:
    // 0x260f74: 0x1be70  tge         $zero, $at, 761
    ctx->pc = 0x260f74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_260f78:
    // 0x260f78: 0x0  nop
    ctx->pc = 0x260f78u;
    // NOP
label_260f7c:
    // 0x260f7c: 0x0  nop
    ctx->pc = 0x260f7cu;
    // NOP
label_260f80:
    // 0x260f80: 0xb836  tne         $zero, $zero, 736
    ctx->pc = 0x260f80u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260f84:
    // 0x260f84: 0xcd50  .word       0x0000CD50                   # mfhi        $t9 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260f84u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_260f88:
    // 0x260f88: 0x0  nop
    ctx->pc = 0x260f88u;
    // NOP
label_260f8c:
    // 0x260f8c: 0x0  nop
    ctx->pc = 0x260f8cu;
    // NOP
label_260f90:
    // 0x260f90: 0xb850  .word       0x0000B850                   # mfhi        $s7 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260f90u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_260f94:
    // 0x260f94: 0x14e80  sll         $t1, $at, 26
    ctx->pc = 0x260f94u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 1), 26));
label_260f98:
    // 0x260f98: 0x0  nop
    ctx->pc = 0x260f98u;
    // NOP
label_260f9c:
    // 0x260f9c: 0x0  nop
    ctx->pc = 0x260f9cu;
    // NOP
label_260fa0:
    // 0x260fa0: 0xb87a  dsrl        $s7, $zero, 1
    ctx->pc = 0x260fa0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) >> 1);
label_260fa4:
    // 0x260fa4: 0xa290  .word       0x0000A290                   # mfhi        $s4 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260fa4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_260fa8:
    // 0x260fa8: 0x0  nop
    ctx->pc = 0x260fa8u;
    // NOP
label_260fac:
    // 0x260fac: 0x0  nop
    ctx->pc = 0x260facu;
    // NOP
label_260fb0:
    // 0x260fb0: 0xb88f  .word       0x0000B88F                   # sync # 0000B800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260fb0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_260fb4:
    // 0x260fb4: 0x107a0  .word       0x000107A0                   # add         $zero, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260fb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_260fb8:
    // 0x260fb8: 0x0  nop
    ctx->pc = 0x260fb8u;
    // NOP
label_260fbc:
    // 0x260fbc: 0x0  nop
    ctx->pc = 0x260fbcu;
    // NOP
label_260fc0:
    // 0x260fc0: 0xb8b0  tge         $zero, $zero, 738
    ctx->pc = 0x260fc0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260fc4:
    // 0x260fc4: 0x11f80  sll         $v1, $at, 30
    ctx->pc = 0x260fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 30));
label_260fc8:
    // 0x260fc8: 0x0  nop
    ctx->pc = 0x260fc8u;
    // NOP
label_260fcc:
    // 0x260fcc: 0x0  nop
    ctx->pc = 0x260fccu;
    // NOP
label_260fd0:
    // 0x260fd0: 0xb8d4  .word       0x0000B8D4                   # dsllv       $s7, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260fd0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_260fd4:
    // 0x260fd4: 0x2c70  tge         $zero, $zero, 177
    ctx->pc = 0x260fd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260fd8:
    // 0x260fd8: 0x0  nop
    ctx->pc = 0x260fd8u;
    // NOP
label_260fdc:
    // 0x260fdc: 0x0  nop
    ctx->pc = 0x260fdcu;
    // NOP
label_260fe0:
    // 0x260fe0: 0xb8da  .word       0x0000B8DA                   # div         $s7, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260fe0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_260fe4:
    // 0x260fe4: 0x14570  tge         $zero, $at, 277
    ctx->pc = 0x260fe4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_260fe8:
    // 0x260fe8: 0x0  nop
    ctx->pc = 0x260fe8u;
    // NOP
label_260fec:
    // 0x260fec: 0x0  nop
    ctx->pc = 0x260fecu;
    // NOP
label_260ff0:
    // 0x260ff0: 0xb903  sra         $s7, $zero, 4
    ctx->pc = 0x260ff0u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 0), 4));
label_260ff4:
    // 0x260ff4: 0xb150  .word       0x0000B150                   # mfhi        $s6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260ff4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_260ff8:
    // 0x260ff8: 0x0  nop
    ctx->pc = 0x260ff8u;
    // NOP
label_260ffc:
    // 0x260ffc: 0x0  nop
    ctx->pc = 0x260ffcu;
    // NOP
label_261000:
    // 0x261000: 0xb91a  .word       0x0000B91A                   # div         $s7, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261000u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_261004:
    // 0x261004: 0x8c70  tge         $zero, $zero, 561
    ctx->pc = 0x261004u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261008:
    // 0x261008: 0x0  nop
    ctx->pc = 0x261008u;
    // NOP
label_26100c:
    // 0x26100c: 0x0  nop
    ctx->pc = 0x26100cu;
    // NOP
label_261010:
    // 0x261010: 0xb92c  .word       0x0000B92C                   # dadd        $s7, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261010u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, r); }
label_261014:
    // 0x261014: 0xc020  add         $t8, $zero, $zero
    ctx->pc = 0x261014u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_261018:
    // 0x261018: 0x0  nop
    ctx->pc = 0x261018u;
    // NOP
label_26101c:
    // 0x26101c: 0x0  nop
    ctx->pc = 0x26101cu;
    // NOP
label_261020:
    // 0x261020: 0xb945  .word       0x0000B945                   # INVALID     $zero, $zero, -0x46BB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261020u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x261020 raw=0x0000B945"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261024:
    // 0x261024: 0xc220  .word       0x0000C220                   # add         $t8, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261024u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_261028:
    // 0x261028: 0x0  nop
    ctx->pc = 0x261028u;
    // NOP
label_26102c:
    // 0x26102c: 0x0  nop
    ctx->pc = 0x26102cu;
    // NOP
label_261030:
    // 0x261030: 0xb95e  .word       0x0000B95E                   # ddiv        $s7, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261030u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x261030 raw=0x0000B95E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261034:
    // 0x261034: 0x1ba00  sll         $s7, $at, 8
    ctx->pc = 0x261034u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 1), 8));
label_261038:
    // 0x261038: 0x0  nop
    ctx->pc = 0x261038u;
    // NOP
label_26103c:
    // 0x26103c: 0x0  nop
    ctx->pc = 0x26103cu;
    // NOP
label_261040:
    // 0x261040: 0xb996  .word       0x0000B996                   # dsrlv       $s7, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261040u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_261044:
    // 0x261044: 0xa120  .word       0x0000A120                   # add         $s4, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261044u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_261048:
    // 0x261048: 0x0  nop
    ctx->pc = 0x261048u;
    // NOP
label_26104c:
    // 0x26104c: 0x0  nop
    ctx->pc = 0x26104cu;
    // NOP
label_261050:
    // 0x261050: 0xb9ab  .word       0x0000B9AB                   # sltu        $s7, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261050u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_261054:
    // 0x261054: 0x5070  tge         $zero, $zero, 321
    ctx->pc = 0x261054u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261058:
    // 0x261058: 0x0  nop
    ctx->pc = 0x261058u;
    // NOP
label_26105c:
    // 0x26105c: 0x0  nop
    ctx->pc = 0x26105cu;
    // NOP
label_261060:
    // 0x261060: 0xb9b6  tne         $zero, $zero, 742
    ctx->pc = 0x261060u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261064:
    // 0x261064: 0xd6c0  sll         $k0, $zero, 27
    ctx->pc = 0x261064u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_261068:
    // 0x261068: 0x0  nop
    ctx->pc = 0x261068u;
    // NOP
label_26106c:
    // 0x26106c: 0x0  nop
    ctx->pc = 0x26106cu;
    // NOP
label_261070:
    // 0x261070: 0xb9d1  .word       0x0000B9D1                   # mthi        $zero # 0000B9C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261070u;
    ctx->hi = GPR_U64(ctx, 0);
label_261074:
    // 0x261074: 0xa100  sll         $s4, $zero, 4
    ctx->pc = 0x261074u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_261078:
    // 0x261078: 0x0  nop
    ctx->pc = 0x261078u;
    // NOP
label_26107c:
    // 0x26107c: 0x0  nop
    ctx->pc = 0x26107cu;
    // NOP
label_261080:
    // 0x261080: 0xb9e6  .word       0x0000B9E6                   # xor         $s7, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261080u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_261084:
    // 0x261084: 0x1de0  .word       0x00001DE0                   # add         $v1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261084u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_261088:
    // 0x261088: 0x0  nop
    ctx->pc = 0x261088u;
    // NOP
label_26108c:
    // 0x26108c: 0x0  nop
    ctx->pc = 0x26108cu;
    // NOP
label_261090:
    // 0x261090: 0xb9ea  .word       0x0000B9EA                   # slt         $s7, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261090u;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_261094:
    // 0x261094: 0x2950  .word       0x00002950                   # mfhi        $a1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261094u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_261098:
    // 0x261098: 0x0  nop
    ctx->pc = 0x261098u;
    // NOP
label_26109c:
    // 0x26109c: 0x0  nop
    ctx->pc = 0x26109cu;
    // NOP
label_2610a0:
    // 0x2610a0: 0xb9f0  tge         $zero, $zero, 743
    ctx->pc = 0x2610a0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2610a4:
    // 0x2610a4: 0x10e0  .word       0x000010E0                   # add         $v0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2610a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_2610a8:
    // 0x2610a8: 0x0  nop
    ctx->pc = 0x2610a8u;
    // NOP
label_2610ac:
    // 0x2610ac: 0x0  nop
    ctx->pc = 0x2610acu;
    // NOP
label_2610b0:
    // 0x2610b0: 0xb9f3  tltu        $zero, $zero, 743
    ctx->pc = 0x2610b0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2610b4:
    // 0x2610b4: 0x9750  .word       0x00009750                   # mfhi        $s2 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2610b4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2610b8:
    // 0x2610b8: 0x0  nop
    ctx->pc = 0x2610b8u;
    // NOP
label_2610bc:
    // 0x2610bc: 0x0  nop
    ctx->pc = 0x2610bcu;
    // NOP
label_2610c0:
    // 0x2610c0: 0xba06  .word       0x0000BA06                   # srlv        $s7, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2610c0u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2610c4:
    // 0x2610c4: 0x5ae0  .word       0x00005AE0                   # add         $t3, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2610c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2610c8:
    // 0x2610c8: 0x0  nop
    ctx->pc = 0x2610c8u;
    // NOP
label_2610cc:
    // 0x2610cc: 0x0  nop
    ctx->pc = 0x2610ccu;
    // NOP
label_2610d0:
    // 0x2610d0: 0xba12  .word       0x0000BA12                   # mflo        $s7 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2610d0u;
    SET_GPR_U64(ctx, 23, ctx->lo);
label_2610d4:
    // 0x2610d4: 0x15720  .word       0x00015720                   # add         $t2, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2610d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_2610d8:
    // 0x2610d8: 0x0  nop
    ctx->pc = 0x2610d8u;
    // NOP
label_2610dc:
    // 0x2610dc: 0x0  nop
    ctx->pc = 0x2610dcu;
    // NOP
label_2610e0:
    // 0x2610e0: 0xba3d  .word       0x0000BA3D                   # INVALID     $zero, $zero, -0x45C3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2610e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2610E0 raw=0x0000BA3D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2610e4:
    // 0x2610e4: 0x6f10  .word       0x00006F10                   # mfhi        $t5 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2610e4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2610e8:
    // 0x2610e8: 0x0  nop
    ctx->pc = 0x2610e8u;
    // NOP
label_2610ec:
    // 0x2610ec: 0x0  nop
    ctx->pc = 0x2610ecu;
    // NOP
label_2610f0:
    // 0x2610f0: 0xba4b  .word       0x0000BA4B                   # movn        $s7, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2610f0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
label_2610f4:
    // 0x2610f4: 0x10900  sll         $at, $at, 4
    ctx->pc = 0x2610f4u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 4));
label_2610f8:
    // 0x2610f8: 0x0  nop
    ctx->pc = 0x2610f8u;
    // NOP
label_2610fc:
    // 0x2610fc: 0x0  nop
    ctx->pc = 0x2610fcu;
    // NOP
label_261100:
    // 0x261100: 0xba6d  .word       0x0000BA6D                   # daddu       $s7, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261100u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261104:
    // 0x261104: 0x8cc0  sll         $s1, $zero, 19
    ctx->pc = 0x261104u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_261108:
    // 0x261108: 0x0  nop
    ctx->pc = 0x261108u;
    // NOP
label_26110c:
    // 0x26110c: 0x0  nop
    ctx->pc = 0x26110cu;
    // NOP
label_261110:
    // 0x261110: 0xba7f  dsra32      $s7, $zero, 9
    ctx->pc = 0x261110u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 0) >> (32 + 9));
label_261114:
    // 0x261114: 0xbad0  .word       0x0000BAD0                   # mfhi        $s7 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261114u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_261118:
    // 0x261118: 0x0  nop
    ctx->pc = 0x261118u;
    // NOP
label_26111c:
    // 0x26111c: 0x0  nop
    ctx->pc = 0x26111cu;
    // NOP
label_261120:
    // 0x261120: 0xba97  .word       0x0000BA97                   # dsrav       $s7, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261120u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_261124:
    // 0x261124: 0xa6a0  .word       0x0000A6A0                   # add         $s4, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261124u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_261128:
    // 0x261128: 0x0  nop
    ctx->pc = 0x261128u;
    // NOP
label_26112c:
    // 0x26112c: 0x0  nop
    ctx->pc = 0x26112cu;
    // NOP
label_261130:
    // 0x261130: 0xbaac  .word       0x0000BAAC                   # dadd        $s7, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261130u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, r); }
label_261134:
    // 0x261134: 0x59c0  sll         $t3, $zero, 7
    ctx->pc = 0x261134u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_261138:
    // 0x261138: 0x0  nop
    ctx->pc = 0x261138u;
    // NOP
label_26113c:
    // 0x26113c: 0x0  nop
    ctx->pc = 0x26113cu;
    // NOP
label_261140:
    // 0x261140: 0xbab8  dsll        $s7, $zero, 10
    ctx->pc = 0x261140u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) << 10);
label_261144:
    // 0x261144: 0x95f0  tge         $zero, $zero, 599
    ctx->pc = 0x261144u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261148:
    // 0x261148: 0x0  nop
    ctx->pc = 0x261148u;
    // NOP
label_26114c:
    // 0x26114c: 0x0  nop
    ctx->pc = 0x26114cu;
    // NOP
label_261150:
    // 0x261150: 0xbacb  .word       0x0000BACB                   # movn        $s7, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261150u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
label_261154:
    // 0x261154: 0xde90  .word       0x0000DE90                   # mfhi        $k1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261154u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_261158:
    // 0x261158: 0x0  nop
    ctx->pc = 0x261158u;
    // NOP
label_26115c:
    // 0x26115c: 0x0  nop
    ctx->pc = 0x26115cu;
    // NOP
label_261160:
    // 0x261160: 0xbae7  .word       0x0000BAE7                   # not         $s7, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261160u;
    SET_GPR_U64(ctx, 23, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_261164:
    // 0x261164: 0x7ed0  .word       0x00007ED0                   # mfhi        $t7 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261164u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_261168:
    // 0x261168: 0x0  nop
    ctx->pc = 0x261168u;
    // NOP
label_26116c:
    // 0x26116c: 0x0  nop
    ctx->pc = 0x26116cu;
    // NOP
label_261170:
    // 0x261170: 0xbaf7  .word       0x0000BAF7                   # INVALID     $zero, $zero, -0x4509 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261170u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x261170 raw=0x0000BAF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261174:
    // 0x261174: 0xae10  .word       0x0000AE10                   # mfhi        $s5 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261174u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_261178:
    // 0x261178: 0x0  nop
    ctx->pc = 0x261178u;
    // NOP
label_26117c:
    // 0x26117c: 0x0  nop
    ctx->pc = 0x26117cu;
    // NOP
label_261180:
    // 0x261180: 0xbb0d  break       0, 748
    ctx->pc = 0x261180u;
    runtime->handleBreak(rdram, ctx);
label_261184:
    // 0x261184: 0x5910  .word       0x00005910                   # mfhi        $t3 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261184u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_261188:
    // 0x261188: 0x0  nop
    ctx->pc = 0x261188u;
    // NOP
label_26118c:
    // 0x26118c: 0x0  nop
    ctx->pc = 0x26118cu;
    // NOP
label_261190:
    // 0x261190: 0xbb19  .word       0x0000BB19                   # multu       $zero, $zero # 0000BB00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261190u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_261194:
    // 0x261194: 0x50f0  tge         $zero, $zero, 323
    ctx->pc = 0x261194u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261198:
    // 0x261198: 0x0  nop
    ctx->pc = 0x261198u;
    // NOP
label_26119c:
    // 0x26119c: 0x0  nop
    ctx->pc = 0x26119cu;
    // NOP
label_2611a0:
    // 0x2611a0: 0xbb24  .word       0x0000BB24                   # and         $s7, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2611a0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2611a4:
    // 0x2611a4: 0x5240  sll         $t2, $zero, 9
    ctx->pc = 0x2611a4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_2611a8:
    // 0x2611a8: 0x0  nop
    ctx->pc = 0x2611a8u;
    // NOP
label_2611ac:
    // 0x2611ac: 0x0  nop
    ctx->pc = 0x2611acu;
    // NOP
label_2611b0:
    // 0x2611b0: 0xbb2f  .word       0x0000BB2F                   # dsubu       $s7, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2611b0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2611b4:
    // 0x2611b4: 0x2650  .word       0x00002650                   # mfhi        $a0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2611b4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2611b8:
    // 0x2611b8: 0x0  nop
    ctx->pc = 0x2611b8u;
    // NOP
label_2611bc:
    // 0x2611bc: 0x0  nop
    ctx->pc = 0x2611bcu;
    // NOP
label_2611c0:
    // 0x2611c0: 0xbb34  teq         $zero, $zero, 748
    ctx->pc = 0x2611c0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2611c4:
    // 0x2611c4: 0x2390  .word       0x00002390                   # mfhi        $a0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2611c4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2611c8:
    // 0x2611c8: 0x0  nop
    ctx->pc = 0x2611c8u;
    // NOP
label_2611cc:
    // 0x2611cc: 0x0  nop
    ctx->pc = 0x2611ccu;
    // NOP
label_2611d0:
    // 0x2611d0: 0xbb39  .word       0x0000BB39                   # INVALID     $zero, $zero, -0x44C7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2611d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2611D0 raw=0x0000BB39"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2611d4:
    // 0x2611d4: 0x1d70  tge         $zero, $zero, 117
    ctx->pc = 0x2611d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2611d8:
    // 0x2611d8: 0x0  nop
    ctx->pc = 0x2611d8u;
    // NOP
label_2611dc:
    // 0x2611dc: 0x0  nop
    ctx->pc = 0x2611dcu;
    // NOP
label_2611e0:
    // 0x2611e0: 0xbb3d  .word       0x0000BB3D                   # INVALID     $zero, $zero, -0x44C3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2611e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2611E0 raw=0x0000BB3D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2611e4:
    // 0x2611e4: 0x63f0  tge         $zero, $zero, 399
    ctx->pc = 0x2611e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2611e8:
    // 0x2611e8: 0x0  nop
    ctx->pc = 0x2611e8u;
    // NOP
label_2611ec:
    // 0x2611ec: 0x0  nop
    ctx->pc = 0x2611ecu;
    // NOP
label_2611f0:
    // 0x2611f0: 0xbb4a  .word       0x0000BB4A                   # movz        $s7, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2611f0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
label_2611f4:
    // 0x2611f4: 0x3170  tge         $zero, $zero, 197
    ctx->pc = 0x2611f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x2611f8u;
    return;
}

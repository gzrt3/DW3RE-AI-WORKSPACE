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

// Function: FUN_0019b618
// Address: 0x19b618 - 0x29b620
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b618_part323(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2389b8u: goto label_2389b8;
        case 0x2389bcu: goto label_2389bc;
        case 0x2389c0u: goto label_2389c0;
        case 0x2389c4u: goto label_2389c4;
        case 0x2389c8u: goto label_2389c8;
        case 0x2389ccu: goto label_2389cc;
        case 0x2389d0u: goto label_2389d0;
        case 0x2389d4u: goto label_2389d4;
        case 0x2389d8u: goto label_2389d8;
        case 0x2389dcu: goto label_2389dc;
        case 0x2389e0u: goto label_2389e0;
        case 0x2389e4u: goto label_2389e4;
        case 0x2389e8u: goto label_2389e8;
        case 0x2389ecu: goto label_2389ec;
        case 0x2389f0u: goto label_2389f0;
        case 0x2389f4u: goto label_2389f4;
        case 0x2389f8u: goto label_2389f8;
        case 0x2389fcu: goto label_2389fc;
        case 0x238a00u: goto label_238a00;
        case 0x238a04u: goto label_238a04;
        case 0x238a08u: goto label_238a08;
        case 0x238a0cu: goto label_238a0c;
        case 0x238a10u: goto label_238a10;
        case 0x238a14u: goto label_238a14;
        case 0x238a18u: goto label_238a18;
        case 0x238a1cu: goto label_238a1c;
        case 0x238a20u: goto label_238a20;
        case 0x238a24u: goto label_238a24;
        case 0x238a28u: goto label_238a28;
        case 0x238a2cu: goto label_238a2c;
        case 0x238a30u: goto label_238a30;
        case 0x238a34u: goto label_238a34;
        case 0x238a38u: goto label_238a38;
        case 0x238a3cu: goto label_238a3c;
        case 0x238a40u: goto label_238a40;
        case 0x238a44u: goto label_238a44;
        case 0x238a48u: goto label_238a48;
        case 0x238a4cu: goto label_238a4c;
        case 0x238a50u: goto label_238a50;
        case 0x238a54u: goto label_238a54;
        case 0x238a58u: goto label_238a58;
        case 0x238a5cu: goto label_238a5c;
        case 0x238a60u: goto label_238a60;
        case 0x238a64u: goto label_238a64;
        case 0x238a68u: goto label_238a68;
        case 0x238a6cu: goto label_238a6c;
        case 0x238a70u: goto label_238a70;
        case 0x238a74u: goto label_238a74;
        case 0x238a78u: goto label_238a78;
        case 0x238a7cu: goto label_238a7c;
        case 0x238a80u: goto label_238a80;
        case 0x238a84u: goto label_238a84;
        case 0x238a88u: goto label_238a88;
        case 0x238a8cu: goto label_238a8c;
        case 0x238a90u: goto label_238a90;
        case 0x238a94u: goto label_238a94;
        case 0x238a98u: goto label_238a98;
        case 0x238a9cu: goto label_238a9c;
        case 0x238aa0u: goto label_238aa0;
        case 0x238aa4u: goto label_238aa4;
        case 0x238aa8u: goto label_238aa8;
        case 0x238aacu: goto label_238aac;
        case 0x238ab0u: goto label_238ab0;
        case 0x238ab4u: goto label_238ab4;
        case 0x238ab8u: goto label_238ab8;
        case 0x238abcu: goto label_238abc;
        case 0x238ac0u: goto label_238ac0;
        case 0x238ac4u: goto label_238ac4;
        case 0x238ac8u: goto label_238ac8;
        case 0x238accu: goto label_238acc;
        case 0x238ad0u: goto label_238ad0;
        case 0x238ad4u: goto label_238ad4;
        case 0x238ad8u: goto label_238ad8;
        case 0x238adcu: goto label_238adc;
        case 0x238ae0u: goto label_238ae0;
        case 0x238ae4u: goto label_238ae4;
        case 0x238ae8u: goto label_238ae8;
        case 0x238aecu: goto label_238aec;
        case 0x238af0u: goto label_238af0;
        case 0x238af4u: goto label_238af4;
        case 0x238af8u: goto label_238af8;
        case 0x238afcu: goto label_238afc;
        case 0x238b00u: goto label_238b00;
        case 0x238b04u: goto label_238b04;
        case 0x238b08u: goto label_238b08;
        case 0x238b0cu: goto label_238b0c;
        case 0x238b10u: goto label_238b10;
        case 0x238b14u: goto label_238b14;
        case 0x238b18u: goto label_238b18;
        case 0x238b1cu: goto label_238b1c;
        case 0x238b20u: goto label_238b20;
        case 0x238b24u: goto label_238b24;
        case 0x238b28u: goto label_238b28;
        case 0x238b2cu: goto label_238b2c;
        case 0x238b30u: goto label_238b30;
        case 0x238b34u: goto label_238b34;
        case 0x238b38u: goto label_238b38;
        case 0x238b3cu: goto label_238b3c;
        case 0x238b40u: goto label_238b40;
        case 0x238b44u: goto label_238b44;
        case 0x238b48u: goto label_238b48;
        case 0x238b4cu: goto label_238b4c;
        case 0x238b50u: goto label_238b50;
        case 0x238b54u: goto label_238b54;
        case 0x238b58u: goto label_238b58;
        case 0x238b5cu: goto label_238b5c;
        case 0x238b60u: goto label_238b60;
        case 0x238b64u: goto label_238b64;
        case 0x238b68u: goto label_238b68;
        case 0x238b6cu: goto label_238b6c;
        case 0x238b70u: goto label_238b70;
        case 0x238b74u: goto label_238b74;
        case 0x238b78u: goto label_238b78;
        case 0x238b7cu: goto label_238b7c;
        case 0x238b80u: goto label_238b80;
        case 0x238b84u: goto label_238b84;
        case 0x238b88u: goto label_238b88;
        case 0x238b8cu: goto label_238b8c;
        case 0x238b90u: goto label_238b90;
        case 0x238b94u: goto label_238b94;
        case 0x238b98u: goto label_238b98;
        case 0x238b9cu: goto label_238b9c;
        case 0x238ba0u: goto label_238ba0;
        case 0x238ba4u: goto label_238ba4;
        case 0x238ba8u: goto label_238ba8;
        case 0x238bacu: goto label_238bac;
        case 0x238bb0u: goto label_238bb0;
        case 0x238bb4u: goto label_238bb4;
        case 0x238bb8u: goto label_238bb8;
        case 0x238bbcu: goto label_238bbc;
        case 0x238bc0u: goto label_238bc0;
        case 0x238bc4u: goto label_238bc4;
        case 0x238bc8u: goto label_238bc8;
        case 0x238bccu: goto label_238bcc;
        case 0x238bd0u: goto label_238bd0;
        case 0x238bd4u: goto label_238bd4;
        case 0x238bd8u: goto label_238bd8;
        case 0x238bdcu: goto label_238bdc;
        case 0x238be0u: goto label_238be0;
        case 0x238be4u: goto label_238be4;
        case 0x238be8u: goto label_238be8;
        case 0x238becu: goto label_238bec;
        case 0x238bf0u: goto label_238bf0;
        case 0x238bf4u: goto label_238bf4;
        case 0x238bf8u: goto label_238bf8;
        case 0x238bfcu: goto label_238bfc;
        case 0x238c00u: goto label_238c00;
        case 0x238c04u: goto label_238c04;
        case 0x238c08u: goto label_238c08;
        case 0x238c0cu: goto label_238c0c;
        case 0x238c10u: goto label_238c10;
        case 0x238c14u: goto label_238c14;
        case 0x238c18u: goto label_238c18;
        case 0x238c1cu: goto label_238c1c;
        case 0x238c20u: goto label_238c20;
        case 0x238c24u: goto label_238c24;
        case 0x238c28u: goto label_238c28;
        case 0x238c2cu: goto label_238c2c;
        case 0x238c30u: goto label_238c30;
        case 0x238c34u: goto label_238c34;
        case 0x238c38u: goto label_238c38;
        case 0x238c3cu: goto label_238c3c;
        case 0x238c40u: goto label_238c40;
        case 0x238c44u: goto label_238c44;
        case 0x238c48u: goto label_238c48;
        case 0x238c4cu: goto label_238c4c;
        case 0x238c50u: goto label_238c50;
        case 0x238c54u: goto label_238c54;
        case 0x238c58u: goto label_238c58;
        case 0x238c5cu: goto label_238c5c;
        case 0x238c60u: goto label_238c60;
        case 0x238c64u: goto label_238c64;
        case 0x238c68u: goto label_238c68;
        case 0x238c6cu: goto label_238c6c;
        case 0x238c70u: goto label_238c70;
        case 0x238c74u: goto label_238c74;
        case 0x238c78u: goto label_238c78;
        case 0x238c7cu: goto label_238c7c;
        case 0x238c80u: goto label_238c80;
        case 0x238c84u: goto label_238c84;
        case 0x238c88u: goto label_238c88;
        case 0x238c8cu: goto label_238c8c;
        case 0x238c90u: goto label_238c90;
        case 0x238c94u: goto label_238c94;
        case 0x238c98u: goto label_238c98;
        case 0x238c9cu: goto label_238c9c;
        case 0x238ca0u: goto label_238ca0;
        case 0x238ca4u: goto label_238ca4;
        case 0x238ca8u: goto label_238ca8;
        case 0x238cacu: goto label_238cac;
        case 0x238cb0u: goto label_238cb0;
        case 0x238cb4u: goto label_238cb4;
        case 0x238cb8u: goto label_238cb8;
        case 0x238cbcu: goto label_238cbc;
        case 0x238cc0u: goto label_238cc0;
        case 0x238cc4u: goto label_238cc4;
        case 0x238cc8u: goto label_238cc8;
        case 0x238cccu: goto label_238ccc;
        case 0x238cd0u: goto label_238cd0;
        case 0x238cd4u: goto label_238cd4;
        case 0x238cd8u: goto label_238cd8;
        case 0x238cdcu: goto label_238cdc;
        case 0x238ce0u: goto label_238ce0;
        case 0x238ce4u: goto label_238ce4;
        case 0x238ce8u: goto label_238ce8;
        case 0x238cecu: goto label_238cec;
        case 0x238cf0u: goto label_238cf0;
        case 0x238cf4u: goto label_238cf4;
        case 0x238cf8u: goto label_238cf8;
        case 0x238cfcu: goto label_238cfc;
        case 0x238d00u: goto label_238d00;
        case 0x238d04u: goto label_238d04;
        case 0x238d08u: goto label_238d08;
        case 0x238d0cu: goto label_238d0c;
        case 0x238d10u: goto label_238d10;
        case 0x238d14u: goto label_238d14;
        case 0x238d18u: goto label_238d18;
        case 0x238d1cu: goto label_238d1c;
        case 0x238d20u: goto label_238d20;
        case 0x238d24u: goto label_238d24;
        case 0x238d28u: goto label_238d28;
        case 0x238d2cu: goto label_238d2c;
        case 0x238d30u: goto label_238d30;
        case 0x238d34u: goto label_238d34;
        case 0x238d38u: goto label_238d38;
        case 0x238d3cu: goto label_238d3c;
        case 0x238d40u: goto label_238d40;
        case 0x238d44u: goto label_238d44;
        case 0x238d48u: goto label_238d48;
        case 0x238d4cu: goto label_238d4c;
        case 0x238d50u: goto label_238d50;
        case 0x238d54u: goto label_238d54;
        case 0x238d58u: goto label_238d58;
        case 0x238d5cu: goto label_238d5c;
        case 0x238d60u: goto label_238d60;
        case 0x238d64u: goto label_238d64;
        case 0x238d68u: goto label_238d68;
        case 0x238d6cu: goto label_238d6c;
        case 0x238d70u: goto label_238d70;
        case 0x238d74u: goto label_238d74;
        case 0x238d78u: goto label_238d78;
        case 0x238d7cu: goto label_238d7c;
        case 0x238d80u: goto label_238d80;
        case 0x238d84u: goto label_238d84;
        case 0x238d88u: goto label_238d88;
        case 0x238d8cu: goto label_238d8c;
        case 0x238d90u: goto label_238d90;
        case 0x238d94u: goto label_238d94;
        case 0x238d98u: goto label_238d98;
        case 0x238d9cu: goto label_238d9c;
        case 0x238da0u: goto label_238da0;
        case 0x238da4u: goto label_238da4;
        case 0x238da8u: goto label_238da8;
        case 0x238dacu: goto label_238dac;
        case 0x238db0u: goto label_238db0;
        case 0x238db4u: goto label_238db4;
        case 0x238db8u: goto label_238db8;
        case 0x238dbcu: goto label_238dbc;
        case 0x238dc0u: goto label_238dc0;
        case 0x238dc4u: goto label_238dc4;
        case 0x238dc8u: goto label_238dc8;
        case 0x238dccu: goto label_238dcc;
        case 0x238dd0u: goto label_238dd0;
        case 0x238dd4u: goto label_238dd4;
        case 0x238dd8u: goto label_238dd8;
        case 0x238ddcu: goto label_238ddc;
        case 0x238de0u: goto label_238de0;
        case 0x238de4u: goto label_238de4;
        case 0x238de8u: goto label_238de8;
        case 0x238decu: goto label_238dec;
        case 0x238df0u: goto label_238df0;
        case 0x238df4u: goto label_238df4;
        case 0x238df8u: goto label_238df8;
        case 0x238dfcu: goto label_238dfc;
        case 0x238e00u: goto label_238e00;
        case 0x238e04u: goto label_238e04;
        case 0x238e08u: goto label_238e08;
        case 0x238e0cu: goto label_238e0c;
        case 0x238e10u: goto label_238e10;
        case 0x238e14u: goto label_238e14;
        case 0x238e18u: goto label_238e18;
        case 0x238e1cu: goto label_238e1c;
        case 0x238e20u: goto label_238e20;
        case 0x238e24u: goto label_238e24;
        case 0x238e28u: goto label_238e28;
        case 0x238e2cu: goto label_238e2c;
        case 0x238e30u: goto label_238e30;
        case 0x238e34u: goto label_238e34;
        case 0x238e38u: goto label_238e38;
        case 0x238e3cu: goto label_238e3c;
        case 0x238e40u: goto label_238e40;
        case 0x238e44u: goto label_238e44;
        case 0x238e48u: goto label_238e48;
        case 0x238e4cu: goto label_238e4c;
        case 0x238e50u: goto label_238e50;
        case 0x238e54u: goto label_238e54;
        case 0x238e58u: goto label_238e58;
        case 0x238e5cu: goto label_238e5c;
        case 0x238e60u: goto label_238e60;
        case 0x238e64u: goto label_238e64;
        case 0x238e68u: goto label_238e68;
        case 0x238e6cu: goto label_238e6c;
        case 0x238e70u: goto label_238e70;
        case 0x238e74u: goto label_238e74;
        case 0x238e78u: goto label_238e78;
        case 0x238e7cu: goto label_238e7c;
        case 0x238e80u: goto label_238e80;
        case 0x238e84u: goto label_238e84;
        case 0x238e88u: goto label_238e88;
        case 0x238e8cu: goto label_238e8c;
        case 0x238e90u: goto label_238e90;
        case 0x238e94u: goto label_238e94;
        case 0x238e98u: goto label_238e98;
        case 0x238e9cu: goto label_238e9c;
        case 0x238ea0u: goto label_238ea0;
        case 0x238ea4u: goto label_238ea4;
        case 0x238ea8u: goto label_238ea8;
        case 0x238eacu: goto label_238eac;
        case 0x238eb0u: goto label_238eb0;
        case 0x238eb4u: goto label_238eb4;
        case 0x238eb8u: goto label_238eb8;
        case 0x238ebcu: goto label_238ebc;
        case 0x238ec0u: goto label_238ec0;
        case 0x238ec4u: goto label_238ec4;
        case 0x238ec8u: goto label_238ec8;
        case 0x238eccu: goto label_238ecc;
        case 0x238ed0u: goto label_238ed0;
        case 0x238ed4u: goto label_238ed4;
        case 0x238ed8u: goto label_238ed8;
        case 0x238edcu: goto label_238edc;
        case 0x238ee0u: goto label_238ee0;
        case 0x238ee4u: goto label_238ee4;
        case 0x238ee8u: goto label_238ee8;
        case 0x238eecu: goto label_238eec;
        case 0x238ef0u: goto label_238ef0;
        case 0x238ef4u: goto label_238ef4;
        case 0x238ef8u: goto label_238ef8;
        case 0x238efcu: goto label_238efc;
        case 0x238f00u: goto label_238f00;
        case 0x238f04u: goto label_238f04;
        case 0x238f08u: goto label_238f08;
        case 0x238f0cu: goto label_238f0c;
        case 0x238f10u: goto label_238f10;
        case 0x238f14u: goto label_238f14;
        case 0x238f18u: goto label_238f18;
        case 0x238f1cu: goto label_238f1c;
        case 0x238f20u: goto label_238f20;
        case 0x238f24u: goto label_238f24;
        case 0x238f28u: goto label_238f28;
        case 0x238f2cu: goto label_238f2c;
        case 0x238f30u: goto label_238f30;
        case 0x238f34u: goto label_238f34;
        case 0x238f38u: goto label_238f38;
        case 0x238f3cu: goto label_238f3c;
        case 0x238f40u: goto label_238f40;
        case 0x238f44u: goto label_238f44;
        case 0x238f48u: goto label_238f48;
        case 0x238f4cu: goto label_238f4c;
        case 0x238f50u: goto label_238f50;
        case 0x238f54u: goto label_238f54;
        case 0x238f58u: goto label_238f58;
        case 0x238f5cu: goto label_238f5c;
        case 0x238f60u: goto label_238f60;
        case 0x238f64u: goto label_238f64;
        case 0x238f68u: goto label_238f68;
        case 0x238f6cu: goto label_238f6c;
        case 0x238f70u: goto label_238f70;
        case 0x238f74u: goto label_238f74;
        case 0x238f78u: goto label_238f78;
        case 0x238f7cu: goto label_238f7c;
        case 0x238f80u: goto label_238f80;
        case 0x238f84u: goto label_238f84;
        case 0x238f88u: goto label_238f88;
        case 0x238f8cu: goto label_238f8c;
        case 0x238f90u: goto label_238f90;
        case 0x238f94u: goto label_238f94;
        case 0x238f98u: goto label_238f98;
        case 0x238f9cu: goto label_238f9c;
        case 0x238fa0u: goto label_238fa0;
        case 0x238fa4u: goto label_238fa4;
        case 0x238fa8u: goto label_238fa8;
        case 0x238facu: goto label_238fac;
        case 0x238fb0u: goto label_238fb0;
        case 0x238fb4u: goto label_238fb4;
        case 0x238fb8u: goto label_238fb8;
        case 0x238fbcu: goto label_238fbc;
        case 0x238fc0u: goto label_238fc0;
        case 0x238fc4u: goto label_238fc4;
        case 0x238fc8u: goto label_238fc8;
        case 0x238fccu: goto label_238fcc;
        case 0x238fd0u: goto label_238fd0;
        case 0x238fd4u: goto label_238fd4;
        case 0x238fd8u: goto label_238fd8;
        case 0x238fdcu: goto label_238fdc;
        case 0x238fe0u: goto label_238fe0;
        case 0x238fe4u: goto label_238fe4;
        case 0x238fe8u: goto label_238fe8;
        case 0x238fecu: goto label_238fec;
        case 0x238ff0u: goto label_238ff0;
        case 0x238ff4u: goto label_238ff4;
        case 0x238ff8u: goto label_238ff8;
        case 0x238ffcu: goto label_238ffc;
        case 0x239000u: goto label_239000;
        case 0x239004u: goto label_239004;
        case 0x239008u: goto label_239008;
        case 0x23900cu: goto label_23900c;
        case 0x239010u: goto label_239010;
        case 0x239014u: goto label_239014;
        case 0x239018u: goto label_239018;
        case 0x23901cu: goto label_23901c;
        case 0x239020u: goto label_239020;
        case 0x239024u: goto label_239024;
        case 0x239028u: goto label_239028;
        case 0x23902cu: goto label_23902c;
        case 0x239030u: goto label_239030;
        case 0x239034u: goto label_239034;
        case 0x239038u: goto label_239038;
        case 0x23903cu: goto label_23903c;
        case 0x239040u: goto label_239040;
        case 0x239044u: goto label_239044;
        case 0x239048u: goto label_239048;
        case 0x23904cu: goto label_23904c;
        case 0x239050u: goto label_239050;
        case 0x239054u: goto label_239054;
        case 0x239058u: goto label_239058;
        case 0x23905cu: goto label_23905c;
        case 0x239060u: goto label_239060;
        case 0x239064u: goto label_239064;
        case 0x239068u: goto label_239068;
        case 0x23906cu: goto label_23906c;
        case 0x239070u: goto label_239070;
        case 0x239074u: goto label_239074;
        case 0x239078u: goto label_239078;
        case 0x23907cu: goto label_23907c;
        case 0x239080u: goto label_239080;
        case 0x239084u: goto label_239084;
        case 0x239088u: goto label_239088;
        case 0x23908cu: goto label_23908c;
        case 0x239090u: goto label_239090;
        case 0x239094u: goto label_239094;
        case 0x239098u: goto label_239098;
        case 0x23909cu: goto label_23909c;
        case 0x2390a0u: goto label_2390a0;
        case 0x2390a4u: goto label_2390a4;
        case 0x2390a8u: goto label_2390a8;
        case 0x2390acu: goto label_2390ac;
        case 0x2390b0u: goto label_2390b0;
        case 0x2390b4u: goto label_2390b4;
        case 0x2390b8u: goto label_2390b8;
        case 0x2390bcu: goto label_2390bc;
        case 0x2390c0u: goto label_2390c0;
        case 0x2390c4u: goto label_2390c4;
        case 0x2390c8u: goto label_2390c8;
        case 0x2390ccu: goto label_2390cc;
        case 0x2390d0u: goto label_2390d0;
        case 0x2390d4u: goto label_2390d4;
        case 0x2390d8u: goto label_2390d8;
        case 0x2390dcu: goto label_2390dc;
        case 0x2390e0u: goto label_2390e0;
        case 0x2390e4u: goto label_2390e4;
        case 0x2390e8u: goto label_2390e8;
        case 0x2390ecu: goto label_2390ec;
        case 0x2390f0u: goto label_2390f0;
        case 0x2390f4u: goto label_2390f4;
        case 0x2390f8u: goto label_2390f8;
        case 0x2390fcu: goto label_2390fc;
        case 0x239100u: goto label_239100;
        case 0x239104u: goto label_239104;
        case 0x239108u: goto label_239108;
        case 0x23910cu: goto label_23910c;
        case 0x239110u: goto label_239110;
        case 0x239114u: goto label_239114;
        case 0x239118u: goto label_239118;
        case 0x23911cu: goto label_23911c;
        case 0x239120u: goto label_239120;
        case 0x239124u: goto label_239124;
        case 0x239128u: goto label_239128;
        case 0x23912cu: goto label_23912c;
        case 0x239130u: goto label_239130;
        case 0x239134u: goto label_239134;
        case 0x239138u: goto label_239138;
        case 0x23913cu: goto label_23913c;
        case 0x239140u: goto label_239140;
        case 0x239144u: goto label_239144;
        case 0x239148u: goto label_239148;
        case 0x23914cu: goto label_23914c;
        case 0x239150u: goto label_239150;
        case 0x239154u: goto label_239154;
        case 0x239158u: goto label_239158;
        case 0x23915cu: goto label_23915c;
        case 0x239160u: goto label_239160;
        case 0x239164u: goto label_239164;
        case 0x239168u: goto label_239168;
        case 0x23916cu: goto label_23916c;
        case 0x239170u: goto label_239170;
        case 0x239174u: goto label_239174;
        case 0x239178u: goto label_239178;
        case 0x23917cu: goto label_23917c;
        case 0x239180u: goto label_239180;
        case 0x239184u: goto label_239184;
        default: return;
    }

label_2389b8:
    // 0x2389b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2389b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2389bc:
    // 0x2389bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2389bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2389c0:
    // 0x2389c0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2389c4:
    if (ctx->pc == 0x2389C4u) {
        ctx->pc = 0x2389C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389C0u;
        // 0x2389c4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2389C8u;
        goto label_2389c8;
    }
    ctx->pc = 0x2389C0u;
    {
        const bool branch_taken_0x2389c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2389C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389C0u;
        // 0x2389c4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2389c0) {
            ctx->pc = 0x2389D0u;
            goto label_2389d0;
        }
    }
    ctx->pc = 0x2389C8u;
label_2389c8:
    // 0x2389c8: 0x10000013  b           . + 4 + (0x13 << 2)
label_2389cc:
    if (ctx->pc == 0x2389CCu) {
        ctx->pc = 0x2389CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389C8u;
        // 0x2389cc: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2389D0u;
        goto label_2389d0;
    }
    ctx->pc = 0x2389C8u;
    {
        const bool branch_taken_0x2389c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2389CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389C8u;
        // 0x2389cc: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2389c8) {
            ctx->pc = 0x238A18u;
            goto label_238a18;
        }
    }
    ctx->pc = 0x2389D0u;
label_2389d0:
    // 0x2389d0: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
label_2389d4:
    if (ctx->pc == 0x2389D4u) {
        ctx->pc = 0x2389D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389D0u;
        // 0x2389d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2389D8u;
        goto label_2389d8;
    }
    ctx->pc = 0x2389D0u;
    {
        const bool branch_taken_0x2389d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2389D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389D0u;
        // 0x2389d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2389d0) {
            ctx->pc = 0x238968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x238968; return; }
        }
    }
    ctx->pc = 0x2389D8u;
label_2389d8:
    // 0x2389d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2389d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2389dc:
    // 0x2389dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2389dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2389e0:
    // 0x2389e0: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x2389e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
label_2389e4:
    // 0x2389e4: 0xac910054  sw          $s1, 0x54($a0)
    ctx->pc = 0x2389e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 17));
label_2389e8:
    // 0x2389e8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2389e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2389ec:
    // 0x2389ec: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2389ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_2389f0:
    // 0x2389f0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2389f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2389f4:
    // 0x2389f4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2389f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_2389f8:
    // 0x2389f8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2389f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_2389fc:
    // 0x2389fc: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2389fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_238a00:
    // 0x238a00: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x238a00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
label_238a04:
    // 0x238a04: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x238a04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
label_238a08:
    // 0x238a08: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x238a08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
label_238a0c:
    // 0x238a0c: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x238a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_238a10:
    // 0x238a10: 0xa482000c  sh          $v0, 0xC($a0)
    ctx->pc = 0x238a10u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
label_238a14:
    // 0x238a14: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x238a14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_238a18:
    // 0x238a18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238a18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_238a1c:
    // 0x238a1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238a1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_238a20:
    // 0x238a20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x238a20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_238a24:
    // 0x238a24: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x238a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_238a28:
    // 0x238a28: 0x3e00008  jr          $ra
label_238a2c:
    if (ctx->pc == 0x238A2Cu) {
        ctx->pc = 0x238A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238A28u;
        // 0x238a2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238A30u;
        goto label_238a30;
    }
    ctx->pc = 0x238A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238A28u;
        // 0x238a2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238A30u;
label_238a30:
    // 0x238a30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x238a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_238a34:
    // 0x238a34: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x238a34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
label_238a38:
    // 0x238a38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x238a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_238a3c:
    // 0x238a3c: 0x24a58748  addiu       $a1, $a1, -0x78B8
    ctx->pc = 0x238a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936392));
label_238a40:
    // 0x238a40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_238a44:
    // 0x238a44: 0x808e4ea  j           func_2393A8
label_238a48:
    if (ctx->pc == 0x238A48u) {
        ctx->pc = 0x238A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238A44u;
        // 0x238a48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238A4Cu;
        goto label_238a4c;
    }
    ctx->pc = 0x238A44u;
    ctx->pc = 0x238A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238A44u;
    // 0x238a48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2393A8u;
    { ctx->pc = 0x2393a8; return; }
    ctx->pc = 0x238A4Cu;
label_238a4c:
    // 0x238a4c: 0x0  nop
    ctx->pc = 0x238a4cu;
    // NOP
label_238a50:
    // 0x238a50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x238a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_238a54:
    // 0x238a54: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x238a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_238a58:
    // 0x238a58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x238a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_238a5c:
    // 0x238a5c: 0x8c440818  lw          $a0, 0x818($v0)
    ctx->pc = 0x238a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2072)));
label_238a60:
    // 0x238a60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_238a64:
    // 0x238a64: 0x808e28c  j           func_238A30
label_238a68:
    if (ctx->pc == 0x238A68u) {
        ctx->pc = 0x238A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238A64u;
        // 0x238a68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238A6Cu;
        goto label_238a6c;
    }
    ctx->pc = 0x238A64u;
    ctx->pc = 0x238A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238A64u;
    // 0x238a68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238A30u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_238a30;
    ctx->pc = 0x238A6Cu;
label_238a6c:
    // 0x238a6c: 0x0  nop
    ctx->pc = 0x238a6cu;
    // NOP
label_238a70:
    // 0x238a70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_238a74:
    // 0x238a74: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x238a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_238a78:
    // 0x238a78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_238a7c:
    // 0x238a7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x238a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_238a80:
    // 0x238a80: 0x24428a30  addiu       $v0, $v0, -0x75D0
    ctx->pc = 0x238a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937136));
label_238a84:
    // 0x238a84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x238a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238a88:
    // 0x238a88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x238a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_238a8c:
    // 0x238a8c: 0x261101e4  addiu       $s1, $s0, 0x1E4
    ctx->pc = 0x238a8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 484));
label_238a90:
    // 0x238a90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_238a94:
    // 0x238a94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_238a98:
    // 0x238a98: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x238a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_238a9c:
    // 0x238a9c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x238a9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_238aa0:
    // 0x238aa0: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x238aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
label_238aa4:
    // 0x238aa4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x238aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_238aa8:
    // 0x238aa8: 0xc08e218  jal         func_238860
label_238aac:
    if (ctx->pc == 0x238AACu) {
        ctx->pc = 0x238AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238AA8u;
        // 0x238aac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238AB0u;
        goto label_238ab0;
    }
    ctx->pc = 0x238AA8u;
    SET_GPR_U32(ctx, 31, 0x238AB0u);
    ctx->pc = 0x238AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238AA8u;
    // 0x238aac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    { ctx->pc = 0x238860; return; }
    ctx->pc = 0x238AB0u;
label_238ab0:
    // 0x238ab0: 0x2604023c  addiu       $a0, $s0, 0x23C
    ctx->pc = 0x238ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 572));
label_238ab4:
    // 0x238ab4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x238ab4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_238ab8:
    // 0x238ab8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x238ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_238abc:
    // 0x238abc: 0xc08e218  jal         func_238860
label_238ac0:
    if (ctx->pc == 0x238AC0u) {
        ctx->pc = 0x238AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238ABCu;
        // 0x238ac0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238AC4u;
        goto label_238ac4;
    }
    ctx->pc = 0x238ABCu;
    SET_GPR_U32(ctx, 31, 0x238AC4u);
    ctx->pc = 0x238AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238ABCu;
    // 0x238ac0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    { ctx->pc = 0x238860; return; }
    ctx->pc = 0x238AC4u;
label_238ac4:
    // 0x238ac4: 0x26040294  addiu       $a0, $s0, 0x294
    ctx->pc = 0x238ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 660));
label_238ac8:
    // 0x238ac8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x238ac8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_238acc:
    // 0x238acc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x238accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_238ad0:
    // 0x238ad0: 0xc08e218  jal         func_238860
label_238ad4:
    if (ctx->pc == 0x238AD4u) {
        ctx->pc = 0x238AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238AD0u;
        // 0x238ad4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238AD8u;
        goto label_238ad8;
    }
    ctx->pc = 0x238AD0u;
    SET_GPR_U32(ctx, 31, 0x238AD8u);
    ctx->pc = 0x238AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238AD0u;
    // 0x238ad4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    { ctx->pc = 0x238860; return; }
    ctx->pc = 0x238AD8u;
label_238ad8:
    // 0x238ad8: 0xae0001d8  sw          $zero, 0x1D8($s0)
    ctx->pc = 0x238ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 0));
label_238adc:
    // 0x238adc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x238adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_238ae0:
    // 0x238ae0: 0xae1101e0  sw          $s1, 0x1E0($s0)
    ctx->pc = 0x238ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 17));
label_238ae4:
    // 0x238ae4: 0xae0201dc  sw          $v0, 0x1DC($s0)
    ctx->pc = 0x238ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 2));
label_238ae8:
    // 0x238ae8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238ae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_238aec:
    // 0x238aec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238aecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_238af0:
    // 0x238af0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_238af4:
    // 0x238af4: 0x3e00008  jr          $ra
label_238af8:
    if (ctx->pc == 0x238AF8u) {
        ctx->pc = 0x238AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238AF4u;
        // 0x238af8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238AFCu;
        goto label_238afc;
    }
    ctx->pc = 0x238AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238AF4u;
        // 0x238af8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238AFCu;
label_238afc:
    // 0x238afc: 0x0  nop
    ctx->pc = 0x238afcu;
    // NOP
label_238b00:
    // 0x238b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_238b04:
    // 0x238b04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_238b08:
    // 0x238b08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x238b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_238b0c:
    // 0x238b0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x238b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_238b10:
    // 0x238b10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x238b10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_238b14:
    // 0x238b14: 0x120000b2  beqz        $s0, . + 4 + (0xB2 << 2)
label_238b18:
    if (ctx->pc == 0x238B18u) {
        ctx->pc = 0x238B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B14u;
        // 0x238b18: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238B1Cu;
        goto label_238b1c;
    }
    ctx->pc = 0x238B14u;
    {
        const bool branch_taken_0x238b14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x238B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B14u;
        // 0x238b18: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238b14) {
            ctx->pc = 0x238DE0u;
            goto label_238de0;
        }
    }
    ctx->pc = 0x238B1Cu;
label_238b1c:
    // 0x238b1c: 0xc08e9dc  jal         func_23A770
label_238b20:
    if (ctx->pc == 0x238B20u) {
        ctx->pc = 0x238B24u;
        goto label_238b24;
    }
    ctx->pc = 0x238B1Cu;
    SET_GPR_U32(ctx, 31, 0x238B24u);
    ctx->pc = 0x23A770u;
    { ctx->pc = 0x23a770; return; }
    ctx->pc = 0x238B24u;
label_238b24:
    // 0x238b24: 0x2609fff8  addiu       $t1, $s0, -0x8
    ctx->pc = 0x238b24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_238b28:
    // 0x238b28: 0x8d260004  lw          $a2, 0x4($t1)
    ctx->pc = 0x238b28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_238b2c:
    // 0x238b2c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x238b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_238b30:
    // 0x238b30: 0x3c0c0029  lui         $t4, 0x29
    ctx->pc = 0x238b30u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)41 << 16));
label_238b34:
    // 0x238b34: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x238b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_238b38:
    // 0x238b38: 0xc24024  and         $t0, $a2, $v0
    ctx->pc = 0x238b38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_238b3c:
    // 0x238b3c: 0x258a0828  addiu       $t2, $t4, 0x828
    ctx->pc = 0x238b3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), 2088));
label_238b40:
    // 0x238b40: 0x1282821  addu        $a1, $t1, $t0
    ctx->pc = 0x238b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_238b44:
    // 0x238b44: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x238b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
label_238b48:
    // 0x238b48: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x238b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_238b4c:
    // 0x238b4c: 0x14a3001e  bne         $a1, $v1, . + 4 + (0x1E << 2)
label_238b50:
    if (ctx->pc == 0x238B50u) {
        ctx->pc = 0x238B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B4Cu;
        // 0x238b50: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238B54u;
        goto label_238b54;
    }
    ctx->pc = 0x238B4Cu;
    {
        const bool branch_taken_0x238b4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x238B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B4Cu;
        // 0x238b50: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238b4c) {
            ctx->pc = 0x238BC8u;
            goto label_238bc8;
        }
    }
    ctx->pc = 0x238B54u;
label_238b54:
    // 0x238b54: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x238b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_238b58:
    // 0x238b58: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_238b5c:
    if (ctx->pc == 0x238B5Cu) {
        ctx->pc = 0x238B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B58u;
        // 0x238b5c: 0x1044021  addu        $t0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238B60u;
        goto label_238b60;
    }
    ctx->pc = 0x238B58u;
    {
        const bool branch_taken_0x238b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B58u;
        // 0x238b5c: 0x1044021  addu        $t0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238b58) {
            ctx->pc = 0x238B7Cu;
            goto label_238b7c;
        }
    }
    ctx->pc = 0x238B60u;
label_238b60:
    // 0x238b60: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x238b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_238b64:
    // 0x238b64: 0x1234823  subu        $t1, $t1, $v1
    ctx->pc = 0x238b64u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_238b68:
    // 0x238b68: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x238b68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_238b6c:
    // 0x238b6c: 0x8d27000c  lw          $a3, 0xC($t1)
    ctx->pc = 0x238b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_238b70:
    // 0x238b70: 0x8d260008  lw          $a2, 0x8($t1)
    ctx->pc = 0x238b70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_238b74:
    // 0x238b74: 0xacc7000c  sw          $a3, 0xC($a2)
    ctx->pc = 0x238b74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 7));
label_238b78:
    // 0x238b78: 0xace60008  sw          $a2, 0x8($a3)
    ctx->pc = 0x238b78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
label_238b7c:
    // 0x238b7c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x238b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_238b80:
    // 0x238b80: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x238b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
label_238b84:
    // 0x238b84: 0xdc640c30  ld          $a0, 0xC30($v1)
    ctx->pc = 0x238b84u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 3120)));
label_238b88:
    // 0x238b88: 0x35030001  ori         $v1, $t0, 0x1
    ctx->pc = 0x238b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
label_238b8c:
    // 0x238b8c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x238b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_238b90:
    // 0x238b90: 0xad490008  sw          $t1, 0x8($t2)
    ctx->pc = 0x238b90u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 9));
label_238b94:
    // 0x238b94: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x238b94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_238b98:
    // 0x238b98: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_238b9c:
    if (ctx->pc == 0x238B9Cu) {
        ctx->pc = 0x238B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B98u;
        // 0x238b9c: 0xad230004  sw          $v1, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238BA0u;
        goto label_238ba0;
    }
    ctx->pc = 0x238B98u;
    {
        const bool branch_taken_0x238b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B98u;
        // 0x238b9c: 0xad230004  sw          $v1, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238b98) {
            ctx->pc = 0x238BB0u;
            goto label_238bb0;
        }
    }
    ctx->pc = 0x238BA0u;
label_238ba0:
    // 0x238ba0: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x238ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_238ba4:
    // 0x238ba4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_238ba8:
    // 0x238ba8: 0xc08e37e  jal         func_238DF8
label_238bac:
    if (ctx->pc == 0x238BACu) {
        ctx->pc = 0x238BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BA8u;
        // 0x238bac: 0x8c450c38  lw          $a1, 0xC38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238BB0u;
        goto label_238bb0;
    }
    ctx->pc = 0x238BA8u;
    SET_GPR_U32(ctx, 31, 0x238BB0u);
    ctx->pc = 0x238BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238BA8u;
    // 0x238bac: 0x8c450c38  lw          $a1, 0xC38($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238DF8u;
    goto label_238df8;
    ctx->pc = 0x238BB0u;
label_238bb0:
    // 0x238bb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_238bb4:
    // 0x238bb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238bb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_238bb8:
    // 0x238bb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238bb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_238bbc:
    // 0x238bbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_238bc0:
    // 0x238bc0: 0x808e9fc  j           func_23A7F0
label_238bc4:
    if (ctx->pc == 0x238BC4u) {
        ctx->pc = 0x238BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BC0u;
        // 0x238bc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238BC8u;
        goto label_238bc8;
    }
    ctx->pc = 0x238BC0u;
    ctx->pc = 0x238BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238BC0u;
    // 0x238bc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A7F0u;
    { ctx->pc = 0x23a7f0; return; }
    ctx->pc = 0x238BC8u;
label_238bc8:
    // 0x238bc8: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x238bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_238bcc:
    // 0x238bcc: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x238bccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_238bd0:
    // 0x238bd0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_238bd4:
    if (ctx->pc == 0x238BD4u) {
        ctx->pc = 0x238BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BD0u;
        // 0x238bd4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238BD8u;
        goto label_238bd8;
    }
    ctx->pc = 0x238BD0u;
    {
        const bool branch_taken_0x238bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BD0u;
        // 0x238bd4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238bd0) {
            ctx->pc = 0x238C0Cu;
            goto label_238c0c;
        }
    }
    ctx->pc = 0x238BD8u;
label_238bd8:
    // 0x238bd8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x238bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_238bdc:
    // 0x238bdc: 0x25420008  addiu       $v0, $t2, 0x8
    ctx->pc = 0x238bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_238be0:
    // 0x238be0: 0x1234823  subu        $t1, $t1, $v1
    ctx->pc = 0x238be0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_238be4:
    // 0x238be4: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x238be4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_238be8:
    // 0x238be8: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x238be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_238bec:
    // 0x238bec: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_238bf0:
    if (ctx->pc == 0x238BF0u) {
        ctx->pc = 0x238BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BECu;
        // 0x238bf0: 0x8d27000c  lw          $a3, 0xC($t1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238BF4u;
        goto label_238bf4;
    }
    ctx->pc = 0x238BECu;
    {
        const bool branch_taken_0x238bec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x238bec) {
            ctx->pc = 0x238BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238BECu;
            // 0x238bf0: 0x8d27000c  lw          $a3, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238C00u;
            goto label_238c00;
        }
    }
    ctx->pc = 0x238BF4u;
label_238bf4:
    // 0x238bf4: 0x10000005  b           . + 4 + (0x5 << 2)
label_238bf8:
    if (ctx->pc == 0x238BF8u) {
        ctx->pc = 0x238BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BF4u;
        // 0x238bf8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238BFCu;
        goto label_238bfc;
    }
    ctx->pc = 0x238BF4u;
    {
        const bool branch_taken_0x238bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BF4u;
        // 0x238bf8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238bf4) {
            ctx->pc = 0x238C0Cu;
            goto label_238c0c;
        }
    }
    ctx->pc = 0x238BFCu;
label_238bfc:
    // 0x238bfc: 0x0  nop
    ctx->pc = 0x238bfcu;
    // NOP
label_238c00:
    // 0x238c00: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x238c00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_238c04:
    // 0x238c04: 0xacc7000c  sw          $a3, 0xC($a2)
    ctx->pc = 0x238c04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 7));
label_238c08:
    // 0x238c08: 0xace60008  sw          $a2, 0x8($a3)
    ctx->pc = 0x238c08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
label_238c0c:
    // 0x238c0c: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x238c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_238c10:
    // 0x238c10: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x238c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_238c14:
    // 0x238c14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x238c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_238c18:
    // 0x238c18: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_238c1c:
    if (ctx->pc == 0x238C1Cu) {
        ctx->pc = 0x238C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C18u;
        // 0x238c1c: 0x35020001  ori         $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x238C20u;
        goto label_238c20;
    }
    ctx->pc = 0x238C18u;
    {
        const bool branch_taken_0x238c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C18u;
        // 0x238c1c: 0x35020001  ori         $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x238c18) {
            ctx->pc = 0x238C70u;
            goto label_238c70;
        }
    }
    ctx->pc = 0x238C20u;
label_238c20:
    // 0x238c20: 0x1560000d  bnez        $t3, . + 4 + (0xD << 2)
label_238c24:
    if (ctx->pc == 0x238C24u) {
        ctx->pc = 0x238C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C20u;
        // 0x238c24: 0x1044021  addu        $t0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238C28u;
        goto label_238c28;
    }
    ctx->pc = 0x238C20u;
    {
        const bool branch_taken_0x238c20 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x238C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C20u;
        // 0x238c24: 0x1044021  addu        $t0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238c20) {
            ctx->pc = 0x238C58u;
            goto label_238c58;
        }
    }
    ctx->pc = 0x238C28u;
label_238c28:
    // 0x238c28: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x238c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_238c2c:
    // 0x238c2c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x238c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_238c30:
    // 0x238c30: 0x24420838  addiu       $v0, $v0, 0x838
    ctx->pc = 0x238c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2104));
label_238c34:
    // 0x238c34: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x238c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_238c38:
    // 0x238c38: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_238c3c:
    if (ctx->pc == 0x238C3Cu) {
        ctx->pc = 0x238C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C38u;
        // 0x238c3c: 0x8ca7000c  lw          $a3, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238C40u;
        goto label_238c40;
    }
    ctx->pc = 0x238C38u;
    {
        const bool branch_taken_0x238c38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x238c38) {
            ctx->pc = 0x238C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238C38u;
            // 0x238c3c: 0x8ca7000c  lw          $a3, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238C60u;
            goto label_238c60;
        }
    }
    ctx->pc = 0x238C40u;
label_238c40:
    // 0x238c40: 0xac69000c  sw          $t1, 0xC($v1)
    ctx->pc = 0x238c40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 9));
label_238c44:
    // 0x238c44: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x238c44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238c48:
    // 0x238c48: 0xac690008  sw          $t1, 0x8($v1)
    ctx->pc = 0x238c48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 9));
label_238c4c:
    // 0x238c4c: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x238c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
label_238c50:
    // 0x238c50: 0x10000006  b           . + 4 + (0x6 << 2)
label_238c54:
    if (ctx->pc == 0x238C54u) {
        ctx->pc = 0x238C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C50u;
        // 0x238c54: 0xad23000c  sw          $v1, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238C58u;
        goto label_238c58;
    }
    ctx->pc = 0x238C50u;
    {
        const bool branch_taken_0x238c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C50u;
        // 0x238c54: 0xad23000c  sw          $v1, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238c50) {
            ctx->pc = 0x238C6Cu;
            goto label_238c6c;
        }
    }
    ctx->pc = 0x238C58u;
label_238c58:
    // 0x238c58: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x238c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_238c5c:
    // 0x238c5c: 0x8ca7000c  lw          $a3, 0xC($a1)
    ctx->pc = 0x238c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_238c60:
    // 0x238c60: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x238c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_238c64:
    // 0x238c64: 0xacc7000c  sw          $a3, 0xC($a2)
    ctx->pc = 0x238c64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 7));
label_238c68:
    // 0x238c68: 0xace60008  sw          $a2, 0x8($a3)
    ctx->pc = 0x238c68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
label_238c6c:
    // 0x238c6c: 0x35020001  ori         $v0, $t0, 0x1
    ctx->pc = 0x238c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
label_238c70:
    // 0x238c70: 0x1281821  addu        $v1, $t1, $t0
    ctx->pc = 0x238c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_238c74:
    // 0x238c74: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x238c74u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
label_238c78:
    // 0x238c78: 0x15600053  bnez        $t3, . + 4 + (0x53 << 2)
label_238c7c:
    if (ctx->pc == 0x238C7Cu) {
        ctx->pc = 0x238C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C78u;
        // 0x238c7c: 0xac680000  sw          $t0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238C80u;
        goto label_238c80;
    }
    ctx->pc = 0x238C78u;
    {
        const bool branch_taken_0x238c78 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x238C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C78u;
        // 0x238c7c: 0xac680000  sw          $t0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238c78) {
            ctx->pc = 0x238DC8u;
            goto label_238dc8;
        }
    }
    ctx->pc = 0x238C80u;
label_238c80:
    // 0x238c80: 0x2d020200  sltiu       $v0, $t0, 0x200
    ctx->pc = 0x238c80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
label_238c84:
    // 0x238c84: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_238c88:
    if (ctx->pc == 0x238C88u) {
        ctx->pc = 0x238C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C84u;
        // 0x238c88: 0x81a42  srl         $v1, $t0, 9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238C8Cu;
        goto label_238c8c;
    }
    ctx->pc = 0x238C84u;
    {
        const bool branch_taken_0x238c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238c84) {
            ctx->pc = 0x238C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238C84u;
            // 0x238c88: 0x81a42  srl         $v1, $t0, 9 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238CD0u;
            goto label_238cd0;
        }
    }
    ctx->pc = 0x238C8Cu;
label_238c8c:
    // 0x238c8c: 0x828c2  srl         $a1, $t0, 3
    ctx->pc = 0x238c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 3));
label_238c90:
    // 0x238c90: 0x25840828  addiu       $a0, $t4, 0x828
    ctx->pc = 0x238c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 2088));
label_238c94:
    // 0x238c94: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x238c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_238c98:
    // 0x238c98: 0x52882  srl         $a1, $a1, 2
    ctx->pc = 0x238c98u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
label_238c9c:
    // 0x238c9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238ca0:
    // 0x238ca0: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x238ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_238ca4:
    // 0x238ca4: 0xa21014  dsllv       $v0, $v0, $a1
    ctx->pc = 0x238ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 5) & 0x3F));
label_238ca8:
    // 0x238ca8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x238ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_238cac:
    // 0x238cac: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x238cacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_238cb0:
    // 0x238cb0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x238cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_238cb4:
    // 0x238cb4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x238cb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_238cb8:
    // 0x238cb8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x238cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_238cbc:
    // 0x238cbc: 0xad27000c  sw          $a3, 0xC($t1)
    ctx->pc = 0x238cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 7));
label_238cc0:
    // 0x238cc0: 0xad260008  sw          $a2, 0x8($t1)
    ctx->pc = 0x238cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 6));
label_238cc4:
    // 0x238cc4: 0x1000003e  b           . + 4 + (0x3E << 2)
label_238cc8:
    if (ctx->pc == 0x238CC8u) {
        ctx->pc = 0x238CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CC4u;
        // 0x238cc8: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238CCCu;
        goto label_238ccc;
    }
    ctx->pc = 0x238CC4u;
    {
        const bool branch_taken_0x238cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CC4u;
        // 0x238cc8: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238cc4) {
            ctx->pc = 0x238DC0u;
            goto label_238dc0;
        }
    }
    ctx->pc = 0x238CCCu;
label_238ccc:
    // 0x238ccc: 0x0  nop
    ctx->pc = 0x238cccu;
    // NOP
label_238cd0:
    // 0x238cd0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_238cd4:
    if (ctx->pc == 0x238CD4u) {
        ctx->pc = 0x238CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CD0u;
        // 0x238cd4: 0x828c2  srl         $a1, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238CD8u;
        goto label_238cd8;
    }
    ctx->pc = 0x238CD0u;
    {
        const bool branch_taken_0x238cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x238CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CD0u;
        // 0x238cd4: 0x828c2  srl         $a1, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238cd0) {
            ctx->pc = 0x238D38u;
            goto label_238d38;
        }
    }
    ctx->pc = 0x238CD8u;
label_238cd8:
    // 0x238cd8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x238cd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_238cdc:
    // 0x238cdc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_238ce0:
    if (ctx->pc == 0x238CE0u) {
        ctx->pc = 0x238CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CDCu;
        // 0x238ce0: 0x2c620015  sltiu       $v0, $v1, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x238CE4u;
        goto label_238ce4;
    }
    ctx->pc = 0x238CDCu;
    {
        const bool branch_taken_0x238cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CDCu;
        // 0x238ce0: 0x2c620015  sltiu       $v0, $v1, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x238cdc) {
            ctx->pc = 0x238CF0u;
            goto label_238cf0;
        }
    }
    ctx->pc = 0x238CE4u;
label_238ce4:
    // 0x238ce4: 0x81182  srl         $v0, $t0, 6
    ctx->pc = 0x238ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 6));
label_238ce8:
    // 0x238ce8: 0x10000013  b           . + 4 + (0x13 << 2)
label_238cec:
    if (ctx->pc == 0x238CECu) {
        ctx->pc = 0x238CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CE8u;
        // 0x238cec: 0x24450038  addiu       $a1, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238CF0u;
        goto label_238cf0;
    }
    ctx->pc = 0x238CE8u;
    {
        const bool branch_taken_0x238ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CE8u;
        // 0x238cec: 0x24450038  addiu       $a1, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238ce8) {
            ctx->pc = 0x238D38u;
            goto label_238d38;
        }
    }
    ctx->pc = 0x238CF0u;
label_238cf0:
    // 0x238cf0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_238cf4:
    if (ctx->pc == 0x238CF4u) {
        ctx->pc = 0x238CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CF0u;
        // 0x238cf4: 0x2465005b  addiu       $a1, $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 91));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238CF8u;
        goto label_238cf8;
    }
    ctx->pc = 0x238CF0u;
    {
        const bool branch_taken_0x238cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CF0u;
        // 0x238cf4: 0x2465005b  addiu       $a1, $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238cf0) {
            ctx->pc = 0x238D38u;
            goto label_238d38;
        }
    }
    ctx->pc = 0x238CF8u;
label_238cf8:
    // 0x238cf8: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x238cf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
label_238cfc:
    // 0x238cfc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_238d00:
    if (ctx->pc == 0x238D00u) {
        ctx->pc = 0x238D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CFCu;
        // 0x238d00: 0x2c620155  sltiu       $v0, $v1, 0x155 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x238D04u;
        goto label_238d04;
    }
    ctx->pc = 0x238CFCu;
    {
        const bool branch_taken_0x238cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CFCu;
        // 0x238d00: 0x2c620155  sltiu       $v0, $v1, 0x155 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x238cfc) {
            ctx->pc = 0x238D10u;
            goto label_238d10;
        }
    }
    ctx->pc = 0x238D04u;
label_238d04:
    // 0x238d04: 0x81302  srl         $v0, $t0, 12
    ctx->pc = 0x238d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 12));
label_238d08:
    // 0x238d08: 0x1000000b  b           . + 4 + (0xB << 2)
label_238d0c:
    if (ctx->pc == 0x238D0Cu) {
        ctx->pc = 0x238D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D08u;
        // 0x238d0c: 0x2445006e  addiu       $a1, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238D10u;
        goto label_238d10;
    }
    ctx->pc = 0x238D08u;
    {
        const bool branch_taken_0x238d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D08u;
        // 0x238d0c: 0x2445006e  addiu       $a1, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d08) {
            ctx->pc = 0x238D38u;
            goto label_238d38;
        }
    }
    ctx->pc = 0x238D10u;
label_238d10:
    // 0x238d10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_238d14:
    if (ctx->pc == 0x238D14u) {
        ctx->pc = 0x238D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D10u;
        // 0x238d14: 0x2c620555  sltiu       $v0, $v1, 0x555 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x238D18u;
        goto label_238d18;
    }
    ctx->pc = 0x238D10u;
    {
        const bool branch_taken_0x238d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D10u;
        // 0x238d14: 0x2c620555  sltiu       $v0, $v1, 0x555 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d10) {
            ctx->pc = 0x238D28u;
            goto label_238d28;
        }
    }
    ctx->pc = 0x238D18u;
label_238d18:
    // 0x238d18: 0x813c2  srl         $v0, $t0, 15
    ctx->pc = 0x238d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 15));
label_238d1c:
    // 0x238d1c: 0x10000006  b           . + 4 + (0x6 << 2)
label_238d20:
    if (ctx->pc == 0x238D20u) {
        ctx->pc = 0x238D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D1Cu;
        // 0x238d20: 0x24450077  addiu       $a1, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238D24u;
        goto label_238d24;
    }
    ctx->pc = 0x238D1Cu;
    {
        const bool branch_taken_0x238d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D1Cu;
        // 0x238d20: 0x24450077  addiu       $a1, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d1c) {
            ctx->pc = 0x238D38u;
            goto label_238d38;
        }
    }
    ctx->pc = 0x238D24u;
label_238d24:
    // 0x238d24: 0x0  nop
    ctx->pc = 0x238d24u;
    // NOP
label_238d28:
    // 0x238d28: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_238d2c:
    if (ctx->pc == 0x238D2Cu) {
        ctx->pc = 0x238D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D28u;
        // 0x238d2c: 0x2405007e  addiu       $a1, $zero, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238D30u;
        goto label_238d30;
    }
    ctx->pc = 0x238D28u;
    {
        const bool branch_taken_0x238d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238d28) {
            ctx->pc = 0x238D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238D28u;
            // 0x238d2c: 0x2405007e  addiu       $a1, $zero, 0x7E (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238D38u;
            goto label_238d38;
        }
    }
    ctx->pc = 0x238D30u;
label_238d30:
    // 0x238d30: 0x81482  srl         $v0, $t0, 18
    ctx->pc = 0x238d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 18));
label_238d34:
    // 0x238d34: 0x2445007c  addiu       $a1, $v0, 0x7C
    ctx->pc = 0x238d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
label_238d38:
    // 0x238d38: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x238d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_238d3c:
    // 0x238d3c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x238d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_238d40:
    // 0x238d40: 0x24420830  addiu       $v0, $v0, 0x830
    ctx->pc = 0x238d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2096));
label_238d44:
    // 0x238d44: 0x244afff8  addiu       $t2, $v0, -0x8
    ctx->pc = 0x238d44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_238d48:
    // 0x238d48: 0x6a3821  addu        $a3, $v1, $t2
    ctx->pc = 0x238d48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_238d4c:
    // 0x238d4c: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x238d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_238d50:
    // 0x238d50: 0x54c7000d  bnel        $a2, $a3, . + 4 + (0xD << 2)
label_238d54:
    if (ctx->pc == 0x238D54u) {
        ctx->pc = 0x238D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D50u;
        // 0x238d54: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238D58u;
        goto label_238d58;
    }
    ctx->pc = 0x238D50u;
    {
        const bool branch_taken_0x238d50 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x238d50) {
            ctx->pc = 0x238D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238D50u;
            // 0x238d54: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238D88u;
            goto label_238d88;
        }
    }
    ctx->pc = 0x238D58u;
label_238d58:
    // 0x238d58: 0x24a40003  addiu       $a0, $a1, 0x3
    ctx->pc = 0x238d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_238d5c:
    // 0x238d5c: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x238d5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
label_238d60:
    // 0x238d60: 0x83280b  movn        $a1, $a0, $v1
    ctx->pc = 0x238d60u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
label_238d64:
    // 0x238d64: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x238d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_238d68:
    // 0x238d68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238d6c:
    // 0x238d6c: 0x52083  sra         $a0, $a1, 2
    ctx->pc = 0x238d6cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 2));
label_238d70:
    // 0x238d70: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x238d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_238d74:
    // 0x238d74: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x238d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_238d78:
    // 0x238d78: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x238d78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_238d7c:
    // 0x238d7c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x238d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_238d80:
    // 0x238d80: 0x1000000d  b           . + 4 + (0xD << 2)
label_238d84:
    if (ctx->pc == 0x238D84u) {
        ctx->pc = 0x238D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D80u;
        // 0x238d84: 0xad430004  sw          $v1, 0x4($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238D88u;
        goto label_238d88;
    }
    ctx->pc = 0x238D80u;
    {
        const bool branch_taken_0x238d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D80u;
        // 0x238d84: 0xad430004  sw          $v1, 0x4($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d80) {
            ctx->pc = 0x238DB8u;
            goto label_238db8;
        }
    }
    ctx->pc = 0x238D88u;
label_238d88:
    // 0x238d88: 0x10000004  b           . + 4 + (0x4 << 2)
label_238d8c:
    if (ctx->pc == 0x238D8Cu) {
        ctx->pc = 0x238D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D88u;
        // 0x238d8c: 0x2403fffc  addiu       $v1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238D90u;
        goto label_238d90;
    }
    ctx->pc = 0x238D88u;
    {
        const bool branch_taken_0x238d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D88u;
        // 0x238d8c: 0x2403fffc  addiu       $v1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d88) {
            ctx->pc = 0x238D9Cu;
            goto label_238d9c;
        }
    }
    ctx->pc = 0x238D90u;
label_238d90:
    // 0x238d90: 0x50c70009  beql        $a2, $a3, . + 4 + (0x9 << 2)
label_238d94:
    if (ctx->pc == 0x238D94u) {
        ctx->pc = 0x238D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D90u;
        // 0x238d94: 0x8cc7000c  lw          $a3, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238D98u;
        goto label_238d98;
    }
    ctx->pc = 0x238D90u;
    {
        const bool branch_taken_0x238d90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x238d90) {
            ctx->pc = 0x238D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238D90u;
            // 0x238d94: 0x8cc7000c  lw          $a3, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238DB8u;
            goto label_238db8;
        }
    }
    ctx->pc = 0x238D98u;
label_238d98:
    // 0x238d98: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x238d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_238d9c:
    // 0x238d9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x238d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_238da0:
    // 0x238da0: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x238da0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_238da4:
    // 0x238da4: 0x0  nop
    ctx->pc = 0x238da4u;
    // NOP
label_238da8:
    // 0x238da8: 0x0  nop
    ctx->pc = 0x238da8u;
    // NOP
label_238dac:
    // 0x238dac: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_238db0:
    if (ctx->pc == 0x238DB0u) {
        ctx->pc = 0x238DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238DACu;
        // 0x238db0: 0x8cc60008  lw          $a2, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238DB4u;
        goto label_238db4;
    }
    ctx->pc = 0x238DACu;
    {
        const bool branch_taken_0x238dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238dac) {
            ctx->pc = 0x238DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238DACu;
            // 0x238db0: 0x8cc60008  lw          $a2, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_238d90;
        }
    }
    ctx->pc = 0x238DB4u;
label_238db4:
    // 0x238db4: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x238db4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_238db8:
    // 0x238db8: 0xad27000c  sw          $a3, 0xC($t1)
    ctx->pc = 0x238db8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 7));
label_238dbc:
    // 0x238dbc: 0xad260008  sw          $a2, 0x8($t1)
    ctx->pc = 0x238dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 6));
label_238dc0:
    // 0x238dc0: 0xace90008  sw          $t1, 0x8($a3)
    ctx->pc = 0x238dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 9));
label_238dc4:
    // 0x238dc4: 0xacc9000c  sw          $t1, 0xC($a2)
    ctx->pc = 0x238dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 9));
label_238dc8:
    // 0x238dc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_238dcc:
    // 0x238dcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238dccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_238dd0:
    // 0x238dd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238dd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_238dd4:
    // 0x238dd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_238dd8:
    // 0x238dd8: 0x808e9fc  j           func_23A7F0
label_238ddc:
    if (ctx->pc == 0x238DDCu) {
        ctx->pc = 0x238DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238DD8u;
        // 0x238ddc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238DE0u;
        goto label_238de0;
    }
    ctx->pc = 0x238DD8u;
    ctx->pc = 0x238DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238DD8u;
    // 0x238ddc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A7F0u;
    { ctx->pc = 0x23a7f0; return; }
    ctx->pc = 0x238DE0u;
label_238de0:
    // 0x238de0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238de0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_238de4:
    // 0x238de4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238de4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_238de8:
    // 0x238de8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_238dec:
    // 0x238dec: 0x3e00008  jr          $ra
label_238df0:
    if (ctx->pc == 0x238DF0u) {
        ctx->pc = 0x238DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238DECu;
        // 0x238df0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238DF4u;
        goto label_238df4;
    }
    ctx->pc = 0x238DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238DECu;
        // 0x238df0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238DF4u;
label_238df4:
    // 0x238df4: 0x0  nop
    ctx->pc = 0x238df4u;
    // NOP
label_238df8:
    // 0x238df8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x238df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_238dfc:
    // 0x238dfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_238e00:
    // 0x238e00: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x238e00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_238e04:
    // 0x238e04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x238e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_238e08:
    // 0x238e08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x238e08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_238e0c:
    // 0x238e0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x238e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_238e10:
    // 0x238e10: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x238e10u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
label_238e14:
    // 0x238e14: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x238e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_238e18:
    // 0x238e18: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x238e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_238e1c:
    // 0x238e1c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x238e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_238e20:
    // 0x238e20: 0xc08e9dc  jal         func_23A770
label_238e24:
    if (ctx->pc == 0x238E24u) {
        ctx->pc = 0x238E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E20u;
        // 0x238e24: 0x10803e  dsrl32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238E28u;
        goto label_238e28;
    }
    ctx->pc = 0x238E20u;
    SET_GPR_U32(ctx, 31, 0x238E28u);
    ctx->pc = 0x238E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238E20u;
    // 0x238e24: 0x10803e  dsrl32      $s0, $s0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A770u;
    { ctx->pc = 0x23a770; return; }
    ctx->pc = 0x238E28u;
label_238e28:
    // 0x238e28: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x238e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_238e2c:
    // 0x238e2c: 0x2406fffc  addiu       $a2, $zero, -0x4
    ctx->pc = 0x238e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_238e30:
    // 0x238e30: 0x24540828  addiu       $s4, $v0, 0x828
    ctx->pc = 0x238e30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 2088));
label_238e34:
    // 0x238e34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_238e38:
    // 0x238e38: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x238e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_238e3c:
    // 0x238e3c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x238e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_238e40:
    // 0x238e40: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x238e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_238e44:
    // 0x238e44: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x238e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_238e48:
    // 0x238e48: 0x2903e  dsrl32      $s2, $v0, 0
    ctx->pc = 0x238e48u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> (32 + 0));
label_238e4c:
    // 0x238e4c: 0x250802f  dsubu       $s0, $s2, $s0
    ctx->pc = 0x238e4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) - GPR_U64(ctx, 16));
label_238e50:
    // 0x238e50: 0x66100fef  daddiu      $s0, $s0, 0xFEF
    ctx->pc = 0x238e50u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4079);
label_238e54:
    // 0x238e54: 0x10833a  dsrl        $s0, $s0, 12
    ctx->pc = 0x238e54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 12);
label_238e58:
    // 0x238e58: 0x6610ffff  daddiu      $s0, $s0, -0x1
    ctx->pc = 0x238e58u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4294967295);
label_238e5c:
    // 0x238e5c: 0x108338  dsll        $s0, $s0, 12
    ctx->pc = 0x238e5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 12);
label_238e60:
    // 0x238e60: 0x2a021000  slti        $v0, $s0, 0x1000
    ctx->pc = 0x238e60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4096) ? 1 : 0);
label_238e64:
    // 0x238e64: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_238e68:
    if (ctx->pc == 0x238E68u) {
        ctx->pc = 0x238E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E64u;
        // 0x238e68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238E6Cu;
        goto label_238e6c;
    }
    ctx->pc = 0x238E64u;
    {
        const bool branch_taken_0x238e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E64u;
        // 0x238e68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238e64) {
            ctx->pc = 0x238F00u;
            goto label_238f00;
        }
    }
    ctx->pc = 0x238E6Cu;
label_238e6c:
    // 0x238e6c: 0xc08f0fe  jal         func_23C3F8
label_238e70:
    if (ctx->pc == 0x238E70u) {
        ctx->pc = 0x238E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E6Cu;
        // 0x238e70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238E74u;
        goto label_238e74;
    }
    ctx->pc = 0x238E6Cu;
    SET_GPR_U32(ctx, 31, 0x238E74u);
    ctx->pc = 0x238E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238E6Cu;
    // 0x238e70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C3F8u;
    { ctx->pc = 0x23c3f8; return; }
    ctx->pc = 0x238E74u;
label_238e74:
    // 0x238e74: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x238e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_238e78:
    // 0x238e78: 0x12283c  dsll32      $a1, $s2, 0
    ctx->pc = 0x238e78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 0));
label_238e7c:
    // 0x238e7c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x238e7cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_238e80:
    // 0x238e80: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x238e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_238e84:
    // 0x238e84: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
label_238e88:
    if (ctx->pc == 0x238E88u) {
        ctx->pc = 0x238E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E84u;
        // 0x238e88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238E8Cu;
        goto label_238e8c;
    }
    ctx->pc = 0x238E84u;
    {
        const bool branch_taken_0x238e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x238E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E84u;
        // 0x238e88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238e84) {
            ctx->pc = 0x238F00u;
            goto label_238f00;
        }
    }
    ctx->pc = 0x238E8Cu;
label_238e8c:
    // 0x238e8c: 0x10983c  dsll32      $s3, $s0, 0
    ctx->pc = 0x238e8cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 0));
label_238e90:
    // 0x238e90: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x238e90u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
label_238e94:
    // 0x238e94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_238e98:
    // 0x238e98: 0xc08f0fe  jal         func_23C3F8
label_238e9c:
    if (ctx->pc == 0x238E9Cu) {
        ctx->pc = 0x238E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E98u;
        // 0x238e9c: 0x132823  negu        $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238EA0u;
        goto label_238ea0;
    }
    ctx->pc = 0x238E98u;
    SET_GPR_U32(ctx, 31, 0x238EA0u);
    ctx->pc = 0x238E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238E98u;
    // 0x238e9c: 0x132823  negu        $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C3F8u;
    { ctx->pc = 0x23c3f8; return; }
    ctx->pc = 0x238EA0u;
label_238ea0:
    // 0x238ea0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_238ea4:
    // 0x238ea4: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x238ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_238ea8:
    // 0x238ea8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x238ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_238eac:
    // 0x238eac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x238eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_238eb0:
    // 0x238eb0: 0x14460017  bne         $v0, $a2, . + 4 + (0x17 << 2)
label_238eb4:
    if (ctx->pc == 0x238EB4u) {
        ctx->pc = 0x238EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238EB0u;
        // 0x238eb4: 0x24670c58  addiu       $a3, $v1, 0xC58 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 3160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238EB8u;
        goto label_238eb8;
    }
    ctx->pc = 0x238EB0u;
    {
        const bool branch_taken_0x238eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x238EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238EB0u;
        // 0x238eb4: 0x24670c58  addiu       $a3, $v1, 0xC58 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 3160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238eb0) {
            ctx->pc = 0x238F10u;
            goto label_238f10;
        }
    }
    ctx->pc = 0x238EB8u;
label_238eb8:
    // 0x238eb8: 0xc08f0fe  jal         func_23C3F8
label_238ebc:
    if (ctx->pc == 0x238EBCu) {
        ctx->pc = 0x238EC0u;
        goto label_238ec0;
    }
    ctx->pc = 0x238EB8u;
    SET_GPR_U32(ctx, 31, 0x238EC0u);
    ctx->pc = 0x23C3F8u;
    { ctx->pc = 0x23c3f8; return; }
    ctx->pc = 0x238EC0u;
label_238ec0:
    // 0x238ec0: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x238ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_238ec4:
    // 0x238ec4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x238ec4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_238ec8:
    // 0x238ec8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238ecc:
    // 0x238ecc: 0xe69023  subu        $s2, $a3, $a2
    ctx->pc = 0x238eccu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_238ed0:
    // 0x238ed0: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x238ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_238ed4:
    // 0x238ed4: 0x2a430010  slti        $v1, $s2, 0x10
    ctx->pc = 0x238ed4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
label_238ed8:
    // 0x238ed8: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x238ed8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_238edc:
    // 0x238edc: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x238edcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_238ee0:
    // 0x238ee0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_238ee4:
    if (ctx->pc == 0x238EE4u) {
        ctx->pc = 0x238EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238EE0u;
        // 0x238ee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238EE8u;
        goto label_238ee8;
    }
    ctx->pc = 0x238EE0u;
    {
        const bool branch_taken_0x238ee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x238EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238EE0u;
        // 0x238ee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238ee0) {
            ctx->pc = 0x238F00u;
            goto label_238f00;
        }
    }
    ctx->pc = 0x238EE8u;
label_238ee8:
    // 0x238ee8: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x238ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_238eec:
    // 0x238eec: 0x8c430c40  lw          $v1, 0xC40($v0)
    ctx->pc = 0x238eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3136)));
label_238ef0:
    // 0x238ef0: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x238ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_238ef4:
    // 0x238ef4: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x238ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_238ef8:
    // 0x238ef8: 0xac430c58  sw          $v1, 0xC58($v0)
    ctx->pc = 0x238ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3160), GPR_U32(ctx, 3));
label_238efc:
    // 0x238efc: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x238efcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
label_238f00:
    // 0x238f00: 0xc08e9fc  jal         func_23A7F0
label_238f04:
    if (ctx->pc == 0x238F04u) {
        ctx->pc = 0x238F08u;
        goto label_238f08;
    }
    ctx->pc = 0x238F00u;
    SET_GPR_U32(ctx, 31, 0x238F08u);
    ctx->pc = 0x23A7F0u;
    { ctx->pc = 0x23a7f0; return; }
    ctx->pc = 0x238F08u;
label_238f08:
    // 0x238f08: 0x1000000e  b           . + 4 + (0xE << 2)
label_238f0c:
    if (ctx->pc == 0x238F0Cu) {
        ctx->pc = 0x238F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F08u;
        // 0x238f0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238F10u;
        goto label_238f10;
    }
    ctx->pc = 0x238F08u;
    {
        const bool branch_taken_0x238f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F08u;
        // 0x238f0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238f08) {
            ctx->pc = 0x238F44u;
            goto label_238f44;
        }
    }
    ctx->pc = 0x238F10u;
label_238f10:
    // 0x238f10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238f14:
    // 0x238f14: 0x250182f  dsubu       $v1, $s2, $s0
    ctx->pc = 0x238f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) - GPR_U64(ctx, 16));
label_238f18:
    // 0x238f18: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x238f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_238f1c:
    // 0x238f1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x238f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_238f20:
    // 0x238f20: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x238f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_238f24:
    // 0x238f24: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x238f24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_238f28:
    // 0x238f28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_238f2c:
    // 0x238f2c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x238f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_238f30:
    // 0x238f30: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x238f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_238f34:
    // 0x238f34: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x238f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_238f38:
    // 0x238f38: 0xc08e9fc  jal         func_23A7F0
label_238f3c:
    if (ctx->pc == 0x238F3Cu) {
        ctx->pc = 0x238F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F38u;
        // 0x238f3c: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238F40u;
        goto label_238f40;
    }
    ctx->pc = 0x238F38u;
    SET_GPR_U32(ctx, 31, 0x238F40u);
    ctx->pc = 0x238F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238F38u;
    // 0x238f3c: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A7F0u;
    { ctx->pc = 0x23a7f0; return; }
    ctx->pc = 0x238F40u;
label_238f40:
    // 0x238f40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238f44:
    // 0x238f44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238f44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_238f48:
    // 0x238f48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238f48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_238f4c:
    // 0x238f4c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x238f4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_238f50:
    // 0x238f50: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x238f50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_238f54:
    // 0x238f54: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x238f54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_238f58:
    // 0x238f58: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x238f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_238f5c:
    // 0x238f5c: 0x3e00008  jr          $ra
label_238f60:
    if (ctx->pc == 0x238F60u) {
        ctx->pc = 0x238F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F5Cu;
        // 0x238f60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238F64u;
        goto label_238f64;
    }
    ctx->pc = 0x238F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F5Cu;
        // 0x238f60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238F64u;
label_238f64:
    // 0x238f64: 0x0  nop
    ctx->pc = 0x238f64u;
    // NOP
label_238f68:
    // 0x238f68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_238f6c:
    // 0x238f6c: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x238f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_238f70:
    // 0x238f70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_238f74:
    // 0x238f74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x238f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_238f78:
    // 0x238f78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x238f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_238f7c:
    // 0x238f7c: 0x245159c8  addiu       $s1, $v0, 0x59C8
    ctx->pc = 0x238f7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 22984));
label_238f80:
    // 0x238f80: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x238f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_238f84:
    // 0x238f84: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x238f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_238f88:
    // 0x238f88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_238f8c:
    // 0x238f8c: 0xc0693f6  jal         func_1A4FD8
label_238f90:
    if (ctx->pc == 0x238F90u) {
        ctx->pc = 0x238F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F8Cu;
        // 0x238f90: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238F94u;
        goto label_238f94;
    }
    ctx->pc = 0x238F8Cu;
    SET_GPR_U32(ctx, 31, 0x238F94u);
    ctx->pc = 0x238F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238F8Cu;
    // 0x238f90: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4FD8u;
    { ctx->pc = 0x1a4fd8; return; }
    ctx->pc = 0x238F94u;
label_238f94:
    // 0x238f94: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x238f94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_238f98:
    // 0x238f98: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x238f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_238f9c:
    // 0x238f9c: 0x54640005  bnel        $v1, $a0, . + 4 + (0x5 << 2)
label_238fa0:
    if (ctx->pc == 0x238FA0u) {
        ctx->pc = 0x238FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F9Cu;
        // 0x238fa0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238FA4u;
        goto label_238fa4;
    }
    ctx->pc = 0x238F9Cu;
    {
        const bool branch_taken_0x238f9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x238f9c) {
            ctx->pc = 0x238FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238F9Cu;
            // 0x238fa0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238FB4u;
            goto label_238fb4;
        }
    }
    ctx->pc = 0x238FA4u;
label_238fa4:
    // 0x238fa4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x238fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_238fa8:
    // 0x238fa8: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
label_238fac:
    if (ctx->pc == 0x238FACu) {
        ctx->pc = 0x238FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238FA8u;
        // 0x238fac: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238FB0u;
        goto label_238fb0;
    }
    ctx->pc = 0x238FA8u;
    {
        const bool branch_taken_0x238fa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x238fa8) {
            ctx->pc = 0x238FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238FA8u;
            // 0x238fac: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238FB0u;
            goto label_238fb0;
        }
    }
    ctx->pc = 0x238FB0u;
label_238fb0:
    // 0x238fb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238fb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_238fb4:
    // 0x238fb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238fb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_238fb8:
    // 0x238fb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_238fbc:
    // 0x238fbc: 0x3e00008  jr          $ra
label_238fc0:
    if (ctx->pc == 0x238FC0u) {
        ctx->pc = 0x238FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238FBCu;
        // 0x238fc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238FC4u;
        goto label_238fc4;
    }
    ctx->pc = 0x238FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238FBCu;
        // 0x238fc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238FC4u;
label_238fc4:
    // 0x238fc4: 0x0  nop
    ctx->pc = 0x238fc4u;
    // NOP
label_238fc8:
    // 0x238fc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x238fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_238fcc:
    // 0x238fcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x238fccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_238fd0:
    // 0x238fd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x238fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_238fd4:
    // 0x238fd4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x238fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_238fd8:
    // 0x238fd8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x238fd8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_238fdc:
    // 0x238fdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_238fe0:
    // 0x238fe0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x238fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_238fe4:
    // 0x238fe4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x238fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_238fe8:
    // 0x238fe8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x238fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_238fec:
    // 0x238fec: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x238fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_238ff0:
    // 0x238ff0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x238ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_238ff4:
    // 0x238ff4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x238ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_238ff8:
    // 0x238ff8: 0x8ed20008  lw          $s2, 0x8($s6)
    ctx->pc = 0x238ff8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_238ffc:
    // 0x238ffc: 0x124000df  beqz        $s2, . + 4 + (0xDF << 2)
label_239000:
    if (ctx->pc == 0x239000u) {
        ctx->pc = 0x239000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238FFCu;
        // 0x239000: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239004u;
        goto label_239004;
    }
    ctx->pc = 0x238FFCu;
    {
        const bool branch_taken_0x238ffc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x239000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238FFCu;
        // 0x239000: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238ffc) {
            ctx->pc = 0x23937Cu;
            { ctx->pc = 0x23937c; return; }
        }
    }
    ctx->pc = 0x239004u;
label_239004:
    // 0x239004: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x239004u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_239008:
    // 0x239008: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x239008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_23900c:
    // 0x23900c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_239010:
    if (ctx->pc == 0x239010u) {
        ctx->pc = 0x239014u;
        goto label_239014;
    }
    ctx->pc = 0x23900Cu;
    {
        const bool branch_taken_0x23900c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23900c) {
            ctx->pc = 0x239020u;
            goto label_239020;
        }
    }
    ctx->pc = 0x239014u;
label_239014:
    // 0x239014: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x239014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_239018:
    // 0x239018: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_23901c:
    if (ctx->pc == 0x23901Cu) {
        ctx->pc = 0x23901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239018u;
        // 0x23901c: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x239020u;
        goto label_239020;
    }
    ctx->pc = 0x239018u;
    {
        const bool branch_taken_0x239018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239018u;
        // 0x23901c: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239018) {
            ctx->pc = 0x239038u;
            goto label_239038;
        }
    }
    ctx->pc = 0x239020u;
label_239020:
    // 0x239020: 0xc08fcc6  jal         func_23F318
label_239024:
    if (ctx->pc == 0x239024u) {
        ctx->pc = 0x239028u;
        goto label_239028;
    }
    ctx->pc = 0x239020u;
    SET_GPR_U32(ctx, 31, 0x239028u);
    ctx->pc = 0x23F318u;
    { ctx->pc = 0x23f318; return; }
    ctx->pc = 0x239028u;
label_239028:
    // 0x239028: 0x144000d4  bnez        $v0, . + 4 + (0xD4 << 2)
label_23902c:
    if (ctx->pc == 0x23902Cu) {
        ctx->pc = 0x23902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239028u;
        // 0x23902c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239030u;
        goto label_239030;
    }
    ctx->pc = 0x239028u;
    {
        const bool branch_taken_0x239028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239028u;
        // 0x23902c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239028) {
            ctx->pc = 0x23937Cu;
            { ctx->pc = 0x23937c; return; }
        }
    }
    ctx->pc = 0x239030u;
label_239030:
    // 0x239030: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x239030u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_239034:
    // 0x239034: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x239034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_239038:
    // 0x239038: 0x8ed40000  lw          $s4, 0x0($s6)
    ctx->pc = 0x239038u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_23903c:
    // 0x23903c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_239040:
    if (ctx->pc == 0x239040u) {
        ctx->pc = 0x239040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23903Cu;
        // 0x239040: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239044u;
        goto label_239044;
    }
    ctx->pc = 0x23903Cu;
    {
        const bool branch_taken_0x23903c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23903Cu;
        // 0x239040: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23903c) {
            ctx->pc = 0x2390B8u;
            goto label_2390b8;
        }
    }
    ctx->pc = 0x239044u;
label_239044:
    // 0x239044: 0x24150400  addiu       $s5, $zero, 0x400
    ctx->pc = 0x239044u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_239048:
    // 0x239048: 0x56400009  bnel        $s2, $zero, . + 4 + (0x9 << 2)
label_23904c:
    if (ctx->pc == 0x23904Cu) {
        ctx->pc = 0x23904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239048u;
        // 0x23904c: 0x2e430401  sltiu       $v1, $s2, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x239050u;
        goto label_239050;
    }
    ctx->pc = 0x239048u;
    {
        const bool branch_taken_0x239048 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x239048) {
            ctx->pc = 0x23904Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239048u;
            // 0x23904c: 0x2e430401  sltiu       $v1, $s2, 0x401 (Delay Slot)
            SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x239070u;
            goto label_239070;
        }
    }
    ctx->pc = 0x239050u;
label_239050:
    // 0x239050: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x239050u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_239054:
    // 0x239054: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x239054u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_239058:
    // 0x239058: 0x0  nop
    ctx->pc = 0x239058u;
    // NOP
label_23905c:
    // 0x23905c: 0x0  nop
    ctx->pc = 0x23905cu;
    // NOP
label_239060:
    // 0x239060: 0x0  nop
    ctx->pc = 0x239060u;
    // NOP
label_239064:
    // 0x239064: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
label_239068:
    if (ctx->pc == 0x239068u) {
        ctx->pc = 0x239068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239064u;
        // 0x239068: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23906Cu;
        goto label_23906c;
    }
    ctx->pc = 0x239064u;
    {
        const bool branch_taken_0x239064 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x239068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239064u;
        // 0x239068: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239064) {
            ctx->pc = 0x239050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239050;
        }
    }
    ctx->pc = 0x23906Cu;
label_23906c:
    // 0x23906c: 0x2e430401  sltiu       $v1, $s2, 0x401
    ctx->pc = 0x23906cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
label_239070:
    // 0x239070: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x239070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_239074:
    // 0x239074: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x239074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_239078:
    // 0x239078: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x239078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23907c:
    // 0x23907c: 0x243300b  movn        $a2, $s2, $v1
    ctx->pc = 0x23907cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
label_239080:
    // 0x239080: 0x40f809  jalr        $v0
label_239084:
    if (ctx->pc == 0x239084u) {
        ctx->pc = 0x239084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239080u;
        // 0x239084: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239088u;
        goto label_239088;
    }
    ctx->pc = 0x239080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x239088u);
        ctx->pc = 0x239084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239080u;
        // 0x239084: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239080u, 0x239088u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x239088u;
label_239088:
    // 0x239088: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x239088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23908c:
    // 0x23908c: 0x5a0000b8  blezl       $s0, . + 4 + (0xB8 << 2)
label_239090:
    if (ctx->pc == 0x239090u) {
        ctx->pc = 0x239090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23908Cu;
        // 0x239090: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239094u;
        goto label_239094;
    }
    ctx->pc = 0x23908Cu;
    {
        const bool branch_taken_0x23908c = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x23908c) {
            ctx->pc = 0x239090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23908Cu;
            // 0x239090: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239370u;
            { ctx->pc = 0x239370; return; }
        }
    }
    ctx->pc = 0x239094u;
label_239094:
    // 0x239094: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x239094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_239098:
    // 0x239098: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x239098u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_23909c:
    // 0x23909c: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x23909cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_2390a0:
    // 0x2390a0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2390a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2390a4:
    // 0x2390a4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_2390a8:
    if (ctx->pc == 0x2390A8u) {
        ctx->pc = 0x2390A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390A4u;
        // 0x2390a8: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2390ACu;
        goto label_2390ac;
    }
    ctx->pc = 0x2390A4u;
    {
        const bool branch_taken_0x2390a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2390A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390A4u;
        // 0x2390a8: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2390a4) {
            ctx->pc = 0x239048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239048;
        }
    }
    ctx->pc = 0x2390ACu;
label_2390ac:
    // 0x2390ac: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_2390b0:
    if (ctx->pc == 0x2390B0u) {
        ctx->pc = 0x2390B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390ACu;
        // 0x2390b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2390B4u;
        goto label_2390b4;
    }
    ctx->pc = 0x2390ACu;
    {
        const bool branch_taken_0x2390ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2390B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390ACu;
        // 0x2390b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2390ac) {
            ctx->pc = 0x23937Cu;
            { ctx->pc = 0x23937c; return; }
        }
    }
    ctx->pc = 0x2390B4u;
label_2390b4:
    // 0x2390b4: 0x0  nop
    ctx->pc = 0x2390b4u;
    // NOP
label_2390b8:
    // 0x2390b8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2390b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2390bc:
    // 0x2390bc: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
label_2390c0:
    if (ctx->pc == 0x2390C0u) {
        ctx->pc = 0x2390C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390BCu;
        // 0x2390c0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2390C4u;
        goto label_2390c4;
    }
    ctx->pc = 0x2390BCu;
    {
        const bool branch_taken_0x2390bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2390C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390BCu;
        // 0x2390c0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2390bc) {
            ctx->pc = 0x239208u;
            { ctx->pc = 0x239208; return; }
        }
    }
    ctx->pc = 0x2390C4u;
label_2390c4:
    // 0x2390c4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2390c8:
    if (ctx->pc == 0x2390C8u) {
        ctx->pc = 0x2390CCu;
        goto label_2390cc;
    }
    ctx->pc = 0x2390C4u;
    {
        const bool branch_taken_0x2390c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2390c4) {
            ctx->pc = 0x2390D8u;
            goto label_2390d8;
        }
    }
    ctx->pc = 0x2390CCu;
label_2390cc:
    // 0x2390cc: 0x0  nop
    ctx->pc = 0x2390ccu;
    // NOP
label_2390d0:
    // 0x2390d0: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x2390d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_2390d4:
    // 0x2390d4: 0x0  nop
    ctx->pc = 0x2390d4u;
    // NOP
label_2390d8:
    // 0x2390d8: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
label_2390dc:
    if (ctx->pc == 0x2390DCu) {
        ctx->pc = 0x2390DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390D8u;
        // 0x2390dc: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2390E0u;
        goto label_2390e0;
    }
    ctx->pc = 0x2390D8u;
    {
        const bool branch_taken_0x2390d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2390DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390D8u;
        // 0x2390dc: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2390d8) {
            ctx->pc = 0x239100u;
            goto label_239100;
        }
    }
    ctx->pc = 0x2390E0u;
label_2390e0:
    // 0x2390e0: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x2390e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2390e4:
    // 0x2390e4: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x2390e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2390e8:
    // 0x2390e8: 0x0  nop
    ctx->pc = 0x2390e8u;
    // NOP
label_2390ec:
    // 0x2390ec: 0x0  nop
    ctx->pc = 0x2390ecu;
    // NOP
label_2390f0:
    // 0x2390f0: 0x0  nop
    ctx->pc = 0x2390f0u;
    // NOP
label_2390f4:
    // 0x2390f4: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
label_2390f8:
    if (ctx->pc == 0x2390F8u) {
        ctx->pc = 0x2390F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390F4u;
        // 0x2390f8: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2390FCu;
        goto label_2390fc;
    }
    ctx->pc = 0x2390F4u;
    {
        const bool branch_taken_0x2390f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2390F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390F4u;
        // 0x2390f8: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2390f4) {
            ctx->pc = 0x2390E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2390e0;
        }
    }
    ctx->pc = 0x2390FCu;
label_2390fc:
    // 0x2390fc: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x2390fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_239100:
    // 0x239100: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_239104:
    if (ctx->pc == 0x239104u) {
        ctx->pc = 0x239104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239100u;
        // 0x239104: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239108u;
        goto label_239108;
    }
    ctx->pc = 0x239100u;
    {
        const bool branch_taken_0x239100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239100u;
        // 0x239104: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239100) {
            ctx->pc = 0x239138u;
            goto label_239138;
        }
    }
    ctx->pc = 0x239108u;
label_239108:
    // 0x239108: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x239108u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_23910c:
    // 0x23910c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x23910cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_239110:
    // 0x239110: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x239110u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_239114:
    // 0x239114: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x239114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_239118:
    // 0x239118: 0xc08e96a  jal         func_23A5A8
label_23911c:
    if (ctx->pc == 0x23911Cu) {
        ctx->pc = 0x23911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239118u;
        // 0x23911c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239120u;
        goto label_239120;
    }
    ctx->pc = 0x239118u;
    SET_GPR_U32(ctx, 31, 0x239120u);
    ctx->pc = 0x23911Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239118u;
    // 0x23911c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A5A8u;
    { ctx->pc = 0x23a5a8; return; }
    ctx->pc = 0x239120u;
label_239120:
    // 0x239120: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x239120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_239124:
    // 0x239124: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x239124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_239128:
    // 0x239128: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x239128u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_23912c:
    // 0x23912c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23912cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_239130:
    // 0x239130: 0x1000002a  b           . + 4 + (0x2A << 2)
label_239134:
    if (ctx->pc == 0x239134u) {
        ctx->pc = 0x239134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239130u;
        // 0x239134: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239138u;
        goto label_239138;
    }
    ctx->pc = 0x239130u;
    {
        const bool branch_taken_0x239130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239130u;
        // 0x239134: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239130) {
            ctx->pc = 0x2391DCu;
            { ctx->pc = 0x2391dc; return; }
        }
    }
    ctx->pc = 0x239138u;
label_239138:
    // 0x239138: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x239138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23913c:
    // 0x23913c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x23913cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_239140:
    // 0x239140: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x239140u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_239144:
    // 0x239144: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_239148:
    if (ctx->pc == 0x239148u) {
        ctx->pc = 0x239148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239144u;
        // 0x239148: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23914Cu;
        goto label_23914c;
    }
    ctx->pc = 0x239144u;
    {
        const bool branch_taken_0x239144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239144) {
            ctx->pc = 0x239148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239144u;
            // 0x239148: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239188u;
            { ctx->pc = 0x239188; return; }
        }
    }
    ctx->pc = 0x23914Cu;
label_23914c:
    // 0x23914c: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x23914cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_239150:
    // 0x239150: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_239154:
    if (ctx->pc == 0x239154u) {
        ctx->pc = 0x239154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239150u;
        // 0x239154: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239158u;
        goto label_239158;
    }
    ctx->pc = 0x239150u;
    {
        const bool branch_taken_0x239150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239150) {
            ctx->pc = 0x239154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239150u;
            // 0x239154: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239188u;
            { ctx->pc = 0x239188; return; }
        }
    }
    ctx->pc = 0x239158u;
label_239158:
    // 0x239158: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x239158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23915c:
    // 0x23915c: 0xc08e96a  jal         func_23A5A8
label_239160:
    if (ctx->pc == 0x239160u) {
        ctx->pc = 0x239160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23915Cu;
        // 0x239160: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239164u;
        goto label_239164;
    }
    ctx->pc = 0x23915Cu;
    SET_GPR_U32(ctx, 31, 0x239164u);
    ctx->pc = 0x239160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23915Cu;
    // 0x239160: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A5A8u;
    { ctx->pc = 0x23a5a8; return; }
    ctx->pc = 0x239164u;
label_239164:
    // 0x239164: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x239164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_239168:
    // 0x239168: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x239168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23916c:
    // 0x23916c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x23916cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_239170:
    // 0x239170: 0xc08e1d2  jal         func_238748
label_239174:
    if (ctx->pc == 0x239174u) {
        ctx->pc = 0x239174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239170u;
        // 0x239174: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239178u;
        goto label_239178;
    }
    ctx->pc = 0x239170u;
    SET_GPR_U32(ctx, 31, 0x239178u);
    ctx->pc = 0x239174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239170u;
    // 0x239174: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238748u;
    { ctx->pc = 0x238748; return; }
    ctx->pc = 0x239178u;
label_239178:
    // 0x239178: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_23917c:
    if (ctx->pc == 0x23917Cu) {
        ctx->pc = 0x23917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239178u;
        // 0x23917c: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239180u;
        goto label_239180;
    }
    ctx->pc = 0x239178u;
    {
        const bool branch_taken_0x239178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239178) {
            ctx->pc = 0x23917Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239178u;
            // 0x23917c: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2391E8u;
            { ctx->pc = 0x2391e8; return; }
        }
    }
    ctx->pc = 0x239180u;
label_239180:
    // 0x239180: 0x1000007b  b           . + 4 + (0x7B << 2)
label_239184:
    if (ctx->pc == 0x239184u) {
        ctx->pc = 0x239184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239180u;
        // 0x239184: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239188u;
        { ctx->pc = 0x239188; return; }
    }
    ctx->pc = 0x239180u;
    {
        const bool branch_taken_0x239180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239180u;
        // 0x239184: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239180) {
            ctx->pc = 0x239370u;
            { ctx->pc = 0x239370; return; }
        }
    }
    ctx->pc = 0x239188u;
    ctx->pc = 0x239188u;
    return;
}

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


void FUN_0017faa0_part46(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x195a30u: goto label_195a30;
        case 0x195a34u: goto label_195a34;
        case 0x195a38u: goto label_195a38;
        case 0x195a3cu: goto label_195a3c;
        case 0x195a40u: goto label_195a40;
        case 0x195a44u: goto label_195a44;
        case 0x195a48u: goto label_195a48;
        case 0x195a4cu: goto label_195a4c;
        case 0x195a50u: goto label_195a50;
        case 0x195a54u: goto label_195a54;
        case 0x195a58u: goto label_195a58;
        case 0x195a5cu: goto label_195a5c;
        case 0x195a60u: goto label_195a60;
        case 0x195a64u: goto label_195a64;
        case 0x195a68u: goto label_195a68;
        case 0x195a6cu: goto label_195a6c;
        case 0x195a70u: goto label_195a70;
        case 0x195a74u: goto label_195a74;
        case 0x195a78u: goto label_195a78;
        case 0x195a7cu: goto label_195a7c;
        case 0x195a80u: goto label_195a80;
        case 0x195a84u: goto label_195a84;
        case 0x195a88u: goto label_195a88;
        case 0x195a8cu: goto label_195a8c;
        case 0x195a90u: goto label_195a90;
        case 0x195a94u: goto label_195a94;
        case 0x195a98u: goto label_195a98;
        case 0x195a9cu: goto label_195a9c;
        case 0x195aa0u: goto label_195aa0;
        case 0x195aa4u: goto label_195aa4;
        case 0x195aa8u: goto label_195aa8;
        case 0x195aacu: goto label_195aac;
        case 0x195ab0u: goto label_195ab0;
        case 0x195ab4u: goto label_195ab4;
        case 0x195ab8u: goto label_195ab8;
        case 0x195abcu: goto label_195abc;
        case 0x195ac0u: goto label_195ac0;
        case 0x195ac4u: goto label_195ac4;
        case 0x195ac8u: goto label_195ac8;
        case 0x195accu: goto label_195acc;
        case 0x195ad0u: goto label_195ad0;
        case 0x195ad4u: goto label_195ad4;
        case 0x195ad8u: goto label_195ad8;
        case 0x195adcu: goto label_195adc;
        case 0x195ae0u: goto label_195ae0;
        case 0x195ae4u: goto label_195ae4;
        case 0x195ae8u: goto label_195ae8;
        case 0x195aecu: goto label_195aec;
        case 0x195af0u: goto label_195af0;
        case 0x195af4u: goto label_195af4;
        case 0x195af8u: goto label_195af8;
        case 0x195afcu: goto label_195afc;
        case 0x195b00u: goto label_195b00;
        case 0x195b04u: goto label_195b04;
        case 0x195b08u: goto label_195b08;
        case 0x195b0cu: goto label_195b0c;
        case 0x195b10u: goto label_195b10;
        case 0x195b14u: goto label_195b14;
        case 0x195b18u: goto label_195b18;
        case 0x195b1cu: goto label_195b1c;
        case 0x195b20u: goto label_195b20;
        case 0x195b24u: goto label_195b24;
        case 0x195b28u: goto label_195b28;
        case 0x195b2cu: goto label_195b2c;
        case 0x195b30u: goto label_195b30;
        case 0x195b34u: goto label_195b34;
        case 0x195b38u: goto label_195b38;
        case 0x195b3cu: goto label_195b3c;
        case 0x195b40u: goto label_195b40;
        case 0x195b44u: goto label_195b44;
        case 0x195b48u: goto label_195b48;
        case 0x195b4cu: goto label_195b4c;
        case 0x195b50u: goto label_195b50;
        case 0x195b54u: goto label_195b54;
        case 0x195b58u: goto label_195b58;
        case 0x195b5cu: goto label_195b5c;
        case 0x195b60u: goto label_195b60;
        case 0x195b64u: goto label_195b64;
        case 0x195b68u: goto label_195b68;
        case 0x195b6cu: goto label_195b6c;
        case 0x195b70u: goto label_195b70;
        case 0x195b74u: goto label_195b74;
        case 0x195b78u: goto label_195b78;
        case 0x195b7cu: goto label_195b7c;
        case 0x195b80u: goto label_195b80;
        case 0x195b84u: goto label_195b84;
        case 0x195b88u: goto label_195b88;
        case 0x195b8cu: goto label_195b8c;
        case 0x195b90u: goto label_195b90;
        case 0x195b94u: goto label_195b94;
        case 0x195b98u: goto label_195b98;
        case 0x195b9cu: goto label_195b9c;
        case 0x195ba0u: goto label_195ba0;
        case 0x195ba4u: goto label_195ba4;
        case 0x195ba8u: goto label_195ba8;
        case 0x195bacu: goto label_195bac;
        case 0x195bb0u: goto label_195bb0;
        case 0x195bb4u: goto label_195bb4;
        case 0x195bb8u: goto label_195bb8;
        case 0x195bbcu: goto label_195bbc;
        case 0x195bc0u: goto label_195bc0;
        case 0x195bc4u: goto label_195bc4;
        case 0x195bc8u: goto label_195bc8;
        case 0x195bccu: goto label_195bcc;
        case 0x195bd0u: goto label_195bd0;
        case 0x195bd4u: goto label_195bd4;
        case 0x195bd8u: goto label_195bd8;
        case 0x195bdcu: goto label_195bdc;
        case 0x195be0u: goto label_195be0;
        case 0x195be4u: goto label_195be4;
        case 0x195be8u: goto label_195be8;
        case 0x195becu: goto label_195bec;
        case 0x195bf0u: goto label_195bf0;
        case 0x195bf4u: goto label_195bf4;
        case 0x195bf8u: goto label_195bf8;
        case 0x195bfcu: goto label_195bfc;
        case 0x195c00u: goto label_195c00;
        case 0x195c04u: goto label_195c04;
        case 0x195c08u: goto label_195c08;
        case 0x195c0cu: goto label_195c0c;
        case 0x195c10u: goto label_195c10;
        case 0x195c14u: goto label_195c14;
        case 0x195c18u: goto label_195c18;
        case 0x195c1cu: goto label_195c1c;
        case 0x195c20u: goto label_195c20;
        case 0x195c24u: goto label_195c24;
        case 0x195c28u: goto label_195c28;
        case 0x195c2cu: goto label_195c2c;
        case 0x195c30u: goto label_195c30;
        case 0x195c34u: goto label_195c34;
        case 0x195c38u: goto label_195c38;
        case 0x195c3cu: goto label_195c3c;
        case 0x195c40u: goto label_195c40;
        case 0x195c44u: goto label_195c44;
        case 0x195c48u: goto label_195c48;
        case 0x195c4cu: goto label_195c4c;
        case 0x195c50u: goto label_195c50;
        case 0x195c54u: goto label_195c54;
        case 0x195c58u: goto label_195c58;
        case 0x195c5cu: goto label_195c5c;
        case 0x195c60u: goto label_195c60;
        case 0x195c64u: goto label_195c64;
        case 0x195c68u: goto label_195c68;
        case 0x195c6cu: goto label_195c6c;
        case 0x195c70u: goto label_195c70;
        case 0x195c74u: goto label_195c74;
        case 0x195c78u: goto label_195c78;
        case 0x195c7cu: goto label_195c7c;
        case 0x195c80u: goto label_195c80;
        case 0x195c84u: goto label_195c84;
        case 0x195c88u: goto label_195c88;
        case 0x195c8cu: goto label_195c8c;
        case 0x195c90u: goto label_195c90;
        case 0x195c94u: goto label_195c94;
        case 0x195c98u: goto label_195c98;
        case 0x195c9cu: goto label_195c9c;
        case 0x195ca0u: goto label_195ca0;
        case 0x195ca4u: goto label_195ca4;
        case 0x195ca8u: goto label_195ca8;
        case 0x195cacu: goto label_195cac;
        case 0x195cb0u: goto label_195cb0;
        case 0x195cb4u: goto label_195cb4;
        case 0x195cb8u: goto label_195cb8;
        case 0x195cbcu: goto label_195cbc;
        case 0x195cc0u: goto label_195cc0;
        case 0x195cc4u: goto label_195cc4;
        case 0x195cc8u: goto label_195cc8;
        case 0x195cccu: goto label_195ccc;
        case 0x195cd0u: goto label_195cd0;
        case 0x195cd4u: goto label_195cd4;
        case 0x195cd8u: goto label_195cd8;
        case 0x195cdcu: goto label_195cdc;
        case 0x195ce0u: goto label_195ce0;
        case 0x195ce4u: goto label_195ce4;
        case 0x195ce8u: goto label_195ce8;
        case 0x195cecu: goto label_195cec;
        case 0x195cf0u: goto label_195cf0;
        case 0x195cf4u: goto label_195cf4;
        case 0x195cf8u: goto label_195cf8;
        case 0x195cfcu: goto label_195cfc;
        case 0x195d00u: goto label_195d00;
        case 0x195d04u: goto label_195d04;
        case 0x195d08u: goto label_195d08;
        case 0x195d0cu: goto label_195d0c;
        case 0x195d10u: goto label_195d10;
        case 0x195d14u: goto label_195d14;
        case 0x195d18u: goto label_195d18;
        case 0x195d1cu: goto label_195d1c;
        case 0x195d20u: goto label_195d20;
        case 0x195d24u: goto label_195d24;
        case 0x195d28u: goto label_195d28;
        case 0x195d2cu: goto label_195d2c;
        case 0x195d30u: goto label_195d30;
        case 0x195d34u: goto label_195d34;
        case 0x195d38u: goto label_195d38;
        case 0x195d3cu: goto label_195d3c;
        case 0x195d40u: goto label_195d40;
        case 0x195d44u: goto label_195d44;
        case 0x195d48u: goto label_195d48;
        case 0x195d4cu: goto label_195d4c;
        case 0x195d50u: goto label_195d50;
        case 0x195d54u: goto label_195d54;
        case 0x195d58u: goto label_195d58;
        case 0x195d5cu: goto label_195d5c;
        case 0x195d60u: goto label_195d60;
        case 0x195d64u: goto label_195d64;
        case 0x195d68u: goto label_195d68;
        case 0x195d6cu: goto label_195d6c;
        case 0x195d70u: goto label_195d70;
        case 0x195d74u: goto label_195d74;
        case 0x195d78u: goto label_195d78;
        case 0x195d7cu: goto label_195d7c;
        case 0x195d80u: goto label_195d80;
        case 0x195d84u: goto label_195d84;
        case 0x195d88u: goto label_195d88;
        case 0x195d8cu: goto label_195d8c;
        case 0x195d90u: goto label_195d90;
        case 0x195d94u: goto label_195d94;
        case 0x195d98u: goto label_195d98;
        case 0x195d9cu: goto label_195d9c;
        case 0x195da0u: goto label_195da0;
        case 0x195da4u: goto label_195da4;
        case 0x195da8u: goto label_195da8;
        case 0x195dacu: goto label_195dac;
        case 0x195db0u: goto label_195db0;
        case 0x195db4u: goto label_195db4;
        case 0x195db8u: goto label_195db8;
        case 0x195dbcu: goto label_195dbc;
        case 0x195dc0u: goto label_195dc0;
        case 0x195dc4u: goto label_195dc4;
        case 0x195dc8u: goto label_195dc8;
        case 0x195dccu: goto label_195dcc;
        case 0x195dd0u: goto label_195dd0;
        case 0x195dd4u: goto label_195dd4;
        case 0x195dd8u: goto label_195dd8;
        case 0x195ddcu: goto label_195ddc;
        case 0x195de0u: goto label_195de0;
        case 0x195de4u: goto label_195de4;
        case 0x195de8u: goto label_195de8;
        case 0x195decu: goto label_195dec;
        case 0x195df0u: goto label_195df0;
        case 0x195df4u: goto label_195df4;
        case 0x195df8u: goto label_195df8;
        case 0x195dfcu: goto label_195dfc;
        case 0x195e00u: goto label_195e00;
        case 0x195e04u: goto label_195e04;
        case 0x195e08u: goto label_195e08;
        case 0x195e0cu: goto label_195e0c;
        case 0x195e10u: goto label_195e10;
        case 0x195e14u: goto label_195e14;
        case 0x195e18u: goto label_195e18;
        case 0x195e1cu: goto label_195e1c;
        case 0x195e20u: goto label_195e20;
        case 0x195e24u: goto label_195e24;
        case 0x195e28u: goto label_195e28;
        case 0x195e2cu: goto label_195e2c;
        case 0x195e30u: goto label_195e30;
        case 0x195e34u: goto label_195e34;
        case 0x195e38u: goto label_195e38;
        case 0x195e3cu: goto label_195e3c;
        case 0x195e40u: goto label_195e40;
        case 0x195e44u: goto label_195e44;
        case 0x195e48u: goto label_195e48;
        case 0x195e4cu: goto label_195e4c;
        case 0x195e50u: goto label_195e50;
        case 0x195e54u: goto label_195e54;
        case 0x195e58u: goto label_195e58;
        case 0x195e5cu: goto label_195e5c;
        case 0x195e60u: goto label_195e60;
        case 0x195e64u: goto label_195e64;
        case 0x195e68u: goto label_195e68;
        case 0x195e6cu: goto label_195e6c;
        case 0x195e70u: goto label_195e70;
        case 0x195e74u: goto label_195e74;
        case 0x195e78u: goto label_195e78;
        case 0x195e7cu: goto label_195e7c;
        case 0x195e80u: goto label_195e80;
        case 0x195e84u: goto label_195e84;
        case 0x195e88u: goto label_195e88;
        case 0x195e8cu: goto label_195e8c;
        case 0x195e90u: goto label_195e90;
        case 0x195e94u: goto label_195e94;
        case 0x195e98u: goto label_195e98;
        case 0x195e9cu: goto label_195e9c;
        case 0x195ea0u: goto label_195ea0;
        case 0x195ea4u: goto label_195ea4;
        case 0x195ea8u: goto label_195ea8;
        case 0x195eacu: goto label_195eac;
        case 0x195eb0u: goto label_195eb0;
        case 0x195eb4u: goto label_195eb4;
        case 0x195eb8u: goto label_195eb8;
        case 0x195ebcu: goto label_195ebc;
        case 0x195ec0u: goto label_195ec0;
        case 0x195ec4u: goto label_195ec4;
        case 0x195ec8u: goto label_195ec8;
        case 0x195eccu: goto label_195ecc;
        case 0x195ed0u: goto label_195ed0;
        case 0x195ed4u: goto label_195ed4;
        case 0x195ed8u: goto label_195ed8;
        case 0x195edcu: goto label_195edc;
        case 0x195ee0u: goto label_195ee0;
        case 0x195ee4u: goto label_195ee4;
        case 0x195ee8u: goto label_195ee8;
        case 0x195eecu: goto label_195eec;
        case 0x195ef0u: goto label_195ef0;
        case 0x195ef4u: goto label_195ef4;
        case 0x195ef8u: goto label_195ef8;
        case 0x195efcu: goto label_195efc;
        case 0x195f00u: goto label_195f00;
        case 0x195f04u: goto label_195f04;
        case 0x195f08u: goto label_195f08;
        case 0x195f0cu: goto label_195f0c;
        case 0x195f10u: goto label_195f10;
        case 0x195f14u: goto label_195f14;
        case 0x195f18u: goto label_195f18;
        case 0x195f1cu: goto label_195f1c;
        case 0x195f20u: goto label_195f20;
        case 0x195f24u: goto label_195f24;
        case 0x195f28u: goto label_195f28;
        case 0x195f2cu: goto label_195f2c;
        case 0x195f30u: goto label_195f30;
        case 0x195f34u: goto label_195f34;
        case 0x195f38u: goto label_195f38;
        case 0x195f3cu: goto label_195f3c;
        case 0x195f40u: goto label_195f40;
        case 0x195f44u: goto label_195f44;
        case 0x195f48u: goto label_195f48;
        case 0x195f4cu: goto label_195f4c;
        case 0x195f50u: goto label_195f50;
        case 0x195f54u: goto label_195f54;
        case 0x195f58u: goto label_195f58;
        case 0x195f5cu: goto label_195f5c;
        case 0x195f60u: goto label_195f60;
        case 0x195f64u: goto label_195f64;
        case 0x195f68u: goto label_195f68;
        case 0x195f6cu: goto label_195f6c;
        case 0x195f70u: goto label_195f70;
        case 0x195f74u: goto label_195f74;
        case 0x195f78u: goto label_195f78;
        case 0x195f7cu: goto label_195f7c;
        case 0x195f80u: goto label_195f80;
        case 0x195f84u: goto label_195f84;
        case 0x195f88u: goto label_195f88;
        case 0x195f8cu: goto label_195f8c;
        case 0x195f90u: goto label_195f90;
        case 0x195f94u: goto label_195f94;
        case 0x195f98u: goto label_195f98;
        case 0x195f9cu: goto label_195f9c;
        case 0x195fa0u: goto label_195fa0;
        case 0x195fa4u: goto label_195fa4;
        case 0x195fa8u: goto label_195fa8;
        case 0x195facu: goto label_195fac;
        case 0x195fb0u: goto label_195fb0;
        case 0x195fb4u: goto label_195fb4;
        case 0x195fb8u: goto label_195fb8;
        case 0x195fbcu: goto label_195fbc;
        case 0x195fc0u: goto label_195fc0;
        case 0x195fc4u: goto label_195fc4;
        case 0x195fc8u: goto label_195fc8;
        case 0x195fccu: goto label_195fcc;
        case 0x195fd0u: goto label_195fd0;
        case 0x195fd4u: goto label_195fd4;
        case 0x195fd8u: goto label_195fd8;
        case 0x195fdcu: goto label_195fdc;
        case 0x195fe0u: goto label_195fe0;
        case 0x195fe4u: goto label_195fe4;
        case 0x195fe8u: goto label_195fe8;
        case 0x195fecu: goto label_195fec;
        case 0x195ff0u: goto label_195ff0;
        case 0x195ff4u: goto label_195ff4;
        case 0x195ff8u: goto label_195ff8;
        case 0x195ffcu: goto label_195ffc;
        case 0x196000u: goto label_196000;
        case 0x196004u: goto label_196004;
        case 0x196008u: goto label_196008;
        case 0x19600cu: goto label_19600c;
        case 0x196010u: goto label_196010;
        case 0x196014u: goto label_196014;
        case 0x196018u: goto label_196018;
        case 0x19601cu: goto label_19601c;
        case 0x196020u: goto label_196020;
        case 0x196024u: goto label_196024;
        case 0x196028u: goto label_196028;
        case 0x19602cu: goto label_19602c;
        case 0x196030u: goto label_196030;
        case 0x196034u: goto label_196034;
        case 0x196038u: goto label_196038;
        case 0x19603cu: goto label_19603c;
        case 0x196040u: goto label_196040;
        case 0x196044u: goto label_196044;
        case 0x196048u: goto label_196048;
        case 0x19604cu: goto label_19604c;
        case 0x196050u: goto label_196050;
        case 0x196054u: goto label_196054;
        case 0x196058u: goto label_196058;
        case 0x19605cu: goto label_19605c;
        case 0x196060u: goto label_196060;
        case 0x196064u: goto label_196064;
        case 0x196068u: goto label_196068;
        case 0x19606cu: goto label_19606c;
        case 0x196070u: goto label_196070;
        case 0x196074u: goto label_196074;
        case 0x196078u: goto label_196078;
        case 0x19607cu: goto label_19607c;
        case 0x196080u: goto label_196080;
        case 0x196084u: goto label_196084;
        case 0x196088u: goto label_196088;
        case 0x19608cu: goto label_19608c;
        case 0x196090u: goto label_196090;
        case 0x196094u: goto label_196094;
        case 0x196098u: goto label_196098;
        case 0x19609cu: goto label_19609c;
        case 0x1960a0u: goto label_1960a0;
        case 0x1960a4u: goto label_1960a4;
        case 0x1960a8u: goto label_1960a8;
        case 0x1960acu: goto label_1960ac;
        case 0x1960b0u: goto label_1960b0;
        case 0x1960b4u: goto label_1960b4;
        case 0x1960b8u: goto label_1960b8;
        case 0x1960bcu: goto label_1960bc;
        case 0x1960c0u: goto label_1960c0;
        case 0x1960c4u: goto label_1960c4;
        case 0x1960c8u: goto label_1960c8;
        case 0x1960ccu: goto label_1960cc;
        case 0x1960d0u: goto label_1960d0;
        case 0x1960d4u: goto label_1960d4;
        case 0x1960d8u: goto label_1960d8;
        case 0x1960dcu: goto label_1960dc;
        case 0x1960e0u: goto label_1960e0;
        case 0x1960e4u: goto label_1960e4;
        case 0x1960e8u: goto label_1960e8;
        case 0x1960ecu: goto label_1960ec;
        case 0x1960f0u: goto label_1960f0;
        case 0x1960f4u: goto label_1960f4;
        case 0x1960f8u: goto label_1960f8;
        case 0x1960fcu: goto label_1960fc;
        case 0x196100u: goto label_196100;
        case 0x196104u: goto label_196104;
        case 0x196108u: goto label_196108;
        case 0x19610cu: goto label_19610c;
        case 0x196110u: goto label_196110;
        case 0x196114u: goto label_196114;
        case 0x196118u: goto label_196118;
        case 0x19611cu: goto label_19611c;
        case 0x196120u: goto label_196120;
        case 0x196124u: goto label_196124;
        case 0x196128u: goto label_196128;
        case 0x19612cu: goto label_19612c;
        case 0x196130u: goto label_196130;
        case 0x196134u: goto label_196134;
        case 0x196138u: goto label_196138;
        case 0x19613cu: goto label_19613c;
        case 0x196140u: goto label_196140;
        case 0x196144u: goto label_196144;
        case 0x196148u: goto label_196148;
        case 0x19614cu: goto label_19614c;
        case 0x196150u: goto label_196150;
        case 0x196154u: goto label_196154;
        case 0x196158u: goto label_196158;
        case 0x19615cu: goto label_19615c;
        case 0x196160u: goto label_196160;
        case 0x196164u: goto label_196164;
        case 0x196168u: goto label_196168;
        case 0x19616cu: goto label_19616c;
        case 0x196170u: goto label_196170;
        case 0x196174u: goto label_196174;
        case 0x196178u: goto label_196178;
        case 0x19617cu: goto label_19617c;
        case 0x196180u: goto label_196180;
        case 0x196184u: goto label_196184;
        case 0x196188u: goto label_196188;
        case 0x19618cu: goto label_19618c;
        case 0x196190u: goto label_196190;
        case 0x196194u: goto label_196194;
        case 0x196198u: goto label_196198;
        case 0x19619cu: goto label_19619c;
        case 0x1961a0u: goto label_1961a0;
        case 0x1961a4u: goto label_1961a4;
        case 0x1961a8u: goto label_1961a8;
        case 0x1961acu: goto label_1961ac;
        case 0x1961b0u: goto label_1961b0;
        case 0x1961b4u: goto label_1961b4;
        case 0x1961b8u: goto label_1961b8;
        case 0x1961bcu: goto label_1961bc;
        case 0x1961c0u: goto label_1961c0;
        case 0x1961c4u: goto label_1961c4;
        case 0x1961c8u: goto label_1961c8;
        case 0x1961ccu: goto label_1961cc;
        case 0x1961d0u: goto label_1961d0;
        case 0x1961d4u: goto label_1961d4;
        case 0x1961d8u: goto label_1961d8;
        case 0x1961dcu: goto label_1961dc;
        case 0x1961e0u: goto label_1961e0;
        case 0x1961e4u: goto label_1961e4;
        case 0x1961e8u: goto label_1961e8;
        case 0x1961ecu: goto label_1961ec;
        case 0x1961f0u: goto label_1961f0;
        case 0x1961f4u: goto label_1961f4;
        case 0x1961f8u: goto label_1961f8;
        case 0x1961fcu: goto label_1961fc;
        default: return;
    }

label_195a30:
    // 0x195a30: 0x10000002  b           . + 4 + (0x2 << 2)
label_195a34:
    if (ctx->pc == 0x195A34u) {
        ctx->pc = 0x195A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A30u;
        // 0x195a34: 0x2404004e  addiu       $a0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195A38u;
        goto label_195a38;
    }
    ctx->pc = 0x195A30u;
    {
        const bool branch_taken_0x195a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A30u;
        // 0x195a34: 0x2404004e  addiu       $a0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a30) {
            ctx->pc = 0x195A3Cu;
            goto label_195a3c;
        }
    }
    ctx->pc = 0x195A38u;
label_195a38:
    // 0x195a38: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x195a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_195a3c:
    // 0x195a3c: 0x0  nop
    ctx->pc = 0x195a3cu;
    // NOP
label_195a40:
    // 0x195a40: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x195a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_195a44:
    // 0x195a44: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
label_195a48:
    if (ctx->pc == 0x195A48u) {
        ctx->pc = 0x195A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A44u;
        // 0x195a48: 0x43080  sll         $a2, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195A4Cu;
        goto label_195a4c;
    }
    ctx->pc = 0x195A44u;
    {
        const bool branch_taken_0x195a44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x195A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A44u;
        // 0x195a48: 0x43080  sll         $a2, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a44) {
            ctx->pc = 0x195A90u;
            goto label_195a90;
        }
    }
    ctx->pc = 0x195A4Cu;
label_195a4c:
    // 0x195a4c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x195a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_195a50:
    // 0x195a50: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x195a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_195a54:
    // 0x195a54: 0x2463a4c0  addiu       $v1, $v1, -0x5B40
    ctx->pc = 0x195a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943936));
label_195a58:
    // 0x195a58: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x195a58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_195a5c:
    // 0x195a5c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x195a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_195a60:
    // 0x195a60: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x195a60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_195a64:
    // 0x195a64: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x195a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_195a68:
    // 0x195a68: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x195a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_195a6c:
    // 0x195a6c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_195a70:
    if (ctx->pc == 0x195A70u) {
        ctx->pc = 0x195A74u;
        goto label_195a74;
    }
    ctx->pc = 0x195A6Cu;
    {
        const bool branch_taken_0x195a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x195a6c) {
            ctx->pc = 0x195A90u;
            goto label_195a90;
        }
    }
    ctx->pc = 0x195A74u;
label_195a74:
    // 0x195a74: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x195a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_195a78:
    // 0x195a78: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x195a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_195a7c:
    // 0x195a7c: 0x24423070  addiu       $v0, $v0, 0x3070
    ctx->pc = 0x195a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12400));
label_195a80:
    // 0x195a80: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x195a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_195a84:
    // 0x195a84: 0xc0415a4  jal         func_105690
label_195a88:
    if (ctx->pc == 0x195A88u) {
        ctx->pc = 0x195A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A84u;
        // 0x195a88: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195A8Cu;
        goto label_195a8c;
    }
    ctx->pc = 0x195A84u;
    SET_GPR_U32(ctx, 31, 0x195A8Cu);
    ctx->pc = 0x195A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195A84u;
    // 0x195a88: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105690u, 0x195A84u, 0x195A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195A8Cu;
label_195a8c:
    // 0x195a8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x195a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_195a90:
    // 0x195a90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x195a90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_195a94:
    // 0x195a94: 0x2a230080  slti        $v1, $s1, 0x80
    ctx->pc = 0x195a94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
label_195a98:
    // 0x195a98: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
label_195a9c:
    if (ctx->pc == 0x195A9Cu) {
        ctx->pc = 0x195A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A98u;
        // 0x195a9c: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195AA0u;
        goto label_195aa0;
    }
    ctx->pc = 0x195A98u;
    {
        const bool branch_taken_0x195a98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x195A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A98u;
        // 0x195a9c: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a98) {
            ctx->pc = 0x1959CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1959cc; return; }
        }
    }
    ctx->pc = 0x195AA0u;
label_195aa0:
    // 0x195aa0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x195aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_195aa4:
    // 0x195aa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x195aa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_195aa8:
    // 0x195aa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_195aac:
    // 0x195aac: 0x3e00008  jr          $ra
label_195ab0:
    if (ctx->pc == 0x195AB0u) {
        ctx->pc = 0x195AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195AACu;
        // 0x195ab0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195AB4u;
        goto label_195ab4;
    }
    ctx->pc = 0x195AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195AACu;
        // 0x195ab0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195AB4u;
label_195ab4:
    // 0x195ab4: 0x0  nop
    ctx->pc = 0x195ab4u;
    // NOP
label_195ab8:
    // 0x195ab8: 0x0  nop
    ctx->pc = 0x195ab8u;
    // NOP
label_195abc:
    // 0x195abc: 0x0  nop
    ctx->pc = 0x195abcu;
    // NOP
label_195ac0:
    // 0x195ac0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x195ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_195ac4:
    // 0x195ac4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x195ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_195ac8:
    // 0x195ac8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x195ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_195acc:
    // 0x195acc: 0x2484a4c0  addiu       $a0, $a0, -0x5B40
    ctx->pc = 0x195accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943936));
label_195ad0:
    // 0x195ad0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x195ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_195ad4:
    // 0x195ad4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195ad8:
    // 0x195ad8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_195adc:
    // 0x195adc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x195adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_195ae0:
    // 0x195ae0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x195ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_195ae4:
    // 0x195ae4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x195ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_195ae8:
    // 0x195ae8: 0xac8000c0  sw          $zero, 0xC0($a0)
    ctx->pc = 0x195ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 0));
label_195aec:
    // 0x195aec: 0x28a30080  slti        $v1, $a1, 0x80
    ctx->pc = 0x195aecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
label_195af0:
    // 0x195af0: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x195af0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_195af4:
    // 0x195af4: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x195af4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_195af8:
    // 0x195af8: 0xac8000c4  sw          $zero, 0xC4($a0)
    ctx->pc = 0x195af8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 0));
label_195afc:
    // 0x195afc: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x195afcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
label_195b00:
    // 0x195b00: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_195b04:
    if (ctx->pc == 0x195B04u) {
        ctx->pc = 0x195B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B00u;
        // 0x195b04: 0x248400c8  addiu       $a0, $a0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195B08u;
        goto label_195b08;
    }
    ctx->pc = 0x195B00u;
    {
        const bool branch_taken_0x195b00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x195B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B00u;
        // 0x195b04: 0x248400c8  addiu       $a0, $a0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195b00) {
            ctx->pc = 0x195AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195ae0;
        }
    }
    ctx->pc = 0x195B08u;
label_195b08:
    // 0x195b08: 0x3c10002f  lui         $s0, 0x2F
    ctx->pc = 0x195b08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)47 << 16));
label_195b0c:
    // 0x195b0c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_195b10:
    if (ctx->pc == 0x195B10u) {
        ctx->pc = 0x195B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B0Cu;
        // 0x195b10: 0x26102490  addiu       $s0, $s0, 0x2490 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195B14u;
        goto label_195b14;
    }
    ctx->pc = 0x195B0Cu;
    {
        const bool branch_taken_0x195b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B0Cu;
        // 0x195b10: 0x26102490  addiu       $s0, $s0, 0x2490 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195b0c) {
            ctx->pc = 0x195B8Cu;
            goto label_195b8c;
        }
    }
    ctx->pc = 0x195B14u;
label_195b14:
    // 0x195b14: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x195b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_195b18:
    // 0x195b18: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x195b18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_195b1c:
    // 0x195b1c: 0x2463b170  addiu       $v1, $v1, -0x4E90
    ctx->pc = 0x195b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947184));
label_195b20:
    // 0x195b20: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x195b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_195b24:
    // 0x195b24: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x195b24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_195b28:
    // 0x195b28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x195b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_195b2c:
    // 0x195b2c: 0x8464010a  lh          $a0, 0x10A($v1)
    ctx->pc = 0x195b2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 266)));
label_195b30:
    // 0x195b30: 0x28830057  slti        $v1, $a0, 0x57
    ctx->pc = 0x195b30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)87) ? 1 : 0);
label_195b34:
    // 0x195b34: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_195b38:
    if (ctx->pc == 0x195B38u) {
        ctx->pc = 0x195B3Cu;
        goto label_195b3c;
    }
    ctx->pc = 0x195B34u;
    {
        const bool branch_taken_0x195b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x195b34) {
            ctx->pc = 0x195B40u;
            goto label_195b40;
        }
    }
    ctx->pc = 0x195B3Cu;
label_195b3c:
    // 0x195b3c: 0x2484fff7  addiu       $a0, $a0, -0x9
    ctx->pc = 0x195b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967287));
label_195b40:
    // 0x195b40: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x195b40u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_195b44:
    // 0x195b44: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x195b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_195b48:
    // 0x195b48: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x195b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_195b4c:
    // 0x195b4c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x195b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_195b50:
    // 0x195b50: 0x2463a4c0  addiu       $v1, $v1, -0x5B40
    ctx->pc = 0x195b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943936));
label_195b54:
    // 0x195b54: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x195b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_195b58:
    // 0x195b58: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x195b58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_195b5c:
    // 0x195b5c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x195b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_195b60:
    // 0x195b60: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x195b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_195b64:
    // 0x195b64: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_195b68:
    if (ctx->pc == 0x195B68u) {
        ctx->pc = 0x195B6Cu;
        goto label_195b6c;
    }
    ctx->pc = 0x195B64u;
    {
        const bool branch_taken_0x195b64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x195b64) {
            ctx->pc = 0x195B84u;
            goto label_195b84;
        }
    }
    ctx->pc = 0x195B6Cu;
label_195b6c:
    // 0x195b6c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x195b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_195b70:
    // 0x195b70: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x195b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_195b74:
    // 0x195b74: 0x24423070  addiu       $v0, $v0, 0x3070
    ctx->pc = 0x195b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12400));
label_195b78:
    // 0x195b78: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x195b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_195b7c:
    // 0x195b7c: 0xc0415a4  jal         func_105690
label_195b80:
    if (ctx->pc == 0x195B80u) {
        ctx->pc = 0x195B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B7Cu;
        // 0x195b80: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195B84u;
        goto label_195b84;
    }
    ctx->pc = 0x195B7Cu;
    SET_GPR_U32(ctx, 31, 0x195B84u);
    ctx->pc = 0x195B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195B7Cu;
    // 0x195b80: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105690u, 0x195B7Cu, 0x195B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195B84u;
label_195b84:
    // 0x195b84: 0x0  nop
    ctx->pc = 0x195b84u;
    // NOP
label_195b88:
    // 0x195b88: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x195b88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_195b8c:
    // 0x195b8c: 0x0  nop
    ctx->pc = 0x195b8cu;
    // NOP
label_195b90:
    // 0x195b90: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x195b90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_195b94:
    // 0x195b94: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x195b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_195b98:
    // 0x195b98: 0x1483ffde  bne         $a0, $v1, . + 4 + (-0x22 << 2)
label_195b9c:
    if (ctx->pc == 0x195B9Cu) {
        ctx->pc = 0x195B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B98u;
        // 0x195b9c: 0x308500ff  andi        $a1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x195BA0u;
        goto label_195ba0;
    }
    ctx->pc = 0x195B98u;
    {
        const bool branch_taken_0x195b98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x195B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B98u;
        // 0x195b9c: 0x308500ff  andi        $a1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x195b98) {
            ctx->pc = 0x195B14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195b14;
        }
    }
    ctx->pc = 0x195BA0u;
label_195ba0:
    // 0x195ba0: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x195ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_195ba4:
    // 0x195ba4: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x195ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_195ba8:
    // 0x195ba8: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
label_195bac:
    if (ctx->pc == 0x195BACu) {
        ctx->pc = 0x195BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195BA8u;
        // 0x195bac: 0x3c110037  lui         $s1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195BB0u;
        goto label_195bb0;
    }
    ctx->pc = 0x195BA8u;
    {
        const bool branch_taken_0x195ba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x195BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195BA8u;
        // 0x195bac: 0x3c110037  lui         $s1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195ba8) {
            ctx->pc = 0x195C54u;
            goto label_195c54;
        }
    }
    ctx->pc = 0x195BB0u;
label_195bb0:
    // 0x195bb0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x195bb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195bb4:
    // 0x195bb4: 0x2631a4c0  addiu       $s1, $s1, -0x5B40
    ctx->pc = 0x195bb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294943936));
label_195bb8:
    // 0x195bb8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x195bb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195bbc:
    // 0x195bbc: 0x0  nop
    ctx->pc = 0x195bbcu;
    // NOP
label_195bc0:
    // 0x195bc0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x195bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_195bc4:
    // 0x195bc4: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
label_195bc8:
    if (ctx->pc == 0x195BC8u) {
        ctx->pc = 0x195BCCu;
        goto label_195bcc;
    }
    ctx->pc = 0x195BC4u;
    {
        const bool branch_taken_0x195bc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x195bc4) {
            ctx->pc = 0x195C40u;
            goto label_195c40;
        }
    }
    ctx->pc = 0x195BCCu;
label_195bcc:
    // 0x195bcc: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
label_195bd0:
    if (ctx->pc == 0x195BD0u) {
        ctx->pc = 0x195BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195BCCu;
        // 0x195bd0: 0x2a410004  slti        $at, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x195BD4u;
        goto label_195bd4;
    }
    ctx->pc = 0x195BCCu;
    {
        const bool branch_taken_0x195bcc = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x195BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195BCCu;
        // 0x195bd0: 0x2a410004  slti        $at, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x195bcc) {
            ctx->pc = 0x195BDCu;
            goto label_195bdc;
        }
    }
    ctx->pc = 0x195BD4u;
label_195bd4:
    // 0x195bd4: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
label_195bd8:
    if (ctx->pc == 0x195BD8u) {
        ctx->pc = 0x195BDCu;
        goto label_195bdc;
    }
    ctx->pc = 0x195BD4u;
    {
        const bool branch_taken_0x195bd4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x195bd4) {
            ctx->pc = 0x195C24u;
            goto label_195c24;
        }
    }
    ctx->pc = 0x195BDCu;
label_195bdc:
    // 0x195bdc: 0x0  nop
    ctx->pc = 0x195bdcu;
    // NOP
label_195be0:
    // 0x195be0: 0x2a430006  slti        $v1, $s2, 0x6
    ctx->pc = 0x195be0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
label_195be4:
    // 0x195be4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_195be8:
    if (ctx->pc == 0x195BE8u) {
        ctx->pc = 0x195BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195BE4u;
        // 0x195be8: 0x2a410008  slti        $at, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x195BECu;
        goto label_195bec;
    }
    ctx->pc = 0x195BE4u;
    {
        const bool branch_taken_0x195be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x195BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195BE4u;
        // 0x195be8: 0x2a410008  slti        $at, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x195be4) {
            ctx->pc = 0x195BF4u;
            goto label_195bf4;
        }
    }
    ctx->pc = 0x195BECu;
label_195bec:
    // 0x195bec: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
label_195bf0:
    if (ctx->pc == 0x195BF0u) {
        ctx->pc = 0x195BF4u;
        goto label_195bf4;
    }
    ctx->pc = 0x195BECu;
    {
        const bool branch_taken_0x195bec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x195bec) {
            ctx->pc = 0x195C24u;
            goto label_195c24;
        }
    }
    ctx->pc = 0x195BF4u;
label_195bf4:
    // 0x195bf4: 0x0  nop
    ctx->pc = 0x195bf4u;
    // NOP
label_195bf8:
    // 0x195bf8: 0x2a430008  slti        $v1, $s2, 0x8
    ctx->pc = 0x195bf8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
label_195bfc:
    // 0x195bfc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_195c00:
    if (ctx->pc == 0x195C00u) {
        ctx->pc = 0x195C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195BFCu;
        // 0x195c00: 0x2a41000a  slti        $at, $s2, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x195C04u;
        goto label_195c04;
    }
    ctx->pc = 0x195BFCu;
    {
        const bool branch_taken_0x195bfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x195C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195BFCu;
        // 0x195c00: 0x2a41000a  slti        $at, $s2, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x195bfc) {
            ctx->pc = 0x195C0Cu;
            goto label_195c0c;
        }
    }
    ctx->pc = 0x195C04u;
label_195c04:
    // 0x195c04: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
label_195c08:
    if (ctx->pc == 0x195C08u) {
        ctx->pc = 0x195C0Cu;
        goto label_195c0c;
    }
    ctx->pc = 0x195C04u;
    {
        const bool branch_taken_0x195c04 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x195c04) {
            ctx->pc = 0x195C24u;
            goto label_195c24;
        }
    }
    ctx->pc = 0x195C0Cu;
label_195c0c:
    // 0x195c0c: 0x0  nop
    ctx->pc = 0x195c0cu;
    // NOP
label_195c10:
    // 0x195c10: 0x2a430053  slti        $v1, $s2, 0x53
    ctx->pc = 0x195c10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)83) ? 1 : 0);
label_195c14:
    // 0x195c14: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_195c18:
    if (ctx->pc == 0x195C18u) {
        ctx->pc = 0x195C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C14u;
        // 0x195c18: 0x2a410057  slti        $at, $s2, 0x57 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)87) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x195C1Cu;
        goto label_195c1c;
    }
    ctx->pc = 0x195C14u;
    {
        const bool branch_taken_0x195c14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x195C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C14u;
        // 0x195c18: 0x2a410057  slti        $at, $s2, 0x57 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)87) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x195c14) {
            ctx->pc = 0x195C40u;
            goto label_195c40;
        }
    }
    ctx->pc = 0x195C1Cu;
label_195c1c:
    // 0x195c1c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_195c20:
    if (ctx->pc == 0x195C20u) {
        ctx->pc = 0x195C24u;
        goto label_195c24;
    }
    ctx->pc = 0x195C1Cu;
    {
        const bool branch_taken_0x195c1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x195c1c) {
            ctx->pc = 0x195C40u;
            goto label_195c40;
        }
    }
    ctx->pc = 0x195C24u;
label_195c24:
    // 0x195c24: 0x0  nop
    ctx->pc = 0x195c24u;
    // NOP
label_195c28:
    // 0x195c28: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x195c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_195c2c:
    // 0x195c2c: 0x24423070  addiu       $v0, $v0, 0x3070
    ctx->pc = 0x195c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12400));
label_195c30:
    // 0x195c30: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x195c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_195c34:
    // 0x195c34: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x195c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_195c38:
    // 0x195c38: 0xc0415a4  jal         func_105690
label_195c3c:
    if (ctx->pc == 0x195C3Cu) {
        ctx->pc = 0x195C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C38u;
        // 0x195c3c: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195C40u;
        goto label_195c40;
    }
    ctx->pc = 0x195C38u;
    SET_GPR_U32(ctx, 31, 0x195C40u);
    ctx->pc = 0x195C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195C38u;
    // 0x195c3c: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105690u, 0x195C38u, 0x195C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195C40u;
label_195c40:
    // 0x195c40: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x195c40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_195c44:
    // 0x195c44: 0x2a430080  slti        $v1, $s2, 0x80
    ctx->pc = 0x195c44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)128) ? 1 : 0);
label_195c48:
    // 0x195c48: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x195c48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_195c4c:
    // 0x195c4c: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
label_195c50:
    if (ctx->pc == 0x195C50u) {
        ctx->pc = 0x195C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C4Cu;
        // 0x195c50: 0x263100c8  addiu       $s1, $s1, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195C54u;
        goto label_195c54;
    }
    ctx->pc = 0x195C4Cu;
    {
        const bool branch_taken_0x195c4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x195C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C4Cu;
        // 0x195c50: 0x263100c8  addiu       $s1, $s1, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195c4c) {
            ctx->pc = 0x195BBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195bbc;
        }
    }
    ctx->pc = 0x195C54u;
label_195c54:
    // 0x195c54: 0x0  nop
    ctx->pc = 0x195c54u;
    // NOP
label_195c58:
    // 0x195c58: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x195c58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_195c5c:
    // 0x195c5c: 0x2610a4c0  addiu       $s0, $s0, -0x5B40
    ctx->pc = 0x195c5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943936));
label_195c60:
    // 0x195c60: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x195c60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195c64:
    // 0x195c64: 0x0  nop
    ctx->pc = 0x195c64u;
    // NOP
label_195c68:
    // 0x195c68: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x195c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_195c6c:
    // 0x195c6c: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
label_195c70:
    if (ctx->pc == 0x195C70u) {
        ctx->pc = 0x195C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C6Cu;
        // 0x195c70: 0x2403002e  addiu       $v1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195C74u;
        goto label_195c74;
    }
    ctx->pc = 0x195C6Cu;
    {
        const bool branch_taken_0x195c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x195C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C6Cu;
        // 0x195c70: 0x2403002e  addiu       $v1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195c6c) {
            ctx->pc = 0x195D24u;
            goto label_195d24;
        }
    }
    ctx->pc = 0x195C74u;
label_195c74:
    // 0x195c74: 0x12230004  beq         $s1, $v1, . + 4 + (0x4 << 2)
label_195c78:
    if (ctx->pc == 0x195C78u) {
        ctx->pc = 0x195C7Cu;
        goto label_195c7c;
    }
    ctx->pc = 0x195C74u;
    {
        const bool branch_taken_0x195c74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x195c74) {
            ctx->pc = 0x195C88u;
            goto label_195c88;
        }
    }
    ctx->pc = 0x195C7Cu;
label_195c7c:
    // 0x195c7c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x195c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_195c80:
    // 0x195c80: 0x16230003  bne         $s1, $v1, . + 4 + (0x3 << 2)
label_195c84:
    if (ctx->pc == 0x195C84u) {
        ctx->pc = 0x195C88u;
        goto label_195c88;
    }
    ctx->pc = 0x195C80u;
    {
        const bool branch_taken_0x195c80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x195c80) {
            ctx->pc = 0x195C90u;
            goto label_195c90;
        }
    }
    ctx->pc = 0x195C88u;
label_195c88:
    // 0x195c88: 0x10000012  b           . + 4 + (0x12 << 2)
label_195c8c:
    if (ctx->pc == 0x195C8Cu) {
        ctx->pc = 0x195C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C88u;
        // 0x195c8c: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195C90u;
        goto label_195c90;
    }
    ctx->pc = 0x195C88u;
    {
        const bool branch_taken_0x195c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C88u;
        // 0x195c8c: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195c88) {
            ctx->pc = 0x195CD4u;
            goto label_195cd4;
        }
    }
    ctx->pc = 0x195C90u;
label_195c90:
    // 0x195c90: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x195c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_195c94:
    // 0x195c94: 0x12230003  beq         $s1, $v1, . + 4 + (0x3 << 2)
label_195c98:
    if (ctx->pc == 0x195C98u) {
        ctx->pc = 0x195C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C94u;
        // 0x195c98: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195C9Cu;
        goto label_195c9c;
    }
    ctx->pc = 0x195C94u;
    {
        const bool branch_taken_0x195c94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x195C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C94u;
        // 0x195c98: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195c94) {
            ctx->pc = 0x195CA4u;
            goto label_195ca4;
        }
    }
    ctx->pc = 0x195C9Cu;
label_195c9c:
    // 0x195c9c: 0x16230004  bne         $s1, $v1, . + 4 + (0x4 << 2)
label_195ca0:
    if (ctx->pc == 0x195CA0u) {
        ctx->pc = 0x195CA4u;
        goto label_195ca4;
    }
    ctx->pc = 0x195C9Cu;
    {
        const bool branch_taken_0x195c9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x195c9c) {
            ctx->pc = 0x195CB0u;
            goto label_195cb0;
        }
    }
    ctx->pc = 0x195CA4u;
label_195ca4:
    // 0x195ca4: 0x0  nop
    ctx->pc = 0x195ca4u;
    // NOP
label_195ca8:
    // 0x195ca8: 0x1000000a  b           . + 4 + (0xA << 2)
label_195cac:
    if (ctx->pc == 0x195CACu) {
        ctx->pc = 0x195CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195CA8u;
        // 0x195cac: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195CB0u;
        goto label_195cb0;
    }
    ctx->pc = 0x195CA8u;
    {
        const bool branch_taken_0x195ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195CA8u;
        // 0x195cac: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195ca8) {
            ctx->pc = 0x195CD4u;
            goto label_195cd4;
        }
    }
    ctx->pc = 0x195CB0u;
label_195cb0:
    // 0x195cb0: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x195cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
label_195cb4:
    // 0x195cb4: 0x12230003  beq         $s1, $v1, . + 4 + (0x3 << 2)
label_195cb8:
    if (ctx->pc == 0x195CB8u) {
        ctx->pc = 0x195CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195CB4u;
        // 0x195cb8: 0x24030045  addiu       $v1, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195CBCu;
        goto label_195cbc;
    }
    ctx->pc = 0x195CB4u;
    {
        const bool branch_taken_0x195cb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x195CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195CB4u;
        // 0x195cb8: 0x24030045  addiu       $v1, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195cb4) {
            ctx->pc = 0x195CC4u;
            goto label_195cc4;
        }
    }
    ctx->pc = 0x195CBCu;
label_195cbc:
    // 0x195cbc: 0x16230004  bne         $s1, $v1, . + 4 + (0x4 << 2)
label_195cc0:
    if (ctx->pc == 0x195CC0u) {
        ctx->pc = 0x195CC4u;
        goto label_195cc4;
    }
    ctx->pc = 0x195CBCu;
    {
        const bool branch_taken_0x195cbc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x195cbc) {
            ctx->pc = 0x195CD0u;
            goto label_195cd0;
        }
    }
    ctx->pc = 0x195CC4u;
label_195cc4:
    // 0x195cc4: 0x0  nop
    ctx->pc = 0x195cc4u;
    // NOP
label_195cc8:
    // 0x195cc8: 0x10000002  b           . + 4 + (0x2 << 2)
label_195ccc:
    if (ctx->pc == 0x195CCCu) {
        ctx->pc = 0x195CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195CC8u;
        // 0x195ccc: 0x2404004e  addiu       $a0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195CD0u;
        goto label_195cd0;
    }
    ctx->pc = 0x195CC8u;
    {
        const bool branch_taken_0x195cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195CC8u;
        // 0x195ccc: 0x2404004e  addiu       $a0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195cc8) {
            ctx->pc = 0x195CD4u;
            goto label_195cd4;
        }
    }
    ctx->pc = 0x195CD0u;
label_195cd0:
    // 0x195cd0: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x195cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_195cd4:
    // 0x195cd4: 0x0  nop
    ctx->pc = 0x195cd4u;
    // NOP
label_195cd8:
    // 0x195cd8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x195cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_195cdc:
    // 0x195cdc: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
label_195ce0:
    if (ctx->pc == 0x195CE0u) {
        ctx->pc = 0x195CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195CDCu;
        // 0x195ce0: 0x43080  sll         $a2, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195CE4u;
        goto label_195ce4;
    }
    ctx->pc = 0x195CDCu;
    {
        const bool branch_taken_0x195cdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x195CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195CDCu;
        // 0x195ce0: 0x43080  sll         $a2, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195cdc) {
            ctx->pc = 0x195D24u;
            goto label_195d24;
        }
    }
    ctx->pc = 0x195CE4u;
label_195ce4:
    // 0x195ce4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x195ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_195ce8:
    // 0x195ce8: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x195ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_195cec:
    // 0x195cec: 0x2463a4c0  addiu       $v1, $v1, -0x5B40
    ctx->pc = 0x195cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943936));
label_195cf0:
    // 0x195cf0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x195cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_195cf4:
    // 0x195cf4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x195cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_195cf8:
    // 0x195cf8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x195cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_195cfc:
    // 0x195cfc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x195cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_195d00:
    // 0x195d00: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x195d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_195d04:
    // 0x195d04: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_195d08:
    if (ctx->pc == 0x195D08u) {
        ctx->pc = 0x195D0Cu;
        goto label_195d0c;
    }
    ctx->pc = 0x195D04u;
    {
        const bool branch_taken_0x195d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x195d04) {
            ctx->pc = 0x195D24u;
            goto label_195d24;
        }
    }
    ctx->pc = 0x195D0Cu;
label_195d0c:
    // 0x195d0c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x195d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_195d10:
    // 0x195d10: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x195d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_195d14:
    // 0x195d14: 0x24423070  addiu       $v0, $v0, 0x3070
    ctx->pc = 0x195d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12400));
label_195d18:
    // 0x195d18: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x195d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_195d1c:
    // 0x195d1c: 0xc0415a4  jal         func_105690
label_195d20:
    if (ctx->pc == 0x195D20u) {
        ctx->pc = 0x195D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D1Cu;
        // 0x195d20: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195D24u;
        goto label_195d24;
    }
    ctx->pc = 0x195D1Cu;
    SET_GPR_U32(ctx, 31, 0x195D24u);
    ctx->pc = 0x195D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195D1Cu;
    // 0x195d20: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105690u, 0x195D1Cu, 0x195D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195D24u;
label_195d24:
    // 0x195d24: 0x0  nop
    ctx->pc = 0x195d24u;
    // NOP
label_195d28:
    // 0x195d28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x195d28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_195d2c:
    // 0x195d2c: 0x2a230080  slti        $v1, $s1, 0x80
    ctx->pc = 0x195d2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
label_195d30:
    // 0x195d30: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
label_195d34:
    if (ctx->pc == 0x195D34u) {
        ctx->pc = 0x195D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D30u;
        // 0x195d34: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195D38u;
        goto label_195d38;
    }
    ctx->pc = 0x195D30u;
    {
        const bool branch_taken_0x195d30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x195D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D30u;
        // 0x195d34: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195d30) {
            ctx->pc = 0x195C64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195c64;
        }
    }
    ctx->pc = 0x195D38u;
label_195d38:
    // 0x195d38: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x195d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_195d3c:
    // 0x195d3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x195d3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_195d40:
    // 0x195d40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x195d40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_195d44:
    // 0x195d44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_195d48:
    // 0x195d48: 0x3e00008  jr          $ra
label_195d4c:
    if (ctx->pc == 0x195D4Cu) {
        ctx->pc = 0x195D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D48u;
        // 0x195d4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195D50u;
        goto label_195d50;
    }
    ctx->pc = 0x195D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D48u;
        // 0x195d4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195D50u;
label_195d50:
    // 0x195d50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x195d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_195d54:
    // 0x195d54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x195d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_195d58:
    // 0x195d58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x195d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_195d5c:
    // 0x195d5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x195d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_195d60:
    // 0x195d60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_195d64:
    // 0x195d64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x195d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_195d68:
    // 0x195d68: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x195d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_195d6c:
    // 0x195d6c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x195d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_195d70:
    // 0x195d70: 0x1460008b  bnez        $v1, . + 4 + (0x8B << 2)
label_195d74:
    if (ctx->pc == 0x195D74u) {
        ctx->pc = 0x195D78u;
        goto label_195d78;
    }
    ctx->pc = 0x195D70u;
    {
        const bool branch_taken_0x195d70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x195d70) {
            ctx->pc = 0x195FA0u;
            goto label_195fa0;
        }
    }
    ctx->pc = 0x195D78u;
label_195d78:
    // 0x195d78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x195d78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195d7c:
    // 0x195d7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x195d7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195d80:
    // 0x195d80: 0x0  nop
    ctx->pc = 0x195d80u;
    // NOP
label_195d84:
    // 0x195d84: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x195d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_195d88:
    // 0x195d88: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x195d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_195d8c:
    // 0x195d8c: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x195d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_195d90:
    // 0x195d90: 0x9083367c  lbu         $v1, 0x367C($a0)
    ctx->pc = 0x195d90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13948)));
label_195d94:
    // 0x195d94: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
label_195d98:
    if (ctx->pc == 0x195D98u) {
        ctx->pc = 0x195D9Cu;
        goto label_195d9c;
    }
    ctx->pc = 0x195D94u;
    {
        const bool branch_taken_0x195d94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x195d94) {
            ctx->pc = 0x195E98u;
            goto label_195e98;
        }
    }
    ctx->pc = 0x195D9Cu;
label_195d9c:
    // 0x195d9c: 0x9085367d  lbu         $a1, 0x367D($a0)
    ctx->pc = 0x195d9cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13949)));
label_195da0:
    // 0x195da0: 0x28a300ab  slti        $v1, $a1, 0xAB
    ctx->pc = 0x195da0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)171) ? 1 : 0);
label_195da4:
    // 0x195da4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_195da8:
    if (ctx->pc == 0x195DA8u) {
        ctx->pc = 0x195DACu;
        goto label_195dac;
    }
    ctx->pc = 0x195DA4u;
    {
        const bool branch_taken_0x195da4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x195da4) {
            ctx->pc = 0x195DC4u;
            goto label_195dc4;
        }
    }
    ctx->pc = 0x195DACu;
label_195dac:
    // 0x195dac: 0x24a4ff55  addiu       $a0, $a1, -0xAB
    ctx->pc = 0x195dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967125));
label_195db0:
    // 0x195db0: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x195db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_195db4:
    // 0x195db4: 0x246352f0  addiu       $v1, $v1, 0x52F0
    ctx->pc = 0x195db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21232));
label_195db8:
    // 0x195db8: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x195db8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_195dbc:
    // 0x195dbc: 0x10000016  b           . + 4 + (0x16 << 2)
label_195dc0:
    if (ctx->pc == 0x195DC0u) {
        ctx->pc = 0x195DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195DBCu;
        // 0x195dc0: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195DC4u;
        goto label_195dc4;
    }
    ctx->pc = 0x195DBCu;
    {
        const bool branch_taken_0x195dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195DBCu;
        // 0x195dc0: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195dbc) {
            ctx->pc = 0x195E18u;
            goto label_195e18;
        }
    }
    ctx->pc = 0x195DC4u;
label_195dc4:
    // 0x195dc4: 0x0  nop
    ctx->pc = 0x195dc4u;
    // NOP
label_195dc8:
    // 0x195dc8: 0x28a30082  slti        $v1, $a1, 0x82
    ctx->pc = 0x195dc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)130) ? 1 : 0);
label_195dcc:
    // 0x195dcc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_195dd0:
    if (ctx->pc == 0x195DD0u) {
        ctx->pc = 0x195DD4u;
        goto label_195dd4;
    }
    ctx->pc = 0x195DCCu;
    {
        const bool branch_taken_0x195dcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x195dcc) {
            ctx->pc = 0x195DDCu;
            goto label_195ddc;
        }
    }
    ctx->pc = 0x195DD4u;
label_195dd4:
    // 0x195dd4: 0x1000000c  b           . + 4 + (0xC << 2)
label_195dd8:
    if (ctx->pc == 0x195DD8u) {
        ctx->pc = 0x195DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195DD4u;
        // 0x195dd8: 0x24a5ffd7  addiu       $a1, $a1, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195DDCu;
        goto label_195ddc;
    }
    ctx->pc = 0x195DD4u;
    {
        const bool branch_taken_0x195dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195DD4u;
        // 0x195dd8: 0x24a5ffd7  addiu       $a1, $a1, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195dd4) {
            ctx->pc = 0x195E08u;
            goto label_195e08;
        }
    }
    ctx->pc = 0x195DDCu;
label_195ddc:
    // 0x195ddc: 0x0  nop
    ctx->pc = 0x195ddcu;
    // NOP
label_195de0:
    // 0x195de0: 0x28a30059  slti        $v1, $a1, 0x59
    ctx->pc = 0x195de0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)89) ? 1 : 0);
label_195de4:
    // 0x195de4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_195de8:
    if (ctx->pc == 0x195DE8u) {
        ctx->pc = 0x195DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195DE4u;
        // 0x195de8: 0x52040  sll         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195DECu;
        goto label_195dec;
    }
    ctx->pc = 0x195DE4u;
    {
        const bool branch_taken_0x195de4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x195DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195DE4u;
        // 0x195de8: 0x52040  sll         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195de4) {
            ctx->pc = 0x195E08u;
            goto label_195e08;
        }
    }
    ctx->pc = 0x195DECu;
label_195dec:
    // 0x195dec: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x195decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_195df0:
    // 0x195df0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x195df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_195df4:
    // 0x195df4: 0x2463a5c0  addiu       $v1, $v1, -0x5A40
    ctx->pc = 0x195df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944192));
label_195df8:
    // 0x195df8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x195df8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_195dfc:
    // 0x195dfc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x195dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_195e00:
    // 0x195e00: 0x9065f7b2  lbu         $a1, -0x84E($v1)
    ctx->pc = 0x195e00u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294965170)));
label_195e04:
    // 0x195e04: 0x0  nop
    ctx->pc = 0x195e04u;
    // NOP
label_195e08:
    // 0x195e08: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x195e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_195e0c:
    // 0x195e0c: 0x52180  sll         $a0, $a1, 6
    ctx->pc = 0x195e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_195e10:
    // 0x195e10: 0x24633270  addiu       $v1, $v1, 0x3270
    ctx->pc = 0x195e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12912));
label_195e14:
    // 0x195e14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x195e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_195e18:
    // 0x195e18: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x195e18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_195e1c:
    // 0x195e1c: 0x28830057  slti        $v1, $a0, 0x57
    ctx->pc = 0x195e1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)87) ? 1 : 0);
label_195e20:
    // 0x195e20: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_195e24:
    if (ctx->pc == 0x195E24u) {
        ctx->pc = 0x195E28u;
        goto label_195e28;
    }
    ctx->pc = 0x195E20u;
    {
        const bool branch_taken_0x195e20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x195e20) {
            ctx->pc = 0x195E2Cu;
            goto label_195e2c;
        }
    }
    ctx->pc = 0x195E28u;
label_195e28:
    // 0x195e28: 0x2484fff7  addiu       $a0, $a0, -0x9
    ctx->pc = 0x195e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967287));
label_195e2c:
    // 0x195e2c: 0x0  nop
    ctx->pc = 0x195e2cu;
    // NOP
label_195e30:
    // 0x195e30: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x195e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_195e34:
    // 0x195e34: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
label_195e38:
    if (ctx->pc == 0x195E38u) {
        ctx->pc = 0x195E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E34u;
        // 0x195e38: 0x43080  sll         $a2, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195E3Cu;
        goto label_195e3c;
    }
    ctx->pc = 0x195E34u;
    {
        const bool branch_taken_0x195e34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x195E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E34u;
        // 0x195e38: 0x43080  sll         $a2, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195e34) {
            ctx->pc = 0x195E98u;
            goto label_195e98;
        }
    }
    ctx->pc = 0x195E3Cu;
label_195e3c:
    // 0x195e3c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x195e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_195e40:
    // 0x195e40: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x195e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_195e44:
    // 0x195e44: 0x2463a4c0  addiu       $v1, $v1, -0x5B40
    ctx->pc = 0x195e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943936));
label_195e48:
    // 0x195e48: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x195e48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_195e4c:
    // 0x195e4c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x195e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_195e50:
    // 0x195e50: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x195e50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_195e54:
    // 0x195e54: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x195e54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_195e58:
    // 0x195e58: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x195e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_195e5c:
    // 0x195e5c: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_195e60:
    if (ctx->pc == 0x195E60u) {
        ctx->pc = 0x195E64u;
        goto label_195e64;
    }
    ctx->pc = 0x195E5Cu;
    {
        const bool branch_taken_0x195e5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x195e5c) {
            ctx->pc = 0x195E98u;
            goto label_195e98;
        }
    }
    ctx->pc = 0x195E64u;
label_195e64:
    // 0x195e64: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x195e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_195e68:
    // 0x195e68: 0x24423070  addiu       $v0, $v0, 0x3070
    ctx->pc = 0x195e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12400));
label_195e6c:
    // 0x195e6c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x195e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_195e70:
    // 0x195e70: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x195e70u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_195e74:
    // 0x195e74: 0xc041738  jal         func_105CE0
label_195e78:
    if (ctx->pc == 0x195E78u) {
        ctx->pc = 0x195E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E74u;
        // 0x195e78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195E7Cu;
        goto label_195e7c;
    }
    ctx->pc = 0x195E74u;
    SET_GPR_U32(ctx, 31, 0x195E7Cu);
    ctx->pc = 0x195E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195E74u;
    // 0x195e78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x195E74u, 0x195E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195E7Cu;
label_195e7c:
    // 0x195e7c: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x195e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_195e80:
    // 0x195e80: 0xc070080  jal         func_1C0200
label_195e84:
    if (ctx->pc == 0x195E84u) {
        ctx->pc = 0x195E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E80u;
        // 0x195e84: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195E88u;
        goto label_195e88;
    }
    ctx->pc = 0x195E80u;
    SET_GPR_U32(ctx, 31, 0x195E88u);
    ctx->pc = 0x195E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195E80u;
    // 0x195e84: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x195E88u;
label_195e88:
    // 0x195e88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x195e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_195e8c:
    // 0x195e8c: 0xc0416e4  jal         func_105B90
label_195e90:
    if (ctx->pc == 0x195E90u) {
        ctx->pc = 0x195E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E8Cu;
        // 0x195e90: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195E94u;
        goto label_195e94;
    }
    ctx->pc = 0x195E8Cu;
    SET_GPR_U32(ctx, 31, 0x195E94u);
    ctx->pc = 0x195E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195E8Cu;
    // 0x195e90: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x195E8Cu, 0x195E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195E94u;
label_195e94:
    // 0x195e94: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x195e94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_195e98:
    // 0x195e98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x195e98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_195e9c:
    // 0x195e9c: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x195e9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_195ea0:
    // 0x195ea0: 0x1460ffb7  bnez        $v1, . + 4 + (-0x49 << 2)
label_195ea4:
    if (ctx->pc == 0x195EA4u) {
        ctx->pc = 0x195EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195EA0u;
        // 0x195ea4: 0x26310090  addiu       $s1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195EA8u;
        goto label_195ea8;
    }
    ctx->pc = 0x195EA0u;
    {
        const bool branch_taken_0x195ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x195EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195EA0u;
        // 0x195ea4: 0x26310090  addiu       $s1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195ea0) {
            ctx->pc = 0x195D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195d80;
        }
    }
    ctx->pc = 0x195EA8u;
label_195ea8:
    // 0x195ea8: 0x3c110037  lui         $s1, 0x37
    ctx->pc = 0x195ea8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
label_195eac:
    // 0x195eac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x195eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195eb0:
    // 0x195eb0: 0x2631a4c0  addiu       $s1, $s1, -0x5B40
    ctx->pc = 0x195eb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294943936));
label_195eb4:
    // 0x195eb4: 0x0  nop
    ctx->pc = 0x195eb4u;
    // NOP
label_195eb8:
    // 0x195eb8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x195eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_195ebc:
    // 0x195ebc: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
label_195ec0:
    if (ctx->pc == 0x195EC0u) {
        ctx->pc = 0x195EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195EBCu;
        // 0x195ec0: 0x2403002e  addiu       $v1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195EC4u;
        goto label_195ec4;
    }
    ctx->pc = 0x195EBCu;
    {
        const bool branch_taken_0x195ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x195EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195EBCu;
        // 0x195ec0: 0x2403002e  addiu       $v1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195ebc) {
            ctx->pc = 0x195F90u;
            goto label_195f90;
        }
    }
    ctx->pc = 0x195EC4u;
label_195ec4:
    // 0x195ec4: 0x12030004  beq         $s0, $v1, . + 4 + (0x4 << 2)
label_195ec8:
    if (ctx->pc == 0x195EC8u) {
        ctx->pc = 0x195ECCu;
        goto label_195ecc;
    }
    ctx->pc = 0x195EC4u;
    {
        const bool branch_taken_0x195ec4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x195ec4) {
            ctx->pc = 0x195ED8u;
            goto label_195ed8;
        }
    }
    ctx->pc = 0x195ECCu;
label_195ecc:
    // 0x195ecc: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x195eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_195ed0:
    // 0x195ed0: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
label_195ed4:
    if (ctx->pc == 0x195ED4u) {
        ctx->pc = 0x195ED8u;
        goto label_195ed8;
    }
    ctx->pc = 0x195ED0u;
    {
        const bool branch_taken_0x195ed0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x195ed0) {
            ctx->pc = 0x195EE0u;
            goto label_195ee0;
        }
    }
    ctx->pc = 0x195ED8u;
label_195ed8:
    // 0x195ed8: 0x10000012  b           . + 4 + (0x12 << 2)
label_195edc:
    if (ctx->pc == 0x195EDCu) {
        ctx->pc = 0x195EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195ED8u;
        // 0x195edc: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195EE0u;
        goto label_195ee0;
    }
    ctx->pc = 0x195ED8u;
    {
        const bool branch_taken_0x195ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195ED8u;
        // 0x195edc: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195ed8) {
            ctx->pc = 0x195F24u;
            goto label_195f24;
        }
    }
    ctx->pc = 0x195EE0u;
label_195ee0:
    // 0x195ee0: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x195ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_195ee4:
    // 0x195ee4: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
label_195ee8:
    if (ctx->pc == 0x195EE8u) {
        ctx->pc = 0x195EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195EE4u;
        // 0x195ee8: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195EECu;
        goto label_195eec;
    }
    ctx->pc = 0x195EE4u;
    {
        const bool branch_taken_0x195ee4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x195EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195EE4u;
        // 0x195ee8: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195ee4) {
            ctx->pc = 0x195EF4u;
            goto label_195ef4;
        }
    }
    ctx->pc = 0x195EECu;
label_195eec:
    // 0x195eec: 0x16030004  bne         $s0, $v1, . + 4 + (0x4 << 2)
label_195ef0:
    if (ctx->pc == 0x195EF0u) {
        ctx->pc = 0x195EF4u;
        goto label_195ef4;
    }
    ctx->pc = 0x195EECu;
    {
        const bool branch_taken_0x195eec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x195eec) {
            ctx->pc = 0x195F00u;
            goto label_195f00;
        }
    }
    ctx->pc = 0x195EF4u;
label_195ef4:
    // 0x195ef4: 0x0  nop
    ctx->pc = 0x195ef4u;
    // NOP
label_195ef8:
    // 0x195ef8: 0x1000000a  b           . + 4 + (0xA << 2)
label_195efc:
    if (ctx->pc == 0x195EFCu) {
        ctx->pc = 0x195EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195EF8u;
        // 0x195efc: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195F00u;
        goto label_195f00;
    }
    ctx->pc = 0x195EF8u;
    {
        const bool branch_taken_0x195ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195EF8u;
        // 0x195efc: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195ef8) {
            ctx->pc = 0x195F24u;
            goto label_195f24;
        }
    }
    ctx->pc = 0x195F00u;
label_195f00:
    // 0x195f00: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x195f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
label_195f04:
    // 0x195f04: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
label_195f08:
    if (ctx->pc == 0x195F08u) {
        ctx->pc = 0x195F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F04u;
        // 0x195f08: 0x24030045  addiu       $v1, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195F0Cu;
        goto label_195f0c;
    }
    ctx->pc = 0x195F04u;
    {
        const bool branch_taken_0x195f04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x195F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F04u;
        // 0x195f08: 0x24030045  addiu       $v1, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195f04) {
            ctx->pc = 0x195F14u;
            goto label_195f14;
        }
    }
    ctx->pc = 0x195F0Cu;
label_195f0c:
    // 0x195f0c: 0x16030004  bne         $s0, $v1, . + 4 + (0x4 << 2)
label_195f10:
    if (ctx->pc == 0x195F10u) {
        ctx->pc = 0x195F14u;
        goto label_195f14;
    }
    ctx->pc = 0x195F0Cu;
    {
        const bool branch_taken_0x195f0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x195f0c) {
            ctx->pc = 0x195F20u;
            goto label_195f20;
        }
    }
    ctx->pc = 0x195F14u;
label_195f14:
    // 0x195f14: 0x0  nop
    ctx->pc = 0x195f14u;
    // NOP
label_195f18:
    // 0x195f18: 0x10000002  b           . + 4 + (0x2 << 2)
label_195f1c:
    if (ctx->pc == 0x195F1Cu) {
        ctx->pc = 0x195F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F18u;
        // 0x195f1c: 0x2404004e  addiu       $a0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195F20u;
        goto label_195f20;
    }
    ctx->pc = 0x195F18u;
    {
        const bool branch_taken_0x195f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F18u;
        // 0x195f1c: 0x2404004e  addiu       $a0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195f18) {
            ctx->pc = 0x195F24u;
            goto label_195f24;
        }
    }
    ctx->pc = 0x195F20u;
label_195f20:
    // 0x195f20: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x195f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_195f24:
    // 0x195f24: 0x0  nop
    ctx->pc = 0x195f24u;
    // NOP
label_195f28:
    // 0x195f28: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x195f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_195f2c:
    // 0x195f2c: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
label_195f30:
    if (ctx->pc == 0x195F30u) {
        ctx->pc = 0x195F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F2Cu;
        // 0x195f30: 0x43080  sll         $a2, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195F34u;
        goto label_195f34;
    }
    ctx->pc = 0x195F2Cu;
    {
        const bool branch_taken_0x195f2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x195F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F2Cu;
        // 0x195f30: 0x43080  sll         $a2, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195f2c) {
            ctx->pc = 0x195F90u;
            goto label_195f90;
        }
    }
    ctx->pc = 0x195F34u;
label_195f34:
    // 0x195f34: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x195f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_195f38:
    // 0x195f38: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x195f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_195f3c:
    // 0x195f3c: 0x2463a4c0  addiu       $v1, $v1, -0x5B40
    ctx->pc = 0x195f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943936));
label_195f40:
    // 0x195f40: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x195f40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_195f44:
    // 0x195f44: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x195f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_195f48:
    // 0x195f48: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x195f48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_195f4c:
    // 0x195f4c: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x195f4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_195f50:
    // 0x195f50: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x195f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_195f54:
    // 0x195f54: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_195f58:
    if (ctx->pc == 0x195F58u) {
        ctx->pc = 0x195F5Cu;
        goto label_195f5c;
    }
    ctx->pc = 0x195F54u;
    {
        const bool branch_taken_0x195f54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x195f54) {
            ctx->pc = 0x195F90u;
            goto label_195f90;
        }
    }
    ctx->pc = 0x195F5Cu;
label_195f5c:
    // 0x195f5c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x195f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_195f60:
    // 0x195f60: 0x24423070  addiu       $v0, $v0, 0x3070
    ctx->pc = 0x195f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12400));
label_195f64:
    // 0x195f64: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x195f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_195f68:
    // 0x195f68: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x195f68u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_195f6c:
    // 0x195f6c: 0xc041738  jal         func_105CE0
label_195f70:
    if (ctx->pc == 0x195F70u) {
        ctx->pc = 0x195F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F6Cu;
        // 0x195f70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195F74u;
        goto label_195f74;
    }
    ctx->pc = 0x195F6Cu;
    SET_GPR_U32(ctx, 31, 0x195F74u);
    ctx->pc = 0x195F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195F6Cu;
    // 0x195f70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x195F6Cu, 0x195F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195F74u;
label_195f74:
    // 0x195f74: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x195f74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_195f78:
    // 0x195f78: 0xc070080  jal         func_1C0200
label_195f7c:
    if (ctx->pc == 0x195F7Cu) {
        ctx->pc = 0x195F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F78u;
        // 0x195f7c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195F80u;
        goto label_195f80;
    }
    ctx->pc = 0x195F78u;
    SET_GPR_U32(ctx, 31, 0x195F80u);
    ctx->pc = 0x195F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195F78u;
    // 0x195f7c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x195F80u;
label_195f80:
    // 0x195f80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x195f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_195f84:
    // 0x195f84: 0xc0416e4  jal         func_105B90
label_195f88:
    if (ctx->pc == 0x195F88u) {
        ctx->pc = 0x195F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F84u;
        // 0x195f88: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195F8Cu;
        goto label_195f8c;
    }
    ctx->pc = 0x195F84u;
    SET_GPR_U32(ctx, 31, 0x195F8Cu);
    ctx->pc = 0x195F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195F84u;
    // 0x195f88: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x195F84u, 0x195F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195F8Cu;
label_195f8c:
    // 0x195f8c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x195f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_195f90:
    // 0x195f90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x195f90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_195f94:
    // 0x195f94: 0x2a030080  slti        $v1, $s0, 0x80
    ctx->pc = 0x195f94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)128) ? 1 : 0);
label_195f98:
    // 0x195f98: 0x1460ffc6  bnez        $v1, . + 4 + (-0x3A << 2)
label_195f9c:
    if (ctx->pc == 0x195F9Cu) {
        ctx->pc = 0x195F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F98u;
        // 0x195f9c: 0x263100c8  addiu       $s1, $s1, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195FA0u;
        goto label_195fa0;
    }
    ctx->pc = 0x195F98u;
    {
        const bool branch_taken_0x195f98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x195F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F98u;
        // 0x195f9c: 0x263100c8  addiu       $s1, $s1, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195f98) {
            ctx->pc = 0x195EB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195eb4;
        }
    }
    ctx->pc = 0x195FA0u;
label_195fa0:
    // 0x195fa0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x195fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_195fa4:
    // 0x195fa4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x195fa4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_195fa8:
    // 0x195fa8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x195fa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_195fac:
    // 0x195fac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x195facu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_195fb0:
    // 0x195fb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195fb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_195fb4:
    // 0x195fb4: 0x3e00008  jr          $ra
label_195fb8:
    if (ctx->pc == 0x195FB8u) {
        ctx->pc = 0x195FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FB4u;
        // 0x195fb8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195FBCu;
        goto label_195fbc;
    }
    ctx->pc = 0x195FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FB4u;
        // 0x195fb8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195FBCu;
label_195fbc:
    // 0x195fbc: 0x0  nop
    ctx->pc = 0x195fbcu;
    // NOP
label_195fc0:
    // 0x195fc0: 0x288200ab  slti        $v0, $a0, 0xAB
    ctx->pc = 0x195fc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)171) ? 1 : 0);
label_195fc4:
    // 0x195fc4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_195fc8:
    if (ctx->pc == 0x195FC8u) {
        ctx->pc = 0x195FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FC4u;
        // 0x195fc8: 0x28820082  slti        $v0, $a0, 0x82 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)130) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x195FCCu;
        goto label_195fcc;
    }
    ctx->pc = 0x195FC4u;
    {
        const bool branch_taken_0x195fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x195FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FC4u;
        // 0x195fc8: 0x28820082  slti        $v0, $a0, 0x82 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)130) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x195fc4) {
            ctx->pc = 0x195FE4u;
            goto label_195fe4;
        }
    }
    ctx->pc = 0x195FCCu;
label_195fcc:
    // 0x195fcc: 0x2483ff55  addiu       $v1, $a0, -0xAB
    ctx->pc = 0x195fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967125));
label_195fd0:
    // 0x195fd0: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x195fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_195fd4:
    // 0x195fd4: 0x244252f0  addiu       $v0, $v0, 0x52F0
    ctx->pc = 0x195fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21232));
label_195fd8:
    // 0x195fd8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x195fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_195fdc:
    // 0x195fdc: 0x10000014  b           . + 4 + (0x14 << 2)
label_195fe0:
    if (ctx->pc == 0x195FE0u) {
        ctx->pc = 0x195FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FDCu;
        // 0x195fe0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195FE4u;
        goto label_195fe4;
    }
    ctx->pc = 0x195FDCu;
    {
        const bool branch_taken_0x195fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FDCu;
        // 0x195fe0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195fdc) {
            ctx->pc = 0x196030u;
            goto label_196030;
        }
    }
    ctx->pc = 0x195FE4u;
label_195fe4:
    // 0x195fe4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_195fe8:
    if (ctx->pc == 0x195FE8u) {
        ctx->pc = 0x195FECu;
        goto label_195fec;
    }
    ctx->pc = 0x195FE4u;
    {
        const bool branch_taken_0x195fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195fe4) {
            ctx->pc = 0x195FF4u;
            goto label_195ff4;
        }
    }
    ctx->pc = 0x195FECu;
label_195fec:
    // 0x195fec: 0x1000000c  b           . + 4 + (0xC << 2)
label_195ff0:
    if (ctx->pc == 0x195FF0u) {
        ctx->pc = 0x195FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FECu;
        // 0x195ff0: 0x2484ffd7  addiu       $a0, $a0, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195FF4u;
        goto label_195ff4;
    }
    ctx->pc = 0x195FECu;
    {
        const bool branch_taken_0x195fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FECu;
        // 0x195ff0: 0x2484ffd7  addiu       $a0, $a0, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195fec) {
            ctx->pc = 0x196020u;
            goto label_196020;
        }
    }
    ctx->pc = 0x195FF4u;
label_195ff4:
    // 0x195ff4: 0x28820059  slti        $v0, $a0, 0x59
    ctx->pc = 0x195ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)89) ? 1 : 0);
label_195ff8:
    // 0x195ff8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_195ffc:
    if (ctx->pc == 0x195FFCu) {
        ctx->pc = 0x196000u;
        goto label_196000;
    }
    ctx->pc = 0x195FF8u;
    {
        const bool branch_taken_0x195ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195ff8) {
            ctx->pc = 0x196020u;
            goto label_196020;
        }
    }
    ctx->pc = 0x196000u;
label_196000:
    // 0x196000: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x196000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_196004:
    // 0x196004: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x196004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_196008:
    // 0x196008: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x196008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19600c:
    // 0x19600c: 0x24429d72  addiu       $v0, $v0, -0x628E
    ctx->pc = 0x19600cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942066));
label_196010:
    // 0x196010: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x196010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_196014:
    // 0x196014: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x196014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_196018:
    // 0x196018: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x196018u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_19601c:
    // 0x19601c: 0x0  nop
    ctx->pc = 0x19601cu;
    // NOP
label_196020:
    // 0x196020: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x196020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_196024:
    // 0x196024: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x196024u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_196028:
    // 0x196028: 0x24423270  addiu       $v0, $v0, 0x3270
    ctx->pc = 0x196028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12912));
label_19602c:
    // 0x19602c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19602cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_196030:
    // 0x196030: 0x3e00008  jr          $ra
label_196034:
    if (ctx->pc == 0x196034u) {
        ctx->pc = 0x196038u;
        goto label_196038;
    }
    ctx->pc = 0x196030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196038u;
label_196038:
    // 0x196038: 0x0  nop
    ctx->pc = 0x196038u;
    // NOP
label_19603c:
    // 0x19603c: 0x0  nop
    ctx->pc = 0x19603cu;
    // NOP
label_196040:
    // 0x196040: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x196040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_196044:
    // 0x196044: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x196044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_196048:
    // 0x196048: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x196048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_19604c:
    // 0x19604c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x19604cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_196050:
    // 0x196050: 0x27b70098  addiu       $s7, $sp, 0x98
    ctx->pc = 0x196050u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_196054:
    // 0x196054: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x196054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_196058:
    // 0x196058: 0x27b6009c  addiu       $s6, $sp, 0x9C
    ctx->pc = 0x196058u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_19605c:
    // 0x19605c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19605cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_196060:
    // 0x196060: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x196060u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_196064:
    // 0x196064: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x196064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_196068:
    // 0x196068: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x196068u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19606c:
    // 0x19606c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19606cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_196070:
    // 0x196070: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x196070u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_196074:
    // 0x196074: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x196074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_196078:
    // 0x196078: 0x27b20094  addiu       $s2, $sp, 0x94
    ctx->pc = 0x196078u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_19607c:
    // 0x19607c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19607cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_196080:
    // 0x196080: 0x27b100a0  addiu       $s1, $sp, 0xA0
    ctx->pc = 0x196080u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_196084:
    // 0x196084: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x196084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
label_196088:
    // 0x196088: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x196088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19608c:
    // 0x19608c: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x19608cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
label_196090:
    // 0x196090: 0xaef30000  sw          $s3, 0x0($s7)
    ctx->pc = 0x196090u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 19));
label_196094:
    // 0x196094: 0xaec60000  sw          $a2, 0x0($s6)
    ctx->pc = 0x196094u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 6));
label_196098:
    // 0x196098: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x196098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_19609c:
    // 0x19609c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x19609cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1960a0:
    // 0x1960a0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1960a4:
    if (ctx->pc == 0x1960A4u) {
        ctx->pc = 0x1960A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960A0u;
        // 0x1960a4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1960A8u;
        goto label_1960a8;
    }
    ctx->pc = 0x1960A0u;
    {
        const bool branch_taken_0x1960a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1960A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960A0u;
        // 0x1960a4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1960a0) {
            ctx->pc = 0x1960C0u;
            goto label_1960c0;
        }
    }
    ctx->pc = 0x1960A8u;
label_1960a8:
    // 0x1960a8: 0x2a0f809  jalr        $s5
label_1960ac:
    if (ctx->pc == 0x1960ACu) {
        ctx->pc = 0x1960ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960A8u;
        // 0x1960ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1960B0u;
        goto label_1960b0;
    }
    ctx->pc = 0x1960A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x1960B0u);
        ctx->pc = 0x1960ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960A8u;
        // 0x1960ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1960A8u, 0x1960B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1960B0u;
label_1960b0:
    // 0x1960b0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1960b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1960b4:
    // 0x1960b4: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x1960b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_1960b8:
    // 0x1960b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1960b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1960bc:
    // 0x1960bc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1960bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1960c0:
    // 0x1960c0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1960c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1960c4:
    // 0x1960c4: 0xb3182b  sltu        $v1, $a1, $s3
    ctx->pc = 0x1960c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_1960c8:
    // 0x1960c8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_1960cc:
    if (ctx->pc == 0x1960CCu) {
        ctx->pc = 0x1960CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960C8u;
        // 0x1960cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1960D0u;
        goto label_1960d0;
    }
    ctx->pc = 0x1960C8u;
    {
        const bool branch_taken_0x1960c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1960CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960C8u;
        // 0x1960cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1960c8) {
            ctx->pc = 0x1960A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1960a8;
        }
    }
    ctx->pc = 0x1960D0u;
label_1960d0:
    // 0x1960d0: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x1960d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1960d4:
    // 0x1960d4: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x1960d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1960d8:
    // 0x1960d8: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_1960dc:
    if (ctx->pc == 0x1960DCu) {
        ctx->pc = 0x1960E0u;
        goto label_1960e0;
    }
    ctx->pc = 0x1960D8u;
    {
        const bool branch_taken_0x1960d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1960d8) {
            ctx->pc = 0x196134u;
            goto label_196134;
        }
    }
    ctx->pc = 0x1960E0u;
label_1960e0:
    // 0x1960e0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1960e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1960e4:
    // 0x1960e4: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_1960e8:
    if (ctx->pc == 0x1960E8u) {
        ctx->pc = 0x1960ECu;
        goto label_1960ec;
    }
    ctx->pc = 0x1960E4u;
    {
        const bool branch_taken_0x1960e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1960e4) {
            ctx->pc = 0x196134u;
            goto label_196134;
        }
    }
    ctx->pc = 0x1960ECu;
label_1960ec:
    // 0x1960ec: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1960ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1960f0:
    // 0x1960f0: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1960f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1960f4:
    // 0x1960f4: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x1960f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1960f8:
    // 0x1960f8: 0x1000000a  b           . + 4 + (0xA << 2)
label_1960fc:
    if (ctx->pc == 0x1960FCu) {
        ctx->pc = 0x1960FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960F8u;
        // 0x1960fc: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196100u;
        goto label_196100;
    }
    ctx->pc = 0x1960F8u;
    {
        const bool branch_taken_0x1960f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1960FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960F8u;
        // 0x1960fc: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1960f8) {
            ctx->pc = 0x196124u;
            goto label_196124;
        }
    }
    ctx->pc = 0x196100u;
label_196100:
    // 0x196100: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x196100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_196104:
    // 0x196104: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x196104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_196108:
    // 0x196108: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x196108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_19610c:
    // 0x19610c: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x19610cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_196110:
    // 0x196110: 0x40f809  jalr        $v0
label_196114:
    if (ctx->pc == 0x196114u) {
        ctx->pc = 0x196114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196110u;
        // 0x196114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196118u;
        goto label_196118;
    }
    ctx->pc = 0x196110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196118u);
        ctx->pc = 0x196114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196110u;
        // 0x196114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196110u, 0x196118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196118u;
label_196118:
    // 0x196118: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x196118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19611c:
    // 0x19611c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19611cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_196120:
    // 0x196120: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x196120u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_196124:
    // 0x196124: 0x0  nop
    ctx->pc = 0x196124u;
    // NOP
label_196128:
    // 0x196128: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x196128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19612c:
    // 0x19612c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_196130:
    if (ctx->pc == 0x196130u) {
        ctx->pc = 0x196134u;
        goto label_196134;
    }
    ctx->pc = 0x19612Cu;
    {
        const bool branch_taken_0x19612c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19612c) {
            ctx->pc = 0x196100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196100;
        }
    }
    ctx->pc = 0x196134u;
label_196134:
    // 0x196134: 0x0  nop
    ctx->pc = 0x196134u;
    // NOP
label_196138:
    // 0x196138: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x196138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_19613c:
    // 0x19613c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x19613cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_196140:
    // 0x196140: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x196140u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_196144:
    // 0x196144: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x196144u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_196148:
    // 0x196148: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x196148u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19614c:
    // 0x19614c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19614cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_196150:
    // 0x196150: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x196150u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_196154:
    // 0x196154: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x196154u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_196158:
    // 0x196158: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x196158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19615c:
    // 0x19615c: 0x3e00008  jr          $ra
label_196160:
    if (ctx->pc == 0x196160u) {
        ctx->pc = 0x196160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19615Cu;
        // 0x196160: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196164u;
        goto label_196164;
    }
    ctx->pc = 0x19615Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19615Cu;
        // 0x196160: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19615Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196164u;
label_196164:
    // 0x196164: 0x0  nop
    ctx->pc = 0x196164u;
    // NOP
label_196168:
    // 0x196168: 0x0  nop
    ctx->pc = 0x196168u;
    // NOP
label_19616c:
    // 0x19616c: 0x0  nop
    ctx->pc = 0x19616cu;
    // NOP
label_196170:
    // 0x196170: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x196170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_196174:
    // 0x196174: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x196174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_196178:
    // 0x196178: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x196178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_19617c:
    // 0x19617c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x19617cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_196180:
    // 0x196180: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x196180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_196184:
    // 0x196184: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x196184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_196188:
    // 0x196188: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x196188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_19618c:
    // 0x19618c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x19618cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_196190:
    // 0x196190: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x196190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_196194:
    // 0x196194: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x196194u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_196198:
    // 0x196198: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x196198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_19619c:
    // 0x19619c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x19619cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1961a0:
    // 0x1961a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1961a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1961a4:
    // 0x1961a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1961a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1961a8:
    // 0x1961a8: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
label_1961ac:
    if (ctx->pc == 0x1961ACu) {
        ctx->pc = 0x1961ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1961A8u;
        // 0x1961ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1961B0u;
        goto label_1961b0;
    }
    ctx->pc = 0x1961A8u;
    {
        const bool branch_taken_0x1961a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1961ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1961A8u;
        // 0x1961ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1961a8) {
            ctx->pc = 0x196284u;
            { ctx->pc = 0x196284; return; }
        }
    }
    ctx->pc = 0x1961B0u;
label_1961b0:
    // 0x1961b0: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x1961b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
label_1961b4:
    // 0x1961b4: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x1961b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
label_1961b8:
    // 0x1961b8: 0x12a00032  beqz        $s5, . + 4 + (0x32 << 2)
label_1961bc:
    if (ctx->pc == 0x1961BCu) {
        ctx->pc = 0x1961BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1961B8u;
        // 0x1961bc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1961C0u;
        goto label_1961c0;
    }
    ctx->pc = 0x1961B8u;
    {
        const bool branch_taken_0x1961b8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1961BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1961B8u;
        // 0x1961bc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1961b8) {
            ctx->pc = 0x196284u;
            { ctx->pc = 0x196284; return; }
        }
    }
    ctx->pc = 0x1961C0u;
label_1961c0:
    // 0x1961c0: 0xafb000a0  sw          $s0, 0xA0($sp)
    ctx->pc = 0x1961c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 16));
label_1961c4:
    // 0x1961c4: 0x27b600a4  addiu       $s6, $sp, 0xA4
    ctx->pc = 0x1961c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_1961c8:
    // 0x1961c8: 0xaed40000  sw          $s4, 0x0($s6)
    ctx->pc = 0x1961c8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 20));
label_1961cc:
    // 0x1961cc: 0x27be00a8  addiu       $fp, $sp, 0xA8
    ctx->pc = 0x1961ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_1961d0:
    // 0x1961d0: 0xafd30000  sw          $s3, 0x0($fp)
    ctx->pc = 0x1961d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 19));
label_1961d4:
    // 0x1961d4: 0x27b700ac  addiu       $s7, $sp, 0xAC
    ctx->pc = 0x1961d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_1961d8:
    // 0x1961d8: 0xaee60000  sw          $a2, 0x0($s7)
    ctx->pc = 0x1961d8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 6));
label_1961dc:
    // 0x1961dc: 0x27b200b0  addiu       $s2, $sp, 0xB0
    ctx->pc = 0x1961dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1961e0:
    // 0x1961e0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1961e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1961e4:
    // 0x1961e4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1961e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1961e8:
    // 0x1961e8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1961e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1961ec:
    // 0x1961ec: 0x10000008  b           . + 4 + (0x8 << 2)
label_1961f0:
    if (ctx->pc == 0x1961F0u) {
        ctx->pc = 0x1961F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1961ECu;
        // 0x1961f0: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1961F4u;
        goto label_1961f4;
    }
    ctx->pc = 0x1961ECu;
    {
        const bool branch_taken_0x1961ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1961F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1961ECu;
        // 0x1961f0: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1961ec) {
            ctx->pc = 0x196210u;
            { ctx->pc = 0x196210; return; }
        }
    }
    ctx->pc = 0x1961F4u;
label_1961f4:
    // 0x1961f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1961f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1961f8:
    // 0x1961f8: 0x2a0f809  jalr        $s5
label_1961fc:
    if (ctx->pc == 0x1961FCu) {
        ctx->pc = 0x1961FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1961F8u;
        // 0x1961fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196200u;
        { ctx->pc = 0x196200; return; }
    }
    ctx->pc = 0x1961F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x196200u);
        ctx->pc = 0x1961FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1961F8u;
        // 0x1961fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1961F8u, 0x196200u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196200u;
    ctx->pc = 0x196200u;
    return;
}

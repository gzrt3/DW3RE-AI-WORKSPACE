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

// Function: FUN_0017d410
// Address: 0x17d410 - 0x27d534
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017d410_part14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1839a0u: goto label_1839a0;
        case 0x1839a4u: goto label_1839a4;
        case 0x1839a8u: goto label_1839a8;
        case 0x1839acu: goto label_1839ac;
        case 0x1839b0u: goto label_1839b0;
        case 0x1839b4u: goto label_1839b4;
        case 0x1839b8u: goto label_1839b8;
        case 0x1839bcu: goto label_1839bc;
        case 0x1839c0u: goto label_1839c0;
        case 0x1839c4u: goto label_1839c4;
        case 0x1839c8u: goto label_1839c8;
        case 0x1839ccu: goto label_1839cc;
        case 0x1839d0u: goto label_1839d0;
        case 0x1839d4u: goto label_1839d4;
        case 0x1839d8u: goto label_1839d8;
        case 0x1839dcu: goto label_1839dc;
        case 0x1839e0u: goto label_1839e0;
        case 0x1839e4u: goto label_1839e4;
        case 0x1839e8u: goto label_1839e8;
        case 0x1839ecu: goto label_1839ec;
        case 0x1839f0u: goto label_1839f0;
        case 0x1839f4u: goto label_1839f4;
        case 0x1839f8u: goto label_1839f8;
        case 0x1839fcu: goto label_1839fc;
        case 0x183a00u: goto label_183a00;
        case 0x183a04u: goto label_183a04;
        case 0x183a08u: goto label_183a08;
        case 0x183a0cu: goto label_183a0c;
        case 0x183a10u: goto label_183a10;
        case 0x183a14u: goto label_183a14;
        case 0x183a18u: goto label_183a18;
        case 0x183a1cu: goto label_183a1c;
        case 0x183a20u: goto label_183a20;
        case 0x183a24u: goto label_183a24;
        case 0x183a28u: goto label_183a28;
        case 0x183a2cu: goto label_183a2c;
        case 0x183a30u: goto label_183a30;
        case 0x183a34u: goto label_183a34;
        case 0x183a38u: goto label_183a38;
        case 0x183a3cu: goto label_183a3c;
        case 0x183a40u: goto label_183a40;
        case 0x183a44u: goto label_183a44;
        case 0x183a48u: goto label_183a48;
        case 0x183a4cu: goto label_183a4c;
        case 0x183a50u: goto label_183a50;
        case 0x183a54u: goto label_183a54;
        case 0x183a58u: goto label_183a58;
        case 0x183a5cu: goto label_183a5c;
        case 0x183a60u: goto label_183a60;
        case 0x183a64u: goto label_183a64;
        case 0x183a68u: goto label_183a68;
        case 0x183a6cu: goto label_183a6c;
        case 0x183a70u: goto label_183a70;
        case 0x183a74u: goto label_183a74;
        case 0x183a78u: goto label_183a78;
        case 0x183a7cu: goto label_183a7c;
        case 0x183a80u: goto label_183a80;
        case 0x183a84u: goto label_183a84;
        case 0x183a88u: goto label_183a88;
        case 0x183a8cu: goto label_183a8c;
        case 0x183a90u: goto label_183a90;
        case 0x183a94u: goto label_183a94;
        case 0x183a98u: goto label_183a98;
        case 0x183a9cu: goto label_183a9c;
        case 0x183aa0u: goto label_183aa0;
        case 0x183aa4u: goto label_183aa4;
        case 0x183aa8u: goto label_183aa8;
        case 0x183aacu: goto label_183aac;
        case 0x183ab0u: goto label_183ab0;
        case 0x183ab4u: goto label_183ab4;
        case 0x183ab8u: goto label_183ab8;
        case 0x183abcu: goto label_183abc;
        case 0x183ac0u: goto label_183ac0;
        case 0x183ac4u: goto label_183ac4;
        case 0x183ac8u: goto label_183ac8;
        case 0x183accu: goto label_183acc;
        case 0x183ad0u: goto label_183ad0;
        case 0x183ad4u: goto label_183ad4;
        case 0x183ad8u: goto label_183ad8;
        case 0x183adcu: goto label_183adc;
        case 0x183ae0u: goto label_183ae0;
        case 0x183ae4u: goto label_183ae4;
        case 0x183ae8u: goto label_183ae8;
        case 0x183aecu: goto label_183aec;
        case 0x183af0u: goto label_183af0;
        case 0x183af4u: goto label_183af4;
        case 0x183af8u: goto label_183af8;
        case 0x183afcu: goto label_183afc;
        case 0x183b00u: goto label_183b00;
        case 0x183b04u: goto label_183b04;
        case 0x183b08u: goto label_183b08;
        case 0x183b0cu: goto label_183b0c;
        case 0x183b10u: goto label_183b10;
        case 0x183b14u: goto label_183b14;
        case 0x183b18u: goto label_183b18;
        case 0x183b1cu: goto label_183b1c;
        case 0x183b20u: goto label_183b20;
        case 0x183b24u: goto label_183b24;
        case 0x183b28u: goto label_183b28;
        case 0x183b2cu: goto label_183b2c;
        case 0x183b30u: goto label_183b30;
        case 0x183b34u: goto label_183b34;
        case 0x183b38u: goto label_183b38;
        case 0x183b3cu: goto label_183b3c;
        case 0x183b40u: goto label_183b40;
        case 0x183b44u: goto label_183b44;
        case 0x183b48u: goto label_183b48;
        case 0x183b4cu: goto label_183b4c;
        case 0x183b50u: goto label_183b50;
        case 0x183b54u: goto label_183b54;
        case 0x183b58u: goto label_183b58;
        case 0x183b5cu: goto label_183b5c;
        case 0x183b60u: goto label_183b60;
        case 0x183b64u: goto label_183b64;
        case 0x183b68u: goto label_183b68;
        case 0x183b6cu: goto label_183b6c;
        case 0x183b70u: goto label_183b70;
        case 0x183b74u: goto label_183b74;
        case 0x183b78u: goto label_183b78;
        case 0x183b7cu: goto label_183b7c;
        case 0x183b80u: goto label_183b80;
        case 0x183b84u: goto label_183b84;
        case 0x183b88u: goto label_183b88;
        case 0x183b8cu: goto label_183b8c;
        case 0x183b90u: goto label_183b90;
        case 0x183b94u: goto label_183b94;
        case 0x183b98u: goto label_183b98;
        case 0x183b9cu: goto label_183b9c;
        case 0x183ba0u: goto label_183ba0;
        case 0x183ba4u: goto label_183ba4;
        case 0x183ba8u: goto label_183ba8;
        case 0x183bacu: goto label_183bac;
        case 0x183bb0u: goto label_183bb0;
        case 0x183bb4u: goto label_183bb4;
        case 0x183bb8u: goto label_183bb8;
        case 0x183bbcu: goto label_183bbc;
        case 0x183bc0u: goto label_183bc0;
        case 0x183bc4u: goto label_183bc4;
        case 0x183bc8u: goto label_183bc8;
        case 0x183bccu: goto label_183bcc;
        case 0x183bd0u: goto label_183bd0;
        case 0x183bd4u: goto label_183bd4;
        case 0x183bd8u: goto label_183bd8;
        case 0x183bdcu: goto label_183bdc;
        case 0x183be0u: goto label_183be0;
        case 0x183be4u: goto label_183be4;
        case 0x183be8u: goto label_183be8;
        case 0x183becu: goto label_183bec;
        case 0x183bf0u: goto label_183bf0;
        case 0x183bf4u: goto label_183bf4;
        case 0x183bf8u: goto label_183bf8;
        case 0x183bfcu: goto label_183bfc;
        case 0x183c00u: goto label_183c00;
        case 0x183c04u: goto label_183c04;
        case 0x183c08u: goto label_183c08;
        case 0x183c0cu: goto label_183c0c;
        case 0x183c10u: goto label_183c10;
        case 0x183c14u: goto label_183c14;
        case 0x183c18u: goto label_183c18;
        case 0x183c1cu: goto label_183c1c;
        case 0x183c20u: goto label_183c20;
        case 0x183c24u: goto label_183c24;
        case 0x183c28u: goto label_183c28;
        case 0x183c2cu: goto label_183c2c;
        case 0x183c30u: goto label_183c30;
        case 0x183c34u: goto label_183c34;
        case 0x183c38u: goto label_183c38;
        case 0x183c3cu: goto label_183c3c;
        case 0x183c40u: goto label_183c40;
        case 0x183c44u: goto label_183c44;
        case 0x183c48u: goto label_183c48;
        case 0x183c4cu: goto label_183c4c;
        case 0x183c50u: goto label_183c50;
        case 0x183c54u: goto label_183c54;
        case 0x183c58u: goto label_183c58;
        case 0x183c5cu: goto label_183c5c;
        case 0x183c60u: goto label_183c60;
        case 0x183c64u: goto label_183c64;
        case 0x183c68u: goto label_183c68;
        case 0x183c6cu: goto label_183c6c;
        case 0x183c70u: goto label_183c70;
        case 0x183c74u: goto label_183c74;
        case 0x183c78u: goto label_183c78;
        case 0x183c7cu: goto label_183c7c;
        case 0x183c80u: goto label_183c80;
        case 0x183c84u: goto label_183c84;
        case 0x183c88u: goto label_183c88;
        case 0x183c8cu: goto label_183c8c;
        case 0x183c90u: goto label_183c90;
        case 0x183c94u: goto label_183c94;
        case 0x183c98u: goto label_183c98;
        case 0x183c9cu: goto label_183c9c;
        case 0x183ca0u: goto label_183ca0;
        case 0x183ca4u: goto label_183ca4;
        case 0x183ca8u: goto label_183ca8;
        case 0x183cacu: goto label_183cac;
        case 0x183cb0u: goto label_183cb0;
        case 0x183cb4u: goto label_183cb4;
        case 0x183cb8u: goto label_183cb8;
        case 0x183cbcu: goto label_183cbc;
        case 0x183cc0u: goto label_183cc0;
        case 0x183cc4u: goto label_183cc4;
        case 0x183cc8u: goto label_183cc8;
        case 0x183cccu: goto label_183ccc;
        case 0x183cd0u: goto label_183cd0;
        case 0x183cd4u: goto label_183cd4;
        case 0x183cd8u: goto label_183cd8;
        case 0x183cdcu: goto label_183cdc;
        case 0x183ce0u: goto label_183ce0;
        case 0x183ce4u: goto label_183ce4;
        case 0x183ce8u: goto label_183ce8;
        case 0x183cecu: goto label_183cec;
        case 0x183cf0u: goto label_183cf0;
        case 0x183cf4u: goto label_183cf4;
        case 0x183cf8u: goto label_183cf8;
        case 0x183cfcu: goto label_183cfc;
        case 0x183d00u: goto label_183d00;
        case 0x183d04u: goto label_183d04;
        case 0x183d08u: goto label_183d08;
        case 0x183d0cu: goto label_183d0c;
        case 0x183d10u: goto label_183d10;
        case 0x183d14u: goto label_183d14;
        case 0x183d18u: goto label_183d18;
        case 0x183d1cu: goto label_183d1c;
        case 0x183d20u: goto label_183d20;
        case 0x183d24u: goto label_183d24;
        case 0x183d28u: goto label_183d28;
        case 0x183d2cu: goto label_183d2c;
        case 0x183d30u: goto label_183d30;
        case 0x183d34u: goto label_183d34;
        case 0x183d38u: goto label_183d38;
        case 0x183d3cu: goto label_183d3c;
        case 0x183d40u: goto label_183d40;
        case 0x183d44u: goto label_183d44;
        case 0x183d48u: goto label_183d48;
        case 0x183d4cu: goto label_183d4c;
        case 0x183d50u: goto label_183d50;
        case 0x183d54u: goto label_183d54;
        case 0x183d58u: goto label_183d58;
        case 0x183d5cu: goto label_183d5c;
        case 0x183d60u: goto label_183d60;
        case 0x183d64u: goto label_183d64;
        case 0x183d68u: goto label_183d68;
        case 0x183d6cu: goto label_183d6c;
        case 0x183d70u: goto label_183d70;
        case 0x183d74u: goto label_183d74;
        case 0x183d78u: goto label_183d78;
        case 0x183d7cu: goto label_183d7c;
        case 0x183d80u: goto label_183d80;
        case 0x183d84u: goto label_183d84;
        case 0x183d88u: goto label_183d88;
        case 0x183d8cu: goto label_183d8c;
        case 0x183d90u: goto label_183d90;
        case 0x183d94u: goto label_183d94;
        case 0x183d98u: goto label_183d98;
        case 0x183d9cu: goto label_183d9c;
        case 0x183da0u: goto label_183da0;
        case 0x183da4u: goto label_183da4;
        case 0x183da8u: goto label_183da8;
        case 0x183dacu: goto label_183dac;
        case 0x183db0u: goto label_183db0;
        case 0x183db4u: goto label_183db4;
        case 0x183db8u: goto label_183db8;
        case 0x183dbcu: goto label_183dbc;
        case 0x183dc0u: goto label_183dc0;
        case 0x183dc4u: goto label_183dc4;
        case 0x183dc8u: goto label_183dc8;
        case 0x183dccu: goto label_183dcc;
        case 0x183dd0u: goto label_183dd0;
        case 0x183dd4u: goto label_183dd4;
        case 0x183dd8u: goto label_183dd8;
        case 0x183ddcu: goto label_183ddc;
        case 0x183de0u: goto label_183de0;
        case 0x183de4u: goto label_183de4;
        case 0x183de8u: goto label_183de8;
        case 0x183decu: goto label_183dec;
        case 0x183df0u: goto label_183df0;
        case 0x183df4u: goto label_183df4;
        case 0x183df8u: goto label_183df8;
        case 0x183dfcu: goto label_183dfc;
        case 0x183e00u: goto label_183e00;
        case 0x183e04u: goto label_183e04;
        case 0x183e08u: goto label_183e08;
        case 0x183e0cu: goto label_183e0c;
        case 0x183e10u: goto label_183e10;
        case 0x183e14u: goto label_183e14;
        case 0x183e18u: goto label_183e18;
        case 0x183e1cu: goto label_183e1c;
        case 0x183e20u: goto label_183e20;
        case 0x183e24u: goto label_183e24;
        case 0x183e28u: goto label_183e28;
        case 0x183e2cu: goto label_183e2c;
        case 0x183e30u: goto label_183e30;
        case 0x183e34u: goto label_183e34;
        case 0x183e38u: goto label_183e38;
        case 0x183e3cu: goto label_183e3c;
        case 0x183e40u: goto label_183e40;
        case 0x183e44u: goto label_183e44;
        case 0x183e48u: goto label_183e48;
        case 0x183e4cu: goto label_183e4c;
        case 0x183e50u: goto label_183e50;
        case 0x183e54u: goto label_183e54;
        case 0x183e58u: goto label_183e58;
        case 0x183e5cu: goto label_183e5c;
        case 0x183e60u: goto label_183e60;
        case 0x183e64u: goto label_183e64;
        case 0x183e68u: goto label_183e68;
        case 0x183e6cu: goto label_183e6c;
        case 0x183e70u: goto label_183e70;
        case 0x183e74u: goto label_183e74;
        case 0x183e78u: goto label_183e78;
        case 0x183e7cu: goto label_183e7c;
        case 0x183e80u: goto label_183e80;
        case 0x183e84u: goto label_183e84;
        case 0x183e88u: goto label_183e88;
        case 0x183e8cu: goto label_183e8c;
        case 0x183e90u: goto label_183e90;
        case 0x183e94u: goto label_183e94;
        case 0x183e98u: goto label_183e98;
        case 0x183e9cu: goto label_183e9c;
        case 0x183ea0u: goto label_183ea0;
        case 0x183ea4u: goto label_183ea4;
        case 0x183ea8u: goto label_183ea8;
        case 0x183eacu: goto label_183eac;
        case 0x183eb0u: goto label_183eb0;
        case 0x183eb4u: goto label_183eb4;
        case 0x183eb8u: goto label_183eb8;
        case 0x183ebcu: goto label_183ebc;
        case 0x183ec0u: goto label_183ec0;
        case 0x183ec4u: goto label_183ec4;
        case 0x183ec8u: goto label_183ec8;
        case 0x183eccu: goto label_183ecc;
        case 0x183ed0u: goto label_183ed0;
        case 0x183ed4u: goto label_183ed4;
        case 0x183ed8u: goto label_183ed8;
        case 0x183edcu: goto label_183edc;
        case 0x183ee0u: goto label_183ee0;
        case 0x183ee4u: goto label_183ee4;
        case 0x183ee8u: goto label_183ee8;
        case 0x183eecu: goto label_183eec;
        case 0x183ef0u: goto label_183ef0;
        case 0x183ef4u: goto label_183ef4;
        case 0x183ef8u: goto label_183ef8;
        case 0x183efcu: goto label_183efc;
        case 0x183f00u: goto label_183f00;
        case 0x183f04u: goto label_183f04;
        case 0x183f08u: goto label_183f08;
        case 0x183f0cu: goto label_183f0c;
        case 0x183f10u: goto label_183f10;
        case 0x183f14u: goto label_183f14;
        case 0x183f18u: goto label_183f18;
        case 0x183f1cu: goto label_183f1c;
        case 0x183f20u: goto label_183f20;
        case 0x183f24u: goto label_183f24;
        case 0x183f28u: goto label_183f28;
        case 0x183f2cu: goto label_183f2c;
        case 0x183f30u: goto label_183f30;
        case 0x183f34u: goto label_183f34;
        case 0x183f38u: goto label_183f38;
        case 0x183f3cu: goto label_183f3c;
        case 0x183f40u: goto label_183f40;
        case 0x183f44u: goto label_183f44;
        case 0x183f48u: goto label_183f48;
        case 0x183f4cu: goto label_183f4c;
        case 0x183f50u: goto label_183f50;
        case 0x183f54u: goto label_183f54;
        case 0x183f58u: goto label_183f58;
        case 0x183f5cu: goto label_183f5c;
        case 0x183f60u: goto label_183f60;
        case 0x183f64u: goto label_183f64;
        case 0x183f68u: goto label_183f68;
        case 0x183f6cu: goto label_183f6c;
        case 0x183f70u: goto label_183f70;
        case 0x183f74u: goto label_183f74;
        case 0x183f78u: goto label_183f78;
        case 0x183f7cu: goto label_183f7c;
        case 0x183f80u: goto label_183f80;
        case 0x183f84u: goto label_183f84;
        case 0x183f88u: goto label_183f88;
        case 0x183f8cu: goto label_183f8c;
        case 0x183f90u: goto label_183f90;
        case 0x183f94u: goto label_183f94;
        case 0x183f98u: goto label_183f98;
        case 0x183f9cu: goto label_183f9c;
        case 0x183fa0u: goto label_183fa0;
        case 0x183fa4u: goto label_183fa4;
        case 0x183fa8u: goto label_183fa8;
        case 0x183facu: goto label_183fac;
        case 0x183fb0u: goto label_183fb0;
        case 0x183fb4u: goto label_183fb4;
        case 0x183fb8u: goto label_183fb8;
        case 0x183fbcu: goto label_183fbc;
        case 0x183fc0u: goto label_183fc0;
        case 0x183fc4u: goto label_183fc4;
        case 0x183fc8u: goto label_183fc8;
        case 0x183fccu: goto label_183fcc;
        case 0x183fd0u: goto label_183fd0;
        case 0x183fd4u: goto label_183fd4;
        case 0x183fd8u: goto label_183fd8;
        case 0x183fdcu: goto label_183fdc;
        case 0x183fe0u: goto label_183fe0;
        case 0x183fe4u: goto label_183fe4;
        case 0x183fe8u: goto label_183fe8;
        case 0x183fecu: goto label_183fec;
        case 0x183ff0u: goto label_183ff0;
        case 0x183ff4u: goto label_183ff4;
        case 0x183ff8u: goto label_183ff8;
        case 0x183ffcu: goto label_183ffc;
        case 0x184000u: goto label_184000;
        case 0x184004u: goto label_184004;
        case 0x184008u: goto label_184008;
        case 0x18400cu: goto label_18400c;
        case 0x184010u: goto label_184010;
        case 0x184014u: goto label_184014;
        case 0x184018u: goto label_184018;
        case 0x18401cu: goto label_18401c;
        case 0x184020u: goto label_184020;
        case 0x184024u: goto label_184024;
        case 0x184028u: goto label_184028;
        case 0x18402cu: goto label_18402c;
        case 0x184030u: goto label_184030;
        case 0x184034u: goto label_184034;
        case 0x184038u: goto label_184038;
        case 0x18403cu: goto label_18403c;
        case 0x184040u: goto label_184040;
        case 0x184044u: goto label_184044;
        case 0x184048u: goto label_184048;
        case 0x18404cu: goto label_18404c;
        case 0x184050u: goto label_184050;
        case 0x184054u: goto label_184054;
        case 0x184058u: goto label_184058;
        case 0x18405cu: goto label_18405c;
        case 0x184060u: goto label_184060;
        case 0x184064u: goto label_184064;
        case 0x184068u: goto label_184068;
        case 0x18406cu: goto label_18406c;
        case 0x184070u: goto label_184070;
        case 0x184074u: goto label_184074;
        case 0x184078u: goto label_184078;
        case 0x18407cu: goto label_18407c;
        case 0x184080u: goto label_184080;
        case 0x184084u: goto label_184084;
        case 0x184088u: goto label_184088;
        case 0x18408cu: goto label_18408c;
        case 0x184090u: goto label_184090;
        case 0x184094u: goto label_184094;
        case 0x184098u: goto label_184098;
        case 0x18409cu: goto label_18409c;
        case 0x1840a0u: goto label_1840a0;
        case 0x1840a4u: goto label_1840a4;
        case 0x1840a8u: goto label_1840a8;
        case 0x1840acu: goto label_1840ac;
        case 0x1840b0u: goto label_1840b0;
        case 0x1840b4u: goto label_1840b4;
        case 0x1840b8u: goto label_1840b8;
        case 0x1840bcu: goto label_1840bc;
        case 0x1840c0u: goto label_1840c0;
        case 0x1840c4u: goto label_1840c4;
        case 0x1840c8u: goto label_1840c8;
        case 0x1840ccu: goto label_1840cc;
        case 0x1840d0u: goto label_1840d0;
        case 0x1840d4u: goto label_1840d4;
        case 0x1840d8u: goto label_1840d8;
        case 0x1840dcu: goto label_1840dc;
        case 0x1840e0u: goto label_1840e0;
        case 0x1840e4u: goto label_1840e4;
        case 0x1840e8u: goto label_1840e8;
        case 0x1840ecu: goto label_1840ec;
        case 0x1840f0u: goto label_1840f0;
        case 0x1840f4u: goto label_1840f4;
        case 0x1840f8u: goto label_1840f8;
        case 0x1840fcu: goto label_1840fc;
        case 0x184100u: goto label_184100;
        case 0x184104u: goto label_184104;
        case 0x184108u: goto label_184108;
        case 0x18410cu: goto label_18410c;
        case 0x184110u: goto label_184110;
        case 0x184114u: goto label_184114;
        case 0x184118u: goto label_184118;
        case 0x18411cu: goto label_18411c;
        case 0x184120u: goto label_184120;
        case 0x184124u: goto label_184124;
        case 0x184128u: goto label_184128;
        case 0x18412cu: goto label_18412c;
        case 0x184130u: goto label_184130;
        case 0x184134u: goto label_184134;
        case 0x184138u: goto label_184138;
        case 0x18413cu: goto label_18413c;
        case 0x184140u: goto label_184140;
        case 0x184144u: goto label_184144;
        case 0x184148u: goto label_184148;
        case 0x18414cu: goto label_18414c;
        case 0x184150u: goto label_184150;
        case 0x184154u: goto label_184154;
        case 0x184158u: goto label_184158;
        case 0x18415cu: goto label_18415c;
        case 0x184160u: goto label_184160;
        case 0x184164u: goto label_184164;
        case 0x184168u: goto label_184168;
        case 0x18416cu: goto label_18416c;
        default: return;
    }

label_1839a0:
    // 0x1839a0: 0xc6200158  lwc1        $f0, 0x158($s1)
    ctx->pc = 0x1839a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1839a4:
    // 0x1839a4: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1839a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1839a8:
    // 0x1839a8: 0x92420020  lbu         $v0, 0x20($s2)
    ctx->pc = 0x1839a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
label_1839ac:
    // 0x1839ac: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_1839b0:
    if (ctx->pc == 0x1839B0u) {
        ctx->pc = 0x1839B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1839ACu;
        // 0x1839b0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1839B4u;
        goto label_1839b4;
    }
    ctx->pc = 0x1839ACu;
    {
        const bool branch_taken_0x1839ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1839B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1839ACu;
        // 0x1839b0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1839ac) {
            ctx->pc = 0x1839C0u;
            goto label_1839c0;
        }
    }
    ctx->pc = 0x1839B4u;
label_1839b4:
    // 0x1839b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1839b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1839b8:
    // 0x1839b8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1839bc:
    if (ctx->pc == 0x1839BCu) {
        ctx->pc = 0x1839BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1839B8u;
        // 0x1839bc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1839C0u;
        goto label_1839c0;
    }
    ctx->pc = 0x1839B8u;
    {
        const bool branch_taken_0x1839b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1839BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1839B8u;
        // 0x1839bc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1839b8) {
            ctx->pc = 0x1839D8u;
            goto label_1839d8;
        }
    }
    ctx->pc = 0x1839C0u;
label_1839c0:
    // 0x1839c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1839c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1839c4:
    // 0x1839c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1839c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1839c8:
    // 0x1839c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1839c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1839cc:
    // 0x1839cc: 0x0  nop
    ctx->pc = 0x1839ccu;
    // NOP
label_1839d0:
    // 0x1839d0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1839d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1839d4:
    // 0x1839d4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1839d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1839d8:
    // 0x1839d8: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x1839d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
label_1839dc:
    // 0x1839dc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1839dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1839e0:
    // 0x1839e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1839e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1839e4:
    // 0x1839e4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1839e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1839e8:
    // 0x1839e8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1839e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1839ec:
    // 0x1839ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1839ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1839f0:
    // 0x1839f0: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1839f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_1839f4:
    // 0x1839f4: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x1839f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1839f8:
    // 0x1839f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1839f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1839fc:
    // 0x1839fc: 0x0  nop
    ctx->pc = 0x1839fcu;
    // NOP
label_183a00:
    // 0x183a00: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x183a00u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_183a04:
    // 0x183a04: 0x0  nop
    ctx->pc = 0x183a04u;
    // NOP
label_183a08:
    // 0x183a08: 0x0  nop
    ctx->pc = 0x183a08u;
    // NOP
label_183a0c:
    // 0x183a0c: 0x46026036  c.le.s      $f12, $f2
    ctx->pc = 0x183a0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_183a10:
    // 0x183a10: 0x0  nop
    ctx->pc = 0x183a10u;
    // NOP
label_183a14:
    // 0x183a14: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_183a18:
    if (ctx->pc == 0x183A18u) {
        ctx->pc = 0x183A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183A14u;
        // 0x183a18: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183A1Cu;
        goto label_183a1c;
    }
    ctx->pc = 0x183A14u;
    {
        const bool branch_taken_0x183a14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x183A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183A14u;
        // 0x183a18: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183a14) {
            ctx->pc = 0x183A30u;
            goto label_183a30;
        }
    }
    ctx->pc = 0x183A1Cu;
label_183a1c:
    // 0x183a1c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x183a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_183a20:
    // 0x183a20: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x183a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_183a24:
    // 0x183a24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183a28:
    // 0x183a28: 0x1000000d  b           . + 4 + (0xD << 2)
label_183a2c:
    if (ctx->pc == 0x183A2Cu) {
        ctx->pc = 0x183A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183A28u;
        // 0x183a2c: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x183A30u;
        goto label_183a30;
    }
    ctx->pc = 0x183A28u;
    {
        const bool branch_taken_0x183a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183A28u;
        // 0x183a2c: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x183a28) {
            ctx->pc = 0x183A60u;
            goto label_183a60;
        }
    }
    ctx->pc = 0x183A30u;
label_183a30:
    // 0x183a30: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x183a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_183a34:
    // 0x183a34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183a38:
    // 0x183a38: 0x0  nop
    ctx->pc = 0x183a38u;
    // NOP
label_183a3c:
    // 0x183a3c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x183a3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_183a40:
    // 0x183a40: 0x0  nop
    ctx->pc = 0x183a40u;
    // NOP
label_183a44:
    // 0x183a44: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_183a48:
    if (ctx->pc == 0x183A48u) {
        ctx->pc = 0x183A4Cu;
        goto label_183a4c;
    }
    ctx->pc = 0x183A44u;
    {
        const bool branch_taken_0x183a44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x183a44) {
            ctx->pc = 0x183A60u;
            goto label_183a60;
        }
    }
    ctx->pc = 0x183A4Cu;
label_183a4c:
    // 0x183a4c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x183a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_183a50:
    // 0x183a50: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x183a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_183a54:
    // 0x183a54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183a54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183a58:
    // 0x183a58: 0x10000001  b           . + 4 + (0x1 << 2)
label_183a5c:
    if (ctx->pc == 0x183A5Cu) {
        ctx->pc = 0x183A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183A58u;
        // 0x183a5c: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x183A60u;
        goto label_183a60;
    }
    ctx->pc = 0x183A58u;
    {
        const bool branch_taken_0x183a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183A58u;
        // 0x183a5c: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x183a58) {
            ctx->pc = 0x183A60u;
            goto label_183a60;
        }
    }
    ctx->pc = 0x183A60u;
label_183a60:
    // 0x183a60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_183a64:
    // 0x183a64: 0xc062900  jal         func_18A400
label_183a68:
    if (ctx->pc == 0x183A68u) {
        ctx->pc = 0x183A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183A64u;
        // 0x183a68: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183A6Cu;
        goto label_183a6c;
    }
    ctx->pc = 0x183A64u;
    SET_GPR_U32(ctx, 31, 0x183A6Cu);
    ctx->pc = 0x183A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183A64u;
    // 0x183a68: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A400u;
    { ctx->pc = 0x18a400; return; }
    ctx->pc = 0x183A6Cu;
label_183a6c:
    // 0x183a6c: 0x10000073  b           . + 4 + (0x73 << 2)
label_183a70:
    if (ctx->pc == 0x183A70u) {
        ctx->pc = 0x183A74u;
        goto label_183a74;
    }
    ctx->pc = 0x183A6Cu;
    {
        const bool branch_taken_0x183a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183a6c) {
            ctx->pc = 0x183C3Cu;
            goto label_183c3c;
        }
    }
    ctx->pc = 0x183A74u;
label_183a74:
    // 0x183a74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x183a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_183a78:
    // 0x183a78: 0xc062a80  jal         func_18AA00
label_183a7c:
    if (ctx->pc == 0x183A7Cu) {
        ctx->pc = 0x183A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183A78u;
        // 0x183a7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183A80u;
        goto label_183a80;
    }
    ctx->pc = 0x183A78u;
    SET_GPR_U32(ctx, 31, 0x183A80u);
    ctx->pc = 0x183A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183A78u;
    // 0x183a7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AA00u;
    { ctx->pc = 0x18aa00; return; }
    ctx->pc = 0x183A80u;
label_183a80:
    // 0x183a80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x183a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_183a84:
    // 0x183a84: 0xc0523a4  jal         func_148E90
label_183a88:
    if (ctx->pc == 0x183A88u) {
        ctx->pc = 0x183A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183A84u;
        // 0x183a88: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183A8Cu;
        goto label_183a8c;
    }
    ctx->pc = 0x183A84u;
    SET_GPR_U32(ctx, 31, 0x183A8Cu);
    ctx->pc = 0x183A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183A84u;
    // 0x183a88: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148E90u, 0x183A84u, 0x183A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183A8Cu;
label_183a8c:
    // 0x183a8c: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_183a90:
    if (ctx->pc == 0x183A90u) {
        ctx->pc = 0x183A94u;
        goto label_183a94;
    }
    ctx->pc = 0x183A8Cu;
    {
        const bool branch_taken_0x183a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183a8c) {
            ctx->pc = 0x183B68u;
            goto label_183b68;
        }
    }
    ctx->pc = 0x183A94u;
label_183a94:
    // 0x183a94: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x183a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_183a98:
    // 0x183a98: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x183a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_183a9c:
    // 0x183a9c: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x183a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_183aa0:
    // 0x183aa0: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x183aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_183aa4:
    // 0x183aa4: 0x92420020  lbu         $v0, 0x20($s2)
    ctx->pc = 0x183aa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
label_183aa8:
    // 0x183aa8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_183aac:
    if (ctx->pc == 0x183AACu) {
        ctx->pc = 0x183AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183AA8u;
        // 0x183aac: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183AB0u;
        goto label_183ab0;
    }
    ctx->pc = 0x183AA8u;
    {
        const bool branch_taken_0x183aa8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x183AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183AA8u;
        // 0x183aac: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183aa8) {
            ctx->pc = 0x183ABCu;
            goto label_183abc;
        }
    }
    ctx->pc = 0x183AB0u;
label_183ab0:
    // 0x183ab0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183ab4:
    // 0x183ab4: 0x10000007  b           . + 4 + (0x7 << 2)
label_183ab8:
    if (ctx->pc == 0x183AB8u) {
        ctx->pc = 0x183AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183AB4u;
        // 0x183ab8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x183ABCu;
        goto label_183abc;
    }
    ctx->pc = 0x183AB4u;
    {
        const bool branch_taken_0x183ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183AB4u;
        // 0x183ab8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x183ab4) {
            ctx->pc = 0x183AD4u;
            goto label_183ad4;
        }
    }
    ctx->pc = 0x183ABCu;
label_183abc:
    // 0x183abc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x183abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_183ac0:
    // 0x183ac0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x183ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_183ac4:
    // 0x183ac4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x183ac4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183ac8:
    // 0x183ac8: 0x0  nop
    ctx->pc = 0x183ac8u;
    // NOP
label_183acc:
    // 0x183acc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x183accu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_183ad0:
    // 0x183ad0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x183ad0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_183ad4:
    // 0x183ad4: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x183ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
label_183ad8:
    // 0x183ad8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x183ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_183adc:
    // 0x183adc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x183adcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183ae0:
    // 0x183ae0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x183ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_183ae4:
    // 0x183ae4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x183ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_183ae8:
    // 0x183ae8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x183ae8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_183aec:
    // 0x183aec: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x183aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_183af0:
    // 0x183af0: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x183af0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_183af4:
    // 0x183af4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183af4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183af8:
    // 0x183af8: 0x0  nop
    ctx->pc = 0x183af8u;
    // NOP
label_183afc:
    // 0x183afc: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x183afcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_183b00:
    // 0x183b00: 0x0  nop
    ctx->pc = 0x183b00u;
    // NOP
label_183b04:
    // 0x183b04: 0x0  nop
    ctx->pc = 0x183b04u;
    // NOP
label_183b08:
    // 0x183b08: 0x46026036  c.le.s      $f12, $f2
    ctx->pc = 0x183b08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_183b0c:
    // 0x183b0c: 0x0  nop
    ctx->pc = 0x183b0cu;
    // NOP
label_183b10:
    // 0x183b10: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_183b14:
    if (ctx->pc == 0x183B14u) {
        ctx->pc = 0x183B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183B10u;
        // 0x183b14: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183B18u;
        goto label_183b18;
    }
    ctx->pc = 0x183B10u;
    {
        const bool branch_taken_0x183b10 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x183B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183B10u;
        // 0x183b14: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183b10) {
            ctx->pc = 0x183B2Cu;
            goto label_183b2c;
        }
    }
    ctx->pc = 0x183B18u;
label_183b18:
    // 0x183b18: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x183b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_183b1c:
    // 0x183b1c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x183b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_183b20:
    // 0x183b20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183b24:
    // 0x183b24: 0x1000000d  b           . + 4 + (0xD << 2)
label_183b28:
    if (ctx->pc == 0x183B28u) {
        ctx->pc = 0x183B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183B24u;
        // 0x183b28: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x183B2Cu;
        goto label_183b2c;
    }
    ctx->pc = 0x183B24u;
    {
        const bool branch_taken_0x183b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183B24u;
        // 0x183b28: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x183b24) {
            ctx->pc = 0x183B5Cu;
            goto label_183b5c;
        }
    }
    ctx->pc = 0x183B2Cu;
label_183b2c:
    // 0x183b2c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x183b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_183b30:
    // 0x183b30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183b34:
    // 0x183b34: 0x0  nop
    ctx->pc = 0x183b34u;
    // NOP
label_183b38:
    // 0x183b38: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x183b38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_183b3c:
    // 0x183b3c: 0x0  nop
    ctx->pc = 0x183b3cu;
    // NOP
label_183b40:
    // 0x183b40: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_183b44:
    if (ctx->pc == 0x183B44u) {
        ctx->pc = 0x183B48u;
        goto label_183b48;
    }
    ctx->pc = 0x183B40u;
    {
        const bool branch_taken_0x183b40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x183b40) {
            ctx->pc = 0x183B5Cu;
            goto label_183b5c;
        }
    }
    ctx->pc = 0x183B48u;
label_183b48:
    // 0x183b48: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x183b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_183b4c:
    // 0x183b4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x183b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_183b50:
    // 0x183b50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183b54:
    // 0x183b54: 0x10000001  b           . + 4 + (0x1 << 2)
label_183b58:
    if (ctx->pc == 0x183B58u) {
        ctx->pc = 0x183B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183B54u;
        // 0x183b58: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x183B5Cu;
        goto label_183b5c;
    }
    ctx->pc = 0x183B54u;
    {
        const bool branch_taken_0x183b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183B54u;
        // 0x183b58: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x183b54) {
            ctx->pc = 0x183B5Cu;
            goto label_183b5c;
        }
    }
    ctx->pc = 0x183B5Cu;
label_183b5c:
    // 0x183b5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x183b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_183b60:
    // 0x183b60: 0xc0625b8  jal         func_1896E0
label_183b64:
    if (ctx->pc == 0x183B64u) {
        ctx->pc = 0x183B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183B60u;
        // 0x183b64: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183B68u;
        goto label_183b68;
    }
    ctx->pc = 0x183B60u;
    SET_GPR_U32(ctx, 31, 0x183B68u);
    ctx->pc = 0x183B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183B60u;
    // 0x183b64: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1896E0u;
    { ctx->pc = 0x1896e0; return; }
    ctx->pc = 0x183B68u;
label_183b68:
    // 0x183b68: 0xc6200150  lwc1        $f0, 0x150($s1)
    ctx->pc = 0x183b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_183b6c:
    // 0x183b6c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x183b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_183b70:
    // 0x183b70: 0xc6200158  lwc1        $f0, 0x158($s1)
    ctx->pc = 0x183b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_183b74:
    // 0x183b74: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x183b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_183b78:
    // 0x183b78: 0x92420020  lbu         $v0, 0x20($s2)
    ctx->pc = 0x183b78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
label_183b7c:
    // 0x183b7c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_183b80:
    if (ctx->pc == 0x183B80u) {
        ctx->pc = 0x183B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183B7Cu;
        // 0x183b80: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183B84u;
        goto label_183b84;
    }
    ctx->pc = 0x183B7Cu;
    {
        const bool branch_taken_0x183b7c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x183B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183B7Cu;
        // 0x183b80: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183b7c) {
            ctx->pc = 0x183B90u;
            goto label_183b90;
        }
    }
    ctx->pc = 0x183B84u;
label_183b84:
    // 0x183b84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183b88:
    // 0x183b88: 0x10000007  b           . + 4 + (0x7 << 2)
label_183b8c:
    if (ctx->pc == 0x183B8Cu) {
        ctx->pc = 0x183B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183B88u;
        // 0x183b8c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x183B90u;
        goto label_183b90;
    }
    ctx->pc = 0x183B88u;
    {
        const bool branch_taken_0x183b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183B88u;
        // 0x183b8c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x183b88) {
            ctx->pc = 0x183BA8u;
            goto label_183ba8;
        }
    }
    ctx->pc = 0x183B90u;
label_183b90:
    // 0x183b90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x183b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_183b94:
    // 0x183b94: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x183b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_183b98:
    // 0x183b98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x183b98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183b9c:
    // 0x183b9c: 0x0  nop
    ctx->pc = 0x183b9cu;
    // NOP
label_183ba0:
    // 0x183ba0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x183ba0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_183ba4:
    // 0x183ba4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x183ba4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_183ba8:
    // 0x183ba8: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x183ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
label_183bac:
    // 0x183bac: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x183bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_183bb0:
    // 0x183bb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x183bb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183bb4:
    // 0x183bb4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x183bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_183bb8:
    // 0x183bb8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x183bb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_183bbc:
    // 0x183bbc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x183bbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_183bc0:
    // 0x183bc0: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x183bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_183bc4:
    // 0x183bc4: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x183bc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_183bc8:
    // 0x183bc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183bc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183bcc:
    // 0x183bcc: 0x0  nop
    ctx->pc = 0x183bccu;
    // NOP
label_183bd0:
    // 0x183bd0: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x183bd0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_183bd4:
    // 0x183bd4: 0x0  nop
    ctx->pc = 0x183bd4u;
    // NOP
label_183bd8:
    // 0x183bd8: 0x0  nop
    ctx->pc = 0x183bd8u;
    // NOP
label_183bdc:
    // 0x183bdc: 0x46026036  c.le.s      $f12, $f2
    ctx->pc = 0x183bdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_183be0:
    // 0x183be0: 0x0  nop
    ctx->pc = 0x183be0u;
    // NOP
label_183be4:
    // 0x183be4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_183be8:
    if (ctx->pc == 0x183BE8u) {
        ctx->pc = 0x183BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183BE4u;
        // 0x183be8: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183BECu;
        goto label_183bec;
    }
    ctx->pc = 0x183BE4u;
    {
        const bool branch_taken_0x183be4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x183BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183BE4u;
        // 0x183be8: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183be4) {
            ctx->pc = 0x183C00u;
            goto label_183c00;
        }
    }
    ctx->pc = 0x183BECu;
label_183bec:
    // 0x183bec: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x183becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_183bf0:
    // 0x183bf0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x183bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_183bf4:
    // 0x183bf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183bf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183bf8:
    // 0x183bf8: 0x1000000d  b           . + 4 + (0xD << 2)
label_183bfc:
    if (ctx->pc == 0x183BFCu) {
        ctx->pc = 0x183BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183BF8u;
        // 0x183bfc: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x183C00u;
        goto label_183c00;
    }
    ctx->pc = 0x183BF8u;
    {
        const bool branch_taken_0x183bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183BF8u;
        // 0x183bfc: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x183bf8) {
            ctx->pc = 0x183C30u;
            goto label_183c30;
        }
    }
    ctx->pc = 0x183C00u;
label_183c00:
    // 0x183c00: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x183c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_183c04:
    // 0x183c04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183c08:
    // 0x183c08: 0x0  nop
    ctx->pc = 0x183c08u;
    // NOP
label_183c0c:
    // 0x183c0c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x183c0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_183c10:
    // 0x183c10: 0x0  nop
    ctx->pc = 0x183c10u;
    // NOP
label_183c14:
    // 0x183c14: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_183c18:
    if (ctx->pc == 0x183C18u) {
        ctx->pc = 0x183C1Cu;
        goto label_183c1c;
    }
    ctx->pc = 0x183C14u;
    {
        const bool branch_taken_0x183c14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x183c14) {
            ctx->pc = 0x183C30u;
            goto label_183c30;
        }
    }
    ctx->pc = 0x183C1Cu;
label_183c1c:
    // 0x183c1c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x183c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_183c20:
    // 0x183c20: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x183c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_183c24:
    // 0x183c24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183c24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183c28:
    // 0x183c28: 0x10000001  b           . + 4 + (0x1 << 2)
label_183c2c:
    if (ctx->pc == 0x183C2Cu) {
        ctx->pc = 0x183C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183C28u;
        // 0x183c2c: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x183C30u;
        goto label_183c30;
    }
    ctx->pc = 0x183C28u;
    {
        const bool branch_taken_0x183c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183C28u;
        // 0x183c2c: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x183c28) {
            ctx->pc = 0x183C30u;
            goto label_183c30;
        }
    }
    ctx->pc = 0x183C30u;
label_183c30:
    // 0x183c30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_183c34:
    // 0x183c34: 0xc062900  jal         func_18A400
label_183c38:
    if (ctx->pc == 0x183C38u) {
        ctx->pc = 0x183C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183C34u;
        // 0x183c38: 0x27a500a8  addiu       $a1, $sp, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183C3Cu;
        goto label_183c3c;
    }
    ctx->pc = 0x183C34u;
    SET_GPR_U32(ctx, 31, 0x183C3Cu);
    ctx->pc = 0x183C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183C34u;
    // 0x183c38: 0x27a500a8  addiu       $a1, $sp, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A400u;
    { ctx->pc = 0x18a400; return; }
    ctx->pc = 0x183C3Cu;
label_183c3c:
    // 0x183c3c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x183c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_183c40:
    // 0x183c40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x183c40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_183c44:
    // 0x183c44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x183c44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_183c48:
    // 0x183c48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x183c48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_183c4c:
    // 0x183c4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183c4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_183c50:
    // 0x183c50: 0x3e00008  jr          $ra
label_183c54:
    if (ctx->pc == 0x183C54u) {
        ctx->pc = 0x183C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183C50u;
        // 0x183c54: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183C58u;
        goto label_183c58;
    }
    ctx->pc = 0x183C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183C50u;
        // 0x183c54: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183C58u;
label_183c58:
    // 0x183c58: 0x0  nop
    ctx->pc = 0x183c58u;
    // NOP
label_183c5c:
    // 0x183c5c: 0x0  nop
    ctx->pc = 0x183c5cu;
    // NOP
label_183c60:
    // 0x183c60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x183c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_183c64:
    // 0x183c64: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x183c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
label_183c68:
    // 0x183c68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x183c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_183c6c:
    // 0x183c6c: 0x34674dd3  ori         $a3, $v1, 0x4DD3
    ctx->pc = 0x183c6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
label_183c70:
    // 0x183c70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x183c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_183c74:
    // 0x183c74: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x183c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_183c78:
    // 0x183c78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x183c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_183c7c:
    // 0x183c7c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x183c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_183c80:
    // 0x183c80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x183c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_183c84:
    // 0x183c84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x183c84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_183c88:
    // 0x183c88: 0xc4a10150  lwc1        $f1, 0x150($a1)
    ctx->pc = 0x183c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_183c8c:
    // 0x183c8c: 0x3c0468db  lui         $a0, 0x68DB
    ctx->pc = 0x183c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26843 << 16));
label_183c90:
    // 0x183c90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x183c90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183c94:
    // 0x183c94: 0x34888bad  ori         $t0, $a0, 0x8BAD
    ctx->pc = 0x183c94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)35757);
label_183c98:
    // 0x183c98: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x183c98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_183c9c:
    // 0x183c9c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x183c9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_183ca0:
    // 0x183ca0: 0x0  nop
    ctx->pc = 0x183ca0u;
    // NOP
label_183ca4:
    // 0x183ca4: 0x1030018  mult        $zero, $t0, $v1
    ctx->pc = 0x183ca4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_183ca8:
    // 0x183ca8: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x183ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_183cac:
    // 0x183cac: 0x0  nop
    ctx->pc = 0x183cacu;
    // NOP
label_183cb0:
    // 0x183cb0: 0x1810  mfhi        $v1
    ctx->pc = 0x183cb0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_183cb4:
    // 0x183cb4: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x183cb4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_183cb8:
    // 0x183cb8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x183cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_183cbc:
    // 0x183cbc: 0xa0a30218  sb          $v1, 0x218($a1)
    ctx->pc = 0x183cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 536), (uint8_t)GPR_U32(ctx, 3));
label_183cc0:
    // 0x183cc0: 0xc4a10158  lwc1        $f1, 0x158($a1)
    ctx->pc = 0x183cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_183cc4:
    // 0x183cc4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x183cc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_183cc8:
    // 0x183cc8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x183cc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_183ccc:
    // 0x183ccc: 0x0  nop
    ctx->pc = 0x183cccu;
    // NOP
label_183cd0:
    // 0x183cd0: 0x1030018  mult        $zero, $t0, $v1
    ctx->pc = 0x183cd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_183cd4:
    // 0x183cd4: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x183cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_183cd8:
    // 0x183cd8: 0x0  nop
    ctx->pc = 0x183cd8u;
    // NOP
label_183cdc:
    // 0x183cdc: 0x1810  mfhi        $v1
    ctx->pc = 0x183cdcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_183ce0:
    // 0x183ce0: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x183ce0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_183ce4:
    // 0x183ce4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x183ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_183ce8:
    // 0x183ce8: 0xa0a30219  sb          $v1, 0x219($a1)
    ctx->pc = 0x183ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 537), (uint8_t)GPR_U32(ctx, 3));
label_183cec:
    // 0x183cec: 0xc4a10150  lwc1        $f1, 0x150($a1)
    ctx->pc = 0x183cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_183cf0:
    // 0x183cf0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x183cf0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_183cf4:
    // 0x183cf4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x183cf4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_183cf8:
    // 0x183cf8: 0x0  nop
    ctx->pc = 0x183cf8u;
    // NOP
label_183cfc:
    // 0x183cfc: 0xe30018  mult        $zero, $a3, $v1
    ctx->pc = 0x183cfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_183d00:
    // 0x183d00: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x183d00u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_183d04:
    // 0x183d04: 0x0  nop
    ctx->pc = 0x183d04u;
    // NOP
label_183d08:
    // 0x183d08: 0x1810  mfhi        $v1
    ctx->pc = 0x183d08u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_183d0c:
    // 0x183d0c: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x183d0cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_183d10:
    // 0x183d10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x183d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_183d14:
    // 0x183d14: 0xa0a3021a  sb          $v1, 0x21A($a1)
    ctx->pc = 0x183d14u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 538), (uint8_t)GPR_U32(ctx, 3));
label_183d18:
    // 0x183d18: 0xc4a10158  lwc1        $f1, 0x158($a1)
    ctx->pc = 0x183d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_183d1c:
    // 0x183d1c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x183d1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_183d20:
    // 0x183d20: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x183d20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_183d24:
    // 0x183d24: 0x0  nop
    ctx->pc = 0x183d24u;
    // NOP
label_183d28:
    // 0x183d28: 0xe30018  mult        $zero, $a3, $v1
    ctx->pc = 0x183d28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_183d2c:
    // 0x183d2c: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x183d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_183d30:
    // 0x183d30: 0x0  nop
    ctx->pc = 0x183d30u;
    // NOP
label_183d34:
    // 0x183d34: 0x1810  mfhi        $v1
    ctx->pc = 0x183d34u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_183d38:
    // 0x183d38: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x183d38u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_183d3c:
    // 0x183d3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x183d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_183d40:
    // 0x183d40: 0xa0a3021b  sb          $v1, 0x21B($a1)
    ctx->pc = 0x183d40u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 539), (uint8_t)GPR_U32(ctx, 3));
label_183d44:
    // 0x183d44: 0xc4a10044  lwc1        $f1, 0x44($a1)
    ctx->pc = 0x183d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_183d48:
    // 0x183d48: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x183d48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_183d4c:
    // 0x183d4c: 0x0  nop
    ctx->pc = 0x183d4cu;
    // NOP
label_183d50:
    // 0x183d50: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_183d54:
    if (ctx->pc == 0x183D54u) {
        ctx->pc = 0x183D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183D50u;
        // 0x183d54: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183D58u;
        goto label_183d58;
    }
    ctx->pc = 0x183D50u;
    {
        const bool branch_taken_0x183d50 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x183D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183D50u;
        // 0x183d54: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183d50) {
            ctx->pc = 0x183D6Cu;
            goto label_183d6c;
        }
    }
    ctx->pc = 0x183D58u;
label_183d58:
    // 0x183d58: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x183d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_183d5c:
    // 0x183d5c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x183d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_183d60:
    // 0x183d60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x183d60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183d64:
    // 0x183d64: 0x1000000d  b           . + 4 + (0xD << 2)
label_183d68:
    if (ctx->pc == 0x183D68u) {
        ctx->pc = 0x183D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183D64u;
        // 0x183d68: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x183D6Cu;
        goto label_183d6c;
    }
    ctx->pc = 0x183D64u;
    {
        const bool branch_taken_0x183d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183D64u;
        // 0x183d68: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x183d64) {
            ctx->pc = 0x183D9Cu;
            goto label_183d9c;
        }
    }
    ctx->pc = 0x183D6Cu;
label_183d6c:
    // 0x183d6c: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x183d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
label_183d70:
    // 0x183d70: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x183d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_183d74:
    // 0x183d74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x183d74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183d78:
    // 0x183d78: 0x0  nop
    ctx->pc = 0x183d78u;
    // NOP
label_183d7c:
    // 0x183d7c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x183d7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_183d80:
    // 0x183d80: 0x0  nop
    ctx->pc = 0x183d80u;
    // NOP
label_183d84:
    // 0x183d84: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_183d88:
    if (ctx->pc == 0x183D88u) {
        ctx->pc = 0x183D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183D84u;
        // 0x183d88: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183D8Cu;
        goto label_183d8c;
    }
    ctx->pc = 0x183D84u;
    {
        const bool branch_taken_0x183d84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x183D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183D84u;
        // 0x183d88: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183d84) {
            ctx->pc = 0x183D9Cu;
            goto label_183d9c;
        }
    }
    ctx->pc = 0x183D8Cu;
label_183d8c:
    // 0x183d8c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x183d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_183d90:
    // 0x183d90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x183d90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183d94:
    // 0x183d94: 0x10000001  b           . + 4 + (0x1 << 2)
label_183d98:
    if (ctx->pc == 0x183D98u) {
        ctx->pc = 0x183D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183D94u;
        // 0x183d98: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x183D9Cu;
        goto label_183d9c;
    }
    ctx->pc = 0x183D94u;
    {
        const bool branch_taken_0x183d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183D94u;
        // 0x183d98: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x183d94) {
            ctx->pc = 0x183D9Cu;
            goto label_183d9c;
        }
    }
    ctx->pc = 0x183D9Cu;
label_183d9c:
    // 0x183d9c: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x183d9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_183da0:
    // 0x183da0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x183da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_183da4:
    // 0x183da4: 0x92030218  lbu         $v1, 0x218($s0)
    ctx->pc = 0x183da4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 536)));
label_183da8:
    // 0x183da8: 0xa2230022  sb          $v1, 0x22($s1)
    ctx->pc = 0x183da8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 34), (uint8_t)GPR_U32(ctx, 3));
label_183dac:
    // 0x183dac: 0x92030219  lbu         $v1, 0x219($s0)
    ctx->pc = 0x183dacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 537)));
label_183db0:
    // 0x183db0: 0xa2230023  sb          $v1, 0x23($s1)
    ctx->pc = 0x183db0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 3));
label_183db4:
    // 0x183db4: 0xc6000150  lwc1        $f0, 0x150($s0)
    ctx->pc = 0x183db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_183db8:
    // 0x183db8: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x183db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_183dbc:
    // 0x183dbc: 0xc6000158  lwc1        $f0, 0x158($s0)
    ctx->pc = 0x183dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_183dc0:
    // 0x183dc0: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x183dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_183dc4:
    // 0x183dc4: 0x9203023f  lbu         $v1, 0x23F($s0)
    ctx->pc = 0x183dc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 575)));
label_183dc8:
    // 0x183dc8: 0xa223003a  sb          $v1, 0x3A($s1)
    ctx->pc = 0x183dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 58), (uint8_t)GPR_U32(ctx, 3));
label_183dcc:
    // 0x183dcc: 0x92230036  lbu         $v1, 0x36($s1)
    ctx->pc = 0x183dccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
label_183dd0:
    // 0x183dd0: 0x1465001a  bne         $v1, $a1, . + 4 + (0x1A << 2)
label_183dd4:
    if (ctx->pc == 0x183DD4u) {
        ctx->pc = 0x183DD8u;
        goto label_183dd8;
    }
    ctx->pc = 0x183DD0u;
    {
        const bool branch_taken_0x183dd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x183dd0) {
            ctx->pc = 0x183E3Cu;
            goto label_183e3c;
        }
    }
    ctx->pc = 0x183DD8u;
label_183dd8:
    // 0x183dd8: 0x92040237  lbu         $a0, 0x237($s0)
    ctx->pc = 0x183dd8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 567)));
label_183ddc:
    // 0x183ddc: 0x10850018  beq         $a0, $a1, . + 4 + (0x18 << 2)
label_183de0:
    if (ctx->pc == 0x183DE0u) {
        ctx->pc = 0x183DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183DDCu;
        // 0x183de0: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183DE4u;
        goto label_183de4;
    }
    ctx->pc = 0x183DDCu;
    {
        const bool branch_taken_0x183ddc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x183DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183DDCu;
        // 0x183de0: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183ddc) {
            ctx->pc = 0x183E40u;
            goto label_183e40;
        }
    }
    ctx->pc = 0x183DE4u;
label_183de4:
    // 0x183de4: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_183de8:
    if (ctx->pc == 0x183DE8u) {
        ctx->pc = 0x183DECu;
        goto label_183dec;
    }
    ctx->pc = 0x183DE4u;
    {
        const bool branch_taken_0x183de4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x183de4) {
            ctx->pc = 0x183E40u;
            goto label_183e40;
        }
    }
    ctx->pc = 0x183DECu;
label_183dec:
    // 0x183dec: 0xa2050237  sb          $a1, 0x237($s0)
    ctx->pc = 0x183decu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 567), (uint8_t)GPR_U32(ctx, 5));
label_183df0:
    // 0x183df0: 0x92230034  lbu         $v1, 0x34($s1)
    ctx->pc = 0x183df0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
label_183df4:
    // 0x183df4: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x183df4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_183df8:
    // 0x183df8: 0x92240038  lbu         $a0, 0x38($s1)
    ctx->pc = 0x183df8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
label_183dfc:
    // 0x183dfc: 0x24a525a9  addiu       $a1, $a1, 0x25A9
    ctx->pc = 0x183dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9641));
label_183e00:
    // 0x183e00: 0x38680001  xori        $t0, $v1, 0x1
    ctx->pc = 0x183e00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_183e04:
    // 0x183e04: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x183e04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_183e08:
    // 0x183e08: 0x83a00  sll         $a3, $t0, 8
    ctx->pc = 0x183e08u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_183e0c:
    // 0x183e0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x183e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_183e10:
    // 0x183e10: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x183e10u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_183e14:
    // 0x183e14: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x183e14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_183e18:
    // 0x183e18: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x183e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_183e1c:
    // 0x183e1c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x183e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_183e20:
    // 0x183e20: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x183e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_183e24:
    // 0x183e24: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x183e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_183e28:
    // 0x183e28: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x183e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_183e2c:
    // 0x183e2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x183e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_183e30:
    // 0x183e30: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x183e30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_183e34:
    // 0x183e34: 0x10000002  b           . + 4 + (0x2 << 2)
label_183e38:
    if (ctx->pc == 0x183E38u) {
        ctx->pc = 0x183E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183E34u;
        // 0x183e38: 0xa2030236  sb          $v1, 0x236($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 566), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183E3Cu;
        goto label_183e3c;
    }
    ctx->pc = 0x183E34u;
    {
        const bool branch_taken_0x183e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183E34u;
        // 0x183e38: 0xa2030236  sb          $v1, 0x236($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 566), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183e34) {
            ctx->pc = 0x183E40u;
            goto label_183e40;
        }
    }
    ctx->pc = 0x183E3Cu;
label_183e3c:
    // 0x183e3c: 0xa2030237  sb          $v1, 0x237($s0)
    ctx->pc = 0x183e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 567), (uint8_t)GPR_U32(ctx, 3));
label_183e40:
    // 0x183e40: 0x92030237  lbu         $v1, 0x237($s0)
    ctx->pc = 0x183e40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 567)));
label_183e44:
    // 0x183e44: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x183e44u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_183e48:
    // 0x183e48: 0x1020006f  beqz        $at, . + 4 + (0x6F << 2)
label_183e4c:
    if (ctx->pc == 0x183E4Cu) {
        ctx->pc = 0x183E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183E48u;
        // 0x183e4c: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183E50u;
        goto label_183e50;
    }
    ctx->pc = 0x183E48u;
    {
        const bool branch_taken_0x183e48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x183E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183E48u;
        // 0x183e4c: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183e48) {
            ctx->pc = 0x184008u;
            goto label_184008;
        }
    }
    ctx->pc = 0x183E50u;
label_183e50:
    // 0x183e50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x183e50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_183e54:
    // 0x183e54: 0x24849870  addiu       $a0, $a0, -0x6790
    ctx->pc = 0x183e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940784));
label_183e58:
    // 0x183e58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x183e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_183e5c:
    // 0x183e5c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x183e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_183e60:
    // 0x183e60: 0x600008  jr          $v1
label_183e64:
    if (ctx->pc == 0x183E64u) {
        ctx->pc = 0x183E68u;
        goto label_183e68;
    }
    ctx->pc = 0x183E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x183E68u: goto label_183e68;
            case 0x183EE8u: goto label_183ee8;
            case 0x183F60u: goto label_183f60;
            case 0x183FA0u: goto label_183fa0;
            case 0x183FF0u: goto label_183ff0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183E60u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x183E68u;
label_183e68:
    // 0x183e68: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x183e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_183e6c:
    // 0x183e6c: 0xc062a80  jal         func_18AA00
label_183e70:
    if (ctx->pc == 0x183E70u) {
        ctx->pc = 0x183E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183E6Cu;
        // 0x183e70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183E74u;
        goto label_183e74;
    }
    ctx->pc = 0x183E6Cu;
    SET_GPR_U32(ctx, 31, 0x183E74u);
    ctx->pc = 0x183E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183E6Cu;
    // 0x183e70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AA00u;
    { ctx->pc = 0x18aa00; return; }
    ctx->pc = 0x183E74u;
label_183e74:
    // 0x183e74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x183e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_183e78:
    // 0x183e78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x183e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_183e7c:
    // 0x183e7c: 0xc052644  jal         func_149910
label_183e80:
    if (ctx->pc == 0x183E80u) {
        ctx->pc = 0x183E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183E7Cu;
        // 0x183e80: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183E84u;
        goto label_183e84;
    }
    ctx->pc = 0x183E7Cu;
    SET_GPR_U32(ctx, 31, 0x183E84u);
    ctx->pc = 0x183E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183E7Cu;
    // 0x183e80: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149910u, 0x183E7Cu, 0x183E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183E84u;
label_183e84:
    // 0x183e84: 0x92240036  lbu         $a0, 0x36($s1)
    ctx->pc = 0x183e84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
label_183e88:
    // 0x183e88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x183e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_183e8c:
    // 0x183e8c: 0xa2040237  sb          $a0, 0x237($s0)
    ctx->pc = 0x183e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 567), (uint8_t)GPR_U32(ctx, 4));
label_183e90:
    // 0x183e90: 0x92240036  lbu         $a0, 0x36($s1)
    ctx->pc = 0x183e90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
label_183e94:
    // 0x183e94: 0x1483005c  bne         $a0, $v1, . + 4 + (0x5C << 2)
label_183e98:
    if (ctx->pc == 0x183E98u) {
        ctx->pc = 0x183E9Cu;
        goto label_183e9c;
    }
    ctx->pc = 0x183E94u;
    {
        const bool branch_taken_0x183e94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x183e94) {
            ctx->pc = 0x184008u;
            goto label_184008;
        }
    }
    ctx->pc = 0x183E9Cu;
label_183e9c:
    // 0x183e9c: 0x92230034  lbu         $v1, 0x34($s1)
    ctx->pc = 0x183e9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
label_183ea0:
    // 0x183ea0: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x183ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_183ea4:
    // 0x183ea4: 0x92240038  lbu         $a0, 0x38($s1)
    ctx->pc = 0x183ea4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
label_183ea8:
    // 0x183ea8: 0x24a525a9  addiu       $a1, $a1, 0x25A9
    ctx->pc = 0x183ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9641));
label_183eac:
    // 0x183eac: 0x38670001  xori        $a3, $v1, 0x1
    ctx->pc = 0x183eacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_183eb0:
    // 0x183eb0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x183eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_183eb4:
    // 0x183eb4: 0x73200  sll         $a2, $a3, 8
    ctx->pc = 0x183eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_183eb8:
    // 0x183eb8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x183eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_183ebc:
    // 0x183ebc: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x183ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_183ec0:
    // 0x183ec0: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x183ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_183ec4:
    // 0x183ec4: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x183ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_183ec8:
    // 0x183ec8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x183ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_183ecc:
    // 0x183ecc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x183eccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_183ed0:
    // 0x183ed0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x183ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_183ed4:
    // 0x183ed4: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x183ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_183ed8:
    // 0x183ed8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x183ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_183edc:
    // 0x183edc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x183edcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_183ee0:
    // 0x183ee0: 0x10000049  b           . + 4 + (0x49 << 2)
label_183ee4:
    if (ctx->pc == 0x183EE4u) {
        ctx->pc = 0x183EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183EE0u;
        // 0x183ee4: 0xa2030236  sb          $v1, 0x236($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 566), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183EE8u;
        goto label_183ee8;
    }
    ctx->pc = 0x183EE0u;
    {
        const bool branch_taken_0x183ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183EE0u;
        // 0x183ee4: 0xa2030236  sb          $v1, 0x236($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 566), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183ee0) {
            ctx->pc = 0x184008u;
            goto label_184008;
        }
    }
    ctx->pc = 0x183EE8u;
label_183ee8:
    // 0x183ee8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x183ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_183eec:
    // 0x183eec: 0xc0524e0  jal         func_149380
label_183ef0:
    if (ctx->pc == 0x183EF0u) {
        ctx->pc = 0x183EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183EECu;
        // 0x183ef0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183EF4u;
        goto label_183ef4;
    }
    ctx->pc = 0x183EECu;
    SET_GPR_U32(ctx, 31, 0x183EF4u);
    ctx->pc = 0x183EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183EECu;
    // 0x183ef0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149380u, 0x183EECu, 0x183EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183EF4u;
label_183ef4:
    // 0x183ef4: 0x92240036  lbu         $a0, 0x36($s1)
    ctx->pc = 0x183ef4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
label_183ef8:
    // 0x183ef8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_183efc:
    if (ctx->pc == 0x183EFCu) {
        ctx->pc = 0x183EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183EF8u;
        // 0x183efc: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183F00u;
        goto label_183f00;
    }
    ctx->pc = 0x183EF8u;
    {
        const bool branch_taken_0x183ef8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x183EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183EF8u;
        // 0x183efc: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183ef8) {
            ctx->pc = 0x183F08u;
            goto label_183f08;
        }
    }
    ctx->pc = 0x183F00u;
label_183f00:
    // 0x183f00: 0x10000041  b           . + 4 + (0x41 << 2)
label_183f04:
    if (ctx->pc == 0x183F04u) {
        ctx->pc = 0x183F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183F00u;
        // 0x183f04: 0xa2000237  sb          $zero, 0x237($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 567), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183F08u;
        goto label_183f08;
    }
    ctx->pc = 0x183F00u;
    {
        const bool branch_taken_0x183f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183F00u;
        // 0x183f04: 0xa2000237  sb          $zero, 0x237($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 567), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183f00) {
            ctx->pc = 0x184008u;
            goto label_184008;
        }
    }
    ctx->pc = 0x183F08u;
label_183f08:
    // 0x183f08: 0x1483003f  bne         $a0, $v1, . + 4 + (0x3F << 2)
label_183f0c:
    if (ctx->pc == 0x183F0Cu) {
        ctx->pc = 0x183F10u;
        goto label_183f10;
    }
    ctx->pc = 0x183F08u;
    {
        const bool branch_taken_0x183f08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x183f08) {
            ctx->pc = 0x184008u;
            goto label_184008;
        }
    }
    ctx->pc = 0x183F10u;
label_183f10:
    // 0x183f10: 0xa2030237  sb          $v1, 0x237($s0)
    ctx->pc = 0x183f10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 567), (uint8_t)GPR_U32(ctx, 3));
label_183f14:
    // 0x183f14: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x183f14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_183f18:
    // 0x183f18: 0x92230034  lbu         $v1, 0x34($s1)
    ctx->pc = 0x183f18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
label_183f1c:
    // 0x183f1c: 0x24a525a9  addiu       $a1, $a1, 0x25A9
    ctx->pc = 0x183f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9641));
label_183f20:
    // 0x183f20: 0x92240038  lbu         $a0, 0x38($s1)
    ctx->pc = 0x183f20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
label_183f24:
    // 0x183f24: 0x38670001  xori        $a3, $v1, 0x1
    ctx->pc = 0x183f24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_183f28:
    // 0x183f28: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x183f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_183f2c:
    // 0x183f2c: 0x73200  sll         $a2, $a3, 8
    ctx->pc = 0x183f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_183f30:
    // 0x183f30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x183f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_183f34:
    // 0x183f34: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x183f34u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_183f38:
    // 0x183f38: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x183f38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_183f3c:
    // 0x183f3c: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x183f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_183f40:
    // 0x183f40: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x183f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_183f44:
    // 0x183f44: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x183f44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_183f48:
    // 0x183f48: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x183f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_183f4c:
    // 0x183f4c: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x183f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_183f50:
    // 0x183f50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x183f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_183f54:
    // 0x183f54: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x183f54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_183f58:
    // 0x183f58: 0x1000002b  b           . + 4 + (0x2B << 2)
label_183f5c:
    if (ctx->pc == 0x183F5Cu) {
        ctx->pc = 0x183F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183F58u;
        // 0x183f5c: 0xa2030236  sb          $v1, 0x236($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 566), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183F60u;
        goto label_183f60;
    }
    ctx->pc = 0x183F58u;
    {
        const bool branch_taken_0x183f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183F58u;
        // 0x183f5c: 0xa2030236  sb          $v1, 0x236($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 566), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183f58) {
            ctx->pc = 0x184008u;
            goto label_184008;
        }
    }
    ctx->pc = 0x183F60u;
label_183f60:
    // 0x183f60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x183f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_183f64:
    // 0x183f64: 0xc05247c  jal         func_1491F0
label_183f68:
    if (ctx->pc == 0x183F68u) {
        ctx->pc = 0x183F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183F64u;
        // 0x183f68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183F6Cu;
        goto label_183f6c;
    }
    ctx->pc = 0x183F64u;
    SET_GPR_U32(ctx, 31, 0x183F6Cu);
    ctx->pc = 0x183F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183F64u;
    // 0x183f68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1491F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1491F0u, 0x183F64u, 0x183F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183F6Cu;
label_183f6c:
    // 0x183f6c: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_183f70:
    if (ctx->pc == 0x183F70u) {
        ctx->pc = 0x183F74u;
        goto label_183f74;
    }
    ctx->pc = 0x183F6Cu;
    {
        const bool branch_taken_0x183f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x183f6c) {
            ctx->pc = 0x184008u;
            goto label_184008;
        }
    }
    ctx->pc = 0x183F74u;
label_183f74:
    // 0x183f74: 0x92260036  lbu         $a2, 0x36($s1)
    ctx->pc = 0x183f74u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
label_183f78:
    // 0x183f78: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x183f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
label_183f7c:
    // 0x183f7c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x183f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_183f80:
    // 0x183f80: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x183f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_183f84:
    // 0x183f84: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x183f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
label_183f88:
    // 0x183f88: 0xa2060237  sb          $a2, 0x237($s0)
    ctx->pc = 0x183f88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 567), (uint8_t)GPR_U32(ctx, 6));
label_183f8c:
    // 0x183f8c: 0xa2050235  sb          $a1, 0x235($s0)
    ctx->pc = 0x183f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 565), (uint8_t)GPR_U32(ctx, 5));
label_183f90:
    // 0x183f90: 0xa204023c  sb          $a0, 0x23C($s0)
    ctx->pc = 0x183f90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 572), (uint8_t)GPR_U32(ctx, 4));
label_183f94:
    // 0x183f94: 0xae030260  sw          $v1, 0x260($s0)
    ctx->pc = 0x183f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 3));
label_183f98:
    // 0x183f98: 0x1000001b  b           . + 4 + (0x1B << 2)
label_183f9c:
    if (ctx->pc == 0x183F9Cu) {
        ctx->pc = 0x183F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183F98u;
        // 0x183f9c: 0xae000264  sw          $zero, 0x264($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183FA0u;
        goto label_183fa0;
    }
    ctx->pc = 0x183F98u;
    {
        const bool branch_taken_0x183f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183F98u;
        // 0x183f9c: 0xae000264  sw          $zero, 0x264($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183f98) {
            ctx->pc = 0x184008u;
            goto label_184008;
        }
    }
    ctx->pc = 0x183FA0u;
label_183fa0:
    // 0x183fa0: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x183fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_183fa4:
    // 0x183fa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_183fa8:
    // 0x183fa8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x183fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_183fac:
    // 0x183fac: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x183facu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_183fb0:
    // 0x183fb0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x183fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_183fb4:
    // 0x183fb4: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x183fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_183fb8:
    // 0x183fb8: 0xc062adc  jal         func_18AB70
label_183fbc:
    if (ctx->pc == 0x183FBCu) {
        ctx->pc = 0x183FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FB8u;
        // 0x183fbc: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x183FC0u;
        goto label_183fc0;
    }
    ctx->pc = 0x183FB8u;
    SET_GPR_U32(ctx, 31, 0x183FC0u);
    ctx->pc = 0x183FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183FB8u;
    // 0x183fbc: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AB70u;
    { ctx->pc = 0x18ab70; return; }
    ctx->pc = 0x183FC0u;
label_183fc0:
    // 0x183fc0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_183fc4:
    if (ctx->pc == 0x183FC4u) {
        ctx->pc = 0x183FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FC0u;
        // 0x183fc4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183FC8u;
        goto label_183fc8;
    }
    ctx->pc = 0x183FC0u;
    {
        const bool branch_taken_0x183fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FC0u;
        // 0x183fc4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183fc0) {
            ctx->pc = 0x183FD0u;
            goto label_183fd0;
        }
    }
    ctx->pc = 0x183FC8u;
label_183fc8:
    // 0x183fc8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x183fc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183fcc:
    // 0x183fcc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x183fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_183fd0:
    // 0x183fd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x183fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_183fd4:
    // 0x183fd4: 0xc052408  jal         func_149020
label_183fd8:
    if (ctx->pc == 0x183FD8u) {
        ctx->pc = 0x183FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FD4u;
        // 0x183fd8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183FDCu;
        goto label_183fdc;
    }
    ctx->pc = 0x183FD4u;
    SET_GPR_U32(ctx, 31, 0x183FDCu);
    ctx->pc = 0x183FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183FD4u;
    // 0x183fd8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149020u, 0x183FD4u, 0x183FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183FDCu;
label_183fdc:
    // 0x183fdc: 0x92230036  lbu         $v1, 0x36($s1)
    ctx->pc = 0x183fdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
label_183fe0:
    // 0x183fe0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_183fe4:
    if (ctx->pc == 0x183FE4u) {
        ctx->pc = 0x183FE8u;
        goto label_183fe8;
    }
    ctx->pc = 0x183FE0u;
    {
        const bool branch_taken_0x183fe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x183fe0) {
            ctx->pc = 0x184008u;
            goto label_184008;
        }
    }
    ctx->pc = 0x183FE8u;
label_183fe8:
    // 0x183fe8: 0x10000007  b           . + 4 + (0x7 << 2)
label_183fec:
    if (ctx->pc == 0x183FECu) {
        ctx->pc = 0x183FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FE8u;
        // 0x183fec: 0xa2000237  sb          $zero, 0x237($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 567), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183FF0u;
        goto label_183ff0;
    }
    ctx->pc = 0x183FE8u;
    {
        const bool branch_taken_0x183fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FE8u;
        // 0x183fec: 0xa2000237  sb          $zero, 0x237($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 567), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183fe8) {
            ctx->pc = 0x184008u;
            goto label_184008;
        }
    }
    ctx->pc = 0x183FF0u;
label_183ff0:
    // 0x183ff0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x183ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_183ff4:
    // 0x183ff4: 0xc062a80  jal         func_18AA00
label_183ff8:
    if (ctx->pc == 0x183FF8u) {
        ctx->pc = 0x183FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FF4u;
        // 0x183ff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183FFCu;
        goto label_183ffc;
    }
    ctx->pc = 0x183FF4u;
    SET_GPR_U32(ctx, 31, 0x183FFCu);
    ctx->pc = 0x183FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183FF4u;
    // 0x183ff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AA00u;
    { ctx->pc = 0x18aa00; return; }
    ctx->pc = 0x183FFCu;
label_183ffc:
    // 0x183ffc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x183ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184000:
    // 0x184000: 0xc0523a4  jal         func_148E90
label_184004:
    if (ctx->pc == 0x184004u) {
        ctx->pc = 0x184004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184000u;
        // 0x184004: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184008u;
        goto label_184008;
    }
    ctx->pc = 0x184000u;
    SET_GPR_U32(ctx, 31, 0x184008u);
    ctx->pc = 0x184004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184000u;
    // 0x184004: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148E90u, 0x184000u, 0x184008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184008u;
label_184008:
    // 0x184008: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x184008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18400c:
    // 0x18400c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18400cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_184010:
    // 0x184010: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x184010u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_184014:
    // 0x184014: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x184014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_184018:
    // 0x184018: 0x3e00008  jr          $ra
label_18401c:
    if (ctx->pc == 0x18401Cu) {
        ctx->pc = 0x18401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184018u;
        // 0x18401c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184020u;
        goto label_184020;
    }
    ctx->pc = 0x184018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184018u;
        // 0x18401c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184020u;
label_184020:
    // 0x184020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x184020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_184024:
    // 0x184024: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x184024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_184028:
    // 0x184028: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x184028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18402c:
    // 0x18402c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18402cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_184030:
    // 0x184030: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x184030u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_184034:
    // 0x184034: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x184034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_184038:
    // 0x184038: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x184038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18403c:
    // 0x18403c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x18403cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_184040:
    // 0x184040: 0xc05247c  jal         func_1491F0
label_184044:
    if (ctx->pc == 0x184044u) {
        ctx->pc = 0x184044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184040u;
        // 0x184044: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184048u;
        goto label_184048;
    }
    ctx->pc = 0x184040u;
    SET_GPR_U32(ctx, 31, 0x184048u);
    ctx->pc = 0x184044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184040u;
    // 0x184044: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1491F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1491F0u, 0x184040u, 0x184048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184048u;
label_184048:
    // 0x184048: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_18404c:
    if (ctx->pc == 0x18404Cu) {
        ctx->pc = 0x184050u;
        goto label_184050;
    }
    ctx->pc = 0x184048u;
    {
        const bool branch_taken_0x184048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184048) {
            ctx->pc = 0x184088u;
            goto label_184088;
        }
    }
    ctx->pc = 0x184050u;
label_184050:
    // 0x184050: 0x92230237  lbu         $v1, 0x237($s1)
    ctx->pc = 0x184050u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 567)));
label_184054:
    // 0x184054: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x184054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_184058:
    // 0x184058: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_18405c:
    if (ctx->pc == 0x18405Cu) {
        ctx->pc = 0x18405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184058u;
        // 0x18405c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184060u;
        goto label_184060;
    }
    ctx->pc = 0x184058u;
    {
        const bool branch_taken_0x184058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184058u;
        // 0x18405c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184058) {
            ctx->pc = 0x184078u;
            goto label_184078;
        }
    }
    ctx->pc = 0x184060u;
label_184060:
    // 0x184060: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x184060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_184064:
    // 0x184064: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x184064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184068:
    // 0x184068: 0xc061108  jal         func_184420
label_18406c:
    if (ctx->pc == 0x18406Cu) {
        ctx->pc = 0x18406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184068u;
        // 0x18406c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184070u;
        goto label_184070;
    }
    ctx->pc = 0x184068u;
    SET_GPR_U32(ctx, 31, 0x184070u);
    ctx->pc = 0x18406Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184068u;
    // 0x18406c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184420u;
    { ctx->pc = 0x184420; return; }
    ctx->pc = 0x184070u;
label_184070:
    // 0x184070: 0x1000005f  b           . + 4 + (0x5F << 2)
label_184074:
    if (ctx->pc == 0x184074u) {
        ctx->pc = 0x184074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184070u;
        // 0x184074: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184078u;
        goto label_184078;
    }
    ctx->pc = 0x184070u;
    {
        const bool branch_taken_0x184070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184070u;
        // 0x184074: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184070) {
            ctx->pc = 0x1841F0u;
            { ctx->pc = 0x1841f0; return; }
        }
    }
    ctx->pc = 0x184078u;
label_184078:
    // 0x184078: 0xc061084  jal         func_184210
label_18407c:
    if (ctx->pc == 0x18407Cu) {
        ctx->pc = 0x18407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184078u;
        // 0x18407c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184080u;
        goto label_184080;
    }
    ctx->pc = 0x184078u;
    SET_GPR_U32(ctx, 31, 0x184080u);
    ctx->pc = 0x18407Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184078u;
    // 0x18407c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184210u;
    { ctx->pc = 0x184210; return; }
    ctx->pc = 0x184080u;
label_184080:
    // 0x184080: 0x1000005a  b           . + 4 + (0x5A << 2)
label_184084:
    if (ctx->pc == 0x184084u) {
        ctx->pc = 0x184088u;
        goto label_184088;
    }
    ctx->pc = 0x184080u;
    {
        const bool branch_taken_0x184080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184080) {
            ctx->pc = 0x1841ECu;
            { ctx->pc = 0x1841ec; return; }
        }
    }
    ctx->pc = 0x184088u;
label_184088:
    // 0x184088: 0x92460036  lbu         $a2, 0x36($s2)
    ctx->pc = 0x184088u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
label_18408c:
    // 0x18408c: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x18408cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
label_184090:
    // 0x184090: 0x34432400  ori         $v1, $v0, 0x2400
    ctx->pc = 0x184090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
label_184094:
    // 0x184094: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x184094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_184098:
    // 0x184098: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x184098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18409c:
    // 0x18409c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18409cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1840a0:
    // 0x1840a0: 0xa2260237  sb          $a2, 0x237($s1)
    ctx->pc = 0x1840a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 567), (uint8_t)GPR_U32(ctx, 6));
label_1840a4:
    // 0x1840a4: 0xa2250235  sb          $a1, 0x235($s1)
    ctx->pc = 0x1840a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 565), (uint8_t)GPR_U32(ctx, 5));
label_1840a8:
    // 0x1840a8: 0xa224023c  sb          $a0, 0x23C($s1)
    ctx->pc = 0x1840a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 572), (uint8_t)GPR_U32(ctx, 4));
label_1840ac:
    // 0x1840ac: 0xae230260  sw          $v1, 0x260($s1)
    ctx->pc = 0x1840acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 3));
label_1840b0:
    // 0x1840b0: 0xae200264  sw          $zero, 0x264($s1)
    ctx->pc = 0x1840b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 0));
label_1840b4:
    // 0x1840b4: 0x92430036  lbu         $v1, 0x36($s2)
    ctx->pc = 0x1840b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
label_1840b8:
    // 0x1840b8: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
label_1840bc:
    if (ctx->pc == 0x1840BCu) {
        ctx->pc = 0x1840C0u;
        goto label_1840c0;
    }
    ctx->pc = 0x1840B8u;
    {
        const bool branch_taken_0x1840b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1840b8) {
            ctx->pc = 0x184118u;
            goto label_184118;
        }
    }
    ctx->pc = 0x1840C0u;
label_1840c0:
    // 0x1840c0: 0x92420034  lbu         $v0, 0x34($s2)
    ctx->pc = 0x1840c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
label_1840c4:
    // 0x1840c4: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x1840c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_1840c8:
    // 0x1840c8: 0x92430038  lbu         $v1, 0x38($s2)
    ctx->pc = 0x1840c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 56)));
label_1840cc:
    // 0x1840cc: 0xc62c0044  lwc1        $f12, 0x44($s1)
    ctx->pc = 0x1840ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1840d0:
    // 0x1840d0: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x1840d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
label_1840d4:
    // 0x1840d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1840d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1840d8:
    // 0x1840d8: 0x38470001  xori        $a3, $v0, 0x1
    ctx->pc = 0x1840d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1840dc:
    // 0x1840dc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1840dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1840e0:
    // 0x1840e0: 0x73200  sll         $a2, $a3, 8
    ctx->pc = 0x1840e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1840e4:
    // 0x1840e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1840e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1840e8:
    // 0x1840e8: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x1840e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1840ec:
    // 0x1840ec: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1840ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1840f0:
    // 0x1840f0: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1840f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1840f4:
    // 0x1840f4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1840f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1840f8:
    // 0x1840f8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1840f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1840fc:
    // 0x1840fc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1840fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_184100:
    // 0x184100: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x184100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_184104:
    // 0x184104: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x184104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_184108:
    // 0x184108: 0xc062900  jal         func_18A400
label_18410c:
    if (ctx->pc == 0x18410Cu) {
        ctx->pc = 0x18410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184108u;
        // 0x18410c: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184110u;
        goto label_184110;
    }
    ctx->pc = 0x184108u;
    SET_GPR_U32(ctx, 31, 0x184110u);
    ctx->pc = 0x18410Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184108u;
    // 0x18410c: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A400u;
    { ctx->pc = 0x18a400; return; }
    ctx->pc = 0x184110u;
label_184110:
    // 0x184110: 0x10000036  b           . + 4 + (0x36 << 2)
label_184114:
    if (ctx->pc == 0x184114u) {
        ctx->pc = 0x184118u;
        goto label_184118;
    }
    ctx->pc = 0x184110u;
    {
        const bool branch_taken_0x184110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184110) {
            ctx->pc = 0x1841ECu;
            { ctx->pc = 0x1841ec; return; }
        }
    }
    ctx->pc = 0x184118u;
label_184118:
    // 0x184118: 0x92420020  lbu         $v0, 0x20($s2)
    ctx->pc = 0x184118u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
label_18411c:
    // 0x18411c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_184120:
    if (ctx->pc == 0x184120u) {
        ctx->pc = 0x184120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18411Cu;
        // 0x184120: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184124u;
        goto label_184124;
    }
    ctx->pc = 0x18411Cu;
    {
        const bool branch_taken_0x18411c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x184120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18411Cu;
        // 0x184120: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18411c) {
            ctx->pc = 0x184130u;
            goto label_184130;
        }
    }
    ctx->pc = 0x184124u;
label_184124:
    // 0x184124: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x184124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_184128:
    // 0x184128: 0x10000007  b           . + 4 + (0x7 << 2)
label_18412c:
    if (ctx->pc == 0x18412Cu) {
        ctx->pc = 0x18412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184128u;
        // 0x18412c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x184130u;
        goto label_184130;
    }
    ctx->pc = 0x184128u;
    {
        const bool branch_taken_0x184128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184128u;
        // 0x18412c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x184128) {
            ctx->pc = 0x184148u;
            goto label_184148;
        }
    }
    ctx->pc = 0x184130u;
label_184130:
    // 0x184130: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x184130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_184134:
    // 0x184134: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x184134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_184138:
    // 0x184138: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x184138u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18413c:
    // 0x18413c: 0x0  nop
    ctx->pc = 0x18413cu;
    // NOP
label_184140:
    // 0x184140: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x184140u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_184144:
    // 0x184144: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x184144u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_184148:
    // 0x184148: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x184148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
label_18414c:
    // 0x18414c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18414cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_184150:
    // 0x184150: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x184150u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_184154:
    // 0x184154: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x184154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_184158:
    // 0x184158: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x184158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18415c:
    // 0x18415c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18415cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_184160:
    // 0x184160: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x184160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184164:
    // 0x184164: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x184164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_184168:
    // 0x184168: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x184168u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_18416c:
    // 0x18416c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18416cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x184170u;
    return;
}

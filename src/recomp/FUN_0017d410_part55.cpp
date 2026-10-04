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


void FUN_0017d410_part55(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1979f0u: goto label_1979f0;
        case 0x1979f4u: goto label_1979f4;
        case 0x1979f8u: goto label_1979f8;
        case 0x1979fcu: goto label_1979fc;
        case 0x197a00u: goto label_197a00;
        case 0x197a04u: goto label_197a04;
        case 0x197a08u: goto label_197a08;
        case 0x197a0cu: goto label_197a0c;
        case 0x197a10u: goto label_197a10;
        case 0x197a14u: goto label_197a14;
        case 0x197a18u: goto label_197a18;
        case 0x197a1cu: goto label_197a1c;
        case 0x197a20u: goto label_197a20;
        case 0x197a24u: goto label_197a24;
        case 0x197a28u: goto label_197a28;
        case 0x197a2cu: goto label_197a2c;
        case 0x197a30u: goto label_197a30;
        case 0x197a34u: goto label_197a34;
        case 0x197a38u: goto label_197a38;
        case 0x197a3cu: goto label_197a3c;
        case 0x197a40u: goto label_197a40;
        case 0x197a44u: goto label_197a44;
        case 0x197a48u: goto label_197a48;
        case 0x197a4cu: goto label_197a4c;
        case 0x197a50u: goto label_197a50;
        case 0x197a54u: goto label_197a54;
        case 0x197a58u: goto label_197a58;
        case 0x197a5cu: goto label_197a5c;
        case 0x197a60u: goto label_197a60;
        case 0x197a64u: goto label_197a64;
        case 0x197a68u: goto label_197a68;
        case 0x197a6cu: goto label_197a6c;
        case 0x197a70u: goto label_197a70;
        case 0x197a74u: goto label_197a74;
        case 0x197a78u: goto label_197a78;
        case 0x197a7cu: goto label_197a7c;
        case 0x197a80u: goto label_197a80;
        case 0x197a84u: goto label_197a84;
        case 0x197a88u: goto label_197a88;
        case 0x197a8cu: goto label_197a8c;
        case 0x197a90u: goto label_197a90;
        case 0x197a94u: goto label_197a94;
        case 0x197a98u: goto label_197a98;
        case 0x197a9cu: goto label_197a9c;
        case 0x197aa0u: goto label_197aa0;
        case 0x197aa4u: goto label_197aa4;
        case 0x197aa8u: goto label_197aa8;
        case 0x197aacu: goto label_197aac;
        case 0x197ab0u: goto label_197ab0;
        case 0x197ab4u: goto label_197ab4;
        case 0x197ab8u: goto label_197ab8;
        case 0x197abcu: goto label_197abc;
        case 0x197ac0u: goto label_197ac0;
        case 0x197ac4u: goto label_197ac4;
        case 0x197ac8u: goto label_197ac8;
        case 0x197accu: goto label_197acc;
        case 0x197ad0u: goto label_197ad0;
        case 0x197ad4u: goto label_197ad4;
        case 0x197ad8u: goto label_197ad8;
        case 0x197adcu: goto label_197adc;
        case 0x197ae0u: goto label_197ae0;
        case 0x197ae4u: goto label_197ae4;
        case 0x197ae8u: goto label_197ae8;
        case 0x197aecu: goto label_197aec;
        case 0x197af0u: goto label_197af0;
        case 0x197af4u: goto label_197af4;
        case 0x197af8u: goto label_197af8;
        case 0x197afcu: goto label_197afc;
        case 0x197b00u: goto label_197b00;
        case 0x197b04u: goto label_197b04;
        case 0x197b08u: goto label_197b08;
        case 0x197b0cu: goto label_197b0c;
        case 0x197b10u: goto label_197b10;
        case 0x197b14u: goto label_197b14;
        case 0x197b18u: goto label_197b18;
        case 0x197b1cu: goto label_197b1c;
        case 0x197b20u: goto label_197b20;
        case 0x197b24u: goto label_197b24;
        case 0x197b28u: goto label_197b28;
        case 0x197b2cu: goto label_197b2c;
        case 0x197b30u: goto label_197b30;
        case 0x197b34u: goto label_197b34;
        case 0x197b38u: goto label_197b38;
        case 0x197b3cu: goto label_197b3c;
        case 0x197b40u: goto label_197b40;
        case 0x197b44u: goto label_197b44;
        case 0x197b48u: goto label_197b48;
        case 0x197b4cu: goto label_197b4c;
        case 0x197b50u: goto label_197b50;
        case 0x197b54u: goto label_197b54;
        case 0x197b58u: goto label_197b58;
        case 0x197b5cu: goto label_197b5c;
        case 0x197b60u: goto label_197b60;
        case 0x197b64u: goto label_197b64;
        case 0x197b68u: goto label_197b68;
        case 0x197b6cu: goto label_197b6c;
        case 0x197b70u: goto label_197b70;
        case 0x197b74u: goto label_197b74;
        case 0x197b78u: goto label_197b78;
        case 0x197b7cu: goto label_197b7c;
        case 0x197b80u: goto label_197b80;
        case 0x197b84u: goto label_197b84;
        case 0x197b88u: goto label_197b88;
        case 0x197b8cu: goto label_197b8c;
        case 0x197b90u: goto label_197b90;
        case 0x197b94u: goto label_197b94;
        case 0x197b98u: goto label_197b98;
        case 0x197b9cu: goto label_197b9c;
        case 0x197ba0u: goto label_197ba0;
        case 0x197ba4u: goto label_197ba4;
        case 0x197ba8u: goto label_197ba8;
        case 0x197bacu: goto label_197bac;
        case 0x197bb0u: goto label_197bb0;
        case 0x197bb4u: goto label_197bb4;
        case 0x197bb8u: goto label_197bb8;
        case 0x197bbcu: goto label_197bbc;
        case 0x197bc0u: goto label_197bc0;
        case 0x197bc4u: goto label_197bc4;
        case 0x197bc8u: goto label_197bc8;
        case 0x197bccu: goto label_197bcc;
        case 0x197bd0u: goto label_197bd0;
        case 0x197bd4u: goto label_197bd4;
        case 0x197bd8u: goto label_197bd8;
        case 0x197bdcu: goto label_197bdc;
        case 0x197be0u: goto label_197be0;
        case 0x197be4u: goto label_197be4;
        case 0x197be8u: goto label_197be8;
        case 0x197becu: goto label_197bec;
        case 0x197bf0u: goto label_197bf0;
        case 0x197bf4u: goto label_197bf4;
        case 0x197bf8u: goto label_197bf8;
        case 0x197bfcu: goto label_197bfc;
        case 0x197c00u: goto label_197c00;
        case 0x197c04u: goto label_197c04;
        case 0x197c08u: goto label_197c08;
        case 0x197c0cu: goto label_197c0c;
        case 0x197c10u: goto label_197c10;
        case 0x197c14u: goto label_197c14;
        case 0x197c18u: goto label_197c18;
        case 0x197c1cu: goto label_197c1c;
        case 0x197c20u: goto label_197c20;
        case 0x197c24u: goto label_197c24;
        case 0x197c28u: goto label_197c28;
        case 0x197c2cu: goto label_197c2c;
        case 0x197c30u: goto label_197c30;
        case 0x197c34u: goto label_197c34;
        case 0x197c38u: goto label_197c38;
        case 0x197c3cu: goto label_197c3c;
        case 0x197c40u: goto label_197c40;
        case 0x197c44u: goto label_197c44;
        case 0x197c48u: goto label_197c48;
        case 0x197c4cu: goto label_197c4c;
        case 0x197c50u: goto label_197c50;
        case 0x197c54u: goto label_197c54;
        case 0x197c58u: goto label_197c58;
        case 0x197c5cu: goto label_197c5c;
        case 0x197c60u: goto label_197c60;
        case 0x197c64u: goto label_197c64;
        case 0x197c68u: goto label_197c68;
        case 0x197c6cu: goto label_197c6c;
        case 0x197c70u: goto label_197c70;
        case 0x197c74u: goto label_197c74;
        case 0x197c78u: goto label_197c78;
        case 0x197c7cu: goto label_197c7c;
        case 0x197c80u: goto label_197c80;
        case 0x197c84u: goto label_197c84;
        case 0x197c88u: goto label_197c88;
        case 0x197c8cu: goto label_197c8c;
        case 0x197c90u: goto label_197c90;
        case 0x197c94u: goto label_197c94;
        case 0x197c98u: goto label_197c98;
        case 0x197c9cu: goto label_197c9c;
        case 0x197ca0u: goto label_197ca0;
        case 0x197ca4u: goto label_197ca4;
        case 0x197ca8u: goto label_197ca8;
        case 0x197cacu: goto label_197cac;
        case 0x197cb0u: goto label_197cb0;
        case 0x197cb4u: goto label_197cb4;
        case 0x197cb8u: goto label_197cb8;
        case 0x197cbcu: goto label_197cbc;
        case 0x197cc0u: goto label_197cc0;
        case 0x197cc4u: goto label_197cc4;
        case 0x197cc8u: goto label_197cc8;
        case 0x197cccu: goto label_197ccc;
        case 0x197cd0u: goto label_197cd0;
        case 0x197cd4u: goto label_197cd4;
        case 0x197cd8u: goto label_197cd8;
        case 0x197cdcu: goto label_197cdc;
        case 0x197ce0u: goto label_197ce0;
        case 0x197ce4u: goto label_197ce4;
        case 0x197ce8u: goto label_197ce8;
        case 0x197cecu: goto label_197cec;
        case 0x197cf0u: goto label_197cf0;
        case 0x197cf4u: goto label_197cf4;
        case 0x197cf8u: goto label_197cf8;
        case 0x197cfcu: goto label_197cfc;
        case 0x197d00u: goto label_197d00;
        case 0x197d04u: goto label_197d04;
        case 0x197d08u: goto label_197d08;
        case 0x197d0cu: goto label_197d0c;
        case 0x197d10u: goto label_197d10;
        case 0x197d14u: goto label_197d14;
        case 0x197d18u: goto label_197d18;
        case 0x197d1cu: goto label_197d1c;
        case 0x197d20u: goto label_197d20;
        case 0x197d24u: goto label_197d24;
        case 0x197d28u: goto label_197d28;
        case 0x197d2cu: goto label_197d2c;
        case 0x197d30u: goto label_197d30;
        case 0x197d34u: goto label_197d34;
        case 0x197d38u: goto label_197d38;
        case 0x197d3cu: goto label_197d3c;
        case 0x197d40u: goto label_197d40;
        case 0x197d44u: goto label_197d44;
        case 0x197d48u: goto label_197d48;
        case 0x197d4cu: goto label_197d4c;
        case 0x197d50u: goto label_197d50;
        case 0x197d54u: goto label_197d54;
        case 0x197d58u: goto label_197d58;
        case 0x197d5cu: goto label_197d5c;
        case 0x197d60u: goto label_197d60;
        case 0x197d64u: goto label_197d64;
        case 0x197d68u: goto label_197d68;
        case 0x197d6cu: goto label_197d6c;
        case 0x197d70u: goto label_197d70;
        case 0x197d74u: goto label_197d74;
        case 0x197d78u: goto label_197d78;
        case 0x197d7cu: goto label_197d7c;
        case 0x197d80u: goto label_197d80;
        case 0x197d84u: goto label_197d84;
        case 0x197d88u: goto label_197d88;
        case 0x197d8cu: goto label_197d8c;
        case 0x197d90u: goto label_197d90;
        case 0x197d94u: goto label_197d94;
        case 0x197d98u: goto label_197d98;
        case 0x197d9cu: goto label_197d9c;
        case 0x197da0u: goto label_197da0;
        case 0x197da4u: goto label_197da4;
        case 0x197da8u: goto label_197da8;
        case 0x197dacu: goto label_197dac;
        case 0x197db0u: goto label_197db0;
        case 0x197db4u: goto label_197db4;
        case 0x197db8u: goto label_197db8;
        case 0x197dbcu: goto label_197dbc;
        case 0x197dc0u: goto label_197dc0;
        case 0x197dc4u: goto label_197dc4;
        case 0x197dc8u: goto label_197dc8;
        case 0x197dccu: goto label_197dcc;
        case 0x197dd0u: goto label_197dd0;
        case 0x197dd4u: goto label_197dd4;
        case 0x197dd8u: goto label_197dd8;
        case 0x197ddcu: goto label_197ddc;
        case 0x197de0u: goto label_197de0;
        case 0x197de4u: goto label_197de4;
        case 0x197de8u: goto label_197de8;
        case 0x197decu: goto label_197dec;
        case 0x197df0u: goto label_197df0;
        case 0x197df4u: goto label_197df4;
        case 0x197df8u: goto label_197df8;
        case 0x197dfcu: goto label_197dfc;
        case 0x197e00u: goto label_197e00;
        case 0x197e04u: goto label_197e04;
        case 0x197e08u: goto label_197e08;
        case 0x197e0cu: goto label_197e0c;
        case 0x197e10u: goto label_197e10;
        case 0x197e14u: goto label_197e14;
        case 0x197e18u: goto label_197e18;
        case 0x197e1cu: goto label_197e1c;
        case 0x197e20u: goto label_197e20;
        case 0x197e24u: goto label_197e24;
        case 0x197e28u: goto label_197e28;
        case 0x197e2cu: goto label_197e2c;
        case 0x197e30u: goto label_197e30;
        case 0x197e34u: goto label_197e34;
        case 0x197e38u: goto label_197e38;
        case 0x197e3cu: goto label_197e3c;
        case 0x197e40u: goto label_197e40;
        case 0x197e44u: goto label_197e44;
        case 0x197e48u: goto label_197e48;
        case 0x197e4cu: goto label_197e4c;
        case 0x197e50u: goto label_197e50;
        case 0x197e54u: goto label_197e54;
        case 0x197e58u: goto label_197e58;
        case 0x197e5cu: goto label_197e5c;
        case 0x197e60u: goto label_197e60;
        case 0x197e64u: goto label_197e64;
        case 0x197e68u: goto label_197e68;
        case 0x197e6cu: goto label_197e6c;
        case 0x197e70u: goto label_197e70;
        case 0x197e74u: goto label_197e74;
        case 0x197e78u: goto label_197e78;
        case 0x197e7cu: goto label_197e7c;
        case 0x197e80u: goto label_197e80;
        case 0x197e84u: goto label_197e84;
        case 0x197e88u: goto label_197e88;
        case 0x197e8cu: goto label_197e8c;
        case 0x197e90u: goto label_197e90;
        case 0x197e94u: goto label_197e94;
        case 0x197e98u: goto label_197e98;
        case 0x197e9cu: goto label_197e9c;
        case 0x197ea0u: goto label_197ea0;
        case 0x197ea4u: goto label_197ea4;
        case 0x197ea8u: goto label_197ea8;
        case 0x197eacu: goto label_197eac;
        case 0x197eb0u: goto label_197eb0;
        case 0x197eb4u: goto label_197eb4;
        case 0x197eb8u: goto label_197eb8;
        case 0x197ebcu: goto label_197ebc;
        case 0x197ec0u: goto label_197ec0;
        case 0x197ec4u: goto label_197ec4;
        case 0x197ec8u: goto label_197ec8;
        case 0x197eccu: goto label_197ecc;
        case 0x197ed0u: goto label_197ed0;
        case 0x197ed4u: goto label_197ed4;
        case 0x197ed8u: goto label_197ed8;
        case 0x197edcu: goto label_197edc;
        case 0x197ee0u: goto label_197ee0;
        case 0x197ee4u: goto label_197ee4;
        case 0x197ee8u: goto label_197ee8;
        case 0x197eecu: goto label_197eec;
        case 0x197ef0u: goto label_197ef0;
        case 0x197ef4u: goto label_197ef4;
        case 0x197ef8u: goto label_197ef8;
        case 0x197efcu: goto label_197efc;
        case 0x197f00u: goto label_197f00;
        case 0x197f04u: goto label_197f04;
        case 0x197f08u: goto label_197f08;
        case 0x197f0cu: goto label_197f0c;
        case 0x197f10u: goto label_197f10;
        case 0x197f14u: goto label_197f14;
        case 0x197f18u: goto label_197f18;
        case 0x197f1cu: goto label_197f1c;
        case 0x197f20u: goto label_197f20;
        case 0x197f24u: goto label_197f24;
        case 0x197f28u: goto label_197f28;
        case 0x197f2cu: goto label_197f2c;
        case 0x197f30u: goto label_197f30;
        case 0x197f34u: goto label_197f34;
        case 0x197f38u: goto label_197f38;
        case 0x197f3cu: goto label_197f3c;
        case 0x197f40u: goto label_197f40;
        case 0x197f44u: goto label_197f44;
        case 0x197f48u: goto label_197f48;
        case 0x197f4cu: goto label_197f4c;
        case 0x197f50u: goto label_197f50;
        case 0x197f54u: goto label_197f54;
        case 0x197f58u: goto label_197f58;
        case 0x197f5cu: goto label_197f5c;
        case 0x197f60u: goto label_197f60;
        case 0x197f64u: goto label_197f64;
        case 0x197f68u: goto label_197f68;
        case 0x197f6cu: goto label_197f6c;
        case 0x197f70u: goto label_197f70;
        case 0x197f74u: goto label_197f74;
        case 0x197f78u: goto label_197f78;
        case 0x197f7cu: goto label_197f7c;
        case 0x197f80u: goto label_197f80;
        case 0x197f84u: goto label_197f84;
        case 0x197f88u: goto label_197f88;
        case 0x197f8cu: goto label_197f8c;
        case 0x197f90u: goto label_197f90;
        case 0x197f94u: goto label_197f94;
        case 0x197f98u: goto label_197f98;
        case 0x197f9cu: goto label_197f9c;
        case 0x197fa0u: goto label_197fa0;
        case 0x197fa4u: goto label_197fa4;
        case 0x197fa8u: goto label_197fa8;
        case 0x197facu: goto label_197fac;
        case 0x197fb0u: goto label_197fb0;
        case 0x197fb4u: goto label_197fb4;
        case 0x197fb8u: goto label_197fb8;
        case 0x197fbcu: goto label_197fbc;
        case 0x197fc0u: goto label_197fc0;
        case 0x197fc4u: goto label_197fc4;
        case 0x197fc8u: goto label_197fc8;
        case 0x197fccu: goto label_197fcc;
        case 0x197fd0u: goto label_197fd0;
        case 0x197fd4u: goto label_197fd4;
        case 0x197fd8u: goto label_197fd8;
        case 0x197fdcu: goto label_197fdc;
        case 0x197fe0u: goto label_197fe0;
        case 0x197fe4u: goto label_197fe4;
        case 0x197fe8u: goto label_197fe8;
        case 0x197fecu: goto label_197fec;
        case 0x197ff0u: goto label_197ff0;
        case 0x197ff4u: goto label_197ff4;
        case 0x197ff8u: goto label_197ff8;
        case 0x197ffcu: goto label_197ffc;
        case 0x198000u: goto label_198000;
        case 0x198004u: goto label_198004;
        case 0x198008u: goto label_198008;
        case 0x19800cu: goto label_19800c;
        case 0x198010u: goto label_198010;
        case 0x198014u: goto label_198014;
        case 0x198018u: goto label_198018;
        case 0x19801cu: goto label_19801c;
        case 0x198020u: goto label_198020;
        case 0x198024u: goto label_198024;
        case 0x198028u: goto label_198028;
        case 0x19802cu: goto label_19802c;
        case 0x198030u: goto label_198030;
        case 0x198034u: goto label_198034;
        case 0x198038u: goto label_198038;
        case 0x19803cu: goto label_19803c;
        case 0x198040u: goto label_198040;
        case 0x198044u: goto label_198044;
        case 0x198048u: goto label_198048;
        case 0x19804cu: goto label_19804c;
        case 0x198050u: goto label_198050;
        case 0x198054u: goto label_198054;
        case 0x198058u: goto label_198058;
        case 0x19805cu: goto label_19805c;
        case 0x198060u: goto label_198060;
        case 0x198064u: goto label_198064;
        case 0x198068u: goto label_198068;
        case 0x19806cu: goto label_19806c;
        case 0x198070u: goto label_198070;
        case 0x198074u: goto label_198074;
        case 0x198078u: goto label_198078;
        case 0x19807cu: goto label_19807c;
        case 0x198080u: goto label_198080;
        case 0x198084u: goto label_198084;
        case 0x198088u: goto label_198088;
        case 0x19808cu: goto label_19808c;
        case 0x198090u: goto label_198090;
        case 0x198094u: goto label_198094;
        case 0x198098u: goto label_198098;
        case 0x19809cu: goto label_19809c;
        case 0x1980a0u: goto label_1980a0;
        case 0x1980a4u: goto label_1980a4;
        case 0x1980a8u: goto label_1980a8;
        case 0x1980acu: goto label_1980ac;
        case 0x1980b0u: goto label_1980b0;
        case 0x1980b4u: goto label_1980b4;
        case 0x1980b8u: goto label_1980b8;
        case 0x1980bcu: goto label_1980bc;
        case 0x1980c0u: goto label_1980c0;
        case 0x1980c4u: goto label_1980c4;
        case 0x1980c8u: goto label_1980c8;
        case 0x1980ccu: goto label_1980cc;
        case 0x1980d0u: goto label_1980d0;
        case 0x1980d4u: goto label_1980d4;
        case 0x1980d8u: goto label_1980d8;
        case 0x1980dcu: goto label_1980dc;
        case 0x1980e0u: goto label_1980e0;
        case 0x1980e4u: goto label_1980e4;
        case 0x1980e8u: goto label_1980e8;
        case 0x1980ecu: goto label_1980ec;
        case 0x1980f0u: goto label_1980f0;
        case 0x1980f4u: goto label_1980f4;
        case 0x1980f8u: goto label_1980f8;
        case 0x1980fcu: goto label_1980fc;
        case 0x198100u: goto label_198100;
        case 0x198104u: goto label_198104;
        case 0x198108u: goto label_198108;
        case 0x19810cu: goto label_19810c;
        case 0x198110u: goto label_198110;
        case 0x198114u: goto label_198114;
        case 0x198118u: goto label_198118;
        case 0x19811cu: goto label_19811c;
        case 0x198120u: goto label_198120;
        case 0x198124u: goto label_198124;
        case 0x198128u: goto label_198128;
        case 0x19812cu: goto label_19812c;
        case 0x198130u: goto label_198130;
        case 0x198134u: goto label_198134;
        case 0x198138u: goto label_198138;
        case 0x19813cu: goto label_19813c;
        case 0x198140u: goto label_198140;
        case 0x198144u: goto label_198144;
        case 0x198148u: goto label_198148;
        case 0x19814cu: goto label_19814c;
        case 0x198150u: goto label_198150;
        case 0x198154u: goto label_198154;
        case 0x198158u: goto label_198158;
        case 0x19815cu: goto label_19815c;
        case 0x198160u: goto label_198160;
        case 0x198164u: goto label_198164;
        case 0x198168u: goto label_198168;
        case 0x19816cu: goto label_19816c;
        case 0x198170u: goto label_198170;
        case 0x198174u: goto label_198174;
        case 0x198178u: goto label_198178;
        case 0x19817cu: goto label_19817c;
        case 0x198180u: goto label_198180;
        case 0x198184u: goto label_198184;
        case 0x198188u: goto label_198188;
        case 0x19818cu: goto label_19818c;
        case 0x198190u: goto label_198190;
        case 0x198194u: goto label_198194;
        case 0x198198u: goto label_198198;
        case 0x19819cu: goto label_19819c;
        case 0x1981a0u: goto label_1981a0;
        case 0x1981a4u: goto label_1981a4;
        case 0x1981a8u: goto label_1981a8;
        case 0x1981acu: goto label_1981ac;
        case 0x1981b0u: goto label_1981b0;
        case 0x1981b4u: goto label_1981b4;
        case 0x1981b8u: goto label_1981b8;
        case 0x1981bcu: goto label_1981bc;
        default: return;
    }

label_1979f0:
    if (ctx->pc == 0x1979F0u) {
        ctx->pc = 0x1979F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1979ECu;
        // 0x1979f0: 0x3c03002d  lui         $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1979F4u;
        goto label_1979f4;
    }
    ctx->pc = 0x1979ECu;
    {
        const bool branch_taken_0x1979ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1979F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1979ECu;
        // 0x1979f0: 0x3c03002d  lui         $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1979ec) {
            ctx->pc = 0x197C18u;
            goto label_197c18;
        }
    }
    ctx->pc = 0x1979F4u;
label_1979f4:
    // 0x1979f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1979f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1979f8:
    // 0x1979f8: 0x246399d0  addiu       $v1, $v1, -0x6630
    ctx->pc = 0x1979f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941136));
label_1979fc:
    // 0x1979fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1979fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_197a00:
    // 0x197a00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x197a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_197a04:
    // 0x197a04: 0x400008  jr          $v0
label_197a08:
    if (ctx->pc == 0x197A08u) {
        ctx->pc = 0x197A0Cu;
        goto label_197a0c;
    }
    ctx->pc = 0x197A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197A0Cu: goto label_197a0c;
            case 0x197A24u: goto label_197a24;
            case 0x197A48u: goto label_197a48;
            case 0x197A60u: goto label_197a60;
            case 0x197A90u: goto label_197a90;
            case 0x197AB4u: goto label_197ab4;
            case 0x197AD8u: goto label_197ad8;
            case 0x197B08u: goto label_197b08;
            case 0x197B44u: goto label_197b44;
            case 0x197B5Cu: goto label_197b5c;
            case 0x197B80u: goto label_197b80;
            case 0x197BCCu: goto label_197bcc;
            case 0x197BE0u: goto label_197be0;
            case 0x197C18u: goto label_197c18;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197A04u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x197A0Cu;
label_197a0c:
    // 0x197a0c: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x197a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_197a10:
    // 0x197a10: 0xc0659e8  jal         func_1967A0
label_197a14:
    if (ctx->pc == 0x197A14u) {
        ctx->pc = 0x197A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A10u;
        // 0x197a14: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A18u;
        goto label_197a18;
    }
    ctx->pc = 0x197A10u;
    SET_GPR_U32(ctx, 31, 0x197A18u);
    ctx->pc = 0x197A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A10u;
    // 0x197a14: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x197A18u;
label_197a18:
    // 0x197a18: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x197a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_197a1c:
    // 0x197a1c: 0x10000089  b           . + 4 + (0x89 << 2)
label_197a20:
    if (ctx->pc == 0x197A20u) {
        ctx->pc = 0x197A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A1Cu;
        // 0x197a20: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A24u;
        goto label_197a24;
    }
    ctx->pc = 0x197A1Cu;
    {
        const bool branch_taken_0x197a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A1Cu;
        // 0x197a20: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a1c) {
            ctx->pc = 0x197C44u;
            goto label_197c44;
        }
    }
    ctx->pc = 0x197A24u;
label_197a24:
    // 0x197a24: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x197a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_197a28:
    // 0x197a28: 0xc0659e8  jal         func_1967A0
label_197a2c:
    if (ctx->pc == 0x197A2Cu) {
        ctx->pc = 0x197A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A28u;
        // 0x197a2c: 0x27a50044  addiu       $a1, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A30u;
        goto label_197a30;
    }
    ctx->pc = 0x197A28u;
    SET_GPR_U32(ctx, 31, 0x197A30u);
    ctx->pc = 0x197A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A28u;
    // 0x197a2c: 0x27a50044  addiu       $a1, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x197A30u;
label_197a30:
    // 0x197a30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197a34:
    // 0x197a34: 0xc0659e8  jal         func_1967A0
label_197a38:
    if (ctx->pc == 0x197A38u) {
        ctx->pc = 0x197A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A34u;
        // 0x197a38: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A3Cu;
        goto label_197a3c;
    }
    ctx->pc = 0x197A34u;
    SET_GPR_U32(ctx, 31, 0x197A3Cu);
    ctx->pc = 0x197A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A34u;
    // 0x197a38: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x197A3Cu;
label_197a3c:
    // 0x197a3c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x197a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_197a40:
    // 0x197a40: 0x10000080  b           . + 4 + (0x80 << 2)
label_197a44:
    if (ctx->pc == 0x197A44u) {
        ctx->pc = 0x197A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A40u;
        // 0x197a44: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A48u;
        goto label_197a48;
    }
    ctx->pc = 0x197A40u;
    {
        const bool branch_taken_0x197a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A40u;
        // 0x197a44: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a40) {
            ctx->pc = 0x197C44u;
            goto label_197c44;
        }
    }
    ctx->pc = 0x197A48u;
label_197a48:
    // 0x197a48: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x197a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_197a4c:
    // 0x197a4c: 0xc0659e8  jal         func_1967A0
label_197a50:
    if (ctx->pc == 0x197A50u) {
        ctx->pc = 0x197A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A4Cu;
        // 0x197a50: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A54u;
        goto label_197a54;
    }
    ctx->pc = 0x197A4Cu;
    SET_GPR_U32(ctx, 31, 0x197A54u);
    ctx->pc = 0x197A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A4Cu;
    // 0x197a50: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x197A54u;
label_197a54:
    // 0x197a54: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x197a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_197a58:
    // 0x197a58: 0x1000007a  b           . + 4 + (0x7A << 2)
label_197a5c:
    if (ctx->pc == 0x197A5Cu) {
        ctx->pc = 0x197A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A58u;
        // 0x197a5c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A60u;
        goto label_197a60;
    }
    ctx->pc = 0x197A58u;
    {
        const bool branch_taken_0x197a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A58u;
        // 0x197a5c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a58) {
            ctx->pc = 0x197C44u;
            goto label_197c44;
        }
    }
    ctx->pc = 0x197A60u;
label_197a60:
    // 0x197a60: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x197a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_197a64:
    // 0x197a64: 0xc0659e8  jal         func_1967A0
label_197a68:
    if (ctx->pc == 0x197A68u) {
        ctx->pc = 0x197A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A64u;
        // 0x197a68: 0x27a50054  addiu       $a1, $sp, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A6Cu;
        goto label_197a6c;
    }
    ctx->pc = 0x197A64u;
    SET_GPR_U32(ctx, 31, 0x197A6Cu);
    ctx->pc = 0x197A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A64u;
    // 0x197a68: 0x27a50054  addiu       $a1, $sp, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x197A6Cu;
label_197a6c:
    // 0x197a6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197a70:
    // 0x197a70: 0xc0659c0  jal         func_196700
label_197a74:
    if (ctx->pc == 0x197A74u) {
        ctx->pc = 0x197A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A70u;
        // 0x197a74: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A78u;
        goto label_197a78;
    }
    ctx->pc = 0x197A70u;
    SET_GPR_U32(ctx, 31, 0x197A78u);
    ctx->pc = 0x197A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A70u;
    // 0x197a74: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    { ctx->pc = 0x196700; return; }
    ctx->pc = 0x197A78u;
label_197a78:
    // 0x197a78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197a7c:
    // 0x197a7c: 0xc0659c0  jal         func_196700
label_197a80:
    if (ctx->pc == 0x197A80u) {
        ctx->pc = 0x197A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A7Cu;
        // 0x197a80: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A84u;
        goto label_197a84;
    }
    ctx->pc = 0x197A7Cu;
    SET_GPR_U32(ctx, 31, 0x197A84u);
    ctx->pc = 0x197A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A7Cu;
    // 0x197a80: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    { ctx->pc = 0x196700; return; }
    ctx->pc = 0x197A84u;
label_197a84:
    // 0x197a84: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x197a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_197a88:
    // 0x197a88: 0x1000006e  b           . + 4 + (0x6E << 2)
label_197a8c:
    if (ctx->pc == 0x197A8Cu) {
        ctx->pc = 0x197A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A88u;
        // 0x197a8c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A90u;
        goto label_197a90;
    }
    ctx->pc = 0x197A88u;
    {
        const bool branch_taken_0x197a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A88u;
        // 0x197a8c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a88) {
            ctx->pc = 0x197C44u;
            goto label_197c44;
        }
    }
    ctx->pc = 0x197A90u;
label_197a90:
    // 0x197a90: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x197a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_197a94:
    // 0x197a94: 0xc0659e8  jal         func_1967A0
label_197a98:
    if (ctx->pc == 0x197A98u) {
        ctx->pc = 0x197A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A94u;
        // 0x197a98: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A9Cu;
        goto label_197a9c;
    }
    ctx->pc = 0x197A94u;
    SET_GPR_U32(ctx, 31, 0x197A9Cu);
    ctx->pc = 0x197A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A94u;
    // 0x197a98: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x197A9Cu;
label_197a9c:
    // 0x197a9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197aa0:
    // 0x197aa0: 0xc0659e8  jal         func_1967A0
label_197aa4:
    if (ctx->pc == 0x197AA4u) {
        ctx->pc = 0x197AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AA0u;
        // 0x197aa4: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197AA8u;
        goto label_197aa8;
    }
    ctx->pc = 0x197AA0u;
    SET_GPR_U32(ctx, 31, 0x197AA8u);
    ctx->pc = 0x197AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197AA0u;
    // 0x197aa4: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x197AA8u;
label_197aa8:
    // 0x197aa8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x197aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_197aac:
    // 0x197aac: 0x10000065  b           . + 4 + (0x65 << 2)
label_197ab0:
    if (ctx->pc == 0x197AB0u) {
        ctx->pc = 0x197AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AACu;
        // 0x197ab0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197AB4u;
        goto label_197ab4;
    }
    ctx->pc = 0x197AACu;
    {
        const bool branch_taken_0x197aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AACu;
        // 0x197ab0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197aac) {
            ctx->pc = 0x197C44u;
            goto label_197c44;
        }
    }
    ctx->pc = 0x197AB4u;
label_197ab4:
    // 0x197ab4: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x197ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_197ab8:
    // 0x197ab8: 0xc0659e8  jal         func_1967A0
label_197abc:
    if (ctx->pc == 0x197ABCu) {
        ctx->pc = 0x197ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AB8u;
        // 0x197abc: 0x27a50064  addiu       $a1, $sp, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197AC0u;
        goto label_197ac0;
    }
    ctx->pc = 0x197AB8u;
    SET_GPR_U32(ctx, 31, 0x197AC0u);
    ctx->pc = 0x197ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197AB8u;
    // 0x197abc: 0x27a50064  addiu       $a1, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x197AC0u;
label_197ac0:
    // 0x197ac0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197ac4:
    // 0x197ac4: 0xc0659e8  jal         func_1967A0
label_197ac8:
    if (ctx->pc == 0x197AC8u) {
        ctx->pc = 0x197AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AC4u;
        // 0x197ac8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197ACCu;
        goto label_197acc;
    }
    ctx->pc = 0x197AC4u;
    SET_GPR_U32(ctx, 31, 0x197ACCu);
    ctx->pc = 0x197AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197AC4u;
    // 0x197ac8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x197ACCu;
label_197acc:
    // 0x197acc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x197accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_197ad0:
    // 0x197ad0: 0x1000005c  b           . + 4 + (0x5C << 2)
label_197ad4:
    if (ctx->pc == 0x197AD4u) {
        ctx->pc = 0x197AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AD0u;
        // 0x197ad4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197AD8u;
        goto label_197ad8;
    }
    ctx->pc = 0x197AD0u;
    {
        const bool branch_taken_0x197ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AD0u;
        // 0x197ad4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197ad0) {
            ctx->pc = 0x197C44u;
            goto label_197c44;
        }
    }
    ctx->pc = 0x197AD8u;
label_197ad8:
    // 0x197ad8: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x197ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_197adc:
    // 0x197adc: 0xc0659e8  jal         func_1967A0
label_197ae0:
    if (ctx->pc == 0x197AE0u) {
        ctx->pc = 0x197AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197ADCu;
        // 0x197ae0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197AE4u;
        goto label_197ae4;
    }
    ctx->pc = 0x197ADCu;
    SET_GPR_U32(ctx, 31, 0x197AE4u);
    ctx->pc = 0x197AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197ADCu;
    // 0x197ae0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x197AE4u;
label_197ae4:
    // 0x197ae4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197ae8:
    // 0x197ae8: 0xc0659e8  jal         func_1967A0
label_197aec:
    if (ctx->pc == 0x197AECu) {
        ctx->pc = 0x197AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AE8u;
        // 0x197aec: 0x27a5006c  addiu       $a1, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197AF0u;
        goto label_197af0;
    }
    ctx->pc = 0x197AE8u;
    SET_GPR_U32(ctx, 31, 0x197AF0u);
    ctx->pc = 0x197AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197AE8u;
    // 0x197aec: 0x27a5006c  addiu       $a1, $sp, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x197AF0u;
label_197af0:
    // 0x197af0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197af4:
    // 0x197af4: 0xc0659e8  jal         func_1967A0
label_197af8:
    if (ctx->pc == 0x197AF8u) {
        ctx->pc = 0x197AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AF4u;
        // 0x197af8: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197AFCu;
        goto label_197afc;
    }
    ctx->pc = 0x197AF4u;
    SET_GPR_U32(ctx, 31, 0x197AFCu);
    ctx->pc = 0x197AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197AF4u;
    // 0x197af8: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x197AFCu;
label_197afc:
    // 0x197afc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x197afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_197b00:
    // 0x197b00: 0x10000050  b           . + 4 + (0x50 << 2)
label_197b04:
    if (ctx->pc == 0x197B04u) {
        ctx->pc = 0x197B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B00u;
        // 0x197b04: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197B08u;
        goto label_197b08;
    }
    ctx->pc = 0x197B00u;
    {
        const bool branch_taken_0x197b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B00u;
        // 0x197b04: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b00) {
            ctx->pc = 0x197C44u;
            goto label_197c44;
        }
    }
    ctx->pc = 0x197B08u;
label_197b08:
    // 0x197b08: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x197b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_197b0c:
    // 0x197b0c: 0xc0659e8  jal         func_1967A0
label_197b10:
    if (ctx->pc == 0x197B10u) {
        ctx->pc = 0x197B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B0Cu;
        // 0x197b10: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197B14u;
        goto label_197b14;
    }
    ctx->pc = 0x197B0Cu;
    SET_GPR_U32(ctx, 31, 0x197B14u);
    ctx->pc = 0x197B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197B0Cu;
    // 0x197b10: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x197B14u;
label_197b14:
    // 0x197b14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197b18:
    // 0x197b18: 0xc0659e8  jal         func_1967A0
label_197b1c:
    if (ctx->pc == 0x197B1Cu) {
        ctx->pc = 0x197B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B18u;
        // 0x197b1c: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197B20u;
        goto label_197b20;
    }
    ctx->pc = 0x197B18u;
    SET_GPR_U32(ctx, 31, 0x197B20u);
    ctx->pc = 0x197B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197B18u;
    // 0x197b1c: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x197B20u;
label_197b20:
    // 0x197b20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197b24:
    // 0x197b24: 0xc0659c0  jal         func_196700
label_197b28:
    if (ctx->pc == 0x197B28u) {
        ctx->pc = 0x197B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B24u;
        // 0x197b28: 0x27a50078  addiu       $a1, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197B2Cu;
        goto label_197b2c;
    }
    ctx->pc = 0x197B24u;
    SET_GPR_U32(ctx, 31, 0x197B2Cu);
    ctx->pc = 0x197B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197B24u;
    // 0x197b28: 0x27a50078  addiu       $a1, $sp, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    { ctx->pc = 0x196700; return; }
    ctx->pc = 0x197B2Cu;
label_197b2c:
    // 0x197b2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197b30:
    // 0x197b30: 0xc0659c0  jal         func_196700
label_197b34:
    if (ctx->pc == 0x197B34u) {
        ctx->pc = 0x197B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B30u;
        // 0x197b34: 0x27a50074  addiu       $a1, $sp, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197B38u;
        goto label_197b38;
    }
    ctx->pc = 0x197B30u;
    SET_GPR_U32(ctx, 31, 0x197B38u);
    ctx->pc = 0x197B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197B30u;
    // 0x197b34: 0x27a50074  addiu       $a1, $sp, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    { ctx->pc = 0x196700; return; }
    ctx->pc = 0x197B38u;
label_197b38:
    // 0x197b38: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x197b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_197b3c:
    // 0x197b3c: 0x10000041  b           . + 4 + (0x41 << 2)
label_197b40:
    if (ctx->pc == 0x197B40u) {
        ctx->pc = 0x197B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B3Cu;
        // 0x197b40: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197B44u;
        goto label_197b44;
    }
    ctx->pc = 0x197B3Cu;
    {
        const bool branch_taken_0x197b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B3Cu;
        // 0x197b40: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b3c) {
            ctx->pc = 0x197C44u;
            goto label_197c44;
        }
    }
    ctx->pc = 0x197B44u;
label_197b44:
    // 0x197b44: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x197b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_197b48:
    // 0x197b48: 0xc0659e8  jal         func_1967A0
label_197b4c:
    if (ctx->pc == 0x197B4Cu) {
        ctx->pc = 0x197B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B48u;
        // 0x197b4c: 0x27a50084  addiu       $a1, $sp, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197B50u;
        goto label_197b50;
    }
    ctx->pc = 0x197B48u;
    SET_GPR_U32(ctx, 31, 0x197B50u);
    ctx->pc = 0x197B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197B48u;
    // 0x197b4c: 0x27a50084  addiu       $a1, $sp, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x197B50u;
label_197b50:
    // 0x197b50: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x197b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_197b54:
    // 0x197b54: 0x1000003b  b           . + 4 + (0x3B << 2)
label_197b58:
    if (ctx->pc == 0x197B58u) {
        ctx->pc = 0x197B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B54u;
        // 0x197b58: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197B5Cu;
        goto label_197b5c;
    }
    ctx->pc = 0x197B54u;
    {
        const bool branch_taken_0x197b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B54u;
        // 0x197b58: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b54) {
            ctx->pc = 0x197C44u;
            goto label_197c44;
        }
    }
    ctx->pc = 0x197B5Cu;
label_197b5c:
    // 0x197b5c: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x197b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_197b60:
    // 0x197b60: 0xc0659e8  jal         func_1967A0
label_197b64:
    if (ctx->pc == 0x197B64u) {
        ctx->pc = 0x197B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B60u;
        // 0x197b64: 0x27a5008c  addiu       $a1, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197B68u;
        goto label_197b68;
    }
    ctx->pc = 0x197B60u;
    SET_GPR_U32(ctx, 31, 0x197B68u);
    ctx->pc = 0x197B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197B60u;
    // 0x197b64: 0x27a5008c  addiu       $a1, $sp, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x197B68u;
label_197b68:
    // 0x197b68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197b6c:
    // 0x197b6c: 0xc0659e8  jal         func_1967A0
label_197b70:
    if (ctx->pc == 0x197B70u) {
        ctx->pc = 0x197B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B6Cu;
        // 0x197b70: 0x27a50088  addiu       $a1, $sp, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197B74u;
        goto label_197b74;
    }
    ctx->pc = 0x197B6Cu;
    SET_GPR_U32(ctx, 31, 0x197B74u);
    ctx->pc = 0x197B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197B6Cu;
    // 0x197b70: 0x27a50088  addiu       $a1, $sp, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x197B74u;
label_197b74:
    // 0x197b74: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x197b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_197b78:
    // 0x197b78: 0x10000032  b           . + 4 + (0x32 << 2)
label_197b7c:
    if (ctx->pc == 0x197B7Cu) {
        ctx->pc = 0x197B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B78u;
        // 0x197b7c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197B80u;
        goto label_197b80;
    }
    ctx->pc = 0x197B78u;
    {
        const bool branch_taken_0x197b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B78u;
        // 0x197b7c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b78) {
            ctx->pc = 0x197C44u;
            goto label_197c44;
        }
    }
    ctx->pc = 0x197B80u;
label_197b80:
    // 0x197b80: 0x91070002  lbu         $a3, 0x2($t0)
    ctx->pc = 0x197b80u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
label_197b84:
    // 0x197b84: 0x25040005  addiu       $a0, $t0, 0x5
    ctx->pc = 0x197b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
label_197b88:
    // 0x197b88: 0x91030003  lbu         $v1, 0x3($t0)
    ctx->pc = 0x197b88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
label_197b8c:
    // 0x197b8c: 0x27a50094  addiu       $a1, $sp, 0x94
    ctx->pc = 0x197b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_197b90:
    // 0x197b90: 0x91020004  lbu         $v0, 0x4($t0)
    ctx->pc = 0x197b90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
label_197b94:
    // 0x197b94: 0x91060001  lbu         $a2, 0x1($t0)
    ctx->pc = 0x197b94u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
label_197b98:
    // 0x197b98: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x197b98u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_197b9c:
    // 0x197b9c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x197b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_197ba0:
    // 0x197ba0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x197ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_197ba4:
    // 0x197ba4: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x197ba4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_197ba8:
    // 0x197ba8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x197ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_197bac:
    // 0x197bac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x197bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_197bb0:
    // 0x197bb0: 0xc0659c0  jal         func_196700
label_197bb4:
    if (ctx->pc == 0x197BB4u) {
        ctx->pc = 0x197BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BB0u;
        // 0x197bb4: 0xafa20098  sw          $v0, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197BB8u;
        goto label_197bb8;
    }
    ctx->pc = 0x197BB0u;
    SET_GPR_U32(ctx, 31, 0x197BB8u);
    ctx->pc = 0x197BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197BB0u;
    // 0x197bb4: 0xafa20098  sw          $v0, 0x98($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    { ctx->pc = 0x196700; return; }
    ctx->pc = 0x197BB8u;
label_197bb8:
    // 0x197bb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197bbc:
    // 0x197bbc: 0xc0659e8  jal         func_1967A0
label_197bc0:
    if (ctx->pc == 0x197BC0u) {
        ctx->pc = 0x197BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BBCu;
        // 0x197bc0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197BC4u;
        goto label_197bc4;
    }
    ctx->pc = 0x197BBCu;
    SET_GPR_U32(ctx, 31, 0x197BC4u);
    ctx->pc = 0x197BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197BBCu;
    // 0x197bc0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x197BC4u;
label_197bc4:
    // 0x197bc4: 0x1000001f  b           . + 4 + (0x1F << 2)
label_197bc8:
    if (ctx->pc == 0x197BC8u) {
        ctx->pc = 0x197BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BC4u;
        // 0x197bc8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197BCCu;
        goto label_197bcc;
    }
    ctx->pc = 0x197BC4u;
    {
        const bool branch_taken_0x197bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BC4u;
        // 0x197bc8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197bc4) {
            ctx->pc = 0x197C44u;
            goto label_197c44;
        }
    }
    ctx->pc = 0x197BCCu;
label_197bcc:
    // 0x197bcc: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x197bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_197bd0:
    // 0x197bd0: 0xc0659e8  jal         func_1967A0
label_197bd4:
    if (ctx->pc == 0x197BD4u) {
        ctx->pc = 0x197BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BD0u;
        // 0x197bd4: 0x27a5009c  addiu       $a1, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197BD8u;
        goto label_197bd8;
    }
    ctx->pc = 0x197BD0u;
    SET_GPR_U32(ctx, 31, 0x197BD8u);
    ctx->pc = 0x197BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197BD0u;
    // 0x197bd4: 0x27a5009c  addiu       $a1, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x197BD8u;
label_197bd8:
    // 0x197bd8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_197bdc:
    if (ctx->pc == 0x197BDCu) {
        ctx->pc = 0x197BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BD8u;
        // 0x197bdc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197BE0u;
        goto label_197be0;
    }
    ctx->pc = 0x197BD8u;
    {
        const bool branch_taken_0x197bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BD8u;
        // 0x197bdc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197bd8) {
            ctx->pc = 0x197C44u;
            goto label_197c44;
        }
    }
    ctx->pc = 0x197BE0u;
label_197be0:
    // 0x197be0: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x197be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_197be4:
    // 0x197be4: 0xc0659c0  jal         func_196700
label_197be8:
    if (ctx->pc == 0x197BE8u) {
        ctx->pc = 0x197BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BE4u;
        // 0x197be8: 0x27a500a8  addiu       $a1, $sp, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197BECu;
        goto label_197bec;
    }
    ctx->pc = 0x197BE4u;
    SET_GPR_U32(ctx, 31, 0x197BECu);
    ctx->pc = 0x197BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197BE4u;
    // 0x197be8: 0x27a500a8  addiu       $a1, $sp, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    { ctx->pc = 0x196700; return; }
    ctx->pc = 0x197BECu;
label_197bec:
    // 0x197bec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197bf0:
    // 0x197bf0: 0xc0659c0  jal         func_196700
label_197bf4:
    if (ctx->pc == 0x197BF4u) {
        ctx->pc = 0x197BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BF0u;
        // 0x197bf4: 0x27a500a4  addiu       $a1, $sp, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197BF8u;
        goto label_197bf8;
    }
    ctx->pc = 0x197BF0u;
    SET_GPR_U32(ctx, 31, 0x197BF8u);
    ctx->pc = 0x197BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197BF0u;
    // 0x197bf4: 0x27a500a4  addiu       $a1, $sp, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    { ctx->pc = 0x196700; return; }
    ctx->pc = 0x197BF8u;
label_197bf8:
    // 0x197bf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197bfc:
    // 0x197bfc: 0xc0659e8  jal         func_1967A0
label_197c00:
    if (ctx->pc == 0x197C00u) {
        ctx->pc = 0x197C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BFCu;
        // 0x197c00: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197C04u;
        goto label_197c04;
    }
    ctx->pc = 0x197BFCu;
    SET_GPR_U32(ctx, 31, 0x197C04u);
    ctx->pc = 0x197C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197BFCu;
    // 0x197c00: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x197C04u;
label_197c04:
    // 0x197c04: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x197c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_197c08:
    // 0x197c08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x197c08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_197c0c:
    // 0x197c0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x197c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_197c10:
    // 0x197c10: 0x1000000c  b           . + 4 + (0xC << 2)
label_197c14:
    if (ctx->pc == 0x197C14u) {
        ctx->pc = 0x197C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C10u;
        // 0x197c14: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197C18u;
        goto label_197c18;
    }
    ctx->pc = 0x197C10u;
    {
        const bool branch_taken_0x197c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C10u;
        // 0x197c14: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197c10) {
            ctx->pc = 0x197C44u;
            goto label_197c44;
        }
    }
    ctx->pc = 0x197C18u;
label_197c18:
    // 0x197c18: 0xc065988  jal         func_196620
label_197c1c:
    if (ctx->pc == 0x197C1Cu) {
        ctx->pc = 0x197C20u;
        goto label_197c20;
    }
    ctx->pc = 0x197C18u;
    SET_GPR_U32(ctx, 31, 0x197C20u);
    ctx->pc = 0x196620u;
    { ctx->pc = 0x196620; return; }
    ctx->pc = 0x197C20u;
label_197c20:
    // 0x197c20: 0x10000008  b           . + 4 + (0x8 << 2)
label_197c24:
    if (ctx->pc == 0x197C24u) {
        ctx->pc = 0x197C28u;
        goto label_197c28;
    }
    ctx->pc = 0x197C20u;
    {
        const bool branch_taken_0x197c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197c20) {
            ctx->pc = 0x197C44u;
            goto label_197c44;
        }
    }
    ctx->pc = 0x197C28u;
label_197c28:
    // 0x197c28: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x197c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_197c2c:
    // 0x197c2c: 0xc0659e8  jal         func_1967A0
label_197c30:
    if (ctx->pc == 0x197C30u) {
        ctx->pc = 0x197C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C2Cu;
        // 0x197c30: 0x27a500ac  addiu       $a1, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197C34u;
        goto label_197c34;
    }
    ctx->pc = 0x197C2Cu;
    SET_GPR_U32(ctx, 31, 0x197C34u);
    ctx->pc = 0x197C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197C2Cu;
    // 0x197c30: 0x27a500ac  addiu       $a1, $sp, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x197C34u;
label_197c34:
    // 0x197c34: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x197c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_197c38:
    // 0x197c38: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x197c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_197c3c:
    // 0x197c3c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x197c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_197c40:
    // 0x197c40: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x197c40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_197c44:
    // 0x197c44: 0x0  nop
    ctx->pc = 0x197c44u;
    // NOP
label_197c48:
    // 0x197c48: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x197c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_197c4c:
    // 0x197c4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x197c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_197c50:
    // 0x197c50: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x197c50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_197c54:
    // 0x197c54: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x197c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_197c58:
    // 0x197c58: 0x1043fff3  beq         $v0, $v1, . + 4 + (-0xD << 2)
label_197c5c:
    if (ctx->pc == 0x197C5Cu) {
        ctx->pc = 0x197C60u;
        goto label_197c60;
    }
    ctx->pc = 0x197C58u;
    {
        const bool branch_taken_0x197c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x197c58) {
            ctx->pc = 0x197C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197c28;
        }
    }
    ctx->pc = 0x197C60u;
label_197c60:
    // 0x197c60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x197c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_197c64:
    // 0x197c64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x197c64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_197c68:
    // 0x197c68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x197c68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_197c6c:
    // 0x197c6c: 0x3e00008  jr          $ra
label_197c70:
    if (ctx->pc == 0x197C70u) {
        ctx->pc = 0x197C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C6Cu;
        // 0x197c70: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197C74u;
        goto label_197c74;
    }
    ctx->pc = 0x197C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C6Cu;
        // 0x197c70: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197C74u;
label_197c74:
    // 0x197c74: 0x0  nop
    ctx->pc = 0x197c74u;
    // NOP
label_197c78:
    // 0x197c78: 0x0  nop
    ctx->pc = 0x197c78u;
    // NOP
label_197c7c:
    // 0x197c7c: 0x0  nop
    ctx->pc = 0x197c7cu;
    // NOP
label_197c80:
    // 0x197c80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x197c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_197c84:
    // 0x197c84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x197c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_197c88:
    // 0x197c88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x197c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_197c8c:
    // 0x197c8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x197c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_197c90:
    // 0x197c90: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x197c90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_197c94:
    // 0x197c94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x197c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_197c98:
    // 0x197c98: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x197c98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_197c9c:
    // 0x197c9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x197c9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_197ca0:
    // 0x197ca0: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x197ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_197ca4:
    // 0x197ca4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x197ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_197ca8:
    // 0x197ca8: 0xc065fe4  jal         func_197F90
label_197cac:
    if (ctx->pc == 0x197CACu) {
        ctx->pc = 0x197CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197CA8u;
        // 0x197cac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197CB0u;
        goto label_197cb0;
    }
    ctx->pc = 0x197CA8u;
    SET_GPR_U32(ctx, 31, 0x197CB0u);
    ctx->pc = 0x197CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197CA8u;
    // 0x197cac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197F90u;
    goto label_197f90;
    ctx->pc = 0x197CB0u;
label_197cb0:
    // 0x197cb0: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
label_197cb4:
    if (ctx->pc == 0x197CB4u) {
        ctx->pc = 0x197CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197CB0u;
        // 0x197cb4: 0x10183c  dsll32      $v1, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197CB8u;
        goto label_197cb8;
    }
    ctx->pc = 0x197CB0u;
    {
        const bool branch_taken_0x197cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197CB0u;
        // 0x197cb4: 0x10183c  dsll32      $v1, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197cb0) {
            ctx->pc = 0x197E24u;
            goto label_197e24;
        }
    }
    ctx->pc = 0x197CB8u;
label_197cb8:
    // 0x197cb8: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x197cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_197cbc:
    // 0x197cbc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x197cbcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_197cc0:
    // 0x197cc0: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x197cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_197cc4:
    // 0x197cc4: 0x662024  and         $a0, $v1, $a2
    ctx->pc = 0x197cc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_197cc8:
    // 0x197cc8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x197cc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197ccc:
    // 0x197ccc: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x197cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_197cd0:
    // 0x197cd0: 0x4803c  dsll32      $s0, $a0, 0
    ctx->pc = 0x197cd0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) << (32 + 0));
label_197cd4:
    // 0x197cd4: 0x3c042aaa  lui         $a0, 0x2AAA
    ctx->pc = 0x197cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)10922 << 16));
label_197cd8:
    // 0x197cd8: 0x3484aaab  ori         $a0, $a0, 0xAAAB
    ctx->pc = 0x197cd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43691);
label_197cdc:
    // 0x197cdc: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x197cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_197ce0:
    // 0x197ce0: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x197ce0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_197ce4:
    // 0x197ce4: 0x0  nop
    ctx->pc = 0x197ce4u;
    // NOP
label_197ce8:
    // 0x197ce8: 0x0  nop
    ctx->pc = 0x197ce8u;
    // NOP
label_197cec:
    // 0x197cec: 0x2010  mfhi        $a0
    ctx->pc = 0x197cecu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_197cf0:
    // 0x197cf0: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x197cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_197cf4:
    // 0x197cf4: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x197cf4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_197cf8:
    // 0x197cf8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x197cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_197cfc:
    // 0x197cfc: 0x2487ffff  addiu       $a3, $a0, -0x1
    ctx->pc = 0x197cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_197d00:
    // 0x197d00: 0xe0082a  slt         $at, $a3, $zero
    ctx->pc = 0x197d00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_197d04:
    // 0x197d04: 0x1420001b  bnez        $at, . + 4 + (0x1B << 2)
label_197d08:
    if (ctx->pc == 0x197D08u) {
        ctx->pc = 0x197D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D04u;
        // 0x197d08: 0x10803f  dsra32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197D0Cu;
        goto label_197d0c;
    }
    ctx->pc = 0x197D04u;
    {
        const bool branch_taken_0x197d04 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x197D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D04u;
        // 0x197d08: 0x10803f  dsra32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d04) {
            ctx->pc = 0x197D74u;
            goto label_197d74;
        }
    }
    ctx->pc = 0x197D0Cu;
label_197d0c:
    // 0x197d0c: 0x1272021  addu        $a0, $t1, $a3
    ctx->pc = 0x197d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_197d10:
    // 0x197d10: 0x44043  sra         $t0, $a0, 1
    ctx->pc = 0x197d10u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 4), 1));
label_197d14:
    // 0x197d14: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x197d14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_197d18:
    // 0x197d18: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x197d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_197d1c:
    // 0x197d1c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x197d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_197d20:
    // 0x197d20: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x197d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_197d24:
    // 0x197d24: 0x8caa0000  lw          $t2, 0x0($a1)
    ctx->pc = 0x197d24u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_197d28:
    // 0x197d28: 0x20a082b  sltu        $at, $s0, $t2
    ctx->pc = 0x197d28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_197d2c:
    // 0x197d2c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_197d30:
    if (ctx->pc == 0x197D30u) {
        ctx->pc = 0x197D34u;
        goto label_197d34;
    }
    ctx->pc = 0x197D2Cu;
    {
        const bool branch_taken_0x197d2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x197d2c) {
            ctx->pc = 0x197D3Cu;
            goto label_197d3c;
        }
    }
    ctx->pc = 0x197D34u;
label_197d34:
    // 0x197d34: 0x1000000c  b           . + 4 + (0xC << 2)
label_197d38:
    if (ctx->pc == 0x197D38u) {
        ctx->pc = 0x197D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D34u;
        // 0x197d38: 0x2507ffff  addiu       $a3, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197D3Cu;
        goto label_197d3c;
    }
    ctx->pc = 0x197D34u;
    {
        const bool branch_taken_0x197d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D34u;
        // 0x197d38: 0x2507ffff  addiu       $a3, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d34) {
            ctx->pc = 0x197D68u;
            goto label_197d68;
        }
    }
    ctx->pc = 0x197D3Cu;
label_197d3c:
    // 0x197d3c: 0x0  nop
    ctx->pc = 0x197d3cu;
    // NOP
label_197d40:
    // 0x197d40: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x197d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_197d44:
    // 0x197d44: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x197d44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_197d48:
    // 0x197d48: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x197d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_197d4c:
    // 0x197d4c: 0x90082b  sltu        $at, $a0, $s0
    ctx->pc = 0x197d4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_197d50:
    // 0x197d50: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_197d54:
    if (ctx->pc == 0x197D54u) {
        ctx->pc = 0x197D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D50u;
        // 0x197d54: 0x25090001  addiu       $t1, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197D58u;
        goto label_197d58;
    }
    ctx->pc = 0x197D50u;
    {
        const bool branch_taken_0x197d50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x197D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D50u;
        // 0x197d54: 0x25090001  addiu       $t1, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d50) {
            ctx->pc = 0x197D60u;
            goto label_197d60;
        }
    }
    ctx->pc = 0x197D58u;
label_197d58:
    // 0x197d58: 0x10000004  b           . + 4 + (0x4 << 2)
label_197d5c:
    if (ctx->pc == 0x197D5Cu) {
        ctx->pc = 0x197D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D58u;
        // 0x197d5c: 0xe9082a  slt         $at, $a3, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x197D60u;
        goto label_197d60;
    }
    ctx->pc = 0x197D58u;
    {
        const bool branch_taken_0x197d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D58u;
        // 0x197d5c: 0xe9082a  slt         $at, $a3, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d58) {
            ctx->pc = 0x197D6Cu;
            goto label_197d6c;
        }
    }
    ctx->pc = 0x197D60u;
label_197d60:
    // 0x197d60: 0x10000006  b           . + 4 + (0x6 << 2)
label_197d64:
    if (ctx->pc == 0x197D64u) {
        ctx->pc = 0x197D68u;
        goto label_197d68;
    }
    ctx->pc = 0x197D60u;
    {
        const bool branch_taken_0x197d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197d60) {
            ctx->pc = 0x197D7Cu;
            goto label_197d7c;
        }
    }
    ctx->pc = 0x197D68u;
label_197d68:
    // 0x197d68: 0xe9082a  slt         $at, $a3, $t1
    ctx->pc = 0x197d68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_197d6c:
    // 0x197d6c: 0x1020ffe8  beqz        $at, . + 4 + (-0x18 << 2)
label_197d70:
    if (ctx->pc == 0x197D70u) {
        ctx->pc = 0x197D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D6Cu;
        // 0x197d70: 0x1272021  addu        $a0, $t1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197D74u;
        goto label_197d74;
    }
    ctx->pc = 0x197D6Cu;
    {
        const bool branch_taken_0x197d6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x197D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D6Cu;
        // 0x197d70: 0x1272021  addu        $a0, $t1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d6c) {
            ctx->pc = 0x197D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197d10;
        }
    }
    ctx->pc = 0x197D74u;
label_197d74:
    // 0x197d74: 0x0  nop
    ctx->pc = 0x197d74u;
    // NOP
label_197d78:
    // 0x197d78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x197d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197d7c:
    // 0x197d7c: 0x10a00029  beqz        $a1, . + 4 + (0x29 << 2)
label_197d80:
    if (ctx->pc == 0x197D80u) {
        ctx->pc = 0x197D84u;
        goto label_197d84;
    }
    ctx->pc = 0x197D7Cu;
    {
        const bool branch_taken_0x197d7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x197d7c) {
            ctx->pc = 0x197E24u;
            goto label_197e24;
        }
    }
    ctx->pc = 0x197D84u;
label_197d84:
    // 0x197d84: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x197d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_197d88:
    // 0x197d88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x197d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_197d8c:
    // 0x197d8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_197d90:
    if (ctx->pc == 0x197D90u) {
        ctx->pc = 0x197D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D8Cu;
        // 0x197d90: 0x24a20008  addiu       $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197D94u;
        goto label_197d94;
    }
    ctx->pc = 0x197D8Cu;
    {
        const bool branch_taken_0x197d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D8Cu;
        // 0x197d90: 0x24a20008  addiu       $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d8c) {
            ctx->pc = 0x197D9Cu;
            goto label_197d9c;
        }
    }
    ctx->pc = 0x197D94u;
label_197d94:
    // 0x197d94: 0x10000003  b           . + 4 + (0x3 << 2)
label_197d98:
    if (ctx->pc == 0x197D98u) {
        ctx->pc = 0x197D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D94u;
        // 0x197d98: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197D9Cu;
        goto label_197d9c;
    }
    ctx->pc = 0x197D94u;
    {
        const bool branch_taken_0x197d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D94u;
        // 0x197d98: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d94) {
            ctx->pc = 0x197DA4u;
            goto label_197da4;
        }
    }
    ctx->pc = 0x197D9Cu;
label_197d9c:
    // 0x197d9c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x197d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_197da0:
    // 0x197da0: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x197da0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_197da4:
    // 0x197da4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x197da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_197da8:
    // 0x197da8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x197da8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_197dac:
    // 0x197dac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x197dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_197db0:
    // 0x197db0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x197db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_197db4:
    // 0x197db4: 0xc065fd0  jal         func_197F40
label_197db8:
    if (ctx->pc == 0x197DB8u) {
        ctx->pc = 0x197DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DB4u;
        // 0x197db8: 0x2028023  subu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197DBCu;
        goto label_197dbc;
    }
    ctx->pc = 0x197DB4u;
    SET_GPR_U32(ctx, 31, 0x197DBCu);
    ctx->pc = 0x197DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197DB4u;
    // 0x197db8: 0x2028023  subu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197F40u;
    goto label_197f40;
    ctx->pc = 0x197DBCu;
label_197dbc:
    // 0x197dbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197dc0:
    // 0x197dc0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x197dc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197dc4:
    // 0x197dc4: 0xc0659c0  jal         func_196700
label_197dc8:
    if (ctx->pc == 0x197DC8u) {
        ctx->pc = 0x197DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DC4u;
        // 0x197dc8: 0x27a50044  addiu       $a1, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197DCCu;
        goto label_197dcc;
    }
    ctx->pc = 0x197DC4u;
    SET_GPR_U32(ctx, 31, 0x197DCCu);
    ctx->pc = 0x197DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197DC4u;
    // 0x197dc8: 0x27a50044  addiu       $a1, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    { ctx->pc = 0x196700; return; }
    ctx->pc = 0x197DCCu;
label_197dcc:
    // 0x197dcc: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x197dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_197dd0:
    // 0x197dd0: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_197dd4:
    if (ctx->pc == 0x197DD4u) {
        ctx->pc = 0x197DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DD0u;
        // 0x197dd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197DD8u;
        goto label_197dd8;
    }
    ctx->pc = 0x197DD0u;
    {
        const bool branch_taken_0x197dd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x197DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DD0u;
        // 0x197dd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197dd0) {
            ctx->pc = 0x197E24u;
            goto label_197e24;
        }
    }
    ctx->pc = 0x197DD8u;
label_197dd8:
    // 0x197dd8: 0xc0659c0  jal         func_196700
label_197ddc:
    if (ctx->pc == 0x197DDCu) {
        ctx->pc = 0x197DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DD8u;
        // 0x197ddc: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197DE0u;
        goto label_197de0;
    }
    ctx->pc = 0x197DD8u;
    SET_GPR_U32(ctx, 31, 0x197DE0u);
    ctx->pc = 0x197DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197DD8u;
    // 0x197ddc: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    { ctx->pc = 0x196700; return; }
    ctx->pc = 0x197DE0u;
label_197de0:
    // 0x197de0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197de4:
    // 0x197de4: 0xc0659c0  jal         func_196700
label_197de8:
    if (ctx->pc == 0x197DE8u) {
        ctx->pc = 0x197DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DE4u;
        // 0x197de8: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197DECu;
        goto label_197dec;
    }
    ctx->pc = 0x197DE4u;
    SET_GPR_U32(ctx, 31, 0x197DECu);
    ctx->pc = 0x197DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197DE4u;
    // 0x197de8: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    { ctx->pc = 0x196700; return; }
    ctx->pc = 0x197DECu;
label_197dec:
    // 0x197dec: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x197decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_197df0:
    // 0x197df0: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x197df0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_197df4:
    // 0x197df4: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x197df4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_197df8:
    // 0x197df8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_197dfc:
    if (ctx->pc == 0x197DFCu) {
        ctx->pc = 0x197DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DF8u;
        // 0x197dfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197E00u;
        goto label_197e00;
    }
    ctx->pc = 0x197DF8u;
    {
        const bool branch_taken_0x197df8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x197DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DF8u;
        // 0x197dfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197df8) {
            ctx->pc = 0x197E24u;
            goto label_197e24;
        }
    }
    ctx->pc = 0x197E00u;
label_197e00:
    // 0x197e00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x197e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_197e04:
    // 0x197e04: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x197e04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_197e08:
    // 0x197e08: 0x230082b  sltu        $at, $s1, $s0
    ctx->pc = 0x197e08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_197e0c:
    // 0x197e0c: 0x1420ffed  bnez        $at, . + 4 + (-0x13 << 2)
label_197e10:
    if (ctx->pc == 0x197E10u) {
        ctx->pc = 0x197E14u;
        goto label_197e14;
    }
    ctx->pc = 0x197E0Cu;
    {
        const bool branch_taken_0x197e0c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x197e0c) {
            ctx->pc = 0x197DC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197dc4;
        }
    }
    ctx->pc = 0x197E14u;
label_197e14:
    // 0x197e14: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x197e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_197e18:
    // 0x197e18: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x197e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_197e1c:
    // 0x197e1c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x197e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_197e20:
    // 0x197e20: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x197e20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_197e24:
    // 0x197e24: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x197e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_197e28:
    // 0x197e28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x197e28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_197e2c:
    // 0x197e2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x197e2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_197e30:
    // 0x197e30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x197e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_197e34:
    // 0x197e34: 0x3e00008  jr          $ra
label_197e38:
    if (ctx->pc == 0x197E38u) {
        ctx->pc = 0x197E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E34u;
        // 0x197e38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197E3Cu;
        goto label_197e3c;
    }
    ctx->pc = 0x197E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E34u;
        // 0x197e38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197E3Cu;
label_197e3c:
    // 0x197e3c: 0x0  nop
    ctx->pc = 0x197e3cu;
    // NOP
label_197e40:
    // 0x197e40: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x197e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_197e44:
    // 0x197e44: 0x3e00008  jr          $ra
label_197e48:
    if (ctx->pc == 0x197E48u) {
        ctx->pc = 0x197E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E44u;
        // 0x197e48: 0x24429a58  addiu       $v0, $v0, -0x65A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197E4Cu;
        goto label_197e4c;
    }
    ctx->pc = 0x197E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E44u;
        // 0x197e48: 0x24429a58  addiu       $v0, $v0, -0x65A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197E4Cu;
label_197e4c:
    // 0x197e4c: 0x0  nop
    ctx->pc = 0x197e4cu;
    // NOP
label_197e50:
    // 0x197e50: 0x78900120  lq          $s0, 0x120($a0)
    ctx->pc = 0x197e50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 4), 288)));
label_197e54:
    // 0x197e54: 0x78910130  lq          $s1, 0x130($a0)
    ctx->pc = 0x197e54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 4), 304)));
label_197e58:
    // 0x197e58: 0x78920140  lq          $s2, 0x140($a0)
    ctx->pc = 0x197e58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 4), 320)));
label_197e5c:
    // 0x197e5c: 0x78930150  lq          $s3, 0x150($a0)
    ctx->pc = 0x197e5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 4), 336)));
label_197e60:
    // 0x197e60: 0x78940160  lq          $s4, 0x160($a0)
    ctx->pc = 0x197e60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 4), 352)));
label_197e64:
    // 0x197e64: 0x78950170  lq          $s5, 0x170($a0)
    ctx->pc = 0x197e64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 4), 368)));
label_197e68:
    // 0x197e68: 0x78960180  lq          $s6, 0x180($a0)
    ctx->pc = 0x197e68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 4), 384)));
label_197e6c:
    // 0x197e6c: 0x78970190  lq          $s7, 0x190($a0)
    ctx->pc = 0x197e6cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 4), 400)));
label_197e70:
    // 0x197e70: 0x789e0200  lq          $fp, 0x200($a0)
    ctx->pc = 0x197e70u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 4), 512)));
label_197e74:
    // 0x197e74: 0xc4940288  lwc1        $f20, 0x288($a0)
    ctx->pc = 0x197e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_197e78:
    // 0x197e78: 0xc495028c  lwc1        $f21, 0x28C($a0)
    ctx->pc = 0x197e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_197e7c:
    // 0x197e7c: 0xc4960290  lwc1        $f22, 0x290($a0)
    ctx->pc = 0x197e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_197e80:
    // 0x197e80: 0xc4970294  lwc1        $f23, 0x294($a0)
    ctx->pc = 0x197e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_197e84:
    // 0x197e84: 0xc4980298  lwc1        $f24, 0x298($a0)
    ctx->pc = 0x197e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_197e88:
    // 0x197e88: 0xc499029c  lwc1        $f25, 0x29C($a0)
    ctx->pc = 0x197e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_197e8c:
    // 0x197e8c: 0xc49a02a0  lwc1        $f26, 0x2A0($a0)
    ctx->pc = 0x197e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_197e90:
    // 0x197e90: 0xc49b02a4  lwc1        $f27, 0x2A4($a0)
    ctx->pc = 0x197e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_197e94:
    // 0x197e94: 0xc49c02a8  lwc1        $f28, 0x2A8($a0)
    ctx->pc = 0x197e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_197e98:
    // 0x197e98: 0xc49d02ac  lwc1        $f29, 0x2AC($a0)
    ctx->pc = 0x197e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_197e9c:
    // 0x197e9c: 0xc49e02b0  lwc1        $f30, 0x2B0($a0)
    ctx->pc = 0x197e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_197ea0:
    // 0x197ea0: 0xc49f02b4  lwc1        $f31, 0x2B4($a0)
    ctx->pc = 0x197ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_197ea4:
    // 0x197ea4: 0x8c9d001c  lw          $sp, 0x1C($a0)
    ctx->pc = 0x197ea4u;
    SET_GPR_S32(ctx, 29, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_197ea8:
    // 0x197ea8: 0x8c820224  lw          $v0, 0x224($a0)
    ctx->pc = 0x197ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
label_197eac:
    // 0x197eac: 0xc00008  jr          $a2
label_197eb0:
    if (ctx->pc == 0x197EB0u) {
        ctx->pc = 0x197EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197EACu;
        // 0x197eb0: 0x3a2e822  sub         $sp, $sp, $v0 (Delay Slot)
        { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 29), GPR_U32(ctx, 2), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x197EB4u;
        goto label_197eb4;
    }
    ctx->pc = 0x197EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        ctx->pc = 0x197EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197EACu;
        // 0x197eb0: 0x3a2e822  sub         $sp, $sp, $v0 (Delay Slot)
        { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 29), GPR_U32(ctx, 2), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197EACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x197EB4u;
label_197eb4:
    // 0x197eb4: 0x0  nop
    ctx->pc = 0x197eb4u;
    // NOP
label_197eb8:
    // 0x197eb8: 0x0  nop
    ctx->pc = 0x197eb8u;
    // NOP
label_197ebc:
    // 0x197ebc: 0x0  nop
    ctx->pc = 0x197ebcu;
    // NOP
label_197ec0:
    // 0x197ec0: 0x73a01628  paddub      $v0, $sp, $zero
    ctx->pc = 0x197ec0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 29), GPR_VEC(ctx, 0)));
label_197ec4:
    // 0x197ec4: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x197ec4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
label_197ec8:
    // 0x197ec8: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x197ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_197ecc:
    // 0x197ecc: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x197eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
label_197ed0:
    // 0x197ed0: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x197ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
label_197ed4:
    // 0x197ed4: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x197ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
label_197ed8:
    // 0x197ed8: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x197ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
label_197edc:
    // 0x197edc: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x197edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
label_197ee0:
    // 0x197ee0: 0x7fb60180  sq          $s6, 0x180($sp)
    ctx->pc = 0x197ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 22));
label_197ee4:
    // 0x197ee4: 0x7fb70190  sq          $s7, 0x190($sp)
    ctx->pc = 0x197ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 23));
label_197ee8:
    // 0x197ee8: 0x7fbe0200  sq          $fp, 0x200($sp)
    ctx->pc = 0x197ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 30));
label_197eec:
    // 0x197eec: 0xe7b40288  swc1        $f20, 0x288($sp)
    ctx->pc = 0x197eecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
label_197ef0:
    // 0x197ef0: 0xe7b5028c  swc1        $f21, 0x28C($sp)
    ctx->pc = 0x197ef0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 652), bits); }
label_197ef4:
    // 0x197ef4: 0xe7b60290  swc1        $f22, 0x290($sp)
    ctx->pc = 0x197ef4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
label_197ef8:
    // 0x197ef8: 0xe7b70294  swc1        $f23, 0x294($sp)
    ctx->pc = 0x197ef8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 660), bits); }
label_197efc:
    // 0x197efc: 0xe7b80298  swc1        $f24, 0x298($sp)
    ctx->pc = 0x197efcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 664), bits); }
label_197f00:
    // 0x197f00: 0xe7b9029c  swc1        $f25, 0x29C($sp)
    ctx->pc = 0x197f00u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 668), bits); }
label_197f04:
    // 0x197f04: 0xe7ba02a0  swc1        $f26, 0x2A0($sp)
    ctx->pc = 0x197f04u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
label_197f08:
    // 0x197f08: 0xe7bb02a4  swc1        $f27, 0x2A4($sp)
    ctx->pc = 0x197f08u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 676), bits); }
label_197f0c:
    // 0x197f0c: 0xe7bc02a8  swc1        $f28, 0x2A8($sp)
    ctx->pc = 0x197f0cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
label_197f10:
    // 0x197f10: 0xe7bd02ac  swc1        $f29, 0x2AC($sp)
    ctx->pc = 0x197f10u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 684), bits); }
label_197f14:
    // 0x197f14: 0xe7be02b0  swc1        $f30, 0x2B0($sp)
    ctx->pc = 0x197f14u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
label_197f18:
    // 0x197f18: 0xe7bf02b4  swc1        $f31, 0x2B4($sp)
    ctx->pc = 0x197f18u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 692), bits); }
label_197f1c:
    // 0x197f1c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x197f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_197f20:
    // 0x197f20: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x197f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_197f24:
    // 0x197f24: 0xafbf0010  sw          $ra, 0x10($sp)
    ctx->pc = 0x197f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 31));
label_197f28:
    // 0x197f28: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x197f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_197f2c:
    // 0x197f2c: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x197f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_197f30:
    // 0x197f30: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x197f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
label_197f34:
    // 0x197f34: 0xc065a20  jal         func_196880
label_197f38:
    if (ctx->pc == 0x197F38u) {
        ctx->pc = 0x197F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F34u;
        // 0x197f38: 0x73a02628  paddub      $a0, $sp, $zero (Delay Slot)
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 29), GPR_VEC(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197F3Cu;
        goto label_197f3c;
    }
    ctx->pc = 0x197F34u;
    SET_GPR_U32(ctx, 31, 0x197F3Cu);
    ctx->pc = 0x197F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197F34u;
    // 0x197f38: 0x73a02628  paddub      $a0, $sp, $zero (Delay Slot)
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 29), GPR_VEC(ctx, 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196880u;
    { ctx->pc = 0x196880; return; }
    ctx->pc = 0x197F3Cu;
label_197f3c:
    // 0x197f3c: 0x0  nop
    ctx->pc = 0x197f3cu;
    // NOP
label_197f40:
    // 0x197f40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x197f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_197f44:
    // 0x197f44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x197f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_197f48:
    // 0x197f48: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x197f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_197f4c:
    // 0x197f4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x197f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_197f50:
    // 0x197f50: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x197f50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_197f54:
    // 0x197f54: 0x30500040  andi        $s0, $v0, 0x40
    ctx->pc = 0x197f54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_197f58:
    // 0x197f58: 0xc0659c0  jal         func_196700
label_197f5c:
    if (ctx->pc == 0x197F5Cu) {
        ctx->pc = 0x197F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F58u;
        // 0x197f5c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197F60u;
        goto label_197f60;
    }
    ctx->pc = 0x197F58u;
    SET_GPR_U32(ctx, 31, 0x197F60u);
    ctx->pc = 0x197F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197F58u;
    // 0x197f5c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    { ctx->pc = 0x196700; return; }
    ctx->pc = 0x197F60u;
label_197f60:
    // 0x197f60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197f64:
    // 0x197f64: 0xc0659c0  jal         func_196700
label_197f68:
    if (ctx->pc == 0x197F68u) {
        ctx->pc = 0x197F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F64u;
        // 0x197f68: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197F6Cu;
        goto label_197f6c;
    }
    ctx->pc = 0x197F64u;
    SET_GPR_U32(ctx, 31, 0x197F6Cu);
    ctx->pc = 0x197F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197F64u;
    // 0x197f68: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    { ctx->pc = 0x196700; return; }
    ctx->pc = 0x197F6Cu;
label_197f6c:
    // 0x197f6c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_197f70:
    if (ctx->pc == 0x197F70u) {
        ctx->pc = 0x197F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F6Cu;
        // 0x197f70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197F74u;
        goto label_197f74;
    }
    ctx->pc = 0x197F6Cu;
    {
        const bool branch_taken_0x197f6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x197F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F6Cu;
        // 0x197f70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197f6c) {
            ctx->pc = 0x197F7Cu;
            goto label_197f7c;
        }
    }
    ctx->pc = 0x197F74u;
label_197f74:
    // 0x197f74: 0xc0659c0  jal         func_196700
label_197f78:
    if (ctx->pc == 0x197F78u) {
        ctx->pc = 0x197F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F74u;
        // 0x197f78: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197F7Cu;
        goto label_197f7c;
    }
    ctx->pc = 0x197F74u;
    SET_GPR_U32(ctx, 31, 0x197F7Cu);
    ctx->pc = 0x197F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197F74u;
    // 0x197f78: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    { ctx->pc = 0x196700; return; }
    ctx->pc = 0x197F7Cu;
label_197f7c:
    // 0x197f7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x197f7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_197f80:
    // 0x197f80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x197f80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_197f84:
    // 0x197f84: 0x3e00008  jr          $ra
label_197f88:
    if (ctx->pc == 0x197F88u) {
        ctx->pc = 0x197F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F84u;
        // 0x197f88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197F8Cu;
        goto label_197f8c;
    }
    ctx->pc = 0x197F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F84u;
        // 0x197f88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197F8Cu;
label_197f8c:
    // 0x197f8c: 0x0  nop
    ctx->pc = 0x197f8cu;
    // NOP
label_197f90:
    // 0x197f90: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x197f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_197f94:
    // 0x197f94: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x197f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
label_197f98:
    // 0x197f98: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x197f98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_197f9c:
    // 0x197f9c: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x197f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_197fa0:
    // 0x197fa0: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x197fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
label_197fa4:
    // 0x197fa4: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x197fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_197fa8:
    // 0x197fa8: 0x3e00008  jr          $ra
label_197fac:
    if (ctx->pc == 0x197FACu) {
        ctx->pc = 0x197FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197FA8u;
        // 0x197fac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197FB0u;
        goto label_197fb0;
    }
    ctx->pc = 0x197FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197FA8u;
        // 0x197fac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197FB0u;
label_197fb0:
    // 0x197fb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x197fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_197fb4:
    // 0x197fb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x197fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_197fb8:
    // 0x197fb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x197fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_197fbc:
    // 0x197fbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x197fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_197fc0:
    // 0x197fc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x197fc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_197fc4:
    // 0x197fc4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x197fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_197fc8:
    // 0x197fc8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x197fc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_197fcc:
    // 0x197fcc: 0x26250220  addiu       $a1, $s1, 0x220
    ctx->pc = 0x197fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
label_197fd0:
    // 0x197fd0: 0x30500040  andi        $s0, $v0, 0x40
    ctx->pc = 0x197fd0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_197fd4:
    // 0x197fd4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x197fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_197fd8:
    // 0x197fd8: 0xac820230  sw          $v0, 0x230($a0)
    ctx->pc = 0x197fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 560), GPR_U32(ctx, 2));
label_197fdc:
    // 0x197fdc: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x197fdcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_197fe0:
    // 0x197fe0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x197fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_197fe4:
    // 0x197fe4: 0xac82022c  sw          $v0, 0x22C($a0)
    ctx->pc = 0x197fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 556), GPR_U32(ctx, 2));
label_197fe8:
    // 0x197fe8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x197fe8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_197fec:
    // 0x197fec: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x197fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_197ff0:
    // 0x197ff0: 0xac820228  sw          $v0, 0x228($a0)
    ctx->pc = 0x197ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 552), GPR_U32(ctx, 2));
label_197ff4:
    // 0x197ff4: 0xc0659c0  jal         func_196700
label_197ff8:
    if (ctx->pc == 0x197FF8u) {
        ctx->pc = 0x197FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197FF4u;
        // 0x197ff8: 0x24640001  addiu       $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197FFCu;
        goto label_197ffc;
    }
    ctx->pc = 0x197FF4u;
    SET_GPR_U32(ctx, 31, 0x197FFCu);
    ctx->pc = 0x197FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197FF4u;
    // 0x197ff8: 0x24640001  addiu       $a0, $v1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    { ctx->pc = 0x196700; return; }
    ctx->pc = 0x197FFCu;
label_197ffc:
    // 0x197ffc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_198000:
    // 0x198000: 0xc0659c0  jal         func_196700
label_198004:
    if (ctx->pc == 0x198004u) {
        ctx->pc = 0x198004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198000u;
        // 0x198004: 0x26250224  addiu       $a1, $s1, 0x224 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 548));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198008u;
        goto label_198008;
    }
    ctx->pc = 0x198000u;
    SET_GPR_U32(ctx, 31, 0x198008u);
    ctx->pc = 0x198004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198000u;
    // 0x198004: 0x26250224  addiu       $a1, $s1, 0x224 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 548));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    { ctx->pc = 0x196700; return; }
    ctx->pc = 0x198008u;
label_198008:
    // 0x198008: 0x8e230230  lw          $v1, 0x230($s1)
    ctx->pc = 0x198008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
label_19800c:
    // 0x19800c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_198010:
    if (ctx->pc == 0x198010u) {
        ctx->pc = 0x198010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19800Cu;
        // 0x198010: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198014u;
        goto label_198014;
    }
    ctx->pc = 0x19800Cu;
    {
        const bool branch_taken_0x19800c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x198010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19800Cu;
        // 0x198010: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19800c) {
            ctx->pc = 0x198028u;
            goto label_198028;
        }
    }
    ctx->pc = 0x198014u;
label_198014:
    // 0x198014: 0x7a230200  lq          $v1, 0x200($s1)
    ctx->pc = 0x198014u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 512)));
label_198018:
    // 0x198018: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x198018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_19801c:
    // 0x19801c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x19801cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_198020:
    // 0x198020: 0x10000003  b           . + 4 + (0x3 << 2)
label_198024:
    if (ctx->pc == 0x198024u) {
        ctx->pc = 0x198024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198020u;
        // 0x198024: 0xae230018  sw          $v1, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198028u;
        goto label_198028;
    }
    ctx->pc = 0x198020u;
    {
        const bool branch_taken_0x198020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198020u;
        // 0x198024: 0xae230018  sw          $v1, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198020) {
            ctx->pc = 0x198030u;
            goto label_198030;
        }
    }
    ctx->pc = 0x198028u;
label_198028:
    // 0x198028: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x198028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_19802c:
    // 0x19802c: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x19802cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_198030:
    // 0x198030: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_198034:
    if (ctx->pc == 0x198034u) {
        ctx->pc = 0x198034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198030u;
        // 0x198034: 0x26250234  addiu       $a1, $s1, 0x234 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 564));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198038u;
        goto label_198038;
    }
    ctx->pc = 0x198030u;
    {
        const bool branch_taken_0x198030 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x198034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198030u;
        // 0x198034: 0x26250234  addiu       $a1, $s1, 0x234 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 564));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198030) {
            ctx->pc = 0x198048u;
            goto label_198048;
        }
    }
    ctx->pc = 0x198038u;
label_198038:
    // 0x198038: 0xc0659c0  jal         func_196700
label_19803c:
    if (ctx->pc == 0x19803Cu) {
        ctx->pc = 0x198040u;
        goto label_198040;
    }
    ctx->pc = 0x198038u;
    SET_GPR_U32(ctx, 31, 0x198040u);
    ctx->pc = 0x196700u;
    { ctx->pc = 0x196700; return; }
    ctx->pc = 0x198040u;
label_198040:
    // 0x198040: 0x10000003  b           . + 4 + (0x3 << 2)
label_198044:
    if (ctx->pc == 0x198044u) {
        ctx->pc = 0x198044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198040u;
        // 0x198044: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198048u;
        goto label_198048;
    }
    ctx->pc = 0x198040u;
    {
        const bool branch_taken_0x198040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198040u;
        // 0x198044: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198040) {
            ctx->pc = 0x198050u;
            goto label_198050;
        }
    }
    ctx->pc = 0x198048u;
label_198048:
    // 0x198048: 0xae200234  sw          $zero, 0x234($s1)
    ctx->pc = 0x198048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 564), GPR_U32(ctx, 0));
label_19804c:
    // 0x19804c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19804cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_198050:
    // 0x198050: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x198050u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_198054:
    // 0x198054: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x198054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_198058:
    // 0x198058: 0x3e00008  jr          $ra
label_19805c:
    if (ctx->pc == 0x19805Cu) {
        ctx->pc = 0x19805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198058u;
        // 0x19805c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198060u;
        goto label_198060;
    }
    ctx->pc = 0x198058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198058u;
        // 0x19805c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198060u;
label_198060:
    // 0x198060: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x198060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_198064:
    // 0x198064: 0x8c860228  lw          $a2, 0x228($a0)
    ctx->pc = 0x198064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 552)));
label_198068:
    // 0x198068: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x198068u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_19806c:
    // 0x19806c: 0x9c850220  lwu         $a1, 0x220($a0)
    ctx->pc = 0x19806cu;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 544)));
label_198070:
    // 0x198070: 0x30430040  andi        $v1, $v0, 0x40
    ctx->pc = 0x198070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_198074:
    // 0x198074: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_198078:
    if (ctx->pc == 0x198078u) {
        ctx->pc = 0x198078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198074u;
        // 0x198078: 0x9c870224  lwu         $a3, 0x224($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19807Cu;
        goto label_19807c;
    }
    ctx->pc = 0x198074u;
    {
        const bool branch_taken_0x198074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x198078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198074u;
        // 0x198078: 0x9c870224  lwu         $a3, 0x224($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198074) {
            ctx->pc = 0x1980DCu;
            goto label_1980dc;
        }
    }
    ctx->pc = 0x19807Cu;
label_19807c:
    // 0x19807c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19807cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_198080:
    // 0x198080: 0x9c890234  lwu         $t1, 0x234($a0)
    ctx->pc = 0x198080u;
    SET_GPR_ZE32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 564)));
label_198084:
    // 0x198084: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x198084u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
label_198088:
    // 0x198088: 0x7583c  dsll32      $t3, $a3, 0
    ctx->pc = 0x198088u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) << (32 + 0));
label_19808c:
    // 0x19808c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x19808cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_198090:
    // 0x198090: 0x8c8a0018  lw          $t2, 0x18($a0)
    ctx->pc = 0x198090u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_198094:
    // 0x198094: 0x23c38  dsll        $a3, $v0, 16
    ctx->pc = 0x198094u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 16);
label_198098:
    // 0x198098: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x198098u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
label_19809c:
    // 0x19809c: 0x34e7fff0  ori         $a3, $a3, 0xFFF0
    ctx->pc = 0x19809cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65520);
label_1980a0:
    // 0x1980a0: 0x61138  dsll        $v0, $a2, 4
    ctx->pc = 0x1980a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 4);
label_1980a4:
    // 0x1980a4: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x1980a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_1980a8:
    // 0x1980a8: 0x940b8  dsll        $t0, $t1, 2
    ctx->pc = 0x1980a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) << 2);
label_1980ac:
    // 0x1980ac: 0x6508000f  daddiu      $t0, $t0, 0xF
    ctx->pc = 0x1980acu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)15);
label_1980b0:
    // 0x1980b0: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x1980b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
label_1980b4:
    // 0x1980b4: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x1980b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_1980b8:
    // 0x1980b8: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x1980b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
label_1980bc:
    // 0x1980bc: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x1980bcu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_1980c0:
    // 0x1980c0: 0x1475021  addu        $t2, $t2, $a3
    ctx->pc = 0x1980c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_1980c4:
    // 0x1980c4: 0xa383c  dsll32      $a3, $t2, 0
    ctx->pc = 0x1980c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) << (32 + 0));
label_1980c8:
    // 0x1980c8: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x1980c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
label_1980cc:
    // 0x1980cc: 0xe2102d  daddu       $v0, $a3, $v0
    ctx->pc = 0x1980ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 2));
label_1980d0:
    // 0x1980d0: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x1980d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_1980d4:
    // 0x1980d4: 0x10000009  b           . + 4 + (0x9 << 2)
label_1980d8:
    if (ctx->pc == 0x1980D8u) {
        ctx->pc = 0x1980D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1980D4u;
        // 0x1980d8: 0x7383f  dsra32      $a3, $a3, 0 (Delay Slot)
        SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1980DCu;
        goto label_1980dc;
    }
    ctx->pc = 0x1980D4u;
    {
        const bool branch_taken_0x1980d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1980D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1980D4u;
        // 0x1980d8: 0x7383f  dsra32      $a3, $a3, 0 (Delay Slot)
        SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1980d4) {
            ctx->pc = 0x1980FCu;
            goto label_1980fc;
        }
    }
    ctx->pc = 0x1980DCu;
label_1980dc:
    // 0x1980dc: 0x7403c  dsll32      $t0, $a3, 0
    ctx->pc = 0x1980dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 0));
label_1980e0:
    // 0x1980e0: 0x61138  dsll        $v0, $a2, 4
    ctx->pc = 0x1980e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 4);
label_1980e4:
    // 0x1980e4: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x1980e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_1980e8:
    // 0x1980e8: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x1980e8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
label_1980ec:
    // 0x1980ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1980ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1980f0:
    // 0x1980f0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1980f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1980f4:
    // 0x1980f4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1980f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1980f8:
    // 0x1980f8: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x1980f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_1980fc:
    // 0x1980fc: 0x8c880230  lw          $t0, 0x230($a0)
    ctx->pc = 0x1980fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 560)));
label_198100:
    // 0x198100: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
label_198104:
    if (ctx->pc == 0x198104u) {
        ctx->pc = 0x198108u;
        goto label_198108;
    }
    ctx->pc = 0x198100u;
    {
        const bool branch_taken_0x198100 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x198100) {
            ctx->pc = 0x19810Cu;
            goto label_19810c;
        }
    }
    ctx->pc = 0x198108u;
label_198108:
    // 0x198108: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x198108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_19810c:
    // 0x19810c: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
label_198110:
    if (ctx->pc == 0x198110u) {
        ctx->pc = 0x198110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19810Cu;
        // 0x198110: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198114u;
        goto label_198114;
    }
    ctx->pc = 0x19810Cu;
    {
        const bool branch_taken_0x19810c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x198110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19810Cu;
        // 0x198110: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19810c) {
            ctx->pc = 0x198124u;
            goto label_198124;
        }
    }
    ctx->pc = 0x198114u;
label_198114:
    // 0x198114: 0x24e7fff0  addiu       $a3, $a3, -0x10
    ctx->pc = 0x198114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
label_198118:
    // 0x198118: 0x78e80000  lq          $t0, 0x0($a3)
    ctx->pc = 0x198118u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_19811c:
    // 0x19811c: 0x10000008  b           . + 4 + (0x8 << 2)
label_198120:
    if (ctx->pc == 0x198120u) {
        ctx->pc = 0x198120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19811Cu;
        // 0x198120: 0x7c880200  sq          $t0, 0x200($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 512), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198124u;
        goto label_198124;
    }
    ctx->pc = 0x19811Cu;
    {
        const bool branch_taken_0x19811c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19811Cu;
        // 0x198120: 0x7c880200  sq          $t0, 0x200($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 512), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19811c) {
            ctx->pc = 0x198140u;
            goto label_198140;
        }
    }
    ctx->pc = 0x198124u;
label_198124:
    // 0x198124: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x198124u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_198128:
    // 0x198128: 0x14c80006  bne         $a2, $t0, . + 4 + (0x6 << 2)
label_19812c:
    if (ctx->pc == 0x19812Cu) {
        ctx->pc = 0x19812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198128u;
        // 0x19812c: 0x6583c  dsll32      $t3, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198130u;
        goto label_198130;
    }
    ctx->pc = 0x198128u;
    {
        const bool branch_taken_0x198128 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        ctx->pc = 0x19812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198128u;
        // 0x19812c: 0x6583c  dsll32      $t3, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198128) {
            ctx->pc = 0x198144u;
            goto label_198144;
        }
    }
    ctx->pc = 0x198130u;
label_198130:
    // 0x198130: 0x24e7fff0  addiu       $a3, $a3, -0x10
    ctx->pc = 0x198130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
label_198134:
    // 0x198134: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x198134u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_198138:
    // 0x198138: 0x78e80000  lq          $t0, 0x0($a3)
    ctx->pc = 0x198138u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_19813c:
    // 0x19813c: 0x7c880200  sq          $t0, 0x200($a0)
    ctx->pc = 0x19813cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 512), GPR_VEC(ctx, 8));
label_198140:
    // 0x198140: 0x6583c  dsll32      $t3, $a2, 0
    ctx->pc = 0x198140u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) << (32 + 0));
label_198144:
    // 0x198144: 0x6082b  sltu        $at, $zero, $a2
    ctx->pc = 0x198144u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_198148:
    // 0x198148: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x198148u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
label_19814c:
    // 0x19814c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19814cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198150:
    // 0x198150: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x198150u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_198154:
    // 0x198154: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
label_198158:
    if (ctx->pc == 0x198158u) {
        ctx->pc = 0x198158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198154u;
        // 0x198158: 0xeb3823  subu        $a3, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19815Cu;
        goto label_19815c;
    }
    ctx->pc = 0x198154u;
    {
        const bool branch_taken_0x198154 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x198158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198154u;
        // 0x198158: 0xeb3823  subu        $a3, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198154) {
            ctx->pc = 0x198204u;
            { ctx->pc = 0x198204; return; }
        }
    }
    ctx->pc = 0x19815Cu;
label_19815c:
    // 0x19815c: 0x2cc10009  sltiu       $at, $a2, 0x9
    ctx->pc = 0x19815cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_198160:
    // 0x198160: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
label_198164:
    if (ctx->pc == 0x198164u) {
        ctx->pc = 0x198164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198160u;
        // 0x198164: 0x64cdfff8  daddiu      $t5, $a2, -0x8 (Delay Slot)
        SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967288);
        ctx->in_delay_slot = false;
        ctx->pc = 0x198168u;
        goto label_198168;
    }
    ctx->pc = 0x198160u;
    {
        const bool branch_taken_0x198160 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x198164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198160u;
        // 0x198164: 0x64cdfff8  daddiu      $t5, $a2, -0x8 (Delay Slot)
        SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967288);
        ctx->in_delay_slot = false;
        if (branch_taken_0x198160) {
            ctx->pc = 0x1981CCu;
            { ctx->pc = 0x1981cc; return; }
        }
    }
    ctx->pc = 0x198168u;
label_198168:
    // 0x198168: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x198168u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19816c:
    // 0x19816c: 0x78ec0000  lq          $t4, 0x0($a3)
    ctx->pc = 0x19816cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_198170:
    // 0x198170: 0x8e7821  addu        $t7, $a0, $t6
    ctx->pc = 0x198170u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
label_198174:
    // 0x198174: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x198174u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_198178:
    // 0x198178: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x198178u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
label_19817c:
    // 0x19817c: 0x8583c  dsll32      $t3, $t0, 0
    ctx->pc = 0x19817cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) << (32 + 0));
label_198180:
    // 0x198180: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x198180u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
label_198184:
    // 0x198184: 0x16d582b  sltu        $t3, $t3, $t5
    ctx->pc = 0x198184u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
label_198188:
    // 0x198188: 0x7dec0120  sq          $t4, 0x120($t7)
    ctx->pc = 0x198188u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 288), GPR_VEC(ctx, 12));
label_19818c:
    // 0x19818c: 0x78ec0010  lq          $t4, 0x10($a3)
    ctx->pc = 0x19818cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 16)));
label_198190:
    // 0x198190: 0x7dec0130  sq          $t4, 0x130($t7)
    ctx->pc = 0x198190u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 304), GPR_VEC(ctx, 12));
label_198194:
    // 0x198194: 0x78ec0020  lq          $t4, 0x20($a3)
    ctx->pc = 0x198194u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 32)));
label_198198:
    // 0x198198: 0x7dec0140  sq          $t4, 0x140($t7)
    ctx->pc = 0x198198u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 320), GPR_VEC(ctx, 12));
label_19819c:
    // 0x19819c: 0x78ec0030  lq          $t4, 0x30($a3)
    ctx->pc = 0x19819cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 48)));
label_1981a0:
    // 0x1981a0: 0x7dec0150  sq          $t4, 0x150($t7)
    ctx->pc = 0x1981a0u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 336), GPR_VEC(ctx, 12));
label_1981a4:
    // 0x1981a4: 0x78ec0040  lq          $t4, 0x40($a3)
    ctx->pc = 0x1981a4u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 64)));
label_1981a8:
    // 0x1981a8: 0x7dec0160  sq          $t4, 0x160($t7)
    ctx->pc = 0x1981a8u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 352), GPR_VEC(ctx, 12));
label_1981ac:
    // 0x1981ac: 0x78ec0050  lq          $t4, 0x50($a3)
    ctx->pc = 0x1981acu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 80)));
label_1981b0:
    // 0x1981b0: 0x7dec0170  sq          $t4, 0x170($t7)
    ctx->pc = 0x1981b0u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 368), GPR_VEC(ctx, 12));
label_1981b4:
    // 0x1981b4: 0x78ec0060  lq          $t4, 0x60($a3)
    ctx->pc = 0x1981b4u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 96)));
label_1981b8:
    // 0x1981b8: 0x7dec0180  sq          $t4, 0x180($t7)
    ctx->pc = 0x1981b8u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 384), GPR_VEC(ctx, 12));
label_1981bc:
    // 0x1981bc: 0x78ec0070  lq          $t4, 0x70($a3)
    ctx->pc = 0x1981bcu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 112)));
    ctx->pc = 0x1981c0u;
    return;
}

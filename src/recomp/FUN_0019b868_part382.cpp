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

// Function: FUN_0019b868
// Address: 0x19b868 - 0x29b870
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b868_part382(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2558f8u: goto label_2558f8;
        case 0x2558fcu: goto label_2558fc;
        case 0x255900u: goto label_255900;
        case 0x255904u: goto label_255904;
        case 0x255908u: goto label_255908;
        case 0x25590cu: goto label_25590c;
        case 0x255910u: goto label_255910;
        case 0x255914u: goto label_255914;
        case 0x255918u: goto label_255918;
        case 0x25591cu: goto label_25591c;
        case 0x255920u: goto label_255920;
        case 0x255924u: goto label_255924;
        case 0x255928u: goto label_255928;
        case 0x25592cu: goto label_25592c;
        case 0x255930u: goto label_255930;
        case 0x255934u: goto label_255934;
        case 0x255938u: goto label_255938;
        case 0x25593cu: goto label_25593c;
        case 0x255940u: goto label_255940;
        case 0x255944u: goto label_255944;
        case 0x255948u: goto label_255948;
        case 0x25594cu: goto label_25594c;
        case 0x255950u: goto label_255950;
        case 0x255954u: goto label_255954;
        case 0x255958u: goto label_255958;
        case 0x25595cu: goto label_25595c;
        case 0x255960u: goto label_255960;
        case 0x255964u: goto label_255964;
        case 0x255968u: goto label_255968;
        case 0x25596cu: goto label_25596c;
        case 0x255970u: goto label_255970;
        case 0x255974u: goto label_255974;
        case 0x255978u: goto label_255978;
        case 0x25597cu: goto label_25597c;
        case 0x255980u: goto label_255980;
        case 0x255984u: goto label_255984;
        case 0x255988u: goto label_255988;
        case 0x25598cu: goto label_25598c;
        case 0x255990u: goto label_255990;
        case 0x255994u: goto label_255994;
        case 0x255998u: goto label_255998;
        case 0x25599cu: goto label_25599c;
        case 0x2559a0u: goto label_2559a0;
        case 0x2559a4u: goto label_2559a4;
        case 0x2559a8u: goto label_2559a8;
        case 0x2559acu: goto label_2559ac;
        case 0x2559b0u: goto label_2559b0;
        case 0x2559b4u: goto label_2559b4;
        case 0x2559b8u: goto label_2559b8;
        case 0x2559bcu: goto label_2559bc;
        case 0x2559c0u: goto label_2559c0;
        case 0x2559c4u: goto label_2559c4;
        case 0x2559c8u: goto label_2559c8;
        case 0x2559ccu: goto label_2559cc;
        case 0x2559d0u: goto label_2559d0;
        case 0x2559d4u: goto label_2559d4;
        case 0x2559d8u: goto label_2559d8;
        case 0x2559dcu: goto label_2559dc;
        case 0x2559e0u: goto label_2559e0;
        case 0x2559e4u: goto label_2559e4;
        case 0x2559e8u: goto label_2559e8;
        case 0x2559ecu: goto label_2559ec;
        case 0x2559f0u: goto label_2559f0;
        case 0x2559f4u: goto label_2559f4;
        case 0x2559f8u: goto label_2559f8;
        case 0x2559fcu: goto label_2559fc;
        case 0x255a00u: goto label_255a00;
        case 0x255a04u: goto label_255a04;
        case 0x255a08u: goto label_255a08;
        case 0x255a0cu: goto label_255a0c;
        case 0x255a10u: goto label_255a10;
        case 0x255a14u: goto label_255a14;
        case 0x255a18u: goto label_255a18;
        case 0x255a1cu: goto label_255a1c;
        case 0x255a20u: goto label_255a20;
        case 0x255a24u: goto label_255a24;
        case 0x255a28u: goto label_255a28;
        case 0x255a2cu: goto label_255a2c;
        case 0x255a30u: goto label_255a30;
        case 0x255a34u: goto label_255a34;
        case 0x255a38u: goto label_255a38;
        case 0x255a3cu: goto label_255a3c;
        case 0x255a40u: goto label_255a40;
        case 0x255a44u: goto label_255a44;
        case 0x255a48u: goto label_255a48;
        case 0x255a4cu: goto label_255a4c;
        case 0x255a50u: goto label_255a50;
        case 0x255a54u: goto label_255a54;
        case 0x255a58u: goto label_255a58;
        case 0x255a5cu: goto label_255a5c;
        case 0x255a60u: goto label_255a60;
        case 0x255a64u: goto label_255a64;
        case 0x255a68u: goto label_255a68;
        case 0x255a6cu: goto label_255a6c;
        case 0x255a70u: goto label_255a70;
        case 0x255a74u: goto label_255a74;
        case 0x255a78u: goto label_255a78;
        case 0x255a7cu: goto label_255a7c;
        case 0x255a80u: goto label_255a80;
        case 0x255a84u: goto label_255a84;
        case 0x255a88u: goto label_255a88;
        case 0x255a8cu: goto label_255a8c;
        case 0x255a90u: goto label_255a90;
        case 0x255a94u: goto label_255a94;
        case 0x255a98u: goto label_255a98;
        case 0x255a9cu: goto label_255a9c;
        case 0x255aa0u: goto label_255aa0;
        case 0x255aa4u: goto label_255aa4;
        case 0x255aa8u: goto label_255aa8;
        case 0x255aacu: goto label_255aac;
        case 0x255ab0u: goto label_255ab0;
        case 0x255ab4u: goto label_255ab4;
        case 0x255ab8u: goto label_255ab8;
        case 0x255abcu: goto label_255abc;
        case 0x255ac0u: goto label_255ac0;
        case 0x255ac4u: goto label_255ac4;
        case 0x255ac8u: goto label_255ac8;
        case 0x255accu: goto label_255acc;
        case 0x255ad0u: goto label_255ad0;
        case 0x255ad4u: goto label_255ad4;
        case 0x255ad8u: goto label_255ad8;
        case 0x255adcu: goto label_255adc;
        case 0x255ae0u: goto label_255ae0;
        case 0x255ae4u: goto label_255ae4;
        case 0x255ae8u: goto label_255ae8;
        case 0x255aecu: goto label_255aec;
        case 0x255af0u: goto label_255af0;
        case 0x255af4u: goto label_255af4;
        case 0x255af8u: goto label_255af8;
        case 0x255afcu: goto label_255afc;
        case 0x255b00u: goto label_255b00;
        case 0x255b04u: goto label_255b04;
        case 0x255b08u: goto label_255b08;
        case 0x255b0cu: goto label_255b0c;
        case 0x255b10u: goto label_255b10;
        case 0x255b14u: goto label_255b14;
        case 0x255b18u: goto label_255b18;
        case 0x255b1cu: goto label_255b1c;
        case 0x255b20u: goto label_255b20;
        case 0x255b24u: goto label_255b24;
        case 0x255b28u: goto label_255b28;
        case 0x255b2cu: goto label_255b2c;
        case 0x255b30u: goto label_255b30;
        case 0x255b34u: goto label_255b34;
        case 0x255b38u: goto label_255b38;
        case 0x255b3cu: goto label_255b3c;
        case 0x255b40u: goto label_255b40;
        case 0x255b44u: goto label_255b44;
        case 0x255b48u: goto label_255b48;
        case 0x255b4cu: goto label_255b4c;
        case 0x255b50u: goto label_255b50;
        case 0x255b54u: goto label_255b54;
        case 0x255b58u: goto label_255b58;
        case 0x255b5cu: goto label_255b5c;
        case 0x255b60u: goto label_255b60;
        case 0x255b64u: goto label_255b64;
        case 0x255b68u: goto label_255b68;
        case 0x255b6cu: goto label_255b6c;
        case 0x255b70u: goto label_255b70;
        case 0x255b74u: goto label_255b74;
        case 0x255b78u: goto label_255b78;
        case 0x255b7cu: goto label_255b7c;
        case 0x255b80u: goto label_255b80;
        case 0x255b84u: goto label_255b84;
        case 0x255b88u: goto label_255b88;
        case 0x255b8cu: goto label_255b8c;
        case 0x255b90u: goto label_255b90;
        case 0x255b94u: goto label_255b94;
        case 0x255b98u: goto label_255b98;
        case 0x255b9cu: goto label_255b9c;
        case 0x255ba0u: goto label_255ba0;
        case 0x255ba4u: goto label_255ba4;
        case 0x255ba8u: goto label_255ba8;
        case 0x255bacu: goto label_255bac;
        case 0x255bb0u: goto label_255bb0;
        case 0x255bb4u: goto label_255bb4;
        case 0x255bb8u: goto label_255bb8;
        case 0x255bbcu: goto label_255bbc;
        case 0x255bc0u: goto label_255bc0;
        case 0x255bc4u: goto label_255bc4;
        case 0x255bc8u: goto label_255bc8;
        case 0x255bccu: goto label_255bcc;
        case 0x255bd0u: goto label_255bd0;
        case 0x255bd4u: goto label_255bd4;
        case 0x255bd8u: goto label_255bd8;
        case 0x255bdcu: goto label_255bdc;
        case 0x255be0u: goto label_255be0;
        case 0x255be4u: goto label_255be4;
        case 0x255be8u: goto label_255be8;
        case 0x255becu: goto label_255bec;
        case 0x255bf0u: goto label_255bf0;
        case 0x255bf4u: goto label_255bf4;
        case 0x255bf8u: goto label_255bf8;
        case 0x255bfcu: goto label_255bfc;
        case 0x255c00u: goto label_255c00;
        case 0x255c04u: goto label_255c04;
        case 0x255c08u: goto label_255c08;
        case 0x255c0cu: goto label_255c0c;
        case 0x255c10u: goto label_255c10;
        case 0x255c14u: goto label_255c14;
        case 0x255c18u: goto label_255c18;
        case 0x255c1cu: goto label_255c1c;
        case 0x255c20u: goto label_255c20;
        case 0x255c24u: goto label_255c24;
        case 0x255c28u: goto label_255c28;
        case 0x255c2cu: goto label_255c2c;
        case 0x255c30u: goto label_255c30;
        case 0x255c34u: goto label_255c34;
        case 0x255c38u: goto label_255c38;
        case 0x255c3cu: goto label_255c3c;
        case 0x255c40u: goto label_255c40;
        case 0x255c44u: goto label_255c44;
        case 0x255c48u: goto label_255c48;
        case 0x255c4cu: goto label_255c4c;
        case 0x255c50u: goto label_255c50;
        case 0x255c54u: goto label_255c54;
        case 0x255c58u: goto label_255c58;
        case 0x255c5cu: goto label_255c5c;
        case 0x255c60u: goto label_255c60;
        case 0x255c64u: goto label_255c64;
        case 0x255c68u: goto label_255c68;
        case 0x255c6cu: goto label_255c6c;
        case 0x255c70u: goto label_255c70;
        case 0x255c74u: goto label_255c74;
        case 0x255c78u: goto label_255c78;
        case 0x255c7cu: goto label_255c7c;
        case 0x255c80u: goto label_255c80;
        case 0x255c84u: goto label_255c84;
        case 0x255c88u: goto label_255c88;
        case 0x255c8cu: goto label_255c8c;
        case 0x255c90u: goto label_255c90;
        case 0x255c94u: goto label_255c94;
        case 0x255c98u: goto label_255c98;
        case 0x255c9cu: goto label_255c9c;
        case 0x255ca0u: goto label_255ca0;
        case 0x255ca4u: goto label_255ca4;
        case 0x255ca8u: goto label_255ca8;
        case 0x255cacu: goto label_255cac;
        case 0x255cb0u: goto label_255cb0;
        case 0x255cb4u: goto label_255cb4;
        case 0x255cb8u: goto label_255cb8;
        case 0x255cbcu: goto label_255cbc;
        case 0x255cc0u: goto label_255cc0;
        case 0x255cc4u: goto label_255cc4;
        case 0x255cc8u: goto label_255cc8;
        case 0x255cccu: goto label_255ccc;
        case 0x255cd0u: goto label_255cd0;
        case 0x255cd4u: goto label_255cd4;
        case 0x255cd8u: goto label_255cd8;
        case 0x255cdcu: goto label_255cdc;
        case 0x255ce0u: goto label_255ce0;
        case 0x255ce4u: goto label_255ce4;
        case 0x255ce8u: goto label_255ce8;
        case 0x255cecu: goto label_255cec;
        case 0x255cf0u: goto label_255cf0;
        case 0x255cf4u: goto label_255cf4;
        case 0x255cf8u: goto label_255cf8;
        case 0x255cfcu: goto label_255cfc;
        case 0x255d00u: goto label_255d00;
        case 0x255d04u: goto label_255d04;
        case 0x255d08u: goto label_255d08;
        case 0x255d0cu: goto label_255d0c;
        case 0x255d10u: goto label_255d10;
        case 0x255d14u: goto label_255d14;
        case 0x255d18u: goto label_255d18;
        case 0x255d1cu: goto label_255d1c;
        case 0x255d20u: goto label_255d20;
        case 0x255d24u: goto label_255d24;
        case 0x255d28u: goto label_255d28;
        case 0x255d2cu: goto label_255d2c;
        case 0x255d30u: goto label_255d30;
        case 0x255d34u: goto label_255d34;
        case 0x255d38u: goto label_255d38;
        case 0x255d3cu: goto label_255d3c;
        case 0x255d40u: goto label_255d40;
        case 0x255d44u: goto label_255d44;
        case 0x255d48u: goto label_255d48;
        case 0x255d4cu: goto label_255d4c;
        case 0x255d50u: goto label_255d50;
        case 0x255d54u: goto label_255d54;
        case 0x255d58u: goto label_255d58;
        case 0x255d5cu: goto label_255d5c;
        case 0x255d60u: goto label_255d60;
        case 0x255d64u: goto label_255d64;
        case 0x255d68u: goto label_255d68;
        case 0x255d6cu: goto label_255d6c;
        case 0x255d70u: goto label_255d70;
        case 0x255d74u: goto label_255d74;
        case 0x255d78u: goto label_255d78;
        case 0x255d7cu: goto label_255d7c;
        case 0x255d80u: goto label_255d80;
        case 0x255d84u: goto label_255d84;
        case 0x255d88u: goto label_255d88;
        case 0x255d8cu: goto label_255d8c;
        case 0x255d90u: goto label_255d90;
        case 0x255d94u: goto label_255d94;
        case 0x255d98u: goto label_255d98;
        case 0x255d9cu: goto label_255d9c;
        case 0x255da0u: goto label_255da0;
        case 0x255da4u: goto label_255da4;
        case 0x255da8u: goto label_255da8;
        case 0x255dacu: goto label_255dac;
        case 0x255db0u: goto label_255db0;
        case 0x255db4u: goto label_255db4;
        case 0x255db8u: goto label_255db8;
        case 0x255dbcu: goto label_255dbc;
        case 0x255dc0u: goto label_255dc0;
        case 0x255dc4u: goto label_255dc4;
        case 0x255dc8u: goto label_255dc8;
        case 0x255dccu: goto label_255dcc;
        case 0x255dd0u: goto label_255dd0;
        case 0x255dd4u: goto label_255dd4;
        case 0x255dd8u: goto label_255dd8;
        case 0x255ddcu: goto label_255ddc;
        case 0x255de0u: goto label_255de0;
        case 0x255de4u: goto label_255de4;
        case 0x255de8u: goto label_255de8;
        case 0x255decu: goto label_255dec;
        case 0x255df0u: goto label_255df0;
        case 0x255df4u: goto label_255df4;
        case 0x255df8u: goto label_255df8;
        case 0x255dfcu: goto label_255dfc;
        case 0x255e00u: goto label_255e00;
        case 0x255e04u: goto label_255e04;
        case 0x255e08u: goto label_255e08;
        case 0x255e0cu: goto label_255e0c;
        case 0x255e10u: goto label_255e10;
        case 0x255e14u: goto label_255e14;
        case 0x255e18u: goto label_255e18;
        case 0x255e1cu: goto label_255e1c;
        case 0x255e20u: goto label_255e20;
        case 0x255e24u: goto label_255e24;
        case 0x255e28u: goto label_255e28;
        case 0x255e2cu: goto label_255e2c;
        case 0x255e30u: goto label_255e30;
        case 0x255e34u: goto label_255e34;
        case 0x255e38u: goto label_255e38;
        case 0x255e3cu: goto label_255e3c;
        case 0x255e40u: goto label_255e40;
        case 0x255e44u: goto label_255e44;
        case 0x255e48u: goto label_255e48;
        case 0x255e4cu: goto label_255e4c;
        case 0x255e50u: goto label_255e50;
        case 0x255e54u: goto label_255e54;
        case 0x255e58u: goto label_255e58;
        case 0x255e5cu: goto label_255e5c;
        case 0x255e60u: goto label_255e60;
        case 0x255e64u: goto label_255e64;
        case 0x255e68u: goto label_255e68;
        case 0x255e6cu: goto label_255e6c;
        case 0x255e70u: goto label_255e70;
        case 0x255e74u: goto label_255e74;
        case 0x255e78u: goto label_255e78;
        case 0x255e7cu: goto label_255e7c;
        case 0x255e80u: goto label_255e80;
        case 0x255e84u: goto label_255e84;
        case 0x255e88u: goto label_255e88;
        case 0x255e8cu: goto label_255e8c;
        case 0x255e90u: goto label_255e90;
        case 0x255e94u: goto label_255e94;
        case 0x255e98u: goto label_255e98;
        case 0x255e9cu: goto label_255e9c;
        case 0x255ea0u: goto label_255ea0;
        case 0x255ea4u: goto label_255ea4;
        case 0x255ea8u: goto label_255ea8;
        case 0x255eacu: goto label_255eac;
        case 0x255eb0u: goto label_255eb0;
        case 0x255eb4u: goto label_255eb4;
        case 0x255eb8u: goto label_255eb8;
        case 0x255ebcu: goto label_255ebc;
        case 0x255ec0u: goto label_255ec0;
        case 0x255ec4u: goto label_255ec4;
        case 0x255ec8u: goto label_255ec8;
        case 0x255eccu: goto label_255ecc;
        case 0x255ed0u: goto label_255ed0;
        case 0x255ed4u: goto label_255ed4;
        case 0x255ed8u: goto label_255ed8;
        case 0x255edcu: goto label_255edc;
        case 0x255ee0u: goto label_255ee0;
        case 0x255ee4u: goto label_255ee4;
        case 0x255ee8u: goto label_255ee8;
        case 0x255eecu: goto label_255eec;
        case 0x255ef0u: goto label_255ef0;
        case 0x255ef4u: goto label_255ef4;
        case 0x255ef8u: goto label_255ef8;
        case 0x255efcu: goto label_255efc;
        case 0x255f00u: goto label_255f00;
        case 0x255f04u: goto label_255f04;
        case 0x255f08u: goto label_255f08;
        case 0x255f0cu: goto label_255f0c;
        case 0x255f10u: goto label_255f10;
        case 0x255f14u: goto label_255f14;
        case 0x255f18u: goto label_255f18;
        case 0x255f1cu: goto label_255f1c;
        case 0x255f20u: goto label_255f20;
        case 0x255f24u: goto label_255f24;
        case 0x255f28u: goto label_255f28;
        case 0x255f2cu: goto label_255f2c;
        case 0x255f30u: goto label_255f30;
        case 0x255f34u: goto label_255f34;
        case 0x255f38u: goto label_255f38;
        case 0x255f3cu: goto label_255f3c;
        case 0x255f40u: goto label_255f40;
        case 0x255f44u: goto label_255f44;
        case 0x255f48u: goto label_255f48;
        case 0x255f4cu: goto label_255f4c;
        case 0x255f50u: goto label_255f50;
        case 0x255f54u: goto label_255f54;
        case 0x255f58u: goto label_255f58;
        case 0x255f5cu: goto label_255f5c;
        case 0x255f60u: goto label_255f60;
        case 0x255f64u: goto label_255f64;
        case 0x255f68u: goto label_255f68;
        case 0x255f6cu: goto label_255f6c;
        case 0x255f70u: goto label_255f70;
        case 0x255f74u: goto label_255f74;
        case 0x255f78u: goto label_255f78;
        case 0x255f7cu: goto label_255f7c;
        case 0x255f80u: goto label_255f80;
        case 0x255f84u: goto label_255f84;
        case 0x255f88u: goto label_255f88;
        case 0x255f8cu: goto label_255f8c;
        case 0x255f90u: goto label_255f90;
        case 0x255f94u: goto label_255f94;
        case 0x255f98u: goto label_255f98;
        case 0x255f9cu: goto label_255f9c;
        case 0x255fa0u: goto label_255fa0;
        case 0x255fa4u: goto label_255fa4;
        case 0x255fa8u: goto label_255fa8;
        case 0x255facu: goto label_255fac;
        case 0x255fb0u: goto label_255fb0;
        case 0x255fb4u: goto label_255fb4;
        case 0x255fb8u: goto label_255fb8;
        case 0x255fbcu: goto label_255fbc;
        case 0x255fc0u: goto label_255fc0;
        case 0x255fc4u: goto label_255fc4;
        case 0x255fc8u: goto label_255fc8;
        case 0x255fccu: goto label_255fcc;
        case 0x255fd0u: goto label_255fd0;
        case 0x255fd4u: goto label_255fd4;
        case 0x255fd8u: goto label_255fd8;
        case 0x255fdcu: goto label_255fdc;
        case 0x255fe0u: goto label_255fe0;
        case 0x255fe4u: goto label_255fe4;
        case 0x255fe8u: goto label_255fe8;
        case 0x255fecu: goto label_255fec;
        case 0x255ff0u: goto label_255ff0;
        case 0x255ff4u: goto label_255ff4;
        case 0x255ff8u: goto label_255ff8;
        case 0x255ffcu: goto label_255ffc;
        case 0x256000u: goto label_256000;
        case 0x256004u: goto label_256004;
        case 0x256008u: goto label_256008;
        case 0x25600cu: goto label_25600c;
        case 0x256010u: goto label_256010;
        case 0x256014u: goto label_256014;
        case 0x256018u: goto label_256018;
        case 0x25601cu: goto label_25601c;
        case 0x256020u: goto label_256020;
        case 0x256024u: goto label_256024;
        case 0x256028u: goto label_256028;
        case 0x25602cu: goto label_25602c;
        case 0x256030u: goto label_256030;
        case 0x256034u: goto label_256034;
        case 0x256038u: goto label_256038;
        case 0x25603cu: goto label_25603c;
        case 0x256040u: goto label_256040;
        case 0x256044u: goto label_256044;
        case 0x256048u: goto label_256048;
        case 0x25604cu: goto label_25604c;
        case 0x256050u: goto label_256050;
        case 0x256054u: goto label_256054;
        case 0x256058u: goto label_256058;
        case 0x25605cu: goto label_25605c;
        case 0x256060u: goto label_256060;
        case 0x256064u: goto label_256064;
        case 0x256068u: goto label_256068;
        case 0x25606cu: goto label_25606c;
        case 0x256070u: goto label_256070;
        case 0x256074u: goto label_256074;
        case 0x256078u: goto label_256078;
        case 0x25607cu: goto label_25607c;
        case 0x256080u: goto label_256080;
        case 0x256084u: goto label_256084;
        case 0x256088u: goto label_256088;
        case 0x25608cu: goto label_25608c;
        case 0x256090u: goto label_256090;
        case 0x256094u: goto label_256094;
        case 0x256098u: goto label_256098;
        case 0x25609cu: goto label_25609c;
        case 0x2560a0u: goto label_2560a0;
        case 0x2560a4u: goto label_2560a4;
        case 0x2560a8u: goto label_2560a8;
        case 0x2560acu: goto label_2560ac;
        case 0x2560b0u: goto label_2560b0;
        case 0x2560b4u: goto label_2560b4;
        case 0x2560b8u: goto label_2560b8;
        case 0x2560bcu: goto label_2560bc;
        case 0x2560c0u: goto label_2560c0;
        case 0x2560c4u: goto label_2560c4;
        default: return;
    }

label_2558f8:
    // 0x2558f8: 0xc0200000  ll          $zero, 0x0($at)
    ctx->pc = 0x2558f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2558fc:
    // 0x2558fc: 0x0  nop
    ctx->pc = 0x2558fcu;
    // NOP
label_255900:
    // 0x255900: 0x3fb33333  .word       0x3FB33333                   # lui         $s3, 0x3333 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255900u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_255904:
    // 0x255904: 0xc0666666  ll          $a2, 0x6666($v1)
    ctx->pc = 0x255904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26214); SET_GPR_S32(ctx, 6, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255908:
    // 0x255908: 0xc0133333  ll          $s3, 0x3333($zero)
    ctx->pc = 0x255908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 13107); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_25590c:
    // 0x25590c: 0x0  nop
    ctx->pc = 0x25590cu;
    // NOP
label_255910:
    // 0x255910: 0xbf99999a  cache       0x19, -0x6666($gp)
    ctx->pc = 0x255910u;
    // CACHE instruction (ignored)
label_255914:
    // 0x255914: 0xc09ccccd  ll          $gp, -0x3333($a0)
    ctx->pc = 0x255914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294954189); SET_GPR_S32(ctx, 28, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255918:
    // 0x255918: 0xc0200000  ll          $zero, 0x0($at)
    ctx->pc = 0x255918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_25591c:
    // 0x25591c: 0x0  nop
    ctx->pc = 0x25591cu;
    // NOP
label_255920:
    // 0x255920: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x255920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255924:
    // 0x255924: 0xc0accccd  ll          $t4, -0x3333($a1)
    ctx->pc = 0x255924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294954189); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255928:
    // 0x255928: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x255928u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_25592c:
    // 0x25592c: 0x0  nop
    ctx->pc = 0x25592cu;
    // NOP
label_255930:
    // 0x255930: 0xc0200000  ll          $zero, 0x0($at)
    ctx->pc = 0x255930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255934:
    // 0x255934: 0xc02ccccd  ll          $t4, -0x3333($at)
    ctx->pc = 0x255934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 4294954189); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255938:
    // 0x255938: 0xbe99999a  cache       0x19, -0x6666($s4)
    ctx->pc = 0x255938u;
    // CACHE instruction (ignored)
label_25593c:
    // 0x25593c: 0x0  nop
    ctx->pc = 0x25593cu;
    // NOP
label_255940:
    // 0x255940: 0xc0133333  ll          $s3, 0x3333($zero)
    ctx->pc = 0x255940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 13107); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255944:
    // 0x255944: 0xc0accccd  ll          $t4, -0x3333($a1)
    ctx->pc = 0x255944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294954189); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255948:
    // 0x255948: 0xc0066666  ll          $a2, 0x6666($zero)
    ctx->pc = 0x255948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 26214); SET_GPR_S32(ctx, 6, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_25594c:
    // 0x25594c: 0x0  nop
    ctx->pc = 0x25594cu;
    // NOP
label_255950:
    // 0x255950: 0x40200000  dmfc0       $zero, Index
    ctx->pc = 0x255950u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x255950 raw=0x40200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255954:
    // 0x255954: 0xc0cccccd  ll          $t4, -0x3333($a2)
    ctx->pc = 0x255954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 4294954189); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255958:
    // 0x255958: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255958u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_25595c:
    // 0x25595c: 0x0  nop
    ctx->pc = 0x25595cu;
    // NOP
label_255960:
    // 0x255960: 0x40200000  dmfc0       $zero, Index
    ctx->pc = 0x255960u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x255960 raw=0x40200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255964:
    // 0x255964: 0xc02ccccd  ll          $t4, -0x3333($at)
    ctx->pc = 0x255964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 4294954189); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255968:
    // 0x255968: 0x0  nop
    ctx->pc = 0x255968u;
    // NOP
label_25596c:
    // 0x25596c: 0x0  nop
    ctx->pc = 0x25596cu;
    // NOP
label_255970:
    // 0x255970: 0x40133333  .word       0x40133333                   # mfc0        $s3, Wired # 00000333 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255970u;
    SET_GPR_S32(ctx, 19, (int32_t)ctx->cop0_wired);
label_255974:
    // 0x255974: 0xc0f66666  ll          $s6, 0x6666($a3)
    ctx->pc = 0x255974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 26214); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255978:
    // 0x255978: 0xbf000000  cache       0x00, 0x0($t8)
    ctx->pc = 0x255978u;
    // CACHE instruction (ignored)
label_25597c:
    // 0x25597c: 0x0  nop
    ctx->pc = 0x25597cu;
    // NOP
label_255980:
    // 0x255980: 0x3dcccccd  .word       0x3DCCCCCD                   # lui         $t4, 0xCCCD # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255980u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_255984:
    // 0x255984: 0xc09ccccd  ll          $gp, -0x3333($a0)
    ctx->pc = 0x255984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294954189); SET_GPR_S32(ctx, 28, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255988:
    // 0x255988: 0x40200000  dmfc0       $zero, Index
    ctx->pc = 0x255988u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x255988 raw=0x40200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25598c:
    // 0x25598c: 0x0  nop
    ctx->pc = 0x25598cu;
    // NOP
label_255990:
    // 0x255990: 0x0  nop
    ctx->pc = 0x255990u;
    // NOP
label_255994:
    // 0x255994: 0xbf000000  cache       0x00, 0x0($t8)
    ctx->pc = 0x255994u;
    // CACHE instruction (ignored)
label_255998:
    // 0x255998: 0x40200000  dmfc0       $zero, Index
    ctx->pc = 0x255998u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x255998 raw=0x40200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25599c:
    // 0x25599c: 0x0  nop
    ctx->pc = 0x25599cu;
    // NOP
label_2559a0:
    // 0x2559a0: 0x3ff33333  .word       0x3FF33333                   # lui         $s3, 0x3333 # 03E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2559a0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_2559a4:
    // 0x2559a4: 0xc09ccccd  ll          $gp, -0x3333($a0)
    ctx->pc = 0x2559a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294954189); SET_GPR_S32(ctx, 28, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2559a8:
    // 0x2559a8: 0x4019999a  .word       0x4019999A                   # mfc0        $t9, WatchHi # 0000019A <InstrIdType: R5900_COP0>
    ctx->pc = 0x2559a8u;
    SET_GPR_S32(ctx, 25, 0);  // Unimplemented COP0 register 19
label_2559ac:
    // 0x2559ac: 0x0  nop
    ctx->pc = 0x2559acu;
    // NOP
label_2559b0:
    // 0x2559b0: 0xbecccccd  cache       0x0C, -0x3333($s6)
    ctx->pc = 0x2559b0u;
    // CACHE instruction (ignored)
label_2559b4:
    // 0x2559b4: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x2559b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2559b8:
    // 0x2559b8: 0x0  nop
    ctx->pc = 0x2559b8u;
    // NOP
label_2559bc:
    // 0x2559bc: 0x0  nop
    ctx->pc = 0x2559bcu;
    // NOP
label_2559c0:
    // 0x2559c0: 0xc0133333  ll          $s3, 0x3333($zero)
    ctx->pc = 0x2559c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 13107); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2559c4:
    // 0x2559c4: 0xc119999a  ll          $t9, -0x6666($t0)
    ctx->pc = 0x2559c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 4294941082); SET_GPR_S32(ctx, 25, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2559c8:
    // 0x2559c8: 0x0  nop
    ctx->pc = 0x2559c8u;
    // NOP
label_2559cc:
    // 0x2559cc: 0x0  nop
    ctx->pc = 0x2559ccu;
    // NOP
label_2559d0:
    // 0x2559d0: 0x0  nop
    ctx->pc = 0x2559d0u;
    // NOP
label_2559d4:
    // 0x2559d4: 0xc11b3333  ll          $k1, 0x3333($t0)
    ctx->pc = 0x2559d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 13107); SET_GPR_S32(ctx, 27, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2559d8:
    // 0x2559d8: 0x3fc00000  .word       0x3FC00000                   # lui         $zero, 0x0 # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2559d8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2559dc:
    // 0x2559dc: 0x0  nop
    ctx->pc = 0x2559dcu;
    // NOP
label_2559e0:
    // 0x2559e0: 0x3dab92a6  .word       0x3DAB92A6                   # lui         $t3, 0x92A6 # 01A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2559e0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)37542 << 16));
label_2559e4:
    // 0x2559e4: 0x0  nop
    ctx->pc = 0x2559e4u;
    // NOP
label_2559e8:
    // 0x2559e8: 0x0  nop
    ctx->pc = 0x2559e8u;
    // NOP
label_2559ec:
    // 0x2559ec: 0x0  nop
    ctx->pc = 0x2559ecu;
    // NOP
label_2559f0:
    // 0x2559f0: 0x3e00adfd  .word       0x3E00ADFD                   # lui         $zero, 0xADFD # 02000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2559f0u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)44541 << 16));
label_2559f4:
    // 0x2559f4: 0x0  nop
    ctx->pc = 0x2559f4u;
    // NOP
label_2559f8:
    // 0x2559f8: 0x0  nop
    ctx->pc = 0x2559f8u;
    // NOP
label_2559fc:
    // 0x2559fc: 0x0  nop
    ctx->pc = 0x2559fcu;
    // NOP
label_255a00:
    // 0x255a00: 0x3e00adfd  .word       0x3E00ADFD                   # lui         $zero, 0xADFD # 02000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255a00u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)44541 << 16));
label_255a04:
    // 0x255a04: 0x0  nop
    ctx->pc = 0x255a04u;
    // NOP
label_255a08:
    // 0x255a08: 0x3d962051  .word       0x3D962051                   # lui         $s6, 0x2051 # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255a08u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)8273 << 16));
label_255a0c:
    // 0x255a0c: 0x0  nop
    ctx->pc = 0x255a0cu;
    // NOP
label_255a10:
    // 0x255a10: 0x3e00adfd  .word       0x3E00ADFD                   # lui         $zero, 0xADFD # 02000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255a10u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)44541 << 16));
label_255a14:
    // 0x255a14: 0x0  nop
    ctx->pc = 0x255a14u;
    // NOP
label_255a18:
    // 0x255a18: 0xbd80adfd  cache       0x00, -0x5203($t4)
    ctx->pc = 0x255a18u;
    // CACHE instruction (ignored)
label_255a1c:
    // 0x255a1c: 0x0  nop
    ctx->pc = 0x255a1cu;
    // NOP
label_255a20:
    // 0x255a20: 0xbdd6774f  cache       0x16, 0x774F($t6)
    ctx->pc = 0x255a20u;
    // CACHE instruction (ignored)
label_255a24:
    // 0x255a24: 0x0  nop
    ctx->pc = 0x255a24u;
    // NOP
label_255a28:
    // 0x255a28: 0xbdd6774f  cache       0x16, 0x774F($t6)
    ctx->pc = 0x255a28u;
    // CACHE instruction (ignored)
label_255a2c:
    // 0x255a2c: 0x0  nop
    ctx->pc = 0x255a2cu;
    // NOP
label_255a30:
    // 0x255a30: 0x0  nop
    ctx->pc = 0x255a30u;
    // NOP
label_255a34:
    // 0x255a34: 0x0  nop
    ctx->pc = 0x255a34u;
    // NOP
label_255a38:
    // 0x255a38: 0xbe00adfd  cache       0x00, -0x5203($s0)
    ctx->pc = 0x255a38u;
    // CACHE instruction (ignored)
label_255a3c:
    // 0x255a3c: 0x0  nop
    ctx->pc = 0x255a3cu;
    // NOP
label_255a40:
    // 0x255a40: 0x3dd6774f  .word       0x3DD6774F                   # lui         $s6, 0x774F # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255a40u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)30543 << 16));
label_255a44:
    // 0x255a44: 0x0  nop
    ctx->pc = 0x255a44u;
    // NOP
label_255a48:
    // 0x255a48: 0xbdebe9a4  cache       0x0B, -0x165C($t7)
    ctx->pc = 0x255a48u;
    // CACHE instruction (ignored)
label_255a4c:
    // 0x255a4c: 0x0  nop
    ctx->pc = 0x255a4cu;
    // NOP
label_255a50:
    // 0x255a50: 0xbd56774f  cache       0x16, 0x774F($t2)
    ctx->pc = 0x255a50u;
    // CACHE instruction (ignored)
label_255a54:
    // 0x255a54: 0x0  nop
    ctx->pc = 0x255a54u;
    // NOP
label_255a58:
    // 0x255a58: 0x3dc104fa  .word       0x3DC104FA                   # lui         $at, 0x4FA # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1274 << 16));
label_255a5c:
    // 0x255a5c: 0x0  nop
    ctx->pc = 0x255a5cu;
    // NOP
label_255a60:
    // 0x255a60: 0x0  nop
    ctx->pc = 0x255a60u;
    // NOP
label_255a64:
    // 0x255a64: 0x0  nop
    ctx->pc = 0x255a64u;
    // NOP
label_255a68:
    // 0x255a68: 0x3e00adfd  .word       0x3E00ADFD                   # lui         $zero, 0xADFD # 02000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255a68u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)44541 << 16));
label_255a6c:
    // 0x255a6c: 0x0  nop
    ctx->pc = 0x255a6cu;
    // NOP
label_255a70:
    // 0x255a70: 0x0  nop
    ctx->pc = 0x255a70u;
    // NOP
label_255a74:
    // 0x255a74: 0x0  nop
    ctx->pc = 0x255a74u;
    // NOP
label_255a78:
    // 0x255a78: 0x3debe9a4  .word       0x3DEBE9A4                   # lui         $t3, 0xE9A4 # 01E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255a78u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)59812 << 16));
label_255a7c:
    // 0x255a7c: 0x0  nop
    ctx->pc = 0x255a7cu;
    // NOP
label_255a80:
    // 0x255a80: 0xbe00adfd  cache       0x00, -0x5203($s0)
    ctx->pc = 0x255a80u;
    // CACHE instruction (ignored)
label_255a84:
    // 0x255a84: 0x0  nop
    ctx->pc = 0x255a84u;
    // NOP
label_255a88:
    // 0x255a88: 0x0  nop
    ctx->pc = 0x255a88u;
    // NOP
label_255a8c:
    // 0x255a8c: 0x0  nop
    ctx->pc = 0x255a8cu;
    // NOP
label_255a90:
    // 0x255a90: 0xbe00adfd  cache       0x00, -0x5203($s0)
    ctx->pc = 0x255a90u;
    // CACHE instruction (ignored)
label_255a94:
    // 0x255a94: 0x0  nop
    ctx->pc = 0x255a94u;
    // NOP
label_255a98:
    // 0x255a98: 0x0  nop
    ctx->pc = 0x255a98u;
    // NOP
label_255a9c:
    // 0x255a9c: 0x0  nop
    ctx->pc = 0x255a9cu;
    // NOP
label_255aa0:
    // 0x255aa0: 0xbe00adfd  cache       0x00, -0x5203($s0)
    ctx->pc = 0x255aa0u;
    // CACHE instruction (ignored)
label_255aa4:
    // 0x255aa4: 0x0  nop
    ctx->pc = 0x255aa4u;
    // NOP
label_255aa8:
    // 0x255aa8: 0x3dc104fa  .word       0x3DC104FA                   # lui         $at, 0x4FA # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1274 << 16));
label_255aac:
    // 0x255aac: 0x0  nop
    ctx->pc = 0x255aacu;
    // NOP
label_255ab0:
    // 0x255ab0: 0x0  nop
    ctx->pc = 0x255ab0u;
    // NOP
label_255ab4:
    // 0x255ab4: 0x0  nop
    ctx->pc = 0x255ab4u;
    // NOP
label_255ab8:
    // 0x255ab8: 0x0  nop
    ctx->pc = 0x255ab8u;
    // NOP
label_255abc:
    // 0x255abc: 0x0  nop
    ctx->pc = 0x255abcu;
    // NOP
label_255ac0:
    // 0x255ac0: 0x0  nop
    ctx->pc = 0x255ac0u;
    // NOP
label_255ac4:
    // 0x255ac4: 0x0  nop
    ctx->pc = 0x255ac4u;
    // NOP
label_255ac8:
    // 0x255ac8: 0xbdebe9a4  cache       0x0B, -0x165C($t7)
    ctx->pc = 0x255ac8u;
    // CACHE instruction (ignored)
label_255acc:
    // 0x255acc: 0x0  nop
    ctx->pc = 0x255accu;
    // NOP
label_255ad0:
    // 0x255ad0: 0xbd962051  cache       0x16, 0x2051($t4)
    ctx->pc = 0x255ad0u;
    // CACHE instruction (ignored)
label_255ad4:
    // 0x255ad4: 0x0  nop
    ctx->pc = 0x255ad4u;
    // NOP
label_255ad8:
    // 0x255ad8: 0x0  nop
    ctx->pc = 0x255ad8u;
    // NOP
label_255adc:
    // 0x255adc: 0x0  nop
    ctx->pc = 0x255adcu;
    // NOP
label_255ae0:
    // 0x255ae0: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x255ae0u;
    // CACHE instruction (ignored)
label_255ae4:
    // 0x255ae4: 0xc2c20000  ll          $v0, 0x0($s6)
    ctx->pc = 0x255ae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); SET_GPR_S32(ctx, 2, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255ae8:
    // 0x255ae8: 0xc218cccd  ll          $t8, -0x3333($s0)
    ctx->pc = 0x255ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4294954189); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255aec:
    // 0x255aec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255aecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255af0:
    // 0x255af0: 0x40d66666  .word       0x40D66666                   # ctc0        $s6, Status # 00000666 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255af0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x255AF0 raw=0x40D66666"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255af4:
    // 0x255af4: 0xc2626666  ll          $v0, 0x6666($s3)
    ctx->pc = 0x255af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26214); SET_GPR_S32(ctx, 2, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255af8:
    // 0x255af8: 0xc2480000  ll          $t0, 0x0($s2)
    ctx->pc = 0x255af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255afc:
    // 0x255afc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255afcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255b00:
    // 0x255b00: 0x41eccccd  .word       0x41ECCCCD                   # INVALID     $t7, $t4, -0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255b00u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x255B00 raw=0x41ECCCCD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255b04:
    // 0x255b04: 0xc2106666  ll          $s0, 0x6666($s0)
    ctx->pc = 0x255b04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 26214); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b08:
    // 0x255b08: 0xc23d3333  ll          $sp, 0x3333($s1)
    ctx->pc = 0x255b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 13107); SET_GPR_S32(ctx, 29, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b0c:
    // 0x255b0c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255b0cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255b10:
    // 0x255b10: 0xc1cc0000  ll          $t4, 0x0($t6)
    ctx->pc = 0x255b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b14:
    // 0x255b14: 0xc2440000  ll          $a0, 0x0($s2)
    ctx->pc = 0x255b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); SET_GPR_S32(ctx, 4, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b18:
    // 0x255b18: 0xc2480000  ll          $t0, 0x0($s2)
    ctx->pc = 0x255b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b1c:
    // 0x255b1c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255b1cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255b20:
    // 0x255b20: 0xc2266666  ll          $a2, 0x6666($s1)
    ctx->pc = 0x255b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 26214); SET_GPR_S32(ctx, 6, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b24:
    // 0x255b24: 0xc25acccd  ll          $k0, -0x3333($s2)
    ctx->pc = 0x255b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 4294954189); SET_GPR_S32(ctx, 26, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b28:
    // 0x255b28: 0x42213333  .word       0x42213333                   # INVALID     $s1, $at, 0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255b28u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x255B28 raw=0x42213333"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255b2c:
    // 0x255b2c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255b2cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255b30:
    // 0x255b30: 0xc2480000  ll          $t0, 0x0($s2)
    ctx->pc = 0x255b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b34:
    // 0x255b34: 0xc1d9999a  ll          $t9, -0x6666($t6)
    ctx->pc = 0x255b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294941082); SET_GPR_S32(ctx, 25, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b38:
    // 0x255b38: 0xc0cccccd  ll          $t4, -0x3333($a2)
    ctx->pc = 0x255b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 4294954189); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b3c:
    // 0x255b3c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255b3cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255b40:
    // 0x255b40: 0xc23d3333  ll          $sp, 0x3333($s1)
    ctx->pc = 0x255b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 13107); SET_GPR_S32(ctx, 29, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b44:
    // 0x255b44: 0xc258cccd  ll          $t8, -0x3333($s2)
    ctx->pc = 0x255b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 4294954189); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b48:
    // 0x255b48: 0xc2286666  ll          $t0, 0x6666($s1)
    ctx->pc = 0x255b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 26214); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b4c:
    // 0x255b4c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255b4cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255b50:
    // 0x255b50: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255b50u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x255B50 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255b54:
    // 0x255b54: 0xc280999a  ll          $zero, -0x6666($s4)
    ctx->pc = 0x255b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294941082); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b58:
    // 0x255b58: 0x41a40000  .word       0x41A40000                   # INVALID     $t5, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255b58u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x255B58 raw=0x41A40000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255b5c:
    // 0x255b5c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255b5cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255b60:
    // 0x255b60: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255b60u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x255B60 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255b64:
    // 0x255b64: 0xc1df3333  ll          $ra, 0x3333($t6)
    ctx->pc = 0x255b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 13107); SET_GPR_S32(ctx, 31, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b68:
    // 0x255b68: 0x3fd9999a  .word       0x3FD9999A                   # lui         $t9, 0x999A # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255b68u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_255b6c:
    // 0x255b6c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255b6cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255b70:
    // 0x255b70: 0x423e6666  .word       0x423E6666                   # INVALID     $s1, $fp, 0x6666 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255b70u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x255B70 raw=0x423E6666"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255b74:
    // 0x255b74: 0xc29a6666  ll          $k0, 0x6666($s4)
    ctx->pc = 0x255b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 26214); SET_GPR_S32(ctx, 26, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b78:
    // 0x255b78: 0xc1266666  ll          $a2, 0x6666($t1)
    ctx->pc = 0x255b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 26214); SET_GPR_S32(ctx, 6, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b7c:
    // 0x255b7c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255b7cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255b80:
    // 0x255b80: 0x40133333  .word       0x40133333                   # mfc0        $s3, Wired # 00000333 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255b80u;
    SET_GPR_S32(ctx, 19, (int32_t)ctx->cop0_wired);
label_255b84:
    // 0x255b84: 0xc2440000  ll          $a0, 0x0($s2)
    ctx->pc = 0x255b84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); SET_GPR_S32(ctx, 4, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b88:
    // 0x255b88: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255b88u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x255B88 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255b8c:
    // 0x255b8c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255b8cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255b90:
    // 0x255b90: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x255b90u;
    // CACHE instruction (ignored)
label_255b94:
    // 0x255b94: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x255b94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255b98:
    // 0x255b98: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255b98u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x255B98 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255b9c:
    // 0x255b9c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255b9cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255ba0:
    // 0x255ba0: 0x421a0000  .word       0x421A0000                   # INVALID     $s0, $k0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x255ba0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x255BA0 raw=0x421A0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255ba4:
    // 0x255ba4: 0xc2466666  ll          $a2, 0x6666($s2)
    ctx->pc = 0x255ba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 26214); SET_GPR_S32(ctx, 6, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255ba8:
    // 0x255ba8: 0x4240cccd  .word       0x4240CCCD                   # INVALID     $s2, $zero, -0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255ba8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x255BA8 raw=0x4240CCCD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255bac:
    // 0x255bac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255bacu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255bb0:
    // 0x255bb0: 0xc1033333  ll          $v1, 0x3333($t0)
    ctx->pc = 0x255bb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 13107); SET_GPR_S32(ctx, 3, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255bb4:
    // 0x255bb4: 0xc2c80000  ll          $t0, 0x0($s6)
    ctx->pc = 0x255bb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255bb8:
    // 0x255bb8: 0x0  nop
    ctx->pc = 0x255bb8u;
    // NOP
label_255bbc:
    // 0x255bbc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255bbcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255bc0:
    // 0x255bc0: 0xc23acccd  ll          $k0, -0x3333($s1)
    ctx->pc = 0x255bc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4294954189); SET_GPR_S32(ctx, 26, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255bc4:
    // 0x255bc4: 0xc2c00000  ll          $zero, 0x0($s6)
    ctx->pc = 0x255bc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255bc8:
    // 0x255bc8: 0x0  nop
    ctx->pc = 0x255bc8u;
    // NOP
label_255bcc:
    // 0x255bcc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255bccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255bd0:
    // 0x255bd0: 0xbecccccd  cache       0x0C, -0x3333($s6)
    ctx->pc = 0x255bd0u;
    // CACHE instruction (ignored)
label_255bd4:
    // 0x255bd4: 0xc2c33333  ll          $v1, 0x3333($s6)
    ctx->pc = 0x255bd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 13107); SET_GPR_S32(ctx, 3, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255bd8:
    // 0x255bd8: 0x41f4cccd  .word       0x41F4CCCD                   # INVALID     $t7, $s4, -0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255bd8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x255BD8 raw=0x41F4CCCD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255bdc:
    // 0x255bdc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255bdcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255be0:
    // 0x255be0: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x255be0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255be4:
    // 0x255be4: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x255be4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255be8:
    // 0x255be8: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x255be8u;
    // CACHE instruction (ignored)
label_255bec:
    // 0x255bec: 0x0  nop
    ctx->pc = 0x255becu;
    // NOP
label_255bf0:
    // 0x255bf0: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x255bf0u;
    // CACHE instruction (ignored)
label_255bf4:
    // 0x255bf4: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x255bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255bf8:
    // 0x255bf8: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x255bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255bfc:
    // 0x255bfc: 0x0  nop
    ctx->pc = 0x255bfcu;
    // NOP
label_255c00:
    // 0x255c00: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255c00u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255c04:
    // 0x255c04: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x255c04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255c08:
    // 0x255c08: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x255c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255c0c:
    // 0x255c0c: 0x0  nop
    ctx->pc = 0x255c0cu;
    // NOP
label_255c10:
    // 0x255c10: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x255c10u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_255c14:
    // 0x255c14: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x255c14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255c18:
    // 0x255c18: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x255c18u;
    // CACHE instruction (ignored)
label_255c1c:
    // 0x255c1c: 0x0  nop
    ctx->pc = 0x255c1cu;
    // NOP
label_255c20:
    // 0x255c20: 0x40400000  cfc0        $zero, Index
    ctx->pc = 0x255c20u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x255C20 raw=0x40400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255c24:
    // 0x255c24: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x255c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255c28:
    // 0x255c28: 0x3f000000  .word       0x3F000000                   # lui         $zero, 0x0 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255c28u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255c2c:
    // 0x255c2c: 0x0  nop
    ctx->pc = 0x255c2cu;
    // NOP
label_255c30:
    // 0x255c30: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255c30u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255c34:
    // 0x255c34: 0xc0c00000  ll          $zero, 0x0($a2)
    ctx->pc = 0x255c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255c38:
    // 0x255c38: 0x40400000  cfc0        $zero, Index
    ctx->pc = 0x255c38u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x255C38 raw=0x40400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255c3c:
    // 0x255c3c: 0x0  nop
    ctx->pc = 0x255c3cu;
    // NOP
label_255c40:
    // 0x255c40: 0xc0200000  ll          $zero, 0x0($at)
    ctx->pc = 0x255c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255c44:
    // 0x255c44: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x255c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255c48:
    // 0x255c48: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x255c48u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_255c4c:
    // 0x255c4c: 0x0  nop
    ctx->pc = 0x255c4cu;
    // NOP
label_255c50:
    // 0x255c50: 0xbf000000  cache       0x00, 0x0($t8)
    ctx->pc = 0x255c50u;
    // CACHE instruction (ignored)
label_255c54:
    // 0x255c54: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x255c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255c58:
    // 0x255c58: 0x40200000  dmfc0       $zero, Index
    ctx->pc = 0x255c58u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x255C58 raw=0x40200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255c5c:
    // 0x255c5c: 0x0  nop
    ctx->pc = 0x255c5cu;
    // NOP
label_255c60:
    // 0x255c60: 0xc1f00000  ll          $s0, 0x0($t7)
    ctx->pc = 0x255c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255c64:
    // 0x255c64: 0xc2340000  ll          $s4, 0x0($s1)
    ctx->pc = 0x255c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); SET_GPR_S32(ctx, 20, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255c68:
    // 0x255c68: 0xc12ccccd  ll          $t4, -0x3333($t1)
    ctx->pc = 0x255c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294954189); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255c6c:
    // 0x255c6c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255c6cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255c70:
    // 0x255c70: 0xc14b3333  ll          $t3, 0x3333($t2)
    ctx->pc = 0x255c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 13107); SET_GPR_S32(ctx, 11, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255c74:
    // 0x255c74: 0xc2a76666  ll          $a3, 0x6666($s5)
    ctx->pc = 0x255c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 26214); SET_GPR_S32(ctx, 7, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255c78:
    // 0x255c78: 0xc1cf3333  ll          $t7, 0x3333($t6)
    ctx->pc = 0x255c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 13107); SET_GPR_S32(ctx, 15, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255c7c:
    // 0x255c7c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255c7cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255c80:
    // 0x255c80: 0x410ccccd  .word       0x410CCCCD                   # INVALID     $t0, $t4, -0x3333 # 00000000 <InstrIdType: CPU_COP0_BC0>
    ctx->pc = 0x255c80u;
    // BC0 (Condition: 0xC) - Handled by branch logic
label_255c84:
    // 0x255c84: 0xc1f33333  ll          $s3, 0x3333($t7)
    ctx->pc = 0x255c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 13107); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255c88:
    // 0x255c88: 0xc1e0cccd  ll          $zero, -0x3333($t7)
    ctx->pc = 0x255c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294954189); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255c8c:
    // 0x255c8c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255c8cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255c90:
    // 0x255c90: 0x41d4cccd  .word       0x41D4CCCD                   # INVALID     $t6, $s4, -0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255c90u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x255C90 raw=0x41D4CCCD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255c94:
    // 0x255c94: 0xc2b53333  ll          $s5, 0x3333($s5)
    ctx->pc = 0x255c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 13107); SET_GPR_S32(ctx, 21, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255c98:
    // 0x255c98: 0xc09ccccd  ll          $gp, -0x3333($a0)
    ctx->pc = 0x255c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294954189); SET_GPR_S32(ctx, 28, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255c9c:
    // 0x255c9c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255c9cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255ca0:
    // 0x255ca0: 0x41b9999a  .word       0x41B9999A                   # INVALID     $t5, $t9, -0x6666 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255ca0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x255CA0 raw=0x41B9999A"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255ca4:
    // 0x255ca4: 0xc18c0000  ll          $t4, 0x0($t4)
    ctx->pc = 0x255ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255ca8:
    // 0x255ca8: 0x4039999a  .word       0x4039999A                   # dmfc0       $t9, WatchHi # 0000019A <InstrIdType: R5900_COP0>
    ctx->pc = 0x255ca8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x255CA8 raw=0x4039999A"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255cac:
    // 0x255cac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255cacu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255cb0:
    // 0x255cb0: 0x41e26666  .word       0x41E26666                   # INVALID     $t7, $v0, 0x6666 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255cb0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x255CB0 raw=0x41E26666"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255cb4:
    // 0x255cb4: 0xc2746666  ll          $s4, 0x6666($s3)
    ctx->pc = 0x255cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26214); SET_GPR_S32(ctx, 20, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255cb8:
    // 0x255cb8: 0x40d9999a  .word       0x40D9999A                   # ctc0        $t9, WatchHi # 0000019A <InstrIdType: R5900_COP0>
    ctx->pc = 0x255cb8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x255CB8 raw=0x40D9999A"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255cbc:
    // 0x255cbc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255cbcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255cc0:
    // 0x255cc0: 0xc181999a  ll          $at, -0x6666($t4)
    ctx->pc = 0x255cc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 4294941082); SET_GPR_S32(ctx, 1, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255cc4:
    // 0x255cc4: 0xc29e999a  ll          $fp, -0x6666($s4)
    ctx->pc = 0x255cc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294941082); SET_GPR_S32(ctx, 30, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255cc8:
    // 0x255cc8: 0x41ae6666  .word       0x41AE6666                   # INVALID     $t5, $t6, 0x6666 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255cc8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x255CC8 raw=0x41AE6666"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255ccc:
    // 0x255ccc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255cccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255cd0:
    // 0x255cd0: 0xc0c00000  ll          $zero, 0x0($a2)
    ctx->pc = 0x255cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255cd4:
    // 0x255cd4: 0xc1d0cccd  ll          $s0, -0x3333($t6)
    ctx->pc = 0x255cd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294954189); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255cd8:
    // 0x255cd8: 0x41accccd  .word       0x41ACCCCD                   # INVALID     $t5, $t4, -0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255cd8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x255CD8 raw=0x41ACCCCD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255cdc:
    // 0x255cdc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255cdcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255ce0:
    // 0x255ce0: 0x3dd6774f  .word       0x3DD6774F                   # lui         $s6, 0x774F # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255ce0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)30543 << 16));
label_255ce4:
    // 0x255ce4: 0x0  nop
    ctx->pc = 0x255ce4u;
    // NOP
label_255ce8:
    // 0x255ce8: 0xbdd6774f  cache       0x16, 0x774F($t6)
    ctx->pc = 0x255ce8u;
    // CACHE instruction (ignored)
label_255cec:
    // 0x255cec: 0x0  nop
    ctx->pc = 0x255cecu;
    // NOP
label_255cf0:
    // 0x255cf0: 0x3e20d97b  .word       0x3E20D97B                   # lui         $zero, 0xD97B # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255cf0u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)55675 << 16));
label_255cf4:
    // 0x255cf4: 0x0  nop
    ctx->pc = 0x255cf4u;
    // NOP
label_255cf8:
    // 0x255cf8: 0xbdd6774f  cache       0x16, 0x774F($t6)
    ctx->pc = 0x255cf8u;
    // CACHE instruction (ignored)
label_255cfc:
    // 0x255cfc: 0x0  nop
    ctx->pc = 0x255cfcu;
    // NOP
label_255d00:
    // 0x255d00: 0x3e20d97b  .word       0x3E20D97B                   # lui         $zero, 0xD97B # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255d00u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)55675 << 16));
label_255d04:
    // 0x255d04: 0x0  nop
    ctx->pc = 0x255d04u;
    // NOP
label_255d08:
    // 0x255d08: 0x3dd6774f  .word       0x3DD6774F                   # lui         $s6, 0x774F # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255d08u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)30543 << 16));
label_255d0c:
    // 0x255d0c: 0x0  nop
    ctx->pc = 0x255d0cu;
    // NOP
label_255d10:
    // 0x255d10: 0x3dd6774f  .word       0x3DD6774F                   # lui         $s6, 0x774F # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255d10u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)30543 << 16));
label_255d14:
    // 0x255d14: 0x0  nop
    ctx->pc = 0x255d14u;
    // NOP
label_255d18:
    // 0x255d18: 0x3dd6774f  .word       0x3DD6774F                   # lui         $s6, 0x774F # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255d18u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)30543 << 16));
label_255d1c:
    // 0x255d1c: 0x0  nop
    ctx->pc = 0x255d1cu;
    // NOP
label_255d20:
    // 0x255d20: 0xbd56774f  cache       0x16, 0x774F($t2)
    ctx->pc = 0x255d20u;
    // CACHE instruction (ignored)
label_255d24:
    // 0x255d24: 0x0  nop
    ctx->pc = 0x255d24u;
    // NOP
label_255d28:
    // 0x255d28: 0x3e56774f  .word       0x3E56774F                   # lui         $s6, 0x774F # 02400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255d28u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)30543 << 16));
label_255d2c:
    // 0x255d2c: 0x0  nop
    ctx->pc = 0x255d2cu;
    // NOP
label_255d30:
    // 0x255d30: 0xbe20d97b  cache       0x00, -0x2685($s1)
    ctx->pc = 0x255d30u;
    // CACHE instruction (ignored)
label_255d34:
    // 0x255d34: 0x0  nop
    ctx->pc = 0x255d34u;
    // NOP
label_255d38:
    // 0x255d38: 0x3dd6774f  .word       0x3DD6774F                   # lui         $s6, 0x774F # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255d38u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)30543 << 16));
label_255d3c:
    // 0x255d3c: 0x0  nop
    ctx->pc = 0x255d3cu;
    // NOP
label_255d40:
    // 0x255d40: 0xbdd6774f  cache       0x16, 0x774F($t6)
    ctx->pc = 0x255d40u;
    // CACHE instruction (ignored)
label_255d44:
    // 0x255d44: 0x0  nop
    ctx->pc = 0x255d44u;
    // NOP
label_255d48:
    // 0x255d48: 0xbdd6774f  cache       0x16, 0x774F($t6)
    ctx->pc = 0x255d48u;
    // CACHE instruction (ignored)
label_255d4c:
    // 0x255d4c: 0x0  nop
    ctx->pc = 0x255d4cu;
    // NOP
label_255d50:
    // 0x255d50: 0xbdd6774f  cache       0x16, 0x774F($t6)
    ctx->pc = 0x255d50u;
    // CACHE instruction (ignored)
label_255d54:
    // 0x255d54: 0x0  nop
    ctx->pc = 0x255d54u;
    // NOP
label_255d58:
    // 0x255d58: 0xbd56774f  cache       0x16, 0x774F($t2)
    ctx->pc = 0x255d58u;
    // CACHE instruction (ignored)
label_255d5c:
    // 0x255d5c: 0x0  nop
    ctx->pc = 0x255d5cu;
    // NOP
label_255d60:
    // 0x255d60: 0xc1300000  ll          $s0, 0x0($t1)
    ctx->pc = 0x255d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255d64:
    // 0x255d64: 0xc312199a  ll          $s2, 0x199A($t8)
    ctx->pc = 0x255d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 6554); SET_GPR_S32(ctx, 18, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255d68:
    // 0x255d68: 0x42c46666  .word       0x42C46666                   # INVALID     $s6, $a0, 0x6666 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255d68u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x255D68 raw=0x42C46666"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255d6c:
    // 0x255d6c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255d6cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255d70:
    // 0x255d70: 0x0  nop
    ctx->pc = 0x255d70u;
    // NOP
label_255d74:
    // 0x255d74: 0xc39d8000  ll          $sp, -0x8000($gp)
    ctx->pc = 0x255d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 4294934528); SET_GPR_S32(ctx, 29, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255d78:
    // 0x255d78: 0x431b3333  .word       0x431B3333                   # INVALID     $t8, $k1, 0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255d78u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x255D78 raw=0x431B3333"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255d7c:
    // 0x255d7c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255d7cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255d80:
    // 0x255d80: 0x0  nop
    ctx->pc = 0x255d80u;
    // NOP
label_255d84:
    // 0x255d84: 0xc3afc000  ll          $t7, -0x4000($sp)
    ctx->pc = 0x255d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4294950912); SET_GPR_S32(ctx, 15, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255d88:
    // 0x255d88: 0x43a33333  .word       0x43A33333                   # INVALID     $sp, $v1, 0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255d88u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1D at 0x255D88 raw=0x43A33333"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255d8c:
    // 0x255d8c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255d8cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255d90:
    // 0x255d90: 0x0  nop
    ctx->pc = 0x255d90u;
    // NOP
label_255d94:
    // 0x255d94: 0xc2120000  ll          $s2, 0x0($s0)
    ctx->pc = 0x255d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); SET_GPR_S32(ctx, 18, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255d98:
    // 0x255d98: 0x438ea666  .word       0x438EA666                   # INVALID     $gp, $t6, -0x599A # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255d98u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x255D98 raw=0x438EA666"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255d9c:
    // 0x255d9c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255d9cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255da0:
    // 0x255da0: 0xc0b00000  ll          $s0, 0x0($a1)
    ctx->pc = 0x255da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255da4:
    // 0x255da4: 0xc33d8000  ll          $sp, -0x8000($t9)
    ctx->pc = 0x255da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 4294934528); SET_GPR_S32(ctx, 29, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255da8:
    // 0x255da8: 0x4427c666  .word       0x4427C666                   # dmfc1       $a3, $f24 # 00000666 <InstrIdType: R5900_COP1>
    ctx->pc = 0x255da8u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x26 at 0x255DA8 raw=0x4427C666"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255dac:
    // 0x255dac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255dacu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255db0:
    // 0x255db0: 0x0  nop
    ctx->pc = 0x255db0u;
    // NOP
label_255db4:
    // 0x255db4: 0xc3a33333  ll          $v1, 0x3333($sp)
    ctx->pc = 0x255db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 13107); SET_GPR_S32(ctx, 3, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255db8:
    // 0x255db8: 0x43fc4000  .word       0x43FC4000                   # INVALID     $ra, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255db8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x255DB8 raw=0x43FC4000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255dbc:
    // 0x255dbc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255dbcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255dc0:
    // 0x255dc0: 0x40200000  dmfc0       $zero, Index
    ctx->pc = 0x255dc0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x255DC0 raw=0x40200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255dc4:
    // 0x255dc4: 0xc3ef7333  ll          $t7, 0x7333($ra)
    ctx->pc = 0x255dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 29491); SET_GPR_S32(ctx, 15, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255dc8:
    // 0x255dc8: 0xc3834000  ll          $v1, 0x4000($gp)
    ctx->pc = 0x255dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 16384); SET_GPR_S32(ctx, 3, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255dcc:
    // 0x255dcc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255dccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255dd0:
    // 0x255dd0: 0x0  nop
    ctx->pc = 0x255dd0u;
    // NOP
label_255dd4:
    // 0x255dd4: 0xc36b199a  ll          $t3, 0x199A($k1)
    ctx->pc = 0x255dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 6554); SET_GPR_S32(ctx, 11, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255dd8:
    // 0x255dd8: 0xc3644ccd  ll          $a0, 0x4CCD($k1)
    ctx->pc = 0x255dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 19661); SET_GPR_S32(ctx, 4, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255ddc:
    // 0x255ddc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255ddcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255de0:
    // 0x255de0: 0xc0333333  ll          $s3, 0x3333($at)
    ctx->pc = 0x255de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 13107); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255de4:
    // 0x255de4: 0xc350b333  ll          $s0, -0x4CCD($k0)
    ctx->pc = 0x255de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 4294947635); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255de8:
    // 0x255de8: 0xc2b6999a  ll          $s6, -0x6666($s5)
    ctx->pc = 0x255de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 4294941082); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255dec:
    // 0x255dec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255decu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255df0:
    // 0x255df0: 0x0  nop
    ctx->pc = 0x255df0u;
    // NOP
label_255df4:
    // 0x255df4: 0xc28d999a  ll          $t5, -0x6666($s4)
    ctx->pc = 0x255df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294941082); SET_GPR_S32(ctx, 13, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255df8:
    // 0x255df8: 0xc41f399a  lwc1        $f31, 0x399A($zero)
    ctx->pc = 0x255df8u;
    { uint32_t bits = FAST_READ32(0x399Au); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_255dfc:
    // 0x255dfc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255dfcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255e00:
    // 0x255e00: 0x0  nop
    ctx->pc = 0x255e00u;
    // NOP
label_255e04:
    // 0x255e04: 0xc3846666  ll          $a0, 0x6666($gp)
    ctx->pc = 0x255e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 26214); SET_GPR_S32(ctx, 4, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255e08:
    // 0x255e08: 0xc3f1f333  ll          $s1, -0xCCD($ra)
    ctx->pc = 0x255e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 4294964019); SET_GPR_S32(ctx, 17, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255e0c:
    // 0x255e0c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255e0cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255e10:
    // 0x255e10: 0xc1840000  ll          $a0, 0x0($t4)
    ctx->pc = 0x255e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 4, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255e14:
    // 0x255e14: 0xc3cd7333  ll          $t5, 0x7333($fp)
    ctx->pc = 0x255e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 29491); SET_GPR_S32(ctx, 13, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255e18:
    // 0x255e18: 0xc42a0ccd  lwc1        $f10, 0xCCD($at)
    ctx->pc = 0x255e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 3277)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_255e1c:
    // 0x255e1c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255e1cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255e20:
    // 0x255e20: 0x3f000000  .word       0x3F000000                   # lui         $zero, 0x0 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255e20u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255e24:
    // 0x255e24: 0xc154cccd  ll          $s4, -0x3333($t2)
    ctx->pc = 0x255e24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 4294954189); SET_GPR_S32(ctx, 20, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255e28:
    // 0x255e28: 0x3e99999a  .word       0x3E99999A                   # lui         $t9, 0x999A # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255e28u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_255e2c:
    // 0x255e2c: 0x0  nop
    ctx->pc = 0x255e2cu;
    // NOP
label_255e30:
    // 0x255e30: 0xbf666666  cache       0x06, 0x6666($k1)
    ctx->pc = 0x255e30u;
    // CACHE instruction (ignored)
label_255e34:
    // 0x255e34: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x255e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255e38:
    // 0x255e38: 0xbf000000  cache       0x00, 0x0($t8)
    ctx->pc = 0x255e38u;
    // CACHE instruction (ignored)
label_255e3c:
    // 0x255e3c: 0x0  nop
    ctx->pc = 0x255e3cu;
    // NOP
label_255e40:
    // 0x255e40: 0x3f19999a  .word       0x3F19999A                   # lui         $t9, 0x999A # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255e40u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_255e44:
    // 0x255e44: 0xc1926666  ll          $s2, 0x6666($t4)
    ctx->pc = 0x255e44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 26214); SET_GPR_S32(ctx, 18, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255e48:
    // 0x255e48: 0x40333333  .word       0x40333333                   # dmfc0       $s3, Wired # 00000333 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255e48u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x255E48 raw=0x40333333"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255e4c:
    // 0x255e4c: 0x0  nop
    ctx->pc = 0x255e4cu;
    // NOP
label_255e50:
    // 0x255e50: 0xbf19999a  cache       0x19, -0x6666($t8)
    ctx->pc = 0x255e50u;
    // CACHE instruction (ignored)
label_255e54:
    // 0x255e54: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x255e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255e58:
    // 0x255e58: 0xbff33333  cache       0x13, 0x3333($ra)
    ctx->pc = 0x255e58u;
    // CACHE instruction (ignored)
label_255e5c:
    // 0x255e5c: 0x0  nop
    ctx->pc = 0x255e5cu;
    // NOP
label_255e60:
    // 0x255e60: 0xbf000000  cache       0x00, 0x0($t8)
    ctx->pc = 0x255e60u;
    // CACHE instruction (ignored)
label_255e64:
    // 0x255e64: 0xbdcccccd  cache       0x0C, -0x3333($t6)
    ctx->pc = 0x255e64u;
    // CACHE instruction (ignored)
label_255e68:
    // 0x255e68: 0xc0f66666  ll          $s6, 0x6666($a3)
    ctx->pc = 0x255e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 26214); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255e6c:
    // 0x255e6c: 0x0  nop
    ctx->pc = 0x255e6cu;
    // NOP
label_255e70:
    // 0x255e70: 0x3f19999a  .word       0x3F19999A                   # lui         $t9, 0x999A # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255e70u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_255e74:
    // 0x255e74: 0xc1880000  ll          $t0, 0x0($t4)
    ctx->pc = 0x255e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255e78:
    // 0x255e78: 0xbf19999a  cache       0x19, -0x6666($t8)
    ctx->pc = 0x255e78u;
    // CACHE instruction (ignored)
label_255e7c:
    // 0x255e7c: 0x0  nop
    ctx->pc = 0x255e7cu;
    // NOP
label_255e80:
    // 0x255e80: 0x3f000000  .word       0x3F000000                   # lui         $zero, 0x0 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255e80u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255e84:
    // 0x255e84: 0xc154cccd  ll          $s4, -0x3333($t2)
    ctx->pc = 0x255e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 4294954189); SET_GPR_S32(ctx, 20, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255e88:
    // 0x255e88: 0x3e99999a  .word       0x3E99999A                   # lui         $t9, 0x999A # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255e88u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_255e8c:
    // 0x255e8c: 0x0  nop
    ctx->pc = 0x255e8cu;
    // NOP
label_255e90:
    // 0x255e90: 0xbf666666  cache       0x06, 0x6666($k1)
    ctx->pc = 0x255e90u;
    // CACHE instruction (ignored)
label_255e94:
    // 0x255e94: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x255e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255e98:
    // 0x255e98: 0xbf000000  cache       0x00, 0x0($t8)
    ctx->pc = 0x255e98u;
    // CACHE instruction (ignored)
label_255e9c:
    // 0x255e9c: 0x0  nop
    ctx->pc = 0x255e9cu;
    // NOP
label_255ea0:
    // 0x255ea0: 0x3f19999a  .word       0x3F19999A                   # lui         $t9, 0x999A # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255ea0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_255ea4:
    // 0x255ea4: 0xc1926666  ll          $s2, 0x6666($t4)
    ctx->pc = 0x255ea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 26214); SET_GPR_S32(ctx, 18, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255ea8:
    // 0x255ea8: 0x40333333  .word       0x40333333                   # dmfc0       $s3, Wired # 00000333 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255ea8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x255EA8 raw=0x40333333"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255eac:
    // 0x255eac: 0x0  nop
    ctx->pc = 0x255eacu;
    // NOP
label_255eb0:
    // 0x255eb0: 0xbf19999a  cache       0x19, -0x6666($t8)
    ctx->pc = 0x255eb0u;
    // CACHE instruction (ignored)
label_255eb4:
    // 0x255eb4: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x255eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255eb8:
    // 0x255eb8: 0xbff33333  cache       0x13, 0x3333($ra)
    ctx->pc = 0x255eb8u;
    // CACHE instruction (ignored)
label_255ebc:
    // 0x255ebc: 0x0  nop
    ctx->pc = 0x255ebcu;
    // NOP
label_255ec0:
    // 0x255ec0: 0xbf000000  cache       0x00, 0x0($t8)
    ctx->pc = 0x255ec0u;
    // CACHE instruction (ignored)
label_255ec4:
    // 0x255ec4: 0xbdcccccd  cache       0x0C, -0x3333($t6)
    ctx->pc = 0x255ec4u;
    // CACHE instruction (ignored)
label_255ec8:
    // 0x255ec8: 0xc0f66666  ll          $s6, 0x6666($a3)
    ctx->pc = 0x255ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 26214); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255ecc:
    // 0x255ecc: 0x0  nop
    ctx->pc = 0x255eccu;
    // NOP
label_255ed0:
    // 0x255ed0: 0x3f19999a  .word       0x3F19999A                   # lui         $t9, 0x999A # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255ed0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_255ed4:
    // 0x255ed4: 0xc1880000  ll          $t0, 0x0($t4)
    ctx->pc = 0x255ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255ed8:
    // 0x255ed8: 0xbf19999a  cache       0x19, -0x6666($t8)
    ctx->pc = 0x255ed8u;
    // CACHE instruction (ignored)
label_255edc:
    // 0x255edc: 0x0  nop
    ctx->pc = 0x255edcu;
    // NOP
label_255ee0:
    // 0x255ee0: 0xbcbcbaea  cache       0x1C, -0x4516($a1)
    ctx->pc = 0x255ee0u;
    // CACHE instruction (ignored)
label_255ee4:
    // 0x255ee4: 0xbd00adfc  cache       0x00, -0x5204($t0)
    ctx->pc = 0x255ee4u;
    // CACHE instruction (ignored)
label_255ee8:
    // 0x255ee8: 0x0  nop
    ctx->pc = 0x255ee8u;
    // NOP
label_255eec:
    // 0x255eec: 0x0  nop
    ctx->pc = 0x255eecu;
    // NOP
label_255ef0:
    // 0x255ef0: 0xbc4de32e  cache       0x0D, -0x1CD2($v0)
    ctx->pc = 0x255ef0u;
    // CACHE instruction (ignored)
label_255ef4:
    // 0x255ef4: 0x3bab92a6  xori        $t3, $sp, 0x92A6
    ctx->pc = 0x255ef4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 29) ^ (uint64_t)(uint16_t)37542);
label_255ef8:
    // 0x255ef8: 0x3cab92a6  .word       0x3CAB92A6                   # lui         $t3, 0x92A6 # 00A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255ef8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)37542 << 16));
label_255efc:
    // 0x255efc: 0x0  nop
    ctx->pc = 0x255efcu;
    // NOP
label_255f00:
    // 0x255f00: 0x3b09421f  xori        $t1, $t8, 0x421F
    ctx->pc = 0x255f00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) ^ (uint64_t)(uint16_t)16927);
label_255f04:
    // 0x255f04: 0x3acde32e  xori        $t5, $s6, 0xE32E
    ctx->pc = 0x255f04u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)58158);
label_255f08:
    // 0x255f08: 0x3c1a6a62  lui         $k0, 0x6A62
    ctx->pc = 0x255f08u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)27234 << 16));
label_255f0c:
    // 0x255f0c: 0x0  nop
    ctx->pc = 0x255f0cu;
    // NOP
label_255f10:
    // 0x255f10: 0x3cc54f0b  .word       0x3CC54F0B                   # lui         $a1, 0x4F0B # 00C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255f10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20235 << 16));
label_255f14:
    // 0x255f14: 0xbcab92a6  cache       0x0B, -0x6D5A($a1)
    ctx->pc = 0x255f14u;
    // CACHE instruction (ignored)
label_255f18:
    // 0x255f18: 0x3c2b92a6  .word       0x3C2B92A6                   # lui         $t3, 0x92A6 # 00200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255f18u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)37542 << 16));
label_255f1c:
    // 0x255f1c: 0x0  nop
    ctx->pc = 0x255f1cu;
    // NOP
label_255f20:
    // 0x255f20: 0xbc09421f  cache       0x09, 0x421F($zero)
    ctx->pc = 0x255f20u;
    // CACHE instruction (ignored)
label_255f24:
    // 0x255f24: 0xbbf033b5  swr         $s0, 0x33B5($ra)
    ctx->pc = 0x255f24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 13237); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_255f28:
    // 0x255f28: 0x3bab92a6  xori        $t3, $sp, 0x92A6
    ctx->pc = 0x255f28u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 29) ^ (uint64_t)(uint16_t)37542);
label_255f2c:
    // 0x255f2c: 0x0  nop
    ctx->pc = 0x255f2cu;
    // NOP
label_255f30:
    // 0x255f30: 0xbc2b92a6  cache       0x0B, -0x6D5A($at)
    ctx->pc = 0x255f30u;
    // CACHE instruction (ignored)
label_255f34:
    // 0x255f34: 0x3ce79f94  .word       0x3CE79F94                   # lui         $a3, 0x9F94 # 00E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255f34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40852 << 16));
label_255f38:
    // 0x255f38: 0xbb4de32e  swr         $t5, -0x1CD2($k0)
    ctx->pc = 0x255f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 4294959918); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_255f3c:
    // 0x255f3c: 0x0  nop
    ctx->pc = 0x255f3cu;
    // NOP
label_255f40:
    // 0x255f40: 0xbcbcbaea  cache       0x1C, -0x4516($a1)
    ctx->pc = 0x255f40u;
    // CACHE instruction (ignored)
label_255f44:
    // 0x255f44: 0xbd00adfc  cache       0x00, -0x5204($t0)
    ctx->pc = 0x255f44u;
    // CACHE instruction (ignored)
label_255f48:
    // 0x255f48: 0x0  nop
    ctx->pc = 0x255f48u;
    // NOP
label_255f4c:
    // 0x255f4c: 0x0  nop
    ctx->pc = 0x255f4cu;
    // NOP
label_255f50:
    // 0x255f50: 0xbc4de32e  cache       0x0D, -0x1CD2($v0)
    ctx->pc = 0x255f50u;
    // CACHE instruction (ignored)
label_255f54:
    // 0x255f54: 0x3bab92a6  xori        $t3, $sp, 0x92A6
    ctx->pc = 0x255f54u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 29) ^ (uint64_t)(uint16_t)37542);
label_255f58:
    // 0x255f58: 0x3cab92a6  .word       0x3CAB92A6                   # lui         $t3, 0x92A6 # 00A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255f58u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)37542 << 16));
label_255f5c:
    // 0x255f5c: 0x0  nop
    ctx->pc = 0x255f5cu;
    // NOP
label_255f60:
    // 0x255f60: 0x3b09421f  xori        $t1, $t8, 0x421F
    ctx->pc = 0x255f60u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) ^ (uint64_t)(uint16_t)16927);
label_255f64:
    // 0x255f64: 0x3acde32e  xori        $t5, $s6, 0xE32E
    ctx->pc = 0x255f64u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)58158);
label_255f68:
    // 0x255f68: 0x3c1a6a62  lui         $k0, 0x6A62
    ctx->pc = 0x255f68u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)27234 << 16));
label_255f6c:
    // 0x255f6c: 0x0  nop
    ctx->pc = 0x255f6cu;
    // NOP
label_255f70:
    // 0x255f70: 0x3cc54f0b  .word       0x3CC54F0B                   # lui         $a1, 0x4F0B # 00C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255f70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20235 << 16));
label_255f74:
    // 0x255f74: 0xbcab92a6  cache       0x0B, -0x6D5A($a1)
    ctx->pc = 0x255f74u;
    // CACHE instruction (ignored)
label_255f78:
    // 0x255f78: 0x3c2b92a6  .word       0x3C2B92A6                   # lui         $t3, 0x92A6 # 00200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255f78u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)37542 << 16));
label_255f7c:
    // 0x255f7c: 0x0  nop
    ctx->pc = 0x255f7cu;
    // NOP
label_255f80:
    // 0x255f80: 0xbc09421f  cache       0x09, 0x421F($zero)
    ctx->pc = 0x255f80u;
    // CACHE instruction (ignored)
label_255f84:
    // 0x255f84: 0xbbf033b5  swr         $s0, 0x33B5($ra)
    ctx->pc = 0x255f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 13237); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_255f88:
    // 0x255f88: 0x3bab92a6  xori        $t3, $sp, 0x92A6
    ctx->pc = 0x255f88u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 29) ^ (uint64_t)(uint16_t)37542);
label_255f8c:
    // 0x255f8c: 0x0  nop
    ctx->pc = 0x255f8cu;
    // NOP
label_255f90:
    // 0x255f90: 0xbc2b92a6  cache       0x0B, -0x6D5A($at)
    ctx->pc = 0x255f90u;
    // CACHE instruction (ignored)
label_255f94:
    // 0x255f94: 0x3ce79f94  .word       0x3CE79F94                   # lui         $a3, 0x9F94 # 00E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255f94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40852 << 16));
label_255f98:
    // 0x255f98: 0xbb4de32e  swr         $t5, -0x1CD2($k0)
    ctx->pc = 0x255f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 4294959918); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_255f9c:
    // 0x255f9c: 0x0  nop
    ctx->pc = 0x255f9cu;
    // NOP
label_255fa0:
    // 0x255fa0: 0x0  nop
    ctx->pc = 0x255fa0u;
    // NOP
label_255fa4:
    // 0x255fa4: 0x0  nop
    ctx->pc = 0x255fa4u;
    // NOP
label_255fa8:
    // 0x255fa8: 0x0  nop
    ctx->pc = 0x255fa8u;
    // NOP
label_255fac:
    // 0x255fac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255facu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255fb0:
    // 0x255fb0: 0x0  nop
    ctx->pc = 0x255fb0u;
    // NOP
label_255fb4:
    // 0x255fb4: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x255fb4u;
    // CACHE instruction (ignored)
label_255fb8:
    // 0x255fb8: 0x0  nop
    ctx->pc = 0x255fb8u;
    // NOP
label_255fbc:
    // 0x255fbc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255fbcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255fc0:
    // 0x255fc0: 0x40933333  .word       0x40933333                   # mtc0        $s3, Wired # 00000333 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255fc0u;
    ctx->cop0_wired = GPR_U32(ctx, 19) & 0x3F; ctx->cop0_random = 47;
label_255fc4:
    // 0x255fc4: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x255fc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255fc8:
    // 0x255fc8: 0x400ccccd  .word       0x400CCCCD                   # mfc0        $t4, Reserved25 # 000004CD <InstrIdType: R5900_COP0>
    ctx->pc = 0x255fc8u;
    SET_GPR_S32(ctx, 12, (int32_t)ctx->cop0_perf);
label_255fcc:
    // 0x255fcc: 0x0  nop
    ctx->pc = 0x255fccu;
    // NOP
label_255fd0:
    // 0x255fd0: 0x40f33333  .word       0x40F33333                   # INVALID     $a3, $s3, 0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255fd0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x7 at 0x255FD0 raw=0x40F33333"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255fd4:
    // 0x255fd4: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x255fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255fd8:
    // 0x255fd8: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x255fd8u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_255fdc:
    // 0x255fdc: 0x0  nop
    ctx->pc = 0x255fdcu;
    // NOP
label_255fe0:
    // 0x255fe0: 0xc0866666  ll          $a2, 0x6666($a0)
    ctx->pc = 0x255fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 26214); SET_GPR_S32(ctx, 6, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255fe4:
    // 0x255fe4: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x255fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255fe8:
    // 0x255fe8: 0xc0333333  ll          $s3, 0x3333($at)
    ctx->pc = 0x255fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 13107); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255fec:
    // 0x255fec: 0x0  nop
    ctx->pc = 0x255fecu;
    // NOP
label_255ff0:
    // 0x255ff0: 0xc0f9999a  ll          $t9, -0x6666($a3)
    ctx->pc = 0x255ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294941082); SET_GPR_S32(ctx, 25, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255ff4:
    // 0x255ff4: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x255ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255ff8:
    // 0x255ff8: 0x40333333  .word       0x40333333                   # dmfc0       $s3, Wired # 00000333 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255ff8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x255FF8 raw=0x40333333"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255ffc:
    // 0x255ffc: 0x0  nop
    ctx->pc = 0x255ffcu;
    // NOP
label_256000:
    // 0x256000: 0x400ccccd  .word       0x400CCCCD                   # mfc0        $t4, Reserved25 # 000004CD <InstrIdType: R5900_COP0>
    ctx->pc = 0x256000u;
    SET_GPR_S32(ctx, 12, (int32_t)ctx->cop0_perf);
label_256004:
    // 0x256004: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x256004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_256008:
    // 0x256008: 0x40e00000  .word       0x40E00000                   # INVALID     $a3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x256008u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x7 at 0x256008 raw=0x40E00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25600c:
    // 0x25600c: 0x0  nop
    ctx->pc = 0x25600cu;
    // NOP
label_256010:
    // 0x256010: 0x41bc0000  .word       0x41BC0000                   # INVALID     $t5, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x256010u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x256010 raw=0x41BC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256014:
    // 0x256014: 0x41a4cccd  .word       0x41A4CCCD                   # INVALID     $t5, $a0, -0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x256014u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x256014 raw=0x41A4CCCD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256018:
    // 0x256018: 0x41333333  .word       0x41333333                   # INVALID     $t1, $s3, 0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x256018u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x256018 raw=0x41333333"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25601c:
    // 0x25601c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25601cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_256020:
    // 0x256020: 0x421a0000  .word       0x421A0000                   # INVALID     $s0, $k0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x256020u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x256020 raw=0x421A0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256024:
    // 0x256024: 0x4114cccd  .word       0x4114CCCD                   # INVALID     $t0, $s4, -0x3333 # 00000000 <InstrIdType: CPU_COP0_BC0>
    ctx->pc = 0x256024u;
    // BC0 (Condition: 0x14) - Handled by branch logic
label_256028:
    // 0x256028: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x256028u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x256028 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25602c:
    // 0x25602c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25602cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_256030:
    // 0x256030: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x256030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_256034:
    // 0x256034: 0x4039999a  .word       0x4039999A                   # dmfc0       $t9, WatchHi # 0000019A <InstrIdType: R5900_COP0>
    ctx->pc = 0x256034u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x256034 raw=0x4039999A"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256038:
    // 0x256038: 0xc1666666  ll          $a2, 0x6666($t3)
    ctx->pc = 0x256038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26214); SET_GPR_S32(ctx, 6, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_25603c:
    // 0x25603c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25603cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_256040:
    // 0x256040: 0xc21e0000  ll          $fp, 0x0($s0)
    ctx->pc = 0x256040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); SET_GPR_S32(ctx, 30, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_256044:
    // 0x256044: 0x3fa66666  .word       0x3FA66666                   # lui         $a2, 0x6666 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x256044u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
label_256048:
    // 0x256048: 0x4169999a  .word       0x4169999A                   # INVALID     $t3, $t1, -0x6666 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x256048u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x256048 raw=0x4169999A"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25604c:
    // 0x25604c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25604cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_256050:
    // 0x256050: 0x413ccccd  .word       0x413CCCCD                   # INVALID     $t1, $gp, -0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x256050u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x256050 raw=0x413CCCCD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256054:
    // 0x256054: 0xc0d00000  ll          $s0, 0x0($a2)
    ctx->pc = 0x256054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_256058:
    // 0x256058: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x256058u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x256058 raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25605c:
    // 0x25605c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25605cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_256060:
    // 0x256060: 0xbd56774f  cache       0x16, 0x774F($t2)
    ctx->pc = 0x256060u;
    // CACHE instruction (ignored)
label_256064:
    // 0x256064: 0x0  nop
    ctx->pc = 0x256064u;
    // NOP
label_256068:
    // 0x256068: 0x3debe9a4  .word       0x3DEBE9A4                   # lui         $t3, 0xE9A4 # 01E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x256068u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)59812 << 16));
label_25606c:
    // 0x25606c: 0x0  nop
    ctx->pc = 0x25606cu;
    // NOP
label_256070:
    // 0x256070: 0xbdd6774f  cache       0x16, 0x774F($t6)
    ctx->pc = 0x256070u;
    // CACHE instruction (ignored)
label_256074:
    // 0x256074: 0x0  nop
    ctx->pc = 0x256074u;
    // NOP
label_256078:
    // 0x256078: 0x3e4bbe24  .word       0x3E4BBE24                   # lui         $t3, 0xBE24 # 02400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x256078u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)48676 << 16));
label_25607c:
    // 0x25607c: 0x0  nop
    ctx->pc = 0x25607cu;
    // NOP
label_256080:
    // 0x256080: 0x3d962051  .word       0x3D962051                   # lui         $s6, 0x2051 # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x256080u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)8273 << 16));
label_256084:
    // 0x256084: 0x0  nop
    ctx->pc = 0x256084u;
    // NOP
label_256088:
    // 0x256088: 0xbdd6774f  cache       0x16, 0x774F($t6)
    ctx->pc = 0x256088u;
    // CACHE instruction (ignored)
label_25608c:
    // 0x25608c: 0x0  nop
    ctx->pc = 0x25608cu;
    // NOP
label_256090:
    // 0x256090: 0xbd962051  cache       0x16, 0x2051($t4)
    ctx->pc = 0x256090u;
    // CACHE instruction (ignored)
label_256094:
    // 0x256094: 0x0  nop
    ctx->pc = 0x256094u;
    // NOP
label_256098:
    // 0x256098: 0xbe4bbe24  cache       0x0B, -0x41DC($s2)
    ctx->pc = 0x256098u;
    // CACHE instruction (ignored)
label_25609c:
    // 0x25609c: 0x0  nop
    ctx->pc = 0x25609cu;
    // NOP
label_2560a0:
    // 0x2560a0: 0xbe364bd0  cache       0x16, 0x4BD0($s1)
    ctx->pc = 0x2560a0u;
    // CACHE instruction (ignored)
label_2560a4:
    // 0x2560a4: 0x0  nop
    ctx->pc = 0x2560a4u;
    // NOP
label_2560a8:
    // 0x2560a8: 0x3d56774f  .word       0x3D56774F                   # lui         $s6, 0x774F # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2560a8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)30543 << 16));
label_2560ac:
    // 0x2560ac: 0x0  nop
    ctx->pc = 0x2560acu;
    // NOP
label_2560b0:
    // 0x2560b0: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x2560b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2560b4:
    // 0x2560b4: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x2560b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2560b8:
    // 0x2560b8: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x2560b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2560bc:
    // 0x2560bc: 0x0  nop
    ctx->pc = 0x2560bcu;
    // NOP
label_2560c0:
    // 0x2560c0: 0x40a00000  dmtc0       $zero, Index
    ctx->pc = 0x2560c0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x2560C0 raw=0x40A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2560c4:
    // 0x2560c4: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x2560c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    ctx->pc = 0x2560c8u;
    return;
}

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

// Function: FUN_001d49b0
// Address: 0x1d49b0 - 0x254d4c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_001d49b0_part136(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x216860u: goto label_216860;
        case 0x216864u: goto label_216864;
        case 0x216868u: goto label_216868;
        case 0x21686cu: goto label_21686c;
        case 0x216870u: goto label_216870;
        case 0x216874u: goto label_216874;
        case 0x216878u: goto label_216878;
        case 0x21687cu: goto label_21687c;
        case 0x216880u: goto label_216880;
        case 0x216884u: goto label_216884;
        case 0x216888u: goto label_216888;
        case 0x21688cu: goto label_21688c;
        case 0x216890u: goto label_216890;
        case 0x216894u: goto label_216894;
        case 0x216898u: goto label_216898;
        case 0x21689cu: goto label_21689c;
        case 0x2168a0u: goto label_2168a0;
        case 0x2168a4u: goto label_2168a4;
        case 0x2168a8u: goto label_2168a8;
        case 0x2168acu: goto label_2168ac;
        case 0x2168b0u: goto label_2168b0;
        case 0x2168b4u: goto label_2168b4;
        case 0x2168b8u: goto label_2168b8;
        case 0x2168bcu: goto label_2168bc;
        case 0x2168c0u: goto label_2168c0;
        case 0x2168c4u: goto label_2168c4;
        case 0x2168c8u: goto label_2168c8;
        case 0x2168ccu: goto label_2168cc;
        case 0x2168d0u: goto label_2168d0;
        case 0x2168d4u: goto label_2168d4;
        case 0x2168d8u: goto label_2168d8;
        case 0x2168dcu: goto label_2168dc;
        case 0x2168e0u: goto label_2168e0;
        case 0x2168e4u: goto label_2168e4;
        case 0x2168e8u: goto label_2168e8;
        case 0x2168ecu: goto label_2168ec;
        case 0x2168f0u: goto label_2168f0;
        case 0x2168f4u: goto label_2168f4;
        case 0x2168f8u: goto label_2168f8;
        case 0x2168fcu: goto label_2168fc;
        case 0x216900u: goto label_216900;
        case 0x216904u: goto label_216904;
        case 0x216908u: goto label_216908;
        case 0x21690cu: goto label_21690c;
        case 0x216910u: goto label_216910;
        case 0x216914u: goto label_216914;
        case 0x216918u: goto label_216918;
        case 0x21691cu: goto label_21691c;
        case 0x216920u: goto label_216920;
        case 0x216924u: goto label_216924;
        case 0x216928u: goto label_216928;
        case 0x21692cu: goto label_21692c;
        case 0x216930u: goto label_216930;
        case 0x216934u: goto label_216934;
        case 0x216938u: goto label_216938;
        case 0x21693cu: goto label_21693c;
        case 0x216940u: goto label_216940;
        case 0x216944u: goto label_216944;
        case 0x216948u: goto label_216948;
        case 0x21694cu: goto label_21694c;
        case 0x216950u: goto label_216950;
        case 0x216954u: goto label_216954;
        case 0x216958u: goto label_216958;
        case 0x21695cu: goto label_21695c;
        case 0x216960u: goto label_216960;
        case 0x216964u: goto label_216964;
        case 0x216968u: goto label_216968;
        case 0x21696cu: goto label_21696c;
        case 0x216970u: goto label_216970;
        case 0x216974u: goto label_216974;
        case 0x216978u: goto label_216978;
        case 0x21697cu: goto label_21697c;
        case 0x216980u: goto label_216980;
        case 0x216984u: goto label_216984;
        case 0x216988u: goto label_216988;
        case 0x21698cu: goto label_21698c;
        case 0x216990u: goto label_216990;
        case 0x216994u: goto label_216994;
        case 0x216998u: goto label_216998;
        case 0x21699cu: goto label_21699c;
        case 0x2169a0u: goto label_2169a0;
        case 0x2169a4u: goto label_2169a4;
        case 0x2169a8u: goto label_2169a8;
        case 0x2169acu: goto label_2169ac;
        case 0x2169b0u: goto label_2169b0;
        case 0x2169b4u: goto label_2169b4;
        case 0x2169b8u: goto label_2169b8;
        case 0x2169bcu: goto label_2169bc;
        case 0x2169c0u: goto label_2169c0;
        case 0x2169c4u: goto label_2169c4;
        case 0x2169c8u: goto label_2169c8;
        case 0x2169ccu: goto label_2169cc;
        case 0x2169d0u: goto label_2169d0;
        case 0x2169d4u: goto label_2169d4;
        case 0x2169d8u: goto label_2169d8;
        case 0x2169dcu: goto label_2169dc;
        case 0x2169e0u: goto label_2169e0;
        case 0x2169e4u: goto label_2169e4;
        case 0x2169e8u: goto label_2169e8;
        case 0x2169ecu: goto label_2169ec;
        case 0x2169f0u: goto label_2169f0;
        case 0x2169f4u: goto label_2169f4;
        case 0x2169f8u: goto label_2169f8;
        case 0x2169fcu: goto label_2169fc;
        case 0x216a00u: goto label_216a00;
        case 0x216a04u: goto label_216a04;
        case 0x216a08u: goto label_216a08;
        case 0x216a0cu: goto label_216a0c;
        case 0x216a10u: goto label_216a10;
        case 0x216a14u: goto label_216a14;
        case 0x216a18u: goto label_216a18;
        case 0x216a1cu: goto label_216a1c;
        case 0x216a20u: goto label_216a20;
        case 0x216a24u: goto label_216a24;
        case 0x216a28u: goto label_216a28;
        case 0x216a2cu: goto label_216a2c;
        case 0x216a30u: goto label_216a30;
        case 0x216a34u: goto label_216a34;
        case 0x216a38u: goto label_216a38;
        case 0x216a3cu: goto label_216a3c;
        case 0x216a40u: goto label_216a40;
        case 0x216a44u: goto label_216a44;
        case 0x216a48u: goto label_216a48;
        case 0x216a4cu: goto label_216a4c;
        case 0x216a50u: goto label_216a50;
        case 0x216a54u: goto label_216a54;
        case 0x216a58u: goto label_216a58;
        case 0x216a5cu: goto label_216a5c;
        case 0x216a60u: goto label_216a60;
        case 0x216a64u: goto label_216a64;
        case 0x216a68u: goto label_216a68;
        case 0x216a6cu: goto label_216a6c;
        case 0x216a70u: goto label_216a70;
        case 0x216a74u: goto label_216a74;
        case 0x216a78u: goto label_216a78;
        case 0x216a7cu: goto label_216a7c;
        case 0x216a80u: goto label_216a80;
        case 0x216a84u: goto label_216a84;
        case 0x216a88u: goto label_216a88;
        case 0x216a8cu: goto label_216a8c;
        case 0x216a90u: goto label_216a90;
        case 0x216a94u: goto label_216a94;
        case 0x216a98u: goto label_216a98;
        case 0x216a9cu: goto label_216a9c;
        case 0x216aa0u: goto label_216aa0;
        case 0x216aa4u: goto label_216aa4;
        case 0x216aa8u: goto label_216aa8;
        case 0x216aacu: goto label_216aac;
        case 0x216ab0u: goto label_216ab0;
        case 0x216ab4u: goto label_216ab4;
        case 0x216ab8u: goto label_216ab8;
        case 0x216abcu: goto label_216abc;
        case 0x216ac0u: goto label_216ac0;
        case 0x216ac4u: goto label_216ac4;
        case 0x216ac8u: goto label_216ac8;
        case 0x216accu: goto label_216acc;
        case 0x216ad0u: goto label_216ad0;
        case 0x216ad4u: goto label_216ad4;
        case 0x216ad8u: goto label_216ad8;
        case 0x216adcu: goto label_216adc;
        case 0x216ae0u: goto label_216ae0;
        case 0x216ae4u: goto label_216ae4;
        case 0x216ae8u: goto label_216ae8;
        case 0x216aecu: goto label_216aec;
        case 0x216af0u: goto label_216af0;
        case 0x216af4u: goto label_216af4;
        case 0x216af8u: goto label_216af8;
        case 0x216afcu: goto label_216afc;
        case 0x216b00u: goto label_216b00;
        case 0x216b04u: goto label_216b04;
        case 0x216b08u: goto label_216b08;
        case 0x216b0cu: goto label_216b0c;
        case 0x216b10u: goto label_216b10;
        case 0x216b14u: goto label_216b14;
        case 0x216b18u: goto label_216b18;
        case 0x216b1cu: goto label_216b1c;
        case 0x216b20u: goto label_216b20;
        case 0x216b24u: goto label_216b24;
        case 0x216b28u: goto label_216b28;
        case 0x216b2cu: goto label_216b2c;
        case 0x216b30u: goto label_216b30;
        case 0x216b34u: goto label_216b34;
        case 0x216b38u: goto label_216b38;
        case 0x216b3cu: goto label_216b3c;
        case 0x216b40u: goto label_216b40;
        case 0x216b44u: goto label_216b44;
        case 0x216b48u: goto label_216b48;
        case 0x216b4cu: goto label_216b4c;
        case 0x216b50u: goto label_216b50;
        case 0x216b54u: goto label_216b54;
        case 0x216b58u: goto label_216b58;
        case 0x216b5cu: goto label_216b5c;
        case 0x216b60u: goto label_216b60;
        case 0x216b64u: goto label_216b64;
        case 0x216b68u: goto label_216b68;
        case 0x216b6cu: goto label_216b6c;
        case 0x216b70u: goto label_216b70;
        case 0x216b74u: goto label_216b74;
        case 0x216b78u: goto label_216b78;
        case 0x216b7cu: goto label_216b7c;
        case 0x216b80u: goto label_216b80;
        case 0x216b84u: goto label_216b84;
        case 0x216b88u: goto label_216b88;
        case 0x216b8cu: goto label_216b8c;
        case 0x216b90u: goto label_216b90;
        case 0x216b94u: goto label_216b94;
        case 0x216b98u: goto label_216b98;
        case 0x216b9cu: goto label_216b9c;
        case 0x216ba0u: goto label_216ba0;
        case 0x216ba4u: goto label_216ba4;
        case 0x216ba8u: goto label_216ba8;
        case 0x216bacu: goto label_216bac;
        case 0x216bb0u: goto label_216bb0;
        case 0x216bb4u: goto label_216bb4;
        case 0x216bb8u: goto label_216bb8;
        case 0x216bbcu: goto label_216bbc;
        case 0x216bc0u: goto label_216bc0;
        case 0x216bc4u: goto label_216bc4;
        case 0x216bc8u: goto label_216bc8;
        case 0x216bccu: goto label_216bcc;
        case 0x216bd0u: goto label_216bd0;
        case 0x216bd4u: goto label_216bd4;
        case 0x216bd8u: goto label_216bd8;
        case 0x216bdcu: goto label_216bdc;
        case 0x216be0u: goto label_216be0;
        case 0x216be4u: goto label_216be4;
        case 0x216be8u: goto label_216be8;
        case 0x216becu: goto label_216bec;
        case 0x216bf0u: goto label_216bf0;
        case 0x216bf4u: goto label_216bf4;
        case 0x216bf8u: goto label_216bf8;
        case 0x216bfcu: goto label_216bfc;
        case 0x216c00u: goto label_216c00;
        case 0x216c04u: goto label_216c04;
        case 0x216c08u: goto label_216c08;
        case 0x216c0cu: goto label_216c0c;
        case 0x216c10u: goto label_216c10;
        case 0x216c14u: goto label_216c14;
        case 0x216c18u: goto label_216c18;
        case 0x216c1cu: goto label_216c1c;
        case 0x216c20u: goto label_216c20;
        case 0x216c24u: goto label_216c24;
        case 0x216c28u: goto label_216c28;
        case 0x216c2cu: goto label_216c2c;
        case 0x216c30u: goto label_216c30;
        case 0x216c34u: goto label_216c34;
        case 0x216c38u: goto label_216c38;
        case 0x216c3cu: goto label_216c3c;
        case 0x216c40u: goto label_216c40;
        case 0x216c44u: goto label_216c44;
        case 0x216c48u: goto label_216c48;
        case 0x216c4cu: goto label_216c4c;
        case 0x216c50u: goto label_216c50;
        case 0x216c54u: goto label_216c54;
        case 0x216c58u: goto label_216c58;
        case 0x216c5cu: goto label_216c5c;
        case 0x216c60u: goto label_216c60;
        case 0x216c64u: goto label_216c64;
        case 0x216c68u: goto label_216c68;
        case 0x216c6cu: goto label_216c6c;
        case 0x216c70u: goto label_216c70;
        case 0x216c74u: goto label_216c74;
        case 0x216c78u: goto label_216c78;
        case 0x216c7cu: goto label_216c7c;
        case 0x216c80u: goto label_216c80;
        case 0x216c84u: goto label_216c84;
        case 0x216c88u: goto label_216c88;
        case 0x216c8cu: goto label_216c8c;
        case 0x216c90u: goto label_216c90;
        case 0x216c94u: goto label_216c94;
        case 0x216c98u: goto label_216c98;
        case 0x216c9cu: goto label_216c9c;
        case 0x216ca0u: goto label_216ca0;
        case 0x216ca4u: goto label_216ca4;
        case 0x216ca8u: goto label_216ca8;
        case 0x216cacu: goto label_216cac;
        case 0x216cb0u: goto label_216cb0;
        case 0x216cb4u: goto label_216cb4;
        case 0x216cb8u: goto label_216cb8;
        case 0x216cbcu: goto label_216cbc;
        case 0x216cc0u: goto label_216cc0;
        case 0x216cc4u: goto label_216cc4;
        case 0x216cc8u: goto label_216cc8;
        case 0x216cccu: goto label_216ccc;
        case 0x216cd0u: goto label_216cd0;
        case 0x216cd4u: goto label_216cd4;
        case 0x216cd8u: goto label_216cd8;
        case 0x216cdcu: goto label_216cdc;
        case 0x216ce0u: goto label_216ce0;
        case 0x216ce4u: goto label_216ce4;
        case 0x216ce8u: goto label_216ce8;
        case 0x216cecu: goto label_216cec;
        case 0x216cf0u: goto label_216cf0;
        case 0x216cf4u: goto label_216cf4;
        case 0x216cf8u: goto label_216cf8;
        case 0x216cfcu: goto label_216cfc;
        case 0x216d00u: goto label_216d00;
        case 0x216d04u: goto label_216d04;
        case 0x216d08u: goto label_216d08;
        case 0x216d0cu: goto label_216d0c;
        case 0x216d10u: goto label_216d10;
        case 0x216d14u: goto label_216d14;
        case 0x216d18u: goto label_216d18;
        case 0x216d1cu: goto label_216d1c;
        case 0x216d20u: goto label_216d20;
        case 0x216d24u: goto label_216d24;
        case 0x216d28u: goto label_216d28;
        case 0x216d2cu: goto label_216d2c;
        case 0x216d30u: goto label_216d30;
        case 0x216d34u: goto label_216d34;
        case 0x216d38u: goto label_216d38;
        case 0x216d3cu: goto label_216d3c;
        case 0x216d40u: goto label_216d40;
        case 0x216d44u: goto label_216d44;
        case 0x216d48u: goto label_216d48;
        case 0x216d4cu: goto label_216d4c;
        case 0x216d50u: goto label_216d50;
        case 0x216d54u: goto label_216d54;
        case 0x216d58u: goto label_216d58;
        case 0x216d5cu: goto label_216d5c;
        case 0x216d60u: goto label_216d60;
        case 0x216d64u: goto label_216d64;
        case 0x216d68u: goto label_216d68;
        case 0x216d6cu: goto label_216d6c;
        case 0x216d70u: goto label_216d70;
        case 0x216d74u: goto label_216d74;
        case 0x216d78u: goto label_216d78;
        case 0x216d7cu: goto label_216d7c;
        case 0x216d80u: goto label_216d80;
        case 0x216d84u: goto label_216d84;
        case 0x216d88u: goto label_216d88;
        case 0x216d8cu: goto label_216d8c;
        case 0x216d90u: goto label_216d90;
        case 0x216d94u: goto label_216d94;
        case 0x216d98u: goto label_216d98;
        case 0x216d9cu: goto label_216d9c;
        case 0x216da0u: goto label_216da0;
        case 0x216da4u: goto label_216da4;
        case 0x216da8u: goto label_216da8;
        case 0x216dacu: goto label_216dac;
        case 0x216db0u: goto label_216db0;
        case 0x216db4u: goto label_216db4;
        case 0x216db8u: goto label_216db8;
        case 0x216dbcu: goto label_216dbc;
        case 0x216dc0u: goto label_216dc0;
        case 0x216dc4u: goto label_216dc4;
        case 0x216dc8u: goto label_216dc8;
        case 0x216dccu: goto label_216dcc;
        case 0x216dd0u: goto label_216dd0;
        case 0x216dd4u: goto label_216dd4;
        case 0x216dd8u: goto label_216dd8;
        case 0x216ddcu: goto label_216ddc;
        case 0x216de0u: goto label_216de0;
        case 0x216de4u: goto label_216de4;
        case 0x216de8u: goto label_216de8;
        case 0x216decu: goto label_216dec;
        case 0x216df0u: goto label_216df0;
        case 0x216df4u: goto label_216df4;
        case 0x216df8u: goto label_216df8;
        case 0x216dfcu: goto label_216dfc;
        case 0x216e00u: goto label_216e00;
        case 0x216e04u: goto label_216e04;
        case 0x216e08u: goto label_216e08;
        case 0x216e0cu: goto label_216e0c;
        case 0x216e10u: goto label_216e10;
        case 0x216e14u: goto label_216e14;
        case 0x216e18u: goto label_216e18;
        case 0x216e1cu: goto label_216e1c;
        case 0x216e20u: goto label_216e20;
        case 0x216e24u: goto label_216e24;
        case 0x216e28u: goto label_216e28;
        case 0x216e2cu: goto label_216e2c;
        case 0x216e30u: goto label_216e30;
        case 0x216e34u: goto label_216e34;
        case 0x216e38u: goto label_216e38;
        case 0x216e3cu: goto label_216e3c;
        case 0x216e40u: goto label_216e40;
        case 0x216e44u: goto label_216e44;
        case 0x216e48u: goto label_216e48;
        case 0x216e4cu: goto label_216e4c;
        case 0x216e50u: goto label_216e50;
        case 0x216e54u: goto label_216e54;
        case 0x216e58u: goto label_216e58;
        case 0x216e5cu: goto label_216e5c;
        case 0x216e60u: goto label_216e60;
        case 0x216e64u: goto label_216e64;
        case 0x216e68u: goto label_216e68;
        case 0x216e6cu: goto label_216e6c;
        case 0x216e70u: goto label_216e70;
        case 0x216e74u: goto label_216e74;
        case 0x216e78u: goto label_216e78;
        case 0x216e7cu: goto label_216e7c;
        case 0x216e80u: goto label_216e80;
        case 0x216e84u: goto label_216e84;
        case 0x216e88u: goto label_216e88;
        case 0x216e8cu: goto label_216e8c;
        case 0x216e90u: goto label_216e90;
        case 0x216e94u: goto label_216e94;
        case 0x216e98u: goto label_216e98;
        case 0x216e9cu: goto label_216e9c;
        case 0x216ea0u: goto label_216ea0;
        case 0x216ea4u: goto label_216ea4;
        case 0x216ea8u: goto label_216ea8;
        case 0x216eacu: goto label_216eac;
        case 0x216eb0u: goto label_216eb0;
        case 0x216eb4u: goto label_216eb4;
        case 0x216eb8u: goto label_216eb8;
        case 0x216ebcu: goto label_216ebc;
        case 0x216ec0u: goto label_216ec0;
        case 0x216ec4u: goto label_216ec4;
        case 0x216ec8u: goto label_216ec8;
        case 0x216eccu: goto label_216ecc;
        case 0x216ed0u: goto label_216ed0;
        case 0x216ed4u: goto label_216ed4;
        case 0x216ed8u: goto label_216ed8;
        case 0x216edcu: goto label_216edc;
        case 0x216ee0u: goto label_216ee0;
        case 0x216ee4u: goto label_216ee4;
        case 0x216ee8u: goto label_216ee8;
        case 0x216eecu: goto label_216eec;
        case 0x216ef0u: goto label_216ef0;
        case 0x216ef4u: goto label_216ef4;
        case 0x216ef8u: goto label_216ef8;
        case 0x216efcu: goto label_216efc;
        case 0x216f00u: goto label_216f00;
        case 0x216f04u: goto label_216f04;
        case 0x216f08u: goto label_216f08;
        case 0x216f0cu: goto label_216f0c;
        case 0x216f10u: goto label_216f10;
        case 0x216f14u: goto label_216f14;
        case 0x216f18u: goto label_216f18;
        case 0x216f1cu: goto label_216f1c;
        case 0x216f20u: goto label_216f20;
        case 0x216f24u: goto label_216f24;
        case 0x216f28u: goto label_216f28;
        case 0x216f2cu: goto label_216f2c;
        case 0x216f30u: goto label_216f30;
        case 0x216f34u: goto label_216f34;
        case 0x216f38u: goto label_216f38;
        case 0x216f3cu: goto label_216f3c;
        case 0x216f40u: goto label_216f40;
        case 0x216f44u: goto label_216f44;
        case 0x216f48u: goto label_216f48;
        case 0x216f4cu: goto label_216f4c;
        case 0x216f50u: goto label_216f50;
        case 0x216f54u: goto label_216f54;
        case 0x216f58u: goto label_216f58;
        case 0x216f5cu: goto label_216f5c;
        case 0x216f60u: goto label_216f60;
        case 0x216f64u: goto label_216f64;
        case 0x216f68u: goto label_216f68;
        case 0x216f6cu: goto label_216f6c;
        case 0x216f70u: goto label_216f70;
        case 0x216f74u: goto label_216f74;
        case 0x216f78u: goto label_216f78;
        case 0x216f7cu: goto label_216f7c;
        case 0x216f80u: goto label_216f80;
        case 0x216f84u: goto label_216f84;
        case 0x216f88u: goto label_216f88;
        case 0x216f8cu: goto label_216f8c;
        case 0x216f90u: goto label_216f90;
        case 0x216f94u: goto label_216f94;
        case 0x216f98u: goto label_216f98;
        case 0x216f9cu: goto label_216f9c;
        case 0x216fa0u: goto label_216fa0;
        case 0x216fa4u: goto label_216fa4;
        case 0x216fa8u: goto label_216fa8;
        case 0x216facu: goto label_216fac;
        case 0x216fb0u: goto label_216fb0;
        case 0x216fb4u: goto label_216fb4;
        case 0x216fb8u: goto label_216fb8;
        case 0x216fbcu: goto label_216fbc;
        case 0x216fc0u: goto label_216fc0;
        case 0x216fc4u: goto label_216fc4;
        case 0x216fc8u: goto label_216fc8;
        case 0x216fccu: goto label_216fcc;
        case 0x216fd0u: goto label_216fd0;
        case 0x216fd4u: goto label_216fd4;
        case 0x216fd8u: goto label_216fd8;
        case 0x216fdcu: goto label_216fdc;
        case 0x216fe0u: goto label_216fe0;
        case 0x216fe4u: goto label_216fe4;
        case 0x216fe8u: goto label_216fe8;
        case 0x216fecu: goto label_216fec;
        case 0x216ff0u: goto label_216ff0;
        case 0x216ff4u: goto label_216ff4;
        case 0x216ff8u: goto label_216ff8;
        case 0x216ffcu: goto label_216ffc;
        case 0x217000u: goto label_217000;
        case 0x217004u: goto label_217004;
        case 0x217008u: goto label_217008;
        case 0x21700cu: goto label_21700c;
        case 0x217010u: goto label_217010;
        case 0x217014u: goto label_217014;
        case 0x217018u: goto label_217018;
        case 0x21701cu: goto label_21701c;
        case 0x217020u: goto label_217020;
        case 0x217024u: goto label_217024;
        case 0x217028u: goto label_217028;
        case 0x21702cu: goto label_21702c;
        default: return;
    }

label_216860:
    // 0x216860: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x216860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_216864:
    // 0x216864: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x216864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_216868:
    // 0x216868: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x216868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_21686c:
    // 0x21686c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21686cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_216870:
    // 0x216870: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x216870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_216874:
    // 0x216874: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x216874u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_216878:
    // 0x216878: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x216878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21687c:
    // 0x21687c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x21687cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_216880:
    // 0x216880: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_216884:
    if (ctx->pc == 0x216884u) {
        ctx->pc = 0x216884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216880u;
        // 0x216884: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216888u;
        goto label_216888;
    }
    ctx->pc = 0x216880u;
    {
        const bool branch_taken_0x216880 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x216884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216880u;
        // 0x216884: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216880) {
            ctx->pc = 0x2168A4u;
            goto label_2168a4;
        }
    }
    ctx->pc = 0x216888u;
label_216888:
    // 0x216888: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x216888u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_21688c:
    // 0x21688c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x21688cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_216890:
    // 0x216890: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x216890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_216894:
    // 0x216894: 0x24638680  addiu       $v1, $v1, -0x7980
    ctx->pc = 0x216894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936192));
label_216898:
    // 0x216898: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x216898u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_21689c:
    // 0x21689c: 0x10000020  b           . + 4 + (0x20 << 2)
label_2168a0:
    if (ctx->pc == 0x2168A0u) {
        ctx->pc = 0x2168A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21689Cu;
        // 0x2168a0: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2168A4u;
        goto label_2168a4;
    }
    ctx->pc = 0x21689Cu;
    {
        const bool branch_taken_0x21689c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2168A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21689Cu;
        // 0x2168a0: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21689c) {
            ctx->pc = 0x216920u;
            goto label_216920;
        }
    }
    ctx->pc = 0x2168A4u;
label_2168a4:
    // 0x2168a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2168a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2168a8:
    // 0x2168a8: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
label_2168ac:
    if (ctx->pc == 0x2168ACu) {
        ctx->pc = 0x2168ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2168A8u;
        // 0x2168ac: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2168B0u;
        goto label_2168b0;
    }
    ctx->pc = 0x2168A8u;
    {
        const bool branch_taken_0x2168a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2168ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2168A8u;
        // 0x2168ac: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2168a8) {
            ctx->pc = 0x2168D0u;
            goto label_2168d0;
        }
    }
    ctx->pc = 0x2168B0u;
label_2168b0:
    // 0x2168b0: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2168b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_2168b4:
    // 0x2168b4: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x2168b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_2168b8:
    // 0x2168b8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2168b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2168bc:
    // 0x2168bc: 0x24638680  addiu       $v1, $v1, -0x7980
    ctx->pc = 0x2168bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936192));
label_2168c0:
    // 0x2168c0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2168c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2168c4:
    // 0x2168c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2168c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2168c8:
    // 0x2168c8: 0x10000015  b           . + 4 + (0x15 << 2)
label_2168cc:
    if (ctx->pc == 0x2168CCu) {
        ctx->pc = 0x2168CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2168C8u;
        // 0x2168cc: 0x247001e0  addiu       $s0, $v1, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2168D0u;
        goto label_2168d0;
    }
    ctx->pc = 0x2168C8u;
    {
        const bool branch_taken_0x2168c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2168CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2168C8u;
        // 0x2168cc: 0x247001e0  addiu       $s0, $v1, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2168c8) {
            ctx->pc = 0x216920u;
            goto label_216920;
        }
    }
    ctx->pc = 0x2168D0u;
label_2168d0:
    // 0x2168d0: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
label_2168d4:
    if (ctx->pc == 0x2168D4u) {
        ctx->pc = 0x2168D8u;
        goto label_2168d8;
    }
    ctx->pc = 0x2168D0u;
    {
        const bool branch_taken_0x2168d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2168d0) {
            ctx->pc = 0x2168F4u;
            goto label_2168f4;
        }
    }
    ctx->pc = 0x2168D8u;
label_2168d8:
    // 0x2168d8: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2168d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_2168dc:
    // 0x2168dc: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x2168dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_2168e0:
    // 0x2168e0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2168e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2168e4:
    // 0x2168e4: 0x24638620  addiu       $v1, $v1, -0x79E0
    ctx->pc = 0x2168e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936096));
label_2168e8:
    // 0x2168e8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2168e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2168ec:
    // 0x2168ec: 0x1000000c  b           . + 4 + (0xC << 2)
label_2168f0:
    if (ctx->pc == 0x2168F0u) {
        ctx->pc = 0x2168F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2168ECu;
        // 0x2168f0: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2168F4u;
        goto label_2168f4;
    }
    ctx->pc = 0x2168ECu;
    {
        const bool branch_taken_0x2168ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2168F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2168ECu;
        // 0x2168f0: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2168ec) {
            ctx->pc = 0x216920u;
            goto label_216920;
        }
    }
    ctx->pc = 0x2168F4u;
label_2168f4:
    // 0x2168f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2168f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2168f8:
    // 0x2168f8: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
label_2168fc:
    if (ctx->pc == 0x2168FCu) {
        ctx->pc = 0x2168FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2168F8u;
        // 0x2168fc: 0x3c100059  lui         $s0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216900u;
        goto label_216900;
    }
    ctx->pc = 0x2168F8u;
    {
        const bool branch_taken_0x2168f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2168FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2168F8u;
        // 0x2168fc: 0x3c100059  lui         $s0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2168f8) {
            ctx->pc = 0x21691Cu;
            goto label_21691c;
        }
    }
    ctx->pc = 0x216900u;
label_216900:
    // 0x216900: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x216900u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_216904:
    // 0x216904: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x216904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_216908:
    // 0x216908: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x216908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_21690c:
    // 0x21690c: 0x24638320  addiu       $v1, $v1, -0x7CE0
    ctx->pc = 0x21690cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935328));
label_216910:
    // 0x216910: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x216910u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_216914:
    // 0x216914: 0x10000002  b           . + 4 + (0x2 << 2)
label_216918:
    if (ctx->pc == 0x216918u) {
        ctx->pc = 0x216918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216914u;
        // 0x216918: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21691Cu;
        goto label_21691c;
    }
    ctx->pc = 0x216914u;
    {
        const bool branch_taken_0x216914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216914u;
        // 0x216918: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216914) {
            ctx->pc = 0x216920u;
            goto label_216920;
        }
    }
    ctx->pc = 0x21691Cu;
label_21691c:
    // 0x21691c: 0x261082f0  addiu       $s0, $s0, -0x7D10
    ctx->pc = 0x21691cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935280));
label_216920:
    // 0x216920: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x216920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_216924:
    // 0x216924: 0x10600078  beqz        $v1, . + 4 + (0x78 << 2)
label_216928:
    if (ctx->pc == 0x216928u) {
        ctx->pc = 0x216928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216924u;
        // 0x216928: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21692Cu;
        goto label_21692c;
    }
    ctx->pc = 0x216924u;
    {
        const bool branch_taken_0x216924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x216928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216924u;
        // 0x216928: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216924) {
            ctx->pc = 0x216B08u;
            goto label_216b08;
        }
    }
    ctx->pc = 0x21692Cu;
label_21692c:
    // 0x21692c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x21692cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_216930:
    // 0x216930: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x216930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_216934:
    // 0x216934: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x216934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_216938:
    // 0x216938: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x216938u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_21693c:
    // 0x21693c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21693cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_216940:
    // 0x216940: 0x10000005  b           . + 4 + (0x5 << 2)
label_216944:
    if (ctx->pc == 0x216944u) {
        ctx->pc = 0x216948u;
        goto label_216948;
    }
    ctx->pc = 0x216940u;
    {
        const bool branch_taken_0x216940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216940) {
            ctx->pc = 0x216958u;
            goto label_216958;
        }
    }
    ctx->pc = 0x216948u;
label_216948:
    // 0x216948: 0xc4218a98  lwc1        $f1, -0x7568($at)
    ctx->pc = 0x216948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21694c:
    // 0x21694c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x21694cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_216950:
    // 0x216950: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216954:
    // 0x216954: 0xe4218a98  swc1        $f1, -0x7568($at)
    ctx->pc = 0x216954u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937240), bits); }
label_216958:
    // 0x216958: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21695c:
    // 0x21695c: 0xc4218a98  lwc1        $f1, -0x7568($at)
    ctx->pc = 0x21695cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_216960:
    // 0x216960: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x216960u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_216964:
    // 0x216964: 0x0  nop
    ctx->pc = 0x216964u;
    // NOP
label_216968:
    // 0x216968: 0x4500fff7  bc1f        . + 4 + (-0x9 << 2)
label_21696c:
    if (ctx->pc == 0x21696Cu) {
        ctx->pc = 0x21696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216968u;
        // 0x21696c: 0x3c010059  lui         $at, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216970u;
        goto label_216970;
    }
    ctx->pc = 0x216968u;
    {
        const bool branch_taken_0x216968 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216968u;
        // 0x21696c: 0x3c010059  lui         $at, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216968) {
            ctx->pc = 0x216948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216948;
        }
    }
    ctx->pc = 0x216970u;
label_216970:
    // 0x216970: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x216970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_216974:
    // 0x216974: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x216974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_216978:
    // 0x216978: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x216978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_21697c:
    // 0x21697c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x21697cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_216980:
    // 0x216980: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x216980u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_216984:
    // 0x216984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x216984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_216988:
    // 0x216988: 0x10000005  b           . + 4 + (0x5 << 2)
label_21698c:
    if (ctx->pc == 0x21698Cu) {
        ctx->pc = 0x216990u;
        goto label_216990;
    }
    ctx->pc = 0x216988u;
    {
        const bool branch_taken_0x216988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216988) {
            ctx->pc = 0x2169A0u;
            goto label_2169a0;
        }
    }
    ctx->pc = 0x216990u;
label_216990:
    // 0x216990: 0xc4218a98  lwc1        $f1, -0x7568($at)
    ctx->pc = 0x216990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_216994:
    // 0x216994: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x216994u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_216998:
    // 0x216998: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21699c:
    // 0x21699c: 0xe4218a98  swc1        $f1, -0x7568($at)
    ctx->pc = 0x21699cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937240), bits); }
label_2169a0:
    // 0x2169a0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2169a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2169a4:
    // 0x2169a4: 0xc42c8a98  lwc1        $f12, -0x7568($at)
    ctx->pc = 0x2169a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2169a8:
    // 0x2169a8: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2169a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2169ac:
    // 0x2169ac: 0x0  nop
    ctx->pc = 0x2169acu;
    // NOP
label_2169b0:
    // 0x2169b0: 0x4501fff7  bc1t        . + 4 + (-0x9 << 2)
label_2169b4:
    if (ctx->pc == 0x2169B4u) {
        ctx->pc = 0x2169B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2169B0u;
        // 0x2169b4: 0x3c010059  lui         $at, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2169B8u;
        goto label_2169b8;
    }
    ctx->pc = 0x2169B0u;
    {
        const bool branch_taken_0x2169b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2169B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2169B0u;
        // 0x2169b4: 0x3c010059  lui         $at, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2169b0) {
            ctx->pc = 0x216990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216990;
        }
    }
    ctx->pc = 0x2169B8u;
label_2169b8:
    // 0x2169b8: 0xc06d4c0  jal         func_1B5300
label_2169bc:
    if (ctx->pc == 0x2169BCu) {
        ctx->pc = 0x2169C0u;
        goto label_2169c0;
    }
    ctx->pc = 0x2169B8u;
    SET_GPR_U32(ctx, 31, 0x2169C0u);
    ctx->pc = 0x1B5300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5300u, 0x2169B8u, 0x2169C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2169C0u;
label_2169c0:
    // 0x2169c0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2169c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2169c4:
    // 0x2169c4: 0xc4248a90  lwc1        $f4, -0x7570($at)
    ctx->pc = 0x2169c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2169c8:
    // 0x2169c8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2169c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2169cc:
    // 0x2169cc: 0xc4238a80  lwc1        $f3, -0x7580($at)
    ctx->pc = 0x2169ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2169d0:
    // 0x2169d0: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2169d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2169d4:
    // 0x2169d4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2169d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2169d8:
    // 0x2169d8: 0xc4228a94  lwc1        $f2, -0x756C($at)
    ctx->pc = 0x2169d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2169dc:
    // 0x2169dc: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x2169dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2169e0:
    // 0x2169e0: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2169e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_2169e4:
    // 0x2169e4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2169e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2169e8:
    // 0x2169e8: 0xc4218a84  lwc1        $f1, -0x757C($at)
    ctx->pc = 0x2169e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2169ec:
    // 0x2169ec: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x2169ecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_2169f0:
    // 0x2169f0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2169f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2169f4:
    // 0x2169f4: 0xc42c8a98  lwc1        $f12, -0x7568($at)
    ctx->pc = 0x2169f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2169f8:
    // 0x2169f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2169f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2169fc:
    // 0x2169fc: 0xc06d412  jal         func_1B5048
label_216a00:
    if (ctx->pc == 0x216A00u) {
        ctx->pc = 0x216A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2169FCu;
        // 0x216a00: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x216A04u;
        goto label_216a04;
    }
    ctx->pc = 0x2169FCu;
    SET_GPR_U32(ctx, 31, 0x216A04u);
    ctx->pc = 0x216A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2169FCu;
    // 0x216a00: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5048u, 0x2169FCu, 0x216A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A04u;
label_216a04:
    // 0x216a04: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216a08:
    // 0x216a08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x216a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_216a0c:
    // 0x216a0c: 0xc4228a90  lwc1        $f2, -0x7570($at)
    ctx->pc = 0x216a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_216a10:
    // 0x216a10: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x216a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_216a14:
    // 0x216a14: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x216a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_216a18:
    // 0x216a18: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216a1c:
    // 0x216a1c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x216a1cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_216a20:
    // 0x216a20: 0xc4218a88  lwc1        $f1, -0x7578($at)
    ctx->pc = 0x216a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_216a24:
    // 0x216a24: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x216a24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_216a28:
    // 0x216a28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x216a28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_216a2c:
    // 0x216a2c: 0xc064580  jal         func_191600
label_216a30:
    if (ctx->pc == 0x216A30u) {
        ctx->pc = 0x216A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A2Cu;
        // 0x216a30: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x216A34u;
        goto label_216a34;
    }
    ctx->pc = 0x216A2Cu;
    SET_GPR_U32(ctx, 31, 0x216A34u);
    ctx->pc = 0x216A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216A2Cu;
    // 0x216a30: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x191600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191600u, 0x216A2Cu, 0x216A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A34u;
label_216a34:
    // 0x216a34: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x216a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_216a38:
    // 0x216a38: 0xc064534  jal         func_1914D0
label_216a3c:
    if (ctx->pc == 0x216A3Cu) {
        ctx->pc = 0x216A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A38u;
        // 0x216a3c: 0x24848a80  addiu       $a0, $a0, -0x7580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216A40u;
        goto label_216a40;
    }
    ctx->pc = 0x216A38u;
    SET_GPR_U32(ctx, 31, 0x216A40u);
    ctx->pc = 0x216A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216A38u;
    // 0x216a3c: 0x24848a80  addiu       $a0, $a0, -0x7580 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1914D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1914D0u, 0x216A38u, 0x216A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A40u;
label_216a40:
    // 0x216a40: 0xc064710  jal         func_191C40
label_216a44:
    if (ctx->pc == 0x216A44u) {
        ctx->pc = 0x216A48u;
        goto label_216a48;
    }
    ctx->pc = 0x216A40u;
    SET_GPR_U32(ctx, 31, 0x216A48u);
    ctx->pc = 0x191C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191C40u, 0x216A40u, 0x216A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A48u;
label_216a48:
    // 0x216a48: 0xc05feb4  jal         func_17FAD0
label_216a4c:
    if (ctx->pc == 0x216A4Cu) {
        ctx->pc = 0x216A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A48u;
        // 0x216a4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216A50u;
        goto label_216a50;
    }
    ctx->pc = 0x216A48u;
    SET_GPR_U32(ctx, 31, 0x216A50u);
    ctx->pc = 0x216A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216A48u;
    // 0x216a4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FAD0u, 0x216A48u, 0x216A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A50u;
label_216a50:
    // 0x216a50: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x216a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_216a54:
    // 0x216a54: 0x27b40074  addiu       $s4, $sp, 0x74
    ctx->pc = 0x216a54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_216a58:
    // 0x216a58: 0x27b10078  addiu       $s1, $sp, 0x78
    ctx->pc = 0x216a58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_216a5c:
    // 0x216a5c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x216a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_216a60:
    // 0x216a60: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x216a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_216a64:
    // 0x216a64: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x216a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_216a68:
    // 0x216a68: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x216a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_216a6c:
    // 0x216a6c: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x216a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_216a70:
    // 0x216a70: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x216a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_216a74:
    // 0x216a74: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x216a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_216a78:
    // 0x216a78: 0x8f859248  lw          $a1, -0x6DB8($gp)
    ctx->pc = 0x216a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939208)));
label_216a7c:
    // 0x216a7c: 0xc05eff8  jal         func_17BFE0
label_216a80:
    if (ctx->pc == 0x216A80u) {
        ctx->pc = 0x216A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A7Cu;
        // 0x216a80: 0xe7a0007c  swc1        $f0, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x216A84u;
        goto label_216a84;
    }
    ctx->pc = 0x216A7Cu;
    SET_GPR_U32(ctx, 31, 0x216A84u);
    ctx->pc = 0x216A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216A7Cu;
    // 0x216a80: 0xe7a0007c  swc1        $f0, 0x7C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BFE0u, 0x216A7Cu, 0x216A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A84u;
label_216a84:
    // 0x216a84: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x216a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_216a88:
    // 0x216a88: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x216a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_216a8c:
    // 0x216a8c: 0x8f88924c  lw          $t0, -0x6DB4($gp)
    ctx->pc = 0x216a8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939212)));
label_216a90:
    // 0x216a90: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x216a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_216a94:
    // 0x216a94: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x216a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_216a98:
    // 0x216a98: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x216a98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_216a9c:
    // 0x216a9c: 0x2463d670  addiu       $v1, $v1, -0x2990
    ctx->pc = 0x216a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956656));
label_216aa0:
    // 0x216aa0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x216aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_216aa4:
    // 0x216aa4: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x216aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_216aa8:
    // 0x216aa8: 0x24a59bc0  addiu       $a1, $a1, -0x6440
    ctx->pc = 0x216aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941632));
label_216aac:
    // 0x216aac: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x216aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_216ab0:
    // 0x216ab0: 0x2442d674  addiu       $v0, $v0, -0x298C
    ctx->pc = 0x216ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956660));
label_216ab4:
    // 0x216ab4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x216ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_216ab8:
    // 0x216ab8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x216ab8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_216abc:
    // 0x216abc: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x216abcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_216ac0:
    // 0x216ac0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x216ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_216ac4:
    // 0x216ac4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x216ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_216ac8:
    // 0x216ac8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x216ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_216acc:
    // 0x216acc: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x216accu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_216ad0:
    // 0x216ad0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x216ad0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_216ad4:
    // 0x216ad4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x216ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_216ad8:
    // 0x216ad8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x216ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_216adc:
    // 0x216adc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x216adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_216ae0:
    // 0x216ae0: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x216ae0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_216ae4:
    // 0x216ae4: 0x0  nop
    ctx->pc = 0x216ae4u;
    // NOP
label_216ae8:
    // 0x216ae8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x216ae8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_216aec:
    // 0x216aec: 0xc06703a  jal         func_19C0E8
label_216af0:
    if (ctx->pc == 0x216AF0u) {
        ctx->pc = 0x216AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216AECu;
        // 0x216af0: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x216AF4u;
        goto label_216af4;
    }
    ctx->pc = 0x216AECu;
    SET_GPR_U32(ctx, 31, 0x216AF4u);
    ctx->pc = 0x216AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216AECu;
    // 0x216af0: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C0E8u, 0x216AECu, 0x216AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216AF4u;
label_216af4:
    // 0x216af4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x216af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_216af8:
    // 0x216af8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x216af8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_216afc:
    // 0x216afc: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x216afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_216b00:
    // 0x216b00: 0x10000003  b           . + 4 + (0x3 << 2)
label_216b04:
    if (ctx->pc == 0x216B04u) {
        ctx->pc = 0x216B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B00u;
        // 0x216b04: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216B08u;
        goto label_216b08;
    }
    ctx->pc = 0x216B00u;
    {
        const bool branch_taken_0x216b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B00u;
        // 0x216b04: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216b00) {
            ctx->pc = 0x216B10u;
            goto label_216b10;
        }
    }
    ctx->pc = 0x216B08u;
label_216b08:
    // 0x216b08: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x216b08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_216b0c:
    // 0x216b0c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x216b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_216b10:
    // 0x216b10: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x216b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_216b14:
    // 0x216b14: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x216b14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_216b18:
    // 0x216b18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x216b18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_216b1c:
    // 0x216b1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x216b1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_216b20:
    // 0x216b20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x216b20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_216b24:
    // 0x216b24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x216b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_216b28:
    // 0x216b28: 0x3e00008  jr          $ra
label_216b2c:
    if (ctx->pc == 0x216B2Cu) {
        ctx->pc = 0x216B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B28u;
        // 0x216b2c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216B30u;
        goto label_216b30;
    }
    ctx->pc = 0x216B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B28u;
        // 0x216b2c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216B30u;
label_216b30:
    // 0x216b30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x216b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216b34:
    // 0x216b34: 0xaf84923c  sw          $a0, -0x6DC4($gp)
    ctx->pc = 0x216b34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939196), GPR_U32(ctx, 4));
label_216b38:
    // 0x216b38: 0xaf839240  sw          $v1, -0x6DC0($gp)
    ctx->pc = 0x216b38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939200), GPR_U32(ctx, 3));
label_216b3c:
    // 0x216b3c: 0x3c04459c  lui         $a0, 0x459C
    ctx->pc = 0x216b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17820 << 16));
label_216b40:
    // 0x216b40: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x216b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_216b44:
    // 0x216b44: 0x8f88924c  lw          $t0, -0x6DB4($gp)
    ctx->pc = 0x216b44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939212)));
label_216b48:
    // 0x216b48: 0xaf839230  sw          $v1, -0x6DD0($gp)
    ctx->pc = 0x216b48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939184), GPR_U32(ctx, 3));
label_216b4c:
    // 0x216b4c: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x216b4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
label_216b50:
    // 0x216b50: 0x3c034096  lui         $v1, 0x4096
    ctx->pc = 0x216b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16534 << 16));
label_216b54:
    // 0x216b54: 0x3c070029  lui         $a3, 0x29
    ctx->pc = 0x216b54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)41 << 16));
label_216b58:
    // 0x216b58: 0x3463cbe4  ori         $v1, $v1, 0xCBE4
    ctx->pc = 0x216b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52196);
label_216b5c:
    // 0x216b5c: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x216b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
label_216b60:
    // 0x216b60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x216b60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_216b64:
    // 0x216b64: 0x24e7d730  addiu       $a3, $a3, -0x28D0
    ctx->pc = 0x216b64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956848));
label_216b68:
    // 0x216b68: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x216b68u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_216b6c:
    // 0x216b6c: 0xaf809238  sw          $zero, -0x6DC8($gp)
    ctx->pc = 0x216b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939192), GPR_U32(ctx, 0));
label_216b70:
    // 0x216b70: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x216b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_216b74:
    // 0x216b74: 0xaf809234  sw          $zero, -0x6DCC($gp)
    ctx->pc = 0x216b74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939188), GPR_U32(ctx, 0));
label_216b78:
    // 0x216b78: 0xe32021  addu        $a0, $a3, $v1
    ctx->pc = 0x216b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_216b7c:
    // 0x216b7c: 0x24c6d734  addiu       $a2, $a2, -0x28CC
    ctx->pc = 0x216b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956852));
label_216b80:
    // 0x216b80: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x216b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_216b84:
    // 0x216b84: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216b88:
    // 0x216b88: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x216b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_216b8c:
    // 0x216b8c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x216b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_216b90:
    // 0x216b90: 0xe4228a90  swc1        $f2, -0x7570($at)
    ctx->pc = 0x216b90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937232), bits); }
label_216b94:
    // 0x216b94: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216b98:
    // 0x216b98: 0xc4238a90  lwc1        $f3, -0x7570($at)
    ctx->pc = 0x216b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_216b9c:
    // 0x216b9c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x216b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_216ba0:
    // 0x216ba0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216ba4:
    // 0x216ba4: 0xe4228a94  swc1        $f2, -0x756C($at)
    ctx->pc = 0x216ba4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937236), bits); }
label_216ba8:
    // 0x216ba8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216bac:
    // 0x216bac: 0xac258a8c  sw          $a1, -0x7574($at)
    ctx->pc = 0x216bacu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937228), GPR_U32(ctx, 5));
label_216bb0:
    // 0x216bb0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216bb4:
    // 0x216bb4: 0xac208a98  sw          $zero, -0x7568($at)
    ctx->pc = 0x216bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937240), GPR_U32(ctx, 0));
label_216bb8:
    // 0x216bb8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216bbc:
    // 0x216bbc: 0xac208a9c  sw          $zero, -0x7564($at)
    ctx->pc = 0x216bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937244), GPR_U32(ctx, 0));
label_216bc0:
    // 0x216bc0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216bc4:
    // 0x216bc4: 0xac208a80  sw          $zero, -0x7580($at)
    ctx->pc = 0x216bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937216), GPR_U32(ctx, 0));
label_216bc8:
    // 0x216bc8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216bcc:
    // 0x216bcc: 0xac208a84  sw          $zero, -0x757C($at)
    ctx->pc = 0x216bccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937220), GPR_U32(ctx, 0));
label_216bd0:
    // 0x216bd0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216bd4:
    // 0x216bd4: 0xac208a88  sw          $zero, -0x7578($at)
    ctx->pc = 0x216bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937224), GPR_U32(ctx, 0));
label_216bd8:
    // 0x216bd8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216bdc:
    // 0x216bdc: 0xe4238a70  swc1        $f3, -0x7590($at)
    ctx->pc = 0x216bdcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937200), bits); }
label_216be0:
    // 0x216be0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216be4:
    // 0x216be4: 0xe4238a50  swc1        $f3, -0x75B0($at)
    ctx->pc = 0x216be4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937168), bits); }
label_216be8:
    // 0x216be8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216bec:
    // 0x216bec: 0xc4238a94  lwc1        $f3, -0x756C($at)
    ctx->pc = 0x216becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_216bf0:
    // 0x216bf0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216bf4:
    // 0x216bf4: 0xc4248a98  lwc1        $f4, -0x7568($at)
    ctx->pc = 0x216bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_216bf8:
    // 0x216bf8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216bfc:
    // 0x216bfc: 0xc4258a9c  lwc1        $f5, -0x7564($at)
    ctx->pc = 0x216bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_216c00:
    // 0x216c00: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216c04:
    // 0x216c04: 0xc4228a70  lwc1        $f2, -0x7590($at)
    ctx->pc = 0x216c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_216c08:
    // 0x216c08: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216c0c:
    // 0x216c0c: 0xc4268a80  lwc1        $f6, -0x7580($at)
    ctx->pc = 0x216c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_216c10:
    // 0x216c10: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x216c10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_216c14:
    // 0x216c14: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216c18:
    // 0x216c18: 0xc4278a84  lwc1        $f7, -0x757C($at)
    ctx->pc = 0x216c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_216c1c:
    // 0x216c1c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216c20:
    // 0x216c20: 0xe4238a74  swc1        $f3, -0x758C($at)
    ctx->pc = 0x216c20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937204), bits); }
label_216c24:
    // 0x216c24: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216c28:
    // 0x216c28: 0xe4238a54  swc1        $f3, -0x75AC($at)
    ctx->pc = 0x216c28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937172), bits); }
label_216c2c:
    // 0x216c2c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216c30:
    // 0x216c30: 0xe4248a78  swc1        $f4, -0x7588($at)
    ctx->pc = 0x216c30u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937208), bits); }
label_216c34:
    // 0x216c34: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216c38:
    // 0x216c38: 0xe4248a58  swc1        $f4, -0x75A8($at)
    ctx->pc = 0x216c38u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937176), bits); }
label_216c3c:
    // 0x216c3c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216c40:
    // 0x216c40: 0xe4258a7c  swc1        $f5, -0x7584($at)
    ctx->pc = 0x216c40u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937212), bits); }
label_216c44:
    // 0x216c44: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216c48:
    // 0x216c48: 0xe4258a5c  swc1        $f5, -0x75A4($at)
    ctx->pc = 0x216c48u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937180), bits); }
label_216c4c:
    // 0x216c4c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216c50:
    // 0x216c50: 0xe4268a60  swc1        $f6, -0x75A0($at)
    ctx->pc = 0x216c50u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937184), bits); }
label_216c54:
    // 0x216c54: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216c58:
    // 0x216c58: 0xe4218a70  swc1        $f1, -0x7590($at)
    ctx->pc = 0x216c58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937200), bits); }
label_216c5c:
    // 0x216c5c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216c60:
    // 0x216c60: 0xe4268a40  swc1        $f6, -0x75C0($at)
    ctx->pc = 0x216c60u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937152), bits); }
label_216c64:
    // 0x216c64: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216c68:
    // 0x216c68: 0xe4278a64  swc1        $f7, -0x759C($at)
    ctx->pc = 0x216c68u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937188), bits); }
label_216c6c:
    // 0x216c6c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216c70:
    // 0x216c70: 0xe4278a44  swc1        $f7, -0x75BC($at)
    ctx->pc = 0x216c70u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937156), bits); }
label_216c74:
    // 0x216c74: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216c78:
    // 0x216c78: 0xc4218a78  lwc1        $f1, -0x7588($at)
    ctx->pc = 0x216c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_216c7c:
    // 0x216c7c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216c80:
    // 0x216c80: 0xc4228a88  lwc1        $f2, -0x7578($at)
    ctx->pc = 0x216c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_216c84:
    // 0x216c84: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x216c84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_216c88:
    // 0x216c88: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216c8c:
    // 0x216c8c: 0xc4238a8c  lwc1        $f3, -0x7574($at)
    ctx->pc = 0x216c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_216c90:
    // 0x216c90: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216c94:
    // 0x216c94: 0xe4228a68  swc1        $f2, -0x7598($at)
    ctx->pc = 0x216c94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937192), bits); }
label_216c98:
    // 0x216c98: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216c9c:
    // 0x216c9c: 0xe4228a48  swc1        $f2, -0x75B8($at)
    ctx->pc = 0x216c9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937160), bits); }
label_216ca0:
    // 0x216ca0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216ca4:
    // 0x216ca4: 0xe4238a6c  swc1        $f3, -0x7594($at)
    ctx->pc = 0x216ca4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937196), bits); }
label_216ca8:
    // 0x216ca8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216cac:
    // 0x216cac: 0xe4208a78  swc1        $f0, -0x7588($at)
    ctx->pc = 0x216cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937208), bits); }
label_216cb0:
    // 0x216cb0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216cb4:
    // 0x216cb4: 0x3e00008  jr          $ra
label_216cb8:
    if (ctx->pc == 0x216CB8u) {
        ctx->pc = 0x216CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216CB4u;
        // 0x216cb8: 0xe4238a4c  swc1        $f3, -0x75B4($at) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937164), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x216CBCu;
        goto label_216cbc;
    }
    ctx->pc = 0x216CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216CB4u;
        // 0x216cb8: 0xe4238a4c  swc1        $f3, -0x75B4($at) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937164), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216CBCu;
label_216cbc:
    // 0x216cbc: 0x0  nop
    ctx->pc = 0x216cbcu;
    // NOP
label_216cc0:
    // 0x216cc0: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x216cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_216cc4:
    // 0x216cc4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216cc8:
    // 0x216cc8: 0xac238a50  sw          $v1, -0x75B0($at)
    ctx->pc = 0x216cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937168), GPR_U32(ctx, 3));
label_216ccc:
    // 0x216ccc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x216cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216cd0:
    // 0x216cd0: 0x3c03c3c8  lui         $v1, 0xC3C8
    ctx->pc = 0x216cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50120 << 16));
label_216cd4:
    // 0x216cd4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216cd8:
    // 0x216cd8: 0xac238a44  sw          $v1, -0x75BC($at)
    ctx->pc = 0x216cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937156), GPR_U32(ctx, 3));
label_216cdc:
    // 0x216cdc: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216ce0:
    // 0x216ce0: 0xaf84923c  sw          $a0, -0x6DC4($gp)
    ctx->pc = 0x216ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939196), GPR_U32(ctx, 4));
label_216ce4:
    // 0x216ce4: 0xac208a54  sw          $zero, -0x75AC($at)
    ctx->pc = 0x216ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937172), GPR_U32(ctx, 0));
label_216ce8:
    // 0x216ce8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x216ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_216cec:
    // 0x216cec: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216cf0:
    // 0x216cf0: 0xaf809238  sw          $zero, -0x6DC8($gp)
    ctx->pc = 0x216cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939192), GPR_U32(ctx, 0));
label_216cf4:
    // 0x216cf4: 0xac208a58  sw          $zero, -0x75A8($at)
    ctx->pc = 0x216cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937176), GPR_U32(ctx, 0));
label_216cf8:
    // 0x216cf8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216cfc:
    // 0x216cfc: 0xaf859240  sw          $a1, -0x6DC0($gp)
    ctx->pc = 0x216cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939200), GPR_U32(ctx, 5));
label_216d00:
    // 0x216d00: 0xac248a5c  sw          $a0, -0x75A4($at)
    ctx->pc = 0x216d00u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937180), GPR_U32(ctx, 4));
label_216d04:
    // 0x216d04: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216d08:
    // 0x216d08: 0xaf859234  sw          $a1, -0x6DCC($gp)
    ctx->pc = 0x216d08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939188), GPR_U32(ctx, 5));
label_216d0c:
    // 0x216d0c: 0xac248a4c  sw          $a0, -0x75B4($at)
    ctx->pc = 0x216d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937164), GPR_U32(ctx, 4));
label_216d10:
    // 0x216d10: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216d14:
    // 0x216d14: 0xaf859230  sw          $a1, -0x6DD0($gp)
    ctx->pc = 0x216d14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939184), GPR_U32(ctx, 5));
label_216d18:
    // 0x216d18: 0xac208a40  sw          $zero, -0x75C0($at)
    ctx->pc = 0x216d18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937152), GPR_U32(ctx, 0));
label_216d1c:
    // 0x216d1c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216d20:
    // 0x216d20: 0xac208a48  sw          $zero, -0x75B8($at)
    ctx->pc = 0x216d20u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937160), GPR_U32(ctx, 0));
label_216d24:
    // 0x216d24: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216d28:
    // 0x216d28: 0xc4258a90  lwc1        $f5, -0x7570($at)
    ctx->pc = 0x216d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_216d2c:
    // 0x216d2c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216d30:
    // 0x216d30: 0xc4248a94  lwc1        $f4, -0x756C($at)
    ctx->pc = 0x216d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_216d34:
    // 0x216d34: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216d38:
    // 0x216d38: 0xc4238a98  lwc1        $f3, -0x7568($at)
    ctx->pc = 0x216d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_216d3c:
    // 0x216d3c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216d40:
    // 0x216d40: 0xc4228a9c  lwc1        $f2, -0x7564($at)
    ctx->pc = 0x216d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_216d44:
    // 0x216d44: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216d48:
    // 0x216d48: 0xc4218a80  lwc1        $f1, -0x7580($at)
    ctx->pc = 0x216d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_216d4c:
    // 0x216d4c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216d50:
    // 0x216d50: 0xc4208a84  lwc1        $f0, -0x757C($at)
    ctx->pc = 0x216d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_216d54:
    // 0x216d54: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216d58:
    // 0x216d58: 0xe4258a70  swc1        $f5, -0x7590($at)
    ctx->pc = 0x216d58u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937200), bits); }
label_216d5c:
    // 0x216d5c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216d60:
    // 0x216d60: 0xe4248a74  swc1        $f4, -0x758C($at)
    ctx->pc = 0x216d60u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937204), bits); }
label_216d64:
    // 0x216d64: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216d68:
    // 0x216d68: 0xe4238a78  swc1        $f3, -0x7588($at)
    ctx->pc = 0x216d68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937208), bits); }
label_216d6c:
    // 0x216d6c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216d70:
    // 0x216d70: 0xe4228a7c  swc1        $f2, -0x7584($at)
    ctx->pc = 0x216d70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937212), bits); }
label_216d74:
    // 0x216d74: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216d78:
    // 0x216d78: 0xe4218a60  swc1        $f1, -0x75A0($at)
    ctx->pc = 0x216d78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937184), bits); }
label_216d7c:
    // 0x216d7c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216d80:
    // 0x216d80: 0xe4208a64  swc1        $f0, -0x759C($at)
    ctx->pc = 0x216d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937188), bits); }
label_216d84:
    // 0x216d84: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216d88:
    // 0x216d88: 0xc4218a88  lwc1        $f1, -0x7578($at)
    ctx->pc = 0x216d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_216d8c:
    // 0x216d8c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216d90:
    // 0x216d90: 0xc4208a8c  lwc1        $f0, -0x7574($at)
    ctx->pc = 0x216d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_216d94:
    // 0x216d94: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216d98:
    // 0x216d98: 0xe4218a68  swc1        $f1, -0x7598($at)
    ctx->pc = 0x216d98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937192), bits); }
label_216d9c:
    // 0x216d9c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216da0:
    // 0x216da0: 0x3e00008  jr          $ra
label_216da4:
    if (ctx->pc == 0x216DA4u) {
        ctx->pc = 0x216DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216DA0u;
        // 0x216da4: 0xe4208a6c  swc1        $f0, -0x7594($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937196), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x216DA8u;
        goto label_216da8;
    }
    ctx->pc = 0x216DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216DA0u;
        // 0x216da4: 0xe4208a6c  swc1        $f0, -0x7594($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937196), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216DA8u;
label_216da8:
    // 0x216da8: 0x0  nop
    ctx->pc = 0x216da8u;
    // NOP
label_216dac:
    // 0x216dac: 0x0  nop
    ctx->pc = 0x216dacu;
    // NOP
label_216db0:
    // 0x216db0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216db4:
    // 0x216db4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x216db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216db8:
    // 0x216db8: 0xc4258a90  lwc1        $f5, -0x7570($at)
    ctx->pc = 0x216db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_216dbc:
    // 0x216dbc: 0x8f88924c  lw          $t0, -0x6DB4($gp)
    ctx->pc = 0x216dbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939212)));
label_216dc0:
    // 0x216dc0: 0x3c070029  lui         $a3, 0x29
    ctx->pc = 0x216dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)41 << 16));
label_216dc4:
    // 0x216dc4: 0xaf84923c  sw          $a0, -0x6DC4($gp)
    ctx->pc = 0x216dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939196), GPR_U32(ctx, 4));
label_216dc8:
    // 0x216dc8: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x216dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
label_216dcc:
    // 0x216dcc: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x216dccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_216dd0:
    // 0x216dd0: 0x24e7d730  addiu       $a3, $a3, -0x28D0
    ctx->pc = 0x216dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956848));
label_216dd4:
    // 0x216dd4: 0xaf809238  sw          $zero, -0x6DC8($gp)
    ctx->pc = 0x216dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939192), GPR_U32(ctx, 0));
label_216dd8:
    // 0x216dd8: 0xaf839240  sw          $v1, -0x6DC0($gp)
    ctx->pc = 0x216dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939200), GPR_U32(ctx, 3));
label_216ddc:
    // 0x216ddc: 0x24c6d734  addiu       $a2, $a2, -0x28CC
    ctx->pc = 0x216ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956852));
label_216de0:
    // 0x216de0: 0xaf839234  sw          $v1, -0x6DCC($gp)
    ctx->pc = 0x216de0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939188), GPR_U32(ctx, 3));
label_216de4:
    // 0x216de4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x216de4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_216de8:
    // 0x216de8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216dec:
    // 0x216dec: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x216decu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_216df0:
    // 0x216df0: 0xc4248a94  lwc1        $f4, -0x756C($at)
    ctx->pc = 0x216df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_216df4:
    // 0x216df4: 0xaf839230  sw          $v1, -0x6DD0($gp)
    ctx->pc = 0x216df4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939184), GPR_U32(ctx, 3));
label_216df8:
    // 0x216df8: 0x2484d7f0  addiu       $a0, $a0, -0x2810
    ctx->pc = 0x216df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957040));
label_216dfc:
    // 0x216dfc: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x216dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_216e00:
    // 0x216e00: 0x2463d7f4  addiu       $v1, $v1, -0x280C
    ctx->pc = 0x216e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957044));
label_216e04:
    // 0x216e04: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x216e04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_216e08:
    // 0x216e08: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x216e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_216e0c:
    // 0x216e0c: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x216e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_216e10:
    // 0x216e10: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x216e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_216e14:
    // 0x216e14: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216e18:
    // 0x216e18: 0xc4238a98  lwc1        $f3, -0x7568($at)
    ctx->pc = 0x216e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_216e1c:
    // 0x216e1c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216e20:
    // 0x216e20: 0xc4228a9c  lwc1        $f2, -0x7564($at)
    ctx->pc = 0x216e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_216e24:
    // 0x216e24: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216e28:
    // 0x216e28: 0xc4218a80  lwc1        $f1, -0x7580($at)
    ctx->pc = 0x216e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_216e2c:
    // 0x216e2c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216e30:
    // 0x216e30: 0xc4208a84  lwc1        $f0, -0x757C($at)
    ctx->pc = 0x216e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_216e34:
    // 0x216e34: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216e38:
    // 0x216e38: 0xe4258a70  swc1        $f5, -0x7590($at)
    ctx->pc = 0x216e38u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937200), bits); }
label_216e3c:
    // 0x216e3c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216e40:
    // 0x216e40: 0xe4248a74  swc1        $f4, -0x758C($at)
    ctx->pc = 0x216e40u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937204), bits); }
label_216e44:
    // 0x216e44: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216e48:
    // 0x216e48: 0xe4238a78  swc1        $f3, -0x7588($at)
    ctx->pc = 0x216e48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937208), bits); }
label_216e4c:
    // 0x216e4c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216e50:
    // 0x216e50: 0xe4228a7c  swc1        $f2, -0x7584($at)
    ctx->pc = 0x216e50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937212), bits); }
label_216e54:
    // 0x216e54: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216e58:
    // 0x216e58: 0xe4218a60  swc1        $f1, -0x75A0($at)
    ctx->pc = 0x216e58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937184), bits); }
label_216e5c:
    // 0x216e5c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216e60:
    // 0x216e60: 0xe4208a64  swc1        $f0, -0x759C($at)
    ctx->pc = 0x216e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937188), bits); }
label_216e64:
    // 0x216e64: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216e68:
    // 0x216e68: 0xc4218a88  lwc1        $f1, -0x7578($at)
    ctx->pc = 0x216e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_216e6c:
    // 0x216e6c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216e70:
    // 0x216e70: 0xc4208a8c  lwc1        $f0, -0x7574($at)
    ctx->pc = 0x216e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_216e74:
    // 0x216e74: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216e78:
    // 0x216e78: 0xe4218a68  swc1        $f1, -0x7598($at)
    ctx->pc = 0x216e78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937192), bits); }
label_216e7c:
    // 0x216e7c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216e80:
    // 0x216e80: 0xe4208a6c  swc1        $f0, -0x7594($at)
    ctx->pc = 0x216e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937196), bits); }
label_216e84:
    // 0x216e84: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x216e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_216e88:
    // 0x216e88: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216e8c:
    // 0x216e8c: 0xe4208a90  swc1        $f0, -0x7570($at)
    ctx->pc = 0x216e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937232), bits); }
label_216e90:
    // 0x216e90: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x216e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_216e94:
    // 0x216e94: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216e98:
    // 0x216e98: 0xe4208a94  swc1        $f0, -0x756C($at)
    ctx->pc = 0x216e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937236), bits); }
label_216e9c:
    // 0x216e9c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216ea0:
    // 0x216ea0: 0xac208a98  sw          $zero, -0x7568($at)
    ctx->pc = 0x216ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937240), GPR_U32(ctx, 0));
label_216ea4:
    // 0x216ea4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216ea8:
    // 0x216ea8: 0xac208a9c  sw          $zero, -0x7564($at)
    ctx->pc = 0x216ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937244), GPR_U32(ctx, 0));
label_216eac:
    // 0x216eac: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216eb0:
    // 0x216eb0: 0xac208a80  sw          $zero, -0x7580($at)
    ctx->pc = 0x216eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937216), GPR_U32(ctx, 0));
label_216eb4:
    // 0x216eb4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216eb8:
    // 0x216eb8: 0xac208a84  sw          $zero, -0x757C($at)
    ctx->pc = 0x216eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937220), GPR_U32(ctx, 0));
label_216ebc:
    // 0x216ebc: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216ec0:
    // 0x216ec0: 0xac208a88  sw          $zero, -0x7578($at)
    ctx->pc = 0x216ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937224), GPR_U32(ctx, 0));
label_216ec4:
    // 0x216ec4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216ec8:
    // 0x216ec8: 0xac258a8c  sw          $a1, -0x7574($at)
    ctx->pc = 0x216ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937228), GPR_U32(ctx, 5));
label_216ecc:
    // 0x216ecc: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216ed0:
    // 0x216ed0: 0xc4238a80  lwc1        $f3, -0x7580($at)
    ctx->pc = 0x216ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_216ed4:
    // 0x216ed4: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x216ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_216ed8:
    // 0x216ed8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216edc:
    // 0x216edc: 0xc4228a84  lwc1        $f2, -0x757C($at)
    ctx->pc = 0x216edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_216ee0:
    // 0x216ee0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216ee4:
    // 0x216ee4: 0xc4218a88  lwc1        $f1, -0x7578($at)
    ctx->pc = 0x216ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_216ee8:
    // 0x216ee8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216eec:
    // 0x216eec: 0xc4208a8c  lwc1        $f0, -0x7574($at)
    ctx->pc = 0x216eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_216ef0:
    // 0x216ef0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216ef4:
    // 0x216ef4: 0xe4248a50  swc1        $f4, -0x75B0($at)
    ctx->pc = 0x216ef4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937168), bits); }
label_216ef8:
    // 0x216ef8: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x216ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_216efc:
    // 0x216efc: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216f00:
    // 0x216f00: 0xe4248a54  swc1        $f4, -0x75AC($at)
    ctx->pc = 0x216f00u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937172), bits); }
label_216f04:
    // 0x216f04: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216f08:
    // 0x216f08: 0xac258a5c  sw          $a1, -0x75A4($at)
    ctx->pc = 0x216f08u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937180), GPR_U32(ctx, 5));
label_216f0c:
    // 0x216f0c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216f10:
    // 0x216f10: 0xe4238a40  swc1        $f3, -0x75C0($at)
    ctx->pc = 0x216f10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937152), bits); }
label_216f14:
    // 0x216f14: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216f18:
    // 0x216f18: 0xe4228a44  swc1        $f2, -0x75BC($at)
    ctx->pc = 0x216f18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937156), bits); }
label_216f1c:
    // 0x216f1c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216f20:
    // 0x216f20: 0xe4218a48  swc1        $f1, -0x75B8($at)
    ctx->pc = 0x216f20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937160), bits); }
label_216f24:
    // 0x216f24: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216f28:
    // 0x216f28: 0xe4208a4c  swc1        $f0, -0x75B4($at)
    ctx->pc = 0x216f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937164), bits); }
label_216f2c:
    // 0x216f2c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216f30:
    // 0x216f30: 0x3e00008  jr          $ra
label_216f34:
    if (ctx->pc == 0x216F34u) {
        ctx->pc = 0x216F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216F30u;
        // 0x216f34: 0xac208a58  sw          $zero, -0x75A8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216F38u;
        goto label_216f38;
    }
    ctx->pc = 0x216F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216F30u;
        // 0x216f34: 0xac208a58  sw          $zero, -0x75A8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216F38u;
label_216f38:
    // 0x216f38: 0x0  nop
    ctx->pc = 0x216f38u;
    // NOP
label_216f3c:
    // 0x216f3c: 0x0  nop
    ctx->pc = 0x216f3cu;
    // NOP
label_216f40:
    // 0x216f40: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216f44:
    // 0x216f44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x216f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216f48:
    // 0x216f48: 0xc4258a90  lwc1        $f5, -0x7570($at)
    ctx->pc = 0x216f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_216f4c:
    // 0x216f4c: 0x8f86924c  lw          $a2, -0x6DB4($gp)
    ctx->pc = 0x216f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939212)));
label_216f50:
    // 0x216f50: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x216f50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
label_216f54:
    // 0x216f54: 0xaf84923c  sw          $a0, -0x6DC4($gp)
    ctx->pc = 0x216f54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939196), GPR_U32(ctx, 4));
label_216f58:
    // 0x216f58: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x216f58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_216f5c:
    // 0x216f5c: 0x24a5d730  addiu       $a1, $a1, -0x28D0
    ctx->pc = 0x216f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956848));
label_216f60:
    // 0x216f60: 0xaf809238  sw          $zero, -0x6DC8($gp)
    ctx->pc = 0x216f60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939192), GPR_U32(ctx, 0));
label_216f64:
    // 0x216f64: 0x2484d734  addiu       $a0, $a0, -0x28CC
    ctx->pc = 0x216f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956852));
label_216f68:
    // 0x216f68: 0xaf839240  sw          $v1, -0x6DC0($gp)
    ctx->pc = 0x216f68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939200), GPR_U32(ctx, 3));
label_216f6c:
    // 0x216f6c: 0xaf839234  sw          $v1, -0x6DCC($gp)
    ctx->pc = 0x216f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939188), GPR_U32(ctx, 3));
label_216f70:
    // 0x216f70: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216f74:
    // 0x216f74: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x216f74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_216f78:
    // 0x216f78: 0xc4248a94  lwc1        $f4, -0x756C($at)
    ctx->pc = 0x216f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_216f7c:
    // 0x216f7c: 0xaf839230  sw          $v1, -0x6DD0($gp)
    ctx->pc = 0x216f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939184), GPR_U32(ctx, 3));
label_216f80:
    // 0x216f80: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x216f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_216f84:
    // 0x216f84: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x216f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_216f88:
    // 0x216f88: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x216f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_216f8c:
    // 0x216f8c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216f90:
    // 0x216f90: 0xc4238a98  lwc1        $f3, -0x7568($at)
    ctx->pc = 0x216f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_216f94:
    // 0x216f94: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216f98:
    // 0x216f98: 0xc4228a9c  lwc1        $f2, -0x7564($at)
    ctx->pc = 0x216f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_216f9c:
    // 0x216f9c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216fa0:
    // 0x216fa0: 0xc4218a80  lwc1        $f1, -0x7580($at)
    ctx->pc = 0x216fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_216fa4:
    // 0x216fa4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216fa8:
    // 0x216fa8: 0xc4208a84  lwc1        $f0, -0x757C($at)
    ctx->pc = 0x216fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_216fac:
    // 0x216fac: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216fb0:
    // 0x216fb0: 0xe4258a70  swc1        $f5, -0x7590($at)
    ctx->pc = 0x216fb0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937200), bits); }
label_216fb4:
    // 0x216fb4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216fb8:
    // 0x216fb8: 0xe4248a74  swc1        $f4, -0x758C($at)
    ctx->pc = 0x216fb8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937204), bits); }
label_216fbc:
    // 0x216fbc: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216fc0:
    // 0x216fc0: 0xe4238a78  swc1        $f3, -0x7588($at)
    ctx->pc = 0x216fc0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937208), bits); }
label_216fc4:
    // 0x216fc4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216fc8:
    // 0x216fc8: 0xe4228a7c  swc1        $f2, -0x7584($at)
    ctx->pc = 0x216fc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937212), bits); }
label_216fcc:
    // 0x216fcc: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216fd0:
    // 0x216fd0: 0xe4218a60  swc1        $f1, -0x75A0($at)
    ctx->pc = 0x216fd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937184), bits); }
label_216fd4:
    // 0x216fd4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216fd8:
    // 0x216fd8: 0xe4208a64  swc1        $f0, -0x759C($at)
    ctx->pc = 0x216fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937188), bits); }
label_216fdc:
    // 0x216fdc: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216fdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216fe0:
    // 0x216fe0: 0xc4218a88  lwc1        $f1, -0x7578($at)
    ctx->pc = 0x216fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_216fe4:
    // 0x216fe4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216fe8:
    // 0x216fe8: 0xc4208a8c  lwc1        $f0, -0x7574($at)
    ctx->pc = 0x216fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_216fec:
    // 0x216fec: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216ff0:
    // 0x216ff0: 0xe4218a68  swc1        $f1, -0x7598($at)
    ctx->pc = 0x216ff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937192), bits); }
label_216ff4:
    // 0x216ff4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216ff8:
    // 0x216ff8: 0xe4208a6c  swc1        $f0, -0x7594($at)
    ctx->pc = 0x216ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937196), bits); }
label_216ffc:
    // 0x216ffc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x216ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_217000:
    // 0x217000: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_217004:
    // 0x217004: 0xe4208a90  swc1        $f0, -0x7570($at)
    ctx->pc = 0x217004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937232), bits); }
label_217008:
    // 0x217008: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21700c:
    // 0x21700c: 0xc4208a90  lwc1        $f0, -0x7570($at)
    ctx->pc = 0x21700cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_217010:
    // 0x217010: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x217010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_217014:
    // 0x217014: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_217018:
    // 0x217018: 0xe4218a94  swc1        $f1, -0x756C($at)
    ctx->pc = 0x217018u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937236), bits); }
label_21701c:
    // 0x21701c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21701cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_217020:
    // 0x217020: 0xac238a8c  sw          $v1, -0x7574($at)
    ctx->pc = 0x217020u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937228), GPR_U32(ctx, 3));
label_217024:
    // 0x217024: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_217028:
    // 0x217028: 0xe4208a50  swc1        $f0, -0x75B0($at)
    ctx->pc = 0x217028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937168), bits); }
label_21702c:
    // 0x21702c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21702cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    ctx->pc = 0x217030u;
    return;
}

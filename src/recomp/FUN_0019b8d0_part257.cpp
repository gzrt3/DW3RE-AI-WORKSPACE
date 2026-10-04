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

// Function: FUN_0019b8d0
// Address: 0x19b8d0 - 0x29b8d8
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b8d0_part257(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2188d0u: goto label_2188d0;
        case 0x2188d4u: goto label_2188d4;
        case 0x2188d8u: goto label_2188d8;
        case 0x2188dcu: goto label_2188dc;
        case 0x2188e0u: goto label_2188e0;
        case 0x2188e4u: goto label_2188e4;
        case 0x2188e8u: goto label_2188e8;
        case 0x2188ecu: goto label_2188ec;
        case 0x2188f0u: goto label_2188f0;
        case 0x2188f4u: goto label_2188f4;
        case 0x2188f8u: goto label_2188f8;
        case 0x2188fcu: goto label_2188fc;
        case 0x218900u: goto label_218900;
        case 0x218904u: goto label_218904;
        case 0x218908u: goto label_218908;
        case 0x21890cu: goto label_21890c;
        case 0x218910u: goto label_218910;
        case 0x218914u: goto label_218914;
        case 0x218918u: goto label_218918;
        case 0x21891cu: goto label_21891c;
        case 0x218920u: goto label_218920;
        case 0x218924u: goto label_218924;
        case 0x218928u: goto label_218928;
        case 0x21892cu: goto label_21892c;
        case 0x218930u: goto label_218930;
        case 0x218934u: goto label_218934;
        case 0x218938u: goto label_218938;
        case 0x21893cu: goto label_21893c;
        case 0x218940u: goto label_218940;
        case 0x218944u: goto label_218944;
        case 0x218948u: goto label_218948;
        case 0x21894cu: goto label_21894c;
        case 0x218950u: goto label_218950;
        case 0x218954u: goto label_218954;
        case 0x218958u: goto label_218958;
        case 0x21895cu: goto label_21895c;
        case 0x218960u: goto label_218960;
        case 0x218964u: goto label_218964;
        case 0x218968u: goto label_218968;
        case 0x21896cu: goto label_21896c;
        case 0x218970u: goto label_218970;
        case 0x218974u: goto label_218974;
        case 0x218978u: goto label_218978;
        case 0x21897cu: goto label_21897c;
        case 0x218980u: goto label_218980;
        case 0x218984u: goto label_218984;
        case 0x218988u: goto label_218988;
        case 0x21898cu: goto label_21898c;
        case 0x218990u: goto label_218990;
        case 0x218994u: goto label_218994;
        case 0x218998u: goto label_218998;
        case 0x21899cu: goto label_21899c;
        case 0x2189a0u: goto label_2189a0;
        case 0x2189a4u: goto label_2189a4;
        case 0x2189a8u: goto label_2189a8;
        case 0x2189acu: goto label_2189ac;
        case 0x2189b0u: goto label_2189b0;
        case 0x2189b4u: goto label_2189b4;
        case 0x2189b8u: goto label_2189b8;
        case 0x2189bcu: goto label_2189bc;
        case 0x2189c0u: goto label_2189c0;
        case 0x2189c4u: goto label_2189c4;
        case 0x2189c8u: goto label_2189c8;
        case 0x2189ccu: goto label_2189cc;
        case 0x2189d0u: goto label_2189d0;
        case 0x2189d4u: goto label_2189d4;
        case 0x2189d8u: goto label_2189d8;
        case 0x2189dcu: goto label_2189dc;
        case 0x2189e0u: goto label_2189e0;
        case 0x2189e4u: goto label_2189e4;
        case 0x2189e8u: goto label_2189e8;
        case 0x2189ecu: goto label_2189ec;
        case 0x2189f0u: goto label_2189f0;
        case 0x2189f4u: goto label_2189f4;
        case 0x2189f8u: goto label_2189f8;
        case 0x2189fcu: goto label_2189fc;
        case 0x218a00u: goto label_218a00;
        case 0x218a04u: goto label_218a04;
        case 0x218a08u: goto label_218a08;
        case 0x218a0cu: goto label_218a0c;
        case 0x218a10u: goto label_218a10;
        case 0x218a14u: goto label_218a14;
        case 0x218a18u: goto label_218a18;
        case 0x218a1cu: goto label_218a1c;
        case 0x218a20u: goto label_218a20;
        case 0x218a24u: goto label_218a24;
        case 0x218a28u: goto label_218a28;
        case 0x218a2cu: goto label_218a2c;
        case 0x218a30u: goto label_218a30;
        case 0x218a34u: goto label_218a34;
        case 0x218a38u: goto label_218a38;
        case 0x218a3cu: goto label_218a3c;
        case 0x218a40u: goto label_218a40;
        case 0x218a44u: goto label_218a44;
        case 0x218a48u: goto label_218a48;
        case 0x218a4cu: goto label_218a4c;
        case 0x218a50u: goto label_218a50;
        case 0x218a54u: goto label_218a54;
        case 0x218a58u: goto label_218a58;
        case 0x218a5cu: goto label_218a5c;
        case 0x218a60u: goto label_218a60;
        case 0x218a64u: goto label_218a64;
        case 0x218a68u: goto label_218a68;
        case 0x218a6cu: goto label_218a6c;
        case 0x218a70u: goto label_218a70;
        case 0x218a74u: goto label_218a74;
        case 0x218a78u: goto label_218a78;
        case 0x218a7cu: goto label_218a7c;
        case 0x218a80u: goto label_218a80;
        case 0x218a84u: goto label_218a84;
        case 0x218a88u: goto label_218a88;
        case 0x218a8cu: goto label_218a8c;
        case 0x218a90u: goto label_218a90;
        case 0x218a94u: goto label_218a94;
        case 0x218a98u: goto label_218a98;
        case 0x218a9cu: goto label_218a9c;
        case 0x218aa0u: goto label_218aa0;
        case 0x218aa4u: goto label_218aa4;
        case 0x218aa8u: goto label_218aa8;
        case 0x218aacu: goto label_218aac;
        case 0x218ab0u: goto label_218ab0;
        case 0x218ab4u: goto label_218ab4;
        case 0x218ab8u: goto label_218ab8;
        case 0x218abcu: goto label_218abc;
        case 0x218ac0u: goto label_218ac0;
        case 0x218ac4u: goto label_218ac4;
        case 0x218ac8u: goto label_218ac8;
        case 0x218accu: goto label_218acc;
        case 0x218ad0u: goto label_218ad0;
        case 0x218ad4u: goto label_218ad4;
        case 0x218ad8u: goto label_218ad8;
        case 0x218adcu: goto label_218adc;
        case 0x218ae0u: goto label_218ae0;
        case 0x218ae4u: goto label_218ae4;
        case 0x218ae8u: goto label_218ae8;
        case 0x218aecu: goto label_218aec;
        case 0x218af0u: goto label_218af0;
        case 0x218af4u: goto label_218af4;
        case 0x218af8u: goto label_218af8;
        case 0x218afcu: goto label_218afc;
        case 0x218b00u: goto label_218b00;
        case 0x218b04u: goto label_218b04;
        case 0x218b08u: goto label_218b08;
        case 0x218b0cu: goto label_218b0c;
        case 0x218b10u: goto label_218b10;
        case 0x218b14u: goto label_218b14;
        case 0x218b18u: goto label_218b18;
        case 0x218b1cu: goto label_218b1c;
        case 0x218b20u: goto label_218b20;
        case 0x218b24u: goto label_218b24;
        case 0x218b28u: goto label_218b28;
        case 0x218b2cu: goto label_218b2c;
        case 0x218b30u: goto label_218b30;
        case 0x218b34u: goto label_218b34;
        case 0x218b38u: goto label_218b38;
        case 0x218b3cu: goto label_218b3c;
        case 0x218b40u: goto label_218b40;
        case 0x218b44u: goto label_218b44;
        case 0x218b48u: goto label_218b48;
        case 0x218b4cu: goto label_218b4c;
        case 0x218b50u: goto label_218b50;
        case 0x218b54u: goto label_218b54;
        case 0x218b58u: goto label_218b58;
        case 0x218b5cu: goto label_218b5c;
        case 0x218b60u: goto label_218b60;
        case 0x218b64u: goto label_218b64;
        case 0x218b68u: goto label_218b68;
        case 0x218b6cu: goto label_218b6c;
        case 0x218b70u: goto label_218b70;
        case 0x218b74u: goto label_218b74;
        case 0x218b78u: goto label_218b78;
        case 0x218b7cu: goto label_218b7c;
        case 0x218b80u: goto label_218b80;
        case 0x218b84u: goto label_218b84;
        case 0x218b88u: goto label_218b88;
        case 0x218b8cu: goto label_218b8c;
        case 0x218b90u: goto label_218b90;
        case 0x218b94u: goto label_218b94;
        case 0x218b98u: goto label_218b98;
        case 0x218b9cu: goto label_218b9c;
        case 0x218ba0u: goto label_218ba0;
        case 0x218ba4u: goto label_218ba4;
        case 0x218ba8u: goto label_218ba8;
        case 0x218bacu: goto label_218bac;
        case 0x218bb0u: goto label_218bb0;
        case 0x218bb4u: goto label_218bb4;
        case 0x218bb8u: goto label_218bb8;
        case 0x218bbcu: goto label_218bbc;
        case 0x218bc0u: goto label_218bc0;
        case 0x218bc4u: goto label_218bc4;
        case 0x218bc8u: goto label_218bc8;
        case 0x218bccu: goto label_218bcc;
        case 0x218bd0u: goto label_218bd0;
        case 0x218bd4u: goto label_218bd4;
        case 0x218bd8u: goto label_218bd8;
        case 0x218bdcu: goto label_218bdc;
        case 0x218be0u: goto label_218be0;
        case 0x218be4u: goto label_218be4;
        case 0x218be8u: goto label_218be8;
        case 0x218becu: goto label_218bec;
        case 0x218bf0u: goto label_218bf0;
        case 0x218bf4u: goto label_218bf4;
        case 0x218bf8u: goto label_218bf8;
        case 0x218bfcu: goto label_218bfc;
        case 0x218c00u: goto label_218c00;
        case 0x218c04u: goto label_218c04;
        case 0x218c08u: goto label_218c08;
        case 0x218c0cu: goto label_218c0c;
        case 0x218c10u: goto label_218c10;
        case 0x218c14u: goto label_218c14;
        case 0x218c18u: goto label_218c18;
        case 0x218c1cu: goto label_218c1c;
        case 0x218c20u: goto label_218c20;
        case 0x218c24u: goto label_218c24;
        case 0x218c28u: goto label_218c28;
        case 0x218c2cu: goto label_218c2c;
        case 0x218c30u: goto label_218c30;
        case 0x218c34u: goto label_218c34;
        case 0x218c38u: goto label_218c38;
        case 0x218c3cu: goto label_218c3c;
        case 0x218c40u: goto label_218c40;
        case 0x218c44u: goto label_218c44;
        case 0x218c48u: goto label_218c48;
        case 0x218c4cu: goto label_218c4c;
        case 0x218c50u: goto label_218c50;
        case 0x218c54u: goto label_218c54;
        case 0x218c58u: goto label_218c58;
        case 0x218c5cu: goto label_218c5c;
        case 0x218c60u: goto label_218c60;
        case 0x218c64u: goto label_218c64;
        case 0x218c68u: goto label_218c68;
        case 0x218c6cu: goto label_218c6c;
        case 0x218c70u: goto label_218c70;
        case 0x218c74u: goto label_218c74;
        case 0x218c78u: goto label_218c78;
        case 0x218c7cu: goto label_218c7c;
        case 0x218c80u: goto label_218c80;
        case 0x218c84u: goto label_218c84;
        case 0x218c88u: goto label_218c88;
        case 0x218c8cu: goto label_218c8c;
        case 0x218c90u: goto label_218c90;
        case 0x218c94u: goto label_218c94;
        case 0x218c98u: goto label_218c98;
        case 0x218c9cu: goto label_218c9c;
        case 0x218ca0u: goto label_218ca0;
        case 0x218ca4u: goto label_218ca4;
        case 0x218ca8u: goto label_218ca8;
        case 0x218cacu: goto label_218cac;
        case 0x218cb0u: goto label_218cb0;
        case 0x218cb4u: goto label_218cb4;
        case 0x218cb8u: goto label_218cb8;
        case 0x218cbcu: goto label_218cbc;
        case 0x218cc0u: goto label_218cc0;
        case 0x218cc4u: goto label_218cc4;
        case 0x218cc8u: goto label_218cc8;
        case 0x218cccu: goto label_218ccc;
        case 0x218cd0u: goto label_218cd0;
        case 0x218cd4u: goto label_218cd4;
        case 0x218cd8u: goto label_218cd8;
        case 0x218cdcu: goto label_218cdc;
        case 0x218ce0u: goto label_218ce0;
        case 0x218ce4u: goto label_218ce4;
        case 0x218ce8u: goto label_218ce8;
        case 0x218cecu: goto label_218cec;
        case 0x218cf0u: goto label_218cf0;
        case 0x218cf4u: goto label_218cf4;
        case 0x218cf8u: goto label_218cf8;
        case 0x218cfcu: goto label_218cfc;
        case 0x218d00u: goto label_218d00;
        case 0x218d04u: goto label_218d04;
        case 0x218d08u: goto label_218d08;
        case 0x218d0cu: goto label_218d0c;
        case 0x218d10u: goto label_218d10;
        case 0x218d14u: goto label_218d14;
        case 0x218d18u: goto label_218d18;
        case 0x218d1cu: goto label_218d1c;
        case 0x218d20u: goto label_218d20;
        case 0x218d24u: goto label_218d24;
        case 0x218d28u: goto label_218d28;
        case 0x218d2cu: goto label_218d2c;
        case 0x218d30u: goto label_218d30;
        case 0x218d34u: goto label_218d34;
        case 0x218d38u: goto label_218d38;
        case 0x218d3cu: goto label_218d3c;
        case 0x218d40u: goto label_218d40;
        case 0x218d44u: goto label_218d44;
        case 0x218d48u: goto label_218d48;
        case 0x218d4cu: goto label_218d4c;
        case 0x218d50u: goto label_218d50;
        case 0x218d54u: goto label_218d54;
        case 0x218d58u: goto label_218d58;
        case 0x218d5cu: goto label_218d5c;
        case 0x218d60u: goto label_218d60;
        case 0x218d64u: goto label_218d64;
        case 0x218d68u: goto label_218d68;
        case 0x218d6cu: goto label_218d6c;
        case 0x218d70u: goto label_218d70;
        case 0x218d74u: goto label_218d74;
        case 0x218d78u: goto label_218d78;
        case 0x218d7cu: goto label_218d7c;
        case 0x218d80u: goto label_218d80;
        case 0x218d84u: goto label_218d84;
        case 0x218d88u: goto label_218d88;
        case 0x218d8cu: goto label_218d8c;
        case 0x218d90u: goto label_218d90;
        case 0x218d94u: goto label_218d94;
        case 0x218d98u: goto label_218d98;
        case 0x218d9cu: goto label_218d9c;
        case 0x218da0u: goto label_218da0;
        case 0x218da4u: goto label_218da4;
        case 0x218da8u: goto label_218da8;
        case 0x218dacu: goto label_218dac;
        case 0x218db0u: goto label_218db0;
        case 0x218db4u: goto label_218db4;
        case 0x218db8u: goto label_218db8;
        case 0x218dbcu: goto label_218dbc;
        case 0x218dc0u: goto label_218dc0;
        case 0x218dc4u: goto label_218dc4;
        case 0x218dc8u: goto label_218dc8;
        case 0x218dccu: goto label_218dcc;
        case 0x218dd0u: goto label_218dd0;
        case 0x218dd4u: goto label_218dd4;
        case 0x218dd8u: goto label_218dd8;
        case 0x218ddcu: goto label_218ddc;
        case 0x218de0u: goto label_218de0;
        case 0x218de4u: goto label_218de4;
        case 0x218de8u: goto label_218de8;
        case 0x218decu: goto label_218dec;
        case 0x218df0u: goto label_218df0;
        case 0x218df4u: goto label_218df4;
        case 0x218df8u: goto label_218df8;
        case 0x218dfcu: goto label_218dfc;
        case 0x218e00u: goto label_218e00;
        case 0x218e04u: goto label_218e04;
        case 0x218e08u: goto label_218e08;
        case 0x218e0cu: goto label_218e0c;
        case 0x218e10u: goto label_218e10;
        case 0x218e14u: goto label_218e14;
        case 0x218e18u: goto label_218e18;
        case 0x218e1cu: goto label_218e1c;
        case 0x218e20u: goto label_218e20;
        case 0x218e24u: goto label_218e24;
        case 0x218e28u: goto label_218e28;
        case 0x218e2cu: goto label_218e2c;
        case 0x218e30u: goto label_218e30;
        case 0x218e34u: goto label_218e34;
        case 0x218e38u: goto label_218e38;
        case 0x218e3cu: goto label_218e3c;
        case 0x218e40u: goto label_218e40;
        case 0x218e44u: goto label_218e44;
        case 0x218e48u: goto label_218e48;
        case 0x218e4cu: goto label_218e4c;
        case 0x218e50u: goto label_218e50;
        case 0x218e54u: goto label_218e54;
        case 0x218e58u: goto label_218e58;
        case 0x218e5cu: goto label_218e5c;
        case 0x218e60u: goto label_218e60;
        case 0x218e64u: goto label_218e64;
        case 0x218e68u: goto label_218e68;
        case 0x218e6cu: goto label_218e6c;
        case 0x218e70u: goto label_218e70;
        case 0x218e74u: goto label_218e74;
        case 0x218e78u: goto label_218e78;
        case 0x218e7cu: goto label_218e7c;
        case 0x218e80u: goto label_218e80;
        case 0x218e84u: goto label_218e84;
        case 0x218e88u: goto label_218e88;
        case 0x218e8cu: goto label_218e8c;
        case 0x218e90u: goto label_218e90;
        case 0x218e94u: goto label_218e94;
        case 0x218e98u: goto label_218e98;
        case 0x218e9cu: goto label_218e9c;
        case 0x218ea0u: goto label_218ea0;
        case 0x218ea4u: goto label_218ea4;
        case 0x218ea8u: goto label_218ea8;
        case 0x218eacu: goto label_218eac;
        case 0x218eb0u: goto label_218eb0;
        case 0x218eb4u: goto label_218eb4;
        case 0x218eb8u: goto label_218eb8;
        case 0x218ebcu: goto label_218ebc;
        case 0x218ec0u: goto label_218ec0;
        case 0x218ec4u: goto label_218ec4;
        case 0x218ec8u: goto label_218ec8;
        case 0x218eccu: goto label_218ecc;
        case 0x218ed0u: goto label_218ed0;
        case 0x218ed4u: goto label_218ed4;
        case 0x218ed8u: goto label_218ed8;
        case 0x218edcu: goto label_218edc;
        case 0x218ee0u: goto label_218ee0;
        case 0x218ee4u: goto label_218ee4;
        case 0x218ee8u: goto label_218ee8;
        case 0x218eecu: goto label_218eec;
        case 0x218ef0u: goto label_218ef0;
        case 0x218ef4u: goto label_218ef4;
        case 0x218ef8u: goto label_218ef8;
        case 0x218efcu: goto label_218efc;
        case 0x218f00u: goto label_218f00;
        case 0x218f04u: goto label_218f04;
        case 0x218f08u: goto label_218f08;
        case 0x218f0cu: goto label_218f0c;
        case 0x218f10u: goto label_218f10;
        case 0x218f14u: goto label_218f14;
        case 0x218f18u: goto label_218f18;
        case 0x218f1cu: goto label_218f1c;
        case 0x218f20u: goto label_218f20;
        case 0x218f24u: goto label_218f24;
        case 0x218f28u: goto label_218f28;
        case 0x218f2cu: goto label_218f2c;
        case 0x218f30u: goto label_218f30;
        case 0x218f34u: goto label_218f34;
        case 0x218f38u: goto label_218f38;
        case 0x218f3cu: goto label_218f3c;
        case 0x218f40u: goto label_218f40;
        case 0x218f44u: goto label_218f44;
        case 0x218f48u: goto label_218f48;
        case 0x218f4cu: goto label_218f4c;
        case 0x218f50u: goto label_218f50;
        case 0x218f54u: goto label_218f54;
        case 0x218f58u: goto label_218f58;
        case 0x218f5cu: goto label_218f5c;
        case 0x218f60u: goto label_218f60;
        case 0x218f64u: goto label_218f64;
        case 0x218f68u: goto label_218f68;
        case 0x218f6cu: goto label_218f6c;
        case 0x218f70u: goto label_218f70;
        case 0x218f74u: goto label_218f74;
        case 0x218f78u: goto label_218f78;
        case 0x218f7cu: goto label_218f7c;
        case 0x218f80u: goto label_218f80;
        case 0x218f84u: goto label_218f84;
        case 0x218f88u: goto label_218f88;
        case 0x218f8cu: goto label_218f8c;
        case 0x218f90u: goto label_218f90;
        case 0x218f94u: goto label_218f94;
        case 0x218f98u: goto label_218f98;
        case 0x218f9cu: goto label_218f9c;
        case 0x218fa0u: goto label_218fa0;
        case 0x218fa4u: goto label_218fa4;
        case 0x218fa8u: goto label_218fa8;
        case 0x218facu: goto label_218fac;
        case 0x218fb0u: goto label_218fb0;
        case 0x218fb4u: goto label_218fb4;
        case 0x218fb8u: goto label_218fb8;
        case 0x218fbcu: goto label_218fbc;
        case 0x218fc0u: goto label_218fc0;
        case 0x218fc4u: goto label_218fc4;
        case 0x218fc8u: goto label_218fc8;
        case 0x218fccu: goto label_218fcc;
        case 0x218fd0u: goto label_218fd0;
        case 0x218fd4u: goto label_218fd4;
        case 0x218fd8u: goto label_218fd8;
        case 0x218fdcu: goto label_218fdc;
        case 0x218fe0u: goto label_218fe0;
        case 0x218fe4u: goto label_218fe4;
        case 0x218fe8u: goto label_218fe8;
        case 0x218fecu: goto label_218fec;
        case 0x218ff0u: goto label_218ff0;
        case 0x218ff4u: goto label_218ff4;
        case 0x218ff8u: goto label_218ff8;
        case 0x218ffcu: goto label_218ffc;
        case 0x219000u: goto label_219000;
        case 0x219004u: goto label_219004;
        case 0x219008u: goto label_219008;
        case 0x21900cu: goto label_21900c;
        case 0x219010u: goto label_219010;
        case 0x219014u: goto label_219014;
        case 0x219018u: goto label_219018;
        case 0x21901cu: goto label_21901c;
        case 0x219020u: goto label_219020;
        case 0x219024u: goto label_219024;
        case 0x219028u: goto label_219028;
        case 0x21902cu: goto label_21902c;
        case 0x219030u: goto label_219030;
        case 0x219034u: goto label_219034;
        case 0x219038u: goto label_219038;
        case 0x21903cu: goto label_21903c;
        case 0x219040u: goto label_219040;
        case 0x219044u: goto label_219044;
        case 0x219048u: goto label_219048;
        case 0x21904cu: goto label_21904c;
        case 0x219050u: goto label_219050;
        case 0x219054u: goto label_219054;
        case 0x219058u: goto label_219058;
        case 0x21905cu: goto label_21905c;
        case 0x219060u: goto label_219060;
        case 0x219064u: goto label_219064;
        case 0x219068u: goto label_219068;
        case 0x21906cu: goto label_21906c;
        case 0x219070u: goto label_219070;
        case 0x219074u: goto label_219074;
        case 0x219078u: goto label_219078;
        case 0x21907cu: goto label_21907c;
        case 0x219080u: goto label_219080;
        case 0x219084u: goto label_219084;
        case 0x219088u: goto label_219088;
        case 0x21908cu: goto label_21908c;
        case 0x219090u: goto label_219090;
        case 0x219094u: goto label_219094;
        case 0x219098u: goto label_219098;
        case 0x21909cu: goto label_21909c;
        default: return;
    }

label_2188d0:
    // 0x2188d0: 0xe4e70000  swc1        $f7, 0x0($a3)
    ctx->pc = 0x2188d0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_2188d4:
    // 0x2188d4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2188d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2188d8:
    // 0x2188d8: 0xe5080000  swc1        $f8, 0x0($t0)
    ctx->pc = 0x2188d8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_2188dc:
    // 0x2188dc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2188dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2188e0:
    // 0x2188e0: 0x9234016a  lbu         $s4, 0x16A($s1)
    ctx->pc = 0x2188e0u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 362)));
label_2188e4:
    // 0x2188e4: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x2188e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_2188e8:
    // 0x2188e8: 0x0  nop
    ctx->pc = 0x2188e8u;
    // NOP
label_2188ec:
    // 0x2188ec: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x2188ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_2188f0:
    // 0x2188f0: 0x328400ff  andi        $a0, $s4, 0xFF
    ctx->pc = 0x2188f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_2188f4:
    // 0x2188f4: 0x9063016a  lbu         $v1, 0x16A($v1)
    ctx->pc = 0x2188f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 362)));
label_2188f8:
    // 0x2188f8: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
label_2188fc:
    if (ctx->pc == 0x2188FCu) {
        ctx->pc = 0x218900u;
        goto label_218900;
    }
    ctx->pc = 0x2188F8u;
    {
        const bool branch_taken_0x2188f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2188f8) {
            ctx->pc = 0x21896Cu;
            goto label_21896c;
        }
    }
    ctx->pc = 0x218900u;
label_218900:
    // 0x218900: 0x308200f0  andi        $v0, $a0, 0xF0
    ctx->pc = 0x218900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)240);
label_218904:
    // 0x218904: 0x3087000f  andi        $a3, $a0, 0xF
    ctx->pc = 0x218904u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_218908:
    // 0x218908: 0x8f849268  lw          $a0, -0x6D98($gp)
    ctx->pc = 0x218908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939240)));
label_21890c:
    // 0x21890c: 0x23103  sra         $a2, $v0, 4
    ctx->pc = 0x21890cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
label_218910:
    // 0x218910: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x218910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_218914:
    // 0x218914: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_218918:
    if (ctx->pc == 0x218918u) {
        ctx->pc = 0x218918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218914u;
        // 0x218918: 0x28c20008  slti        $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21891Cu;
        goto label_21891c;
    }
    ctx->pc = 0x218914u;
    {
        const bool branch_taken_0x218914 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x218918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218914u;
        // 0x218918: 0x28c20008  slti        $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x218914) {
            ctx->pc = 0x21892Cu;
            goto label_21892c;
        }
    }
    ctx->pc = 0x21891Cu;
label_21891c:
    // 0x21891c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_218920:
    if (ctx->pc == 0x218920u) {
        ctx->pc = 0x218924u;
        goto label_218924;
    }
    ctx->pc = 0x21891Cu;
    {
        const bool branch_taken_0x21891c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21891c) {
            ctx->pc = 0x21892Cu;
            goto label_21892c;
        }
    }
    ctx->pc = 0x218924u;
label_218924:
    // 0x218924: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x218924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
label_218928:
    // 0x218928: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x218928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_21892c:
    // 0x21892c: 0x0  nop
    ctx->pc = 0x21892cu;
    // NOP
label_218930:
    // 0x218930: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x218930u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_218934:
    // 0x218934: 0x328200f0  andi        $v0, $s4, 0xF0
    ctx->pc = 0x218934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)240);
label_218938:
    // 0x218938: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x218938u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
label_21893c:
    // 0x21893c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x21893cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_218940:
    // 0x218940: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
label_218944:
    if (ctx->pc == 0x218944u) {
        ctx->pc = 0x218944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218940u;
        // 0x218944: 0x3285000f  andi        $a1, $s4, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x218948u;
        goto label_218948;
    }
    ctx->pc = 0x218940u;
    {
        const bool branch_taken_0x218940 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x218944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218940u;
        // 0x218944: 0x3285000f  andi        $a1, $s4, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x218940) {
            ctx->pc = 0x21895Cu;
            goto label_21895c;
        }
    }
    ctx->pc = 0x218948u;
label_218948:
    // 0x218948: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x218948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_21894c:
    // 0x21894c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_218950:
    if (ctx->pc == 0x218950u) {
        ctx->pc = 0x218954u;
        goto label_218954;
    }
    ctx->pc = 0x21894Cu;
    {
        const bool branch_taken_0x21894c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21894c) {
            ctx->pc = 0x21895Cu;
            goto label_21895c;
        }
    }
    ctx->pc = 0x218954u;
label_218954:
    // 0x218954: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x218954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_218958:
    // 0x218958: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x218958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_21895c:
    // 0x21895c: 0x0  nop
    ctx->pc = 0x21895cu;
    // NOP
label_218960:
    // 0x218960: 0x662023  subu        $a0, $v1, $a2
    ctx->pc = 0x218960u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_218964:
    // 0x218964: 0xc0866e8  jal         func_219BA0
label_218968:
    if (ctx->pc == 0x218968u) {
        ctx->pc = 0x218968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218964u;
        // 0x218968: 0xa72823  subu        $a1, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21896Cu;
        goto label_21896c;
    }
    ctx->pc = 0x218964u;
    SET_GPR_U32(ctx, 31, 0x21896Cu);
    ctx->pc = 0x218968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218964u;
    // 0x218968: 0xa72823  subu        $a1, $a1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219BA0u;
    { ctx->pc = 0x219ba0; return; }
    ctx->pc = 0x21896Cu;
label_21896c:
    // 0x21896c: 0x0  nop
    ctx->pc = 0x21896cu;
    // NOP
label_218970:
    // 0x218970: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x218970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_218974:
    // 0x218974: 0x243082a  slt         $at, $s2, $v1
    ctx->pc = 0x218974u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_218978:
    // 0x218978: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_21897c:
    if (ctx->pc == 0x21897Cu) {
        ctx->pc = 0x218980u;
        goto label_218980;
    }
    ctx->pc = 0x218978u;
    {
        const bool branch_taken_0x218978 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x218978) {
            ctx->pc = 0x218990u;
            goto label_218990;
        }
    }
    ctx->pc = 0x218980u;
label_218980:
    // 0x218980: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x218980u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_218984:
    // 0x218984: 0x2a4300b5  slti        $v1, $s2, 0xB5
    ctx->pc = 0x218984u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)181) ? 1 : 0);
label_218988:
    // 0x218988: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
label_21898c:
    if (ctx->pc == 0x21898Cu) {
        ctx->pc = 0x21898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218988u;
        // 0x21898c: 0x2321821  addu        $v1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218990u;
        goto label_218990;
    }
    ctx->pc = 0x218988u;
    {
        const bool branch_taken_0x218988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218988u;
        // 0x21898c: 0x2321821  addu        $v1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218988) {
            ctx->pc = 0x2188F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2188f0;
        }
    }
    ctx->pc = 0x218990u;
label_218990:
    // 0x218990: 0xc085d54  jal         func_217550
label_218994:
    if (ctx->pc == 0x218994u) {
        ctx->pc = 0x218994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218990u;
        // 0x218994: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218998u;
        goto label_218998;
    }
    ctx->pc = 0x218990u;
    SET_GPR_U32(ctx, 31, 0x218998u);
    ctx->pc = 0x218994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218990u;
    // 0x218994: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217550u;
    { ctx->pc = 0x217550; return; }
    ctx->pc = 0x218998u;
label_218998:
    // 0x218998: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x218998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_21899c:
    // 0x21899c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x21899cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2189a0:
    // 0x2189a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2189a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2189a4:
    // 0x2189a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2189a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2189a8:
    // 0x2189a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2189a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2189ac:
    // 0x2189ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2189acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2189b0:
    // 0x2189b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2189b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2189b4:
    // 0x2189b4: 0x3e00008  jr          $ra
label_2189b8:
    if (ctx->pc == 0x2189B8u) {
        ctx->pc = 0x2189B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2189B4u;
        // 0x2189b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2189BCu;
        goto label_2189bc;
    }
    ctx->pc = 0x2189B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2189B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2189B4u;
        // 0x2189b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2189B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2189BCu;
label_2189bc:
    // 0x2189bc: 0x0  nop
    ctx->pc = 0x2189bcu;
    // NOP
label_2189c0:
    // 0x2189c0: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x2189c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_2189c4:
    // 0x2189c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2189c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2189c8:
    // 0x2189c8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x2189c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_2189cc:
    // 0x2189cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2189ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2189d0:
    // 0x2189d0: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x2189d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
label_2189d4:
    // 0x2189d4: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x2189d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_2189d8:
    // 0x2189d8: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x2189d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_2189dc:
    // 0x2189dc: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x2189dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_2189e0:
    // 0x2189e0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2189e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_2189e4:
    // 0x2189e4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2189e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2189e8:
    // 0x2189e8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2189e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_2189ec:
    // 0x2189ec: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2189ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2189f0:
    // 0x2189f0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2189f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2189f4:
    // 0x2189f4: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x2189f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_2189f8:
    // 0x2189f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2189f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2189fc:
    // 0x2189fc: 0x24a58ac0  addiu       $a1, $a1, -0x7540
    ctx->pc = 0x2189fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937280));
label_218a00:
    // 0x218a00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x218a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_218a04:
    // 0x218a04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x218a04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218a08:
    // 0x218a08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x218a08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218a0c:
    // 0x218a0c: 0xa95821  addu        $t3, $a1, $t1
    ctx->pc = 0x218a0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_218a10:
    // 0x218a10: 0x1685021  addu        $t2, $t3, $t0
    ctx->pc = 0x218a10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
label_218a14:
    // 0x218a14: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x218a14u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
label_218a18:
    // 0x218a18: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x218a18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_218a1c:
    // 0x218a1c: 0xad430004  sw          $v1, 0x4($t2)
    ctx->pc = 0x218a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
label_218a20:
    // 0x218a20: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x218a20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_218a24:
    // 0x218a24: 0xad400008  sw          $zero, 0x8($t2)
    ctx->pc = 0x218a24u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 0));
label_218a28:
    // 0x218a28: 0x25080080  addiu       $t0, $t0, 0x80
    ctx->pc = 0x218a28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
label_218a2c:
    // 0x218a2c: 0xad40000c  sw          $zero, 0xC($t2)
    ctx->pc = 0x218a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 0));
label_218a30:
    // 0x218a30: 0xad440010  sw          $a0, 0x10($t2)
    ctx->pc = 0x218a30u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 4));
label_218a34:
    // 0x218a34: 0xad430014  sw          $v1, 0x14($t2)
    ctx->pc = 0x218a34u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 3));
label_218a38:
    // 0x218a38: 0xad400018  sw          $zero, 0x18($t2)
    ctx->pc = 0x218a38u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 0));
label_218a3c:
    // 0x218a3c: 0xad40001c  sw          $zero, 0x1C($t2)
    ctx->pc = 0x218a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 0));
label_218a40:
    // 0x218a40: 0xad440020  sw          $a0, 0x20($t2)
    ctx->pc = 0x218a40u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 32), GPR_U32(ctx, 4));
label_218a44:
    // 0x218a44: 0xad430024  sw          $v1, 0x24($t2)
    ctx->pc = 0x218a44u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 36), GPR_U32(ctx, 3));
label_218a48:
    // 0x218a48: 0xad400028  sw          $zero, 0x28($t2)
    ctx->pc = 0x218a48u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 40), GPR_U32(ctx, 0));
label_218a4c:
    // 0x218a4c: 0xad40002c  sw          $zero, 0x2C($t2)
    ctx->pc = 0x218a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 44), GPR_U32(ctx, 0));
label_218a50:
    // 0x218a50: 0xad440030  sw          $a0, 0x30($t2)
    ctx->pc = 0x218a50u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 48), GPR_U32(ctx, 4));
label_218a54:
    // 0x218a54: 0xad430034  sw          $v1, 0x34($t2)
    ctx->pc = 0x218a54u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 52), GPR_U32(ctx, 3));
label_218a58:
    // 0x218a58: 0xad400038  sw          $zero, 0x38($t2)
    ctx->pc = 0x218a58u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 56), GPR_U32(ctx, 0));
label_218a5c:
    // 0x218a5c: 0xad40003c  sw          $zero, 0x3C($t2)
    ctx->pc = 0x218a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 60), GPR_U32(ctx, 0));
label_218a60:
    // 0x218a60: 0xad440040  sw          $a0, 0x40($t2)
    ctx->pc = 0x218a60u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 64), GPR_U32(ctx, 4));
label_218a64:
    // 0x218a64: 0xad430044  sw          $v1, 0x44($t2)
    ctx->pc = 0x218a64u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 68), GPR_U32(ctx, 3));
label_218a68:
    // 0x218a68: 0xad400048  sw          $zero, 0x48($t2)
    ctx->pc = 0x218a68u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 72), GPR_U32(ctx, 0));
label_218a6c:
    // 0x218a6c: 0xad40004c  sw          $zero, 0x4C($t2)
    ctx->pc = 0x218a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 76), GPR_U32(ctx, 0));
label_218a70:
    // 0x218a70: 0xad440050  sw          $a0, 0x50($t2)
    ctx->pc = 0x218a70u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 80), GPR_U32(ctx, 4));
label_218a74:
    // 0x218a74: 0xad430054  sw          $v1, 0x54($t2)
    ctx->pc = 0x218a74u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 84), GPR_U32(ctx, 3));
label_218a78:
    // 0x218a78: 0xad400058  sw          $zero, 0x58($t2)
    ctx->pc = 0x218a78u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 88), GPR_U32(ctx, 0));
label_218a7c:
    // 0x218a7c: 0xad40005c  sw          $zero, 0x5C($t2)
    ctx->pc = 0x218a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 92), GPR_U32(ctx, 0));
label_218a80:
    // 0x218a80: 0xad440060  sw          $a0, 0x60($t2)
    ctx->pc = 0x218a80u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 96), GPR_U32(ctx, 4));
label_218a84:
    // 0x218a84: 0xad430064  sw          $v1, 0x64($t2)
    ctx->pc = 0x218a84u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 100), GPR_U32(ctx, 3));
label_218a88:
    // 0x218a88: 0xad400068  sw          $zero, 0x68($t2)
    ctx->pc = 0x218a88u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 104), GPR_U32(ctx, 0));
label_218a8c:
    // 0x218a8c: 0xad40006c  sw          $zero, 0x6C($t2)
    ctx->pc = 0x218a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 108), GPR_U32(ctx, 0));
label_218a90:
    // 0x218a90: 0xad440070  sw          $a0, 0x70($t2)
    ctx->pc = 0x218a90u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 112), GPR_U32(ctx, 4));
label_218a94:
    // 0x218a94: 0xad430074  sw          $v1, 0x74($t2)
    ctx->pc = 0x218a94u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 116), GPR_U32(ctx, 3));
label_218a98:
    // 0x218a98: 0xad400078  sw          $zero, 0x78($t2)
    ctx->pc = 0x218a98u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 120), GPR_U32(ctx, 0));
label_218a9c:
    // 0x218a9c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_218aa0:
    if (ctx->pc == 0x218AA0u) {
        ctx->pc = 0x218AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218A9Cu;
        // 0x218aa0: 0xad40007c  sw          $zero, 0x7C($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218AA4u;
        goto label_218aa4;
    }
    ctx->pc = 0x218A9Cu;
    {
        const bool branch_taken_0x218a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218A9Cu;
        // 0x218aa0: 0xad40007c  sw          $zero, 0x7C($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218a9c) {
            ctx->pc = 0x218A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218a10;
        }
    }
    ctx->pc = 0x218AA4u;
label_218aa4:
    // 0x218aa4: 0x28e1000a  slti        $at, $a3, 0xA
    ctx->pc = 0x218aa4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
label_218aa8:
    // 0x218aa8: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_218aac:
    if (ctx->pc == 0x218AACu) {
        ctx->pc = 0x218AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218AA8u;
        // 0x218aac: 0x74100  sll         $t0, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218AB0u;
        goto label_218ab0;
    }
    ctx->pc = 0x218AA8u;
    {
        const bool branch_taken_0x218aa8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x218AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218AA8u;
        // 0x218aac: 0x74100  sll         $t0, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218aa8) {
            ctx->pc = 0x218AD4u;
            goto label_218ad4;
        }
    }
    ctx->pc = 0x218AB0u;
label_218ab0:
    // 0x218ab0: 0x1685021  addu        $t2, $t3, $t0
    ctx->pc = 0x218ab0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
label_218ab4:
    // 0x218ab4: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x218ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
label_218ab8:
    // 0x218ab8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x218ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_218abc:
    // 0x218abc: 0xad430004  sw          $v1, 0x4($t2)
    ctx->pc = 0x218abcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
label_218ac0:
    // 0x218ac0: 0x28e2000a  slti        $v0, $a3, 0xA
    ctx->pc = 0x218ac0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
label_218ac4:
    // 0x218ac4: 0xad400008  sw          $zero, 0x8($t2)
    ctx->pc = 0x218ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 0));
label_218ac8:
    // 0x218ac8: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x218ac8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_218acc:
    // 0x218acc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_218ad0:
    if (ctx->pc == 0x218AD0u) {
        ctx->pc = 0x218AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218ACCu;
        // 0x218ad0: 0xad40000c  sw          $zero, 0xC($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218AD4u;
        goto label_218ad4;
    }
    ctx->pc = 0x218ACCu;
    {
        const bool branch_taken_0x218acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218ACCu;
        // 0x218ad0: 0xad40000c  sw          $zero, 0xC($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218acc) {
            ctx->pc = 0x218AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218ab0;
        }
    }
    ctx->pc = 0x218AD4u;
label_218ad4:
    // 0x218ad4: 0x0  nop
    ctx->pc = 0x218ad4u;
    // NOP
label_218ad8:
    // 0x218ad8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x218ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_218adc:
    // 0x218adc: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x218adcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_218ae0:
    // 0x218ae0: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
label_218ae4:
    if (ctx->pc == 0x218AE4u) {
        ctx->pc = 0x218AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218AE0u;
        // 0x218ae4: 0x252900a0  addiu       $t1, $t1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218AE8u;
        goto label_218ae8;
    }
    ctx->pc = 0x218AE0u;
    {
        const bool branch_taken_0x218ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218AE0u;
        // 0x218ae4: 0x252900a0  addiu       $t1, $t1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218ae0) {
            ctx->pc = 0x218A04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218a04;
        }
    }
    ctx->pc = 0x218AE8u;
label_218ae8:
    // 0x218ae8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x218ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218aec:
    // 0x218aec: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x218aecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218af0:
    // 0x218af0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x218af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_218af4:
    // 0x218af4: 0x3c070059  lui         $a3, 0x59
    ctx->pc = 0x218af4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)89 << 16));
label_218af8:
    // 0x218af8: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x218af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_218afc:
    // 0x218afc: 0x24e78ac0  addiu       $a3, $a3, -0x7540
    ctx->pc = 0x218afcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294937280));
label_218b00:
    // 0x218b00: 0x0  nop
    ctx->pc = 0x218b00u;
    // NOP
label_218b04:
    // 0x218b04: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x218b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_218b08:
    // 0x218b08: 0x90c5367c  lbu         $a1, 0x367C($a2)
    ctx->pc = 0x218b08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 13948)));
label_218b0c:
    // 0x218b0c: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
label_218b10:
    if (ctx->pc == 0x218B10u) {
        ctx->pc = 0x218B14u;
        goto label_218b14;
    }
    ctx->pc = 0x218B0Cu;
    {
        const bool branch_taken_0x218b0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x218b0c) {
            ctx->pc = 0x218B80u;
            goto label_218b80;
        }
    }
    ctx->pc = 0x218B14u;
label_218b14:
    // 0x218b14: 0x8cc9366c  lw          $t1, 0x366C($a2)
    ctx->pc = 0x218b14u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 13932)));
label_218b18:
    // 0x218b18: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x218b18u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218b1c:
    // 0x218b1c: 0x8cc83674  lw          $t0, 0x3674($a2)
    ctx->pc = 0x218b1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 13940)));
label_218b20:
    // 0x218b20: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x218b20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218b24:
    // 0x218b24: 0x828c0  sll         $a1, $t0, 3
    ctx->pc = 0x218b24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_218b28:
    // 0x218b28: 0xa83021  addu        $a2, $a1, $t0
    ctx->pc = 0x218b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_218b2c:
    // 0x218b2c: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x218b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_218b30:
    // 0x218b30: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x218b30u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_218b34:
    // 0x218b34: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x218b34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_218b38:
    // 0x218b38: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x218b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_218b3c:
    // 0x218b3c: 0x24a60000  addiu       $a2, $a1, 0x0
    ctx->pc = 0x218b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
label_218b40:
    // 0x218b40: 0xca2821  addu        $a1, $a2, $t2
    ctx->pc = 0x218b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_218b44:
    // 0x218b44: 0x90a50220  lbu         $a1, 0x220($a1)
    ctx->pc = 0x218b44u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 544)));
label_218b48:
    // 0x218b48: 0x14a90009  bne         $a1, $t1, . + 4 + (0x9 << 2)
label_218b4c:
    if (ctx->pc == 0x218B4Cu) {
        ctx->pc = 0x218B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B48u;
        // 0x218b4c: 0x82880  sll         $a1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218B50u;
        goto label_218b50;
    }
    ctx->pc = 0x218B48u;
    {
        const bool branch_taken_0x218b48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 9));
        ctx->pc = 0x218B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B48u;
        // 0x218b4c: 0x82880  sll         $a1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218b48) {
            ctx->pc = 0x218B70u;
            goto label_218b70;
        }
    }
    ctx->pc = 0x218B50u;
label_218b50:
    // 0x218b50: 0xb3100  sll         $a2, $t3, 4
    ctx->pc = 0x218b50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_218b54:
    // 0x218b54: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x218b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_218b58:
    // 0x218b58: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x218b58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_218b5c:
    // 0x218b5c: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x218b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_218b60:
    // 0x218b60: 0x24a50000  addiu       $a1, $a1, 0x0
    ctx->pc = 0x218b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
label_218b64:
    // 0x218b64: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x218b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_218b68:
    // 0x218b68: 0x10000005  b           . + 4 + (0x5 << 2)
label_218b6c:
    if (ctx->pc == 0x218B6Cu) {
        ctx->pc = 0x218B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B68u;
        // 0x218b6c: 0xaca40004  sw          $a0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218B70u;
        goto label_218b70;
    }
    ctx->pc = 0x218B68u;
    {
        const bool branch_taken_0x218b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B68u;
        // 0x218b6c: 0xaca40004  sw          $a0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218b68) {
            ctx->pc = 0x218B80u;
            goto label_218b80;
        }
    }
    ctx->pc = 0x218B70u;
label_218b70:
    // 0x218b70: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x218b70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_218b74:
    // 0x218b74: 0x2965000a  slti        $a1, $t3, 0xA
    ctx->pc = 0x218b74u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)10) ? 1 : 0);
label_218b78:
    // 0x218b78: 0x14a0fff1  bnez        $a1, . + 4 + (-0xF << 2)
label_218b7c:
    if (ctx->pc == 0x218B7Cu) {
        ctx->pc = 0x218B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B78u;
        // 0x218b7c: 0x254a0240  addiu       $t2, $t2, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218B80u;
        goto label_218b80;
    }
    ctx->pc = 0x218B78u;
    {
        const bool branch_taken_0x218b78 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x218B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B78u;
        // 0x218b7c: 0x254a0240  addiu       $t2, $t2, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218b78) {
            ctx->pc = 0x218B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218b40;
        }
    }
    ctx->pc = 0x218B80u;
label_218b80:
    // 0x218b80: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x218b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_218b84:
    // 0x218b84: 0x28850002  slti        $a1, $a0, 0x2
    ctx->pc = 0x218b84u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_218b88:
    // 0x218b88: 0x14a0ffdd  bnez        $a1, . + 4 + (-0x23 << 2)
label_218b8c:
    if (ctx->pc == 0x218B8Cu) {
        ctx->pc = 0x218B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B88u;
        // 0x218b8c: 0x24630090  addiu       $v1, $v1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218B90u;
        goto label_218b90;
    }
    ctx->pc = 0x218B88u;
    {
        const bool branch_taken_0x218b88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x218B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B88u;
        // 0x218b8c: 0x24630090  addiu       $v1, $v1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218b88) {
            ctx->pc = 0x218B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218b00;
        }
    }
    ctx->pc = 0x218B90u;
label_218b90:
    // 0x218b90: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x218b90u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218b94:
    // 0x218b94: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x218b94u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218b98:
    // 0x218b98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x218b98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218b9c:
    // 0x218b9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x218b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218ba0:
    // 0x218ba0: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x218ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_218ba4:
    // 0x218ba4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x218ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_218ba8:
    // 0x218ba8: 0x57b021  addu        $s6, $v0, $s7
    ctx->pc = 0x218ba8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_218bac:
    // 0x218bac: 0x0  nop
    ctx->pc = 0x218bacu;
    // NOP
label_218bb0:
    // 0x218bb0: 0x2c42821  addu        $a1, $s6, $a0
    ctx->pc = 0x218bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
label_218bb4:
    // 0x218bb4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x218bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_218bb8:
    // 0x218bb8: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x218bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_218bbc:
    // 0x218bbc: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x218bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_218bc0:
    // 0x218bc0: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x218bc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_218bc4:
    // 0x218bc4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x218bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_218bc8:
    // 0x218bc8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x218bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_218bcc:
    // 0x218bcc: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x218bccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_218bd0:
    // 0x218bd0: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x218bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
label_218bd4:
    // 0x218bd4: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x218bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_218bd8:
    // 0x218bd8: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x218bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
label_218bdc:
    // 0x218bdc: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_218be0:
    if (ctx->pc == 0x218BE0u) {
        ctx->pc = 0x218BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218BDCu;
        // 0x218be0: 0xaca3001c  sw          $v1, 0x1C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218BE4u;
        goto label_218be4;
    }
    ctx->pc = 0x218BDCu;
    {
        const bool branch_taken_0x218bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218BDCu;
        // 0x218be0: 0xaca3001c  sw          $v1, 0x1C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218bdc) {
            ctx->pc = 0x218BACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218bac;
        }
    }
    ctx->pc = 0x218BE4u;
label_218be4:
    // 0x218be4: 0x28c1000a  slti        $at, $a2, 0xA
    ctx->pc = 0x218be4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
label_218be8:
    // 0x218be8: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_218bec:
    if (ctx->pc == 0x218BECu) {
        ctx->pc = 0x218BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218BE8u;
        // 0x218bec: 0x62080  sll         $a0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218BF0u;
        goto label_218bf0;
    }
    ctx->pc = 0x218BE8u;
    {
        const bool branch_taken_0x218be8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x218BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218BE8u;
        // 0x218bec: 0x62080  sll         $a0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218be8) {
            ctx->pc = 0x218C14u;
            goto label_218c14;
        }
    }
    ctx->pc = 0x218BF0u;
label_218bf0:
    // 0x218bf0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x218bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_218bf4:
    // 0x218bf4: 0x0  nop
    ctx->pc = 0x218bf4u;
    // NOP
label_218bf8:
    // 0x218bf8: 0x2c41021  addu        $v0, $s6, $a0
    ctx->pc = 0x218bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
label_218bfc:
    // 0x218bfc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x218bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_218c00:
    // 0x218c00: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x218c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_218c04:
    // 0x218c04: 0x28c2000a  slti        $v0, $a2, 0xA
    ctx->pc = 0x218c04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
label_218c08:
    // 0x218c08: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x218c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_218c0c:
    // 0x218c0c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_218c10:
    if (ctx->pc == 0x218C10u) {
        ctx->pc = 0x218C14u;
        goto label_218c14;
    }
    ctx->pc = 0x218C0Cu;
    {
        const bool branch_taken_0x218c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x218c0c) {
            ctx->pc = 0x218BF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218bf4;
        }
    }
    ctx->pc = 0x218C14u;
label_218c14:
    // 0x218c14: 0x0  nop
    ctx->pc = 0x218c14u;
    // NOP
label_218c18:
    // 0x218c18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x218c18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218c1c:
    // 0x218c1c: 0x10000017  b           . + 4 + (0x17 << 2)
label_218c20:
    if (ctx->pc == 0x218C20u) {
        ctx->pc = 0x218C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C1Cu;
        // 0x218c20: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218C24u;
        goto label_218c24;
    }
    ctx->pc = 0x218C1Cu;
    {
        const bool branch_taken_0x218c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C1Cu;
        // 0x218c20: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218c1c) {
            ctx->pc = 0x218C7Cu;
            goto label_218c7c;
        }
    }
    ctx->pc = 0x218C24u;
label_218c24:
    // 0x218c24: 0x0  nop
    ctx->pc = 0x218c24u;
    // NOP
label_218c28:
    // 0x218c28: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x218c28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218c2c:
    // 0x218c2c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x218c2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218c30:
    // 0x218c30: 0x2d29821  addu        $s3, $s6, $s2
    ctx->pc = 0x218c30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_218c34:
    // 0x218c34: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x218c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_218c38:
    // 0x218c38: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x218c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_218c3c:
    // 0x218c3c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_218c40:
    if (ctx->pc == 0x218C40u) {
        ctx->pc = 0x218C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C3Cu;
        // 0x218c40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218C44u;
        goto label_218c44;
    }
    ctx->pc = 0x218C3Cu;
    {
        const bool branch_taken_0x218c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x218C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C3Cu;
        // 0x218c40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218c3c) {
            ctx->pc = 0x218C68u;
            goto label_218c68;
        }
    }
    ctx->pc = 0x218C44u;
label_218c44:
    // 0x218c44: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x218c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_218c48:
    // 0x218c48: 0xc08675c  jal         func_219D70
label_218c4c:
    if (ctx->pc == 0x218C4Cu) {
        ctx->pc = 0x218C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C48u;
        // 0x218c4c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218C50u;
        goto label_218c50;
    }
    ctx->pc = 0x218C48u;
    SET_GPR_U32(ctx, 31, 0x218C50u);
    ctx->pc = 0x218C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218C48u;
    // 0x218c4c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219D70u;
    { ctx->pc = 0x219d70; return; }
    ctx->pc = 0x218C50u;
label_218c50:
    // 0x218c50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_218c54:
    if (ctx->pc == 0x218C54u) {
        ctx->pc = 0x218C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C50u;
        // 0x218c54: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218C58u;
        goto label_218c58;
    }
    ctx->pc = 0x218C50u;
    {
        const bool branch_taken_0x218c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C50u;
        // 0x218c54: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218c50) {
            ctx->pc = 0x218C60u;
            goto label_218c60;
        }
    }
    ctx->pc = 0x218C58u;
label_218c58:
    // 0x218c58: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_218c5c:
    if (ctx->pc == 0x218C5Cu) {
        ctx->pc = 0x218C60u;
        goto label_218c60;
    }
    ctx->pc = 0x218C58u;
    {
        const bool branch_taken_0x218c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x218c58) {
            ctx->pc = 0x218C68u;
            goto label_218c68;
        }
    }
    ctx->pc = 0x218C60u;
label_218c60:
    // 0x218c60: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x218c60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
label_218c64:
    // 0x218c64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x218c64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_218c68:
    // 0x218c68: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x218c68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_218c6c:
    // 0x218c6c: 0x2a82000a  slti        $v0, $s4, 0xA
    ctx->pc = 0x218c6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)10) ? 1 : 0);
label_218c70:
    // 0x218c70: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_218c74:
    if (ctx->pc == 0x218C74u) {
        ctx->pc = 0x218C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C70u;
        // 0x218c74: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218C78u;
        goto label_218c78;
    }
    ctx->pc = 0x218C70u;
    {
        const bool branch_taken_0x218c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C70u;
        // 0x218c74: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218c70) {
            ctx->pc = 0x218C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218c30;
        }
    }
    ctx->pc = 0x218C78u;
label_218c78:
    // 0x218c78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x218c78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_218c7c:
    // 0x218c7c: 0x0  nop
    ctx->pc = 0x218c7cu;
    // NOP
label_218c80:
    // 0x218c80: 0x8f82926c  lw          $v0, -0x6D94($gp)
    ctx->pc = 0x218c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939244)));
label_218c84:
    // 0x218c84: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x218c84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_218c88:
    // 0x218c88: 0x1020ffe6  beqz        $at, . + 4 + (-0x1A << 2)
label_218c8c:
    if (ctx->pc == 0x218C8Cu) {
        ctx->pc = 0x218C90u;
        goto label_218c90;
    }
    ctx->pc = 0x218C88u;
    {
        const bool branch_taken_0x218c88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x218c88) {
            ctx->pc = 0x218C24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218c24;
        }
    }
    ctx->pc = 0x218C90u;
label_218c90:
    // 0x218c90: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x218c90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_218c94:
    // 0x218c94: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x218c94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
label_218c98:
    // 0x218c98: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
label_218c9c:
    if (ctx->pc == 0x218C9Cu) {
        ctx->pc = 0x218C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C98u;
        // 0x218c9c: 0x26f70028  addiu       $s7, $s7, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218CA0u;
        goto label_218ca0;
    }
    ctx->pc = 0x218C98u;
    {
        const bool branch_taken_0x218c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C98u;
        // 0x218c9c: 0x26f70028  addiu       $s7, $s7, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218c98) {
            ctx->pc = 0x218B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218b98;
        }
    }
    ctx->pc = 0x218CA0u;
label_218ca0:
    // 0x218ca0: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x218ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
label_218ca4:
    // 0x218ca4: 0xafa00140  sw          $zero, 0x140($sp)
    ctx->pc = 0x218ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
label_218ca8:
    // 0x218ca8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x218ca8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218cac:
    // 0x218cac: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x218cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
label_218cb0:
    // 0x218cb0: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x218cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
label_218cb4:
    // 0x218cb4: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x218cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
label_218cb8:
    // 0x218cb8: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x218cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
label_218cbc:
    // 0x218cbc: 0x0  nop
    ctx->pc = 0x218cbcu;
    // NOP
label_218cc0:
    // 0x218cc0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x218cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_218cc4:
    // 0x218cc4: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x218cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_218cc8:
    // 0x218cc8: 0x24050488  addiu       $a1, $zero, 0x488
    ctx->pc = 0x218cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1160));
label_218ccc:
    // 0x218ccc: 0x24638c00  addiu       $v1, $v1, -0x7400
    ctx->pc = 0x218cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937600));
label_218cd0:
    // 0x218cd0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x218cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_218cd4:
    // 0x218cd4: 0x24430000  addiu       $v1, $v0, 0x0
    ctx->pc = 0x218cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_218cd8:
    // 0x218cd8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x218cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_218cdc:
    // 0x218cdc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x218cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_218ce0:
    // 0x218ce0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x218ce0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_218ce4:
    // 0x218ce4: 0xc05e234  jal         func_1788D0
label_218ce8:
    if (ctx->pc == 0x218CE8u) {
        ctx->pc = 0x218CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218CE4u;
        // 0x218ce8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218CECu;
        goto label_218cec;
    }
    ctx->pc = 0x218CE4u;
    SET_GPR_U32(ctx, 31, 0x218CECu);
    ctx->pc = 0x218CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218CE4u;
    // 0x218ce8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x218CE4u, 0x218CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218CECu;
label_218cec:
    // 0x218cec: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x218cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_218cf0:
    // 0x218cf0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x218cf0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218cf4:
    // 0x218cf4: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x218cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_218cf8:
    // 0x218cf8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x218cf8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218cfc:
    // 0x218cfc: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x218cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_218d00:
    // 0x218d00: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x218d00u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218d04:
    // 0x218d04: 0x0  nop
    ctx->pc = 0x218d04u;
    // NOP
label_218d08:
    // 0x218d08: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x218d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_218d0c:
    // 0x218d0c: 0x27a30160  addiu       $v1, $sp, 0x160
    ctx->pc = 0x218d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_218d10:
    // 0x218d10: 0x24100070  addiu       $s0, $zero, 0x70
    ctx->pc = 0x218d10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_218d14:
    // 0x218d14: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x218d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_218d18:
    // 0x218d18: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x218d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_218d1c:
    // 0x218d1c: 0x24430000  addiu       $v1, $v0, 0x0
    ctx->pc = 0x218d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_218d20:
    // 0x218d20: 0x24020210  addiu       $v0, $zero, 0x210
    ctx->pc = 0x218d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_218d24:
    // 0x218d24: 0x55800b  movn        $s0, $v0, $s5
    ctx->pc = 0x218d24u;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_218d28:
    // 0x218d28: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x218d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_218d2c:
    // 0x218d2c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x218d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_218d30:
    // 0x218d30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x218d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_218d34:
    // 0x218d34: 0x29140  sll         $s2, $v0, 5
    ctx->pc = 0x218d34u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_218d38:
    // 0x218d38: 0xc070834  jal         func_1C20D0
label_218d3c:
    if (ctx->pc == 0x218D3Cu) {
        ctx->pc = 0x218D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D38u;
        // 0x218d3c: 0x26540060  addiu       $s4, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218D40u;
        goto label_218d40;
    }
    ctx->pc = 0x218D38u;
    SET_GPR_U32(ctx, 31, 0x218D40u);
    ctx->pc = 0x218D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218D38u;
    // 0x218d3c: 0x26540060  addiu       $s4, $s2, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x218D40u;
label_218d40:
    // 0x218d40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x218d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_218d44:
    // 0x218d44: 0x240300a8  addiu       $v1, $zero, 0xA8
    ctx->pc = 0x218d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_218d48:
    // 0x218d48: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x218d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_218d4c:
    // 0x218d4c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x218d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_218d50:
    // 0x218d50: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x218d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_218d54:
    // 0x218d54: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x218d54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_218d58:
    // 0x218d58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x218d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_218d5c:
    // 0x218d5c: 0xffaa0010  sd          $t2, 0x10($sp)
    ctx->pc = 0x218d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 10));
label_218d60:
    // 0x218d60: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x218d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_218d64:
    // 0x218d64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x218d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_218d68:
    // 0x218d68: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x218d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_218d6c:
    // 0x218d6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x218d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_218d70:
    // 0x218d70: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x218d70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_218d74:
    // 0x218d74: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x218d74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_218d78:
    // 0x218d78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x218d78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218d7c:
    // 0x218d7c: 0x240b0168  addiu       $t3, $zero, 0x168
    ctx->pc = 0x218d7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_218d80:
    // 0x218d80: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x218d80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_218d84:
    // 0x218d84: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x218d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
label_218d88:
    // 0x218d88: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x218d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
label_218d8c:
    // 0x218d8c: 0xc05ded8  jal         func_177B60
label_218d90:
    if (ctx->pc == 0x218D90u) {
        ctx->pc = 0x218D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D8Cu;
        // 0x218d90: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218D94u;
        goto label_218d94;
    }
    ctx->pc = 0x218D8Cu;
    SET_GPR_U32(ctx, 31, 0x218D94u);
    ctx->pc = 0x218D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218D8Cu;
    // 0x218d90: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B60u, 0x218D8Cu, 0x218D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218D94u;
label_218d94:
    // 0x218d94: 0xc070834  jal         func_1C20D0
label_218d98:
    if (ctx->pc == 0x218D98u) {
        ctx->pc = 0x218D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D94u;
        // 0x218d98: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218D9Cu;
        goto label_218d9c;
    }
    ctx->pc = 0x218D94u;
    SET_GPR_U32(ctx, 31, 0x218D9Cu);
    ctx->pc = 0x218D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218D94u;
    // 0x218d98: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x218D9Cu;
label_218d9c:
    // 0x218d9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x218d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_218da0:
    // 0x218da0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x218da0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_218da4:
    // 0x218da4: 0x240200a8  addiu       $v0, $zero, 0xA8
    ctx->pc = 0x218da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_218da8:
    // 0x218da8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x218da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_218dac:
    // 0x218dac: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x218dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_218db0:
    // 0x218db0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x218db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218db4:
    // 0x218db4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x218db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_218db8:
    // 0x218db8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x218db8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_218dbc:
    // 0x218dbc: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x218dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_218dc0:
    // 0x218dc0: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x218dc0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_218dc4:
    // 0x218dc4: 0xffaa0010  sd          $t2, 0x10($sp)
    ctx->pc = 0x218dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 10));
label_218dc8:
    // 0x218dc8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x218dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_218dcc:
    // 0x218dcc: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x218dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_218dd0:
    // 0x218dd0: 0x24090070  addiu       $t1, $zero, 0x70
    ctx->pc = 0x218dd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_218dd4:
    // 0x218dd4: 0x23e1021  addu        $v0, $s1, $fp
    ctx->pc = 0x218dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
label_218dd8:
    // 0x218dd8: 0xffa00020  sd          $zero, 0x20($sp)
    ctx->pc = 0x218dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
label_218ddc:
    // 0x218ddc: 0x24440830  addiu       $a0, $v0, 0x830
    ctx->pc = 0x218ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2096));
label_218de0:
    // 0x218de0: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x218de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
label_218de4:
    // 0x218de4: 0x24020210  addiu       $v0, $zero, 0x210
    ctx->pc = 0x218de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_218de8:
    // 0x218de8: 0x240b0168  addiu       $t3, $zero, 0x168
    ctx->pc = 0x218de8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_218dec:
    // 0x218dec: 0xc05dd88  jal         func_177620
label_218df0:
    if (ctx->pc == 0x218DF0u) {
        ctx->pc = 0x218DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218DECu;
        // 0x218df0: 0x55300b  movn        $a2, $v0, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218DF4u;
        goto label_218df4;
    }
    ctx->pc = 0x218DECu;
    SET_GPR_U32(ctx, 31, 0x218DF4u);
    ctx->pc = 0x218DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218DECu;
    // 0x218df0: 0x55300b  movn        $a2, $v0, $s5 (Delay Slot)
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177620u, 0x218DECu, 0x218DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218DF4u;
label_218df4:
    // 0x218df4: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x218df4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_218df8:
    // 0x218df8: 0x2402021c  addiu       $v0, $zero, 0x21C
    ctx->pc = 0x218df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
label_218dfc:
    // 0x218dfc: 0x55380b  movn        $a3, $v0, $s5
    ctx->pc = 0x218dfcu;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_218e00:
    // 0x218e00: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x218e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_218e04:
    // 0x218e04: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x218e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_218e08:
    // 0x218e08: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x218e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_218e0c:
    // 0x218e0c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x218e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_218e10:
    // 0x218e10: 0x24430000  addiu       $v1, $v0, 0x0
    ctx->pc = 0x218e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_218e14:
    // 0x218e14: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x218e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_218e18:
    // 0x218e18: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x218e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_218e1c:
    // 0x218e1c: 0x90640220  lbu         $a0, 0x220($v1)
    ctx->pc = 0x218e1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 544)));
label_218e20:
    // 0x218e20: 0x14820010  bne         $a0, $v0, . + 4 + (0x10 << 2)
label_218e24:
    if (ctx->pc == 0x218E24u) {
        ctx->pc = 0x218E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E20u;
        // 0x218e24: 0x2648004a  addiu       $t0, $s2, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 74));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218E28u;
        goto label_218e28;
    }
    ctx->pc = 0x218E20u;
    {
        const bool branch_taken_0x218e20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x218E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E20u;
        // 0x218e24: 0x2648004a  addiu       $t0, $s2, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218e20) {
            ctx->pc = 0x218E64u;
            goto label_218e64;
        }
    }
    ctx->pc = 0x218E28u;
label_218e28:
    // 0x218e28: 0x26030e70  addiu       $v1, $s0, 0xE70
    ctx->pc = 0x218e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3696));
label_218e2c:
    // 0x218e2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x218e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_218e30:
    // 0x218e30: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x218e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_218e34:
    // 0x218e34: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x218e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_218e38:
    // 0x218e38: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x218e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_218e3c:
    // 0x218e3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x218e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218e40:
    // 0x218e40: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x218e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_218e44:
    // 0x218e44: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x218e44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_218e48:
    // 0x218e48: 0x240801c0  addiu       $t0, $zero, 0x1C0
    ctx->pc = 0x218e48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_218e4c:
    // 0x218e4c: 0x3409fe00  ori         $t1, $zero, 0xFE00
    ctx->pc = 0x218e4cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_218e50:
    // 0x218e50: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x218e50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_218e54:
    // 0x218e54: 0xc054c60  jal         func_153180
label_218e58:
    if (ctx->pc == 0x218E58u) {
        ctx->pc = 0x218E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E54u;
        // 0x218e58: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218E5Cu;
        goto label_218e5c;
    }
    ctx->pc = 0x218E54u;
    SET_GPR_U32(ctx, 31, 0x218E5Cu);
    ctx->pc = 0x218E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218E54u;
    // 0x218e58: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153180u, 0x218E54u, 0x218E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218E5Cu;
label_218e5c:
    // 0x218e5c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_218e60:
    if (ctx->pc == 0x218E60u) {
        ctx->pc = 0x218E64u;
        goto label_218e64;
    }
    ctx->pc = 0x218E5Cu;
    {
        const bool branch_taken_0x218e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x218e5c) {
            ctx->pc = 0x218ED8u;
            goto label_218ed8;
        }
    }
    ctx->pc = 0x218E64u;
label_218e64:
    // 0x218e64: 0x0  nop
    ctx->pc = 0x218e64u;
    // NOP
label_218e68:
    // 0x218e68: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x218e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_218e6c:
    // 0x218e6c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x218e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_218e70:
    // 0x218e70: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x218e70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_218e74:
    // 0x218e74: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x218e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_218e78:
    // 0x218e78: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x218e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
label_218e7c:
    // 0x218e7c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x218e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_218e80:
    // 0x218e80: 0x26030e70  addiu       $v1, $s0, 0xE70
    ctx->pc = 0x218e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3696));
label_218e84:
    // 0x218e84: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x218e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_218e88:
    // 0x218e88: 0x3409fe00  ori         $t1, $zero, 0xFE00
    ctx->pc = 0x218e88u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_218e8c:
    // 0x218e8c: 0x240a0058  addiu       $t2, $zero, 0x58
    ctx->pc = 0x218e8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_218e90:
    // 0x218e90: 0x240b0016  addiu       $t3, $zero, 0x16
    ctx->pc = 0x218e90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_218e94:
    // 0x218e94: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x218e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_218e98:
    // 0x218e98: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x218e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_218e9c:
    // 0x218e9c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x218e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_218ea0:
    // 0x218ea0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x218ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_218ea4:
    // 0x218ea4: 0x24a53b80  addiu       $a1, $a1, 0x3B80
    ctx->pc = 0x218ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15232));
label_218ea8:
    // 0x218ea8: 0x8c4c0000  lw          $t4, 0x0($v0)
    ctx->pc = 0x218ea8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_218eac:
    // 0x218eac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x218eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218eb0:
    // 0x218eb0: 0x958d000a  lhu         $t5, 0xA($t4)
    ctx->pc = 0x218eb0u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 10)));
label_218eb4:
    // 0x218eb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x218eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_218eb8:
    // 0x218eb8: 0x55300b  movn        $a2, $v0, $s5
    ctx->pc = 0x218eb8u;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_218ebc:
    // 0x218ebc: 0xd6100  sll         $t4, $t5, 4
    ctx->pc = 0x218ebcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
label_218ec0:
    // 0x218ec0: 0x18d6023  subu        $t4, $t4, $t5
    ctx->pc = 0x218ec0u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
label_218ec4:
    // 0x218ec4: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x218ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_218ec8:
    // 0x218ec8: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x218ec8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_218ecc:
    // 0x218ecc: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x218eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_218ed0:
    // 0x218ed0: 0xc054c60  jal         func_153180
label_218ed4:
    if (ctx->pc == 0x218ED4u) {
        ctx->pc = 0x218ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218ED0u;
        // 0x218ed4: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218ED8u;
        goto label_218ed8;
    }
    ctx->pc = 0x218ED0u;
    SET_GPR_U32(ctx, 31, 0x218ED8u);
    ctx->pc = 0x218ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218ED0u;
    // 0x218ed4: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153180u, 0x218ED0u, 0x218ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218ED8u;
label_218ed8:
    // 0x218ed8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x218ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218edc:
    // 0x218edc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x218edcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218ee0:
    // 0x218ee0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x218ee0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218ee4:
    // 0x218ee4: 0x0  nop
    ctx->pc = 0x218ee4u;
    // NOP
label_218ee8:
    // 0x218ee8: 0xc070834  jal         func_1C20D0
label_218eec:
    if (ctx->pc == 0x218EECu) {
        ctx->pc = 0x218EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218EE8u;
        // 0x218eec: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218EF0u;
        goto label_218ef0;
    }
    ctx->pc = 0x218EE8u;
    SET_GPR_U32(ctx, 31, 0x218EF0u);
    ctx->pc = 0x218EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218EE8u;
    // 0x218eec: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x218EF0u;
label_218ef0:
    // 0x218ef0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x218ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_218ef4:
    // 0x218ef4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x218ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_218ef8:
    // 0x218ef8: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x218ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
label_218efc:
    // 0x218efc: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x218efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_218f00:
    // 0x218f00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x218f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_218f04:
    // 0x218f04: 0x2361821  addu        $v1, $s1, $s6
    ctx->pc = 0x218f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
label_218f08:
    // 0x218f08: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x218f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_218f0c:
    // 0x218f0c: 0x732821  addu        $a1, $v1, $s3
    ctx->pc = 0x218f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_218f10:
    // 0x218f10: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
label_218f14:
    if (ctx->pc == 0x218F14u) {
        ctx->pc = 0x218F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F10u;
        // 0x218f14: 0xffa40018  sd          $a0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218F18u;
        goto label_218f18;
    }
    ctx->pc = 0x218F10u;
    {
        const bool branch_taken_0x218f10 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x218F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F10u;
        // 0x218f14: 0xffa40018  sd          $a0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f10) {
            ctx->pc = 0x218F2Cu;
            goto label_218f2c;
        }
    }
    ctx->pc = 0x218F18u;
label_218f18:
    // 0x218f18: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x218f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_218f1c:
    // 0x218f1c: 0x24030068  addiu       $v1, $zero, 0x68
    ctx->pc = 0x218f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_218f20:
    // 0x218f20: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x218f20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_218f24:
    // 0x218f24: 0x10000002  b           . + 4 + (0x2 << 2)
label_218f28:
    if (ctx->pc == 0x218F28u) {
        ctx->pc = 0x218F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F24u;
        // 0x218f28: 0x643023  subu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218F2Cu;
        goto label_218f2c;
    }
    ctx->pc = 0x218F24u;
    {
        const bool branch_taken_0x218f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F24u;
        // 0x218f28: 0x643023  subu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f24) {
            ctx->pc = 0x218F30u;
            goto label_218f30;
        }
    }
    ctx->pc = 0x218F2Cu;
label_218f2c:
    // 0x218f2c: 0x26460218  addiu       $a2, $s2, 0x218
    ctx->pc = 0x218f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 536));
label_218f30:
    // 0x218f30: 0x24a41690  addiu       $a0, $a1, 0x1690
    ctx->pc = 0x218f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 5776));
label_218f34:
    // 0x218f34: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x218f34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_218f38:
    // 0x218f38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x218f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_218f3c:
    // 0x218f3c: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x218f3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_218f40:
    // 0x218f40: 0x24090160  addiu       $t1, $zero, 0x160
    ctx->pc = 0x218f40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_218f44:
    // 0x218f44: 0x240a00a8  addiu       $t2, $zero, 0xA8
    ctx->pc = 0x218f44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_218f48:
    // 0x218f48: 0xc05de30  jal         func_1778C0
label_218f4c:
    if (ctx->pc == 0x218F4Cu) {
        ctx->pc = 0x218F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F48u;
        // 0x218f4c: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218F50u;
        goto label_218f50;
    }
    ctx->pc = 0x218F48u;
    SET_GPR_U32(ctx, 31, 0x218F50u);
    ctx->pc = 0x218F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218F48u;
    // 0x218f4c: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x218F48u, 0x218F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218F50u;
label_218f50:
    // 0x218f50: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x218f50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_218f54:
    // 0x218f54: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x218f54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_218f58:
    // 0x218f58: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x218f58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
label_218f5c:
    // 0x218f5c: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
label_218f60:
    if (ctx->pc == 0x218F60u) {
        ctx->pc = 0x218F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F5Cu;
        // 0x218f60: 0x267300a0  addiu       $s3, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218F64u;
        goto label_218f64;
    }
    ctx->pc = 0x218F5Cu;
    {
        const bool branch_taken_0x218f5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x218F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F5Cu;
        // 0x218f60: 0x267300a0  addiu       $s3, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f5c) {
            ctx->pc = 0x218EE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218ee4;
        }
    }
    ctx->pc = 0x218F64u;
label_218f64:
    // 0x218f64: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x218f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_218f68:
    // 0x218f68: 0x27de00a0  addiu       $fp, $fp, 0xA0
    ctx->pc = 0x218f68u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 160));
label_218f6c:
    // 0x218f6c: 0x26f70240  addiu       $s7, $s7, 0x240
    ctx->pc = 0x218f6cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 576));
label_218f70:
    // 0x218f70: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x218f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_218f74:
    // 0x218f74: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x218f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_218f78:
    // 0x218f78: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x218f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_218f7c:
    // 0x218f7c: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x218f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
label_218f80:
    // 0x218f80: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x218f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
label_218f84:
    // 0x218f84: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x218f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_218f88:
    // 0x218f88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x218f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_218f8c:
    // 0x218f8c: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x218f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_218f90:
    // 0x218f90: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x218f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_218f94:
    // 0x218f94: 0x2863000a  slti        $v1, $v1, 0xA
    ctx->pc = 0x218f94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
label_218f98:
    // 0x218f98: 0x1460ff5a  bnez        $v1, . + 4 + (-0xA6 << 2)
label_218f9c:
    if (ctx->pc == 0x218F9Cu) {
        ctx->pc = 0x218F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F98u;
        // 0x218f9c: 0x26d60500  addiu       $s6, $s6, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218FA0u;
        goto label_218fa0;
    }
    ctx->pc = 0x218F98u;
    {
        const bool branch_taken_0x218f98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x218F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F98u;
        // 0x218f9c: 0x26d60500  addiu       $s6, $s6, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f98) {
            ctx->pc = 0x218D04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218d04;
        }
    }
    ctx->pc = 0x218FA0u;
label_218fa0:
    // 0x218fa0: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x218fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_218fa4:
    // 0x218fa4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x218fa4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_218fa8:
    // 0x218fa8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x218fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_218fac:
    // 0x218fac: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x218facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
label_218fb0:
    // 0x218fb0: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x218fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_218fb4:
    // 0x218fb4: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x218fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_218fb8:
    // 0x218fb8: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x218fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
label_218fbc:
    // 0x218fbc: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x218fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_218fc0:
    // 0x218fc0: 0x24631b00  addiu       $v1, $v1, 0x1B00
    ctx->pc = 0x218fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6912));
label_218fc4:
    // 0x218fc4: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x218fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
label_218fc8:
    // 0x218fc8: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x218fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_218fcc:
    // 0x218fcc: 0x246347b8  addiu       $v1, $v1, 0x47B8
    ctx->pc = 0x218fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18360));
label_218fd0:
    // 0x218fd0: 0xafa30130  sw          $v1, 0x130($sp)
    ctx->pc = 0x218fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
label_218fd4:
    // 0x218fd4: 0x2aa30002  slti        $v1, $s5, 0x2
    ctx->pc = 0x218fd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
label_218fd8:
    // 0x218fd8: 0x1460ff38  bnez        $v1, . + 4 + (-0xC8 << 2)
label_218fdc:
    if (ctx->pc == 0x218FDCu) {
        ctx->pc = 0x218FE0u;
        goto label_218fe0;
    }
    ctx->pc = 0x218FD8u;
    {
        const bool branch_taken_0x218fd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x218fd8) {
            ctx->pc = 0x218CBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218cbc;
        }
    }
    ctx->pc = 0x218FE0u;
label_218fe0:
    // 0x218fe0: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x218fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_218fe4:
    // 0x218fe4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x218fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_218fe8:
    // 0x218fe8: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x218fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
label_218fec:
    // 0x218fec: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x218fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_218ff0:
    // 0x218ff0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x218ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_218ff4:
    // 0x218ff4: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x218ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
label_218ff8:
    // 0x218ff8: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x218ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_218ffc:
    // 0x218ffc: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x218ffcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_219000:
    // 0x219000: 0x1460ff2a  bnez        $v1, . + 4 + (-0xD6 << 2)
label_219004:
    if (ctx->pc == 0x219004u) {
        ctx->pc = 0x219004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219000u;
        // 0x219004: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219008u;
        goto label_219008;
    }
    ctx->pc = 0x219000u;
    {
        const bool branch_taken_0x219000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x219004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219000u;
        // 0x219004: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219000) {
            ctx->pc = 0x218CACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218cac;
        }
    }
    ctx->pc = 0x219008u;
label_219008:
    // 0x219008: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x219008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_21900c:
    // 0x21900c: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x21900cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_219010:
    // 0x219010: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x219010u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_219014:
    // 0x219014: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x219014u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_219018:
    // 0x219018: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x219018u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_21901c:
    // 0x21901c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x21901cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_219020:
    // 0x219020: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x219020u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_219024:
    // 0x219024: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x219024u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_219028:
    // 0x219028: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x219028u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_21902c:
    // 0x21902c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x21902cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_219030:
    // 0x219030: 0x3e00008  jr          $ra
label_219034:
    if (ctx->pc == 0x219034u) {
        ctx->pc = 0x219034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219030u;
        // 0x219034: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219038u;
        goto label_219038;
    }
    ctx->pc = 0x219030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219030u;
        // 0x219034: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219038u;
label_219038:
    // 0x219038: 0x0  nop
    ctx->pc = 0x219038u;
    // NOP
label_21903c:
    // 0x21903c: 0x0  nop
    ctx->pc = 0x21903cu;
    // NOP
label_219040:
    // 0x219040: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x219040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_219044:
    // 0x219044: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x219044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_219048:
    // 0x219048: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x219048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_21904c:
    // 0x21904c: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x21904cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_219050:
    // 0x219050: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x219050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_219054:
    // 0x219054: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x219054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_219058:
    // 0x219058: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x219058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_21905c:
    // 0x21905c: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x21905cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_219060:
    // 0x219060: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x219060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_219064:
    // 0x219064: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x219064u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219068:
    // 0x219068: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x219068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_21906c:
    // 0x21906c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x21906cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219070:
    // 0x219070: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x219070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_219074:
    // 0x219074: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x219074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_219078:
    // 0x219078: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x219078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_21907c:
    // 0x21907c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21907cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_219080:
    // 0x219080: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x219080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_219084:
    // 0x219084: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x219084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_219088:
    // 0x219088: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x219088u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_21908c:
    // 0x21908c: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x21908cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_219090:
    // 0x219090: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x219090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_219094:
    // 0x219094: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x219094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_219098:
    // 0x219098: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x219098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_21909c:
    // 0x21909c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x21909cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    ctx->pc = 0x2190a0u;
    return;
}

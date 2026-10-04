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


void FUN_0017faa0_part478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x268930u: goto label_268930;
        case 0x268934u: goto label_268934;
        case 0x268938u: goto label_268938;
        case 0x26893cu: goto label_26893c;
        case 0x268940u: goto label_268940;
        case 0x268944u: goto label_268944;
        case 0x268948u: goto label_268948;
        case 0x26894cu: goto label_26894c;
        case 0x268950u: goto label_268950;
        case 0x268954u: goto label_268954;
        case 0x268958u: goto label_268958;
        case 0x26895cu: goto label_26895c;
        case 0x268960u: goto label_268960;
        case 0x268964u: goto label_268964;
        case 0x268968u: goto label_268968;
        case 0x26896cu: goto label_26896c;
        case 0x268970u: goto label_268970;
        case 0x268974u: goto label_268974;
        case 0x268978u: goto label_268978;
        case 0x26897cu: goto label_26897c;
        case 0x268980u: goto label_268980;
        case 0x268984u: goto label_268984;
        case 0x268988u: goto label_268988;
        case 0x26898cu: goto label_26898c;
        case 0x268990u: goto label_268990;
        case 0x268994u: goto label_268994;
        case 0x268998u: goto label_268998;
        case 0x26899cu: goto label_26899c;
        case 0x2689a0u: goto label_2689a0;
        case 0x2689a4u: goto label_2689a4;
        case 0x2689a8u: goto label_2689a8;
        case 0x2689acu: goto label_2689ac;
        case 0x2689b0u: goto label_2689b0;
        case 0x2689b4u: goto label_2689b4;
        case 0x2689b8u: goto label_2689b8;
        case 0x2689bcu: goto label_2689bc;
        case 0x2689c0u: goto label_2689c0;
        case 0x2689c4u: goto label_2689c4;
        case 0x2689c8u: goto label_2689c8;
        case 0x2689ccu: goto label_2689cc;
        case 0x2689d0u: goto label_2689d0;
        case 0x2689d4u: goto label_2689d4;
        case 0x2689d8u: goto label_2689d8;
        case 0x2689dcu: goto label_2689dc;
        case 0x2689e0u: goto label_2689e0;
        case 0x2689e4u: goto label_2689e4;
        case 0x2689e8u: goto label_2689e8;
        case 0x2689ecu: goto label_2689ec;
        case 0x2689f0u: goto label_2689f0;
        case 0x2689f4u: goto label_2689f4;
        case 0x2689f8u: goto label_2689f8;
        case 0x2689fcu: goto label_2689fc;
        case 0x268a00u: goto label_268a00;
        case 0x268a04u: goto label_268a04;
        case 0x268a08u: goto label_268a08;
        case 0x268a0cu: goto label_268a0c;
        case 0x268a10u: goto label_268a10;
        case 0x268a14u: goto label_268a14;
        case 0x268a18u: goto label_268a18;
        case 0x268a1cu: goto label_268a1c;
        case 0x268a20u: goto label_268a20;
        case 0x268a24u: goto label_268a24;
        case 0x268a28u: goto label_268a28;
        case 0x268a2cu: goto label_268a2c;
        case 0x268a30u: goto label_268a30;
        case 0x268a34u: goto label_268a34;
        case 0x268a38u: goto label_268a38;
        case 0x268a3cu: goto label_268a3c;
        case 0x268a40u: goto label_268a40;
        case 0x268a44u: goto label_268a44;
        case 0x268a48u: goto label_268a48;
        case 0x268a4cu: goto label_268a4c;
        case 0x268a50u: goto label_268a50;
        case 0x268a54u: goto label_268a54;
        case 0x268a58u: goto label_268a58;
        case 0x268a5cu: goto label_268a5c;
        case 0x268a60u: goto label_268a60;
        case 0x268a64u: goto label_268a64;
        case 0x268a68u: goto label_268a68;
        case 0x268a6cu: goto label_268a6c;
        case 0x268a70u: goto label_268a70;
        case 0x268a74u: goto label_268a74;
        case 0x268a78u: goto label_268a78;
        case 0x268a7cu: goto label_268a7c;
        case 0x268a80u: goto label_268a80;
        case 0x268a84u: goto label_268a84;
        case 0x268a88u: goto label_268a88;
        case 0x268a8cu: goto label_268a8c;
        case 0x268a90u: goto label_268a90;
        case 0x268a94u: goto label_268a94;
        case 0x268a98u: goto label_268a98;
        case 0x268a9cu: goto label_268a9c;
        case 0x268aa0u: goto label_268aa0;
        case 0x268aa4u: goto label_268aa4;
        case 0x268aa8u: goto label_268aa8;
        case 0x268aacu: goto label_268aac;
        case 0x268ab0u: goto label_268ab0;
        case 0x268ab4u: goto label_268ab4;
        case 0x268ab8u: goto label_268ab8;
        case 0x268abcu: goto label_268abc;
        case 0x268ac0u: goto label_268ac0;
        case 0x268ac4u: goto label_268ac4;
        case 0x268ac8u: goto label_268ac8;
        case 0x268accu: goto label_268acc;
        case 0x268ad0u: goto label_268ad0;
        case 0x268ad4u: goto label_268ad4;
        case 0x268ad8u: goto label_268ad8;
        case 0x268adcu: goto label_268adc;
        case 0x268ae0u: goto label_268ae0;
        case 0x268ae4u: goto label_268ae4;
        case 0x268ae8u: goto label_268ae8;
        case 0x268aecu: goto label_268aec;
        case 0x268af0u: goto label_268af0;
        case 0x268af4u: goto label_268af4;
        case 0x268af8u: goto label_268af8;
        case 0x268afcu: goto label_268afc;
        case 0x268b00u: goto label_268b00;
        case 0x268b04u: goto label_268b04;
        case 0x268b08u: goto label_268b08;
        case 0x268b0cu: goto label_268b0c;
        case 0x268b10u: goto label_268b10;
        case 0x268b14u: goto label_268b14;
        case 0x268b18u: goto label_268b18;
        case 0x268b1cu: goto label_268b1c;
        case 0x268b20u: goto label_268b20;
        case 0x268b24u: goto label_268b24;
        case 0x268b28u: goto label_268b28;
        case 0x268b2cu: goto label_268b2c;
        case 0x268b30u: goto label_268b30;
        case 0x268b34u: goto label_268b34;
        case 0x268b38u: goto label_268b38;
        case 0x268b3cu: goto label_268b3c;
        case 0x268b40u: goto label_268b40;
        case 0x268b44u: goto label_268b44;
        case 0x268b48u: goto label_268b48;
        case 0x268b4cu: goto label_268b4c;
        case 0x268b50u: goto label_268b50;
        case 0x268b54u: goto label_268b54;
        case 0x268b58u: goto label_268b58;
        case 0x268b5cu: goto label_268b5c;
        case 0x268b60u: goto label_268b60;
        case 0x268b64u: goto label_268b64;
        case 0x268b68u: goto label_268b68;
        case 0x268b6cu: goto label_268b6c;
        case 0x268b70u: goto label_268b70;
        case 0x268b74u: goto label_268b74;
        case 0x268b78u: goto label_268b78;
        case 0x268b7cu: goto label_268b7c;
        case 0x268b80u: goto label_268b80;
        case 0x268b84u: goto label_268b84;
        case 0x268b88u: goto label_268b88;
        case 0x268b8cu: goto label_268b8c;
        case 0x268b90u: goto label_268b90;
        case 0x268b94u: goto label_268b94;
        case 0x268b98u: goto label_268b98;
        case 0x268b9cu: goto label_268b9c;
        case 0x268ba0u: goto label_268ba0;
        case 0x268ba4u: goto label_268ba4;
        case 0x268ba8u: goto label_268ba8;
        case 0x268bacu: goto label_268bac;
        case 0x268bb0u: goto label_268bb0;
        case 0x268bb4u: goto label_268bb4;
        case 0x268bb8u: goto label_268bb8;
        case 0x268bbcu: goto label_268bbc;
        case 0x268bc0u: goto label_268bc0;
        case 0x268bc4u: goto label_268bc4;
        case 0x268bc8u: goto label_268bc8;
        case 0x268bccu: goto label_268bcc;
        case 0x268bd0u: goto label_268bd0;
        case 0x268bd4u: goto label_268bd4;
        case 0x268bd8u: goto label_268bd8;
        case 0x268bdcu: goto label_268bdc;
        case 0x268be0u: goto label_268be0;
        case 0x268be4u: goto label_268be4;
        case 0x268be8u: goto label_268be8;
        case 0x268becu: goto label_268bec;
        case 0x268bf0u: goto label_268bf0;
        case 0x268bf4u: goto label_268bf4;
        case 0x268bf8u: goto label_268bf8;
        case 0x268bfcu: goto label_268bfc;
        case 0x268c00u: goto label_268c00;
        case 0x268c04u: goto label_268c04;
        case 0x268c08u: goto label_268c08;
        case 0x268c0cu: goto label_268c0c;
        case 0x268c10u: goto label_268c10;
        case 0x268c14u: goto label_268c14;
        case 0x268c18u: goto label_268c18;
        case 0x268c1cu: goto label_268c1c;
        case 0x268c20u: goto label_268c20;
        case 0x268c24u: goto label_268c24;
        case 0x268c28u: goto label_268c28;
        case 0x268c2cu: goto label_268c2c;
        case 0x268c30u: goto label_268c30;
        case 0x268c34u: goto label_268c34;
        case 0x268c38u: goto label_268c38;
        case 0x268c3cu: goto label_268c3c;
        case 0x268c40u: goto label_268c40;
        case 0x268c44u: goto label_268c44;
        case 0x268c48u: goto label_268c48;
        case 0x268c4cu: goto label_268c4c;
        case 0x268c50u: goto label_268c50;
        case 0x268c54u: goto label_268c54;
        case 0x268c58u: goto label_268c58;
        case 0x268c5cu: goto label_268c5c;
        case 0x268c60u: goto label_268c60;
        case 0x268c64u: goto label_268c64;
        case 0x268c68u: goto label_268c68;
        case 0x268c6cu: goto label_268c6c;
        case 0x268c70u: goto label_268c70;
        case 0x268c74u: goto label_268c74;
        case 0x268c78u: goto label_268c78;
        case 0x268c7cu: goto label_268c7c;
        case 0x268c80u: goto label_268c80;
        case 0x268c84u: goto label_268c84;
        case 0x268c88u: goto label_268c88;
        case 0x268c8cu: goto label_268c8c;
        case 0x268c90u: goto label_268c90;
        case 0x268c94u: goto label_268c94;
        case 0x268c98u: goto label_268c98;
        case 0x268c9cu: goto label_268c9c;
        case 0x268ca0u: goto label_268ca0;
        case 0x268ca4u: goto label_268ca4;
        case 0x268ca8u: goto label_268ca8;
        case 0x268cacu: goto label_268cac;
        case 0x268cb0u: goto label_268cb0;
        case 0x268cb4u: goto label_268cb4;
        case 0x268cb8u: goto label_268cb8;
        case 0x268cbcu: goto label_268cbc;
        case 0x268cc0u: goto label_268cc0;
        case 0x268cc4u: goto label_268cc4;
        case 0x268cc8u: goto label_268cc8;
        case 0x268cccu: goto label_268ccc;
        case 0x268cd0u: goto label_268cd0;
        case 0x268cd4u: goto label_268cd4;
        case 0x268cd8u: goto label_268cd8;
        case 0x268cdcu: goto label_268cdc;
        case 0x268ce0u: goto label_268ce0;
        case 0x268ce4u: goto label_268ce4;
        case 0x268ce8u: goto label_268ce8;
        case 0x268cecu: goto label_268cec;
        case 0x268cf0u: goto label_268cf0;
        case 0x268cf4u: goto label_268cf4;
        case 0x268cf8u: goto label_268cf8;
        case 0x268cfcu: goto label_268cfc;
        case 0x268d00u: goto label_268d00;
        case 0x268d04u: goto label_268d04;
        case 0x268d08u: goto label_268d08;
        case 0x268d0cu: goto label_268d0c;
        case 0x268d10u: goto label_268d10;
        case 0x268d14u: goto label_268d14;
        case 0x268d18u: goto label_268d18;
        case 0x268d1cu: goto label_268d1c;
        case 0x268d20u: goto label_268d20;
        case 0x268d24u: goto label_268d24;
        case 0x268d28u: goto label_268d28;
        case 0x268d2cu: goto label_268d2c;
        case 0x268d30u: goto label_268d30;
        case 0x268d34u: goto label_268d34;
        case 0x268d38u: goto label_268d38;
        case 0x268d3cu: goto label_268d3c;
        case 0x268d40u: goto label_268d40;
        case 0x268d44u: goto label_268d44;
        case 0x268d48u: goto label_268d48;
        case 0x268d4cu: goto label_268d4c;
        case 0x268d50u: goto label_268d50;
        case 0x268d54u: goto label_268d54;
        case 0x268d58u: goto label_268d58;
        case 0x268d5cu: goto label_268d5c;
        case 0x268d60u: goto label_268d60;
        case 0x268d64u: goto label_268d64;
        case 0x268d68u: goto label_268d68;
        case 0x268d6cu: goto label_268d6c;
        case 0x268d70u: goto label_268d70;
        case 0x268d74u: goto label_268d74;
        case 0x268d78u: goto label_268d78;
        case 0x268d7cu: goto label_268d7c;
        case 0x268d80u: goto label_268d80;
        case 0x268d84u: goto label_268d84;
        case 0x268d88u: goto label_268d88;
        case 0x268d8cu: goto label_268d8c;
        case 0x268d90u: goto label_268d90;
        case 0x268d94u: goto label_268d94;
        case 0x268d98u: goto label_268d98;
        case 0x268d9cu: goto label_268d9c;
        case 0x268da0u: goto label_268da0;
        case 0x268da4u: goto label_268da4;
        case 0x268da8u: goto label_268da8;
        case 0x268dacu: goto label_268dac;
        case 0x268db0u: goto label_268db0;
        case 0x268db4u: goto label_268db4;
        case 0x268db8u: goto label_268db8;
        case 0x268dbcu: goto label_268dbc;
        case 0x268dc0u: goto label_268dc0;
        case 0x268dc4u: goto label_268dc4;
        case 0x268dc8u: goto label_268dc8;
        case 0x268dccu: goto label_268dcc;
        case 0x268dd0u: goto label_268dd0;
        case 0x268dd4u: goto label_268dd4;
        case 0x268dd8u: goto label_268dd8;
        case 0x268ddcu: goto label_268ddc;
        case 0x268de0u: goto label_268de0;
        case 0x268de4u: goto label_268de4;
        case 0x268de8u: goto label_268de8;
        case 0x268decu: goto label_268dec;
        case 0x268df0u: goto label_268df0;
        case 0x268df4u: goto label_268df4;
        case 0x268df8u: goto label_268df8;
        case 0x268dfcu: goto label_268dfc;
        case 0x268e00u: goto label_268e00;
        case 0x268e04u: goto label_268e04;
        case 0x268e08u: goto label_268e08;
        case 0x268e0cu: goto label_268e0c;
        case 0x268e10u: goto label_268e10;
        case 0x268e14u: goto label_268e14;
        case 0x268e18u: goto label_268e18;
        case 0x268e1cu: goto label_268e1c;
        case 0x268e20u: goto label_268e20;
        case 0x268e24u: goto label_268e24;
        case 0x268e28u: goto label_268e28;
        case 0x268e2cu: goto label_268e2c;
        case 0x268e30u: goto label_268e30;
        case 0x268e34u: goto label_268e34;
        case 0x268e38u: goto label_268e38;
        case 0x268e3cu: goto label_268e3c;
        case 0x268e40u: goto label_268e40;
        case 0x268e44u: goto label_268e44;
        case 0x268e48u: goto label_268e48;
        case 0x268e4cu: goto label_268e4c;
        case 0x268e50u: goto label_268e50;
        case 0x268e54u: goto label_268e54;
        case 0x268e58u: goto label_268e58;
        case 0x268e5cu: goto label_268e5c;
        case 0x268e60u: goto label_268e60;
        case 0x268e64u: goto label_268e64;
        case 0x268e68u: goto label_268e68;
        case 0x268e6cu: goto label_268e6c;
        case 0x268e70u: goto label_268e70;
        case 0x268e74u: goto label_268e74;
        case 0x268e78u: goto label_268e78;
        case 0x268e7cu: goto label_268e7c;
        case 0x268e80u: goto label_268e80;
        case 0x268e84u: goto label_268e84;
        case 0x268e88u: goto label_268e88;
        case 0x268e8cu: goto label_268e8c;
        case 0x268e90u: goto label_268e90;
        case 0x268e94u: goto label_268e94;
        case 0x268e98u: goto label_268e98;
        case 0x268e9cu: goto label_268e9c;
        case 0x268ea0u: goto label_268ea0;
        case 0x268ea4u: goto label_268ea4;
        case 0x268ea8u: goto label_268ea8;
        case 0x268eacu: goto label_268eac;
        case 0x268eb0u: goto label_268eb0;
        case 0x268eb4u: goto label_268eb4;
        case 0x268eb8u: goto label_268eb8;
        case 0x268ebcu: goto label_268ebc;
        case 0x268ec0u: goto label_268ec0;
        case 0x268ec4u: goto label_268ec4;
        case 0x268ec8u: goto label_268ec8;
        case 0x268eccu: goto label_268ecc;
        case 0x268ed0u: goto label_268ed0;
        case 0x268ed4u: goto label_268ed4;
        case 0x268ed8u: goto label_268ed8;
        case 0x268edcu: goto label_268edc;
        case 0x268ee0u: goto label_268ee0;
        case 0x268ee4u: goto label_268ee4;
        case 0x268ee8u: goto label_268ee8;
        case 0x268eecu: goto label_268eec;
        case 0x268ef0u: goto label_268ef0;
        case 0x268ef4u: goto label_268ef4;
        case 0x268ef8u: goto label_268ef8;
        case 0x268efcu: goto label_268efc;
        case 0x268f00u: goto label_268f00;
        case 0x268f04u: goto label_268f04;
        case 0x268f08u: goto label_268f08;
        case 0x268f0cu: goto label_268f0c;
        case 0x268f10u: goto label_268f10;
        case 0x268f14u: goto label_268f14;
        case 0x268f18u: goto label_268f18;
        case 0x268f1cu: goto label_268f1c;
        case 0x268f20u: goto label_268f20;
        case 0x268f24u: goto label_268f24;
        case 0x268f28u: goto label_268f28;
        case 0x268f2cu: goto label_268f2c;
        case 0x268f30u: goto label_268f30;
        case 0x268f34u: goto label_268f34;
        case 0x268f38u: goto label_268f38;
        case 0x268f3cu: goto label_268f3c;
        case 0x268f40u: goto label_268f40;
        case 0x268f44u: goto label_268f44;
        case 0x268f48u: goto label_268f48;
        case 0x268f4cu: goto label_268f4c;
        case 0x268f50u: goto label_268f50;
        case 0x268f54u: goto label_268f54;
        case 0x268f58u: goto label_268f58;
        case 0x268f5cu: goto label_268f5c;
        case 0x268f60u: goto label_268f60;
        case 0x268f64u: goto label_268f64;
        case 0x268f68u: goto label_268f68;
        case 0x268f6cu: goto label_268f6c;
        case 0x268f70u: goto label_268f70;
        case 0x268f74u: goto label_268f74;
        case 0x268f78u: goto label_268f78;
        case 0x268f7cu: goto label_268f7c;
        case 0x268f80u: goto label_268f80;
        case 0x268f84u: goto label_268f84;
        case 0x268f88u: goto label_268f88;
        case 0x268f8cu: goto label_268f8c;
        case 0x268f90u: goto label_268f90;
        case 0x268f94u: goto label_268f94;
        case 0x268f98u: goto label_268f98;
        case 0x268f9cu: goto label_268f9c;
        case 0x268fa0u: goto label_268fa0;
        case 0x268fa4u: goto label_268fa4;
        case 0x268fa8u: goto label_268fa8;
        case 0x268facu: goto label_268fac;
        case 0x268fb0u: goto label_268fb0;
        case 0x268fb4u: goto label_268fb4;
        case 0x268fb8u: goto label_268fb8;
        case 0x268fbcu: goto label_268fbc;
        case 0x268fc0u: goto label_268fc0;
        case 0x268fc4u: goto label_268fc4;
        case 0x268fc8u: goto label_268fc8;
        case 0x268fccu: goto label_268fcc;
        case 0x268fd0u: goto label_268fd0;
        case 0x268fd4u: goto label_268fd4;
        case 0x268fd8u: goto label_268fd8;
        case 0x268fdcu: goto label_268fdc;
        case 0x268fe0u: goto label_268fe0;
        case 0x268fe4u: goto label_268fe4;
        case 0x268fe8u: goto label_268fe8;
        case 0x268fecu: goto label_268fec;
        case 0x268ff0u: goto label_268ff0;
        case 0x268ff4u: goto label_268ff4;
        case 0x268ff8u: goto label_268ff8;
        case 0x268ffcu: goto label_268ffc;
        case 0x269000u: goto label_269000;
        case 0x269004u: goto label_269004;
        case 0x269008u: goto label_269008;
        case 0x26900cu: goto label_26900c;
        case 0x269010u: goto label_269010;
        case 0x269014u: goto label_269014;
        case 0x269018u: goto label_269018;
        case 0x26901cu: goto label_26901c;
        case 0x269020u: goto label_269020;
        case 0x269024u: goto label_269024;
        case 0x269028u: goto label_269028;
        case 0x26902cu: goto label_26902c;
        case 0x269030u: goto label_269030;
        case 0x269034u: goto label_269034;
        case 0x269038u: goto label_269038;
        case 0x26903cu: goto label_26903c;
        case 0x269040u: goto label_269040;
        case 0x269044u: goto label_269044;
        case 0x269048u: goto label_269048;
        case 0x26904cu: goto label_26904c;
        case 0x269050u: goto label_269050;
        case 0x269054u: goto label_269054;
        case 0x269058u: goto label_269058;
        case 0x26905cu: goto label_26905c;
        case 0x269060u: goto label_269060;
        case 0x269064u: goto label_269064;
        case 0x269068u: goto label_269068;
        case 0x26906cu: goto label_26906c;
        case 0x269070u: goto label_269070;
        case 0x269074u: goto label_269074;
        case 0x269078u: goto label_269078;
        case 0x26907cu: goto label_26907c;
        case 0x269080u: goto label_269080;
        case 0x269084u: goto label_269084;
        case 0x269088u: goto label_269088;
        case 0x26908cu: goto label_26908c;
        case 0x269090u: goto label_269090;
        case 0x269094u: goto label_269094;
        case 0x269098u: goto label_269098;
        case 0x26909cu: goto label_26909c;
        case 0x2690a0u: goto label_2690a0;
        case 0x2690a4u: goto label_2690a4;
        case 0x2690a8u: goto label_2690a8;
        case 0x2690acu: goto label_2690ac;
        case 0x2690b0u: goto label_2690b0;
        case 0x2690b4u: goto label_2690b4;
        case 0x2690b8u: goto label_2690b8;
        case 0x2690bcu: goto label_2690bc;
        case 0x2690c0u: goto label_2690c0;
        case 0x2690c4u: goto label_2690c4;
        case 0x2690c8u: goto label_2690c8;
        case 0x2690ccu: goto label_2690cc;
        case 0x2690d0u: goto label_2690d0;
        case 0x2690d4u: goto label_2690d4;
        case 0x2690d8u: goto label_2690d8;
        case 0x2690dcu: goto label_2690dc;
        case 0x2690e0u: goto label_2690e0;
        case 0x2690e4u: goto label_2690e4;
        case 0x2690e8u: goto label_2690e8;
        case 0x2690ecu: goto label_2690ec;
        case 0x2690f0u: goto label_2690f0;
        case 0x2690f4u: goto label_2690f4;
        case 0x2690f8u: goto label_2690f8;
        case 0x2690fcu: goto label_2690fc;
        default: return;
    }

label_268930:
    // 0x268930: 0x12b66  .word       0x00012B66                   # xor         $a1, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268930u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_268934:
    // 0x268934: 0xb470  tge         $zero, $zero, 721
    ctx->pc = 0x268934u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268938:
    // 0x268938: 0x0  nop
    ctx->pc = 0x268938u;
    // NOP
label_26893c:
    // 0x26893c: 0x0  nop
    ctx->pc = 0x26893cu;
    // NOP
label_268940:
    // 0x268940: 0x12b7d  .word       0x00012B7D                   # INVALID     $zero, $at, 0x2B7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268940u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x268940 raw=0x00012B7D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268944:
    // 0x268944: 0x5500  sll         $t2, $zero, 20
    ctx->pc = 0x268944u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_268948:
    // 0x268948: 0x0  nop
    ctx->pc = 0x268948u;
    // NOP
label_26894c:
    // 0x26894c: 0x0  nop
    ctx->pc = 0x26894cu;
    // NOP
label_268950:
    // 0x268950: 0x12b88  .word       0x00012B88                   # jr          $zero # 00012B80 <InstrIdType: CPU_SPECIAL>
label_268954:
    if (ctx->pc == 0x268954u) {
        ctx->pc = 0x268954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268950u;
        // 0x268954: 0x78c0  sll         $t7, $zero, 3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268958u;
        goto label_268958;
    }
    ctx->pc = 0x268950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x268954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268950u;
        // 0x268954: 0x78c0  sll         $t7, $zero, 3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268950u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x268958u;
label_268958:
    // 0x268958: 0x0  nop
    ctx->pc = 0x268958u;
    // NOP
label_26895c:
    // 0x26895c: 0x0  nop
    ctx->pc = 0x26895cu;
    // NOP
label_268960:
    // 0x268960: 0x12b98  .word       0x00012B98                   # mult        $a1, $zero, $at # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x268960u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_268964:
    // 0x268964: 0x5390  .word       0x00005390                   # mfhi        $t2 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268964u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_268968:
    // 0x268968: 0x0  nop
    ctx->pc = 0x268968u;
    // NOP
label_26896c:
    // 0x26896c: 0x0  nop
    ctx->pc = 0x26896cu;
    // NOP
label_268970:
    // 0x268970: 0x12ba3  .word       0x00012BA3                   # negu        $a1, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268970u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_268974:
    // 0x268974: 0x7420  .word       0x00007420                   # add         $t6, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268974u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_268978:
    // 0x268978: 0x0  nop
    ctx->pc = 0x268978u;
    // NOP
label_26897c:
    // 0x26897c: 0x0  nop
    ctx->pc = 0x26897cu;
    // NOP
label_268980:
    // 0x268980: 0x12bb2  tlt         $zero, $at, 174
    ctx->pc = 0x268980u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_268984:
    // 0x268984: 0x9c80  sll         $s3, $zero, 18
    ctx->pc = 0x268984u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_268988:
    // 0x268988: 0x0  nop
    ctx->pc = 0x268988u;
    // NOP
label_26898c:
    // 0x26898c: 0x0  nop
    ctx->pc = 0x26898cu;
    // NOP
label_268990:
    // 0x268990: 0x12bc6  .word       0x00012BC6                   # srlv        $a1, $at, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268990u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_268994:
    // 0x268994: 0x94c0  sll         $s2, $zero, 19
    ctx->pc = 0x268994u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_268998:
    // 0x268998: 0x0  nop
    ctx->pc = 0x268998u;
    // NOP
label_26899c:
    // 0x26899c: 0x0  nop
    ctx->pc = 0x26899cu;
    // NOP
label_2689a0:
    // 0x2689a0: 0x12bd9  .word       0x00012BD9                   # multu       $zero, $at # 00002BC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2689a0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2689a4:
    // 0x2689a4: 0x73a0  .word       0x000073A0                   # add         $t6, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2689a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2689a8:
    // 0x2689a8: 0x0  nop
    ctx->pc = 0x2689a8u;
    // NOP
label_2689ac:
    // 0x2689ac: 0x0  nop
    ctx->pc = 0x2689acu;
    // NOP
label_2689b0:
    // 0x2689b0: 0x12be8  .word       0x00012BE8                   # mfsa        $a1 # 000103C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2689b0u;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_2689b4:
    // 0x2689b4: 0x9140  sll         $s2, $zero, 5
    ctx->pc = 0x2689b4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_2689b8:
    // 0x2689b8: 0x0  nop
    ctx->pc = 0x2689b8u;
    // NOP
label_2689bc:
    // 0x2689bc: 0x0  nop
    ctx->pc = 0x2689bcu;
    // NOP
label_2689c0:
    // 0x2689c0: 0x12bfb  dsra        $a1, $at, 15
    ctx->pc = 0x2689c0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 1) >> 15);
label_2689c4:
    // 0x2689c4: 0x5dc0  sll         $t3, $zero, 23
    ctx->pc = 0x2689c4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_2689c8:
    // 0x2689c8: 0x0  nop
    ctx->pc = 0x2689c8u;
    // NOP
label_2689cc:
    // 0x2689cc: 0x0  nop
    ctx->pc = 0x2689ccu;
    // NOP
label_2689d0:
    // 0x2689d0: 0x12c07  .word       0x00012C07                   # srav        $a1, $at, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2689d0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2689d4:
    // 0x2689d4: 0x8100  sll         $s0, $zero, 4
    ctx->pc = 0x2689d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_2689d8:
    // 0x2689d8: 0x0  nop
    ctx->pc = 0x2689d8u;
    // NOP
label_2689dc:
    // 0x2689dc: 0x0  nop
    ctx->pc = 0x2689dcu;
    // NOP
label_2689e0:
    // 0x2689e0: 0x12c18  .word       0x00012C18                   # mult        $a1, $zero, $at # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2689e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2689e4:
    // 0x2689e4: 0x5b50  .word       0x00005B50                   # mfhi        $t3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2689e4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2689e8:
    // 0x2689e8: 0x0  nop
    ctx->pc = 0x2689e8u;
    // NOP
label_2689ec:
    // 0x2689ec: 0x0  nop
    ctx->pc = 0x2689ecu;
    // NOP
label_2689f0:
    // 0x2689f0: 0x12c24  .word       0x00012C24                   # and         $a1, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2689f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_2689f4:
    // 0x2689f4: 0xb4c0  sll         $s6, $zero, 19
    ctx->pc = 0x2689f4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_2689f8:
    // 0x2689f8: 0x0  nop
    ctx->pc = 0x2689f8u;
    // NOP
label_2689fc:
    // 0x2689fc: 0x0  nop
    ctx->pc = 0x2689fcu;
    // NOP
label_268a00:
    // 0x268a00: 0x12c3b  dsra        $a1, $at, 16
    ctx->pc = 0x268a00u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 1) >> 16);
label_268a04:
    // 0x268a04: 0x5be0  .word       0x00005BE0                   # add         $t3, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268a04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_268a08:
    // 0x268a08: 0x0  nop
    ctx->pc = 0x268a08u;
    // NOP
label_268a0c:
    // 0x268a0c: 0x0  nop
    ctx->pc = 0x268a0cu;
    // NOP
label_268a10:
    // 0x268a10: 0x12c47  .word       0x00012C47                   # srav        $a1, $at, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268a10u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_268a14:
    // 0x268a14: 0x31a0  .word       0x000031A0                   # add         $a2, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268a14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_268a18:
    // 0x268a18: 0x0  nop
    ctx->pc = 0x268a18u;
    // NOP
label_268a1c:
    // 0x268a1c: 0x0  nop
    ctx->pc = 0x268a1cu;
    // NOP
label_268a20:
    // 0x268a20: 0x12c4e  .word       0x00012C4E                   # INVALID     $zero, $at, 0x2C4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268a20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x268A20 raw=0x00012C4E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268a24:
    // 0x268a24: 0x7580  sll         $t6, $zero, 22
    ctx->pc = 0x268a24u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_268a28:
    // 0x268a28: 0x0  nop
    ctx->pc = 0x268a28u;
    // NOP
label_268a2c:
    // 0x268a2c: 0x0  nop
    ctx->pc = 0x268a2cu;
    // NOP
label_268a30:
    // 0x268a30: 0x12c5d  .word       0x00012C5D                   # dmultu      $zero, $at # 00002C40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268a30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x268A30 raw=0x00012C5D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268a34:
    // 0x268a34: 0xd3f0  tge         $zero, $zero, 847
    ctx->pc = 0x268a34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268a38:
    // 0x268a38: 0x0  nop
    ctx->pc = 0x268a38u;
    // NOP
label_268a3c:
    // 0x268a3c: 0x0  nop
    ctx->pc = 0x268a3cu;
    // NOP
label_268a40:
    // 0x268a40: 0x12c78  dsll        $a1, $at, 17
    ctx->pc = 0x268a40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) << 17);
label_268a44:
    // 0x268a44: 0x5780  sll         $t2, $zero, 30
    ctx->pc = 0x268a44u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_268a48:
    // 0x268a48: 0x0  nop
    ctx->pc = 0x268a48u;
    // NOP
label_268a4c:
    // 0x268a4c: 0x0  nop
    ctx->pc = 0x268a4cu;
    // NOP
label_268a50:
    // 0x268a50: 0x12c83  sra         $a1, $at, 18
    ctx->pc = 0x268a50u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 1), 18));
label_268a54:
    // 0x268a54: 0x75c0  sll         $t6, $zero, 23
    ctx->pc = 0x268a54u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_268a58:
    // 0x268a58: 0x0  nop
    ctx->pc = 0x268a58u;
    // NOP
label_268a5c:
    // 0x268a5c: 0x0  nop
    ctx->pc = 0x268a5cu;
    // NOP
label_268a60:
    // 0x268a60: 0x12c92  .word       0x00012C92                   # mflo        $a1 # 00010480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268a60u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_268a64:
    // 0x268a64: 0x84d0  .word       0x000084D0                   # mfhi        $s0 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268a64u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_268a68:
    // 0x268a68: 0x0  nop
    ctx->pc = 0x268a68u;
    // NOP
label_268a6c:
    // 0x268a6c: 0x0  nop
    ctx->pc = 0x268a6cu;
    // NOP
label_268a70:
    // 0x268a70: 0x12ca3  .word       0x00012CA3                   # negu        $a1, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268a70u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_268a74:
    // 0x268a74: 0x8850  .word       0x00008850                   # mfhi        $s1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268a74u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_268a78:
    // 0x268a78: 0x0  nop
    ctx->pc = 0x268a78u;
    // NOP
label_268a7c:
    // 0x268a7c: 0x0  nop
    ctx->pc = 0x268a7cu;
    // NOP
label_268a80:
    // 0x268a80: 0x12cb5  .word       0x00012CB5                   # INVALID     $zero, $at, 0x2CB5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268a80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x268A80 raw=0x00012CB5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268a84:
    // 0x268a84: 0x8ea0  .word       0x00008EA0                   # add         $s1, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268a84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_268a88:
    // 0x268a88: 0x0  nop
    ctx->pc = 0x268a88u;
    // NOP
label_268a8c:
    // 0x268a8c: 0x0  nop
    ctx->pc = 0x268a8cu;
    // NOP
label_268a90:
    // 0x268a90: 0x12cc7  .word       0x00012CC7                   # srav        $a1, $at, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268a90u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_268a94:
    // 0x268a94: 0x84c0  sll         $s0, $zero, 19
    ctx->pc = 0x268a94u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_268a98:
    // 0x268a98: 0x0  nop
    ctx->pc = 0x268a98u;
    // NOP
label_268a9c:
    // 0x268a9c: 0x0  nop
    ctx->pc = 0x268a9cu;
    // NOP
label_268aa0:
    // 0x268aa0: 0x12cd8  .word       0x00012CD8                   # mult        $a1, $zero, $at # 000004C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x268aa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_268aa4:
    // 0x268aa4: 0x5ff0  tge         $zero, $zero, 383
    ctx->pc = 0x268aa4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268aa8:
    // 0x268aa8: 0x0  nop
    ctx->pc = 0x268aa8u;
    // NOP
label_268aac:
    // 0x268aac: 0x0  nop
    ctx->pc = 0x268aacu;
    // NOP
label_268ab0:
    // 0x268ab0: 0x12ce4  .word       0x00012CE4                   # and         $a1, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268ab0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_268ab4:
    // 0x268ab4: 0x5cf0  tge         $zero, $zero, 371
    ctx->pc = 0x268ab4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268ab8:
    // 0x268ab8: 0x0  nop
    ctx->pc = 0x268ab8u;
    // NOP
label_268abc:
    // 0x268abc: 0x0  nop
    ctx->pc = 0x268abcu;
    // NOP
label_268ac0:
    // 0x268ac0: 0x12cf0  tge         $zero, $at, 179
    ctx->pc = 0x268ac0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_268ac4:
    // 0x268ac4: 0x6090  .word       0x00006090                   # mfhi        $t4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268ac4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_268ac8:
    // 0x268ac8: 0x0  nop
    ctx->pc = 0x268ac8u;
    // NOP
label_268acc:
    // 0x268acc: 0x0  nop
    ctx->pc = 0x268accu;
    // NOP
label_268ad0:
    // 0x268ad0: 0x12cfd  .word       0x00012CFD                   # INVALID     $zero, $at, 0x2CFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268ad0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x268AD0 raw=0x00012CFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268ad4:
    // 0x268ad4: 0x3f00  sll         $a3, $zero, 28
    ctx->pc = 0x268ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_268ad8:
    // 0x268ad8: 0x0  nop
    ctx->pc = 0x268ad8u;
    // NOP
label_268adc:
    // 0x268adc: 0x0  nop
    ctx->pc = 0x268adcu;
    // NOP
label_268ae0:
    // 0x268ae0: 0x12d05  .word       0x00012D05                   # INVALID     $zero, $at, 0x2D05 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268ae0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x268AE0 raw=0x00012D05"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268ae4:
    // 0x268ae4: 0x8c10  .word       0x00008C10                   # mfhi        $s1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268ae4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_268ae8:
    // 0x268ae8: 0x0  nop
    ctx->pc = 0x268ae8u;
    // NOP
label_268aec:
    // 0x268aec: 0x0  nop
    ctx->pc = 0x268aecu;
    // NOP
label_268af0:
    // 0x268af0: 0x12d17  .word       0x00012D17                   # dsrav       $a1, $at, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268af0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_268af4:
    // 0x268af4: 0xb5a0  .word       0x0000B5A0                   # add         $s6, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268af4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_268af8:
    // 0x268af8: 0x0  nop
    ctx->pc = 0x268af8u;
    // NOP
label_268afc:
    // 0x268afc: 0x0  nop
    ctx->pc = 0x268afcu;
    // NOP
label_268b00:
    // 0x268b00: 0x12d2e  .word       0x00012D2E                   # dsub        $a1, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268b00u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_268b04:
    // 0x268b04: 0x8230  tge         $zero, $zero, 520
    ctx->pc = 0x268b04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268b08:
    // 0x268b08: 0x0  nop
    ctx->pc = 0x268b08u;
    // NOP
label_268b0c:
    // 0x268b0c: 0x0  nop
    ctx->pc = 0x268b0cu;
    // NOP
label_268b10:
    // 0x268b10: 0x12d3f  dsra32      $a1, $at, 20
    ctx->pc = 0x268b10u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 1) >> (32 + 20));
label_268b14:
    // 0x268b14: 0x9840  sll         $s3, $zero, 1
    ctx->pc = 0x268b14u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_268b18:
    // 0x268b18: 0x0  nop
    ctx->pc = 0x268b18u;
    // NOP
label_268b1c:
    // 0x268b1c: 0x0  nop
    ctx->pc = 0x268b1cu;
    // NOP
label_268b20:
    // 0x268b20: 0x12d53  .word       0x00012D53                   # mtlo        $zero # 00012D40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268b20u;
    ctx->lo = GPR_U64(ctx, 0);
label_268b24:
    // 0x268b24: 0x98c0  sll         $s3, $zero, 3
    ctx->pc = 0x268b24u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_268b28:
    // 0x268b28: 0x0  nop
    ctx->pc = 0x268b28u;
    // NOP
label_268b2c:
    // 0x268b2c: 0x0  nop
    ctx->pc = 0x268b2cu;
    // NOP
label_268b30:
    // 0x268b30: 0x12d67  .word       0x00012D67                   # nor         $a1, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268b30u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_268b34:
    // 0x268b34: 0x8890  .word       0x00008890                   # mfhi        $s1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268b34u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_268b38:
    // 0x268b38: 0x0  nop
    ctx->pc = 0x268b38u;
    // NOP
label_268b3c:
    // 0x268b3c: 0x0  nop
    ctx->pc = 0x268b3cu;
    // NOP
label_268b40:
    // 0x268b40: 0x12d79  .word       0x00012D79                   # INVALID     $zero, $at, 0x2D79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268b40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x268B40 raw=0x00012D79"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268b44:
    // 0x268b44: 0x7b60  .word       0x00007B60                   # add         $t7, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268b44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_268b48:
    // 0x268b48: 0x0  nop
    ctx->pc = 0x268b48u;
    // NOP
label_268b4c:
    // 0x268b4c: 0x0  nop
    ctx->pc = 0x268b4cu;
    // NOP
label_268b50:
    // 0x268b50: 0x12d89  .word       0x00012D89                   # jalr        $a1, $zero # 00010580 <InstrIdType: CPU_SPECIAL>
label_268b54:
    if (ctx->pc == 0x268B54u) {
        ctx->pc = 0x268B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268B50u;
        // 0x268b54: 0x5030  tge         $zero, $zero, 320 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x268B58u;
        goto label_268b58;
    }
    ctx->pc = 0x268B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 5, 0x268B58u);
        ctx->pc = 0x268B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268B50u;
        // 0x268b54: 0x5030  tge         $zero, $zero, 320 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268B50u, 0x268B58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x268B58u;
label_268b58:
    // 0x268b58: 0x0  nop
    ctx->pc = 0x268b58u;
    // NOP
label_268b5c:
    // 0x268b5c: 0x0  nop
    ctx->pc = 0x268b5cu;
    // NOP
label_268b60:
    // 0x268b60: 0x12d94  .word       0x00012D94                   # dsllv       $a1, $at, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268b60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_268b64:
    // 0x268b64: 0xbd10  .word       0x0000BD10                   # mfhi        $s7 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268b64u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_268b68:
    // 0x268b68: 0x0  nop
    ctx->pc = 0x268b68u;
    // NOP
label_268b6c:
    // 0x268b6c: 0x0  nop
    ctx->pc = 0x268b6cu;
    // NOP
label_268b70:
    // 0x268b70: 0x12dac  .word       0x00012DAC                   # dadd        $a1, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268b70u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_268b74:
    // 0x268b74: 0x9a90  .word       0x00009A90                   # mfhi        $s3 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268b74u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_268b78:
    // 0x268b78: 0x0  nop
    ctx->pc = 0x268b78u;
    // NOP
label_268b7c:
    // 0x268b7c: 0x0  nop
    ctx->pc = 0x268b7cu;
    // NOP
label_268b80:
    // 0x268b80: 0x12dc0  sll         $a1, $at, 23
    ctx->pc = 0x268b80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 1), 23));
label_268b84:
    // 0x268b84: 0x10020  add         $zero, $zero, $at
    ctx->pc = 0x268b84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_268b88:
    // 0x268b88: 0x0  nop
    ctx->pc = 0x268b88u;
    // NOP
label_268b8c:
    // 0x268b8c: 0x0  nop
    ctx->pc = 0x268b8cu;
    // NOP
label_268b90:
    // 0x268b90: 0x12de1  .word       0x00012DE1                   # addu        $a1, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_268b94:
    // 0x268b94: 0x6ef0  tge         $zero, $zero, 443
    ctx->pc = 0x268b94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268b98:
    // 0x268b98: 0x0  nop
    ctx->pc = 0x268b98u;
    // NOP
label_268b9c:
    // 0x268b9c: 0x0  nop
    ctx->pc = 0x268b9cu;
    // NOP
label_268ba0:
    // 0x268ba0: 0x12def  .word       0x00012DEF                   # dsubu       $a1, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268ba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_268ba4:
    // 0x268ba4: 0x7580  sll         $t6, $zero, 22
    ctx->pc = 0x268ba4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_268ba8:
    // 0x268ba8: 0x0  nop
    ctx->pc = 0x268ba8u;
    // NOP
label_268bac:
    // 0x268bac: 0x0  nop
    ctx->pc = 0x268bacu;
    // NOP
label_268bb0:
    // 0x268bb0: 0x12dfe  dsrl32      $a1, $at, 23
    ctx->pc = 0x268bb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) >> (32 + 23));
label_268bb4:
    // 0x268bb4: 0x86e0  .word       0x000086E0                   # add         $s0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268bb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_268bb8:
    // 0x268bb8: 0x0  nop
    ctx->pc = 0x268bb8u;
    // NOP
label_268bbc:
    // 0x268bbc: 0x0  nop
    ctx->pc = 0x268bbcu;
    // NOP
label_268bc0:
    // 0x268bc0: 0x12e0f  .word       0x00012E0F                   # sync.p # 00012800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268bc0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_268bc4:
    // 0x268bc4: 0x9d40  sll         $s3, $zero, 21
    ctx->pc = 0x268bc4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_268bc8:
    // 0x268bc8: 0x0  nop
    ctx->pc = 0x268bc8u;
    // NOP
label_268bcc:
    // 0x268bcc: 0x0  nop
    ctx->pc = 0x268bccu;
    // NOP
label_268bd0:
    // 0x268bd0: 0x12e23  .word       0x00012E23                   # negu        $a1, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_268bd4:
    // 0x268bd4: 0x5eb0  tge         $zero, $zero, 378
    ctx->pc = 0x268bd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268bd8:
    // 0x268bd8: 0x0  nop
    ctx->pc = 0x268bd8u;
    // NOP
label_268bdc:
    // 0x268bdc: 0x0  nop
    ctx->pc = 0x268bdcu;
    // NOP
label_268be0:
    // 0x268be0: 0x12e2f  .word       0x00012E2F                   # dsubu       $a1, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268be0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_268be4:
    // 0x268be4: 0x7000  sll         $t6, $zero, 0
    ctx->pc = 0x268be4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_268be8:
    // 0x268be8: 0x0  nop
    ctx->pc = 0x268be8u;
    // NOP
label_268bec:
    // 0x268bec: 0x0  nop
    ctx->pc = 0x268becu;
    // NOP
label_268bf0:
    // 0x268bf0: 0x12e3d  .word       0x00012E3D                   # INVALID     $zero, $at, 0x2E3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268bf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x268BF0 raw=0x00012E3D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268bf4:
    // 0x268bf4: 0x7990  .word       0x00007990                   # mfhi        $t7 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268bf4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_268bf8:
    // 0x268bf8: 0x0  nop
    ctx->pc = 0x268bf8u;
    // NOP
label_268bfc:
    // 0x268bfc: 0x0  nop
    ctx->pc = 0x268bfcu;
    // NOP
label_268c00:
    // 0x268c00: 0x12e4d  break       1, 185
    ctx->pc = 0x268c00u;
    runtime->handleBreak(rdram, ctx);
label_268c04:
    // 0x268c04: 0x7010  mfhi        $t6
    ctx->pc = 0x268c04u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_268c08:
    // 0x268c08: 0x0  nop
    ctx->pc = 0x268c08u;
    // NOP
label_268c0c:
    // 0x268c0c: 0x0  nop
    ctx->pc = 0x268c0cu;
    // NOP
label_268c10:
    // 0x268c10: 0x12e5c  .word       0x00012E5C                   # dmult       $zero, $at # 00002E40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268c10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x268C10 raw=0x00012E5C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268c14:
    // 0x268c14: 0xbef0  tge         $zero, $zero, 763
    ctx->pc = 0x268c14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268c18:
    // 0x268c18: 0x0  nop
    ctx->pc = 0x268c18u;
    // NOP
label_268c1c:
    // 0x268c1c: 0x0  nop
    ctx->pc = 0x268c1cu;
    // NOP
label_268c20:
    // 0x268c20: 0x12e74  teq         $zero, $at, 185
    ctx->pc = 0x268c20u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_268c24:
    // 0x268c24: 0xb730  tge         $zero, $zero, 732
    ctx->pc = 0x268c24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268c28:
    // 0x268c28: 0x0  nop
    ctx->pc = 0x268c28u;
    // NOP
label_268c2c:
    // 0x268c2c: 0x0  nop
    ctx->pc = 0x268c2cu;
    // NOP
label_268c30:
    // 0x268c30: 0x12e8b  .word       0x00012E8B                   # movn        $a1, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268c30u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_268c34:
    // 0x268c34: 0x7af0  tge         $zero, $zero, 491
    ctx->pc = 0x268c34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268c38:
    // 0x268c38: 0x0  nop
    ctx->pc = 0x268c38u;
    // NOP
label_268c3c:
    // 0x268c3c: 0x0  nop
    ctx->pc = 0x268c3cu;
    // NOP
label_268c40:
    // 0x268c40: 0x12e9b  .word       0x00012E9B                   # divu        $a1, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268c40u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_268c44:
    // 0x268c44: 0xc190  .word       0x0000C190                   # mfhi        $t8 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268c44u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_268c48:
    // 0x268c48: 0x0  nop
    ctx->pc = 0x268c48u;
    // NOP
label_268c4c:
    // 0x268c4c: 0x0  nop
    ctx->pc = 0x268c4cu;
    // NOP
label_268c50:
    // 0x268c50: 0x12eb4  teq         $zero, $at, 186
    ctx->pc = 0x268c50u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_268c54:
    // 0x268c54: 0x8940  sll         $s1, $zero, 5
    ctx->pc = 0x268c54u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_268c58:
    // 0x268c58: 0x0  nop
    ctx->pc = 0x268c58u;
    // NOP
label_268c5c:
    // 0x268c5c: 0x0  nop
    ctx->pc = 0x268c5cu;
    // NOP
label_268c60:
    // 0x268c60: 0x12ec6  .word       0x00012EC6                   # srlv        $a1, $at, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268c60u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_268c64:
    // 0x268c64: 0x9730  tge         $zero, $zero, 604
    ctx->pc = 0x268c64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268c68:
    // 0x268c68: 0x0  nop
    ctx->pc = 0x268c68u;
    // NOP
label_268c6c:
    // 0x268c6c: 0x0  nop
    ctx->pc = 0x268c6cu;
    // NOP
label_268c70:
    // 0x268c70: 0x12ed9  .word       0x00012ED9                   # multu       $zero, $at # 00002EC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268c70u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_268c74:
    // 0x268c74: 0x7c10  .word       0x00007C10                   # mfhi        $t7 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268c74u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_268c78:
    // 0x268c78: 0x0  nop
    ctx->pc = 0x268c78u;
    // NOP
label_268c7c:
    // 0x268c7c: 0x0  nop
    ctx->pc = 0x268c7cu;
    // NOP
label_268c80:
    // 0x268c80: 0x12ee9  .word       0x00012EE9                   # mtsa        $zero # 00012EC0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x268c80u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_268c84:
    // 0x268c84: 0x41e0  .word       0x000041E0                   # add         $t0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268c84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_268c88:
    // 0x268c88: 0x0  nop
    ctx->pc = 0x268c88u;
    // NOP
label_268c8c:
    // 0x268c8c: 0x0  nop
    ctx->pc = 0x268c8cu;
    // NOP
label_268c90:
    // 0x268c90: 0x12ef2  tlt         $zero, $at, 187
    ctx->pc = 0x268c90u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_268c94:
    // 0x268c94: 0x67f0  tge         $zero, $zero, 415
    ctx->pc = 0x268c94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268c98:
    // 0x268c98: 0x0  nop
    ctx->pc = 0x268c98u;
    // NOP
label_268c9c:
    // 0x268c9c: 0x0  nop
    ctx->pc = 0x268c9cu;
    // NOP
label_268ca0:
    // 0x268ca0: 0x12eff  dsra32      $a1, $at, 27
    ctx->pc = 0x268ca0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 1) >> (32 + 27));
label_268ca4:
    // 0x268ca4: 0x79e0  .word       0x000079E0                   # add         $t7, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268ca4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_268ca8:
    // 0x268ca8: 0x0  nop
    ctx->pc = 0x268ca8u;
    // NOP
label_268cac:
    // 0x268cac: 0x0  nop
    ctx->pc = 0x268cacu;
    // NOP
label_268cb0:
    // 0x268cb0: 0x12f0f  .word       0x00012F0F                   # sync.p # 00012800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268cb0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_268cb4:
    // 0x268cb4: 0x9750  .word       0x00009750                   # mfhi        $s2 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268cb4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_268cb8:
    // 0x268cb8: 0x0  nop
    ctx->pc = 0x268cb8u;
    // NOP
label_268cbc:
    // 0x268cbc: 0x0  nop
    ctx->pc = 0x268cbcu;
    // NOP
label_268cc0:
    // 0x268cc0: 0x12f22  .word       0x00012F22                   # neg         $a1, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268cc0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_268cc4:
    // 0x268cc4: 0x6a30  tge         $zero, $zero, 424
    ctx->pc = 0x268cc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268cc8:
    // 0x268cc8: 0x0  nop
    ctx->pc = 0x268cc8u;
    // NOP
label_268ccc:
    // 0x268ccc: 0x0  nop
    ctx->pc = 0x268cccu;
    // NOP
label_268cd0:
    // 0x268cd0: 0x12f30  tge         $zero, $at, 188
    ctx->pc = 0x268cd0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_268cd4:
    // 0x268cd4: 0x99f0  tge         $zero, $zero, 615
    ctx->pc = 0x268cd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268cd8:
    // 0x268cd8: 0x0  nop
    ctx->pc = 0x268cd8u;
    // NOP
label_268cdc:
    // 0x268cdc: 0x0  nop
    ctx->pc = 0x268cdcu;
    // NOP
label_268ce0:
    // 0x268ce0: 0x12f44  .word       0x00012F44                   # sllv        $a1, $at, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_268ce4:
    // 0x268ce4: 0x9d80  sll         $s3, $zero, 22
    ctx->pc = 0x268ce4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_268ce8:
    // 0x268ce8: 0x0  nop
    ctx->pc = 0x268ce8u;
    // NOP
label_268cec:
    // 0x268cec: 0x0  nop
    ctx->pc = 0x268cecu;
    // NOP
label_268cf0:
    // 0x268cf0: 0x12f58  .word       0x00012F58                   # mult        $a1, $zero, $at # 00000740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x268cf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_268cf4:
    // 0x268cf4: 0x6a10  .word       0x00006A10                   # mfhi        $t5 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268cf4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_268cf8:
    // 0x268cf8: 0x0  nop
    ctx->pc = 0x268cf8u;
    // NOP
label_268cfc:
    // 0x268cfc: 0x0  nop
    ctx->pc = 0x268cfcu;
    // NOP
label_268d00:
    // 0x268d00: 0x12f66  .word       0x00012F66                   # xor         $a1, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268d00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_268d04:
    // 0x268d04: 0xebe0  .word       0x0000EBE0                   # add         $sp, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268d04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_268d08:
    // 0x268d08: 0x0  nop
    ctx->pc = 0x268d08u;
    // NOP
label_268d0c:
    // 0x268d0c: 0x0  nop
    ctx->pc = 0x268d0cu;
    // NOP
label_268d10:
    // 0x268d10: 0x12f84  .word       0x00012F84                   # sllv        $a1, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268d10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_268d14:
    // 0x268d14: 0x12b00  sll         $a1, $at, 12
    ctx->pc = 0x268d14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 1), 12));
label_268d18:
    // 0x268d18: 0x0  nop
    ctx->pc = 0x268d18u;
    // NOP
label_268d1c:
    // 0x268d1c: 0x0  nop
    ctx->pc = 0x268d1cu;
    // NOP
label_268d20:
    // 0x268d20: 0x12faa  .word       0x00012FAA                   # slt         $a1, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268d20u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_268d24:
    // 0x268d24: 0xbcb0  tge         $zero, $zero, 754
    ctx->pc = 0x268d24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268d28:
    // 0x268d28: 0x0  nop
    ctx->pc = 0x268d28u;
    // NOP
label_268d2c:
    // 0x268d2c: 0x0  nop
    ctx->pc = 0x268d2cu;
    // NOP
label_268d30:
    // 0x268d30: 0x12fc2  srl         $a1, $at, 31
    ctx->pc = 0x268d30u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 1), 31));
label_268d34:
    // 0x268d34: 0x6df0  tge         $zero, $zero, 439
    ctx->pc = 0x268d34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268d38:
    // 0x268d38: 0x0  nop
    ctx->pc = 0x268d38u;
    // NOP
label_268d3c:
    // 0x268d3c: 0x0  nop
    ctx->pc = 0x268d3cu;
    // NOP
label_268d40:
    // 0x268d40: 0x12fd0  .word       0x00012FD0                   # mfhi        $a1 # 000107C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268d40u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_268d44:
    // 0x268d44: 0x9400  sll         $s2, $zero, 16
    ctx->pc = 0x268d44u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_268d48:
    // 0x268d48: 0x0  nop
    ctx->pc = 0x268d48u;
    // NOP
label_268d4c:
    // 0x268d4c: 0x0  nop
    ctx->pc = 0x268d4cu;
    // NOP
label_268d50:
    // 0x268d50: 0x12fe3  .word       0x00012FE3                   # negu        $a1, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268d50u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_268d54:
    // 0x268d54: 0xc8e0  .word       0x0000C8E0                   # add         $t9, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268d54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_268d58:
    // 0x268d58: 0x0  nop
    ctx->pc = 0x268d58u;
    // NOP
label_268d5c:
    // 0x268d5c: 0x0  nop
    ctx->pc = 0x268d5cu;
    // NOP
label_268d60:
    // 0x268d60: 0x12ffd  .word       0x00012FFD                   # INVALID     $zero, $at, 0x2FFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268d60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x268D60 raw=0x00012FFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268d64:
    // 0x268d64: 0xd1b0  tge         $zero, $zero, 838
    ctx->pc = 0x268d64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268d68:
    // 0x268d68: 0x0  nop
    ctx->pc = 0x268d68u;
    // NOP
label_268d6c:
    // 0x268d6c: 0x0  nop
    ctx->pc = 0x268d6cu;
    // NOP
label_268d70:
    // 0x268d70: 0x13018  mult        $a2, $zero, $at
    ctx->pc = 0x268d70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_268d74:
    // 0x268d74: 0x119b0  tge         $zero, $at, 102
    ctx->pc = 0x268d74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_268d78:
    // 0x268d78: 0x0  nop
    ctx->pc = 0x268d78u;
    // NOP
label_268d7c:
    // 0x268d7c: 0x0  nop
    ctx->pc = 0x268d7cu;
    // NOP
label_268d80:
    // 0x268d80: 0x1303c  dsll32      $a2, $at, 0
    ctx->pc = 0x268d80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) << (32 + 0));
label_268d84:
    // 0x268d84: 0xd720  .word       0x0000D720                   # add         $k0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268d84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_268d88:
    // 0x268d88: 0x0  nop
    ctx->pc = 0x268d88u;
    // NOP
label_268d8c:
    // 0x268d8c: 0x0  nop
    ctx->pc = 0x268d8cu;
    // NOP
label_268d90:
    // 0x268d90: 0x13057  .word       0x00013057                   # dsrav       $a2, $at, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268d90u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_268d94:
    // 0x268d94: 0xb720  .word       0x0000B720                   # add         $s6, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268d94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_268d98:
    // 0x268d98: 0x0  nop
    ctx->pc = 0x268d98u;
    // NOP
label_268d9c:
    // 0x268d9c: 0x0  nop
    ctx->pc = 0x268d9cu;
    // NOP
label_268da0:
    // 0x268da0: 0x1306e  .word       0x0001306E                   # dsub        $a2, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268da0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, r); }
label_268da4:
    // 0x268da4: 0xd6e0  .word       0x0000D6E0                   # add         $k0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268da4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_268da8:
    // 0x268da8: 0x0  nop
    ctx->pc = 0x268da8u;
    // NOP
label_268dac:
    // 0x268dac: 0x0  nop
    ctx->pc = 0x268dacu;
    // NOP
label_268db0:
    // 0x268db0: 0x13089  .word       0x00013089                   # jalr        $a2, $zero # 00010080 <InstrIdType: CPU_SPECIAL>
label_268db4:
    if (ctx->pc == 0x268DB4u) {
        ctx->pc = 0x268DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DB0u;
        // 0x268db4: 0x9b90  .word       0x00009B90                   # mfhi        $s3 # 00000380 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x268DB8u;
        goto label_268db8;
    }
    ctx->pc = 0x268DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 6, 0x268DB8u);
        ctx->pc = 0x268DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DB0u;
        // 0x268db4: 0x9b90  .word       0x00009B90                   # mfhi        $s3 # 00000380 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268DB0u, 0x268DB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x268DB8u;
label_268db8:
    // 0x268db8: 0x0  nop
    ctx->pc = 0x268db8u;
    // NOP
label_268dbc:
    // 0x268dbc: 0x0  nop
    ctx->pc = 0x268dbcu;
    // NOP
label_268dc0:
    // 0x268dc0: 0x1309d  .word       0x0001309D                   # dmultu      $zero, $at # 00003080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268dc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x268DC0 raw=0x0001309D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268dc4:
    // 0x268dc4: 0x4770  tge         $zero, $zero, 285
    ctx->pc = 0x268dc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268dc8:
    // 0x268dc8: 0x0  nop
    ctx->pc = 0x268dc8u;
    // NOP
label_268dcc:
    // 0x268dcc: 0x0  nop
    ctx->pc = 0x268dccu;
    // NOP
label_268dd0:
    // 0x268dd0: 0x130a6  .word       0x000130A6                   # xor         $a2, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268dd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_268dd4:
    // 0x268dd4: 0xb110  .word       0x0000B110                   # mfhi        $s6 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268dd4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_268dd8:
    // 0x268dd8: 0x0  nop
    ctx->pc = 0x268dd8u;
    // NOP
label_268ddc:
    // 0x268ddc: 0x0  nop
    ctx->pc = 0x268ddcu;
    // NOP
label_268de0:
    // 0x268de0: 0x130bd  .word       0x000130BD                   # INVALID     $zero, $at, 0x30BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268de0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x268DE0 raw=0x000130BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268de4:
    // 0x268de4: 0x8d30  tge         $zero, $zero, 564
    ctx->pc = 0x268de4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268de8:
    // 0x268de8: 0x0  nop
    ctx->pc = 0x268de8u;
    // NOP
label_268dec:
    // 0x268dec: 0x0  nop
    ctx->pc = 0x268decu;
    // NOP
label_268df0:
    // 0x268df0: 0x130cf  .word       0x000130CF                   # sync # 00013000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268df0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_268df4:
    // 0x268df4: 0xd7f0  tge         $zero, $zero, 863
    ctx->pc = 0x268df4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268df8:
    // 0x268df8: 0x0  nop
    ctx->pc = 0x268df8u;
    // NOP
label_268dfc:
    // 0x268dfc: 0x0  nop
    ctx->pc = 0x268dfcu;
    // NOP
label_268e00:
    // 0x268e00: 0x130ea  .word       0x000130EA                   # slt         $a2, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268e00u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_268e04:
    // 0x268e04: 0x8820  add         $s1, $zero, $zero
    ctx->pc = 0x268e04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_268e08:
    // 0x268e08: 0x0  nop
    ctx->pc = 0x268e08u;
    // NOP
label_268e0c:
    // 0x268e0c: 0x0  nop
    ctx->pc = 0x268e0cu;
    // NOP
label_268e10:
    // 0x268e10: 0x130fc  dsll32      $a2, $at, 3
    ctx->pc = 0x268e10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) << (32 + 3));
label_268e14:
    // 0x268e14: 0xc200  sll         $t8, $zero, 8
    ctx->pc = 0x268e14u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_268e18:
    // 0x268e18: 0x0  nop
    ctx->pc = 0x268e18u;
    // NOP
label_268e1c:
    // 0x268e1c: 0x0  nop
    ctx->pc = 0x268e1cu;
    // NOP
label_268e20:
    // 0x268e20: 0x13115  .word       0x00013115                   # INVALID     $zero, $at, 0x3115 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268e20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x268E20 raw=0x00013115"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268e24:
    // 0x268e24: 0x9dc0  sll         $s3, $zero, 23
    ctx->pc = 0x268e24u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_268e28:
    // 0x268e28: 0x0  nop
    ctx->pc = 0x268e28u;
    // NOP
label_268e2c:
    // 0x268e2c: 0x0  nop
    ctx->pc = 0x268e2cu;
    // NOP
label_268e30:
    // 0x268e30: 0x13129  .word       0x00013129                   # mtsa        $zero # 00013100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x268e30u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_268e34:
    // 0x268e34: 0x83a0  .word       0x000083A0                   # add         $s0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268e34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_268e38:
    // 0x268e38: 0x0  nop
    ctx->pc = 0x268e38u;
    // NOP
label_268e3c:
    // 0x268e3c: 0x0  nop
    ctx->pc = 0x268e3cu;
    // NOP
label_268e40:
    // 0x268e40: 0x1313a  dsrl        $a2, $at, 4
    ctx->pc = 0x268e40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) >> 4);
label_268e44:
    // 0x268e44: 0x8da0  .word       0x00008DA0                   # add         $s1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268e44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_268e48:
    // 0x268e48: 0x0  nop
    ctx->pc = 0x268e48u;
    // NOP
label_268e4c:
    // 0x268e4c: 0x0  nop
    ctx->pc = 0x268e4cu;
    // NOP
label_268e50:
    // 0x268e50: 0x1314c  .word       0x0001314C                   # syscall     197 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268e50u;
    ctx->pc = 0x268E54u;
runtime->handleSyscall(rdram, ctx, 0x4C5u);
label_268e54:
    // 0x268e54: 0x9c50  .word       0x00009C50                   # mfhi        $s3 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268e54u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_268e58:
    // 0x268e58: 0x0  nop
    ctx->pc = 0x268e58u;
    // NOP
label_268e5c:
    // 0x268e5c: 0x0  nop
    ctx->pc = 0x268e5cu;
    // NOP
label_268e60:
    // 0x268e60: 0x13160  .word       0x00013160                   # add         $a2, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268e60u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_268e64:
    // 0x268e64: 0x6df0  tge         $zero, $zero, 439
    ctx->pc = 0x268e64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268e68:
    // 0x268e68: 0x0  nop
    ctx->pc = 0x268e68u;
    // NOP
label_268e6c:
    // 0x268e6c: 0x0  nop
    ctx->pc = 0x268e6cu;
    // NOP
label_268e70:
    // 0x268e70: 0x1316e  .word       0x0001316E                   # dsub        $a2, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268e70u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, r); }
label_268e74:
    // 0x268e74: 0x8d50  .word       0x00008D50                   # mfhi        $s1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268e74u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_268e78:
    // 0x268e78: 0x0  nop
    ctx->pc = 0x268e78u;
    // NOP
label_268e7c:
    // 0x268e7c: 0x0  nop
    ctx->pc = 0x268e7cu;
    // NOP
label_268e80:
    // 0x268e80: 0x13180  sll         $a2, $at, 6
    ctx->pc = 0x268e80u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 6));
label_268e84:
    // 0x268e84: 0x56c0  sll         $t2, $zero, 27
    ctx->pc = 0x268e84u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_268e88:
    // 0x268e88: 0x0  nop
    ctx->pc = 0x268e88u;
    // NOP
label_268e8c:
    // 0x268e8c: 0x0  nop
    ctx->pc = 0x268e8cu;
    // NOP
label_268e90:
    // 0x268e90: 0x1318b  .word       0x0001318B                   # movn        $a2, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268e90u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_268e94:
    // 0x268e94: 0x7590  .word       0x00007590                   # mfhi        $t6 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268e94u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_268e98:
    // 0x268e98: 0x0  nop
    ctx->pc = 0x268e98u;
    // NOP
label_268e9c:
    // 0x268e9c: 0x0  nop
    ctx->pc = 0x268e9cu;
    // NOP
label_268ea0:
    // 0x268ea0: 0x1319a  .word       0x0001319A                   # div         $a2, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268ea0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_268ea4:
    // 0x268ea4: 0x8180  sll         $s0, $zero, 6
    ctx->pc = 0x268ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_268ea8:
    // 0x268ea8: 0x0  nop
    ctx->pc = 0x268ea8u;
    // NOP
label_268eac:
    // 0x268eac: 0x0  nop
    ctx->pc = 0x268eacu;
    // NOP
label_268eb0:
    // 0x268eb0: 0x131ab  .word       0x000131AB                   # sltu        $a2, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268eb0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_268eb4:
    // 0x268eb4: 0xe120  .word       0x0000E120                   # add         $gp, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268eb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_268eb8:
    // 0x268eb8: 0x0  nop
    ctx->pc = 0x268eb8u;
    // NOP
label_268ebc:
    // 0x268ebc: 0x0  nop
    ctx->pc = 0x268ebcu;
    // NOP
label_268ec0:
    // 0x268ec0: 0x131c8  .word       0x000131C8                   # jr          $zero # 000131C0 <InstrIdType: CPU_SPECIAL>
label_268ec4:
    if (ctx->pc == 0x268EC4u) {
        ctx->pc = 0x268EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268EC0u;
        // 0x268ec4: 0x89a0  .word       0x000089A0                   # add         $s1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x268EC8u;
        goto label_268ec8;
    }
    ctx->pc = 0x268EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x268EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268EC0u;
        // 0x268ec4: 0x89a0  .word       0x000089A0                   # add         $s1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268EC0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x268EC8u;
label_268ec8:
    // 0x268ec8: 0x0  nop
    ctx->pc = 0x268ec8u;
    // NOP
label_268ecc:
    // 0x268ecc: 0x0  nop
    ctx->pc = 0x268eccu;
    // NOP
label_268ed0:
    // 0x268ed0: 0x131da  .word       0x000131DA                   # div         $a2, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268ed0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_268ed4:
    // 0x268ed4: 0x7d20  .word       0x00007D20                   # add         $t7, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268ed4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_268ed8:
    // 0x268ed8: 0x0  nop
    ctx->pc = 0x268ed8u;
    // NOP
label_268edc:
    // 0x268edc: 0x0  nop
    ctx->pc = 0x268edcu;
    // NOP
label_268ee0:
    // 0x268ee0: 0x131ea  .word       0x000131EA                   # slt         $a2, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268ee0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_268ee4:
    // 0x268ee4: 0x47e0  .word       0x000047E0                   # add         $t0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268ee4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_268ee8:
    // 0x268ee8: 0x0  nop
    ctx->pc = 0x268ee8u;
    // NOP
label_268eec:
    // 0x268eec: 0x0  nop
    ctx->pc = 0x268eecu;
    // NOP
label_268ef0:
    // 0x268ef0: 0x131f3  tltu        $zero, $at, 199
    ctx->pc = 0x268ef0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_268ef4:
    // 0x268ef4: 0x7610  .word       0x00007610                   # mfhi        $t6 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268ef4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_268ef8:
    // 0x268ef8: 0x0  nop
    ctx->pc = 0x268ef8u;
    // NOP
label_268efc:
    // 0x268efc: 0x0  nop
    ctx->pc = 0x268efcu;
    // NOP
label_268f00:
    // 0x268f00: 0x13202  srl         $a2, $at, 8
    ctx->pc = 0x268f00u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 1), 8));
label_268f04:
    // 0x268f04: 0x5940  sll         $t3, $zero, 5
    ctx->pc = 0x268f04u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_268f08:
    // 0x268f08: 0x0  nop
    ctx->pc = 0x268f08u;
    // NOP
label_268f0c:
    // 0x268f0c: 0x0  nop
    ctx->pc = 0x268f0cu;
    // NOP
label_268f10:
    // 0x268f10: 0x1320e  .word       0x0001320E                   # INVALID     $zero, $at, 0x320E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268f10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x268F10 raw=0x0001320E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268f14:
    // 0x268f14: 0x9d80  sll         $s3, $zero, 22
    ctx->pc = 0x268f14u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_268f18:
    // 0x268f18: 0x0  nop
    ctx->pc = 0x268f18u;
    // NOP
label_268f1c:
    // 0x268f1c: 0x0  nop
    ctx->pc = 0x268f1cu;
    // NOP
label_268f20:
    // 0x268f20: 0x13222  .word       0x00013222                   # neg         $a2, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268f20u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_268f24:
    // 0x268f24: 0xb550  .word       0x0000B550                   # mfhi        $s6 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268f24u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_268f28:
    // 0x268f28: 0x0  nop
    ctx->pc = 0x268f28u;
    // NOP
label_268f2c:
    // 0x268f2c: 0x0  nop
    ctx->pc = 0x268f2cu;
    // NOP
label_268f30:
    // 0x268f30: 0x13239  .word       0x00013239                   # INVALID     $zero, $at, 0x3239 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268f30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x268F30 raw=0x00013239"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268f34:
    // 0x268f34: 0x49c0  sll         $t1, $zero, 7
    ctx->pc = 0x268f34u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_268f38:
    // 0x268f38: 0x0  nop
    ctx->pc = 0x268f38u;
    // NOP
label_268f3c:
    // 0x268f3c: 0x0  nop
    ctx->pc = 0x268f3cu;
    // NOP
label_268f40:
    // 0x268f40: 0x13243  sra         $a2, $at, 9
    ctx->pc = 0x268f40u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 1), 9));
label_268f44:
    // 0x268f44: 0xd7e0  .word       0x0000D7E0                   # add         $k0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268f44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_268f48:
    // 0x268f48: 0x0  nop
    ctx->pc = 0x268f48u;
    // NOP
label_268f4c:
    // 0x268f4c: 0x0  nop
    ctx->pc = 0x268f4cu;
    // NOP
label_268f50:
    // 0x268f50: 0x1325e  .word       0x0001325E                   # ddiv        $a2, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268f50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x268F50 raw=0x0001325E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268f54:
    // 0x268f54: 0x8a40  sll         $s1, $zero, 9
    ctx->pc = 0x268f54u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_268f58:
    // 0x268f58: 0x0  nop
    ctx->pc = 0x268f58u;
    // NOP
label_268f5c:
    // 0x268f5c: 0x0  nop
    ctx->pc = 0x268f5cu;
    // NOP
label_268f60:
    // 0x268f60: 0x13270  tge         $zero, $at, 201
    ctx->pc = 0x268f60u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_268f64:
    // 0x268f64: 0xb1e0  .word       0x0000B1E0                   # add         $s6, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268f64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_268f68:
    // 0x268f68: 0x0  nop
    ctx->pc = 0x268f68u;
    // NOP
label_268f6c:
    // 0x268f6c: 0x0  nop
    ctx->pc = 0x268f6cu;
    // NOP
label_268f70:
    // 0x268f70: 0x13287  .word       0x00013287                   # srav        $a2, $at, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268f70u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_268f74:
    // 0x268f74: 0x7a50  .word       0x00007A50                   # mfhi        $t7 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268f74u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_268f78:
    // 0x268f78: 0x0  nop
    ctx->pc = 0x268f78u;
    // NOP
label_268f7c:
    // 0x268f7c: 0x0  nop
    ctx->pc = 0x268f7cu;
    // NOP
label_268f80:
    // 0x268f80: 0x13297  .word       0x00013297                   # dsrav       $a2, $at, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268f80u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_268f84:
    // 0x268f84: 0x8c10  .word       0x00008C10                   # mfhi        $s1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268f84u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_268f88:
    // 0x268f88: 0x0  nop
    ctx->pc = 0x268f88u;
    // NOP
label_268f8c:
    // 0x268f8c: 0x0  nop
    ctx->pc = 0x268f8cu;
    // NOP
label_268f90:
    // 0x268f90: 0x132a9  .word       0x000132A9                   # mtsa        $zero # 00013280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x268f90u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_268f94:
    // 0x268f94: 0xb680  sll         $s6, $zero, 26
    ctx->pc = 0x268f94u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_268f98:
    // 0x268f98: 0x0  nop
    ctx->pc = 0x268f98u;
    // NOP
label_268f9c:
    // 0x268f9c: 0x0  nop
    ctx->pc = 0x268f9cu;
    // NOP
label_268fa0:
    // 0x268fa0: 0x132c0  sll         $a2, $at, 11
    ctx->pc = 0x268fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 11));
label_268fa4:
    // 0x268fa4: 0x90c0  sll         $s2, $zero, 3
    ctx->pc = 0x268fa4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_268fa8:
    // 0x268fa8: 0x0  nop
    ctx->pc = 0x268fa8u;
    // NOP
label_268fac:
    // 0x268fac: 0x0  nop
    ctx->pc = 0x268facu;
    // NOP
label_268fb0:
    // 0x268fb0: 0x132d3  .word       0x000132D3                   # mtlo        $zero # 000132C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268fb0u;
    ctx->lo = GPR_U64(ctx, 0);
label_268fb4:
    // 0x268fb4: 0x9d30  tge         $zero, $zero, 628
    ctx->pc = 0x268fb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268fb8:
    // 0x268fb8: 0x0  nop
    ctx->pc = 0x268fb8u;
    // NOP
label_268fbc:
    // 0x268fbc: 0x0  nop
    ctx->pc = 0x268fbcu;
    // NOP
label_268fc0:
    // 0x268fc0: 0x132e7  .word       0x000132E7                   # nor         $a2, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268fc0u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_268fc4:
    // 0x268fc4: 0xaac0  sll         $s5, $zero, 11
    ctx->pc = 0x268fc4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_268fc8:
    // 0x268fc8: 0x0  nop
    ctx->pc = 0x268fc8u;
    // NOP
label_268fcc:
    // 0x268fcc: 0x0  nop
    ctx->pc = 0x268fccu;
    // NOP
label_268fd0:
    // 0x268fd0: 0x132fd  .word       0x000132FD                   # INVALID     $zero, $at, 0x32FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268fd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x268FD0 raw=0x000132FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268fd4:
    // 0x268fd4: 0x6390  .word       0x00006390                   # mfhi        $t4 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268fd4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_268fd8:
    // 0x268fd8: 0x0  nop
    ctx->pc = 0x268fd8u;
    // NOP
label_268fdc:
    // 0x268fdc: 0x0  nop
    ctx->pc = 0x268fdcu;
    // NOP
label_268fe0:
    // 0x268fe0: 0x1330a  .word       0x0001330A                   # movz        $a2, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268fe0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_268fe4:
    // 0x268fe4: 0x3a30  tge         $zero, $zero, 232
    ctx->pc = 0x268fe4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268fe8:
    // 0x268fe8: 0x0  nop
    ctx->pc = 0x268fe8u;
    // NOP
label_268fec:
    // 0x268fec: 0x0  nop
    ctx->pc = 0x268fecu;
    // NOP
label_268ff0:
    // 0x268ff0: 0x13312  .word       0x00013312                   # mflo        $a2 # 00010300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268ff0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_268ff4:
    // 0x268ff4: 0x54f0  tge         $zero, $zero, 339
    ctx->pc = 0x268ff4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268ff8:
    // 0x268ff8: 0x0  nop
    ctx->pc = 0x268ff8u;
    // NOP
label_268ffc:
    // 0x268ffc: 0x0  nop
    ctx->pc = 0x268ffcu;
    // NOP
label_269000:
    // 0x269000: 0x1331d  .word       0x0001331D                   # dmultu      $zero, $at # 00003300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269000u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x269000 raw=0x0001331D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269004:
    // 0x269004: 0x65f0  tge         $zero, $zero, 407
    ctx->pc = 0x269004u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269008:
    // 0x269008: 0x0  nop
    ctx->pc = 0x269008u;
    // NOP
label_26900c:
    // 0x26900c: 0x0  nop
    ctx->pc = 0x26900cu;
    // NOP
label_269010:
    // 0x269010: 0x1332a  .word       0x0001332A                   # slt         $a2, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269010u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_269014:
    // 0x269014: 0xc560  .word       0x0000C560                   # add         $t8, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269014u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_269018:
    // 0x269018: 0x0  nop
    ctx->pc = 0x269018u;
    // NOP
label_26901c:
    // 0x26901c: 0x0  nop
    ctx->pc = 0x26901cu;
    // NOP
label_269020:
    // 0x269020: 0x13343  sra         $a2, $at, 13
    ctx->pc = 0x269020u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 1), 13));
label_269024:
    // 0x269024: 0x7dd0  .word       0x00007DD0                   # mfhi        $t7 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269024u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_269028:
    // 0x269028: 0x0  nop
    ctx->pc = 0x269028u;
    // NOP
label_26902c:
    // 0x26902c: 0x0  nop
    ctx->pc = 0x26902cu;
    // NOP
label_269030:
    // 0x269030: 0x13353  .word       0x00013353                   # mtlo        $zero # 00013340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269030u;
    ctx->lo = GPR_U64(ctx, 0);
label_269034:
    // 0x269034: 0x7650  .word       0x00007650                   # mfhi        $t6 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269034u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_269038:
    // 0x269038: 0x0  nop
    ctx->pc = 0x269038u;
    // NOP
label_26903c:
    // 0x26903c: 0x0  nop
    ctx->pc = 0x26903cu;
    // NOP
label_269040:
    // 0x269040: 0x13362  .word       0x00013362                   # neg         $a2, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269040u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_269044:
    // 0x269044: 0xf030  tge         $zero, $zero, 960
    ctx->pc = 0x269044u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269048:
    // 0x269048: 0x0  nop
    ctx->pc = 0x269048u;
    // NOP
label_26904c:
    // 0x26904c: 0x0  nop
    ctx->pc = 0x26904cu;
    // NOP
label_269050:
    // 0x269050: 0x13381  .word       0x00013381                   # INVALID     $zero, $at, 0x3381 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269050u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x269050 raw=0x00013381"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269054:
    // 0x269054: 0xc050  .word       0x0000C050                   # mfhi        $t8 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269054u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_269058:
    // 0x269058: 0x0  nop
    ctx->pc = 0x269058u;
    // NOP
label_26905c:
    // 0x26905c: 0x0  nop
    ctx->pc = 0x26905cu;
    // NOP
label_269060:
    // 0x269060: 0x1339a  .word       0x0001339A                   # div         $a2, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269060u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_269064:
    // 0x269064: 0x9e50  .word       0x00009E50                   # mfhi        $s3 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269064u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_269068:
    // 0x269068: 0x0  nop
    ctx->pc = 0x269068u;
    // NOP
label_26906c:
    // 0x26906c: 0x0  nop
    ctx->pc = 0x26906cu;
    // NOP
label_269070:
    // 0x269070: 0x133ae  .word       0x000133AE                   # dsub        $a2, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269070u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, r); }
label_269074:
    // 0x269074: 0x9ae0  .word       0x00009AE0                   # add         $s3, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269074u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_269078:
    // 0x269078: 0x0  nop
    ctx->pc = 0x269078u;
    // NOP
label_26907c:
    // 0x26907c: 0x0  nop
    ctx->pc = 0x26907cu;
    // NOP
label_269080:
    // 0x269080: 0x133c2  srl         $a2, $at, 15
    ctx->pc = 0x269080u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 1), 15));
label_269084:
    // 0x269084: 0xc4b0  tge         $zero, $zero, 786
    ctx->pc = 0x269084u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269088:
    // 0x269088: 0x0  nop
    ctx->pc = 0x269088u;
    // NOP
label_26908c:
    // 0x26908c: 0x0  nop
    ctx->pc = 0x26908cu;
    // NOP
label_269090:
    // 0x269090: 0x133db  .word       0x000133DB                   # divu        $a2, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269090u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_269094:
    // 0x269094: 0xfb90  .word       0x0000FB90                   # mfhi        $ra # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269094u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_269098:
    // 0x269098: 0x0  nop
    ctx->pc = 0x269098u;
    // NOP
label_26909c:
    // 0x26909c: 0x0  nop
    ctx->pc = 0x26909cu;
    // NOP
label_2690a0:
    // 0x2690a0: 0x133fb  dsra        $a2, $at, 15
    ctx->pc = 0x2690a0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 1) >> 15);
label_2690a4:
    // 0x2690a4: 0xe600  sll         $gp, $zero, 24
    ctx->pc = 0x2690a4u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_2690a8:
    // 0x2690a8: 0x0  nop
    ctx->pc = 0x2690a8u;
    // NOP
label_2690ac:
    // 0x2690ac: 0x0  nop
    ctx->pc = 0x2690acu;
    // NOP
label_2690b0:
    // 0x2690b0: 0x13418  .word       0x00013418                   # mult        $a2, $zero, $at # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2690b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_2690b4:
    // 0x2690b4: 0xac70  tge         $zero, $zero, 689
    ctx->pc = 0x2690b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2690b8:
    // 0x2690b8: 0x0  nop
    ctx->pc = 0x2690b8u;
    // NOP
label_2690bc:
    // 0x2690bc: 0x0  nop
    ctx->pc = 0x2690bcu;
    // NOP
label_2690c0:
    // 0x2690c0: 0x1342e  .word       0x0001342E                   # dsub        $a2, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2690c0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, r); }
label_2690c4:
    // 0x2690c4: 0x7470  tge         $zero, $zero, 465
    ctx->pc = 0x2690c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2690c8:
    // 0x2690c8: 0x0  nop
    ctx->pc = 0x2690c8u;
    // NOP
label_2690cc:
    // 0x2690cc: 0x0  nop
    ctx->pc = 0x2690ccu;
    // NOP
label_2690d0:
    // 0x2690d0: 0x1343d  .word       0x0001343D                   # INVALID     $zero, $at, 0x343D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2690d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2690D0 raw=0x0001343D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2690d4:
    // 0x2690d4: 0x5080  sll         $t2, $zero, 2
    ctx->pc = 0x2690d4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_2690d8:
    // 0x2690d8: 0x0  nop
    ctx->pc = 0x2690d8u;
    // NOP
label_2690dc:
    // 0x2690dc: 0x0  nop
    ctx->pc = 0x2690dcu;
    // NOP
label_2690e0:
    // 0x2690e0: 0x13448  .word       0x00013448                   # jr          $zero # 00013440 <InstrIdType: CPU_SPECIAL>
label_2690e4:
    if (ctx->pc == 0x2690E4u) {
        ctx->pc = 0x2690E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690E0u;
        // 0x2690e4: 0xa810  mfhi        $s5 (Delay Slot)
        SET_GPR_U64(ctx, 21, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2690E8u;
        goto label_2690e8;
    }
    ctx->pc = 0x2690E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2690E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690E0u;
        // 0x2690e4: 0xa810  mfhi        $s5 (Delay Slot)
        SET_GPR_U64(ctx, 21, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2690E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2690E8u;
label_2690e8:
    // 0x2690e8: 0x0  nop
    ctx->pc = 0x2690e8u;
    // NOP
label_2690ec:
    // 0x2690ec: 0x0  nop
    ctx->pc = 0x2690ecu;
    // NOP
label_2690f0:
    // 0x2690f0: 0x1345e  .word       0x0001345E                   # ddiv        $a2, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2690f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2690F0 raw=0x0001345E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2690f4:
    // 0x2690f4: 0x8770  tge         $zero, $zero, 541
    ctx->pc = 0x2690f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2690f8:
    // 0x2690f8: 0x0  nop
    ctx->pc = 0x2690f8u;
    // NOP
label_2690fc:
    // 0x2690fc: 0x0  nop
    ctx->pc = 0x2690fcu;
    // NOP
    ctx->pc = 0x269100u;
    return;
}

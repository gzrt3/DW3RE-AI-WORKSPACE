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

// Function: FUN_0019b6a8
// Address: 0x19b6a8 - 0x29b6b0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b6a8_part376(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x252858u: goto label_252858;
        case 0x25285cu: goto label_25285c;
        case 0x252860u: goto label_252860;
        case 0x252864u: goto label_252864;
        case 0x252868u: goto label_252868;
        case 0x25286cu: goto label_25286c;
        case 0x252870u: goto label_252870;
        case 0x252874u: goto label_252874;
        case 0x252878u: goto label_252878;
        case 0x25287cu: goto label_25287c;
        case 0x252880u: goto label_252880;
        case 0x252884u: goto label_252884;
        case 0x252888u: goto label_252888;
        case 0x25288cu: goto label_25288c;
        case 0x252890u: goto label_252890;
        case 0x252894u: goto label_252894;
        case 0x252898u: goto label_252898;
        case 0x25289cu: goto label_25289c;
        case 0x2528a0u: goto label_2528a0;
        case 0x2528a4u: goto label_2528a4;
        case 0x2528a8u: goto label_2528a8;
        case 0x2528acu: goto label_2528ac;
        case 0x2528b0u: goto label_2528b0;
        case 0x2528b4u: goto label_2528b4;
        case 0x2528b8u: goto label_2528b8;
        case 0x2528bcu: goto label_2528bc;
        case 0x2528c0u: goto label_2528c0;
        case 0x2528c4u: goto label_2528c4;
        case 0x2528c8u: goto label_2528c8;
        case 0x2528ccu: goto label_2528cc;
        case 0x2528d0u: goto label_2528d0;
        case 0x2528d4u: goto label_2528d4;
        case 0x2528d8u: goto label_2528d8;
        case 0x2528dcu: goto label_2528dc;
        case 0x2528e0u: goto label_2528e0;
        case 0x2528e4u: goto label_2528e4;
        case 0x2528e8u: goto label_2528e8;
        case 0x2528ecu: goto label_2528ec;
        case 0x2528f0u: goto label_2528f0;
        case 0x2528f4u: goto label_2528f4;
        case 0x2528f8u: goto label_2528f8;
        case 0x2528fcu: goto label_2528fc;
        case 0x252900u: goto label_252900;
        case 0x252904u: goto label_252904;
        case 0x252908u: goto label_252908;
        case 0x25290cu: goto label_25290c;
        case 0x252910u: goto label_252910;
        case 0x252914u: goto label_252914;
        case 0x252918u: goto label_252918;
        case 0x25291cu: goto label_25291c;
        case 0x252920u: goto label_252920;
        case 0x252924u: goto label_252924;
        case 0x252928u: goto label_252928;
        case 0x25292cu: goto label_25292c;
        case 0x252930u: goto label_252930;
        case 0x252934u: goto label_252934;
        case 0x252938u: goto label_252938;
        case 0x25293cu: goto label_25293c;
        case 0x252940u: goto label_252940;
        case 0x252944u: goto label_252944;
        case 0x252948u: goto label_252948;
        case 0x25294cu: goto label_25294c;
        case 0x252950u: goto label_252950;
        case 0x252954u: goto label_252954;
        case 0x252958u: goto label_252958;
        case 0x25295cu: goto label_25295c;
        case 0x252960u: goto label_252960;
        case 0x252964u: goto label_252964;
        case 0x252968u: goto label_252968;
        case 0x25296cu: goto label_25296c;
        case 0x252970u: goto label_252970;
        case 0x252974u: goto label_252974;
        case 0x252978u: goto label_252978;
        case 0x25297cu: goto label_25297c;
        case 0x252980u: goto label_252980;
        case 0x252984u: goto label_252984;
        case 0x252988u: goto label_252988;
        case 0x25298cu: goto label_25298c;
        case 0x252990u: goto label_252990;
        case 0x252994u: goto label_252994;
        case 0x252998u: goto label_252998;
        case 0x25299cu: goto label_25299c;
        case 0x2529a0u: goto label_2529a0;
        case 0x2529a4u: goto label_2529a4;
        case 0x2529a8u: goto label_2529a8;
        case 0x2529acu: goto label_2529ac;
        case 0x2529b0u: goto label_2529b0;
        case 0x2529b4u: goto label_2529b4;
        case 0x2529b8u: goto label_2529b8;
        case 0x2529bcu: goto label_2529bc;
        case 0x2529c0u: goto label_2529c0;
        case 0x2529c4u: goto label_2529c4;
        case 0x2529c8u: goto label_2529c8;
        case 0x2529ccu: goto label_2529cc;
        case 0x2529d0u: goto label_2529d0;
        case 0x2529d4u: goto label_2529d4;
        case 0x2529d8u: goto label_2529d8;
        case 0x2529dcu: goto label_2529dc;
        case 0x2529e0u: goto label_2529e0;
        case 0x2529e4u: goto label_2529e4;
        case 0x2529e8u: goto label_2529e8;
        case 0x2529ecu: goto label_2529ec;
        case 0x2529f0u: goto label_2529f0;
        case 0x2529f4u: goto label_2529f4;
        case 0x2529f8u: goto label_2529f8;
        case 0x2529fcu: goto label_2529fc;
        case 0x252a00u: goto label_252a00;
        case 0x252a04u: goto label_252a04;
        case 0x252a08u: goto label_252a08;
        case 0x252a0cu: goto label_252a0c;
        case 0x252a10u: goto label_252a10;
        case 0x252a14u: goto label_252a14;
        case 0x252a18u: goto label_252a18;
        case 0x252a1cu: goto label_252a1c;
        case 0x252a20u: goto label_252a20;
        case 0x252a24u: goto label_252a24;
        case 0x252a28u: goto label_252a28;
        case 0x252a2cu: goto label_252a2c;
        case 0x252a30u: goto label_252a30;
        case 0x252a34u: goto label_252a34;
        case 0x252a38u: goto label_252a38;
        case 0x252a3cu: goto label_252a3c;
        case 0x252a40u: goto label_252a40;
        case 0x252a44u: goto label_252a44;
        case 0x252a48u: goto label_252a48;
        case 0x252a4cu: goto label_252a4c;
        case 0x252a50u: goto label_252a50;
        case 0x252a54u: goto label_252a54;
        case 0x252a58u: goto label_252a58;
        case 0x252a5cu: goto label_252a5c;
        case 0x252a60u: goto label_252a60;
        case 0x252a64u: goto label_252a64;
        case 0x252a68u: goto label_252a68;
        case 0x252a6cu: goto label_252a6c;
        case 0x252a70u: goto label_252a70;
        case 0x252a74u: goto label_252a74;
        case 0x252a78u: goto label_252a78;
        case 0x252a7cu: goto label_252a7c;
        case 0x252a80u: goto label_252a80;
        case 0x252a84u: goto label_252a84;
        case 0x252a88u: goto label_252a88;
        case 0x252a8cu: goto label_252a8c;
        case 0x252a90u: goto label_252a90;
        case 0x252a94u: goto label_252a94;
        case 0x252a98u: goto label_252a98;
        case 0x252a9cu: goto label_252a9c;
        case 0x252aa0u: goto label_252aa0;
        case 0x252aa4u: goto label_252aa4;
        case 0x252aa8u: goto label_252aa8;
        case 0x252aacu: goto label_252aac;
        case 0x252ab0u: goto label_252ab0;
        case 0x252ab4u: goto label_252ab4;
        case 0x252ab8u: goto label_252ab8;
        case 0x252abcu: goto label_252abc;
        case 0x252ac0u: goto label_252ac0;
        case 0x252ac4u: goto label_252ac4;
        case 0x252ac8u: goto label_252ac8;
        case 0x252accu: goto label_252acc;
        case 0x252ad0u: goto label_252ad0;
        case 0x252ad4u: goto label_252ad4;
        case 0x252ad8u: goto label_252ad8;
        case 0x252adcu: goto label_252adc;
        case 0x252ae0u: goto label_252ae0;
        case 0x252ae4u: goto label_252ae4;
        case 0x252ae8u: goto label_252ae8;
        case 0x252aecu: goto label_252aec;
        case 0x252af0u: goto label_252af0;
        case 0x252af4u: goto label_252af4;
        case 0x252af8u: goto label_252af8;
        case 0x252afcu: goto label_252afc;
        case 0x252b00u: goto label_252b00;
        case 0x252b04u: goto label_252b04;
        case 0x252b08u: goto label_252b08;
        case 0x252b0cu: goto label_252b0c;
        case 0x252b10u: goto label_252b10;
        case 0x252b14u: goto label_252b14;
        case 0x252b18u: goto label_252b18;
        case 0x252b1cu: goto label_252b1c;
        case 0x252b20u: goto label_252b20;
        case 0x252b24u: goto label_252b24;
        case 0x252b28u: goto label_252b28;
        case 0x252b2cu: goto label_252b2c;
        case 0x252b30u: goto label_252b30;
        case 0x252b34u: goto label_252b34;
        case 0x252b38u: goto label_252b38;
        case 0x252b3cu: goto label_252b3c;
        case 0x252b40u: goto label_252b40;
        case 0x252b44u: goto label_252b44;
        case 0x252b48u: goto label_252b48;
        case 0x252b4cu: goto label_252b4c;
        case 0x252b50u: goto label_252b50;
        case 0x252b54u: goto label_252b54;
        case 0x252b58u: goto label_252b58;
        case 0x252b5cu: goto label_252b5c;
        case 0x252b60u: goto label_252b60;
        case 0x252b64u: goto label_252b64;
        case 0x252b68u: goto label_252b68;
        case 0x252b6cu: goto label_252b6c;
        case 0x252b70u: goto label_252b70;
        case 0x252b74u: goto label_252b74;
        case 0x252b78u: goto label_252b78;
        case 0x252b7cu: goto label_252b7c;
        case 0x252b80u: goto label_252b80;
        case 0x252b84u: goto label_252b84;
        case 0x252b88u: goto label_252b88;
        case 0x252b8cu: goto label_252b8c;
        case 0x252b90u: goto label_252b90;
        case 0x252b94u: goto label_252b94;
        case 0x252b98u: goto label_252b98;
        case 0x252b9cu: goto label_252b9c;
        case 0x252ba0u: goto label_252ba0;
        case 0x252ba4u: goto label_252ba4;
        case 0x252ba8u: goto label_252ba8;
        case 0x252bacu: goto label_252bac;
        case 0x252bb0u: goto label_252bb0;
        case 0x252bb4u: goto label_252bb4;
        case 0x252bb8u: goto label_252bb8;
        case 0x252bbcu: goto label_252bbc;
        case 0x252bc0u: goto label_252bc0;
        case 0x252bc4u: goto label_252bc4;
        case 0x252bc8u: goto label_252bc8;
        case 0x252bccu: goto label_252bcc;
        case 0x252bd0u: goto label_252bd0;
        case 0x252bd4u: goto label_252bd4;
        case 0x252bd8u: goto label_252bd8;
        case 0x252bdcu: goto label_252bdc;
        case 0x252be0u: goto label_252be0;
        case 0x252be4u: goto label_252be4;
        case 0x252be8u: goto label_252be8;
        case 0x252becu: goto label_252bec;
        case 0x252bf0u: goto label_252bf0;
        case 0x252bf4u: goto label_252bf4;
        case 0x252bf8u: goto label_252bf8;
        case 0x252bfcu: goto label_252bfc;
        case 0x252c00u: goto label_252c00;
        case 0x252c04u: goto label_252c04;
        case 0x252c08u: goto label_252c08;
        case 0x252c0cu: goto label_252c0c;
        case 0x252c10u: goto label_252c10;
        case 0x252c14u: goto label_252c14;
        case 0x252c18u: goto label_252c18;
        case 0x252c1cu: goto label_252c1c;
        case 0x252c20u: goto label_252c20;
        case 0x252c24u: goto label_252c24;
        case 0x252c28u: goto label_252c28;
        case 0x252c2cu: goto label_252c2c;
        case 0x252c30u: goto label_252c30;
        case 0x252c34u: goto label_252c34;
        case 0x252c38u: goto label_252c38;
        case 0x252c3cu: goto label_252c3c;
        case 0x252c40u: goto label_252c40;
        case 0x252c44u: goto label_252c44;
        case 0x252c48u: goto label_252c48;
        case 0x252c4cu: goto label_252c4c;
        case 0x252c50u: goto label_252c50;
        case 0x252c54u: goto label_252c54;
        case 0x252c58u: goto label_252c58;
        case 0x252c5cu: goto label_252c5c;
        case 0x252c60u: goto label_252c60;
        case 0x252c64u: goto label_252c64;
        case 0x252c68u: goto label_252c68;
        case 0x252c6cu: goto label_252c6c;
        case 0x252c70u: goto label_252c70;
        case 0x252c74u: goto label_252c74;
        case 0x252c78u: goto label_252c78;
        case 0x252c7cu: goto label_252c7c;
        case 0x252c80u: goto label_252c80;
        case 0x252c84u: goto label_252c84;
        case 0x252c88u: goto label_252c88;
        case 0x252c8cu: goto label_252c8c;
        case 0x252c90u: goto label_252c90;
        case 0x252c94u: goto label_252c94;
        case 0x252c98u: goto label_252c98;
        case 0x252c9cu: goto label_252c9c;
        case 0x252ca0u: goto label_252ca0;
        case 0x252ca4u: goto label_252ca4;
        case 0x252ca8u: goto label_252ca8;
        case 0x252cacu: goto label_252cac;
        case 0x252cb0u: goto label_252cb0;
        case 0x252cb4u: goto label_252cb4;
        case 0x252cb8u: goto label_252cb8;
        case 0x252cbcu: goto label_252cbc;
        case 0x252cc0u: goto label_252cc0;
        case 0x252cc4u: goto label_252cc4;
        case 0x252cc8u: goto label_252cc8;
        case 0x252cccu: goto label_252ccc;
        case 0x252cd0u: goto label_252cd0;
        case 0x252cd4u: goto label_252cd4;
        case 0x252cd8u: goto label_252cd8;
        case 0x252cdcu: goto label_252cdc;
        case 0x252ce0u: goto label_252ce0;
        case 0x252ce4u: goto label_252ce4;
        case 0x252ce8u: goto label_252ce8;
        case 0x252cecu: goto label_252cec;
        case 0x252cf0u: goto label_252cf0;
        case 0x252cf4u: goto label_252cf4;
        case 0x252cf8u: goto label_252cf8;
        case 0x252cfcu: goto label_252cfc;
        case 0x252d00u: goto label_252d00;
        case 0x252d04u: goto label_252d04;
        case 0x252d08u: goto label_252d08;
        case 0x252d0cu: goto label_252d0c;
        case 0x252d10u: goto label_252d10;
        case 0x252d14u: goto label_252d14;
        case 0x252d18u: goto label_252d18;
        case 0x252d1cu: goto label_252d1c;
        case 0x252d20u: goto label_252d20;
        case 0x252d24u: goto label_252d24;
        case 0x252d28u: goto label_252d28;
        case 0x252d2cu: goto label_252d2c;
        case 0x252d30u: goto label_252d30;
        case 0x252d34u: goto label_252d34;
        case 0x252d38u: goto label_252d38;
        case 0x252d3cu: goto label_252d3c;
        case 0x252d40u: goto label_252d40;
        case 0x252d44u: goto label_252d44;
        case 0x252d48u: goto label_252d48;
        case 0x252d4cu: goto label_252d4c;
        case 0x252d50u: goto label_252d50;
        case 0x252d54u: goto label_252d54;
        case 0x252d58u: goto label_252d58;
        case 0x252d5cu: goto label_252d5c;
        case 0x252d60u: goto label_252d60;
        case 0x252d64u: goto label_252d64;
        case 0x252d68u: goto label_252d68;
        case 0x252d6cu: goto label_252d6c;
        case 0x252d70u: goto label_252d70;
        case 0x252d74u: goto label_252d74;
        case 0x252d78u: goto label_252d78;
        case 0x252d7cu: goto label_252d7c;
        case 0x252d80u: goto label_252d80;
        case 0x252d84u: goto label_252d84;
        case 0x252d88u: goto label_252d88;
        case 0x252d8cu: goto label_252d8c;
        case 0x252d90u: goto label_252d90;
        case 0x252d94u: goto label_252d94;
        case 0x252d98u: goto label_252d98;
        case 0x252d9cu: goto label_252d9c;
        case 0x252da0u: goto label_252da0;
        case 0x252da4u: goto label_252da4;
        case 0x252da8u: goto label_252da8;
        case 0x252dacu: goto label_252dac;
        case 0x252db0u: goto label_252db0;
        case 0x252db4u: goto label_252db4;
        case 0x252db8u: goto label_252db8;
        case 0x252dbcu: goto label_252dbc;
        case 0x252dc0u: goto label_252dc0;
        case 0x252dc4u: goto label_252dc4;
        case 0x252dc8u: goto label_252dc8;
        case 0x252dccu: goto label_252dcc;
        case 0x252dd0u: goto label_252dd0;
        case 0x252dd4u: goto label_252dd4;
        case 0x252dd8u: goto label_252dd8;
        case 0x252ddcu: goto label_252ddc;
        case 0x252de0u: goto label_252de0;
        case 0x252de4u: goto label_252de4;
        case 0x252de8u: goto label_252de8;
        case 0x252decu: goto label_252dec;
        case 0x252df0u: goto label_252df0;
        case 0x252df4u: goto label_252df4;
        case 0x252df8u: goto label_252df8;
        case 0x252dfcu: goto label_252dfc;
        case 0x252e00u: goto label_252e00;
        case 0x252e04u: goto label_252e04;
        case 0x252e08u: goto label_252e08;
        case 0x252e0cu: goto label_252e0c;
        case 0x252e10u: goto label_252e10;
        case 0x252e14u: goto label_252e14;
        case 0x252e18u: goto label_252e18;
        case 0x252e1cu: goto label_252e1c;
        case 0x252e20u: goto label_252e20;
        case 0x252e24u: goto label_252e24;
        case 0x252e28u: goto label_252e28;
        case 0x252e2cu: goto label_252e2c;
        case 0x252e30u: goto label_252e30;
        case 0x252e34u: goto label_252e34;
        case 0x252e38u: goto label_252e38;
        case 0x252e3cu: goto label_252e3c;
        case 0x252e40u: goto label_252e40;
        case 0x252e44u: goto label_252e44;
        case 0x252e48u: goto label_252e48;
        case 0x252e4cu: goto label_252e4c;
        case 0x252e50u: goto label_252e50;
        case 0x252e54u: goto label_252e54;
        case 0x252e58u: goto label_252e58;
        case 0x252e5cu: goto label_252e5c;
        case 0x252e60u: goto label_252e60;
        case 0x252e64u: goto label_252e64;
        case 0x252e68u: goto label_252e68;
        case 0x252e6cu: goto label_252e6c;
        case 0x252e70u: goto label_252e70;
        case 0x252e74u: goto label_252e74;
        case 0x252e78u: goto label_252e78;
        case 0x252e7cu: goto label_252e7c;
        case 0x252e80u: goto label_252e80;
        case 0x252e84u: goto label_252e84;
        case 0x252e88u: goto label_252e88;
        case 0x252e8cu: goto label_252e8c;
        case 0x252e90u: goto label_252e90;
        case 0x252e94u: goto label_252e94;
        case 0x252e98u: goto label_252e98;
        case 0x252e9cu: goto label_252e9c;
        case 0x252ea0u: goto label_252ea0;
        case 0x252ea4u: goto label_252ea4;
        case 0x252ea8u: goto label_252ea8;
        case 0x252eacu: goto label_252eac;
        case 0x252eb0u: goto label_252eb0;
        case 0x252eb4u: goto label_252eb4;
        case 0x252eb8u: goto label_252eb8;
        case 0x252ebcu: goto label_252ebc;
        case 0x252ec0u: goto label_252ec0;
        case 0x252ec4u: goto label_252ec4;
        case 0x252ec8u: goto label_252ec8;
        case 0x252eccu: goto label_252ecc;
        case 0x252ed0u: goto label_252ed0;
        case 0x252ed4u: goto label_252ed4;
        case 0x252ed8u: goto label_252ed8;
        case 0x252edcu: goto label_252edc;
        case 0x252ee0u: goto label_252ee0;
        case 0x252ee4u: goto label_252ee4;
        case 0x252ee8u: goto label_252ee8;
        case 0x252eecu: goto label_252eec;
        case 0x252ef0u: goto label_252ef0;
        case 0x252ef4u: goto label_252ef4;
        case 0x252ef8u: goto label_252ef8;
        case 0x252efcu: goto label_252efc;
        case 0x252f00u: goto label_252f00;
        case 0x252f04u: goto label_252f04;
        case 0x252f08u: goto label_252f08;
        case 0x252f0cu: goto label_252f0c;
        case 0x252f10u: goto label_252f10;
        case 0x252f14u: goto label_252f14;
        case 0x252f18u: goto label_252f18;
        case 0x252f1cu: goto label_252f1c;
        case 0x252f20u: goto label_252f20;
        case 0x252f24u: goto label_252f24;
        case 0x252f28u: goto label_252f28;
        case 0x252f2cu: goto label_252f2c;
        case 0x252f30u: goto label_252f30;
        case 0x252f34u: goto label_252f34;
        case 0x252f38u: goto label_252f38;
        case 0x252f3cu: goto label_252f3c;
        case 0x252f40u: goto label_252f40;
        case 0x252f44u: goto label_252f44;
        case 0x252f48u: goto label_252f48;
        case 0x252f4cu: goto label_252f4c;
        case 0x252f50u: goto label_252f50;
        case 0x252f54u: goto label_252f54;
        case 0x252f58u: goto label_252f58;
        case 0x252f5cu: goto label_252f5c;
        case 0x252f60u: goto label_252f60;
        case 0x252f64u: goto label_252f64;
        case 0x252f68u: goto label_252f68;
        case 0x252f6cu: goto label_252f6c;
        case 0x252f70u: goto label_252f70;
        case 0x252f74u: goto label_252f74;
        case 0x252f78u: goto label_252f78;
        case 0x252f7cu: goto label_252f7c;
        case 0x252f80u: goto label_252f80;
        case 0x252f84u: goto label_252f84;
        case 0x252f88u: goto label_252f88;
        case 0x252f8cu: goto label_252f8c;
        case 0x252f90u: goto label_252f90;
        case 0x252f94u: goto label_252f94;
        case 0x252f98u: goto label_252f98;
        case 0x252f9cu: goto label_252f9c;
        case 0x252fa0u: goto label_252fa0;
        case 0x252fa4u: goto label_252fa4;
        case 0x252fa8u: goto label_252fa8;
        case 0x252facu: goto label_252fac;
        case 0x252fb0u: goto label_252fb0;
        case 0x252fb4u: goto label_252fb4;
        case 0x252fb8u: goto label_252fb8;
        case 0x252fbcu: goto label_252fbc;
        case 0x252fc0u: goto label_252fc0;
        case 0x252fc4u: goto label_252fc4;
        case 0x252fc8u: goto label_252fc8;
        case 0x252fccu: goto label_252fcc;
        case 0x252fd0u: goto label_252fd0;
        case 0x252fd4u: goto label_252fd4;
        case 0x252fd8u: goto label_252fd8;
        case 0x252fdcu: goto label_252fdc;
        case 0x252fe0u: goto label_252fe0;
        case 0x252fe4u: goto label_252fe4;
        case 0x252fe8u: goto label_252fe8;
        case 0x252fecu: goto label_252fec;
        case 0x252ff0u: goto label_252ff0;
        case 0x252ff4u: goto label_252ff4;
        case 0x252ff8u: goto label_252ff8;
        case 0x252ffcu: goto label_252ffc;
        case 0x253000u: goto label_253000;
        case 0x253004u: goto label_253004;
        case 0x253008u: goto label_253008;
        case 0x25300cu: goto label_25300c;
        case 0x253010u: goto label_253010;
        case 0x253014u: goto label_253014;
        case 0x253018u: goto label_253018;
        case 0x25301cu: goto label_25301c;
        case 0x253020u: goto label_253020;
        case 0x253024u: goto label_253024;
        default: return;
    }

label_252858:
    // 0x252858: 0x2c5ca0  .word       0x002C5CA0                   # add         $t3, $at, $t4 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252858u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25285c:
    // 0x25285c: 0x2c5cc0  .word       0x002C5CC0                   # sll         $t3, $t4, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25285cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 19));
label_252860:
    // 0x252860: 0x2c5ce0  .word       0x002C5CE0                   # add         $t3, $at, $t4 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252860u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_252864:
    // 0x252864: 0x2c5d00  .word       0x002C5D00                   # sll         $t3, $t4, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252864u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 20));
label_252868:
    // 0x252868: 0x2c5d20  .word       0x002C5D20                   # add         $t3, $at, $t4 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252868u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25286c:
    // 0x25286c: 0x0  nop
    ctx->pc = 0x25286cu;
    // NOP
label_252870:
    // 0x252870: 0x2c5e60  .word       0x002C5E60                   # add         $t3, $at, $t4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252870u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_252874:
    // 0x252874: 0x2c5a80  .word       0x002C5A80                   # sll         $t3, $t4, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252874u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 10));
label_252878:
    // 0x252878: 0x2c5aa0  .word       0x002C5AA0                   # add         $t3, $at, $t4 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252878u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25287c:
    // 0x25287c: 0x2c5ac0  .word       0x002C5AC0                   # sll         $t3, $t4, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25287cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 11));
label_252880:
    // 0x252880: 0x2c5ae0  .word       0x002C5AE0                   # add         $t3, $at, $t4 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252880u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_252884:
    // 0x252884: 0x2c5b00  .word       0x002C5B00                   # sll         $t3, $t4, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252884u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 12));
label_252888:
    // 0x252888: 0x2c5e80  .word       0x002C5E80                   # sll         $t3, $t4, 26 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252888u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 26));
label_25288c:
    // 0x25288c: 0x2c5b40  .word       0x002C5B40                   # sll         $t3, $t4, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25288cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 13));
label_252890:
    // 0x252890: 0x2c5b60  .word       0x002C5B60                   # add         $t3, $at, $t4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252890u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_252894:
    // 0x252894: 0x2c5b80  .word       0x002C5B80                   # sll         $t3, $t4, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252894u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 14));
label_252898:
    // 0x252898: 0x2c5ba0  .word       0x002C5BA0                   # add         $t3, $at, $t4 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252898u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25289c:
    // 0x25289c: 0x2c5bc0  .word       0x002C5BC0                   # sll         $t3, $t4, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25289cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 15));
label_2528a0:
    // 0x2528a0: 0x2c5be0  .word       0x002C5BE0                   # add         $t3, $at, $t4 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528a0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2528a4:
    // 0x2528a4: 0x2c5c00  .word       0x002C5C00                   # sll         $t3, $t4, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528a4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_2528a8:
    // 0x2528a8: 0x2c5c20  .word       0x002C5C20                   # add         $t3, $at, $t4 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528a8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2528ac:
    // 0x2528ac: 0x2c5c40  .word       0x002C5C40                   # sll         $t3, $t4, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528acu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 17));
label_2528b0:
    // 0x2528b0: 0x2c5c60  .word       0x002C5C60                   # add         $t3, $at, $t4 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528b0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2528b4:
    // 0x2528b4: 0x2c5ea0  .word       0x002C5EA0                   # add         $t3, $at, $t4 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528b4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2528b8:
    // 0x2528b8: 0x2c5ca0  .word       0x002C5CA0                   # add         $t3, $at, $t4 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528b8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2528bc:
    // 0x2528bc: 0x2c5cc0  .word       0x002C5CC0                   # sll         $t3, $t4, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528bcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 19));
label_2528c0:
    // 0x2528c0: 0x2c5ce0  .word       0x002C5CE0                   # add         $t3, $at, $t4 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528c0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2528c4:
    // 0x2528c4: 0x2c5d00  .word       0x002C5D00                   # sll         $t3, $t4, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528c4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 20));
label_2528c8:
    // 0x2528c8: 0x2c5ec0  .word       0x002C5EC0                   # sll         $t3, $t4, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528c8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 27));
label_2528cc:
    // 0x2528cc: 0x0  nop
    ctx->pc = 0x2528ccu;
    // NOP
label_2528d0:
    // 0x2528d0: 0x2c5ee0  .word       0x002C5EE0                   # add         $t3, $at, $t4 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528d0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2528d4:
    // 0x2528d4: 0x2c5d50  .word       0x002C5D50                   # mfhi        $t3 # 002C0540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528d4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2528d8:
    // 0x2528d8: 0x2c5d60  .word       0x002C5D60                   # add         $t3, $at, $t4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528d8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2528dc:
    // 0x2528dc: 0x2c5d70  tge         $at, $t4, 373
    ctx->pc = 0x2528dcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_2528e0:
    // 0x2528e0: 0x2c5d80  .word       0x002C5D80                   # sll         $t3, $t4, 22 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528e0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 22));
label_2528e4:
    // 0x2528e4: 0x2c5d90  .word       0x002C5D90                   # mfhi        $t3 # 002C0580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528e4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2528e8:
    // 0x2528e8: 0x2c5e80  .word       0x002C5E80                   # sll         $t3, $t4, 26 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528e8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 26));
label_2528ec:
    // 0x2528ec: 0x2c5d98  .word       0x002C5D98                   # mult        $t3, $at, $t4 # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2528ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_2528f0:
    // 0x2528f0: 0x2c5da8  .word       0x002C5DA8                   # mfsa        $t3 # 002C0580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2528f0u;
    SET_GPR_U32(ctx, 11, ctx->sa);
label_2528f4:
    // 0x2528f4: 0x2c5db0  tge         $at, $t4, 374
    ctx->pc = 0x2528f4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_2528f8:
    // 0x2528f8: 0x2c5dc0  .word       0x002C5DC0                   # sll         $t3, $t4, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528f8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 23));
label_2528fc:
    // 0x2528fc: 0x2c5dd0  .word       0x002C5DD0                   # mfhi        $t3 # 002C05C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528fcu;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_252900:
    // 0x252900: 0x2c5dd8  .word       0x002C5DD8                   # mult        $t3, $at, $t4 # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252900u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_252904:
    // 0x252904: 0x2c5de8  .word       0x002C5DE8                   # mfsa        $t3 # 002C05C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252904u;
    SET_GPR_U32(ctx, 11, ctx->sa);
label_252908:
    // 0x252908: 0x2c5df8  .word       0x002C5DF8                   # dsll        $t3, $t4, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252908u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) << 23);
label_25290c:
    // 0x25290c: 0x2c5e00  .word       0x002C5E00                   # sll         $t3, $t4, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25290cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
label_252910:
    // 0x252910: 0x2c5e08  .word       0x002C5E08                   # jr          $at # 000C5E00 <InstrIdType: CPU_SPECIAL>
label_252914:
    if (ctx->pc == 0x252914u) {
        ctx->pc = 0x252914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252910u;
        // 0x252914: 0x2c5ef8  .word       0x002C5EF8                   # dsll        $t3, $t4, 27 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) << 27);
        ctx->in_delay_slot = false;
        ctx->pc = 0x252918u;
        goto label_252918;
    }
    ctx->pc = 0x252910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252910u;
        // 0x252914: 0x2c5ef8  .word       0x002C5EF8                   # dsll        $t3, $t4, 27 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) << 27);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252910u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252918u;
label_252918:
    // 0x252918: 0x2c5e18  .word       0x002C5E18                   # mult        $t3, $at, $t4 # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252918u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_25291c:
    // 0x25291c: 0x2c5e30  tge         $at, $t4, 376
    ctx->pc = 0x25291cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252920:
    // 0x252920: 0x2c5e40  .word       0x002C5E40                   # sll         $t3, $t4, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252920u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 25));
label_252924:
    // 0x252924: 0x2c5e50  .word       0x002C5E50                   # mfhi        $t3 # 002C0640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252924u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_252928:
    // 0x252928: 0x2c5f10  .word       0x002C5F10                   # mfhi        $t3 # 002C0700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252928u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_25292c:
    // 0x25292c: 0x0  nop
    ctx->pc = 0x25292cu;
    // NOP
label_252930:
    // 0x252930: 0x2c5f28  .word       0x002C5F28                   # mfsa        $t3 # 002C0700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252930u;
    SET_GPR_U32(ctx, 11, ctx->sa);
label_252934:
    // 0x252934: 0x2c5f38  .word       0x002C5F38                   # dsll        $t3, $t4, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252934u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) << 28);
label_252938:
    // 0x252938: 0x2c5f40  .word       0x002C5F40                   # sll         $t3, $t4, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252938u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 29));
label_25293c:
    // 0x25293c: 0x2c5f50  .word       0x002C5F50                   # mfhi        $t3 # 002C0740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25293cu;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_252940:
    // 0x252940: 0x2c5f60  .word       0x002C5F60                   # add         $t3, $at, $t4 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252940u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_252944:
    // 0x252944: 0x2c5f70  tge         $at, $t4, 381
    ctx->pc = 0x252944u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252948:
    // 0x252948: 0x2c5f78  .word       0x002C5F78                   # dsll        $t3, $t4, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252948u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) << 29);
label_25294c:
    // 0x25294c: 0x2c5f80  .word       0x002C5F80                   # sll         $t3, $t4, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25294cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 30));
label_252950:
    // 0x252950: 0x2c5f88  .word       0x002C5F88                   # jr          $at # 000C5F80 <InstrIdType: CPU_SPECIAL>
label_252954:
    if (ctx->pc == 0x252954u) {
        ctx->pc = 0x252954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252950u;
        // 0x252954: 0x2c5f98  .word       0x002C5F98                   # mult        $t3, $at, $t4 # 00000780 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252958u;
        goto label_252958;
    }
    ctx->pc = 0x252950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252950u;
        // 0x252954: 0x2c5f98  .word       0x002C5F98                   # mult        $t3, $at, $t4 # 00000780 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252950u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252958u;
label_252958:
    // 0x252958: 0x2c5fa8  .word       0x002C5FA8                   # mfsa        $t3 # 002C0780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252958u;
    SET_GPR_U32(ctx, 11, ctx->sa);
label_25295c:
    // 0x25295c: 0x2c5fb8  .word       0x002C5FB8                   # dsll        $t3, $t4, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25295cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) << 30);
label_252960:
    // 0x252960: 0x2c5fc0  .word       0x002C5FC0                   # sll         $t3, $t4, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252960u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 31));
label_252964:
    // 0x252964: 0x2c5fd0  .word       0x002C5FD0                   # mfhi        $t3 # 002C07C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252964u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_252968:
    // 0x252968: 0x2c5fe0  .word       0x002C5FE0                   # add         $t3, $at, $t4 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252968u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25296c:
    // 0x25296c: 0x2c5fe8  .word       0x002C5FE8                   # mfsa        $t3 # 002C07C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25296cu;
    SET_GPR_U32(ctx, 11, ctx->sa);
label_252970:
    // 0x252970: 0x2c5ff8  .word       0x002C5FF8                   # dsll        $t3, $t4, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252970u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) << 31);
label_252974:
    // 0x252974: 0x2c6008  .word       0x002C6008                   # jr          $at # 000C6000 <InstrIdType: CPU_SPECIAL>
label_252978:
    if (ctx->pc == 0x252978u) {
        ctx->pc = 0x252978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252974u;
        // 0x252978: 0x2c6018  mult        $t4, $at, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25297Cu;
        goto label_25297c;
    }
    ctx->pc = 0x252974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252974u;
        // 0x252978: 0x2c6018  mult        $t4, $at, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252974u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25297Cu;
label_25297c:
    // 0x25297c: 0x2c6028  .word       0x002C6028                   # mfsa        $t4 # 002C0000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25297cu;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_252980:
    // 0x252980: 0x2c6030  tge         $at, $t4, 384
    ctx->pc = 0x252980u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252984:
    // 0x252984: 0x2c6040  .word       0x002C6040                   # sll         $t4, $t4, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252984u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
label_252988:
    // 0x252988: 0x2c6050  .word       0x002C6050                   # mfhi        $t4 # 002C0040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252988u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25298c:
    // 0x25298c: 0x2c6060  .word       0x002C6060                   # add         $t4, $at, $t4 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25298cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252990:
    // 0x252990: 0x2c6068  .word       0x002C6068                   # mfsa        $t4 # 002C0040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252990u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_252994:
    // 0x252994: 0x2c6070  tge         $at, $t4, 385
    ctx->pc = 0x252994u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252998:
    // 0x252998: 0x2c6080  .word       0x002C6080                   # sll         $t4, $t4, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252998u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_25299c:
    // 0x25299c: 0x2c6090  .word       0x002C6090                   # mfhi        $t4 # 002C0080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25299cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_2529a0:
    // 0x2529a0: 0x2c60a0  .word       0x002C60A0                   # add         $t4, $at, $t4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2529a0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2529a4:
    // 0x2529a4: 0x2c60b0  tge         $at, $t4, 386
    ctx->pc = 0x2529a4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_2529a8:
    // 0x2529a8: 0x2c60c0  .word       0x002C60C0                   # sll         $t4, $t4, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2529a8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_2529ac:
    // 0x2529ac: 0x2c60c8  .word       0x002C60C8                   # jr          $at # 000C60C0 <InstrIdType: CPU_SPECIAL>
label_2529b0:
    if (ctx->pc == 0x2529B0u) {
        ctx->pc = 0x2529B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529ACu;
        // 0x2529b0: 0x2c60d8  .word       0x002C60D8                   # mult        $t4, $at, $t4 # 000000C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2529B4u;
        goto label_2529b4;
    }
    ctx->pc = 0x2529ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x2529B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529ACu;
        // 0x2529b0: 0x2c60d8  .word       0x002C60D8                   # mult        $t4, $at, $t4 # 000000C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2529ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2529B4u;
label_2529b4:
    // 0x2529b4: 0x2c60e0  .word       0x002C60E0                   # add         $t4, $at, $t4 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2529b4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2529b8:
    // 0x2529b8: 0x2c60e8  .word       0x002C60E8                   # mfsa        $t4 # 002C00C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2529b8u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_2529bc:
    // 0x2529bc: 0x2c60f8  .word       0x002C60F8                   # dsll        $t4, $t4, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2529bcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 3);
label_2529c0:
    // 0x2529c0: 0x2c6108  .word       0x002C6108                   # jr          $at # 000C6100 <InstrIdType: CPU_SPECIAL>
label_2529c4:
    if (ctx->pc == 0x2529C4u) {
        ctx->pc = 0x2529C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529C0u;
        // 0x2529c4: 0x2c6118  .word       0x002C6118                   # mult        $t4, $at, $t4 # 00000100 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2529C8u;
        goto label_2529c8;
    }
    ctx->pc = 0x2529C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x2529C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529C0u;
        // 0x2529c4: 0x2c6118  .word       0x002C6118                   # mult        $t4, $at, $t4 # 00000100 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2529C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2529C8u;
label_2529c8:
    // 0x2529c8: 0x2c6120  .word       0x002C6120                   # add         $t4, $at, $t4 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2529c8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2529cc:
    // 0x2529cc: 0x2c6130  tge         $at, $t4, 388
    ctx->pc = 0x2529ccu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_2529d0:
    // 0x2529d0: 0x2c6138  .word       0x002C6138                   # dsll        $t4, $t4, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2529d0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 4);
label_2529d4:
    // 0x2529d4: 0x2c6140  .word       0x002C6140                   # sll         $t4, $t4, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2529d4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
label_2529d8:
    // 0x2529d8: 0x2c6150  .word       0x002C6150                   # mfhi        $t4 # 002C0140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2529d8u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_2529dc:
    // 0x2529dc: 0x2c6160  .word       0x002C6160                   # add         $t4, $at, $t4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2529dcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2529e0:
    // 0x2529e0: 0x2c6170  tge         $at, $t4, 389
    ctx->pc = 0x2529e0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_2529e4:
    // 0x2529e4: 0x2c6180  .word       0x002C6180                   # sll         $t4, $t4, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2529e4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 6));
label_2529e8:
    // 0x2529e8: 0x2c6188  .word       0x002C6188                   # jr          $at # 000C6180 <InstrIdType: CPU_SPECIAL>
label_2529ec:
    if (ctx->pc == 0x2529ECu) {
        ctx->pc = 0x2529ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529E8u;
        // 0x2529ec: 0x2c6190  .word       0x002C6190                   # mfhi        $t4 # 002C0180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2529F0u;
        goto label_2529f0;
    }
    ctx->pc = 0x2529E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x2529ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529E8u;
        // 0x2529ec: 0x2c6190  .word       0x002C6190                   # mfhi        $t4 # 002C0180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2529E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2529F0u;
label_2529f0:
    // 0x2529f0: 0x2c6198  .word       0x002C6198                   # mult        $t4, $at, $t4 # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2529f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2529f4:
    // 0x2529f4: 0x2c61a8  .word       0x002C61A8                   # mfsa        $t4 # 002C0180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2529f4u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_2529f8:
    // 0x2529f8: 0x2c61b8  .word       0x002C61B8                   # dsll        $t4, $t4, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2529f8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 6);
label_2529fc:
    // 0x2529fc: 0x2c61c8  .word       0x002C61C8                   # jr          $at # 000C61C0 <InstrIdType: CPU_SPECIAL>
label_252a00:
    if (ctx->pc == 0x252A00u) {
        ctx->pc = 0x252A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529FCu;
        // 0x252a00: 0x2c61e0  .word       0x002C61E0                   # add         $t4, $at, $t4 # 000001C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252A04u;
        goto label_252a04;
    }
    ctx->pc = 0x2529FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529FCu;
        // 0x252a00: 0x2c61e0  .word       0x002C61E0                   # add         $t4, $at, $t4 # 000001C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2529FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252A04u;
label_252a04:
    // 0x252a04: 0x2c61f0  tge         $at, $t4, 391
    ctx->pc = 0x252a04u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252a08:
    // 0x252a08: 0x2c6200  .word       0x002C6200                   # sll         $t4, $t4, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a08u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 8));
label_252a0c:
    // 0x252a0c: 0x2c6210  .word       0x002C6210                   # mfhi        $t4 # 002C0200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a0cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_252a10:
    // 0x252a10: 0x2c6220  .word       0x002C6220                   # add         $t4, $at, $t4 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a10u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252a14:
    // 0x252a14: 0x2c6230  tge         $at, $t4, 392
    ctx->pc = 0x252a14u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252a18:
    // 0x252a18: 0x2c6240  .word       0x002C6240                   # sll         $t4, $t4, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a18u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 9));
label_252a1c:
    // 0x252a1c: 0x2c6250  .word       0x002C6250                   # mfhi        $t4 # 002C0240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a1cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_252a20:
    // 0x252a20: 0x2c6258  .word       0x002C6258                   # mult        $t4, $at, $t4 # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252a20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_252a24:
    // 0x252a24: 0x2c6268  .word       0x002C6268                   # mfsa        $t4 # 002C0240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252a24u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_252a28:
    // 0x252a28: 0x2c6270  tge         $at, $t4, 393
    ctx->pc = 0x252a28u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252a2c:
    // 0x252a2c: 0x2c6278  .word       0x002C6278                   # dsll        $t4, $t4, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a2cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 9);
label_252a30:
    // 0x252a30: 0x2c6280  .word       0x002C6280                   # sll         $t4, $t4, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a30u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 10));
label_252a34:
    // 0x252a34: 0x2c6288  .word       0x002C6288                   # jr          $at # 000C6280 <InstrIdType: CPU_SPECIAL>
label_252a38:
    if (ctx->pc == 0x252A38u) {
        ctx->pc = 0x252A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A34u;
        // 0x252a38: 0x2c6290  .word       0x002C6290                   # mfhi        $t4 # 002C0280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x252A3Cu;
        goto label_252a3c;
    }
    ctx->pc = 0x252A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A34u;
        // 0x252a38: 0x2c6290  .word       0x002C6290                   # mfhi        $t4 # 002C0280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252A34u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252A3Cu;
label_252a3c:
    // 0x252a3c: 0x2c6298  .word       0x002C6298                   # mult        $t4, $at, $t4 # 00000280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252a3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_252a40:
    // 0x252a40: 0x2c62a8  .word       0x002C62A8                   # mfsa        $t4 # 002C0280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252a40u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_252a44:
    // 0x252a44: 0x2c62b0  tge         $at, $t4, 394
    ctx->pc = 0x252a44u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252a48:
    // 0x252a48: 0x2c62b8  .word       0x002C62B8                   # dsll        $t4, $t4, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a48u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 10);
label_252a4c:
    // 0x252a4c: 0x2c62c8  .word       0x002C62C8                   # jr          $at # 000C62C0 <InstrIdType: CPU_SPECIAL>
label_252a50:
    if (ctx->pc == 0x252A50u) {
        ctx->pc = 0x252A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A4Cu;
        // 0x252a50: 0x2c62d8  .word       0x002C62D8                   # mult        $t4, $at, $t4 # 000002C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252A54u;
        goto label_252a54;
    }
    ctx->pc = 0x252A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A4Cu;
        // 0x252a50: 0x2c62d8  .word       0x002C62D8                   # mult        $t4, $at, $t4 # 000002C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252A4Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252A54u;
label_252a54:
    // 0x252a54: 0x2c62e0  .word       0x002C62E0                   # add         $t4, $at, $t4 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a54u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252a58:
    // 0x252a58: 0x2c62f0  tge         $at, $t4, 395
    ctx->pc = 0x252a58u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252a5c:
    // 0x252a5c: 0x2c6300  .word       0x002C6300                   # sll         $t4, $t4, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a5cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 12));
label_252a60:
    // 0x252a60: 0x2c6310  .word       0x002C6310                   # mfhi        $t4 # 002C0300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a60u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_252a64:
    // 0x252a64: 0x2c6320  .word       0x002C6320                   # add         $t4, $at, $t4 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a64u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252a68:
    // 0x252a68: 0x2c6328  .word       0x002C6328                   # mfsa        $t4 # 002C0300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252a68u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_252a6c:
    // 0x252a6c: 0x2c6338  .word       0x002C6338                   # dsll        $t4, $t4, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a6cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 12);
label_252a70:
    // 0x252a70: 0x2c61b8  .word       0x002C61B8                   # dsll        $t4, $t4, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a70u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 6);
label_252a74:
    // 0x252a74: 0x2c6348  .word       0x002C6348                   # jr          $at # 000C6340 <InstrIdType: CPU_SPECIAL>
label_252a78:
    if (ctx->pc == 0x252A78u) {
        ctx->pc = 0x252A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A74u;
        // 0x252a78: 0x2c6350  .word       0x002C6350                   # mfhi        $t4 # 002C0340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x252A7Cu;
        goto label_252a7c;
    }
    ctx->pc = 0x252A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A74u;
        // 0x252a78: 0x2c6350  .word       0x002C6350                   # mfhi        $t4 # 002C0340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252A74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252A7Cu;
label_252a7c:
    // 0x252a7c: 0x2c6358  .word       0x002C6358                   # mult        $t4, $at, $t4 # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252a7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_252a80:
    // 0x252a80: 0x2c6360  .word       0x002C6360                   # add         $t4, $at, $t4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a80u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252a84:
    // 0x252a84: 0x2c6370  tge         $at, $t4, 397
    ctx->pc = 0x252a84u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252a88:
    // 0x252a88: 0x2c6380  .word       0x002C6380                   # sll         $t4, $t4, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a88u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 14));
label_252a8c:
    // 0x252a8c: 0x2c6388  .word       0x002C6388                   # jr          $at # 000C6380 <InstrIdType: CPU_SPECIAL>
label_252a90:
    if (ctx->pc == 0x252A90u) {
        ctx->pc = 0x252A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A8Cu;
        // 0x252a90: 0x2c6398  .word       0x002C6398                   # mult        $t4, $at, $t4 # 00000380 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252A94u;
        goto label_252a94;
    }
    ctx->pc = 0x252A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A8Cu;
        // 0x252a90: 0x2c6398  .word       0x002C6398                   # mult        $t4, $at, $t4 # 00000380 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252A8Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252A94u;
label_252a94:
    // 0x252a94: 0x2c63a0  .word       0x002C63A0                   # add         $t4, $at, $t4 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a94u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252a98:
    // 0x252a98: 0x2c63a8  .word       0x002C63A8                   # mfsa        $t4 # 002C0380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252a98u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_252a9c:
    // 0x252a9c: 0x2c63b8  .word       0x002C63B8                   # dsll        $t4, $t4, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a9cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 14);
label_252aa0:
    // 0x252aa0: 0x2c63c0  .word       0x002C63C0                   # sll         $t4, $t4, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252aa0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 15));
label_252aa4:
    // 0x252aa4: 0x2c63d0  .word       0x002C63D0                   # mfhi        $t4 # 002C03C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252aa4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_252aa8:
    // 0x252aa8: 0x2c63e0  .word       0x002C63E0                   # add         $t4, $at, $t4 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252aa8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252aac:
    // 0x252aac: 0x2c63e8  .word       0x002C63E8                   # mfsa        $t4 # 002C03C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252aacu;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_252ab0:
    // 0x252ab0: 0x2c63f0  tge         $at, $t4, 399
    ctx->pc = 0x252ab0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252ab4:
    // 0x252ab4: 0x2c63f8  .word       0x002C63F8                   # dsll        $t4, $t4, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ab4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 15);
label_252ab8:
    // 0x252ab8: 0x2c6400  .word       0x002C6400                   # sll         $t4, $t4, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ab8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_252abc:
    // 0x252abc: 0x2c6410  .word       0x002C6410                   # mfhi        $t4 # 002C0400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252abcu;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_252ac0:
    // 0x252ac0: 0x2c6420  .word       0x002C6420                   # add         $t4, $at, $t4 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ac0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252ac4:
    // 0x252ac4: 0x2c6428  .word       0x002C6428                   # mfsa        $t4 # 002C0400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252ac4u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_252ac8:
    // 0x252ac8: 0x2c6438  .word       0x002C6438                   # dsll        $t4, $t4, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ac8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 16);
label_252acc:
    // 0x252acc: 0x2c6448  .word       0x002C6448                   # jr          $at # 000C6440 <InstrIdType: CPU_SPECIAL>
label_252ad0:
    if (ctx->pc == 0x252AD0u) {
        ctx->pc = 0x252AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252ACCu;
        // 0x252ad0: 0x2c6458  .word       0x002C6458                   # mult        $t4, $at, $t4 # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252AD4u;
        goto label_252ad4;
    }
    ctx->pc = 0x252ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252ACCu;
        // 0x252ad0: 0x2c6458  .word       0x002C6458                   # mult        $t4, $at, $t4 # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252ACCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252AD4u;
label_252ad4:
    // 0x252ad4: 0x2c6468  .word       0x002C6468                   # mfsa        $t4 # 002C0440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252ad4u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_252ad8:
    // 0x252ad8: 0x2c6478  .word       0x002C6478                   # dsll        $t4, $t4, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ad8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 17);
label_252adc:
    // 0x252adc: 0x2c6480  .word       0x002C6480                   # sll         $t4, $t4, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252adcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 18));
label_252ae0:
    // 0x252ae0: 0x2c6490  .word       0x002C6490                   # mfhi        $t4 # 002C0480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ae0u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_252ae4:
    // 0x252ae4: 0x2c6420  .word       0x002C6420                   # add         $t4, $at, $t4 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ae4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252ae8:
    // 0x252ae8: 0x2c64a0  .word       0x002C64A0                   # add         $t4, $at, $t4 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ae8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252aec:
    // 0x252aec: 0x2c64b0  tge         $at, $t4, 402
    ctx->pc = 0x252aecu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252af0:
    // 0x252af0: 0x2c64b8  .word       0x002C64B8                   # dsll        $t4, $t4, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252af0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 18);
label_252af4:
    // 0x252af4: 0x2c64c8  .word       0x002C64C8                   # jr          $at # 000C64C0 <InstrIdType: CPU_SPECIAL>
label_252af8:
    if (ctx->pc == 0x252AF8u) {
        ctx->pc = 0x252AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252AF4u;
        // 0x252af8: 0x2c64d8  .word       0x002C64D8                   # mult        $t4, $at, $t4 # 000004C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252AFCu;
        goto label_252afc;
    }
    ctx->pc = 0x252AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252AF4u;
        // 0x252af8: 0x2c64d8  .word       0x002C64D8                   # mult        $t4, $at, $t4 # 000004C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252AF4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252AFCu;
label_252afc:
    // 0x252afc: 0x2c64e8  .word       0x002C64E8                   # mfsa        $t4 # 002C04C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252afcu;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_252b00:
    // 0x252b00: 0x2c64f8  .word       0x002C64F8                   # dsll        $t4, $t4, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b00u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 19);
label_252b04:
    // 0x252b04: 0x2c6500  .word       0x002C6500                   # sll         $t4, $t4, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b04u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 20));
label_252b08:
    // 0x252b08: 0x2c6510  .word       0x002C6510                   # mfhi        $t4 # 002C0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b08u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_252b0c:
    // 0x252b0c: 0x2c6520  .word       0x002C6520                   # add         $t4, $at, $t4 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b0cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252b10:
    // 0x252b10: 0x2c6530  tge         $at, $t4, 404
    ctx->pc = 0x252b10u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252b14:
    // 0x252b14: 0x2c6538  .word       0x002C6538                   # dsll        $t4, $t4, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b14u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 20);
label_252b18:
    // 0x252b18: 0x2c6540  .word       0x002C6540                   # sll         $t4, $t4, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b18u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 21));
label_252b1c:
    // 0x252b1c: 0x2c6550  .word       0x002C6550                   # mfhi        $t4 # 002C0540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b1cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_252b20:
    // 0x252b20: 0x2c6560  .word       0x002C6560                   # add         $t4, $at, $t4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b20u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252b24:
    // 0x252b24: 0x2c6568  .word       0x002C6568                   # mfsa        $t4 # 002C0540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252b24u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_252b28:
    // 0x252b28: 0x2c6570  tge         $at, $t4, 405
    ctx->pc = 0x252b28u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252b2c:
    // 0x252b2c: 0x2c6580  .word       0x002C6580                   # sll         $t4, $t4, 22 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b2cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 22));
label_252b30:
    // 0x252b30: 0x2c6590  .word       0x002C6590                   # mfhi        $t4 # 002C0580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b30u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_252b34:
    // 0x252b34: 0x2c6598  .word       0x002C6598                   # mult        $t4, $at, $t4 # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252b34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_252b38:
    // 0x252b38: 0x2c65a8  .word       0x002C65A8                   # mfsa        $t4 # 002C0580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252b38u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_252b3c:
    // 0x252b3c: 0x2c65b0  tge         $at, $t4, 406
    ctx->pc = 0x252b3cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252b40:
    // 0x252b40: 0x2c65c0  .word       0x002C65C0                   # sll         $t4, $t4, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b40u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 23));
label_252b44:
    // 0x252b44: 0x2c65c8  .word       0x002C65C8                   # jr          $at # 000C65C0 <InstrIdType: CPU_SPECIAL>
label_252b48:
    if (ctx->pc == 0x252B48u) {
        ctx->pc = 0x252B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252B44u;
        // 0x252b48: 0x2c65d0  .word       0x002C65D0                   # mfhi        $t4 # 002C05C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x252B4Cu;
        goto label_252b4c;
    }
    ctx->pc = 0x252B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252B44u;
        // 0x252b48: 0x2c65d0  .word       0x002C65D0                   # mfhi        $t4 # 002C05C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252B44u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252B4Cu;
label_252b4c:
    // 0x252b4c: 0x2c65e0  .word       0x002C65E0                   # add         $t4, $at, $t4 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b4cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252b50:
    // 0x252b50: 0x2c65f0  tge         $at, $t4, 407
    ctx->pc = 0x252b50u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252b54:
    // 0x252b54: 0x2c65f8  .word       0x002C65F8                   # dsll        $t4, $t4, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b54u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 23);
label_252b58:
    // 0x252b58: 0x2c6608  .word       0x002C6608                   # jr          $at # 000C6600 <InstrIdType: CPU_SPECIAL>
label_252b5c:
    if (ctx->pc == 0x252B5Cu) {
        ctx->pc = 0x252B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252B58u;
        // 0x252b5c: 0x2c6610  .word       0x002C6610                   # mfhi        $t4 # 002C0600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x252B60u;
        goto label_252b60;
    }
    ctx->pc = 0x252B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252B58u;
        // 0x252b5c: 0x2c6610  .word       0x002C6610                   # mfhi        $t4 # 002C0600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252B58u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252B60u;
label_252b60:
    // 0x252b60: 0x2c6620  .word       0x002C6620                   # add         $t4, $at, $t4 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b60u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252b64:
    // 0x252b64: 0x2c6630  tge         $at, $t4, 408
    ctx->pc = 0x252b64u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252b68:
    // 0x252b68: 0x2c6640  .word       0x002C6640                   # sll         $t4, $t4, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b68u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 25));
label_252b6c:
    // 0x252b6c: 0x2c6650  .word       0x002C6650                   # mfhi        $t4 # 002C0640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b6cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_252b70:
    // 0x252b70: 0x2c6658  .word       0x002C6658                   # mult        $t4, $at, $t4 # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252b70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_252b74:
    // 0x252b74: 0x2c6660  .word       0x002C6660                   # add         $t4, $at, $t4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b74u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252b78:
    // 0x252b78: 0x2c6670  tge         $at, $t4, 409
    ctx->pc = 0x252b78u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252b7c:
    // 0x252b7c: 0x2c6680  .word       0x002C6680                   # sll         $t4, $t4, 26 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b7cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 26));
label_252b80:
    // 0x252b80: 0x2c6690  .word       0x002C6690                   # mfhi        $t4 # 002C0680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b80u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_252b84:
    // 0x252b84: 0x2c66a0  .word       0x002C66A0                   # add         $t4, $at, $t4 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b84u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252b88:
    // 0x252b88: 0x2c66b0  tge         $at, $t4, 410
    ctx->pc = 0x252b88u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252b8c:
    // 0x252b8c: 0x2c66c0  .word       0x002C66C0                   # sll         $t4, $t4, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b8cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 27));
label_252b90:
    // 0x252b90: 0x2c66d0  .word       0x002C66D0                   # mfhi        $t4 # 002C06C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b90u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_252b94:
    // 0x252b94: 0x2c66e0  .word       0x002C66E0                   # add         $t4, $at, $t4 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b94u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252b98:
    // 0x252b98: 0x2c66f0  tge         $at, $t4, 411
    ctx->pc = 0x252b98u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252b9c:
    // 0x252b9c: 0x2c6700  .word       0x002C6700                   # sll         $t4, $t4, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b9cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 28));
label_252ba0:
    // 0x252ba0: 0x2c6708  .word       0x002C6708                   # jr          $at # 000C6700 <InstrIdType: CPU_SPECIAL>
label_252ba4:
    if (ctx->pc == 0x252BA4u) {
        ctx->pc = 0x252BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252BA0u;
        // 0x252ba4: 0x2c6718  .word       0x002C6718                   # mult        $t4, $at, $t4 # 00000700 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252BA8u;
        goto label_252ba8;
    }
    ctx->pc = 0x252BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252BA0u;
        // 0x252ba4: 0x2c6718  .word       0x002C6718                   # mult        $t4, $at, $t4 # 00000700 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252BA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252BA8u;
label_252ba8:
    // 0x252ba8: 0x2c6728  .word       0x002C6728                   # mfsa        $t4 # 002C0700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252ba8u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_252bac:
    // 0x252bac: 0x2c6738  .word       0x002C6738                   # dsll        $t4, $t4, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252bacu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 28);
label_252bb0:
    // 0x252bb0: 0x2c6748  .word       0x002C6748                   # jr          $at # 000C6740 <InstrIdType: CPU_SPECIAL>
label_252bb4:
    if (ctx->pc == 0x252BB4u) {
        ctx->pc = 0x252BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252BB0u;
        // 0x252bb4: 0x2c6758  .word       0x002C6758                   # mult        $t4, $at, $t4 # 00000740 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252BB8u;
        goto label_252bb8;
    }
    ctx->pc = 0x252BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252BB0u;
        // 0x252bb4: 0x2c6758  .word       0x002C6758                   # mult        $t4, $at, $t4 # 00000740 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252BB0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252BB8u;
label_252bb8:
    // 0x252bb8: 0x2c6760  .word       0x002C6760                   # add         $t4, $at, $t4 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252bb8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252bbc:
    // 0x252bbc: 0x2c6768  .word       0x002C6768                   # mfsa        $t4 # 002C0740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252bbcu;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_252bc0:
    // 0x252bc0: 0x2c6770  tge         $at, $t4, 413
    ctx->pc = 0x252bc0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252bc4:
    // 0x252bc4: 0x2c6778  .word       0x002C6778                   # dsll        $t4, $t4, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252bc4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 29);
label_252bc8:
    // 0x252bc8: 0x2c6780  .word       0x002C6780                   # sll         $t4, $t4, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252bc8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 30));
label_252bcc:
    // 0x252bcc: 0x2c6788  .word       0x002C6788                   # jr          $at # 000C6780 <InstrIdType: CPU_SPECIAL>
label_252bd0:
    if (ctx->pc == 0x252BD0u) {
        ctx->pc = 0x252BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252BCCu;
        // 0x252bd0: 0x2c6798  .word       0x002C6798                   # mult        $t4, $at, $t4 # 00000780 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252BD4u;
        goto label_252bd4;
    }
    ctx->pc = 0x252BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252BCCu;
        // 0x252bd0: 0x2c6798  .word       0x002C6798                   # mult        $t4, $at, $t4 # 00000780 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252BCCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252BD4u;
label_252bd4:
    // 0x252bd4: 0x2c67a8  .word       0x002C67A8                   # mfsa        $t4 # 002C0780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252bd4u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_252bd8:
    // 0x252bd8: 0x2c67b8  .word       0x002C67B8                   # dsll        $t4, $t4, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252bd8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 30);
label_252bdc:
    // 0x252bdc: 0x2c67c0  .word       0x002C67C0                   # sll         $t4, $t4, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252bdcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 31));
label_252be0:
    // 0x252be0: 0x2c67d0  .word       0x002C67D0                   # mfhi        $t4 # 002C07C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252be0u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_252be4:
    // 0x252be4: 0x2c67e0  .word       0x002C67E0                   # add         $t4, $at, $t4 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252be4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252be8:
    // 0x252be8: 0x2c67e8  .word       0x002C67E8                   # mfsa        $t4 # 002C07C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252be8u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_252bec:
    // 0x252bec: 0x2c67f8  .word       0x002C67F8                   # dsll        $t4, $t4, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252becu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 31);
label_252bf0:
    // 0x252bf0: 0x2c6808  .word       0x002C6808                   # jr          $at # 000C6800 <InstrIdType: CPU_SPECIAL>
label_252bf4:
    if (ctx->pc == 0x252BF4u) {
        ctx->pc = 0x252BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252BF0u;
        // 0x252bf4: 0x2c6810  .word       0x002C6810                   # mfhi        $t5 # 002C0000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 13, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x252BF8u;
        goto label_252bf8;
    }
    ctx->pc = 0x252BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252BF0u;
        // 0x252bf4: 0x2c6810  .word       0x002C6810                   # mfhi        $t5 # 002C0000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 13, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252BF0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252BF8u;
label_252bf8:
    // 0x252bf8: 0x2c6820  add         $t5, $at, $t4
    ctx->pc = 0x252bf8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252bfc:
    // 0x252bfc: 0x2c6828  .word       0x002C6828                   # mfsa        $t5 # 002C0000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252bfcu;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_252c00:
    // 0x252c00: 0x2c6830  tge         $at, $t4, 416
    ctx->pc = 0x252c00u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252c04:
    // 0x252c04: 0x2c6840  .word       0x002C6840                   # sll         $t5, $t4, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c04u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
label_252c08:
    // 0x252c08: 0x2c6850  .word       0x002C6850                   # mfhi        $t5 # 002C0040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c08u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_252c0c:
    // 0x252c0c: 0x2c6858  .word       0x002C6858                   # mult        $t5, $at, $t4 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252c0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_252c10:
    // 0x252c10: 0x2c6868  .word       0x002C6868                   # mfsa        $t5 # 002C0040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252c10u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_252c14:
    // 0x252c14: 0x2c6878  .word       0x002C6878                   # dsll        $t5, $t4, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c14u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << 1);
label_252c18:
    // 0x252c18: 0x2c6880  .word       0x002C6880                   # sll         $t5, $t4, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c18u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_252c1c:
    // 0x252c1c: 0x2c6890  .word       0x002C6890                   # mfhi        $t5 # 002C0080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c1cu;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_252c20:
    // 0x252c20: 0x2c68a0  .word       0x002C68A0                   # add         $t5, $at, $t4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c20u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252c24:
    // 0x252c24: 0x2c68b0  tge         $at, $t4, 418
    ctx->pc = 0x252c24u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252c28:
    // 0x252c28: 0x2c68b8  .word       0x002C68B8                   # dsll        $t5, $t4, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c28u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << 2);
label_252c2c:
    // 0x252c2c: 0x2c68c0  .word       0x002C68C0                   # sll         $t5, $t4, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c2cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_252c30:
    // 0x252c30: 0x2c68d0  .word       0x002C68D0                   # mfhi        $t5 # 002C00C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c30u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_252c34:
    // 0x252c34: 0x2c68e0  .word       0x002C68E0                   # add         $t5, $at, $t4 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c34u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252c38:
    // 0x252c38: 0x2c68e8  .word       0x002C68E8                   # mfsa        $t5 # 002C00C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252c38u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_252c3c:
    // 0x252c3c: 0x2c68f0  tge         $at, $t4, 419
    ctx->pc = 0x252c3cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252c40:
    // 0x252c40: 0x2c6900  .word       0x002C6900                   # sll         $t5, $t4, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c40u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_252c44:
    // 0x252c44: 0x2c6910  .word       0x002C6910                   # mfhi        $t5 # 002C0100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c44u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_252c48:
    // 0x252c48: 0x2c6920  .word       0x002C6920                   # add         $t5, $at, $t4 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c48u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252c4c:
    // 0x252c4c: 0x2c6930  tge         $at, $t4, 420
    ctx->pc = 0x252c4cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252c50:
    // 0x252c50: 0x2c6940  .word       0x002C6940                   # sll         $t5, $t4, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c50u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
label_252c54:
    // 0x252c54: 0x2c6950  .word       0x002C6950                   # mfhi        $t5 # 002C0140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c54u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_252c58:
    // 0x252c58: 0x2c6960  .word       0x002C6960                   # add         $t5, $at, $t4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c58u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252c5c:
    // 0x252c5c: 0x2c6970  tge         $at, $t4, 421
    ctx->pc = 0x252c5cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252c60:
    // 0x252c60: 0x2c6980  .word       0x002C6980                   # sll         $t5, $t4, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c60u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 6));
label_252c64:
    // 0x252c64: 0x2c6988  .word       0x002C6988                   # jr          $at # 000C6980 <InstrIdType: CPU_SPECIAL>
label_252c68:
    if (ctx->pc == 0x252C68u) {
        ctx->pc = 0x252C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C64u;
        // 0x252c68: 0x2c6998  .word       0x002C6998                   # mult        $t5, $at, $t4 # 00000180 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252C6Cu;
        goto label_252c6c;
    }
    ctx->pc = 0x252C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C64u;
        // 0x252c68: 0x2c6998  .word       0x002C6998                   # mult        $t5, $at, $t4 # 00000180 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252C64u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252C6Cu;
label_252c6c:
    // 0x252c6c: 0x2c69a8  .word       0x002C69A8                   # mfsa        $t5 # 002C0180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252c6cu;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_252c70:
    // 0x252c70: 0x2c69b8  .word       0x002C69B8                   # dsll        $t5, $t4, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c70u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << 6);
label_252c74:
    // 0x252c74: 0x2c69c8  .word       0x002C69C8                   # jr          $at # 000C69C0 <InstrIdType: CPU_SPECIAL>
label_252c78:
    if (ctx->pc == 0x252C78u) {
        ctx->pc = 0x252C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C74u;
        // 0x252c78: 0x2c69d8  .word       0x002C69D8                   # mult        $t5, $at, $t4 # 000001C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252C7Cu;
        goto label_252c7c;
    }
    ctx->pc = 0x252C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C74u;
        // 0x252c78: 0x2c69d8  .word       0x002C69D8                   # mult        $t5, $at, $t4 # 000001C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252C74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252C7Cu;
label_252c7c:
    // 0x252c7c: 0x2c69e0  .word       0x002C69E0                   # add         $t5, $at, $t4 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c7cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252c80:
    // 0x252c80: 0x2c69f0  tge         $at, $t4, 423
    ctx->pc = 0x252c80u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252c84:
    // 0x252c84: 0x2c6a00  .word       0x002C6A00                   # sll         $t5, $t4, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c84u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 8));
label_252c88:
    // 0x252c88: 0x2c60c0  .word       0x002C60C0                   # sll         $t4, $t4, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c88u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_252c8c:
    // 0x252c8c: 0x2c6a08  .word       0x002C6A08                   # jr          $at # 000C6A00 <InstrIdType: CPU_SPECIAL>
label_252c90:
    if (ctx->pc == 0x252C90u) {
        ctx->pc = 0x252C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C8Cu;
        // 0x252c90: 0x2c6a18  .word       0x002C6A18                   # mult        $t5, $at, $t4 # 00000200 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252C94u;
        goto label_252c94;
    }
    ctx->pc = 0x252C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C8Cu;
        // 0x252c90: 0x2c6a18  .word       0x002C6A18                   # mult        $t5, $at, $t4 # 00000200 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252C8Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252C94u;
label_252c94:
    // 0x252c94: 0x2c6a30  tge         $at, $t4, 424
    ctx->pc = 0x252c94u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252c98:
    // 0x252c98: 0x2c6a40  .word       0x002C6A40                   # sll         $t5, $t4, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c98u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 9));
label_252c9c:
    // 0x252c9c: 0x2c6a50  .word       0x002C6A50                   # mfhi        $t5 # 002C0240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c9cu;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_252ca0:
    // 0x252ca0: 0x2c6a60  .word       0x002C6A60                   # add         $t5, $at, $t4 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ca0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252ca4:
    // 0x252ca4: 0x2c6a70  tge         $at, $t4, 425
    ctx->pc = 0x252ca4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252ca8:
    // 0x252ca8: 0x2c6a80  .word       0x002C6A80                   # sll         $t5, $t4, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ca8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 10));
label_252cac:
    // 0x252cac: 0x2c6a88  .word       0x002C6A88                   # jr          $at # 000C6A80 <InstrIdType: CPU_SPECIAL>
label_252cb0:
    if (ctx->pc == 0x252CB0u) {
        ctx->pc = 0x252CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252CACu;
        // 0x252cb0: 0x2c6a98  .word       0x002C6A98                   # mult        $t5, $at, $t4 # 00000280 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252CB4u;
        goto label_252cb4;
    }
    ctx->pc = 0x252CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252CACu;
        // 0x252cb0: 0x2c6a98  .word       0x002C6A98                   # mult        $t5, $at, $t4 # 00000280 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252CACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252CB4u;
label_252cb4:
    // 0x252cb4: 0x2c6aa0  .word       0x002C6AA0                   # add         $t5, $at, $t4 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252cb4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252cb8:
    // 0x252cb8: 0x2c6aa8  .word       0x002C6AA8                   # mfsa        $t5 # 002C0280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252cb8u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_252cbc:
    // 0x252cbc: 0x2c6ab0  tge         $at, $t4, 426
    ctx->pc = 0x252cbcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252cc0:
    // 0x252cc0: 0x2c6ab8  .word       0x002C6AB8                   # dsll        $t5, $t4, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252cc0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << 10);
label_252cc4:
    // 0x252cc4: 0x2c6ac8  .word       0x002C6AC8                   # jr          $at # 000C6AC0 <InstrIdType: CPU_SPECIAL>
label_252cc8:
    if (ctx->pc == 0x252CC8u) {
        ctx->pc = 0x252CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252CC4u;
        // 0x252cc8: 0x2c6ad0  .word       0x002C6AD0                   # mfhi        $t5 # 002C02C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 13, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x252CCCu;
        goto label_252ccc;
    }
    ctx->pc = 0x252CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252CC4u;
        // 0x252cc8: 0x2c6ad0  .word       0x002C6AD0                   # mfhi        $t5 # 002C02C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 13, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252CC4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252CCCu;
label_252ccc:
    // 0x252ccc: 0x2c6ae0  .word       0x002C6AE0                   # add         $t5, $at, $t4 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252cccu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252cd0:
    // 0x252cd0: 0x2c6af0  tge         $at, $t4, 427
    ctx->pc = 0x252cd0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252cd4:
    // 0x252cd4: 0x2c6af8  .word       0x002C6AF8                   # dsll        $t5, $t4, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252cd4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << 11);
label_252cd8:
    // 0x252cd8: 0x2c6b00  .word       0x002C6B00                   # sll         $t5, $t4, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252cd8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 12));
label_252cdc:
    // 0x252cdc: 0x2c6b10  .word       0x002C6B10                   # mfhi        $t5 # 002C0300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252cdcu;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_252ce0:
    // 0x252ce0: 0x2c6b20  .word       0x002C6B20                   # add         $t5, $at, $t4 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ce0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252ce4:
    // 0x252ce4: 0x2c6b30  tge         $at, $t4, 428
    ctx->pc = 0x252ce4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252ce8:
    // 0x252ce8: 0x2c6b38  .word       0x002C6B38                   # dsll        $t5, $t4, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ce8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << 12);
label_252cec:
    // 0x252cec: 0x2c6b48  .word       0x002C6B48                   # jr          $at # 000C6B40 <InstrIdType: CPU_SPECIAL>
label_252cf0:
    if (ctx->pc == 0x252CF0u) {
        ctx->pc = 0x252CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252CECu;
        // 0x252cf0: 0x2c6b58  .word       0x002C6B58                   # mult        $t5, $at, $t4 # 00000340 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252CF4u;
        goto label_252cf4;
    }
    ctx->pc = 0x252CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252CECu;
        // 0x252cf0: 0x2c6b58  .word       0x002C6B58                   # mult        $t5, $at, $t4 # 00000340 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252CECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252CF4u;
label_252cf4:
    // 0x252cf4: 0x2c6b68  .word       0x002C6B68                   # mfsa        $t5 # 002C0340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252cf4u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_252cf8:
    // 0x252cf8: 0x2c6b78  .word       0x002C6B78                   # dsll        $t5, $t4, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252cf8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << 13);
label_252cfc:
    // 0x252cfc: 0x2c6a80  .word       0x002C6A80                   # sll         $t5, $t4, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252cfcu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 10));
label_252d00:
    // 0x252d00: 0x2c6b80  .word       0x002C6B80                   # sll         $t5, $t4, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d00u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 14));
label_252d04:
    // 0x252d04: 0x2c6b30  tge         $at, $t4, 428
    ctx->pc = 0x252d04u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252d08:
    // 0x252d08: 0x2c6b88  .word       0x002C6B88                   # jr          $at # 000C6B80 <InstrIdType: CPU_SPECIAL>
label_252d0c:
    if (ctx->pc == 0x252D0Cu) {
        ctx->pc = 0x252D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D08u;
        // 0x252d0c: 0x2c6b98  .word       0x002C6B98                   # mult        $t5, $at, $t4 # 00000380 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252D10u;
        goto label_252d10;
    }
    ctx->pc = 0x252D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D08u;
        // 0x252d0c: 0x2c6b98  .word       0x002C6B98                   # mult        $t5, $at, $t4 # 00000380 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252D08u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252D10u;
label_252d10:
    // 0x252d10: 0x2c6ba8  .word       0x002C6BA8                   # mfsa        $t5 # 002C0380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252d10u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_252d14:
    // 0x252d14: 0x2c6bb8  .word       0x002C6BB8                   # dsll        $t5, $t4, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d14u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << 14);
label_252d18:
    // 0x252d18: 0x2c6bc0  .word       0x002C6BC0                   # sll         $t5, $t4, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d18u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 15));
label_252d1c:
    // 0x252d1c: 0x2c6bc8  .word       0x002C6BC8                   # jr          $at # 000C6BC0 <InstrIdType: CPU_SPECIAL>
label_252d20:
    if (ctx->pc == 0x252D20u) {
        ctx->pc = 0x252D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D1Cu;
        // 0x252d20: 0x2c6b30  tge         $at, $t4, 428 (Delay Slot)
        if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252D24u;
        goto label_252d24;
    }
    ctx->pc = 0x252D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D1Cu;
        // 0x252d20: 0x2c6b30  tge         $at, $t4, 428 (Delay Slot)
        if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252D1Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252D24u;
label_252d24:
    // 0x252d24: 0x2c6b38  .word       0x002C6B38                   # dsll        $t5, $t4, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d24u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << 12);
label_252d28:
    // 0x252d28: 0x2c6bd8  .word       0x002C6BD8                   # mult        $t5, $at, $t4 # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252d28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_252d2c:
    // 0x252d2c: 0x2c6bd8  .word       0x002C6BD8                   # mult        $t5, $at, $t4 # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252d2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_252d30:
    // 0x252d30: 0x2b1539  .word       0x002B1539                   # INVALID     $at, $t3, 0x1539 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x252D30 raw=0x002B1539"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_252d34:
    // 0x252d34: 0x2b154a  .word       0x002B154A                   # movz        $v0, $at, $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d34u;
    if (GPR_U64(ctx, 11) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 1));
label_252d38:
    // 0x252d38: 0x2b155b  .word       0x002B155B                   # divu        $v0, $at, $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d38u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,1); } }
label_252d3c:
    // 0x252d3c: 0x2b156c  .word       0x002B156C                   # dadd        $v0, $at, $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d3cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 11); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_252d40:
    // 0x252d40: 0x2b157d  .word       0x002B157D                   # INVALID     $at, $t3, 0x157D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x252D40 raw=0x002B157D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_252d44:
    // 0x252d44: 0x2b158e  .word       0x002B158E                   # INVALID     $at, $t3, 0x158E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d44u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x252D44 raw=0x002B158E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_252d48:
    // 0x252d48: 0x2b159f  .word       0x002B159F                   # ddivu       $v0, $at, $t3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d48u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x252D48 raw=0x002B159F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_252d4c:
    // 0x252d4c: 0x2b15b0  tge         $at, $t3, 86
    ctx->pc = 0x252d4cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_252d50:
    // 0x252d50: 0x2b15e9  .word       0x002B15E9                   # mtsa        $at # 000B15C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252d50u;
    ctx->sa = GPR_U32(ctx, 1) & 0x7F;
label_252d54:
    // 0x252d54: 0x2b15fa  .word       0x002B15FA                   # dsrl        $v0, $t3, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) >> 23);
label_252d58:
    // 0x252d58: 0x2b160b  .word       0x002B160B                   # movn        $v0, $at, $t3 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d58u;
    if (GPR_U64(ctx, 11) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 1));
label_252d5c:
    // 0x252d5c: 0x2b161c  .word       0x002B161C                   # dmult       $at, $t3 # 00001600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d5cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x252D5C raw=0x002B161C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_252d60:
    // 0x252d60: 0x2b162d  .word       0x002B162D                   # daddu       $v0, $at, $t3 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 1) + (uint64_t)GPR_U64(ctx, 11));
label_252d64:
    // 0x252d64: 0x2b163e  .word       0x002B163E                   # dsrl32      $v0, $t3, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) >> (32 + 24));
label_252d68:
    // 0x252d68: 0x2b164f  .word       0x002B164F                   # sync.p # 002B1000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d68u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_252d6c:
    // 0x252d6c: 0x2b1660  .word       0x002B1660                   # add         $v0, $at, $t3 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d6cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_252d70:
    // 0x252d70: 0x2b1699  .word       0x002B1699                   # multu       $at, $t3 # 00001680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d70u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 1) * (uint64_t)GPR_U32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_252d74:
    // 0x252d74: 0x2b16aa  .word       0x002B16AA                   # slt         $v0, $at, $t3 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 1) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_252d78:
    // 0x252d78: 0x2b16bb  .word       0x002B16BB                   # dsra        $v0, $t3, 26 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 11) >> 26);
label_252d7c:
    // 0x252d7c: 0x2b16cc  .word       0x002B16CC                   # syscall     91 # 002B0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d7cu;
    ctx->pc = 0x252D80u;
runtime->handleSyscall(rdram, ctx, 0xAC5Bu);
label_252d80:
    // 0x252d80: 0x2b16dd  .word       0x002B16DD                   # dmultu      $at, $t3 # 000016C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x252D80 raw=0x002B16DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_252d84:
    // 0x252d84: 0x2b16ee  .word       0x002B16EE                   # dsub        $v0, $at, $t3 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d84u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 11); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_252d88:
    // 0x252d88: 0x2b16ff  .word       0x002B16FF                   # dsra32      $v0, $t3, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 11) >> (32 + 27));
label_252d8c:
    // 0x252d8c: 0x2b1710  .word       0x002B1710                   # mfhi        $v0 # 002B0700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d8cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_252d90:
    // 0x252d90: 0x2b1749  .word       0x002B1749                   # jalr        $v0, $at # 000B0740 <InstrIdType: CPU_SPECIAL>
label_252d94:
    if (ctx->pc == 0x252D94u) {
        ctx->pc = 0x252D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D90u;
        // 0x252d94: 0x2b175a  .word       0x002B175A                   # div         $v0, $at, $t3 # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 11);    int32_t dividend = GPR_S32(ctx, 1);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252D98u;
        goto label_252d98;
    }
    ctx->pc = 0x252D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 2, 0x252D98u);
        ctx->pc = 0x252D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D90u;
        // 0x252d94: 0x2b175a  .word       0x002B175A                   # div         $v0, $at, $t3 # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 11);    int32_t dividend = GPR_S32(ctx, 1);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252D90u, 0x252D98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x252D98u;
label_252d98:
    // 0x252d98: 0x2b176b  .word       0x002B176B                   # sltu        $v0, $at, $t3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 1) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
label_252d9c:
    // 0x252d9c: 0x2b177c  .word       0x002B177C                   # dsll32      $v0, $t3, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 29));
label_252da0:
    // 0x252da0: 0x2b178d  break       43, 94
    ctx->pc = 0x252da0u;
    runtime->handleBreak(rdram, ctx);
label_252da4:
    // 0x252da4: 0x2b179e  .word       0x002B179E                   # ddiv        $v0, $at, $t3 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252da4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x252DA4 raw=0x002B179E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_252da8:
    // 0x252da8: 0x2b17af  .word       0x002B17AF                   # dsubu       $v0, $at, $t3 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) - GPR_U64(ctx, 11));
label_252dac:
    // 0x252dac: 0x2b17c0  .word       0x002B17C0                   # sll         $v0, $t3, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 31));
label_252db0:
    // 0x252db0: 0x2c6be8  .word       0x002C6BE8                   # mfsa        $t5 # 002C03C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252db0u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_252db4:
    // 0x252db4: 0x2c6bf8  .word       0x002C6BF8                   # dsll        $t5, $t4, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252db4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << 15);
label_252db8:
    // 0x252db8: 0x2c6c08  .word       0x002C6C08                   # jr          $at # 000C6C00 <InstrIdType: CPU_SPECIAL>
label_252dbc:
    if (ctx->pc == 0x252DBCu) {
        ctx->pc = 0x252DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252DB8u;
        // 0x252dbc: 0x2c6c18  .word       0x002C6C18                   # mult        $t5, $at, $t4 # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252DC0u;
        goto label_252dc0;
    }
    ctx->pc = 0x252DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252DB8u;
        // 0x252dbc: 0x2c6c18  .word       0x002C6C18                   # mult        $t5, $at, $t4 # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252DB8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252DC0u;
label_252dc0:
    // 0x252dc0: 0x2c6c28  .word       0x002C6C28                   # mfsa        $t5 # 002C0400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252dc0u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_252dc4:
    // 0x252dc4: 0x2c5d40  .word       0x002C5D40                   # sll         $t3, $t4, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252dc4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 21));
label_252dc8:
    // 0x252dc8: 0x2c6c38  .word       0x002C6C38                   # dsll        $t5, $t4, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252dc8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << 16);
label_252dcc:
    // 0x252dcc: 0x2c6c50  .word       0x002C6C50                   # mfhi        $t5 # 002C0440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252dccu;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_252dd0:
    // 0x252dd0: 0x2c6c70  tge         $at, $t4, 433
    ctx->pc = 0x252dd0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252dd4:
    // 0x252dd4: 0x2c6c90  .word       0x002C6C90                   # mfhi        $t5 # 002C0480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252dd4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_252dd8:
    // 0x252dd8: 0x2c6ca0  .word       0x002C6CA0                   # add         $t5, $at, $t4 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252dd8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252ddc:
    // 0x252ddc: 0x2c6cc0  .word       0x002C6CC0                   # sll         $t5, $t4, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ddcu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 19));
label_252de0:
    // 0x252de0: 0x2c6ce0  .word       0x002C6CE0                   # add         $t5, $at, $t4 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252de0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252de4:
    // 0x252de4: 0x2c6d00  .word       0x002C6D00                   # sll         $t5, $t4, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252de4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 20));
label_252de8:
    // 0x252de8: 0x2c6d20  .word       0x002C6D20                   # add         $t5, $at, $t4 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252de8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252dec:
    // 0x252dec: 0x2c6d40  .word       0x002C6D40                   # sll         $t5, $t4, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252decu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 21));
label_252df0:
    // 0x252df0: 0x2c6d60  .word       0x002C6D60                   # add         $t5, $at, $t4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252df0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252df4:
    // 0x252df4: 0x2c6d80  .word       0x002C6D80                   # sll         $t5, $t4, 22 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252df4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 22));
label_252df8:
    // 0x252df8: 0x2c6d98  .word       0x002C6D98                   # mult        $t5, $at, $t4 # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252df8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_252dfc:
    // 0x252dfc: 0x2c6da0  .word       0x002C6DA0                   # add         $t5, $at, $t4 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252dfcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252e00:
    // 0x252e00: 0x2c6da8  .word       0x002C6DA8                   # mfsa        $t5 # 002C0580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252e00u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_252e04:
    // 0x252e04: 0x2c6db0  tge         $at, $t4, 438
    ctx->pc = 0x252e04u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252e08:
    // 0x252e08: 0x2c6dc8  .word       0x002C6DC8                   # jr          $at # 000C6DC0 <InstrIdType: CPU_SPECIAL>
label_252e0c:
    if (ctx->pc == 0x252E0Cu) {
        ctx->pc = 0x252E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E08u;
        // 0x252e0c: 0x2c6c38  .word       0x002C6C38                   # dsll        $t5, $t4, 16 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << 16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x252E10u;
        goto label_252e10;
    }
    ctx->pc = 0x252E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E08u;
        // 0x252e0c: 0x2c6c38  .word       0x002C6C38                   # dsll        $t5, $t4, 16 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << 16);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252E08u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252E10u;
label_252e10:
    // 0x252e10: 0x2c6c38  .word       0x002C6C38                   # dsll        $t5, $t4, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e10u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << 16);
label_252e14:
    // 0x252e14: 0x0  nop
    ctx->pc = 0x252e14u;
    // NOP
label_252e18:
    // 0x252e18: 0x0  nop
    ctx->pc = 0x252e18u;
    // NOP
label_252e1c:
    // 0x252e1c: 0x0  nop
    ctx->pc = 0x252e1cu;
    // NOP
label_252e20:
    // 0x252e20: 0x2c6dd8  .word       0x002C6DD8                   # mult        $t5, $at, $t4 # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252e20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_252e24:
    // 0x252e24: 0x2c6de8  .word       0x002C6DE8                   # mfsa        $t5 # 002C05C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252e24u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_252e28:
    // 0x252e28: 0x2c6df8  .word       0x002C6DF8                   # dsll        $t5, $t4, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e28u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << 23);
label_252e2c:
    // 0x252e2c: 0x2c6e10  .word       0x002C6E10                   # mfhi        $t5 # 002C0600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e2cu;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_252e30:
    // 0x252e30: 0x2c6e20  .word       0x002C6E20                   # add         $t5, $at, $t4 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e30u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252e34:
    // 0x252e34: 0x2c6e40  .word       0x002C6E40                   # sll         $t5, $t4, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e34u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 25));
label_252e38:
    // 0x252e38: 0x2c6e60  .word       0x002C6E60                   # add         $t5, $at, $t4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e38u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252e3c:
    // 0x252e3c: 0x2c6e80  .word       0x002C6E80                   # sll         $t5, $t4, 26 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e3cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 26));
label_252e40:
    // 0x252e40: 0x2c6ea0  .word       0x002C6EA0                   # add         $t5, $at, $t4 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e40u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252e44:
    // 0x252e44: 0x2c6ec0  .word       0x002C6EC0                   # sll         $t5, $t4, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e44u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 27));
label_252e48:
    // 0x252e48: 0x2c6ee0  .word       0x002C6EE0                   # add         $t5, $at, $t4 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e48u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252e4c:
    // 0x252e4c: 0x2c6f00  .word       0x002C6F00                   # sll         $t5, $t4, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e4cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 28));
label_252e50:
    // 0x252e50: 0x2c6f20  .word       0x002C6F20                   # add         $t5, $at, $t4 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e50u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252e54:
    // 0x252e54: 0x2c6f40  .word       0x002C6F40                   # sll         $t5, $t4, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e54u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 29));
label_252e58:
    // 0x252e58: 0x2c6f60  .word       0x002C6F60                   # add         $t5, $at, $t4 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e58u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252e5c:
    // 0x252e5c: 0x2c6f80  .word       0x002C6F80                   # sll         $t5, $t4, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e5cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 30));
label_252e60:
    // 0x252e60: 0x2c6fa0  .word       0x002C6FA0                   # add         $t5, $at, $t4 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e60u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252e64:
    // 0x252e64: 0x2c6fc0  .word       0x002C6FC0                   # sll         $t5, $t4, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e64u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 31));
label_252e68:
    // 0x252e68: 0x2c6fe0  .word       0x002C6FE0                   # add         $t5, $at, $t4 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e68u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252e6c:
    // 0x252e6c: 0x2c7000  .word       0x002C7000                   # sll         $t6, $t4, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e6cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 0));
label_252e70:
    // 0x252e70: 0x2c7020  add         $t6, $at, $t4
    ctx->pc = 0x252e70u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252e74:
    // 0x252e74: 0x2c7038  .word       0x002C7038                   # dsll        $t6, $t4, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e74u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) << 0);
label_252e78:
    // 0x252e78: 0x2c7048  .word       0x002C7048                   # jr          $at # 000C7040 <InstrIdType: CPU_SPECIAL>
label_252e7c:
    if (ctx->pc == 0x252E7Cu) {
        ctx->pc = 0x252E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E78u;
        // 0x252e7c: 0x2c7058  .word       0x002C7058                   # mult        $t6, $at, $t4 # 00000040 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252E80u;
        goto label_252e80;
    }
    ctx->pc = 0x252E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E78u;
        // 0x252e7c: 0x2c7058  .word       0x002C7058                   # mult        $t6, $at, $t4 # 00000040 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252E78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252E80u;
label_252e80:
    // 0x252e80: 0x2c7068  .word       0x002C7068                   # mfsa        $t6 # 002C0040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252e80u;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_252e84:
    // 0x252e84: 0x2c7080  .word       0x002C7080                   # sll         $t6, $t4, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e84u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_252e88:
    // 0x252e88: 0x2c70a0  .word       0x002C70A0                   # add         $t6, $at, $t4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e88u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252e8c:
    // 0x252e8c: 0x2c70c0  .word       0x002C70C0                   # sll         $t6, $t4, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e8cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_252e90:
    // 0x252e90: 0x2c70e0  .word       0x002C70E0                   # add         $t6, $at, $t4 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e90u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252e94:
    // 0x252e94: 0x2c7100  .word       0x002C7100                   # sll         $t6, $t4, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e94u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_252e98:
    // 0x252e98: 0x2c7120  .word       0x002C7120                   # add         $t6, $at, $t4 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e98u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252e9c:
    // 0x252e9c: 0x2c7140  .word       0x002C7140                   # sll         $t6, $t4, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e9cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
label_252ea0:
    // 0x252ea0: 0x2c7160  .word       0x002C7160                   # add         $t6, $at, $t4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ea0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252ea4:
    // 0x252ea4: 0x2c7180  .word       0x002C7180                   # sll         $t6, $t4, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ea4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 6));
label_252ea8:
    // 0x252ea8: 0x2c71a0  .word       0x002C71A0                   # add         $t6, $at, $t4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ea8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252eac:
    // 0x252eac: 0x2c71c0  .word       0x002C71C0                   # sll         $t6, $t4, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252eacu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 7));
label_252eb0:
    // 0x252eb0: 0x2c71e0  .word       0x002C71E0                   # add         $t6, $at, $t4 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252eb0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252eb4:
    // 0x252eb4: 0x2c7200  .word       0x002C7200                   # sll         $t6, $t4, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252eb4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 8));
label_252eb8:
    // 0x252eb8: 0x2c7220  .word       0x002C7220                   # add         $t6, $at, $t4 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252eb8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252ebc:
    // 0x252ebc: 0x2c7240  .word       0x002C7240                   # sll         $t6, $t4, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ebcu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 9));
label_252ec0:
    // 0x252ec0: 0x2c7260  .word       0x002C7260                   # add         $t6, $at, $t4 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ec0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252ec4:
    // 0x252ec4: 0x2c7280  .word       0x002C7280                   # sll         $t6, $t4, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ec4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 10));
label_252ec8:
    // 0x252ec8: 0x2c72a0  .word       0x002C72A0                   # add         $t6, $at, $t4 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ec8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252ecc:
    // 0x252ecc: 0x2c72c0  .word       0x002C72C0                   # sll         $t6, $t4, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252eccu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 11));
label_252ed0:
    // 0x252ed0: 0x2c72e0  .word       0x002C72E0                   # add         $t6, $at, $t4 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ed0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252ed4:
    // 0x252ed4: 0x2c72f8  .word       0x002C72F8                   # dsll        $t6, $t4, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ed4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) << 11);
label_252ed8:
    // 0x252ed8: 0x2c7308  .word       0x002C7308                   # jr          $at # 000C7300 <InstrIdType: CPU_SPECIAL>
label_252edc:
    if (ctx->pc == 0x252EDCu) {
        ctx->pc = 0x252EE0u;
        goto label_252ee0;
    }
    ctx->pc = 0x252ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252ED8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252EE0u;
label_252ee0:
    // 0x252ee0: 0x2c7310  .word       0x002C7310                   # mfhi        $t6 # 002C0300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ee0u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_252ee4:
    // 0x252ee4: 0x2c7320  .word       0x002C7320                   # add         $t6, $at, $t4 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ee4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252ee8:
    // 0x252ee8: 0x2c7330  tge         $at, $t4, 460
    ctx->pc = 0x252ee8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252eec:
    // 0x252eec: 0x2c7340  .word       0x002C7340                   # sll         $t6, $t4, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252eecu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 13));
label_252ef0:
    // 0x252ef0: 0x2c7350  .word       0x002C7350                   # mfhi        $t6 # 002C0340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ef0u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_252ef4:
    // 0x252ef4: 0x2c7360  .word       0x002C7360                   # add         $t6, $at, $t4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ef4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252ef8:
    // 0x252ef8: 0x2c7370  tge         $at, $t4, 461
    ctx->pc = 0x252ef8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252efc:
    // 0x252efc: 0x2c7380  .word       0x002C7380                   # sll         $t6, $t4, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252efcu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 14));
label_252f00:
    // 0x252f00: 0x2c7390  .word       0x002C7390                   # mfhi        $t6 # 002C0380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f00u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_252f04:
    // 0x252f04: 0x2c73a0  .word       0x002C73A0                   # add         $t6, $at, $t4 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f04u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252f08:
    // 0x252f08: 0x2c73b0  tge         $at, $t4, 462
    ctx->pc = 0x252f08u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252f0c:
    // 0x252f0c: 0x2c73c0  .word       0x002C73C0                   # sll         $t6, $t4, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f0cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 15));
label_252f10:
    // 0x252f10: 0x2c73d0  .word       0x002C73D0                   # mfhi        $t6 # 002C03C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f10u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_252f14:
    // 0x252f14: 0x2c73e0  .word       0x002C73E0                   # add         $t6, $at, $t4 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f14u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252f18:
    // 0x252f18: 0x2c73f0  tge         $at, $t4, 463
    ctx->pc = 0x252f18u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252f1c:
    // 0x252f1c: 0x2c7400  .word       0x002C7400                   # sll         $t6, $t4, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f1cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_252f20:
    // 0x252f20: 0x2c7410  .word       0x002C7410                   # mfhi        $t6 # 002C0400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f20u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_252f24:
    // 0x252f24: 0x2c7420  .word       0x002C7420                   # add         $t6, $at, $t4 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f24u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252f28:
    // 0x252f28: 0x2c7440  .word       0x002C7440                   # sll         $t6, $t4, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f28u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 17));
label_252f2c:
    // 0x252f2c: 0x2c7458  .word       0x002C7458                   # mult        $t6, $at, $t4 # 00000440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252f2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_252f30:
    // 0x252f30: 0x2c7468  .word       0x002C7468                   # mfsa        $t6 # 002C0440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252f30u;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_252f34:
    // 0x252f34: 0x2c7478  .word       0x002C7478                   # dsll        $t6, $t4, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f34u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) << 17);
label_252f38:
    // 0x252f38: 0x2c7488  .word       0x002C7488                   # jr          $at # 000C7480 <InstrIdType: CPU_SPECIAL>
label_252f3c:
    if (ctx->pc == 0x252F3Cu) {
        ctx->pc = 0x252F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F38u;
        // 0x252f3c: 0x2c7490  .word       0x002C7490                   # mfhi        $t6 # 002C0480 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x252F40u;
        goto label_252f40;
    }
    ctx->pc = 0x252F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F38u;
        // 0x252f3c: 0x2c7490  .word       0x002C7490                   # mfhi        $t6 # 002C0480 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252F38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252F40u;
label_252f40:
    // 0x252f40: 0x2c74a0  .word       0x002C74A0                   # add         $t6, $at, $t4 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f40u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252f44:
    // 0x252f44: 0x2c74b0  tge         $at, $t4, 466
    ctx->pc = 0x252f44u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252f48:
    // 0x252f48: 0x2c74c0  .word       0x002C74C0                   # sll         $t6, $t4, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f48u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 19));
label_252f4c:
    // 0x252f4c: 0x2c74d0  .word       0x002C74D0                   # mfhi        $t6 # 002C04C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f4cu;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_252f50:
    // 0x252f50: 0x2c74e0  .word       0x002C74E0                   # add         $t6, $at, $t4 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f50u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252f54:
    // 0x252f54: 0x2c74f0  tge         $at, $t4, 467
    ctx->pc = 0x252f54u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252f58:
    // 0x252f58: 0x2c7510  .word       0x002C7510                   # mfhi        $t6 # 002C0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f58u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_252f5c:
    // 0x252f5c: 0x2c7530  tge         $at, $t4, 468
    ctx->pc = 0x252f5cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252f60:
    // 0x252f60: 0x2c7548  .word       0x002C7548                   # jr          $at # 000C7540 <InstrIdType: CPU_SPECIAL>
label_252f64:
    if (ctx->pc == 0x252F64u) {
        ctx->pc = 0x252F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F60u;
        // 0x252f64: 0x2c7560  .word       0x002C7560                   # add         $t6, $at, $t4 # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252F68u;
        goto label_252f68;
    }
    ctx->pc = 0x252F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F60u;
        // 0x252f64: 0x2c7560  .word       0x002C7560                   # add         $t6, $at, $t4 # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252F60u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252F68u;
label_252f68:
    // 0x252f68: 0x2c7578  .word       0x002C7578                   # dsll        $t6, $t4, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f68u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) << 21);
label_252f6c:
    // 0x252f6c: 0x2c7588  .word       0x002C7588                   # jr          $at # 000C7580 <InstrIdType: CPU_SPECIAL>
label_252f70:
    if (ctx->pc == 0x252F70u) {
        ctx->pc = 0x252F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F6Cu;
        // 0x252f70: 0x2c75a0  .word       0x002C75A0                   # add         $t6, $at, $t4 # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252F74u;
        goto label_252f74;
    }
    ctx->pc = 0x252F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F6Cu;
        // 0x252f70: 0x2c75a0  .word       0x002C75A0                   # add         $t6, $at, $t4 # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252F6Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252F74u;
label_252f74:
    // 0x252f74: 0x2c75b0  tge         $at, $t4, 470
    ctx->pc = 0x252f74u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252f78:
    // 0x252f78: 0x2c75c0  .word       0x002C75C0                   # sll         $t6, $t4, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f78u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 23));
label_252f7c:
    // 0x252f7c: 0x2c75d8  .word       0x002C75D8                   # mult        $t6, $at, $t4 # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252f7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_252f80:
    // 0x252f80: 0x2c75e8  .word       0x002C75E8                   # mfsa        $t6 # 002C05C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252f80u;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_252f84:
    // 0x252f84: 0x2c75f0  tge         $at, $t4, 471
    ctx->pc = 0x252f84u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252f88:
    // 0x252f88: 0x2c75f8  .word       0x002C75F8                   # dsll        $t6, $t4, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f88u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) << 23);
label_252f8c:
    // 0x252f8c: 0x2c7608  .word       0x002C7608                   # jr          $at # 000C7600 <InstrIdType: CPU_SPECIAL>
label_252f90:
    if (ctx->pc == 0x252F90u) {
        ctx->pc = 0x252F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F8Cu;
        // 0x252f90: 0x2c7610  .word       0x002C7610                   # mfhi        $t6 # 002C0600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x252F94u;
        goto label_252f94;
    }
    ctx->pc = 0x252F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F8Cu;
        // 0x252f90: 0x2c7610  .word       0x002C7610                   # mfhi        $t6 # 002C0600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252F8Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252F94u;
label_252f94:
    // 0x252f94: 0x2c7618  .word       0x002C7618                   # mult        $t6, $at, $t4 # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252f94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_252f98:
    // 0x252f98: 0x2c7620  .word       0x002C7620                   # add         $t6, $at, $t4 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f98u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252f9c:
    // 0x252f9c: 0x2c7630  tge         $at, $t4, 472
    ctx->pc = 0x252f9cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252fa0:
    // 0x252fa0: 0x2c7640  .word       0x002C7640                   # sll         $t6, $t4, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252fa0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 25));
label_252fa4:
    // 0x252fa4: 0x2c7650  .word       0x002C7650                   # mfhi        $t6 # 002C0640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252fa4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_252fa8:
    // 0x252fa8: 0x2c7660  .word       0x002C7660                   # add         $t6, $at, $t4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252fa8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252fac:
    // 0x252fac: 0x2c7668  .word       0x002C7668                   # mfsa        $t6 # 002C0640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252facu;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_252fb0:
    // 0x252fb0: 0x2c7670  tge         $at, $t4, 473
    ctx->pc = 0x252fb0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252fb4:
    // 0x252fb4: 0x2c7680  .word       0x002C7680                   # sll         $t6, $t4, 26 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252fb4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 26));
label_252fb8:
    // 0x252fb8: 0x2c76a0  .word       0x002C76A0                   # add         $t6, $at, $t4 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252fb8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252fbc:
    // 0x252fbc: 0x2c76c0  .word       0x002C76C0                   # sll         $t6, $t4, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252fbcu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 27));
label_252fc0:
    // 0x252fc0: 0x2c76e0  .word       0x002C76E0                   # add         $t6, $at, $t4 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252fc0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252fc4:
    // 0x252fc4: 0x2c7720  .word       0x002C7720                   # add         $t6, $at, $t4 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252fc4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252fc8:
    // 0x252fc8: 0x2c7740  .word       0x002C7740                   # sll         $t6, $t4, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252fc8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 29));
label_252fcc:
    // 0x252fcc: 0x2c7770  tge         $at, $t4, 477
    ctx->pc = 0x252fccu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252fd0:
    // 0x252fd0: 0x2c7790  .word       0x002C7790                   # mfhi        $t6 # 002C0780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252fd0u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_252fd4:
    // 0x252fd4: 0x2c77b0  tge         $at, $t4, 478
    ctx->pc = 0x252fd4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252fd8:
    // 0x252fd8: 0x2c77d0  .word       0x002C77D0                   # mfhi        $t6 # 002C07C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252fd8u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_252fdc:
    // 0x252fdc: 0x2c7800  .word       0x002C7800                   # sll         $t7, $t4, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252fdcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 0));
label_252fe0:
    // 0x252fe0: 0x2c7820  add         $t7, $at, $t4
    ctx->pc = 0x252fe0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_252fe4:
    // 0x252fe4: 0x2c7848  .word       0x002C7848                   # jr          $at # 000C7840 <InstrIdType: CPU_SPECIAL>
label_252fe8:
    if (ctx->pc == 0x252FE8u) {
        ctx->pc = 0x252FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252FE4u;
        // 0x252fe8: 0x2c7850  .word       0x002C7850                   # mfhi        $t7 # 002C0040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 15, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x252FECu;
        goto label_252fec;
    }
    ctx->pc = 0x252FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252FE4u;
        // 0x252fe8: 0x2c7850  .word       0x002C7850                   # mfhi        $t7 # 002C0040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 15, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252FE4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252FECu;
label_252fec:
    // 0x252fec: 0x2c7868  .word       0x002C7868                   # mfsa        $t7 # 002C0040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252fecu;
    SET_GPR_U32(ctx, 15, ctx->sa);
label_252ff0:
    // 0x252ff0: 0x2c7870  tge         $at, $t4, 481
    ctx->pc = 0x252ff0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252ff4:
    // 0x252ff4: 0x2c78a0  .word       0x002C78A0                   # add         $t7, $at, $t4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ff4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_252ff8:
    // 0x252ff8: 0x2c78e0  .word       0x002C78E0                   # add         $t7, $at, $t4 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ff8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_252ffc:
    // 0x252ffc: 0x2c7910  .word       0x002C7910                   # mfhi        $t7 # 002C0100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ffcu;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_253000:
    // 0x253000: 0x2c7950  .word       0x002C7950                   # mfhi        $t7 # 002C0140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253000u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_253004:
    // 0x253004: 0x2c7970  tge         $at, $t4, 485
    ctx->pc = 0x253004u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_253008:
    // 0x253008: 0x2c79a0  .word       0x002C79A0                   # add         $t7, $at, $t4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253008u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25300c:
    // 0x25300c: 0x2c79d0  .word       0x002C79D0                   # mfhi        $t7 # 002C01C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25300cu;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_253010:
    // 0x253010: 0x2c7a10  .word       0x002C7A10                   # mfhi        $t7 # 002C0200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253010u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_253014:
    // 0x253014: 0x2c7a50  .word       0x002C7A50                   # mfhi        $t7 # 002C0240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253014u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_253018:
    // 0x253018: 0x2c7a80  .word       0x002C7A80                   # sll         $t7, $t4, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253018u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 10));
label_25301c:
    // 0x25301c: 0x2c7ac0  .word       0x002C7AC0                   # sll         $t7, $t4, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25301cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 11));
label_253020:
    // 0x253020: 0x2c7af8  .word       0x002C7AF8                   # dsll        $t7, $t4, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253020u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) << 11);
label_253024:
    // 0x253024: 0x2c7b10  .word       0x002C7B10                   # mfhi        $t7 # 002C0300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253024u;
    SET_GPR_U64(ctx, 15, ctx->hi);
    ctx->pc = 0x253028u;
    return;
}

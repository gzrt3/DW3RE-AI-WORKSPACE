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


void FUN_0019b8d0_part472(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x281880u: goto label_281880;
        case 0x281884u: goto label_281884;
        case 0x281888u: goto label_281888;
        case 0x28188cu: goto label_28188c;
        case 0x281890u: goto label_281890;
        case 0x281894u: goto label_281894;
        case 0x281898u: goto label_281898;
        case 0x28189cu: goto label_28189c;
        case 0x2818a0u: goto label_2818a0;
        case 0x2818a4u: goto label_2818a4;
        case 0x2818a8u: goto label_2818a8;
        case 0x2818acu: goto label_2818ac;
        case 0x2818b0u: goto label_2818b0;
        case 0x2818b4u: goto label_2818b4;
        case 0x2818b8u: goto label_2818b8;
        case 0x2818bcu: goto label_2818bc;
        case 0x2818c0u: goto label_2818c0;
        case 0x2818c4u: goto label_2818c4;
        case 0x2818c8u: goto label_2818c8;
        case 0x2818ccu: goto label_2818cc;
        case 0x2818d0u: goto label_2818d0;
        case 0x2818d4u: goto label_2818d4;
        case 0x2818d8u: goto label_2818d8;
        case 0x2818dcu: goto label_2818dc;
        case 0x2818e0u: goto label_2818e0;
        case 0x2818e4u: goto label_2818e4;
        case 0x2818e8u: goto label_2818e8;
        case 0x2818ecu: goto label_2818ec;
        case 0x2818f0u: goto label_2818f0;
        case 0x2818f4u: goto label_2818f4;
        case 0x2818f8u: goto label_2818f8;
        case 0x2818fcu: goto label_2818fc;
        case 0x281900u: goto label_281900;
        case 0x281904u: goto label_281904;
        case 0x281908u: goto label_281908;
        case 0x28190cu: goto label_28190c;
        case 0x281910u: goto label_281910;
        case 0x281914u: goto label_281914;
        case 0x281918u: goto label_281918;
        case 0x28191cu: goto label_28191c;
        case 0x281920u: goto label_281920;
        case 0x281924u: goto label_281924;
        case 0x281928u: goto label_281928;
        case 0x28192cu: goto label_28192c;
        case 0x281930u: goto label_281930;
        case 0x281934u: goto label_281934;
        case 0x281938u: goto label_281938;
        case 0x28193cu: goto label_28193c;
        case 0x281940u: goto label_281940;
        case 0x281944u: goto label_281944;
        case 0x281948u: goto label_281948;
        case 0x28194cu: goto label_28194c;
        case 0x281950u: goto label_281950;
        case 0x281954u: goto label_281954;
        case 0x281958u: goto label_281958;
        case 0x28195cu: goto label_28195c;
        case 0x281960u: goto label_281960;
        case 0x281964u: goto label_281964;
        case 0x281968u: goto label_281968;
        case 0x28196cu: goto label_28196c;
        case 0x281970u: goto label_281970;
        case 0x281974u: goto label_281974;
        case 0x281978u: goto label_281978;
        case 0x28197cu: goto label_28197c;
        case 0x281980u: goto label_281980;
        case 0x281984u: goto label_281984;
        case 0x281988u: goto label_281988;
        case 0x28198cu: goto label_28198c;
        case 0x281990u: goto label_281990;
        case 0x281994u: goto label_281994;
        case 0x281998u: goto label_281998;
        case 0x28199cu: goto label_28199c;
        case 0x2819a0u: goto label_2819a0;
        case 0x2819a4u: goto label_2819a4;
        case 0x2819a8u: goto label_2819a8;
        case 0x2819acu: goto label_2819ac;
        case 0x2819b0u: goto label_2819b0;
        case 0x2819b4u: goto label_2819b4;
        case 0x2819b8u: goto label_2819b8;
        case 0x2819bcu: goto label_2819bc;
        case 0x2819c0u: goto label_2819c0;
        case 0x2819c4u: goto label_2819c4;
        case 0x2819c8u: goto label_2819c8;
        case 0x2819ccu: goto label_2819cc;
        case 0x2819d0u: goto label_2819d0;
        case 0x2819d4u: goto label_2819d4;
        case 0x2819d8u: goto label_2819d8;
        case 0x2819dcu: goto label_2819dc;
        case 0x2819e0u: goto label_2819e0;
        case 0x2819e4u: goto label_2819e4;
        case 0x2819e8u: goto label_2819e8;
        case 0x2819ecu: goto label_2819ec;
        case 0x2819f0u: goto label_2819f0;
        case 0x2819f4u: goto label_2819f4;
        case 0x2819f8u: goto label_2819f8;
        case 0x2819fcu: goto label_2819fc;
        case 0x281a00u: goto label_281a00;
        case 0x281a04u: goto label_281a04;
        case 0x281a08u: goto label_281a08;
        case 0x281a0cu: goto label_281a0c;
        case 0x281a10u: goto label_281a10;
        case 0x281a14u: goto label_281a14;
        case 0x281a18u: goto label_281a18;
        case 0x281a1cu: goto label_281a1c;
        case 0x281a20u: goto label_281a20;
        case 0x281a24u: goto label_281a24;
        case 0x281a28u: goto label_281a28;
        case 0x281a2cu: goto label_281a2c;
        case 0x281a30u: goto label_281a30;
        case 0x281a34u: goto label_281a34;
        case 0x281a38u: goto label_281a38;
        case 0x281a3cu: goto label_281a3c;
        case 0x281a40u: goto label_281a40;
        case 0x281a44u: goto label_281a44;
        case 0x281a48u: goto label_281a48;
        case 0x281a4cu: goto label_281a4c;
        case 0x281a50u: goto label_281a50;
        case 0x281a54u: goto label_281a54;
        case 0x281a58u: goto label_281a58;
        case 0x281a5cu: goto label_281a5c;
        case 0x281a60u: goto label_281a60;
        case 0x281a64u: goto label_281a64;
        case 0x281a68u: goto label_281a68;
        case 0x281a6cu: goto label_281a6c;
        case 0x281a70u: goto label_281a70;
        case 0x281a74u: goto label_281a74;
        case 0x281a78u: goto label_281a78;
        case 0x281a7cu: goto label_281a7c;
        case 0x281a80u: goto label_281a80;
        case 0x281a84u: goto label_281a84;
        case 0x281a88u: goto label_281a88;
        case 0x281a8cu: goto label_281a8c;
        case 0x281a90u: goto label_281a90;
        case 0x281a94u: goto label_281a94;
        case 0x281a98u: goto label_281a98;
        case 0x281a9cu: goto label_281a9c;
        case 0x281aa0u: goto label_281aa0;
        case 0x281aa4u: goto label_281aa4;
        case 0x281aa8u: goto label_281aa8;
        case 0x281aacu: goto label_281aac;
        case 0x281ab0u: goto label_281ab0;
        case 0x281ab4u: goto label_281ab4;
        case 0x281ab8u: goto label_281ab8;
        case 0x281abcu: goto label_281abc;
        case 0x281ac0u: goto label_281ac0;
        case 0x281ac4u: goto label_281ac4;
        case 0x281ac8u: goto label_281ac8;
        case 0x281accu: goto label_281acc;
        case 0x281ad0u: goto label_281ad0;
        case 0x281ad4u: goto label_281ad4;
        case 0x281ad8u: goto label_281ad8;
        case 0x281adcu: goto label_281adc;
        case 0x281ae0u: goto label_281ae0;
        case 0x281ae4u: goto label_281ae4;
        case 0x281ae8u: goto label_281ae8;
        case 0x281aecu: goto label_281aec;
        case 0x281af0u: goto label_281af0;
        case 0x281af4u: goto label_281af4;
        case 0x281af8u: goto label_281af8;
        case 0x281afcu: goto label_281afc;
        case 0x281b00u: goto label_281b00;
        case 0x281b04u: goto label_281b04;
        case 0x281b08u: goto label_281b08;
        case 0x281b0cu: goto label_281b0c;
        case 0x281b10u: goto label_281b10;
        case 0x281b14u: goto label_281b14;
        case 0x281b18u: goto label_281b18;
        case 0x281b1cu: goto label_281b1c;
        case 0x281b20u: goto label_281b20;
        case 0x281b24u: goto label_281b24;
        case 0x281b28u: goto label_281b28;
        case 0x281b2cu: goto label_281b2c;
        case 0x281b30u: goto label_281b30;
        case 0x281b34u: goto label_281b34;
        case 0x281b38u: goto label_281b38;
        case 0x281b3cu: goto label_281b3c;
        case 0x281b40u: goto label_281b40;
        case 0x281b44u: goto label_281b44;
        case 0x281b48u: goto label_281b48;
        case 0x281b4cu: goto label_281b4c;
        case 0x281b50u: goto label_281b50;
        case 0x281b54u: goto label_281b54;
        case 0x281b58u: goto label_281b58;
        case 0x281b5cu: goto label_281b5c;
        case 0x281b60u: goto label_281b60;
        case 0x281b64u: goto label_281b64;
        case 0x281b68u: goto label_281b68;
        case 0x281b6cu: goto label_281b6c;
        case 0x281b70u: goto label_281b70;
        case 0x281b74u: goto label_281b74;
        case 0x281b78u: goto label_281b78;
        case 0x281b7cu: goto label_281b7c;
        case 0x281b80u: goto label_281b80;
        case 0x281b84u: goto label_281b84;
        case 0x281b88u: goto label_281b88;
        case 0x281b8cu: goto label_281b8c;
        case 0x281b90u: goto label_281b90;
        case 0x281b94u: goto label_281b94;
        case 0x281b98u: goto label_281b98;
        case 0x281b9cu: goto label_281b9c;
        case 0x281ba0u: goto label_281ba0;
        case 0x281ba4u: goto label_281ba4;
        case 0x281ba8u: goto label_281ba8;
        case 0x281bacu: goto label_281bac;
        case 0x281bb0u: goto label_281bb0;
        case 0x281bb4u: goto label_281bb4;
        case 0x281bb8u: goto label_281bb8;
        case 0x281bbcu: goto label_281bbc;
        case 0x281bc0u: goto label_281bc0;
        case 0x281bc4u: goto label_281bc4;
        case 0x281bc8u: goto label_281bc8;
        case 0x281bccu: goto label_281bcc;
        case 0x281bd0u: goto label_281bd0;
        case 0x281bd4u: goto label_281bd4;
        case 0x281bd8u: goto label_281bd8;
        case 0x281bdcu: goto label_281bdc;
        case 0x281be0u: goto label_281be0;
        case 0x281be4u: goto label_281be4;
        case 0x281be8u: goto label_281be8;
        case 0x281becu: goto label_281bec;
        case 0x281bf0u: goto label_281bf0;
        case 0x281bf4u: goto label_281bf4;
        case 0x281bf8u: goto label_281bf8;
        case 0x281bfcu: goto label_281bfc;
        case 0x281c00u: goto label_281c00;
        case 0x281c04u: goto label_281c04;
        case 0x281c08u: goto label_281c08;
        case 0x281c0cu: goto label_281c0c;
        case 0x281c10u: goto label_281c10;
        case 0x281c14u: goto label_281c14;
        case 0x281c18u: goto label_281c18;
        case 0x281c1cu: goto label_281c1c;
        case 0x281c20u: goto label_281c20;
        case 0x281c24u: goto label_281c24;
        case 0x281c28u: goto label_281c28;
        case 0x281c2cu: goto label_281c2c;
        case 0x281c30u: goto label_281c30;
        case 0x281c34u: goto label_281c34;
        case 0x281c38u: goto label_281c38;
        case 0x281c3cu: goto label_281c3c;
        case 0x281c40u: goto label_281c40;
        case 0x281c44u: goto label_281c44;
        case 0x281c48u: goto label_281c48;
        case 0x281c4cu: goto label_281c4c;
        case 0x281c50u: goto label_281c50;
        case 0x281c54u: goto label_281c54;
        case 0x281c58u: goto label_281c58;
        case 0x281c5cu: goto label_281c5c;
        case 0x281c60u: goto label_281c60;
        case 0x281c64u: goto label_281c64;
        case 0x281c68u: goto label_281c68;
        case 0x281c6cu: goto label_281c6c;
        case 0x281c70u: goto label_281c70;
        case 0x281c74u: goto label_281c74;
        case 0x281c78u: goto label_281c78;
        case 0x281c7cu: goto label_281c7c;
        case 0x281c80u: goto label_281c80;
        case 0x281c84u: goto label_281c84;
        case 0x281c88u: goto label_281c88;
        case 0x281c8cu: goto label_281c8c;
        case 0x281c90u: goto label_281c90;
        case 0x281c94u: goto label_281c94;
        case 0x281c98u: goto label_281c98;
        case 0x281c9cu: goto label_281c9c;
        case 0x281ca0u: goto label_281ca0;
        case 0x281ca4u: goto label_281ca4;
        case 0x281ca8u: goto label_281ca8;
        case 0x281cacu: goto label_281cac;
        case 0x281cb0u: goto label_281cb0;
        case 0x281cb4u: goto label_281cb4;
        case 0x281cb8u: goto label_281cb8;
        case 0x281cbcu: goto label_281cbc;
        case 0x281cc0u: goto label_281cc0;
        case 0x281cc4u: goto label_281cc4;
        case 0x281cc8u: goto label_281cc8;
        case 0x281cccu: goto label_281ccc;
        case 0x281cd0u: goto label_281cd0;
        case 0x281cd4u: goto label_281cd4;
        case 0x281cd8u: goto label_281cd8;
        case 0x281cdcu: goto label_281cdc;
        case 0x281ce0u: goto label_281ce0;
        case 0x281ce4u: goto label_281ce4;
        case 0x281ce8u: goto label_281ce8;
        case 0x281cecu: goto label_281cec;
        case 0x281cf0u: goto label_281cf0;
        case 0x281cf4u: goto label_281cf4;
        case 0x281cf8u: goto label_281cf8;
        case 0x281cfcu: goto label_281cfc;
        case 0x281d00u: goto label_281d00;
        case 0x281d04u: goto label_281d04;
        case 0x281d08u: goto label_281d08;
        case 0x281d0cu: goto label_281d0c;
        case 0x281d10u: goto label_281d10;
        case 0x281d14u: goto label_281d14;
        case 0x281d18u: goto label_281d18;
        case 0x281d1cu: goto label_281d1c;
        case 0x281d20u: goto label_281d20;
        case 0x281d24u: goto label_281d24;
        case 0x281d28u: goto label_281d28;
        case 0x281d2cu: goto label_281d2c;
        case 0x281d30u: goto label_281d30;
        case 0x281d34u: goto label_281d34;
        case 0x281d38u: goto label_281d38;
        case 0x281d3cu: goto label_281d3c;
        case 0x281d40u: goto label_281d40;
        case 0x281d44u: goto label_281d44;
        case 0x281d48u: goto label_281d48;
        case 0x281d4cu: goto label_281d4c;
        case 0x281d50u: goto label_281d50;
        case 0x281d54u: goto label_281d54;
        case 0x281d58u: goto label_281d58;
        case 0x281d5cu: goto label_281d5c;
        case 0x281d60u: goto label_281d60;
        case 0x281d64u: goto label_281d64;
        case 0x281d68u: goto label_281d68;
        case 0x281d6cu: goto label_281d6c;
        case 0x281d70u: goto label_281d70;
        case 0x281d74u: goto label_281d74;
        case 0x281d78u: goto label_281d78;
        case 0x281d7cu: goto label_281d7c;
        case 0x281d80u: goto label_281d80;
        case 0x281d84u: goto label_281d84;
        case 0x281d88u: goto label_281d88;
        case 0x281d8cu: goto label_281d8c;
        case 0x281d90u: goto label_281d90;
        case 0x281d94u: goto label_281d94;
        case 0x281d98u: goto label_281d98;
        case 0x281d9cu: goto label_281d9c;
        case 0x281da0u: goto label_281da0;
        case 0x281da4u: goto label_281da4;
        case 0x281da8u: goto label_281da8;
        case 0x281dacu: goto label_281dac;
        case 0x281db0u: goto label_281db0;
        case 0x281db4u: goto label_281db4;
        case 0x281db8u: goto label_281db8;
        case 0x281dbcu: goto label_281dbc;
        case 0x281dc0u: goto label_281dc0;
        case 0x281dc4u: goto label_281dc4;
        case 0x281dc8u: goto label_281dc8;
        case 0x281dccu: goto label_281dcc;
        case 0x281dd0u: goto label_281dd0;
        case 0x281dd4u: goto label_281dd4;
        case 0x281dd8u: goto label_281dd8;
        case 0x281ddcu: goto label_281ddc;
        case 0x281de0u: goto label_281de0;
        case 0x281de4u: goto label_281de4;
        case 0x281de8u: goto label_281de8;
        case 0x281decu: goto label_281dec;
        case 0x281df0u: goto label_281df0;
        case 0x281df4u: goto label_281df4;
        case 0x281df8u: goto label_281df8;
        case 0x281dfcu: goto label_281dfc;
        case 0x281e00u: goto label_281e00;
        case 0x281e04u: goto label_281e04;
        case 0x281e08u: goto label_281e08;
        case 0x281e0cu: goto label_281e0c;
        case 0x281e10u: goto label_281e10;
        case 0x281e14u: goto label_281e14;
        case 0x281e18u: goto label_281e18;
        case 0x281e1cu: goto label_281e1c;
        case 0x281e20u: goto label_281e20;
        case 0x281e24u: goto label_281e24;
        case 0x281e28u: goto label_281e28;
        case 0x281e2cu: goto label_281e2c;
        case 0x281e30u: goto label_281e30;
        case 0x281e34u: goto label_281e34;
        case 0x281e38u: goto label_281e38;
        case 0x281e3cu: goto label_281e3c;
        case 0x281e40u: goto label_281e40;
        case 0x281e44u: goto label_281e44;
        case 0x281e48u: goto label_281e48;
        case 0x281e4cu: goto label_281e4c;
        case 0x281e50u: goto label_281e50;
        case 0x281e54u: goto label_281e54;
        case 0x281e58u: goto label_281e58;
        case 0x281e5cu: goto label_281e5c;
        case 0x281e60u: goto label_281e60;
        case 0x281e64u: goto label_281e64;
        case 0x281e68u: goto label_281e68;
        case 0x281e6cu: goto label_281e6c;
        case 0x281e70u: goto label_281e70;
        case 0x281e74u: goto label_281e74;
        case 0x281e78u: goto label_281e78;
        case 0x281e7cu: goto label_281e7c;
        case 0x281e80u: goto label_281e80;
        case 0x281e84u: goto label_281e84;
        case 0x281e88u: goto label_281e88;
        case 0x281e8cu: goto label_281e8c;
        case 0x281e90u: goto label_281e90;
        case 0x281e94u: goto label_281e94;
        case 0x281e98u: goto label_281e98;
        case 0x281e9cu: goto label_281e9c;
        case 0x281ea0u: goto label_281ea0;
        case 0x281ea4u: goto label_281ea4;
        case 0x281ea8u: goto label_281ea8;
        case 0x281eacu: goto label_281eac;
        case 0x281eb0u: goto label_281eb0;
        case 0x281eb4u: goto label_281eb4;
        case 0x281eb8u: goto label_281eb8;
        case 0x281ebcu: goto label_281ebc;
        case 0x281ec0u: goto label_281ec0;
        case 0x281ec4u: goto label_281ec4;
        case 0x281ec8u: goto label_281ec8;
        case 0x281eccu: goto label_281ecc;
        case 0x281ed0u: goto label_281ed0;
        case 0x281ed4u: goto label_281ed4;
        case 0x281ed8u: goto label_281ed8;
        case 0x281edcu: goto label_281edc;
        case 0x281ee0u: goto label_281ee0;
        case 0x281ee4u: goto label_281ee4;
        case 0x281ee8u: goto label_281ee8;
        case 0x281eecu: goto label_281eec;
        case 0x281ef0u: goto label_281ef0;
        case 0x281ef4u: goto label_281ef4;
        case 0x281ef8u: goto label_281ef8;
        case 0x281efcu: goto label_281efc;
        case 0x281f00u: goto label_281f00;
        case 0x281f04u: goto label_281f04;
        case 0x281f08u: goto label_281f08;
        case 0x281f0cu: goto label_281f0c;
        case 0x281f10u: goto label_281f10;
        case 0x281f14u: goto label_281f14;
        case 0x281f18u: goto label_281f18;
        case 0x281f1cu: goto label_281f1c;
        case 0x281f20u: goto label_281f20;
        case 0x281f24u: goto label_281f24;
        case 0x281f28u: goto label_281f28;
        case 0x281f2cu: goto label_281f2c;
        case 0x281f30u: goto label_281f30;
        case 0x281f34u: goto label_281f34;
        case 0x281f38u: goto label_281f38;
        case 0x281f3cu: goto label_281f3c;
        case 0x281f40u: goto label_281f40;
        case 0x281f44u: goto label_281f44;
        case 0x281f48u: goto label_281f48;
        case 0x281f4cu: goto label_281f4c;
        case 0x281f50u: goto label_281f50;
        case 0x281f54u: goto label_281f54;
        case 0x281f58u: goto label_281f58;
        case 0x281f5cu: goto label_281f5c;
        case 0x281f60u: goto label_281f60;
        case 0x281f64u: goto label_281f64;
        case 0x281f68u: goto label_281f68;
        case 0x281f6cu: goto label_281f6c;
        case 0x281f70u: goto label_281f70;
        case 0x281f74u: goto label_281f74;
        case 0x281f78u: goto label_281f78;
        case 0x281f7cu: goto label_281f7c;
        case 0x281f80u: goto label_281f80;
        case 0x281f84u: goto label_281f84;
        case 0x281f88u: goto label_281f88;
        case 0x281f8cu: goto label_281f8c;
        case 0x281f90u: goto label_281f90;
        case 0x281f94u: goto label_281f94;
        case 0x281f98u: goto label_281f98;
        case 0x281f9cu: goto label_281f9c;
        case 0x281fa0u: goto label_281fa0;
        case 0x281fa4u: goto label_281fa4;
        case 0x281fa8u: goto label_281fa8;
        case 0x281facu: goto label_281fac;
        case 0x281fb0u: goto label_281fb0;
        case 0x281fb4u: goto label_281fb4;
        case 0x281fb8u: goto label_281fb8;
        case 0x281fbcu: goto label_281fbc;
        case 0x281fc0u: goto label_281fc0;
        case 0x281fc4u: goto label_281fc4;
        case 0x281fc8u: goto label_281fc8;
        case 0x281fccu: goto label_281fcc;
        case 0x281fd0u: goto label_281fd0;
        case 0x281fd4u: goto label_281fd4;
        case 0x281fd8u: goto label_281fd8;
        case 0x281fdcu: goto label_281fdc;
        case 0x281fe0u: goto label_281fe0;
        case 0x281fe4u: goto label_281fe4;
        case 0x281fe8u: goto label_281fe8;
        case 0x281fecu: goto label_281fec;
        case 0x281ff0u: goto label_281ff0;
        case 0x281ff4u: goto label_281ff4;
        case 0x281ff8u: goto label_281ff8;
        case 0x281ffcu: goto label_281ffc;
        case 0x282000u: goto label_282000;
        case 0x282004u: goto label_282004;
        case 0x282008u: goto label_282008;
        case 0x28200cu: goto label_28200c;
        case 0x282010u: goto label_282010;
        case 0x282014u: goto label_282014;
        case 0x282018u: goto label_282018;
        case 0x28201cu: goto label_28201c;
        case 0x282020u: goto label_282020;
        case 0x282024u: goto label_282024;
        case 0x282028u: goto label_282028;
        case 0x28202cu: goto label_28202c;
        case 0x282030u: goto label_282030;
        case 0x282034u: goto label_282034;
        case 0x282038u: goto label_282038;
        case 0x28203cu: goto label_28203c;
        case 0x282040u: goto label_282040;
        case 0x282044u: goto label_282044;
        case 0x282048u: goto label_282048;
        case 0x28204cu: goto label_28204c;
        default: return;
    }

label_281880:
    // 0x281880: 0x0  nop
    ctx->pc = 0x281880u;
    // NOP
label_281884:
    // 0x281884: 0x0  nop
    ctx->pc = 0x281884u;
    // NOP
label_281888:
    // 0x281888: 0x0  nop
    ctx->pc = 0x281888u;
    // NOP
label_28188c:
    // 0x28188c: 0x0  nop
    ctx->pc = 0x28188cu;
    // NOP
label_281890:
    // 0x281890: 0x0  nop
    ctx->pc = 0x281890u;
    // NOP
label_281894:
    // 0x281894: 0x0  nop
    ctx->pc = 0x281894u;
    // NOP
label_281898:
    // 0x281898: 0x0  nop
    ctx->pc = 0x281898u;
    // NOP
label_28189c:
    // 0x28189c: 0x0  nop
    ctx->pc = 0x28189cu;
    // NOP
label_2818a0:
    // 0x2818a0: 0x0  nop
    ctx->pc = 0x2818a0u;
    // NOP
label_2818a4:
    // 0x2818a4: 0x0  nop
    ctx->pc = 0x2818a4u;
    // NOP
label_2818a8:
    // 0x2818a8: 0x0  nop
    ctx->pc = 0x2818a8u;
    // NOP
label_2818ac:
    // 0x2818ac: 0x0  nop
    ctx->pc = 0x2818acu;
    // NOP
label_2818b0:
    // 0x2818b0: 0x0  nop
    ctx->pc = 0x2818b0u;
    // NOP
label_2818b4:
    // 0x2818b4: 0x0  nop
    ctx->pc = 0x2818b4u;
    // NOP
label_2818b8:
    // 0x2818b8: 0x0  nop
    ctx->pc = 0x2818b8u;
    // NOP
label_2818bc:
    // 0x2818bc: 0x0  nop
    ctx->pc = 0x2818bcu;
    // NOP
label_2818c0:
    // 0x2818c0: 0x0  nop
    ctx->pc = 0x2818c0u;
    // NOP
label_2818c4:
    // 0x2818c4: 0x0  nop
    ctx->pc = 0x2818c4u;
    // NOP
label_2818c8:
    // 0x2818c8: 0x0  nop
    ctx->pc = 0x2818c8u;
    // NOP
label_2818cc:
    // 0x2818cc: 0x0  nop
    ctx->pc = 0x2818ccu;
    // NOP
label_2818d0:
    // 0x2818d0: 0x520029  .word       0x00520029                   # mtsa        $v0 # 00120000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2818d0u;
    ctx->sa = GPR_U32(ctx, 2) & 0x7F;
label_2818d4:
    // 0x2818d4: 0x520052  .word       0x00520052                   # mflo        $zero # 00520040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2818d4u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2818d8:
    // 0x2818d8: 0x520052  .word       0x00520052                   # mflo        $zero # 00520040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2818d8u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2818dc:
    // 0x2818dc: 0x520052  .word       0x00520052                   # mflo        $zero # 00520040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2818dcu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2818e0:
    // 0x2818e0: 0x520052  .word       0x00520052                   # mflo        $zero # 00520040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2818e0u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2818e4:
    // 0x2818e4: 0x520052  .word       0x00520052                   # mflo        $zero # 00520040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2818e4u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2818e8:
    // 0x2818e8: 0x520052  .word       0x00520052                   # mflo        $zero # 00520040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2818e8u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2818ec:
    // 0x2818ec: 0x520052  .word       0x00520052                   # mflo        $zero # 00520040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2818ecu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2818f0:
    // 0x2818f0: 0x520052  .word       0x00520052                   # mflo        $zero # 00520040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2818f0u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2818f4:
    // 0x2818f4: 0x520052  .word       0x00520052                   # mflo        $zero # 00520040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2818f4u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2818f8:
    // 0x2818f8: 0x520052  .word       0x00520052                   # mflo        $zero # 00520040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2818f8u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2818fc:
    // 0x2818fc: 0x520052  .word       0x00520052                   # mflo        $zero # 00520040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2818fcu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_281900:
    // 0x281900: 0x520052  .word       0x00520052                   # mflo        $zero # 00520040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281900u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_281904:
    // 0x281904: 0x520052  .word       0x00520052                   # mflo        $zero # 00520040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281904u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_281908:
    // 0x281908: 0x520052  .word       0x00520052                   # mflo        $zero # 00520040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281908u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_28190c:
    // 0x28190c: 0x520052  .word       0x00520052                   # mflo        $zero # 00520040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28190cu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_281910:
    // 0x281910: 0x520052  .word       0x00520052                   # mflo        $zero # 00520040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281910u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_281914:
    // 0x281914: 0x520052  .word       0x00520052                   # mflo        $zero # 00520040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281914u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_281918:
    // 0x281918: 0x520052  .word       0x00520052                   # mflo        $zero # 00520040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281918u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_28191c:
    // 0x28191c: 0x520052  .word       0x00520052                   # mflo        $zero # 00520040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28191cu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_281920:
    // 0x281920: 0x520052  .word       0x00520052                   # mflo        $zero # 00520040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281920u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_281924:
    // 0x281924: 0x520052  .word       0x00520052                   # mflo        $zero # 00520040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281924u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_281928:
    // 0x281928: 0x7b0052  .word       0x007B0052                   # mflo        $zero # 007B0040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281928u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_28192c:
    // 0x28192c: 0xa400a4  .word       0x00A400A4                   # and         $zero, $a1, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28192cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_281930:
    // 0x281930: 0xa400a4  .word       0x00A400A4                   # and         $zero, $a1, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281930u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_281934:
    // 0x281934: 0xa400a4  .word       0x00A400A4                   # and         $zero, $a1, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281934u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_281938:
    // 0x281938: 0xa400a4  .word       0x00A400A4                   # and         $zero, $a1, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281938u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_28193c:
    // 0x28193c: 0xa400a4  .word       0x00A400A4                   # and         $zero, $a1, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28193cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_281940:
    // 0x281940: 0xa400a4  .word       0x00A400A4                   # and         $zero, $a1, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281940u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_281944:
    // 0x281944: 0xa400a4  .word       0x00A400A4                   # and         $zero, $a1, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281944u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_281948:
    // 0x281948: 0xa400a4  .word       0x00A400A4                   # and         $zero, $a1, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281948u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_28194c:
    // 0x28194c: 0xa400a4  .word       0x00A400A4                   # and         $zero, $a1, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28194cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_281950:
    // 0x281950: 0xa400a4  .word       0x00A400A4                   # and         $zero, $a1, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281950u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_281954:
    // 0x281954: 0xa400a4  .word       0x00A400A4                   # and         $zero, $a1, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281954u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_281958:
    // 0x281958: 0xa400a4  .word       0x00A400A4                   # and         $zero, $a1, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281958u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_28195c:
    // 0x28195c: 0xa400a4  .word       0x00A400A4                   # and         $zero, $a1, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28195cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_281960:
    // 0x281960: 0xcd00cd  break       205, 3
    ctx->pc = 0x281960u;
    runtime->handleBreak(rdram, ctx);
label_281964:
    // 0x281964: 0xcd00cd  break       205, 3
    ctx->pc = 0x281964u;
    runtime->handleBreak(rdram, ctx);
label_281968:
    // 0x281968: 0xcd00cd  break       205, 3
    ctx->pc = 0x281968u;
    runtime->handleBreak(rdram, ctx);
label_28196c:
    // 0x28196c: 0xcd00cd  break       205, 3
    ctx->pc = 0x28196cu;
    runtime->handleBreak(rdram, ctx);
label_281970:
    // 0x281970: 0xcd00cd  break       205, 3
    ctx->pc = 0x281970u;
    runtime->handleBreak(rdram, ctx);
label_281974:
    // 0x281974: 0xcd00cd  break       205, 3
    ctx->pc = 0x281974u;
    runtime->handleBreak(rdram, ctx);
label_281978:
    // 0x281978: 0xcd00cd  break       205, 3
    ctx->pc = 0x281978u;
    runtime->handleBreak(rdram, ctx);
label_28197c:
    // 0x28197c: 0xcd00cd  break       205, 3
    ctx->pc = 0x28197cu;
    runtime->handleBreak(rdram, ctx);
label_281980:
    // 0x281980: 0xcd00cd  break       205, 3
    ctx->pc = 0x281980u;
    runtime->handleBreak(rdram, ctx);
label_281984:
    // 0x281984: 0xcd00cd  break       205, 3
    ctx->pc = 0x281984u;
    runtime->handleBreak(rdram, ctx);
label_281988:
    // 0x281988: 0xcd00cd  break       205, 3
    ctx->pc = 0x281988u;
    runtime->handleBreak(rdram, ctx);
label_28198c:
    // 0x28198c: 0xcd00cd  break       205, 3
    ctx->pc = 0x28198cu;
    runtime->handleBreak(rdram, ctx);
label_281990:
    // 0x281990: 0xcd00cd  break       205, 3
    ctx->pc = 0x281990u;
    runtime->handleBreak(rdram, ctx);
label_281994:
    // 0x281994: 0xcd00cd  break       205, 3
    ctx->pc = 0x281994u;
    runtime->handleBreak(rdram, ctx);
label_281998:
    // 0x281998: 0xcd00cd  break       205, 3
    ctx->pc = 0x281998u;
    runtime->handleBreak(rdram, ctx);
label_28199c:
    // 0x28199c: 0xcd00cd  break       205, 3
    ctx->pc = 0x28199cu;
    runtime->handleBreak(rdram, ctx);
label_2819a0:
    // 0x2819a0: 0xcd00cd  break       205, 3
    ctx->pc = 0x2819a0u;
    runtime->handleBreak(rdram, ctx);
label_2819a4:
    // 0x2819a4: 0xcd00cd  break       205, 3
    ctx->pc = 0x2819a4u;
    runtime->handleBreak(rdram, ctx);
label_2819a8:
    // 0x2819a8: 0xcd00cd  break       205, 3
    ctx->pc = 0x2819a8u;
    runtime->handleBreak(rdram, ctx);
label_2819ac:
    // 0x2819ac: 0xcd00cd  break       205, 3
    ctx->pc = 0x2819acu;
    runtime->handleBreak(rdram, ctx);
label_2819b0:
    // 0x2819b0: 0xcd00cd  break       205, 3
    ctx->pc = 0x2819b0u;
    runtime->handleBreak(rdram, ctx);
label_2819b4:
    // 0x2819b4: 0xcd00cd  break       205, 3
    ctx->pc = 0x2819b4u;
    runtime->handleBreak(rdram, ctx);
label_2819b8:
    // 0x2819b8: 0xf600cd  break       246, 3
    ctx->pc = 0x2819b8u;
    runtime->handleBreak(rdram, ctx);
label_2819bc:
    // 0x2819bc: 0xf600f6  tne         $a3, $s6, 3
    ctx->pc = 0x2819bcu;
    if (GPR_U64(ctx, 7) != GPR_U64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_2819c0:
    // 0x2819c0: 0xf600f6  tne         $a3, $s6, 3
    ctx->pc = 0x2819c0u;
    if (GPR_U64(ctx, 7) != GPR_U64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_2819c4:
    // 0x2819c4: 0xf600f6  tne         $a3, $s6, 3
    ctx->pc = 0x2819c4u;
    if (GPR_U64(ctx, 7) != GPR_U64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_2819c8:
    // 0x2819c8: 0xf6  tne         $zero, $zero, 3
    ctx->pc = 0x2819c8u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2819cc:
    // 0x2819cc: 0x0  nop
    ctx->pc = 0x2819ccu;
    // NOP
label_2819d0:
    // 0x2819d0: 0x50000  sll         $zero, $a1, 0
    ctx->pc = 0x2819d0u;
    
label_2819d4:
    // 0x2819d4: 0x26001c  dmult       $at, $a2
    ctx->pc = 0x2819d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2819D4 raw=0x0026001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2819d8:
    // 0x2819d8: 0x3d0030  tge         $at, $sp, 0
    ctx->pc = 0x2819d8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_2819dc:
    // 0x2819dc: 0x5a0051  .word       0x005A0051                   # mthi        $v0 # 001A0040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2819dcu;
    ctx->hi = GPR_U64(ctx, 2);
label_2819e0:
    // 0x2819e0: 0x87006a  .word       0x0087006A                   # slt         $zero, $a0, $a3 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2819e0u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_2819e4:
    // 0x2819e4: 0x9d008f  .word       0x009D008F                   # sync # 009D0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2819e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2819e8:
    // 0x2819e8: 0xb700b2  tlt         $a1, $s7, 2
    ctx->pc = 0x2819e8u;
    if (GPR_S64(ctx, 5) < GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_2819ec:
    // 0x2819ec: 0xc800bd  .word       0x00C800BD                   # INVALID     $a2, $t0, 0xBD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2819ecu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2819EC raw=0x00C800BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2819f0:
    // 0x2819f0: 0xf800ea  .word       0x00F800EA                   # slt         $zero, $a3, $t8 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2819f0u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
label_2819f4:
    // 0x2819f4: 0x1130101  .word       0x01130101                   # INVALID     $t0, $s3, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2819f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2819F4 raw=0x01130101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2819f8:
    // 0x2819f8: 0x11e011b  .word       0x011E011B                   # divu        $zero, $t0, $fp # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2819f8u;
    { uint32_t divisor = GPR_U32(ctx, 30); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,8); } }
label_2819fc:
    // 0x2819fc: 0x11e  .word       0x0000011E                   # ddiv        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2819fcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2819FC raw=0x0000011E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281a00:
    // 0x281a00: 0x40000  sll         $zero, $a0, 0
    ctx->pc = 0x281a00u;
    
label_281a04:
    // 0x281a04: 0x1f0019  multu       $zero, $ra
    ctx->pc = 0x281a04u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 31); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_281a08:
    // 0x281a08: 0x2a0022  sub         $zero, $at, $t2
    ctx->pc = 0x281a08u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 1), GPR_U32(ctx, 10), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_281a0c:
    // 0x281a0c: 0x5c0042  .word       0x005C0042                   # srl         $zero, $gp, 1 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281a0cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 28), 1));
label_281a10:
    // 0x281a10: 0x88006f  .word       0x0088006F                   # dsubu       $zero, $a0, $t0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281a10u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 4) - GPR_U64(ctx, 8));
label_281a14:
    // 0x281a14: 0x9b0091  .word       0x009B0091                   # mthi        $a0 # 001B0080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281a14u;
    ctx->hi = GPR_U64(ctx, 4);
label_281a18:
    // 0x281a18: 0xb300a9  .word       0x00B300A9                   # mtsa        $a1 # 00130080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x281a18u;
    ctx->sa = GPR_U32(ctx, 5) & 0x7F;
label_281a1c:
    // 0x281a1c: 0xbd00b8  .word       0x00BD00B8                   # dsll        $zero, $sp, 2 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281a1cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 29) << 2);
label_281a20:
    // 0x281a20: 0xd100c8  .word       0x00D100C8                   # jr          $a2 # 001100C0 <InstrIdType: CPU_SPECIAL>
label_281a24:
    if (ctx->pc == 0x281A24u) {
        ctx->pc = 0x281A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A20u;
        // 0x281a24: 0xe100db  .word       0x00E100DB                   # divu        $zero, $a3, $at # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x281A28u;
        goto label_281a28;
    }
    ctx->pc = 0x281A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        ctx->pc = 0x281A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A20u;
        // 0x281a24: 0xe100db  .word       0x00E100DB                   # divu        $zero, $a3, $at # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281A20u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x281A28u;
label_281a28:
    // 0x281a28: 0xef00e7  .word       0x00EF00E7                   # nor         $zero, $a3, $t7 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281a28u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 7) | GPR_U64(ctx, 15)));
label_281a2c:
    // 0x281a2c: 0xf4  teq         $zero, $zero, 3
    ctx->pc = 0x281a2cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_281a30:
    // 0x281a30: 0x140000  sll         $zero, $s4, 0
    ctx->pc = 0x281a30u;
    
label_281a34:
    // 0x281a34: 0x37002f  dsubu       $zero, $at, $s7
    ctx->pc = 0x281a34u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) - GPR_U64(ctx, 23));
label_281a38:
    // 0x281a38: 0x45003c  .word       0x0045003C                   # dsll32      $zero, $a1, 0 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281a38u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) << (32 + 0));
label_281a3c:
    // 0x281a3c: 0x730062  .word       0x00730062                   # sub         $zero, $v1, $s3 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281a3cu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 3), GPR_U32(ctx, 19), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_281a40:
    // 0x281a40: 0xd20097  .word       0x00D20097                   # dsrav       $zero, $s2, $a2 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281a40u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 18) >> (GPR_U32(ctx, 6) & 0x3F));
label_281a44:
    // 0x281a44: 0xe500da  .word       0x00E500DA                   # div         $zero, $a3, $a1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281a44u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_281a48:
    // 0x281a48: 0x1070102  .word       0x01070102                   # srl         $zero, $a3, 4 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281a48u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
label_281a4c:
    // 0x281a4c: 0x123010f  .word       0x0123010F                   # sync # 01230000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281a4cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_281a50:
    // 0x281a50: 0x13f0133  tltu        $t1, $ra, 4
    ctx->pc = 0x281a50u;
    if (GPR_U64(ctx, 9) < GPR_U64(ctx, 31)) { runtime->handleTrap(rdram, ctx); }
label_281a54:
    // 0x281a54: 0x1650144  .word       0x01650144                   # sllv        $zero, $a1, $t3 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281a54u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 11) & 0x1F));
label_281a58:
    // 0x281a58: 0x183017f  .word       0x0183017F                   # dsra32      $zero, $v1, 5 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281a58u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 3) >> (32 + 5));
label_281a5c:
    // 0x281a5c: 0x18a  .word       0x0000018A                   # movz        $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281a5cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_281a60:
    // 0x281a60: 0x38060f02  xori        $a2, $zero, 0xF02
    ctx->pc = 0x281a60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)3842);
label_281a64:
    // 0x281a64: 0x1402380b  bne         $zero, $v0, . + 4 + (0x380B << 2)
label_281a68:
    if (ctx->pc == 0x281A68u) {
        ctx->pc = 0x281A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A64u;
        // 0x281a68: 0xa071408  j           func_81C5020 (Delay Slot)
        // J 0x81C5020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x281A6Cu;
        goto label_281a6c;
    }
    ctx->pc = 0x281A64u;
    {
        const bool branch_taken_0x281a64 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        ctx->pc = 0x281A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A64u;
        // 0x281a68: 0xa071408  j           func_81C5020 (Delay Slot)
        // J 0x81C5020 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x281a64) {
            ctx->pc = 0x28FA94u;
            { ctx->pc = 0x28fa94; return; }
        }
    }
    ctx->pc = 0x281A6Cu;
label_281a6c:
    // 0x281a6c: 0x1f011f04  .word       0x1F011F04                   # bgtz        $t8, . + 4 + (0x1F04 << 2) # 00010000 <InstrIdType: CPU_NORMAL>
label_281a70:
    if (ctx->pc == 0x281A70u) {
        ctx->pc = 0x281A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A6Cu;
        // 0x281a70: 0x29040101  slti        $a0, $t0, 0x101 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)257) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x281A74u;
        goto label_281a74;
    }
    ctx->pc = 0x281A6Cu;
    {
        const bool branch_taken_0x281a6c = (GPR_S32(ctx, 24) > 0);
        ctx->pc = 0x281A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A6Cu;
        // 0x281a70: 0x29040101  slti        $a0, $t0, 0x101 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)257) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x281a6c) {
            ctx->pc = 0x289680u;
            { ctx->pc = 0x289680; return; }
        }
    }
    ctx->pc = 0x281A74u;
label_281a74:
    // 0x281a74: 0x101  .word       0x00000101                   # INVALID     $zero, $zero, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281a74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x281A74 raw=0x00000101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281a78:
    // 0x281a78: 0x1010f0a  .word       0x01010F0A                   # movz        $at, $t0, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281a78u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 8));
label_281a7c:
    // 0x281a7c: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281a7cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x281A7C raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281a80:
    // 0x281a80: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281a80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x281A80 raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281a84:
    // 0x281a84: 0x101  .word       0x00000101                   # INVALID     $zero, $zero, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281a84u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x281A84 raw=0x00000101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281a88:
    // 0x281a88: 0x0  nop
    ctx->pc = 0x281a88u;
    // NOP
label_281a8c:
    // 0x281a8c: 0x0  nop
    ctx->pc = 0x281a8cu;
    // NOP
label_281a90:
    // 0x281a90: 0x38040f01  xori        $a0, $zero, 0xF01
    ctx->pc = 0x281a90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)3841);
label_281a94:
    // 0x281a94: 0x1402380c  bne         $zero, $v0, . + 4 + (0x380C << 2)
label_281a98:
    if (ctx->pc == 0x281A98u) {
        ctx->pc = 0x281A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A94u;
        // 0x281a98: 0xa0a1400  j           func_8285000 (Delay Slot)
        // J 0x8285000 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x281A9Cu;
        goto label_281a9c;
    }
    ctx->pc = 0x281A94u;
    {
        const bool branch_taken_0x281a94 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        ctx->pc = 0x281A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A94u;
        // 0x281a98: 0xa0a1400  j           func_8285000 (Delay Slot)
        // J 0x8285000 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x281a94) {
            ctx->pc = 0x28FAC8u;
            { ctx->pc = 0x28fac8; return; }
        }
    }
    ctx->pc = 0x281A9Cu;
label_281a9c:
    // 0x281a9c: 0x1f011f04  .word       0x1F011F04                   # bgtz        $t8, . + 4 + (0x1F04 << 2) # 00010000 <InstrIdType: CPU_NORMAL>
label_281aa0:
    if (ctx->pc == 0x281AA0u) {
        ctx->pc = 0x281AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A9Cu;
        // 0x281aa0: 0x29060101  slti        $a2, $t0, 0x101 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)257) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x281AA4u;
        goto label_281aa4;
    }
    ctx->pc = 0x281A9Cu;
    {
        const bool branch_taken_0x281a9c = (GPR_S32(ctx, 24) > 0);
        ctx->pc = 0x281AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A9Cu;
        // 0x281aa0: 0x29060101  slti        $a2, $t0, 0x101 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)257) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x281a9c) {
            ctx->pc = 0x2896B0u;
            { ctx->pc = 0x2896b0; return; }
        }
    }
    ctx->pc = 0x281AA4u;
label_281aa4:
    // 0x281aa4: 0xf010101  jal         func_C040404
label_281aa8:
    if (ctx->pc == 0x281AA8u) {
        ctx->pc = 0x281AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281AA4u;
        // 0x281aa8: 0x14023804  bne         $zero, $v0, . + 4 + (0x3804 << 2) (Delay Slot)
        // Likely branch instruction at 0x281AA8 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x281AACu;
        goto label_281aac;
    }
    ctx->pc = 0x281AA4u;
    SET_GPR_U32(ctx, 31, 0x281AACu);
    ctx->pc = 0x281AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281AA4u;
    // 0x281aa8: 0x14023804  bne         $zero, $v0, . + 4 + (0x3804 << 2) (Delay Slot)
    // Likely branch instruction at 0x281AA8 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC040404u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC040404u, 0x281AA4u, 0x281AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281AACu;
label_281aac:
    // 0x281aac: 0x101  .word       0x00000101                   # INVALID     $zero, $zero, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281aacu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x281AAC raw=0x00000101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281ab0:
    // 0x281ab0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281ab0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x281AB0 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281ab4:
    // 0x281ab4: 0x0  nop
    ctx->pc = 0x281ab4u;
    // NOP
label_281ab8:
    // 0x281ab8: 0x0  nop
    ctx->pc = 0x281ab8u;
    // NOP
label_281abc:
    // 0x281abc: 0x0  nop
    ctx->pc = 0x281abcu;
    // NOP
label_281ac0:
    // 0x281ac0: 0x0  nop
    ctx->pc = 0x281ac0u;
    // NOP
label_281ac4:
    // 0x281ac4: 0x0  nop
    ctx->pc = 0x281ac4u;
    // NOP
label_281ac8:
    // 0x281ac8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x281ac8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_281acc:
    // 0x281acc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281accu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x281ACC raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281ad0:
    // 0x281ad0: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x281ad0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_281ad4:
    // 0x281ad4: 0x0  nop
    ctx->pc = 0x281ad4u;
    // NOP
label_281ad8:
    // 0x281ad8: 0x0  nop
    ctx->pc = 0x281ad8u;
    // NOP
label_281adc:
    // 0x281adc: 0x0  nop
    ctx->pc = 0x281adcu;
    // NOP
label_281ae0:
    // 0x281ae0: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x281ae0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_281ae4:
    // 0x281ae4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x281ae4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_281ae8:
    // 0x281ae8: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x281ae8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_281aec:
    // 0x281aec: 0x0  nop
    ctx->pc = 0x281aecu;
    // NOP
label_281af0:
    // 0x281af0: 0x0  nop
    ctx->pc = 0x281af0u;
    // NOP
label_281af4:
    // 0x281af4: 0x0  nop
    ctx->pc = 0x281af4u;
    // NOP
label_281af8:
    // 0x281af8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281af8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x281AF8 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281afc:
    // 0x281afc: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281afcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x281AFC raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281b00:
    // 0x281b00: 0x0  nop
    ctx->pc = 0x281b00u;
    // NOP
label_281b04:
    // 0x281b04: 0x0  nop
    ctx->pc = 0x281b04u;
    // NOP
label_281b08:
    // 0x281b08: 0x0  nop
    ctx->pc = 0x281b08u;
    // NOP
label_281b0c:
    // 0x281b0c: 0x0  nop
    ctx->pc = 0x281b0cu;
    // NOP
label_281b10:
    // 0x281b10: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x281b10u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_281b14:
    // 0x281b14: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x281b14u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_281b18:
    // 0x281b18: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x281b18u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_281b1c:
    // 0x281b1c: 0x0  nop
    ctx->pc = 0x281b1cu;
    // NOP
label_281b20:
    // 0x281b20: 0x0  nop
    ctx->pc = 0x281b20u;
    // NOP
label_281b24:
    // 0x281b24: 0x0  nop
    ctx->pc = 0x281b24u;
    // NOP
label_281b28:
    // 0x281b28: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281b28u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x281B28 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281b2c:
    // 0x281b2c: 0x8  jr          $zero
label_281b30:
    if (ctx->pc == 0x281B30u) {
        ctx->pc = 0x281B34u;
        goto label_281b34;
    }
    ctx->pc = 0x281B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281B2Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x281B34u;
label_281b34:
    // 0x281b34: 0x0  nop
    ctx->pc = 0x281b34u;
    // NOP
label_281b38:
    // 0x281b38: 0x0  nop
    ctx->pc = 0x281b38u;
    // NOP
label_281b3c:
    // 0x281b3c: 0x0  nop
    ctx->pc = 0x281b3cu;
    // NOP
label_281b40:
    // 0x281b40: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281b40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x281B40 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281b44:
    // 0x281b44: 0x9  jalr        $zero, $zero
label_281b48:
    if (ctx->pc == 0x281B48u) {
        ctx->pc = 0x281B4Cu;
        goto label_281b4c;
    }
    ctx->pc = 0x281B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281B44u, 0x281B4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x281B4Cu;
label_281b4c:
    // 0x281b4c: 0x0  nop
    ctx->pc = 0x281b4cu;
    // NOP
label_281b50:
    // 0x281b50: 0x0  nop
    ctx->pc = 0x281b50u;
    // NOP
label_281b54:
    // 0x281b54: 0x0  nop
    ctx->pc = 0x281b54u;
    // NOP
label_281b58:
    // 0x281b58: 0x0  nop
    ctx->pc = 0x281b58u;
    // NOP
label_281b5c:
    // 0x281b5c: 0x0  nop
    ctx->pc = 0x281b5cu;
    // NOP
label_281b60:
    // 0x281b60: 0x0  nop
    ctx->pc = 0x281b60u;
    // NOP
label_281b64:
    // 0x281b64: 0x0  nop
    ctx->pc = 0x281b64u;
    // NOP
label_281b68:
    // 0x281b68: 0x0  nop
    ctx->pc = 0x281b68u;
    // NOP
label_281b6c:
    // 0x281b6c: 0x0  nop
    ctx->pc = 0x281b6cu;
    // NOP
label_281b70:
    // 0x281b70: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281b70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x281B70 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281b74:
    // 0x281b74: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x281b74u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_281b78:
    // 0x281b78: 0x0  nop
    ctx->pc = 0x281b78u;
    // NOP
label_281b7c:
    // 0x281b7c: 0x0  nop
    ctx->pc = 0x281b7cu;
    // NOP
label_281b80:
    // 0x281b80: 0x0  nop
    ctx->pc = 0x281b80u;
    // NOP
label_281b84:
    // 0x281b84: 0x0  nop
    ctx->pc = 0x281b84u;
    // NOP
label_281b88:
    // 0x281b88: 0x0  nop
    ctx->pc = 0x281b88u;
    // NOP
label_281b8c:
    // 0x281b8c: 0x0  nop
    ctx->pc = 0x281b8cu;
    // NOP
label_281b90:
    // 0x281b90: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x281b90u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_281b94:
    // 0x281b94: 0x0  nop
    ctx->pc = 0x281b94u;
    // NOP
label_281b98:
    // 0x281b98: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x281b98u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_281b9c:
    // 0x281b9c: 0x0  nop
    ctx->pc = 0x281b9cu;
    // NOP
label_281ba0:
    // 0x281ba0: 0x0  nop
    ctx->pc = 0x281ba0u;
    // NOP
label_281ba4:
    // 0x281ba4: 0x0  nop
    ctx->pc = 0x281ba4u;
    // NOP
label_281ba8:
    // 0x281ba8: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x281ba8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_281bac:
    // 0x281bac: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281bacu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x281BAC raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281bb0:
    // 0x281bb0: 0xc  syscall     0
    ctx->pc = 0x281bb0u;
    ctx->pc = 0x281BB4u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_281bb4:
    // 0x281bb4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x281bb4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_281bb8:
    // 0x281bb8: 0x0  nop
    ctx->pc = 0x281bb8u;
    // NOP
label_281bbc:
    // 0x281bbc: 0x0  nop
    ctx->pc = 0x281bbcu;
    // NOP
label_281bc0:
    // 0x281bc0: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x281bc0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_281bc4:
    // 0x281bc4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x281bc4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_281bc8:
    // 0x281bc8: 0xd  break       0
    ctx->pc = 0x281bc8u;
    runtime->handleBreak(rdram, ctx);
label_281bcc:
    // 0x281bcc: 0x0  nop
    ctx->pc = 0x281bccu;
    // NOP
label_281bd0:
    // 0x281bd0: 0x0  nop
    ctx->pc = 0x281bd0u;
    // NOP
label_281bd4:
    // 0x281bd4: 0x0  nop
    ctx->pc = 0x281bd4u;
    // NOP
label_281bd8:
    // 0x281bd8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281bd8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x281BD8 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281bdc:
    // 0x281bdc: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281bdcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x281BDC raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281be0:
    // 0x281be0: 0x0  nop
    ctx->pc = 0x281be0u;
    // NOP
label_281be4:
    // 0x281be4: 0x0  nop
    ctx->pc = 0x281be4u;
    // NOP
label_281be8:
    // 0x281be8: 0x0  nop
    ctx->pc = 0x281be8u;
    // NOP
label_281bec:
    // 0x281bec: 0x0  nop
    ctx->pc = 0x281becu;
    // NOP
label_281bf0:
    // 0x281bf0: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x281bf0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_281bf4:
    // 0x281bf4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x281bf4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_281bf8:
    // 0x281bf8: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x281bf8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_281bfc:
    // 0x281bfc: 0x0  nop
    ctx->pc = 0x281bfcu;
    // NOP
label_281c00:
    // 0x281c00: 0x0  nop
    ctx->pc = 0x281c00u;
    // NOP
label_281c04:
    // 0x281c04: 0x0  nop
    ctx->pc = 0x281c04u;
    // NOP
label_281c08:
    // 0x281c08: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281c08u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x281C08 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281c0c:
    // 0x281c0c: 0x8  jr          $zero
label_281c10:
    if (ctx->pc == 0x281C10u) {
        ctx->pc = 0x281C14u;
        goto label_281c14;
    }
    ctx->pc = 0x281C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281C0Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x281C14u;
label_281c14:
    // 0x281c14: 0x0  nop
    ctx->pc = 0x281c14u;
    // NOP
label_281c18:
    // 0x281c18: 0x0  nop
    ctx->pc = 0x281c18u;
    // NOP
label_281c1c:
    // 0x281c1c: 0x0  nop
    ctx->pc = 0x281c1cu;
    // NOP
label_281c20:
    // 0x281c20: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281c20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x281C20 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281c24:
    // 0x281c24: 0x9  jalr        $zero, $zero
label_281c28:
    if (ctx->pc == 0x281C28u) {
        ctx->pc = 0x281C2Cu;
        goto label_281c2c;
    }
    ctx->pc = 0x281C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281C24u, 0x281C2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x281C2Cu;
label_281c2c:
    // 0x281c2c: 0x0  nop
    ctx->pc = 0x281c2cu;
    // NOP
label_281c30:
    // 0x281c30: 0x0  nop
    ctx->pc = 0x281c30u;
    // NOP
label_281c34:
    // 0x281c34: 0x0  nop
    ctx->pc = 0x281c34u;
    // NOP
label_281c38:
    // 0x281c38: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281c38u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x281C38 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281c3c:
    // 0x281c3c: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281c3cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x281C3C raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281c40:
    // 0x281c40: 0x0  nop
    ctx->pc = 0x281c40u;
    // NOP
label_281c44:
    // 0x281c44: 0x0  nop
    ctx->pc = 0x281c44u;
    // NOP
label_281c48:
    // 0x281c48: 0x0  nop
    ctx->pc = 0x281c48u;
    // NOP
label_281c4c:
    // 0x281c4c: 0x0  nop
    ctx->pc = 0x281c4cu;
    // NOP
label_281c50:
    // 0x281c50: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281c50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x281C50 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281c54:
    // 0x281c54: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x281c54u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_281c58:
    // 0x281c58: 0x0  nop
    ctx->pc = 0x281c58u;
    // NOP
label_281c5c:
    // 0x281c5c: 0x0  nop
    ctx->pc = 0x281c5cu;
    // NOP
label_281c60:
    // 0x281c60: 0x0  nop
    ctx->pc = 0x281c60u;
    // NOP
label_281c64:
    // 0x281c64: 0x0  nop
    ctx->pc = 0x281c64u;
    // NOP
label_281c68:
    // 0x281c68: 0x0  nop
    ctx->pc = 0x281c68u;
    // NOP
label_281c6c:
    // 0x281c6c: 0x0  nop
    ctx->pc = 0x281c6cu;
    // NOP
label_281c70:
    // 0x281c70: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281c70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x281C70 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281c74:
    // 0x281c74: 0x0  nop
    ctx->pc = 0x281c74u;
    // NOP
label_281c78:
    // 0x281c78: 0x0  nop
    ctx->pc = 0x281c78u;
    // NOP
label_281c7c:
    // 0x281c7c: 0x0  nop
    ctx->pc = 0x281c7cu;
    // NOP
label_281c80:
    // 0x281c80: 0x0  nop
    ctx->pc = 0x281c80u;
    // NOP
label_281c84:
    // 0x281c84: 0x0  nop
    ctx->pc = 0x281c84u;
    // NOP
label_281c88:
    // 0x281c88: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281c88u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x281C88 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281c8c:
    // 0x281c8c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281c8cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x281C8C raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281c90:
    // 0x281c90: 0x0  nop
    ctx->pc = 0x281c90u;
    // NOP
label_281c94:
    // 0x281c94: 0x0  nop
    ctx->pc = 0x281c94u;
    // NOP
label_281c98:
    // 0x281c98: 0x0  nop
    ctx->pc = 0x281c98u;
    // NOP
label_281c9c:
    // 0x281c9c: 0x0  nop
    ctx->pc = 0x281c9cu;
    // NOP
label_281ca0:
    // 0x281ca0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281ca0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x281CA0 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281ca4:
    // 0x281ca4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x281ca4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_281ca8:
    // 0x281ca8: 0x0  nop
    ctx->pc = 0x281ca8u;
    // NOP
label_281cac:
    // 0x281cac: 0x0  nop
    ctx->pc = 0x281cacu;
    // NOP
label_281cb0:
    // 0x281cb0: 0x0  nop
    ctx->pc = 0x281cb0u;
    // NOP
label_281cb4:
    // 0x281cb4: 0x0  nop
    ctx->pc = 0x281cb4u;
    // NOP
label_281cb8:
    // 0x281cb8: 0x0  nop
    ctx->pc = 0x281cb8u;
    // NOP
label_281cbc:
    // 0x281cbc: 0x0  nop
    ctx->pc = 0x281cbcu;
    // NOP
label_281cc0:
    // 0x281cc0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281cc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x281CC0 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281cc4:
    // 0x281cc4: 0x0  nop
    ctx->pc = 0x281cc4u;
    // NOP
label_281cc8:
    // 0x281cc8: 0x0  nop
    ctx->pc = 0x281cc8u;
    // NOP
label_281ccc:
    // 0x281ccc: 0x0  nop
    ctx->pc = 0x281cccu;
    // NOP
label_281cd0:
    // 0x281cd0: 0x0  nop
    ctx->pc = 0x281cd0u;
    // NOP
label_281cd4:
    // 0x281cd4: 0x0  nop
    ctx->pc = 0x281cd4u;
    // NOP
label_281cd8:
    // 0x281cd8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281cd8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x281CD8 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281cdc:
    // 0x281cdc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281cdcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x281CDC raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281ce0:
    // 0x281ce0: 0x0  nop
    ctx->pc = 0x281ce0u;
    // NOP
label_281ce4:
    // 0x281ce4: 0x0  nop
    ctx->pc = 0x281ce4u;
    // NOP
label_281ce8:
    // 0x281ce8: 0x0  nop
    ctx->pc = 0x281ce8u;
    // NOP
label_281cec:
    // 0x281cec: 0x0  nop
    ctx->pc = 0x281cecu;
    // NOP
label_281cf0:
    // 0x281cf0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281cf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x281CF0 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281cf4:
    // 0x281cf4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x281cf4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_281cf8:
    // 0x281cf8: 0x0  nop
    ctx->pc = 0x281cf8u;
    // NOP
label_281cfc:
    // 0x281cfc: 0x0  nop
    ctx->pc = 0x281cfcu;
    // NOP
label_281d00:
    // 0x281d00: 0x0  nop
    ctx->pc = 0x281d00u;
    // NOP
label_281d04:
    // 0x281d04: 0x0  nop
    ctx->pc = 0x281d04u;
    // NOP
label_281d08:
    // 0x281d08: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281d08u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x281D08 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281d0c:
    // 0x281d0c: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x281d0cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_281d10:
    // 0x281d10: 0x0  nop
    ctx->pc = 0x281d10u;
    // NOP
label_281d14:
    // 0x281d14: 0x0  nop
    ctx->pc = 0x281d14u;
    // NOP
label_281d18:
    // 0x281d18: 0x0  nop
    ctx->pc = 0x281d18u;
    // NOP
label_281d1c:
    // 0x281d1c: 0x0  nop
    ctx->pc = 0x281d1cu;
    // NOP
label_281d20:
    // 0x281d20: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281d20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x281D20 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281d24:
    // 0x281d24: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x281d24u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_281d28:
    // 0x281d28: 0x0  nop
    ctx->pc = 0x281d28u;
    // NOP
label_281d2c:
    // 0x281d2c: 0x0  nop
    ctx->pc = 0x281d2cu;
    // NOP
label_281d30:
    // 0x281d30: 0x0  nop
    ctx->pc = 0x281d30u;
    // NOP
label_281d34:
    // 0x281d34: 0x0  nop
    ctx->pc = 0x281d34u;
    // NOP
label_281d38:
    // 0x281d38: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281d38u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x281D38 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281d3c:
    // 0x281d3c: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281d3cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x281D3C raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281d40:
    // 0x281d40: 0x0  nop
    ctx->pc = 0x281d40u;
    // NOP
label_281d44:
    // 0x281d44: 0x0  nop
    ctx->pc = 0x281d44u;
    // NOP
label_281d48:
    // 0x281d48: 0x0  nop
    ctx->pc = 0x281d48u;
    // NOP
label_281d4c:
    // 0x281d4c: 0x0  nop
    ctx->pc = 0x281d4cu;
    // NOP
label_281d50:
    // 0x281d50: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281d50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x281D50 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281d54:
    // 0x281d54: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x281d54u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_281d58:
    // 0x281d58: 0x0  nop
    ctx->pc = 0x281d58u;
    // NOP
label_281d5c:
    // 0x281d5c: 0x0  nop
    ctx->pc = 0x281d5cu;
    // NOP
label_281d60:
    // 0x281d60: 0x0  nop
    ctx->pc = 0x281d60u;
    // NOP
label_281d64:
    // 0x281d64: 0x0  nop
    ctx->pc = 0x281d64u;
    // NOP
label_281d68:
    // 0x281d68: 0x0  nop
    ctx->pc = 0x281d68u;
    // NOP
label_281d6c:
    // 0x281d6c: 0x0  nop
    ctx->pc = 0x281d6cu;
    // NOP
label_281d70:
    // 0x281d70: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281d70u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281d74:
    // 0x281d74: 0x7f7e7f7e  sq          $fp, 0x7F7E($k1)
    ctx->pc = 0x281d74u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32638), GPR_VEC(ctx, 30));
label_281d78:
    // 0x281d78: 0x7f7f7f7e  sq          $ra, 0x7F7E($k1)
    ctx->pc = 0x281d78u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32638), GPR_VEC(ctx, 31));
label_281d7c:
    // 0x281d7c: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281d80:
    // 0x281d80: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281d80u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281d84:
    // 0x281d84: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281d84u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281d88:
    // 0x281d88: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281d88u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281d8c:
    // 0x281d8c: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281d90:
    // 0x281d90: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281d90u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281d94:
    // 0x281d94: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281d94u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281d98:
    // 0x281d98: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281d98u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281d9c:
    // 0x281d9c: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281da0:
    // 0x281da0: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281da0u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281da4:
    // 0x281da4: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281da4u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281da8:
    // 0x281da8: 0x0  nop
    ctx->pc = 0x281da8u;
    // NOP
label_281dac:
    // 0x281dac: 0x0  nop
    ctx->pc = 0x281dacu;
    // NOP
label_281db0:
    // 0x281db0: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281db0u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281db4:
    // 0x281db4: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281db4u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281db8:
    // 0x281db8: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281db8u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281dbc:
    // 0x281dbc: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281dc0:
    // 0x281dc0: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281dc4:
    // 0x281dc4: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281dc8:
    // 0x281dc8: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281dcc:
    // 0x281dcc: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281dccu;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281dd0:
    // 0x281dd0: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281dd4:
    // 0x281dd4: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281dd8:
    // 0x281dd8: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281ddc:
    // 0x281ddc: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281de0:
    // 0x281de0: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281de0u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281de4:
    // 0x281de4: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281de4u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281de8:
    // 0x281de8: 0x0  nop
    ctx->pc = 0x281de8u;
    // NOP
label_281dec:
    // 0x281dec: 0x0  nop
    ctx->pc = 0x281decu;
    // NOP
label_281df0:
    // 0x281df0: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281df0u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281df4:
    // 0x281df4: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281df4u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281df8:
    // 0x281df8: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281df8u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281dfc:
    // 0x281dfc: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281e00:
    // 0x281e00: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281e00u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281e04:
    // 0x281e04: 0x0  nop
    ctx->pc = 0x281e04u;
    // NOP
label_281e08:
    // 0x281e08: 0x0  nop
    ctx->pc = 0x281e08u;
    // NOP
label_281e0c:
    // 0x281e0c: 0x0  nop
    ctx->pc = 0x281e0cu;
    // NOP
label_281e10:
    // 0x281e10: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281e10u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281e14:
    // 0x281e14: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281e14u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281e18:
    // 0x281e18: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281e18u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281e1c:
    // 0x281e1c: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281e20:
    // 0x281e20: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281e20u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281e24:
    // 0x281e24: 0x0  nop
    ctx->pc = 0x281e24u;
    // NOP
label_281e28:
    // 0x281e28: 0x70707070  .word       0x70707070                   # pmfhl.uw    $t6 # 00700000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x281e28u;
    SET_GPR_VEC(ctx, 14, PS2_PMFHL_UW(ctx->hi, ctx->lo));
label_281e2c:
    // 0x281e2c: 0x70707070  .word       0x70707070                   # pmfhl.uw    $t6 # 00700000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x281e2cu;
    SET_GPR_VEC(ctx, 14, PS2_PMFHL_UW(ctx->hi, ctx->lo));
label_281e30:
    // 0x281e30: 0x7070  tge         $zero, $zero, 449
    ctx->pc = 0x281e30u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_281e34:
    // 0x281e34: 0x0  nop
    ctx->pc = 0x281e34u;
    // NOP
label_281e38:
    // 0x281e38: 0x0  nop
    ctx->pc = 0x281e38u;
    // NOP
label_281e3c:
    // 0x281e3c: 0x0  nop
    ctx->pc = 0x281e3cu;
    // NOP
label_281e40:
    // 0x281e40: 0x7f7f2040  sq          $ra, 0x2040($k1)
    ctx->pc = 0x281e40u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 8256), GPR_VEC(ctx, 31));
label_281e44:
    // 0x281e44: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281e44u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281e48:
    // 0x281e48: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281e48u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281e4c:
    // 0x281e4c: 0x7f7f407f  sq          $ra, 0x407F($k1)
    ctx->pc = 0x281e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 27), 16511), GPR_VEC(ctx, 31));
label_281e50:
    // 0x281e50: 0x7f404040  sq          $zero, 0x4040($k0)
    ctx->pc = 0x281e50u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 16448), GPR_VEC(ctx, 0));
label_281e54:
    // 0x281e54: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281e54u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281e58:
    // 0x281e58: 0x7f407f7f  sq          $zero, 0x7F7F($k0)
    ctx->pc = 0x281e58u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 32639), GPR_VEC(ctx, 0));
label_281e5c:
    // 0x281e5c: 0x7f7f7f  .word       0x007F7F7F                   # dsra32      $t7, $ra, 29 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281e5cu;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 31) >> (32 + 29));
label_281e60:
    // 0x281e60: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2)
label_281e64:
    if (ctx->pc == 0x281E64u) {
        ctx->pc = 0x281E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281E60u;
        // 0x281e64: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2) (Delay Slot)
        // Likely branch instruction at 0x281E64 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x281E68u;
        goto label_281e68;
    }
    ctx->pc = 0x281E60u;
    {
        const bool branch_taken_0x281e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x281e60) {
            ctx->pc = 0x281E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281E60u;
            // 0x281e64: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2) (Delay Slot)
            // Likely branch instruction at 0x281E64 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x295FA4u;
            { ctx->pc = 0x295fa4; return; }
        }
    }
    ctx->pc = 0x281E68u;
label_281e68:
    // 0x281e68: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2)
label_281e6c:
    if (ctx->pc == 0x281E6Cu) {
        ctx->pc = 0x281E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281E68u;
        // 0x281e6c: 0x505050  .word       0x00505050                   # mfhi        $t2 # 00500040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 10, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x281E70u;
        goto label_281e70;
    }
    ctx->pc = 0x281E68u;
    {
        const bool branch_taken_0x281e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x281e68) {
            ctx->pc = 0x281E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281E68u;
            // 0x281e6c: 0x505050  .word       0x00505050                   # mfhi        $t2 # 00500040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 10, ctx->hi);
            ctx->in_delay_slot = false;
            ctx->pc = 0x295FACu;
            { ctx->pc = 0x295fac; return; }
        }
    }
    ctx->pc = 0x281E70u;
label_281e70:
    // 0x281e70: 0x281e60  .word       0x00281E60                   # add         $v1, $at, $t0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281e70u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 8);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_281e74:
    // 0x281e74: 0x281d70  tge         $at, $t0, 117
    ctx->pc = 0x281e74u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_281e78:
    // 0x281e78: 0x281db0  tge         $at, $t0, 118
    ctx->pc = 0x281e78u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_281e7c:
    // 0x281e7c: 0x281df0  tge         $at, $t0, 119
    ctx->pc = 0x281e7cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_281e80:
    // 0x281e80: 0x281e10  .word       0x00281E10                   # mfhi        $v1 # 00280600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281e80u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_281e84:
    // 0x281e84: 0x281e28  .word       0x00281E28                   # mfsa        $v1 # 00280600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x281e84u;
    SET_GPR_U32(ctx, 3, ctx->sa);
label_281e88:
    // 0x281e88: 0x281e40  .word       0x00281E40                   # sll         $v1, $t0, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 25));
label_281e8c:
    // 0x281e8c: 0x281e40  .word       0x00281E40                   # sll         $v1, $t0, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 25));
label_281e90:
    // 0x281e90: 0x2d0320  .word       0x002D0320                   # add         $zero, $at, $t5 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281e90u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_281e94:
    // 0x281e94: 0x2d0328  .word       0x002D0328                   # mfsa        $zero # 002D0300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x281e94u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_281e98:
    // 0x281e98: 0x281e60  .word       0x00281E60                   # add         $v1, $at, $t0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281e98u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 8);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_281e9c:
    // 0x281e9c: 0x281e60  .word       0x00281E60                   # add         $v1, $at, $t0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281e9cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 8);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_281ea0:
    // 0x281ea0: 0x281d70  tge         $at, $t0, 117
    ctx->pc = 0x281ea0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_281ea4:
    // 0x281ea4: 0x281df0  tge         $at, $t0, 119
    ctx->pc = 0x281ea4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_281ea8:
    // 0x281ea8: 0x2d0320  .word       0x002D0320                   # add         $zero, $at, $t5 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281ea8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_281eac:
    // 0x281eac: 0x0  nop
    ctx->pc = 0x281eacu;
    // NOP
label_281eb0:
    // 0x281eb0: 0x0  nop
    ctx->pc = 0x281eb0u;
    // NOP
label_281eb4:
    // 0x281eb4: 0x0  nop
    ctx->pc = 0x281eb4u;
    // NOP
label_281eb8:
    // 0x281eb8: 0x0  nop
    ctx->pc = 0x281eb8u;
    // NOP
label_281ebc:
    // 0x281ebc: 0x3fff  dsra32      $a3, $zero, 31
    ctx->pc = 0x281ebcu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> (32 + 31));
label_281ec0:
    // 0x281ec0: 0x0  nop
    ctx->pc = 0x281ec0u;
    // NOP
label_281ec4:
    // 0x281ec4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281ec4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x281EC4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281ec8:
    // 0x281ec8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x281ec8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_281ecc:
    // 0x281ecc: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x281eccu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_281ed0:
    // 0x281ed0: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x281ed0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_281ed4:
    // 0x281ed4: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281ed4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x281ED4 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281ed8:
    // 0x281ed8: 0x0  nop
    ctx->pc = 0x281ed8u;
    // NOP
label_281edc:
    // 0x281edc: 0x0  nop
    ctx->pc = 0x281edcu;
    // NOP
label_281ee0:
    // 0x281ee0: 0x0  nop
    ctx->pc = 0x281ee0u;
    // NOP
label_281ee4:
    // 0x281ee4: 0x0  nop
    ctx->pc = 0x281ee4u;
    // NOP
label_281ee8:
    // 0x281ee8: 0x0  nop
    ctx->pc = 0x281ee8u;
    // NOP
label_281eec:
    // 0x281eec: 0x0  nop
    ctx->pc = 0x281eecu;
    // NOP
label_281ef0:
    // 0x281ef0: 0xa0004  sllv        $zero, $t2, $zero
    ctx->pc = 0x281ef0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 0) & 0x1F));
label_281ef4:
    // 0x281ef4: 0x880  sll         $at, $zero, 2
    ctx->pc = 0x281ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_281ef8:
    // 0x281ef8: 0x1d000003  bgtz        $t0, . + 4 + (0x3 << 2)
label_281efc:
    if (ctx->pc == 0x281EFCu) {
        ctx->pc = 0x281EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281EF8u;
        // 0x281efc: 0x1fffff  dsra32      $ra, $ra, 31 (Delay Slot)
        SET_GPR_S64(ctx, 31, GPR_S64(ctx, 31) >> (32 + 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281F00u;
        goto label_281f00;
    }
    ctx->pc = 0x281EF8u;
    {
        const bool branch_taken_0x281ef8 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x281EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281EF8u;
        // 0x281efc: 0x1fffff  dsra32      $ra, $ra, 31 (Delay Slot)
        SET_GPR_S64(ctx, 31, GPR_S64(ctx, 31) >> (32 + 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281ef8) {
            ctx->pc = 0x281F08u;
            goto label_281f08;
        }
    }
    ctx->pc = 0x281F00u;
label_281f00:
    // 0x281f00: 0x1d010003  .word       0x1D010003                   # bgtz        $t0, . + 4 + (0x3 << 2) # 00010000 <InstrIdType: CPU_NORMAL>
label_281f04:
    if (ctx->pc == 0x281F04u) {
        ctx->pc = 0x281F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F00u;
        // 0x281f04: 0x1ffff  dsra32      $ra, $at, 31 (Delay Slot)
        SET_GPR_S64(ctx, 31, GPR_S64(ctx, 1) >> (32 + 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281F08u;
        goto label_281f08;
    }
    ctx->pc = 0x281F00u;
    {
        const bool branch_taken_0x281f00 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x281F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F00u;
        // 0x281f04: 0x1ffff  dsra32      $ra, $at, 31 (Delay Slot)
        SET_GPR_S64(ctx, 31, GPR_S64(ctx, 1) >> (32 + 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281f00) {
            ctx->pc = 0x281F10u;
            goto label_281f10;
        }
    }
    ctx->pc = 0x281F08u;
label_281f08:
    // 0x281f08: 0x8000001  j           func_000004
label_281f0c:
    if (ctx->pc == 0x281F0Cu) {
        ctx->pc = 0x281F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F08u;
        // 0x281f0c: 0xf00  sll         $at, $zero, 28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281F10u;
        goto label_281f10;
    }
    ctx->pc = 0x281F08u;
    ctx->pc = 0x281F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281F08u;
    // 0x281f0c: 0xf00  sll         $at, $zero, 28 (Delay Slot)
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4u, 0x281F08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x281F10u;
label_281f10:
    // 0x281f10: 0x8010001  j           func_040004
label_281f14:
    if (ctx->pc == 0x281F14u) {
        ctx->pc = 0x281F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F10u;
        // 0x281f14: 0xf0c  syscall     60 (Delay Slot)
        ctx->pc = 0x281F18u;
        runtime->handleSyscall(rdram, ctx, 0x3Cu);
        ctx->in_delay_slot = false;
        ctx->pc = 0x281F18u;
        goto label_281f18;
    }
    ctx->pc = 0x281F10u;
    ctx->pc = 0x281F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281F10u;
    // 0x281f14: 0xf0c  syscall     60 (Delay Slot)
    ctx->pc = 0x281F18u;
    runtime->handleSyscall(rdram, ctx, 0x3Cu);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40004u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40004u, 0x281F10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x281F18u;
label_281f18:
    // 0x281f18: 0xd810001  jal         func_6040004
label_281f1c:
    if (ctx->pc == 0x281F1Cu) {
        ctx->pc = 0x281F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F18u;
        // 0x281f1c: 0x7fff  dsra32      $t7, $zero, 31 (Delay Slot)
        SET_GPR_S64(ctx, 15, GPR_S64(ctx, 0) >> (32 + 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281F20u;
        goto label_281f20;
    }
    ctx->pc = 0x281F18u;
    SET_GPR_U32(ctx, 31, 0x281F20u);
    ctx->pc = 0x281F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281F18u;
    // 0x281f1c: 0x7fff  dsra32      $t7, $zero, 31 (Delay Slot)
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 0) >> (32 + 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x6040004u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x6040004u, 0x281F18u, 0x281F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281F20u;
label_281f20:
    // 0x281f20: 0xe810001  jal         func_A040004
label_281f24:
    if (ctx->pc == 0x281F24u) {
        ctx->pc = 0x281F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F20u;
        // 0x281f24: 0x7fff  dsra32      $t7, $zero, 31 (Delay Slot)
        SET_GPR_S64(ctx, 15, GPR_S64(ctx, 0) >> (32 + 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281F28u;
        goto label_281f28;
    }
    ctx->pc = 0x281F20u;
    SET_GPR_U32(ctx, 31, 0x281F28u);
    ctx->pc = 0x281F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281F20u;
    // 0x281f24: 0x7fff  dsra32      $t7, $zero, 31 (Delay Slot)
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 0) >> (32 + 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA040004u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA040004u, 0x281F20u, 0x281F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281F28u;
label_281f28:
    // 0x281f28: 0xf800001  jal         func_E000004
label_281f2c:
    if (ctx->pc == 0x281F2Cu) {
        ctx->pc = 0x281F30u;
        goto label_281f30;
    }
    ctx->pc = 0x281F28u;
    SET_GPR_U32(ctx, 31, 0x281F30u);
    ctx->pc = 0xE000004u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xE000004u, 0x281F28u, 0x281F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281F30u;
label_281f30:
    // 0x281f30: 0x10800001  beqz        $a0, . + 4 + (0x1 << 2)
label_281f34:
    if (ctx->pc == 0x281F34u) {
        ctx->pc = 0x281F38u;
        goto label_281f38;
    }
    ctx->pc = 0x281F30u;
    {
        const bool branch_taken_0x281f30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x281f30) {
            ctx->pc = 0x281F38u;
            goto label_281f38;
        }
    }
    ctx->pc = 0x281F38u;
label_281f38:
    // 0x281f38: 0xf810001  jal         func_E040004
label_281f3c:
    if (ctx->pc == 0x281F3Cu) {
        ctx->pc = 0x281F40u;
        goto label_281f40;
    }
    ctx->pc = 0x281F38u;
    SET_GPR_U32(ctx, 31, 0x281F40u);
    ctx->pc = 0xE040004u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xE040004u, 0x281F38u, 0x281F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281F40u;
label_281f40:
    // 0x281f40: 0x10810001  beq         $a0, $at, . + 4 + (0x1 << 2)
label_281f44:
    if (ctx->pc == 0x281F44u) {
        ctx->pc = 0x281F48u;
        goto label_281f48;
    }
    ctx->pc = 0x281F40u;
    {
        const bool branch_taken_0x281f40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 1));
        if (branch_taken_0x281f40) {
            ctx->pc = 0x281F48u;
            goto label_281f48;
        }
    }
    ctx->pc = 0x281F48u;
label_281f48:
    // 0x281f48: 0x1a010002  .word       0x1A010002                   # blez        $s0, . + 4 + (0x2 << 2) # 00010000 <InstrIdType: CPU_NORMAL>
label_281f4c:
    if (ctx->pc == 0x281F4Cu) {
        ctx->pc = 0x281F50u;
        goto label_281f50;
    }
    ctx->pc = 0x281F48u;
    {
        const bool branch_taken_0x281f48 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x281f48) {
            ctx->pc = 0x281F54u;
            goto label_281f54;
        }
    }
    ctx->pc = 0x281F50u;
label_281f50:
    // 0x281f50: 0x1b010002  .word       0x1B010002                   # blez        $t8, . + 4 + (0x2 << 2) # 00010000 <InstrIdType: CPU_NORMAL>
label_281f54:
    if (ctx->pc == 0x281F54u) {
        ctx->pc = 0x281F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F50u;
        // 0x281f54: 0x3fffff  .word       0x003FFFFF                   # dsra32      $ra, $ra, 31 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 31, GPR_S64(ctx, 31) >> (32 + 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281F58u;
        goto label_281f58;
    }
    ctx->pc = 0x281F50u;
    {
        const bool branch_taken_0x281f50 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x281F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F50u;
        // 0x281f54: 0x3fffff  .word       0x003FFFFF                   # dsra32      $ra, $ra, 31 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 31, GPR_S64(ctx, 31) >> (32 + 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281f50) {
            ctx->pc = 0x281F5Cu;
            goto label_281f5c;
        }
    }
    ctx->pc = 0x281F58u;
label_281f58:
    // 0x281f58: 0x0  nop
    ctx->pc = 0x281f58u;
    // NOP
label_281f5c:
    // 0x281f5c: 0x0  nop
    ctx->pc = 0x281f5cu;
    // NOP
label_281f60:
    // 0x281f60: 0x9800001  j           func_6000004
label_281f64:
    if (ctx->pc == 0x281F64u) {
        ctx->pc = 0x281F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F60u;
        // 0x281f64: 0x3fff  dsra32      $a3, $zero, 31 (Delay Slot)
        SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> (32 + 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281F68u;
        goto label_281f68;
    }
    ctx->pc = 0x281F60u;
    ctx->pc = 0x281F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281F60u;
    // 0x281f64: 0x3fff  dsra32      $a3, $zero, 31 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> (32 + 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x6000004u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x6000004u, 0x281F60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x281F68u;
label_281f68:
    // 0x281f68: 0xa800001  j           func_A000004
label_281f6c:
    if (ctx->pc == 0x281F6Cu) {
        ctx->pc = 0x281F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F68u;
        // 0x281f6c: 0x3fff  dsra32      $a3, $zero, 31 (Delay Slot)
        SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> (32 + 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281F70u;
        goto label_281f70;
    }
    ctx->pc = 0x281F68u;
    ctx->pc = 0x281F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281F68u;
    // 0x281f6c: 0x3fff  dsra32      $a3, $zero, 31 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> (32 + 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA000004u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA000004u, 0x281F68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x281F70u;
label_281f70:
    // 0x281f70: 0x9810001  j           func_6040004
label_281f74:
    if (ctx->pc == 0x281F74u) {
        ctx->pc = 0x281F78u;
        goto label_281f78;
    }
    ctx->pc = 0x281F70u;
    ctx->pc = 0x6040004u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x6040004u, 0x281F70u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x281F78u;
label_281f78:
    // 0x281f78: 0xa810001  j           func_A040004
label_281f7c:
    if (ctx->pc == 0x281F7Cu) {
        ctx->pc = 0x281F80u;
        goto label_281f80;
    }
    ctx->pc = 0x281F78u;
    ctx->pc = 0xA040004u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA040004u, 0x281F78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x281F80u;
label_281f80:
    // 0x281f80: 0x1ec81eff  .word       0x1EC81EFF                   # bgtz        $s6, . + 4 + (0x1EFF << 2) # 00080000 <InstrIdType: CPU_NORMAL>
label_281f84:
    if (ctx->pc == 0x281F84u) {
        ctx->pc = 0x281F88u;
        goto label_281f88;
    }
    ctx->pc = 0x281F80u;
    {
        const bool branch_taken_0x281f80 = (GPR_S32(ctx, 22) > 0);
        if (branch_taken_0x281f80) {
            ctx->pc = 0x289B80u;
            { ctx->pc = 0x289b80; return; }
        }
    }
    ctx->pc = 0x281F88u;
label_281f88:
    // 0x281f88: 0x0  nop
    ctx->pc = 0x281f88u;
    // NOP
label_281f8c:
    // 0x281f8c: 0xc81ec800  lwc2        $30, -0x3800($zero)
    ctx->pc = 0x281f8cu;
//     throw std::runtime_error("Unhandled opcode: 0x32 at 0x281F8C raw=0xC81EC800");
 /* MITIGATED */
label_281f90:
    // 0x281f90: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x281f90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x281F90 raw=0x0000001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281f94:
    // 0x281f94: 0x0  nop
    ctx->pc = 0x281f94u;
    // NOP
label_281f98:
    // 0x281f98: 0x0  nop
    ctx->pc = 0x281f98u;
    // NOP
label_281f9c:
    // 0x281f9c: 0x0  nop
    ctx->pc = 0x281f9cu;
    // NOP
label_281fa0:
    // 0x281fa0: 0x8005  .word       0x00008005                   # INVALID     $zero, $zero, -0x7FFB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281fa0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x281FA0 raw=0x00008005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281fa4:
    // 0x281fa4: 0x10000000  b           . + 4 + (0x0 << 2)
label_281fa8:
    if (ctx->pc == 0x281FA8u) {
        ctx->pc = 0x281FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281FA4u;
        // 0x281fa8: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x281FA8 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x281FACu;
        goto label_281fac;
    }
    ctx->pc = 0x281FA4u;
    {
        const bool branch_taken_0x281fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281FA4u;
        // 0x281fa8: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x281FA8 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x281fa4) {
            ctx->pc = 0x281FA8u;
            goto label_281fa8;
        }
    }
    ctx->pc = 0x281FACu;
label_281fac:
    // 0x281fac: 0x0  nop
    ctx->pc = 0x281facu;
    // NOP
label_281fb0:
    // 0x281fb0: 0x0  nop
    ctx->pc = 0x281fb0u;
    // NOP
label_281fb4:
    // 0x281fb4: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x281fb4u;
    // CACHE instruction (ignored)
label_281fb8:
    // 0x281fb8: 0x0  nop
    ctx->pc = 0x281fb8u;
    // NOP
label_281fbc:
    // 0x281fbc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x281fbcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_281fc0:
    // 0x281fc0: 0x0  nop
    ctx->pc = 0x281fc0u;
    // NOP
label_281fc4:
    // 0x281fc4: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x281fc4u;
    // CACHE instruction (ignored)
label_281fc8:
    // 0x281fc8: 0x0  nop
    ctx->pc = 0x281fc8u;
    // NOP
label_281fcc:
    // 0x281fcc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x281fccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_281fd0:
    // 0x281fd0: 0x7ce  .word       0x000007CE                   # INVALID     $zero, $zero, 0x7CE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281fd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x281FD0 raw=0x000007CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281fd4:
    // 0x281fd4: 0x7cf  sync.p
    ctx->pc = 0x281fd4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_281fd8:
    // 0x281fd8: 0x7d0  .word       0x000007D0                   # mfhi        $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281fd8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_281fdc:
    // 0x281fdc: 0x7d1  .word       0x000007D1                   # mthi        $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281fdcu;
    ctx->hi = GPR_U64(ctx, 0);
label_281fe0:
    // 0x281fe0: 0x7d2  .word       0x000007D2                   # mflo        $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281fe0u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_281fe4:
    // 0x281fe4: 0x7d3  .word       0x000007D3                   # mtlo        $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281fe4u;
    ctx->lo = GPR_U64(ctx, 0);
label_281fe8:
    // 0x281fe8: 0x7d4  .word       0x000007D4                   # dsllv       $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281fe8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_281fec:
    // 0x281fec: 0x7d5  .word       0x000007D5                   # INVALID     $zero, $zero, 0x7D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281fecu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x281FEC raw=0x000007D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281ff0:
    // 0x281ff0: 0x7d6  .word       0x000007D6                   # dsrlv       $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281ff0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_281ff4:
    // 0x281ff4: 0x7d7  .word       0x000007D7                   # dsrav       $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281ff4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_281ff8:
    // 0x281ff8: 0x7d8  .word       0x000007D8                   # mult        $zero, $zero, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x281ff8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_281ffc:
    // 0x281ffc: 0x7d9  .word       0x000007D9                   # multu       $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281ffcu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_282000:
    // 0x282000: 0x7da  .word       0x000007DA                   # div         $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282000u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_282004:
    // 0x282004: 0x7db  .word       0x000007DB                   # divu        $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282004u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_282008:
    // 0x282008: 0x7dc  .word       0x000007DC                   # dmult       $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282008u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x282008 raw=0x000007DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28200c:
    // 0x28200c: 0x7dd  .word       0x000007DD                   # dmultu      $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28200cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28200C raw=0x000007DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_282010:
    // 0x282010: 0x7de  .word       0x000007DE                   # ddiv        $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282010u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x282010 raw=0x000007DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_282014:
    // 0x282014: 0x7df  .word       0x000007DF                   # ddivu       $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282014u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x282014 raw=0x000007DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_282018:
    // 0x282018: 0x7e0  .word       0x000007E0                   # add         $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282018u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28201c:
    // 0x28201c: 0x7e1  .word       0x000007E1                   # addu        $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28201cu;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_282020:
    // 0x282020: 0x7e2  .word       0x000007E2                   # neg         $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282020u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_282024:
    // 0x282024: 0x7e3  .word       0x000007E3                   # negu        $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282024u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_282028:
    // 0x282028: 0x7e4  .word       0x000007E4                   # and         $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282028u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_28202c:
    // 0x28202c: 0x0  nop
    ctx->pc = 0x28202cu;
    // NOP
label_282030:
    // 0x282030: 0x7b7  .word       0x000007B7                   # INVALID     $zero, $zero, 0x7B7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282030u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x282030 raw=0x000007B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_282034:
    // 0x282034: 0x7b8  dsll        $zero, $zero, 30
    ctx->pc = 0x282034u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 30);
label_282038:
    // 0x282038: 0x7b9  .word       0x000007B9                   # INVALID     $zero, $zero, 0x7B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282038u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x282038 raw=0x000007B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28203c:
    // 0x28203c: 0x7ba  dsrl        $zero, $zero, 30
    ctx->pc = 0x28203cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 30);
label_282040:
    // 0x282040: 0x7bb  dsra        $zero, $zero, 30
    ctx->pc = 0x282040u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 30);
label_282044:
    // 0x282044: 0x7bc  dsll32      $zero, $zero, 30
    ctx->pc = 0x282044u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 30));
label_282048:
    // 0x282048: 0x7bd  .word       0x000007BD                   # INVALID     $zero, $zero, 0x7BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282048u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x282048 raw=0x000007BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28204c:
    // 0x28204c: 0x7be  dsrl32      $zero, $zero, 30
    ctx->pc = 0x28204cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 30));
    ctx->pc = 0x282050u;
    return;
}

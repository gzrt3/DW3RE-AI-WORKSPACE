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


void FUN_0019b618_part30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1a98a8u: goto label_1a98a8;
        case 0x1a98acu: goto label_1a98ac;
        case 0x1a98b0u: goto label_1a98b0;
        case 0x1a98b4u: goto label_1a98b4;
        case 0x1a98b8u: goto label_1a98b8;
        case 0x1a98bcu: goto label_1a98bc;
        case 0x1a98c0u: goto label_1a98c0;
        case 0x1a98c4u: goto label_1a98c4;
        case 0x1a98c8u: goto label_1a98c8;
        case 0x1a98ccu: goto label_1a98cc;
        case 0x1a98d0u: goto label_1a98d0;
        case 0x1a98d4u: goto label_1a98d4;
        case 0x1a98d8u: goto label_1a98d8;
        case 0x1a98dcu: goto label_1a98dc;
        case 0x1a98e0u: goto label_1a98e0;
        case 0x1a98e4u: goto label_1a98e4;
        case 0x1a98e8u: goto label_1a98e8;
        case 0x1a98ecu: goto label_1a98ec;
        case 0x1a98f0u: goto label_1a98f0;
        case 0x1a98f4u: goto label_1a98f4;
        case 0x1a98f8u: goto label_1a98f8;
        case 0x1a98fcu: goto label_1a98fc;
        case 0x1a9900u: goto label_1a9900;
        case 0x1a9904u: goto label_1a9904;
        case 0x1a9908u: goto label_1a9908;
        case 0x1a990cu: goto label_1a990c;
        case 0x1a9910u: goto label_1a9910;
        case 0x1a9914u: goto label_1a9914;
        case 0x1a9918u: goto label_1a9918;
        case 0x1a991cu: goto label_1a991c;
        case 0x1a9920u: goto label_1a9920;
        case 0x1a9924u: goto label_1a9924;
        case 0x1a9928u: goto label_1a9928;
        case 0x1a992cu: goto label_1a992c;
        case 0x1a9930u: goto label_1a9930;
        case 0x1a9934u: goto label_1a9934;
        case 0x1a9938u: goto label_1a9938;
        case 0x1a993cu: goto label_1a993c;
        case 0x1a9940u: goto label_1a9940;
        case 0x1a9944u: goto label_1a9944;
        case 0x1a9948u: goto label_1a9948;
        case 0x1a994cu: goto label_1a994c;
        case 0x1a9950u: goto label_1a9950;
        case 0x1a9954u: goto label_1a9954;
        case 0x1a9958u: goto label_1a9958;
        case 0x1a995cu: goto label_1a995c;
        case 0x1a9960u: goto label_1a9960;
        case 0x1a9964u: goto label_1a9964;
        case 0x1a9968u: goto label_1a9968;
        case 0x1a996cu: goto label_1a996c;
        case 0x1a9970u: goto label_1a9970;
        case 0x1a9974u: goto label_1a9974;
        case 0x1a9978u: goto label_1a9978;
        case 0x1a997cu: goto label_1a997c;
        case 0x1a9980u: goto label_1a9980;
        case 0x1a9984u: goto label_1a9984;
        case 0x1a9988u: goto label_1a9988;
        case 0x1a998cu: goto label_1a998c;
        case 0x1a9990u: goto label_1a9990;
        case 0x1a9994u: goto label_1a9994;
        case 0x1a9998u: goto label_1a9998;
        case 0x1a999cu: goto label_1a999c;
        case 0x1a99a0u: goto label_1a99a0;
        case 0x1a99a4u: goto label_1a99a4;
        case 0x1a99a8u: goto label_1a99a8;
        case 0x1a99acu: goto label_1a99ac;
        case 0x1a99b0u: goto label_1a99b0;
        case 0x1a99b4u: goto label_1a99b4;
        case 0x1a99b8u: goto label_1a99b8;
        case 0x1a99bcu: goto label_1a99bc;
        case 0x1a99c0u: goto label_1a99c0;
        case 0x1a99c4u: goto label_1a99c4;
        case 0x1a99c8u: goto label_1a99c8;
        case 0x1a99ccu: goto label_1a99cc;
        case 0x1a99d0u: goto label_1a99d0;
        case 0x1a99d4u: goto label_1a99d4;
        case 0x1a99d8u: goto label_1a99d8;
        case 0x1a99dcu: goto label_1a99dc;
        case 0x1a99e0u: goto label_1a99e0;
        case 0x1a99e4u: goto label_1a99e4;
        case 0x1a99e8u: goto label_1a99e8;
        case 0x1a99ecu: goto label_1a99ec;
        case 0x1a99f0u: goto label_1a99f0;
        case 0x1a99f4u: goto label_1a99f4;
        case 0x1a99f8u: goto label_1a99f8;
        case 0x1a99fcu: goto label_1a99fc;
        case 0x1a9a00u: goto label_1a9a00;
        case 0x1a9a04u: goto label_1a9a04;
        case 0x1a9a08u: goto label_1a9a08;
        case 0x1a9a0cu: goto label_1a9a0c;
        case 0x1a9a10u: goto label_1a9a10;
        case 0x1a9a14u: goto label_1a9a14;
        case 0x1a9a18u: goto label_1a9a18;
        case 0x1a9a1cu: goto label_1a9a1c;
        case 0x1a9a20u: goto label_1a9a20;
        case 0x1a9a24u: goto label_1a9a24;
        case 0x1a9a28u: goto label_1a9a28;
        case 0x1a9a2cu: goto label_1a9a2c;
        case 0x1a9a30u: goto label_1a9a30;
        case 0x1a9a34u: goto label_1a9a34;
        case 0x1a9a38u: goto label_1a9a38;
        case 0x1a9a3cu: goto label_1a9a3c;
        case 0x1a9a40u: goto label_1a9a40;
        case 0x1a9a44u: goto label_1a9a44;
        case 0x1a9a48u: goto label_1a9a48;
        case 0x1a9a4cu: goto label_1a9a4c;
        case 0x1a9a50u: goto label_1a9a50;
        case 0x1a9a54u: goto label_1a9a54;
        case 0x1a9a58u: goto label_1a9a58;
        case 0x1a9a5cu: goto label_1a9a5c;
        case 0x1a9a60u: goto label_1a9a60;
        case 0x1a9a64u: goto label_1a9a64;
        case 0x1a9a68u: goto label_1a9a68;
        case 0x1a9a6cu: goto label_1a9a6c;
        case 0x1a9a70u: goto label_1a9a70;
        case 0x1a9a74u: goto label_1a9a74;
        case 0x1a9a78u: goto label_1a9a78;
        case 0x1a9a7cu: goto label_1a9a7c;
        case 0x1a9a80u: goto label_1a9a80;
        case 0x1a9a84u: goto label_1a9a84;
        case 0x1a9a88u: goto label_1a9a88;
        case 0x1a9a8cu: goto label_1a9a8c;
        case 0x1a9a90u: goto label_1a9a90;
        case 0x1a9a94u: goto label_1a9a94;
        case 0x1a9a98u: goto label_1a9a98;
        case 0x1a9a9cu: goto label_1a9a9c;
        case 0x1a9aa0u: goto label_1a9aa0;
        case 0x1a9aa4u: goto label_1a9aa4;
        case 0x1a9aa8u: goto label_1a9aa8;
        case 0x1a9aacu: goto label_1a9aac;
        case 0x1a9ab0u: goto label_1a9ab0;
        case 0x1a9ab4u: goto label_1a9ab4;
        case 0x1a9ab8u: goto label_1a9ab8;
        case 0x1a9abcu: goto label_1a9abc;
        case 0x1a9ac0u: goto label_1a9ac0;
        case 0x1a9ac4u: goto label_1a9ac4;
        case 0x1a9ac8u: goto label_1a9ac8;
        case 0x1a9accu: goto label_1a9acc;
        case 0x1a9ad0u: goto label_1a9ad0;
        case 0x1a9ad4u: goto label_1a9ad4;
        case 0x1a9ad8u: goto label_1a9ad8;
        case 0x1a9adcu: goto label_1a9adc;
        case 0x1a9ae0u: goto label_1a9ae0;
        case 0x1a9ae4u: goto label_1a9ae4;
        case 0x1a9ae8u: goto label_1a9ae8;
        case 0x1a9aecu: goto label_1a9aec;
        case 0x1a9af0u: goto label_1a9af0;
        case 0x1a9af4u: goto label_1a9af4;
        case 0x1a9af8u: goto label_1a9af8;
        case 0x1a9afcu: goto label_1a9afc;
        case 0x1a9b00u: goto label_1a9b00;
        case 0x1a9b04u: goto label_1a9b04;
        case 0x1a9b08u: goto label_1a9b08;
        case 0x1a9b0cu: goto label_1a9b0c;
        case 0x1a9b10u: goto label_1a9b10;
        case 0x1a9b14u: goto label_1a9b14;
        case 0x1a9b18u: goto label_1a9b18;
        case 0x1a9b1cu: goto label_1a9b1c;
        case 0x1a9b20u: goto label_1a9b20;
        case 0x1a9b24u: goto label_1a9b24;
        case 0x1a9b28u: goto label_1a9b28;
        case 0x1a9b2cu: goto label_1a9b2c;
        case 0x1a9b30u: goto label_1a9b30;
        case 0x1a9b34u: goto label_1a9b34;
        case 0x1a9b38u: goto label_1a9b38;
        case 0x1a9b3cu: goto label_1a9b3c;
        case 0x1a9b40u: goto label_1a9b40;
        case 0x1a9b44u: goto label_1a9b44;
        case 0x1a9b48u: goto label_1a9b48;
        case 0x1a9b4cu: goto label_1a9b4c;
        case 0x1a9b50u: goto label_1a9b50;
        case 0x1a9b54u: goto label_1a9b54;
        case 0x1a9b58u: goto label_1a9b58;
        case 0x1a9b5cu: goto label_1a9b5c;
        case 0x1a9b60u: goto label_1a9b60;
        case 0x1a9b64u: goto label_1a9b64;
        case 0x1a9b68u: goto label_1a9b68;
        case 0x1a9b6cu: goto label_1a9b6c;
        case 0x1a9b70u: goto label_1a9b70;
        case 0x1a9b74u: goto label_1a9b74;
        case 0x1a9b78u: goto label_1a9b78;
        case 0x1a9b7cu: goto label_1a9b7c;
        case 0x1a9b80u: goto label_1a9b80;
        case 0x1a9b84u: goto label_1a9b84;
        case 0x1a9b88u: goto label_1a9b88;
        case 0x1a9b8cu: goto label_1a9b8c;
        case 0x1a9b90u: goto label_1a9b90;
        case 0x1a9b94u: goto label_1a9b94;
        case 0x1a9b98u: goto label_1a9b98;
        case 0x1a9b9cu: goto label_1a9b9c;
        case 0x1a9ba0u: goto label_1a9ba0;
        case 0x1a9ba4u: goto label_1a9ba4;
        case 0x1a9ba8u: goto label_1a9ba8;
        case 0x1a9bacu: goto label_1a9bac;
        case 0x1a9bb0u: goto label_1a9bb0;
        case 0x1a9bb4u: goto label_1a9bb4;
        case 0x1a9bb8u: goto label_1a9bb8;
        case 0x1a9bbcu: goto label_1a9bbc;
        case 0x1a9bc0u: goto label_1a9bc0;
        case 0x1a9bc4u: goto label_1a9bc4;
        case 0x1a9bc8u: goto label_1a9bc8;
        case 0x1a9bccu: goto label_1a9bcc;
        case 0x1a9bd0u: goto label_1a9bd0;
        case 0x1a9bd4u: goto label_1a9bd4;
        case 0x1a9bd8u: goto label_1a9bd8;
        case 0x1a9bdcu: goto label_1a9bdc;
        case 0x1a9be0u: goto label_1a9be0;
        case 0x1a9be4u: goto label_1a9be4;
        case 0x1a9be8u: goto label_1a9be8;
        case 0x1a9becu: goto label_1a9bec;
        case 0x1a9bf0u: goto label_1a9bf0;
        case 0x1a9bf4u: goto label_1a9bf4;
        case 0x1a9bf8u: goto label_1a9bf8;
        case 0x1a9bfcu: goto label_1a9bfc;
        case 0x1a9c00u: goto label_1a9c00;
        case 0x1a9c04u: goto label_1a9c04;
        case 0x1a9c08u: goto label_1a9c08;
        case 0x1a9c0cu: goto label_1a9c0c;
        case 0x1a9c10u: goto label_1a9c10;
        case 0x1a9c14u: goto label_1a9c14;
        case 0x1a9c18u: goto label_1a9c18;
        case 0x1a9c1cu: goto label_1a9c1c;
        case 0x1a9c20u: goto label_1a9c20;
        case 0x1a9c24u: goto label_1a9c24;
        case 0x1a9c28u: goto label_1a9c28;
        case 0x1a9c2cu: goto label_1a9c2c;
        case 0x1a9c30u: goto label_1a9c30;
        case 0x1a9c34u: goto label_1a9c34;
        case 0x1a9c38u: goto label_1a9c38;
        case 0x1a9c3cu: goto label_1a9c3c;
        case 0x1a9c40u: goto label_1a9c40;
        case 0x1a9c44u: goto label_1a9c44;
        case 0x1a9c48u: goto label_1a9c48;
        case 0x1a9c4cu: goto label_1a9c4c;
        case 0x1a9c50u: goto label_1a9c50;
        case 0x1a9c54u: goto label_1a9c54;
        case 0x1a9c58u: goto label_1a9c58;
        case 0x1a9c5cu: goto label_1a9c5c;
        case 0x1a9c60u: goto label_1a9c60;
        case 0x1a9c64u: goto label_1a9c64;
        case 0x1a9c68u: goto label_1a9c68;
        case 0x1a9c6cu: goto label_1a9c6c;
        case 0x1a9c70u: goto label_1a9c70;
        case 0x1a9c74u: goto label_1a9c74;
        case 0x1a9c78u: goto label_1a9c78;
        case 0x1a9c7cu: goto label_1a9c7c;
        case 0x1a9c80u: goto label_1a9c80;
        case 0x1a9c84u: goto label_1a9c84;
        case 0x1a9c88u: goto label_1a9c88;
        case 0x1a9c8cu: goto label_1a9c8c;
        case 0x1a9c90u: goto label_1a9c90;
        case 0x1a9c94u: goto label_1a9c94;
        case 0x1a9c98u: goto label_1a9c98;
        case 0x1a9c9cu: goto label_1a9c9c;
        case 0x1a9ca0u: goto label_1a9ca0;
        case 0x1a9ca4u: goto label_1a9ca4;
        case 0x1a9ca8u: goto label_1a9ca8;
        case 0x1a9cacu: goto label_1a9cac;
        case 0x1a9cb0u: goto label_1a9cb0;
        case 0x1a9cb4u: goto label_1a9cb4;
        case 0x1a9cb8u: goto label_1a9cb8;
        case 0x1a9cbcu: goto label_1a9cbc;
        case 0x1a9cc0u: goto label_1a9cc0;
        case 0x1a9cc4u: goto label_1a9cc4;
        case 0x1a9cc8u: goto label_1a9cc8;
        case 0x1a9cccu: goto label_1a9ccc;
        case 0x1a9cd0u: goto label_1a9cd0;
        case 0x1a9cd4u: goto label_1a9cd4;
        case 0x1a9cd8u: goto label_1a9cd8;
        case 0x1a9cdcu: goto label_1a9cdc;
        case 0x1a9ce0u: goto label_1a9ce0;
        case 0x1a9ce4u: goto label_1a9ce4;
        case 0x1a9ce8u: goto label_1a9ce8;
        case 0x1a9cecu: goto label_1a9cec;
        case 0x1a9cf0u: goto label_1a9cf0;
        case 0x1a9cf4u: goto label_1a9cf4;
        case 0x1a9cf8u: goto label_1a9cf8;
        case 0x1a9cfcu: goto label_1a9cfc;
        case 0x1a9d00u: goto label_1a9d00;
        case 0x1a9d04u: goto label_1a9d04;
        case 0x1a9d08u: goto label_1a9d08;
        case 0x1a9d0cu: goto label_1a9d0c;
        case 0x1a9d10u: goto label_1a9d10;
        case 0x1a9d14u: goto label_1a9d14;
        case 0x1a9d18u: goto label_1a9d18;
        case 0x1a9d1cu: goto label_1a9d1c;
        case 0x1a9d20u: goto label_1a9d20;
        case 0x1a9d24u: goto label_1a9d24;
        case 0x1a9d28u: goto label_1a9d28;
        case 0x1a9d2cu: goto label_1a9d2c;
        case 0x1a9d30u: goto label_1a9d30;
        case 0x1a9d34u: goto label_1a9d34;
        case 0x1a9d38u: goto label_1a9d38;
        case 0x1a9d3cu: goto label_1a9d3c;
        case 0x1a9d40u: goto label_1a9d40;
        case 0x1a9d44u: goto label_1a9d44;
        case 0x1a9d48u: goto label_1a9d48;
        case 0x1a9d4cu: goto label_1a9d4c;
        case 0x1a9d50u: goto label_1a9d50;
        case 0x1a9d54u: goto label_1a9d54;
        case 0x1a9d58u: goto label_1a9d58;
        case 0x1a9d5cu: goto label_1a9d5c;
        case 0x1a9d60u: goto label_1a9d60;
        case 0x1a9d64u: goto label_1a9d64;
        case 0x1a9d68u: goto label_1a9d68;
        case 0x1a9d6cu: goto label_1a9d6c;
        case 0x1a9d70u: goto label_1a9d70;
        case 0x1a9d74u: goto label_1a9d74;
        case 0x1a9d78u: goto label_1a9d78;
        case 0x1a9d7cu: goto label_1a9d7c;
        case 0x1a9d80u: goto label_1a9d80;
        case 0x1a9d84u: goto label_1a9d84;
        case 0x1a9d88u: goto label_1a9d88;
        case 0x1a9d8cu: goto label_1a9d8c;
        case 0x1a9d90u: goto label_1a9d90;
        case 0x1a9d94u: goto label_1a9d94;
        case 0x1a9d98u: goto label_1a9d98;
        case 0x1a9d9cu: goto label_1a9d9c;
        case 0x1a9da0u: goto label_1a9da0;
        case 0x1a9da4u: goto label_1a9da4;
        case 0x1a9da8u: goto label_1a9da8;
        case 0x1a9dacu: goto label_1a9dac;
        case 0x1a9db0u: goto label_1a9db0;
        case 0x1a9db4u: goto label_1a9db4;
        case 0x1a9db8u: goto label_1a9db8;
        case 0x1a9dbcu: goto label_1a9dbc;
        case 0x1a9dc0u: goto label_1a9dc0;
        case 0x1a9dc4u: goto label_1a9dc4;
        case 0x1a9dc8u: goto label_1a9dc8;
        case 0x1a9dccu: goto label_1a9dcc;
        case 0x1a9dd0u: goto label_1a9dd0;
        case 0x1a9dd4u: goto label_1a9dd4;
        case 0x1a9dd8u: goto label_1a9dd8;
        case 0x1a9ddcu: goto label_1a9ddc;
        case 0x1a9de0u: goto label_1a9de0;
        case 0x1a9de4u: goto label_1a9de4;
        case 0x1a9de8u: goto label_1a9de8;
        case 0x1a9decu: goto label_1a9dec;
        case 0x1a9df0u: goto label_1a9df0;
        case 0x1a9df4u: goto label_1a9df4;
        case 0x1a9df8u: goto label_1a9df8;
        case 0x1a9dfcu: goto label_1a9dfc;
        case 0x1a9e00u: goto label_1a9e00;
        case 0x1a9e04u: goto label_1a9e04;
        case 0x1a9e08u: goto label_1a9e08;
        case 0x1a9e0cu: goto label_1a9e0c;
        case 0x1a9e10u: goto label_1a9e10;
        case 0x1a9e14u: goto label_1a9e14;
        case 0x1a9e18u: goto label_1a9e18;
        case 0x1a9e1cu: goto label_1a9e1c;
        case 0x1a9e20u: goto label_1a9e20;
        case 0x1a9e24u: goto label_1a9e24;
        case 0x1a9e28u: goto label_1a9e28;
        case 0x1a9e2cu: goto label_1a9e2c;
        case 0x1a9e30u: goto label_1a9e30;
        case 0x1a9e34u: goto label_1a9e34;
        case 0x1a9e38u: goto label_1a9e38;
        case 0x1a9e3cu: goto label_1a9e3c;
        case 0x1a9e40u: goto label_1a9e40;
        case 0x1a9e44u: goto label_1a9e44;
        case 0x1a9e48u: goto label_1a9e48;
        case 0x1a9e4cu: goto label_1a9e4c;
        case 0x1a9e50u: goto label_1a9e50;
        case 0x1a9e54u: goto label_1a9e54;
        case 0x1a9e58u: goto label_1a9e58;
        case 0x1a9e5cu: goto label_1a9e5c;
        case 0x1a9e60u: goto label_1a9e60;
        case 0x1a9e64u: goto label_1a9e64;
        case 0x1a9e68u: goto label_1a9e68;
        case 0x1a9e6cu: goto label_1a9e6c;
        case 0x1a9e70u: goto label_1a9e70;
        case 0x1a9e74u: goto label_1a9e74;
        case 0x1a9e78u: goto label_1a9e78;
        case 0x1a9e7cu: goto label_1a9e7c;
        case 0x1a9e80u: goto label_1a9e80;
        case 0x1a9e84u: goto label_1a9e84;
        case 0x1a9e88u: goto label_1a9e88;
        case 0x1a9e8cu: goto label_1a9e8c;
        case 0x1a9e90u: goto label_1a9e90;
        case 0x1a9e94u: goto label_1a9e94;
        case 0x1a9e98u: goto label_1a9e98;
        case 0x1a9e9cu: goto label_1a9e9c;
        case 0x1a9ea0u: goto label_1a9ea0;
        case 0x1a9ea4u: goto label_1a9ea4;
        case 0x1a9ea8u: goto label_1a9ea8;
        case 0x1a9eacu: goto label_1a9eac;
        case 0x1a9eb0u: goto label_1a9eb0;
        case 0x1a9eb4u: goto label_1a9eb4;
        case 0x1a9eb8u: goto label_1a9eb8;
        case 0x1a9ebcu: goto label_1a9ebc;
        case 0x1a9ec0u: goto label_1a9ec0;
        case 0x1a9ec4u: goto label_1a9ec4;
        case 0x1a9ec8u: goto label_1a9ec8;
        case 0x1a9eccu: goto label_1a9ecc;
        case 0x1a9ed0u: goto label_1a9ed0;
        case 0x1a9ed4u: goto label_1a9ed4;
        case 0x1a9ed8u: goto label_1a9ed8;
        case 0x1a9edcu: goto label_1a9edc;
        case 0x1a9ee0u: goto label_1a9ee0;
        case 0x1a9ee4u: goto label_1a9ee4;
        case 0x1a9ee8u: goto label_1a9ee8;
        case 0x1a9eecu: goto label_1a9eec;
        case 0x1a9ef0u: goto label_1a9ef0;
        case 0x1a9ef4u: goto label_1a9ef4;
        case 0x1a9ef8u: goto label_1a9ef8;
        case 0x1a9efcu: goto label_1a9efc;
        case 0x1a9f00u: goto label_1a9f00;
        case 0x1a9f04u: goto label_1a9f04;
        case 0x1a9f08u: goto label_1a9f08;
        case 0x1a9f0cu: goto label_1a9f0c;
        case 0x1a9f10u: goto label_1a9f10;
        case 0x1a9f14u: goto label_1a9f14;
        case 0x1a9f18u: goto label_1a9f18;
        case 0x1a9f1cu: goto label_1a9f1c;
        case 0x1a9f20u: goto label_1a9f20;
        case 0x1a9f24u: goto label_1a9f24;
        case 0x1a9f28u: goto label_1a9f28;
        case 0x1a9f2cu: goto label_1a9f2c;
        case 0x1a9f30u: goto label_1a9f30;
        case 0x1a9f34u: goto label_1a9f34;
        case 0x1a9f38u: goto label_1a9f38;
        case 0x1a9f3cu: goto label_1a9f3c;
        case 0x1a9f40u: goto label_1a9f40;
        case 0x1a9f44u: goto label_1a9f44;
        case 0x1a9f48u: goto label_1a9f48;
        case 0x1a9f4cu: goto label_1a9f4c;
        case 0x1a9f50u: goto label_1a9f50;
        case 0x1a9f54u: goto label_1a9f54;
        case 0x1a9f58u: goto label_1a9f58;
        case 0x1a9f5cu: goto label_1a9f5c;
        case 0x1a9f60u: goto label_1a9f60;
        case 0x1a9f64u: goto label_1a9f64;
        case 0x1a9f68u: goto label_1a9f68;
        case 0x1a9f6cu: goto label_1a9f6c;
        case 0x1a9f70u: goto label_1a9f70;
        case 0x1a9f74u: goto label_1a9f74;
        case 0x1a9f78u: goto label_1a9f78;
        case 0x1a9f7cu: goto label_1a9f7c;
        case 0x1a9f80u: goto label_1a9f80;
        case 0x1a9f84u: goto label_1a9f84;
        case 0x1a9f88u: goto label_1a9f88;
        case 0x1a9f8cu: goto label_1a9f8c;
        case 0x1a9f90u: goto label_1a9f90;
        case 0x1a9f94u: goto label_1a9f94;
        case 0x1a9f98u: goto label_1a9f98;
        case 0x1a9f9cu: goto label_1a9f9c;
        case 0x1a9fa0u: goto label_1a9fa0;
        case 0x1a9fa4u: goto label_1a9fa4;
        case 0x1a9fa8u: goto label_1a9fa8;
        case 0x1a9facu: goto label_1a9fac;
        case 0x1a9fb0u: goto label_1a9fb0;
        case 0x1a9fb4u: goto label_1a9fb4;
        case 0x1a9fb8u: goto label_1a9fb8;
        case 0x1a9fbcu: goto label_1a9fbc;
        case 0x1a9fc0u: goto label_1a9fc0;
        case 0x1a9fc4u: goto label_1a9fc4;
        case 0x1a9fc8u: goto label_1a9fc8;
        case 0x1a9fccu: goto label_1a9fcc;
        case 0x1a9fd0u: goto label_1a9fd0;
        case 0x1a9fd4u: goto label_1a9fd4;
        case 0x1a9fd8u: goto label_1a9fd8;
        case 0x1a9fdcu: goto label_1a9fdc;
        case 0x1a9fe0u: goto label_1a9fe0;
        case 0x1a9fe4u: goto label_1a9fe4;
        case 0x1a9fe8u: goto label_1a9fe8;
        case 0x1a9fecu: goto label_1a9fec;
        case 0x1a9ff0u: goto label_1a9ff0;
        case 0x1a9ff4u: goto label_1a9ff4;
        case 0x1a9ff8u: goto label_1a9ff8;
        case 0x1a9ffcu: goto label_1a9ffc;
        case 0x1aa000u: goto label_1aa000;
        case 0x1aa004u: goto label_1aa004;
        case 0x1aa008u: goto label_1aa008;
        case 0x1aa00cu: goto label_1aa00c;
        case 0x1aa010u: goto label_1aa010;
        case 0x1aa014u: goto label_1aa014;
        case 0x1aa018u: goto label_1aa018;
        case 0x1aa01cu: goto label_1aa01c;
        case 0x1aa020u: goto label_1aa020;
        case 0x1aa024u: goto label_1aa024;
        case 0x1aa028u: goto label_1aa028;
        case 0x1aa02cu: goto label_1aa02c;
        case 0x1aa030u: goto label_1aa030;
        case 0x1aa034u: goto label_1aa034;
        case 0x1aa038u: goto label_1aa038;
        case 0x1aa03cu: goto label_1aa03c;
        case 0x1aa040u: goto label_1aa040;
        case 0x1aa044u: goto label_1aa044;
        case 0x1aa048u: goto label_1aa048;
        case 0x1aa04cu: goto label_1aa04c;
        case 0x1aa050u: goto label_1aa050;
        case 0x1aa054u: goto label_1aa054;
        case 0x1aa058u: goto label_1aa058;
        case 0x1aa05cu: goto label_1aa05c;
        case 0x1aa060u: goto label_1aa060;
        case 0x1aa064u: goto label_1aa064;
        case 0x1aa068u: goto label_1aa068;
        case 0x1aa06cu: goto label_1aa06c;
        case 0x1aa070u: goto label_1aa070;
        case 0x1aa074u: goto label_1aa074;
        default: return;
    }

label_1a98a8:
    // 0x1a98a8: 0xae370414  sw          $s7, 0x414($s1)
    ctx->pc = 0x1a98a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1044), GPR_U32(ctx, 23));
label_1a98ac:
    // 0x1a98ac: 0xc069bee  jal         func_1A6FB8
label_1a98b0:
    if (ctx->pc == 0x1A98B0u) {
        ctx->pc = 0x1A98B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A98ACu;
        // 0x1a98b0: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A98B4u;
        goto label_1a98b4;
    }
    ctx->pc = 0x1A98ACu;
    SET_GPR_U32(ctx, 31, 0x1A98B4u);
    ctx->pc = 0x1A98B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A98ACu;
    // 0x1a98b0: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    { ctx->pc = 0x1a6fb8; return; }
    ctx->pc = 0x1A98B4u;
label_1a98b4:
    // 0x1a98b4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a98b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a98b8:
    // 0x1a98b8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1a98b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1a98bc:
    // 0x1a98bc: 0x24513e80  addiu       $s1, $v0, 0x3E80
    ctx->pc = 0x1a98bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16000));
label_1a98c0:
    // 0x1a98c0: 0x24844500  addiu       $a0, $a0, 0x4500
    ctx->pc = 0x1a98c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17664));
label_1a98c4:
    // 0x1a98c4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1a98c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a98c8:
    // 0x1a98c8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a98c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a98cc:
    // 0x1a98cc: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x1a98ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_1a98d0:
    // 0x1a98d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a98d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a98d4:
    // 0x1a98d4: 0x24080420  addiu       $t0, $zero, 0x420
    ctx->pc = 0x1a98d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
label_1a98d8:
    // 0x1a98d8: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1a98d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a98dc:
    // 0x1a98dc: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1a98dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a98e0:
    // 0x1a98e0: 0xc069e2a  jal         func_1A78A8
label_1a98e4:
    if (ctx->pc == 0x1A98E4u) {
        ctx->pc = 0x1A98E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A98E0u;
        // 0x1a98e4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A98E8u;
        goto label_1a98e8;
    }
    ctx->pc = 0x1A98E0u;
    SET_GPR_U32(ctx, 31, 0x1A98E8u);
    ctx->pc = 0x1A98E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A98E0u;
    // 0x1a98e4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1A98E8u;
label_1a98e8:
    // 0x1a98e8: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_1a98ec:
    if (ctx->pc == 0x1A98ECu) {
        ctx->pc = 0x1A98ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A98E8u;
        // 0x1a98ec: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A98F0u;
        goto label_1a98f0;
    }
    ctx->pc = 0x1A98E8u;
    {
        const bool branch_taken_0x1a98e8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A98ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A98E8u;
        // 0x1a98ec: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a98e8) {
            ctx->pc = 0x1A9908u;
            goto label_1a9908;
        }
    }
    ctx->pc = 0x1A98F0u;
label_1a98f0:
    // 0x1a98f0: 0xc06920c  jal         func_1A4830
label_1a98f4:
    if (ctx->pc == 0x1A98F4u) {
        ctx->pc = 0x1A98F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A98F0u;
        // 0x1a98f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A98F8u;
        goto label_1a98f8;
    }
    ctx->pc = 0x1A98F0u;
    SET_GPR_U32(ctx, 31, 0x1A98F8u);
    ctx->pc = 0x1A98F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A98F0u;
    // 0x1a98f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A98F8u;
label_1a98f8:
    // 0x1a98f8: 0xc06a158  jal         func_1A8560
label_1a98fc:
    if (ctx->pc == 0x1A98FCu) {
        ctx->pc = 0x1A9900u;
        goto label_1a9900;
    }
    ctx->pc = 0x1A98F8u;
    SET_GPR_U32(ctx, 31, 0x1A9900u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1A9900u;
label_1a9900:
    // 0x1a9900: 0x1000000f  b           . + 4 + (0xF << 2)
label_1a9904:
    if (ctx->pc == 0x1A9904u) {
        ctx->pc = 0x1A9904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9900u;
        // 0x1a9904: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9908u;
        goto label_1a9908;
    }
    ctx->pc = 0x1A9900u;
    {
        const bool branch_taken_0x1a9900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9900u;
        // 0x1a9904: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9900) {
            ctx->pc = 0x1A9940u;
            goto label_1a9940;
        }
    }
    ctx->pc = 0x1A9908u;
label_1a9908:
    // 0x1a9908: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x1a9908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_1a990c:
    // 0x1a990c: 0xc06a158  jal         func_1A8560
label_1a9910:
    if (ctx->pc == 0x1A9910u) {
        ctx->pc = 0x1A9910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A990Cu;
        // 0x1a9910: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9914u;
        goto label_1a9914;
    }
    ctx->pc = 0x1A990Cu;
    SET_GPR_U32(ctx, 31, 0x1A9914u);
    ctx->pc = 0x1A9910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A990Cu;
    // 0x1a9910: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1A9914u;
label_1a9914:
    // 0x1a9914: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1a9918:
    if (ctx->pc == 0x1A9918u) {
        ctx->pc = 0x1A991Cu;
        goto label_1a991c;
    }
    ctx->pc = 0x1A9914u;
    {
        const bool branch_taken_0x1a9914 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9914) {
            ctx->pc = 0x1A992Cu;
            goto label_1a992c;
        }
    }
    ctx->pc = 0x1A991Cu;
label_1a991c:
    // 0x1a991c: 0xc06920c  jal         func_1A4830
label_1a9920:
    if (ctx->pc == 0x1A9920u) {
        ctx->pc = 0x1A9920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A991Cu;
        // 0x1a9920: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9924u;
        goto label_1a9924;
    }
    ctx->pc = 0x1A991Cu;
    SET_GPR_U32(ctx, 31, 0x1A9924u);
    ctx->pc = 0x1A9920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A991Cu;
    // 0x1a9920: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A9924u;
label_1a9924:
    // 0x1a9924: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a9928:
    if (ctx->pc == 0x1A9928u) {
        ctx->pc = 0x1A9928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9924u;
        // 0x1a9928: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A992Cu;
        goto label_1a992c;
    }
    ctx->pc = 0x1A9924u;
    {
        const bool branch_taken_0x1a9924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9924u;
        // 0x1a9928: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9924) {
            ctx->pc = 0x1A9940u;
            goto label_1a9940;
        }
    }
    ctx->pc = 0x1A992Cu;
label_1a992c:
    // 0x1a992c: 0xc069218  jal         func_1A4860
label_1a9930:
    if (ctx->pc == 0x1A9930u) {
        ctx->pc = 0x1A9930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A992Cu;
        // 0x1a9930: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9934u;
        goto label_1a9934;
    }
    ctx->pc = 0x1A992Cu;
    SET_GPR_U32(ctx, 31, 0x1A9934u);
    ctx->pc = 0x1A9930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A992Cu;
    // 0x1a9930: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1A9934u;
label_1a9934:
    // 0x1a9934: 0xc06920c  jal         func_1A4830
label_1a9938:
    if (ctx->pc == 0x1A9938u) {
        ctx->pc = 0x1A9938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9934u;
        // 0x1a9938: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A993Cu;
        goto label_1a993c;
    }
    ctx->pc = 0x1A9934u;
    SET_GPR_U32(ctx, 31, 0x1A993Cu);
    ctx->pc = 0x1A9938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9934u;
    // 0x1a9938: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A993Cu;
label_1a993c:
    // 0x1a993c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1a993cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1a9940:
    // 0x1a9940: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1a9940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1a9944:
    // 0x1a9944: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1a9944u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1a9948:
    // 0x1a9948: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1a9948u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1a994c:
    // 0x1a994c: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1a994cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1a9950:
    // 0x1a9950: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1a9950u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1a9954:
    // 0x1a9954: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1a9954u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a9958:
    // 0x1a9958: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1a9958u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a995c:
    // 0x1a995c: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1a995cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a9960:
    // 0x1a9960: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1a9960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a9964:
    // 0x1a9964: 0x3e00008  jr          $ra
label_1a9968:
    if (ctx->pc == 0x1A9968u) {
        ctx->pc = 0x1A9968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9964u;
        // 0x1a9968: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A996Cu;
        goto label_1a996c;
    }
    ctx->pc = 0x1A9964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9964u;
        // 0x1a9968: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A996Cu;
label_1a996c:
    // 0x1a996c: 0x0  nop
    ctx->pc = 0x1a996cu;
    // NOP
label_1a9970:
    // 0x1a9970: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1a9970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1a9974:
    // 0x1a9974: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1a9974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_1a9978:
    // 0x1a9978: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1a9978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_1a997c:
    // 0x1a997c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1a997cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a9980:
    // 0x1a9980: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a9980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a9984:
    // 0x1a9984: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1a9984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
label_1a9988:
    // 0x1a9988: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1a9988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_1a998c:
    // 0x1a998c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1a998cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1a9990:
    // 0x1a9990: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1a9990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_1a9994:
    // 0x1a9994: 0x3c170037  lui         $s7, 0x37
    ctx->pc = 0x1a9994u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)55 << 16));
label_1a9998:
    // 0x1a9998: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1a9998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_1a999c:
    // 0x1a999c: 0x26f23240  addiu       $s2, $s7, 0x3240
    ctx->pc = 0x1a999cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 12864));
label_1a99a0:
    // 0x1a99a0: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1a99a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_1a99a4:
    // 0x1a99a4: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1a99a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_1a99a8:
    // 0x1a99a8: 0xc06a14c  jal         func_1A8530
label_1a99ac:
    if (ctx->pc == 0x1A99ACu) {
        ctx->pc = 0x1A99ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99A8u;
        // 0x1a99ac: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A99B0u;
        goto label_1a99b0;
    }
    ctx->pc = 0x1A99A8u;
    SET_GPR_U32(ctx, 31, 0x1A99B0u);
    ctx->pc = 0x1A99ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A99A8u;
    // 0x1a99ac: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    { ctx->pc = 0x1a8530; return; }
    ctx->pc = 0x1A99B0u;
label_1a99b0:
    // 0x1a99b0: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1a99b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1a99b4:
    // 0x1a99b4: 0x8c435bf8  lw          $v1, 0x5BF8($v0)
    ctx->pc = 0x1a99b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23544)));
label_1a99b8:
    // 0x1a99b8: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_1a99bc:
    if (ctx->pc == 0x1A99BCu) {
        ctx->pc = 0x1A99BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99B8u;
        // 0x1a99bc: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A99C0u;
        goto label_1a99c0;
    }
    ctx->pc = 0x1A99B8u;
    {
        const bool branch_taken_0x1a99b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a99b8) {
            ctx->pc = 0x1A99BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A99B8u;
            // 0x1a99bc: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A99CCu;
            goto label_1a99cc;
        }
    }
    ctx->pc = 0x1A99C0u;
label_1a99c0:
    // 0x1a99c0: 0xc06a18e  jal         func_1A8638
label_1a99c4:
    if (ctx->pc == 0x1A99C4u) {
        ctx->pc = 0x1A99C8u;
        goto label_1a99c8;
    }
    ctx->pc = 0x1A99C0u;
    SET_GPR_U32(ctx, 31, 0x1A99C8u);
    ctx->pc = 0x1A8638u;
    { ctx->pc = 0x1a8638; return; }
    ctx->pc = 0x1A99C8u;
label_1a99c8:
    // 0x1a99c8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1a99c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1a99cc:
    // 0x1a99cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a99ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a99d0:
    // 0x1a99d0: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1a99d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1a99d4:
    // 0x1a99d4: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_1a99d8:
    if (ctx->pc == 0x1A99D8u) {
        ctx->pc = 0x1A99D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99D4u;
        // 0x1a99d8: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A99DCu;
        goto label_1a99dc;
    }
    ctx->pc = 0x1A99D4u;
    {
        const bool branch_taken_0x1a99d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A99D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99D4u;
        // 0x1a99d8: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a99d4) {
            ctx->pc = 0x1A9A1Cu;
            goto label_1a9a1c;
        }
    }
    ctx->pc = 0x1A99DCu;
label_1a99dc:
    // 0x1a99dc: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1a99dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a99e0:
    // 0x1a99e0: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1a99e0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1a99e4:
    // 0x1a99e4: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1a99e4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_1a99e8:
    // 0x1a99e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a99e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a99ec:
    // 0x1a99ec: 0x0  nop
    ctx->pc = 0x1a99ecu;
    // NOP
label_1a99f0:
    // 0x1a99f0: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x1a99f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
label_1a99f4:
    // 0x1a99f4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1a99f8:
    if (ctx->pc == 0x1A99F8u) {
        ctx->pc = 0x1A99F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99F4u;
        // 0x1a99f8: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A99FCu;
        goto label_1a99fc;
    }
    ctx->pc = 0x1A99F4u;
    {
        const bool branch_taken_0x1a99f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A99F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99F4u;
        // 0x1a99f8: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a99f4) {
            ctx->pc = 0x1A9A28u;
            goto label_1a9a28;
        }
    }
    ctx->pc = 0x1A99FCu;
label_1a99fc:
    // 0x1a99fc: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x1a99fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1a9a00:
    // 0x1a9a00: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1a9a00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1a9a04:
    // 0x1a9a04: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1a9a04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
label_1a9a08:
    // 0x1a9a08: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1a9a08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1a9a0c:
    // 0x1a9a0c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_1a9a10:
    if (ctx->pc == 0x1A9A10u) {
        ctx->pc = 0x1A9A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A0Cu;
        // 0x1a9a10: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9A14u;
        goto label_1a9a14;
    }
    ctx->pc = 0x1A9A0Cu;
    {
        const bool branch_taken_0x1a9a0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9a0c) {
            ctx->pc = 0x1A9A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9A0Cu;
            // 0x1a9a10: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A99F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a99f0;
        }
    }
    ctx->pc = 0x1A9A14u;
label_1a9a14:
    // 0x1a9a14: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a9a18:
    if (ctx->pc == 0x1A9A18u) {
        ctx->pc = 0x1A9A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A14u;
        // 0x1a9a18: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9A1Cu;
        goto label_1a9a1c;
    }
    ctx->pc = 0x1A9A14u;
    {
        const bool branch_taken_0x1a9a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A14u;
        // 0x1a9a18: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a14) {
            ctx->pc = 0x1A9A2Cu;
            goto label_1a9a2c;
        }
    }
    ctx->pc = 0x1A9A1Cu;
label_1a9a1c:
    // 0x1a9a1c: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1a9a1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a9a20:
    // 0x1a9a20: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1a9a20u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1a9a24:
    // 0x1a9a24: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1a9a24u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_1a9a28:
    // 0x1a9a28: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1a9a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1a9a2c:
    // 0x1a9a2c: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
label_1a9a30:
    if (ctx->pc == 0x1A9A30u) {
        ctx->pc = 0x1A9A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A2Cu;
        // 0x1a9a30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9A34u;
        goto label_1a9a34;
    }
    ctx->pc = 0x1A9A2Cu;
    {
        const bool branch_taken_0x1a9a2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A9A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A2Cu;
        // 0x1a9a30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a2c) {
            ctx->pc = 0x1A9A3Cu;
            goto label_1a9a3c;
        }
    }
    ctx->pc = 0x1A9A34u;
label_1a9a34:
    // 0x1a9a34: 0xa240040b  sb          $zero, 0x40B($s2)
    ctx->pc = 0x1a9a34u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
label_1a9a38:
    // 0x1a9a38: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x1a9a38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_1a9a3c:
    // 0x1a9a3c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1a9a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1a9a40:
    // 0x1a9a40: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1a9a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1a9a44:
    // 0x1a9a44: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1a9a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a9a48:
    // 0x1a9a48: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1a9a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_1a9a4c:
    // 0x1a9a4c: 0xc069208  jal         func_1A4820
label_1a9a50:
    if (ctx->pc == 0x1A9A50u) {
        ctx->pc = 0x1A9A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A4Cu;
        // 0x1a9a50: 0x26943e80  addiu       $s4, $s4, 0x3E80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9A54u;
        goto label_1a9a54;
    }
    ctx->pc = 0x1A9A4Cu;
    SET_GPR_U32(ctx, 31, 0x1A9A54u);
    ctx->pc = 0x1A9A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9A4Cu;
    // 0x1a9a50: 0x26943e80  addiu       $s4, $s4, 0x3E80 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1A9A54u;
label_1a9a54:
    // 0x1a9a54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a9a54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a9a58:
    // 0x1a9a58: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1a9a58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
label_1a9a5c:
    // 0x1a9a5c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a9a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a9a60:
    // 0x1a9a60: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1a9a60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_1a9a64:
    // 0x1a9a64: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1a9a64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_1a9a68:
    // 0x1a9a68: 0x26a44500  addiu       $a0, $s5, 0x4500
    ctx->pc = 0x1a9a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 17664));
label_1a9a6c:
    // 0x1a9a6c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1a9a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1a9a70:
    // 0x1a9a70: 0x26e73240  addiu       $a3, $s7, 0x3240
    ctx->pc = 0x1a9a70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 12864));
label_1a9a74:
    // 0x1a9a74: 0x2608000d  addiu       $t0, $s0, 0xD
    ctx->pc = 0x1a9a74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
label_1a9a78:
    // 0x1a9a78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a9a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9a7c:
    // 0x1a9a7c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a9a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a9a80:
    // 0x1a9a80: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1a9a80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a9a84:
    // 0x1a9a84: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1a9a84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a9a88:
    // 0x1a9a88: 0xc069e2a  jal         func_1A78A8
label_1a9a8c:
    if (ctx->pc == 0x1A9A8Cu) {
        ctx->pc = 0x1A9A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A88u;
        // 0x1a9a8c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9A90u;
        goto label_1a9a90;
    }
    ctx->pc = 0x1A9A88u;
    SET_GPR_U32(ctx, 31, 0x1A9A90u);
    ctx->pc = 0x1A9A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9A88u;
    // 0x1a9a8c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1A9A90u;
label_1a9a90:
    // 0x1a9a90: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_1a9a94:
    if (ctx->pc == 0x1A9A94u) {
        ctx->pc = 0x1A9A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A90u;
        // 0x1a9a94: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9A98u;
        goto label_1a9a98;
    }
    ctx->pc = 0x1A9A90u;
    {
        const bool branch_taken_0x1a9a90 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A9A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A90u;
        // 0x1a9a94: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a90) {
            ctx->pc = 0x1A9AB0u;
            goto label_1a9ab0;
        }
    }
    ctx->pc = 0x1A9A98u;
label_1a9a98:
    // 0x1a9a98: 0xc06920c  jal         func_1A4830
label_1a9a9c:
    if (ctx->pc == 0x1A9A9Cu) {
        ctx->pc = 0x1A9A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A98u;
        // 0x1a9a9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9AA0u;
        goto label_1a9aa0;
    }
    ctx->pc = 0x1A9A98u;
    SET_GPR_U32(ctx, 31, 0x1A9AA0u);
    ctx->pc = 0x1A9A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9A98u;
    // 0x1a9a9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A9AA0u;
label_1a9aa0:
    // 0x1a9aa0: 0xc06a158  jal         func_1A8560
label_1a9aa4:
    if (ctx->pc == 0x1A9AA4u) {
        ctx->pc = 0x1A9AA8u;
        goto label_1a9aa8;
    }
    ctx->pc = 0x1A9AA0u;
    SET_GPR_U32(ctx, 31, 0x1A9AA8u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1A9AA8u;
label_1a9aa8:
    // 0x1a9aa8: 0x1000000f  b           . + 4 + (0xF << 2)
label_1a9aac:
    if (ctx->pc == 0x1A9AACu) {
        ctx->pc = 0x1A9AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9AA8u;
        // 0x1a9aac: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9AB0u;
        goto label_1a9ab0;
    }
    ctx->pc = 0x1A9AA8u;
    {
        const bool branch_taken_0x1a9aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9AA8u;
        // 0x1a9aac: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9aa8) {
            ctx->pc = 0x1A9AE8u;
            goto label_1a9ae8;
        }
    }
    ctx->pc = 0x1A9AB0u;
label_1a9ab0:
    // 0x1a9ab0: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1a9ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_1a9ab4:
    // 0x1a9ab4: 0xc06a158  jal         func_1A8560
label_1a9ab8:
    if (ctx->pc == 0x1A9AB8u) {
        ctx->pc = 0x1A9AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9AB4u;
        // 0x1a9ab8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9ABCu;
        goto label_1a9abc;
    }
    ctx->pc = 0x1A9AB4u;
    SET_GPR_U32(ctx, 31, 0x1A9ABCu);
    ctx->pc = 0x1A9AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9AB4u;
    // 0x1a9ab8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1A9ABCu;
label_1a9abc:
    // 0x1a9abc: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1a9ac0:
    if (ctx->pc == 0x1A9AC0u) {
        ctx->pc = 0x1A9AC4u;
        goto label_1a9ac4;
    }
    ctx->pc = 0x1A9ABCu;
    {
        const bool branch_taken_0x1a9abc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9abc) {
            ctx->pc = 0x1A9AD4u;
            goto label_1a9ad4;
        }
    }
    ctx->pc = 0x1A9AC4u;
label_1a9ac4:
    // 0x1a9ac4: 0xc06920c  jal         func_1A4830
label_1a9ac8:
    if (ctx->pc == 0x1A9AC8u) {
        ctx->pc = 0x1A9AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9AC4u;
        // 0x1a9ac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9ACCu;
        goto label_1a9acc;
    }
    ctx->pc = 0x1A9AC4u;
    SET_GPR_U32(ctx, 31, 0x1A9ACCu);
    ctx->pc = 0x1A9AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9AC4u;
    // 0x1a9ac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A9ACCu;
label_1a9acc:
    // 0x1a9acc: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a9ad0:
    if (ctx->pc == 0x1A9AD0u) {
        ctx->pc = 0x1A9AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9ACCu;
        // 0x1a9ad0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9AD4u;
        goto label_1a9ad4;
    }
    ctx->pc = 0x1A9ACCu;
    {
        const bool branch_taken_0x1a9acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9ACCu;
        // 0x1a9ad0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9acc) {
            ctx->pc = 0x1A9AE8u;
            goto label_1a9ae8;
        }
    }
    ctx->pc = 0x1A9AD4u;
label_1a9ad4:
    // 0x1a9ad4: 0xc069218  jal         func_1A4860
label_1a9ad8:
    if (ctx->pc == 0x1A9AD8u) {
        ctx->pc = 0x1A9AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9AD4u;
        // 0x1a9ad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9ADCu;
        goto label_1a9adc;
    }
    ctx->pc = 0x1A9AD4u;
    SET_GPR_U32(ctx, 31, 0x1A9ADCu);
    ctx->pc = 0x1A9AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9AD4u;
    // 0x1a9ad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1A9ADCu;
label_1a9adc:
    // 0x1a9adc: 0xc06920c  jal         func_1A4830
label_1a9ae0:
    if (ctx->pc == 0x1A9AE0u) {
        ctx->pc = 0x1A9AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9ADCu;
        // 0x1a9ae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9AE4u;
        goto label_1a9ae4;
    }
    ctx->pc = 0x1A9ADCu;
    SET_GPR_U32(ctx, 31, 0x1A9AE4u);
    ctx->pc = 0x1A9AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9ADCu;
    // 0x1a9ae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A9AE4u;
label_1a9ae4:
    // 0x1a9ae4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1a9ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1a9ae8:
    // 0x1a9ae8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1a9ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1a9aec:
    // 0x1a9aec: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1a9aecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1a9af0:
    // 0x1a9af0: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1a9af0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1a9af4:
    // 0x1a9af4: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1a9af4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1a9af8:
    // 0x1a9af8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1a9af8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1a9afc:
    // 0x1a9afc: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1a9afcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a9b00:
    // 0x1a9b00: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1a9b00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a9b04:
    // 0x1a9b04: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1a9b04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a9b08:
    // 0x1a9b08: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1a9b08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a9b0c:
    // 0x1a9b0c: 0x3e00008  jr          $ra
label_1a9b10:
    if (ctx->pc == 0x1A9B10u) {
        ctx->pc = 0x1A9B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B0Cu;
        // 0x1a9b10: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9B14u;
        goto label_1a9b14;
    }
    ctx->pc = 0x1A9B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B0Cu;
        // 0x1a9b10: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9B14u;
label_1a9b14:
    // 0x1a9b14: 0x0  nop
    ctx->pc = 0x1a9b14u;
    // NOP
label_1a9b18:
    // 0x1a9b18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a9b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a9b1c:
    // 0x1a9b1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a9b20:
    // 0x1a9b20: 0xc06a65c  jal         func_1A9970
label_1a9b24:
    if (ctx->pc == 0x1A9B24u) {
        ctx->pc = 0x1A9B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B20u;
        // 0x1a9b24: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9B28u;
        goto label_1a9b28;
    }
    ctx->pc = 0x1A9B20u;
    SET_GPR_U32(ctx, 31, 0x1A9B28u);
    ctx->pc = 0x1A9B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9B20u;
    // 0x1a9b24: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9970u;
    goto label_1a9970;
    ctx->pc = 0x1A9B28u;
label_1a9b28:
    // 0x1a9b28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a9b2c:
    // 0x1a9b2c: 0x3e00008  jr          $ra
label_1a9b30:
    if (ctx->pc == 0x1A9B30u) {
        ctx->pc = 0x1A9B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B2Cu;
        // 0x1a9b30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9B34u;
        goto label_1a9b34;
    }
    ctx->pc = 0x1A9B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B2Cu;
        // 0x1a9b30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9B34u;
label_1a9b34:
    // 0x1a9b34: 0x0  nop
    ctx->pc = 0x1a9b34u;
    // NOP
label_1a9b38:
    // 0x1a9b38: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1a9b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1a9b3c:
    // 0x1a9b3c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1a9b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_1a9b40:
    // 0x1a9b40: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1a9b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_1a9b44:
    // 0x1a9b44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a9b44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a9b48:
    // 0x1a9b48: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1a9b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
label_1a9b4c:
    // 0x1a9b4c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1a9b4cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a9b50:
    // 0x1a9b50: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1a9b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_1a9b54:
    // 0x1a9b54: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1a9b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1a9b58:
    // 0x1a9b58: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1a9b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_1a9b5c:
    // 0x1a9b5c: 0x3c170037  lui         $s7, 0x37
    ctx->pc = 0x1a9b5cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)55 << 16));
label_1a9b60:
    // 0x1a9b60: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1a9b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_1a9b64:
    // 0x1a9b64: 0x26f23240  addiu       $s2, $s7, 0x3240
    ctx->pc = 0x1a9b64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 12864));
label_1a9b68:
    // 0x1a9b68: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1a9b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_1a9b6c:
    // 0x1a9b6c: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1a9b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_1a9b70:
    // 0x1a9b70: 0xc06a14c  jal         func_1A8530
label_1a9b74:
    if (ctx->pc == 0x1A9B74u) {
        ctx->pc = 0x1A9B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B70u;
        // 0x1a9b74: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9B78u;
        goto label_1a9b78;
    }
    ctx->pc = 0x1A9B70u;
    SET_GPR_U32(ctx, 31, 0x1A9B78u);
    ctx->pc = 0x1A9B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9B70u;
    // 0x1a9b74: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    { ctx->pc = 0x1a8530; return; }
    ctx->pc = 0x1A9B78u;
label_1a9b78:
    // 0x1a9b78: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1a9b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1a9b7c:
    // 0x1a9b7c: 0x8c435bf8  lw          $v1, 0x5BF8($v0)
    ctx->pc = 0x1a9b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23544)));
label_1a9b80:
    // 0x1a9b80: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_1a9b84:
    if (ctx->pc == 0x1A9B84u) {
        ctx->pc = 0x1A9B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B80u;
        // 0x1a9b84: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9B88u;
        goto label_1a9b88;
    }
    ctx->pc = 0x1A9B80u;
    {
        const bool branch_taken_0x1a9b80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9b80) {
            ctx->pc = 0x1A9B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9B80u;
            // 0x1a9b84: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9B94u;
            goto label_1a9b94;
        }
    }
    ctx->pc = 0x1A9B88u;
label_1a9b88:
    // 0x1a9b88: 0xc06a18e  jal         func_1A8638
label_1a9b8c:
    if (ctx->pc == 0x1A9B8Cu) {
        ctx->pc = 0x1A9B90u;
        goto label_1a9b90;
    }
    ctx->pc = 0x1A9B88u;
    SET_GPR_U32(ctx, 31, 0x1A9B90u);
    ctx->pc = 0x1A8638u;
    { ctx->pc = 0x1a8638; return; }
    ctx->pc = 0x1A9B90u;
label_1a9b90:
    // 0x1a9b90: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1a9b90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1a9b94:
    // 0x1a9b94: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a9b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9b98:
    // 0x1a9b98: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1a9b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1a9b9c:
    // 0x1a9b9c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_1a9ba0:
    if (ctx->pc == 0x1A9BA0u) {
        ctx->pc = 0x1A9BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B9Cu;
        // 0x1a9ba0: 0xa2420010  sb          $v0, 0x10($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9BA4u;
        goto label_1a9ba4;
    }
    ctx->pc = 0x1A9B9Cu;
    {
        const bool branch_taken_0x1a9b9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B9Cu;
        // 0x1a9ba0: 0xa2420010  sb          $v0, 0x10($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9b9c) {
            ctx->pc = 0x1A9BE4u;
            goto label_1a9be4;
        }
    }
    ctx->pc = 0x1A9BA4u;
label_1a9ba4:
    // 0x1a9ba4: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1a9ba4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a9ba8:
    // 0x1a9ba8: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1a9ba8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1a9bac:
    // 0x1a9bac: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1a9bacu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_1a9bb0:
    // 0x1a9bb0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a9bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a9bb4:
    // 0x1a9bb4: 0x0  nop
    ctx->pc = 0x1a9bb4u;
    // NOP
label_1a9bb8:
    // 0x1a9bb8: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x1a9bb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
label_1a9bbc:
    // 0x1a9bbc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1a9bc0:
    if (ctx->pc == 0x1A9BC0u) {
        ctx->pc = 0x1A9BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9BBCu;
        // 0x1a9bc0: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9BC4u;
        goto label_1a9bc4;
    }
    ctx->pc = 0x1A9BBCu;
    {
        const bool branch_taken_0x1a9bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9BBCu;
        // 0x1a9bc0: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9bbc) {
            ctx->pc = 0x1A9BF0u;
            goto label_1a9bf0;
        }
    }
    ctx->pc = 0x1A9BC4u;
label_1a9bc4:
    // 0x1a9bc4: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x1a9bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1a9bc8:
    // 0x1a9bc8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1a9bc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1a9bcc:
    // 0x1a9bcc: 0xa0830010  sb          $v1, 0x10($a0)
    ctx->pc = 0x1a9bccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
label_1a9bd0:
    // 0x1a9bd0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1a9bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1a9bd4:
    // 0x1a9bd4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_1a9bd8:
    if (ctx->pc == 0x1A9BD8u) {
        ctx->pc = 0x1A9BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9BD4u;
        // 0x1a9bd8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9BDCu;
        goto label_1a9bdc;
    }
    ctx->pc = 0x1A9BD4u;
    {
        const bool branch_taken_0x1a9bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9bd4) {
            ctx->pc = 0x1A9BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9BD4u;
            // 0x1a9bd8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9bb8;
        }
    }
    ctx->pc = 0x1A9BDCu;
label_1a9bdc:
    // 0x1a9bdc: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a9be0:
    if (ctx->pc == 0x1A9BE0u) {
        ctx->pc = 0x1A9BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9BDCu;
        // 0x1a9be0: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9BE4u;
        goto label_1a9be4;
    }
    ctx->pc = 0x1A9BDCu;
    {
        const bool branch_taken_0x1a9bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9BDCu;
        // 0x1a9be0: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9bdc) {
            ctx->pc = 0x1A9BF4u;
            goto label_1a9bf4;
        }
    }
    ctx->pc = 0x1A9BE4u;
label_1a9be4:
    // 0x1a9be4: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1a9be4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a9be8:
    // 0x1a9be8: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1a9be8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1a9bec:
    // 0x1a9bec: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1a9becu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_1a9bf0:
    // 0x1a9bf0: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1a9bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1a9bf4:
    // 0x1a9bf4: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
label_1a9bf8:
    if (ctx->pc == 0x1A9BF8u) {
        ctx->pc = 0x1A9BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9BF4u;
        // 0x1a9bf8: 0xae56000c  sw          $s6, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9BFCu;
        goto label_1a9bfc;
    }
    ctx->pc = 0x1A9BF4u;
    {
        const bool branch_taken_0x1a9bf4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9bf4) {
            ctx->pc = 0x1A9BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9BF4u;
            // 0x1a9bf8: 0xae56000c  sw          $s6, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9C08u;
            goto label_1a9c08;
        }
    }
    ctx->pc = 0x1A9BFCu;
label_1a9bfc:
    // 0x1a9bfc: 0xa240040f  sb          $zero, 0x40F($s2)
    ctx->pc = 0x1a9bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1039), (uint8_t)GPR_U32(ctx, 0));
label_1a9c00:
    // 0x1a9c00: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x1a9c00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_1a9c04:
    // 0x1a9c04: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x1a9c04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
label_1a9c08:
    // 0x1a9c08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a9c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9c0c:
    // 0x1a9c0c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1a9c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1a9c10:
    // 0x1a9c10: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1a9c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a9c14:
    // 0x1a9c14: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1a9c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1a9c18:
    // 0x1a9c18: 0x26943e80  addiu       $s4, $s4, 0x3E80
    ctx->pc = 0x1a9c18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16000));
label_1a9c1c:
    // 0x1a9c1c: 0xc069208  jal         func_1A4820
label_1a9c20:
    if (ctx->pc == 0x1A9C20u) {
        ctx->pc = 0x1A9C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C1Cu;
        // 0x1a9c20: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9C24u;
        goto label_1a9c24;
    }
    ctx->pc = 0x1A9C1Cu;
    SET_GPR_U32(ctx, 31, 0x1A9C24u);
    ctx->pc = 0x1A9C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9C1Cu;
    // 0x1a9c20: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1A9C24u;
label_1a9c24:
    // 0x1a9c24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a9c24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a9c28:
    // 0x1a9c28: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1a9c28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
label_1a9c2c:
    // 0x1a9c2c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a9c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a9c30:
    // 0x1a9c30: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1a9c30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_1a9c34:
    // 0x1a9c34: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1a9c34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_1a9c38:
    // 0x1a9c38: 0x26a44500  addiu       $a0, $s5, 0x4500
    ctx->pc = 0x1a9c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 17664));
label_1a9c3c:
    // 0x1a9c3c: 0x26e73240  addiu       $a3, $s7, 0x3240
    ctx->pc = 0x1a9c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 12864));
label_1a9c40:
    // 0x1a9c40: 0x26080011  addiu       $t0, $s0, 0x11
    ctx->pc = 0x1a9c40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
label_1a9c44:
    // 0x1a9c44: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a9c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a9c48:
    // 0x1a9c48: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1a9c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1a9c4c:
    // 0x1a9c4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a9c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9c50:
    // 0x1a9c50: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1a9c50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a9c54:
    // 0x1a9c54: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1a9c54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a9c58:
    // 0x1a9c58: 0xc069e2a  jal         func_1A78A8
label_1a9c5c:
    if (ctx->pc == 0x1A9C5Cu) {
        ctx->pc = 0x1A9C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C58u;
        // 0x1a9c5c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9C60u;
        goto label_1a9c60;
    }
    ctx->pc = 0x1A9C58u;
    SET_GPR_U32(ctx, 31, 0x1A9C60u);
    ctx->pc = 0x1A9C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9C58u;
    // 0x1a9c5c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1A9C60u;
label_1a9c60:
    // 0x1a9c60: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_1a9c64:
    if (ctx->pc == 0x1A9C64u) {
        ctx->pc = 0x1A9C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C60u;
        // 0x1a9c64: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9C68u;
        goto label_1a9c68;
    }
    ctx->pc = 0x1A9C60u;
    {
        const bool branch_taken_0x1a9c60 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A9C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C60u;
        // 0x1a9c64: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9c60) {
            ctx->pc = 0x1A9C80u;
            goto label_1a9c80;
        }
    }
    ctx->pc = 0x1A9C68u;
label_1a9c68:
    // 0x1a9c68: 0xc06920c  jal         func_1A4830
label_1a9c6c:
    if (ctx->pc == 0x1A9C6Cu) {
        ctx->pc = 0x1A9C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C68u;
        // 0x1a9c6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9C70u;
        goto label_1a9c70;
    }
    ctx->pc = 0x1A9C68u;
    SET_GPR_U32(ctx, 31, 0x1A9C70u);
    ctx->pc = 0x1A9C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9C68u;
    // 0x1a9c6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A9C70u;
label_1a9c70:
    // 0x1a9c70: 0xc06a158  jal         func_1A8560
label_1a9c74:
    if (ctx->pc == 0x1A9C74u) {
        ctx->pc = 0x1A9C78u;
        goto label_1a9c78;
    }
    ctx->pc = 0x1A9C70u;
    SET_GPR_U32(ctx, 31, 0x1A9C78u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1A9C78u;
label_1a9c78:
    // 0x1a9c78: 0x1000000f  b           . + 4 + (0xF << 2)
label_1a9c7c:
    if (ctx->pc == 0x1A9C7Cu) {
        ctx->pc = 0x1A9C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C78u;
        // 0x1a9c7c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9C80u;
        goto label_1a9c80;
    }
    ctx->pc = 0x1A9C78u;
    {
        const bool branch_taken_0x1a9c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C78u;
        // 0x1a9c7c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9c78) {
            ctx->pc = 0x1A9CB8u;
            goto label_1a9cb8;
        }
    }
    ctx->pc = 0x1A9C80u;
label_1a9c80:
    // 0x1a9c80: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1a9c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_1a9c84:
    // 0x1a9c84: 0xc06a158  jal         func_1A8560
label_1a9c88:
    if (ctx->pc == 0x1A9C88u) {
        ctx->pc = 0x1A9C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C84u;
        // 0x1a9c88: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9C8Cu;
        goto label_1a9c8c;
    }
    ctx->pc = 0x1A9C84u;
    SET_GPR_U32(ctx, 31, 0x1A9C8Cu);
    ctx->pc = 0x1A9C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9C84u;
    // 0x1a9c88: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1A9C8Cu;
label_1a9c8c:
    // 0x1a9c8c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1a9c90:
    if (ctx->pc == 0x1A9C90u) {
        ctx->pc = 0x1A9C94u;
        goto label_1a9c94;
    }
    ctx->pc = 0x1A9C8Cu;
    {
        const bool branch_taken_0x1a9c8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9c8c) {
            ctx->pc = 0x1A9CA4u;
            goto label_1a9ca4;
        }
    }
    ctx->pc = 0x1A9C94u;
label_1a9c94:
    // 0x1a9c94: 0xc06920c  jal         func_1A4830
label_1a9c98:
    if (ctx->pc == 0x1A9C98u) {
        ctx->pc = 0x1A9C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C94u;
        // 0x1a9c98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9C9Cu;
        goto label_1a9c9c;
    }
    ctx->pc = 0x1A9C94u;
    SET_GPR_U32(ctx, 31, 0x1A9C9Cu);
    ctx->pc = 0x1A9C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9C94u;
    // 0x1a9c98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A9C9Cu;
label_1a9c9c:
    // 0x1a9c9c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a9ca0:
    if (ctx->pc == 0x1A9CA0u) {
        ctx->pc = 0x1A9CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C9Cu;
        // 0x1a9ca0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9CA4u;
        goto label_1a9ca4;
    }
    ctx->pc = 0x1A9C9Cu;
    {
        const bool branch_taken_0x1a9c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C9Cu;
        // 0x1a9ca0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9c9c) {
            ctx->pc = 0x1A9CB8u;
            goto label_1a9cb8;
        }
    }
    ctx->pc = 0x1A9CA4u;
label_1a9ca4:
    // 0x1a9ca4: 0xc069218  jal         func_1A4860
label_1a9ca8:
    if (ctx->pc == 0x1A9CA8u) {
        ctx->pc = 0x1A9CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9CA4u;
        // 0x1a9ca8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9CACu;
        goto label_1a9cac;
    }
    ctx->pc = 0x1A9CA4u;
    SET_GPR_U32(ctx, 31, 0x1A9CACu);
    ctx->pc = 0x1A9CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9CA4u;
    // 0x1a9ca8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1A9CACu;
label_1a9cac:
    // 0x1a9cac: 0xc06920c  jal         func_1A4830
label_1a9cb0:
    if (ctx->pc == 0x1A9CB0u) {
        ctx->pc = 0x1A9CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9CACu;
        // 0x1a9cb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9CB4u;
        goto label_1a9cb4;
    }
    ctx->pc = 0x1A9CACu;
    SET_GPR_U32(ctx, 31, 0x1A9CB4u);
    ctx->pc = 0x1A9CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9CACu;
    // 0x1a9cb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A9CB4u;
label_1a9cb4:
    // 0x1a9cb4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1a9cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1a9cb8:
    // 0x1a9cb8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1a9cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1a9cbc:
    // 0x1a9cbc: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1a9cbcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1a9cc0:
    // 0x1a9cc0: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1a9cc0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1a9cc4:
    // 0x1a9cc4: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1a9cc4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1a9cc8:
    // 0x1a9cc8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1a9cc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1a9ccc:
    // 0x1a9ccc: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1a9cccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a9cd0:
    // 0x1a9cd0: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1a9cd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a9cd4:
    // 0x1a9cd4: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1a9cd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a9cd8:
    // 0x1a9cd8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1a9cd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a9cdc:
    // 0x1a9cdc: 0x3e00008  jr          $ra
label_1a9ce0:
    if (ctx->pc == 0x1A9CE0u) {
        ctx->pc = 0x1A9CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9CDCu;
        // 0x1a9ce0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9CE4u;
        goto label_1a9ce4;
    }
    ctx->pc = 0x1A9CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9CDCu;
        // 0x1a9ce0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9CE4u;
label_1a9ce4:
    // 0x1a9ce4: 0x0  nop
    ctx->pc = 0x1a9ce4u;
    // NOP
label_1a9ce8:
    // 0x1a9ce8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a9ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a9cec:
    // 0x1a9cec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a9cf0:
    // 0x1a9cf0: 0xc06a65c  jal         func_1A9970
label_1a9cf4:
    if (ctx->pc == 0x1A9CF4u) {
        ctx->pc = 0x1A9CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9CF0u;
        // 0x1a9cf4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9CF8u;
        goto label_1a9cf8;
    }
    ctx->pc = 0x1A9CF0u;
    SET_GPR_U32(ctx, 31, 0x1A9CF8u);
    ctx->pc = 0x1A9CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9CF0u;
    // 0x1a9cf4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9970u;
    goto label_1a9970;
    ctx->pc = 0x1A9CF8u;
label_1a9cf8:
    // 0x1a9cf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a9cfc:
    // 0x1a9cfc: 0x3e00008  jr          $ra
label_1a9d00:
    if (ctx->pc == 0x1A9D00u) {
        ctx->pc = 0x1A9D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9CFCu;
        // 0x1a9d00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9D04u;
        goto label_1a9d04;
    }
    ctx->pc = 0x1A9CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9CFCu;
        // 0x1a9d00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9D04u;
label_1a9d04:
    // 0x1a9d04: 0x0  nop
    ctx->pc = 0x1a9d04u;
    // NOP
label_1a9d08:
    // 0x1a9d08: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1a9d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1a9d0c:
    // 0x1a9d0c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1a9d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_1a9d10:
    // 0x1a9d10: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1a9d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_1a9d14:
    // 0x1a9d14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a9d14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a9d18:
    // 0x1a9d18: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1a9d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_1a9d1c:
    // 0x1a9d1c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1a9d1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a9d20:
    // 0x1a9d20: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1a9d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_1a9d24:
    // 0x1a9d24: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a9d24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a9d28:
    // 0x1a9d28: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1a9d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
label_1a9d2c:
    // 0x1a9d2c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1a9d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a9d30:
    // 0x1a9d30: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1a9d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_1a9d34:
    // 0x1a9d34: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1a9d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1a9d38:
    // 0x1a9d38: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1a9d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_1a9d3c:
    // 0x1a9d3c: 0x3c170037  lui         $s7, 0x37
    ctx->pc = 0x1a9d3cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)55 << 16));
label_1a9d40:
    // 0x1a9d40: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1a9d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_1a9d44:
    // 0x1a9d44: 0x26f33240  addiu       $s3, $s7, 0x3240
    ctx->pc = 0x1a9d44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 12864));
label_1a9d48:
    // 0x1a9d48: 0xc06a14c  jal         func_1A8530
label_1a9d4c:
    if (ctx->pc == 0x1A9D4Cu) {
        ctx->pc = 0x1A9D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D48u;
        // 0x1a9d4c: 0xffb40080  sd          $s4, 0x80($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9D50u;
        goto label_1a9d50;
    }
    ctx->pc = 0x1A9D48u;
    SET_GPR_U32(ctx, 31, 0x1A9D50u);
    ctx->pc = 0x1A9D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9D48u;
    // 0x1a9d4c: 0xffb40080  sd          $s4, 0x80($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    { ctx->pc = 0x1a8530; return; }
    ctx->pc = 0x1A9D50u;
label_1a9d50:
    // 0x1a9d50: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1a9d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1a9d54:
    // 0x1a9d54: 0x8c435bf8  lw          $v1, 0x5BF8($v0)
    ctx->pc = 0x1a9d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23544)));
label_1a9d58:
    // 0x1a9d58: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_1a9d5c:
    if (ctx->pc == 0x1A9D5Cu) {
        ctx->pc = 0x1A9D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D58u;
        // 0x1a9d5c: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9D60u;
        goto label_1a9d60;
    }
    ctx->pc = 0x1A9D58u;
    {
        const bool branch_taken_0x1a9d58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9d58) {
            ctx->pc = 0x1A9D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9D58u;
            // 0x1a9d5c: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9D6Cu;
            goto label_1a9d6c;
        }
    }
    ctx->pc = 0x1A9D60u;
label_1a9d60:
    // 0x1a9d60: 0xc06a18e  jal         func_1A8638
label_1a9d64:
    if (ctx->pc == 0x1A9D64u) {
        ctx->pc = 0x1A9D68u;
        goto label_1a9d68;
    }
    ctx->pc = 0x1A9D60u;
    SET_GPR_U32(ctx, 31, 0x1A9D68u);
    ctx->pc = 0x1A8638u;
    { ctx->pc = 0x1a8638; return; }
    ctx->pc = 0x1A9D68u;
label_1a9d68:
    // 0x1a9d68: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1a9d68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1a9d6c:
    // 0x1a9d6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a9d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9d70:
    // 0x1a9d70: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1a9d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1a9d74:
    // 0x1a9d74: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_1a9d78:
    if (ctx->pc == 0x1A9D78u) {
        ctx->pc = 0x1A9D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D74u;
        // 0x1a9d78: 0xa262000c  sb          $v0, 0xC($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9D7Cu;
        goto label_1a9d7c;
    }
    ctx->pc = 0x1A9D74u;
    {
        const bool branch_taken_0x1a9d74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D74u;
        // 0x1a9d78: 0xa262000c  sb          $v0, 0xC($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9d74) {
            ctx->pc = 0x1A9DB4u;
            goto label_1a9db4;
        }
    }
    ctx->pc = 0x1A9D7Cu;
label_1a9d7c:
    // 0x1a9d7c: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x1a9d7cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
label_1a9d80:
    // 0x1a9d80: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a9d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1a9d84:
    // 0x1a9d84: 0x0  nop
    ctx->pc = 0x1a9d84u;
    // NOP
label_1a9d88:
    // 0x1a9d88: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1a9d88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
label_1a9d8c:
    // 0x1a9d8c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1a9d90:
    if (ctx->pc == 0x1A9D90u) {
        ctx->pc = 0x1A9D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D8Cu;
        // 0x1a9d90: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9D94u;
        goto label_1a9d94;
    }
    ctx->pc = 0x1A9D8Cu;
    {
        const bool branch_taken_0x1a9d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D8Cu;
        // 0x1a9d90: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9d8c) {
            ctx->pc = 0x1A9DB8u;
            goto label_1a9db8;
        }
    }
    ctx->pc = 0x1A9D94u;
label_1a9d94:
    // 0x1a9d94: 0x2652021  addu        $a0, $s3, $a1
    ctx->pc = 0x1a9d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_1a9d98:
    // 0x1a9d98: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1a9d98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1a9d9c:
    // 0x1a9d9c: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1a9d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
label_1a9da0:
    // 0x1a9da0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1a9da0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1a9da4:
    // 0x1a9da4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_1a9da8:
    if (ctx->pc == 0x1A9DA8u) {
        ctx->pc = 0x1A9DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9DA4u;
        // 0x1a9da8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9DACu;
        goto label_1a9dac;
    }
    ctx->pc = 0x1A9DA4u;
    {
        const bool branch_taken_0x1a9da4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9da4) {
            ctx->pc = 0x1A9DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9DA4u;
            // 0x1a9da8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9d88;
        }
    }
    ctx->pc = 0x1A9DACu;
label_1a9dac:
    // 0x1a9dac: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a9db0:
    if (ctx->pc == 0x1A9DB0u) {
        ctx->pc = 0x1A9DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9DACu;
        // 0x1a9db0: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9DB4u;
        goto label_1a9db4;
    }
    ctx->pc = 0x1A9DACu;
    {
        const bool branch_taken_0x1a9dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9DACu;
        // 0x1a9db0: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9dac) {
            ctx->pc = 0x1A9DBCu;
            goto label_1a9dbc;
        }
    }
    ctx->pc = 0x1A9DB4u;
label_1a9db4:
    // 0x1a9db4: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x1a9db4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
label_1a9db8:
    // 0x1a9db8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1a9db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1a9dbc:
    // 0x1a9dbc: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
label_1a9dc0:
    if (ctx->pc == 0x1A9DC0u) {
        ctx->pc = 0x1A9DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9DBCu;
        // 0x1a9dc0: 0xa260040b  sb          $zero, 0x40B($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1035), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9DC4u;
        goto label_1a9dc4;
    }
    ctx->pc = 0x1A9DBCu;
    {
        const bool branch_taken_0x1a9dbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a9dbc) {
            ctx->pc = 0x1A9DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9DBCu;
            // 0x1a9dc0: 0xa260040b  sb          $zero, 0x40B($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9DC4u;
            goto label_1a9dc4;
        }
    }
    ctx->pc = 0x1A9DC4u;
label_1a9dc4:
    // 0x1a9dc4: 0x56400003  bnel        $s2, $zero, . + 4 + (0x3 << 2)
label_1a9dc8:
    if (ctx->pc == 0x1A9DC8u) {
        ctx->pc = 0x1A9DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9DC4u;
        // 0x1a9dc8: 0x92420000  lbu         $v0, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9DCCu;
        goto label_1a9dcc;
    }
    ctx->pc = 0x1A9DC4u;
    {
        const bool branch_taken_0x1a9dc4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9dc4) {
            ctx->pc = 0x1A9DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9DC4u;
            // 0x1a9dc8: 0x92420000  lbu         $v0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9DD4u;
            goto label_1a9dd4;
        }
    }
    ctx->pc = 0x1A9DCCu;
label_1a9dcc:
    // 0x1a9dcc: 0x10000014  b           . + 4 + (0x14 << 2)
label_1a9dd0:
    if (ctx->pc == 0x1A9DD0u) {
        ctx->pc = 0x1A9DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9DCCu;
        // 0x1a9dd0: 0xa260040c  sb          $zero, 0x40C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1036), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9DD4u;
        goto label_1a9dd4;
    }
    ctx->pc = 0x1A9DCCu;
    {
        const bool branch_taken_0x1a9dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9DCCu;
        // 0x1a9dd0: 0xa260040c  sb          $zero, 0x40C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1036), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9dcc) {
            ctx->pc = 0x1A9E20u;
            goto label_1a9e20;
        }
    }
    ctx->pc = 0x1A9DD4u;
label_1a9dd4:
    // 0x1a9dd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a9dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9dd8:
    // 0x1a9dd8: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1a9dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1a9ddc:
    // 0x1a9ddc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1a9de0:
    if (ctx->pc == 0x1A9DE0u) {
        ctx->pc = 0x1A9DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9DDCu;
        // 0x1a9de0: 0xa262040c  sb          $v0, 0x40C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9DE4u;
        goto label_1a9de4;
    }
    ctx->pc = 0x1A9DDCu;
    {
        const bool branch_taken_0x1a9ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9DDCu;
        // 0x1a9de0: 0xa262040c  sb          $v0, 0x40C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9ddc) {
            ctx->pc = 0x1A9E14u;
            goto label_1a9e14;
        }
    }
    ctx->pc = 0x1A9DE4u;
label_1a9de4:
    // 0x1a9de4: 0x2666040c  addiu       $a2, $s3, 0x40C
    ctx->pc = 0x1a9de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1036));
label_1a9de8:
    // 0x1a9de8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a9de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1a9dec:
    // 0x1a9dec: 0x0  nop
    ctx->pc = 0x1a9decu;
    // NOP
label_1a9df0:
    // 0x1a9df0: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1a9df0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
label_1a9df4:
    // 0x1a9df4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a9df8:
    if (ctx->pc == 0x1A9DF8u) {
        ctx->pc = 0x1A9DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9DF4u;
        // 0x1a9df8: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9DFCu;
        goto label_1a9dfc;
    }
    ctx->pc = 0x1A9DF4u;
    {
        const bool branch_taken_0x1a9df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9DF4u;
        // 0x1a9df8: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9df4) {
            ctx->pc = 0x1A9E14u;
            goto label_1a9e14;
        }
    }
    ctx->pc = 0x1A9DFCu;
label_1a9dfc:
    // 0x1a9dfc: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1a9dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1a9e00:
    // 0x1a9e00: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1a9e00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1a9e04:
    // 0x1a9e04: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1a9e04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1a9e08:
    // 0x1a9e08: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1a9e08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1a9e0c:
    // 0x1a9e0c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_1a9e10:
    if (ctx->pc == 0x1A9E10u) {
        ctx->pc = 0x1A9E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E0Cu;
        // 0x1a9e10: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9E14u;
        goto label_1a9e14;
    }
    ctx->pc = 0x1A9E0Cu;
    {
        const bool branch_taken_0x1a9e0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9e0c) {
            ctx->pc = 0x1A9E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9E0Cu;
            // 0x1a9e10: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9df0;
        }
    }
    ctx->pc = 0x1A9E14u;
label_1a9e14:
    // 0x1a9e14: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1a9e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1a9e18:
    // 0x1a9e18: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
label_1a9e1c:
    if (ctx->pc == 0x1A9E1Cu) {
        ctx->pc = 0x1A9E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E18u;
        // 0x1a9e1c: 0xa260080b  sb          $zero, 0x80B($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2059), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9E20u;
        goto label_1a9e20;
    }
    ctx->pc = 0x1A9E18u;
    {
        const bool branch_taken_0x1a9e18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a9e18) {
            ctx->pc = 0x1A9E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9E18u;
            // 0x1a9e1c: 0xa260080b  sb          $zero, 0x80B($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 2059), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9E20u;
            goto label_1a9e20;
        }
    }
    ctx->pc = 0x1A9E20u;
label_1a9e20:
    // 0x1a9e20: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
label_1a9e24:
    if (ctx->pc == 0x1A9E24u) {
        ctx->pc = 0x1A9E28u;
        goto label_1a9e28;
    }
    ctx->pc = 0x1A9E20u;
    {
        const bool branch_taken_0x1a9e20 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9e20) {
            ctx->pc = 0x1A9E38u;
            goto label_1a9e38;
        }
    }
    ctx->pc = 0x1A9E28u;
label_1a9e28:
    // 0x1a9e28: 0xc06a158  jal         func_1A8560
label_1a9e2c:
    if (ctx->pc == 0x1A9E2Cu) {
        ctx->pc = 0x1A9E30u;
        goto label_1a9e30;
    }
    ctx->pc = 0x1A9E28u;
    SET_GPR_U32(ctx, 31, 0x1A9E30u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1A9E30u;
label_1a9e30:
    // 0x1a9e30: 0x10000045  b           . + 4 + (0x45 << 2)
label_1a9e34:
    if (ctx->pc == 0x1A9E34u) {
        ctx->pc = 0x1A9E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E30u;
        // 0x1a9e34: 0x2402fff9  addiu       $v0, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9E38u;
        goto label_1a9e38;
    }
    ctx->pc = 0x1A9E30u;
    {
        const bool branch_taken_0x1a9e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E30u;
        // 0x1a9e34: 0x2402fff9  addiu       $v0, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9e30) {
            ctx->pc = 0x1A9F48u;
            goto label_1a9f48;
        }
    }
    ctx->pc = 0x1A9E38u;
label_1a9e38:
    // 0x1a9e38: 0x1a20000f  blez        $s1, . + 4 + (0xF << 2)
label_1a9e3c:
    if (ctx->pc == 0x1A9E3Cu) {
        ctx->pc = 0x1A9E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E38u;
        // 0x1a9e3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9E40u;
        goto label_1a9e40;
    }
    ctx->pc = 0x1A9E38u;
    {
        const bool branch_taken_0x1a9e38 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1A9E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E38u;
        // 0x1a9e3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9e38) {
            ctx->pc = 0x1A9E78u;
            goto label_1a9e78;
        }
    }
    ctx->pc = 0x1A9E40u;
label_1a9e40:
    // 0x1a9e40: 0x2666080c  addiu       $a2, $s3, 0x80C
    ctx->pc = 0x1a9e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2060));
label_1a9e44:
    // 0x1a9e44: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1a9e44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a9e48:
    // 0x1a9e48: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1a9e48u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1a9e4c:
    // 0x1a9e4c: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1a9e4cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_1a9e50:
    // 0x1a9e50: 0x2c51021  addu        $v0, $s6, $a1
    ctx->pc = 0x1a9e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
label_1a9e54:
    // 0x1a9e54: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1a9e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1a9e58:
    // 0x1a9e58: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1a9e58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1a9e5c:
    // 0x1a9e5c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a9e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1a9e60:
    // 0x1a9e60: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x1a9e60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1a9e64:
    // 0x1a9e64: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1a9e64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1a9e68:
    // 0x1a9e68: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1a9e6c:
    if (ctx->pc == 0x1A9E6Cu) {
        ctx->pc = 0x1A9E70u;
        goto label_1a9e70;
    }
    ctx->pc = 0x1A9E68u;
    {
        const bool branch_taken_0x1a9e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9e68) {
            ctx->pc = 0x1A9E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9e50;
        }
    }
    ctx->pc = 0x1A9E70u;
label_1a9e70:
    // 0x1a9e70: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a9e74:
    if (ctx->pc == 0x1A9E74u) {
        ctx->pc = 0x1A9E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E70u;
        // 0x1a9e74: 0xae710c0c  sw          $s1, 0xC0C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3084), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9E78u;
        goto label_1a9e78;
    }
    ctx->pc = 0x1A9E70u;
    {
        const bool branch_taken_0x1a9e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E70u;
        // 0x1a9e74: 0xae710c0c  sw          $s1, 0xC0C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3084), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9e70) {
            ctx->pc = 0x1A9E88u;
            goto label_1a9e88;
        }
    }
    ctx->pc = 0x1A9E78u;
label_1a9e78:
    // 0x1a9e78: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1a9e78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a9e7c:
    // 0x1a9e7c: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1a9e7cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1a9e80:
    // 0x1a9e80: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1a9e80u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_1a9e84:
    // 0x1a9e84: 0xae710c0c  sw          $s1, 0xC0C($s3)
    ctx->pc = 0x1a9e84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3084), GPR_U32(ctx, 17));
label_1a9e88:
    // 0x1a9e88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a9e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9e8c:
    // 0x1a9e8c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1a9e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1a9e90:
    // 0x1a9e90: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1a9e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a9e94:
    // 0x1a9e94: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1a9e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1a9e98:
    // 0x1a9e98: 0x26f03240  addiu       $s0, $s7, 0x3240
    ctx->pc = 0x1a9e98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 12864));
label_1a9e9c:
    // 0x1a9e9c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1a9e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_1a9ea0:
    // 0x1a9ea0: 0xc069208  jal         func_1A4820
label_1a9ea4:
    if (ctx->pc == 0x1A9EA4u) {
        ctx->pc = 0x1A9EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9EA0u;
        // 0x1a9ea4: 0x26943e80  addiu       $s4, $s4, 0x3E80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9EA8u;
        goto label_1a9ea8;
    }
    ctx->pc = 0x1A9EA0u;
    SET_GPR_U32(ctx, 31, 0x1A9EA8u);
    ctx->pc = 0x1A9EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9EA0u;
    // 0x1a9ea4: 0x26943e80  addiu       $s4, $s4, 0x3E80 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1A9EA8u;
label_1a9ea8:
    // 0x1a9ea8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a9ea8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a9eac:
    // 0x1a9eac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a9eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a9eb0:
    // 0x1a9eb0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a9eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a9eb4:
    // 0x1a9eb4: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x1a9eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
label_1a9eb8:
    // 0x1a9eb8: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x1a9eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_1a9ebc:
    // 0x1a9ebc: 0x24050c10  addiu       $a1, $zero, 0xC10
    ctx->pc = 0x1a9ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3088));
label_1a9ec0:
    // 0x1a9ec0: 0xc069bee  jal         func_1A6FB8
label_1a9ec4:
    if (ctx->pc == 0x1A9EC4u) {
        ctx->pc = 0x1A9EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9EC0u;
        // 0x1a9ec4: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9EC8u;
        goto label_1a9ec8;
    }
    ctx->pc = 0x1A9EC0u;
    SET_GPR_U32(ctx, 31, 0x1A9EC8u);
    ctx->pc = 0x1A9EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9EC0u;
    // 0x1a9ec4: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    { ctx->pc = 0x1a6fb8; return; }
    ctx->pc = 0x1A9EC8u;
label_1a9ec8:
    // 0x1a9ec8: 0x26a44500  addiu       $a0, $s5, 0x4500
    ctx->pc = 0x1a9ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 17664));
label_1a9ecc:
    // 0x1a9ecc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1a9eccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a9ed0:
    // 0x1a9ed0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a9ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a9ed4:
    // 0x1a9ed4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1a9ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1a9ed8:
    // 0x1a9ed8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a9ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9edc:
    // 0x1a9edc: 0x24080c10  addiu       $t0, $zero, 0xC10
    ctx->pc = 0x1a9edcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3088));
label_1a9ee0:
    // 0x1a9ee0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1a9ee0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a9ee4:
    // 0x1a9ee4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1a9ee4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a9ee8:
    // 0x1a9ee8: 0xc069e2a  jal         func_1A78A8
label_1a9eec:
    if (ctx->pc == 0x1A9EECu) {
        ctx->pc = 0x1A9EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9EE8u;
        // 0x1a9eec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9EF0u;
        goto label_1a9ef0;
    }
    ctx->pc = 0x1A9EE8u;
    SET_GPR_U32(ctx, 31, 0x1A9EF0u);
    ctx->pc = 0x1A9EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9EE8u;
    // 0x1a9eec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1A9EF0u;
label_1a9ef0:
    // 0x1a9ef0: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_1a9ef4:
    if (ctx->pc == 0x1A9EF4u) {
        ctx->pc = 0x1A9EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9EF0u;
        // 0x1a9ef4: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9EF8u;
        goto label_1a9ef8;
    }
    ctx->pc = 0x1A9EF0u;
    {
        const bool branch_taken_0x1a9ef0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A9EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9EF0u;
        // 0x1a9ef4: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9ef0) {
            ctx->pc = 0x1A9F10u;
            goto label_1a9f10;
        }
    }
    ctx->pc = 0x1A9EF8u;
label_1a9ef8:
    // 0x1a9ef8: 0xc06920c  jal         func_1A4830
label_1a9efc:
    if (ctx->pc == 0x1A9EFCu) {
        ctx->pc = 0x1A9EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9EF8u;
        // 0x1a9efc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9F00u;
        goto label_1a9f00;
    }
    ctx->pc = 0x1A9EF8u;
    SET_GPR_U32(ctx, 31, 0x1A9F00u);
    ctx->pc = 0x1A9EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9EF8u;
    // 0x1a9efc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A9F00u;
label_1a9f00:
    // 0x1a9f00: 0xc06a158  jal         func_1A8560
label_1a9f04:
    if (ctx->pc == 0x1A9F04u) {
        ctx->pc = 0x1A9F08u;
        goto label_1a9f08;
    }
    ctx->pc = 0x1A9F00u;
    SET_GPR_U32(ctx, 31, 0x1A9F08u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1A9F08u;
label_1a9f08:
    // 0x1a9f08: 0x1000000f  b           . + 4 + (0xF << 2)
label_1a9f0c:
    if (ctx->pc == 0x1A9F0Cu) {
        ctx->pc = 0x1A9F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F08u;
        // 0x1a9f0c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9F10u;
        goto label_1a9f10;
    }
    ctx->pc = 0x1A9F08u;
    {
        const bool branch_taken_0x1a9f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F08u;
        // 0x1a9f0c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9f08) {
            ctx->pc = 0x1A9F48u;
            goto label_1a9f48;
        }
    }
    ctx->pc = 0x1A9F10u;
label_1a9f10:
    // 0x1a9f10: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1a9f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_1a9f14:
    // 0x1a9f14: 0xc06a158  jal         func_1A8560
label_1a9f18:
    if (ctx->pc == 0x1A9F18u) {
        ctx->pc = 0x1A9F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F14u;
        // 0x1a9f18: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9F1Cu;
        goto label_1a9f1c;
    }
    ctx->pc = 0x1A9F14u;
    SET_GPR_U32(ctx, 31, 0x1A9F1Cu);
    ctx->pc = 0x1A9F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9F14u;
    // 0x1a9f18: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1A9F1Cu;
label_1a9f1c:
    // 0x1a9f1c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1a9f20:
    if (ctx->pc == 0x1A9F20u) {
        ctx->pc = 0x1A9F24u;
        goto label_1a9f24;
    }
    ctx->pc = 0x1A9F1Cu;
    {
        const bool branch_taken_0x1a9f1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9f1c) {
            ctx->pc = 0x1A9F34u;
            goto label_1a9f34;
        }
    }
    ctx->pc = 0x1A9F24u;
label_1a9f24:
    // 0x1a9f24: 0xc06920c  jal         func_1A4830
label_1a9f28:
    if (ctx->pc == 0x1A9F28u) {
        ctx->pc = 0x1A9F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F24u;
        // 0x1a9f28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9F2Cu;
        goto label_1a9f2c;
    }
    ctx->pc = 0x1A9F24u;
    SET_GPR_U32(ctx, 31, 0x1A9F2Cu);
    ctx->pc = 0x1A9F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9F24u;
    // 0x1a9f28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A9F2Cu;
label_1a9f2c:
    // 0x1a9f2c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a9f30:
    if (ctx->pc == 0x1A9F30u) {
        ctx->pc = 0x1A9F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F2Cu;
        // 0x1a9f30: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9F34u;
        goto label_1a9f34;
    }
    ctx->pc = 0x1A9F2Cu;
    {
        const bool branch_taken_0x1a9f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F2Cu;
        // 0x1a9f30: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9f2c) {
            ctx->pc = 0x1A9F48u;
            goto label_1a9f48;
        }
    }
    ctx->pc = 0x1A9F34u;
label_1a9f34:
    // 0x1a9f34: 0xc069218  jal         func_1A4860
label_1a9f38:
    if (ctx->pc == 0x1A9F38u) {
        ctx->pc = 0x1A9F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F34u;
        // 0x1a9f38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9F3Cu;
        goto label_1a9f3c;
    }
    ctx->pc = 0x1A9F34u;
    SET_GPR_U32(ctx, 31, 0x1A9F3Cu);
    ctx->pc = 0x1A9F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9F34u;
    // 0x1a9f38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1A9F3Cu;
label_1a9f3c:
    // 0x1a9f3c: 0xc06920c  jal         func_1A4830
label_1a9f40:
    if (ctx->pc == 0x1A9F40u) {
        ctx->pc = 0x1A9F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F3Cu;
        // 0x1a9f40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9F44u;
        goto label_1a9f44;
    }
    ctx->pc = 0x1A9F3Cu;
    SET_GPR_U32(ctx, 31, 0x1A9F44u);
    ctx->pc = 0x1A9F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9F3Cu;
    // 0x1a9f40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A9F44u;
label_1a9f44:
    // 0x1a9f44: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1a9f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1a9f48:
    // 0x1a9f48: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1a9f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1a9f4c:
    // 0x1a9f4c: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1a9f4cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1a9f50:
    // 0x1a9f50: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1a9f50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1a9f54:
    // 0x1a9f54: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1a9f54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1a9f58:
    // 0x1a9f58: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1a9f58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1a9f5c:
    // 0x1a9f5c: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1a9f5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a9f60:
    // 0x1a9f60: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1a9f60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a9f64:
    // 0x1a9f64: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1a9f64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a9f68:
    // 0x1a9f68: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1a9f68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a9f6c:
    // 0x1a9f6c: 0x3e00008  jr          $ra
label_1a9f70:
    if (ctx->pc == 0x1A9F70u) {
        ctx->pc = 0x1A9F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F6Cu;
        // 0x1a9f70: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9F74u;
        goto label_1a9f74;
    }
    ctx->pc = 0x1A9F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F6Cu;
        // 0x1a9f70: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9F74u;
label_1a9f74:
    // 0x1a9f74: 0x0  nop
    ctx->pc = 0x1a9f74u;
    // NOP
label_1a9f78:
    // 0x1a9f78: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1a9f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1a9f7c:
    // 0x1a9f7c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1a9f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_1a9f80:
    // 0x1a9f80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a9f80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a9f84:
    // 0x1a9f84: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1a9f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_1a9f88:
    // 0x1a9f88: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1a9f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_1a9f8c:
    // 0x1a9f8c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1a9f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1a9f90:
    // 0x1a9f90: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1a9f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1a9f94:
    // 0x1a9f94: 0x3c130037  lui         $s3, 0x37
    ctx->pc = 0x1a9f94u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
label_1a9f98:
    // 0x1a9f98: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1a9f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_1a9f9c:
    // 0x1a9f9c: 0xc06a14c  jal         func_1A8530
label_1a9fa0:
    if (ctx->pc == 0x1A9FA0u) {
        ctx->pc = 0x1A9FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F9Cu;
        // 0x1a9fa0: 0x26703240  addiu       $s0, $s3, 0x3240 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 12864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9FA4u;
        goto label_1a9fa4;
    }
    ctx->pc = 0x1A9F9Cu;
    SET_GPR_U32(ctx, 31, 0x1A9FA4u);
    ctx->pc = 0x1A9FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9F9Cu;
    // 0x1a9fa0: 0x26703240  addiu       $s0, $s3, 0x3240 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 12864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    { ctx->pc = 0x1a8530; return; }
    ctx->pc = 0x1A9FA4u;
label_1a9fa4:
    // 0x1a9fa4: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1a9fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1a9fa8:
    // 0x1a9fa8: 0x8c625bf8  lw          $v0, 0x5BF8($v1)
    ctx->pc = 0x1a9fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23544)));
label_1a9fac:
    // 0x1a9fac: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1a9fb0:
    if (ctx->pc == 0x1A9FB0u) {
        ctx->pc = 0x1A9FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9FACu;
        // 0x1a9fb0: 0xae11000c  sw          $s1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9FB4u;
        goto label_1a9fb4;
    }
    ctx->pc = 0x1A9FACu;
    {
        const bool branch_taken_0x1a9fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9fac) {
            ctx->pc = 0x1A9FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9FACu;
            // 0x1a9fb0: 0xae11000c  sw          $s1, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9FC0u;
            goto label_1a9fc0;
        }
    }
    ctx->pc = 0x1A9FB4u;
label_1a9fb4:
    // 0x1a9fb4: 0xc06a18e  jal         func_1A8638
label_1a9fb8:
    if (ctx->pc == 0x1A9FB8u) {
        ctx->pc = 0x1A9FBCu;
        goto label_1a9fbc;
    }
    ctx->pc = 0x1A9FB4u;
    SET_GPR_U32(ctx, 31, 0x1A9FBCu);
    ctx->pc = 0x1A8638u;
    { ctx->pc = 0x1a8638; return; }
    ctx->pc = 0x1A9FBCu;
label_1a9fbc:
    // 0x1a9fbc: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x1a9fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_1a9fc0:
    // 0x1a9fc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a9fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9fc4:
    // 0x1a9fc4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1a9fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1a9fc8:
    // 0x1a9fc8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1a9fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a9fcc:
    // 0x1a9fcc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1a9fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1a9fd0:
    // 0x1a9fd0: 0xc069208  jal         func_1A4820
label_1a9fd4:
    if (ctx->pc == 0x1A9FD4u) {
        ctx->pc = 0x1A9FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9FD0u;
        // 0x1a9fd4: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9FD8u;
        goto label_1a9fd8;
    }
    ctx->pc = 0x1A9FD0u;
    SET_GPR_U32(ctx, 31, 0x1A9FD8u);
    ctx->pc = 0x1A9FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9FD0u;
    // 0x1a9fd4: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1A9FD8u;
label_1a9fd8:
    // 0x1a9fd8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a9fd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a9fdc:
    // 0x1a9fdc: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1a9fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a9fe0:
    // 0x1a9fe0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a9fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a9fe4:
    // 0x1a9fe4: 0xae713240  sw          $s1, 0x3240($s3)
    ctx->pc = 0x1a9fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12864), GPR_U32(ctx, 17));
label_1a9fe8:
    // 0x1a9fe8: 0x24523e80  addiu       $s2, $v0, 0x3E80
    ctx->pc = 0x1a9fe8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16000));
label_1a9fec:
    // 0x1a9fec: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1a9fecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1a9ff0:
    // 0x1a9ff0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a9ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a9ff4:
    // 0x1a9ff4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1a9ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1a9ff8:
    // 0x1a9ff8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1a9ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1a9ffc:
    // 0x1a9ffc: 0x24844500  addiu       $a0, $a0, 0x4500
    ctx->pc = 0x1a9ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17664));
label_1aa000:
    // 0x1aa000: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1aa000u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aa004:
    // 0x1aa004: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1aa004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1aa008:
    // 0x1aa008: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1aa008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1aa00c:
    // 0x1aa00c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aa00cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa010:
    // 0x1aa010: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x1aa010u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1aa014:
    // 0x1aa014: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1aa014u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1aa018:
    // 0x1aa018: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1aa018u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1aa01c:
    // 0x1aa01c: 0xc069e2a  jal         func_1A78A8
label_1aa020:
    if (ctx->pc == 0x1AA020u) {
        ctx->pc = 0x1AA020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA01Cu;
        // 0x1aa020: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA024u;
        goto label_1aa024;
    }
    ctx->pc = 0x1AA01Cu;
    SET_GPR_U32(ctx, 31, 0x1AA024u);
    ctx->pc = 0x1AA020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA01Cu;
    // 0x1aa020: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AA024u;
label_1aa024:
    // 0x1aa024: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_1aa028:
    if (ctx->pc == 0x1AA028u) {
        ctx->pc = 0x1AA028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA024u;
        // 0x1aa028: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA02Cu;
        goto label_1aa02c;
    }
    ctx->pc = 0x1AA024u;
    {
        const bool branch_taken_0x1aa024 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AA028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA024u;
        // 0x1aa028: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa024) {
            ctx->pc = 0x1AA044u;
            goto label_1aa044;
        }
    }
    ctx->pc = 0x1AA02Cu;
label_1aa02c:
    // 0x1aa02c: 0xc06920c  jal         func_1A4830
label_1aa030:
    if (ctx->pc == 0x1AA030u) {
        ctx->pc = 0x1AA030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA02Cu;
        // 0x1aa030: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA034u;
        goto label_1aa034;
    }
    ctx->pc = 0x1AA02Cu;
    SET_GPR_U32(ctx, 31, 0x1AA034u);
    ctx->pc = 0x1AA030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA02Cu;
    // 0x1aa030: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AA034u;
label_1aa034:
    // 0x1aa034: 0xc06a158  jal         func_1A8560
label_1aa038:
    if (ctx->pc == 0x1AA038u) {
        ctx->pc = 0x1AA03Cu;
        goto label_1aa03c;
    }
    ctx->pc = 0x1AA034u;
    SET_GPR_U32(ctx, 31, 0x1AA03Cu);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1AA03Cu;
label_1aa03c:
    // 0x1aa03c: 0x1000000f  b           . + 4 + (0xF << 2)
label_1aa040:
    if (ctx->pc == 0x1AA040u) {
        ctx->pc = 0x1AA040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA03Cu;
        // 0x1aa040: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA044u;
        goto label_1aa044;
    }
    ctx->pc = 0x1AA03Cu;
    {
        const bool branch_taken_0x1aa03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA03Cu;
        // 0x1aa040: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa03c) {
            ctx->pc = 0x1AA07Cu;
            { ctx->pc = 0x1aa07c; return; }
        }
    }
    ctx->pc = 0x1AA044u;
label_1aa044:
    // 0x1aa044: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x1aa044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_1aa048:
    // 0x1aa048: 0xc06a158  jal         func_1A8560
label_1aa04c:
    if (ctx->pc == 0x1AA04Cu) {
        ctx->pc = 0x1AA04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA048u;
        // 0x1aa04c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA050u;
        goto label_1aa050;
    }
    ctx->pc = 0x1AA048u;
    SET_GPR_U32(ctx, 31, 0x1AA050u);
    ctx->pc = 0x1AA04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA048u;
    // 0x1aa04c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1AA050u;
label_1aa050:
    // 0x1aa050: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1aa054:
    if (ctx->pc == 0x1AA054u) {
        ctx->pc = 0x1AA058u;
        goto label_1aa058;
    }
    ctx->pc = 0x1AA050u;
    {
        const bool branch_taken_0x1aa050 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa050) {
            ctx->pc = 0x1AA068u;
            goto label_1aa068;
        }
    }
    ctx->pc = 0x1AA058u;
label_1aa058:
    // 0x1aa058: 0xc06920c  jal         func_1A4830
label_1aa05c:
    if (ctx->pc == 0x1AA05Cu) {
        ctx->pc = 0x1AA05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA058u;
        // 0x1aa05c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA060u;
        goto label_1aa060;
    }
    ctx->pc = 0x1AA058u;
    SET_GPR_U32(ctx, 31, 0x1AA060u);
    ctx->pc = 0x1AA05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA058u;
    // 0x1aa05c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AA060u;
label_1aa060:
    // 0x1aa060: 0x10000006  b           . + 4 + (0x6 << 2)
label_1aa064:
    if (ctx->pc == 0x1AA064u) {
        ctx->pc = 0x1AA064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA060u;
        // 0x1aa064: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA068u;
        goto label_1aa068;
    }
    ctx->pc = 0x1AA060u;
    {
        const bool branch_taken_0x1aa060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA060u;
        // 0x1aa064: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa060) {
            ctx->pc = 0x1AA07Cu;
            { ctx->pc = 0x1aa07c; return; }
        }
    }
    ctx->pc = 0x1AA068u;
label_1aa068:
    // 0x1aa068: 0xc069218  jal         func_1A4860
label_1aa06c:
    if (ctx->pc == 0x1AA06Cu) {
        ctx->pc = 0x1AA06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA068u;
        // 0x1aa06c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA070u;
        goto label_1aa070;
    }
    ctx->pc = 0x1AA068u;
    SET_GPR_U32(ctx, 31, 0x1AA070u);
    ctx->pc = 0x1AA06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA068u;
    // 0x1aa06c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1AA070u;
label_1aa070:
    // 0x1aa070: 0xc06920c  jal         func_1A4830
label_1aa074:
    if (ctx->pc == 0x1AA074u) {
        ctx->pc = 0x1AA074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA070u;
        // 0x1aa074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA078u;
        { ctx->pc = 0x1aa078; return; }
    }
    ctx->pc = 0x1AA070u;
    SET_GPR_U32(ctx, 31, 0x1AA078u);
    ctx->pc = 0x1AA074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA070u;
    // 0x1aa074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AA078u;
    ctx->pc = 0x1aa078u;
    return;
}

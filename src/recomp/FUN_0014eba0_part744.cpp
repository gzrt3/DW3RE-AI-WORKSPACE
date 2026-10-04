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

// Function: FUN_0014eba0
// Address: 0x14eba0 - 0x2ced24
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0014eba0_part744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2b9850u: goto label_2b9850;
        case 0x2b9854u: goto label_2b9854;
        case 0x2b9858u: goto label_2b9858;
        case 0x2b985cu: goto label_2b985c;
        case 0x2b9860u: goto label_2b9860;
        case 0x2b9864u: goto label_2b9864;
        case 0x2b9868u: goto label_2b9868;
        case 0x2b986cu: goto label_2b986c;
        case 0x2b9870u: goto label_2b9870;
        case 0x2b9874u: goto label_2b9874;
        case 0x2b9878u: goto label_2b9878;
        case 0x2b987cu: goto label_2b987c;
        case 0x2b9880u: goto label_2b9880;
        case 0x2b9884u: goto label_2b9884;
        case 0x2b9888u: goto label_2b9888;
        case 0x2b988cu: goto label_2b988c;
        case 0x2b9890u: goto label_2b9890;
        case 0x2b9894u: goto label_2b9894;
        case 0x2b9898u: goto label_2b9898;
        case 0x2b989cu: goto label_2b989c;
        case 0x2b98a0u: goto label_2b98a0;
        case 0x2b98a4u: goto label_2b98a4;
        case 0x2b98a8u: goto label_2b98a8;
        case 0x2b98acu: goto label_2b98ac;
        case 0x2b98b0u: goto label_2b98b0;
        case 0x2b98b4u: goto label_2b98b4;
        case 0x2b98b8u: goto label_2b98b8;
        case 0x2b98bcu: goto label_2b98bc;
        case 0x2b98c0u: goto label_2b98c0;
        case 0x2b98c4u: goto label_2b98c4;
        case 0x2b98c8u: goto label_2b98c8;
        case 0x2b98ccu: goto label_2b98cc;
        case 0x2b98d0u: goto label_2b98d0;
        case 0x2b98d4u: goto label_2b98d4;
        case 0x2b98d8u: goto label_2b98d8;
        case 0x2b98dcu: goto label_2b98dc;
        case 0x2b98e0u: goto label_2b98e0;
        case 0x2b98e4u: goto label_2b98e4;
        case 0x2b98e8u: goto label_2b98e8;
        case 0x2b98ecu: goto label_2b98ec;
        case 0x2b98f0u: goto label_2b98f0;
        case 0x2b98f4u: goto label_2b98f4;
        case 0x2b98f8u: goto label_2b98f8;
        case 0x2b98fcu: goto label_2b98fc;
        case 0x2b9900u: goto label_2b9900;
        case 0x2b9904u: goto label_2b9904;
        case 0x2b9908u: goto label_2b9908;
        case 0x2b990cu: goto label_2b990c;
        case 0x2b9910u: goto label_2b9910;
        case 0x2b9914u: goto label_2b9914;
        case 0x2b9918u: goto label_2b9918;
        case 0x2b991cu: goto label_2b991c;
        case 0x2b9920u: goto label_2b9920;
        case 0x2b9924u: goto label_2b9924;
        case 0x2b9928u: goto label_2b9928;
        case 0x2b992cu: goto label_2b992c;
        case 0x2b9930u: goto label_2b9930;
        case 0x2b9934u: goto label_2b9934;
        case 0x2b9938u: goto label_2b9938;
        case 0x2b993cu: goto label_2b993c;
        case 0x2b9940u: goto label_2b9940;
        case 0x2b9944u: goto label_2b9944;
        case 0x2b9948u: goto label_2b9948;
        case 0x2b994cu: goto label_2b994c;
        case 0x2b9950u: goto label_2b9950;
        case 0x2b9954u: goto label_2b9954;
        case 0x2b9958u: goto label_2b9958;
        case 0x2b995cu: goto label_2b995c;
        case 0x2b9960u: goto label_2b9960;
        case 0x2b9964u: goto label_2b9964;
        case 0x2b9968u: goto label_2b9968;
        case 0x2b996cu: goto label_2b996c;
        case 0x2b9970u: goto label_2b9970;
        case 0x2b9974u: goto label_2b9974;
        case 0x2b9978u: goto label_2b9978;
        case 0x2b997cu: goto label_2b997c;
        case 0x2b9980u: goto label_2b9980;
        case 0x2b9984u: goto label_2b9984;
        case 0x2b9988u: goto label_2b9988;
        case 0x2b998cu: goto label_2b998c;
        case 0x2b9990u: goto label_2b9990;
        case 0x2b9994u: goto label_2b9994;
        case 0x2b9998u: goto label_2b9998;
        case 0x2b999cu: goto label_2b999c;
        case 0x2b99a0u: goto label_2b99a0;
        case 0x2b99a4u: goto label_2b99a4;
        case 0x2b99a8u: goto label_2b99a8;
        case 0x2b99acu: goto label_2b99ac;
        case 0x2b99b0u: goto label_2b99b0;
        case 0x2b99b4u: goto label_2b99b4;
        case 0x2b99b8u: goto label_2b99b8;
        case 0x2b99bcu: goto label_2b99bc;
        case 0x2b99c0u: goto label_2b99c0;
        case 0x2b99c4u: goto label_2b99c4;
        case 0x2b99c8u: goto label_2b99c8;
        case 0x2b99ccu: goto label_2b99cc;
        case 0x2b99d0u: goto label_2b99d0;
        case 0x2b99d4u: goto label_2b99d4;
        case 0x2b99d8u: goto label_2b99d8;
        case 0x2b99dcu: goto label_2b99dc;
        case 0x2b99e0u: goto label_2b99e0;
        case 0x2b99e4u: goto label_2b99e4;
        case 0x2b99e8u: goto label_2b99e8;
        case 0x2b99ecu: goto label_2b99ec;
        case 0x2b99f0u: goto label_2b99f0;
        case 0x2b99f4u: goto label_2b99f4;
        case 0x2b99f8u: goto label_2b99f8;
        case 0x2b99fcu: goto label_2b99fc;
        case 0x2b9a00u: goto label_2b9a00;
        case 0x2b9a04u: goto label_2b9a04;
        case 0x2b9a08u: goto label_2b9a08;
        case 0x2b9a0cu: goto label_2b9a0c;
        case 0x2b9a10u: goto label_2b9a10;
        case 0x2b9a14u: goto label_2b9a14;
        case 0x2b9a18u: goto label_2b9a18;
        case 0x2b9a1cu: goto label_2b9a1c;
        case 0x2b9a20u: goto label_2b9a20;
        case 0x2b9a24u: goto label_2b9a24;
        case 0x2b9a28u: goto label_2b9a28;
        case 0x2b9a2cu: goto label_2b9a2c;
        case 0x2b9a30u: goto label_2b9a30;
        case 0x2b9a34u: goto label_2b9a34;
        case 0x2b9a38u: goto label_2b9a38;
        case 0x2b9a3cu: goto label_2b9a3c;
        case 0x2b9a40u: goto label_2b9a40;
        case 0x2b9a44u: goto label_2b9a44;
        case 0x2b9a48u: goto label_2b9a48;
        case 0x2b9a4cu: goto label_2b9a4c;
        case 0x2b9a50u: goto label_2b9a50;
        case 0x2b9a54u: goto label_2b9a54;
        case 0x2b9a58u: goto label_2b9a58;
        case 0x2b9a5cu: goto label_2b9a5c;
        case 0x2b9a60u: goto label_2b9a60;
        case 0x2b9a64u: goto label_2b9a64;
        case 0x2b9a68u: goto label_2b9a68;
        case 0x2b9a6cu: goto label_2b9a6c;
        case 0x2b9a70u: goto label_2b9a70;
        case 0x2b9a74u: goto label_2b9a74;
        case 0x2b9a78u: goto label_2b9a78;
        case 0x2b9a7cu: goto label_2b9a7c;
        case 0x2b9a80u: goto label_2b9a80;
        case 0x2b9a84u: goto label_2b9a84;
        case 0x2b9a88u: goto label_2b9a88;
        case 0x2b9a8cu: goto label_2b9a8c;
        case 0x2b9a90u: goto label_2b9a90;
        case 0x2b9a94u: goto label_2b9a94;
        case 0x2b9a98u: goto label_2b9a98;
        case 0x2b9a9cu: goto label_2b9a9c;
        case 0x2b9aa0u: goto label_2b9aa0;
        case 0x2b9aa4u: goto label_2b9aa4;
        case 0x2b9aa8u: goto label_2b9aa8;
        case 0x2b9aacu: goto label_2b9aac;
        case 0x2b9ab0u: goto label_2b9ab0;
        case 0x2b9ab4u: goto label_2b9ab4;
        case 0x2b9ab8u: goto label_2b9ab8;
        case 0x2b9abcu: goto label_2b9abc;
        case 0x2b9ac0u: goto label_2b9ac0;
        case 0x2b9ac4u: goto label_2b9ac4;
        case 0x2b9ac8u: goto label_2b9ac8;
        case 0x2b9accu: goto label_2b9acc;
        case 0x2b9ad0u: goto label_2b9ad0;
        case 0x2b9ad4u: goto label_2b9ad4;
        case 0x2b9ad8u: goto label_2b9ad8;
        case 0x2b9adcu: goto label_2b9adc;
        case 0x2b9ae0u: goto label_2b9ae0;
        case 0x2b9ae4u: goto label_2b9ae4;
        case 0x2b9ae8u: goto label_2b9ae8;
        case 0x2b9aecu: goto label_2b9aec;
        case 0x2b9af0u: goto label_2b9af0;
        case 0x2b9af4u: goto label_2b9af4;
        case 0x2b9af8u: goto label_2b9af8;
        case 0x2b9afcu: goto label_2b9afc;
        case 0x2b9b00u: goto label_2b9b00;
        case 0x2b9b04u: goto label_2b9b04;
        case 0x2b9b08u: goto label_2b9b08;
        case 0x2b9b0cu: goto label_2b9b0c;
        case 0x2b9b10u: goto label_2b9b10;
        case 0x2b9b14u: goto label_2b9b14;
        case 0x2b9b18u: goto label_2b9b18;
        case 0x2b9b1cu: goto label_2b9b1c;
        case 0x2b9b20u: goto label_2b9b20;
        case 0x2b9b24u: goto label_2b9b24;
        case 0x2b9b28u: goto label_2b9b28;
        case 0x2b9b2cu: goto label_2b9b2c;
        case 0x2b9b30u: goto label_2b9b30;
        case 0x2b9b34u: goto label_2b9b34;
        case 0x2b9b38u: goto label_2b9b38;
        case 0x2b9b3cu: goto label_2b9b3c;
        case 0x2b9b40u: goto label_2b9b40;
        case 0x2b9b44u: goto label_2b9b44;
        case 0x2b9b48u: goto label_2b9b48;
        case 0x2b9b4cu: goto label_2b9b4c;
        case 0x2b9b50u: goto label_2b9b50;
        case 0x2b9b54u: goto label_2b9b54;
        case 0x2b9b58u: goto label_2b9b58;
        case 0x2b9b5cu: goto label_2b9b5c;
        case 0x2b9b60u: goto label_2b9b60;
        case 0x2b9b64u: goto label_2b9b64;
        case 0x2b9b68u: goto label_2b9b68;
        case 0x2b9b6cu: goto label_2b9b6c;
        case 0x2b9b70u: goto label_2b9b70;
        case 0x2b9b74u: goto label_2b9b74;
        case 0x2b9b78u: goto label_2b9b78;
        case 0x2b9b7cu: goto label_2b9b7c;
        case 0x2b9b80u: goto label_2b9b80;
        case 0x2b9b84u: goto label_2b9b84;
        case 0x2b9b88u: goto label_2b9b88;
        case 0x2b9b8cu: goto label_2b9b8c;
        case 0x2b9b90u: goto label_2b9b90;
        case 0x2b9b94u: goto label_2b9b94;
        case 0x2b9b98u: goto label_2b9b98;
        case 0x2b9b9cu: goto label_2b9b9c;
        case 0x2b9ba0u: goto label_2b9ba0;
        case 0x2b9ba4u: goto label_2b9ba4;
        case 0x2b9ba8u: goto label_2b9ba8;
        case 0x2b9bacu: goto label_2b9bac;
        case 0x2b9bb0u: goto label_2b9bb0;
        case 0x2b9bb4u: goto label_2b9bb4;
        case 0x2b9bb8u: goto label_2b9bb8;
        case 0x2b9bbcu: goto label_2b9bbc;
        case 0x2b9bc0u: goto label_2b9bc0;
        case 0x2b9bc4u: goto label_2b9bc4;
        case 0x2b9bc8u: goto label_2b9bc8;
        case 0x2b9bccu: goto label_2b9bcc;
        case 0x2b9bd0u: goto label_2b9bd0;
        case 0x2b9bd4u: goto label_2b9bd4;
        case 0x2b9bd8u: goto label_2b9bd8;
        case 0x2b9bdcu: goto label_2b9bdc;
        case 0x2b9be0u: goto label_2b9be0;
        case 0x2b9be4u: goto label_2b9be4;
        case 0x2b9be8u: goto label_2b9be8;
        case 0x2b9becu: goto label_2b9bec;
        case 0x2b9bf0u: goto label_2b9bf0;
        case 0x2b9bf4u: goto label_2b9bf4;
        case 0x2b9bf8u: goto label_2b9bf8;
        case 0x2b9bfcu: goto label_2b9bfc;
        case 0x2b9c00u: goto label_2b9c00;
        case 0x2b9c04u: goto label_2b9c04;
        case 0x2b9c08u: goto label_2b9c08;
        case 0x2b9c0cu: goto label_2b9c0c;
        case 0x2b9c10u: goto label_2b9c10;
        case 0x2b9c14u: goto label_2b9c14;
        case 0x2b9c18u: goto label_2b9c18;
        case 0x2b9c1cu: goto label_2b9c1c;
        case 0x2b9c20u: goto label_2b9c20;
        case 0x2b9c24u: goto label_2b9c24;
        case 0x2b9c28u: goto label_2b9c28;
        case 0x2b9c2cu: goto label_2b9c2c;
        case 0x2b9c30u: goto label_2b9c30;
        case 0x2b9c34u: goto label_2b9c34;
        case 0x2b9c38u: goto label_2b9c38;
        case 0x2b9c3cu: goto label_2b9c3c;
        case 0x2b9c40u: goto label_2b9c40;
        case 0x2b9c44u: goto label_2b9c44;
        case 0x2b9c48u: goto label_2b9c48;
        case 0x2b9c4cu: goto label_2b9c4c;
        case 0x2b9c50u: goto label_2b9c50;
        case 0x2b9c54u: goto label_2b9c54;
        case 0x2b9c58u: goto label_2b9c58;
        case 0x2b9c5cu: goto label_2b9c5c;
        case 0x2b9c60u: goto label_2b9c60;
        case 0x2b9c64u: goto label_2b9c64;
        case 0x2b9c68u: goto label_2b9c68;
        case 0x2b9c6cu: goto label_2b9c6c;
        case 0x2b9c70u: goto label_2b9c70;
        case 0x2b9c74u: goto label_2b9c74;
        case 0x2b9c78u: goto label_2b9c78;
        case 0x2b9c7cu: goto label_2b9c7c;
        case 0x2b9c80u: goto label_2b9c80;
        case 0x2b9c84u: goto label_2b9c84;
        case 0x2b9c88u: goto label_2b9c88;
        case 0x2b9c8cu: goto label_2b9c8c;
        case 0x2b9c90u: goto label_2b9c90;
        case 0x2b9c94u: goto label_2b9c94;
        case 0x2b9c98u: goto label_2b9c98;
        case 0x2b9c9cu: goto label_2b9c9c;
        case 0x2b9ca0u: goto label_2b9ca0;
        case 0x2b9ca4u: goto label_2b9ca4;
        case 0x2b9ca8u: goto label_2b9ca8;
        case 0x2b9cacu: goto label_2b9cac;
        case 0x2b9cb0u: goto label_2b9cb0;
        case 0x2b9cb4u: goto label_2b9cb4;
        case 0x2b9cb8u: goto label_2b9cb8;
        case 0x2b9cbcu: goto label_2b9cbc;
        case 0x2b9cc0u: goto label_2b9cc0;
        case 0x2b9cc4u: goto label_2b9cc4;
        case 0x2b9cc8u: goto label_2b9cc8;
        case 0x2b9cccu: goto label_2b9ccc;
        case 0x2b9cd0u: goto label_2b9cd0;
        case 0x2b9cd4u: goto label_2b9cd4;
        case 0x2b9cd8u: goto label_2b9cd8;
        case 0x2b9cdcu: goto label_2b9cdc;
        case 0x2b9ce0u: goto label_2b9ce0;
        case 0x2b9ce4u: goto label_2b9ce4;
        case 0x2b9ce8u: goto label_2b9ce8;
        case 0x2b9cecu: goto label_2b9cec;
        case 0x2b9cf0u: goto label_2b9cf0;
        case 0x2b9cf4u: goto label_2b9cf4;
        case 0x2b9cf8u: goto label_2b9cf8;
        case 0x2b9cfcu: goto label_2b9cfc;
        case 0x2b9d00u: goto label_2b9d00;
        case 0x2b9d04u: goto label_2b9d04;
        case 0x2b9d08u: goto label_2b9d08;
        case 0x2b9d0cu: goto label_2b9d0c;
        case 0x2b9d10u: goto label_2b9d10;
        case 0x2b9d14u: goto label_2b9d14;
        case 0x2b9d18u: goto label_2b9d18;
        case 0x2b9d1cu: goto label_2b9d1c;
        case 0x2b9d20u: goto label_2b9d20;
        case 0x2b9d24u: goto label_2b9d24;
        case 0x2b9d28u: goto label_2b9d28;
        case 0x2b9d2cu: goto label_2b9d2c;
        case 0x2b9d30u: goto label_2b9d30;
        case 0x2b9d34u: goto label_2b9d34;
        case 0x2b9d38u: goto label_2b9d38;
        case 0x2b9d3cu: goto label_2b9d3c;
        case 0x2b9d40u: goto label_2b9d40;
        case 0x2b9d44u: goto label_2b9d44;
        case 0x2b9d48u: goto label_2b9d48;
        case 0x2b9d4cu: goto label_2b9d4c;
        case 0x2b9d50u: goto label_2b9d50;
        case 0x2b9d54u: goto label_2b9d54;
        case 0x2b9d58u: goto label_2b9d58;
        case 0x2b9d5cu: goto label_2b9d5c;
        case 0x2b9d60u: goto label_2b9d60;
        case 0x2b9d64u: goto label_2b9d64;
        case 0x2b9d68u: goto label_2b9d68;
        case 0x2b9d6cu: goto label_2b9d6c;
        case 0x2b9d70u: goto label_2b9d70;
        case 0x2b9d74u: goto label_2b9d74;
        case 0x2b9d78u: goto label_2b9d78;
        case 0x2b9d7cu: goto label_2b9d7c;
        case 0x2b9d80u: goto label_2b9d80;
        case 0x2b9d84u: goto label_2b9d84;
        case 0x2b9d88u: goto label_2b9d88;
        case 0x2b9d8cu: goto label_2b9d8c;
        case 0x2b9d90u: goto label_2b9d90;
        case 0x2b9d94u: goto label_2b9d94;
        case 0x2b9d98u: goto label_2b9d98;
        case 0x2b9d9cu: goto label_2b9d9c;
        case 0x2b9da0u: goto label_2b9da0;
        case 0x2b9da4u: goto label_2b9da4;
        case 0x2b9da8u: goto label_2b9da8;
        case 0x2b9dacu: goto label_2b9dac;
        case 0x2b9db0u: goto label_2b9db0;
        case 0x2b9db4u: goto label_2b9db4;
        case 0x2b9db8u: goto label_2b9db8;
        case 0x2b9dbcu: goto label_2b9dbc;
        case 0x2b9dc0u: goto label_2b9dc0;
        case 0x2b9dc4u: goto label_2b9dc4;
        case 0x2b9dc8u: goto label_2b9dc8;
        case 0x2b9dccu: goto label_2b9dcc;
        case 0x2b9dd0u: goto label_2b9dd0;
        case 0x2b9dd4u: goto label_2b9dd4;
        case 0x2b9dd8u: goto label_2b9dd8;
        case 0x2b9ddcu: goto label_2b9ddc;
        case 0x2b9de0u: goto label_2b9de0;
        case 0x2b9de4u: goto label_2b9de4;
        case 0x2b9de8u: goto label_2b9de8;
        case 0x2b9decu: goto label_2b9dec;
        case 0x2b9df0u: goto label_2b9df0;
        case 0x2b9df4u: goto label_2b9df4;
        case 0x2b9df8u: goto label_2b9df8;
        case 0x2b9dfcu: goto label_2b9dfc;
        case 0x2b9e00u: goto label_2b9e00;
        case 0x2b9e04u: goto label_2b9e04;
        case 0x2b9e08u: goto label_2b9e08;
        case 0x2b9e0cu: goto label_2b9e0c;
        case 0x2b9e10u: goto label_2b9e10;
        case 0x2b9e14u: goto label_2b9e14;
        case 0x2b9e18u: goto label_2b9e18;
        case 0x2b9e1cu: goto label_2b9e1c;
        case 0x2b9e20u: goto label_2b9e20;
        case 0x2b9e24u: goto label_2b9e24;
        case 0x2b9e28u: goto label_2b9e28;
        case 0x2b9e2cu: goto label_2b9e2c;
        case 0x2b9e30u: goto label_2b9e30;
        case 0x2b9e34u: goto label_2b9e34;
        case 0x2b9e38u: goto label_2b9e38;
        case 0x2b9e3cu: goto label_2b9e3c;
        case 0x2b9e40u: goto label_2b9e40;
        case 0x2b9e44u: goto label_2b9e44;
        case 0x2b9e48u: goto label_2b9e48;
        case 0x2b9e4cu: goto label_2b9e4c;
        case 0x2b9e50u: goto label_2b9e50;
        case 0x2b9e54u: goto label_2b9e54;
        case 0x2b9e58u: goto label_2b9e58;
        case 0x2b9e5cu: goto label_2b9e5c;
        case 0x2b9e60u: goto label_2b9e60;
        case 0x2b9e64u: goto label_2b9e64;
        case 0x2b9e68u: goto label_2b9e68;
        case 0x2b9e6cu: goto label_2b9e6c;
        case 0x2b9e70u: goto label_2b9e70;
        case 0x2b9e74u: goto label_2b9e74;
        case 0x2b9e78u: goto label_2b9e78;
        case 0x2b9e7cu: goto label_2b9e7c;
        case 0x2b9e80u: goto label_2b9e80;
        case 0x2b9e84u: goto label_2b9e84;
        case 0x2b9e88u: goto label_2b9e88;
        case 0x2b9e8cu: goto label_2b9e8c;
        case 0x2b9e90u: goto label_2b9e90;
        case 0x2b9e94u: goto label_2b9e94;
        case 0x2b9e98u: goto label_2b9e98;
        case 0x2b9e9cu: goto label_2b9e9c;
        case 0x2b9ea0u: goto label_2b9ea0;
        case 0x2b9ea4u: goto label_2b9ea4;
        case 0x2b9ea8u: goto label_2b9ea8;
        case 0x2b9eacu: goto label_2b9eac;
        case 0x2b9eb0u: goto label_2b9eb0;
        case 0x2b9eb4u: goto label_2b9eb4;
        case 0x2b9eb8u: goto label_2b9eb8;
        case 0x2b9ebcu: goto label_2b9ebc;
        case 0x2b9ec0u: goto label_2b9ec0;
        case 0x2b9ec4u: goto label_2b9ec4;
        case 0x2b9ec8u: goto label_2b9ec8;
        case 0x2b9eccu: goto label_2b9ecc;
        case 0x2b9ed0u: goto label_2b9ed0;
        case 0x2b9ed4u: goto label_2b9ed4;
        case 0x2b9ed8u: goto label_2b9ed8;
        case 0x2b9edcu: goto label_2b9edc;
        case 0x2b9ee0u: goto label_2b9ee0;
        case 0x2b9ee4u: goto label_2b9ee4;
        case 0x2b9ee8u: goto label_2b9ee8;
        case 0x2b9eecu: goto label_2b9eec;
        case 0x2b9ef0u: goto label_2b9ef0;
        case 0x2b9ef4u: goto label_2b9ef4;
        case 0x2b9ef8u: goto label_2b9ef8;
        case 0x2b9efcu: goto label_2b9efc;
        case 0x2b9f00u: goto label_2b9f00;
        case 0x2b9f04u: goto label_2b9f04;
        case 0x2b9f08u: goto label_2b9f08;
        case 0x2b9f0cu: goto label_2b9f0c;
        case 0x2b9f10u: goto label_2b9f10;
        case 0x2b9f14u: goto label_2b9f14;
        case 0x2b9f18u: goto label_2b9f18;
        case 0x2b9f1cu: goto label_2b9f1c;
        case 0x2b9f20u: goto label_2b9f20;
        case 0x2b9f24u: goto label_2b9f24;
        case 0x2b9f28u: goto label_2b9f28;
        case 0x2b9f2cu: goto label_2b9f2c;
        case 0x2b9f30u: goto label_2b9f30;
        case 0x2b9f34u: goto label_2b9f34;
        case 0x2b9f38u: goto label_2b9f38;
        case 0x2b9f3cu: goto label_2b9f3c;
        case 0x2b9f40u: goto label_2b9f40;
        case 0x2b9f44u: goto label_2b9f44;
        case 0x2b9f48u: goto label_2b9f48;
        case 0x2b9f4cu: goto label_2b9f4c;
        case 0x2b9f50u: goto label_2b9f50;
        case 0x2b9f54u: goto label_2b9f54;
        case 0x2b9f58u: goto label_2b9f58;
        case 0x2b9f5cu: goto label_2b9f5c;
        case 0x2b9f60u: goto label_2b9f60;
        case 0x2b9f64u: goto label_2b9f64;
        case 0x2b9f68u: goto label_2b9f68;
        case 0x2b9f6cu: goto label_2b9f6c;
        case 0x2b9f70u: goto label_2b9f70;
        case 0x2b9f74u: goto label_2b9f74;
        case 0x2b9f78u: goto label_2b9f78;
        case 0x2b9f7cu: goto label_2b9f7c;
        case 0x2b9f80u: goto label_2b9f80;
        case 0x2b9f84u: goto label_2b9f84;
        case 0x2b9f88u: goto label_2b9f88;
        case 0x2b9f8cu: goto label_2b9f8c;
        case 0x2b9f90u: goto label_2b9f90;
        case 0x2b9f94u: goto label_2b9f94;
        case 0x2b9f98u: goto label_2b9f98;
        case 0x2b9f9cu: goto label_2b9f9c;
        case 0x2b9fa0u: goto label_2b9fa0;
        case 0x2b9fa4u: goto label_2b9fa4;
        case 0x2b9fa8u: goto label_2b9fa8;
        case 0x2b9facu: goto label_2b9fac;
        case 0x2b9fb0u: goto label_2b9fb0;
        case 0x2b9fb4u: goto label_2b9fb4;
        case 0x2b9fb8u: goto label_2b9fb8;
        case 0x2b9fbcu: goto label_2b9fbc;
        case 0x2b9fc0u: goto label_2b9fc0;
        case 0x2b9fc4u: goto label_2b9fc4;
        case 0x2b9fc8u: goto label_2b9fc8;
        case 0x2b9fccu: goto label_2b9fcc;
        case 0x2b9fd0u: goto label_2b9fd0;
        case 0x2b9fd4u: goto label_2b9fd4;
        case 0x2b9fd8u: goto label_2b9fd8;
        case 0x2b9fdcu: goto label_2b9fdc;
        case 0x2b9fe0u: goto label_2b9fe0;
        case 0x2b9fe4u: goto label_2b9fe4;
        case 0x2b9fe8u: goto label_2b9fe8;
        case 0x2b9fecu: goto label_2b9fec;
        case 0x2b9ff0u: goto label_2b9ff0;
        case 0x2b9ff4u: goto label_2b9ff4;
        case 0x2b9ff8u: goto label_2b9ff8;
        case 0x2b9ffcu: goto label_2b9ffc;
        case 0x2ba000u: goto label_2ba000;
        case 0x2ba004u: goto label_2ba004;
        case 0x2ba008u: goto label_2ba008;
        case 0x2ba00cu: goto label_2ba00c;
        case 0x2ba010u: goto label_2ba010;
        case 0x2ba014u: goto label_2ba014;
        case 0x2ba018u: goto label_2ba018;
        case 0x2ba01cu: goto label_2ba01c;
        default: return;
    }

label_2b9850:
    // 0x2b9850: 0x10033001  beq         $zero, $v1, . + 4 + (0x3001 << 2)
label_2b9854:
    if (ctx->pc == 0x2B9854u) {
        ctx->pc = 0x2B9854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9850u;
        // 0x2b9854: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9858u;
        goto label_2b9858;
    }
    ctx->pc = 0x2B9850u;
    {
        const bool branch_taken_0x2b9850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B9854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9850u;
        // 0x2b9854: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9850) {
            ctx->pc = 0x2C5858u;
            { ctx->pc = 0x2c5858; return; }
        }
    }
    ctx->pc = 0x2B9858u;
label_2b9858:
    // 0x2b9858: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9858u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b985c:
    // 0x2b985c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b985cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9860:
    // 0x2b9860: 0x800b6334  lb          $t3, 0x6334($zero)
    ctx->pc = 0x2b9860u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x6334u));
label_2b9864:
    // 0x2b9864: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9864u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9868:
    // 0x2b9868: 0x800c1930  lb          $t4, 0x1930($zero)
    ctx->pc = 0x2b9868u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x1930u));
label_2b986c:
    // 0x2b986c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b986cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9870:
    // 0x2b9870: 0x81f31b7c  lb          $s3, 0x1B7C($t7)
    ctx->pc = 0x2b9870u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2b9874:
    // 0x2b9874: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9874u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9878:
    // 0x2b9878: 0x800c2170  lb          $t4, 0x2170($zero)
    ctx->pc = 0x2b9878u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x2170u));
label_2b987c:
    // 0x2b987c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b987cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9880:
    // 0x2b9880: 0x1f43000  .word       0x01F43000                   # sll         $a2, $s4, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9880u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 0));
label_2b9884:
    // 0x2b9884: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9884u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9888:
    // 0x2b9888: 0x800c29b0  lb          $t4, 0x29B0($zero)
    ctx->pc = 0x2b9888u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x29B0u));
label_2b988c:
    // 0x2b988c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b988cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9890:
    // 0x2b9890: 0x22000000  addi        $zero, $s0, 0x0
    ctx->pc = 0x2b9890u;
    // NOP (addi to $zero)
label_2b9894:
    // 0x2b9894: 0x1f309bc  .word       0x01F309BC                   # dsll32      $at, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9894u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << (32 + 6));
label_2b9898:
    // 0x2b9898: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9898u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b989c:
    // 0x2b989c: 0x1f310bd  .word       0x01F310BD                   # INVALID     $t7, $s3, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b989cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B989C raw=0x01F310BD");
 /* MITIGATED */
label_2b98a0:
    // 0x2b98a0: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2b98a0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2b98a4:
    // 0x2b98a4: 0x1f318be  .word       0x01F318BE                   # dsrl32      $v1, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b98a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (32 + 2));
label_2b98a8:
    // 0x2b98a8: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2b98a8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2b98ac:
    // 0x2b98ac: 0x1e0270b  .word       0x01E0270B                   # movn        $a0, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b98acu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
label_2b98b0:
    // 0x2b98b0: 0xa48080a  j           func_9202028
label_2b98b4:
    if (ctx->pc == 0x2B98B4u) {
        ctx->pc = 0x2B98B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B98B0u;
        // 0x2b98b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B98B8u;
        goto label_2b98b8;
    }
    ctx->pc = 0x2B98B0u;
    ctx->pc = 0x2B98B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B98B0u;
    // 0x2b98b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x9202028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9202028u, 0x2B98B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B98B8u;
label_2b98b8:
    // 0x2b98b8: 0x81e8a37d  lb          $t0, -0x5C83($t7)
    ctx->pc = 0x2b98b8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2b98bc:
    // 0x2b98bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b98bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b98c0:
    // 0x2b98c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b98c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b98c4:
    // 0x2b98c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b98c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b98c8:
    // 0x2b98c8: 0x81fc03bc  lb          $gp, 0x3BC($t7)
    ctx->pc = 0x2b98c8u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2b98cc:
    // 0x2b98cc: 0x1f361bc  .word       0x01F361BC                   # dsll32      $t4, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b98ccu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 19) << (32 + 6));
label_2b98d0:
    // 0x2b98d0: 0x81f5237c  lb          $s5, 0x237C($t7)
    ctx->pc = 0x2b98d0u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9084)));
label_2b98d4:
    // 0x2b98d4: 0x1f368bd  .word       0x01F368BD                   # INVALID     $t7, $s3, 0x68BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b98d4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B98D4 raw=0x01F368BD");
 /* MITIGATED */
label_2b98d8:
    // 0x2b98d8: 0x8054033d  lb          $s4, 0x33D($v0)
    ctx->pc = 0x2b98d8u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2b98dc:
    // 0x2b98dc: 0x1f370be  .word       0x01F370BE                   # dsrl32      $t6, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b98dcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) >> (32 + 2));
label_2b98e0:
    // 0x2b98e0: 0x8056033d  lb          $s6, 0x33D($v0)
    ctx->pc = 0x2b98e0u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2b98e4:
    // 0x2b98e4: 0x1e07c8b  .word       0x01E07C8B                   # movn        $t7, $t7, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b98e4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 15));
label_2b98e8:
    // 0x2b98e8: 0x81942b7c  lb          $s4, 0x2B7C($t4)
    ctx->pc = 0x2b98e8u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 11132)));
label_2b98ec:
    // 0x2b98ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b98ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b98f0:
    // 0x2b98f0: 0x8196337c  lb          $s6, 0x337C($t4)
    ctx->pc = 0x2b98f0u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 13180)));
label_2b98f4:
    // 0x2b98f4: 0x1cbad6a  .word       0x01CBAD6A                   # slt         $s5, $t6, $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b98f4u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_2b98f8:
    // 0x2b98f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b98f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b98fc:
    // 0x2b98fc: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b98fcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2b9900:
    // 0x2b9900: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9900u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9904:
    // 0x2b9904: 0x20f721  .word       0x0020F721                   # addu        $fp, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9904u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2b9908:
    // 0x2b9908: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9908u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b990c:
    // 0x2b990c: 0x1c0e7dc  .word       0x01C0E7DC                   # dmult       $t6, $zero # 0000E7C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b990cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B990C raw=0x01C0E7DC");
 /* MITIGATED */
label_2b9910:
    // 0x2b9910: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9910u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9914:
    // 0x2b9914: 0x1e0ad5f  .word       0x01E0AD5F                   # ddivu       $s5, $t7, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9914u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2B9914 raw=0x01E0AD5F");
 /* MITIGATED */
label_2b9918:
    // 0x2b9918: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9918u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b991c:
    // 0x2b991c: 0x1c0a51c  .word       0x01C0A51C                   # dmult       $t6, $zero # 0000A500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b991cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B991C raw=0x01C0A51C");
 /* MITIGATED */
label_2b9920:
    // 0x2b9920: 0x81f31b7c  lb          $s3, 0x1B7C($t7)
    ctx->pc = 0x2b9920u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2b9924:
    // 0x2b9924: 0x1c0b59c  .word       0x01C0B59C                   # dmult       $t6, $zero # 0000B580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9924u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B9924 raw=0x01C0B59C");
 /* MITIGATED */
label_2b9928:
    // 0x2b9928: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9928u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b992c:
    // 0x2b992c: 0x20e7df  .word       0x0020E7DF                   # ddivu       $gp, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b992cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2B992C raw=0x0020E7DF");
 /* MITIGATED */
label_2b9930:
    // 0x2b9930: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9930u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9934:
    // 0x2b9934: 0x1f5a97c  .word       0x01F5A97C                   # dsll32      $s5, $s5, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9934u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 5));
label_2b9938:
    // 0x2b9938: 0x3e7a000  .word       0x03E7A000                   # sll         $s4, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9938u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2b993c:
    // 0x2b993c: 0x1d291ff  .word       0x01D291FF                   # dsra32      $s2, $s2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b993cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 7));
label_2b9940:
    // 0x2b9940: 0x3e8b000  .word       0x03E8B000                   # sll         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9940u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
label_2b9944:
    // 0x2b9944: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9944u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9948:
    // 0x2b9948: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9948u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b994c:
    // 0x2b994c: 0x20ffd0  .word       0x0020FFD0                   # mfhi        $ra # 002007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b994cu;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_2b9950:
    // 0x2b9950: 0x3c7a801  .word       0x03C7A801                   # INVALID     $fp, $a3, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9950u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B9950 raw=0x03C7A801");
 /* MITIGATED */
label_2b9954:
    // 0x2b9954: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9954u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9958:
    // 0x2b9958: 0x2275801  .word       0x02275801                   # INVALID     $s1, $a3, 0x5801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9958u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B9958 raw=0x02275801");
 /* MITIGATED */
label_2b995c:
    // 0x2b995c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b995cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9960:
    // 0x2b9960: 0x3e8a801  .word       0x03E8A801                   # INVALID     $ra, $t0, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9960u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B9960 raw=0x03E8A801");
 /* MITIGATED */
label_2b9964:
    // 0x2b9964: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9964u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9968:
    // 0x2b9968: 0x800c67f2  lb          $t4, 0x67F2($zero)
    ctx->pc = 0x2b9968u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x67F2u));
label_2b996c:
    // 0x2b996c: 0x1fcf97d  .word       0x01FCF97D                   # INVALID     $t7, $gp, -0x683 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b996cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B996C raw=0x01FCF97D");
 /* MITIGATED */
label_2b9970:
    // 0x2b9970: 0x10084003  beq         $zero, $t0, . + 4 + (0x4003 << 2)
label_2b9974:
    if (ctx->pc == 0x2B9974u) {
        ctx->pc = 0x2B9974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9970u;
        // 0x2b9974: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9978u;
        goto label_2b9978;
    }
    ctx->pc = 0x2B9970u;
    {
        const bool branch_taken_0x2b9970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B9974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9970u;
        // 0x2b9974: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9970) {
            ctx->pc = 0x2C9980u;
            { ctx->pc = 0x2c9980; return; }
        }
    }
    ctx->pc = 0x2B9978u;
label_2b9978:
    // 0x2b9978: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b9978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b997c:
    // 0x2b997c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b997cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9980:
    // 0x2b9980: 0x10073803  beq         $zero, $a3, . + 4 + (0x3803 << 2)
label_2b9984:
    if (ctx->pc == 0x2B9984u) {
        ctx->pc = 0x2B9984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9980u;
        // 0x2b9984: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9988u;
        goto label_2b9988;
    }
    ctx->pc = 0x2B9980u;
    {
        const bool branch_taken_0x2b9980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B9984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9980u;
        // 0x2b9984: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9980) {
            ctx->pc = 0x2C7990u;
            { ctx->pc = 0x2c7990; return; }
        }
    }
    ctx->pc = 0x2B9988u;
label_2b9988:
    // 0x2b9988: 0x8062e3fc  lb          $v0, -0x1C04($v1)
    ctx->pc = 0x2b9988u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294960124)));
label_2b998c:
    // 0x2b998c: 0x1f309bc  .word       0x01F309BC                   # dsll32      $at, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b998cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << (32 + 6));
label_2b9990:
    // 0x2b9990: 0x3e7e7ff  .word       0x03E7E7FF                   # dsra32      $gp, $a3, 31 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9990u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 7) >> (32 + 31));
label_2b9994:
    // 0x2b9994: 0x1f310bd  .word       0x01F310BD                   # INVALID     $t7, $s3, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9994u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B9994 raw=0x01F310BD");
 /* MITIGATED */
label_2b9998:
    // 0x2b9998: 0x3e8e7ff  .word       0x03E8E7FF                   # dsra32      $gp, $t0, 31 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9998u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 8) >> (32 + 31));
label_2b999c:
    // 0x2b999c: 0x1f318be  .word       0x01F318BE                   # dsrl32      $v1, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b999cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (32 + 2));
label_2b99a0:
    // 0x2b99a0: 0x52010014  beql        $s0, $at, . + 4 + (0x14 << 2)
label_2b99a4:
    if (ctx->pc == 0x2B99A4u) {
        ctx->pc = 0x2B99A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99A0u;
        // 0x2b99a4: 0x1e0270b  .word       0x01E0270B                   # movn        $a0, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B99A8u;
        goto label_2b99a8;
    }
    ctx->pc = 0x2B99A0u;
    {
        const bool branch_taken_0x2b99a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b99a0) {
            ctx->pc = 0x2B99A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B99A0u;
            // 0x2b99a4: 0x1e0270b  .word       0x01E0270B                   # movn        $a0, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B99F4u;
            goto label_2b99f4;
        }
    }
    ctx->pc = 0x2B99A8u;
label_2b99a8:
    // 0x2b99a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b99a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b99ac:
    // 0x2b99ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b99acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b99b0:
    // 0x2b99b0: 0x520c07e2  beql        $s0, $t4, . + 4 + (0x7E2 << 2)
label_2b99b4:
    if (ctx->pc == 0x2B99B4u) {
        ctx->pc = 0x2B99B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99B0u;
        // 0x2b99b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B99B8u;
        goto label_2b99b8;
    }
    ctx->pc = 0x2B99B0u;
    {
        const bool branch_taken_0x2b99b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        if (branch_taken_0x2b99b0) {
            ctx->pc = 0x2B99B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B99B0u;
            // 0x2b99b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB93Cu;
            { ctx->pc = 0x2bb93c; return; }
        }
    }
    ctx->pc = 0x2B99B8u;
label_2b99b8:
    // 0x2b99b8: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b99b8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b99bc:
    // 0x2b99bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b99bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b99c0:
    // 0x2b99c0: 0x904100a  j           func_4104028
label_2b99c4:
    if (ctx->pc == 0x2B99C4u) {
        ctx->pc = 0x2B99C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99C0u;
        // 0x2b99c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B99C8u;
        goto label_2b99c8;
    }
    ctx->pc = 0x2B99C0u;
    ctx->pc = 0x2B99C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B99C0u;
    // 0x2b99c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4104028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4104028u, 0x2B99C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B99C8u;
label_2b99c8:
    // 0x2b99c8: 0x841100a  j           func_1044028
label_2b99cc:
    if (ctx->pc == 0x2B99CCu) {
        ctx->pc = 0x2B99CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99C8u;
        // 0x2b99cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B99D0u;
        goto label_2b99d0;
    }
    ctx->pc = 0x2B99C8u;
    ctx->pc = 0x2B99CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B99C8u;
    // 0x2b99cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044028u, 0x2B99C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B99D0u;
label_2b99d0:
    // 0x2b99d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b99d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b99d4:
    // 0x2b99d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b99d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b99d8:
    // 0x2b99d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b99d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b99dc:
    // 0x2b99dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b99dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b99e0:
    // 0x2b99e0: 0x12042001  beq         $s0, $a0, . + 4 + (0x2001 << 2)
label_2b99e4:
    if (ctx->pc == 0x2B99E4u) {
        ctx->pc = 0x2B99E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99E0u;
        // 0x2b99e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B99E8u;
        goto label_2b99e8;
    }
    ctx->pc = 0x2B99E0u;
    {
        const bool branch_taken_0x2b99e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B99E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99E0u;
        // 0x2b99e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b99e0) {
            ctx->pc = 0x2C19E8u;
            { ctx->pc = 0x2c19e8; return; }
        }
    }
    ctx->pc = 0x2B99E8u;
label_2b99e8:
    // 0x2b99e8: 0x9030800  j           func_40C2000
label_2b99ec:
    if (ctx->pc == 0x2B99ECu) {
        ctx->pc = 0x2B99ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99E8u;
        // 0x2b99ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B99F0u;
        goto label_2b99f0;
    }
    ctx->pc = 0x2B99E8u;
    ctx->pc = 0x2B99ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B99E8u;
    // 0x2b99ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C2000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C2000u, 0x2B99E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B99F0u;
label_2b99f0:
    // 0x2b99f0: 0x5a0027c9  blezl       $s0, . + 4 + (0x27C9 << 2)
label_2b99f4:
    if (ctx->pc == 0x2B99F4u) {
        ctx->pc = 0x2B99F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99F0u;
        // 0x2b99f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B99F8u;
        goto label_2b99f8;
    }
    ctx->pc = 0x2B99F0u;
    {
        const bool branch_taken_0x2b99f0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b99f0) {
            ctx->pc = 0x2B99F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B99F0u;
            // 0x2b99f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3918u;
            { ctx->pc = 0x2c3918; return; }
        }
    }
    ctx->pc = 0x2B99F8u;
label_2b99f8:
    // 0x2b99f8: 0xb04100a  j           func_C104028
label_2b99fc:
    if (ctx->pc == 0x2B99FCu) {
        ctx->pc = 0x2B99FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99F8u;
        // 0x2b99fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9A00u;
        goto label_2b9a00;
    }
    ctx->pc = 0x2B99F8u;
    ctx->pc = 0x2B99FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B99F8u;
    // 0x2b99fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC104028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC104028u, 0x2B99F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B9A00u;
label_2b9a00:
    // 0x2b9a00: 0x11eb1fff  beq         $t7, $t3, . + 4 + (0x1FFF << 2)
label_2b9a04:
    if (ctx->pc == 0x2B9A04u) {
        ctx->pc = 0x2B9A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A00u;
        // 0x2b9a04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9A08u;
        goto label_2b9a08;
    }
    ctx->pc = 0x2B9A00u;
    {
        const bool branch_taken_0x2b9a00 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B9A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A00u;
        // 0x2b9a04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a00) {
            ctx->pc = 0x2C1A00u;
            { ctx->pc = 0x2c1a00; return; }
        }
    }
    ctx->pc = 0x2B9A08u;
label_2b9a08:
    // 0x2b9a08: 0x800b5872  lb          $t3, 0x5872($zero)
    ctx->pc = 0x2b9a08u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x5872u));
label_2b9a0c:
    // 0x2b9a0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9a0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9a10:
    // 0x2b9a10: 0xb0b0800  j           func_C2C2000
label_2b9a14:
    if (ctx->pc == 0x2B9A14u) {
        ctx->pc = 0x2B9A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A10u;
        // 0x2b9a14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9A18u;
        goto label_2b9a18;
    }
    ctx->pc = 0x2B9A10u;
    ctx->pc = 0x2B9A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9A10u;
    // 0x2b9a14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C2000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C2000u, 0x2B9A10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B9A18u;
label_2b9a18:
    // 0x2b9a18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9a18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9a1c:
    // 0x2b9a1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9a1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9a20:
    // 0x2b9a20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9a20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9a24:
    // 0x2b9a24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9a24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9a28:
    // 0x2b9a28: 0x100210ca  beq         $zero, $v0, . + 4 + (0x10CA << 2)
label_2b9a2c:
    if (ctx->pc == 0x2B9A2Cu) {
        ctx->pc = 0x2B9A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A28u;
        // 0x2b9a2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9A30u;
        goto label_2b9a30;
    }
    ctx->pc = 0x2B9A28u;
    {
        const bool branch_taken_0x2b9a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B9A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A28u;
        // 0x2b9a2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a28) {
            ctx->pc = 0x2BDD54u;
            { ctx->pc = 0x2bdd54; return; }
        }
    }
    ctx->pc = 0x2B9A30u;
label_2b9a30:
    // 0x2b9a30: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2b9a30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2b9a34:
    // 0x2b9a34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9a34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9a38:
    // 0x2b9a38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9a38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9a3c:
    // 0x2b9a3c: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b9a3cu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b9a40:
    // 0x2b9a40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9a40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9a44:
    // 0x2b9a44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9a44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9a48:
    // 0x2b9a48: 0x11e117ff  beq         $t7, $at, . + 4 + (0x17FF << 2)
label_2b9a4c:
    if (ctx->pc == 0x2B9A4Cu) {
        ctx->pc = 0x2B9A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A48u;
        // 0x2b9a4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9A50u;
        goto label_2b9a50;
    }
    ctx->pc = 0x2B9A48u;
    {
        const bool branch_taken_0x2b9a48 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 1));
        ctx->pc = 0x2B9A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A48u;
        // 0x2b9a4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a48) {
            ctx->pc = 0x2BFA48u;
            { ctx->pc = 0x2bfa48; return; }
        }
    }
    ctx->pc = 0x2B9A50u;
label_2b9a50:
    // 0x2b9a50: 0x80010872  lb          $at, 0x872($zero)
    ctx->pc = 0x2b9a50u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x872u));
label_2b9a54:
    // 0x2b9a54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9a54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9a58:
    // 0x2b9a58: 0xa213fff  j           func_884FFFC
label_2b9a5c:
    if (ctx->pc == 0x2B9A5Cu) {
        ctx->pc = 0x2B9A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A58u;
        // 0x2b9a5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9A60u;
        goto label_2b9a60;
    }
    ctx->pc = 0x2B9A58u;
    ctx->pc = 0x2B9A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9A58u;
    // 0x2b9a5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x884FFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x884FFFCu, 0x2B9A58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B9A60u;
label_2b9a60:
    // 0x2b9a60: 0x400007e9  .word       0x400007E9                   # mfc0        $zero, Index # 000007E9 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b9a60u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b9a64:
    // 0x2b9a64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9a64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9a68:
    // 0x2b9a68: 0xa2147ff  j           func_8851FFC
label_2b9a6c:
    if (ctx->pc == 0x2B9A6Cu) {
        ctx->pc = 0x2B9A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A68u;
        // 0x2b9a6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9A70u;
        goto label_2b9a70;
    }
    ctx->pc = 0x2B9A68u;
    ctx->pc = 0x2B9A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9A68u;
    // 0x2b9a6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8851FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8851FFCu, 0x2B9A68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B9A70u;
label_2b9a70:
    // 0x2b9a70: 0x0  nop
    ctx->pc = 0x2b9a70u;
    // NOP
label_2b9a74:
    // 0x2b9a74: 0x4a000450  vmaxx       $vf17, $vf0, $vf0x
    ctx->pc = 0x2b9a74u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
label_2b9a78:
    // 0x2b9a78: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2b9a78u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2b9a7c:
    // 0x2b9a7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9a7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9a80:
    // 0x2b9a80: 0x100e0000  beq         $zero, $t6, . + 4 + (0x0 << 2)
label_2b9a84:
    if (ctx->pc == 0x2B9A84u) {
        ctx->pc = 0x2B9A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A80u;
        // 0x2b9a84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9A88u;
        goto label_2b9a88;
    }
    ctx->pc = 0x2B9A80u;
    {
        const bool branch_taken_0x2b9a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B9A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A80u;
        // 0x2b9a84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a80) {
            ctx->pc = 0x2B9A84u;
            goto label_2b9a84;
        }
    }
    ctx->pc = 0x2B9A88u;
label_2b9a88:
    // 0x2b9a88: 0xa8e0805  j           func_A382014
label_2b9a8c:
    if (ctx->pc == 0x2B9A8Cu) {
        ctx->pc = 0x2B9A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A88u;
        // 0x2b9a8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9A90u;
        goto label_2b9a90;
    }
    ctx->pc = 0x2B9A88u;
    ctx->pc = 0x2B9A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9A88u;
    // 0x2b9a8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA382014u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA382014u, 0x2B9A88u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B9A90u;
label_2b9a90:
    // 0x2b9a90: 0x100708ca  beq         $zero, $a3, . + 4 + (0x8CA << 2)
label_2b9a94:
    if (ctx->pc == 0x2B9A94u) {
        ctx->pc = 0x2B9A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A90u;
        // 0x2b9a94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9A98u;
        goto label_2b9a98;
    }
    ctx->pc = 0x2B9A90u;
    {
        const bool branch_taken_0x2b9a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B9A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A90u;
        // 0x2b9a94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a90) {
            ctx->pc = 0x2BBDBCu;
            { ctx->pc = 0x2bbdbc; return; }
        }
    }
    ctx->pc = 0x2B9A98u;
label_2b9a98:
    // 0x2b9a98: 0x81f40b7c  lb          $s4, 0xB7C($t7)
    ctx->pc = 0x2b9a98u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b9a9c:
    // 0x2b9a9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9a9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9aa0:
    // 0x2b9aa0: 0x81f50b7c  lb          $s5, 0xB7C($t7)
    ctx->pc = 0x2b9aa0u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b9aa4:
    // 0x2b9aa4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9aa4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9aa8:
    // 0x2b9aa8: 0x81f60b7c  lb          $s6, 0xB7C($t7)
    ctx->pc = 0x2b9aa8u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b9aac:
    // 0x2b9aac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9aacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9ab0:
    // 0x2b9ab0: 0x81f70b7c  lb          $s7, 0xB7C($t7)
    ctx->pc = 0x2b9ab0u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b9ab4:
    // 0x2b9ab4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9ab4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9ab8:
    // 0x2b9ab8: 0x81f80b7c  lb          $t8, 0xB7C($t7)
    ctx->pc = 0x2b9ab8u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b9abc:
    // 0x2b9abc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9abcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9ac0:
    // 0x2b9ac0: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2b9ac0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2b9ac4:
    // 0x2b9ac4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9ac4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9ac8:
    // 0x2b9ac8: 0x81e7ab7d  lb          $a3, -0x5483($t7)
    ctx->pc = 0x2b9ac8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2b9acc:
    // 0x2b9acc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9accu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9ad0:
    // 0x2b9ad0: 0x81e7b37d  lb          $a3, -0x4C83($t7)
    ctx->pc = 0x2b9ad0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2b9ad4:
    // 0x2b9ad4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9ad4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9ad8:
    // 0x2b9ad8: 0x81e7bb7d  lb          $a3, -0x4483($t7)
    ctx->pc = 0x2b9ad8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2b9adc:
    // 0x2b9adc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9adcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9ae0:
    // 0x2b9ae0: 0x81e7c37d  lb          $a3, -0x3C83($t7)
    ctx->pc = 0x2b9ae0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2b9ae4:
    // 0x2b9ae4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9ae4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9ae8:
    // 0x2b9ae8: 0x10060801  beq         $zero, $a2, . + 4 + (0x801 << 2)
label_2b9aec:
    if (ctx->pc == 0x2B9AECu) {
        ctx->pc = 0x2B9AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9AE8u;
        // 0x2b9aec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9AF0u;
        goto label_2b9af0;
    }
    ctx->pc = 0x2B9AE8u;
    {
        const bool branch_taken_0x2b9ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B9AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9AE8u;
        // 0x2b9aec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9ae8) {
            ctx->pc = 0x2BBAF0u;
            { ctx->pc = 0x2bbaf0; return; }
        }
    }
    ctx->pc = 0x2B9AF0u;
label_2b9af0:
    // 0x2b9af0: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b9af0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b9af4:
    // 0x2b9af4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9af4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9af8:
    // 0x2b9af8: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9af8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B9AF8 raw=0x01FA0005");
 /* MITIGATED */
label_2b9afc:
    // 0x2b9afc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9afcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9b00:
    // 0x2b9b00: 0x100200a6  beq         $zero, $v0, . + 4 + (0xA6 << 2)
label_2b9b04:
    if (ctx->pc == 0x2B9B04u) {
        ctx->pc = 0x2B9B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B00u;
        // 0x2b9b04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9B08u;
        goto label_2b9b08;
    }
    ctx->pc = 0x2B9B00u;
    {
        const bool branch_taken_0x2b9b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B9B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B00u;
        // 0x2b9b04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9b00) {
            ctx->pc = 0x2B9D9Cu;
            goto label_2b9d9c;
        }
    }
    ctx->pc = 0x2B9B08u;
label_2b9b08:
    // 0x2b9b08: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2b9b0c:
    if (ctx->pc == 0x2B9B0Cu) {
        ctx->pc = 0x2B9B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B08u;
        // 0x2b9b0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9B10u;
        goto label_2b9b10;
    }
    ctx->pc = 0x2B9B08u;
    {
        const bool branch_taken_0x2b9b08 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B9B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B08u;
        // 0x2b9b0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9b08) {
            ctx->pc = 0x2BBB08u;
            { ctx->pc = 0x2bbb08; return; }
        }
    }
    ctx->pc = 0x2B9B10u;
label_2b9b10:
    // 0x2b9b10: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2b9b14:
    if (ctx->pc == 0x2B9B14u) {
        ctx->pc = 0x2B9B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B10u;
        // 0x2b9b14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9B18u;
        goto label_2b9b18;
    }
    ctx->pc = 0x2B9B10u;
    {
        const bool branch_taken_0x2b9b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B9B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B10u;
        // 0x2b9b14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9b10) {
            ctx->pc = 0x2CFB18u;
            return;
        }
    }
    ctx->pc = 0x2B9B18u;
label_2b9b18:
    // 0x2b9b18: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9b18u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2b9b1c:
    // 0x2b9b1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9b1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9b20:
    // 0x2b9b20: 0xb0b1000  j           func_C2C4000
label_2b9b24:
    if (ctx->pc == 0x2B9B24u) {
        ctx->pc = 0x2B9B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B20u;
        // 0x2b9b24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9B28u;
        goto label_2b9b28;
    }
    ctx->pc = 0x2B9B20u;
    ctx->pc = 0x2B9B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9B20u;
    // 0x2b9b24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2B9B20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B9B28u;
label_2b9b28:
    // 0x2b9b28: 0x90c3000  j           func_430C000
label_2b9b2c:
    if (ctx->pc == 0x2B9B2Cu) {
        ctx->pc = 0x2B9B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B28u;
        // 0x2b9b2c: 0x1e08418  .word       0x01E08418                   # mult        $s0, $t7, $zero # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9B30u;
        goto label_2b9b30;
    }
    ctx->pc = 0x2B9B28u;
    ctx->pc = 0x2B9B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9B28u;
    // 0x2b9b2c: 0x1e08418  .word       0x01E08418                   # mult        $s0, $t7, $zero # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C000u, 0x2B9B28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B9B30u;
label_2b9b30:
    // 0x2b9b30: 0x82e3000  j           func_B8C000
label_2b9b34:
    if (ctx->pc == 0x2B9B34u) {
        ctx->pc = 0x2B9B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B30u;
        // 0x2b9b34: 0x1e08c58  .word       0x01E08C58                   # mult        $s1, $t7, $zero # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9B38u;
        goto label_2b9b38;
    }
    ctx->pc = 0x2B9B30u;
    ctx->pc = 0x2B9B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9B30u;
    // 0x2b9b34: 0x1e08c58  .word       0x01E08C58                   # mult        $s1, $t7, $zero # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0xB8C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB8C000u, 0x2B9B30u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B9B38u;
label_2b9b38:
    // 0x2b9b38: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2b9b3c:
    if (ctx->pc == 0x2B9B3Cu) {
        ctx->pc = 0x2B9B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B38u;
        // 0x2b9b3c: 0x1e09498  .word       0x01E09498                   # mult        $s2, $t7, $zero # 00000480 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9B40u;
        goto label_2b9b40;
    }
    ctx->pc = 0x2B9B38u;
    {
        const bool branch_taken_0x2b9b38 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B9B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B38u;
        // 0x2b9b3c: 0x1e09498  .word       0x01E09498                   # mult        $s2, $t7, $zero # 00000480 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9b38) {
            ctx->pc = 0x2BBB38u;
            { ctx->pc = 0x2bbb38; return; }
        }
    }
    ctx->pc = 0x2B9B40u;
label_2b9b40:
    // 0x2b9b40: 0x10033001  beq         $zero, $v1, . + 4 + (0x3001 << 2)
label_2b9b44:
    if (ctx->pc == 0x2B9B44u) {
        ctx->pc = 0x2B9B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B40u;
        // 0x2b9b44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9B48u;
        goto label_2b9b48;
    }
    ctx->pc = 0x2B9B40u;
    {
        const bool branch_taken_0x2b9b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B9B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B40u;
        // 0x2b9b44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9b40) {
            ctx->pc = 0x2C5B48u;
            { ctx->pc = 0x2c5b48; return; }
        }
    }
    ctx->pc = 0x2B9B48u;
label_2b9b48:
    // 0x2b9b48: 0x10020002  beq         $zero, $v0, . + 4 + (0x2 << 2)
label_2b9b4c:
    if (ctx->pc == 0x2B9B4Cu) {
        ctx->pc = 0x2B9B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B48u;
        // 0x2b9b4c: 0x208428  .word       0x00208428                   # mfsa        $s0 # 00200400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 16, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9B50u;
        goto label_2b9b50;
    }
    ctx->pc = 0x2B9B48u;
    {
        const bool branch_taken_0x2b9b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B9B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B48u;
        // 0x2b9b4c: 0x208428  .word       0x00208428                   # mfsa        $s0 # 00200400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 16, ctx->sa);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9b48) {
            ctx->pc = 0x2B9B54u;
            goto label_2b9b54;
        }
    }
    ctx->pc = 0x2B9B50u;
label_2b9b50:
    // 0x2b9b50: 0x800270b4  lb          $v0, 0x70B4($zero)
    ctx->pc = 0x2b9b50u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x70B4u));
label_2b9b54:
    // 0x2b9b54: 0x208c68  .word       0x00208C68                   # mfsa        $s1 # 00200440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b9b54u;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_2b9b58:
    // 0x2b9b58: 0x800b6334  lb          $t3, 0x6334($zero)
    ctx->pc = 0x2b9b58u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x6334u));
label_2b9b5c:
    // 0x2b9b5c: 0x2094a8  .word       0x002094A8                   # mfsa        $s2 # 00200480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b9b5cu;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_2b9b60:
    // 0x2b9b60: 0x50020002  beql        $zero, $v0, . + 4 + (0x2 << 2)
label_2b9b64:
    if (ctx->pc == 0x2B9B64u) {
        ctx->pc = 0x2B9B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B60u;
        // 0x2b9b64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9B68u;
        goto label_2b9b68;
    }
    ctx->pc = 0x2B9B60u;
    {
        const bool branch_taken_0x2b9b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b9b60) {
            ctx->pc = 0x2B9B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9B60u;
            // 0x2b9b64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9B6Cu;
            goto label_2b9b6c;
        }
    }
    ctx->pc = 0x2B9B68u;
label_2b9b68:
    // 0x2b9b68: 0x800d07f2  lb          $t5, 0x7F2($zero)
    ctx->pc = 0x2b9b68u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x7F2u));
label_2b9b6c:
    // 0x2b9b6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9b6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9b70:
    // 0x2b9b70: 0x100d0003  beq         $zero, $t5, . + 4 + (0x3 << 2)
label_2b9b74:
    if (ctx->pc == 0x2B9B74u) {
        ctx->pc = 0x2B9B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B70u;
        // 0x2b9b74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9B78u;
        goto label_2b9b78;
    }
    ctx->pc = 0x2B9B70u;
    {
        const bool branch_taken_0x2b9b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B9B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B70u;
        // 0x2b9b74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9b70) {
            ctx->pc = 0x2B9B80u;
            goto label_2b9b80;
        }
    }
    ctx->pc = 0x2B9B78u;
label_2b9b78:
    // 0x2b9b78: 0x800c1970  lb          $t4, 0x1970($zero)
    ctx->pc = 0x2b9b78u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x1970u));
label_2b9b7c:
    // 0x2b9b7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9b7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9b80:
    // 0x2b9b80: 0x81f31b7c  lb          $s3, 0x1B7C($t7)
    ctx->pc = 0x2b9b80u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2b9b84:
    // 0x2b9b84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9b84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9b88:
    // 0x2b9b88: 0x1f43000  .word       0x01F43000                   # sll         $a2, $s4, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9b88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 0));
label_2b9b8c:
    // 0x2b9b8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9b8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9b90:
    // 0x2b9b90: 0x800c29b0  lb          $t4, 0x29B0($zero)
    ctx->pc = 0x2b9b90u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x29B0u));
label_2b9b94:
    // 0x2b9b94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9b94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9b98:
    // 0x2b9b98: 0x22000000  addi        $zero, $s0, 0x0
    ctx->pc = 0x2b9b98u;
    // NOP (addi to $zero)
label_2b9b9c:
    // 0x2b9b9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9b9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9ba0:
    // 0x2b9ba0: 0x809e6bfd  lb          $fp, 0x6BFD($a0)
    ctx->pc = 0x2b9ba0u;
    SET_GPR_S32(ctx, 30, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 27645)));
label_2b9ba4:
    // 0x2b9ba4: 0x1f309bc  .word       0x01F309BC                   # dsll32      $at, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9ba4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << (32 + 6));
label_2b9ba8:
    // 0x2b9ba8: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2b9ba8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2b9bac:
    // 0x2b9bac: 0x1f310bd  .word       0x01F310BD                   # INVALID     $t7, $s3, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9bacu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B9BAC raw=0x01F310BD");
 /* MITIGATED */
label_2b9bb0:
    // 0x2b9bb0: 0x800b07b2  lb          $t3, 0x7B2($zero)
    ctx->pc = 0x2b9bb0u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x7B2u));
label_2b9bb4:
    // 0x2b9bb4: 0x1f318be  .word       0x01F318BE                   # dsrl32      $v1, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (32 + 2));
label_2b9bb8:
    // 0x2b9bb8: 0x800a07b2  lb          $t2, 0x7B2($zero)
    ctx->pc = 0x2b9bb8u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x7B2u));
label_2b9bbc:
    // 0x2b9bbc: 0x1e0254b  .word       0x01E0254B                   # movn        $a0, $t7, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9bbcu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
label_2b9bc0:
    // 0x2b9bc0: 0x800907b2  lb          $t1, 0x7B2($zero)
    ctx->pc = 0x2b9bc0u;
    SET_GPR_S32(ctx, 9, (int8_t)FAST_READ8(0x7B2u));
label_2b9bc4:
    // 0x2b9bc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9bc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9bc8:
    // 0x2b9bc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9bc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9bcc:
    // 0x2b9bcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9bccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9bd0:
    // 0x2b9bd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9bd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9bd4:
    // 0x2b9bd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9bd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9bd8:
    // 0x2b9bd8: 0x81f503bc  lb          $s5, 0x3BC($t7)
    ctx->pc = 0x2b9bd8u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2b9bdc:
    // 0x2b9bdc: 0x1f361bc  .word       0x01F361BC                   # dsll32      $t4, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9bdcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 19) << (32 + 6));
label_2b9be0:
    // 0x2b9be0: 0x81f08b3c  lb          $s0, -0x74C4($t7)
    ctx->pc = 0x2b9be0u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937404)));
label_2b9be4:
    // 0x2b9be4: 0x1f368bd  .word       0x01F368BD                   # INVALID     $t7, $s3, 0x68BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9be4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B9BE4 raw=0x01F368BD");
 /* MITIGATED */
label_2b9be8:
    // 0x2b9be8: 0x81f1933c  lb          $s1, -0x6CC4($t7)
    ctx->pc = 0x2b9be8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939452)));
label_2b9bec:
    // 0x2b9bec: 0x1f370be  .word       0x01F370BE                   # dsrl32      $t6, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9becu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) >> (32 + 2));
label_2b9bf0:
    // 0x2b9bf0: 0x81dc2b7c  lb          $gp, 0x2B7C($t6)
    ctx->pc = 0x2b9bf0u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 11132)));
label_2b9bf4:
    // 0x2b9bf4: 0x1e07c8b  .word       0x01E07C8B                   # movn        $t7, $t7, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9bf4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 15));
label_2b9bf8:
    // 0x2b9bf8: 0x8054033d  lb          $s4, 0x33D($v0)
    ctx->pc = 0x2b9bf8u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2b9bfc:
    // 0x2b9bfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9bfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9c00:
    // 0x2b9c00: 0x8194337c  lb          $s4, 0x337C($t4)
    ctx->pc = 0x2b9c00u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 13180)));
label_2b9c04:
    // 0x2b9c04: 0x1d081ff  .word       0x01D081FF                   # dsra32      $s0, $s0, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9c04u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 7));
label_2b9c08:
    // 0x2b9c08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9c08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9c0c:
    // 0x2b9c0c: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9c0cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2b9c10:
    // 0x2b9c10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9c10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9c14:
    // 0x2b9c14: 0x20f561  .word       0x0020F561                   # addu        $fp, $at, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9c14u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2b9c18:
    // 0x2b9c18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9c18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9c1c:
    // 0x2b9c1c: 0x1c0afdc  .word       0x01C0AFDC                   # dmult       $t6, $zero # 0000AFC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9c1cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B9C1C raw=0x01C0AFDC");
 /* MITIGATED */
label_2b9c20:
    // 0x2b9c20: 0x81f31b7c  lb          $s3, 0x1B7C($t7)
    ctx->pc = 0x2b9c20u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2b9c24:
    // 0x2b9c24: 0x1cbe72a  .word       0x01CBE72A                   # slt         $gp, $t6, $t3 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9c24u;
    SET_GPR_U64(ctx, 28, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_2b9c28:
    // 0x2b9c28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9c28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9c2c:
    // 0x2b9c2c: 0x1c0a51c  .word       0x01C0A51C                   # dmult       $t6, $zero # 0000A500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9c2cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B9C2C raw=0x01C0A51C");
 /* MITIGATED */
label_2b9c30:
    // 0x2b9c30: 0x800a0270  lb          $t2, 0x270($zero)
    ctx->pc = 0x2b9c30u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x270u));
label_2b9c34:
    // 0x2b9c34: 0x1d189ff  .word       0x01D189FF                   # dsra32      $s1, $s1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9c34u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 7));
label_2b9c38:
    // 0x2b9c38: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2b9c38u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2b9c3c:
    // 0x2b9c3c: 0x20afdf  .word       0x0020AFDF                   # ddivu       $s5, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9c3cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2B9C3C raw=0x0020AFDF");
 /* MITIGATED */
label_2b9c40:
    // 0x2b9c40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9c40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9c44:
    // 0x2b9c44: 0x1e0e71f  .word       0x01E0E71F                   # ddivu       $gp, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9c44u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2B9C44 raw=0x01E0E71F");
 /* MITIGATED */
label_2b9c48:
    // 0x2b9c48: 0x3e7a000  .word       0x03E7A000                   # sll         $s4, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9c48u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2b9c4c:
    // 0x2b9c4c: 0x1d291ff  .word       0x01D291FF                   # dsra32      $s2, $s2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9c4cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 7));
label_2b9c50:
    // 0x2b9c50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9c50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9c54:
    // 0x2b9c54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9c54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9c58:
    // 0x2b9c58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9c58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9c5c:
    // 0x2b9c5c: 0x20ffd0  .word       0x0020FFD0                   # mfhi        $ra # 002007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9c5cu;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_2b9c60:
    // 0x2b9c60: 0x800c67f2  lb          $t4, 0x67F2($zero)
    ctx->pc = 0x2b9c60u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x67F2u));
label_2b9c64:
    // 0x2b9c64: 0x1fce17c  .word       0x01FCE17C                   # dsll32      $gp, $gp, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9c64u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 28) << (32 + 5));
label_2b9c68:
    // 0x2b9c68: 0x2400003f  addiu       $zero, $zero, 0x3F
    ctx->pc = 0x2b9c68u;
    // NOP (addiu $zero, ...)
label_2b9c6c:
    // 0x2b9c6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9c6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9c70:
    // 0x2b9c70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9c70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9c74:
    // 0x2b9c74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9c74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9c78:
    // 0x2b9c78: 0x2275801  .word       0x02275801                   # INVALID     $s1, $a3, 0x5801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9c78u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B9C78 raw=0x02275801");
 /* MITIGATED */
label_2b9c7c:
    // 0x2b9c7c: 0x1f5f97d  .word       0x01F5F97D                   # INVALID     $t7, $s5, -0x683 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9c7cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B9C7C raw=0x01F5F97D");
 /* MITIGATED */
label_2b9c80:
    // 0x2b9c80: 0x3c7e001  .word       0x03C7E001                   # INVALID     $fp, $a3, -0x1FFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9c80u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B9C80 raw=0x03C7E001");
 /* MITIGATED */
label_2b9c84:
    // 0x2b9c84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9c84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9c88:
    // 0x2b9c88: 0x800d6ff2  lb          $t5, 0x6FF2($zero)
    ctx->pc = 0x2b9c88u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x6FF2u));
label_2b9c8c:
    // 0x2b9c8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9c8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9c90:
    // 0x2b9c90: 0x800102f0  lb          $at, 0x2F0($zero)
    ctx->pc = 0x2b9c90u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2F0u));
label_2b9c94:
    // 0x2b9c94: 0x1f309bc  .word       0x01F309BC                   # dsll32      $at, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9c94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << (32 + 6));
label_2b9c98:
    // 0x2b9c98: 0x8062abfc  lb          $v0, -0x5404($v1)
    ctx->pc = 0x2b9c98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294945788)));
label_2b9c9c:
    // 0x2b9c9c: 0x1f310bd  .word       0x01F310BD                   # INVALID     $t7, $s3, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9c9cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B9C9C raw=0x01F310BD");
 /* MITIGATED */
label_2b9ca0:
    // 0x2b9ca0: 0x3e7a802  .word       0x03E7A802                   # srl         $s5, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9ca0u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 7), 0));
label_2b9ca4:
    // 0x2b9ca4: 0x1f318be  .word       0x01F318BE                   # dsrl32      $v1, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (32 + 2));
label_2b9ca8:
    // 0x2b9ca8: 0x5a006806  blezl       $s0, . + 4 + (0x6806 << 2)
label_2b9cac:
    if (ctx->pc == 0x2B9CACu) {
        ctx->pc = 0x2B9CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CA8u;
        // 0x2b9cac: 0x1e0254b  .word       0x01E0254B                   # movn        $a0, $t7, $zero # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9CB0u;
        goto label_2b9cb0;
    }
    ctx->pc = 0x2B9CA8u;
    {
        const bool branch_taken_0x2b9ca8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b9ca8) {
            ctx->pc = 0x2B9CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9CA8u;
            // 0x2b9cac: 0x1e0254b  .word       0x01E0254B                   # movn        $a0, $t7, $zero # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3CC4u;
            return;
        }
    }
    ctx->pc = 0x2B9CB0u;
label_2b9cb0:
    // 0x2b9cb0: 0x10073803  beq         $zero, $a3, . + 4 + (0x3803 << 2)
label_2b9cb4:
    if (ctx->pc == 0x2B9CB4u) {
        ctx->pc = 0x2B9CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CB0u;
        // 0x2b9cb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9CB8u;
        goto label_2b9cb8;
    }
    ctx->pc = 0x2B9CB0u;
    {
        const bool branch_taken_0x2b9cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B9CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CB0u;
        // 0x2b9cb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9cb0) {
            ctx->pc = 0x2C7CC0u;
            { ctx->pc = 0x2c7cc0; return; }
        }
    }
    ctx->pc = 0x2B9CB8u;
label_2b9cb8:
    // 0x2b9cb8: 0x800a4a70  lb          $t2, 0x4A70($zero)
    ctx->pc = 0x2b9cb8u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x4A70u));
label_2b9cbc:
    // 0x2b9cbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9cbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9cc0:
    // 0x2b9cc0: 0x800b4a70  lb          $t3, 0x4A70($zero)
    ctx->pc = 0x2b9cc0u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x4A70u));
label_2b9cc4:
    // 0x2b9cc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9cc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9cc8:
    // 0x2b9cc8: 0x802df3fc  lb          $t5, -0xC04($at)
    ctx->pc = 0x2b9cc8u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964220)));
label_2b9ccc:
    // 0x2b9ccc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9cccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9cd0:
    // 0x2b9cd0: 0x5a004813  blezl       $s0, . + 4 + (0x4813 << 2)
label_2b9cd4:
    if (ctx->pc == 0x2B9CD4u) {
        ctx->pc = 0x2B9CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CD0u;
        // 0x2b9cd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9CD8u;
        goto label_2b9cd8;
    }
    ctx->pc = 0x2B9CD0u;
    {
        const bool branch_taken_0x2b9cd0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b9cd0) {
            ctx->pc = 0x2B9CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9CD0u;
            // 0x2b9cd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBD20u;
            { ctx->pc = 0x2cbd20; return; }
        }
    }
    ctx->pc = 0x2B9CD8u;
label_2b9cd8:
    // 0x2b9cd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9cd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9cdc:
    // 0x2b9cdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9cdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9ce0:
    // 0x2b9ce0: 0x520c07de  beql        $s0, $t4, . + 4 + (0x7DE << 2)
label_2b9ce4:
    if (ctx->pc == 0x2B9CE4u) {
        ctx->pc = 0x2B9CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CE0u;
        // 0x2b9ce4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9CE8u;
        goto label_2b9ce8;
    }
    ctx->pc = 0x2B9CE0u;
    {
        const bool branch_taken_0x2b9ce0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        if (branch_taken_0x2b9ce0) {
            ctx->pc = 0x2B9CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9CE0u;
            // 0x2b9ce4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BBC5Cu;
            { ctx->pc = 0x2bbc5c; return; }
        }
    }
    ctx->pc = 0x2B9CE8u;
label_2b9ce8:
    // 0x2b9ce8: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b9ce8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b9cec:
    // 0x2b9cec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9cecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9cf0:
    // 0x2b9cf0: 0x9041005  j           func_4104014
label_2b9cf4:
    if (ctx->pc == 0x2B9CF4u) {
        ctx->pc = 0x2B9CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CF0u;
        // 0x2b9cf4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9CF8u;
        goto label_2b9cf8;
    }
    ctx->pc = 0x2B9CF0u;
    ctx->pc = 0x2B9CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9CF0u;
    // 0x2b9cf4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4104014u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4104014u, 0x2B9CF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B9CF8u;
label_2b9cf8:
    // 0x2b9cf8: 0x88e1005  j           func_2384014
label_2b9cfc:
    if (ctx->pc == 0x2B9CFCu) {
        ctx->pc = 0x2B9CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CF8u;
        // 0x2b9cfc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9D00u;
        goto label_2b9d00;
    }
    ctx->pc = 0x2B9CF8u;
    ctx->pc = 0x2B9CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9CF8u;
    // 0x2b9cfc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2384014u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2384014u, 0x2B9CF8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B9D00u;
label_2b9d00:
    // 0x2b9d00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9d00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9d04:
    // 0x2b9d04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9d04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9d08:
    // 0x2b9d08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9d08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9d0c:
    // 0x2b9d0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9d0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9d10:
    // 0x2b9d10: 0x12042001  beq         $s0, $a0, . + 4 + (0x2001 << 2)
label_2b9d14:
    if (ctx->pc == 0x2B9D14u) {
        ctx->pc = 0x2B9D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D10u;
        // 0x2b9d14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9D18u;
        goto label_2b9d18;
    }
    ctx->pc = 0x2B9D10u;
    {
        const bool branch_taken_0x2b9d10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B9D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D10u;
        // 0x2b9d14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9d10) {
            ctx->pc = 0x2C1D18u;
            { ctx->pc = 0x2c1d18; return; }
        }
    }
    ctx->pc = 0x2B9D18u;
label_2b9d18:
    // 0x2b9d18: 0xb041005  j           func_C104014
label_2b9d1c:
    if (ctx->pc == 0x2B9D1Cu) {
        ctx->pc = 0x2B9D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D18u;
        // 0x2b9d1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9D20u;
        goto label_2b9d20;
    }
    ctx->pc = 0x2B9D18u;
    ctx->pc = 0x2B9D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9D18u;
    // 0x2b9d1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC104014u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC104014u, 0x2B9D18u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B9D20u;
label_2b9d20:
    // 0x2b9d20: 0x5a0027c0  blezl       $s0, . + 4 + (0x27C0 << 2)
label_2b9d24:
    if (ctx->pc == 0x2B9D24u) {
        ctx->pc = 0x2B9D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D20u;
        // 0x2b9d24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9D28u;
        goto label_2b9d28;
    }
    ctx->pc = 0x2B9D20u;
    {
        const bool branch_taken_0x2b9d20 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b9d20) {
            ctx->pc = 0x2B9D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9D20u;
            // 0x2b9d24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3C24u;
            { ctx->pc = 0x2c3c24; return; }
        }
    }
    ctx->pc = 0x2B9D28u;
label_2b9d28:
    // 0x2b9d28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9d28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9d2c:
    // 0x2b9d2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9d2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9d30:
    // 0x2b9d30: 0x500e0003  beql        $zero, $t6, . + 4 + (0x3 << 2)
label_2b9d34:
    if (ctx->pc == 0x2B9D34u) {
        ctx->pc = 0x2B9D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D30u;
        // 0x2b9d34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9D38u;
        goto label_2b9d38;
    }
    ctx->pc = 0x2B9D30u;
    {
        const bool branch_taken_0x2b9d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        if (branch_taken_0x2b9d30) {
            ctx->pc = 0x2B9D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9D30u;
            // 0x2b9d34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9D40u;
            goto label_2b9d40;
        }
    }
    ctx->pc = 0x2B9D38u;
label_2b9d38:
    // 0x2b9d38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9d38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9d3c:
    // 0x2b9d3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9d3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9d40:
    // 0x2b9d40: 0x400001ae  .word       0x400001AE                   # mfc0        $zero, Index # 000001AE <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b9d40u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b9d44:
    // 0x2b9d44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9d44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9d48:
    // 0x2b9d48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9d48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9d4c:
    // 0x2b9d4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9d4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9d50:
    // 0x2b9d50: 0x100210ca  beq         $zero, $v0, . + 4 + (0x10CA << 2)
label_2b9d54:
    if (ctx->pc == 0x2B9D54u) {
        ctx->pc = 0x2B9D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D50u;
        // 0x2b9d54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9D58u;
        goto label_2b9d58;
    }
    ctx->pc = 0x2B9D50u;
    {
        const bool branch_taken_0x2b9d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B9D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D50u;
        // 0x2b9d54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9d50) {
            ctx->pc = 0x2BE07Cu;
            { ctx->pc = 0x2be07c; return; }
        }
    }
    ctx->pc = 0x2B9D58u;
label_2b9d58:
    // 0x2b9d58: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2b9d58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2b9d5c:
    // 0x2b9d5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9d5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9d60:
    // 0x2b9d60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9d60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9d64:
    // 0x2b9d64: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b9d64u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b9d68:
    // 0x2b9d68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9d68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9d6c:
    // 0x2b9d6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9d6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9d70:
    // 0x2b9d70: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2b9d70u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2b9d74:
    // 0x2b9d74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9d74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9d78:
    // 0x2b9d78: 0x88e0805  j           func_2382014
label_2b9d7c:
    if (ctx->pc == 0x2B9D7Cu) {
        ctx->pc = 0x2B9D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D78u;
        // 0x2b9d7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9D80u;
        goto label_2b9d80;
    }
    ctx->pc = 0x2B9D78u;
    ctx->pc = 0x2B9D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9D78u;
    // 0x2b9d7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2382014u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2382014u, 0x2B9D78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B9D80u;
label_2b9d80:
    // 0x2b9d80: 0x24010410  addiu       $at, $zero, 0x410
    ctx->pc = 0x2b9d80u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
label_2b9d84:
    // 0x2b9d84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9d84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9d88:
    // 0x2b9d88: 0x52010030  beql        $s0, $at, . + 4 + (0x30 << 2)
label_2b9d8c:
    if (ctx->pc == 0x2B9D8Cu) {
        ctx->pc = 0x2B9D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D88u;
        // 0x2b9d8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9D90u;
        goto label_2b9d90;
    }
    ctx->pc = 0x2B9D88u;
    {
        const bool branch_taken_0x2b9d88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b9d88) {
            ctx->pc = 0x2B9D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9D88u;
            // 0x2b9d8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9E4Cu;
            goto label_2b9e4c;
        }
    }
    ctx->pc = 0x2B9D90u;
label_2b9d90:
    // 0x2b9d90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9d90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9d94:
    // 0x2b9d94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9d94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9d98:
    // 0x2b9d98: 0x26fdf7df  addiu       $sp, $s7, -0x821
    ctx->pc = 0x2b9d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 23), 4294965215));
label_2b9d9c:
    // 0x2b9d9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9d9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9da0:
    // 0x2b9da0: 0x5201002d  beql        $s0, $at, . + 4 + (0x2D << 2)
label_2b9da4:
    if (ctx->pc == 0x2B9DA4u) {
        ctx->pc = 0x2B9DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9DA0u;
        // 0x2b9da4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9DA8u;
        goto label_2b9da8;
    }
    ctx->pc = 0x2B9DA0u;
    {
        const bool branch_taken_0x2b9da0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b9da0) {
            ctx->pc = 0x2B9DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9DA0u;
            // 0x2b9da4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9E58u;
            goto label_2b9e58;
        }
    }
    ctx->pc = 0x2B9DA8u;
label_2b9da8:
    // 0x2b9da8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9da8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9dac:
    // 0x2b9dac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9dacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9db0:
    // 0x2b9db0: 0x26ff7df7  addiu       $ra, $s7, 0x7DF7
    ctx->pc = 0x2b9db0u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 32247));
label_2b9db4:
    // 0x2b9db4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9db4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9db8:
    // 0x2b9db8: 0x5201002a  beql        $s0, $at, . + 4 + (0x2A << 2)
label_2b9dbc:
    if (ctx->pc == 0x2B9DBCu) {
        ctx->pc = 0x2B9DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9DB8u;
        // 0x2b9dbc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9DC0u;
        goto label_2b9dc0;
    }
    ctx->pc = 0x2B9DB8u;
    {
        const bool branch_taken_0x2b9db8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b9db8) {
            ctx->pc = 0x2B9DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9DB8u;
            // 0x2b9dbc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9E64u;
            goto label_2b9e64;
        }
    }
    ctx->pc = 0x2B9DC0u;
label_2b9dc0:
    // 0x2b9dc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9dc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9dc4:
    // 0x2b9dc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9dc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9dc8:
    // 0x2b9dc8: 0x26ffbefb  addiu       $ra, $s7, -0x4105
    ctx->pc = 0x2b9dc8u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294950651));
label_2b9dcc:
    // 0x2b9dcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9dccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9dd0:
    // 0x2b9dd0: 0x52010027  beql        $s0, $at, . + 4 + (0x27 << 2)
label_2b9dd4:
    if (ctx->pc == 0x2B9DD4u) {
        ctx->pc = 0x2B9DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9DD0u;
        // 0x2b9dd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9DD8u;
        goto label_2b9dd8;
    }
    ctx->pc = 0x2B9DD0u;
    {
        const bool branch_taken_0x2b9dd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b9dd0) {
            ctx->pc = 0x2B9DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9DD0u;
            // 0x2b9dd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9E70u;
            goto label_2b9e70;
        }
    }
    ctx->pc = 0x2B9DD8u;
label_2b9dd8:
    // 0x2b9dd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9dd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9ddc:
    // 0x2b9ddc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9ddcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9de0:
    // 0x2b9de0: 0x26ffdf7d  addiu       $ra, $s7, -0x2083
    ctx->pc = 0x2b9de0u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294958973));
label_2b9de4:
    // 0x2b9de4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9de4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9de8:
    // 0x2b9de8: 0x52010024  beql        $s0, $at, . + 4 + (0x24 << 2)
label_2b9dec:
    if (ctx->pc == 0x2B9DECu) {
        ctx->pc = 0x2B9DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9DE8u;
        // 0x2b9dec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9DF0u;
        goto label_2b9df0;
    }
    ctx->pc = 0x2B9DE8u;
    {
        const bool branch_taken_0x2b9de8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b9de8) {
            ctx->pc = 0x2B9DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9DE8u;
            // 0x2b9dec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9E7Cu;
            goto label_2b9e7c;
        }
    }
    ctx->pc = 0x2B9DF0u;
label_2b9df0:
    // 0x2b9df0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9df0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9df4:
    // 0x2b9df4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9df4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9df8:
    // 0x2b9df8: 0x26ffefbe  addiu       $ra, $s7, -0x1042
    ctx->pc = 0x2b9df8u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294963134));
label_2b9dfc:
    // 0x2b9dfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9dfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9e00:
    // 0x2b9e00: 0x52010021  beql        $s0, $at, . + 4 + (0x21 << 2)
label_2b9e04:
    if (ctx->pc == 0x2B9E04u) {
        ctx->pc = 0x2B9E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E00u;
        // 0x2b9e04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9E08u;
        goto label_2b9e08;
    }
    ctx->pc = 0x2B9E00u;
    {
        const bool branch_taken_0x2b9e00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b9e00) {
            ctx->pc = 0x2B9E04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9E00u;
            // 0x2b9e04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9E88u;
            goto label_2b9e88;
        }
    }
    ctx->pc = 0x2B9E08u;
label_2b9e08:
    // 0x2b9e08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9e08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9e0c:
    // 0x2b9e0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9e0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9e10:
    // 0x2b9e10: 0x120f704b  beq         $s0, $t7, . + 4 + (0x704B << 2)
label_2b9e14:
    if (ctx->pc == 0x2B9E14u) {
        ctx->pc = 0x2B9E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E10u;
        // 0x2b9e14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9E18u;
        goto label_2b9e18;
    }
    ctx->pc = 0x2B9E10u;
    {
        const bool branch_taken_0x2b9e10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        ctx->pc = 0x2B9E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E10u;
        // 0x2b9e14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9e10) {
            ctx->pc = 0x2D5F40u;
            return;
        }
    }
    ctx->pc = 0x2B9E18u;
label_2b9e18:
    // 0x2b9e18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9e18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9e1c:
    // 0x2b9e1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9e1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9e20:
    // 0x2b9e20: 0x5a007816  blezl       $s0, . + 4 + (0x7816 << 2)
label_2b9e24:
    if (ctx->pc == 0x2B9E24u) {
        ctx->pc = 0x2B9E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E20u;
        // 0x2b9e24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9E28u;
        goto label_2b9e28;
    }
    ctx->pc = 0x2B9E20u;
    {
        const bool branch_taken_0x2b9e20 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b9e20) {
            ctx->pc = 0x2B9E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9E20u;
            // 0x2b9e24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7E7Cu;
            return;
        }
    }
    ctx->pc = 0x2B9E28u;
label_2b9e28:
    // 0x2b9e28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9e28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9e2c:
    // 0x2b9e2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9e2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9e30:
    // 0x2b9e30: 0x100f7012  beq         $zero, $t7, . + 4 + (0x7012 << 2)
label_2b9e34:
    if (ctx->pc == 0x2B9E34u) {
        ctx->pc = 0x2B9E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E30u;
        // 0x2b9e34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9E38u;
        goto label_2b9e38;
    }
    ctx->pc = 0x2B9E30u;
    {
        const bool branch_taken_0x2b9e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 15));
        ctx->pc = 0x2B9E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E30u;
        // 0x2b9e34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9e30) {
            ctx->pc = 0x2D5E7Cu;
            return;
        }
    }
    ctx->pc = 0x2B9E38u;
label_2b9e38:
    // 0x2b9e38: 0x1f637fd  .word       0x01F637FD                   # INVALID     $t7, $s6, 0x37FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9e38u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B9E38 raw=0x01F637FD");
 /* MITIGATED */
label_2b9e3c:
    // 0x2b9e3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9e3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9e40:
    // 0x2b9e40: 0x1f737fe  .word       0x01F737FE                   # dsrl32      $a2, $s7, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9e40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) >> (32 + 31));
label_2b9e44:
    // 0x2b9e44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9e44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9e48:
    // 0x2b9e48: 0x1f837ff  .word       0x01F837FF                   # dsra32      $a2, $t8, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9e48u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 24) >> (32 + 31));
label_2b9e4c:
    // 0x2b9e4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9e4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9e50:
    // 0x2b9e50: 0x1f93ff8  .word       0x01F93FF8                   # dsll        $a3, $t9, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9e50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 25) << 31);
label_2b9e54:
    // 0x2b9e54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9e54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9e58:
    // 0x2b9e58: 0x1fb3ffb  .word       0x01FB3FFB                   # dsra        $a3, $k1, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9e58u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 27) >> 31);
label_2b9e5c:
    // 0x2b9e5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9e5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9e60:
    // 0x2b9e60: 0x1fc3ffe  .word       0x01FC3FFE                   # dsrl32      $a3, $gp, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9e60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 28) >> (32 + 31));
label_2b9e64:
    // 0x2b9e64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9e64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9e68:
    // 0x2b9e68: 0x3efb002  .word       0x03EFB002                   # srl         $s6, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9e68u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 15), 0));
label_2b9e6c:
    // 0x2b9e6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9e6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9e70:
    // 0x2b9e70: 0x3efb805  .word       0x03EFB805                   # INVALID     $ra, $t7, -0x47FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9e70u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B9E70 raw=0x03EFB805");
 /* MITIGATED */
label_2b9e74:
    // 0x2b9e74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9e74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9e78:
    // 0x2b9e78: 0x3efc008  .word       0x03EFC008                   # jr          $ra # 000FC000 <InstrIdType: CPU_SPECIAL>
label_2b9e7c:
    if (ctx->pc == 0x2B9E7Cu) {
        ctx->pc = 0x2B9E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E78u;
        // 0x2b9e7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9E80u;
        goto label_2b9e80;
    }
    ctx->pc = 0x2B9E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E78u;
        // 0x2b9e7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9E80u;
label_2b9e80:
    // 0x2b9e80: 0x3ef8000  .word       0x03EF8000                   # sll         $s0, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9e80u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 15), 0));
label_2b9e84:
    // 0x2b9e84: 0x1f9c93c  .word       0x01F9C93C                   # dsll32      $t9, $t9, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9e84u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << (32 + 4));
label_2b9e88:
    // 0x2b9e88: 0x3ef8803  .word       0x03EF8803                   # sra         $s1, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9e88u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 15), 0));
label_2b9e8c:
    // 0x2b9e8c: 0x1fbd93c  .word       0x01FBD93C                   # dsll32      $k1, $k1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9e8cu;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 27) << (32 + 4));
label_2b9e90:
    // 0x2b9e90: 0x3ef9006  srlv        $s2, $t7, $ra
    ctx->pc = 0x2b9e90u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2b9e94:
    // 0x2b9e94: 0x1fce13c  .word       0x01FCE13C                   # dsll32      $gp, $gp, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9e94u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 28) << (32 + 4));
label_2b9e98:
    // 0x2b9e98: 0x3efc801  .word       0x03EFC801                   # INVALID     $ra, $t7, -0x37FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9e98u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B9E98 raw=0x03EFC801");
 /* MITIGATED */
label_2b9e9c:
    // 0x2b9e9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9e9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9ea0:
    // 0x2b9ea0: 0x3efd804  sllv        $k1, $t7, $ra
    ctx->pc = 0x2b9ea0u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2b9ea4:
    // 0x2b9ea4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9ea4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9ea8:
    // 0x2b9ea8: 0x3efe007  srav        $gp, $t7, $ra
    ctx->pc = 0x2b9ea8u;
    SET_GPR_S32(ctx, 28, SRA32(GPR_S32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2b9eac:
    // 0x2b9eac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9eacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9eb0:
    // 0x2b9eb0: 0x100e7009  beq         $zero, $t6, . + 4 + (0x7009 << 2)
label_2b9eb4:
    if (ctx->pc == 0x2B9EB4u) {
        ctx->pc = 0x2B9EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9EB0u;
        // 0x2b9eb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9EB8u;
        goto label_2b9eb8;
    }
    ctx->pc = 0x2B9EB0u;
    {
        const bool branch_taken_0x2b9eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B9EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9EB0u;
        // 0x2b9eb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9eb0) {
            ctx->pc = 0x2D5ED8u;
            return;
        }
    }
    ctx->pc = 0x2B9EB8u;
label_2b9eb8:
    // 0x2b9eb8: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2b9eb8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2b9ebc:
    // 0x2b9ebc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9ebcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9ec0:
    // 0x2b9ec0: 0xa8e0805  j           func_A382014
label_2b9ec4:
    if (ctx->pc == 0x2B9EC4u) {
        ctx->pc = 0x2B9EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9EC0u;
        // 0x2b9ec4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9EC8u;
        goto label_2b9ec8;
    }
    ctx->pc = 0x2B9EC0u;
    ctx->pc = 0x2B9EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9EC0u;
    // 0x2b9ec4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA382014u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA382014u, 0x2B9EC0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B9EC8u;
label_2b9ec8:
    // 0x2b9ec8: 0x40000008  .word       0x40000008                   # mfc0        $zero, Index # 00000008 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b9ec8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b9ecc:
    // 0x2b9ecc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9eccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9ed0:
    // 0x2b9ed0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9ed0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9ed4:
    // 0x2b9ed4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9ed4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9ed8:
    // 0x2b9ed8: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2b9ed8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2b9edc:
    // 0x2b9edc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9edcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9ee0:
    // 0x2b9ee0: 0x420f0009  .word       0x420F0009                   # INVALID     $s0, $t7, 0x9 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b9ee0u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x9 at 0x2B9EE0 raw=0x420F0009");
 /* MITIGATED */
label_2b9ee4:
    // 0x2b9ee4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9ee4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9ee8:
    // 0x2b9ee8: 0x100e00db  beq         $zero, $t6, . + 4 + (0xDB << 2)
label_2b9eec:
    if (ctx->pc == 0x2B9EECu) {
        ctx->pc = 0x2B9EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9EE8u;
        // 0x2b9eec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9EF0u;
        goto label_2b9ef0;
    }
    ctx->pc = 0x2B9EE8u;
    {
        const bool branch_taken_0x2b9ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B9EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9EE8u;
        // 0x2b9eec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9ee8) {
            ctx->pc = 0x2BA258u;
            { ctx->pc = 0x2ba258; return; }
        }
    }
    ctx->pc = 0x2B9EF0u;
label_2b9ef0:
    // 0x2b9ef0: 0x420f0040  .word       0x420F0040                   # INVALID     $s0, $t7, 0x40 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b9ef0u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x2B9EF0 raw=0x420F0040");
 /* MITIGATED */
label_2b9ef4:
    // 0x2b9ef4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9ef4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9ef8:
    // 0x2b9ef8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9ef8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9efc:
    // 0x2b9efc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9efcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9f00:
    // 0x2b9f00: 0x420f001b  .word       0x420F001B                   # INVALID     $s0, $t7, 0x1B # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b9f00u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1B at 0x2B9F00 raw=0x420F001B");
 /* MITIGATED */
label_2b9f04:
    // 0x2b9f04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9f04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9f08:
    // 0x2b9f08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9f08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9f0c:
    // 0x2b9f0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9f0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9f10:
    // 0x2b9f10: 0x11e117ff  beq         $t7, $at, . + 4 + (0x17FF << 2)
label_2b9f14:
    if (ctx->pc == 0x2B9F14u) {
        ctx->pc = 0x2B9F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F10u;
        // 0x2b9f14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9F18u;
        goto label_2b9f18;
    }
    ctx->pc = 0x2B9F10u;
    {
        const bool branch_taken_0x2b9f10 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 1));
        ctx->pc = 0x2B9F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F10u;
        // 0x2b9f14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9f10) {
            ctx->pc = 0x2BFF10u;
            { ctx->pc = 0x2bff10; return; }
        }
    }
    ctx->pc = 0x2B9F18u;
label_2b9f18:
    // 0x2b9f18: 0x80010872  lb          $at, 0x872($zero)
    ctx->pc = 0x2b9f18u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x872u));
label_2b9f1c:
    // 0x2b9f1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9f1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9f20:
    // 0x2b9f20: 0x400007b7  .word       0x400007B7                   # mfc0        $zero, Index # 000007B7 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b9f20u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b9f24:
    // 0x2b9f24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9f24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9f28:
    // 0x2b9f28: 0xa213fff  j           func_884FFFC
label_2b9f2c:
    if (ctx->pc == 0x2B9F2Cu) {
        ctx->pc = 0x2B9F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F28u;
        // 0x2b9f2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9F30u;
        goto label_2b9f30;
    }
    ctx->pc = 0x2B9F28u;
    ctx->pc = 0x2B9F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9F28u;
    // 0x2b9f2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x884FFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x884FFFCu, 0x2B9F28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B9F30u;
label_2b9f30:
    // 0x2b9f30: 0x81ee837f  lb          $t6, -0x7C81($t7)
    ctx->pc = 0x2b9f30u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935423)));
label_2b9f34:
    // 0x2b9f34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9f34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9f38:
    // 0x2b9f38: 0x81ee8b7f  lb          $t6, -0x7481($t7)
    ctx->pc = 0x2b9f38u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937471)));
label_2b9f3c:
    // 0x2b9f3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9f3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9f40:
    // 0x2b9f40: 0x81ee937f  lb          $t6, -0x6C81($t7)
    ctx->pc = 0x2b9f40u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939519)));
label_2b9f44:
    // 0x2b9f44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9f44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9f48:
    // 0x2b9f48: 0x81ee9b7f  lb          $t6, -0x6481($t7)
    ctx->pc = 0x2b9f48u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941567)));
label_2b9f4c:
    // 0x2b9f4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9f4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9f50:
    // 0x2b9f50: 0x81eeab7f  lb          $t6, -0x5481($t7)
    ctx->pc = 0x2b9f50u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945663)));
label_2b9f54:
    // 0x2b9f54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9f54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9f58:
    // 0x2b9f58: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2b9f5c:
    if (ctx->pc == 0x2B9F5Cu) {
        ctx->pc = 0x2B9F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F58u;
        // 0x2b9f5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9F60u;
        goto label_2b9f60;
    }
    ctx->pc = 0x2B9F58u;
    {
        const bool branch_taken_0x2b9f58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B9F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F58u;
        // 0x2b9f5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9f58) {
            ctx->pc = 0x2D5F60u;
            return;
        }
    }
    ctx->pc = 0x2B9F60u;
label_2b9f60:
    // 0x2b9f60: 0x810273ff  lb          $v0, 0x73FF($t0)
    ctx->pc = 0x2b9f60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2b9f64:
    // 0x2b9f64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9f64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9f68:
    // 0x2b9f68: 0x808373ff  lb          $v1, 0x73FF($a0)
    ctx->pc = 0x2b9f68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2b9f6c:
    // 0x2b9f6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9f6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9f70:
    // 0x2b9f70: 0x804473ff  lb          $a0, 0x73FF($v0)
    ctx->pc = 0x2b9f70u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2b9f74:
    // 0x2b9f74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9f74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9f78:
    // 0x2b9f78: 0x802573ff  lb          $a1, 0x73FF($at)
    ctx->pc = 0x2b9f78u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2b9f7c:
    // 0x2b9f7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9f7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9f80:
    // 0x2b9f80: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2b9f84:
    if (ctx->pc == 0x2B9F84u) {
        ctx->pc = 0x2B9F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F80u;
        // 0x2b9f84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9F88u;
        goto label_2b9f88;
    }
    ctx->pc = 0x2B9F80u;
    {
        const bool branch_taken_0x2b9f80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B9F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F80u;
        // 0x2b9f84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9f80) {
            ctx->pc = 0x2D5F88u;
            return;
        }
    }
    ctx->pc = 0x2B9F88u;
label_2b9f88:
    // 0x2b9f88: 0x810673ff  lb          $a2, 0x73FF($t0)
    ctx->pc = 0x2b9f88u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2b9f8c:
    // 0x2b9f8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9f8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9f90:
    // 0x2b9f90: 0x808773ff  lb          $a3, 0x73FF($a0)
    ctx->pc = 0x2b9f90u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2b9f94:
    // 0x2b9f94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9f94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9f98:
    // 0x2b9f98: 0x804873ff  lb          $t0, 0x73FF($v0)
    ctx->pc = 0x2b9f98u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2b9f9c:
    // 0x2b9f9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9f9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9fa0:
    // 0x2b9fa0: 0x802973ff  lb          $t1, 0x73FF($at)
    ctx->pc = 0x2b9fa0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2b9fa4:
    // 0x2b9fa4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9fa4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9fa8:
    // 0x2b9fa8: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2b9fac:
    if (ctx->pc == 0x2B9FACu) {
        ctx->pc = 0x2B9FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9FA8u;
        // 0x2b9fac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9FB0u;
        goto label_2b9fb0;
    }
    ctx->pc = 0x2B9FA8u;
    {
        const bool branch_taken_0x2b9fa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B9FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9FA8u;
        // 0x2b9fac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9fa8) {
            ctx->pc = 0x2D5FB0u;
            return;
        }
    }
    ctx->pc = 0x2B9FB0u;
label_2b9fb0:
    // 0x2b9fb0: 0x810a73ff  lb          $t2, 0x73FF($t0)
    ctx->pc = 0x2b9fb0u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2b9fb4:
    // 0x2b9fb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9fb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9fb8:
    // 0x2b9fb8: 0x808b73ff  lb          $t3, 0x73FF($a0)
    ctx->pc = 0x2b9fb8u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2b9fbc:
    // 0x2b9fbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9fbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9fc0:
    // 0x2b9fc0: 0x804c73ff  lb          $t4, 0x73FF($v0)
    ctx->pc = 0x2b9fc0u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2b9fc4:
    // 0x2b9fc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9fc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9fc8:
    // 0x2b9fc8: 0x802d73ff  lb          $t5, 0x73FF($at)
    ctx->pc = 0x2b9fc8u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2b9fcc:
    // 0x2b9fcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9fccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9fd0:
    // 0x2b9fd0: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2b9fd0u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2B9FD0 raw=0x48007800");
 /* MITIGATED */
label_2b9fd4:
    // 0x2b9fd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9fd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9fd8:
    // 0x2b9fd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9fd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9fdc:
    // 0x2b9fdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9fdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9fe0:
    // 0x2b9fe0: 0x800f0070  lb          $t7, 0x70($zero)
    ctx->pc = 0x2b9fe0u;
    SET_GPR_S32(ctx, 15, (int8_t)FAST_READ8(0x70u));
label_2b9fe4:
    // 0x2b9fe4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9fe4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9fe8:
    // 0x2b9fe8: 0x810a73fe  lb          $t2, 0x73FE($t0)
    ctx->pc = 0x2b9fe8u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2b9fec:
    // 0x2b9fec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9fecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9ff0:
    // 0x2b9ff0: 0x808b73fe  lb          $t3, 0x73FE($a0)
    ctx->pc = 0x2b9ff0u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2b9ff4:
    // 0x2b9ff4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9ff4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9ff8:
    // 0x2b9ff8: 0x804c73fe  lb          $t4, 0x73FE($v0)
    ctx->pc = 0x2b9ff8u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2b9ffc:
    // 0x2b9ffc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9ffcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba000:
    // 0x2ba000: 0x802d73fe  lb          $t5, 0x73FE($at)
    ctx->pc = 0x2ba000u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2ba004:
    // 0x2ba004: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba004u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba008:
    // 0x2ba008: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2ba00c:
    if (ctx->pc == 0x2BA00Cu) {
        ctx->pc = 0x2BA00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA008u;
        // 0x2ba00c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA010u;
        goto label_2ba010;
    }
    ctx->pc = 0x2BA008u;
    {
        const bool branch_taken_0x2ba008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BA00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA008u;
        // 0x2ba00c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba008) {
            ctx->pc = 0x2D6010u;
            return;
        }
    }
    ctx->pc = 0x2BA010u;
label_2ba010:
    // 0x2ba010: 0x810673fe  lb          $a2, 0x73FE($t0)
    ctx->pc = 0x2ba010u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2ba014:
    // 0x2ba014: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba014u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba018:
    // 0x2ba018: 0x808773fe  lb          $a3, 0x73FE($a0)
    ctx->pc = 0x2ba018u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2ba01c:
    // 0x2ba01c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba01cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x2ba020u;
    return;
}

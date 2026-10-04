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


void FUN_001d49b0_part11(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1d97d0u: goto label_1d97d0;
        case 0x1d97d4u: goto label_1d97d4;
        case 0x1d97d8u: goto label_1d97d8;
        case 0x1d97dcu: goto label_1d97dc;
        case 0x1d97e0u: goto label_1d97e0;
        case 0x1d97e4u: goto label_1d97e4;
        case 0x1d97e8u: goto label_1d97e8;
        case 0x1d97ecu: goto label_1d97ec;
        case 0x1d97f0u: goto label_1d97f0;
        case 0x1d97f4u: goto label_1d97f4;
        case 0x1d97f8u: goto label_1d97f8;
        case 0x1d97fcu: goto label_1d97fc;
        case 0x1d9800u: goto label_1d9800;
        case 0x1d9804u: goto label_1d9804;
        case 0x1d9808u: goto label_1d9808;
        case 0x1d980cu: goto label_1d980c;
        case 0x1d9810u: goto label_1d9810;
        case 0x1d9814u: goto label_1d9814;
        case 0x1d9818u: goto label_1d9818;
        case 0x1d981cu: goto label_1d981c;
        case 0x1d9820u: goto label_1d9820;
        case 0x1d9824u: goto label_1d9824;
        case 0x1d9828u: goto label_1d9828;
        case 0x1d982cu: goto label_1d982c;
        case 0x1d9830u: goto label_1d9830;
        case 0x1d9834u: goto label_1d9834;
        case 0x1d9838u: goto label_1d9838;
        case 0x1d983cu: goto label_1d983c;
        case 0x1d9840u: goto label_1d9840;
        case 0x1d9844u: goto label_1d9844;
        case 0x1d9848u: goto label_1d9848;
        case 0x1d984cu: goto label_1d984c;
        case 0x1d9850u: goto label_1d9850;
        case 0x1d9854u: goto label_1d9854;
        case 0x1d9858u: goto label_1d9858;
        case 0x1d985cu: goto label_1d985c;
        case 0x1d9860u: goto label_1d9860;
        case 0x1d9864u: goto label_1d9864;
        case 0x1d9868u: goto label_1d9868;
        case 0x1d986cu: goto label_1d986c;
        case 0x1d9870u: goto label_1d9870;
        case 0x1d9874u: goto label_1d9874;
        case 0x1d9878u: goto label_1d9878;
        case 0x1d987cu: goto label_1d987c;
        case 0x1d9880u: goto label_1d9880;
        case 0x1d9884u: goto label_1d9884;
        case 0x1d9888u: goto label_1d9888;
        case 0x1d988cu: goto label_1d988c;
        case 0x1d9890u: goto label_1d9890;
        case 0x1d9894u: goto label_1d9894;
        case 0x1d9898u: goto label_1d9898;
        case 0x1d989cu: goto label_1d989c;
        case 0x1d98a0u: goto label_1d98a0;
        case 0x1d98a4u: goto label_1d98a4;
        case 0x1d98a8u: goto label_1d98a8;
        case 0x1d98acu: goto label_1d98ac;
        case 0x1d98b0u: goto label_1d98b0;
        case 0x1d98b4u: goto label_1d98b4;
        case 0x1d98b8u: goto label_1d98b8;
        case 0x1d98bcu: goto label_1d98bc;
        case 0x1d98c0u: goto label_1d98c0;
        case 0x1d98c4u: goto label_1d98c4;
        case 0x1d98c8u: goto label_1d98c8;
        case 0x1d98ccu: goto label_1d98cc;
        case 0x1d98d0u: goto label_1d98d0;
        case 0x1d98d4u: goto label_1d98d4;
        case 0x1d98d8u: goto label_1d98d8;
        case 0x1d98dcu: goto label_1d98dc;
        case 0x1d98e0u: goto label_1d98e0;
        case 0x1d98e4u: goto label_1d98e4;
        case 0x1d98e8u: goto label_1d98e8;
        case 0x1d98ecu: goto label_1d98ec;
        case 0x1d98f0u: goto label_1d98f0;
        case 0x1d98f4u: goto label_1d98f4;
        case 0x1d98f8u: goto label_1d98f8;
        case 0x1d98fcu: goto label_1d98fc;
        case 0x1d9900u: goto label_1d9900;
        case 0x1d9904u: goto label_1d9904;
        case 0x1d9908u: goto label_1d9908;
        case 0x1d990cu: goto label_1d990c;
        case 0x1d9910u: goto label_1d9910;
        case 0x1d9914u: goto label_1d9914;
        case 0x1d9918u: goto label_1d9918;
        case 0x1d991cu: goto label_1d991c;
        case 0x1d9920u: goto label_1d9920;
        case 0x1d9924u: goto label_1d9924;
        case 0x1d9928u: goto label_1d9928;
        case 0x1d992cu: goto label_1d992c;
        case 0x1d9930u: goto label_1d9930;
        case 0x1d9934u: goto label_1d9934;
        case 0x1d9938u: goto label_1d9938;
        case 0x1d993cu: goto label_1d993c;
        case 0x1d9940u: goto label_1d9940;
        case 0x1d9944u: goto label_1d9944;
        case 0x1d9948u: goto label_1d9948;
        case 0x1d994cu: goto label_1d994c;
        case 0x1d9950u: goto label_1d9950;
        case 0x1d9954u: goto label_1d9954;
        case 0x1d9958u: goto label_1d9958;
        case 0x1d995cu: goto label_1d995c;
        case 0x1d9960u: goto label_1d9960;
        case 0x1d9964u: goto label_1d9964;
        case 0x1d9968u: goto label_1d9968;
        case 0x1d996cu: goto label_1d996c;
        case 0x1d9970u: goto label_1d9970;
        case 0x1d9974u: goto label_1d9974;
        case 0x1d9978u: goto label_1d9978;
        case 0x1d997cu: goto label_1d997c;
        case 0x1d9980u: goto label_1d9980;
        case 0x1d9984u: goto label_1d9984;
        case 0x1d9988u: goto label_1d9988;
        case 0x1d998cu: goto label_1d998c;
        case 0x1d9990u: goto label_1d9990;
        case 0x1d9994u: goto label_1d9994;
        case 0x1d9998u: goto label_1d9998;
        case 0x1d999cu: goto label_1d999c;
        case 0x1d99a0u: goto label_1d99a0;
        case 0x1d99a4u: goto label_1d99a4;
        case 0x1d99a8u: goto label_1d99a8;
        case 0x1d99acu: goto label_1d99ac;
        case 0x1d99b0u: goto label_1d99b0;
        case 0x1d99b4u: goto label_1d99b4;
        case 0x1d99b8u: goto label_1d99b8;
        case 0x1d99bcu: goto label_1d99bc;
        case 0x1d99c0u: goto label_1d99c0;
        case 0x1d99c4u: goto label_1d99c4;
        case 0x1d99c8u: goto label_1d99c8;
        case 0x1d99ccu: goto label_1d99cc;
        case 0x1d99d0u: goto label_1d99d0;
        case 0x1d99d4u: goto label_1d99d4;
        case 0x1d99d8u: goto label_1d99d8;
        case 0x1d99dcu: goto label_1d99dc;
        case 0x1d99e0u: goto label_1d99e0;
        case 0x1d99e4u: goto label_1d99e4;
        case 0x1d99e8u: goto label_1d99e8;
        case 0x1d99ecu: goto label_1d99ec;
        case 0x1d99f0u: goto label_1d99f0;
        case 0x1d99f4u: goto label_1d99f4;
        case 0x1d99f8u: goto label_1d99f8;
        case 0x1d99fcu: goto label_1d99fc;
        case 0x1d9a00u: goto label_1d9a00;
        case 0x1d9a04u: goto label_1d9a04;
        case 0x1d9a08u: goto label_1d9a08;
        case 0x1d9a0cu: goto label_1d9a0c;
        case 0x1d9a10u: goto label_1d9a10;
        case 0x1d9a14u: goto label_1d9a14;
        case 0x1d9a18u: goto label_1d9a18;
        case 0x1d9a1cu: goto label_1d9a1c;
        case 0x1d9a20u: goto label_1d9a20;
        case 0x1d9a24u: goto label_1d9a24;
        case 0x1d9a28u: goto label_1d9a28;
        case 0x1d9a2cu: goto label_1d9a2c;
        case 0x1d9a30u: goto label_1d9a30;
        case 0x1d9a34u: goto label_1d9a34;
        case 0x1d9a38u: goto label_1d9a38;
        case 0x1d9a3cu: goto label_1d9a3c;
        case 0x1d9a40u: goto label_1d9a40;
        case 0x1d9a44u: goto label_1d9a44;
        case 0x1d9a48u: goto label_1d9a48;
        case 0x1d9a4cu: goto label_1d9a4c;
        case 0x1d9a50u: goto label_1d9a50;
        case 0x1d9a54u: goto label_1d9a54;
        case 0x1d9a58u: goto label_1d9a58;
        case 0x1d9a5cu: goto label_1d9a5c;
        case 0x1d9a60u: goto label_1d9a60;
        case 0x1d9a64u: goto label_1d9a64;
        case 0x1d9a68u: goto label_1d9a68;
        case 0x1d9a6cu: goto label_1d9a6c;
        case 0x1d9a70u: goto label_1d9a70;
        case 0x1d9a74u: goto label_1d9a74;
        case 0x1d9a78u: goto label_1d9a78;
        case 0x1d9a7cu: goto label_1d9a7c;
        case 0x1d9a80u: goto label_1d9a80;
        case 0x1d9a84u: goto label_1d9a84;
        case 0x1d9a88u: goto label_1d9a88;
        case 0x1d9a8cu: goto label_1d9a8c;
        case 0x1d9a90u: goto label_1d9a90;
        case 0x1d9a94u: goto label_1d9a94;
        case 0x1d9a98u: goto label_1d9a98;
        case 0x1d9a9cu: goto label_1d9a9c;
        case 0x1d9aa0u: goto label_1d9aa0;
        case 0x1d9aa4u: goto label_1d9aa4;
        case 0x1d9aa8u: goto label_1d9aa8;
        case 0x1d9aacu: goto label_1d9aac;
        case 0x1d9ab0u: goto label_1d9ab0;
        case 0x1d9ab4u: goto label_1d9ab4;
        case 0x1d9ab8u: goto label_1d9ab8;
        case 0x1d9abcu: goto label_1d9abc;
        case 0x1d9ac0u: goto label_1d9ac0;
        case 0x1d9ac4u: goto label_1d9ac4;
        case 0x1d9ac8u: goto label_1d9ac8;
        case 0x1d9accu: goto label_1d9acc;
        case 0x1d9ad0u: goto label_1d9ad0;
        case 0x1d9ad4u: goto label_1d9ad4;
        case 0x1d9ad8u: goto label_1d9ad8;
        case 0x1d9adcu: goto label_1d9adc;
        case 0x1d9ae0u: goto label_1d9ae0;
        case 0x1d9ae4u: goto label_1d9ae4;
        case 0x1d9ae8u: goto label_1d9ae8;
        case 0x1d9aecu: goto label_1d9aec;
        case 0x1d9af0u: goto label_1d9af0;
        case 0x1d9af4u: goto label_1d9af4;
        case 0x1d9af8u: goto label_1d9af8;
        case 0x1d9afcu: goto label_1d9afc;
        case 0x1d9b00u: goto label_1d9b00;
        case 0x1d9b04u: goto label_1d9b04;
        case 0x1d9b08u: goto label_1d9b08;
        case 0x1d9b0cu: goto label_1d9b0c;
        case 0x1d9b10u: goto label_1d9b10;
        case 0x1d9b14u: goto label_1d9b14;
        case 0x1d9b18u: goto label_1d9b18;
        case 0x1d9b1cu: goto label_1d9b1c;
        case 0x1d9b20u: goto label_1d9b20;
        case 0x1d9b24u: goto label_1d9b24;
        case 0x1d9b28u: goto label_1d9b28;
        case 0x1d9b2cu: goto label_1d9b2c;
        case 0x1d9b30u: goto label_1d9b30;
        case 0x1d9b34u: goto label_1d9b34;
        case 0x1d9b38u: goto label_1d9b38;
        case 0x1d9b3cu: goto label_1d9b3c;
        case 0x1d9b40u: goto label_1d9b40;
        case 0x1d9b44u: goto label_1d9b44;
        case 0x1d9b48u: goto label_1d9b48;
        case 0x1d9b4cu: goto label_1d9b4c;
        case 0x1d9b50u: goto label_1d9b50;
        case 0x1d9b54u: goto label_1d9b54;
        case 0x1d9b58u: goto label_1d9b58;
        case 0x1d9b5cu: goto label_1d9b5c;
        case 0x1d9b60u: goto label_1d9b60;
        case 0x1d9b64u: goto label_1d9b64;
        case 0x1d9b68u: goto label_1d9b68;
        case 0x1d9b6cu: goto label_1d9b6c;
        case 0x1d9b70u: goto label_1d9b70;
        case 0x1d9b74u: goto label_1d9b74;
        case 0x1d9b78u: goto label_1d9b78;
        case 0x1d9b7cu: goto label_1d9b7c;
        case 0x1d9b80u: goto label_1d9b80;
        case 0x1d9b84u: goto label_1d9b84;
        case 0x1d9b88u: goto label_1d9b88;
        case 0x1d9b8cu: goto label_1d9b8c;
        case 0x1d9b90u: goto label_1d9b90;
        case 0x1d9b94u: goto label_1d9b94;
        case 0x1d9b98u: goto label_1d9b98;
        case 0x1d9b9cu: goto label_1d9b9c;
        case 0x1d9ba0u: goto label_1d9ba0;
        case 0x1d9ba4u: goto label_1d9ba4;
        case 0x1d9ba8u: goto label_1d9ba8;
        case 0x1d9bacu: goto label_1d9bac;
        case 0x1d9bb0u: goto label_1d9bb0;
        case 0x1d9bb4u: goto label_1d9bb4;
        case 0x1d9bb8u: goto label_1d9bb8;
        case 0x1d9bbcu: goto label_1d9bbc;
        case 0x1d9bc0u: goto label_1d9bc0;
        case 0x1d9bc4u: goto label_1d9bc4;
        case 0x1d9bc8u: goto label_1d9bc8;
        case 0x1d9bccu: goto label_1d9bcc;
        case 0x1d9bd0u: goto label_1d9bd0;
        case 0x1d9bd4u: goto label_1d9bd4;
        case 0x1d9bd8u: goto label_1d9bd8;
        case 0x1d9bdcu: goto label_1d9bdc;
        case 0x1d9be0u: goto label_1d9be0;
        case 0x1d9be4u: goto label_1d9be4;
        case 0x1d9be8u: goto label_1d9be8;
        case 0x1d9becu: goto label_1d9bec;
        case 0x1d9bf0u: goto label_1d9bf0;
        case 0x1d9bf4u: goto label_1d9bf4;
        case 0x1d9bf8u: goto label_1d9bf8;
        case 0x1d9bfcu: goto label_1d9bfc;
        case 0x1d9c00u: goto label_1d9c00;
        case 0x1d9c04u: goto label_1d9c04;
        case 0x1d9c08u: goto label_1d9c08;
        case 0x1d9c0cu: goto label_1d9c0c;
        case 0x1d9c10u: goto label_1d9c10;
        case 0x1d9c14u: goto label_1d9c14;
        case 0x1d9c18u: goto label_1d9c18;
        case 0x1d9c1cu: goto label_1d9c1c;
        case 0x1d9c20u: goto label_1d9c20;
        case 0x1d9c24u: goto label_1d9c24;
        case 0x1d9c28u: goto label_1d9c28;
        case 0x1d9c2cu: goto label_1d9c2c;
        case 0x1d9c30u: goto label_1d9c30;
        case 0x1d9c34u: goto label_1d9c34;
        case 0x1d9c38u: goto label_1d9c38;
        case 0x1d9c3cu: goto label_1d9c3c;
        case 0x1d9c40u: goto label_1d9c40;
        case 0x1d9c44u: goto label_1d9c44;
        case 0x1d9c48u: goto label_1d9c48;
        case 0x1d9c4cu: goto label_1d9c4c;
        case 0x1d9c50u: goto label_1d9c50;
        case 0x1d9c54u: goto label_1d9c54;
        case 0x1d9c58u: goto label_1d9c58;
        case 0x1d9c5cu: goto label_1d9c5c;
        case 0x1d9c60u: goto label_1d9c60;
        case 0x1d9c64u: goto label_1d9c64;
        case 0x1d9c68u: goto label_1d9c68;
        case 0x1d9c6cu: goto label_1d9c6c;
        case 0x1d9c70u: goto label_1d9c70;
        case 0x1d9c74u: goto label_1d9c74;
        case 0x1d9c78u: goto label_1d9c78;
        case 0x1d9c7cu: goto label_1d9c7c;
        case 0x1d9c80u: goto label_1d9c80;
        case 0x1d9c84u: goto label_1d9c84;
        case 0x1d9c88u: goto label_1d9c88;
        case 0x1d9c8cu: goto label_1d9c8c;
        case 0x1d9c90u: goto label_1d9c90;
        case 0x1d9c94u: goto label_1d9c94;
        case 0x1d9c98u: goto label_1d9c98;
        case 0x1d9c9cu: goto label_1d9c9c;
        case 0x1d9ca0u: goto label_1d9ca0;
        case 0x1d9ca4u: goto label_1d9ca4;
        case 0x1d9ca8u: goto label_1d9ca8;
        case 0x1d9cacu: goto label_1d9cac;
        case 0x1d9cb0u: goto label_1d9cb0;
        case 0x1d9cb4u: goto label_1d9cb4;
        case 0x1d9cb8u: goto label_1d9cb8;
        case 0x1d9cbcu: goto label_1d9cbc;
        case 0x1d9cc0u: goto label_1d9cc0;
        case 0x1d9cc4u: goto label_1d9cc4;
        case 0x1d9cc8u: goto label_1d9cc8;
        case 0x1d9cccu: goto label_1d9ccc;
        case 0x1d9cd0u: goto label_1d9cd0;
        case 0x1d9cd4u: goto label_1d9cd4;
        case 0x1d9cd8u: goto label_1d9cd8;
        case 0x1d9cdcu: goto label_1d9cdc;
        case 0x1d9ce0u: goto label_1d9ce0;
        case 0x1d9ce4u: goto label_1d9ce4;
        case 0x1d9ce8u: goto label_1d9ce8;
        case 0x1d9cecu: goto label_1d9cec;
        case 0x1d9cf0u: goto label_1d9cf0;
        case 0x1d9cf4u: goto label_1d9cf4;
        case 0x1d9cf8u: goto label_1d9cf8;
        case 0x1d9cfcu: goto label_1d9cfc;
        case 0x1d9d00u: goto label_1d9d00;
        case 0x1d9d04u: goto label_1d9d04;
        case 0x1d9d08u: goto label_1d9d08;
        case 0x1d9d0cu: goto label_1d9d0c;
        case 0x1d9d10u: goto label_1d9d10;
        case 0x1d9d14u: goto label_1d9d14;
        case 0x1d9d18u: goto label_1d9d18;
        case 0x1d9d1cu: goto label_1d9d1c;
        case 0x1d9d20u: goto label_1d9d20;
        case 0x1d9d24u: goto label_1d9d24;
        case 0x1d9d28u: goto label_1d9d28;
        case 0x1d9d2cu: goto label_1d9d2c;
        case 0x1d9d30u: goto label_1d9d30;
        case 0x1d9d34u: goto label_1d9d34;
        case 0x1d9d38u: goto label_1d9d38;
        case 0x1d9d3cu: goto label_1d9d3c;
        case 0x1d9d40u: goto label_1d9d40;
        case 0x1d9d44u: goto label_1d9d44;
        case 0x1d9d48u: goto label_1d9d48;
        case 0x1d9d4cu: goto label_1d9d4c;
        case 0x1d9d50u: goto label_1d9d50;
        case 0x1d9d54u: goto label_1d9d54;
        case 0x1d9d58u: goto label_1d9d58;
        case 0x1d9d5cu: goto label_1d9d5c;
        case 0x1d9d60u: goto label_1d9d60;
        case 0x1d9d64u: goto label_1d9d64;
        case 0x1d9d68u: goto label_1d9d68;
        case 0x1d9d6cu: goto label_1d9d6c;
        case 0x1d9d70u: goto label_1d9d70;
        case 0x1d9d74u: goto label_1d9d74;
        case 0x1d9d78u: goto label_1d9d78;
        case 0x1d9d7cu: goto label_1d9d7c;
        case 0x1d9d80u: goto label_1d9d80;
        case 0x1d9d84u: goto label_1d9d84;
        case 0x1d9d88u: goto label_1d9d88;
        case 0x1d9d8cu: goto label_1d9d8c;
        case 0x1d9d90u: goto label_1d9d90;
        case 0x1d9d94u: goto label_1d9d94;
        case 0x1d9d98u: goto label_1d9d98;
        case 0x1d9d9cu: goto label_1d9d9c;
        case 0x1d9da0u: goto label_1d9da0;
        case 0x1d9da4u: goto label_1d9da4;
        case 0x1d9da8u: goto label_1d9da8;
        case 0x1d9dacu: goto label_1d9dac;
        case 0x1d9db0u: goto label_1d9db0;
        case 0x1d9db4u: goto label_1d9db4;
        case 0x1d9db8u: goto label_1d9db8;
        case 0x1d9dbcu: goto label_1d9dbc;
        case 0x1d9dc0u: goto label_1d9dc0;
        case 0x1d9dc4u: goto label_1d9dc4;
        case 0x1d9dc8u: goto label_1d9dc8;
        case 0x1d9dccu: goto label_1d9dcc;
        case 0x1d9dd0u: goto label_1d9dd0;
        case 0x1d9dd4u: goto label_1d9dd4;
        case 0x1d9dd8u: goto label_1d9dd8;
        case 0x1d9ddcu: goto label_1d9ddc;
        case 0x1d9de0u: goto label_1d9de0;
        case 0x1d9de4u: goto label_1d9de4;
        case 0x1d9de8u: goto label_1d9de8;
        case 0x1d9decu: goto label_1d9dec;
        case 0x1d9df0u: goto label_1d9df0;
        case 0x1d9df4u: goto label_1d9df4;
        case 0x1d9df8u: goto label_1d9df8;
        case 0x1d9dfcu: goto label_1d9dfc;
        case 0x1d9e00u: goto label_1d9e00;
        case 0x1d9e04u: goto label_1d9e04;
        case 0x1d9e08u: goto label_1d9e08;
        case 0x1d9e0cu: goto label_1d9e0c;
        case 0x1d9e10u: goto label_1d9e10;
        case 0x1d9e14u: goto label_1d9e14;
        case 0x1d9e18u: goto label_1d9e18;
        case 0x1d9e1cu: goto label_1d9e1c;
        case 0x1d9e20u: goto label_1d9e20;
        case 0x1d9e24u: goto label_1d9e24;
        case 0x1d9e28u: goto label_1d9e28;
        case 0x1d9e2cu: goto label_1d9e2c;
        case 0x1d9e30u: goto label_1d9e30;
        case 0x1d9e34u: goto label_1d9e34;
        case 0x1d9e38u: goto label_1d9e38;
        case 0x1d9e3cu: goto label_1d9e3c;
        case 0x1d9e40u: goto label_1d9e40;
        case 0x1d9e44u: goto label_1d9e44;
        case 0x1d9e48u: goto label_1d9e48;
        case 0x1d9e4cu: goto label_1d9e4c;
        case 0x1d9e50u: goto label_1d9e50;
        case 0x1d9e54u: goto label_1d9e54;
        case 0x1d9e58u: goto label_1d9e58;
        case 0x1d9e5cu: goto label_1d9e5c;
        case 0x1d9e60u: goto label_1d9e60;
        case 0x1d9e64u: goto label_1d9e64;
        case 0x1d9e68u: goto label_1d9e68;
        case 0x1d9e6cu: goto label_1d9e6c;
        case 0x1d9e70u: goto label_1d9e70;
        case 0x1d9e74u: goto label_1d9e74;
        case 0x1d9e78u: goto label_1d9e78;
        case 0x1d9e7cu: goto label_1d9e7c;
        case 0x1d9e80u: goto label_1d9e80;
        case 0x1d9e84u: goto label_1d9e84;
        case 0x1d9e88u: goto label_1d9e88;
        case 0x1d9e8cu: goto label_1d9e8c;
        case 0x1d9e90u: goto label_1d9e90;
        case 0x1d9e94u: goto label_1d9e94;
        case 0x1d9e98u: goto label_1d9e98;
        case 0x1d9e9cu: goto label_1d9e9c;
        case 0x1d9ea0u: goto label_1d9ea0;
        case 0x1d9ea4u: goto label_1d9ea4;
        case 0x1d9ea8u: goto label_1d9ea8;
        case 0x1d9eacu: goto label_1d9eac;
        case 0x1d9eb0u: goto label_1d9eb0;
        case 0x1d9eb4u: goto label_1d9eb4;
        case 0x1d9eb8u: goto label_1d9eb8;
        case 0x1d9ebcu: goto label_1d9ebc;
        case 0x1d9ec0u: goto label_1d9ec0;
        case 0x1d9ec4u: goto label_1d9ec4;
        case 0x1d9ec8u: goto label_1d9ec8;
        case 0x1d9eccu: goto label_1d9ecc;
        case 0x1d9ed0u: goto label_1d9ed0;
        case 0x1d9ed4u: goto label_1d9ed4;
        case 0x1d9ed8u: goto label_1d9ed8;
        case 0x1d9edcu: goto label_1d9edc;
        case 0x1d9ee0u: goto label_1d9ee0;
        case 0x1d9ee4u: goto label_1d9ee4;
        case 0x1d9ee8u: goto label_1d9ee8;
        case 0x1d9eecu: goto label_1d9eec;
        case 0x1d9ef0u: goto label_1d9ef0;
        case 0x1d9ef4u: goto label_1d9ef4;
        case 0x1d9ef8u: goto label_1d9ef8;
        case 0x1d9efcu: goto label_1d9efc;
        case 0x1d9f00u: goto label_1d9f00;
        case 0x1d9f04u: goto label_1d9f04;
        case 0x1d9f08u: goto label_1d9f08;
        case 0x1d9f0cu: goto label_1d9f0c;
        case 0x1d9f10u: goto label_1d9f10;
        case 0x1d9f14u: goto label_1d9f14;
        case 0x1d9f18u: goto label_1d9f18;
        case 0x1d9f1cu: goto label_1d9f1c;
        case 0x1d9f20u: goto label_1d9f20;
        case 0x1d9f24u: goto label_1d9f24;
        case 0x1d9f28u: goto label_1d9f28;
        case 0x1d9f2cu: goto label_1d9f2c;
        case 0x1d9f30u: goto label_1d9f30;
        case 0x1d9f34u: goto label_1d9f34;
        case 0x1d9f38u: goto label_1d9f38;
        case 0x1d9f3cu: goto label_1d9f3c;
        case 0x1d9f40u: goto label_1d9f40;
        case 0x1d9f44u: goto label_1d9f44;
        case 0x1d9f48u: goto label_1d9f48;
        case 0x1d9f4cu: goto label_1d9f4c;
        case 0x1d9f50u: goto label_1d9f50;
        case 0x1d9f54u: goto label_1d9f54;
        case 0x1d9f58u: goto label_1d9f58;
        case 0x1d9f5cu: goto label_1d9f5c;
        case 0x1d9f60u: goto label_1d9f60;
        case 0x1d9f64u: goto label_1d9f64;
        case 0x1d9f68u: goto label_1d9f68;
        case 0x1d9f6cu: goto label_1d9f6c;
        case 0x1d9f70u: goto label_1d9f70;
        case 0x1d9f74u: goto label_1d9f74;
        case 0x1d9f78u: goto label_1d9f78;
        case 0x1d9f7cu: goto label_1d9f7c;
        case 0x1d9f80u: goto label_1d9f80;
        case 0x1d9f84u: goto label_1d9f84;
        case 0x1d9f88u: goto label_1d9f88;
        case 0x1d9f8cu: goto label_1d9f8c;
        case 0x1d9f90u: goto label_1d9f90;
        case 0x1d9f94u: goto label_1d9f94;
        case 0x1d9f98u: goto label_1d9f98;
        case 0x1d9f9cu: goto label_1d9f9c;
        default: return;
    }

label_1d97d0:
    // 0x1d97d0: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1d97d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1d97d4:
    // 0x1d97d4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1d97d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_1d97d8:
    // 0x1d97d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1d97dc:
    if (ctx->pc == 0x1D97DCu) {
        ctx->pc = 0x1D97E0u;
        goto label_1d97e0;
    }
    ctx->pc = 0x1D97D8u;
    {
        const bool branch_taken_0x1d97d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d97d8) {
            ctx->pc = 0x1D97F0u;
            goto label_1d97f0;
        }
    }
    ctx->pc = 0x1D97E0u;
label_1d97e0:
    // 0x1d97e0: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1d97e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1d97e4:
    // 0x1d97e4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1d97e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_1d97e8:
    // 0x1d97e8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1d97ec:
    if (ctx->pc == 0x1D97ECu) {
        ctx->pc = 0x1D97F0u;
        goto label_1d97f0;
    }
    ctx->pc = 0x1D97E8u;
    {
        const bool branch_taken_0x1d97e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d97e8) {
            ctx->pc = 0x1D982Cu;
            goto label_1d982c;
        }
    }
    ctx->pc = 0x1D97F0u;
label_1d97f0:
    // 0x1d97f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d97f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d97f4:
    // 0x1d97f4: 0xc05b420  jal         func_16D080
label_1d97f8:
    if (ctx->pc == 0x1D97F8u) {
        ctx->pc = 0x1D97F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D97F4u;
        // 0x1d97f8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D97FCu;
        goto label_1d97fc;
    }
    ctx->pc = 0x1D97F4u;
    SET_GPR_U32(ctx, 31, 0x1D97FCu);
    ctx->pc = 0x1D97F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D97F4u;
    // 0x1d97f8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1D97F4u, 0x1D97FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D97FCu;
label_1d97fc:
    // 0x1d97fc: 0x8f828cf0  lw          $v0, -0x7310($gp)
    ctx->pc = 0x1d97fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937840)));
label_1d9800:
    // 0x1d9800: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d9800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d9804:
    // 0x1d9804: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
label_1d9808:
    if (ctx->pc == 0x1D9808u) {
        ctx->pc = 0x1D9808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9804u;
        // 0x1d9808: 0x26110001  addiu       $s1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D980Cu;
        goto label_1d980c;
    }
    ctx->pc = 0x1D9804u;
    {
        const bool branch_taken_0x1d9804 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D9808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9804u;
        // 0x1d9808: 0x26110001  addiu       $s1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9804) {
            ctx->pc = 0x1D9818u;
            goto label_1d9818;
        }
    }
    ctx->pc = 0x1D980Cu;
label_1d980c:
    // 0x1d980c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1d9810:
    if (ctx->pc == 0x1D9810u) {
        ctx->pc = 0x1D9810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D980Cu;
        // 0x1d9810: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9814u;
        goto label_1d9814;
    }
    ctx->pc = 0x1D980Cu;
    {
        const bool branch_taken_0x1d980c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D980Cu;
        // 0x1d9810: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d980c) {
            ctx->pc = 0x1D9818u;
            goto label_1d9818;
        }
    }
    ctx->pc = 0x1D9814u;
label_1d9814:
    // 0x1d9814: 0x26110001  addiu       $s1, $s0, 0x1
    ctx->pc = 0x1d9814u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d9818:
    // 0x1d9818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d981c:
    // 0x1d981c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d981cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d9820:
    // 0x1d9820: 0xc07691c  jal         func_1DA470
label_1d9824:
    if (ctx->pc == 0x1D9824u) {
        ctx->pc = 0x1D9824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9820u;
        // 0x1d9824: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9828u;
        goto label_1d9828;
    }
    ctx->pc = 0x1D9820u;
    SET_GPR_U32(ctx, 31, 0x1D9828u);
    ctx->pc = 0x1D9824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9820u;
    // 0x1d9824: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA470u;
    { ctx->pc = 0x1da470; return; }
    ctx->pc = 0x1D9828u;
label_1d9828:
    // 0x1d9828: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1d9828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d982c:
    // 0x1d982c: 0x0  nop
    ctx->pc = 0x1d982cu;
    // NOP
label_1d9830:
    // 0x1d9830: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1d9830u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1d9834:
    // 0x1d9834: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d9838:
    if (ctx->pc == 0x1D9838u) {
        ctx->pc = 0x1D983Cu;
        goto label_1d983c;
    }
    ctx->pc = 0x1D9834u;
    {
        const bool branch_taken_0x1d9834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9834) {
            ctx->pc = 0x1D9844u;
            goto label_1d9844;
        }
    }
    ctx->pc = 0x1D983Cu;
label_1d983c:
    // 0x1d983c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d9840:
    if (ctx->pc == 0x1D9840u) {
        ctx->pc = 0x1D9840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D983Cu;
        // 0x1d9840: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9844u;
        goto label_1d9844;
    }
    ctx->pc = 0x1D983Cu;
    {
        const bool branch_taken_0x1d983c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D983Cu;
        // 0x1d9840: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d983c) {
            ctx->pc = 0x1D9854u;
            goto label_1d9854;
        }
    }
    ctx->pc = 0x1D9844u;
label_1d9844:
    // 0x1d9844: 0x0  nop
    ctx->pc = 0x1d9844u;
    // NOP
label_1d9848:
    // 0x1d9848: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x1d9848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
label_1d984c:
    // 0x1d984c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d984cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d9850:
    // 0x1d9850: 0xaf828cf4  sw          $v0, -0x730C($gp)
    ctx->pc = 0x1d9850u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 2));
label_1d9854:
    // 0x1d9854: 0x0  nop
    ctx->pc = 0x1d9854u;
    // NOP
label_1d9858:
    // 0x1d9858: 0x8f828cd4  lw          $v0, -0x732C($gp)
    ctx->pc = 0x1d9858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937812)));
label_1d985c:
    // 0x1d985c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d9860:
    if (ctx->pc == 0x1D9860u) {
        ctx->pc = 0x1D9864u;
        goto label_1d9864;
    }
    ctx->pc = 0x1D985Cu;
    {
        const bool branch_taken_0x1d985c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d985c) {
            ctx->pc = 0x1D9870u;
            goto label_1d9870;
        }
    }
    ctx->pc = 0x1D9864u;
label_1d9864:
    // 0x1d9864: 0x8f828cd0  lw          $v0, -0x7330($gp)
    ctx->pc = 0x1d9864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
label_1d9868:
    // 0x1d9868: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d9868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d986c:
    // 0x1d986c: 0xaf828cd0  sw          $v0, -0x7330($gp)
    ctx->pc = 0x1d986cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937808), GPR_U32(ctx, 2));
label_1d9870:
    // 0x1d9870: 0x8f828cc4  lw          $v0, -0x733C($gp)
    ctx->pc = 0x1d9870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937796)));
label_1d9874:
    // 0x1d9874: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1d9878:
    if (ctx->pc == 0x1D9878u) {
        ctx->pc = 0x1D987Cu;
        goto label_1d987c;
    }
    ctx->pc = 0x1D9874u;
    {
        const bool branch_taken_0x1d9874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9874) {
            ctx->pc = 0x1D98D8u;
            goto label_1d98d8;
        }
    }
    ctx->pc = 0x1D987Cu;
label_1d987c:
    // 0x1d987c: 0x8f828cc0  lw          $v0, -0x7340($gp)
    ctx->pc = 0x1d987cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937792)));
label_1d9880:
    // 0x1d9880: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1d9880u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1d9884:
    // 0x1d9884: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1d9888:
    if (ctx->pc == 0x1D9888u) {
        ctx->pc = 0x1D988Cu;
        goto label_1d988c;
    }
    ctx->pc = 0x1D9884u;
    {
        const bool branch_taken_0x1d9884 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9884) {
            ctx->pc = 0x1D98ACu;
            goto label_1d98ac;
        }
    }
    ctx->pc = 0x1D988Cu;
label_1d988c:
    // 0x1d988c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1d988cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1d9890:
    // 0x1d9890: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1d9890u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1d9894:
    // 0x1d9894: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1d9898:
    if (ctx->pc == 0x1D9898u) {
        ctx->pc = 0x1D989Cu;
        goto label_1d989c;
    }
    ctx->pc = 0x1D9894u;
    {
        const bool branch_taken_0x1d9894 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9894) {
            ctx->pc = 0x1D98A4u;
            goto label_1d98a4;
        }
    }
    ctx->pc = 0x1D989Cu;
label_1d989c:
    // 0x1d989c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d98a0:
    if (ctx->pc == 0x1D98A0u) {
        ctx->pc = 0x1D98A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D989Cu;
        // 0x1d98a0: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D98A4u;
        goto label_1d98a4;
    }
    ctx->pc = 0x1D989Cu;
    {
        const bool branch_taken_0x1d989c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D98A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D989Cu;
        // 0x1d98a0: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d989c) {
            ctx->pc = 0x1D98ACu;
            goto label_1d98ac;
        }
    }
    ctx->pc = 0x1D98A4u;
label_1d98a4:
    // 0x1d98a4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1d98a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d98a8:
    // 0x1d98a8: 0xaf828cc0  sw          $v0, -0x7340($gp)
    ctx->pc = 0x1d98a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
label_1d98ac:
    // 0x1d98ac: 0x0  nop
    ctx->pc = 0x1d98acu;
    // NOP
label_1d98b0:
    // 0x1d98b0: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1d98b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1d98b4:
    // 0x1d98b4: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_1d98b8:
    if (ctx->pc == 0x1D98B8u) {
        ctx->pc = 0x1D98BCu;
        goto label_1d98bc;
    }
    ctx->pc = 0x1D98B4u;
    {
        const bool branch_taken_0x1d98b4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d98b4) {
            ctx->pc = 0x1D98D8u;
            goto label_1d98d8;
        }
    }
    ctx->pc = 0x1D98BCu;
label_1d98bc:
    // 0x1d98bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d98bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d98c0:
    // 0x1d98c0: 0xaf828cb0  sw          $v0, -0x7350($gp)
    ctx->pc = 0x1d98c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 2));
label_1d98c4:
    // 0x1d98c4: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1d98c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1d98c8:
    // 0x1d98c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d98cc:
    if (ctx->pc == 0x1D98CCu) {
        ctx->pc = 0x1D98D0u;
        goto label_1d98d0;
    }
    ctx->pc = 0x1D98C8u;
    {
        const bool branch_taken_0x1d98c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d98c8) {
            ctx->pc = 0x1D98D8u;
            goto label_1d98d8;
        }
    }
    ctx->pc = 0x1D98D0u;
label_1d98d0:
    // 0x1d98d0: 0x8f828ca8  lw          $v0, -0x7358($gp)
    ctx->pc = 0x1d98d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
label_1d98d4:
    // 0x1d98d4: 0xaf828cb4  sw          $v0, -0x734C($gp)
    ctx->pc = 0x1d98d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937780), GPR_U32(ctx, 2));
label_1d98d8:
    // 0x1d98d8: 0xc077a7c  jal         func_1DE9F0
label_1d98dc:
    if (ctx->pc == 0x1D98DCu) {
        ctx->pc = 0x1D98E0u;
        goto label_1d98e0;
    }
    ctx->pc = 0x1D98D8u;
    SET_GPR_U32(ctx, 31, 0x1D98E0u);
    ctx->pc = 0x1DE9F0u;
    { ctx->pc = 0x1de9f0; return; }
    ctx->pc = 0x1D98E0u;
label_1d98e0:
    // 0x1d98e0: 0x8f848ca0  lw          $a0, -0x7360($gp)
    ctx->pc = 0x1d98e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1d98e4:
    // 0x1d98e4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d98e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d98e8:
    // 0x1d98e8: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
label_1d98ec:
    if (ctx->pc == 0x1D98ECu) {
        ctx->pc = 0x1D98F0u;
        goto label_1d98f0;
    }
    ctx->pc = 0x1D98E8u;
    {
        const bool branch_taken_0x1d98e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d98e8) {
            ctx->pc = 0x1D9974u;
            goto label_1d9974;
        }
    }
    ctx->pc = 0x1D98F0u;
label_1d98f0:
    // 0x1d98f0: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d98f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d98f4:
    // 0x1d98f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d98f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d98f8:
    // 0x1d98f8: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_1d98fc:
    if (ctx->pc == 0x1D98FCu) {
        ctx->pc = 0x1D98FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D98F8u;
        // 0x1d98fc: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9900u;
        goto label_1d9900;
    }
    ctx->pc = 0x1D98F8u;
    {
        const bool branch_taken_0x1d98f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D98FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D98F8u;
        // 0x1d98fc: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d98f8) {
            ctx->pc = 0x1D9920u;
            goto label_1d9920;
        }
    }
    ctx->pc = 0x1D9900u;
label_1d9900:
    // 0x1d9900: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d9900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d9904:
    // 0x1d9904: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1d9904u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1d9908:
    // 0x1d9908: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_1d990c:
    if (ctx->pc == 0x1D990Cu) {
        ctx->pc = 0x1D9910u;
        goto label_1d9910;
    }
    ctx->pc = 0x1D9908u;
    {
        const bool branch_taken_0x1d9908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9908) {
            ctx->pc = 0x1D9974u;
            goto label_1d9974;
        }
    }
    ctx->pc = 0x1D9910u;
label_1d9910:
    // 0x1d9910: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d9910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d9914:
    // 0x1d9914: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1d9914u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1d9918:
    // 0x1d9918: 0x10000016  b           . + 4 + (0x16 << 2)
label_1d991c:
    if (ctx->pc == 0x1D991Cu) {
        ctx->pc = 0x1D991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9918u;
        // 0x1d991c: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9920u;
        goto label_1d9920;
    }
    ctx->pc = 0x1D9918u;
    {
        const bool branch_taken_0x1d9918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9918u;
        // 0x1d991c: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9918) {
            ctx->pc = 0x1D9974u;
            goto label_1d9974;
        }
    }
    ctx->pc = 0x1D9920u;
label_1d9920:
    // 0x1d9920: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d9920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9924:
    // 0x1d9924: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
label_1d9928:
    if (ctx->pc == 0x1D9928u) {
        ctx->pc = 0x1D992Cu;
        goto label_1d992c;
    }
    ctx->pc = 0x1D9924u;
    {
        const bool branch_taken_0x1d9924 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d9924) {
            ctx->pc = 0x1D994Cu;
            goto label_1d994c;
        }
    }
    ctx->pc = 0x1D992Cu;
label_1d992c:
    // 0x1d992c: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d992cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d9930:
    // 0x1d9930: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x1d9930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
label_1d9934:
    // 0x1d9934: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_1d9938:
    if (ctx->pc == 0x1D9938u) {
        ctx->pc = 0x1D993Cu;
        goto label_1d993c;
    }
    ctx->pc = 0x1D9934u;
    {
        const bool branch_taken_0x1d9934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9934) {
            ctx->pc = 0x1D9974u;
            goto label_1d9974;
        }
    }
    ctx->pc = 0x1D993Cu;
label_1d993c:
    // 0x1d993c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d993cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d9940:
    // 0x1d9940: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1d9940u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1d9944:
    // 0x1d9944: 0x1000000b  b           . + 4 + (0xB << 2)
label_1d9948:
    if (ctx->pc == 0x1D9948u) {
        ctx->pc = 0x1D9948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9944u;
        // 0x1d9948: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D994Cu;
        goto label_1d994c;
    }
    ctx->pc = 0x1D9944u;
    {
        const bool branch_taken_0x1d9944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9944u;
        // 0x1d9948: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9944) {
            ctx->pc = 0x1D9974u;
            goto label_1d9974;
        }
    }
    ctx->pc = 0x1D994Cu;
label_1d994c:
    // 0x1d994c: 0x0  nop
    ctx->pc = 0x1d994cu;
    // NOP
label_1d9950:
    // 0x1d9950: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d9950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d9954:
    // 0x1d9954: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_1d9958:
    if (ctx->pc == 0x1D9958u) {
        ctx->pc = 0x1D995Cu;
        goto label_1d995c;
    }
    ctx->pc = 0x1D9954u;
    {
        const bool branch_taken_0x1d9954 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d9954) {
            ctx->pc = 0x1D9974u;
            goto label_1d9974;
        }
    }
    ctx->pc = 0x1D995Cu;
label_1d995c:
    // 0x1d995c: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d995cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d9960:
    // 0x1d9960: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1d9960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1d9964:
    // 0x1d9964: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d9968:
    if (ctx->pc == 0x1D9968u) {
        ctx->pc = 0x1D996Cu;
        goto label_1d996c;
    }
    ctx->pc = 0x1D9964u;
    {
        const bool branch_taken_0x1d9964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9964) {
            ctx->pc = 0x1D9974u;
            goto label_1d9974;
        }
    }
    ctx->pc = 0x1D996Cu;
label_1d996c:
    // 0x1d996c: 0xaf838ca0  sw          $v1, -0x7360($gp)
    ctx->pc = 0x1d996cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 3));
label_1d9970:
    // 0x1d9970: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1d9970u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1d9974:
    // 0x1d9974: 0x0  nop
    ctx->pc = 0x1d9974u;
    // NOP
label_1d9978:
    // 0x1d9978: 0xc07a9d8  jal         func_1EA760
label_1d997c:
    if (ctx->pc == 0x1D997Cu) {
        ctx->pc = 0x1D9980u;
        goto label_1d9980;
    }
    ctx->pc = 0x1D9978u;
    SET_GPR_U32(ctx, 31, 0x1D9980u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x1D9980u;
label_1d9980:
    // 0x1d9980: 0xc04e168  jal         func_1385A0
label_1d9984:
    if (ctx->pc == 0x1D9984u) {
        ctx->pc = 0x1D9988u;
        goto label_1d9988;
    }
    ctx->pc = 0x1D9980u;
    SET_GPR_U32(ctx, 31, 0x1D9988u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1D9980u, 0x1D9988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9988u;
label_1d9988:
    // 0x1d9988: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1d9988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1d998c:
    // 0x1d998c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1d998cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1d9990:
    // 0x1d9990: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x1d9990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_1d9994:
    // 0x1d9994: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1d9994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1d9998:
    // 0x1d9998: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d9998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d999c:
    // 0x1d999c: 0x27828ce0  addiu       $v0, $gp, -0x7320
    ctx->pc = 0x1d999cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937824));
label_1d99a0:
    // 0x1d99a0: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1d99a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1d99a4:
    // 0x1d99a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d99a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d99a8:
    // 0x1d99a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d99a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d99ac:
    // 0x1d99ac: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1d99acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1d99b0:
    // 0x1d99b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d99b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d99b4:
    // 0x1d99b4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d99b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d99b8:
    // 0x1d99b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d99b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d99bc:
    // 0x1d99bc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d99bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d99c0:
    // 0x1d99c0: 0xc066c72  jal         func_19B1C8
label_1d99c4:
    if (ctx->pc == 0x1D99C4u) {
        ctx->pc = 0x1D99C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D99C0u;
        // 0x1d99c4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D99C8u;
        goto label_1d99c8;
    }
    ctx->pc = 0x1D99C0u;
    SET_GPR_U32(ctx, 31, 0x1D99C8u);
    ctx->pc = 0x1D99C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D99C0u;
    // 0x1d99c4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D99C0u, 0x1D99C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D99C8u;
label_1d99c8:
    // 0x1d99c8: 0xc077e84  jal         func_1DFA10
label_1d99cc:
    if (ctx->pc == 0x1D99CCu) {
        ctx->pc = 0x1D99D0u;
        goto label_1d99d0;
    }
    ctx->pc = 0x1D99C8u;
    SET_GPR_U32(ctx, 31, 0x1D99D0u);
    ctx->pc = 0x1DFA10u;
    { ctx->pc = 0x1dfa10; return; }
    ctx->pc = 0x1D99D0u;
label_1d99d0:
    // 0x1d99d0: 0xc077d90  jal         func_1DF640
label_1d99d4:
    if (ctx->pc == 0x1D99D4u) {
        ctx->pc = 0x1D99D8u;
        goto label_1d99d8;
    }
    ctx->pc = 0x1D99D0u;
    SET_GPR_U32(ctx, 31, 0x1D99D8u);
    ctx->pc = 0x1DF640u;
    { ctx->pc = 0x1df640; return; }
    ctx->pc = 0x1D99D8u;
label_1d99d8:
    // 0x1d99d8: 0xc077ab4  jal         func_1DEAD0
label_1d99dc:
    if (ctx->pc == 0x1D99DCu) {
        ctx->pc = 0x1D99E0u;
        goto label_1d99e0;
    }
    ctx->pc = 0x1D99D8u;
    SET_GPR_U32(ctx, 31, 0x1D99E0u);
    ctx->pc = 0x1DEAD0u;
    { ctx->pc = 0x1dead0; return; }
    ctx->pc = 0x1D99E0u;
label_1d99e0:
    // 0x1d99e0: 0xc077880  jal         func_1DE200
label_1d99e4:
    if (ctx->pc == 0x1D99E4u) {
        ctx->pc = 0x1D99E8u;
        goto label_1d99e8;
    }
    ctx->pc = 0x1D99E0u;
    SET_GPR_U32(ctx, 31, 0x1D99E8u);
    ctx->pc = 0x1DE200u;
    { ctx->pc = 0x1de200; return; }
    ctx->pc = 0x1D99E8u;
label_1d99e8:
    // 0x1d99e8: 0x8f828c8c  lw          $v0, -0x7374($gp)
    ctx->pc = 0x1d99e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937740)));
label_1d99ec:
    // 0x1d99ec: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_1d99f0:
    if (ctx->pc == 0x1D99F0u) {
        ctx->pc = 0x1D99F4u;
        goto label_1d99f4;
    }
    ctx->pc = 0x1D99ECu;
    {
        const bool branch_taken_0x1d99ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d99ec) {
            ctx->pc = 0x1D9AC8u;
            goto label_1d9ac8;
        }
    }
    ctx->pc = 0x1D99F4u;
label_1d99f4:
    // 0x1d99f4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d99f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d99f8:
    // 0x1d99f8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1d99f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1d99fc:
    // 0x1d99fc: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d99fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d9a00:
    // 0x1d9a00: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1d9a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1d9a04:
    // 0x1d9a04: 0x27828c90  addiu       $v0, $gp, -0x7370
    ctx->pc = 0x1d9a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
label_1d9a08:
    // 0x1d9a08: 0x2406027a  addiu       $a2, $zero, 0x27A
    ctx->pc = 0x1d9a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
label_1d9a0c:
    // 0x1d9a0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d9a0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9a10:
    // 0x1d9a10: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9a10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9a14:
    // 0x1d9a14: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d9a14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9a18:
    // 0x1d9a18: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1d9a18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1d9a1c:
    // 0x1d9a1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d9a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d9a20:
    // 0x1d9a20: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x1d9a20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d9a24:
    // 0x1d9a24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d9a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d9a28:
    // 0x1d9a28: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d9a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9a2c:
    // 0x1d9a2c: 0xc066c72  jal         func_19B1C8
label_1d9a30:
    if (ctx->pc == 0x1D9A30u) {
        ctx->pc = 0x1D9A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A2Cu;
        // 0x1d9a30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9A34u;
        goto label_1d9a34;
    }
    ctx->pc = 0x1D9A2Cu;
    SET_GPR_U32(ctx, 31, 0x1D9A34u);
    ctx->pc = 0x1D9A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9A2Cu;
    // 0x1d9a30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D9A2Cu, 0x1D9A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9A34u;
label_1d9a34:
    // 0x1d9a34: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d9a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d9a38:
    // 0x1d9a38: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1d9a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1d9a3c:
    // 0x1d9a3c: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d9a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d9a40:
    // 0x1d9a40: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1d9a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1d9a44:
    // 0x1d9a44: 0x8f848c80  lw          $a0, -0x7380($gp)
    ctx->pc = 0x1d9a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1d9a48:
    // 0x1d9a48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d9a48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d9a4c:
    // 0x1d9a4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d9a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d9a50:
    // 0x1d9a50: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1d9a50u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9a54:
    // 0x1d9a54: 0xc070e2c  jal         func_1C38B0
label_1d9a58:
    if (ctx->pc == 0x1D9A58u) {
        ctx->pc = 0x1D9A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A54u;
        // 0x1d9a58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9A5Cu;
        goto label_1d9a5c;
    }
    ctx->pc = 0x1D9A54u;
    SET_GPR_U32(ctx, 31, 0x1D9A5Cu);
    ctx->pc = 0x1D9A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9A54u;
    // 0x1d9a58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C38B0u, 0x1D9A54u, 0x1D9A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9A5Cu;
label_1d9a5c:
    // 0x1d9a5c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d9a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d9a60:
    // 0x1d9a60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d9a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d9a64:
    // 0x1d9a64: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1d9a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1d9a68:
    // 0x1d9a68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d9a68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9a6c:
    // 0x1d9a6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9a6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9a70:
    // 0x1d9a70: 0xc066c72  jal         func_19B1C8
label_1d9a74:
    if (ctx->pc == 0x1D9A74u) {
        ctx->pc = 0x1D9A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A70u;
        // 0x1d9a74: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9A78u;
        goto label_1d9a78;
    }
    ctx->pc = 0x1D9A70u;
    SET_GPR_U32(ctx, 31, 0x1D9A78u);
    ctx->pc = 0x1D9A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9A70u;
    // 0x1d9a74: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D9A70u, 0x1D9A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9A78u;
label_1d9a78:
    // 0x1d9a78: 0x8f828c88  lw          $v0, -0x7378($gp)
    ctx->pc = 0x1d9a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1d9a7c:
    // 0x1d9a7c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1d9a80:
    if (ctx->pc == 0x1D9A80u) {
        ctx->pc = 0x1D9A84u;
        goto label_1d9a84;
    }
    ctx->pc = 0x1D9A7Cu;
    {
        const bool branch_taken_0x1d9a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9a7c) {
            ctx->pc = 0x1D9AC8u;
            goto label_1d9ac8;
        }
    }
    ctx->pc = 0x1D9A84u;
label_1d9a84:
    // 0x1d9a84: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d9a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d9a88:
    // 0x1d9a88: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1d9a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1d9a8c:
    // 0x1d9a8c: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d9a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d9a90:
    // 0x1d9a90: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1d9a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1d9a94:
    // 0x1d9a94: 0x8f848c84  lw          $a0, -0x737C($gp)
    ctx->pc = 0x1d9a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
label_1d9a98:
    // 0x1d9a98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d9a98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d9a9c:
    // 0x1d9a9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d9a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d9aa0:
    // 0x1d9aa0: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x1d9aa0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1d9aa4:
    // 0x1d9aa4: 0xc070e2c  jal         func_1C38B0
label_1d9aa8:
    if (ctx->pc == 0x1D9AA8u) {
        ctx->pc = 0x1D9AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9AA4u;
        // 0x1d9aa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9AACu;
        goto label_1d9aac;
    }
    ctx->pc = 0x1D9AA4u;
    SET_GPR_U32(ctx, 31, 0x1D9AACu);
    ctx->pc = 0x1D9AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9AA4u;
    // 0x1d9aa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C38B0u, 0x1D9AA4u, 0x1D9AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9AACu;
label_1d9aac:
    // 0x1d9aac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d9aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d9ab0:
    // 0x1d9ab0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d9ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d9ab4:
    // 0x1d9ab4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1d9ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1d9ab8:
    // 0x1d9ab8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d9ab8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9abc:
    // 0x1d9abc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9abcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9ac0:
    // 0x1d9ac0: 0xc066c72  jal         func_19B1C8
label_1d9ac4:
    if (ctx->pc == 0x1D9AC4u) {
        ctx->pc = 0x1D9AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9AC0u;
        // 0x1d9ac4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9AC8u;
        goto label_1d9ac8;
    }
    ctx->pc = 0x1D9AC0u;
    SET_GPR_U32(ctx, 31, 0x1D9AC8u);
    ctx->pc = 0x1D9AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9AC0u;
    // 0x1d9ac4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D9AC0u, 0x1D9AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9AC8u;
label_1d9ac8:
    // 0x1d9ac8: 0xc07a86c  jal         func_1EA1B0
label_1d9acc:
    if (ctx->pc == 0x1D9ACCu) {
        ctx->pc = 0x1D9AD0u;
        goto label_1d9ad0;
    }
    ctx->pc = 0x1D9AC8u;
    SET_GPR_U32(ctx, 31, 0x1D9AD0u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x1D9AD0u;
label_1d9ad0:
    // 0x1d9ad0: 0xc04e120  jal         func_138480
label_1d9ad4:
    if (ctx->pc == 0x1D9AD4u) {
        ctx->pc = 0x1D9AD8u;
        goto label_1d9ad8;
    }
    ctx->pc = 0x1D9AD0u;
    SET_GPR_U32(ctx, 31, 0x1D9AD8u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1D9AD0u, 0x1D9AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9AD8u;
label_1d9ad8:
    // 0x1d9ad8: 0xc05b578  jal         func_16D5E0
label_1d9adc:
    if (ctx->pc == 0x1D9ADCu) {
        ctx->pc = 0x1D9ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9AD8u;
        // 0x1d9adc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9AE0u;
        goto label_1d9ae0;
    }
    ctx->pc = 0x1D9AD8u;
    SET_GPR_U32(ctx, 31, 0x1D9AE0u);
    ctx->pc = 0x1D9ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9AD8u;
    // 0x1d9adc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1D9AD8u, 0x1D9AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9AE0u;
label_1d9ae0:
    // 0x1d9ae0: 0xc060258  jal         func_180960
label_1d9ae4:
    if (ctx->pc == 0x1D9AE4u) {
        ctx->pc = 0x1D9AE8u;
        goto label_1d9ae8;
    }
    ctx->pc = 0x1D9AE0u;
    SET_GPR_U32(ctx, 31, 0x1D9AE8u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1D9AE0u, 0x1D9AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9AE8u;
label_1d9ae8:
    // 0x1d9ae8: 0x1000fae6  b           . + 4 + (-0x51A << 2)
label_1d9aec:
    if (ctx->pc == 0x1D9AECu) {
        ctx->pc = 0x1D9AF0u;
        goto label_1d9af0;
    }
    ctx->pc = 0x1D9AE8u;
    {
        const bool branch_taken_0x1d9ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9ae8) {
            ctx->pc = 0x1D8684u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d8684; return; }
        }
    }
    ctx->pc = 0x1D9AF0u;
label_1d9af0:
    // 0x1d9af0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1d9af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d9af4:
    // 0x1d9af4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9af8:
    // 0x1d9af8: 0xc04e188  jal         func_138620
label_1d9afc:
    if (ctx->pc == 0x1D9AFCu) {
        ctx->pc = 0x1D9AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9AF8u;
        // 0x1d9afc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9B00u;
        goto label_1d9b00;
    }
    ctx->pc = 0x1D9AF8u;
    SET_GPR_U32(ctx, 31, 0x1D9B00u);
    ctx->pc = 0x1D9AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9AF8u;
    // 0x1d9afc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x1D9AF8u, 0x1D9B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9B00u;
label_1d9b00:
    // 0x1d9b00: 0xc04e198  jal         func_138660
label_1d9b04:
    if (ctx->pc == 0x1D9B04u) {
        ctx->pc = 0x1D9B08u;
        goto label_1d9b08;
    }
    ctx->pc = 0x1D9B00u;
    SET_GPR_U32(ctx, 31, 0x1D9B08u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x1D9B00u, 0x1D9B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9B08u;
label_1d9b08:
    // 0x1d9b08: 0x144000b3  bnez        $v0, . + 4 + (0xB3 << 2)
label_1d9b0c:
    if (ctx->pc == 0x1D9B0Cu) {
        ctx->pc = 0x1D9B10u;
        goto label_1d9b10;
    }
    ctx->pc = 0x1D9B08u;
    {
        const bool branch_taken_0x1d9b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9b08) {
            ctx->pc = 0x1D9DD8u;
            goto label_1d9dd8;
        }
    }
    ctx->pc = 0x1D9B10u;
label_1d9b10:
    // 0x1d9b10: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1d9b10u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1d9b14:
    // 0x1d9b14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d9b18:
    if (ctx->pc == 0x1D9B18u) {
        ctx->pc = 0x1D9B1Cu;
        goto label_1d9b1c;
    }
    ctx->pc = 0x1D9B14u;
    {
        const bool branch_taken_0x1d9b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9b14) {
            ctx->pc = 0x1D9B24u;
            goto label_1d9b24;
        }
    }
    ctx->pc = 0x1D9B1Cu;
label_1d9b1c:
    // 0x1d9b1c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d9b20:
    if (ctx->pc == 0x1D9B20u) {
        ctx->pc = 0x1D9B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B1Cu;
        // 0x1d9b20: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9B24u;
        goto label_1d9b24;
    }
    ctx->pc = 0x1D9B1Cu;
    {
        const bool branch_taken_0x1d9b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B1Cu;
        // 0x1d9b20: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9b1c) {
            ctx->pc = 0x1D9B34u;
            goto label_1d9b34;
        }
    }
    ctx->pc = 0x1D9B24u;
label_1d9b24:
    // 0x1d9b24: 0x0  nop
    ctx->pc = 0x1d9b24u;
    // NOP
label_1d9b28:
    // 0x1d9b28: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x1d9b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
label_1d9b2c:
    // 0x1d9b2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d9b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d9b30:
    // 0x1d9b30: 0xaf828cf4  sw          $v0, -0x730C($gp)
    ctx->pc = 0x1d9b30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 2));
label_1d9b34:
    // 0x1d9b34: 0x0  nop
    ctx->pc = 0x1d9b34u;
    // NOP
label_1d9b38:
    // 0x1d9b38: 0x8f828cd4  lw          $v0, -0x732C($gp)
    ctx->pc = 0x1d9b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937812)));
label_1d9b3c:
    // 0x1d9b3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d9b40:
    if (ctx->pc == 0x1D9B40u) {
        ctx->pc = 0x1D9B44u;
        goto label_1d9b44;
    }
    ctx->pc = 0x1D9B3Cu;
    {
        const bool branch_taken_0x1d9b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9b3c) {
            ctx->pc = 0x1D9B50u;
            goto label_1d9b50;
        }
    }
    ctx->pc = 0x1D9B44u;
label_1d9b44:
    // 0x1d9b44: 0x8f828cd0  lw          $v0, -0x7330($gp)
    ctx->pc = 0x1d9b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
label_1d9b48:
    // 0x1d9b48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d9b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d9b4c:
    // 0x1d9b4c: 0xaf828cd0  sw          $v0, -0x7330($gp)
    ctx->pc = 0x1d9b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937808), GPR_U32(ctx, 2));
label_1d9b50:
    // 0x1d9b50: 0x8f828cc4  lw          $v0, -0x733C($gp)
    ctx->pc = 0x1d9b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937796)));
label_1d9b54:
    // 0x1d9b54: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1d9b58:
    if (ctx->pc == 0x1D9B58u) {
        ctx->pc = 0x1D9B5Cu;
        goto label_1d9b5c;
    }
    ctx->pc = 0x1D9B54u;
    {
        const bool branch_taken_0x1d9b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9b54) {
            ctx->pc = 0x1D9BB8u;
            goto label_1d9bb8;
        }
    }
    ctx->pc = 0x1D9B5Cu;
label_1d9b5c:
    // 0x1d9b5c: 0x8f828cc0  lw          $v0, -0x7340($gp)
    ctx->pc = 0x1d9b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937792)));
label_1d9b60:
    // 0x1d9b60: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1d9b60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1d9b64:
    // 0x1d9b64: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1d9b68:
    if (ctx->pc == 0x1D9B68u) {
        ctx->pc = 0x1D9B6Cu;
        goto label_1d9b6c;
    }
    ctx->pc = 0x1D9B64u;
    {
        const bool branch_taken_0x1d9b64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9b64) {
            ctx->pc = 0x1D9B8Cu;
            goto label_1d9b8c;
        }
    }
    ctx->pc = 0x1D9B6Cu;
label_1d9b6c:
    // 0x1d9b6c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1d9b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1d9b70:
    // 0x1d9b70: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1d9b70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1d9b74:
    // 0x1d9b74: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1d9b78:
    if (ctx->pc == 0x1D9B78u) {
        ctx->pc = 0x1D9B7Cu;
        goto label_1d9b7c;
    }
    ctx->pc = 0x1D9B74u;
    {
        const bool branch_taken_0x1d9b74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9b74) {
            ctx->pc = 0x1D9B84u;
            goto label_1d9b84;
        }
    }
    ctx->pc = 0x1D9B7Cu;
label_1d9b7c:
    // 0x1d9b7c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d9b80:
    if (ctx->pc == 0x1D9B80u) {
        ctx->pc = 0x1D9B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B7Cu;
        // 0x1d9b80: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9B84u;
        goto label_1d9b84;
    }
    ctx->pc = 0x1D9B7Cu;
    {
        const bool branch_taken_0x1d9b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B7Cu;
        // 0x1d9b80: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9b7c) {
            ctx->pc = 0x1D9B8Cu;
            goto label_1d9b8c;
        }
    }
    ctx->pc = 0x1D9B84u;
label_1d9b84:
    // 0x1d9b84: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1d9b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d9b88:
    // 0x1d9b88: 0xaf828cc0  sw          $v0, -0x7340($gp)
    ctx->pc = 0x1d9b88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
label_1d9b8c:
    // 0x1d9b8c: 0x0  nop
    ctx->pc = 0x1d9b8cu;
    // NOP
label_1d9b90:
    // 0x1d9b90: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1d9b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1d9b94:
    // 0x1d9b94: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_1d9b98:
    if (ctx->pc == 0x1D9B98u) {
        ctx->pc = 0x1D9B9Cu;
        goto label_1d9b9c;
    }
    ctx->pc = 0x1D9B94u;
    {
        const bool branch_taken_0x1d9b94 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d9b94) {
            ctx->pc = 0x1D9BB8u;
            goto label_1d9bb8;
        }
    }
    ctx->pc = 0x1D9B9Cu;
label_1d9b9c:
    // 0x1d9b9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d9b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d9ba0:
    // 0x1d9ba0: 0xaf828cb0  sw          $v0, -0x7350($gp)
    ctx->pc = 0x1d9ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 2));
label_1d9ba4:
    // 0x1d9ba4: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1d9ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1d9ba8:
    // 0x1d9ba8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d9bac:
    if (ctx->pc == 0x1D9BACu) {
        ctx->pc = 0x1D9BB0u;
        goto label_1d9bb0;
    }
    ctx->pc = 0x1D9BA8u;
    {
        const bool branch_taken_0x1d9ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9ba8) {
            ctx->pc = 0x1D9BB8u;
            goto label_1d9bb8;
        }
    }
    ctx->pc = 0x1D9BB0u;
label_1d9bb0:
    // 0x1d9bb0: 0x8f828ca8  lw          $v0, -0x7358($gp)
    ctx->pc = 0x1d9bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
label_1d9bb4:
    // 0x1d9bb4: 0xaf828cb4  sw          $v0, -0x734C($gp)
    ctx->pc = 0x1d9bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937780), GPR_U32(ctx, 2));
label_1d9bb8:
    // 0x1d9bb8: 0xc077a7c  jal         func_1DE9F0
label_1d9bbc:
    if (ctx->pc == 0x1D9BBCu) {
        ctx->pc = 0x1D9BC0u;
        goto label_1d9bc0;
    }
    ctx->pc = 0x1D9BB8u;
    SET_GPR_U32(ctx, 31, 0x1D9BC0u);
    ctx->pc = 0x1DE9F0u;
    { ctx->pc = 0x1de9f0; return; }
    ctx->pc = 0x1D9BC0u;
label_1d9bc0:
    // 0x1d9bc0: 0x8f848ca0  lw          $a0, -0x7360($gp)
    ctx->pc = 0x1d9bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1d9bc4:
    // 0x1d9bc4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d9bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d9bc8:
    // 0x1d9bc8: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
label_1d9bcc:
    if (ctx->pc == 0x1D9BCCu) {
        ctx->pc = 0x1D9BD0u;
        goto label_1d9bd0;
    }
    ctx->pc = 0x1D9BC8u;
    {
        const bool branch_taken_0x1d9bc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d9bc8) {
            ctx->pc = 0x1D9C54u;
            goto label_1d9c54;
        }
    }
    ctx->pc = 0x1D9BD0u;
label_1d9bd0:
    // 0x1d9bd0: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d9bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d9bd4:
    // 0x1d9bd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d9bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d9bd8:
    // 0x1d9bd8: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_1d9bdc:
    if (ctx->pc == 0x1D9BDCu) {
        ctx->pc = 0x1D9BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9BD8u;
        // 0x1d9bdc: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9BE0u;
        goto label_1d9be0;
    }
    ctx->pc = 0x1D9BD8u;
    {
        const bool branch_taken_0x1d9bd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9BD8u;
        // 0x1d9bdc: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9bd8) {
            ctx->pc = 0x1D9C00u;
            goto label_1d9c00;
        }
    }
    ctx->pc = 0x1D9BE0u;
label_1d9be0:
    // 0x1d9be0: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d9be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d9be4:
    // 0x1d9be4: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1d9be4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1d9be8:
    // 0x1d9be8: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_1d9bec:
    if (ctx->pc == 0x1D9BECu) {
        ctx->pc = 0x1D9BF0u;
        goto label_1d9bf0;
    }
    ctx->pc = 0x1D9BE8u;
    {
        const bool branch_taken_0x1d9be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9be8) {
            ctx->pc = 0x1D9C54u;
            goto label_1d9c54;
        }
    }
    ctx->pc = 0x1D9BF0u;
label_1d9bf0:
    // 0x1d9bf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d9bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d9bf4:
    // 0x1d9bf4: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1d9bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1d9bf8:
    // 0x1d9bf8: 0x10000016  b           . + 4 + (0x16 << 2)
label_1d9bfc:
    if (ctx->pc == 0x1D9BFCu) {
        ctx->pc = 0x1D9BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9BF8u;
        // 0x1d9bfc: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9C00u;
        goto label_1d9c00;
    }
    ctx->pc = 0x1D9BF8u;
    {
        const bool branch_taken_0x1d9bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9BF8u;
        // 0x1d9bfc: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9bf8) {
            ctx->pc = 0x1D9C54u;
            goto label_1d9c54;
        }
    }
    ctx->pc = 0x1D9C00u;
label_1d9c00:
    // 0x1d9c00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d9c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9c04:
    // 0x1d9c04: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
label_1d9c08:
    if (ctx->pc == 0x1D9C08u) {
        ctx->pc = 0x1D9C0Cu;
        goto label_1d9c0c;
    }
    ctx->pc = 0x1D9C04u;
    {
        const bool branch_taken_0x1d9c04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d9c04) {
            ctx->pc = 0x1D9C2Cu;
            goto label_1d9c2c;
        }
    }
    ctx->pc = 0x1D9C0Cu;
label_1d9c0c:
    // 0x1d9c0c: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d9c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d9c10:
    // 0x1d9c10: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x1d9c10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
label_1d9c14:
    // 0x1d9c14: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_1d9c18:
    if (ctx->pc == 0x1D9C18u) {
        ctx->pc = 0x1D9C1Cu;
        goto label_1d9c1c;
    }
    ctx->pc = 0x1D9C14u;
    {
        const bool branch_taken_0x1d9c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9c14) {
            ctx->pc = 0x1D9C54u;
            goto label_1d9c54;
        }
    }
    ctx->pc = 0x1D9C1Cu;
label_1d9c1c:
    // 0x1d9c1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d9c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d9c20:
    // 0x1d9c20: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1d9c20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1d9c24:
    // 0x1d9c24: 0x1000000b  b           . + 4 + (0xB << 2)
label_1d9c28:
    if (ctx->pc == 0x1D9C28u) {
        ctx->pc = 0x1D9C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9C24u;
        // 0x1d9c28: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9C2Cu;
        goto label_1d9c2c;
    }
    ctx->pc = 0x1D9C24u;
    {
        const bool branch_taken_0x1d9c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9C24u;
        // 0x1d9c28: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9c24) {
            ctx->pc = 0x1D9C54u;
            goto label_1d9c54;
        }
    }
    ctx->pc = 0x1D9C2Cu;
label_1d9c2c:
    // 0x1d9c2c: 0x0  nop
    ctx->pc = 0x1d9c2cu;
    // NOP
label_1d9c30:
    // 0x1d9c30: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d9c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d9c34:
    // 0x1d9c34: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_1d9c38:
    if (ctx->pc == 0x1D9C38u) {
        ctx->pc = 0x1D9C3Cu;
        goto label_1d9c3c;
    }
    ctx->pc = 0x1D9C34u;
    {
        const bool branch_taken_0x1d9c34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d9c34) {
            ctx->pc = 0x1D9C54u;
            goto label_1d9c54;
        }
    }
    ctx->pc = 0x1D9C3Cu;
label_1d9c3c:
    // 0x1d9c3c: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d9c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d9c40:
    // 0x1d9c40: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1d9c40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1d9c44:
    // 0x1d9c44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d9c48:
    if (ctx->pc == 0x1D9C48u) {
        ctx->pc = 0x1D9C4Cu;
        goto label_1d9c4c;
    }
    ctx->pc = 0x1D9C44u;
    {
        const bool branch_taken_0x1d9c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9c44) {
            ctx->pc = 0x1D9C54u;
            goto label_1d9c54;
        }
    }
    ctx->pc = 0x1D9C4Cu;
label_1d9c4c:
    // 0x1d9c4c: 0xaf838ca0  sw          $v1, -0x7360($gp)
    ctx->pc = 0x1d9c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 3));
label_1d9c50:
    // 0x1d9c50: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1d9c50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1d9c54:
    // 0x1d9c54: 0x0  nop
    ctx->pc = 0x1d9c54u;
    // NOP
label_1d9c58:
    // 0x1d9c58: 0xc07a9d8  jal         func_1EA760
label_1d9c5c:
    if (ctx->pc == 0x1D9C5Cu) {
        ctx->pc = 0x1D9C60u;
        goto label_1d9c60;
    }
    ctx->pc = 0x1D9C58u;
    SET_GPR_U32(ctx, 31, 0x1D9C60u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x1D9C60u;
label_1d9c60:
    // 0x1d9c60: 0xc04e168  jal         func_1385A0
label_1d9c64:
    if (ctx->pc == 0x1D9C64u) {
        ctx->pc = 0x1D9C68u;
        goto label_1d9c68;
    }
    ctx->pc = 0x1D9C60u;
    SET_GPR_U32(ctx, 31, 0x1D9C68u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1D9C60u, 0x1D9C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9C68u;
label_1d9c68:
    // 0x1d9c68: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1d9c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1d9c6c:
    // 0x1d9c6c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1d9c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1d9c70:
    // 0x1d9c70: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x1d9c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_1d9c74:
    // 0x1d9c74: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1d9c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1d9c78:
    // 0x1d9c78: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d9c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d9c7c:
    // 0x1d9c7c: 0x27828ce0  addiu       $v0, $gp, -0x7320
    ctx->pc = 0x1d9c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937824));
label_1d9c80:
    // 0x1d9c80: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1d9c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1d9c84:
    // 0x1d9c84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d9c84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9c88:
    // 0x1d9c88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9c88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9c8c:
    // 0x1d9c8c: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1d9c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1d9c90:
    // 0x1d9c90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d9c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d9c94:
    // 0x1d9c94: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d9c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d9c98:
    // 0x1d9c98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d9c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d9c9c:
    // 0x1d9c9c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d9c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9ca0:
    // 0x1d9ca0: 0xc066c72  jal         func_19B1C8
label_1d9ca4:
    if (ctx->pc == 0x1D9CA4u) {
        ctx->pc = 0x1D9CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9CA0u;
        // 0x1d9ca4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9CA8u;
        goto label_1d9ca8;
    }
    ctx->pc = 0x1D9CA0u;
    SET_GPR_U32(ctx, 31, 0x1D9CA8u);
    ctx->pc = 0x1D9CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9CA0u;
    // 0x1d9ca4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D9CA0u, 0x1D9CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9CA8u;
label_1d9ca8:
    // 0x1d9ca8: 0xc077e84  jal         func_1DFA10
label_1d9cac:
    if (ctx->pc == 0x1D9CACu) {
        ctx->pc = 0x1D9CB0u;
        goto label_1d9cb0;
    }
    ctx->pc = 0x1D9CA8u;
    SET_GPR_U32(ctx, 31, 0x1D9CB0u);
    ctx->pc = 0x1DFA10u;
    { ctx->pc = 0x1dfa10; return; }
    ctx->pc = 0x1D9CB0u;
label_1d9cb0:
    // 0x1d9cb0: 0xc077d90  jal         func_1DF640
label_1d9cb4:
    if (ctx->pc == 0x1D9CB4u) {
        ctx->pc = 0x1D9CB8u;
        goto label_1d9cb8;
    }
    ctx->pc = 0x1D9CB0u;
    SET_GPR_U32(ctx, 31, 0x1D9CB8u);
    ctx->pc = 0x1DF640u;
    { ctx->pc = 0x1df640; return; }
    ctx->pc = 0x1D9CB8u;
label_1d9cb8:
    // 0x1d9cb8: 0xc077ab4  jal         func_1DEAD0
label_1d9cbc:
    if (ctx->pc == 0x1D9CBCu) {
        ctx->pc = 0x1D9CC0u;
        goto label_1d9cc0;
    }
    ctx->pc = 0x1D9CB8u;
    SET_GPR_U32(ctx, 31, 0x1D9CC0u);
    ctx->pc = 0x1DEAD0u;
    { ctx->pc = 0x1dead0; return; }
    ctx->pc = 0x1D9CC0u;
label_1d9cc0:
    // 0x1d9cc0: 0xc077880  jal         func_1DE200
label_1d9cc4:
    if (ctx->pc == 0x1D9CC4u) {
        ctx->pc = 0x1D9CC8u;
        goto label_1d9cc8;
    }
    ctx->pc = 0x1D9CC0u;
    SET_GPR_U32(ctx, 31, 0x1D9CC8u);
    ctx->pc = 0x1DE200u;
    { ctx->pc = 0x1de200; return; }
    ctx->pc = 0x1D9CC8u;
label_1d9cc8:
    // 0x1d9cc8: 0x8f828c8c  lw          $v0, -0x7374($gp)
    ctx->pc = 0x1d9cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937740)));
label_1d9ccc:
    // 0x1d9ccc: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_1d9cd0:
    if (ctx->pc == 0x1D9CD0u) {
        ctx->pc = 0x1D9CD4u;
        goto label_1d9cd4;
    }
    ctx->pc = 0x1D9CCCu;
    {
        const bool branch_taken_0x1d9ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9ccc) {
            ctx->pc = 0x1D9DA8u;
            goto label_1d9da8;
        }
    }
    ctx->pc = 0x1D9CD4u;
label_1d9cd4:
    // 0x1d9cd4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d9cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d9cd8:
    // 0x1d9cd8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1d9cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1d9cdc:
    // 0x1d9cdc: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d9cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d9ce0:
    // 0x1d9ce0: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1d9ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1d9ce4:
    // 0x1d9ce4: 0x27828c90  addiu       $v0, $gp, -0x7370
    ctx->pc = 0x1d9ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
label_1d9ce8:
    // 0x1d9ce8: 0x2406027a  addiu       $a2, $zero, 0x27A
    ctx->pc = 0x1d9ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
label_1d9cec:
    // 0x1d9cec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d9cecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9cf0:
    // 0x1d9cf0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9cf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9cf4:
    // 0x1d9cf4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d9cf4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9cf8:
    // 0x1d9cf8: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1d9cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1d9cfc:
    // 0x1d9cfc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d9cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d9d00:
    // 0x1d9d00: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x1d9d00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d9d04:
    // 0x1d9d04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d9d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d9d08:
    // 0x1d9d08: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d9d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9d0c:
    // 0x1d9d0c: 0xc066c72  jal         func_19B1C8
label_1d9d10:
    if (ctx->pc == 0x1D9D10u) {
        ctx->pc = 0x1D9D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D0Cu;
        // 0x1d9d10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9D14u;
        goto label_1d9d14;
    }
    ctx->pc = 0x1D9D0Cu;
    SET_GPR_U32(ctx, 31, 0x1D9D14u);
    ctx->pc = 0x1D9D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D0Cu;
    // 0x1d9d10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D9D0Cu, 0x1D9D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D14u;
label_1d9d14:
    // 0x1d9d14: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d9d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d9d18:
    // 0x1d9d18: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1d9d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1d9d1c:
    // 0x1d9d1c: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d9d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d9d20:
    // 0x1d9d20: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1d9d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1d9d24:
    // 0x1d9d24: 0x8f848c80  lw          $a0, -0x7380($gp)
    ctx->pc = 0x1d9d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1d9d28:
    // 0x1d9d28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d9d28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d9d2c:
    // 0x1d9d2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d9d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d9d30:
    // 0x1d9d30: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1d9d30u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9d34:
    // 0x1d9d34: 0xc070e2c  jal         func_1C38B0
label_1d9d38:
    if (ctx->pc == 0x1D9D38u) {
        ctx->pc = 0x1D9D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D34u;
        // 0x1d9d38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9D3Cu;
        goto label_1d9d3c;
    }
    ctx->pc = 0x1D9D34u;
    SET_GPR_U32(ctx, 31, 0x1D9D3Cu);
    ctx->pc = 0x1D9D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D34u;
    // 0x1d9d38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C38B0u, 0x1D9D34u, 0x1D9D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D3Cu;
label_1d9d3c:
    // 0x1d9d3c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d9d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d9d40:
    // 0x1d9d40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d9d44:
    // 0x1d9d44: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1d9d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1d9d48:
    // 0x1d9d48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d9d48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9d4c:
    // 0x1d9d4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9d4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9d50:
    // 0x1d9d50: 0xc066c72  jal         func_19B1C8
label_1d9d54:
    if (ctx->pc == 0x1D9D54u) {
        ctx->pc = 0x1D9D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D50u;
        // 0x1d9d54: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9D58u;
        goto label_1d9d58;
    }
    ctx->pc = 0x1D9D50u;
    SET_GPR_U32(ctx, 31, 0x1D9D58u);
    ctx->pc = 0x1D9D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D50u;
    // 0x1d9d54: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D9D50u, 0x1D9D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D58u;
label_1d9d58:
    // 0x1d9d58: 0x8f828c88  lw          $v0, -0x7378($gp)
    ctx->pc = 0x1d9d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1d9d5c:
    // 0x1d9d5c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1d9d60:
    if (ctx->pc == 0x1D9D60u) {
        ctx->pc = 0x1D9D64u;
        goto label_1d9d64;
    }
    ctx->pc = 0x1D9D5Cu;
    {
        const bool branch_taken_0x1d9d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9d5c) {
            ctx->pc = 0x1D9DA8u;
            goto label_1d9da8;
        }
    }
    ctx->pc = 0x1D9D64u;
label_1d9d64:
    // 0x1d9d64: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d9d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d9d68:
    // 0x1d9d68: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1d9d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1d9d6c:
    // 0x1d9d6c: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d9d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d9d70:
    // 0x1d9d70: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1d9d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1d9d74:
    // 0x1d9d74: 0x8f848c84  lw          $a0, -0x737C($gp)
    ctx->pc = 0x1d9d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
label_1d9d78:
    // 0x1d9d78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d9d78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d9d7c:
    // 0x1d9d7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d9d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d9d80:
    // 0x1d9d80: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x1d9d80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1d9d84:
    // 0x1d9d84: 0xc070e2c  jal         func_1C38B0
label_1d9d88:
    if (ctx->pc == 0x1D9D88u) {
        ctx->pc = 0x1D9D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D84u;
        // 0x1d9d88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9D8Cu;
        goto label_1d9d8c;
    }
    ctx->pc = 0x1D9D84u;
    SET_GPR_U32(ctx, 31, 0x1D9D8Cu);
    ctx->pc = 0x1D9D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D84u;
    // 0x1d9d88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C38B0u, 0x1D9D84u, 0x1D9D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D8Cu;
label_1d9d8c:
    // 0x1d9d8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d9d90:
    // 0x1d9d90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d9d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d9d94:
    // 0x1d9d94: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1d9d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1d9d98:
    // 0x1d9d98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d9d98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9d9c:
    // 0x1d9d9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9d9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9da0:
    // 0x1d9da0: 0xc066c72  jal         func_19B1C8
label_1d9da4:
    if (ctx->pc == 0x1D9DA4u) {
        ctx->pc = 0x1D9DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9DA0u;
        // 0x1d9da4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9DA8u;
        goto label_1d9da8;
    }
    ctx->pc = 0x1D9DA0u;
    SET_GPR_U32(ctx, 31, 0x1D9DA8u);
    ctx->pc = 0x1D9DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9DA0u;
    // 0x1d9da4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D9DA0u, 0x1D9DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9DA8u;
label_1d9da8:
    // 0x1d9da8: 0xc07a86c  jal         func_1EA1B0
label_1d9dac:
    if (ctx->pc == 0x1D9DACu) {
        ctx->pc = 0x1D9DB0u;
        goto label_1d9db0;
    }
    ctx->pc = 0x1D9DA8u;
    SET_GPR_U32(ctx, 31, 0x1D9DB0u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x1D9DB0u;
label_1d9db0:
    // 0x1d9db0: 0xc04e120  jal         func_138480
label_1d9db4:
    if (ctx->pc == 0x1D9DB4u) {
        ctx->pc = 0x1D9DB8u;
        goto label_1d9db8;
    }
    ctx->pc = 0x1D9DB0u;
    SET_GPR_U32(ctx, 31, 0x1D9DB8u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1D9DB0u, 0x1D9DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9DB8u;
label_1d9db8:
    // 0x1d9db8: 0xc05b578  jal         func_16D5E0
label_1d9dbc:
    if (ctx->pc == 0x1D9DBCu) {
        ctx->pc = 0x1D9DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9DB8u;
        // 0x1d9dbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9DC0u;
        goto label_1d9dc0;
    }
    ctx->pc = 0x1D9DB8u;
    SET_GPR_U32(ctx, 31, 0x1D9DC0u);
    ctx->pc = 0x1D9DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9DB8u;
    // 0x1d9dbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1D9DB8u, 0x1D9DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9DC0u;
label_1d9dc0:
    // 0x1d9dc0: 0xc060258  jal         func_180960
label_1d9dc4:
    if (ctx->pc == 0x1D9DC4u) {
        ctx->pc = 0x1D9DC8u;
        goto label_1d9dc8;
    }
    ctx->pc = 0x1D9DC0u;
    SET_GPR_U32(ctx, 31, 0x1D9DC8u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1D9DC0u, 0x1D9DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9DC8u;
label_1d9dc8:
    // 0x1d9dc8: 0xc04e198  jal         func_138660
label_1d9dcc:
    if (ctx->pc == 0x1D9DCCu) {
        ctx->pc = 0x1D9DD0u;
        goto label_1d9dd0;
    }
    ctx->pc = 0x1D9DC8u;
    SET_GPR_U32(ctx, 31, 0x1D9DD0u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x1D9DC8u, 0x1D9DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9DD0u;
label_1d9dd0:
    // 0x1d9dd0: 0x1040ff4f  beqz        $v0, . + 4 + (-0xB1 << 2)
label_1d9dd4:
    if (ctx->pc == 0x1D9DD4u) {
        ctx->pc = 0x1D9DD8u;
        goto label_1d9dd8;
    }
    ctx->pc = 0x1D9DD0u;
    {
        const bool branch_taken_0x1d9dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9dd0) {
            ctx->pc = 0x1D9B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9b10;
        }
    }
    ctx->pc = 0x1D9DD8u;
label_1d9dd8:
    // 0x1d9dd8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1d9dd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d9ddc:
    // 0x1d9ddc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d9ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1d9de0:
    // 0x1d9de0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d9de0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d9de4:
    // 0x1d9de4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d9de4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d9de8:
    // 0x1d9de8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d9de8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d9dec:
    // 0x1d9dec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d9decu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d9df0:
    // 0x1d9df0: 0x3e00008  jr          $ra
label_1d9df4:
    if (ctx->pc == 0x1D9DF4u) {
        ctx->pc = 0x1D9DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9DF0u;
        // 0x1d9df4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9DF8u;
        goto label_1d9df8;
    }
    ctx->pc = 0x1D9DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9DF0u;
        // 0x1d9df4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9DF8u;
label_1d9df8:
    // 0x1d9df8: 0x0  nop
    ctx->pc = 0x1d9df8u;
    // NOP
label_1d9dfc:
    // 0x1d9dfc: 0x0  nop
    ctx->pc = 0x1d9dfcu;
    // NOP
label_1d9e00:
    // 0x1d9e00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d9e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1d9e04:
    // 0x1d9e04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d9e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1d9e08:
    // 0x1d9e08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d9e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1d9e0c:
    // 0x1d9e0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d9e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d9e10:
    // 0x1d9e10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d9e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d9e14:
    // 0x1d9e14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d9e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d9e18:
    // 0x1d9e18: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1d9e18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1d9e1c:
    // 0x1d9e1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d9e20:
    if (ctx->pc == 0x1D9E20u) {
        ctx->pc = 0x1D9E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E1Cu;
        // 0x1d9e20: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9E24u;
        goto label_1d9e24;
    }
    ctx->pc = 0x1D9E1Cu;
    {
        const bool branch_taken_0x1d9e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E1Cu;
        // 0x1d9e20: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e1c) {
            ctx->pc = 0x1D9E2Cu;
            goto label_1d9e2c;
        }
    }
    ctx->pc = 0x1D9E24u;
label_1d9e24:
    // 0x1d9e24: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d9e28:
    if (ctx->pc == 0x1D9E28u) {
        ctx->pc = 0x1D9E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E24u;
        // 0x1d9e28: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9E2Cu;
        goto label_1d9e2c;
    }
    ctx->pc = 0x1D9E24u;
    {
        const bool branch_taken_0x1d9e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E24u;
        // 0x1d9e28: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e24) {
            ctx->pc = 0x1D9E38u;
            goto label_1d9e38;
        }
    }
    ctx->pc = 0x1D9E2Cu;
label_1d9e2c:
    // 0x1d9e2c: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x1d9e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
label_1d9e30:
    // 0x1d9e30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d9e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d9e34:
    // 0x1d9e34: 0xaf828cf4  sw          $v0, -0x730C($gp)
    ctx->pc = 0x1d9e34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 2));
label_1d9e38:
    // 0x1d9e38: 0x8f828cd4  lw          $v0, -0x732C($gp)
    ctx->pc = 0x1d9e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937812)));
label_1d9e3c:
    // 0x1d9e3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d9e40:
    if (ctx->pc == 0x1D9E40u) {
        ctx->pc = 0x1D9E44u;
        goto label_1d9e44;
    }
    ctx->pc = 0x1D9E3Cu;
    {
        const bool branch_taken_0x1d9e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9e3c) {
            ctx->pc = 0x1D9E50u;
            goto label_1d9e50;
        }
    }
    ctx->pc = 0x1D9E44u;
label_1d9e44:
    // 0x1d9e44: 0x8f828cd0  lw          $v0, -0x7330($gp)
    ctx->pc = 0x1d9e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
label_1d9e48:
    // 0x1d9e48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d9e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d9e4c:
    // 0x1d9e4c: 0xaf828cd0  sw          $v0, -0x7330($gp)
    ctx->pc = 0x1d9e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937808), GPR_U32(ctx, 2));
label_1d9e50:
    // 0x1d9e50: 0x8f828cc4  lw          $v0, -0x733C($gp)
    ctx->pc = 0x1d9e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937796)));
label_1d9e54:
    // 0x1d9e54: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_1d9e58:
    if (ctx->pc == 0x1D9E58u) {
        ctx->pc = 0x1D9E5Cu;
        goto label_1d9e5c;
    }
    ctx->pc = 0x1D9E54u;
    {
        const bool branch_taken_0x1d9e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9e54) {
            ctx->pc = 0x1D9EB4u;
            goto label_1d9eb4;
        }
    }
    ctx->pc = 0x1D9E5Cu;
label_1d9e5c:
    // 0x1d9e5c: 0x8f828cc0  lw          $v0, -0x7340($gp)
    ctx->pc = 0x1d9e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937792)));
label_1d9e60:
    // 0x1d9e60: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1d9e60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1d9e64:
    // 0x1d9e64: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1d9e68:
    if (ctx->pc == 0x1D9E68u) {
        ctx->pc = 0x1D9E6Cu;
        goto label_1d9e6c;
    }
    ctx->pc = 0x1D9E64u;
    {
        const bool branch_taken_0x1d9e64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9e64) {
            ctx->pc = 0x1D9E8Cu;
            goto label_1d9e8c;
        }
    }
    ctx->pc = 0x1D9E6Cu;
label_1d9e6c:
    // 0x1d9e6c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1d9e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1d9e70:
    // 0x1d9e70: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1d9e70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1d9e74:
    // 0x1d9e74: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1d9e78:
    if (ctx->pc == 0x1D9E78u) {
        ctx->pc = 0x1D9E7Cu;
        goto label_1d9e7c;
    }
    ctx->pc = 0x1D9E74u;
    {
        const bool branch_taken_0x1d9e74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9e74) {
            ctx->pc = 0x1D9E84u;
            goto label_1d9e84;
        }
    }
    ctx->pc = 0x1D9E7Cu;
label_1d9e7c:
    // 0x1d9e7c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d9e80:
    if (ctx->pc == 0x1D9E80u) {
        ctx->pc = 0x1D9E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E7Cu;
        // 0x1d9e80: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9E84u;
        goto label_1d9e84;
    }
    ctx->pc = 0x1D9E7Cu;
    {
        const bool branch_taken_0x1d9e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E7Cu;
        // 0x1d9e80: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e7c) {
            ctx->pc = 0x1D9E8Cu;
            goto label_1d9e8c;
        }
    }
    ctx->pc = 0x1D9E84u;
label_1d9e84:
    // 0x1d9e84: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1d9e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d9e88:
    // 0x1d9e88: 0xaf828cc0  sw          $v0, -0x7340($gp)
    ctx->pc = 0x1d9e88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
label_1d9e8c:
    // 0x1d9e8c: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1d9e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1d9e90:
    // 0x1d9e90: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_1d9e94:
    if (ctx->pc == 0x1D9E94u) {
        ctx->pc = 0x1D9E98u;
        goto label_1d9e98;
    }
    ctx->pc = 0x1D9E90u;
    {
        const bool branch_taken_0x1d9e90 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d9e90) {
            ctx->pc = 0x1D9EB4u;
            goto label_1d9eb4;
        }
    }
    ctx->pc = 0x1D9E98u;
label_1d9e98:
    // 0x1d9e98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d9e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d9e9c:
    // 0x1d9e9c: 0xaf828cb0  sw          $v0, -0x7350($gp)
    ctx->pc = 0x1d9e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 2));
label_1d9ea0:
    // 0x1d9ea0: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1d9ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1d9ea4:
    // 0x1d9ea4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d9ea8:
    if (ctx->pc == 0x1D9EA8u) {
        ctx->pc = 0x1D9EACu;
        goto label_1d9eac;
    }
    ctx->pc = 0x1D9EA4u;
    {
        const bool branch_taken_0x1d9ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9ea4) {
            ctx->pc = 0x1D9EB4u;
            goto label_1d9eb4;
        }
    }
    ctx->pc = 0x1D9EACu;
label_1d9eac:
    // 0x1d9eac: 0x8f828ca8  lw          $v0, -0x7358($gp)
    ctx->pc = 0x1d9eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
label_1d9eb0:
    // 0x1d9eb0: 0xaf828cb4  sw          $v0, -0x734C($gp)
    ctx->pc = 0x1d9eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937780), GPR_U32(ctx, 2));
label_1d9eb4:
    // 0x1d9eb4: 0xc077a7c  jal         func_1DE9F0
label_1d9eb8:
    if (ctx->pc == 0x1D9EB8u) {
        ctx->pc = 0x1D9EBCu;
        goto label_1d9ebc;
    }
    ctx->pc = 0x1D9EB4u;
    SET_GPR_U32(ctx, 31, 0x1D9EBCu);
    ctx->pc = 0x1DE9F0u;
    { ctx->pc = 0x1de9f0; return; }
    ctx->pc = 0x1D9EBCu;
label_1d9ebc:
    // 0x1d9ebc: 0x8f848ca0  lw          $a0, -0x7360($gp)
    ctx->pc = 0x1d9ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1d9ec0:
    // 0x1d9ec0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d9ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d9ec4:
    // 0x1d9ec4: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
label_1d9ec8:
    if (ctx->pc == 0x1D9EC8u) {
        ctx->pc = 0x1D9ECCu;
        goto label_1d9ecc;
    }
    ctx->pc = 0x1D9EC4u;
    {
        const bool branch_taken_0x1d9ec4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d9ec4) {
            ctx->pc = 0x1D9F40u;
            goto label_1d9f40;
        }
    }
    ctx->pc = 0x1D9ECCu;
label_1d9ecc:
    // 0x1d9ecc: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d9eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d9ed0:
    // 0x1d9ed0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d9ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d9ed4:
    // 0x1d9ed4: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_1d9ed8:
    if (ctx->pc == 0x1D9ED8u) {
        ctx->pc = 0x1D9ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9ED4u;
        // 0x1d9ed8: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9EDCu;
        goto label_1d9edc;
    }
    ctx->pc = 0x1D9ED4u;
    {
        const bool branch_taken_0x1d9ed4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9ED4u;
        // 0x1d9ed8: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9ed4) {
            ctx->pc = 0x1D9EF8u;
            goto label_1d9ef8;
        }
    }
    ctx->pc = 0x1D9EDCu;
label_1d9edc:
    // 0x1d9edc: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d9edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d9ee0:
    // 0x1d9ee0: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1d9ee0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1d9ee4:
    // 0x1d9ee4: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_1d9ee8:
    if (ctx->pc == 0x1D9EE8u) {
        ctx->pc = 0x1D9EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EE4u;
        // 0x1d9ee8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9EECu;
        goto label_1d9eec;
    }
    ctx->pc = 0x1D9EE4u;
    {
        const bool branch_taken_0x1d9ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EE4u;
        // 0x1d9ee8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9ee4) {
            ctx->pc = 0x1D9F40u;
            goto label_1d9f40;
        }
    }
    ctx->pc = 0x1D9EECu;
label_1d9eec:
    // 0x1d9eec: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1d9eecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1d9ef0:
    // 0x1d9ef0: 0x10000013  b           . + 4 + (0x13 << 2)
label_1d9ef4:
    if (ctx->pc == 0x1D9EF4u) {
        ctx->pc = 0x1D9EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EF0u;
        // 0x1d9ef4: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9EF8u;
        goto label_1d9ef8;
    }
    ctx->pc = 0x1D9EF0u;
    {
        const bool branch_taken_0x1d9ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EF0u;
        // 0x1d9ef4: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9ef0) {
            ctx->pc = 0x1D9F40u;
            goto label_1d9f40;
        }
    }
    ctx->pc = 0x1D9EF8u;
label_1d9ef8:
    // 0x1d9ef8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d9ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9efc:
    // 0x1d9efc: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
label_1d9f00:
    if (ctx->pc == 0x1D9F00u) {
        ctx->pc = 0x1D9F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EFCu;
        // 0x1d9f00: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9F04u;
        goto label_1d9f04;
    }
    ctx->pc = 0x1D9EFCu;
    {
        const bool branch_taken_0x1d9efc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D9F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EFCu;
        // 0x1d9f00: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9efc) {
            ctx->pc = 0x1D9F20u;
            goto label_1d9f20;
        }
    }
    ctx->pc = 0x1D9F04u;
label_1d9f04:
    // 0x1d9f04: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d9f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d9f08:
    // 0x1d9f08: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x1d9f08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
label_1d9f0c:
    // 0x1d9f0c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1d9f10:
    if (ctx->pc == 0x1D9F10u) {
        ctx->pc = 0x1D9F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F0Cu;
        // 0x1d9f10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9F14u;
        goto label_1d9f14;
    }
    ctx->pc = 0x1D9F0Cu;
    {
        const bool branch_taken_0x1d9f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F0Cu;
        // 0x1d9f10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9f0c) {
            ctx->pc = 0x1D9F40u;
            goto label_1d9f40;
        }
    }
    ctx->pc = 0x1D9F14u;
label_1d9f14:
    // 0x1d9f14: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1d9f14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1d9f18:
    // 0x1d9f18: 0x10000009  b           . + 4 + (0x9 << 2)
label_1d9f1c:
    if (ctx->pc == 0x1D9F1Cu) {
        ctx->pc = 0x1D9F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F18u;
        // 0x1d9f1c: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9F20u;
        goto label_1d9f20;
    }
    ctx->pc = 0x1D9F18u;
    {
        const bool branch_taken_0x1d9f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F18u;
        // 0x1d9f1c: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9f18) {
            ctx->pc = 0x1D9F40u;
            goto label_1d9f40;
        }
    }
    ctx->pc = 0x1D9F20u;
label_1d9f20:
    // 0x1d9f20: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_1d9f24:
    if (ctx->pc == 0x1D9F24u) {
        ctx->pc = 0x1D9F28u;
        goto label_1d9f28;
    }
    ctx->pc = 0x1D9F20u;
    {
        const bool branch_taken_0x1d9f20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d9f20) {
            ctx->pc = 0x1D9F40u;
            goto label_1d9f40;
        }
    }
    ctx->pc = 0x1D9F28u;
label_1d9f28:
    // 0x1d9f28: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d9f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d9f2c:
    // 0x1d9f2c: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1d9f2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1d9f30:
    // 0x1d9f30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d9f34:
    if (ctx->pc == 0x1D9F34u) {
        ctx->pc = 0x1D9F38u;
        goto label_1d9f38;
    }
    ctx->pc = 0x1D9F30u;
    {
        const bool branch_taken_0x1d9f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9f30) {
            ctx->pc = 0x1D9F40u;
            goto label_1d9f40;
        }
    }
    ctx->pc = 0x1D9F38u;
label_1d9f38:
    // 0x1d9f38: 0xaf838ca0  sw          $v1, -0x7360($gp)
    ctx->pc = 0x1d9f38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 3));
label_1d9f3c:
    // 0x1d9f3c: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1d9f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1d9f40:
    // 0x1d9f40: 0xc07a9d8  jal         func_1EA760
label_1d9f44:
    if (ctx->pc == 0x1D9F44u) {
        ctx->pc = 0x1D9F48u;
        goto label_1d9f48;
    }
    ctx->pc = 0x1D9F40u;
    SET_GPR_U32(ctx, 31, 0x1D9F48u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x1D9F48u;
label_1d9f48:
    // 0x1d9f48: 0xc04e168  jal         func_1385A0
label_1d9f4c:
    if (ctx->pc == 0x1D9F4Cu) {
        ctx->pc = 0x1D9F50u;
        goto label_1d9f50;
    }
    ctx->pc = 0x1D9F48u;
    SET_GPR_U32(ctx, 31, 0x1D9F50u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1D9F48u, 0x1D9F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9F50u;
label_1d9f50:
    // 0x1d9f50: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1d9f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1d9f54:
    // 0x1d9f54: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1d9f54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1d9f58:
    // 0x1d9f58: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x1d9f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_1d9f5c:
    // 0x1d9f5c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1d9f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1d9f60:
    // 0x1d9f60: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d9f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d9f64:
    // 0x1d9f64: 0x27828ce0  addiu       $v0, $gp, -0x7320
    ctx->pc = 0x1d9f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937824));
label_1d9f68:
    // 0x1d9f68: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1d9f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1d9f6c:
    // 0x1d9f6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d9f6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9f70:
    // 0x1d9f70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9f70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9f74:
    // 0x1d9f74: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1d9f74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1d9f78:
    // 0x1d9f78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d9f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d9f7c:
    // 0x1d9f7c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d9f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d9f80:
    // 0x1d9f80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d9f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d9f84:
    // 0x1d9f84: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d9f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9f88:
    // 0x1d9f88: 0xc066c72  jal         func_19B1C8
label_1d9f8c:
    if (ctx->pc == 0x1D9F8Cu) {
        ctx->pc = 0x1D9F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F88u;
        // 0x1d9f8c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9F90u;
        goto label_1d9f90;
    }
    ctx->pc = 0x1D9F88u;
    SET_GPR_U32(ctx, 31, 0x1D9F90u);
    ctx->pc = 0x1D9F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9F88u;
    // 0x1d9f8c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D9F88u, 0x1D9F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9F90u;
label_1d9f90:
    // 0x1d9f90: 0xc077e84  jal         func_1DFA10
label_1d9f94:
    if (ctx->pc == 0x1D9F94u) {
        ctx->pc = 0x1D9F98u;
        goto label_1d9f98;
    }
    ctx->pc = 0x1D9F90u;
    SET_GPR_U32(ctx, 31, 0x1D9F98u);
    ctx->pc = 0x1DFA10u;
    { ctx->pc = 0x1dfa10; return; }
    ctx->pc = 0x1D9F98u;
label_1d9f98:
    // 0x1d9f98: 0xc077d90  jal         func_1DF640
label_1d9f9c:
    if (ctx->pc == 0x1D9F9Cu) {
        ctx->pc = 0x1D9FA0u;
        { ctx->pc = 0x1d9fa0; return; }
    }
    ctx->pc = 0x1D9F98u;
    SET_GPR_U32(ctx, 31, 0x1D9FA0u);
    ctx->pc = 0x1DF640u;
    { ctx->pc = 0x1df640; return; }
    ctx->pc = 0x1D9FA0u;
    ctx->pc = 0x1d9fa0u;
    return;
}

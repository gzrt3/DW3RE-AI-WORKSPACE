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


void FUN_0019b868_part44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1b0858u: goto label_1b0858;
        case 0x1b085cu: goto label_1b085c;
        case 0x1b0860u: goto label_1b0860;
        case 0x1b0864u: goto label_1b0864;
        case 0x1b0868u: goto label_1b0868;
        case 0x1b086cu: goto label_1b086c;
        case 0x1b0870u: goto label_1b0870;
        case 0x1b0874u: goto label_1b0874;
        case 0x1b0878u: goto label_1b0878;
        case 0x1b087cu: goto label_1b087c;
        case 0x1b0880u: goto label_1b0880;
        case 0x1b0884u: goto label_1b0884;
        case 0x1b0888u: goto label_1b0888;
        case 0x1b088cu: goto label_1b088c;
        case 0x1b0890u: goto label_1b0890;
        case 0x1b0894u: goto label_1b0894;
        case 0x1b0898u: goto label_1b0898;
        case 0x1b089cu: goto label_1b089c;
        case 0x1b08a0u: goto label_1b08a0;
        case 0x1b08a4u: goto label_1b08a4;
        case 0x1b08a8u: goto label_1b08a8;
        case 0x1b08acu: goto label_1b08ac;
        case 0x1b08b0u: goto label_1b08b0;
        case 0x1b08b4u: goto label_1b08b4;
        case 0x1b08b8u: goto label_1b08b8;
        case 0x1b08bcu: goto label_1b08bc;
        case 0x1b08c0u: goto label_1b08c0;
        case 0x1b08c4u: goto label_1b08c4;
        case 0x1b08c8u: goto label_1b08c8;
        case 0x1b08ccu: goto label_1b08cc;
        case 0x1b08d0u: goto label_1b08d0;
        case 0x1b08d4u: goto label_1b08d4;
        case 0x1b08d8u: goto label_1b08d8;
        case 0x1b08dcu: goto label_1b08dc;
        case 0x1b08e0u: goto label_1b08e0;
        case 0x1b08e4u: goto label_1b08e4;
        case 0x1b08e8u: goto label_1b08e8;
        case 0x1b08ecu: goto label_1b08ec;
        case 0x1b08f0u: goto label_1b08f0;
        case 0x1b08f4u: goto label_1b08f4;
        case 0x1b08f8u: goto label_1b08f8;
        case 0x1b08fcu: goto label_1b08fc;
        case 0x1b0900u: goto label_1b0900;
        case 0x1b0904u: goto label_1b0904;
        case 0x1b0908u: goto label_1b0908;
        case 0x1b090cu: goto label_1b090c;
        case 0x1b0910u: goto label_1b0910;
        case 0x1b0914u: goto label_1b0914;
        case 0x1b0918u: goto label_1b0918;
        case 0x1b091cu: goto label_1b091c;
        case 0x1b0920u: goto label_1b0920;
        case 0x1b0924u: goto label_1b0924;
        case 0x1b0928u: goto label_1b0928;
        case 0x1b092cu: goto label_1b092c;
        case 0x1b0930u: goto label_1b0930;
        case 0x1b0934u: goto label_1b0934;
        case 0x1b0938u: goto label_1b0938;
        case 0x1b093cu: goto label_1b093c;
        case 0x1b0940u: goto label_1b0940;
        case 0x1b0944u: goto label_1b0944;
        case 0x1b0948u: goto label_1b0948;
        case 0x1b094cu: goto label_1b094c;
        case 0x1b0950u: goto label_1b0950;
        case 0x1b0954u: goto label_1b0954;
        case 0x1b0958u: goto label_1b0958;
        case 0x1b095cu: goto label_1b095c;
        case 0x1b0960u: goto label_1b0960;
        case 0x1b0964u: goto label_1b0964;
        case 0x1b0968u: goto label_1b0968;
        case 0x1b096cu: goto label_1b096c;
        case 0x1b0970u: goto label_1b0970;
        case 0x1b0974u: goto label_1b0974;
        case 0x1b0978u: goto label_1b0978;
        case 0x1b097cu: goto label_1b097c;
        case 0x1b0980u: goto label_1b0980;
        case 0x1b0984u: goto label_1b0984;
        case 0x1b0988u: goto label_1b0988;
        case 0x1b098cu: goto label_1b098c;
        case 0x1b0990u: goto label_1b0990;
        case 0x1b0994u: goto label_1b0994;
        case 0x1b0998u: goto label_1b0998;
        case 0x1b099cu: goto label_1b099c;
        case 0x1b09a0u: goto label_1b09a0;
        case 0x1b09a4u: goto label_1b09a4;
        case 0x1b09a8u: goto label_1b09a8;
        case 0x1b09acu: goto label_1b09ac;
        case 0x1b09b0u: goto label_1b09b0;
        case 0x1b09b4u: goto label_1b09b4;
        case 0x1b09b8u: goto label_1b09b8;
        case 0x1b09bcu: goto label_1b09bc;
        case 0x1b09c0u: goto label_1b09c0;
        case 0x1b09c4u: goto label_1b09c4;
        case 0x1b09c8u: goto label_1b09c8;
        case 0x1b09ccu: goto label_1b09cc;
        case 0x1b09d0u: goto label_1b09d0;
        case 0x1b09d4u: goto label_1b09d4;
        case 0x1b09d8u: goto label_1b09d8;
        case 0x1b09dcu: goto label_1b09dc;
        case 0x1b09e0u: goto label_1b09e0;
        case 0x1b09e4u: goto label_1b09e4;
        case 0x1b09e8u: goto label_1b09e8;
        case 0x1b09ecu: goto label_1b09ec;
        case 0x1b09f0u: goto label_1b09f0;
        case 0x1b09f4u: goto label_1b09f4;
        case 0x1b09f8u: goto label_1b09f8;
        case 0x1b09fcu: goto label_1b09fc;
        case 0x1b0a00u: goto label_1b0a00;
        case 0x1b0a04u: goto label_1b0a04;
        case 0x1b0a08u: goto label_1b0a08;
        case 0x1b0a0cu: goto label_1b0a0c;
        case 0x1b0a10u: goto label_1b0a10;
        case 0x1b0a14u: goto label_1b0a14;
        case 0x1b0a18u: goto label_1b0a18;
        case 0x1b0a1cu: goto label_1b0a1c;
        case 0x1b0a20u: goto label_1b0a20;
        case 0x1b0a24u: goto label_1b0a24;
        case 0x1b0a28u: goto label_1b0a28;
        case 0x1b0a2cu: goto label_1b0a2c;
        case 0x1b0a30u: goto label_1b0a30;
        case 0x1b0a34u: goto label_1b0a34;
        case 0x1b0a38u: goto label_1b0a38;
        case 0x1b0a3cu: goto label_1b0a3c;
        case 0x1b0a40u: goto label_1b0a40;
        case 0x1b0a44u: goto label_1b0a44;
        case 0x1b0a48u: goto label_1b0a48;
        case 0x1b0a4cu: goto label_1b0a4c;
        case 0x1b0a50u: goto label_1b0a50;
        case 0x1b0a54u: goto label_1b0a54;
        case 0x1b0a58u: goto label_1b0a58;
        case 0x1b0a5cu: goto label_1b0a5c;
        case 0x1b0a60u: goto label_1b0a60;
        case 0x1b0a64u: goto label_1b0a64;
        case 0x1b0a68u: goto label_1b0a68;
        case 0x1b0a6cu: goto label_1b0a6c;
        case 0x1b0a70u: goto label_1b0a70;
        case 0x1b0a74u: goto label_1b0a74;
        case 0x1b0a78u: goto label_1b0a78;
        case 0x1b0a7cu: goto label_1b0a7c;
        case 0x1b0a80u: goto label_1b0a80;
        case 0x1b0a84u: goto label_1b0a84;
        case 0x1b0a88u: goto label_1b0a88;
        case 0x1b0a8cu: goto label_1b0a8c;
        case 0x1b0a90u: goto label_1b0a90;
        case 0x1b0a94u: goto label_1b0a94;
        case 0x1b0a98u: goto label_1b0a98;
        case 0x1b0a9cu: goto label_1b0a9c;
        case 0x1b0aa0u: goto label_1b0aa0;
        case 0x1b0aa4u: goto label_1b0aa4;
        case 0x1b0aa8u: goto label_1b0aa8;
        case 0x1b0aacu: goto label_1b0aac;
        case 0x1b0ab0u: goto label_1b0ab0;
        case 0x1b0ab4u: goto label_1b0ab4;
        case 0x1b0ab8u: goto label_1b0ab8;
        case 0x1b0abcu: goto label_1b0abc;
        case 0x1b0ac0u: goto label_1b0ac0;
        case 0x1b0ac4u: goto label_1b0ac4;
        case 0x1b0ac8u: goto label_1b0ac8;
        case 0x1b0accu: goto label_1b0acc;
        case 0x1b0ad0u: goto label_1b0ad0;
        case 0x1b0ad4u: goto label_1b0ad4;
        case 0x1b0ad8u: goto label_1b0ad8;
        case 0x1b0adcu: goto label_1b0adc;
        case 0x1b0ae0u: goto label_1b0ae0;
        case 0x1b0ae4u: goto label_1b0ae4;
        case 0x1b0ae8u: goto label_1b0ae8;
        case 0x1b0aecu: goto label_1b0aec;
        case 0x1b0af0u: goto label_1b0af0;
        case 0x1b0af4u: goto label_1b0af4;
        case 0x1b0af8u: goto label_1b0af8;
        case 0x1b0afcu: goto label_1b0afc;
        case 0x1b0b00u: goto label_1b0b00;
        case 0x1b0b04u: goto label_1b0b04;
        case 0x1b0b08u: goto label_1b0b08;
        case 0x1b0b0cu: goto label_1b0b0c;
        case 0x1b0b10u: goto label_1b0b10;
        case 0x1b0b14u: goto label_1b0b14;
        case 0x1b0b18u: goto label_1b0b18;
        case 0x1b0b1cu: goto label_1b0b1c;
        case 0x1b0b20u: goto label_1b0b20;
        case 0x1b0b24u: goto label_1b0b24;
        case 0x1b0b28u: goto label_1b0b28;
        case 0x1b0b2cu: goto label_1b0b2c;
        case 0x1b0b30u: goto label_1b0b30;
        case 0x1b0b34u: goto label_1b0b34;
        case 0x1b0b38u: goto label_1b0b38;
        case 0x1b0b3cu: goto label_1b0b3c;
        case 0x1b0b40u: goto label_1b0b40;
        case 0x1b0b44u: goto label_1b0b44;
        case 0x1b0b48u: goto label_1b0b48;
        case 0x1b0b4cu: goto label_1b0b4c;
        case 0x1b0b50u: goto label_1b0b50;
        case 0x1b0b54u: goto label_1b0b54;
        case 0x1b0b58u: goto label_1b0b58;
        case 0x1b0b5cu: goto label_1b0b5c;
        case 0x1b0b60u: goto label_1b0b60;
        case 0x1b0b64u: goto label_1b0b64;
        case 0x1b0b68u: goto label_1b0b68;
        case 0x1b0b6cu: goto label_1b0b6c;
        case 0x1b0b70u: goto label_1b0b70;
        case 0x1b0b74u: goto label_1b0b74;
        case 0x1b0b78u: goto label_1b0b78;
        case 0x1b0b7cu: goto label_1b0b7c;
        case 0x1b0b80u: goto label_1b0b80;
        case 0x1b0b84u: goto label_1b0b84;
        case 0x1b0b88u: goto label_1b0b88;
        case 0x1b0b8cu: goto label_1b0b8c;
        case 0x1b0b90u: goto label_1b0b90;
        case 0x1b0b94u: goto label_1b0b94;
        case 0x1b0b98u: goto label_1b0b98;
        case 0x1b0b9cu: goto label_1b0b9c;
        case 0x1b0ba0u: goto label_1b0ba0;
        case 0x1b0ba4u: goto label_1b0ba4;
        case 0x1b0ba8u: goto label_1b0ba8;
        case 0x1b0bacu: goto label_1b0bac;
        case 0x1b0bb0u: goto label_1b0bb0;
        case 0x1b0bb4u: goto label_1b0bb4;
        case 0x1b0bb8u: goto label_1b0bb8;
        case 0x1b0bbcu: goto label_1b0bbc;
        case 0x1b0bc0u: goto label_1b0bc0;
        case 0x1b0bc4u: goto label_1b0bc4;
        case 0x1b0bc8u: goto label_1b0bc8;
        case 0x1b0bccu: goto label_1b0bcc;
        case 0x1b0bd0u: goto label_1b0bd0;
        case 0x1b0bd4u: goto label_1b0bd4;
        case 0x1b0bd8u: goto label_1b0bd8;
        case 0x1b0bdcu: goto label_1b0bdc;
        case 0x1b0be0u: goto label_1b0be0;
        case 0x1b0be4u: goto label_1b0be4;
        case 0x1b0be8u: goto label_1b0be8;
        case 0x1b0becu: goto label_1b0bec;
        case 0x1b0bf0u: goto label_1b0bf0;
        case 0x1b0bf4u: goto label_1b0bf4;
        case 0x1b0bf8u: goto label_1b0bf8;
        case 0x1b0bfcu: goto label_1b0bfc;
        case 0x1b0c00u: goto label_1b0c00;
        case 0x1b0c04u: goto label_1b0c04;
        case 0x1b0c08u: goto label_1b0c08;
        case 0x1b0c0cu: goto label_1b0c0c;
        case 0x1b0c10u: goto label_1b0c10;
        case 0x1b0c14u: goto label_1b0c14;
        case 0x1b0c18u: goto label_1b0c18;
        case 0x1b0c1cu: goto label_1b0c1c;
        case 0x1b0c20u: goto label_1b0c20;
        case 0x1b0c24u: goto label_1b0c24;
        case 0x1b0c28u: goto label_1b0c28;
        case 0x1b0c2cu: goto label_1b0c2c;
        case 0x1b0c30u: goto label_1b0c30;
        case 0x1b0c34u: goto label_1b0c34;
        case 0x1b0c38u: goto label_1b0c38;
        case 0x1b0c3cu: goto label_1b0c3c;
        case 0x1b0c40u: goto label_1b0c40;
        case 0x1b0c44u: goto label_1b0c44;
        case 0x1b0c48u: goto label_1b0c48;
        case 0x1b0c4cu: goto label_1b0c4c;
        case 0x1b0c50u: goto label_1b0c50;
        case 0x1b0c54u: goto label_1b0c54;
        case 0x1b0c58u: goto label_1b0c58;
        case 0x1b0c5cu: goto label_1b0c5c;
        case 0x1b0c60u: goto label_1b0c60;
        case 0x1b0c64u: goto label_1b0c64;
        case 0x1b0c68u: goto label_1b0c68;
        case 0x1b0c6cu: goto label_1b0c6c;
        case 0x1b0c70u: goto label_1b0c70;
        case 0x1b0c74u: goto label_1b0c74;
        case 0x1b0c78u: goto label_1b0c78;
        case 0x1b0c7cu: goto label_1b0c7c;
        case 0x1b0c80u: goto label_1b0c80;
        case 0x1b0c84u: goto label_1b0c84;
        case 0x1b0c88u: goto label_1b0c88;
        case 0x1b0c8cu: goto label_1b0c8c;
        case 0x1b0c90u: goto label_1b0c90;
        case 0x1b0c94u: goto label_1b0c94;
        case 0x1b0c98u: goto label_1b0c98;
        case 0x1b0c9cu: goto label_1b0c9c;
        case 0x1b0ca0u: goto label_1b0ca0;
        case 0x1b0ca4u: goto label_1b0ca4;
        case 0x1b0ca8u: goto label_1b0ca8;
        case 0x1b0cacu: goto label_1b0cac;
        case 0x1b0cb0u: goto label_1b0cb0;
        case 0x1b0cb4u: goto label_1b0cb4;
        case 0x1b0cb8u: goto label_1b0cb8;
        case 0x1b0cbcu: goto label_1b0cbc;
        case 0x1b0cc0u: goto label_1b0cc0;
        case 0x1b0cc4u: goto label_1b0cc4;
        case 0x1b0cc8u: goto label_1b0cc8;
        case 0x1b0cccu: goto label_1b0ccc;
        case 0x1b0cd0u: goto label_1b0cd0;
        case 0x1b0cd4u: goto label_1b0cd4;
        case 0x1b0cd8u: goto label_1b0cd8;
        case 0x1b0cdcu: goto label_1b0cdc;
        case 0x1b0ce0u: goto label_1b0ce0;
        case 0x1b0ce4u: goto label_1b0ce4;
        case 0x1b0ce8u: goto label_1b0ce8;
        case 0x1b0cecu: goto label_1b0cec;
        case 0x1b0cf0u: goto label_1b0cf0;
        case 0x1b0cf4u: goto label_1b0cf4;
        case 0x1b0cf8u: goto label_1b0cf8;
        case 0x1b0cfcu: goto label_1b0cfc;
        case 0x1b0d00u: goto label_1b0d00;
        case 0x1b0d04u: goto label_1b0d04;
        case 0x1b0d08u: goto label_1b0d08;
        case 0x1b0d0cu: goto label_1b0d0c;
        case 0x1b0d10u: goto label_1b0d10;
        case 0x1b0d14u: goto label_1b0d14;
        case 0x1b0d18u: goto label_1b0d18;
        case 0x1b0d1cu: goto label_1b0d1c;
        case 0x1b0d20u: goto label_1b0d20;
        case 0x1b0d24u: goto label_1b0d24;
        case 0x1b0d28u: goto label_1b0d28;
        case 0x1b0d2cu: goto label_1b0d2c;
        case 0x1b0d30u: goto label_1b0d30;
        case 0x1b0d34u: goto label_1b0d34;
        case 0x1b0d38u: goto label_1b0d38;
        case 0x1b0d3cu: goto label_1b0d3c;
        case 0x1b0d40u: goto label_1b0d40;
        case 0x1b0d44u: goto label_1b0d44;
        case 0x1b0d48u: goto label_1b0d48;
        case 0x1b0d4cu: goto label_1b0d4c;
        case 0x1b0d50u: goto label_1b0d50;
        case 0x1b0d54u: goto label_1b0d54;
        case 0x1b0d58u: goto label_1b0d58;
        case 0x1b0d5cu: goto label_1b0d5c;
        case 0x1b0d60u: goto label_1b0d60;
        case 0x1b0d64u: goto label_1b0d64;
        case 0x1b0d68u: goto label_1b0d68;
        case 0x1b0d6cu: goto label_1b0d6c;
        case 0x1b0d70u: goto label_1b0d70;
        case 0x1b0d74u: goto label_1b0d74;
        case 0x1b0d78u: goto label_1b0d78;
        case 0x1b0d7cu: goto label_1b0d7c;
        case 0x1b0d80u: goto label_1b0d80;
        case 0x1b0d84u: goto label_1b0d84;
        case 0x1b0d88u: goto label_1b0d88;
        case 0x1b0d8cu: goto label_1b0d8c;
        case 0x1b0d90u: goto label_1b0d90;
        case 0x1b0d94u: goto label_1b0d94;
        case 0x1b0d98u: goto label_1b0d98;
        case 0x1b0d9cu: goto label_1b0d9c;
        case 0x1b0da0u: goto label_1b0da0;
        case 0x1b0da4u: goto label_1b0da4;
        case 0x1b0da8u: goto label_1b0da8;
        case 0x1b0dacu: goto label_1b0dac;
        case 0x1b0db0u: goto label_1b0db0;
        case 0x1b0db4u: goto label_1b0db4;
        case 0x1b0db8u: goto label_1b0db8;
        case 0x1b0dbcu: goto label_1b0dbc;
        case 0x1b0dc0u: goto label_1b0dc0;
        case 0x1b0dc4u: goto label_1b0dc4;
        case 0x1b0dc8u: goto label_1b0dc8;
        case 0x1b0dccu: goto label_1b0dcc;
        case 0x1b0dd0u: goto label_1b0dd0;
        case 0x1b0dd4u: goto label_1b0dd4;
        case 0x1b0dd8u: goto label_1b0dd8;
        case 0x1b0ddcu: goto label_1b0ddc;
        case 0x1b0de0u: goto label_1b0de0;
        case 0x1b0de4u: goto label_1b0de4;
        case 0x1b0de8u: goto label_1b0de8;
        case 0x1b0decu: goto label_1b0dec;
        case 0x1b0df0u: goto label_1b0df0;
        case 0x1b0df4u: goto label_1b0df4;
        case 0x1b0df8u: goto label_1b0df8;
        case 0x1b0dfcu: goto label_1b0dfc;
        case 0x1b0e00u: goto label_1b0e00;
        case 0x1b0e04u: goto label_1b0e04;
        case 0x1b0e08u: goto label_1b0e08;
        case 0x1b0e0cu: goto label_1b0e0c;
        case 0x1b0e10u: goto label_1b0e10;
        case 0x1b0e14u: goto label_1b0e14;
        case 0x1b0e18u: goto label_1b0e18;
        case 0x1b0e1cu: goto label_1b0e1c;
        case 0x1b0e20u: goto label_1b0e20;
        case 0x1b0e24u: goto label_1b0e24;
        case 0x1b0e28u: goto label_1b0e28;
        case 0x1b0e2cu: goto label_1b0e2c;
        case 0x1b0e30u: goto label_1b0e30;
        case 0x1b0e34u: goto label_1b0e34;
        case 0x1b0e38u: goto label_1b0e38;
        case 0x1b0e3cu: goto label_1b0e3c;
        case 0x1b0e40u: goto label_1b0e40;
        case 0x1b0e44u: goto label_1b0e44;
        case 0x1b0e48u: goto label_1b0e48;
        case 0x1b0e4cu: goto label_1b0e4c;
        case 0x1b0e50u: goto label_1b0e50;
        case 0x1b0e54u: goto label_1b0e54;
        case 0x1b0e58u: goto label_1b0e58;
        case 0x1b0e5cu: goto label_1b0e5c;
        case 0x1b0e60u: goto label_1b0e60;
        case 0x1b0e64u: goto label_1b0e64;
        case 0x1b0e68u: goto label_1b0e68;
        case 0x1b0e6cu: goto label_1b0e6c;
        case 0x1b0e70u: goto label_1b0e70;
        case 0x1b0e74u: goto label_1b0e74;
        case 0x1b0e78u: goto label_1b0e78;
        case 0x1b0e7cu: goto label_1b0e7c;
        case 0x1b0e80u: goto label_1b0e80;
        case 0x1b0e84u: goto label_1b0e84;
        case 0x1b0e88u: goto label_1b0e88;
        case 0x1b0e8cu: goto label_1b0e8c;
        case 0x1b0e90u: goto label_1b0e90;
        case 0x1b0e94u: goto label_1b0e94;
        case 0x1b0e98u: goto label_1b0e98;
        case 0x1b0e9cu: goto label_1b0e9c;
        case 0x1b0ea0u: goto label_1b0ea0;
        case 0x1b0ea4u: goto label_1b0ea4;
        case 0x1b0ea8u: goto label_1b0ea8;
        case 0x1b0eacu: goto label_1b0eac;
        case 0x1b0eb0u: goto label_1b0eb0;
        case 0x1b0eb4u: goto label_1b0eb4;
        case 0x1b0eb8u: goto label_1b0eb8;
        case 0x1b0ebcu: goto label_1b0ebc;
        case 0x1b0ec0u: goto label_1b0ec0;
        case 0x1b0ec4u: goto label_1b0ec4;
        case 0x1b0ec8u: goto label_1b0ec8;
        case 0x1b0eccu: goto label_1b0ecc;
        case 0x1b0ed0u: goto label_1b0ed0;
        case 0x1b0ed4u: goto label_1b0ed4;
        case 0x1b0ed8u: goto label_1b0ed8;
        case 0x1b0edcu: goto label_1b0edc;
        case 0x1b0ee0u: goto label_1b0ee0;
        case 0x1b0ee4u: goto label_1b0ee4;
        case 0x1b0ee8u: goto label_1b0ee8;
        case 0x1b0eecu: goto label_1b0eec;
        case 0x1b0ef0u: goto label_1b0ef0;
        case 0x1b0ef4u: goto label_1b0ef4;
        case 0x1b0ef8u: goto label_1b0ef8;
        case 0x1b0efcu: goto label_1b0efc;
        case 0x1b0f00u: goto label_1b0f00;
        case 0x1b0f04u: goto label_1b0f04;
        case 0x1b0f08u: goto label_1b0f08;
        case 0x1b0f0cu: goto label_1b0f0c;
        case 0x1b0f10u: goto label_1b0f10;
        case 0x1b0f14u: goto label_1b0f14;
        case 0x1b0f18u: goto label_1b0f18;
        case 0x1b0f1cu: goto label_1b0f1c;
        case 0x1b0f20u: goto label_1b0f20;
        case 0x1b0f24u: goto label_1b0f24;
        case 0x1b0f28u: goto label_1b0f28;
        case 0x1b0f2cu: goto label_1b0f2c;
        case 0x1b0f30u: goto label_1b0f30;
        case 0x1b0f34u: goto label_1b0f34;
        case 0x1b0f38u: goto label_1b0f38;
        case 0x1b0f3cu: goto label_1b0f3c;
        case 0x1b0f40u: goto label_1b0f40;
        case 0x1b0f44u: goto label_1b0f44;
        case 0x1b0f48u: goto label_1b0f48;
        case 0x1b0f4cu: goto label_1b0f4c;
        case 0x1b0f50u: goto label_1b0f50;
        case 0x1b0f54u: goto label_1b0f54;
        case 0x1b0f58u: goto label_1b0f58;
        case 0x1b0f5cu: goto label_1b0f5c;
        case 0x1b0f60u: goto label_1b0f60;
        case 0x1b0f64u: goto label_1b0f64;
        case 0x1b0f68u: goto label_1b0f68;
        case 0x1b0f6cu: goto label_1b0f6c;
        case 0x1b0f70u: goto label_1b0f70;
        case 0x1b0f74u: goto label_1b0f74;
        case 0x1b0f78u: goto label_1b0f78;
        case 0x1b0f7cu: goto label_1b0f7c;
        case 0x1b0f80u: goto label_1b0f80;
        case 0x1b0f84u: goto label_1b0f84;
        case 0x1b0f88u: goto label_1b0f88;
        case 0x1b0f8cu: goto label_1b0f8c;
        case 0x1b0f90u: goto label_1b0f90;
        case 0x1b0f94u: goto label_1b0f94;
        case 0x1b0f98u: goto label_1b0f98;
        case 0x1b0f9cu: goto label_1b0f9c;
        case 0x1b0fa0u: goto label_1b0fa0;
        case 0x1b0fa4u: goto label_1b0fa4;
        case 0x1b0fa8u: goto label_1b0fa8;
        case 0x1b0facu: goto label_1b0fac;
        case 0x1b0fb0u: goto label_1b0fb0;
        case 0x1b0fb4u: goto label_1b0fb4;
        case 0x1b0fb8u: goto label_1b0fb8;
        case 0x1b0fbcu: goto label_1b0fbc;
        case 0x1b0fc0u: goto label_1b0fc0;
        case 0x1b0fc4u: goto label_1b0fc4;
        case 0x1b0fc8u: goto label_1b0fc8;
        case 0x1b0fccu: goto label_1b0fcc;
        case 0x1b0fd0u: goto label_1b0fd0;
        case 0x1b0fd4u: goto label_1b0fd4;
        case 0x1b0fd8u: goto label_1b0fd8;
        case 0x1b0fdcu: goto label_1b0fdc;
        case 0x1b0fe0u: goto label_1b0fe0;
        case 0x1b0fe4u: goto label_1b0fe4;
        case 0x1b0fe8u: goto label_1b0fe8;
        case 0x1b0fecu: goto label_1b0fec;
        case 0x1b0ff0u: goto label_1b0ff0;
        case 0x1b0ff4u: goto label_1b0ff4;
        case 0x1b0ff8u: goto label_1b0ff8;
        case 0x1b0ffcu: goto label_1b0ffc;
        case 0x1b1000u: goto label_1b1000;
        case 0x1b1004u: goto label_1b1004;
        case 0x1b1008u: goto label_1b1008;
        case 0x1b100cu: goto label_1b100c;
        case 0x1b1010u: goto label_1b1010;
        case 0x1b1014u: goto label_1b1014;
        case 0x1b1018u: goto label_1b1018;
        case 0x1b101cu: goto label_1b101c;
        case 0x1b1020u: goto label_1b1020;
        case 0x1b1024u: goto label_1b1024;
        default: return;
    }

label_1b0858:
    // 0x1b0858: 0xae0372d4  sw          $v1, 0x72D4($s0)
    ctx->pc = 0x1b0858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29396), GPR_U32(ctx, 3));
label_1b085c:
    // 0x1b085c: 0x24848cc8  addiu       $a0, $a0, -0x7338
    ctx->pc = 0x1b085cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937800));
label_1b0860:
    // 0x1b0860: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b0860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b0864:
    // 0x1b0864: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1b0864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1b0868:
    // 0x1b0868: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b086c:
    // 0x1b086c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b086cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0870:
    // 0x1b0870: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b0870u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0874:
    // 0x1b0874: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b0874u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b0878:
    // 0x1b0878: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b0878u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b087c:
    // 0x1b087c: 0xc069e2a  jal         func_1A78A8
label_1b0880:
    if (ctx->pc == 0x1B0880u) {
        ctx->pc = 0x1B0880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B087Cu;
        // 0x1b0880: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0884u;
        goto label_1b0884;
    }
    ctx->pc = 0x1B087Cu;
    SET_GPR_U32(ctx, 31, 0x1B0884u);
    ctx->pc = 0x1B0880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B087Cu;
    // 0x1b0880: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B0884u;
label_1b0884:
    // 0x1b0884: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_1b0888:
    if (ctx->pc == 0x1B0888u) {
        ctx->pc = 0x1B0888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0884u;
        // 0x1b0888: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B088Cu;
        goto label_1b088c;
    }
    ctx->pc = 0x1B0884u;
    {
        const bool branch_taken_0x1b0884 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B0888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0884u;
        // 0x1b0888: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0884) {
            ctx->pc = 0x1B08A4u;
            goto label_1b08a4;
        }
    }
    ctx->pc = 0x1B088Cu;
label_1b088c:
    // 0x1b088c: 0x8c4472ac  lw          $a0, 0x72AC($v0)
    ctx->pc = 0x1b088cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29356)));
label_1b0890:
    // 0x1b0890: 0xc069210  jal         func_1A4840
label_1b0894:
    if (ctx->pc == 0x1B0894u) {
        ctx->pc = 0x1B0898u;
        goto label_1b0898;
    }
    ctx->pc = 0x1B0890u;
    SET_GPR_U32(ctx, 31, 0x1B0898u);
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B0898u;
label_1b0898:
    // 0x1b0898: 0xae0072d4  sw          $zero, 0x72D4($s0)
    ctx->pc = 0x1b0898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29396), GPR_U32(ctx, 0));
label_1b089c:
    // 0x1b089c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1b08a0:
    if (ctx->pc == 0x1B08A0u) {
        ctx->pc = 0x1B08A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B089Cu;
        // 0x1b08a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B08A4u;
        goto label_1b08a4;
    }
    ctx->pc = 0x1B089Cu;
    {
        const bool branch_taken_0x1b089c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B08A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B089Cu;
        // 0x1b08a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b089c) {
            ctx->pc = 0x1B08C4u;
            goto label_1b08c4;
        }
    }
    ctx->pc = 0x1B08A4u;
label_1b08a4:
    // 0x1b08a4: 0xae0072d4  sw          $zero, 0x72D4($s0)
    ctx->pc = 0x1b08a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29396), GPR_U32(ctx, 0));
label_1b08a8:
    // 0x1b08a8: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1b08a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1b08ac:
    // 0x1b08ac: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b08acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_1b08b0:
    // 0x1b08b0: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x1b08b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_1b08b4:
    // 0x1b08b4: 0x8c6472ac  lw          $a0, 0x72AC($v1)
    ctx->pc = 0x1b08b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29356)));
label_1b08b8:
    // 0x1b08b8: 0xc069210  jal         func_1A4840
label_1b08bc:
    if (ctx->pc == 0x1B08BCu) {
        ctx->pc = 0x1B08BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B08B8u;
        // 0x1b08bc: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B08C0u;
        goto label_1b08c0;
    }
    ctx->pc = 0x1B08B8u;
    SET_GPR_U32(ctx, 31, 0x1B08C0u);
    ctx->pc = 0x1B08BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B08B8u;
    // 0x1b08bc: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B08C0u;
label_1b08c0:
    // 0x1b08c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b08c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b08c4:
    // 0x1b08c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b08c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b08c8:
    // 0x1b08c8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b08c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b08cc:
    // 0x1b08cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b08ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b08d0:
    // 0x1b08d0: 0x3e00008  jr          $ra
label_1b08d4:
    if (ctx->pc == 0x1B08D4u) {
        ctx->pc = 0x1B08D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B08D0u;
        // 0x1b08d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B08D8u;
        goto label_1b08d8;
    }
    ctx->pc = 0x1B08D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B08D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B08D0u;
        // 0x1b08d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B08D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B08D8u;
label_1b08d8:
    // 0x1b08d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b08d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1b08dc:
    // 0x1b08dc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b08dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1b08e0:
    // 0x1b08e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b08e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b08e4:
    // 0x1b08e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b08e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1b08e8:
    // 0x1b08e8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b08e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1b08ec:
    // 0x1b08ec: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1b08ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1b08f0:
    // 0x1b08f0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b08f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1b08f4:
    // 0x1b08f4: 0xc06bf26  jal         func_1AFC98
label_1b08f8:
    if (ctx->pc == 0x1B08F8u) {
        ctx->pc = 0x1B08F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B08F4u;
        // 0x1b08f8: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B08FCu;
        goto label_1b08fc;
    }
    ctx->pc = 0x1B08F4u;
    SET_GPR_U32(ctx, 31, 0x1B08FCu);
    ctx->pc = 0x1B08F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B08F4u;
    // 0x1b08f8: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFC98u;
    { ctx->pc = 0x1afc98; return; }
    ctx->pc = 0x1B08FCu;
label_1b08fc:
    // 0x1b08fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b0900:
    if (ctx->pc == 0x1B0900u) {
        ctx->pc = 0x1B0900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B08FCu;
        // 0x1b0900: 0x3c130028  lui         $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0904u;
        goto label_1b0904;
    }
    ctx->pc = 0x1B08FCu;
    {
        const bool branch_taken_0x1b08fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B08FCu;
        // 0x1b0900: 0x3c130028  lui         $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b08fc) {
            ctx->pc = 0x1B090Cu;
            goto label_1b090c;
        }
    }
    ctx->pc = 0x1B0904u;
label_1b0904:
    // 0x1b0904: 0x1000002b  b           . + 4 + (0x2B << 2)
label_1b0908:
    if (ctx->pc == 0x1B0908u) {
        ctx->pc = 0x1B0908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0904u;
        // 0x1b0908: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B090Cu;
        goto label_1b090c;
    }
    ctx->pc = 0x1B0904u;
    {
        const bool branch_taken_0x1b0904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0904u;
        // 0x1b0908: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0904) {
            ctx->pc = 0x1B09B4u;
            goto label_1b09b4;
        }
    }
    ctx->pc = 0x1B090Cu;
label_1b090c:
    // 0x1b090c: 0x8e627290  lw          $v0, 0x7290($s3)
    ctx->pc = 0x1b090cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 29328)));
label_1b0910:
    // 0x1b0910: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1b0914:
    if (ctx->pc == 0x1B0914u) {
        ctx->pc = 0x1B0914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0910u;
        // 0x1b0914: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0918u;
        goto label_1b0918;
    }
    ctx->pc = 0x1B0910u;
    {
        const bool branch_taken_0x1b0910 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B0914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0910u;
        // 0x1b0914: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0910) {
            ctx->pc = 0x1B0920u;
            goto label_1b0920;
        }
    }
    ctx->pc = 0x1B0918u;
label_1b0918:
    // 0x1b0918: 0xc069a30  jal         func_1A68C0
label_1b091c:
    if (ctx->pc == 0x1B091Cu) {
        ctx->pc = 0x1B091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0918u;
        // 0x1b091c: 0x2484ab38  addiu       $a0, $a0, -0x54C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0920u;
        goto label_1b0920;
    }
    ctx->pc = 0x1B0918u;
    SET_GPR_U32(ctx, 31, 0x1B0920u);
    ctx->pc = 0x1B091Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0918u;
    // 0x1b091c: 0x2484ab38  addiu       $a0, $a0, -0x54C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1B0920u;
label_1b0920:
    // 0x1b0920: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1b0920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1b0924:
    // 0x1b0924: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1b0924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1b0928:
    // 0x1b0928: 0x24508480  addiu       $s0, $v0, -0x7B80
    ctx->pc = 0x1b0928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
label_1b092c:
    // 0x1b092c: 0x24848cc8  addiu       $a0, $a0, -0x7338
    ctx->pc = 0x1b092cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937800));
label_1b0930:
    // 0x1b0930: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b0930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b0934:
    // 0x1b0934: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b0934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0938:
    // 0x1b0938: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b093c:
    // 0x1b093c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b093cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0940:
    // 0x1b0940: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b0940u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0944:
    // 0x1b0944: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b0944u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b0948:
    // 0x1b0948: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1b0948u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1b094c:
    // 0x1b094c: 0xc069e2a  jal         func_1A78A8
label_1b0950:
    if (ctx->pc == 0x1B0950u) {
        ctx->pc = 0x1B0950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B094Cu;
        // 0x1b0950: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0954u;
        goto label_1b0954;
    }
    ctx->pc = 0x1B094Cu;
    SET_GPR_U32(ctx, 31, 0x1B0954u);
    ctx->pc = 0x1B0950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B094Cu;
    // 0x1b0950: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B0954u;
label_1b0954:
    // 0x1b0954: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
label_1b0958:
    if (ctx->pc == 0x1B0958u) {
        ctx->pc = 0x1B0958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0954u;
        // 0x1b0958: 0x26020004  addiu       $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B095Cu;
        goto label_1b095c;
    }
    ctx->pc = 0x1B0954u;
    {
        const bool branch_taken_0x1b0954 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b0954) {
            ctx->pc = 0x1B0958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0954u;
            // 0x1b0958: 0x26020004  addiu       $v0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0970u;
            goto label_1b0970;
        }
    }
    ctx->pc = 0x1B095Cu;
label_1b095c:
    // 0x1b095c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1b095cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1b0960:
    // 0x1b0960: 0xc069210  jal         func_1A4840
label_1b0964:
    if (ctx->pc == 0x1B0964u) {
        ctx->pc = 0x1B0964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0960u;
        // 0x1b0964: 0x8c4472ac  lw          $a0, 0x72AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29356)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0968u;
        goto label_1b0968;
    }
    ctx->pc = 0x1B0960u;
    SET_GPR_U32(ctx, 31, 0x1B0968u);
    ctx->pc = 0x1B0964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0960u;
    // 0x1b0964: 0x8c4472ac  lw          $a0, 0x72AC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29356)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B0968u;
label_1b0968:
    // 0x1b0968: 0x10000012  b           . + 4 + (0x12 << 2)
label_1b096c:
    if (ctx->pc == 0x1B096Cu) {
        ctx->pc = 0x1B096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0968u;
        // 0x1b096c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0970u;
        goto label_1b0970;
    }
    ctx->pc = 0x1B0968u;
    {
        const bool branch_taken_0x1b0968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0968u;
        // 0x1b096c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0968) {
            ctx->pc = 0x1B09B4u;
            goto label_1b09b4;
        }
    }
    ctx->pc = 0x1B0970u;
label_1b0970:
    // 0x1b0970: 0x3c112000  lui         $s1, 0x2000
    ctx->pc = 0x1b0970u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)8192 << 16));
label_1b0974:
    // 0x1b0974: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x1b0974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_1b0978:
    // 0x1b0978: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1b0978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1b097c:
    // 0x1b097c: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1b097cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1b0980:
    // 0x1b0980: 0xb2430007  sdl         $v1, 0x7($s2)
    ctx->pc = 0x1b0980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b0984:
    // 0x1b0984: 0xb6430000  sdr         $v1, 0x0($s2)
    ctx->pc = 0x1b0984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b0988:
    // 0x1b0988: 0x8e637290  lw          $v1, 0x7290($s3)
    ctx->pc = 0x1b0988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 29328)));
label_1b098c:
    // 0x1b098c: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_1b0990:
    if (ctx->pc == 0x1B0990u) {
        ctx->pc = 0x1B0990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B098Cu;
        // 0x1b0990: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0994u;
        goto label_1b0994;
    }
    ctx->pc = 0x1B098Cu;
    {
        const bool branch_taken_0x1b098c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1B0990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B098Cu;
        // 0x1b0990: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b098c) {
            ctx->pc = 0x1B099Cu;
            goto label_1b099c;
        }
    }
    ctx->pc = 0x1B0994u;
label_1b0994:
    // 0x1b0994: 0xc069a30  jal         func_1A68C0
label_1b0998:
    if (ctx->pc == 0x1B0998u) {
        ctx->pc = 0x1B0998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0994u;
        // 0x1b0998: 0x2484ab58  addiu       $a0, $a0, -0x54A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B099Cu;
        goto label_1b099c;
    }
    ctx->pc = 0x1B0994u;
    SET_GPR_U32(ctx, 31, 0x1B099Cu);
    ctx->pc = 0x1B0998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0994u;
    // 0x1b0998: 0x2484ab58  addiu       $a0, $a0, -0x54A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1B099Cu;
label_1b099c:
    // 0x1b099c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1b099cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1b09a0:
    // 0x1b09a0: 0x2111825  or          $v1, $s0, $s1
    ctx->pc = 0x1b09a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
label_1b09a4:
    // 0x1b09a4: 0x8c4472ac  lw          $a0, 0x72AC($v0)
    ctx->pc = 0x1b09a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29356)));
label_1b09a8:
    // 0x1b09a8: 0xc069210  jal         func_1A4840
label_1b09ac:
    if (ctx->pc == 0x1B09ACu) {
        ctx->pc = 0x1B09ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B09A8u;
        // 0x1b09ac: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B09B0u;
        goto label_1b09b0;
    }
    ctx->pc = 0x1B09A8u;
    SET_GPR_U32(ctx, 31, 0x1B09B0u);
    ctx->pc = 0x1B09ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B09A8u;
    // 0x1b09ac: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B09B0u;
label_1b09b0:
    // 0x1b09b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b09b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b09b4:
    // 0x1b09b4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b09b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b09b8:
    // 0x1b09b8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b09b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b09bc:
    // 0x1b09bc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b09bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b09c0:
    // 0x1b09c0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b09c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b09c4:
    // 0x1b09c4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b09c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b09c8:
    // 0x1b09c8: 0x3e00008  jr          $ra
label_1b09cc:
    if (ctx->pc == 0x1B09CCu) {
        ctx->pc = 0x1B09CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B09C8u;
        // 0x1b09cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B09D0u;
        goto label_1b09d0;
    }
    ctx->pc = 0x1B09C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B09CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B09C8u;
        // 0x1b09cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B09C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B09D0u;
label_1b09d0:
    // 0x1b09d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b09d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1b09d4:
    // 0x1b09d4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b09d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1b09d8:
    // 0x1b09d8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b09d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1b09dc:
    // 0x1b09dc: 0x3c110029  lui         $s1, 0x29
    ctx->pc = 0x1b09dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)41 << 16));
label_1b09e0:
    // 0x1b09e0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b09e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1b09e4:
    // 0x1b09e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b09e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b09e8:
    // 0x1b09e8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b09e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1b09ec:
    // 0x1b09ec: 0x263388c0  addiu       $s3, $s1, -0x7740
    ctx->pc = 0x1b09ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936768));
label_1b09f0:
    // 0x1b09f0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b09f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1b09f4:
    // 0x1b09f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b09f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b09f8:
    // 0x1b09f8: 0xc06bf26  jal         func_1AFC98
label_1b09fc:
    if (ctx->pc == 0x1B09FCu) {
        ctx->pc = 0x1B09FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B09F8u;
        // 0x1b09fc: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A00u;
        goto label_1b0a00;
    }
    ctx->pc = 0x1B09F8u;
    SET_GPR_U32(ctx, 31, 0x1B0A00u);
    ctx->pc = 0x1B09FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B09F8u;
    // 0x1b09fc: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFC98u;
    { ctx->pc = 0x1afc98; return; }
    ctx->pc = 0x1B0A00u;
label_1b0a00:
    // 0x1b0a00: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_1b0a04:
    if (ctx->pc == 0x1B0A04u) {
        ctx->pc = 0x1B0A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A00u;
        // 0x1b0a04: 0xae3088c0  sw          $s0, -0x7740($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294936768), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A08u;
        goto label_1b0a08;
    }
    ctx->pc = 0x1B0A00u;
    {
        const bool branch_taken_0x1b0a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0a00) {
            ctx->pc = 0x1B0A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0A00u;
            // 0x1b0a04: 0xae3088c0  sw          $s0, -0x7740($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4294936768), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0A10u;
            goto label_1b0a10;
        }
    }
    ctx->pc = 0x1B0A08u;
label_1b0a08:
    // 0x1b0a08: 0x10000025  b           . + 4 + (0x25 << 2)
label_1b0a0c:
    if (ctx->pc == 0x1B0A0Cu) {
        ctx->pc = 0x1B0A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A08u;
        // 0x1b0a0c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A10u;
        goto label_1b0a10;
    }
    ctx->pc = 0x1B0A08u;
    {
        const bool branch_taken_0x1b0a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A08u;
        // 0x1b0a0c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0a08) {
            ctx->pc = 0x1B0AA0u;
            goto label_1b0aa0;
        }
    }
    ctx->pc = 0x1B0A10u;
label_1b0a10:
    // 0x1b0a10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b0a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b0a14:
    // 0x1b0a14: 0xc069bee  jal         func_1A6FB8
label_1b0a18:
    if (ctx->pc == 0x1B0A18u) {
        ctx->pc = 0x1B0A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A14u;
        // 0x1b0a18: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A1Cu;
        goto label_1b0a1c;
    }
    ctx->pc = 0x1B0A14u;
    SET_GPR_U32(ctx, 31, 0x1B0A1Cu);
    ctx->pc = 0x1B0A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0A14u;
    // 0x1b0a18: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    { ctx->pc = 0x1a6fb8; return; }
    ctx->pc = 0x1B0A1Cu;
label_1b0a1c:
    // 0x1b0a1c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1b0a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1b0a20:
    // 0x1b0a20: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1b0a20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1b0a24:
    // 0x1b0a24: 0x24508480  addiu       $s0, $v0, -0x7B80
    ctx->pc = 0x1b0a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
label_1b0a28:
    // 0x1b0a28: 0x24848cc8  addiu       $a0, $a0, -0x7338
    ctx->pc = 0x1b0a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937800));
label_1b0a2c:
    // 0x1b0a2c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1b0a2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b0a30:
    // 0x1b0a30: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b0a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b0a34:
    // 0x1b0a34: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b0a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1b0a38:
    // 0x1b0a38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0a38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0a3c:
    // 0x1b0a3c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1b0a3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b0a40:
    // 0x1b0a40: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b0a40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b0a44:
    // 0x1b0a44: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1b0a44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1b0a48:
    // 0x1b0a48: 0xc069e2a  jal         func_1A78A8
label_1b0a4c:
    if (ctx->pc == 0x1B0A4Cu) {
        ctx->pc = 0x1B0A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A48u;
        // 0x1b0a4c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A50u;
        goto label_1b0a50;
    }
    ctx->pc = 0x1B0A48u;
    SET_GPR_U32(ctx, 31, 0x1B0A50u);
    ctx->pc = 0x1B0A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0A48u;
    // 0x1b0a4c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B0A50u;
label_1b0a50:
    // 0x1b0a50: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
label_1b0a54:
    if (ctx->pc == 0x1B0A54u) {
        ctx->pc = 0x1B0A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A50u;
        // 0x1b0a54: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A58u;
        goto label_1b0a58;
    }
    ctx->pc = 0x1B0A50u;
    {
        const bool branch_taken_0x1b0a50 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B0A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A50u;
        // 0x1b0a54: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0a50) {
            ctx->pc = 0x1B0A6Cu;
            goto label_1b0a6c;
        }
    }
    ctx->pc = 0x1B0A58u;
label_1b0a58:
    // 0x1b0a58: 0x8c4472ac  lw          $a0, 0x72AC($v0)
    ctx->pc = 0x1b0a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29356)));
label_1b0a5c:
    // 0x1b0a5c: 0xc069210  jal         func_1A4840
label_1b0a60:
    if (ctx->pc == 0x1B0A60u) {
        ctx->pc = 0x1B0A64u;
        goto label_1b0a64;
    }
    ctx->pc = 0x1B0A5Cu;
    SET_GPR_U32(ctx, 31, 0x1B0A64u);
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B0A64u;
label_1b0a64:
    // 0x1b0a64: 0x1000000e  b           . + 4 + (0xE << 2)
label_1b0a68:
    if (ctx->pc == 0x1B0A68u) {
        ctx->pc = 0x1B0A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A64u;
        // 0x1b0a68: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A6Cu;
        goto label_1b0a6c;
    }
    ctx->pc = 0x1B0A64u;
    {
        const bool branch_taken_0x1b0a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A64u;
        // 0x1b0a68: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0a64) {
            ctx->pc = 0x1B0AA0u;
            goto label_1b0aa0;
        }
    }
    ctx->pc = 0x1B0A6Cu;
label_1b0a6c:
    // 0x1b0a6c: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_1b0a70:
    if (ctx->pc == 0x1B0A70u) {
        ctx->pc = 0x1B0A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A6Cu;
        // 0x1b0a70: 0x26020004  addiu       $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A74u;
        goto label_1b0a74;
    }
    ctx->pc = 0x1B0A6Cu;
    {
        const bool branch_taken_0x1b0a6c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A6Cu;
        // 0x1b0a70: 0x26020004  addiu       $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0a6c) {
            ctx->pc = 0x1B0A84u;
            goto label_1b0a84;
        }
    }
    ctx->pc = 0x1B0A74u;
label_1b0a74:
    // 0x1b0a74: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1b0a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_1b0a78:
    // 0x1b0a78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b0a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b0a7c:
    // 0x1b0a7c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b0a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b0a80:
    // 0x1b0a80: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x1b0a80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_1b0a84:
    // 0x1b0a84: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1b0a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1b0a88:
    // 0x1b0a88: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b0a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_1b0a8c:
    // 0x1b0a8c: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1b0a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_1b0a90:
    // 0x1b0a90: 0x8c6472ac  lw          $a0, 0x72AC($v1)
    ctx->pc = 0x1b0a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29356)));
label_1b0a94:
    // 0x1b0a94: 0xc069210  jal         func_1A4840
label_1b0a98:
    if (ctx->pc == 0x1B0A98u) {
        ctx->pc = 0x1B0A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A94u;
        // 0x1b0a98: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A9Cu;
        goto label_1b0a9c;
    }
    ctx->pc = 0x1B0A94u;
    SET_GPR_U32(ctx, 31, 0x1B0A9Cu);
    ctx->pc = 0x1B0A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0A94u;
    // 0x1b0a98: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B0A9Cu;
label_1b0a9c:
    // 0x1b0a9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b0a9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b0aa0:
    // 0x1b0aa0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b0aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b0aa4:
    // 0x1b0aa4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b0aa4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b0aa8:
    // 0x1b0aa8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b0aa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b0aac:
    // 0x1b0aac: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b0aacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b0ab0:
    // 0x1b0ab0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b0ab0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b0ab4:
    // 0x1b0ab4: 0x3e00008  jr          $ra
label_1b0ab8:
    if (ctx->pc == 0x1B0AB8u) {
        ctx->pc = 0x1B0AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0AB4u;
        // 0x1b0ab8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0ABCu;
        goto label_1b0abc;
    }
    ctx->pc = 0x1B0AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0AB4u;
        // 0x1b0ab8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0ABCu;
label_1b0abc:
    // 0x1b0abc: 0x0  nop
    ctx->pc = 0x1b0abcu;
    // NOP
label_1b0ac0:
    // 0x1b0ac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b0ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b0ac4:
    // 0x1b0ac4: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1b0ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1b0ac8:
    // 0x1b0ac8: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x1b0ac8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
label_1b0acc:
    // 0x1b0acc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b0accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b0ad0:
    // 0x1b0ad0: 0xac408cf0  sw          $zero, -0x7310($v0)
    ctx->pc = 0x1b0ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937840), GPR_U32(ctx, 0));
label_1b0ad4:
    // 0x1b0ad4: 0x250861d8  addiu       $t0, $t0, 0x61D8
    ctx->pc = 0x1b0ad4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 25048));
label_1b0ad8:
    // 0x1b0ad8: 0xc06c38e  jal         func_1B0E38
label_1b0adc:
    if (ctx->pc == 0x1B0ADCu) {
        ctx->pc = 0x1B0ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0AD8u;
        // 0x1b0adc: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0AE0u;
        goto label_1b0ae0;
    }
    ctx->pc = 0x1B0AD8u;
    SET_GPR_U32(ctx, 31, 0x1B0AE0u);
    ctx->pc = 0x1B0ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0AD8u;
    // 0x1b0adc: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0E38u;
    goto label_1b0e38;
    ctx->pc = 0x1B0AE0u;
label_1b0ae0:
    // 0x1b0ae0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b0ae4:
    // 0x1b0ae4: 0x3e00008  jr          $ra
label_1b0ae8:
    if (ctx->pc == 0x1B0AE8u) {
        ctx->pc = 0x1B0AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0AE4u;
        // 0x1b0ae8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0AECu;
        goto label_1b0aec;
    }
    ctx->pc = 0x1B0AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0AE4u;
        // 0x1b0ae8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0AECu;
label_1b0aec:
    // 0x1b0aec: 0x0  nop
    ctx->pc = 0x1b0aecu;
    // NOP
label_1b0af0:
    // 0x1b0af0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b0af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b0af4:
    // 0x1b0af4: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1b0af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1b0af8:
    // 0x1b0af8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0afc:
    // 0x1b0afc: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1b0afcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b0b00:
    // 0x1b0b00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b0b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b0b04:
    // 0x1b0b04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0b08:
    // 0x1b0b08: 0xac628cf0  sw          $v0, -0x7310($v1)
    ctx->pc = 0x1b0b08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294937840), GPR_U32(ctx, 2));
label_1b0b0c:
    // 0x1b0b0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0b10:
    // 0x1b0b10: 0xc06c38e  jal         func_1B0E38
label_1b0b14:
    if (ctx->pc == 0x1B0B14u) {
        ctx->pc = 0x1B0B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B10u;
        // 0x1b0b14: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0B18u;
        goto label_1b0b18;
    }
    ctx->pc = 0x1B0B10u;
    SET_GPR_U32(ctx, 31, 0x1B0B18u);
    ctx->pc = 0x1B0B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0B10u;
    // 0x1b0b14: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0E38u;
    goto label_1b0e38;
    ctx->pc = 0x1B0B18u;
label_1b0b18:
    // 0x1b0b18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b0b1c:
    // 0x1b0b1c: 0x3e00008  jr          $ra
label_1b0b20:
    if (ctx->pc == 0x1B0B20u) {
        ctx->pc = 0x1B0B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B1Cu;
        // 0x1b0b20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0B24u;
        goto label_1b0b24;
    }
    ctx->pc = 0x1B0B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B1Cu;
        // 0x1b0b20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0B24u;
label_1b0b24:
    // 0x1b0b24: 0x0  nop
    ctx->pc = 0x1b0b24u;
    // NOP
label_1b0b28:
    // 0x1b0b28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b0b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b0b2c:
    // 0x1b0b2c: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x1b0b2cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
label_1b0b30:
    // 0x1b0b30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b0b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b0b34:
    // 0x1b0b34: 0x250861d8  addiu       $t0, $t0, 0x61D8
    ctx->pc = 0x1b0b34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 25048));
label_1b0b38:
    // 0x1b0b38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0b3c:
    // 0x1b0b3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0b3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0b40:
    // 0x1b0b40: 0xc06c38e  jal         func_1B0E38
label_1b0b44:
    if (ctx->pc == 0x1B0B44u) {
        ctx->pc = 0x1B0B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B40u;
        // 0x1b0b44: 0x24070009  addiu       $a3, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0B48u;
        goto label_1b0b48;
    }
    ctx->pc = 0x1B0B40u;
    SET_GPR_U32(ctx, 31, 0x1B0B48u);
    ctx->pc = 0x1B0B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0B40u;
    // 0x1b0b44: 0x24070009  addiu       $a3, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0E38u;
    goto label_1b0e38;
    ctx->pc = 0x1B0B48u;
label_1b0b48:
    // 0x1b0b48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b0b4c:
    // 0x1b0b4c: 0x3e00008  jr          $ra
label_1b0b50:
    if (ctx->pc == 0x1B0B50u) {
        ctx->pc = 0x1B0B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B4Cu;
        // 0x1b0b50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0B54u;
        goto label_1b0b54;
    }
    ctx->pc = 0x1B0B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B4Cu;
        // 0x1b0b50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0B54u;
label_1b0b54:
    // 0x1b0b54: 0x0  nop
    ctx->pc = 0x1b0b54u;
    // NOP
label_1b0b58:
    // 0x1b0b58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b0b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b0b5c:
    // 0x1b0b5c: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x1b0b5cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
label_1b0b60:
    // 0x1b0b60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b0b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b0b64:
    // 0x1b0b64: 0x250861d8  addiu       $t0, $t0, 0x61D8
    ctx->pc = 0x1b0b64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 25048));
label_1b0b68:
    // 0x1b0b68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0b6c:
    // 0x1b0b6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0b6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0b70:
    // 0x1b0b70: 0xc06c38e  jal         func_1B0E38
label_1b0b74:
    if (ctx->pc == 0x1B0B74u) {
        ctx->pc = 0x1B0B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B70u;
        // 0x1b0b74: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0B78u;
        goto label_1b0b78;
    }
    ctx->pc = 0x1B0B70u;
    SET_GPR_U32(ctx, 31, 0x1B0B78u);
    ctx->pc = 0x1B0B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0B70u;
    // 0x1b0b74: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0E38u;
    goto label_1b0e38;
    ctx->pc = 0x1B0B78u;
label_1b0b78:
    // 0x1b0b78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b0b7c:
    // 0x1b0b7c: 0x3e00008  jr          $ra
label_1b0b80:
    if (ctx->pc == 0x1B0B80u) {
        ctx->pc = 0x1B0B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B7Cu;
        // 0x1b0b80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0B84u;
        goto label_1b0b84;
    }
    ctx->pc = 0x1B0B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B7Cu;
        // 0x1b0b80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0B84u;
label_1b0b84:
    // 0x1b0b84: 0x0  nop
    ctx->pc = 0x1b0b84u;
    // NOP
label_1b0b88:
    // 0x1b0b88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b0b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b0b8c:
    // 0x1b0b8c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1b0b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1b0b90:
    // 0x1b0b90: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x1b0b90u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
label_1b0b94:
    // 0x1b0b94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b0b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b0b98:
    // 0x1b0b98: 0xac408cf0  sw          $zero, -0x7310($v0)
    ctx->pc = 0x1b0b98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937840), GPR_U32(ctx, 0));
label_1b0b9c:
    // 0x1b0b9c: 0x250861d8  addiu       $t0, $t0, 0x61D8
    ctx->pc = 0x1b0b9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 25048));
label_1b0ba0:
    // 0x1b0ba0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b0ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0ba4:
    // 0x1b0ba4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0ba8:
    // 0x1b0ba8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0ba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0bac:
    // 0x1b0bac: 0xc06c38e  jal         func_1B0E38
label_1b0bb0:
    if (ctx->pc == 0x1B0BB0u) {
        ctx->pc = 0x1B0BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0BACu;
        // 0x1b0bb0: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0BB4u;
        goto label_1b0bb4;
    }
    ctx->pc = 0x1B0BACu;
    SET_GPR_U32(ctx, 31, 0x1B0BB4u);
    ctx->pc = 0x1B0BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0BACu;
    // 0x1b0bb0: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0E38u;
    goto label_1b0e38;
    ctx->pc = 0x1B0BB4u;
label_1b0bb4:
    // 0x1b0bb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b0bb8:
    // 0x1b0bb8: 0x3e00008  jr          $ra
label_1b0bbc:
    if (ctx->pc == 0x1B0BBCu) {
        ctx->pc = 0x1B0BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0BB8u;
        // 0x1b0bbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0BC0u;
        goto label_1b0bc0;
    }
    ctx->pc = 0x1B0BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0BB8u;
        // 0x1b0bbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0BC0u;
label_1b0bc0:
    // 0x1b0bc0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b0bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1b0bc4:
    // 0x1b0bc4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1b0bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_1b0bc8:
    // 0x1b0bc8: 0x3c160028  lui         $s6, 0x28
    ctx->pc = 0x1b0bc8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)40 << 16));
label_1b0bcc:
    // 0x1b0bcc: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x1b0bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_1b0bd0:
    // 0x1b0bd0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1b0bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1b0bd4:
    // 0x1b0bd4: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x1b0bd4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b0bd8:
    // 0x1b0bd8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1b0bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1b0bdc:
    // 0x1b0bdc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b0bdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b0be0:
    // 0x1b0be0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b0be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b0be4:
    // 0x1b0be4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b0be4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b0be8:
    // 0x1b0be8: 0x8ec27290  lw          $v0, 0x7290($s6)
    ctx->pc = 0x1b0be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29328)));
label_1b0bec:
    // 0x1b0bec: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1b0becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b0bf0:
    // 0x1b0bf0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1b0bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1b0bf4:
    // 0x1b0bf4: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x1b0bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_1b0bf8:
    // 0x1b0bf8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1b0bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_1b0bfc:
    // 0x1b0bfc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1b0bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1b0c00:
    // 0x1b0c00: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_1b0c04:
    if (ctx->pc == 0x1B0C04u) {
        ctx->pc = 0x1B0C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C00u;
        // 0x1b0c04: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0C08u;
        goto label_1b0c08;
    }
    ctx->pc = 0x1B0C00u;
    {
        const bool branch_taken_0x1b0c00 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B0C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C00u;
        // 0x1b0c04: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c00) {
            ctx->pc = 0x1B0C18u;
            goto label_1b0c18;
        }
    }
    ctx->pc = 0x1B0C08u;
label_1b0c08:
    // 0x1b0c08: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1b0c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1b0c0c:
    // 0x1b0c0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b0c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b0c10:
    // 0x1b0c10: 0xc069a30  jal         func_1A68C0
label_1b0c14:
    if (ctx->pc == 0x1B0C14u) {
        ctx->pc = 0x1B0C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C10u;
        // 0x1b0c14: 0x2484ab78  addiu       $a0, $a0, -0x5488 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0C18u;
        goto label_1b0c18;
    }
    ctx->pc = 0x1B0C10u;
    SET_GPR_U32(ctx, 31, 0x1B0C18u);
    ctx->pc = 0x1B0C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0C10u;
    // 0x1b0c14: 0x2484ab78  addiu       $a0, $a0, -0x5488 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1B0C18u;
label_1b0c18:
    // 0x1b0c18: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1b0c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1b0c1c:
    // 0x1b0c1c: 0x8c438cf0  lw          $v1, -0x7310($v0)
    ctx->pc = 0x1b0c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937840)));
label_1b0c20:
    // 0x1b0c20: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1b0c24:
    if (ctx->pc == 0x1B0C24u) {
        ctx->pc = 0x1B0C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C20u;
        // 0x1b0c24: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0C28u;
        goto label_1b0c28;
    }
    ctx->pc = 0x1B0C20u;
    {
        const bool branch_taken_0x1b0c20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C20u;
        // 0x1b0c24: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c20) {
            ctx->pc = 0x1B0C30u;
            goto label_1b0c30;
        }
    }
    ctx->pc = 0x1B0C28u;
label_1b0c28:
    // 0x1b0c28: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1b0c2c:
    if (ctx->pc == 0x1B0C2Cu) {
        ctx->pc = 0x1B0C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C28u;
        // 0x1b0c2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0C30u;
        goto label_1b0c30;
    }
    ctx->pc = 0x1B0C28u;
    {
        const bool branch_taken_0x1b0c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C28u;
        // 0x1b0c2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c28) {
            ctx->pc = 0x1B0D18u;
            goto label_1b0d18;
        }
    }
    ctx->pc = 0x1B0C30u;
label_1b0c30:
    // 0x1b0c30: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b0c30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0c34:
    // 0x1b0c34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b0c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b0c38:
    // 0x1b0c38: 0xc069bee  jal         func_1A6FB8
label_1b0c3c:
    if (ctx->pc == 0x1B0C3Cu) {
        ctx->pc = 0x1B0C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C38u;
        // 0x1b0c3c: 0x122ac0  sll         $a1, $s2, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0C40u;
        goto label_1b0c40;
    }
    ctx->pc = 0x1B0C38u;
    SET_GPR_U32(ctx, 31, 0x1B0C40u);
    ctx->pc = 0x1B0C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0C38u;
    // 0x1b0c3c: 0x122ac0  sll         $a1, $s2, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    { ctx->pc = 0x1a6fb8; return; }
    ctx->pc = 0x1B0C40u;
label_1b0c40:
    // 0x1b0c40: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
label_1b0c44:
    if (ctx->pc == 0x1B0C44u) {
        ctx->pc = 0x1B0C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C40u;
        // 0x1b0c44: 0x3c150037  lui         $s5, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0C48u;
        goto label_1b0c48;
    }
    ctx->pc = 0x1B0C40u;
    {
        const bool branch_taken_0x1b0c40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C40u;
        // 0x1b0c44: 0x3c150037  lui         $s5, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c40) {
            ctx->pc = 0x1B0CECu;
            goto label_1b0cec;
        }
    }
    ctx->pc = 0x1B0C48u;
label_1b0c48:
    // 0x1b0c48: 0x10000006  b           . + 4 + (0x6 << 2)
label_1b0c4c:
    if (ctx->pc == 0x1B0C4Cu) {
        ctx->pc = 0x1B0C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C48u;
        // 0x1b0c4c: 0x1332c0  sll         $a2, $s3, 11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0C50u;
        goto label_1b0c50;
    }
    ctx->pc = 0x1B0C48u;
    {
        const bool branch_taken_0x1b0c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C48u;
        // 0x1b0c4c: 0x1332c0  sll         $a2, $s3, 11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c48) {
            ctx->pc = 0x1B0C64u;
            goto label_1b0c64;
        }
    }
    ctx->pc = 0x1B0C50u;
label_1b0c50:
    // 0x1b0c50: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1b0c54:
    if (ctx->pc == 0x1B0C54u) {
        ctx->pc = 0x1B0C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C50u;
        // 0x1b0c54: 0x1332c0  sll         $a2, $s3, 11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0C58u;
        goto label_1b0c58;
    }
    ctx->pc = 0x1B0C50u;
    {
        const bool branch_taken_0x1b0c50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C50u;
        // 0x1b0c54: 0x1332c0  sll         $a2, $s3, 11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c50) {
            ctx->pc = 0x1B0C64u;
            goto label_1b0c64;
        }
    }
    ctx->pc = 0x1B0C58u;
label_1b0c58:
    // 0x1b0c58: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
label_1b0c5c:
    if (ctx->pc == 0x1B0C5Cu) {
        ctx->pc = 0x1B0C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C58u;
        // 0x1b0c5c: 0x8ec27290  lw          $v0, 0x7290($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0C60u;
        goto label_1b0c60;
    }
    ctx->pc = 0x1B0C58u;
    {
        const bool branch_taken_0x1b0c58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C58u;
        // 0x1b0c5c: 0x8ec27290  lw          $v0, 0x7290($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c58) {
            ctx->pc = 0x1B0CD4u;
            goto label_1b0cd4;
        }
    }
    ctx->pc = 0x1B0C60u;
label_1b0c60:
    // 0x1b0c60: 0x1332c0  sll         $a2, $s3, 11
    ctx->pc = 0x1b0c60u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 11));
label_1b0c64:
    // 0x1b0c64: 0x2532823  subu        $a1, $s2, $s3
    ctx->pc = 0x1b0c64u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_1b0c68:
    // 0x1b0c68: 0x2863021  addu        $a2, $s4, $a2
    ctx->pc = 0x1b0c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
label_1b0c6c:
    // 0x1b0c6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b0c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0c70:
    // 0x1b0c70: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1b0c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b0c74:
    // 0x1b0c74: 0xc06c38e  jal         func_1B0E38
label_1b0c78:
    if (ctx->pc == 0x1B0C78u) {
        ctx->pc = 0x1B0C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C74u;
        // 0x1b0c78: 0x26a861d8  addiu       $t0, $s5, 0x61D8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 25048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0C7Cu;
        goto label_1b0c7c;
    }
    ctx->pc = 0x1B0C74u;
    SET_GPR_U32(ctx, 31, 0x1B0C7Cu);
    ctx->pc = 0x1B0C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0C74u;
    // 0x1b0c78: 0x26a861d8  addiu       $t0, $s5, 0x61D8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 25048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0E38u;
    goto label_1b0e38;
    ctx->pc = 0x1B0C7Cu;
label_1b0c7c:
    // 0x1b0c7c: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1b0c7cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1b0c80:
    // 0x1b0c80: 0x28402  srl         $s0, $v0, 16
    ctx->pc = 0x1b0c80u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_1b0c84:
    // 0x1b0c84: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_1b0c88:
    if (ctx->pc == 0x1B0C88u) {
        ctx->pc = 0x1B0C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C84u;
        // 0x1b0c88: 0x2719821  addu        $s3, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0C8Cu;
        goto label_1b0c8c;
    }
    ctx->pc = 0x1B0C84u;
    {
        const bool branch_taken_0x1b0c84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C84u;
        // 0x1b0c88: 0x2719821  addu        $s3, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c84) {
            ctx->pc = 0x1B0CBCu;
            goto label_1b0cbc;
        }
    }
    ctx->pc = 0x1B0C8Cu;
label_1b0c8c:
    // 0x1b0c8c: 0x8ec27290  lw          $v0, 0x7290($s6)
    ctx->pc = 0x1b0c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29328)));
label_1b0c90:
    // 0x1b0c90: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
label_1b0c94:
    if (ctx->pc == 0x1B0C94u) {
        ctx->pc = 0x1B0C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C90u;
        // 0x1b0c94: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0C98u;
        goto label_1b0c98;
    }
    ctx->pc = 0x1B0C90u;
    {
        const bool branch_taken_0x1b0c90 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B0C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C90u;
        // 0x1b0c94: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c90) {
            ctx->pc = 0x1B0CCCu;
            goto label_1b0ccc;
        }
    }
    ctx->pc = 0x1B0C98u;
label_1b0c98:
    // 0x1b0c98: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1b0c98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1b0c9c:
    // 0x1b0c9c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b0c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b0ca0:
    // 0x1b0ca0: 0x2484aba8  addiu       $a0, $a0, -0x5458
    ctx->pc = 0x1b0ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945704));
label_1b0ca4:
    // 0x1b0ca4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b0ca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b0ca8:
    // 0x1b0ca8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1b0ca8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b0cac:
    // 0x1b0cac: 0xc069a30  jal         func_1A68C0
label_1b0cb0:
    if (ctx->pc == 0x1B0CB0u) {
        ctx->pc = 0x1B0CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CACu;
        // 0x1b0cb0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0CB4u;
        goto label_1b0cb4;
    }
    ctx->pc = 0x1B0CACu;
    SET_GPR_U32(ctx, 31, 0x1B0CB4u);
    ctx->pc = 0x1B0CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0CACu;
    // 0x1b0cb0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1B0CB4u;
label_1b0cb4:
    // 0x1b0cb4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1b0cb8:
    if (ctx->pc == 0x1B0CB8u) {
        ctx->pc = 0x1B0CBCu;
        goto label_1b0cbc;
    }
    ctx->pc = 0x1B0CB4u;
    {
        const bool branch_taken_0x1b0cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0cb4) {
            ctx->pc = 0x1B0CCCu;
            goto label_1b0ccc;
        }
    }
    ctx->pc = 0x1B0CBCu;
label_1b0cbc:
    // 0x1b0cbc: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_1b0cc0:
    if (ctx->pc == 0x1B0CC0u) {
        ctx->pc = 0x1B0CC4u;
        goto label_1b0cc4;
    }
    ctx->pc = 0x1B0CBCu;
    {
        const bool branch_taken_0x1b0cbc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0cbc) {
            ctx->pc = 0x1B0CCCu;
            goto label_1b0ccc;
        }
    }
    ctx->pc = 0x1B0CC4u;
label_1b0cc4:
    // 0x1b0cc4: 0xc06bc12  jal         func_1AF048
label_1b0cc8:
    if (ctx->pc == 0x1B0CC8u) {
        ctx->pc = 0x1B0CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CC4u;
        // 0x1b0cc8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0CCCu;
        goto label_1b0ccc;
    }
    ctx->pc = 0x1B0CC4u;
    SET_GPR_U32(ctx, 31, 0x1B0CCCu);
    ctx->pc = 0x1B0CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0CC4u;
    // 0x1b0cc8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF048u;
    { ctx->pc = 0x1af048; return; }
    ctx->pc = 0x1B0CCCu;
label_1b0ccc:
    // 0x1b0ccc: 0x1672ffe0  bne         $s3, $s2, . + 4 + (-0x20 << 2)
label_1b0cd0:
    if (ctx->pc == 0x1B0CD0u) {
        ctx->pc = 0x1B0CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CCCu;
        // 0x1b0cd0: 0x8ec27290  lw          $v0, 0x7290($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0CD4u;
        goto label_1b0cd4;
    }
    ctx->pc = 0x1B0CCCu;
    {
        const bool branch_taken_0x1b0ccc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 18));
        ctx->pc = 0x1B0CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CCCu;
        // 0x1b0cd0: 0x8ec27290  lw          $v0, 0x7290($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ccc) {
            ctx->pc = 0x1B0C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0c50;
        }
    }
    ctx->pc = 0x1B0CD4u;
label_1b0cd4:
    // 0x1b0cd4: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1b0cd8:
    if (ctx->pc == 0x1B0CD8u) {
        ctx->pc = 0x1B0CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CD4u;
        // 0x1b0cd8: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0CDCu;
        goto label_1b0cdc;
    }
    ctx->pc = 0x1B0CD4u;
    {
        const bool branch_taken_0x1b0cd4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B0CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CD4u;
        // 0x1b0cd8: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0cd4) {
            ctx->pc = 0x1B0CE4u;
            goto label_1b0ce4;
        }
    }
    ctx->pc = 0x1B0CDCu;
label_1b0cdc:
    // 0x1b0cdc: 0xc069a30  jal         func_1A68C0
label_1b0ce0:
    if (ctx->pc == 0x1B0CE0u) {
        ctx->pc = 0x1B0CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CDCu;
        // 0x1b0ce0: 0x2484abf0  addiu       $a0, $a0, -0x5410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0CE4u;
        goto label_1b0ce4;
    }
    ctx->pc = 0x1B0CDCu;
    SET_GPR_U32(ctx, 31, 0x1B0CE4u);
    ctx->pc = 0x1B0CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0CDCu;
    // 0x1b0ce0: 0x2484abf0  addiu       $a0, $a0, -0x5410 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1B0CE4u;
label_1b0ce4:
    // 0x1b0ce4: 0x1000000b  b           . + 4 + (0xB << 2)
label_1b0ce8:
    if (ctx->pc == 0x1B0CE8u) {
        ctx->pc = 0x1B0CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CE4u;
        // 0x1b0ce8: 0xafd70000  sw          $s7, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0CECu;
        goto label_1b0cec;
    }
    ctx->pc = 0x1B0CE4u;
    {
        const bool branch_taken_0x1b0ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CE4u;
        // 0x1b0ce8: 0xafd70000  sw          $s7, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ce4) {
            ctx->pc = 0x1B0D14u;
            goto label_1b0d14;
        }
    }
    ctx->pc = 0x1B0CECu;
label_1b0cec:
    // 0x1b0cec: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x1b0cecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
label_1b0cf0:
    // 0x1b0cf0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b0cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b0cf4:
    // 0x1b0cf4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1b0cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b0cf8:
    // 0x1b0cf8: 0x250861d8  addiu       $t0, $t0, 0x61D8
    ctx->pc = 0x1b0cf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 25048));
label_1b0cfc:
    // 0x1b0cfc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b0cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0d00:
    // 0x1b0d00: 0xc06c38e  jal         func_1B0E38
label_1b0d04:
    if (ctx->pc == 0x1B0D04u) {
        ctx->pc = 0x1B0D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D00u;
        // 0x1b0d04: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0D08u;
        goto label_1b0d08;
    }
    ctx->pc = 0x1B0D00u;
    SET_GPR_U32(ctx, 31, 0x1B0D08u);
    ctx->pc = 0x1B0D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0D00u;
    // 0x1b0d04: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0E38u;
    goto label_1b0e38;
    ctx->pc = 0x1B0D08u;
label_1b0d08:
    // 0x1b0d08: 0x28402  srl         $s0, $v0, 16
    ctx->pc = 0x1b0d08u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_1b0d0c:
    // 0x1b0d0c: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x1b0d0cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1b0d10:
    // 0x1b0d10: 0xafd00000  sw          $s0, 0x0($fp)
    ctx->pc = 0x1b0d10u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 16));
label_1b0d14:
    // 0x1b0d14: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1b0d14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b0d18:
    // 0x1b0d18: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1b0d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1b0d1c:
    // 0x1b0d1c: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x1b0d1cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1b0d20:
    // 0x1b0d20: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x1b0d20u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1b0d24:
    // 0x1b0d24: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1b0d24u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1b0d28:
    // 0x1b0d28: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1b0d28u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b0d2c:
    // 0x1b0d2c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1b0d2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b0d30:
    // 0x1b0d30: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1b0d30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b0d34:
    // 0x1b0d34: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b0d34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b0d38:
    // 0x1b0d38: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b0d38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b0d3c:
    // 0x1b0d3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b0d3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b0d40:
    // 0x1b0d40: 0x3e00008  jr          $ra
label_1b0d44:
    if (ctx->pc == 0x1B0D44u) {
        ctx->pc = 0x1B0D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D40u;
        // 0x1b0d44: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0D48u;
        goto label_1b0d48;
    }
    ctx->pc = 0x1B0D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D40u;
        // 0x1b0d44: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0D48u;
label_1b0d48:
    // 0x1b0d48: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1b0d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1b0d4c:
    // 0x1b0d4c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b0d4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b0d50:
    // 0x1b0d50: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1b0d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1b0d54:
    // 0x1b0d54: 0x8c447290  lw          $a0, 0x7290($v0)
    ctx->pc = 0x1b0d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29328)));
label_1b0d58:
    // 0x1b0d58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b0d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b0d5c:
    // 0x1b0d5c: 0x18800004  blez        $a0, . + 4 + (0x4 << 2)
label_1b0d60:
    if (ctx->pc == 0x1B0D60u) {
        ctx->pc = 0x1B0D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D5Cu;
        // 0x1b0d60: 0xac608cf0  sw          $zero, -0x7310($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937840), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0D64u;
        goto label_1b0d64;
    }
    ctx->pc = 0x1B0D5Cu;
    {
        const bool branch_taken_0x1b0d5c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1B0D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D5Cu;
        // 0x1b0d60: 0xac608cf0  sw          $zero, -0x7310($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937840), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d5c) {
            ctx->pc = 0x1B0D70u;
            goto label_1b0d70;
        }
    }
    ctx->pc = 0x1B0D64u;
label_1b0d64:
    // 0x1b0d64: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1b0d64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1b0d68:
    // 0x1b0d68: 0xc069a30  jal         func_1A68C0
label_1b0d6c:
    if (ctx->pc == 0x1B0D6Cu) {
        ctx->pc = 0x1B0D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D68u;
        // 0x1b0d6c: 0x2484ac10  addiu       $a0, $a0, -0x53F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0D70u;
        goto label_1b0d70;
    }
    ctx->pc = 0x1B0D68u;
    SET_GPR_U32(ctx, 31, 0x1B0D70u);
    ctx->pc = 0x1B0D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0D68u;
    // 0x1b0d6c: 0x2484ac10  addiu       $a0, $a0, -0x53F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1B0D70u;
label_1b0d70:
    // 0x1b0d70: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x1b0d70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
label_1b0d74:
    // 0x1b0d74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b0d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0d78:
    // 0x1b0d78: 0x250861d8  addiu       $t0, $t0, 0x61D8
    ctx->pc = 0x1b0d78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 25048));
label_1b0d7c:
    // 0x1b0d7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0d80:
    // 0x1b0d80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0d80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0d84:
    // 0x1b0d84: 0xc06c38e  jal         func_1B0E38
label_1b0d88:
    if (ctx->pc == 0x1B0D88u) {
        ctx->pc = 0x1B0D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D84u;
        // 0x1b0d88: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0D8Cu;
        goto label_1b0d8c;
    }
    ctx->pc = 0x1B0D84u;
    SET_GPR_U32(ctx, 31, 0x1B0D8Cu);
    ctx->pc = 0x1B0D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0D84u;
    // 0x1b0d88: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0E38u;
    goto label_1b0e38;
    ctx->pc = 0x1B0D8Cu;
label_1b0d8c:
    // 0x1b0d8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b0d90:
    // 0x1b0d90: 0x3e00008  jr          $ra
label_1b0d94:
    if (ctx->pc == 0x1B0D94u) {
        ctx->pc = 0x1B0D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D90u;
        // 0x1b0d94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0D98u;
        goto label_1b0d98;
    }
    ctx->pc = 0x1B0D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D90u;
        // 0x1b0d94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0D98u;
label_1b0d98:
    // 0x1b0d98: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1b0d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1b0d9c:
    // 0x1b0d9c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b0d9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b0da0:
    // 0x1b0da0: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1b0da0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1b0da4:
    // 0x1b0da4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0da8:
    // 0x1b0da8: 0x8c657290  lw          $a1, 0x7290($v1)
    ctx->pc = 0x1b0da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29328)));
label_1b0dac:
    // 0x1b0dac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b0dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b0db0:
    // 0x1b0db0: 0x18a00004  blez        $a1, . + 4 + (0x4 << 2)
label_1b0db4:
    if (ctx->pc == 0x1B0DB4u) {
        ctx->pc = 0x1B0DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DB0u;
        // 0x1b0db4: 0xac828cf0  sw          $v0, -0x7310($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294937840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0DB8u;
        goto label_1b0db8;
    }
    ctx->pc = 0x1B0DB0u;
    {
        const bool branch_taken_0x1b0db0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1B0DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DB0u;
        // 0x1b0db4: 0xac828cf0  sw          $v0, -0x7310($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294937840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0db0) {
            ctx->pc = 0x1B0DC4u;
            goto label_1b0dc4;
        }
    }
    ctx->pc = 0x1B0DB8u;
label_1b0db8:
    // 0x1b0db8: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1b0db8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1b0dbc:
    // 0x1b0dbc: 0xc069a30  jal         func_1A68C0
label_1b0dc0:
    if (ctx->pc == 0x1B0DC0u) {
        ctx->pc = 0x1B0DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DBCu;
        // 0x1b0dc0: 0x2484ac28  addiu       $a0, $a0, -0x53D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0DC4u;
        goto label_1b0dc4;
    }
    ctx->pc = 0x1B0DBCu;
    SET_GPR_U32(ctx, 31, 0x1B0DC4u);
    ctx->pc = 0x1B0DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0DBCu;
    // 0x1b0dc0: 0x2484ac28  addiu       $a0, $a0, -0x53D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1B0DC4u;
label_1b0dc4:
    // 0x1b0dc4: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x1b0dc4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
label_1b0dc8:
    // 0x1b0dc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b0dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0dcc:
    // 0x1b0dcc: 0x250861d8  addiu       $t0, $t0, 0x61D8
    ctx->pc = 0x1b0dccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 25048));
label_1b0dd0:
    // 0x1b0dd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0dd4:
    // 0x1b0dd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0dd8:
    // 0x1b0dd8: 0xc06c38e  jal         func_1B0E38
label_1b0ddc:
    if (ctx->pc == 0x1B0DDCu) {
        ctx->pc = 0x1B0DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DD8u;
        // 0x1b0ddc: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0DE0u;
        goto label_1b0de0;
    }
    ctx->pc = 0x1B0DD8u;
    SET_GPR_U32(ctx, 31, 0x1B0DE0u);
    ctx->pc = 0x1B0DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0DD8u;
    // 0x1b0ddc: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0E38u;
    goto label_1b0e38;
    ctx->pc = 0x1B0DE0u;
label_1b0de0:
    // 0x1b0de0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b0de4:
    // 0x1b0de4: 0x3e00008  jr          $ra
label_1b0de8:
    if (ctx->pc == 0x1B0DE8u) {
        ctx->pc = 0x1B0DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DE4u;
        // 0x1b0de8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0DECu;
        goto label_1b0dec;
    }
    ctx->pc = 0x1B0DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DE4u;
        // 0x1b0de8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0DECu;
label_1b0dec:
    // 0x1b0dec: 0x0  nop
    ctx->pc = 0x1b0decu;
    // NOP
label_1b0df0:
    // 0x1b0df0: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1b0df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1b0df4:
    // 0x1b0df4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b0df4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b0df8:
    // 0x1b0df8: 0x8c437290  lw          $v1, 0x7290($v0)
    ctx->pc = 0x1b0df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29328)));
label_1b0dfc:
    // 0x1b0dfc: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
label_1b0e00:
    if (ctx->pc == 0x1B0E00u) {
        ctx->pc = 0x1B0E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DFCu;
        // 0x1b0e00: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E04u;
        goto label_1b0e04;
    }
    ctx->pc = 0x1B0DFCu;
    {
        const bool branch_taken_0x1b0dfc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1B0E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DFCu;
        // 0x1b0e00: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0dfc) {
            ctx->pc = 0x1B0E10u;
            goto label_1b0e10;
        }
    }
    ctx->pc = 0x1B0E04u;
label_1b0e04:
    // 0x1b0e04: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1b0e04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1b0e08:
    // 0x1b0e08: 0xc069a30  jal         func_1A68C0
label_1b0e0c:
    if (ctx->pc == 0x1B0E0Cu) {
        ctx->pc = 0x1B0E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E08u;
        // 0x1b0e0c: 0x2484ac40  addiu       $a0, $a0, -0x53C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E10u;
        goto label_1b0e10;
    }
    ctx->pc = 0x1B0E08u;
    SET_GPR_U32(ctx, 31, 0x1B0E10u);
    ctx->pc = 0x1B0E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0E08u;
    // 0x1b0e0c: 0x2484ac40  addiu       $a0, $a0, -0x53C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1B0E10u;
label_1b0e10:
    // 0x1b0e10: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x1b0e10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
label_1b0e14:
    // 0x1b0e14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b0e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0e18:
    // 0x1b0e18: 0x250861d8  addiu       $t0, $t0, 0x61D8
    ctx->pc = 0x1b0e18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 25048));
label_1b0e1c:
    // 0x1b0e1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0e20:
    // 0x1b0e20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0e20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0e24:
    // 0x1b0e24: 0xc06c38e  jal         func_1B0E38
label_1b0e28:
    if (ctx->pc == 0x1B0E28u) {
        ctx->pc = 0x1B0E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E24u;
        // 0x1b0e28: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E2Cu;
        goto label_1b0e2c;
    }
    ctx->pc = 0x1B0E24u;
    SET_GPR_U32(ctx, 31, 0x1B0E2Cu);
    ctx->pc = 0x1B0E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0E24u;
    // 0x1b0e28: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0E38u;
    goto label_1b0e38;
    ctx->pc = 0x1B0E2Cu;
label_1b0e2c:
    // 0x1b0e2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b0e30:
    // 0x1b0e30: 0x3e00008  jr          $ra
label_1b0e34:
    if (ctx->pc == 0x1B0E34u) {
        ctx->pc = 0x1B0E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E30u;
        // 0x1b0e34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E38u;
        goto label_1b0e38;
    }
    ctx->pc = 0x1B0E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E30u;
        // 0x1b0e34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0E38u;
label_1b0e38:
    // 0x1b0e38: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b0e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1b0e3c:
    // 0x1b0e3c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1b0e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_1b0e40:
    // 0x1b0e40: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1b0e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_1b0e44:
    // 0x1b0e44: 0x3c170028  lui         $s7, 0x28
    ctx->pc = 0x1b0e44u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)40 << 16));
label_1b0e48:
    // 0x1b0e48: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1b0e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1b0e4c:
    // 0x1b0e4c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1b0e4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b0e50:
    // 0x1b0e50: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b0e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1b0e54:
    // 0x1b0e54: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1b0e54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b0e58:
    // 0x1b0e58: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b0e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1b0e5c:
    // 0x1b0e5c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1b0e5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b0e60:
    // 0x1b0e60: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b0e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1b0e64:
    // 0x1b0e64: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b0e64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b0e68:
    // 0x1b0e68: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b0e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1b0e6c:
    // 0x1b0e6c: 0x26f17380  addiu       $s1, $s7, 0x7380
    ctx->pc = 0x1b0e6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 29568));
label_1b0e70:
    // 0x1b0e70: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1b0e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1b0e74:
    // 0x1b0e74: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1b0e74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1b0e78:
    // 0x1b0e78: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1b0e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_1b0e7c:
    // 0x1b0e7c: 0xc06be60  jal         func_1AF980
label_1b0e80:
    if (ctx->pc == 0x1B0E80u) {
        ctx->pc = 0x1B0E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E7Cu;
        // 0x1b0e80: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E84u;
        goto label_1b0e84;
    }
    ctx->pc = 0x1B0E7Cu;
    SET_GPR_U32(ctx, 31, 0x1B0E84u);
    ctx->pc = 0x1B0E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0E7Cu;
    // 0x1b0e80: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF980u;
    { ctx->pc = 0x1af980; return; }
    ctx->pc = 0x1B0E84u;
label_1b0e84:
    // 0x1b0e84: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b0e88:
    if (ctx->pc == 0x1B0E88u) {
        ctx->pc = 0x1B0E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E84u;
        // 0x1b0e88: 0x3c160028  lui         $s6, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E8Cu;
        goto label_1b0e8c;
    }
    ctx->pc = 0x1B0E84u;
    {
        const bool branch_taken_0x1b0e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E84u;
        // 0x1b0e88: 0x3c160028  lui         $s6, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0e84) {
            ctx->pc = 0x1B0E94u;
            goto label_1b0e94;
        }
    }
    ctx->pc = 0x1B0E8Cu;
label_1b0e8c:
    // 0x1b0e8c: 0x10000039  b           . + 4 + (0x39 << 2)
label_1b0e90:
    if (ctx->pc == 0x1B0E90u) {
        ctx->pc = 0x1B0E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E8Cu;
        // 0x1b0e90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E94u;
        goto label_1b0e94;
    }
    ctx->pc = 0x1B0E8Cu;
    {
        const bool branch_taken_0x1b0e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E8Cu;
        // 0x1b0e90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0e8c) {
            ctx->pc = 0x1B0F74u;
            goto label_1b0f74;
        }
    }
    ctx->pc = 0x1B0E94u;
label_1b0e94:
    // 0x1b0e94: 0x8ec47290  lw          $a0, 0x7290($s6)
    ctx->pc = 0x1b0e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29328)));
label_1b0e98:
    // 0x1b0e98: 0x58800006  blezl       $a0, . + 4 + (0x6 << 2)
label_1b0e9c:
    if (ctx->pc == 0x1B0E9Cu) {
        ctx->pc = 0x1B0E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E98u;
        // 0x1b0e9c: 0xaef57380  sw          $s5, 0x7380($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 29568), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0EA0u;
        goto label_1b0ea0;
    }
    ctx->pc = 0x1B0E98u;
    {
        const bool branch_taken_0x1b0e98 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x1b0e98) {
            ctx->pc = 0x1B0E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0E98u;
            // 0x1b0e9c: 0xaef57380  sw          $s5, 0x7380($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 29568), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0EB4u;
            goto label_1b0eb4;
        }
    }
    ctx->pc = 0x1B0EA0u;
label_1b0ea0:
    // 0x1b0ea0: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1b0ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1b0ea4:
    // 0x1b0ea4: 0xc069a30  jal         func_1A68C0
label_1b0ea8:
    if (ctx->pc == 0x1B0EA8u) {
        ctx->pc = 0x1B0EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EA4u;
        // 0x1b0ea8: 0x2484ac58  addiu       $a0, $a0, -0x53A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0EACu;
        goto label_1b0eac;
    }
    ctx->pc = 0x1B0EA4u;
    SET_GPR_U32(ctx, 31, 0x1B0EACu);
    ctx->pc = 0x1B0EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0EA4u;
    // 0x1b0ea8: 0x2484ac58  addiu       $a0, $a0, -0x53A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1B0EACu;
label_1b0eac:
    // 0x1b0eac: 0x8ec47290  lw          $a0, 0x7290($s6)
    ctx->pc = 0x1b0eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29328)));
label_1b0eb0:
    // 0x1b0eb0: 0xaef57380  sw          $s5, 0x7380($s7)
    ctx->pc = 0x1b0eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 29568), GPR_U32(ctx, 21));
label_1b0eb4:
    // 0x1b0eb4: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x1b0eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_1b0eb8:
    // 0x1b0eb8: 0xae330008  sw          $s3, 0x8($s1)
    ctx->pc = 0x1b0eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
label_1b0ebc:
    // 0x1b0ebc: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_1b0ec0:
    if (ctx->pc == 0x1B0EC0u) {
        ctx->pc = 0x1B0EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EBCu;
        // 0x1b0ec0: 0xae34000c  sw          $s4, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0EC4u;
        goto label_1b0ec4;
    }
    ctx->pc = 0x1B0EBCu;
    {
        const bool branch_taken_0x1b0ebc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EBCu;
        // 0x1b0ec0: 0xae34000c  sw          $s4, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ebc) {
            ctx->pc = 0x1B0EDCu;
            goto label_1b0edc;
        }
    }
    ctx->pc = 0x1B0EC4u;
label_1b0ec4:
    // 0x1b0ec4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1b0ec4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1b0ec8:
    // 0x1b0ec8: 0xa2220010  sb          $v0, 0x10($s1)
    ctx->pc = 0x1b0ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 2));
label_1b0ecc:
    // 0x1b0ecc: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x1b0eccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1b0ed0:
    // 0x1b0ed0: 0xa2230011  sb          $v1, 0x11($s1)
    ctx->pc = 0x1b0ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 3));
label_1b0ed4:
    // 0x1b0ed4: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x1b0ed4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_1b0ed8:
    // 0x1b0ed8: 0xa2220012  sb          $v0, 0x12($s1)
    ctx->pc = 0x1b0ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 2));
label_1b0edc:
    // 0x1b0edc: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
label_1b0ee0:
    if (ctx->pc == 0x1B0EE0u) {
        ctx->pc = 0x1B0EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EDCu;
        // 0x1b0ee0: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0EE4u;
        goto label_1b0ee4;
    }
    ctx->pc = 0x1B0EDCu;
    {
        const bool branch_taken_0x1b0edc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1B0EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EDCu;
        // 0x1b0ee0: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0edc) {
            ctx->pc = 0x1B0EECu;
            goto label_1b0eec;
        }
    }
    ctx->pc = 0x1B0EE4u;
label_1b0ee4:
    // 0x1b0ee4: 0xc069a30  jal         func_1A68C0
label_1b0ee8:
    if (ctx->pc == 0x1B0EE8u) {
        ctx->pc = 0x1B0EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EE4u;
        // 0x1b0ee8: 0x2484ac70  addiu       $a0, $a0, -0x5390 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0EECu;
        goto label_1b0eec;
    }
    ctx->pc = 0x1B0EE4u;
    SET_GPR_U32(ctx, 31, 0x1B0EECu);
    ctx->pc = 0x1B0EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0EE4u;
    // 0x1b0ee8: 0x2484ac70  addiu       $a0, $a0, -0x5390 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1B0EECu;
label_1b0eec:
    // 0x1b0eec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b0ef0:
    // 0x1b0ef0: 0xc069bee  jal         func_1A6FB8
label_1b0ef4:
    if (ctx->pc == 0x1B0EF4u) {
        ctx->pc = 0x1B0EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EF0u;
        // 0x1b0ef4: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0EF8u;
        goto label_1b0ef8;
    }
    ctx->pc = 0x1B0EF0u;
    SET_GPR_U32(ctx, 31, 0x1B0EF8u);
    ctx->pc = 0x1B0EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0EF0u;
    // 0x1b0ef4: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    { ctx->pc = 0x1a6fb8; return; }
    ctx->pc = 0x1B0EF8u;
label_1b0ef8:
    // 0x1b0ef8: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1b0ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1b0efc:
    // 0x1b0efc: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1b0efcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1b0f00:
    // 0x1b0f00: 0x24507300  addiu       $s0, $v0, 0x7300
    ctx->pc = 0x1b0f00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29440));
label_1b0f04:
    // 0x1b0f04: 0x24848450  addiu       $a0, $a0, -0x7BB0
    ctx->pc = 0x1b0f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935632));
label_1b0f08:
    // 0x1b0f08: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b0f08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b0f0c:
    // 0x1b0f0c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b0f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b0f10:
    // 0x1b0f10: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b0f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1b0f14:
    // 0x1b0f14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0f14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0f18:
    // 0x1b0f18: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x1b0f18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b0f1c:
    // 0x1b0f1c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b0f1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b0f20:
    // 0x1b0f20: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b0f20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b0f24:
    // 0x1b0f24: 0xc069e2a  jal         func_1A78A8
label_1b0f28:
    if (ctx->pc == 0x1B0F28u) {
        ctx->pc = 0x1B0F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F24u;
        // 0x1b0f28: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F2Cu;
        goto label_1b0f2c;
    }
    ctx->pc = 0x1B0F24u;
    SET_GPR_U32(ctx, 31, 0x1B0F2Cu);
    ctx->pc = 0x1B0F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0F24u;
    // 0x1b0f28: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B0F2Cu;
label_1b0f2c:
    // 0x1b0f2c: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
label_1b0f30:
    if (ctx->pc == 0x1B0F30u) {
        ctx->pc = 0x1B0F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F2Cu;
        // 0x1b0f30: 0x8ec27290  lw          $v0, 0x7290($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F34u;
        goto label_1b0f34;
    }
    ctx->pc = 0x1B0F2Cu;
    {
        const bool branch_taken_0x1b0f2c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b0f2c) {
            ctx->pc = 0x1B0F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0F2Cu;
            // 0x1b0f30: 0x8ec27290  lw          $v0, 0x7290($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0F48u;
            goto label_1b0f48;
        }
    }
    ctx->pc = 0x1B0F34u;
label_1b0f34:
    // 0x1b0f34: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1b0f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1b0f38:
    // 0x1b0f38: 0xc069210  jal         func_1A4840
label_1b0f3c:
    if (ctx->pc == 0x1B0F3Cu) {
        ctx->pc = 0x1B0F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F38u;
        // 0x1b0f3c: 0x8c4472a8  lw          $a0, 0x72A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F40u;
        goto label_1b0f40;
    }
    ctx->pc = 0x1B0F38u;
    SET_GPR_U32(ctx, 31, 0x1B0F40u);
    ctx->pc = 0x1B0F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0F38u;
    // 0x1b0f3c: 0x8c4472a8  lw          $a0, 0x72A8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B0F40u;
label_1b0f40:
    // 0x1b0f40: 0x1000000c  b           . + 4 + (0xC << 2)
label_1b0f44:
    if (ctx->pc == 0x1B0F44u) {
        ctx->pc = 0x1B0F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F40u;
        // 0x1b0f44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F48u;
        goto label_1b0f48;
    }
    ctx->pc = 0x1B0F40u;
    {
        const bool branch_taken_0x1b0f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F40u;
        // 0x1b0f44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f40) {
            ctx->pc = 0x1B0F74u;
            goto label_1b0f74;
        }
    }
    ctx->pc = 0x1B0F48u;
label_1b0f48:
    // 0x1b0f48: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1b0f4c:
    if (ctx->pc == 0x1B0F4Cu) {
        ctx->pc = 0x1B0F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F48u;
        // 0x1b0f4c: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F50u;
        goto label_1b0f50;
    }
    ctx->pc = 0x1B0F48u;
    {
        const bool branch_taken_0x1b0f48 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B0F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F48u;
        // 0x1b0f4c: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f48) {
            ctx->pc = 0x1B0F58u;
            goto label_1b0f58;
        }
    }
    ctx->pc = 0x1B0F50u;
label_1b0f50:
    // 0x1b0f50: 0xc069a30  jal         func_1A68C0
label_1b0f54:
    if (ctx->pc == 0x1B0F54u) {
        ctx->pc = 0x1B0F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F50u;
        // 0x1b0f54: 0x2484ac88  addiu       $a0, $a0, -0x5378 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F58u;
        goto label_1b0f58;
    }
    ctx->pc = 0x1B0F50u;
    SET_GPR_U32(ctx, 31, 0x1B0F58u);
    ctx->pc = 0x1B0F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0F50u;
    // 0x1b0f54: 0x2484ac88  addiu       $a0, $a0, -0x5378 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1B0F58u;
label_1b0f58:
    // 0x1b0f58: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1b0f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1b0f5c:
    // 0x1b0f5c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b0f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_1b0f60:
    // 0x1b0f60: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1b0f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_1b0f64:
    // 0x1b0f64: 0x8c6472a8  lw          $a0, 0x72A8($v1)
    ctx->pc = 0x1b0f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29352)));
label_1b0f68:
    // 0x1b0f68: 0xc069210  jal         func_1A4840
label_1b0f6c:
    if (ctx->pc == 0x1B0F6Cu) {
        ctx->pc = 0x1B0F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F68u;
        // 0x1b0f6c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F70u;
        goto label_1b0f70;
    }
    ctx->pc = 0x1B0F68u;
    SET_GPR_U32(ctx, 31, 0x1B0F70u);
    ctx->pc = 0x1B0F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0F68u;
    // 0x1b0f6c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B0F70u;
label_1b0f70:
    // 0x1b0f70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b0f70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b0f74:
    // 0x1b0f74: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1b0f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1b0f78:
    // 0x1b0f78: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1b0f78u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1b0f7c:
    // 0x1b0f7c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1b0f7cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1b0f80:
    // 0x1b0f80: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1b0f80u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1b0f84:
    // 0x1b0f84: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b0f84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b0f88:
    // 0x1b0f88: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b0f88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b0f8c:
    // 0x1b0f8c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b0f8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b0f90:
    // 0x1b0f90: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b0f90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b0f94:
    // 0x1b0f94: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b0f94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b0f98:
    // 0x1b0f98: 0x3e00008  jr          $ra
label_1b0f9c:
    if (ctx->pc == 0x1B0F9Cu) {
        ctx->pc = 0x1B0F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F98u;
        // 0x1b0f9c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0FA0u;
        goto label_1b0fa0;
    }
    ctx->pc = 0x1B0F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F98u;
        // 0x1b0f9c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0FA0u;
label_1b0fa0:
    // 0x1b0fa0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1b0fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1b0fa4:
    // 0x1b0fa4: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x1b0fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
label_1b0fa8:
    // 0x1b0fa8: 0x3c150029  lui         $s5, 0x29
    ctx->pc = 0x1b0fa8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)41 << 16));
label_1b0fac:
    // 0x1b0fac: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1b0facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1b0fb0:
    // 0x1b0fb0: 0x8ea28d0c  lw          $v0, -0x72F4($s5)
    ctx->pc = 0x1b0fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
label_1b0fb4:
    // 0x1b0fb4: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x1b0fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
label_1b0fb8:
    // 0x1b0fb8: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x1b0fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_1b0fbc:
    // 0x1b0fbc: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x1b0fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_1b0fc0:
    // 0x1b0fc0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1b0fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_1b0fc4:
    // 0x1b0fc4: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x1b0fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_1b0fc8:
    // 0x1b0fc8: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_1b0fcc:
    if (ctx->pc == 0x1B0FCCu) {
        ctx->pc = 0x1B0FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0FC8u;
        // 0x1b0fcc: 0xffb00030  sd          $s0, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0FD0u;
        goto label_1b0fd0;
    }
    ctx->pc = 0x1B0FC8u;
    {
        const bool branch_taken_0x1b0fc8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B0FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0FC8u;
        // 0x1b0fcc: 0xffb00030  sd          $s0, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0fc8) {
            ctx->pc = 0x1B0FECu;
            goto label_1b0fec;
        }
    }
    ctx->pc = 0x1B0FD0u;
label_1b0fd0:
    // 0x1b0fd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0fd4:
    // 0x1b0fd4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1b0fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_1b0fd8:
    // 0x1b0fd8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1b0fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1b0fdc:
    // 0x1b0fdc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b0fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b0fe0:
    // 0x1b0fe0: 0xc069208  jal         func_1A4820
label_1b0fe4:
    if (ctx->pc == 0x1B0FE4u) {
        ctx->pc = 0x1B0FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0FE0u;
        // 0x1b0fe4: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0FE8u;
        goto label_1b0fe8;
    }
    ctx->pc = 0x1B0FE0u;
    SET_GPR_U32(ctx, 31, 0x1B0FE8u);
    ctx->pc = 0x1B0FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0FE0u;
    // 0x1b0fe4: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1B0FE8u;
label_1b0fe8:
    // 0x1b0fe8: 0xaea28d0c  sw          $v0, -0x72F4($s5)
    ctx->pc = 0x1b0fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294937868), GPR_U32(ctx, 2));
label_1b0fec:
    // 0x1b0fec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b0fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0ff0:
    // 0x1b0ff0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0ff4:
    // 0x1b0ff4: 0xc06c672  jal         func_1B19C8
label_1b0ff8:
    if (ctx->pc == 0x1B0FF8u) {
        ctx->pc = 0x1B0FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0FF4u;
        // 0x1b0ff8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0FFCu;
        goto label_1b0ffc;
    }
    ctx->pc = 0x1B0FF4u;
    SET_GPR_U32(ctx, 31, 0x1B0FFCu);
    ctx->pc = 0x1B0FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0FF4u;
    // 0x1b0ff8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B19C8u;
    { ctx->pc = 0x1b19c8; return; }
    ctx->pc = 0x1B0FFCu;
label_1b0ffc:
    // 0x1b0ffc: 0xc069218  jal         func_1A4860
label_1b1000:
    if (ctx->pc == 0x1B1000u) {
        ctx->pc = 0x1B1000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0FFCu;
        // 0x1b1000: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1004u;
        goto label_1b1004;
    }
    ctx->pc = 0x1B0FFCu;
    SET_GPR_U32(ctx, 31, 0x1B1004u);
    ctx->pc = 0x1B1000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0FFCu;
    // 0x1b1000: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1B1004u;
label_1b1004:
    // 0x1b1004: 0xc069c1a  jal         func_1A7068
label_1b1008:
    if (ctx->pc == 0x1B1008u) {
        ctx->pc = 0x1B1008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1004u;
        // 0x1b1008: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B100Cu;
        goto label_1b100c;
    }
    ctx->pc = 0x1B1004u;
    SET_GPR_U32(ctx, 31, 0x1B100Cu);
    ctx->pc = 0x1B1008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1004u;
    // 0x1b1008: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7068u;
    { ctx->pc = 0x1a7068; return; }
    ctx->pc = 0x1B100Cu;
label_1b100c:
    // 0x1b100c: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1b100cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1b1010:
    // 0x1b1010: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1b1010u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
label_1b1014:
    // 0x1b1014: 0x1000000b  b           . + 4 + (0xB << 2)
label_1b1018:
    if (ctx->pc == 0x1B1018u) {
        ctx->pc = 0x1B1018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1014u;
        // 0x1b1018: 0x3c140037  lui         $s4, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B101Cu;
        goto label_1b101c;
    }
    ctx->pc = 0x1B1014u;
    {
        const bool branch_taken_0x1b1014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1014u;
        // 0x1b1018: 0x3c140037  lui         $s4, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1014) {
            ctx->pc = 0x1B1044u;
            { ctx->pc = 0x1b1044; return; }
        }
    }
    ctx->pc = 0x1B101Cu;
label_1b101c:
    // 0x1b101c: 0x0  nop
    ctx->pc = 0x1b101cu;
    // NOP
label_1b1020:
    // 0x1b1020: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1b1020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_1b1024:
    // 0x1b1024: 0x0  nop
    ctx->pc = 0x1b1024u;
    // NOP
    ctx->pc = 0x1b1028u;
    return;
}

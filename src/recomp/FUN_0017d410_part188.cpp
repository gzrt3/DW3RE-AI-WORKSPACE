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

// Function: FUN_0017d410
// Address: 0x17d410 - 0x27d534
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017d410_part188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1d8900u: goto label_1d8900;
        case 0x1d8904u: goto label_1d8904;
        case 0x1d8908u: goto label_1d8908;
        case 0x1d890cu: goto label_1d890c;
        case 0x1d8910u: goto label_1d8910;
        case 0x1d8914u: goto label_1d8914;
        case 0x1d8918u: goto label_1d8918;
        case 0x1d891cu: goto label_1d891c;
        case 0x1d8920u: goto label_1d8920;
        case 0x1d8924u: goto label_1d8924;
        case 0x1d8928u: goto label_1d8928;
        case 0x1d892cu: goto label_1d892c;
        case 0x1d8930u: goto label_1d8930;
        case 0x1d8934u: goto label_1d8934;
        case 0x1d8938u: goto label_1d8938;
        case 0x1d893cu: goto label_1d893c;
        case 0x1d8940u: goto label_1d8940;
        case 0x1d8944u: goto label_1d8944;
        case 0x1d8948u: goto label_1d8948;
        case 0x1d894cu: goto label_1d894c;
        case 0x1d8950u: goto label_1d8950;
        case 0x1d8954u: goto label_1d8954;
        case 0x1d8958u: goto label_1d8958;
        case 0x1d895cu: goto label_1d895c;
        case 0x1d8960u: goto label_1d8960;
        case 0x1d8964u: goto label_1d8964;
        case 0x1d8968u: goto label_1d8968;
        case 0x1d896cu: goto label_1d896c;
        case 0x1d8970u: goto label_1d8970;
        case 0x1d8974u: goto label_1d8974;
        case 0x1d8978u: goto label_1d8978;
        case 0x1d897cu: goto label_1d897c;
        case 0x1d8980u: goto label_1d8980;
        case 0x1d8984u: goto label_1d8984;
        case 0x1d8988u: goto label_1d8988;
        case 0x1d898cu: goto label_1d898c;
        case 0x1d8990u: goto label_1d8990;
        case 0x1d8994u: goto label_1d8994;
        case 0x1d8998u: goto label_1d8998;
        case 0x1d899cu: goto label_1d899c;
        case 0x1d89a0u: goto label_1d89a0;
        case 0x1d89a4u: goto label_1d89a4;
        case 0x1d89a8u: goto label_1d89a8;
        case 0x1d89acu: goto label_1d89ac;
        case 0x1d89b0u: goto label_1d89b0;
        case 0x1d89b4u: goto label_1d89b4;
        case 0x1d89b8u: goto label_1d89b8;
        case 0x1d89bcu: goto label_1d89bc;
        case 0x1d89c0u: goto label_1d89c0;
        case 0x1d89c4u: goto label_1d89c4;
        case 0x1d89c8u: goto label_1d89c8;
        case 0x1d89ccu: goto label_1d89cc;
        case 0x1d89d0u: goto label_1d89d0;
        case 0x1d89d4u: goto label_1d89d4;
        case 0x1d89d8u: goto label_1d89d8;
        case 0x1d89dcu: goto label_1d89dc;
        case 0x1d89e0u: goto label_1d89e0;
        case 0x1d89e4u: goto label_1d89e4;
        case 0x1d89e8u: goto label_1d89e8;
        case 0x1d89ecu: goto label_1d89ec;
        case 0x1d89f0u: goto label_1d89f0;
        case 0x1d89f4u: goto label_1d89f4;
        case 0x1d89f8u: goto label_1d89f8;
        case 0x1d89fcu: goto label_1d89fc;
        case 0x1d8a00u: goto label_1d8a00;
        case 0x1d8a04u: goto label_1d8a04;
        case 0x1d8a08u: goto label_1d8a08;
        case 0x1d8a0cu: goto label_1d8a0c;
        case 0x1d8a10u: goto label_1d8a10;
        case 0x1d8a14u: goto label_1d8a14;
        case 0x1d8a18u: goto label_1d8a18;
        case 0x1d8a1cu: goto label_1d8a1c;
        case 0x1d8a20u: goto label_1d8a20;
        case 0x1d8a24u: goto label_1d8a24;
        case 0x1d8a28u: goto label_1d8a28;
        case 0x1d8a2cu: goto label_1d8a2c;
        case 0x1d8a30u: goto label_1d8a30;
        case 0x1d8a34u: goto label_1d8a34;
        case 0x1d8a38u: goto label_1d8a38;
        case 0x1d8a3cu: goto label_1d8a3c;
        case 0x1d8a40u: goto label_1d8a40;
        case 0x1d8a44u: goto label_1d8a44;
        case 0x1d8a48u: goto label_1d8a48;
        case 0x1d8a4cu: goto label_1d8a4c;
        case 0x1d8a50u: goto label_1d8a50;
        case 0x1d8a54u: goto label_1d8a54;
        case 0x1d8a58u: goto label_1d8a58;
        case 0x1d8a5cu: goto label_1d8a5c;
        case 0x1d8a60u: goto label_1d8a60;
        case 0x1d8a64u: goto label_1d8a64;
        case 0x1d8a68u: goto label_1d8a68;
        case 0x1d8a6cu: goto label_1d8a6c;
        case 0x1d8a70u: goto label_1d8a70;
        case 0x1d8a74u: goto label_1d8a74;
        case 0x1d8a78u: goto label_1d8a78;
        case 0x1d8a7cu: goto label_1d8a7c;
        case 0x1d8a80u: goto label_1d8a80;
        case 0x1d8a84u: goto label_1d8a84;
        case 0x1d8a88u: goto label_1d8a88;
        case 0x1d8a8cu: goto label_1d8a8c;
        case 0x1d8a90u: goto label_1d8a90;
        case 0x1d8a94u: goto label_1d8a94;
        case 0x1d8a98u: goto label_1d8a98;
        case 0x1d8a9cu: goto label_1d8a9c;
        case 0x1d8aa0u: goto label_1d8aa0;
        case 0x1d8aa4u: goto label_1d8aa4;
        case 0x1d8aa8u: goto label_1d8aa8;
        case 0x1d8aacu: goto label_1d8aac;
        case 0x1d8ab0u: goto label_1d8ab0;
        case 0x1d8ab4u: goto label_1d8ab4;
        case 0x1d8ab8u: goto label_1d8ab8;
        case 0x1d8abcu: goto label_1d8abc;
        case 0x1d8ac0u: goto label_1d8ac0;
        case 0x1d8ac4u: goto label_1d8ac4;
        case 0x1d8ac8u: goto label_1d8ac8;
        case 0x1d8accu: goto label_1d8acc;
        case 0x1d8ad0u: goto label_1d8ad0;
        case 0x1d8ad4u: goto label_1d8ad4;
        case 0x1d8ad8u: goto label_1d8ad8;
        case 0x1d8adcu: goto label_1d8adc;
        case 0x1d8ae0u: goto label_1d8ae0;
        case 0x1d8ae4u: goto label_1d8ae4;
        case 0x1d8ae8u: goto label_1d8ae8;
        case 0x1d8aecu: goto label_1d8aec;
        case 0x1d8af0u: goto label_1d8af0;
        case 0x1d8af4u: goto label_1d8af4;
        case 0x1d8af8u: goto label_1d8af8;
        case 0x1d8afcu: goto label_1d8afc;
        case 0x1d8b00u: goto label_1d8b00;
        case 0x1d8b04u: goto label_1d8b04;
        case 0x1d8b08u: goto label_1d8b08;
        case 0x1d8b0cu: goto label_1d8b0c;
        case 0x1d8b10u: goto label_1d8b10;
        case 0x1d8b14u: goto label_1d8b14;
        case 0x1d8b18u: goto label_1d8b18;
        case 0x1d8b1cu: goto label_1d8b1c;
        case 0x1d8b20u: goto label_1d8b20;
        case 0x1d8b24u: goto label_1d8b24;
        case 0x1d8b28u: goto label_1d8b28;
        case 0x1d8b2cu: goto label_1d8b2c;
        case 0x1d8b30u: goto label_1d8b30;
        case 0x1d8b34u: goto label_1d8b34;
        case 0x1d8b38u: goto label_1d8b38;
        case 0x1d8b3cu: goto label_1d8b3c;
        case 0x1d8b40u: goto label_1d8b40;
        case 0x1d8b44u: goto label_1d8b44;
        case 0x1d8b48u: goto label_1d8b48;
        case 0x1d8b4cu: goto label_1d8b4c;
        case 0x1d8b50u: goto label_1d8b50;
        case 0x1d8b54u: goto label_1d8b54;
        case 0x1d8b58u: goto label_1d8b58;
        case 0x1d8b5cu: goto label_1d8b5c;
        case 0x1d8b60u: goto label_1d8b60;
        case 0x1d8b64u: goto label_1d8b64;
        case 0x1d8b68u: goto label_1d8b68;
        case 0x1d8b6cu: goto label_1d8b6c;
        case 0x1d8b70u: goto label_1d8b70;
        case 0x1d8b74u: goto label_1d8b74;
        case 0x1d8b78u: goto label_1d8b78;
        case 0x1d8b7cu: goto label_1d8b7c;
        case 0x1d8b80u: goto label_1d8b80;
        case 0x1d8b84u: goto label_1d8b84;
        case 0x1d8b88u: goto label_1d8b88;
        case 0x1d8b8cu: goto label_1d8b8c;
        case 0x1d8b90u: goto label_1d8b90;
        case 0x1d8b94u: goto label_1d8b94;
        case 0x1d8b98u: goto label_1d8b98;
        case 0x1d8b9cu: goto label_1d8b9c;
        case 0x1d8ba0u: goto label_1d8ba0;
        case 0x1d8ba4u: goto label_1d8ba4;
        case 0x1d8ba8u: goto label_1d8ba8;
        case 0x1d8bacu: goto label_1d8bac;
        case 0x1d8bb0u: goto label_1d8bb0;
        case 0x1d8bb4u: goto label_1d8bb4;
        case 0x1d8bb8u: goto label_1d8bb8;
        case 0x1d8bbcu: goto label_1d8bbc;
        case 0x1d8bc0u: goto label_1d8bc0;
        case 0x1d8bc4u: goto label_1d8bc4;
        case 0x1d8bc8u: goto label_1d8bc8;
        case 0x1d8bccu: goto label_1d8bcc;
        case 0x1d8bd0u: goto label_1d8bd0;
        case 0x1d8bd4u: goto label_1d8bd4;
        case 0x1d8bd8u: goto label_1d8bd8;
        case 0x1d8bdcu: goto label_1d8bdc;
        case 0x1d8be0u: goto label_1d8be0;
        case 0x1d8be4u: goto label_1d8be4;
        case 0x1d8be8u: goto label_1d8be8;
        case 0x1d8becu: goto label_1d8bec;
        case 0x1d8bf0u: goto label_1d8bf0;
        case 0x1d8bf4u: goto label_1d8bf4;
        case 0x1d8bf8u: goto label_1d8bf8;
        case 0x1d8bfcu: goto label_1d8bfc;
        case 0x1d8c00u: goto label_1d8c00;
        case 0x1d8c04u: goto label_1d8c04;
        case 0x1d8c08u: goto label_1d8c08;
        case 0x1d8c0cu: goto label_1d8c0c;
        case 0x1d8c10u: goto label_1d8c10;
        case 0x1d8c14u: goto label_1d8c14;
        case 0x1d8c18u: goto label_1d8c18;
        case 0x1d8c1cu: goto label_1d8c1c;
        case 0x1d8c20u: goto label_1d8c20;
        case 0x1d8c24u: goto label_1d8c24;
        case 0x1d8c28u: goto label_1d8c28;
        case 0x1d8c2cu: goto label_1d8c2c;
        case 0x1d8c30u: goto label_1d8c30;
        case 0x1d8c34u: goto label_1d8c34;
        case 0x1d8c38u: goto label_1d8c38;
        case 0x1d8c3cu: goto label_1d8c3c;
        case 0x1d8c40u: goto label_1d8c40;
        case 0x1d8c44u: goto label_1d8c44;
        case 0x1d8c48u: goto label_1d8c48;
        case 0x1d8c4cu: goto label_1d8c4c;
        case 0x1d8c50u: goto label_1d8c50;
        case 0x1d8c54u: goto label_1d8c54;
        case 0x1d8c58u: goto label_1d8c58;
        case 0x1d8c5cu: goto label_1d8c5c;
        case 0x1d8c60u: goto label_1d8c60;
        case 0x1d8c64u: goto label_1d8c64;
        case 0x1d8c68u: goto label_1d8c68;
        case 0x1d8c6cu: goto label_1d8c6c;
        case 0x1d8c70u: goto label_1d8c70;
        case 0x1d8c74u: goto label_1d8c74;
        case 0x1d8c78u: goto label_1d8c78;
        case 0x1d8c7cu: goto label_1d8c7c;
        case 0x1d8c80u: goto label_1d8c80;
        case 0x1d8c84u: goto label_1d8c84;
        case 0x1d8c88u: goto label_1d8c88;
        case 0x1d8c8cu: goto label_1d8c8c;
        case 0x1d8c90u: goto label_1d8c90;
        case 0x1d8c94u: goto label_1d8c94;
        case 0x1d8c98u: goto label_1d8c98;
        case 0x1d8c9cu: goto label_1d8c9c;
        case 0x1d8ca0u: goto label_1d8ca0;
        case 0x1d8ca4u: goto label_1d8ca4;
        case 0x1d8ca8u: goto label_1d8ca8;
        case 0x1d8cacu: goto label_1d8cac;
        case 0x1d8cb0u: goto label_1d8cb0;
        case 0x1d8cb4u: goto label_1d8cb4;
        case 0x1d8cb8u: goto label_1d8cb8;
        case 0x1d8cbcu: goto label_1d8cbc;
        case 0x1d8cc0u: goto label_1d8cc0;
        case 0x1d8cc4u: goto label_1d8cc4;
        case 0x1d8cc8u: goto label_1d8cc8;
        case 0x1d8cccu: goto label_1d8ccc;
        case 0x1d8cd0u: goto label_1d8cd0;
        case 0x1d8cd4u: goto label_1d8cd4;
        case 0x1d8cd8u: goto label_1d8cd8;
        case 0x1d8cdcu: goto label_1d8cdc;
        case 0x1d8ce0u: goto label_1d8ce0;
        case 0x1d8ce4u: goto label_1d8ce4;
        case 0x1d8ce8u: goto label_1d8ce8;
        case 0x1d8cecu: goto label_1d8cec;
        case 0x1d8cf0u: goto label_1d8cf0;
        case 0x1d8cf4u: goto label_1d8cf4;
        case 0x1d8cf8u: goto label_1d8cf8;
        case 0x1d8cfcu: goto label_1d8cfc;
        case 0x1d8d00u: goto label_1d8d00;
        case 0x1d8d04u: goto label_1d8d04;
        case 0x1d8d08u: goto label_1d8d08;
        case 0x1d8d0cu: goto label_1d8d0c;
        case 0x1d8d10u: goto label_1d8d10;
        case 0x1d8d14u: goto label_1d8d14;
        case 0x1d8d18u: goto label_1d8d18;
        case 0x1d8d1cu: goto label_1d8d1c;
        case 0x1d8d20u: goto label_1d8d20;
        case 0x1d8d24u: goto label_1d8d24;
        case 0x1d8d28u: goto label_1d8d28;
        case 0x1d8d2cu: goto label_1d8d2c;
        case 0x1d8d30u: goto label_1d8d30;
        case 0x1d8d34u: goto label_1d8d34;
        case 0x1d8d38u: goto label_1d8d38;
        case 0x1d8d3cu: goto label_1d8d3c;
        case 0x1d8d40u: goto label_1d8d40;
        case 0x1d8d44u: goto label_1d8d44;
        case 0x1d8d48u: goto label_1d8d48;
        case 0x1d8d4cu: goto label_1d8d4c;
        case 0x1d8d50u: goto label_1d8d50;
        case 0x1d8d54u: goto label_1d8d54;
        case 0x1d8d58u: goto label_1d8d58;
        case 0x1d8d5cu: goto label_1d8d5c;
        case 0x1d8d60u: goto label_1d8d60;
        case 0x1d8d64u: goto label_1d8d64;
        case 0x1d8d68u: goto label_1d8d68;
        case 0x1d8d6cu: goto label_1d8d6c;
        case 0x1d8d70u: goto label_1d8d70;
        case 0x1d8d74u: goto label_1d8d74;
        case 0x1d8d78u: goto label_1d8d78;
        case 0x1d8d7cu: goto label_1d8d7c;
        case 0x1d8d80u: goto label_1d8d80;
        case 0x1d8d84u: goto label_1d8d84;
        case 0x1d8d88u: goto label_1d8d88;
        case 0x1d8d8cu: goto label_1d8d8c;
        case 0x1d8d90u: goto label_1d8d90;
        case 0x1d8d94u: goto label_1d8d94;
        case 0x1d8d98u: goto label_1d8d98;
        case 0x1d8d9cu: goto label_1d8d9c;
        case 0x1d8da0u: goto label_1d8da0;
        case 0x1d8da4u: goto label_1d8da4;
        case 0x1d8da8u: goto label_1d8da8;
        case 0x1d8dacu: goto label_1d8dac;
        case 0x1d8db0u: goto label_1d8db0;
        case 0x1d8db4u: goto label_1d8db4;
        case 0x1d8db8u: goto label_1d8db8;
        case 0x1d8dbcu: goto label_1d8dbc;
        case 0x1d8dc0u: goto label_1d8dc0;
        case 0x1d8dc4u: goto label_1d8dc4;
        case 0x1d8dc8u: goto label_1d8dc8;
        case 0x1d8dccu: goto label_1d8dcc;
        case 0x1d8dd0u: goto label_1d8dd0;
        case 0x1d8dd4u: goto label_1d8dd4;
        case 0x1d8dd8u: goto label_1d8dd8;
        case 0x1d8ddcu: goto label_1d8ddc;
        case 0x1d8de0u: goto label_1d8de0;
        case 0x1d8de4u: goto label_1d8de4;
        case 0x1d8de8u: goto label_1d8de8;
        case 0x1d8decu: goto label_1d8dec;
        case 0x1d8df0u: goto label_1d8df0;
        case 0x1d8df4u: goto label_1d8df4;
        case 0x1d8df8u: goto label_1d8df8;
        case 0x1d8dfcu: goto label_1d8dfc;
        case 0x1d8e00u: goto label_1d8e00;
        case 0x1d8e04u: goto label_1d8e04;
        case 0x1d8e08u: goto label_1d8e08;
        case 0x1d8e0cu: goto label_1d8e0c;
        case 0x1d8e10u: goto label_1d8e10;
        case 0x1d8e14u: goto label_1d8e14;
        case 0x1d8e18u: goto label_1d8e18;
        case 0x1d8e1cu: goto label_1d8e1c;
        case 0x1d8e20u: goto label_1d8e20;
        case 0x1d8e24u: goto label_1d8e24;
        case 0x1d8e28u: goto label_1d8e28;
        case 0x1d8e2cu: goto label_1d8e2c;
        case 0x1d8e30u: goto label_1d8e30;
        case 0x1d8e34u: goto label_1d8e34;
        case 0x1d8e38u: goto label_1d8e38;
        case 0x1d8e3cu: goto label_1d8e3c;
        case 0x1d8e40u: goto label_1d8e40;
        case 0x1d8e44u: goto label_1d8e44;
        case 0x1d8e48u: goto label_1d8e48;
        case 0x1d8e4cu: goto label_1d8e4c;
        case 0x1d8e50u: goto label_1d8e50;
        case 0x1d8e54u: goto label_1d8e54;
        case 0x1d8e58u: goto label_1d8e58;
        case 0x1d8e5cu: goto label_1d8e5c;
        case 0x1d8e60u: goto label_1d8e60;
        case 0x1d8e64u: goto label_1d8e64;
        case 0x1d8e68u: goto label_1d8e68;
        case 0x1d8e6cu: goto label_1d8e6c;
        case 0x1d8e70u: goto label_1d8e70;
        case 0x1d8e74u: goto label_1d8e74;
        case 0x1d8e78u: goto label_1d8e78;
        case 0x1d8e7cu: goto label_1d8e7c;
        case 0x1d8e80u: goto label_1d8e80;
        case 0x1d8e84u: goto label_1d8e84;
        case 0x1d8e88u: goto label_1d8e88;
        case 0x1d8e8cu: goto label_1d8e8c;
        case 0x1d8e90u: goto label_1d8e90;
        case 0x1d8e94u: goto label_1d8e94;
        case 0x1d8e98u: goto label_1d8e98;
        case 0x1d8e9cu: goto label_1d8e9c;
        case 0x1d8ea0u: goto label_1d8ea0;
        case 0x1d8ea4u: goto label_1d8ea4;
        case 0x1d8ea8u: goto label_1d8ea8;
        case 0x1d8eacu: goto label_1d8eac;
        case 0x1d8eb0u: goto label_1d8eb0;
        case 0x1d8eb4u: goto label_1d8eb4;
        case 0x1d8eb8u: goto label_1d8eb8;
        case 0x1d8ebcu: goto label_1d8ebc;
        case 0x1d8ec0u: goto label_1d8ec0;
        case 0x1d8ec4u: goto label_1d8ec4;
        case 0x1d8ec8u: goto label_1d8ec8;
        case 0x1d8eccu: goto label_1d8ecc;
        case 0x1d8ed0u: goto label_1d8ed0;
        case 0x1d8ed4u: goto label_1d8ed4;
        case 0x1d8ed8u: goto label_1d8ed8;
        case 0x1d8edcu: goto label_1d8edc;
        case 0x1d8ee0u: goto label_1d8ee0;
        case 0x1d8ee4u: goto label_1d8ee4;
        case 0x1d8ee8u: goto label_1d8ee8;
        case 0x1d8eecu: goto label_1d8eec;
        case 0x1d8ef0u: goto label_1d8ef0;
        case 0x1d8ef4u: goto label_1d8ef4;
        case 0x1d8ef8u: goto label_1d8ef8;
        case 0x1d8efcu: goto label_1d8efc;
        case 0x1d8f00u: goto label_1d8f00;
        case 0x1d8f04u: goto label_1d8f04;
        case 0x1d8f08u: goto label_1d8f08;
        case 0x1d8f0cu: goto label_1d8f0c;
        case 0x1d8f10u: goto label_1d8f10;
        case 0x1d8f14u: goto label_1d8f14;
        case 0x1d8f18u: goto label_1d8f18;
        case 0x1d8f1cu: goto label_1d8f1c;
        case 0x1d8f20u: goto label_1d8f20;
        case 0x1d8f24u: goto label_1d8f24;
        case 0x1d8f28u: goto label_1d8f28;
        case 0x1d8f2cu: goto label_1d8f2c;
        case 0x1d8f30u: goto label_1d8f30;
        case 0x1d8f34u: goto label_1d8f34;
        case 0x1d8f38u: goto label_1d8f38;
        case 0x1d8f3cu: goto label_1d8f3c;
        case 0x1d8f40u: goto label_1d8f40;
        case 0x1d8f44u: goto label_1d8f44;
        case 0x1d8f48u: goto label_1d8f48;
        case 0x1d8f4cu: goto label_1d8f4c;
        case 0x1d8f50u: goto label_1d8f50;
        case 0x1d8f54u: goto label_1d8f54;
        case 0x1d8f58u: goto label_1d8f58;
        case 0x1d8f5cu: goto label_1d8f5c;
        case 0x1d8f60u: goto label_1d8f60;
        case 0x1d8f64u: goto label_1d8f64;
        case 0x1d8f68u: goto label_1d8f68;
        case 0x1d8f6cu: goto label_1d8f6c;
        case 0x1d8f70u: goto label_1d8f70;
        case 0x1d8f74u: goto label_1d8f74;
        case 0x1d8f78u: goto label_1d8f78;
        case 0x1d8f7cu: goto label_1d8f7c;
        case 0x1d8f80u: goto label_1d8f80;
        case 0x1d8f84u: goto label_1d8f84;
        case 0x1d8f88u: goto label_1d8f88;
        case 0x1d8f8cu: goto label_1d8f8c;
        case 0x1d8f90u: goto label_1d8f90;
        case 0x1d8f94u: goto label_1d8f94;
        case 0x1d8f98u: goto label_1d8f98;
        case 0x1d8f9cu: goto label_1d8f9c;
        case 0x1d8fa0u: goto label_1d8fa0;
        case 0x1d8fa4u: goto label_1d8fa4;
        case 0x1d8fa8u: goto label_1d8fa8;
        case 0x1d8facu: goto label_1d8fac;
        case 0x1d8fb0u: goto label_1d8fb0;
        case 0x1d8fb4u: goto label_1d8fb4;
        case 0x1d8fb8u: goto label_1d8fb8;
        case 0x1d8fbcu: goto label_1d8fbc;
        case 0x1d8fc0u: goto label_1d8fc0;
        case 0x1d8fc4u: goto label_1d8fc4;
        case 0x1d8fc8u: goto label_1d8fc8;
        case 0x1d8fccu: goto label_1d8fcc;
        case 0x1d8fd0u: goto label_1d8fd0;
        case 0x1d8fd4u: goto label_1d8fd4;
        case 0x1d8fd8u: goto label_1d8fd8;
        case 0x1d8fdcu: goto label_1d8fdc;
        case 0x1d8fe0u: goto label_1d8fe0;
        case 0x1d8fe4u: goto label_1d8fe4;
        case 0x1d8fe8u: goto label_1d8fe8;
        case 0x1d8fecu: goto label_1d8fec;
        case 0x1d8ff0u: goto label_1d8ff0;
        case 0x1d8ff4u: goto label_1d8ff4;
        case 0x1d8ff8u: goto label_1d8ff8;
        case 0x1d8ffcu: goto label_1d8ffc;
        case 0x1d9000u: goto label_1d9000;
        case 0x1d9004u: goto label_1d9004;
        case 0x1d9008u: goto label_1d9008;
        case 0x1d900cu: goto label_1d900c;
        case 0x1d9010u: goto label_1d9010;
        case 0x1d9014u: goto label_1d9014;
        case 0x1d9018u: goto label_1d9018;
        case 0x1d901cu: goto label_1d901c;
        case 0x1d9020u: goto label_1d9020;
        case 0x1d9024u: goto label_1d9024;
        case 0x1d9028u: goto label_1d9028;
        case 0x1d902cu: goto label_1d902c;
        case 0x1d9030u: goto label_1d9030;
        case 0x1d9034u: goto label_1d9034;
        case 0x1d9038u: goto label_1d9038;
        case 0x1d903cu: goto label_1d903c;
        case 0x1d9040u: goto label_1d9040;
        case 0x1d9044u: goto label_1d9044;
        case 0x1d9048u: goto label_1d9048;
        case 0x1d904cu: goto label_1d904c;
        case 0x1d9050u: goto label_1d9050;
        case 0x1d9054u: goto label_1d9054;
        case 0x1d9058u: goto label_1d9058;
        case 0x1d905cu: goto label_1d905c;
        case 0x1d9060u: goto label_1d9060;
        case 0x1d9064u: goto label_1d9064;
        case 0x1d9068u: goto label_1d9068;
        case 0x1d906cu: goto label_1d906c;
        case 0x1d9070u: goto label_1d9070;
        case 0x1d9074u: goto label_1d9074;
        case 0x1d9078u: goto label_1d9078;
        case 0x1d907cu: goto label_1d907c;
        case 0x1d9080u: goto label_1d9080;
        case 0x1d9084u: goto label_1d9084;
        case 0x1d9088u: goto label_1d9088;
        case 0x1d908cu: goto label_1d908c;
        case 0x1d9090u: goto label_1d9090;
        case 0x1d9094u: goto label_1d9094;
        case 0x1d9098u: goto label_1d9098;
        case 0x1d909cu: goto label_1d909c;
        case 0x1d90a0u: goto label_1d90a0;
        case 0x1d90a4u: goto label_1d90a4;
        case 0x1d90a8u: goto label_1d90a8;
        case 0x1d90acu: goto label_1d90ac;
        case 0x1d90b0u: goto label_1d90b0;
        case 0x1d90b4u: goto label_1d90b4;
        case 0x1d90b8u: goto label_1d90b8;
        case 0x1d90bcu: goto label_1d90bc;
        case 0x1d90c0u: goto label_1d90c0;
        case 0x1d90c4u: goto label_1d90c4;
        case 0x1d90c8u: goto label_1d90c8;
        case 0x1d90ccu: goto label_1d90cc;
        default: return;
    }

label_1d8900:
    // 0x1d8900: 0x2406027a  addiu       $a2, $zero, 0x27A
    ctx->pc = 0x1d8900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
label_1d8904:
    // 0x1d8904: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d8904u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8908:
    // 0x1d8908: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8908u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d890c:
    // 0x1d890c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d890cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8910:
    // 0x1d8910: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1d8910u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1d8914:
    // 0x1d8914: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d8918:
    // 0x1d8918: 0x859021  addu        $s2, $a0, $a1
    ctx->pc = 0x1d8918u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d891c:
    // 0x1d891c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d891cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d8920:
    // 0x1d8920: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d8920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d8924:
    // 0x1d8924: 0xc066c72  jal         func_19B1C8
label_1d8928:
    if (ctx->pc == 0x1D8928u) {
        ctx->pc = 0x1D8928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8924u;
        // 0x1d8928: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D892Cu;
        goto label_1d892c;
    }
    ctx->pc = 0x1D8924u;
    SET_GPR_U32(ctx, 31, 0x1D892Cu);
    ctx->pc = 0x1D8928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8924u;
    // 0x1d8928: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1D892Cu;
label_1d892c:
    // 0x1d892c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d892cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d8930:
    // 0x1d8930: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1d8930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1d8934:
    // 0x1d8934: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d8934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d8938:
    // 0x1d8938: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1d8938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1d893c:
    // 0x1d893c: 0x8f848c80  lw          $a0, -0x7380($gp)
    ctx->pc = 0x1d893cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1d8940:
    // 0x1d8940: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d8944:
    // 0x1d8944: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d8948:
    // 0x1d8948: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1d8948u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d894c:
    // 0x1d894c: 0xc070e2c  jal         func_1C38B0
label_1d8950:
    if (ctx->pc == 0x1D8950u) {
        ctx->pc = 0x1D8950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D894Cu;
        // 0x1d8950: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8954u;
        goto label_1d8954;
    }
    ctx->pc = 0x1D894Cu;
    SET_GPR_U32(ctx, 31, 0x1D8954u);
    ctx->pc = 0x1D8950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D894Cu;
    // 0x1d8950: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1D8954u;
label_1d8954:
    // 0x1d8954: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d8954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d8958:
    // 0x1d8958: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d8958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d895c:
    // 0x1d895c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1d895cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1d8960:
    // 0x1d8960: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d8960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8964:
    // 0x1d8964: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8964u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8968:
    // 0x1d8968: 0xc066c72  jal         func_19B1C8
label_1d896c:
    if (ctx->pc == 0x1D896Cu) {
        ctx->pc = 0x1D896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8968u;
        // 0x1d896c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8970u;
        goto label_1d8970;
    }
    ctx->pc = 0x1D8968u;
    SET_GPR_U32(ctx, 31, 0x1D8970u);
    ctx->pc = 0x1D896Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8968u;
    // 0x1d896c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1D8970u;
label_1d8970:
    // 0x1d8970: 0x8f828c88  lw          $v0, -0x7378($gp)
    ctx->pc = 0x1d8970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1d8974:
    // 0x1d8974: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1d8978:
    if (ctx->pc == 0x1D8978u) {
        ctx->pc = 0x1D897Cu;
        goto label_1d897c;
    }
    ctx->pc = 0x1D8974u;
    {
        const bool branch_taken_0x1d8974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8974) {
            ctx->pc = 0x1D89C0u;
            goto label_1d89c0;
        }
    }
    ctx->pc = 0x1D897Cu;
label_1d897c:
    // 0x1d897c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d897cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d8980:
    // 0x1d8980: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1d8980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1d8984:
    // 0x1d8984: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d8984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d8988:
    // 0x1d8988: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1d8988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1d898c:
    // 0x1d898c: 0x8f848c84  lw          $a0, -0x737C($gp)
    ctx->pc = 0x1d898cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
label_1d8990:
    // 0x1d8990: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d8994:
    // 0x1d8994: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d8998:
    // 0x1d8998: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x1d8998u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1d899c:
    // 0x1d899c: 0xc070e2c  jal         func_1C38B0
label_1d89a0:
    if (ctx->pc == 0x1D89A0u) {
        ctx->pc = 0x1D89A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D899Cu;
        // 0x1d89a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D89A4u;
        goto label_1d89a4;
    }
    ctx->pc = 0x1D899Cu;
    SET_GPR_U32(ctx, 31, 0x1D89A4u);
    ctx->pc = 0x1D89A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D899Cu;
    // 0x1d89a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1D89A4u;
label_1d89a4:
    // 0x1d89a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d89a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d89a8:
    // 0x1d89a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d89a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d89ac:
    // 0x1d89ac: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1d89acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1d89b0:
    // 0x1d89b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d89b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d89b4:
    // 0x1d89b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d89b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d89b8:
    // 0x1d89b8: 0xc066c72  jal         func_19B1C8
label_1d89bc:
    if (ctx->pc == 0x1D89BCu) {
        ctx->pc = 0x1D89BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D89B8u;
        // 0x1d89bc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D89C0u;
        goto label_1d89c0;
    }
    ctx->pc = 0x1D89B8u;
    SET_GPR_U32(ctx, 31, 0x1D89C0u);
    ctx->pc = 0x1D89BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89B8u;
    // 0x1d89bc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1D89C0u;
label_1d89c0:
    // 0x1d89c0: 0xc07a86c  jal         func_1EA1B0
label_1d89c4:
    if (ctx->pc == 0x1D89C4u) {
        ctx->pc = 0x1D89C8u;
        goto label_1d89c8;
    }
    ctx->pc = 0x1D89C0u;
    SET_GPR_U32(ctx, 31, 0x1D89C8u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x1D89C8u;
label_1d89c8:
    // 0x1d89c8: 0xc04e120  jal         func_138480
label_1d89cc:
    if (ctx->pc == 0x1D89CCu) {
        ctx->pc = 0x1D89D0u;
        goto label_1d89d0;
    }
    ctx->pc = 0x1D89C8u;
    SET_GPR_U32(ctx, 31, 0x1D89D0u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1D89C8u, 0x1D89D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89D0u;
label_1d89d0:
    // 0x1d89d0: 0xc05b578  jal         func_16D5E0
label_1d89d4:
    if (ctx->pc == 0x1D89D4u) {
        ctx->pc = 0x1D89D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D89D0u;
        // 0x1d89d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D89D8u;
        goto label_1d89d8;
    }
    ctx->pc = 0x1D89D0u;
    SET_GPR_U32(ctx, 31, 0x1D89D8u);
    ctx->pc = 0x1D89D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89D0u;
    // 0x1d89d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1D89D0u, 0x1D89D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89D8u;
label_1d89d8:
    // 0x1d89d8: 0xc060258  jal         func_180960
label_1d89dc:
    if (ctx->pc == 0x1D89DCu) {
        ctx->pc = 0x1D89E0u;
        goto label_1d89e0;
    }
    ctx->pc = 0x1D89D8u;
    SET_GPR_U32(ctx, 31, 0x1D89E0u);
    ctx->pc = 0x180960u;
    { ctx->pc = 0x180960; return; }
    ctx->pc = 0x1D89E0u;
label_1d89e0:
    // 0x1d89e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d89e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d89e4:
    // 0x1d89e4: 0x2a210031  slti        $at, $s1, 0x31
    ctx->pc = 0x1d89e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
label_1d89e8:
    // 0x1d89e8: 0x1420ff39  bnez        $at, . + 4 + (-0xC7 << 2)
label_1d89ec:
    if (ctx->pc == 0x1D89ECu) {
        ctx->pc = 0x1D89F0u;
        goto label_1d89f0;
    }
    ctx->pc = 0x1D89E8u;
    {
        const bool branch_taken_0x1d89e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d89e8) {
            ctx->pc = 0x1D86D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d86d0; return; }
        }
    }
    ctx->pc = 0x1D89F0u;
label_1d89f0:
    // 0x1d89f0: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1d89f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1d89f4:
    // 0x1d89f4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1d89f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1d89f8:
    // 0x1d89f8: 0x24420660  addiu       $v0, $v0, 0x660
    ctx->pc = 0x1d89f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1632));
label_1d89fc:
    // 0x1d89fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d89fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d8a00:
    // 0x1d8a00: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d8a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d8a04:
    // 0x1d8a04: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1d8a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1d8a08:
    // 0x1d8a08: 0x2463b680  addiu       $v1, $v1, -0x4980
    ctx->pc = 0x1d8a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948480));
label_1d8a0c:
    // 0x1d8a0c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d8a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1d8a10:
    // 0x1d8a10: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1d8a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1d8a14:
    // 0x1d8a14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d8a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d8a18:
    // 0x1d8a18: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1d8a18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d8a1c:
    // 0x1d8a1c: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
label_1d8a20:
    if (ctx->pc == 0x1D8A20u) {
        ctx->pc = 0x1D8A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A1Cu;
        // 0x1d8a20: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8A24u;
        goto label_1d8a24;
    }
    ctx->pc = 0x1D8A1Cu;
    {
        const bool branch_taken_0x1d8a1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D8A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A1Cu;
        // 0x1d8a20: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a1c) {
            ctx->pc = 0x1D8A30u;
            goto label_1d8a30;
        }
    }
    ctx->pc = 0x1D8A24u;
label_1d8a24:
    // 0x1d8a24: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1d8a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1d8a28:
    // 0x1d8a28: 0x16220177  bne         $s1, $v0, . + 4 + (0x177 << 2)
label_1d8a2c:
    if (ctx->pc == 0x1D8A2Cu) {
        ctx->pc = 0x1D8A30u;
        goto label_1d8a30;
    }
    ctx->pc = 0x1D8A28u;
    {
        const bool branch_taken_0x1d8a28 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d8a28) {
            ctx->pc = 0x1D9008u;
            goto label_1d9008;
        }
    }
    ctx->pc = 0x1D8A30u;
label_1d8a30:
    // 0x1d8a30: 0xc084900  jal         func_212400
label_1d8a34:
    if (ctx->pc == 0x1D8A34u) {
        ctx->pc = 0x1D8A38u;
        goto label_1d8a38;
    }
    ctx->pc = 0x1D8A30u;
    SET_GPR_U32(ctx, 31, 0x1D8A38u);
    ctx->pc = 0x212400u;
    { ctx->pc = 0x212400; return; }
    ctx->pc = 0x1D8A38u;
label_1d8a38:
    // 0x1d8a38: 0x14400169  bnez        $v0, . + 4 + (0x169 << 2)
label_1d8a3c:
    if (ctx->pc == 0x1D8A3Cu) {
        ctx->pc = 0x1D8A40u;
        goto label_1d8a40;
    }
    ctx->pc = 0x1D8A38u;
    {
        const bool branch_taken_0x1d8a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8a38) {
            ctx->pc = 0x1D8FE0u;
            goto label_1d8fe0;
        }
    }
    ctx->pc = 0x1D8A40u;
label_1d8a40:
    // 0x1d8a40: 0xc04439c  jal         func_110E70
label_1d8a44:
    if (ctx->pc == 0x1D8A44u) {
        ctx->pc = 0x1D8A48u;
        goto label_1d8a48;
    }
    ctx->pc = 0x1D8A40u;
    SET_GPR_U32(ctx, 31, 0x1D8A48u);
    ctx->pc = 0x110E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110E70u, 0x1D8A40u, 0x1D8A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A48u;
label_1d8a48:
    // 0x1d8a48: 0x14400165  bnez        $v0, . + 4 + (0x165 << 2)
label_1d8a4c:
    if (ctx->pc == 0x1D8A4Cu) {
        ctx->pc = 0x1D8A50u;
        goto label_1d8a50;
    }
    ctx->pc = 0x1D8A48u;
    {
        const bool branch_taken_0x1d8a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8a48) {
            ctx->pc = 0x1D8FE0u;
            goto label_1d8fe0;
        }
    }
    ctx->pc = 0x1D8A50u;
label_1d8a50:
    // 0x1d8a50: 0xc08fec8  jal         func_23FB20
label_1d8a54:
    if (ctx->pc == 0x1D8A54u) {
        ctx->pc = 0x1D8A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A50u;
        // 0x1d8a54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8A58u;
        goto label_1d8a58;
    }
    ctx->pc = 0x1D8A50u;
    SET_GPR_U32(ctx, 31, 0x1D8A58u);
    ctx->pc = 0x1D8A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A50u;
    // 0x1d8a54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB20u;
    { ctx->pc = 0x23fb20; return; }
    ctx->pc = 0x1D8A58u;
label_1d8a58:
    // 0x1d8a58: 0xc08fee8  jal         func_23FBA0
label_1d8a5c:
    if (ctx->pc == 0x1D8A5Cu) {
        ctx->pc = 0x1D8A60u;
        goto label_1d8a60;
    }
    ctx->pc = 0x1D8A58u;
    SET_GPR_U32(ctx, 31, 0x1D8A60u);
    ctx->pc = 0x23FBA0u;
    { ctx->pc = 0x23fba0; return; }
    ctx->pc = 0x1D8A60u;
label_1d8a60:
    // 0x1d8a60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d8a60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d8a64:
    // 0x1d8a64: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1d8a64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1d8a68:
    // 0x1d8a68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d8a6c:
    if (ctx->pc == 0x1D8A6Cu) {
        ctx->pc = 0x1D8A70u;
        goto label_1d8a70;
    }
    ctx->pc = 0x1D8A68u;
    {
        const bool branch_taken_0x1d8a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8a68) {
            ctx->pc = 0x1D8A78u;
            goto label_1d8a78;
        }
    }
    ctx->pc = 0x1D8A70u;
label_1d8a70:
    // 0x1d8a70: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d8a74:
    if (ctx->pc == 0x1D8A74u) {
        ctx->pc = 0x1D8A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A70u;
        // 0x1d8a74: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8A78u;
        goto label_1d8a78;
    }
    ctx->pc = 0x1D8A70u;
    {
        const bool branch_taken_0x1d8a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A70u;
        // 0x1d8a74: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a70) {
            ctx->pc = 0x1D8A84u;
            goto label_1d8a84;
        }
    }
    ctx->pc = 0x1D8A78u;
label_1d8a78:
    // 0x1d8a78: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x1d8a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
label_1d8a7c:
    // 0x1d8a7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d8a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d8a80:
    // 0x1d8a80: 0xaf828cf4  sw          $v0, -0x730C($gp)
    ctx->pc = 0x1d8a80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 2));
label_1d8a84:
    // 0x1d8a84: 0x0  nop
    ctx->pc = 0x1d8a84u;
    // NOP
label_1d8a88:
    // 0x1d8a88: 0x8f828cd4  lw          $v0, -0x732C($gp)
    ctx->pc = 0x1d8a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937812)));
label_1d8a8c:
    // 0x1d8a8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d8a90:
    if (ctx->pc == 0x1D8A90u) {
        ctx->pc = 0x1D8A94u;
        goto label_1d8a94;
    }
    ctx->pc = 0x1D8A8Cu;
    {
        const bool branch_taken_0x1d8a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8a8c) {
            ctx->pc = 0x1D8AA0u;
            goto label_1d8aa0;
        }
    }
    ctx->pc = 0x1D8A94u;
label_1d8a94:
    // 0x1d8a94: 0x8f828cd0  lw          $v0, -0x7330($gp)
    ctx->pc = 0x1d8a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
label_1d8a98:
    // 0x1d8a98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d8a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d8a9c:
    // 0x1d8a9c: 0xaf828cd0  sw          $v0, -0x7330($gp)
    ctx->pc = 0x1d8a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937808), GPR_U32(ctx, 2));
label_1d8aa0:
    // 0x1d8aa0: 0x8f828cc4  lw          $v0, -0x733C($gp)
    ctx->pc = 0x1d8aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937796)));
label_1d8aa4:
    // 0x1d8aa4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1d8aa8:
    if (ctx->pc == 0x1D8AA8u) {
        ctx->pc = 0x1D8AACu;
        goto label_1d8aac;
    }
    ctx->pc = 0x1D8AA4u;
    {
        const bool branch_taken_0x1d8aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8aa4) {
            ctx->pc = 0x1D8B08u;
            goto label_1d8b08;
        }
    }
    ctx->pc = 0x1D8AACu;
label_1d8aac:
    // 0x1d8aac: 0x8f828cc0  lw          $v0, -0x7340($gp)
    ctx->pc = 0x1d8aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937792)));
label_1d8ab0:
    // 0x1d8ab0: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1d8ab0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1d8ab4:
    // 0x1d8ab4: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1d8ab8:
    if (ctx->pc == 0x1D8AB8u) {
        ctx->pc = 0x1D8ABCu;
        goto label_1d8abc;
    }
    ctx->pc = 0x1D8AB4u;
    {
        const bool branch_taken_0x1d8ab4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8ab4) {
            ctx->pc = 0x1D8ADCu;
            goto label_1d8adc;
        }
    }
    ctx->pc = 0x1D8ABCu;
label_1d8abc:
    // 0x1d8abc: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1d8abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1d8ac0:
    // 0x1d8ac0: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1d8ac0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1d8ac4:
    // 0x1d8ac4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1d8ac8:
    if (ctx->pc == 0x1D8AC8u) {
        ctx->pc = 0x1D8ACCu;
        goto label_1d8acc;
    }
    ctx->pc = 0x1D8AC4u;
    {
        const bool branch_taken_0x1d8ac4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8ac4) {
            ctx->pc = 0x1D8AD4u;
            goto label_1d8ad4;
        }
    }
    ctx->pc = 0x1D8ACCu;
label_1d8acc:
    // 0x1d8acc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d8ad0:
    if (ctx->pc == 0x1D8AD0u) {
        ctx->pc = 0x1D8AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8ACCu;
        // 0x1d8ad0: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8AD4u;
        goto label_1d8ad4;
    }
    ctx->pc = 0x1D8ACCu;
    {
        const bool branch_taken_0x1d8acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8ACCu;
        // 0x1d8ad0: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8acc) {
            ctx->pc = 0x1D8ADCu;
            goto label_1d8adc;
        }
    }
    ctx->pc = 0x1D8AD4u;
label_1d8ad4:
    // 0x1d8ad4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1d8ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d8ad8:
    // 0x1d8ad8: 0xaf828cc0  sw          $v0, -0x7340($gp)
    ctx->pc = 0x1d8ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
label_1d8adc:
    // 0x1d8adc: 0x0  nop
    ctx->pc = 0x1d8adcu;
    // NOP
label_1d8ae0:
    // 0x1d8ae0: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1d8ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1d8ae4:
    // 0x1d8ae4: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_1d8ae8:
    if (ctx->pc == 0x1D8AE8u) {
        ctx->pc = 0x1D8AECu;
        goto label_1d8aec;
    }
    ctx->pc = 0x1D8AE4u;
    {
        const bool branch_taken_0x1d8ae4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d8ae4) {
            ctx->pc = 0x1D8B08u;
            goto label_1d8b08;
        }
    }
    ctx->pc = 0x1D8AECu;
label_1d8aec:
    // 0x1d8aec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d8aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d8af0:
    // 0x1d8af0: 0xaf828cb0  sw          $v0, -0x7350($gp)
    ctx->pc = 0x1d8af0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 2));
label_1d8af4:
    // 0x1d8af4: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1d8af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1d8af8:
    // 0x1d8af8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d8afc:
    if (ctx->pc == 0x1D8AFCu) {
        ctx->pc = 0x1D8B00u;
        goto label_1d8b00;
    }
    ctx->pc = 0x1D8AF8u;
    {
        const bool branch_taken_0x1d8af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8af8) {
            ctx->pc = 0x1D8B08u;
            goto label_1d8b08;
        }
    }
    ctx->pc = 0x1D8B00u;
label_1d8b00:
    // 0x1d8b00: 0x8f828ca8  lw          $v0, -0x7358($gp)
    ctx->pc = 0x1d8b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
label_1d8b04:
    // 0x1d8b04: 0xaf828cb4  sw          $v0, -0x734C($gp)
    ctx->pc = 0x1d8b04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937780), GPR_U32(ctx, 2));
label_1d8b08:
    // 0x1d8b08: 0xc077a7c  jal         func_1DE9F0
label_1d8b0c:
    if (ctx->pc == 0x1D8B0Cu) {
        ctx->pc = 0x1D8B10u;
        goto label_1d8b10;
    }
    ctx->pc = 0x1D8B08u;
    SET_GPR_U32(ctx, 31, 0x1D8B10u);
    ctx->pc = 0x1DE9F0u;
    { ctx->pc = 0x1de9f0; return; }
    ctx->pc = 0x1D8B10u;
label_1d8b10:
    // 0x1d8b10: 0x8f848ca0  lw          $a0, -0x7360($gp)
    ctx->pc = 0x1d8b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1d8b14:
    // 0x1d8b14: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d8b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d8b18:
    // 0x1d8b18: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
label_1d8b1c:
    if (ctx->pc == 0x1D8B1Cu) {
        ctx->pc = 0x1D8B20u;
        goto label_1d8b20;
    }
    ctx->pc = 0x1D8B18u;
    {
        const bool branch_taken_0x1d8b18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d8b18) {
            ctx->pc = 0x1D8BA4u;
            goto label_1d8ba4;
        }
    }
    ctx->pc = 0x1D8B20u;
label_1d8b20:
    // 0x1d8b20: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d8b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d8b24:
    // 0x1d8b24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d8b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d8b28:
    // 0x1d8b28: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_1d8b2c:
    if (ctx->pc == 0x1D8B2Cu) {
        ctx->pc = 0x1D8B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B28u;
        // 0x1d8b2c: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8B30u;
        goto label_1d8b30;
    }
    ctx->pc = 0x1D8B28u;
    {
        const bool branch_taken_0x1d8b28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B28u;
        // 0x1d8b2c: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b28) {
            ctx->pc = 0x1D8B50u;
            goto label_1d8b50;
        }
    }
    ctx->pc = 0x1D8B30u;
label_1d8b30:
    // 0x1d8b30: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d8b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d8b34:
    // 0x1d8b34: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1d8b34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1d8b38:
    // 0x1d8b38: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_1d8b3c:
    if (ctx->pc == 0x1D8B3Cu) {
        ctx->pc = 0x1D8B40u;
        goto label_1d8b40;
    }
    ctx->pc = 0x1D8B38u;
    {
        const bool branch_taken_0x1d8b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8b38) {
            ctx->pc = 0x1D8BA4u;
            goto label_1d8ba4;
        }
    }
    ctx->pc = 0x1D8B40u;
label_1d8b40:
    // 0x1d8b40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8b44:
    // 0x1d8b44: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1d8b44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1d8b48:
    // 0x1d8b48: 0x10000016  b           . + 4 + (0x16 << 2)
label_1d8b4c:
    if (ctx->pc == 0x1D8B4Cu) {
        ctx->pc = 0x1D8B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B48u;
        // 0x1d8b4c: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8B50u;
        goto label_1d8b50;
    }
    ctx->pc = 0x1D8B48u;
    {
        const bool branch_taken_0x1d8b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B48u;
        // 0x1d8b4c: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b48) {
            ctx->pc = 0x1D8BA4u;
            goto label_1d8ba4;
        }
    }
    ctx->pc = 0x1D8B50u;
label_1d8b50:
    // 0x1d8b50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d8b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d8b54:
    // 0x1d8b54: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
label_1d8b58:
    if (ctx->pc == 0x1D8B58u) {
        ctx->pc = 0x1D8B5Cu;
        goto label_1d8b5c;
    }
    ctx->pc = 0x1D8B54u;
    {
        const bool branch_taken_0x1d8b54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d8b54) {
            ctx->pc = 0x1D8B7Cu;
            goto label_1d8b7c;
        }
    }
    ctx->pc = 0x1D8B5Cu;
label_1d8b5c:
    // 0x1d8b5c: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d8b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d8b60:
    // 0x1d8b60: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x1d8b60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
label_1d8b64:
    // 0x1d8b64: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_1d8b68:
    if (ctx->pc == 0x1D8B68u) {
        ctx->pc = 0x1D8B6Cu;
        goto label_1d8b6c;
    }
    ctx->pc = 0x1D8B64u;
    {
        const bool branch_taken_0x1d8b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8b64) {
            ctx->pc = 0x1D8BA4u;
            goto label_1d8ba4;
        }
    }
    ctx->pc = 0x1D8B6Cu;
label_1d8b6c:
    // 0x1d8b6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8b70:
    // 0x1d8b70: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1d8b70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1d8b74:
    // 0x1d8b74: 0x1000000b  b           . + 4 + (0xB << 2)
label_1d8b78:
    if (ctx->pc == 0x1D8B78u) {
        ctx->pc = 0x1D8B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B74u;
        // 0x1d8b78: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8B7Cu;
        goto label_1d8b7c;
    }
    ctx->pc = 0x1D8B74u;
    {
        const bool branch_taken_0x1d8b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B74u;
        // 0x1d8b78: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b74) {
            ctx->pc = 0x1D8BA4u;
            goto label_1d8ba4;
        }
    }
    ctx->pc = 0x1D8B7Cu;
label_1d8b7c:
    // 0x1d8b7c: 0x0  nop
    ctx->pc = 0x1d8b7cu;
    // NOP
label_1d8b80:
    // 0x1d8b80: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d8b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d8b84:
    // 0x1d8b84: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_1d8b88:
    if (ctx->pc == 0x1D8B88u) {
        ctx->pc = 0x1D8B8Cu;
        goto label_1d8b8c;
    }
    ctx->pc = 0x1D8B84u;
    {
        const bool branch_taken_0x1d8b84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d8b84) {
            ctx->pc = 0x1D8BA4u;
            goto label_1d8ba4;
        }
    }
    ctx->pc = 0x1D8B8Cu;
label_1d8b8c:
    // 0x1d8b8c: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d8b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d8b90:
    // 0x1d8b90: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1d8b90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1d8b94:
    // 0x1d8b94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d8b98:
    if (ctx->pc == 0x1D8B98u) {
        ctx->pc = 0x1D8B9Cu;
        goto label_1d8b9c;
    }
    ctx->pc = 0x1D8B94u;
    {
        const bool branch_taken_0x1d8b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8b94) {
            ctx->pc = 0x1D8BA4u;
            goto label_1d8ba4;
        }
    }
    ctx->pc = 0x1D8B9Cu;
label_1d8b9c:
    // 0x1d8b9c: 0xaf838ca0  sw          $v1, -0x7360($gp)
    ctx->pc = 0x1d8b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 3));
label_1d8ba0:
    // 0x1d8ba0: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1d8ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1d8ba4:
    // 0x1d8ba4: 0x0  nop
    ctx->pc = 0x1d8ba4u;
    // NOP
label_1d8ba8:
    // 0x1d8ba8: 0xc07a9d8  jal         func_1EA760
label_1d8bac:
    if (ctx->pc == 0x1D8BACu) {
        ctx->pc = 0x1D8BB0u;
        goto label_1d8bb0;
    }
    ctx->pc = 0x1D8BA8u;
    SET_GPR_U32(ctx, 31, 0x1D8BB0u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x1D8BB0u;
label_1d8bb0:
    // 0x1d8bb0: 0xc04e168  jal         func_1385A0
label_1d8bb4:
    if (ctx->pc == 0x1D8BB4u) {
        ctx->pc = 0x1D8BB8u;
        goto label_1d8bb8;
    }
    ctx->pc = 0x1D8BB0u;
    SET_GPR_U32(ctx, 31, 0x1D8BB8u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1D8BB0u, 0x1D8BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8BB8u;
label_1d8bb8:
    // 0x1d8bb8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d8bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d8bbc:
    // 0x1d8bbc: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1d8bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1d8bc0:
    // 0x1d8bc0: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d8bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d8bc4:
    // 0x1d8bc4: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1d8bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1d8bc8:
    // 0x1d8bc8: 0x27828ce0  addiu       $v0, $gp, -0x7320
    ctx->pc = 0x1d8bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937824));
label_1d8bcc:
    // 0x1d8bcc: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1d8bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1d8bd0:
    // 0x1d8bd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d8bd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8bd4:
    // 0x1d8bd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8bd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8bd8:
    // 0x1d8bd8: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1d8bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1d8bdc:
    // 0x1d8bdc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d8be0:
    // 0x1d8be0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d8be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d8be4:
    // 0x1d8be4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d8be8:
    // 0x1d8be8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d8be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d8bec:
    // 0x1d8bec: 0xc066c72  jal         func_19B1C8
label_1d8bf0:
    if (ctx->pc == 0x1D8BF0u) {
        ctx->pc = 0x1D8BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8BECu;
        // 0x1d8bf0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8BF4u;
        goto label_1d8bf4;
    }
    ctx->pc = 0x1D8BECu;
    SET_GPR_U32(ctx, 31, 0x1D8BF4u);
    ctx->pc = 0x1D8BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8BECu;
    // 0x1d8bf0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1D8BF4u;
label_1d8bf4:
    // 0x1d8bf4: 0xc077e84  jal         func_1DFA10
label_1d8bf8:
    if (ctx->pc == 0x1D8BF8u) {
        ctx->pc = 0x1D8BFCu;
        goto label_1d8bfc;
    }
    ctx->pc = 0x1D8BF4u;
    SET_GPR_U32(ctx, 31, 0x1D8BFCu);
    ctx->pc = 0x1DFA10u;
    { ctx->pc = 0x1dfa10; return; }
    ctx->pc = 0x1D8BFCu;
label_1d8bfc:
    // 0x1d8bfc: 0xc077d90  jal         func_1DF640
label_1d8c00:
    if (ctx->pc == 0x1D8C00u) {
        ctx->pc = 0x1D8C04u;
        goto label_1d8c04;
    }
    ctx->pc = 0x1D8BFCu;
    SET_GPR_U32(ctx, 31, 0x1D8C04u);
    ctx->pc = 0x1DF640u;
    { ctx->pc = 0x1df640; return; }
    ctx->pc = 0x1D8C04u;
label_1d8c04:
    // 0x1d8c04: 0xc077ab4  jal         func_1DEAD0
label_1d8c08:
    if (ctx->pc == 0x1D8C08u) {
        ctx->pc = 0x1D8C0Cu;
        goto label_1d8c0c;
    }
    ctx->pc = 0x1D8C04u;
    SET_GPR_U32(ctx, 31, 0x1D8C0Cu);
    ctx->pc = 0x1DEAD0u;
    { ctx->pc = 0x1dead0; return; }
    ctx->pc = 0x1D8C0Cu;
label_1d8c0c:
    // 0x1d8c0c: 0xc077880  jal         func_1DE200
label_1d8c10:
    if (ctx->pc == 0x1D8C10u) {
        ctx->pc = 0x1D8C14u;
        goto label_1d8c14;
    }
    ctx->pc = 0x1D8C0Cu;
    SET_GPR_U32(ctx, 31, 0x1D8C14u);
    ctx->pc = 0x1DE200u;
    { ctx->pc = 0x1de200; return; }
    ctx->pc = 0x1D8C14u;
label_1d8c14:
    // 0x1d8c14: 0x8f828c8c  lw          $v0, -0x7374($gp)
    ctx->pc = 0x1d8c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937740)));
label_1d8c18:
    // 0x1d8c18: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_1d8c1c:
    if (ctx->pc == 0x1D8C1Cu) {
        ctx->pc = 0x1D8C20u;
        goto label_1d8c20;
    }
    ctx->pc = 0x1D8C18u;
    {
        const bool branch_taken_0x1d8c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8c18) {
            ctx->pc = 0x1D8CF4u;
            goto label_1d8cf4;
        }
    }
    ctx->pc = 0x1D8C20u;
label_1d8c20:
    // 0x1d8c20: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d8c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d8c24:
    // 0x1d8c24: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1d8c24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1d8c28:
    // 0x1d8c28: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d8c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d8c2c:
    // 0x1d8c2c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1d8c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1d8c30:
    // 0x1d8c30: 0x27828c90  addiu       $v0, $gp, -0x7370
    ctx->pc = 0x1d8c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
label_1d8c34:
    // 0x1d8c34: 0x2406027a  addiu       $a2, $zero, 0x27A
    ctx->pc = 0x1d8c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
label_1d8c38:
    // 0x1d8c38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d8c38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8c3c:
    // 0x1d8c3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8c3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8c40:
    // 0x1d8c40: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d8c40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8c44:
    // 0x1d8c44: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1d8c44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1d8c48:
    // 0x1d8c48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8c48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d8c4c:
    // 0x1d8c4c: 0x859021  addu        $s2, $a0, $a1
    ctx->pc = 0x1d8c4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d8c50:
    // 0x1d8c50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d8c54:
    // 0x1d8c54: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d8c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d8c58:
    // 0x1d8c58: 0xc066c72  jal         func_19B1C8
label_1d8c5c:
    if (ctx->pc == 0x1D8C5Cu) {
        ctx->pc = 0x1D8C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8C58u;
        // 0x1d8c5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8C60u;
        goto label_1d8c60;
    }
    ctx->pc = 0x1D8C58u;
    SET_GPR_U32(ctx, 31, 0x1D8C60u);
    ctx->pc = 0x1D8C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8C58u;
    // 0x1d8c5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1D8C60u;
label_1d8c60:
    // 0x1d8c60: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d8c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d8c64:
    // 0x1d8c64: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1d8c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1d8c68:
    // 0x1d8c68: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d8c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d8c6c:
    // 0x1d8c6c: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1d8c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1d8c70:
    // 0x1d8c70: 0x8f848c80  lw          $a0, -0x7380($gp)
    ctx->pc = 0x1d8c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1d8c74:
    // 0x1d8c74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d8c78:
    // 0x1d8c78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d8c7c:
    // 0x1d8c7c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1d8c7cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d8c80:
    // 0x1d8c80: 0xc070e2c  jal         func_1C38B0
label_1d8c84:
    if (ctx->pc == 0x1D8C84u) {
        ctx->pc = 0x1D8C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8C80u;
        // 0x1d8c84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8C88u;
        goto label_1d8c88;
    }
    ctx->pc = 0x1D8C80u;
    SET_GPR_U32(ctx, 31, 0x1D8C88u);
    ctx->pc = 0x1D8C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8C80u;
    // 0x1d8c84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1D8C88u;
label_1d8c88:
    // 0x1d8c88: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d8c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d8c8c:
    // 0x1d8c8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d8c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d8c90:
    // 0x1d8c90: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1d8c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1d8c94:
    // 0x1d8c94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d8c94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8c98:
    // 0x1d8c98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8c98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8c9c:
    // 0x1d8c9c: 0xc066c72  jal         func_19B1C8
label_1d8ca0:
    if (ctx->pc == 0x1D8CA0u) {
        ctx->pc = 0x1D8CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8C9Cu;
        // 0x1d8ca0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8CA4u;
        goto label_1d8ca4;
    }
    ctx->pc = 0x1D8C9Cu;
    SET_GPR_U32(ctx, 31, 0x1D8CA4u);
    ctx->pc = 0x1D8CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8C9Cu;
    // 0x1d8ca0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1D8CA4u;
label_1d8ca4:
    // 0x1d8ca4: 0x8f828c88  lw          $v0, -0x7378($gp)
    ctx->pc = 0x1d8ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1d8ca8:
    // 0x1d8ca8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1d8cac:
    if (ctx->pc == 0x1D8CACu) {
        ctx->pc = 0x1D8CB0u;
        goto label_1d8cb0;
    }
    ctx->pc = 0x1D8CA8u;
    {
        const bool branch_taken_0x1d8ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8ca8) {
            ctx->pc = 0x1D8CF4u;
            goto label_1d8cf4;
        }
    }
    ctx->pc = 0x1D8CB0u;
label_1d8cb0:
    // 0x1d8cb0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d8cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d8cb4:
    // 0x1d8cb4: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1d8cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1d8cb8:
    // 0x1d8cb8: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d8cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d8cbc:
    // 0x1d8cbc: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1d8cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1d8cc0:
    // 0x1d8cc0: 0x8f848c84  lw          $a0, -0x737C($gp)
    ctx->pc = 0x1d8cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
label_1d8cc4:
    // 0x1d8cc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d8cc8:
    // 0x1d8cc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d8ccc:
    // 0x1d8ccc: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x1d8cccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1d8cd0:
    // 0x1d8cd0: 0xc070e2c  jal         func_1C38B0
label_1d8cd4:
    if (ctx->pc == 0x1D8CD4u) {
        ctx->pc = 0x1D8CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8CD0u;
        // 0x1d8cd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8CD8u;
        goto label_1d8cd8;
    }
    ctx->pc = 0x1D8CD0u;
    SET_GPR_U32(ctx, 31, 0x1D8CD8u);
    ctx->pc = 0x1D8CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8CD0u;
    // 0x1d8cd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1D8CD8u;
label_1d8cd8:
    // 0x1d8cd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d8cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d8cdc:
    // 0x1d8cdc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d8cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d8ce0:
    // 0x1d8ce0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1d8ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1d8ce4:
    // 0x1d8ce4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d8ce4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8ce8:
    // 0x1d8ce8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8ce8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8cec:
    // 0x1d8cec: 0xc066c72  jal         func_19B1C8
label_1d8cf0:
    if (ctx->pc == 0x1D8CF0u) {
        ctx->pc = 0x1D8CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8CECu;
        // 0x1d8cf0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8CF4u;
        goto label_1d8cf4;
    }
    ctx->pc = 0x1D8CECu;
    SET_GPR_U32(ctx, 31, 0x1D8CF4u);
    ctx->pc = 0x1D8CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8CECu;
    // 0x1d8cf0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1D8CF4u;
label_1d8cf4:
    // 0x1d8cf4: 0x0  nop
    ctx->pc = 0x1d8cf4u;
    // NOP
label_1d8cf8:
    // 0x1d8cf8: 0xc07a86c  jal         func_1EA1B0
label_1d8cfc:
    if (ctx->pc == 0x1D8CFCu) {
        ctx->pc = 0x1D8D00u;
        goto label_1d8d00;
    }
    ctx->pc = 0x1D8CF8u;
    SET_GPR_U32(ctx, 31, 0x1D8D00u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x1D8D00u;
label_1d8d00:
    // 0x1d8d00: 0xc04e120  jal         func_138480
label_1d8d04:
    if (ctx->pc == 0x1D8D04u) {
        ctx->pc = 0x1D8D08u;
        goto label_1d8d08;
    }
    ctx->pc = 0x1D8D00u;
    SET_GPR_U32(ctx, 31, 0x1D8D08u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1D8D00u, 0x1D8D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8D08u;
label_1d8d08:
    // 0x1d8d08: 0xc05b578  jal         func_16D5E0
label_1d8d0c:
    if (ctx->pc == 0x1D8D0Cu) {
        ctx->pc = 0x1D8D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8D08u;
        // 0x1d8d0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8D10u;
        goto label_1d8d10;
    }
    ctx->pc = 0x1D8D08u;
    SET_GPR_U32(ctx, 31, 0x1D8D10u);
    ctx->pc = 0x1D8D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8D08u;
    // 0x1d8d0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1D8D08u, 0x1D8D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8D10u;
label_1d8d10:
    // 0x1d8d10: 0xc060258  jal         func_180960
label_1d8d14:
    if (ctx->pc == 0x1D8D14u) {
        ctx->pc = 0x1D8D18u;
        goto label_1d8d18;
    }
    ctx->pc = 0x1D8D10u;
    SET_GPR_U32(ctx, 31, 0x1D8D18u);
    ctx->pc = 0x180960u;
    { ctx->pc = 0x180960; return; }
    ctx->pc = 0x1D8D18u;
label_1d8d18:
    // 0x1d8d18: 0x1220ff4f  beqz        $s1, . + 4 + (-0xB1 << 2)
label_1d8d1c:
    if (ctx->pc == 0x1D8D1Cu) {
        ctx->pc = 0x1D8D20u;
        goto label_1d8d20;
    }
    ctx->pc = 0x1D8D18u;
    {
        const bool branch_taken_0x1d8d18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8d18) {
            ctx->pc = 0x1D8A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8a58;
        }
    }
    ctx->pc = 0x1D8D20u;
label_1d8d20:
    // 0x1d8d20: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1d8d20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1d8d24:
    // 0x1d8d24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d8d28:
    if (ctx->pc == 0x1D8D28u) {
        ctx->pc = 0x1D8D2Cu;
        goto label_1d8d2c;
    }
    ctx->pc = 0x1D8D24u;
    {
        const bool branch_taken_0x1d8d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8d24) {
            ctx->pc = 0x1D8D34u;
            goto label_1d8d34;
        }
    }
    ctx->pc = 0x1D8D2Cu;
label_1d8d2c:
    // 0x1d8d2c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d8d30:
    if (ctx->pc == 0x1D8D30u) {
        ctx->pc = 0x1D8D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8D2Cu;
        // 0x1d8d30: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8D34u;
        goto label_1d8d34;
    }
    ctx->pc = 0x1D8D2Cu;
    {
        const bool branch_taken_0x1d8d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8D2Cu;
        // 0x1d8d30: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8d2c) {
            ctx->pc = 0x1D8D44u;
            goto label_1d8d44;
        }
    }
    ctx->pc = 0x1D8D34u;
label_1d8d34:
    // 0x1d8d34: 0x0  nop
    ctx->pc = 0x1d8d34u;
    // NOP
label_1d8d38:
    // 0x1d8d38: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x1d8d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
label_1d8d3c:
    // 0x1d8d3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d8d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d8d40:
    // 0x1d8d40: 0xaf828cf4  sw          $v0, -0x730C($gp)
    ctx->pc = 0x1d8d40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 2));
label_1d8d44:
    // 0x1d8d44: 0x0  nop
    ctx->pc = 0x1d8d44u;
    // NOP
label_1d8d48:
    // 0x1d8d48: 0x8f828cd4  lw          $v0, -0x732C($gp)
    ctx->pc = 0x1d8d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937812)));
label_1d8d4c:
    // 0x1d8d4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d8d50:
    if (ctx->pc == 0x1D8D50u) {
        ctx->pc = 0x1D8D54u;
        goto label_1d8d54;
    }
    ctx->pc = 0x1D8D4Cu;
    {
        const bool branch_taken_0x1d8d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8d4c) {
            ctx->pc = 0x1D8D60u;
            goto label_1d8d60;
        }
    }
    ctx->pc = 0x1D8D54u;
label_1d8d54:
    // 0x1d8d54: 0x8f828cd0  lw          $v0, -0x7330($gp)
    ctx->pc = 0x1d8d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
label_1d8d58:
    // 0x1d8d58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d8d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d8d5c:
    // 0x1d8d5c: 0xaf828cd0  sw          $v0, -0x7330($gp)
    ctx->pc = 0x1d8d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937808), GPR_U32(ctx, 2));
label_1d8d60:
    // 0x1d8d60: 0x8f828cc4  lw          $v0, -0x733C($gp)
    ctx->pc = 0x1d8d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937796)));
label_1d8d64:
    // 0x1d8d64: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1d8d68:
    if (ctx->pc == 0x1D8D68u) {
        ctx->pc = 0x1D8D6Cu;
        goto label_1d8d6c;
    }
    ctx->pc = 0x1D8D64u;
    {
        const bool branch_taken_0x1d8d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8d64) {
            ctx->pc = 0x1D8DC8u;
            goto label_1d8dc8;
        }
    }
    ctx->pc = 0x1D8D6Cu;
label_1d8d6c:
    // 0x1d8d6c: 0x8f828cc0  lw          $v0, -0x7340($gp)
    ctx->pc = 0x1d8d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937792)));
label_1d8d70:
    // 0x1d8d70: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1d8d70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1d8d74:
    // 0x1d8d74: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1d8d78:
    if (ctx->pc == 0x1D8D78u) {
        ctx->pc = 0x1D8D7Cu;
        goto label_1d8d7c;
    }
    ctx->pc = 0x1D8D74u;
    {
        const bool branch_taken_0x1d8d74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8d74) {
            ctx->pc = 0x1D8D9Cu;
            goto label_1d8d9c;
        }
    }
    ctx->pc = 0x1D8D7Cu;
label_1d8d7c:
    // 0x1d8d7c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1d8d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1d8d80:
    // 0x1d8d80: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1d8d80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1d8d84:
    // 0x1d8d84: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1d8d88:
    if (ctx->pc == 0x1D8D88u) {
        ctx->pc = 0x1D8D8Cu;
        goto label_1d8d8c;
    }
    ctx->pc = 0x1D8D84u;
    {
        const bool branch_taken_0x1d8d84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8d84) {
            ctx->pc = 0x1D8D94u;
            goto label_1d8d94;
        }
    }
    ctx->pc = 0x1D8D8Cu;
label_1d8d8c:
    // 0x1d8d8c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d8d90:
    if (ctx->pc == 0x1D8D90u) {
        ctx->pc = 0x1D8D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8D8Cu;
        // 0x1d8d90: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8D94u;
        goto label_1d8d94;
    }
    ctx->pc = 0x1D8D8Cu;
    {
        const bool branch_taken_0x1d8d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8D8Cu;
        // 0x1d8d90: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8d8c) {
            ctx->pc = 0x1D8D9Cu;
            goto label_1d8d9c;
        }
    }
    ctx->pc = 0x1D8D94u;
label_1d8d94:
    // 0x1d8d94: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1d8d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d8d98:
    // 0x1d8d98: 0xaf828cc0  sw          $v0, -0x7340($gp)
    ctx->pc = 0x1d8d98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
label_1d8d9c:
    // 0x1d8d9c: 0x0  nop
    ctx->pc = 0x1d8d9cu;
    // NOP
label_1d8da0:
    // 0x1d8da0: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1d8da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1d8da4:
    // 0x1d8da4: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_1d8da8:
    if (ctx->pc == 0x1D8DA8u) {
        ctx->pc = 0x1D8DACu;
        goto label_1d8dac;
    }
    ctx->pc = 0x1D8DA4u;
    {
        const bool branch_taken_0x1d8da4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d8da4) {
            ctx->pc = 0x1D8DC8u;
            goto label_1d8dc8;
        }
    }
    ctx->pc = 0x1D8DACu;
label_1d8dac:
    // 0x1d8dac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d8dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d8db0:
    // 0x1d8db0: 0xaf828cb0  sw          $v0, -0x7350($gp)
    ctx->pc = 0x1d8db0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 2));
label_1d8db4:
    // 0x1d8db4: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1d8db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1d8db8:
    // 0x1d8db8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d8dbc:
    if (ctx->pc == 0x1D8DBCu) {
        ctx->pc = 0x1D8DC0u;
        goto label_1d8dc0;
    }
    ctx->pc = 0x1D8DB8u;
    {
        const bool branch_taken_0x1d8db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8db8) {
            ctx->pc = 0x1D8DC8u;
            goto label_1d8dc8;
        }
    }
    ctx->pc = 0x1D8DC0u;
label_1d8dc0:
    // 0x1d8dc0: 0x8f828ca8  lw          $v0, -0x7358($gp)
    ctx->pc = 0x1d8dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
label_1d8dc4:
    // 0x1d8dc4: 0xaf828cb4  sw          $v0, -0x734C($gp)
    ctx->pc = 0x1d8dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937780), GPR_U32(ctx, 2));
label_1d8dc8:
    // 0x1d8dc8: 0xc077a7c  jal         func_1DE9F0
label_1d8dcc:
    if (ctx->pc == 0x1D8DCCu) {
        ctx->pc = 0x1D8DD0u;
        goto label_1d8dd0;
    }
    ctx->pc = 0x1D8DC8u;
    SET_GPR_U32(ctx, 31, 0x1D8DD0u);
    ctx->pc = 0x1DE9F0u;
    { ctx->pc = 0x1de9f0; return; }
    ctx->pc = 0x1D8DD0u;
label_1d8dd0:
    // 0x1d8dd0: 0x8f848ca0  lw          $a0, -0x7360($gp)
    ctx->pc = 0x1d8dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1d8dd4:
    // 0x1d8dd4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d8dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d8dd8:
    // 0x1d8dd8: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
label_1d8ddc:
    if (ctx->pc == 0x1D8DDCu) {
        ctx->pc = 0x1D8DE0u;
        goto label_1d8de0;
    }
    ctx->pc = 0x1D8DD8u;
    {
        const bool branch_taken_0x1d8dd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d8dd8) {
            ctx->pc = 0x1D8E64u;
            goto label_1d8e64;
        }
    }
    ctx->pc = 0x1D8DE0u;
label_1d8de0:
    // 0x1d8de0: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d8de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d8de4:
    // 0x1d8de4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d8de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d8de8:
    // 0x1d8de8: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_1d8dec:
    if (ctx->pc == 0x1D8DECu) {
        ctx->pc = 0x1D8DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8DE8u;
        // 0x1d8dec: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8DF0u;
        goto label_1d8df0;
    }
    ctx->pc = 0x1D8DE8u;
    {
        const bool branch_taken_0x1d8de8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8DE8u;
        // 0x1d8dec: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8de8) {
            ctx->pc = 0x1D8E10u;
            goto label_1d8e10;
        }
    }
    ctx->pc = 0x1D8DF0u;
label_1d8df0:
    // 0x1d8df0: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d8df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d8df4:
    // 0x1d8df4: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1d8df4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1d8df8:
    // 0x1d8df8: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_1d8dfc:
    if (ctx->pc == 0x1D8DFCu) {
        ctx->pc = 0x1D8E00u;
        goto label_1d8e00;
    }
    ctx->pc = 0x1D8DF8u;
    {
        const bool branch_taken_0x1d8df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8df8) {
            ctx->pc = 0x1D8E64u;
            goto label_1d8e64;
        }
    }
    ctx->pc = 0x1D8E00u;
label_1d8e00:
    // 0x1d8e00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8e04:
    // 0x1d8e04: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1d8e04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1d8e08:
    // 0x1d8e08: 0x10000016  b           . + 4 + (0x16 << 2)
label_1d8e0c:
    if (ctx->pc == 0x1D8E0Cu) {
        ctx->pc = 0x1D8E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8E08u;
        // 0x1d8e0c: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8E10u;
        goto label_1d8e10;
    }
    ctx->pc = 0x1D8E08u;
    {
        const bool branch_taken_0x1d8e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8E08u;
        // 0x1d8e0c: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8e08) {
            ctx->pc = 0x1D8E64u;
            goto label_1d8e64;
        }
    }
    ctx->pc = 0x1D8E10u;
label_1d8e10:
    // 0x1d8e10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d8e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d8e14:
    // 0x1d8e14: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
label_1d8e18:
    if (ctx->pc == 0x1D8E18u) {
        ctx->pc = 0x1D8E1Cu;
        goto label_1d8e1c;
    }
    ctx->pc = 0x1D8E14u;
    {
        const bool branch_taken_0x1d8e14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d8e14) {
            ctx->pc = 0x1D8E3Cu;
            goto label_1d8e3c;
        }
    }
    ctx->pc = 0x1D8E1Cu;
label_1d8e1c:
    // 0x1d8e1c: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d8e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d8e20:
    // 0x1d8e20: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x1d8e20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
label_1d8e24:
    // 0x1d8e24: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_1d8e28:
    if (ctx->pc == 0x1D8E28u) {
        ctx->pc = 0x1D8E2Cu;
        goto label_1d8e2c;
    }
    ctx->pc = 0x1D8E24u;
    {
        const bool branch_taken_0x1d8e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8e24) {
            ctx->pc = 0x1D8E64u;
            goto label_1d8e64;
        }
    }
    ctx->pc = 0x1D8E2Cu;
label_1d8e2c:
    // 0x1d8e2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8e30:
    // 0x1d8e30: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1d8e30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1d8e34:
    // 0x1d8e34: 0x1000000b  b           . + 4 + (0xB << 2)
label_1d8e38:
    if (ctx->pc == 0x1D8E38u) {
        ctx->pc = 0x1D8E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8E34u;
        // 0x1d8e38: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8E3Cu;
        goto label_1d8e3c;
    }
    ctx->pc = 0x1D8E34u;
    {
        const bool branch_taken_0x1d8e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8E34u;
        // 0x1d8e38: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8e34) {
            ctx->pc = 0x1D8E64u;
            goto label_1d8e64;
        }
    }
    ctx->pc = 0x1D8E3Cu;
label_1d8e3c:
    // 0x1d8e3c: 0x0  nop
    ctx->pc = 0x1d8e3cu;
    // NOP
label_1d8e40:
    // 0x1d8e40: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d8e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d8e44:
    // 0x1d8e44: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_1d8e48:
    if (ctx->pc == 0x1D8E48u) {
        ctx->pc = 0x1D8E4Cu;
        goto label_1d8e4c;
    }
    ctx->pc = 0x1D8E44u;
    {
        const bool branch_taken_0x1d8e44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d8e44) {
            ctx->pc = 0x1D8E64u;
            goto label_1d8e64;
        }
    }
    ctx->pc = 0x1D8E4Cu;
label_1d8e4c:
    // 0x1d8e4c: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d8e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d8e50:
    // 0x1d8e50: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1d8e50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1d8e54:
    // 0x1d8e54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d8e58:
    if (ctx->pc == 0x1D8E58u) {
        ctx->pc = 0x1D8E5Cu;
        goto label_1d8e5c;
    }
    ctx->pc = 0x1D8E54u;
    {
        const bool branch_taken_0x1d8e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8e54) {
            ctx->pc = 0x1D8E64u;
            goto label_1d8e64;
        }
    }
    ctx->pc = 0x1D8E5Cu;
label_1d8e5c:
    // 0x1d8e5c: 0xaf838ca0  sw          $v1, -0x7360($gp)
    ctx->pc = 0x1d8e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 3));
label_1d8e60:
    // 0x1d8e60: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1d8e60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1d8e64:
    // 0x1d8e64: 0x0  nop
    ctx->pc = 0x1d8e64u;
    // NOP
label_1d8e68:
    // 0x1d8e68: 0xc07a9d8  jal         func_1EA760
label_1d8e6c:
    if (ctx->pc == 0x1D8E6Cu) {
        ctx->pc = 0x1D8E70u;
        goto label_1d8e70;
    }
    ctx->pc = 0x1D8E68u;
    SET_GPR_U32(ctx, 31, 0x1D8E70u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x1D8E70u;
label_1d8e70:
    // 0x1d8e70: 0xc04e168  jal         func_1385A0
label_1d8e74:
    if (ctx->pc == 0x1D8E74u) {
        ctx->pc = 0x1D8E78u;
        goto label_1d8e78;
    }
    ctx->pc = 0x1D8E70u;
    SET_GPR_U32(ctx, 31, 0x1D8E78u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1D8E70u, 0x1D8E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8E78u;
label_1d8e78:
    // 0x1d8e78: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d8e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d8e7c:
    // 0x1d8e7c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1d8e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1d8e80:
    // 0x1d8e80: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d8e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d8e84:
    // 0x1d8e84: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1d8e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1d8e88:
    // 0x1d8e88: 0x27828ce0  addiu       $v0, $gp, -0x7320
    ctx->pc = 0x1d8e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937824));
label_1d8e8c:
    // 0x1d8e8c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1d8e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1d8e90:
    // 0x1d8e90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d8e90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8e94:
    // 0x1d8e94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8e94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8e98:
    // 0x1d8e98: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1d8e98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1d8e9c:
    // 0x1d8e9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d8ea0:
    // 0x1d8ea0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d8ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d8ea4:
    // 0x1d8ea4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d8ea8:
    // 0x1d8ea8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d8ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d8eac:
    // 0x1d8eac: 0xc066c72  jal         func_19B1C8
label_1d8eb0:
    if (ctx->pc == 0x1D8EB0u) {
        ctx->pc = 0x1D8EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8EACu;
        // 0x1d8eb0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8EB4u;
        goto label_1d8eb4;
    }
    ctx->pc = 0x1D8EACu;
    SET_GPR_U32(ctx, 31, 0x1D8EB4u);
    ctx->pc = 0x1D8EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8EACu;
    // 0x1d8eb0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1D8EB4u;
label_1d8eb4:
    // 0x1d8eb4: 0xc077e84  jal         func_1DFA10
label_1d8eb8:
    if (ctx->pc == 0x1D8EB8u) {
        ctx->pc = 0x1D8EBCu;
        goto label_1d8ebc;
    }
    ctx->pc = 0x1D8EB4u;
    SET_GPR_U32(ctx, 31, 0x1D8EBCu);
    ctx->pc = 0x1DFA10u;
    { ctx->pc = 0x1dfa10; return; }
    ctx->pc = 0x1D8EBCu;
label_1d8ebc:
    // 0x1d8ebc: 0xc077d90  jal         func_1DF640
label_1d8ec0:
    if (ctx->pc == 0x1D8EC0u) {
        ctx->pc = 0x1D8EC4u;
        goto label_1d8ec4;
    }
    ctx->pc = 0x1D8EBCu;
    SET_GPR_U32(ctx, 31, 0x1D8EC4u);
    ctx->pc = 0x1DF640u;
    { ctx->pc = 0x1df640; return; }
    ctx->pc = 0x1D8EC4u;
label_1d8ec4:
    // 0x1d8ec4: 0xc077ab4  jal         func_1DEAD0
label_1d8ec8:
    if (ctx->pc == 0x1D8EC8u) {
        ctx->pc = 0x1D8ECCu;
        goto label_1d8ecc;
    }
    ctx->pc = 0x1D8EC4u;
    SET_GPR_U32(ctx, 31, 0x1D8ECCu);
    ctx->pc = 0x1DEAD0u;
    { ctx->pc = 0x1dead0; return; }
    ctx->pc = 0x1D8ECCu;
label_1d8ecc:
    // 0x1d8ecc: 0xc077880  jal         func_1DE200
label_1d8ed0:
    if (ctx->pc == 0x1D8ED0u) {
        ctx->pc = 0x1D8ED4u;
        goto label_1d8ed4;
    }
    ctx->pc = 0x1D8ECCu;
    SET_GPR_U32(ctx, 31, 0x1D8ED4u);
    ctx->pc = 0x1DE200u;
    { ctx->pc = 0x1de200; return; }
    ctx->pc = 0x1D8ED4u;
label_1d8ed4:
    // 0x1d8ed4: 0x8f828c8c  lw          $v0, -0x7374($gp)
    ctx->pc = 0x1d8ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937740)));
label_1d8ed8:
    // 0x1d8ed8: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_1d8edc:
    if (ctx->pc == 0x1D8EDCu) {
        ctx->pc = 0x1D8EE0u;
        goto label_1d8ee0;
    }
    ctx->pc = 0x1D8ED8u;
    {
        const bool branch_taken_0x1d8ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8ed8) {
            ctx->pc = 0x1D8FB4u;
            goto label_1d8fb4;
        }
    }
    ctx->pc = 0x1D8EE0u;
label_1d8ee0:
    // 0x1d8ee0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d8ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d8ee4:
    // 0x1d8ee4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1d8ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1d8ee8:
    // 0x1d8ee8: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d8ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d8eec:
    // 0x1d8eec: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1d8eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1d8ef0:
    // 0x1d8ef0: 0x27828c90  addiu       $v0, $gp, -0x7370
    ctx->pc = 0x1d8ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
label_1d8ef4:
    // 0x1d8ef4: 0x2406027a  addiu       $a2, $zero, 0x27A
    ctx->pc = 0x1d8ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
label_1d8ef8:
    // 0x1d8ef8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d8ef8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8efc:
    // 0x1d8efc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8efcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8f00:
    // 0x1d8f00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d8f00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8f04:
    // 0x1d8f04: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1d8f04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1d8f08:
    // 0x1d8f08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8f08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d8f0c:
    // 0x1d8f0c: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x1d8f0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d8f10:
    // 0x1d8f10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d8f14:
    // 0x1d8f14: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d8f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d8f18:
    // 0x1d8f18: 0xc066c72  jal         func_19B1C8
label_1d8f1c:
    if (ctx->pc == 0x1D8F1Cu) {
        ctx->pc = 0x1D8F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8F18u;
        // 0x1d8f1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8F20u;
        goto label_1d8f20;
    }
    ctx->pc = 0x1D8F18u;
    SET_GPR_U32(ctx, 31, 0x1D8F20u);
    ctx->pc = 0x1D8F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8F18u;
    // 0x1d8f1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1D8F20u;
label_1d8f20:
    // 0x1d8f20: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d8f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d8f24:
    // 0x1d8f24: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1d8f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1d8f28:
    // 0x1d8f28: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d8f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d8f2c:
    // 0x1d8f2c: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1d8f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1d8f30:
    // 0x1d8f30: 0x8f848c80  lw          $a0, -0x7380($gp)
    ctx->pc = 0x1d8f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1d8f34:
    // 0x1d8f34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8f34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d8f38:
    // 0x1d8f38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d8f3c:
    // 0x1d8f3c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1d8f3cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d8f40:
    // 0x1d8f40: 0xc070e2c  jal         func_1C38B0
label_1d8f44:
    if (ctx->pc == 0x1D8F44u) {
        ctx->pc = 0x1D8F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8F40u;
        // 0x1d8f44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8F48u;
        goto label_1d8f48;
    }
    ctx->pc = 0x1D8F40u;
    SET_GPR_U32(ctx, 31, 0x1D8F48u);
    ctx->pc = 0x1D8F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8F40u;
    // 0x1d8f44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1D8F48u;
label_1d8f48:
    // 0x1d8f48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d8f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d8f4c:
    // 0x1d8f4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d8f50:
    // 0x1d8f50: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1d8f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1d8f54:
    // 0x1d8f54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d8f54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8f58:
    // 0x1d8f58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8f58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8f5c:
    // 0x1d8f5c: 0xc066c72  jal         func_19B1C8
label_1d8f60:
    if (ctx->pc == 0x1D8F60u) {
        ctx->pc = 0x1D8F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8F5Cu;
        // 0x1d8f60: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8F64u;
        goto label_1d8f64;
    }
    ctx->pc = 0x1D8F5Cu;
    SET_GPR_U32(ctx, 31, 0x1D8F64u);
    ctx->pc = 0x1D8F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8F5Cu;
    // 0x1d8f60: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1D8F64u;
label_1d8f64:
    // 0x1d8f64: 0x8f828c88  lw          $v0, -0x7378($gp)
    ctx->pc = 0x1d8f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1d8f68:
    // 0x1d8f68: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1d8f6c:
    if (ctx->pc == 0x1D8F6Cu) {
        ctx->pc = 0x1D8F70u;
        goto label_1d8f70;
    }
    ctx->pc = 0x1D8F68u;
    {
        const bool branch_taken_0x1d8f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8f68) {
            ctx->pc = 0x1D8FB4u;
            goto label_1d8fb4;
        }
    }
    ctx->pc = 0x1D8F70u;
label_1d8f70:
    // 0x1d8f70: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d8f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d8f74:
    // 0x1d8f74: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1d8f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1d8f78:
    // 0x1d8f78: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d8f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d8f7c:
    // 0x1d8f7c: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1d8f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1d8f80:
    // 0x1d8f80: 0x8f848c84  lw          $a0, -0x737C($gp)
    ctx->pc = 0x1d8f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
label_1d8f84:
    // 0x1d8f84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d8f88:
    // 0x1d8f88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d8f8c:
    // 0x1d8f8c: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x1d8f8cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1d8f90:
    // 0x1d8f90: 0xc070e2c  jal         func_1C38B0
label_1d8f94:
    if (ctx->pc == 0x1D8F94u) {
        ctx->pc = 0x1D8F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8F90u;
        // 0x1d8f94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8F98u;
        goto label_1d8f98;
    }
    ctx->pc = 0x1D8F90u;
    SET_GPR_U32(ctx, 31, 0x1D8F98u);
    ctx->pc = 0x1D8F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8F90u;
    // 0x1d8f94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1D8F98u;
label_1d8f98:
    // 0x1d8f98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d8f9c:
    // 0x1d8f9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d8f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d8fa0:
    // 0x1d8fa0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1d8fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1d8fa4:
    // 0x1d8fa4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d8fa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8fa8:
    // 0x1d8fa8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8fa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8fac:
    // 0x1d8fac: 0xc066c72  jal         func_19B1C8
label_1d8fb0:
    if (ctx->pc == 0x1D8FB0u) {
        ctx->pc = 0x1D8FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8FACu;
        // 0x1d8fb0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8FB4u;
        goto label_1d8fb4;
    }
    ctx->pc = 0x1D8FACu;
    SET_GPR_U32(ctx, 31, 0x1D8FB4u);
    ctx->pc = 0x1D8FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8FACu;
    // 0x1d8fb0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1D8FB4u;
label_1d8fb4:
    // 0x1d8fb4: 0x0  nop
    ctx->pc = 0x1d8fb4u;
    // NOP
label_1d8fb8:
    // 0x1d8fb8: 0xc07a86c  jal         func_1EA1B0
label_1d8fbc:
    if (ctx->pc == 0x1D8FBCu) {
        ctx->pc = 0x1D8FC0u;
        goto label_1d8fc0;
    }
    ctx->pc = 0x1D8FB8u;
    SET_GPR_U32(ctx, 31, 0x1D8FC0u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x1D8FC0u;
label_1d8fc0:
    // 0x1d8fc0: 0xc04e120  jal         func_138480
label_1d8fc4:
    if (ctx->pc == 0x1D8FC4u) {
        ctx->pc = 0x1D8FC8u;
        goto label_1d8fc8;
    }
    ctx->pc = 0x1D8FC0u;
    SET_GPR_U32(ctx, 31, 0x1D8FC8u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1D8FC0u, 0x1D8FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8FC8u;
label_1d8fc8:
    // 0x1d8fc8: 0xc05b578  jal         func_16D5E0
label_1d8fcc:
    if (ctx->pc == 0x1D8FCCu) {
        ctx->pc = 0x1D8FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8FC8u;
        // 0x1d8fcc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8FD0u;
        goto label_1d8fd0;
    }
    ctx->pc = 0x1D8FC8u;
    SET_GPR_U32(ctx, 31, 0x1D8FD0u);
    ctx->pc = 0x1D8FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8FC8u;
    // 0x1d8fcc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1D8FC8u, 0x1D8FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8FD0u;
label_1d8fd0:
    // 0x1d8fd0: 0xc060258  jal         func_180960
label_1d8fd4:
    if (ctx->pc == 0x1D8FD4u) {
        ctx->pc = 0x1D8FD8u;
        goto label_1d8fd8;
    }
    ctx->pc = 0x1D8FD0u;
    SET_GPR_U32(ctx, 31, 0x1D8FD8u);
    ctx->pc = 0x180960u;
    { ctx->pc = 0x180960; return; }
    ctx->pc = 0x1D8FD8u;
label_1d8fd8:
    // 0x1d8fd8: 0x1000fdab  b           . + 4 + (-0x255 << 2)
label_1d8fdc:
    if (ctx->pc == 0x1D8FDCu) {
        ctx->pc = 0x1D8FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8FD8u;
        // 0x1d8fdc: 0x8f828cf4  lw          $v0, -0x730C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8FE0u;
        goto label_1d8fe0;
    }
    ctx->pc = 0x1D8FD8u;
    {
        const bool branch_taken_0x1d8fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8FD8u;
        // 0x1d8fdc: 0x8f828cf4  lw          $v0, -0x730C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8fd8) {
            ctx->pc = 0x1D8688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d8688; return; }
        }
    }
    ctx->pc = 0x1D8FE0u;
label_1d8fe0:
    // 0x1d8fe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d8fe4:
    // 0x1d8fe4: 0xc077350  jal         func_1DCD40
label_1d8fe8:
    if (ctx->pc == 0x1D8FE8u) {
        ctx->pc = 0x1D8FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8FE4u;
        // 0x1d8fe8: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8FECu;
        goto label_1d8fec;
    }
    ctx->pc = 0x1D8FE4u;
    SET_GPR_U32(ctx, 31, 0x1D8FECu);
    ctx->pc = 0x1D8FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8FE4u;
    // 0x1d8fe8: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD40u;
    { ctx->pc = 0x1dcd40; return; }
    ctx->pc = 0x1D8FECu;
label_1d8fec:
    // 0x1d8fec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d8fecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d8ff0:
    // 0x1d8ff0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d8ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d8ff4:
    // 0x1d8ff4: 0x1222fda3  beq         $s1, $v0, . + 4 + (-0x25D << 2)
label_1d8ff8:
    if (ctx->pc == 0x1D8FF8u) {
        ctx->pc = 0x1D8FFCu;
        goto label_1d8ffc;
    }
    ctx->pc = 0x1D8FF4u;
    {
        const bool branch_taken_0x1d8ff4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8ff4) {
            ctx->pc = 0x1D8684u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d8684; return; }
        }
    }
    ctx->pc = 0x1D8FFCu;
label_1d8ffc:
    // 0x1d8ffc: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d8ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1d9000:
    // 0x1d9000: 0x1440fda0  bnez        $v0, . + 4 + (-0x260 << 2)
label_1d9004:
    if (ctx->pc == 0x1D9004u) {
        ctx->pc = 0x1D9008u;
        goto label_1d9008;
    }
    ctx->pc = 0x1D9000u;
    {
        const bool branch_taken_0x1d9000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9000) {
            ctx->pc = 0x1D8684u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d8684; return; }
        }
    }
    ctx->pc = 0x1D9008u;
label_1d9008:
    // 0x1d9008: 0x8f838cec  lw          $v1, -0x7314($gp)
    ctx->pc = 0x1d9008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937836)));
label_1d900c:
    // 0x1d900c: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1d900cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1d9010:
    // 0x1d9010: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_1d9014:
    if (ctx->pc == 0x1D9014u) {
        ctx->pc = 0x1D9018u;
        goto label_1d9018;
    }
    ctx->pc = 0x1D9010u;
    {
        const bool branch_taken_0x1d9010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9010) {
            ctx->pc = 0x1D9058u;
            goto label_1d9058;
        }
    }
    ctx->pc = 0x1D9018u;
label_1d9018:
    // 0x1d9018: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d9018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d901c:
    // 0x1d901c: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
label_1d9020:
    if (ctx->pc == 0x1D9020u) {
        ctx->pc = 0x1D9024u;
        goto label_1d9024;
    }
    ctx->pc = 0x1D901Cu;
    {
        const bool branch_taken_0x1d901c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d901c) {
            ctx->pc = 0x1D9030u;
            goto label_1d9030;
        }
    }
    ctx->pc = 0x1D9024u;
label_1d9024:
    // 0x1d9024: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1d9024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1d9028:
    // 0x1d9028: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
label_1d902c:
    if (ctx->pc == 0x1D902Cu) {
        ctx->pc = 0x1D9030u;
        goto label_1d9030;
    }
    ctx->pc = 0x1D9028u;
    {
        const bool branch_taken_0x1d9028 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d9028) {
            ctx->pc = 0x1D9058u;
            goto label_1d9058;
        }
    }
    ctx->pc = 0x1D9030u;
label_1d9030:
    // 0x1d9030: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d9030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d9034:
    // 0x1d9034: 0xc077350  jal         func_1DCD40
label_1d9038:
    if (ctx->pc == 0x1D9038u) {
        ctx->pc = 0x1D9038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9034u;
        // 0x1d9038: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D903Cu;
        goto label_1d903c;
    }
    ctx->pc = 0x1D9034u;
    SET_GPR_U32(ctx, 31, 0x1D903Cu);
    ctx->pc = 0x1D9038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9034u;
    // 0x1d9038: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD40u;
    { ctx->pc = 0x1dcd40; return; }
    ctx->pc = 0x1D903Cu;
label_1d903c:
    // 0x1d903c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d903cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9040:
    // 0x1d9040: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d9040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d9044:
    // 0x1d9044: 0x1222fd8f  beq         $s1, $v0, . + 4 + (-0x271 << 2)
label_1d9048:
    if (ctx->pc == 0x1D9048u) {
        ctx->pc = 0x1D904Cu;
        goto label_1d904c;
    }
    ctx->pc = 0x1D9044u;
    {
        const bool branch_taken_0x1d9044 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9044) {
            ctx->pc = 0x1D8684u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d8684; return; }
        }
    }
    ctx->pc = 0x1D904Cu;
label_1d904c:
    // 0x1d904c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d904cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1d9050:
    // 0x1d9050: 0x1440fd8c  bnez        $v0, . + 4 + (-0x274 << 2)
label_1d9054:
    if (ctx->pc == 0x1D9054u) {
        ctx->pc = 0x1D9058u;
        goto label_1d9058;
    }
    ctx->pc = 0x1D9050u;
    {
        const bool branch_taken_0x1d9050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9050) {
            ctx->pc = 0x1D8684u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d8684; return; }
        }
    }
    ctx->pc = 0x1D9058u;
label_1d9058:
    // 0x1d9058: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d9058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1d905c:
    // 0x1d905c: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_1d9060:
    if (ctx->pc == 0x1D9060u) {
        ctx->pc = 0x1D9064u;
        goto label_1d9064;
    }
    ctx->pc = 0x1D905Cu;
    {
        const bool branch_taken_0x1d905c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d905c) {
            ctx->pc = 0x1D90ECu;
            { ctx->pc = 0x1d90ec; return; }
        }
    }
    ctx->pc = 0x1D9064u;
label_1d9064:
    // 0x1d9064: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d9064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d9068:
    // 0x1d9068: 0x16220020  bne         $s1, $v0, . + 4 + (0x20 << 2)
label_1d906c:
    if (ctx->pc == 0x1D906Cu) {
        ctx->pc = 0x1D9070u;
        goto label_1d9070;
    }
    ctx->pc = 0x1D9068u;
    {
        const bool branch_taken_0x1d9068 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d9068) {
            ctx->pc = 0x1D90ECu;
            { ctx->pc = 0x1d90ec; return; }
        }
    }
    ctx->pc = 0x1D9070u;
label_1d9070:
    // 0x1d9070: 0xc0569f0  jal         func_15A7C0
label_1d9074:
    if (ctx->pc == 0x1D9074u) {
        ctx->pc = 0x1D9078u;
        goto label_1d9078;
    }
    ctx->pc = 0x1D9070u;
    SET_GPR_U32(ctx, 31, 0x1D9078u);
    ctx->pc = 0x15A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A7C0u, 0x1D9070u, 0x1D9078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9078u;
label_1d9078:
    // 0x1d9078: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1d907c:
    if (ctx->pc == 0x1D907Cu) {
        ctx->pc = 0x1D9080u;
        goto label_1d9080;
    }
    ctx->pc = 0x1D9078u;
    {
        const bool branch_taken_0x1d9078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9078) {
            ctx->pc = 0x1D90ACu;
            goto label_1d90ac;
        }
    }
    ctx->pc = 0x1D9080u;
label_1d9080:
    // 0x1d9080: 0xc077814  jal         func_1DE050
label_1d9084:
    if (ctx->pc == 0x1D9084u) {
        ctx->pc = 0x1D9084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9080u;
        // 0x1d9084: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9088u;
        goto label_1d9088;
    }
    ctx->pc = 0x1D9080u;
    SET_GPR_U32(ctx, 31, 0x1D9088u);
    ctx->pc = 0x1D9084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9080u;
    // 0x1d9084: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE050u;
    { ctx->pc = 0x1de050; return; }
    ctx->pc = 0x1D9088u;
label_1d9088:
    // 0x1d9088: 0xc076a1c  jal         func_1DA870
label_1d908c:
    if (ctx->pc == 0x1D908Cu) {
        ctx->pc = 0x1D908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9088u;
        // 0x1d908c: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9090u;
        goto label_1d9090;
    }
    ctx->pc = 0x1D9088u;
    SET_GPR_U32(ctx, 31, 0x1D9090u);
    ctx->pc = 0x1D908Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9088u;
    // 0x1d908c: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA870u;
    { ctx->pc = 0x1da870; return; }
    ctx->pc = 0x1D9090u;
label_1d9090:
    // 0x1d9090: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d9090u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9094:
    // 0x1d9094: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d9094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d9098:
    // 0x1d9098: 0x1222fd7a  beq         $s1, $v0, . + 4 + (-0x286 << 2)
label_1d909c:
    if (ctx->pc == 0x1D909Cu) {
        ctx->pc = 0x1D90A0u;
        goto label_1d90a0;
    }
    ctx->pc = 0x1D9098u;
    {
        const bool branch_taken_0x1d9098 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9098) {
            ctx->pc = 0x1D8684u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d8684; return; }
        }
    }
    ctx->pc = 0x1D90A0u;
label_1d90a0:
    // 0x1d90a0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d90a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1d90a4:
    // 0x1d90a4: 0x1440fd77  bnez        $v0, . + 4 + (-0x289 << 2)
label_1d90a8:
    if (ctx->pc == 0x1D90A8u) {
        ctx->pc = 0x1D90ACu;
        goto label_1d90ac;
    }
    ctx->pc = 0x1D90A4u;
    {
        const bool branch_taken_0x1d90a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d90a4) {
            ctx->pc = 0x1D8684u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d8684; return; }
        }
    }
    ctx->pc = 0x1D90ACu;
label_1d90ac:
    // 0x1d90ac: 0x0  nop
    ctx->pc = 0x1d90acu;
    // NOP
label_1d90b0:
    // 0x1d90b0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d90b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d90b4:
    // 0x1d90b4: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
label_1d90b8:
    if (ctx->pc == 0x1D90B8u) {
        ctx->pc = 0x1D90BCu;
        goto label_1d90bc;
    }
    ctx->pc = 0x1D90B4u;
    {
        const bool branch_taken_0x1d90b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d90b4) {
            ctx->pc = 0x1D90ECu;
            { ctx->pc = 0x1d90ec; return; }
        }
    }
    ctx->pc = 0x1D90BCu;
label_1d90bc:
    // 0x1d90bc: 0xc077814  jal         func_1DE050
label_1d90c0:
    if (ctx->pc == 0x1D90C0u) {
        ctx->pc = 0x1D90C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D90BCu;
        // 0x1d90c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D90C4u;
        goto label_1d90c4;
    }
    ctx->pc = 0x1D90BCu;
    SET_GPR_U32(ctx, 31, 0x1D90C4u);
    ctx->pc = 0x1D90C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D90BCu;
    // 0x1d90c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE050u;
    { ctx->pc = 0x1de050; return; }
    ctx->pc = 0x1D90C4u;
label_1d90c4:
    // 0x1d90c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d90c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d90c8:
    // 0x1d90c8: 0xc077024  jal         func_1DC090
label_1d90cc:
    if (ctx->pc == 0x1D90CCu) {
        ctx->pc = 0x1D90CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D90C8u;
        // 0x1d90cc: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D90D0u;
        { ctx->pc = 0x1d90d0; return; }
    }
    ctx->pc = 0x1D90C8u;
    SET_GPR_U32(ctx, 31, 0x1D90D0u);
    ctx->pc = 0x1D90CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D90C8u;
    // 0x1d90cc: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC090u;
    { ctx->pc = 0x1dc090; return; }
    ctx->pc = 0x1D90D0u;
    ctx->pc = 0x1d90d0u;
    return;
}

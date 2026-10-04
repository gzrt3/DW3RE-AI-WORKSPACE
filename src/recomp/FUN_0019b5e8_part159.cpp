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

// Function: FUN_0019b5e8
// Address: 0x19b5e8 - 0x29b5f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b5e8_part159(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1e8848u: goto label_1e8848;
        case 0x1e884cu: goto label_1e884c;
        case 0x1e8850u: goto label_1e8850;
        case 0x1e8854u: goto label_1e8854;
        case 0x1e8858u: goto label_1e8858;
        case 0x1e885cu: goto label_1e885c;
        case 0x1e8860u: goto label_1e8860;
        case 0x1e8864u: goto label_1e8864;
        case 0x1e8868u: goto label_1e8868;
        case 0x1e886cu: goto label_1e886c;
        case 0x1e8870u: goto label_1e8870;
        case 0x1e8874u: goto label_1e8874;
        case 0x1e8878u: goto label_1e8878;
        case 0x1e887cu: goto label_1e887c;
        case 0x1e8880u: goto label_1e8880;
        case 0x1e8884u: goto label_1e8884;
        case 0x1e8888u: goto label_1e8888;
        case 0x1e888cu: goto label_1e888c;
        case 0x1e8890u: goto label_1e8890;
        case 0x1e8894u: goto label_1e8894;
        case 0x1e8898u: goto label_1e8898;
        case 0x1e889cu: goto label_1e889c;
        case 0x1e88a0u: goto label_1e88a0;
        case 0x1e88a4u: goto label_1e88a4;
        case 0x1e88a8u: goto label_1e88a8;
        case 0x1e88acu: goto label_1e88ac;
        case 0x1e88b0u: goto label_1e88b0;
        case 0x1e88b4u: goto label_1e88b4;
        case 0x1e88b8u: goto label_1e88b8;
        case 0x1e88bcu: goto label_1e88bc;
        case 0x1e88c0u: goto label_1e88c0;
        case 0x1e88c4u: goto label_1e88c4;
        case 0x1e88c8u: goto label_1e88c8;
        case 0x1e88ccu: goto label_1e88cc;
        case 0x1e88d0u: goto label_1e88d0;
        case 0x1e88d4u: goto label_1e88d4;
        case 0x1e88d8u: goto label_1e88d8;
        case 0x1e88dcu: goto label_1e88dc;
        case 0x1e88e0u: goto label_1e88e0;
        case 0x1e88e4u: goto label_1e88e4;
        case 0x1e88e8u: goto label_1e88e8;
        case 0x1e88ecu: goto label_1e88ec;
        case 0x1e88f0u: goto label_1e88f0;
        case 0x1e88f4u: goto label_1e88f4;
        case 0x1e88f8u: goto label_1e88f8;
        case 0x1e88fcu: goto label_1e88fc;
        case 0x1e8900u: goto label_1e8900;
        case 0x1e8904u: goto label_1e8904;
        case 0x1e8908u: goto label_1e8908;
        case 0x1e890cu: goto label_1e890c;
        case 0x1e8910u: goto label_1e8910;
        case 0x1e8914u: goto label_1e8914;
        case 0x1e8918u: goto label_1e8918;
        case 0x1e891cu: goto label_1e891c;
        case 0x1e8920u: goto label_1e8920;
        case 0x1e8924u: goto label_1e8924;
        case 0x1e8928u: goto label_1e8928;
        case 0x1e892cu: goto label_1e892c;
        case 0x1e8930u: goto label_1e8930;
        case 0x1e8934u: goto label_1e8934;
        case 0x1e8938u: goto label_1e8938;
        case 0x1e893cu: goto label_1e893c;
        case 0x1e8940u: goto label_1e8940;
        case 0x1e8944u: goto label_1e8944;
        case 0x1e8948u: goto label_1e8948;
        case 0x1e894cu: goto label_1e894c;
        case 0x1e8950u: goto label_1e8950;
        case 0x1e8954u: goto label_1e8954;
        case 0x1e8958u: goto label_1e8958;
        case 0x1e895cu: goto label_1e895c;
        case 0x1e8960u: goto label_1e8960;
        case 0x1e8964u: goto label_1e8964;
        case 0x1e8968u: goto label_1e8968;
        case 0x1e896cu: goto label_1e896c;
        case 0x1e8970u: goto label_1e8970;
        case 0x1e8974u: goto label_1e8974;
        case 0x1e8978u: goto label_1e8978;
        case 0x1e897cu: goto label_1e897c;
        case 0x1e8980u: goto label_1e8980;
        case 0x1e8984u: goto label_1e8984;
        case 0x1e8988u: goto label_1e8988;
        case 0x1e898cu: goto label_1e898c;
        case 0x1e8990u: goto label_1e8990;
        case 0x1e8994u: goto label_1e8994;
        case 0x1e8998u: goto label_1e8998;
        case 0x1e899cu: goto label_1e899c;
        case 0x1e89a0u: goto label_1e89a0;
        case 0x1e89a4u: goto label_1e89a4;
        case 0x1e89a8u: goto label_1e89a8;
        case 0x1e89acu: goto label_1e89ac;
        case 0x1e89b0u: goto label_1e89b0;
        case 0x1e89b4u: goto label_1e89b4;
        case 0x1e89b8u: goto label_1e89b8;
        case 0x1e89bcu: goto label_1e89bc;
        case 0x1e89c0u: goto label_1e89c0;
        case 0x1e89c4u: goto label_1e89c4;
        case 0x1e89c8u: goto label_1e89c8;
        case 0x1e89ccu: goto label_1e89cc;
        case 0x1e89d0u: goto label_1e89d0;
        case 0x1e89d4u: goto label_1e89d4;
        case 0x1e89d8u: goto label_1e89d8;
        case 0x1e89dcu: goto label_1e89dc;
        case 0x1e89e0u: goto label_1e89e0;
        case 0x1e89e4u: goto label_1e89e4;
        case 0x1e89e8u: goto label_1e89e8;
        case 0x1e89ecu: goto label_1e89ec;
        case 0x1e89f0u: goto label_1e89f0;
        case 0x1e89f4u: goto label_1e89f4;
        case 0x1e89f8u: goto label_1e89f8;
        case 0x1e89fcu: goto label_1e89fc;
        case 0x1e8a00u: goto label_1e8a00;
        case 0x1e8a04u: goto label_1e8a04;
        case 0x1e8a08u: goto label_1e8a08;
        case 0x1e8a0cu: goto label_1e8a0c;
        case 0x1e8a10u: goto label_1e8a10;
        case 0x1e8a14u: goto label_1e8a14;
        case 0x1e8a18u: goto label_1e8a18;
        case 0x1e8a1cu: goto label_1e8a1c;
        case 0x1e8a20u: goto label_1e8a20;
        case 0x1e8a24u: goto label_1e8a24;
        case 0x1e8a28u: goto label_1e8a28;
        case 0x1e8a2cu: goto label_1e8a2c;
        case 0x1e8a30u: goto label_1e8a30;
        case 0x1e8a34u: goto label_1e8a34;
        case 0x1e8a38u: goto label_1e8a38;
        case 0x1e8a3cu: goto label_1e8a3c;
        case 0x1e8a40u: goto label_1e8a40;
        case 0x1e8a44u: goto label_1e8a44;
        case 0x1e8a48u: goto label_1e8a48;
        case 0x1e8a4cu: goto label_1e8a4c;
        case 0x1e8a50u: goto label_1e8a50;
        case 0x1e8a54u: goto label_1e8a54;
        case 0x1e8a58u: goto label_1e8a58;
        case 0x1e8a5cu: goto label_1e8a5c;
        case 0x1e8a60u: goto label_1e8a60;
        case 0x1e8a64u: goto label_1e8a64;
        case 0x1e8a68u: goto label_1e8a68;
        case 0x1e8a6cu: goto label_1e8a6c;
        case 0x1e8a70u: goto label_1e8a70;
        case 0x1e8a74u: goto label_1e8a74;
        case 0x1e8a78u: goto label_1e8a78;
        case 0x1e8a7cu: goto label_1e8a7c;
        case 0x1e8a80u: goto label_1e8a80;
        case 0x1e8a84u: goto label_1e8a84;
        case 0x1e8a88u: goto label_1e8a88;
        case 0x1e8a8cu: goto label_1e8a8c;
        case 0x1e8a90u: goto label_1e8a90;
        case 0x1e8a94u: goto label_1e8a94;
        case 0x1e8a98u: goto label_1e8a98;
        case 0x1e8a9cu: goto label_1e8a9c;
        case 0x1e8aa0u: goto label_1e8aa0;
        case 0x1e8aa4u: goto label_1e8aa4;
        case 0x1e8aa8u: goto label_1e8aa8;
        case 0x1e8aacu: goto label_1e8aac;
        case 0x1e8ab0u: goto label_1e8ab0;
        case 0x1e8ab4u: goto label_1e8ab4;
        case 0x1e8ab8u: goto label_1e8ab8;
        case 0x1e8abcu: goto label_1e8abc;
        case 0x1e8ac0u: goto label_1e8ac0;
        case 0x1e8ac4u: goto label_1e8ac4;
        case 0x1e8ac8u: goto label_1e8ac8;
        case 0x1e8accu: goto label_1e8acc;
        case 0x1e8ad0u: goto label_1e8ad0;
        case 0x1e8ad4u: goto label_1e8ad4;
        case 0x1e8ad8u: goto label_1e8ad8;
        case 0x1e8adcu: goto label_1e8adc;
        case 0x1e8ae0u: goto label_1e8ae0;
        case 0x1e8ae4u: goto label_1e8ae4;
        case 0x1e8ae8u: goto label_1e8ae8;
        case 0x1e8aecu: goto label_1e8aec;
        case 0x1e8af0u: goto label_1e8af0;
        case 0x1e8af4u: goto label_1e8af4;
        case 0x1e8af8u: goto label_1e8af8;
        case 0x1e8afcu: goto label_1e8afc;
        case 0x1e8b00u: goto label_1e8b00;
        case 0x1e8b04u: goto label_1e8b04;
        case 0x1e8b08u: goto label_1e8b08;
        case 0x1e8b0cu: goto label_1e8b0c;
        case 0x1e8b10u: goto label_1e8b10;
        case 0x1e8b14u: goto label_1e8b14;
        case 0x1e8b18u: goto label_1e8b18;
        case 0x1e8b1cu: goto label_1e8b1c;
        case 0x1e8b20u: goto label_1e8b20;
        case 0x1e8b24u: goto label_1e8b24;
        case 0x1e8b28u: goto label_1e8b28;
        case 0x1e8b2cu: goto label_1e8b2c;
        case 0x1e8b30u: goto label_1e8b30;
        case 0x1e8b34u: goto label_1e8b34;
        case 0x1e8b38u: goto label_1e8b38;
        case 0x1e8b3cu: goto label_1e8b3c;
        case 0x1e8b40u: goto label_1e8b40;
        case 0x1e8b44u: goto label_1e8b44;
        case 0x1e8b48u: goto label_1e8b48;
        case 0x1e8b4cu: goto label_1e8b4c;
        case 0x1e8b50u: goto label_1e8b50;
        case 0x1e8b54u: goto label_1e8b54;
        case 0x1e8b58u: goto label_1e8b58;
        case 0x1e8b5cu: goto label_1e8b5c;
        case 0x1e8b60u: goto label_1e8b60;
        case 0x1e8b64u: goto label_1e8b64;
        case 0x1e8b68u: goto label_1e8b68;
        case 0x1e8b6cu: goto label_1e8b6c;
        case 0x1e8b70u: goto label_1e8b70;
        case 0x1e8b74u: goto label_1e8b74;
        case 0x1e8b78u: goto label_1e8b78;
        case 0x1e8b7cu: goto label_1e8b7c;
        case 0x1e8b80u: goto label_1e8b80;
        case 0x1e8b84u: goto label_1e8b84;
        case 0x1e8b88u: goto label_1e8b88;
        case 0x1e8b8cu: goto label_1e8b8c;
        case 0x1e8b90u: goto label_1e8b90;
        case 0x1e8b94u: goto label_1e8b94;
        case 0x1e8b98u: goto label_1e8b98;
        case 0x1e8b9cu: goto label_1e8b9c;
        case 0x1e8ba0u: goto label_1e8ba0;
        case 0x1e8ba4u: goto label_1e8ba4;
        case 0x1e8ba8u: goto label_1e8ba8;
        case 0x1e8bacu: goto label_1e8bac;
        case 0x1e8bb0u: goto label_1e8bb0;
        case 0x1e8bb4u: goto label_1e8bb4;
        case 0x1e8bb8u: goto label_1e8bb8;
        case 0x1e8bbcu: goto label_1e8bbc;
        case 0x1e8bc0u: goto label_1e8bc0;
        case 0x1e8bc4u: goto label_1e8bc4;
        case 0x1e8bc8u: goto label_1e8bc8;
        case 0x1e8bccu: goto label_1e8bcc;
        case 0x1e8bd0u: goto label_1e8bd0;
        case 0x1e8bd4u: goto label_1e8bd4;
        case 0x1e8bd8u: goto label_1e8bd8;
        case 0x1e8bdcu: goto label_1e8bdc;
        case 0x1e8be0u: goto label_1e8be0;
        case 0x1e8be4u: goto label_1e8be4;
        case 0x1e8be8u: goto label_1e8be8;
        case 0x1e8becu: goto label_1e8bec;
        case 0x1e8bf0u: goto label_1e8bf0;
        case 0x1e8bf4u: goto label_1e8bf4;
        case 0x1e8bf8u: goto label_1e8bf8;
        case 0x1e8bfcu: goto label_1e8bfc;
        case 0x1e8c00u: goto label_1e8c00;
        case 0x1e8c04u: goto label_1e8c04;
        case 0x1e8c08u: goto label_1e8c08;
        case 0x1e8c0cu: goto label_1e8c0c;
        case 0x1e8c10u: goto label_1e8c10;
        case 0x1e8c14u: goto label_1e8c14;
        case 0x1e8c18u: goto label_1e8c18;
        case 0x1e8c1cu: goto label_1e8c1c;
        case 0x1e8c20u: goto label_1e8c20;
        case 0x1e8c24u: goto label_1e8c24;
        case 0x1e8c28u: goto label_1e8c28;
        case 0x1e8c2cu: goto label_1e8c2c;
        case 0x1e8c30u: goto label_1e8c30;
        case 0x1e8c34u: goto label_1e8c34;
        case 0x1e8c38u: goto label_1e8c38;
        case 0x1e8c3cu: goto label_1e8c3c;
        case 0x1e8c40u: goto label_1e8c40;
        case 0x1e8c44u: goto label_1e8c44;
        case 0x1e8c48u: goto label_1e8c48;
        case 0x1e8c4cu: goto label_1e8c4c;
        case 0x1e8c50u: goto label_1e8c50;
        case 0x1e8c54u: goto label_1e8c54;
        case 0x1e8c58u: goto label_1e8c58;
        case 0x1e8c5cu: goto label_1e8c5c;
        case 0x1e8c60u: goto label_1e8c60;
        case 0x1e8c64u: goto label_1e8c64;
        case 0x1e8c68u: goto label_1e8c68;
        case 0x1e8c6cu: goto label_1e8c6c;
        case 0x1e8c70u: goto label_1e8c70;
        case 0x1e8c74u: goto label_1e8c74;
        case 0x1e8c78u: goto label_1e8c78;
        case 0x1e8c7cu: goto label_1e8c7c;
        case 0x1e8c80u: goto label_1e8c80;
        case 0x1e8c84u: goto label_1e8c84;
        case 0x1e8c88u: goto label_1e8c88;
        case 0x1e8c8cu: goto label_1e8c8c;
        case 0x1e8c90u: goto label_1e8c90;
        case 0x1e8c94u: goto label_1e8c94;
        case 0x1e8c98u: goto label_1e8c98;
        case 0x1e8c9cu: goto label_1e8c9c;
        case 0x1e8ca0u: goto label_1e8ca0;
        case 0x1e8ca4u: goto label_1e8ca4;
        case 0x1e8ca8u: goto label_1e8ca8;
        case 0x1e8cacu: goto label_1e8cac;
        case 0x1e8cb0u: goto label_1e8cb0;
        case 0x1e8cb4u: goto label_1e8cb4;
        case 0x1e8cb8u: goto label_1e8cb8;
        case 0x1e8cbcu: goto label_1e8cbc;
        case 0x1e8cc0u: goto label_1e8cc0;
        case 0x1e8cc4u: goto label_1e8cc4;
        case 0x1e8cc8u: goto label_1e8cc8;
        case 0x1e8cccu: goto label_1e8ccc;
        case 0x1e8cd0u: goto label_1e8cd0;
        case 0x1e8cd4u: goto label_1e8cd4;
        case 0x1e8cd8u: goto label_1e8cd8;
        case 0x1e8cdcu: goto label_1e8cdc;
        case 0x1e8ce0u: goto label_1e8ce0;
        case 0x1e8ce4u: goto label_1e8ce4;
        case 0x1e8ce8u: goto label_1e8ce8;
        case 0x1e8cecu: goto label_1e8cec;
        case 0x1e8cf0u: goto label_1e8cf0;
        case 0x1e8cf4u: goto label_1e8cf4;
        case 0x1e8cf8u: goto label_1e8cf8;
        case 0x1e8cfcu: goto label_1e8cfc;
        case 0x1e8d00u: goto label_1e8d00;
        case 0x1e8d04u: goto label_1e8d04;
        case 0x1e8d08u: goto label_1e8d08;
        case 0x1e8d0cu: goto label_1e8d0c;
        case 0x1e8d10u: goto label_1e8d10;
        case 0x1e8d14u: goto label_1e8d14;
        case 0x1e8d18u: goto label_1e8d18;
        case 0x1e8d1cu: goto label_1e8d1c;
        case 0x1e8d20u: goto label_1e8d20;
        case 0x1e8d24u: goto label_1e8d24;
        case 0x1e8d28u: goto label_1e8d28;
        case 0x1e8d2cu: goto label_1e8d2c;
        case 0x1e8d30u: goto label_1e8d30;
        case 0x1e8d34u: goto label_1e8d34;
        case 0x1e8d38u: goto label_1e8d38;
        case 0x1e8d3cu: goto label_1e8d3c;
        case 0x1e8d40u: goto label_1e8d40;
        case 0x1e8d44u: goto label_1e8d44;
        case 0x1e8d48u: goto label_1e8d48;
        case 0x1e8d4cu: goto label_1e8d4c;
        case 0x1e8d50u: goto label_1e8d50;
        case 0x1e8d54u: goto label_1e8d54;
        case 0x1e8d58u: goto label_1e8d58;
        case 0x1e8d5cu: goto label_1e8d5c;
        case 0x1e8d60u: goto label_1e8d60;
        case 0x1e8d64u: goto label_1e8d64;
        case 0x1e8d68u: goto label_1e8d68;
        case 0x1e8d6cu: goto label_1e8d6c;
        case 0x1e8d70u: goto label_1e8d70;
        case 0x1e8d74u: goto label_1e8d74;
        case 0x1e8d78u: goto label_1e8d78;
        case 0x1e8d7cu: goto label_1e8d7c;
        case 0x1e8d80u: goto label_1e8d80;
        case 0x1e8d84u: goto label_1e8d84;
        case 0x1e8d88u: goto label_1e8d88;
        case 0x1e8d8cu: goto label_1e8d8c;
        case 0x1e8d90u: goto label_1e8d90;
        case 0x1e8d94u: goto label_1e8d94;
        case 0x1e8d98u: goto label_1e8d98;
        case 0x1e8d9cu: goto label_1e8d9c;
        case 0x1e8da0u: goto label_1e8da0;
        case 0x1e8da4u: goto label_1e8da4;
        case 0x1e8da8u: goto label_1e8da8;
        case 0x1e8dacu: goto label_1e8dac;
        case 0x1e8db0u: goto label_1e8db0;
        case 0x1e8db4u: goto label_1e8db4;
        case 0x1e8db8u: goto label_1e8db8;
        case 0x1e8dbcu: goto label_1e8dbc;
        case 0x1e8dc0u: goto label_1e8dc0;
        case 0x1e8dc4u: goto label_1e8dc4;
        case 0x1e8dc8u: goto label_1e8dc8;
        case 0x1e8dccu: goto label_1e8dcc;
        case 0x1e8dd0u: goto label_1e8dd0;
        case 0x1e8dd4u: goto label_1e8dd4;
        case 0x1e8dd8u: goto label_1e8dd8;
        case 0x1e8ddcu: goto label_1e8ddc;
        case 0x1e8de0u: goto label_1e8de0;
        case 0x1e8de4u: goto label_1e8de4;
        case 0x1e8de8u: goto label_1e8de8;
        case 0x1e8decu: goto label_1e8dec;
        case 0x1e8df0u: goto label_1e8df0;
        case 0x1e8df4u: goto label_1e8df4;
        case 0x1e8df8u: goto label_1e8df8;
        case 0x1e8dfcu: goto label_1e8dfc;
        case 0x1e8e00u: goto label_1e8e00;
        case 0x1e8e04u: goto label_1e8e04;
        case 0x1e8e08u: goto label_1e8e08;
        case 0x1e8e0cu: goto label_1e8e0c;
        case 0x1e8e10u: goto label_1e8e10;
        case 0x1e8e14u: goto label_1e8e14;
        case 0x1e8e18u: goto label_1e8e18;
        case 0x1e8e1cu: goto label_1e8e1c;
        case 0x1e8e20u: goto label_1e8e20;
        case 0x1e8e24u: goto label_1e8e24;
        case 0x1e8e28u: goto label_1e8e28;
        case 0x1e8e2cu: goto label_1e8e2c;
        case 0x1e8e30u: goto label_1e8e30;
        case 0x1e8e34u: goto label_1e8e34;
        case 0x1e8e38u: goto label_1e8e38;
        case 0x1e8e3cu: goto label_1e8e3c;
        case 0x1e8e40u: goto label_1e8e40;
        case 0x1e8e44u: goto label_1e8e44;
        case 0x1e8e48u: goto label_1e8e48;
        case 0x1e8e4cu: goto label_1e8e4c;
        case 0x1e8e50u: goto label_1e8e50;
        case 0x1e8e54u: goto label_1e8e54;
        case 0x1e8e58u: goto label_1e8e58;
        case 0x1e8e5cu: goto label_1e8e5c;
        case 0x1e8e60u: goto label_1e8e60;
        case 0x1e8e64u: goto label_1e8e64;
        case 0x1e8e68u: goto label_1e8e68;
        case 0x1e8e6cu: goto label_1e8e6c;
        case 0x1e8e70u: goto label_1e8e70;
        case 0x1e8e74u: goto label_1e8e74;
        case 0x1e8e78u: goto label_1e8e78;
        case 0x1e8e7cu: goto label_1e8e7c;
        case 0x1e8e80u: goto label_1e8e80;
        case 0x1e8e84u: goto label_1e8e84;
        case 0x1e8e88u: goto label_1e8e88;
        case 0x1e8e8cu: goto label_1e8e8c;
        case 0x1e8e90u: goto label_1e8e90;
        case 0x1e8e94u: goto label_1e8e94;
        case 0x1e8e98u: goto label_1e8e98;
        case 0x1e8e9cu: goto label_1e8e9c;
        case 0x1e8ea0u: goto label_1e8ea0;
        case 0x1e8ea4u: goto label_1e8ea4;
        case 0x1e8ea8u: goto label_1e8ea8;
        case 0x1e8eacu: goto label_1e8eac;
        case 0x1e8eb0u: goto label_1e8eb0;
        case 0x1e8eb4u: goto label_1e8eb4;
        case 0x1e8eb8u: goto label_1e8eb8;
        case 0x1e8ebcu: goto label_1e8ebc;
        case 0x1e8ec0u: goto label_1e8ec0;
        case 0x1e8ec4u: goto label_1e8ec4;
        case 0x1e8ec8u: goto label_1e8ec8;
        case 0x1e8eccu: goto label_1e8ecc;
        case 0x1e8ed0u: goto label_1e8ed0;
        case 0x1e8ed4u: goto label_1e8ed4;
        case 0x1e8ed8u: goto label_1e8ed8;
        case 0x1e8edcu: goto label_1e8edc;
        case 0x1e8ee0u: goto label_1e8ee0;
        case 0x1e8ee4u: goto label_1e8ee4;
        case 0x1e8ee8u: goto label_1e8ee8;
        case 0x1e8eecu: goto label_1e8eec;
        case 0x1e8ef0u: goto label_1e8ef0;
        case 0x1e8ef4u: goto label_1e8ef4;
        case 0x1e8ef8u: goto label_1e8ef8;
        case 0x1e8efcu: goto label_1e8efc;
        case 0x1e8f00u: goto label_1e8f00;
        case 0x1e8f04u: goto label_1e8f04;
        case 0x1e8f08u: goto label_1e8f08;
        case 0x1e8f0cu: goto label_1e8f0c;
        case 0x1e8f10u: goto label_1e8f10;
        case 0x1e8f14u: goto label_1e8f14;
        case 0x1e8f18u: goto label_1e8f18;
        case 0x1e8f1cu: goto label_1e8f1c;
        case 0x1e8f20u: goto label_1e8f20;
        case 0x1e8f24u: goto label_1e8f24;
        case 0x1e8f28u: goto label_1e8f28;
        case 0x1e8f2cu: goto label_1e8f2c;
        case 0x1e8f30u: goto label_1e8f30;
        case 0x1e8f34u: goto label_1e8f34;
        case 0x1e8f38u: goto label_1e8f38;
        case 0x1e8f3cu: goto label_1e8f3c;
        case 0x1e8f40u: goto label_1e8f40;
        case 0x1e8f44u: goto label_1e8f44;
        case 0x1e8f48u: goto label_1e8f48;
        case 0x1e8f4cu: goto label_1e8f4c;
        case 0x1e8f50u: goto label_1e8f50;
        case 0x1e8f54u: goto label_1e8f54;
        case 0x1e8f58u: goto label_1e8f58;
        case 0x1e8f5cu: goto label_1e8f5c;
        case 0x1e8f60u: goto label_1e8f60;
        case 0x1e8f64u: goto label_1e8f64;
        case 0x1e8f68u: goto label_1e8f68;
        case 0x1e8f6cu: goto label_1e8f6c;
        case 0x1e8f70u: goto label_1e8f70;
        case 0x1e8f74u: goto label_1e8f74;
        case 0x1e8f78u: goto label_1e8f78;
        case 0x1e8f7cu: goto label_1e8f7c;
        case 0x1e8f80u: goto label_1e8f80;
        case 0x1e8f84u: goto label_1e8f84;
        case 0x1e8f88u: goto label_1e8f88;
        case 0x1e8f8cu: goto label_1e8f8c;
        case 0x1e8f90u: goto label_1e8f90;
        case 0x1e8f94u: goto label_1e8f94;
        case 0x1e8f98u: goto label_1e8f98;
        case 0x1e8f9cu: goto label_1e8f9c;
        case 0x1e8fa0u: goto label_1e8fa0;
        case 0x1e8fa4u: goto label_1e8fa4;
        case 0x1e8fa8u: goto label_1e8fa8;
        case 0x1e8facu: goto label_1e8fac;
        case 0x1e8fb0u: goto label_1e8fb0;
        case 0x1e8fb4u: goto label_1e8fb4;
        case 0x1e8fb8u: goto label_1e8fb8;
        case 0x1e8fbcu: goto label_1e8fbc;
        case 0x1e8fc0u: goto label_1e8fc0;
        case 0x1e8fc4u: goto label_1e8fc4;
        case 0x1e8fc8u: goto label_1e8fc8;
        case 0x1e8fccu: goto label_1e8fcc;
        case 0x1e8fd0u: goto label_1e8fd0;
        case 0x1e8fd4u: goto label_1e8fd4;
        case 0x1e8fd8u: goto label_1e8fd8;
        case 0x1e8fdcu: goto label_1e8fdc;
        case 0x1e8fe0u: goto label_1e8fe0;
        case 0x1e8fe4u: goto label_1e8fe4;
        case 0x1e8fe8u: goto label_1e8fe8;
        case 0x1e8fecu: goto label_1e8fec;
        case 0x1e8ff0u: goto label_1e8ff0;
        case 0x1e8ff4u: goto label_1e8ff4;
        case 0x1e8ff8u: goto label_1e8ff8;
        case 0x1e8ffcu: goto label_1e8ffc;
        case 0x1e9000u: goto label_1e9000;
        case 0x1e9004u: goto label_1e9004;
        case 0x1e9008u: goto label_1e9008;
        case 0x1e900cu: goto label_1e900c;
        case 0x1e9010u: goto label_1e9010;
        case 0x1e9014u: goto label_1e9014;
        default: return;
    }

label_1e8848:
    // 0x1e8848: 0x1000000c  b           . + 4 + (0xC << 2)
label_1e884c:
    if (ctx->pc == 0x1E884Cu) {
        ctx->pc = 0x1E884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8848u;
        // 0x1e884c: 0xad430000  sw          $v1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8850u;
        goto label_1e8850;
    }
    ctx->pc = 0x1E8848u;
    {
        const bool branch_taken_0x1e8848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8848u;
        // 0x1e884c: 0xad430000  sw          $v1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8848) {
            ctx->pc = 0x1E887Cu;
            goto label_1e887c;
        }
    }
    ctx->pc = 0x1E8850u;
label_1e8850:
    // 0x1e8850: 0x692823  subu        $a1, $v1, $t1
    ctx->pc = 0x1e8850u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1e8854:
    // 0x1e8854: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
label_1e8858:
    if (ctx->pc == 0x1E8858u) {
        ctx->pc = 0x1E885Cu;
        goto label_1e885c;
    }
    ctx->pc = 0x1E8854u;
    {
        const bool branch_taken_0x1e8854 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x1e8854) {
            ctx->pc = 0x1E8864u;
            goto label_1e8864;
        }
    }
    ctx->pc = 0x1E885Cu;
label_1e885c:
    // 0x1e885c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e8860:
    if (ctx->pc == 0x1E8860u) {
        ctx->pc = 0x1E8864u;
        goto label_1e8864;
    }
    ctx->pc = 0x1E885Cu;
    {
        const bool branch_taken_0x1e885c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e885c) {
            ctx->pc = 0x1E886Cu;
            goto label_1e886c;
        }
    }
    ctx->pc = 0x1E8864u;
label_1e8864:
    // 0x1e8864: 0x0  nop
    ctx->pc = 0x1e8864u;
    // NOP
label_1e8868:
    // 0x1e8868: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e8868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e886c:
    // 0x1e886c: 0x0  nop
    ctx->pc = 0x1e886cu;
    // NOP
label_1e8870:
    // 0x1e8870: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1e8870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1e8874:
    // 0x1e8874: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1e8874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1e8878:
    // 0x1e8878: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x1e8878u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
label_1e887c:
    // 0x1e887c: 0x0  nop
    ctx->pc = 0x1e887cu;
    // NOP
label_1e8880:
    // 0x1e8880: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e8880u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1e8884:
    // 0x1e8884: 0x28e30003  slti        $v1, $a3, 0x3
    ctx->pc = 0x1e8884u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
label_1e8888:
    // 0x1e8888: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
label_1e888c:
    if (ctx->pc == 0x1E888Cu) {
        ctx->pc = 0x1E888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8888u;
        // 0x1e888c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8890u;
        goto label_1e8890;
    }
    ctx->pc = 0x1E8888u;
    {
        const bool branch_taken_0x1e8888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8888u;
        // 0x1e888c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8888) {
            ctx->pc = 0x1E87F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1e87f0; return; }
        }
    }
    ctx->pc = 0x1E8890u;
label_1e8890:
    // 0x1e8890: 0x3e00008  jr          $ra
label_1e8894:
    if (ctx->pc == 0x1E8894u) {
        ctx->pc = 0x1E8894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8890u;
        // 0x1e8894: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8898u;
        goto label_1e8898;
    }
    ctx->pc = 0x1E8890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8890u;
        // 0x1e8894: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8898u;
label_1e8898:
    // 0x1e8898: 0x0  nop
    ctx->pc = 0x1e8898u;
    // NOP
label_1e889c:
    // 0x1e889c: 0x0  nop
    ctx->pc = 0x1e889cu;
    // NOP
label_1e88a0:
    // 0x1e88a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e88a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1e88a4:
    // 0x1e88a4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1e88a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1e88a8:
    // 0x1e88a8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e88a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1e88ac:
    // 0x1e88ac: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1e88acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1e88b0:
    // 0x1e88b0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1e88b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1e88b4:
    // 0x1e88b4: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x1e88b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1e88b8:
    // 0x1e88b8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1e88b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1e88bc:
    // 0x1e88bc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e88bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1e88c0:
    // 0x1e88c0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e88c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1e88c4:
    // 0x1e88c4: 0xaf808e58  sw          $zero, -0x71A8($gp)
    ctx->pc = 0x1e88c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938200), GPR_U32(ctx, 0));
label_1e88c8:
    // 0x1e88c8: 0xc07091c  jal         func_1C2470
label_1e88cc:
    if (ctx->pc == 0x1E88CCu) {
        ctx->pc = 0x1E88CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E88C8u;
        // 0x1e88cc: 0xaf808e54  sw          $zero, -0x71AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E88D0u;
        goto label_1e88d0;
    }
    ctx->pc = 0x1E88C8u;
    SET_GPR_U32(ctx, 31, 0x1E88D0u);
    ctx->pc = 0x1E88CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E88C8u;
    // 0x1e88cc: 0xaf808e54  sw          $zero, -0x71AC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938196), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x1E88D0u;
label_1e88d0:
    // 0x1e88d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e88d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e88d4:
    // 0x1e88d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e88d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e88d8:
    // 0x1e88d8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e88d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e88dc:
    // 0x1e88dc: 0x27828e60  addiu       $v0, $gp, -0x71A0
    ctx->pc = 0x1e88dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938208));
label_1e88e0:
    // 0x1e88e0: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x1e88e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_1e88e4:
    // 0x1e88e4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e88e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e88e8:
    // 0x1e88e8: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1e88e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e88ec:
    // 0x1e88ec: 0xc05e234  jal         func_1788D0
label_1e88f0:
    if (ctx->pc == 0x1E88F0u) {
        ctx->pc = 0x1E88F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E88ECu;
        // 0x1e88f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E88F4u;
        goto label_1e88f4;
    }
    ctx->pc = 0x1E88ECu;
    SET_GPR_U32(ctx, 31, 0x1E88F4u);
    ctx->pc = 0x1E88F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E88ECu;
    // 0x1e88f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1E88ECu, 0x1E88F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E88F4u;
label_1e88f4:
    // 0x1e88f4: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1e88f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1e88f8:
    // 0x1e88f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e88f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e88fc:
    // 0x1e88fc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e88fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1e8900:
    // 0x1e8900: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1e8900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1e8904:
    // 0x1e8904: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1e8904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1e8908:
    // 0x1e8908: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e8908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e890c:
    // 0x1e890c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e890cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e8910:
    // 0x1e8910: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e8910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e8914:
    // 0x1e8914: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e8914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e8918:
    // 0x1e8918: 0x24060228  addiu       $a2, $zero, 0x228
    ctx->pc = 0x1e8918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_1e891c:
    // 0x1e891c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1e891cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e8920:
    // 0x1e8920: 0x240803e8  addiu       $t0, $zero, 0x3E8
    ctx->pc = 0x1e8920u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_1e8924:
    // 0x1e8924: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e8924u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8928:
    // 0x1e8928: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e8928u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e892c:
    // 0x1e892c: 0xc05de30  jal         func_1778C0
label_1e8930:
    if (ctx->pc == 0x1E8930u) {
        ctx->pc = 0x1E8930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E892Cu;
        // 0x1e8930: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8934u;
        goto label_1e8934;
    }
    ctx->pc = 0x1E892Cu;
    SET_GPR_U32(ctx, 31, 0x1E8934u);
    ctx->pc = 0x1E8930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E892Cu;
    // 0x1e8930: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E892Cu, 0x1E8934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8934u;
label_1e8934:
    // 0x1e8934: 0x264400b0  addiu       $a0, $s2, 0xB0
    ctx->pc = 0x1e8934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
label_1e8938:
    // 0x1e8938: 0x240501d8  addiu       $a1, $zero, 0x1D8
    ctx->pc = 0x1e8938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 472));
label_1e893c:
    // 0x1e893c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1e893cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1e8940:
    // 0x1e8940: 0x240703e8  addiu       $a3, $zero, 0x3E8
    ctx->pc = 0x1e8940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_1e8944:
    // 0x1e8944: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x1e8944u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_1e8948:
    // 0x1e8948: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x1e8948u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1e894c:
    // 0x1e894c: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1e894cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e8950:
    // 0x1e8950: 0xc05e060  jal         func_178180
label_1e8954:
    if (ctx->pc == 0x1E8954u) {
        ctx->pc = 0x1E8954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8950u;
        // 0x1e8954: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8958u;
        goto label_1e8958;
    }
    ctx->pc = 0x1E8950u;
    SET_GPR_U32(ctx, 31, 0x1E8958u);
    ctx->pc = 0x1E8954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8950u;
    // 0x1e8954: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178180u, 0x1E8950u, 0x1E8958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8958u;
label_1e8958:
    // 0x1e8958: 0x964d0120  lhu         $t5, 0x120($s2)
    ctx->pc = 0x1e8958u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 288)));
label_1e895c:
    // 0x1e895c: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x1e895cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1e8960:
    // 0x1e8960: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x1e8960u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_1e8964:
    // 0x1e8964: 0x3c0c3f80  lui         $t4, 0x3F80
    ctx->pc = 0x1e8964u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16256 << 16));
label_1e8968:
    // 0x1e8968: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e8968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e896c:
    // 0x1e896c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1e896cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e8970:
    // 0x1e8970: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1e8970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1e8974:
    // 0x1e8974: 0x26440160  addiu       $a0, $s2, 0x160
    ctx->pc = 0x1e8974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
label_1e8978:
    // 0x1e8978: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e8978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e897c:
    // 0x1e897c: 0x240601f0  addiu       $a2, $zero, 0x1F0
    ctx->pc = 0x1e897cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
label_1e8980:
    // 0x1e8980: 0x240803e8  addiu       $t0, $zero, 0x3E8
    ctx->pc = 0x1e8980u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_1e8984:
    // 0x1e8984: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x1e8984u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1e8988:
    // 0x1e8988: 0x25ad0180  addiu       $t5, $t5, 0x180
    ctx->pc = 0x1e8988u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 384));
label_1e898c:
    // 0x1e898c: 0x256bcf48  addiu       $t3, $t3, -0x30B8
    ctx->pc = 0x1e898cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294954824));
label_1e8990:
    // 0x1e8990: 0xa64d0120  sh          $t5, 0x120($s2)
    ctx->pc = 0x1e8990u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 288), (uint16_t)GPR_U32(ctx, 13));
label_1e8994:
    // 0x1e8994: 0x964d0130  lhu         $t5, 0x130($s2)
    ctx->pc = 0x1e8994u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 304)));
label_1e8998:
    // 0x1e8998: 0x25ad0180  addiu       $t5, $t5, 0x180
    ctx->pc = 0x1e8998u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 384));
label_1e899c:
    // 0x1e899c: 0xa64d0130  sh          $t5, 0x130($s2)
    ctx->pc = 0x1e899cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 304), (uint16_t)GPR_U32(ctx, 13));
label_1e89a0:
    // 0x1e89a0: 0xa2400118  sb          $zero, 0x118($s2)
    ctx->pc = 0x1e89a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 280), (uint8_t)GPR_U32(ctx, 0));
label_1e89a4:
    // 0x1e89a4: 0xa2400119  sb          $zero, 0x119($s2)
    ctx->pc = 0x1e89a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 281), (uint8_t)GPR_U32(ctx, 0));
label_1e89a8:
    // 0x1e89a8: 0xa240011a  sb          $zero, 0x11A($s2)
    ctx->pc = 0x1e89a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 282), (uint8_t)GPR_U32(ctx, 0));
label_1e89ac:
    // 0x1e89ac: 0xa240011b  sb          $zero, 0x11B($s2)
    ctx->pc = 0x1e89acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 283), (uint8_t)GPR_U32(ctx, 0));
label_1e89b0:
    // 0x1e89b0: 0xae4c011c  sw          $t4, 0x11C($s2)
    ctx->pc = 0x1e89b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 284), GPR_U32(ctx, 12));
label_1e89b4:
    // 0x1e89b4: 0xa2400128  sb          $zero, 0x128($s2)
    ctx->pc = 0x1e89b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 296), (uint8_t)GPR_U32(ctx, 0));
label_1e89b8:
    // 0x1e89b8: 0xa2400129  sb          $zero, 0x129($s2)
    ctx->pc = 0x1e89b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 297), (uint8_t)GPR_U32(ctx, 0));
label_1e89bc:
    // 0x1e89bc: 0xa240012a  sb          $zero, 0x12A($s2)
    ctx->pc = 0x1e89bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 298), (uint8_t)GPR_U32(ctx, 0));
label_1e89c0:
    // 0x1e89c0: 0xa240012b  sb          $zero, 0x12B($s2)
    ctx->pc = 0x1e89c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 299), (uint8_t)GPR_U32(ctx, 0));
label_1e89c4:
    // 0x1e89c4: 0xae4c012c  sw          $t4, 0x12C($s2)
    ctx->pc = 0x1e89c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 300), GPR_U32(ctx, 12));
label_1e89c8:
    // 0x1e89c8: 0xa2430138  sb          $v1, 0x138($s2)
    ctx->pc = 0x1e89c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 312), (uint8_t)GPR_U32(ctx, 3));
label_1e89cc:
    // 0x1e89cc: 0xa2420139  sb          $v0, 0x139($s2)
    ctx->pc = 0x1e89ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 313), (uint8_t)GPR_U32(ctx, 2));
label_1e89d0:
    // 0x1e89d0: 0xa242013a  sb          $v0, 0x13A($s2)
    ctx->pc = 0x1e89d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 314), (uint8_t)GPR_U32(ctx, 2));
label_1e89d4:
    // 0x1e89d4: 0xa247013b  sb          $a3, 0x13B($s2)
    ctx->pc = 0x1e89d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 315), (uint8_t)GPR_U32(ctx, 7));
label_1e89d8:
    // 0x1e89d8: 0xae4c013c  sw          $t4, 0x13C($s2)
    ctx->pc = 0x1e89d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 316), GPR_U32(ctx, 12));
label_1e89dc:
    // 0x1e89dc: 0xa2430148  sb          $v1, 0x148($s2)
    ctx->pc = 0x1e89dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 328), (uint8_t)GPR_U32(ctx, 3));
label_1e89e0:
    // 0x1e89e0: 0xa2420149  sb          $v0, 0x149($s2)
    ctx->pc = 0x1e89e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 329), (uint8_t)GPR_U32(ctx, 2));
label_1e89e4:
    // 0x1e89e4: 0xa242014a  sb          $v0, 0x14A($s2)
    ctx->pc = 0x1e89e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 330), (uint8_t)GPR_U32(ctx, 2));
label_1e89e8:
    // 0x1e89e8: 0xa247014b  sb          $a3, 0x14B($s2)
    ctx->pc = 0x1e89e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 331), (uint8_t)GPR_U32(ctx, 7));
label_1e89ec:
    // 0x1e89ec: 0xc0708ac  jal         func_1C22B0
label_1e89f0:
    if (ctx->pc == 0x1E89F0u) {
        ctx->pc = 0x1E89F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E89ECu;
        // 0x1e89f0: 0xae4c014c  sw          $t4, 0x14C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E89F4u;
        goto label_1e89f4;
    }
    ctx->pc = 0x1E89ECu;
    SET_GPR_U32(ctx, 31, 0x1E89F4u);
    ctx->pc = 0x1E89F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E89ECu;
    // 0x1e89f0: 0xae4c014c  sw          $t4, 0x14C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x1E89F4u;
label_1e89f4:
    // 0x1e89f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e89f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e89f8:
    // 0x1e89f8: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1e89f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e89fc:
    // 0x1e89fc: 0x1460ffb7  bnez        $v1, . + 4 + (-0x49 << 2)
label_1e8a00:
    if (ctx->pc == 0x1E8A00u) {
        ctx->pc = 0x1E8A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E89FCu;
        // 0x1e8a00: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8A04u;
        goto label_1e8a04;
    }
    ctx->pc = 0x1E89FCu;
    {
        const bool branch_taken_0x1e89fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E89FCu;
        // 0x1e8a00: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e89fc) {
            ctx->pc = 0x1E88DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e88dc;
        }
    }
    ctx->pc = 0x1E8A04u;
label_1e8a04:
    // 0x1e8a04: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1e8a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1e8a08:
    // 0x1e8a08: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1e8a08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e8a0c:
    // 0x1e8a0c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1e8a0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e8a10:
    // 0x1e8a10: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e8a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e8a14:
    // 0x1e8a14: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e8a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e8a18:
    // 0x1e8a18: 0x3e00008  jr          $ra
label_1e8a1c:
    if (ctx->pc == 0x1E8A1Cu) {
        ctx->pc = 0x1E8A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A18u;
        // 0x1e8a1c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8A20u;
        goto label_1e8a20;
    }
    ctx->pc = 0x1E8A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A18u;
        // 0x1e8a1c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8A20u;
label_1e8a20:
    // 0x1e8a20: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1e8a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_1e8a24:
    // 0x1e8a24: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1e8a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1e8a28:
    // 0x1e8a28: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e8a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1e8a2c:
    // 0x1e8a2c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e8a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1e8a30:
    // 0x1e8a30: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1e8a30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e8a34:
    // 0x1e8a34: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e8a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e8a38:
    // 0x1e8a38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e8a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e8a3c:
    // 0x1e8a3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e8a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e8a40:
    // 0x1e8a40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e8a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e8a44:
    // 0x1e8a44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e8a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e8a48:
    // 0x1e8a48: 0x8f92821c  lw          $s2, -0x7DE4($gp)
    ctx->pc = 0x1e8a48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935068)));
label_1e8a4c:
    // 0x1e8a4c: 0x100001a4  b           . + 4 + (0x1A4 << 2)
label_1e8a50:
    if (ctx->pc == 0x1E8A50u) {
        ctx->pc = 0x1E8A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A4Cu;
        // 0x1e8a50: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8A54u;
        goto label_1e8a54;
    }
    ctx->pc = 0x1E8A4Cu;
    {
        const bool branch_taken_0x1e8a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A4Cu;
        // 0x1e8a50: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8a4c) {
            ctx->pc = 0x1E90E0u;
            { ctx->pc = 0x1e90e0; return; }
        }
    }
    ctx->pc = 0x1E8A54u;
label_1e8a54:
    // 0x1e8a54: 0x9243005a  lbu         $v1, 0x5A($s2)
    ctx->pc = 0x1e8a54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 90)));
label_1e8a58:
    // 0x1e8a58: 0x1060019e  beqz        $v1, . + 4 + (0x19E << 2)
label_1e8a5c:
    if (ctx->pc == 0x1E8A5Cu) {
        ctx->pc = 0x1E8A60u;
        goto label_1e8a60;
    }
    ctx->pc = 0x1E8A58u;
    {
        const bool branch_taken_0x1e8a58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8a58) {
            ctx->pc = 0x1E90D4u;
            { ctx->pc = 0x1e90d4; return; }
        }
    }
    ctx->pc = 0x1E8A60u;
label_1e8a60:
    // 0x1e8a60: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x1e8a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1e8a64:
    // 0x1e8a64: 0x1060019b  beqz        $v1, . + 4 + (0x19B << 2)
label_1e8a68:
    if (ctx->pc == 0x1E8A68u) {
        ctx->pc = 0x1E8A6Cu;
        goto label_1e8a6c;
    }
    ctx->pc = 0x1E8A64u;
    {
        const bool branch_taken_0x1e8a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8a64) {
            ctx->pc = 0x1E90D4u;
            { ctx->pc = 0x1e90d4; return; }
        }
    }
    ctx->pc = 0x1E8A6Cu;
label_1e8a6c:
    // 0x1e8a6c: 0x9643005c  lhu         $v1, 0x5C($s2)
    ctx->pc = 0x1e8a6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 92)));
label_1e8a70:
    // 0x1e8a70: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x1e8a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1e8a74:
    // 0x1e8a74: 0x14600197  bnez        $v1, . + 4 + (0x197 << 2)
label_1e8a78:
    if (ctx->pc == 0x1E8A78u) {
        ctx->pc = 0x1E8A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A74u;
        // 0x1e8a78: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8A7Cu;
        goto label_1e8a7c;
    }
    ctx->pc = 0x1E8A74u;
    {
        const bool branch_taken_0x1e8a74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A74u;
        // 0x1e8a78: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8a74) {
            ctx->pc = 0x1E90D4u;
            { ctx->pc = 0x1e90d4; return; }
        }
    }
    ctx->pc = 0x1E8A7Cu;
label_1e8a7c:
    // 0x1e8a7c: 0x10000192  b           . + 4 + (0x192 << 2)
label_1e8a80:
    if (ctx->pc == 0x1E8A80u) {
        ctx->pc = 0x1E8A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A7Cu;
        // 0x1e8a80: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8A84u;
        goto label_1e8a84;
    }
    ctx->pc = 0x1E8A7Cu;
    {
        const bool branch_taken_0x1e8a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A7Cu;
        // 0x1e8a80: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8a7c) {
            ctx->pc = 0x1E90C8u;
            { ctx->pc = 0x1e90c8; return; }
        }
    }
    ctx->pc = 0x1E8A84u;
label_1e8a84:
    // 0x1e8a84: 0x0  nop
    ctx->pc = 0x1e8a84u;
    // NOP
label_1e8a88:
    // 0x1e8a88: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1e8a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e8a8c:
    // 0x1e8a8c: 0x1060018c  beqz        $v1, . + 4 + (0x18C << 2)
label_1e8a90:
    if (ctx->pc == 0x1E8A90u) {
        ctx->pc = 0x1E8A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A8Cu;
        // 0x1e8a90: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8A94u;
        goto label_1e8a94;
    }
    ctx->pc = 0x1E8A8Cu;
    {
        const bool branch_taken_0x1e8a8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A8Cu;
        // 0x1e8a90: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8a8c) {
            ctx->pc = 0x1E90C0u;
            { ctx->pc = 0x1e90c0; return; }
        }
    }
    ctx->pc = 0x1E8A94u;
label_1e8a94:
    // 0x1e8a94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e8a94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8a98:
    // 0x1e8a98: 0x1000000e  b           . + 4 + (0xE << 2)
label_1e8a9c:
    if (ctx->pc == 0x1E8A9Cu) {
        ctx->pc = 0x1E8A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A98u;
        // 0x1e8a9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8AA0u;
        goto label_1e8aa0;
    }
    ctx->pc = 0x1E8A98u;
    {
        const bool branch_taken_0x1e8a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A98u;
        // 0x1e8a9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8a98) {
            ctx->pc = 0x1E8AD4u;
            goto label_1e8ad4;
        }
    }
    ctx->pc = 0x1E8AA0u;
label_1e8aa0:
    // 0x1e8aa0: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x1e8aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e8aa4:
    // 0x1e8aa4: 0xe41804  sllv        $v1, $a0, $a3
    ctx->pc = 0x1e8aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
label_1e8aa8:
    // 0x1e8aa8: 0x90c501a2  lbu         $a1, 0x1A2($a2)
    ctx->pc = 0x1e8aa8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 418)));
label_1e8aac:
    // 0x1e8aac: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1e8aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1e8ab0:
    // 0x1e8ab0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1e8ab4:
    if (ctx->pc == 0x1E8AB4u) {
        ctx->pc = 0x1E8AB8u;
        goto label_1e8ab8;
    }
    ctx->pc = 0x1E8AB0u;
    {
        const bool branch_taken_0x1e8ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8ab0) {
            ctx->pc = 0x1E8ACCu;
            goto label_1e8acc;
        }
    }
    ctx->pc = 0x1E8AB8u;
label_1e8ab8:
    // 0x1e8ab8: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x1e8ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1e8abc:
    // 0x1e8abc: 0x24c301b0  addiu       $v1, $a2, 0x1B0
    ctx->pc = 0x1e8abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 432));
label_1e8ac0:
    // 0x1e8ac0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e8ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e8ac4:
    // 0x1e8ac4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e8ac8:
    if (ctx->pc == 0x1E8AC8u) {
        ctx->pc = 0x1E8AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8AC4u;
        // 0x1e8ac8: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8ACCu;
        goto label_1e8acc;
    }
    ctx->pc = 0x1E8AC4u;
    {
        const bool branch_taken_0x1e8ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8AC4u;
        // 0x1e8ac8: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8ac4) {
            ctx->pc = 0x1E8AE4u;
            goto label_1e8ae4;
        }
    }
    ctx->pc = 0x1E8ACCu;
label_1e8acc:
    // 0x1e8acc: 0x0  nop
    ctx->pc = 0x1e8accu;
    // NOP
label_1e8ad0:
    // 0x1e8ad0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e8ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1e8ad4:
    // 0x1e8ad4: 0x0  nop
    ctx->pc = 0x1e8ad4u;
    // NOP
label_1e8ad8:
    // 0x1e8ad8: 0x28e30002  slti        $v1, $a3, 0x2
    ctx->pc = 0x1e8ad8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e8adc:
    // 0x1e8adc: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_1e8ae0:
    if (ctx->pc == 0x1E8AE0u) {
        ctx->pc = 0x1E8AE4u;
        goto label_1e8ae4;
    }
    ctx->pc = 0x1E8ADCu;
    {
        const bool branch_taken_0x1e8adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8adc) {
            ctx->pc = 0x1E8AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8aa0;
        }
    }
    ctx->pc = 0x1E8AE4u;
label_1e8ae4:
    // 0x1e8ae4: 0x0  nop
    ctx->pc = 0x1e8ae4u;
    // NOP
label_1e8ae8:
    // 0x1e8ae8: 0x82030028  lb          $v1, 0x28($s0)
    ctx->pc = 0x1e8ae8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
label_1e8aec:
    // 0x1e8aec: 0x10600174  beqz        $v1, . + 4 + (0x174 << 2)
label_1e8af0:
    if (ctx->pc == 0x1E8AF0u) {
        ctx->pc = 0x1E8AF4u;
        goto label_1e8af4;
    }
    ctx->pc = 0x1E8AECu;
    {
        const bool branch_taken_0x1e8aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8aec) {
            ctx->pc = 0x1E90C0u;
            { ctx->pc = 0x1e90c0; return; }
        }
    }
    ctx->pc = 0x1E8AF4u;
label_1e8af4:
    // 0x1e8af4: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x1e8af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1e8af8:
    // 0x1e8af8: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x1e8af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_1e8afc:
    // 0x1e8afc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1e8b00:
    if (ctx->pc == 0x1E8B00u) {
        ctx->pc = 0x1E8B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8AFCu;
        // 0x1e8b00: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8B04u;
        goto label_1e8b04;
    }
    ctx->pc = 0x1E8AFCu;
    {
        const bool branch_taken_0x1e8afc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8AFCu;
        // 0x1e8b00: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8afc) {
            ctx->pc = 0x1E8B0Cu;
            goto label_1e8b0c;
        }
    }
    ctx->pc = 0x1E8B04u;
label_1e8b04:
    // 0x1e8b04: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_1e8b08:
    if (ctx->pc == 0x1E8B08u) {
        ctx->pc = 0x1E8B0Cu;
        goto label_1e8b0c;
    }
    ctx->pc = 0x1E8B04u;
    {
        const bool branch_taken_0x1e8b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8b04) {
            ctx->pc = 0x1E8B50u;
            goto label_1e8b50;
        }
    }
    ctx->pc = 0x1E8B0Cu;
label_1e8b0c:
    // 0x1e8b0c: 0x0  nop
    ctx->pc = 0x1e8b0cu;
    // NOP
label_1e8b10:
    // 0x1e8b10: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1e8b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e8b14:
    // 0x1e8b14: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x1e8b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1e8b18:
    // 0x1e8b18: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e8b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e8b1c:
    // 0x1e8b1c: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x1e8b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_1e8b20:
    // 0x1e8b20: 0x14600167  bnez        $v1, . + 4 + (0x167 << 2)
label_1e8b24:
    if (ctx->pc == 0x1E8B24u) {
        ctx->pc = 0x1E8B28u;
        goto label_1e8b28;
    }
    ctx->pc = 0x1E8B20u;
    {
        const bool branch_taken_0x1e8b20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8b20) {
            ctx->pc = 0x1E90C0u;
            { ctx->pc = 0x1e90c0; return; }
        }
    }
    ctx->pc = 0x1E8B28u;
label_1e8b28:
    // 0x1e8b28: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x1e8b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1e8b2c:
    // 0x1e8b2c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1e8b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e8b30:
    // 0x1e8b30: 0x10830163  beq         $a0, $v1, . + 4 + (0x163 << 2)
label_1e8b34:
    if (ctx->pc == 0x1E8B34u) {
        ctx->pc = 0x1E8B38u;
        goto label_1e8b38;
    }
    ctx->pc = 0x1E8B30u;
    {
        const bool branch_taken_0x1e8b30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e8b30) {
            ctx->pc = 0x1E90C0u;
            { ctx->pc = 0x1e90c0; return; }
        }
    }
    ctx->pc = 0x1E8B38u;
label_1e8b38:
    // 0x1e8b38: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x1e8b38u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
label_1e8b3c:
    // 0x1e8b3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e8b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e8b40:
    // 0x1e8b40: 0x2842004  sllv        $a0, $a0, $s4
    ctx->pc = 0x1e8b40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 20) & 0x1F));
label_1e8b44:
    // 0x1e8b44: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e8b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1e8b48:
    // 0x1e8b48: 0x1460015d  bnez        $v1, . + 4 + (0x15D << 2)
label_1e8b4c:
    if (ctx->pc == 0x1E8B4Cu) {
        ctx->pc = 0x1E8B50u;
        goto label_1e8b50;
    }
    ctx->pc = 0x1E8B48u;
    {
        const bool branch_taken_0x1e8b48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8b48) {
            ctx->pc = 0x1E90C0u;
            { ctx->pc = 0x1e90c0; return; }
        }
    }
    ctx->pc = 0x1E8B50u;
label_1e8b50:
    // 0x1e8b50: 0x8e440044  lw          $a0, 0x44($s2)
    ctx->pc = 0x1e8b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_1e8b54:
    // 0x1e8b54: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1e8b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_1e8b58:
    // 0x1e8b58: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1e8b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1e8b5c:
    // 0x1e8b5c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1e8b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1e8b60:
    // 0x1e8b60: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
label_1e8b64:
    if (ctx->pc == 0x1E8B64u) {
        ctx->pc = 0x1E8B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8B60u;
        // 0x1e8b64: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8B68u;
        goto label_1e8b68;
    }
    ctx->pc = 0x1E8B60u;
    {
        const bool branch_taken_0x1e8b60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8B60u;
        // 0x1e8b64: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8b60) {
            ctx->pc = 0x1E8C5Cu;
            goto label_1e8c5c;
        }
    }
    ctx->pc = 0x1E8B68u;
label_1e8b68:
    // 0x1e8b68: 0x86430054  lh          $v1, 0x54($s2)
    ctx->pc = 0x1e8b68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 84)));
label_1e8b6c:
    // 0x1e8b6c: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x1e8b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8b70:
    // 0x1e8b70: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1e8b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e8b74:
    // 0x1e8b74: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x1e8b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_1e8b78:
    // 0x1e8b78: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e8b78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e8b7c:
    // 0x1e8b7c: 0x0  nop
    ctx->pc = 0x1e8b7cu;
    // NOP
label_1e8b80:
    // 0x1e8b80: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e8b80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e8b84:
    // 0x1e8b84: 0x24830150  addiu       $v1, $a0, 0x150
    ctx->pc = 0x1e8b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
label_1e8b88:
    // 0x1e8b88: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1e8b88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1e8b8c:
    // 0x1e8b8c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1e8b8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1e8b90:
    // 0x1e8b90: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1e8b90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1e8b94:
    // 0x1e8b94: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1e8b94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1e8b98:
    // 0x1e8b98: 0x4a0002ff  vnop
    ctx->pc = 0x1e8b98u;
    // NOP operation, no action needed for VU0
label_1e8b9c:
    // 0x1e8b9c: 0x4a0002ff  vnop
    ctx->pc = 0x1e8b9cu;
    // NOP operation, no action needed for VU0
label_1e8ba0:
    // 0x1e8ba0: 0x4a0002ff  vnop
    ctx->pc = 0x1e8ba0u;
    // NOP operation, no action needed for VU0
label_1e8ba4:
    // 0x1e8ba4: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x1e8ba4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_1e8ba8:
    // 0x1e8ba8: 0x4a0002ff  vnop
    ctx->pc = 0x1e8ba8u;
    // NOP operation, no action needed for VU0
label_1e8bac:
    // 0x1e8bac: 0x4a0002ff  vnop
    ctx->pc = 0x1e8bacu;
    // NOP operation, no action needed for VU0
label_1e8bb0:
    // 0x1e8bb0: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x1e8bb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_1e8bb4:
    // 0x1e8bb4: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x1e8bb4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1e8bb8:
    // 0x1e8bb8: 0x4a0002ff  vnop
    ctx->pc = 0x1e8bb8u;
    // NOP operation, no action needed for VU0
label_1e8bbc:
    // 0x1e8bbc: 0x4a0002ff  vnop
    ctx->pc = 0x1e8bbcu;
    // NOP operation, no action needed for VU0
label_1e8bc0:
    // 0x1e8bc0: 0x4a0002ff  vnop
    ctx->pc = 0x1e8bc0u;
    // NOP operation, no action needed for VU0
label_1e8bc4:
    // 0x1e8bc4: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1e8bc4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_1e8bc8:
    // 0x1e8bc8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e8bc8u;
    // VWAITQ (Q already resolved in this runtime)
label_1e8bcc:
    // 0x1e8bcc: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x1e8bccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_1e8bd0:
    // 0x1e8bd0: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x1e8bd0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e8bd4:
    // 0x1e8bd4: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x1e8bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_1e8bd8:
    // 0x1e8bd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e8bd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8bdc:
    // 0x1e8bdc: 0x0  nop
    ctx->pc = 0x1e8bdcu;
    // NOP
label_1e8be0:
    // 0x1e8be0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1e8be0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1e8be4:
    // 0x1e8be4: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1e8be4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e8be8:
    // 0x1e8be8: 0x0  nop
    ctx->pc = 0x1e8be8u;
    // NOP
label_1e8bec:
    // 0x1e8bec: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
label_1e8bf0:
    if (ctx->pc == 0x1E8BF0u) {
        ctx->pc = 0x1E8BF4u;
        goto label_1e8bf4;
    }
    ctx->pc = 0x1E8BECu;
    {
        const bool branch_taken_0x1e8bec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8bec) {
            ctx->pc = 0x1E8CDCu;
            goto label_1e8cdc;
        }
    }
    ctx->pc = 0x1E8BF4u;
label_1e8bf4:
    // 0x1e8bf4: 0x9642005c  lhu         $v0, 0x5C($s2)
    ctx->pc = 0x1e8bf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 92)));
label_1e8bf8:
    // 0x1e8bf8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e8bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1e8bfc:
    // 0x1e8bfc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1e8c00:
    if (ctx->pc == 0x1E8C00u) {
        ctx->pc = 0x1E8C04u;
        goto label_1e8c04;
    }
    ctx->pc = 0x1E8BFCu;
    {
        const bool branch_taken_0x1e8bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8bfc) {
            ctx->pc = 0x1E8C30u;
            goto label_1e8c30;
        }
    }
    ctx->pc = 0x1E8C04u;
label_1e8c04:
    // 0x1e8c04: 0xc4810054  lwc1        $f1, 0x54($a0)
    ctx->pc = 0x1e8c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8c08:
    // 0x1e8c08: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x1e8c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8c0c:
    // 0x1e8c0c: 0xc06d448  jal         func_1B5120
label_1e8c10:
    if (ctx->pc == 0x1E8C10u) {
        ctx->pc = 0x1E8C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C0Cu;
        // 0x1e8c10: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8C14u;
        goto label_1e8c14;
    }
    ctx->pc = 0x1E8C0Cu;
    SET_GPR_U32(ctx, 31, 0x1E8C14u);
    ctx->pc = 0x1E8C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8C0Cu;
    // 0x1e8c10: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x1E8C14u;
label_1e8c14:
    // 0x1e8c14: 0xc6410050  lwc1        $f1, 0x50($s2)
    ctx->pc = 0x1e8c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8c18:
    // 0x1e8c18: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e8c18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e8c1c:
    // 0x1e8c1c: 0x0  nop
    ctx->pc = 0x1e8c1cu;
    // NOP
label_1e8c20:
    // 0x1e8c20: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
label_1e8c24:
    if (ctx->pc == 0x1E8C24u) {
        ctx->pc = 0x1E8C28u;
        goto label_1e8c28;
    }
    ctx->pc = 0x1E8C20u;
    {
        const bool branch_taken_0x1e8c20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8c20) {
            ctx->pc = 0x1E8CDCu;
            goto label_1e8cdc;
        }
    }
    ctx->pc = 0x1E8C28u;
label_1e8c28:
    // 0x1e8c28: 0x1000002c  b           . + 4 + (0x2C << 2)
label_1e8c2c:
    if (ctx->pc == 0x1E8C2Cu) {
        ctx->pc = 0x1E8C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C28u;
        // 0x1e8c2c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8C30u;
        goto label_1e8c30;
    }
    ctx->pc = 0x1E8C28u;
    {
        const bool branch_taken_0x1e8c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C28u;
        // 0x1e8c2c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8c28) {
            ctx->pc = 0x1E8CDCu;
            goto label_1e8cdc;
        }
    }
    ctx->pc = 0x1E8C30u;
label_1e8c30:
    // 0x1e8c30: 0xc4810154  lwc1        $f1, 0x154($a0)
    ctx->pc = 0x1e8c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8c34:
    // 0x1e8c34: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x1e8c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8c38:
    // 0x1e8c38: 0xc06d448  jal         func_1B5120
label_1e8c3c:
    if (ctx->pc == 0x1E8C3Cu) {
        ctx->pc = 0x1E8C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C38u;
        // 0x1e8c3c: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8C40u;
        goto label_1e8c40;
    }
    ctx->pc = 0x1E8C38u;
    SET_GPR_U32(ctx, 31, 0x1E8C40u);
    ctx->pc = 0x1E8C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8C38u;
    // 0x1e8c3c: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x1E8C40u;
label_1e8c40:
    // 0x1e8c40: 0xc6410050  lwc1        $f1, 0x50($s2)
    ctx->pc = 0x1e8c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8c44:
    // 0x1e8c44: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e8c44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e8c48:
    // 0x1e8c48: 0x0  nop
    ctx->pc = 0x1e8c48u;
    // NOP
label_1e8c4c:
    // 0x1e8c4c: 0x45000023  bc1f        . + 4 + (0x23 << 2)
label_1e8c50:
    if (ctx->pc == 0x1E8C50u) {
        ctx->pc = 0x1E8C54u;
        goto label_1e8c54;
    }
    ctx->pc = 0x1E8C4Cu;
    {
        const bool branch_taken_0x1e8c4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8c4c) {
            ctx->pc = 0x1E8CDCu;
            goto label_1e8cdc;
        }
    }
    ctx->pc = 0x1E8C54u;
label_1e8c54:
    // 0x1e8c54: 0x10000021  b           . + 4 + (0x21 << 2)
label_1e8c58:
    if (ctx->pc == 0x1E8C58u) {
        ctx->pc = 0x1E8C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C54u;
        // 0x1e8c58: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8C5Cu;
        goto label_1e8c5c;
    }
    ctx->pc = 0x1E8C54u;
    {
        const bool branch_taken_0x1e8c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C54u;
        // 0x1e8c58: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8c54) {
            ctx->pc = 0x1E8CDCu;
            goto label_1e8cdc;
        }
    }
    ctx->pc = 0x1E8C5Cu;
label_1e8c5c:
    // 0x1e8c5c: 0x0  nop
    ctx->pc = 0x1e8c5cu;
    // NOP
label_1e8c60:
    // 0x1e8c60: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1e8c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e8c64:
    // 0x1e8c64: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x1e8c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_1e8c68:
    // 0x1e8c68: 0x24630150  addiu       $v1, $v1, 0x150
    ctx->pc = 0x1e8c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
label_1e8c6c:
    // 0x1e8c6c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1e8c6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1e8c70:
    // 0x1e8c70: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1e8c70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1e8c74:
    // 0x1e8c74: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1e8c74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1e8c78:
    // 0x1e8c78: 0x4a0002ff  vnop
    ctx->pc = 0x1e8c78u;
    // NOP operation, no action needed for VU0
label_1e8c7c:
    // 0x1e8c7c: 0x4a0002ff  vnop
    ctx->pc = 0x1e8c7cu;
    // NOP operation, no action needed for VU0
label_1e8c80:
    // 0x1e8c80: 0x4a0002ff  vnop
    ctx->pc = 0x1e8c80u;
    // NOP operation, no action needed for VU0
label_1e8c84:
    // 0x1e8c84: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x1e8c84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1e8c88:
    // 0x1e8c88: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x1e8c88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_1e8c8c:
    // 0x1e8c8c: 0x4a0002ff  vnop
    ctx->pc = 0x1e8c8cu;
    // NOP operation, no action needed for VU0
label_1e8c90:
    // 0x1e8c90: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x1e8c90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_1e8c94:
    // 0x1e8c94: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x1e8c94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_1e8c98:
    // 0x1e8c98: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x1e8c98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1e8c9c:
    // 0x1e8c9c: 0x4a0002ff  vnop
    ctx->pc = 0x1e8c9cu;
    // NOP operation, no action needed for VU0
label_1e8ca0:
    // 0x1e8ca0: 0x4a0002ff  vnop
    ctx->pc = 0x1e8ca0u;
    // NOP operation, no action needed for VU0
label_1e8ca4:
    // 0x1e8ca4: 0x4a0002ff  vnop
    ctx->pc = 0x1e8ca4u;
    // NOP operation, no action needed for VU0
label_1e8ca8:
    // 0x1e8ca8: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1e8ca8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_1e8cac:
    // 0x1e8cac: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e8cacu;
    // VWAITQ (Q already resolved in this runtime)
label_1e8cb0:
    // 0x1e8cb0: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x1e8cb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_1e8cb4:
    // 0x1e8cb4: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x1e8cb4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e8cb8:
    // 0x1e8cb8: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x1e8cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_1e8cbc:
    // 0x1e8cbc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e8cbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e8cc0:
    // 0x1e8cc0: 0xc6400050  lwc1        $f0, 0x50($s2)
    ctx->pc = 0x1e8cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8cc4:
    // 0x1e8cc4: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1e8cc4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1e8cc8:
    // 0x1e8cc8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1e8cc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e8ccc:
    // 0x1e8ccc: 0x0  nop
    ctx->pc = 0x1e8cccu;
    // NOP
label_1e8cd0:
    // 0x1e8cd0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1e8cd4:
    if (ctx->pc == 0x1E8CD4u) {
        ctx->pc = 0x1E8CD8u;
        goto label_1e8cd8;
    }
    ctx->pc = 0x1E8CD0u;
    {
        const bool branch_taken_0x1e8cd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8cd0) {
            ctx->pc = 0x1E8CDCu;
            goto label_1e8cdc;
        }
    }
    ctx->pc = 0x1E8CD8u;
label_1e8cd8:
    // 0x1e8cd8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1e8cd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e8cdc:
    // 0x1e8cdc: 0x0  nop
    ctx->pc = 0x1e8cdcu;
    // NOP
label_1e8ce0:
    // 0x1e8ce0: 0x126000f7  beqz        $s3, . + 4 + (0xF7 << 2)
label_1e8ce4:
    if (ctx->pc == 0x1E8CE4u) {
        ctx->pc = 0x1E8CE8u;
        goto label_1e8ce8;
    }
    ctx->pc = 0x1E8CE0u;
    {
        const bool branch_taken_0x1e8ce0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8ce0) {
            ctx->pc = 0x1E90C0u;
            { ctx->pc = 0x1e90c0; return; }
        }
    }
    ctx->pc = 0x1E8CE8u;
label_1e8ce8:
    // 0x1e8ce8: 0x8203002a  lb          $v1, 0x2A($s0)
    ctx->pc = 0x1e8ce8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
label_1e8cec:
    // 0x1e8cec: 0x146000c5  bnez        $v1, . + 4 + (0xC5 << 2)
label_1e8cf0:
    if (ctx->pc == 0x1E8CF0u) {
        ctx->pc = 0x1E8CF4u;
        goto label_1e8cf4;
    }
    ctx->pc = 0x1E8CECu;
    {
        const bool branch_taken_0x1e8cec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8cec) {
            ctx->pc = 0x1E9004u;
            goto label_1e9004;
        }
    }
    ctx->pc = 0x1E8CF4u;
label_1e8cf4:
    // 0x1e8cf4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1e8cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e8cf8:
    // 0x1e8cf8: 0x9244005e  lbu         $a0, 0x5E($s2)
    ctx->pc = 0x1e8cf8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 94)));
label_1e8cfc:
    // 0x1e8cfc: 0x90630234  lbu         $v1, 0x234($v1)
    ctx->pc = 0x1e8cfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 564)));
label_1e8d00:
    // 0x1e8d00: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
label_1e8d04:
    if (ctx->pc == 0x1E8D04u) {
        ctx->pc = 0x1E8D08u;
        goto label_1e8d08;
    }
    ctx->pc = 0x1E8D00u;
    {
        const bool branch_taken_0x1e8d00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e8d00) {
            ctx->pc = 0x1E8D38u;
            goto label_1e8d38;
        }
    }
    ctx->pc = 0x1E8D08u;
label_1e8d08:
    // 0x1e8d08: 0x82420058  lb          $v0, 0x58($s2)
    ctx->pc = 0x1e8d08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 88)));
label_1e8d0c:
    // 0x1e8d0c: 0x38420019  xori        $v0, $v0, 0x19
    ctx->pc = 0x1e8d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)25);
label_1e8d10:
    // 0x1e8d10: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e8d10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1e8d14:
    // 0x1e8d14: 0xaf828ea8  sw          $v0, -0x7158($gp)
    ctx->pc = 0x1e8d14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938280), GPR_U32(ctx, 2));
label_1e8d18:
    // 0x1e8d18: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x1e8d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1e8d1c:
    // 0x1e8d1c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1e8d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e8d20:
    // 0x1e8d20: 0x8e460044  lw          $a2, 0x44($s2)
    ctx->pc = 0x1e8d20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_1e8d24:
    // 0x1e8d24: 0xc040938  jal         func_1024E0
label_1e8d28:
    if (ctx->pc == 0x1E8D28u) {
        ctx->pc = 0x1E8D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D24u;
        // 0x1e8d28: 0x26470020  addiu       $a3, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8D2Cu;
        goto label_1e8d2c;
    }
    ctx->pc = 0x1E8D24u;
    SET_GPR_U32(ctx, 31, 0x1E8D2Cu);
    ctx->pc = 0x1E8D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8D24u;
    // 0x1e8d28: 0x26470020  addiu       $a3, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1024E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1024E0u, 0x1E8D24u, 0x1E8D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8D2Cu;
label_1e8d2c:
    // 0x1e8d2c: 0xaf808ea8  sw          $zero, -0x7158($gp)
    ctx->pc = 0x1e8d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938280), GPR_U32(ctx, 0));
label_1e8d30:
    // 0x1e8d30: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e8d34:
    if (ctx->pc == 0x1E8D34u) {
        ctx->pc = 0x1E8D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D30u;
        // 0x1e8d34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8D38u;
        goto label_1e8d38;
    }
    ctx->pc = 0x1E8D30u;
    {
        const bool branch_taken_0x1e8d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D30u;
        // 0x1e8d34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8d30) {
            ctx->pc = 0x1E8D3Cu;
            goto label_1e8d3c;
        }
    }
    ctx->pc = 0x1E8D38u;
label_1e8d38:
    // 0x1e8d38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e8d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8d3c:
    // 0x1e8d3c: 0x0  nop
    ctx->pc = 0x1e8d3cu;
    // NOP
label_1e8d40:
    // 0x1e8d40: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x1e8d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1e8d44:
    // 0x1e8d44: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x1e8d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_1e8d48:
    // 0x1e8d48: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1e8d4c:
    if (ctx->pc == 0x1E8D4Cu) {
        ctx->pc = 0x1E8D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D48u;
        // 0x1e8d4c: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8D50u;
        goto label_1e8d50;
    }
    ctx->pc = 0x1E8D48u;
    {
        const bool branch_taken_0x1e8d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D48u;
        // 0x1e8d4c: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8d48) {
            ctx->pc = 0x1E8D58u;
            goto label_1e8d58;
        }
    }
    ctx->pc = 0x1E8D50u;
label_1e8d50:
    // 0x1e8d50: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1e8d54:
    if (ctx->pc == 0x1E8D54u) {
        ctx->pc = 0x1E8D58u;
        goto label_1e8d58;
    }
    ctx->pc = 0x1E8D50u;
    {
        const bool branch_taken_0x1e8d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8d50) {
            ctx->pc = 0x1E8D60u;
            goto label_1e8d60;
        }
    }
    ctx->pc = 0x1E8D58u;
label_1e8d58:
    // 0x1e8d58: 0x10a000c0  beqz        $a1, . + 4 + (0xC0 << 2)
label_1e8d5c:
    if (ctx->pc == 0x1E8D5Cu) {
        ctx->pc = 0x1E8D60u;
        goto label_1e8d60;
    }
    ctx->pc = 0x1E8D58u;
    {
        const bool branch_taken_0x1e8d58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8d58) {
            ctx->pc = 0x1E905Cu;
            { ctx->pc = 0x1e905c; return; }
        }
    }
    ctx->pc = 0x1E8D60u;
label_1e8d60:
    // 0x1e8d60: 0x9644005c  lhu         $a0, 0x5C($s2)
    ctx->pc = 0x1e8d60u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 92)));
label_1e8d64:
    // 0x1e8d64: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x1e8d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_1e8d68:
    // 0x1e8d68: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1e8d6c:
    if (ctx->pc == 0x1E8D6Cu) {
        ctx->pc = 0x1E8D70u;
        goto label_1e8d70;
    }
    ctx->pc = 0x1E8D68u;
    {
        const bool branch_taken_0x1e8d68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8d68) {
            ctx->pc = 0x1E8D84u;
            goto label_1e8d84;
        }
    }
    ctx->pc = 0x1E8D70u;
label_1e8d70:
    // 0x1e8d70: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1e8d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e8d74:
    // 0x1e8d74: 0x8c830198  lw          $v1, 0x198($a0)
    ctx->pc = 0x1e8d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
label_1e8d78:
    // 0x1e8d78: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x1e8d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_1e8d7c:
    // 0x1e8d7c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1e8d80:
    if (ctx->pc == 0x1E8D80u) {
        ctx->pc = 0x1E8D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D7Cu;
        // 0x1e8d80: 0xac830198  sw          $v1, 0x198($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 408), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8D84u;
        goto label_1e8d84;
    }
    ctx->pc = 0x1E8D7Cu;
    {
        const bool branch_taken_0x1e8d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D7Cu;
        // 0x1e8d80: 0xac830198  sw          $v1, 0x198($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 408), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8d7c) {
            ctx->pc = 0x1E8DA4u;
            goto label_1e8da4;
        }
    }
    ctx->pc = 0x1E8D84u;
label_1e8d84:
    // 0x1e8d84: 0x0  nop
    ctx->pc = 0x1e8d84u;
    // NOP
label_1e8d88:
    // 0x1e8d88: 0x30830100  andi        $v1, $a0, 0x100
    ctx->pc = 0x1e8d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
label_1e8d8c:
    // 0x1e8d8c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1e8d90:
    if (ctx->pc == 0x1E8D90u) {
        ctx->pc = 0x1E8D94u;
        goto label_1e8d94;
    }
    ctx->pc = 0x1E8D8Cu;
    {
        const bool branch_taken_0x1e8d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8d8c) {
            ctx->pc = 0x1E8DA4u;
            goto label_1e8da4;
        }
    }
    ctx->pc = 0x1E8D94u;
label_1e8d94:
    // 0x1e8d94: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1e8d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e8d98:
    // 0x1e8d98: 0x8c830198  lw          $v1, 0x198($a0)
    ctx->pc = 0x1e8d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
label_1e8d9c:
    // 0x1e8d9c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x1e8d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_1e8da0:
    // 0x1e8da0: 0xac830198  sw          $v1, 0x198($a0)
    ctx->pc = 0x1e8da0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 408), GPR_U32(ctx, 3));
label_1e8da4:
    // 0x1e8da4: 0x0  nop
    ctx->pc = 0x1e8da4u;
    // NOP
label_1e8da8:
    // 0x1e8da8: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x1e8da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1e8dac:
    // 0x1e8dac: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x1e8dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_1e8db0:
    // 0x1e8db0: 0x106000aa  beqz        $v1, . + 4 + (0xAA << 2)
label_1e8db4:
    if (ctx->pc == 0x1E8DB4u) {
        ctx->pc = 0x1E8DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8DB0u;
        // 0x1e8db4: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8DB8u;
        goto label_1e8db8;
    }
    ctx->pc = 0x1E8DB0u;
    {
        const bool branch_taken_0x1e8db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8DB0u;
        // 0x1e8db4: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8db0) {
            ctx->pc = 0x1E905Cu;
            { ctx->pc = 0x1e905c; return; }
        }
    }
    ctx->pc = 0x1E8DB8u;
label_1e8db8:
    // 0x1e8db8: 0x146000a8  bnez        $v1, . + 4 + (0xA8 << 2)
label_1e8dbc:
    if (ctx->pc == 0x1E8DBCu) {
        ctx->pc = 0x1E8DC0u;
        goto label_1e8dc0;
    }
    ctx->pc = 0x1E8DB8u;
    {
        const bool branch_taken_0x1e8db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8db8) {
            ctx->pc = 0x1E905Cu;
            { ctx->pc = 0x1e905c; return; }
        }
    }
    ctx->pc = 0x1E8DC0u;
label_1e8dc0:
    // 0x1e8dc0: 0x9644005c  lhu         $a0, 0x5C($s2)
    ctx->pc = 0x1e8dc0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 92)));
label_1e8dc4:
    // 0x1e8dc4: 0x30830040  andi        $v1, $a0, 0x40
    ctx->pc = 0x1e8dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
label_1e8dc8:
    // 0x1e8dc8: 0x146000a4  bnez        $v1, . + 4 + (0xA4 << 2)
label_1e8dcc:
    if (ctx->pc == 0x1E8DCCu) {
        ctx->pc = 0x1E8DD0u;
        goto label_1e8dd0;
    }
    ctx->pc = 0x1E8DC8u;
    {
        const bool branch_taken_0x1e8dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8dc8) {
            ctx->pc = 0x1E905Cu;
            { ctx->pc = 0x1e905c; return; }
        }
    }
    ctx->pc = 0x1E8DD0u;
label_1e8dd0:
    // 0x1e8dd0: 0x348200a4  ori         $v0, $a0, 0xA4
    ctx->pc = 0x1e8dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)164);
label_1e8dd4:
    // 0x1e8dd4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e8dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1e8dd8:
    // 0x1e8dd8: 0xa642005c  sh          $v0, 0x5C($s2)
    ctx->pc = 0x1e8dd8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 92), (uint16_t)GPR_U32(ctx, 2));
label_1e8ddc:
    // 0x1e8ddc: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x1e8ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_1e8de0:
    // 0x1e8de0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1e8de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e8de4:
    // 0x1e8de4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e8de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e8de8:
    // 0x1e8de8: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x1e8de8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
label_1e8dec:
    // 0x1e8dec: 0xa6400054  sh          $zero, 0x54($s2)
    ctx->pc = 0x1e8decu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 84), (uint16_t)GPR_U32(ctx, 0));
label_1e8df0:
    // 0x1e8df0: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x1e8df0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_1e8df4:
    // 0x1e8df4: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x1e8df4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_1e8df8:
    // 0x1e8df8: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x1e8df8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_1e8dfc:
    // 0x1e8dfc: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x1e8dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
label_1e8e00:
    // 0x1e8e00: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x1e8e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1e8e04:
    // 0x1e8e04: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x1e8e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1e8e08:
    // 0x1e8e08: 0x8c660034  lw          $a2, 0x34($v1)
    ctx->pc = 0x1e8e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1e8e0c:
    // 0x1e8e0c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e8e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e8e10:
    // 0x1e8e10: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e8e10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e8e14:
    // 0x1e8e14: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1e8e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1e8e18:
    // 0x1e8e18: 0x245305a0  addiu       $s3, $v0, 0x5A0
    ctx->pc = 0x1e8e18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
label_1e8e1c:
    // 0x1e8e1c: 0x26620080  addiu       $v0, $s3, 0x80
    ctx->pc = 0x1e8e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
label_1e8e20:
    // 0x1e8e20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e8e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e8e24:
    // 0x1e8e24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e8e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e8e28:
    // 0x1e8e28: 0xc066e08  jal         func_19B820
label_1e8e2c:
    if (ctx->pc == 0x1E8E2Cu) {
        ctx->pc = 0x1E8E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E28u;
        // 0x1e8e2c: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8E30u;
        goto label_1e8e30;
    }
    ctx->pc = 0x1E8E28u;
    SET_GPR_U32(ctx, 31, 0x1E8E30u);
    ctx->pc = 0x1E8E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8E28u;
    // 0x1e8e2c: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x1E8E30u;
label_1e8e30:
    // 0x1e8e30: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e8e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1e8e34:
    // 0x1e8e34: 0x26620080  addiu       $v0, $s3, 0x80
    ctx->pc = 0x1e8e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
label_1e8e38:
    // 0x1e8e38: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1e8e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1e8e3c:
    // 0x1e8e3c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1e8e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1e8e40:
    // 0x1e8e40: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1e8e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1e8e44:
    // 0x1e8e44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e8e44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e8e48:
    // 0x1e8e48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e8e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e8e4c:
    // 0x1e8e4c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e8e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e8e50:
    // 0x1e8e50: 0xc08e93e  jal         func_23A4F8
label_1e8e54:
    if (ctx->pc == 0x1E8E54u) {
        ctx->pc = 0x1E8E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E50u;
        // 0x1e8e54: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8E58u;
        goto label_1e8e58;
    }
    ctx->pc = 0x1E8E50u;
    SET_GPR_U32(ctx, 31, 0x1E8E58u);
    ctx->pc = 0x1E8E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8E50u;
    // 0x1e8e54: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1E8E58u;
label_1e8e58:
    // 0x1e8e58: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1e8e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e8e5c:
    // 0x1e8e5c: 0xc066dba  jal         func_19B6E8
label_1e8e60:
    if (ctx->pc == 0x1E8E60u) {
        ctx->pc = 0x1E8E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E5Cu;
        // 0x1e8e60: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8E64u;
        goto label_1e8e64;
    }
    ctx->pc = 0x1E8E5Cu;
    SET_GPR_U32(ctx, 31, 0x1E8E64u);
    ctx->pc = 0x1E8E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8E5Cu;
    // 0x1e8e60: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6E8u;
    { ctx->pc = 0x19b6e8; return; }
    ctx->pc = 0x1E8E64u;
label_1e8e64:
    // 0x1e8e64: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x1e8e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_1e8e68:
    // 0x1e8e68: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1e8e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e8e6c:
    // 0x1e8e6c: 0xc066d7a  jal         func_19B5E8
label_1e8e70:
    if (ctx->pc == 0x1E8E70u) {
        ctx->pc = 0x1E8E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E6Cu;
        // 0x1e8e70: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8E74u;
        goto label_1e8e74;
    }
    ctx->pc = 0x1E8E6Cu;
    SET_GPR_U32(ctx, 31, 0x1E8E74u);
    ctx->pc = 0x1E8E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8E6Cu;
    // 0x1e8e70: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x1E8E74u;
label_1e8e74:
    // 0x1e8e74: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x1e8e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1e8e78:
    // 0x1e8e78: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x1e8e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_1e8e7c:
    // 0x1e8e7c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1e8e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1e8e80:
    // 0x1e8e80: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e8e80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e8e84:
    // 0x1e8e84: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x1e8e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e8e88:
    // 0x1e8e88: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1e8e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_1e8e8c:
    // 0x1e8e8c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1e8e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1e8e90:
    // 0x1e8e90: 0xc4840044  lwc1        $f4, 0x44($a0)
    ctx->pc = 0x1e8e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1e8e94:
    // 0x1e8e94: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x1e8e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e8e98:
    // 0x1e8e98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e8e98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8e9c:
    // 0x1e8e9c: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x1e8e9cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_1e8ea0:
    // 0x1e8ea0: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1e8ea0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1e8ea4:
    // 0x1e8ea4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e8ea4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e8ea8:
    // 0x1e8ea8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e8ea8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e8eac:
    // 0x1e8eac: 0x0  nop
    ctx->pc = 0x1e8eacu;
    // NOP
label_1e8eb0:
    // 0x1e8eb0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1e8eb4:
    if (ctx->pc == 0x1E8EB4u) {
        ctx->pc = 0x1E8EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8EB0u;
        // 0x1e8eb4: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8EB8u;
        goto label_1e8eb8;
    }
    ctx->pc = 0x1E8EB0u;
    {
        const bool branch_taken_0x1e8eb0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8EB0u;
        // 0x1e8eb4: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8eb0) {
            ctx->pc = 0x1E8EC8u;
            goto label_1e8ec8;
        }
    }
    ctx->pc = 0x1E8EB8u;
label_1e8eb8:
    // 0x1e8eb8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1e8eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1e8ebc:
    // 0x1e8ebc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e8ebcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8ec0:
    // 0x1e8ec0: 0x1000000d  b           . + 4 + (0xD << 2)
label_1e8ec4:
    if (ctx->pc == 0x1E8EC4u) {
        ctx->pc = 0x1E8EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8EC0u;
        // 0x1e8ec4: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8EC8u;
        goto label_1e8ec8;
    }
    ctx->pc = 0x1E8EC0u;
    {
        const bool branch_taken_0x1e8ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8EC0u;
        // 0x1e8ec4: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8ec0) {
            ctx->pc = 0x1E8EF8u;
            goto label_1e8ef8;
        }
    }
    ctx->pc = 0x1E8EC8u;
label_1e8ec8:
    // 0x1e8ec8: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x1e8ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
label_1e8ecc:
    // 0x1e8ecc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1e8eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1e8ed0:
    // 0x1e8ed0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e8ed0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8ed4:
    // 0x1e8ed4: 0x0  nop
    ctx->pc = 0x1e8ed4u;
    // NOP
label_1e8ed8:
    // 0x1e8ed8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e8ed8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e8edc:
    // 0x1e8edc: 0x0  nop
    ctx->pc = 0x1e8edcu;
    // NOP
label_1e8ee0:
    // 0x1e8ee0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1e8ee4:
    if (ctx->pc == 0x1E8EE4u) {
        ctx->pc = 0x1E8EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8EE0u;
        // 0x1e8ee4: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8EE8u;
        goto label_1e8ee8;
    }
    ctx->pc = 0x1E8EE0u;
    {
        const bool branch_taken_0x1e8ee0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8EE0u;
        // 0x1e8ee4: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8ee0) {
            ctx->pc = 0x1E8EF8u;
            goto label_1e8ef8;
        }
    }
    ctx->pc = 0x1E8EE8u;
label_1e8ee8:
    // 0x1e8ee8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1e8ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1e8eec:
    // 0x1e8eec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e8eecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8ef0:
    // 0x1e8ef0: 0x10000001  b           . + 4 + (0x1 << 2)
label_1e8ef4:
    if (ctx->pc == 0x1E8EF4u) {
        ctx->pc = 0x1E8EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8EF0u;
        // 0x1e8ef4: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8EF8u;
        goto label_1e8ef8;
    }
    ctx->pc = 0x1E8EF0u;
    {
        const bool branch_taken_0x1e8ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8EF0u;
        // 0x1e8ef4: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8ef0) {
            ctx->pc = 0x1E8EF8u;
            goto label_1e8ef8;
        }
    }
    ctx->pc = 0x1E8EF8u;
label_1e8ef8:
    // 0x1e8ef8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1e8ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1e8efc:
    // 0x1e8efc: 0xe7a10100  swc1        $f1, 0x100($sp)
    ctx->pc = 0x1e8efcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1e8f00:
    // 0x1e8f00: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1e8f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e8f04:
    // 0x1e8f04: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x1e8f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8f08:
    // 0x1e8f08: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e8f08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e8f0c:
    // 0x1e8f0c: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x1e8f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
label_1e8f10:
    // 0x1e8f10: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1e8f10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1e8f14:
    // 0x1e8f14: 0x0  nop
    ctx->pc = 0x1e8f14u;
    // NOP
label_1e8f18:
    // 0x1e8f18: 0xe7a20104  swc1        $f2, 0x104($sp)
    ctx->pc = 0x1e8f18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_1e8f1c:
    // 0x1e8f1c: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x1e8f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
label_1e8f20:
    // 0x1e8f20: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1e8f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_1e8f24:
    // 0x1e8f24: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x1e8f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8f28:
    // 0x1e8f28: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x1e8f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_1e8f2c:
    // 0x1e8f2c: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x1e8f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8f30:
    // 0x1e8f30: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1e8f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_1e8f34:
    // 0x1e8f34: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x1e8f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8f38:
    // 0x1e8f38: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e8f38u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_1e8f3c:
    // 0x1e8f3c: 0x0  nop
    ctx->pc = 0x1e8f3cu;
    // NOP
label_1e8f40:
    // 0x1e8f40: 0x0  nop
    ctx->pc = 0x1e8f40u;
    // NOP
label_1e8f44:
    // 0x1e8f44: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1e8f44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e8f48:
    // 0x1e8f48: 0x0  nop
    ctx->pc = 0x1e8f48u;
    // NOP
label_1e8f4c:
    // 0x1e8f4c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1e8f50:
    if (ctx->pc == 0x1E8F50u) {
        ctx->pc = 0x1E8F54u;
        goto label_1e8f54;
    }
    ctx->pc = 0x1E8F4Cu;
    {
        const bool branch_taken_0x1e8f4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8f4c) {
            ctx->pc = 0x1E8F5Cu;
            goto label_1e8f5c;
        }
    }
    ctx->pc = 0x1E8F54u;
label_1e8f54:
    // 0x1e8f54: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e8f58:
    if (ctx->pc == 0x1E8F58u) {
        ctx->pc = 0x1E8F5Cu;
        goto label_1e8f5c;
    }
    ctx->pc = 0x1E8F54u;
    {
        const bool branch_taken_0x1e8f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8f54) {
            ctx->pc = 0x1E8F64u;
            goto label_1e8f64;
        }
    }
    ctx->pc = 0x1E8F5Cu;
label_1e8f5c:
    // 0x1e8f5c: 0x0  nop
    ctx->pc = 0x1e8f5cu;
    // NOP
label_1e8f60:
    // 0x1e8f60: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x1e8f60u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_1e8f64:
    // 0x1e8f64: 0x0  nop
    ctx->pc = 0x1e8f64u;
    // NOP
label_1e8f68:
    // 0x1e8f68: 0x3c03c170  lui         $v1, 0xC170
    ctx->pc = 0x1e8f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49520 << 16));
label_1e8f6c:
    // 0x1e8f6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e8f6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8f70:
    // 0x1e8f70: 0x0  nop
    ctx->pc = 0x1e8f70u;
    // NOP
label_1e8f74:
    // 0x1e8f74: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1e8f74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e8f78:
    // 0x1e8f78: 0x0  nop
    ctx->pc = 0x1e8f78u;
    // NOP
label_1e8f7c:
    // 0x1e8f7c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1e8f80:
    if (ctx->pc == 0x1E8F80u) {
        ctx->pc = 0x1E8F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8F7Cu;
        // 0x1e8f80: 0xe6430020  swc1        $f3, 0x20($s2) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8F84u;
        goto label_1e8f84;
    }
    ctx->pc = 0x1E8F7Cu;
    {
        const bool branch_taken_0x1e8f7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8F7Cu;
        // 0x1e8f80: 0xe6430020  swc1        $f3, 0x20($s2) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8f7c) {
            ctx->pc = 0x1E8F8Cu;
            goto label_1e8f8c;
        }
    }
    ctx->pc = 0x1E8F84u;
label_1e8f84:
    // 0x1e8f84: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e8f88:
    if (ctx->pc == 0x1E8F88u) {
        ctx->pc = 0x1E8F8Cu;
        goto label_1e8f8c;
    }
    ctx->pc = 0x1E8F84u;
    {
        const bool branch_taken_0x1e8f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8f84) {
            ctx->pc = 0x1E8F94u;
            goto label_1e8f94;
        }
    }
    ctx->pc = 0x1E8F8Cu;
label_1e8f8c:
    // 0x1e8f8c: 0x0  nop
    ctx->pc = 0x1e8f8cu;
    // NOP
label_1e8f90:
    // 0x1e8f90: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x1e8f90u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
label_1e8f94:
    // 0x1e8f94: 0x0  nop
    ctx->pc = 0x1e8f94u;
    // NOP
label_1e8f98:
    // 0x1e8f98: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x1e8f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_1e8f9c:
    // 0x1e8f9c: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x1e8f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8fa0:
    // 0x1e8fa0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e8fa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e8fa4:
    // 0x1e8fa4: 0x0  nop
    ctx->pc = 0x1e8fa4u;
    // NOP
label_1e8fa8:
    // 0x1e8fa8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e8fa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e8fac:
    // 0x1e8fac: 0x0  nop
    ctx->pc = 0x1e8facu;
    // NOP
label_1e8fb0:
    // 0x1e8fb0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1e8fb4:
    if (ctx->pc == 0x1E8FB4u) {
        ctx->pc = 0x1E8FB8u;
        goto label_1e8fb8;
    }
    ctx->pc = 0x1E8FB0u;
    {
        const bool branch_taken_0x1e8fb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8fb0) {
            ctx->pc = 0x1E8FC0u;
            goto label_1e8fc0;
        }
    }
    ctx->pc = 0x1E8FB8u;
label_1e8fb8:
    // 0x1e8fb8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e8fbc:
    if (ctx->pc == 0x1E8FBCu) {
        ctx->pc = 0x1E8FC0u;
        goto label_1e8fc0;
    }
    ctx->pc = 0x1E8FB8u;
    {
        const bool branch_taken_0x1e8fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8fb8) {
            ctx->pc = 0x1E8FC4u;
            goto label_1e8fc4;
        }
    }
    ctx->pc = 0x1E8FC0u;
label_1e8fc0:
    // 0x1e8fc0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1e8fc0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_1e8fc4:
    // 0x1e8fc4: 0x0  nop
    ctx->pc = 0x1e8fc4u;
    // NOP
label_1e8fc8:
    // 0x1e8fc8: 0x3c03c1f0  lui         $v1, 0xC1F0
    ctx->pc = 0x1e8fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49648 << 16));
label_1e8fcc:
    // 0x1e8fcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e8fccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8fd0:
    // 0x1e8fd0: 0x0  nop
    ctx->pc = 0x1e8fd0u;
    // NOP
label_1e8fd4:
    // 0x1e8fd4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e8fd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e8fd8:
    // 0x1e8fd8: 0x0  nop
    ctx->pc = 0x1e8fd8u;
    // NOP
label_1e8fdc:
    // 0x1e8fdc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1e8fe0:
    if (ctx->pc == 0x1E8FE0u) {
        ctx->pc = 0x1E8FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8FDCu;
        // 0x1e8fe0: 0xe6410024  swc1        $f1, 0x24($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8FE4u;
        goto label_1e8fe4;
    }
    ctx->pc = 0x1E8FDCu;
    {
        const bool branch_taken_0x1e8fdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8FDCu;
        // 0x1e8fe0: 0xe6410024  swc1        $f1, 0x24($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8fdc) {
            ctx->pc = 0x1E8FECu;
            goto label_1e8fec;
        }
    }
    ctx->pc = 0x1E8FE4u;
label_1e8fe4:
    // 0x1e8fe4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e8fe8:
    if (ctx->pc == 0x1E8FE8u) {
        ctx->pc = 0x1E8FECu;
        goto label_1e8fec;
    }
    ctx->pc = 0x1E8FE4u;
    {
        const bool branch_taken_0x1e8fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8fe4) {
            ctx->pc = 0x1E8FF4u;
            goto label_1e8ff4;
        }
    }
    ctx->pc = 0x1E8FECu;
label_1e8fec:
    // 0x1e8fec: 0x0  nop
    ctx->pc = 0x1e8fecu;
    // NOP
label_1e8ff0:
    // 0x1e8ff0: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x1e8ff0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_1e8ff4:
    // 0x1e8ff4: 0x0  nop
    ctx->pc = 0x1e8ff4u;
    // NOP
label_1e8ff8:
    // 0x1e8ff8: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x1e8ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
label_1e8ffc:
    // 0x1e8ffc: 0x10000017  b           . + 4 + (0x17 << 2)
label_1e9000:
    if (ctx->pc == 0x1E9000u) {
        ctx->pc = 0x1E9000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8FFCu;
        // 0x1e9000: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9004u;
        goto label_1e9004;
    }
    ctx->pc = 0x1E8FFCu;
    {
        const bool branch_taken_0x1e8ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8FFCu;
        // 0x1e9000: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8ffc) {
            ctx->pc = 0x1E905Cu;
            { ctx->pc = 0x1e905c; return; }
        }
    }
    ctx->pc = 0x1E9004u;
label_1e9004:
    // 0x1e9004: 0x0  nop
    ctx->pc = 0x1e9004u;
    // NOP
label_1e9008:
    // 0x1e9008: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1e9008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e900c:
    // 0x1e900c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1e900cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1e9010:
    // 0x1e9010: 0x84a4020a  lh          $a0, 0x20A($a1)
    ctx->pc = 0x1e9010u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 522)));
label_1e9014:
    // 0x1e9014: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1e9018u;
    return;
}

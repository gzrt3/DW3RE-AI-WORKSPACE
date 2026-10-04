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

// Function: entry_0029b9e8
// Address: 0x29b9e8 - 0x2bfab4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_0029b9e8_part52(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2b4858u: goto label_2b4858;
        case 0x2b485cu: goto label_2b485c;
        case 0x2b4860u: goto label_2b4860;
        case 0x2b4864u: goto label_2b4864;
        case 0x2b4868u: goto label_2b4868;
        case 0x2b486cu: goto label_2b486c;
        case 0x2b4870u: goto label_2b4870;
        case 0x2b4874u: goto label_2b4874;
        case 0x2b4878u: goto label_2b4878;
        case 0x2b487cu: goto label_2b487c;
        case 0x2b4880u: goto label_2b4880;
        case 0x2b4884u: goto label_2b4884;
        case 0x2b4888u: goto label_2b4888;
        case 0x2b488cu: goto label_2b488c;
        case 0x2b4890u: goto label_2b4890;
        case 0x2b4894u: goto label_2b4894;
        case 0x2b4898u: goto label_2b4898;
        case 0x2b489cu: goto label_2b489c;
        case 0x2b48a0u: goto label_2b48a0;
        case 0x2b48a4u: goto label_2b48a4;
        case 0x2b48a8u: goto label_2b48a8;
        case 0x2b48acu: goto label_2b48ac;
        case 0x2b48b0u: goto label_2b48b0;
        case 0x2b48b4u: goto label_2b48b4;
        case 0x2b48b8u: goto label_2b48b8;
        case 0x2b48bcu: goto label_2b48bc;
        case 0x2b48c0u: goto label_2b48c0;
        case 0x2b48c4u: goto label_2b48c4;
        case 0x2b48c8u: goto label_2b48c8;
        case 0x2b48ccu: goto label_2b48cc;
        case 0x2b48d0u: goto label_2b48d0;
        case 0x2b48d4u: goto label_2b48d4;
        case 0x2b48d8u: goto label_2b48d8;
        case 0x2b48dcu: goto label_2b48dc;
        case 0x2b48e0u: goto label_2b48e0;
        case 0x2b48e4u: goto label_2b48e4;
        case 0x2b48e8u: goto label_2b48e8;
        case 0x2b48ecu: goto label_2b48ec;
        case 0x2b48f0u: goto label_2b48f0;
        case 0x2b48f4u: goto label_2b48f4;
        case 0x2b48f8u: goto label_2b48f8;
        case 0x2b48fcu: goto label_2b48fc;
        case 0x2b4900u: goto label_2b4900;
        case 0x2b4904u: goto label_2b4904;
        case 0x2b4908u: goto label_2b4908;
        case 0x2b490cu: goto label_2b490c;
        case 0x2b4910u: goto label_2b4910;
        case 0x2b4914u: goto label_2b4914;
        case 0x2b4918u: goto label_2b4918;
        case 0x2b491cu: goto label_2b491c;
        case 0x2b4920u: goto label_2b4920;
        case 0x2b4924u: goto label_2b4924;
        case 0x2b4928u: goto label_2b4928;
        case 0x2b492cu: goto label_2b492c;
        case 0x2b4930u: goto label_2b4930;
        case 0x2b4934u: goto label_2b4934;
        case 0x2b4938u: goto label_2b4938;
        case 0x2b493cu: goto label_2b493c;
        case 0x2b4940u: goto label_2b4940;
        case 0x2b4944u: goto label_2b4944;
        case 0x2b4948u: goto label_2b4948;
        case 0x2b494cu: goto label_2b494c;
        case 0x2b4950u: goto label_2b4950;
        case 0x2b4954u: goto label_2b4954;
        case 0x2b4958u: goto label_2b4958;
        case 0x2b495cu: goto label_2b495c;
        case 0x2b4960u: goto label_2b4960;
        case 0x2b4964u: goto label_2b4964;
        case 0x2b4968u: goto label_2b4968;
        case 0x2b496cu: goto label_2b496c;
        case 0x2b4970u: goto label_2b4970;
        case 0x2b4974u: goto label_2b4974;
        case 0x2b4978u: goto label_2b4978;
        case 0x2b497cu: goto label_2b497c;
        case 0x2b4980u: goto label_2b4980;
        case 0x2b4984u: goto label_2b4984;
        case 0x2b4988u: goto label_2b4988;
        case 0x2b498cu: goto label_2b498c;
        case 0x2b4990u: goto label_2b4990;
        case 0x2b4994u: goto label_2b4994;
        case 0x2b4998u: goto label_2b4998;
        case 0x2b499cu: goto label_2b499c;
        case 0x2b49a0u: goto label_2b49a0;
        case 0x2b49a4u: goto label_2b49a4;
        case 0x2b49a8u: goto label_2b49a8;
        case 0x2b49acu: goto label_2b49ac;
        case 0x2b49b0u: goto label_2b49b0;
        case 0x2b49b4u: goto label_2b49b4;
        case 0x2b49b8u: goto label_2b49b8;
        case 0x2b49bcu: goto label_2b49bc;
        case 0x2b49c0u: goto label_2b49c0;
        case 0x2b49c4u: goto label_2b49c4;
        case 0x2b49c8u: goto label_2b49c8;
        case 0x2b49ccu: goto label_2b49cc;
        case 0x2b49d0u: goto label_2b49d0;
        case 0x2b49d4u: goto label_2b49d4;
        case 0x2b49d8u: goto label_2b49d8;
        case 0x2b49dcu: goto label_2b49dc;
        case 0x2b49e0u: goto label_2b49e0;
        case 0x2b49e4u: goto label_2b49e4;
        case 0x2b49e8u: goto label_2b49e8;
        case 0x2b49ecu: goto label_2b49ec;
        case 0x2b49f0u: goto label_2b49f0;
        case 0x2b49f4u: goto label_2b49f4;
        case 0x2b49f8u: goto label_2b49f8;
        case 0x2b49fcu: goto label_2b49fc;
        case 0x2b4a00u: goto label_2b4a00;
        case 0x2b4a04u: goto label_2b4a04;
        case 0x2b4a08u: goto label_2b4a08;
        case 0x2b4a0cu: goto label_2b4a0c;
        case 0x2b4a10u: goto label_2b4a10;
        case 0x2b4a14u: goto label_2b4a14;
        case 0x2b4a18u: goto label_2b4a18;
        case 0x2b4a1cu: goto label_2b4a1c;
        case 0x2b4a20u: goto label_2b4a20;
        case 0x2b4a24u: goto label_2b4a24;
        case 0x2b4a28u: goto label_2b4a28;
        case 0x2b4a2cu: goto label_2b4a2c;
        case 0x2b4a30u: goto label_2b4a30;
        case 0x2b4a34u: goto label_2b4a34;
        case 0x2b4a38u: goto label_2b4a38;
        case 0x2b4a3cu: goto label_2b4a3c;
        case 0x2b4a40u: goto label_2b4a40;
        case 0x2b4a44u: goto label_2b4a44;
        case 0x2b4a48u: goto label_2b4a48;
        case 0x2b4a4cu: goto label_2b4a4c;
        case 0x2b4a50u: goto label_2b4a50;
        case 0x2b4a54u: goto label_2b4a54;
        case 0x2b4a58u: goto label_2b4a58;
        case 0x2b4a5cu: goto label_2b4a5c;
        case 0x2b4a60u: goto label_2b4a60;
        case 0x2b4a64u: goto label_2b4a64;
        case 0x2b4a68u: goto label_2b4a68;
        case 0x2b4a6cu: goto label_2b4a6c;
        case 0x2b4a70u: goto label_2b4a70;
        case 0x2b4a74u: goto label_2b4a74;
        case 0x2b4a78u: goto label_2b4a78;
        case 0x2b4a7cu: goto label_2b4a7c;
        case 0x2b4a80u: goto label_2b4a80;
        case 0x2b4a84u: goto label_2b4a84;
        case 0x2b4a88u: goto label_2b4a88;
        case 0x2b4a8cu: goto label_2b4a8c;
        case 0x2b4a90u: goto label_2b4a90;
        case 0x2b4a94u: goto label_2b4a94;
        case 0x2b4a98u: goto label_2b4a98;
        case 0x2b4a9cu: goto label_2b4a9c;
        case 0x2b4aa0u: goto label_2b4aa0;
        case 0x2b4aa4u: goto label_2b4aa4;
        case 0x2b4aa8u: goto label_2b4aa8;
        case 0x2b4aacu: goto label_2b4aac;
        case 0x2b4ab0u: goto label_2b4ab0;
        case 0x2b4ab4u: goto label_2b4ab4;
        case 0x2b4ab8u: goto label_2b4ab8;
        case 0x2b4abcu: goto label_2b4abc;
        case 0x2b4ac0u: goto label_2b4ac0;
        case 0x2b4ac4u: goto label_2b4ac4;
        case 0x2b4ac8u: goto label_2b4ac8;
        case 0x2b4accu: goto label_2b4acc;
        case 0x2b4ad0u: goto label_2b4ad0;
        case 0x2b4ad4u: goto label_2b4ad4;
        case 0x2b4ad8u: goto label_2b4ad8;
        case 0x2b4adcu: goto label_2b4adc;
        case 0x2b4ae0u: goto label_2b4ae0;
        case 0x2b4ae4u: goto label_2b4ae4;
        case 0x2b4ae8u: goto label_2b4ae8;
        case 0x2b4aecu: goto label_2b4aec;
        case 0x2b4af0u: goto label_2b4af0;
        case 0x2b4af4u: goto label_2b4af4;
        case 0x2b4af8u: goto label_2b4af8;
        case 0x2b4afcu: goto label_2b4afc;
        case 0x2b4b00u: goto label_2b4b00;
        case 0x2b4b04u: goto label_2b4b04;
        case 0x2b4b08u: goto label_2b4b08;
        case 0x2b4b0cu: goto label_2b4b0c;
        case 0x2b4b10u: goto label_2b4b10;
        case 0x2b4b14u: goto label_2b4b14;
        case 0x2b4b18u: goto label_2b4b18;
        case 0x2b4b1cu: goto label_2b4b1c;
        case 0x2b4b20u: goto label_2b4b20;
        case 0x2b4b24u: goto label_2b4b24;
        case 0x2b4b28u: goto label_2b4b28;
        case 0x2b4b2cu: goto label_2b4b2c;
        case 0x2b4b30u: goto label_2b4b30;
        case 0x2b4b34u: goto label_2b4b34;
        case 0x2b4b38u: goto label_2b4b38;
        case 0x2b4b3cu: goto label_2b4b3c;
        case 0x2b4b40u: goto label_2b4b40;
        case 0x2b4b44u: goto label_2b4b44;
        case 0x2b4b48u: goto label_2b4b48;
        case 0x2b4b4cu: goto label_2b4b4c;
        case 0x2b4b50u: goto label_2b4b50;
        case 0x2b4b54u: goto label_2b4b54;
        case 0x2b4b58u: goto label_2b4b58;
        case 0x2b4b5cu: goto label_2b4b5c;
        case 0x2b4b60u: goto label_2b4b60;
        case 0x2b4b64u: goto label_2b4b64;
        case 0x2b4b68u: goto label_2b4b68;
        case 0x2b4b6cu: goto label_2b4b6c;
        case 0x2b4b70u: goto label_2b4b70;
        case 0x2b4b74u: goto label_2b4b74;
        case 0x2b4b78u: goto label_2b4b78;
        case 0x2b4b7cu: goto label_2b4b7c;
        case 0x2b4b80u: goto label_2b4b80;
        case 0x2b4b84u: goto label_2b4b84;
        case 0x2b4b88u: goto label_2b4b88;
        case 0x2b4b8cu: goto label_2b4b8c;
        case 0x2b4b90u: goto label_2b4b90;
        case 0x2b4b94u: goto label_2b4b94;
        case 0x2b4b98u: goto label_2b4b98;
        case 0x2b4b9cu: goto label_2b4b9c;
        case 0x2b4ba0u: goto label_2b4ba0;
        case 0x2b4ba4u: goto label_2b4ba4;
        case 0x2b4ba8u: goto label_2b4ba8;
        case 0x2b4bacu: goto label_2b4bac;
        case 0x2b4bb0u: goto label_2b4bb0;
        case 0x2b4bb4u: goto label_2b4bb4;
        case 0x2b4bb8u: goto label_2b4bb8;
        case 0x2b4bbcu: goto label_2b4bbc;
        case 0x2b4bc0u: goto label_2b4bc0;
        case 0x2b4bc4u: goto label_2b4bc4;
        case 0x2b4bc8u: goto label_2b4bc8;
        case 0x2b4bccu: goto label_2b4bcc;
        case 0x2b4bd0u: goto label_2b4bd0;
        case 0x2b4bd4u: goto label_2b4bd4;
        case 0x2b4bd8u: goto label_2b4bd8;
        case 0x2b4bdcu: goto label_2b4bdc;
        case 0x2b4be0u: goto label_2b4be0;
        case 0x2b4be4u: goto label_2b4be4;
        case 0x2b4be8u: goto label_2b4be8;
        case 0x2b4becu: goto label_2b4bec;
        case 0x2b4bf0u: goto label_2b4bf0;
        case 0x2b4bf4u: goto label_2b4bf4;
        case 0x2b4bf8u: goto label_2b4bf8;
        case 0x2b4bfcu: goto label_2b4bfc;
        case 0x2b4c00u: goto label_2b4c00;
        case 0x2b4c04u: goto label_2b4c04;
        case 0x2b4c08u: goto label_2b4c08;
        case 0x2b4c0cu: goto label_2b4c0c;
        case 0x2b4c10u: goto label_2b4c10;
        case 0x2b4c14u: goto label_2b4c14;
        case 0x2b4c18u: goto label_2b4c18;
        case 0x2b4c1cu: goto label_2b4c1c;
        case 0x2b4c20u: goto label_2b4c20;
        case 0x2b4c24u: goto label_2b4c24;
        case 0x2b4c28u: goto label_2b4c28;
        case 0x2b4c2cu: goto label_2b4c2c;
        case 0x2b4c30u: goto label_2b4c30;
        case 0x2b4c34u: goto label_2b4c34;
        case 0x2b4c38u: goto label_2b4c38;
        case 0x2b4c3cu: goto label_2b4c3c;
        case 0x2b4c40u: goto label_2b4c40;
        case 0x2b4c44u: goto label_2b4c44;
        case 0x2b4c48u: goto label_2b4c48;
        case 0x2b4c4cu: goto label_2b4c4c;
        case 0x2b4c50u: goto label_2b4c50;
        case 0x2b4c54u: goto label_2b4c54;
        case 0x2b4c58u: goto label_2b4c58;
        case 0x2b4c5cu: goto label_2b4c5c;
        case 0x2b4c60u: goto label_2b4c60;
        case 0x2b4c64u: goto label_2b4c64;
        case 0x2b4c68u: goto label_2b4c68;
        case 0x2b4c6cu: goto label_2b4c6c;
        case 0x2b4c70u: goto label_2b4c70;
        case 0x2b4c74u: goto label_2b4c74;
        case 0x2b4c78u: goto label_2b4c78;
        case 0x2b4c7cu: goto label_2b4c7c;
        case 0x2b4c80u: goto label_2b4c80;
        case 0x2b4c84u: goto label_2b4c84;
        case 0x2b4c88u: goto label_2b4c88;
        case 0x2b4c8cu: goto label_2b4c8c;
        case 0x2b4c90u: goto label_2b4c90;
        case 0x2b4c94u: goto label_2b4c94;
        case 0x2b4c98u: goto label_2b4c98;
        case 0x2b4c9cu: goto label_2b4c9c;
        case 0x2b4ca0u: goto label_2b4ca0;
        case 0x2b4ca4u: goto label_2b4ca4;
        case 0x2b4ca8u: goto label_2b4ca8;
        case 0x2b4cacu: goto label_2b4cac;
        case 0x2b4cb0u: goto label_2b4cb0;
        case 0x2b4cb4u: goto label_2b4cb4;
        case 0x2b4cb8u: goto label_2b4cb8;
        case 0x2b4cbcu: goto label_2b4cbc;
        case 0x2b4cc0u: goto label_2b4cc0;
        case 0x2b4cc4u: goto label_2b4cc4;
        case 0x2b4cc8u: goto label_2b4cc8;
        case 0x2b4cccu: goto label_2b4ccc;
        case 0x2b4cd0u: goto label_2b4cd0;
        case 0x2b4cd4u: goto label_2b4cd4;
        case 0x2b4cd8u: goto label_2b4cd8;
        case 0x2b4cdcu: goto label_2b4cdc;
        case 0x2b4ce0u: goto label_2b4ce0;
        case 0x2b4ce4u: goto label_2b4ce4;
        case 0x2b4ce8u: goto label_2b4ce8;
        case 0x2b4cecu: goto label_2b4cec;
        case 0x2b4cf0u: goto label_2b4cf0;
        case 0x2b4cf4u: goto label_2b4cf4;
        case 0x2b4cf8u: goto label_2b4cf8;
        case 0x2b4cfcu: goto label_2b4cfc;
        case 0x2b4d00u: goto label_2b4d00;
        case 0x2b4d04u: goto label_2b4d04;
        case 0x2b4d08u: goto label_2b4d08;
        case 0x2b4d0cu: goto label_2b4d0c;
        case 0x2b4d10u: goto label_2b4d10;
        case 0x2b4d14u: goto label_2b4d14;
        case 0x2b4d18u: goto label_2b4d18;
        case 0x2b4d1cu: goto label_2b4d1c;
        case 0x2b4d20u: goto label_2b4d20;
        case 0x2b4d24u: goto label_2b4d24;
        case 0x2b4d28u: goto label_2b4d28;
        case 0x2b4d2cu: goto label_2b4d2c;
        case 0x2b4d30u: goto label_2b4d30;
        case 0x2b4d34u: goto label_2b4d34;
        case 0x2b4d38u: goto label_2b4d38;
        case 0x2b4d3cu: goto label_2b4d3c;
        case 0x2b4d40u: goto label_2b4d40;
        case 0x2b4d44u: goto label_2b4d44;
        case 0x2b4d48u: goto label_2b4d48;
        case 0x2b4d4cu: goto label_2b4d4c;
        case 0x2b4d50u: goto label_2b4d50;
        case 0x2b4d54u: goto label_2b4d54;
        case 0x2b4d58u: goto label_2b4d58;
        case 0x2b4d5cu: goto label_2b4d5c;
        case 0x2b4d60u: goto label_2b4d60;
        case 0x2b4d64u: goto label_2b4d64;
        case 0x2b4d68u: goto label_2b4d68;
        case 0x2b4d6cu: goto label_2b4d6c;
        case 0x2b4d70u: goto label_2b4d70;
        case 0x2b4d74u: goto label_2b4d74;
        case 0x2b4d78u: goto label_2b4d78;
        case 0x2b4d7cu: goto label_2b4d7c;
        case 0x2b4d80u: goto label_2b4d80;
        case 0x2b4d84u: goto label_2b4d84;
        case 0x2b4d88u: goto label_2b4d88;
        case 0x2b4d8cu: goto label_2b4d8c;
        case 0x2b4d90u: goto label_2b4d90;
        case 0x2b4d94u: goto label_2b4d94;
        case 0x2b4d98u: goto label_2b4d98;
        case 0x2b4d9cu: goto label_2b4d9c;
        case 0x2b4da0u: goto label_2b4da0;
        case 0x2b4da4u: goto label_2b4da4;
        case 0x2b4da8u: goto label_2b4da8;
        case 0x2b4dacu: goto label_2b4dac;
        case 0x2b4db0u: goto label_2b4db0;
        case 0x2b4db4u: goto label_2b4db4;
        case 0x2b4db8u: goto label_2b4db8;
        case 0x2b4dbcu: goto label_2b4dbc;
        case 0x2b4dc0u: goto label_2b4dc0;
        case 0x2b4dc4u: goto label_2b4dc4;
        case 0x2b4dc8u: goto label_2b4dc8;
        case 0x2b4dccu: goto label_2b4dcc;
        case 0x2b4dd0u: goto label_2b4dd0;
        case 0x2b4dd4u: goto label_2b4dd4;
        case 0x2b4dd8u: goto label_2b4dd8;
        case 0x2b4ddcu: goto label_2b4ddc;
        case 0x2b4de0u: goto label_2b4de0;
        case 0x2b4de4u: goto label_2b4de4;
        case 0x2b4de8u: goto label_2b4de8;
        case 0x2b4decu: goto label_2b4dec;
        case 0x2b4df0u: goto label_2b4df0;
        case 0x2b4df4u: goto label_2b4df4;
        case 0x2b4df8u: goto label_2b4df8;
        case 0x2b4dfcu: goto label_2b4dfc;
        case 0x2b4e00u: goto label_2b4e00;
        case 0x2b4e04u: goto label_2b4e04;
        case 0x2b4e08u: goto label_2b4e08;
        case 0x2b4e0cu: goto label_2b4e0c;
        case 0x2b4e10u: goto label_2b4e10;
        case 0x2b4e14u: goto label_2b4e14;
        case 0x2b4e18u: goto label_2b4e18;
        case 0x2b4e1cu: goto label_2b4e1c;
        case 0x2b4e20u: goto label_2b4e20;
        case 0x2b4e24u: goto label_2b4e24;
        case 0x2b4e28u: goto label_2b4e28;
        case 0x2b4e2cu: goto label_2b4e2c;
        case 0x2b4e30u: goto label_2b4e30;
        case 0x2b4e34u: goto label_2b4e34;
        case 0x2b4e38u: goto label_2b4e38;
        case 0x2b4e3cu: goto label_2b4e3c;
        case 0x2b4e40u: goto label_2b4e40;
        case 0x2b4e44u: goto label_2b4e44;
        case 0x2b4e48u: goto label_2b4e48;
        case 0x2b4e4cu: goto label_2b4e4c;
        case 0x2b4e50u: goto label_2b4e50;
        case 0x2b4e54u: goto label_2b4e54;
        case 0x2b4e58u: goto label_2b4e58;
        case 0x2b4e5cu: goto label_2b4e5c;
        case 0x2b4e60u: goto label_2b4e60;
        case 0x2b4e64u: goto label_2b4e64;
        case 0x2b4e68u: goto label_2b4e68;
        case 0x2b4e6cu: goto label_2b4e6c;
        case 0x2b4e70u: goto label_2b4e70;
        case 0x2b4e74u: goto label_2b4e74;
        case 0x2b4e78u: goto label_2b4e78;
        case 0x2b4e7cu: goto label_2b4e7c;
        case 0x2b4e80u: goto label_2b4e80;
        case 0x2b4e84u: goto label_2b4e84;
        case 0x2b4e88u: goto label_2b4e88;
        case 0x2b4e8cu: goto label_2b4e8c;
        case 0x2b4e90u: goto label_2b4e90;
        case 0x2b4e94u: goto label_2b4e94;
        case 0x2b4e98u: goto label_2b4e98;
        case 0x2b4e9cu: goto label_2b4e9c;
        case 0x2b4ea0u: goto label_2b4ea0;
        case 0x2b4ea4u: goto label_2b4ea4;
        case 0x2b4ea8u: goto label_2b4ea8;
        case 0x2b4eacu: goto label_2b4eac;
        case 0x2b4eb0u: goto label_2b4eb0;
        case 0x2b4eb4u: goto label_2b4eb4;
        case 0x2b4eb8u: goto label_2b4eb8;
        case 0x2b4ebcu: goto label_2b4ebc;
        case 0x2b4ec0u: goto label_2b4ec0;
        case 0x2b4ec4u: goto label_2b4ec4;
        case 0x2b4ec8u: goto label_2b4ec8;
        case 0x2b4eccu: goto label_2b4ecc;
        case 0x2b4ed0u: goto label_2b4ed0;
        case 0x2b4ed4u: goto label_2b4ed4;
        case 0x2b4ed8u: goto label_2b4ed8;
        case 0x2b4edcu: goto label_2b4edc;
        case 0x2b4ee0u: goto label_2b4ee0;
        case 0x2b4ee4u: goto label_2b4ee4;
        case 0x2b4ee8u: goto label_2b4ee8;
        case 0x2b4eecu: goto label_2b4eec;
        case 0x2b4ef0u: goto label_2b4ef0;
        case 0x2b4ef4u: goto label_2b4ef4;
        case 0x2b4ef8u: goto label_2b4ef8;
        case 0x2b4efcu: goto label_2b4efc;
        case 0x2b4f00u: goto label_2b4f00;
        case 0x2b4f04u: goto label_2b4f04;
        case 0x2b4f08u: goto label_2b4f08;
        case 0x2b4f0cu: goto label_2b4f0c;
        case 0x2b4f10u: goto label_2b4f10;
        case 0x2b4f14u: goto label_2b4f14;
        case 0x2b4f18u: goto label_2b4f18;
        case 0x2b4f1cu: goto label_2b4f1c;
        case 0x2b4f20u: goto label_2b4f20;
        case 0x2b4f24u: goto label_2b4f24;
        case 0x2b4f28u: goto label_2b4f28;
        case 0x2b4f2cu: goto label_2b4f2c;
        case 0x2b4f30u: goto label_2b4f30;
        case 0x2b4f34u: goto label_2b4f34;
        case 0x2b4f38u: goto label_2b4f38;
        case 0x2b4f3cu: goto label_2b4f3c;
        case 0x2b4f40u: goto label_2b4f40;
        case 0x2b4f44u: goto label_2b4f44;
        case 0x2b4f48u: goto label_2b4f48;
        case 0x2b4f4cu: goto label_2b4f4c;
        case 0x2b4f50u: goto label_2b4f50;
        case 0x2b4f54u: goto label_2b4f54;
        case 0x2b4f58u: goto label_2b4f58;
        case 0x2b4f5cu: goto label_2b4f5c;
        case 0x2b4f60u: goto label_2b4f60;
        case 0x2b4f64u: goto label_2b4f64;
        case 0x2b4f68u: goto label_2b4f68;
        case 0x2b4f6cu: goto label_2b4f6c;
        case 0x2b4f70u: goto label_2b4f70;
        case 0x2b4f74u: goto label_2b4f74;
        case 0x2b4f78u: goto label_2b4f78;
        case 0x2b4f7cu: goto label_2b4f7c;
        case 0x2b4f80u: goto label_2b4f80;
        case 0x2b4f84u: goto label_2b4f84;
        case 0x2b4f88u: goto label_2b4f88;
        case 0x2b4f8cu: goto label_2b4f8c;
        case 0x2b4f90u: goto label_2b4f90;
        case 0x2b4f94u: goto label_2b4f94;
        case 0x2b4f98u: goto label_2b4f98;
        case 0x2b4f9cu: goto label_2b4f9c;
        case 0x2b4fa0u: goto label_2b4fa0;
        case 0x2b4fa4u: goto label_2b4fa4;
        case 0x2b4fa8u: goto label_2b4fa8;
        case 0x2b4facu: goto label_2b4fac;
        case 0x2b4fb0u: goto label_2b4fb0;
        case 0x2b4fb4u: goto label_2b4fb4;
        case 0x2b4fb8u: goto label_2b4fb8;
        case 0x2b4fbcu: goto label_2b4fbc;
        case 0x2b4fc0u: goto label_2b4fc0;
        case 0x2b4fc4u: goto label_2b4fc4;
        case 0x2b4fc8u: goto label_2b4fc8;
        case 0x2b4fccu: goto label_2b4fcc;
        case 0x2b4fd0u: goto label_2b4fd0;
        case 0x2b4fd4u: goto label_2b4fd4;
        case 0x2b4fd8u: goto label_2b4fd8;
        case 0x2b4fdcu: goto label_2b4fdc;
        case 0x2b4fe0u: goto label_2b4fe0;
        case 0x2b4fe4u: goto label_2b4fe4;
        case 0x2b4fe8u: goto label_2b4fe8;
        case 0x2b4fecu: goto label_2b4fec;
        case 0x2b4ff0u: goto label_2b4ff0;
        case 0x2b4ff4u: goto label_2b4ff4;
        case 0x2b4ff8u: goto label_2b4ff8;
        case 0x2b4ffcu: goto label_2b4ffc;
        case 0x2b5000u: goto label_2b5000;
        case 0x2b5004u: goto label_2b5004;
        case 0x2b5008u: goto label_2b5008;
        case 0x2b500cu: goto label_2b500c;
        case 0x2b5010u: goto label_2b5010;
        case 0x2b5014u: goto label_2b5014;
        case 0x2b5018u: goto label_2b5018;
        case 0x2b501cu: goto label_2b501c;
        case 0x2b5020u: goto label_2b5020;
        case 0x2b5024u: goto label_2b5024;
        default: return;
    }

label_2b4858:
    // 0x2b4858: 0x81f903bc  lb          $t9, 0x3BC($t7)
    ctx->pc = 0x2b4858u;
    SET_GPR_S32(ctx, 25, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2b485c:
    // 0x2b485c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b485cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4860:
    // 0x2b4860: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4860u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4864:
    // 0x2b4864: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4864u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4868:
    // 0x2b4868: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4868u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b486c:
    // 0x2b486c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b486cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4870:
    // 0x2b4870: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4870u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4874:
    // 0x2b4874: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4874u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4878:
    // 0x2b4878: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4878u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b487c:
    // 0x2b487c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b487cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4880:
    // 0x2b4880: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4880u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4884:
    // 0x2b4884: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4884u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4888:
    // 0x2b4888: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4888u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b488c:
    // 0x2b488c: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b488cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2b4890:
    // 0x2b4890: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4890u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4894:
    // 0x2b4894: 0x20f6a1  .word       0x0020F6A1                   # addu        $fp, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4894u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2b4898:
    // 0x2b4898: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4898u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b489c:
    // 0x2b489c: 0x1e0ce1c  .word       0x01E0CE1C                   # dmult       $t7, $zero # 0000CE00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b489cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B489C raw=0x01E0CE1C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b48a0:
    // 0x2b48a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b48a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b48a4:
    // 0x2b48a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b48a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b48a8:
    // 0x2b48a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b48a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b48ac:
    // 0x2b48ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b48acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b48b0:
    // 0x2b48b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b48b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b48b4:
    // 0x2b48b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b48b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b48b8:
    // 0x2b48b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b48b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b48bc:
    // 0x2b48bc: 0x20d69f  .word       0x0020D69F                   # ddivu       $k0, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b48bcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2B48BC raw=0x0020D69F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b48c0:
    // 0x2b48c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b48c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b48c4:
    // 0x2b48c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b48c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b48c8:
    // 0x2b48c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b48c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b48cc:
    // 0x2b48cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b48ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b48d0:
    // 0x2b48d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b48d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b48d4:
    // 0x2b48d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b48d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b48d8:
    // 0x2b48d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b48d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b48dc:
    // 0x2b48dc: 0x20d610  .word       0x0020D610                   # mfhi        $k0 # 00200600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b48dcu;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2b48e0:
    // 0x2b48e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b48e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b48e4:
    // 0x2b48e4: 0x1fac17d  .word       0x01FAC17D                   # INVALID     $t7, $k0, -0x3E83 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b48e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B48E4 raw=0x01FAC17D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b48e8:
    // 0x2b48e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b48e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b48ec:
    // 0x2b48ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b48ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b48f0:
    // 0x2b48f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b48f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b48f4:
    // 0x2b48f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b48f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b48f8:
    // 0x2b48f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b48f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b48fc:
    // 0x2b48fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b48fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4900:
    // 0x2b4900: 0x3e7d002  .word       0x03E7D002                   # srl         $k0, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4900u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 7), 0));
label_2b4904:
    // 0x2b4904: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4904u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4908:
    // 0x2b4908: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4908u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b490c:
    // 0x2b490c: 0x400583  .word       0x00400583                   # sra         $zero, $zero, 22 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b490cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 22));
label_2b4910:
    // 0x2b4910: 0x1964002  .word       0x01964002                   # srl         $t0, $s6, 0 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4910u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 22), 0));
label_2b4914:
    // 0x2b4914: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4914u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4918:
    // 0x2b4918: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4918u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b491c:
    // 0x2b491c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b491cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4920:
    // 0x2b4920: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4920u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4924:
    // 0x2b4924: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4924u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4928:
    // 0x2b4928: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4928u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b492c:
    // 0x2b492c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b492cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4930:
    // 0x2b4930: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4930u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4934:
    // 0x2b4934: 0x1c0b71c  .word       0x01C0B71C                   # dmult       $t6, $zero # 0000B700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4934u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B4934 raw=0x01C0B71C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4938:
    // 0x2b4938: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4938u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b493c:
    // 0x2b493c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b493cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4940:
    // 0x2b4940: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4940u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4944:
    // 0x2b4944: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4944u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4948:
    // 0x2b4948: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4948u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b494c:
    // 0x2b494c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b494cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4950:
    // 0x2b4950: 0x3e7e000  .word       0x03E7E000                   # sll         $gp, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4950u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2b4954:
    // 0x2b4954: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4954u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4958:
    // 0x2b4958: 0x1fb4001  .word       0x01FB4001                   # INVALID     $t7, $k1, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4958u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B4958 raw=0x01FB4001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b495c:
    // 0x2b495c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b495cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4960:
    // 0x2b4960: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4960u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4964:
    // 0x2b4964: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4964u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4968:
    // 0x2b4968: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4968u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b496c:
    // 0x2b496c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b496cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4970:
    // 0x2b4970: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4970u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4974:
    // 0x2b4974: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4974u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4978:
    // 0x2b4978: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4978u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b497c:
    // 0x2b497c: 0x1fdd97c  .word       0x01FDD97C                   # dsll32      $k1, $sp, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b497cu;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 29) << (32 + 5));
label_2b4980:
    // 0x2b4980: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4980u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4984:
    // 0x2b4984: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4984u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4988:
    // 0x2b4988: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4988u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b498c:
    // 0x2b498c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b498cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4990:
    // 0x2b4990: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4990u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4994:
    // 0x2b4994: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4994u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4998:
    // 0x2b4998: 0x3e7e801  .word       0x03E7E801                   # INVALID     $ra, $a3, -0x17FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4998u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B4998 raw=0x03E7E801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b499c:
    // 0x2b499c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b499cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b49a0:
    // 0x2b49a0: 0x10073803  beq         $zero, $a3, . + 4 + (0x3803 << 2)
label_2b49a4:
    if (ctx->pc == 0x2B49A4u) {
        ctx->pc = 0x2B49A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B49A0u;
        // 0x2b49a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B49A8u;
        goto label_2b49a8;
    }
    ctx->pc = 0x2B49A0u;
    {
        const bool branch_taken_0x2b49a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B49A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B49A0u;
        // 0x2b49a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b49a0) {
            ctx->pc = 0x2C29B0u;
            return;
        }
    }
    ctx->pc = 0x2B49A8u;
label_2b49a8:
    // 0x2b49a8: 0x10084003  beq         $zero, $t0, . + 4 + (0x4003 << 2)
label_2b49ac:
    if (ctx->pc == 0x2B49ACu) {
        ctx->pc = 0x2B49ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B49A8u;
        // 0x2b49ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B49B0u;
        goto label_2b49b0;
    }
    ctx->pc = 0x2B49A8u;
    {
        const bool branch_taken_0x2b49a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B49ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B49A8u;
        // 0x2b49ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b49a8) {
            ctx->pc = 0x2C49B8u;
            return;
        }
    }
    ctx->pc = 0x2B49B0u;
label_2b49b0:
    // 0x2b49b0: 0x800a57f2  lb          $t2, 0x57F2($zero)
    ctx->pc = 0x2b49b0u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x57F2u));
label_2b49b4:
    // 0x2b49b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b49b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b49b8:
    // 0x2b49b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b49b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b49bc:
    // 0x2b49bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b49bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b49c0:
    // 0x2b49c0: 0x520a07c7  beql        $s0, $t2, . + 4 + (0x7C7 << 2)
label_2b49c4:
    if (ctx->pc == 0x2B49C4u) {
        ctx->pc = 0x2B49C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B49C0u;
        // 0x2b49c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B49C8u;
        goto label_2b49c8;
    }
    ctx->pc = 0x2B49C0u;
    {
        const bool branch_taken_0x2b49c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2b49c0) {
            ctx->pc = 0x2B49C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B49C0u;
            // 0x2b49c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B68E0u;
            { ctx->pc = 0x2b68e0; return; }
        }
    }
    ctx->pc = 0x2B49C8u;
label_2b49c8:
    // 0x2b49c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b49c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b49cc:
    // 0x2b49cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b49ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b49d0:
    // 0x2b49d0: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2b49d0u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2B49D0 raw=0x48000800");
 /* MITIGATED */
label_2b49d4:
    // 0x2b49d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b49d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b49d8:
    // 0x2b49d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b49d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b49dc:
    // 0x2b49dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b49dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b49e0:
    // 0x2b49e0: 0x4201069e  .word       0x4201069E                   # INVALID     $s0, $at, 0x69E # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b49e0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1E at 0x2B49E0 raw=0x4201069E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b49e4:
    // 0x2b49e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b49e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b49e8:
    // 0x2b49e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b49e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b49ec:
    // 0x2b49ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b49ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b49f0:
    // 0x2b49f0: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b49f0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b49f4:
    // 0x2b49f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b49f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b49f8:
    // 0x2b49f8: 0x10011006  beq         $zero, $at, . + 4 + (0x1006 << 2)
label_2b49fc:
    if (ctx->pc == 0x2B49FCu) {
        ctx->pc = 0x2B49FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B49F8u;
        // 0x2b49fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4A00u;
        goto label_2b4a00;
    }
    ctx->pc = 0x2B49F8u;
    {
        const bool branch_taken_0x2b49f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2B49FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B49F8u;
        // 0x2b49fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b49f8) {
            ctx->pc = 0x2B8A14u;
            { ctx->pc = 0x2b8a14; return; }
        }
    }
    ctx->pc = 0x2B4A00u;
label_2b4a00:
    // 0x2b4a00: 0x10030066  beq         $zero, $v1, . + 4 + (0x66 << 2)
label_2b4a04:
    if (ctx->pc == 0x2B4A04u) {
        ctx->pc = 0x2B4A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A00u;
        // 0x2b4a04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4A08u;
        goto label_2b4a08;
    }
    ctx->pc = 0x2B4A00u;
    {
        const bool branch_taken_0x2b4a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B4A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A00u;
        // 0x2b4a04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4a00) {
            ctx->pc = 0x2B4B9Cu;
            goto label_2b4b9c;
        }
    }
    ctx->pc = 0x2B4A08u;
label_2b4a08:
    // 0x2b4a08: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4a08u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B4A08 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4a0c:
    // 0x2b4a0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4a0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4a10:
    // 0x2b4a10: 0x10021046  beq         $zero, $v0, . + 4 + (0x1046 << 2)
label_2b4a14:
    if (ctx->pc == 0x2B4A14u) {
        ctx->pc = 0x2B4A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A10u;
        // 0x2b4a14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4A18u;
        goto label_2b4a18;
    }
    ctx->pc = 0x2B4A10u;
    {
        const bool branch_taken_0x2b4a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B4A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A10u;
        // 0x2b4a14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4a10) {
            ctx->pc = 0x2B8B2Cu;
            { ctx->pc = 0x2b8b2c; return; }
        }
    }
    ctx->pc = 0x2B4A18u;
label_2b4a18:
    // 0x2b4a18: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2b4a1c:
    if (ctx->pc == 0x2B4A1Cu) {
        ctx->pc = 0x2B4A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A18u;
        // 0x2b4a1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4A20u;
        goto label_2b4a20;
    }
    ctx->pc = 0x2B4A18u;
    {
        const bool branch_taken_0x2b4a18 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B4A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A18u;
        // 0x2b4a1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4a18) {
            ctx->pc = 0x2B6A18u;
            { ctx->pc = 0x2b6a18; return; }
        }
    }
    ctx->pc = 0x2B4A20u;
label_2b4a20:
    // 0x2b4a20: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2b4a24:
    if (ctx->pc == 0x2B4A24u) {
        ctx->pc = 0x2B4A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A20u;
        // 0x2b4a24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4A28u;
        goto label_2b4a28;
    }
    ctx->pc = 0x2B4A20u;
    {
        const bool branch_taken_0x2b4a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B4A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A20u;
        // 0x2b4a24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4a20) {
            ctx->pc = 0x2CAA28u;
            return;
        }
    }
    ctx->pc = 0x2B4A28u;
label_2b4a28:
    // 0x2b4a28: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4a28u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2b4a2c:
    // 0x2b4a2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4a2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4a30:
    // 0x2b4a30: 0x3e2d001  .word       0x03E2D001                   # INVALID     $ra, $v0, -0x2FFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4a30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B4A30 raw=0x03E2D001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4a34:
    // 0x2b4a34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4a34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4a38:
    // 0x2b4a38: 0xb0b1000  j           func_C2C4000
label_2b4a3c:
    if (ctx->pc == 0x2B4A3Cu) {
        ctx->pc = 0x2B4A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A38u;
        // 0x2b4a3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4A40u;
        goto label_2b4a40;
    }
    ctx->pc = 0x2B4A38u;
    ctx->pc = 0x2B4A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4A38u;
    // 0x2b4a3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2B4A38u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B4A40u;
label_2b4a40:
    // 0x2b4a40: 0xa800fff  j           func_A003FFC
label_2b4a44:
    if (ctx->pc == 0x2B4A44u) {
        ctx->pc = 0x2B4A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A40u;
        // 0x2b4a44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4A48u;
        goto label_2b4a48;
    }
    ctx->pc = 0x2B4A40u;
    ctx->pc = 0x2B4A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4A40u;
    // 0x2b4a44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA003FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA003FFCu, 0x2B4A40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B4A48u;
label_2b4a48:
    // 0x2b4a48: 0xb030fff  j           func_C0C3FFC
label_2b4a4c:
    if (ctx->pc == 0x2B4A4Cu) {
        ctx->pc = 0x2B4A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A48u;
        // 0x2b4a4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4A50u;
        goto label_2b4a50;
    }
    ctx->pc = 0x2B4A48u;
    ctx->pc = 0x2B4A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4A48u;
    // 0x2b4a4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC0C3FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC0C3FFCu, 0x2B4A48u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B4A50u;
label_2b4a50:
    // 0x2b4a50: 0x100f7012  beq         $zero, $t7, . + 4 + (0x7012 << 2)
label_2b4a54:
    if (ctx->pc == 0x2B4A54u) {
        ctx->pc = 0x2B4A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A50u;
        // 0x2b4a54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4A58u;
        goto label_2b4a58;
    }
    ctx->pc = 0x2B4A50u;
    {
        const bool branch_taken_0x2b4a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 15));
        ctx->pc = 0x2B4A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A50u;
        // 0x2b4a54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4a50) {
            ctx->pc = 0x2D0A9Cu;
            return;
        }
    }
    ctx->pc = 0x2B4A58u;
label_2b4a58:
    // 0x2b4a58: 0x1f67ff9  .word       0x01F67FF9                   # INVALID     $t7, $s6, 0x7FF9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4a58u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2B4A58 raw=0x01F67FF9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4a5c:
    // 0x2b4a5c: 0x1e0ffd8  .word       0x01E0FFD8                   # mult        $ra, $t7, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b4a5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2b4a60:
    // 0x2b4a60: 0x1f77ffc  .word       0x01F77FFC                   # dsll32      $t7, $s7, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4a60u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 23) << (32 + 31));
label_2b4a64:
    // 0x2b4a64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4a64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4a68:
    // 0x2b4a68: 0x1f87fff  .word       0x01F87FFF                   # dsra32      $t7, $t8, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4a68u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 24) >> (32 + 31));
label_2b4a6c:
    // 0x2b4a6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4a6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4a70:
    // 0x2b4a70: 0x1f57ff8  .word       0x01F57FF8                   # dsll        $t7, $s5, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4a70u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 21) << 31);
label_2b4a74:
    // 0x2b4a74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4a74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4a78:
    // 0x2b4a78: 0x1f37ffb  .word       0x01F37FFB                   # dsra        $t7, $s3, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4a78u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 19) >> 31);
label_2b4a7c:
    // 0x2b4a7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4a7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4a80:
    // 0x2b4a80: 0x1f47ffe  .word       0x01F47FFE                   # dsrl32      $t7, $s4, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4a80u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) >> (32 + 31));
label_2b4a84:
    // 0x2b4a84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4a84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4a88:
    // 0x2b4a88: 0x1f07ff7  .word       0x01F07FF7                   # INVALID     $t7, $s0, 0x7FF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4a88u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2B4A88 raw=0x01F07FF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4a8c:
    // 0x2b4a8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4a8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4a90:
    // 0x2b4a90: 0x1f17ffa  .word       0x01F17FFA                   # dsrl        $t7, $s1, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4a90u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) >> 31);
label_2b4a94:
    // 0x2b4a94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4a94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4a98:
    // 0x2b4a98: 0x1f27ffd  .word       0x01F27FFD                   # INVALID     $t7, $s2, 0x7FFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4a98u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B4A98 raw=0x01F27FFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4a9c:
    // 0x2b4a9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4a9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4aa0:
    // 0x2b4aa0: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b4aa0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b4aa4:
    // 0x2b4aa4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4aa4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4aa8:
    // 0x2b4aa8: 0x10081006  beq         $zero, $t0, . + 4 + (0x1006 << 2)
label_2b4aac:
    if (ctx->pc == 0x2B4AACu) {
        ctx->pc = 0x2B4AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4AA8u;
        // 0x2b4aac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4AB0u;
        goto label_2b4ab0;
    }
    ctx->pc = 0x2B4AA8u;
    {
        const bool branch_taken_0x2b4aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B4AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4AA8u;
        // 0x2b4aac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4aa8) {
            ctx->pc = 0x2B8AC4u;
            { ctx->pc = 0x2b8ac4; return; }
        }
    }
    ctx->pc = 0x2B4AB0u;
label_2b4ab0:
    // 0x2b4ab0: 0x10091026  beq         $zero, $t1, . + 4 + (0x1026 << 2)
label_2b4ab4:
    if (ctx->pc == 0x2B4AB4u) {
        ctx->pc = 0x2B4AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4AB0u;
        // 0x2b4ab4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4AB8u;
        goto label_2b4ab8;
    }
    ctx->pc = 0x2B4AB0u;
    {
        const bool branch_taken_0x2b4ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B4AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4AB0u;
        // 0x2b4ab4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4ab0) {
            ctx->pc = 0x2B8B4Cu;
            { ctx->pc = 0x2b8b4c; return; }
        }
    }
    ctx->pc = 0x2B4AB8u;
label_2b4ab8:
    // 0x2b4ab8: 0x3e8a801  .word       0x03E8A801                   # INVALID     $ra, $t0, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4ab8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B4AB8 raw=0x03E8A801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4abc:
    // 0x2b4abc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4abcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4ac0:
    // 0x2b4ac0: 0x3e89804  sllv        $s3, $t0, $ra
    ctx->pc = 0x2b4ac0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2b4ac4:
    // 0x2b4ac4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4ac4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4ac8:
    // 0x2b4ac8: 0x3e8a007  srav        $s4, $t0, $ra
    ctx->pc = 0x2b4ac8u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2b4acc:
    // 0x2b4acc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4accu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4ad0:
    // 0x2b4ad0: 0x3e8a80a  movz        $s5, $ra, $t0
    ctx->pc = 0x2b4ad0u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 31));
label_2b4ad4:
    // 0x2b4ad4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4ad4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4ad8:
    // 0x2b4ad8: 0x3e8b002  .word       0x03E8B002                   # srl         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4ad8u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_2b4adc:
    // 0x2b4adc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4adcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4ae0:
    // 0x2b4ae0: 0x3e8b805  .word       0x03E8B805                   # INVALID     $ra, $t0, -0x47FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4ae0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B4AE0 raw=0x03E8B805"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4ae4:
    // 0x2b4ae4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4ae4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4ae8:
    // 0x2b4ae8: 0x3e8c008  .word       0x03E8C008                   # jr          $ra # 0008C000 <InstrIdType: CPU_SPECIAL>
label_2b4aec:
    if (ctx->pc == 0x2B4AECu) {
        ctx->pc = 0x2B4AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4AE8u;
        // 0x2b4aec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4AF0u;
        goto label_2b4af0;
    }
    ctx->pc = 0x2B4AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4AE8u;
        // 0x2b4aec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4AF0u;
label_2b4af0:
    // 0x2b4af0: 0x3e8b00b  movn        $s6, $ra, $t0
    ctx->pc = 0x2b4af0u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 31));
label_2b4af4:
    // 0x2b4af4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4af4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4af8:
    // 0x2b4af8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2b4af8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2b4afc:
    // 0x2b4afc: 0x81f182bc  lb          $s1, -0x7D44($t7)
    ctx->pc = 0x2b4afcu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935228)));
label_2b4b00:
    // 0x2b4b00: 0x3eaaaaaa  .word       0x3EAAAAAA                   # lui         $t2, 0xAAAA # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2b4b00u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43690 << 16));
label_2b4b04:
    // 0x2b4b04: 0x81e09723  lb          $zero, -0x68DD($t7)
    ctx->pc = 0x2b4b04u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294940451)));
label_2b4b08:
    // 0x2b4b08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4b08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4b0c:
    // 0x2b4b0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4b0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4b10:
    // 0x2b4b10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4b10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4b14:
    // 0x2b4b14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4b14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4b18:
    // 0x2b4b18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4b18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4b1c:
    // 0x2b4b1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4b1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4b20:
    // 0x2b4b20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4b20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4b24:
    // 0x2b4b24: 0x1e0e71e  .word       0x01E0E71E                   # ddiv        $gp, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4b24u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2B4B24 raw=0x01E0E71E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4b28:
    // 0x2b4b28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4b28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4b2c:
    // 0x2b4b2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4b2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4b30:
    // 0x2b4b30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4b30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4b34:
    // 0x2b4b34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4b34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4b38:
    // 0x2b4b38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4b38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4b3c:
    // 0x2b4b3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4b3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4b40:
    // 0x2b4b40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4b40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4b44:
    // 0x2b4b44: 0x1fc866c  .word       0x01FC866C                   # dadd        $s0, $t7, $gp # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4b44u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_2b4b48:
    // 0x2b4b48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4b48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4b4c:
    // 0x2b4b4c: 0x1fc8eac  .word       0x01FC8EAC                   # dadd        $s1, $t7, $gp # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4b4cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_2b4b50:
    // 0x2b4b50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4b50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4b54:
    // 0x2b4b54: 0x1fc96ec  .word       0x01FC96EC                   # dadd        $s2, $t7, $gp # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4b54u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_2b4b58:
    // 0x2b4b58: 0x3f808312  .word       0x3F808312                   # lui         $zero, 0x8312 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2b4b58u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)33554 << 16));
label_2b4b5c:
    // 0x2b4b5c: 0x81e0e1bf  lb          $zero, -0x1E41($t7)
    ctx->pc = 0x2b4b5cu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294959551)));
label_2b4b60:
    // 0x2b4b60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4b60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4b64:
    // 0x2b4b64: 0x1e0cda3  .word       0x01E0CDA3                   # subu        $t9, $t7, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4b64u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2b4b68:
    // 0x2b4b68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4b68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4b6c:
    // 0x2b4b6c: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4b6cu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2b4b70:
    // 0x2b4b70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4b70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4b74:
    // 0x2b4b74: 0x1e0d5e3  .word       0x01E0D5E3                   # subu        $k0, $t7, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4b74u;
    SET_GPR_S32(ctx, 26, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2b4b78:
    // 0x2b4b78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4b78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4b7c:
    // 0x2b4b7c: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4b7cu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2b4b80:
    // 0x2b4b80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4b80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4b84:
    // 0x2b4b84: 0x1e0de23  .word       0x01E0DE23                   # subu        $k1, $t7, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4b84u;
    SET_GPR_S32(ctx, 27, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2b4b88:
    // 0x2b4b88: 0x437f0000  .word       0x437F0000                   # INVALID     $k1, $ra, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b4b88u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2B4B88 raw=0x437F0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4b8c:
    // 0x2b4b8c: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x2b4b8cu;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_2b4b90:
    // 0x2b4b90: 0x3e8b000  .word       0x03E8B000                   # sll         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4b90u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
label_2b4b94:
    // 0x2b4b94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4b94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4b98:
    // 0x2b4b98: 0x3e8b803  .word       0x03E8B803                   # sra         $s7, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4b98u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 8), 0));
label_2b4b9c:
    // 0x2b4b9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4b9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4ba0:
    // 0x2b4ba0: 0x3e8c006  srlv        $t8, $t0, $ra
    ctx->pc = 0x2b4ba0u;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2b4ba4:
    // 0x2b4ba4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4ba4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4ba8:
    // 0x2b4ba8: 0x3e8b009  .word       0x03E8B009                   # jalr        $s6, $ra # 00080000 <InstrIdType: CPU_SPECIAL>
label_2b4bac:
    if (ctx->pc == 0x2B4BACu) {
        ctx->pc = 0x2B4BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4BA8u;
        // 0x2b4bac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4BB0u;
        goto label_2b4bb0;
    }
    ctx->pc = 0x2B4BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 22, 0x2B4BB0u);
        ctx->pc = 0x2B4BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4BA8u;
        // 0x2b4bac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4BA8u, 0x2B4BB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B4BB0u;
label_2b4bb0:
    // 0x2b4bb0: 0x800040f0  lb          $zero, 0x40F0($zero)
    ctx->pc = 0x2b4bb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x40F0u));
label_2b4bb4:
    // 0x2b4bb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4bb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4bb8:
    // 0x2b4bb8: 0x420f06a1  .word       0x420F06A1                   # INVALID     $s0, $t7, 0x6A1 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b4bb8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x21 at 0x2B4BB8 raw=0x420F06A1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4bbc:
    // 0x2b4bbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4bbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4bc0:
    // 0x2b4bc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4bc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4bc4:
    // 0x2b4bc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4bc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4bc8:
    // 0x2b4bc8: 0x500a000c  beql        $zero, $t2, . + 4 + (0xC << 2)
label_2b4bcc:
    if (ctx->pc == 0x2B4BCCu) {
        ctx->pc = 0x2B4BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4BC8u;
        // 0x2b4bcc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4BD0u;
        goto label_2b4bd0;
    }
    ctx->pc = 0x2B4BC8u;
    {
        const bool branch_taken_0x2b4bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 10));
        if (branch_taken_0x2b4bc8) {
            ctx->pc = 0x2B4BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4BC8u;
            // 0x2b4bcc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4BFCu;
            goto label_2b4bfc;
        }
    }
    ctx->pc = 0x2B4BD0u;
label_2b4bd0:
    // 0x2b4bd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4bd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4bd4:
    // 0x2b4bd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4bd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4bd8:
    // 0x2b4bd8: 0x10021840  beq         $zero, $v0, . + 4 + (0x1840 << 2)
label_2b4bdc:
    if (ctx->pc == 0x2B4BDCu) {
        ctx->pc = 0x2B4BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4BD8u;
        // 0x2b4bdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4BE0u;
        goto label_2b4be0;
    }
    ctx->pc = 0x2B4BD8u;
    {
        const bool branch_taken_0x2b4bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B4BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4BD8u;
        // 0x2b4bdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4bd8) {
            ctx->pc = 0x2BACDCu;
            { ctx->pc = 0x2bacdc; return; }
        }
    }
    ctx->pc = 0x2B4BE0u;
label_2b4be0:
    // 0x2b4be0: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2b4be0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2b4be4:
    // 0x2b4be4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4be4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4be8:
    // 0x2b4be8: 0x10021001  beq         $zero, $v0, . + 4 + (0x1001 << 2)
label_2b4bec:
    if (ctx->pc == 0x2B4BECu) {
        ctx->pc = 0x2B4BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4BE8u;
        // 0x2b4bec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4BF0u;
        goto label_2b4bf0;
    }
    ctx->pc = 0x2B4BE8u;
    {
        const bool branch_taken_0x2b4be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B4BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4BE8u;
        // 0x2b4bec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4be8) {
            ctx->pc = 0x2B8BF0u;
            { ctx->pc = 0x2b8bf0; return; }
        }
    }
    ctx->pc = 0x2B4BF0u;
label_2b4bf0:
    // 0x2b4bf0: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2b4bf4:
    if (ctx->pc == 0x2B4BF4u) {
        ctx->pc = 0x2B4BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4BF0u;
        // 0x2b4bf4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4BF8u;
        goto label_2b4bf8;
    }
    ctx->pc = 0x2B4BF0u;
    {
        const bool branch_taken_0x2b4bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B4BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4BF0u;
        // 0x2b4bf4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4bf0) {
            ctx->pc = 0x2BAC74u;
            { ctx->pc = 0x2bac74; return; }
        }
    }
    ctx->pc = 0x2B4BF8u;
label_2b4bf8:
    // 0x2b4bf8: 0x11eb57ff  beq         $t7, $t3, . + 4 + (0x57FF << 2)
label_2b4bfc:
    if (ctx->pc == 0x2B4BFCu) {
        ctx->pc = 0x2B4BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4BF8u;
        // 0x2b4bfc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4C00u;
        goto label_2b4c00;
    }
    ctx->pc = 0x2B4BF8u;
    {
        const bool branch_taken_0x2b4bf8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B4BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4BF8u;
        // 0x2b4bfc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4bf8) {
            ctx->pc = 0x2CABF8u;
            return;
        }
    }
    ctx->pc = 0x2B4C00u;
label_2b4c00:
    // 0x2b4c00: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2b4c04:
    if (ctx->pc == 0x2B4C04u) {
        ctx->pc = 0x2B4C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4C00u;
        // 0x2b4c04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4C08u;
        goto label_2b4c08;
    }
    ctx->pc = 0x2B4C00u;
    {
        const bool branch_taken_0x2b4c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B4C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4C00u;
        // 0x2b4c04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4c00) {
            ctx->pc = 0x2CAC08u;
            return;
        }
    }
    ctx->pc = 0x2B4C08u;
label_2b4c08:
    // 0x2b4c08: 0xb0b1000  j           func_C2C4000
label_2b4c0c:
    if (ctx->pc == 0x2B4C0Cu) {
        ctx->pc = 0x2B4C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4C08u;
        // 0x2b4c0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4C10u;
        goto label_2b4c10;
    }
    ctx->pc = 0x2B4C08u;
    ctx->pc = 0x2B4C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4C08u;
    // 0x2b4c0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2B4C08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B4C10u;
label_2b4c10:
    // 0x2b4c10: 0x42010777  .word       0x42010777                   # INVALID     $s0, $at, 0x777 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b4c10u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x37 at 0x2B4C10 raw=0x42010777"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4c14:
    // 0x2b4c14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4c14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4c18:
    // 0x2b4c18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4c18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4c1c:
    // 0x2b4c1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4c1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4c20:
    // 0x2b4c20: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2b4c20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2b4c24:
    // 0x2b4c24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4c24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4c28:
    // 0x2b4c28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4c28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4c2c:
    // 0x2b4c2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4c2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4c30:
    // 0x2b4c30: 0x120e7009  beq         $s0, $t6, . + 4 + (0x7009 << 2)
label_2b4c34:
    if (ctx->pc == 0x2B4C34u) {
        ctx->pc = 0x2B4C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4C30u;
        // 0x2b4c34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4C38u;
        goto label_2b4c38;
    }
    ctx->pc = 0x2B4C30u;
    {
        const bool branch_taken_0x2b4c30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B4C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4C30u;
        // 0x2b4c34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4c30) {
            ctx->pc = 0x2D0C58u;
            return;
        }
    }
    ctx->pc = 0x2B4C38u;
label_2b4c38:
    // 0x2b4c38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4c38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4c3c:
    // 0x2b4c3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4c3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4c40:
    // 0x2b4c40: 0x5a0077c1  blezl       $s0, . + 4 + (0x77C1 << 2)
label_2b4c44:
    if (ctx->pc == 0x2B4C44u) {
        ctx->pc = 0x2B4C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4C40u;
        // 0x2b4c44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4C48u;
        goto label_2b4c48;
    }
    ctx->pc = 0x2B4C40u;
    {
        const bool branch_taken_0x2b4c40 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b4c40) {
            ctx->pc = 0x2B4C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4C40u;
            // 0x2b4c44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2B48u;
            return;
        }
    }
    ctx->pc = 0x2B4C48u;
label_2b4c48:
    // 0x2b4c48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4c48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4c4c:
    // 0x2b4c4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4c4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4c50:
    // 0x2b4c50: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2b4c50u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2b4c54:
    // 0x2b4c54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4c54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4c58:
    // 0x2b4c58: 0x100108ca  beq         $zero, $at, . + 4 + (0x8CA << 2)
label_2b4c5c:
    if (ctx->pc == 0x2B4C5Cu) {
        ctx->pc = 0x2B4C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4C58u;
        // 0x2b4c5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4C60u;
        goto label_2b4c60;
    }
    ctx->pc = 0x2B4C58u;
    {
        const bool branch_taken_0x2b4c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2B4C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4C58u;
        // 0x2b4c5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4c58) {
            ctx->pc = 0x2B6F84u;
            { ctx->pc = 0x2b6f84; return; }
        }
    }
    ctx->pc = 0x2B4C60u;
label_2b4c60:
    // 0x2b4c60: 0x80000efc  lb          $zero, 0xEFC($zero)
    ctx->pc = 0x2b4c60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0xEFCu));
label_2b4c64:
    // 0x2b4c64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4c64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4c68:
    // 0x2b4c68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4c68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4c6c:
    // 0x2b4c6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4c6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4c70:
    // 0x2b4c70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4c70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4c74:
    // 0x2b4c74: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b4c74u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b4c78:
    // 0x2b4c78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4c78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4c7c:
    // 0x2b4c7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4c7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4c80:
    // 0x2b4c80: 0x0  nop
    ctx->pc = 0x2b4c80u;
    // NOP
label_2b4c84:
    // 0x2b4c84: 0x4a8a0450  vmaxx.y     $vf17, $vf0, $vf10x
    ctx->pc = 0x2b4c84u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
label_2b4c88:
    // 0x2b4c88: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2b4c88u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2b4c8c:
    // 0x2b4c8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4c8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4c90:
    // 0x2b4c90: 0x100708ca  beq         $zero, $a3, . + 4 + (0x8CA << 2)
label_2b4c94:
    if (ctx->pc == 0x2B4C94u) {
        ctx->pc = 0x2B4C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4C90u;
        // 0x2b4c94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4C98u;
        goto label_2b4c98;
    }
    ctx->pc = 0x2B4C90u;
    {
        const bool branch_taken_0x2b4c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B4C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4C90u;
        // 0x2b4c94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4c90) {
            ctx->pc = 0x2B6FBCu;
            { ctx->pc = 0x2b6fbc; return; }
        }
    }
    ctx->pc = 0x2B4C98u;
label_2b4c98:
    // 0x2b4c98: 0x81f40b7c  lb          $s4, 0xB7C($t7)
    ctx->pc = 0x2b4c98u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b4c9c:
    // 0x2b4c9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4c9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4ca0:
    // 0x2b4ca0: 0x81f50b7c  lb          $s5, 0xB7C($t7)
    ctx->pc = 0x2b4ca0u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b4ca4:
    // 0x2b4ca4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4ca4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4ca8:
    // 0x2b4ca8: 0x81f60b7c  lb          $s6, 0xB7C($t7)
    ctx->pc = 0x2b4ca8u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b4cac:
    // 0x2b4cac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4cacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4cb0:
    // 0x2b4cb0: 0x81f70b7c  lb          $s7, 0xB7C($t7)
    ctx->pc = 0x2b4cb0u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b4cb4:
    // 0x2b4cb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4cb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4cb8:
    // 0x2b4cb8: 0x81f80b7c  lb          $t8, 0xB7C($t7)
    ctx->pc = 0x2b4cb8u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b4cbc:
    // 0x2b4cbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4cbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4cc0:
    // 0x2b4cc0: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2b4cc0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2b4cc4:
    // 0x2b4cc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4cc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4cc8:
    // 0x2b4cc8: 0x81e7ab7d  lb          $a3, -0x5483($t7)
    ctx->pc = 0x2b4cc8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2b4ccc:
    // 0x2b4ccc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4cccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4cd0:
    // 0x2b4cd0: 0x81e7b37d  lb          $a3, -0x4C83($t7)
    ctx->pc = 0x2b4cd0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2b4cd4:
    // 0x2b4cd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4cd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4cd8:
    // 0x2b4cd8: 0x81e7bb7d  lb          $a3, -0x4483($t7)
    ctx->pc = 0x2b4cd8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2b4cdc:
    // 0x2b4cdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4cdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4ce0:
    // 0x2b4ce0: 0x81e7c37d  lb          $a3, -0x3C83($t7)
    ctx->pc = 0x2b4ce0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2b4ce4:
    // 0x2b4ce4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4ce4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4ce8:
    // 0x2b4ce8: 0x80940b7c  lb          $s4, 0xB7C($a0)
    ctx->pc = 0x2b4ce8u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2940)));
label_2b4cec:
    // 0x2b4cec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4cecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4cf0:
    // 0x2b4cf0: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b4cf0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b4cf4:
    // 0x2b4cf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4cf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4cf8:
    // 0x2b4cf8: 0x10040005  beq         $zero, $a0, . + 4 + (0x5 << 2)
label_2b4cfc:
    if (ctx->pc == 0x2B4CFCu) {
        ctx->pc = 0x2B4CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4CF8u;
        // 0x2b4cfc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4D00u;
        goto label_2b4d00;
    }
    ctx->pc = 0x2B4CF8u;
    {
        const bool branch_taken_0x2b4cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B4CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4CF8u;
        // 0x2b4cfc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4cf8) {
            ctx->pc = 0x2B4D10u;
            goto label_2b4d10;
        }
    }
    ctx->pc = 0x2B4D00u;
label_2b4d00:
    // 0x2b4d00: 0xa241000  j           func_8904000
label_2b4d04:
    if (ctx->pc == 0x2B4D04u) {
        ctx->pc = 0x2B4D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4D00u;
        // 0x2b4d04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4D08u;
        goto label_2b4d08;
    }
    ctx->pc = 0x2B4D00u;
    ctx->pc = 0x2B4D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4D00u;
    // 0x2b4d04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8904000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8904000u, 0x2B4D00u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B4D08u;
label_2b4d08:
    // 0x2b4d08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4d08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4d0c:
    // 0x2b4d0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4d0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4d10:
    // 0x2b4d10: 0x800008f0  lb          $zero, 0x8F0($zero)
    ctx->pc = 0x2b4d10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x8F0u));
label_2b4d14:
    // 0x2b4d14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4d14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4d18:
    // 0x2b4d18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4d18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4d1c:
    // 0x2b4d1c: 0x540541  .word       0x00540541                   # INVALID     $v0, $s4, 0x541 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4d1cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B4D1C raw=0x00540541"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4d20:
    // 0x2b4d20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4d20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4d24:
    // 0x2b4d24: 0x1140545  .word       0x01140545                   # INVALID     $t0, $s4, 0x545 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4d24u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B4D24 raw=0x01140545"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4d28:
    // 0x2b4d28: 0x90c1800  j           func_4306000
label_2b4d2c:
    if (ctx->pc == 0x2B4D2Cu) {
        ctx->pc = 0x2B4D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4D28u;
        // 0x2b4d2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4D30u;
        goto label_2b4d30;
    }
    ctx->pc = 0x2B4D28u;
    ctx->pc = 0x2B4D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4D28u;
    // 0x2b4d2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306000u, 0x2B4D28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B4D30u;
label_2b4d30:
    // 0x2b4d30: 0x10040000  beq         $zero, $a0, . + 4 + (0x0 << 2)
label_2b4d34:
    if (ctx->pc == 0x2B4D34u) {
        ctx->pc = 0x2B4D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4D30u;
        // 0x2b4d34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4D38u;
        goto label_2b4d38;
    }
    ctx->pc = 0x2B4D30u;
    {
        const bool branch_taken_0x2b4d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B4D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4D30u;
        // 0x2b4d34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4d30) {
            ctx->pc = 0x2B4D34u;
            goto label_2b4d34;
        }
    }
    ctx->pc = 0x2B4D38u;
label_2b4d38:
    // 0x2b4d38: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2b4d3c:
    if (ctx->pc == 0x2B4D3Cu) {
        ctx->pc = 0x2B4D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4D38u;
        // 0x2b4d3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4D40u;
        goto label_2b4d40;
    }
    ctx->pc = 0x2B4D38u;
    {
        const bool branch_taken_0x2b4d38 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B4D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4D38u;
        // 0x2b4d3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4d38) {
            ctx->pc = 0x2B6D38u;
            { ctx->pc = 0x2b6d38; return; }
        }
    }
    ctx->pc = 0x2B4D40u;
label_2b4d40:
    // 0x2b4d40: 0x10031801  beq         $zero, $v1, . + 4 + (0x1801 << 2)
label_2b4d44:
    if (ctx->pc == 0x2B4D44u) {
        ctx->pc = 0x2B4D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4D40u;
        // 0x2b4d44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4D48u;
        goto label_2b4d48;
    }
    ctx->pc = 0x2B4D40u;
    {
        const bool branch_taken_0x2b4d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B4D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4D40u;
        // 0x2b4d44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4d40) {
            ctx->pc = 0x2BAD48u;
            { ctx->pc = 0x2bad48; return; }
        }
    }
    ctx->pc = 0x2B4D48u;
label_2b4d48:
    // 0x2b4d48: 0x800b6334  lb          $t3, 0x6334($zero)
    ctx->pc = 0x2b4d48u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x6334u));
label_2b4d4c:
    // 0x2b4d4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4d4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4d50:
    // 0x2b4d50: 0x1f41fff  .word       0x01F41FFF                   # dsra32      $v1, $s4, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4d50u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 20) >> (32 + 31));
label_2b4d54:
    // 0x2b4d54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4d54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4d58:
    // 0x2b4d58: 0x81f01b7c  lb          $s0, 0x1B7C($t7)
    ctx->pc = 0x2b4d58u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2b4d5c:
    // 0x2b4d5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4d5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4d60:
    // 0x2b4d60: 0x22000000  addi        $zero, $s0, 0x0
    ctx->pc = 0x2b4d60u;
    // NOP (addi to $zero)
label_2b4d64:
    // 0x2b4d64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4d64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4d68:
    // 0x2b4d68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4d68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4d6c:
    // 0x2b4d6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4d6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4d70:
    // 0x2b4d70: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2b4d70u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2b4d74:
    // 0x2b4d74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4d74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4d78:
    // 0x2b4d78: 0x901800  .word       0x00901800                   # sll         $v1, $s0, 0 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4d78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 0));
label_2b4d7c:
    // 0x2b4d7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4d7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4d80:
    // 0x2b4d80: 0x81f11b7c  lb          $s1, 0x1B7C($t7)
    ctx->pc = 0x2b4d80u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2b4d84:
    // 0x2b4d84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4d84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4d88:
    // 0x2b4d88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4d88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4d8c:
    // 0x2b4d8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4d8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4d90:
    // 0x2b4d90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4d90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4d94:
    // 0x2b4d94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4d94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4d98:
    // 0x2b4d98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4d98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4d9c:
    // 0x2b4d9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4d9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4da0:
    // 0x2b4da0: 0x80918b3d  lb          $s1, -0x74C3($a0)
    ctx->pc = 0x2b4da0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294937405)));
label_2b4da4:
    // 0x2b4da4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4da4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4da8:
    // 0x2b4da8: 0x8051033d  lb          $s1, 0x33D($v0)
    ctx->pc = 0x2b4da8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2b4dac:
    // 0x2b4dac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4dacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4db0:
    // 0x2b4db0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4db0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4db4:
    // 0x2b4db4: 0x1f009bc  .word       0x01F009BC                   # dsll32      $at, $s0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4db4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 16) << (32 + 6));
label_2b4db8:
    // 0x2b4db8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4db8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4dbc:
    // 0x2b4dbc: 0x1f010bd  .word       0x01F010BD                   # INVALID     $t7, $s0, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4dbcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B4DBC raw=0x01F010BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4dc0:
    // 0x2b4dc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4dc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4dc4:
    // 0x2b4dc4: 0x1f018be  .word       0x01F018BE                   # dsrl32      $v1, $s0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) >> (32 + 2));
label_2b4dc8:
    // 0x2b4dc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4dc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4dcc:
    // 0x2b4dcc: 0x1e0270b  .word       0x01E0270B                   # movn        $a0, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4dccu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
label_2b4dd0:
    // 0x2b4dd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4dd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4dd4:
    // 0x2b4dd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4dd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4dd8:
    // 0x2b4dd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4dd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4ddc:
    // 0x2b4ddc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4ddcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4de0:
    // 0x2b4de0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4de0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4de4:
    // 0x2b4de4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4de4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4de8:
    // 0x2b4de8: 0x81fc03bc  lb          $gp, 0x3BC($t7)
    ctx->pc = 0x2b4de8u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2b4dec:
    // 0x2b4dec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4decu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4df0:
    // 0x2b4df0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4df0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4df4:
    // 0x2b4df4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4df4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4df8:
    // 0x2b4df8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4df8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4dfc:
    // 0x2b4dfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4dfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4e00:
    // 0x2b4e00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4e00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4e04:
    // 0x2b4e04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4e04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4e08:
    // 0x2b4e08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4e08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4e0c:
    // 0x2b4e0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4e0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4e10:
    // 0x2b4e10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4e10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4e14:
    // 0x2b4e14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4e14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4e18:
    // 0x2b4e18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4e18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4e1c:
    // 0x2b4e1c: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4e1cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2b4e20:
    // 0x2b4e20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4e20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4e24:
    // 0x2b4e24: 0x20f721  .word       0x0020F721                   # addu        $fp, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4e24u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2b4e28:
    // 0x2b4e28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4e28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4e2c:
    // 0x2b4e2c: 0x1c0e7dc  .word       0x01C0E7DC                   # dmult       $t6, $zero # 0000E7C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4e2cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B4E2C raw=0x01C0E7DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4e30:
    // 0x2b4e30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4e30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4e34:
    // 0x2b4e34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4e34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4e38:
    // 0x2b4e38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4e38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4e3c:
    // 0x2b4e3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4e3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4e40:
    // 0x2b4e40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4e40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4e44:
    // 0x2b4e44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4e44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4e48:
    // 0x2b4e48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4e48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4e4c:
    // 0x2b4e4c: 0x20e7df  .word       0x0020E7DF                   # ddivu       $gp, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4e4cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2B4E4C raw=0x0020E7DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4e50:
    // 0x2b4e50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4e50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4e54:
    // 0x2b4e54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4e54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4e58:
    // 0x2b4e58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4e58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4e5c:
    // 0x2b4e5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4e5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4e60:
    // 0x2b4e60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4e60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4e64:
    // 0x2b4e64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4e64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4e68:
    // 0x2b4e68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4e68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4e6c:
    // 0x2b4e6c: 0x20ffd0  .word       0x0020FFD0                   # mfhi        $ra # 002007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4e6cu;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_2b4e70:
    // 0x2b4e70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4e70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4e74:
    // 0x2b4e74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4e74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4e78:
    // 0x2b4e78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4e78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4e7c:
    // 0x2b4e7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4e7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4e80:
    // 0x2b4e80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4e80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4e84:
    // 0x2b4e84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4e84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4e88:
    // 0x2b4e88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4e88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4e8c:
    // 0x2b4e8c: 0x1faf97d  .word       0x01FAF97D                   # INVALID     $t7, $k0, -0x683 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4e8cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B4E8C raw=0x01FAF97D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4e90:
    // 0x2b4e90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4e90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4e94:
    // 0x2b4e94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4e94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4e98:
    // 0x2b4e98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4e98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4e9c:
    // 0x2b4e9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4e9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4ea0:
    // 0x2b4ea0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4ea0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4ea4:
    // 0x2b4ea4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4ea4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4ea8:
    // 0x2b4ea8: 0x3e7d002  .word       0x03E7D002                   # srl         $k0, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4ea8u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 7), 0));
label_2b4eac:
    // 0x2b4eac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4eacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4eb0:
    // 0x2b4eb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4eb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4eb4:
    // 0x2b4eb4: 0x1c08c5c  .word       0x01C08C5C                   # dmult       $t6, $zero # 00008C40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4eb4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B4EB4 raw=0x01C08C5C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4eb8:
    // 0x2b4eb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4eb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4ebc:
    // 0x2b4ebc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4ebcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4ec0:
    // 0x2b4ec0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4ec0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4ec4:
    // 0x2b4ec4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4ec4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4ec8:
    // 0x2b4ec8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4ec8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4ecc:
    // 0x2b4ecc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4eccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4ed0:
    // 0x2b4ed0: 0x3e78800  .word       0x03E78800                   # sll         $s1, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4ed0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2b4ed4:
    // 0x2b4ed4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4ed4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4ed8:
    // 0x2b4ed8: 0x81d41b7c  lb          $s4, 0x1B7C($t6)
    ctx->pc = 0x2b4ed8u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 7036)));
label_2b4edc:
    // 0x2b4edc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4edcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4ee0:
    // 0x2b4ee0: 0x8034f33d  lb          $s4, -0xCC3($at)
    ctx->pc = 0x2b4ee0u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964029)));
label_2b4ee4:
    // 0x2b4ee4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4ee4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4ee8:
    // 0x2b4ee8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4ee8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4eec:
    // 0x2b4eec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4eecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4ef0:
    // 0x2b4ef0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4ef0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4ef4:
    // 0x2b4ef4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4ef4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4ef8:
    // 0x2b4ef8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4ef8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4efc:
    // 0x2b4efc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4efcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4f00:
    // 0x2b4f00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4f00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4f04:
    // 0x2b4f04: 0x1cba52a  .word       0x01CBA52A                   # slt         $s4, $t6, $t3 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4f04u;
    SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_2b4f08:
    // 0x2b4f08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4f08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4f0c:
    // 0x2b4f0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4f0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4f10:
    // 0x2b4f10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4f10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4f14:
    // 0x2b4f14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4f14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4f18:
    // 0x2b4f18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4f18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4f1c:
    // 0x2b4f1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4f1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4f20:
    // 0x2b4f20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4f20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4f24:
    // 0x2b4f24: 0x1e0a51f  .word       0x01E0A51F                   # ddivu       $s4, $t7, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4f24u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2B4F24 raw=0x01E0A51F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4f28:
    // 0x2b4f28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4f28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4f2c:
    // 0x2b4f2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4f2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4f30:
    // 0x2b4f30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4f30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4f34:
    // 0x2b4f34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4f34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4f38:
    // 0x2b4f38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4f38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4f3c:
    // 0x2b4f3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4f3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4f40:
    // 0x2b4f40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4f40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4f44:
    // 0x2b4f44: 0x1f4a17c  .word       0x01F4A17C                   # dsll32      $s4, $s4, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4f44u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 5));
label_2b4f48:
    // 0x2b4f48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4f48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4f4c:
    // 0x2b4f4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4f4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4f50:
    // 0x2b4f50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4f50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4f54:
    // 0x2b4f54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4f54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4f58:
    // 0x2b4f58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4f58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4f5c:
    // 0x2b4f5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4f5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4f60:
    // 0x2b4f60: 0x3e7a001  .word       0x03E7A001                   # INVALID     $ra, $a3, -0x5FFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4f60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B4F60 raw=0x03E7A001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4f64:
    // 0x2b4f64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4f64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4f68:
    // 0x2b4f68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4f68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4f6c:
    // 0x2b4f6c: 0x1f061bc  .word       0x01F061BC                   # dsll32      $t4, $s0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4f6cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 16) << (32 + 6));
label_2b4f70:
    // 0x2b4f70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4f70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4f74:
    // 0x2b4f74: 0x1f068bd  .word       0x01F068BD                   # INVALID     $t7, $s0, 0x68BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4f74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B4F74 raw=0x01F068BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4f78:
    // 0x2b4f78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4f78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4f7c:
    // 0x2b4f7c: 0x1f070be  .word       0x01F070BE                   # dsrl32      $t6, $s0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4f7cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 16) >> (32 + 2));
label_2b4f80:
    // 0x2b4f80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4f80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4f84:
    // 0x2b4f84: 0x1e07c8b  .word       0x01E07C8B                   # movn        $t7, $t7, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4f84u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 15));
label_2b4f88:
    // 0x2b4f88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4f88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4f8c:
    // 0x2b4f8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4f8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4f90:
    // 0x2b4f90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4f90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4f94:
    // 0x2b4f94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4f94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4f98:
    // 0x2b4f98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4f98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4f9c:
    // 0x2b4f9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4f9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4fa0:
    // 0x2b4fa0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4fa0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4fa4:
    // 0x2b4fa4: 0x1d291ff  .word       0x01D291FF                   # dsra32      $s2, $s2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4fa4u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 7));
label_2b4fa8:
    // 0x2b4fa8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4fa8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4fac:
    // 0x2b4fac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4facu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4fb0:
    // 0x2b4fb0: 0x8062d3fc  lb          $v0, -0x2C04($v1)
    ctx->pc = 0x2b4fb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294956028)));
label_2b4fb4:
    // 0x2b4fb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4fb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4fb8:
    // 0x2b4fb8: 0x10073803  beq         $zero, $a3, . + 4 + (0x3803 << 2)
label_2b4fbc:
    if (ctx->pc == 0x2B4FBCu) {
        ctx->pc = 0x2B4FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4FB8u;
        // 0x2b4fbc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4FC0u;
        goto label_2b4fc0;
    }
    ctx->pc = 0x2B4FB8u;
    {
        const bool branch_taken_0x2b4fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B4FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4FB8u;
        // 0x2b4fbc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4fb8) {
            ctx->pc = 0x2C2FC8u;
            return;
        }
    }
    ctx->pc = 0x2B4FC0u;
label_2b4fc0:
    // 0x2b4fc0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b4fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b4fc4:
    // 0x2b4fc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4fc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4fc8:
    // 0x2b4fc8: 0x5201001c  beql        $s0, $at, . + 4 + (0x1C << 2)
label_2b4fcc:
    if (ctx->pc == 0x2B4FCCu) {
        ctx->pc = 0x2B4FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4FC8u;
        // 0x2b4fcc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4FD0u;
        goto label_2b4fd0;
    }
    ctx->pc = 0x2B4FC8u;
    {
        const bool branch_taken_0x2b4fc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b4fc8) {
            ctx->pc = 0x2B4FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4FC8u;
            // 0x2b4fcc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B503Cu;
            { ctx->pc = 0x2b503c; return; }
        }
    }
    ctx->pc = 0x2B4FD0u;
label_2b4fd0:
    // 0x2b4fd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4fd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4fd4:
    // 0x2b4fd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4fd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4fd8:
    // 0x2b4fd8: 0x10042001  beq         $zero, $a0, . + 4 + (0x2001 << 2)
label_2b4fdc:
    if (ctx->pc == 0x2B4FDCu) {
        ctx->pc = 0x2B4FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4FD8u;
        // 0x2b4fdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4FE0u;
        goto label_2b4fe0;
    }
    ctx->pc = 0x2B4FD8u;
    {
        const bool branch_taken_0x2b4fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B4FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4FD8u;
        // 0x2b4fdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4fd8) {
            ctx->pc = 0x2BCFE0u;
            { ctx->pc = 0x2bcfe0; return; }
        }
    }
    ctx->pc = 0x2B4FE0u;
label_2b4fe0:
    // 0x2b4fe0: 0x10020001  beq         $zero, $v0, . + 4 + (0x1 << 2)
label_2b4fe4:
    if (ctx->pc == 0x2B4FE4u) {
        ctx->pc = 0x2B4FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4FE0u;
        // 0x2b4fe4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4FE8u;
        goto label_2b4fe8;
    }
    ctx->pc = 0x2B4FE0u;
    {
        const bool branch_taken_0x2b4fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B4FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4FE0u;
        // 0x2b4fe4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4fe0) {
            ctx->pc = 0x2B4FE8u;
            goto label_2b4fe8;
        }
    }
    ctx->pc = 0x2B4FE8u;
label_2b4fe8:
    // 0x2b4fe8: 0x800410b4  lb          $a0, 0x10B4($zero)
    ctx->pc = 0x2b4fe8u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x10B4u));
label_2b4fec:
    // 0x2b4fec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4fecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4ff0:
    // 0x2b4ff0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4ff0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4ff4:
    // 0x2b4ff4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4ff4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4ff8:
    // 0x2b4ff8: 0x50020004  beql        $zero, $v0, . + 4 + (0x4 << 2)
label_2b4ffc:
    if (ctx->pc == 0x2B4FFCu) {
        ctx->pc = 0x2B4FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4FF8u;
        // 0x2b4ffc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5000u;
        goto label_2b5000;
    }
    ctx->pc = 0x2B4FF8u;
    {
        const bool branch_taken_0x2b4ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b4ff8) {
            ctx->pc = 0x2B4FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4FF8u;
            // 0x2b4ffc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B500Cu;
            goto label_2b500c;
        }
    }
    ctx->pc = 0x2B5000u;
label_2b5000:
    // 0x2b5000: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5000u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5004:
    // 0x2b5004: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5004u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5008:
    // 0x2b5008: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5008u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b500c:
    // 0x2b500c: 0x558428  .word       0x00558428                   # mfsa        $s0 # 00550400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b500cu;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_2b5010:
    // 0x2b5010: 0x40000003  .word       0x40000003                   # mfc0        $zero, Index # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b5010u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b5014:
    // 0x2b5014: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5014u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5018:
    // 0x2b5018: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5018u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b501c:
    // 0x2b501c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b501cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5020:
    // 0x2b5020: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5020u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5024:
    // 0x2b5024: 0x155842c  .word       0x0155842C                   # dadd        $s0, $t2, $s5 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5024u;
    { int64_t a = (int64_t)GPR_S64(ctx, 10); int64_t b = (int64_t)GPR_S64(ctx, 21); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
    ctx->pc = 0x2b5028u;
    return;
}

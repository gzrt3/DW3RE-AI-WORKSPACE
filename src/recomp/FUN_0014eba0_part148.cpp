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


void FUN_0014eba0_part148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x196810u: goto label_196810;
        case 0x196814u: goto label_196814;
        case 0x196818u: goto label_196818;
        case 0x19681cu: goto label_19681c;
        case 0x196820u: goto label_196820;
        case 0x196824u: goto label_196824;
        case 0x196828u: goto label_196828;
        case 0x19682cu: goto label_19682c;
        case 0x196830u: goto label_196830;
        case 0x196834u: goto label_196834;
        case 0x196838u: goto label_196838;
        case 0x19683cu: goto label_19683c;
        case 0x196840u: goto label_196840;
        case 0x196844u: goto label_196844;
        case 0x196848u: goto label_196848;
        case 0x19684cu: goto label_19684c;
        case 0x196850u: goto label_196850;
        case 0x196854u: goto label_196854;
        case 0x196858u: goto label_196858;
        case 0x19685cu: goto label_19685c;
        case 0x196860u: goto label_196860;
        case 0x196864u: goto label_196864;
        case 0x196868u: goto label_196868;
        case 0x19686cu: goto label_19686c;
        case 0x196870u: goto label_196870;
        case 0x196874u: goto label_196874;
        case 0x196878u: goto label_196878;
        case 0x19687cu: goto label_19687c;
        case 0x196880u: goto label_196880;
        case 0x196884u: goto label_196884;
        case 0x196888u: goto label_196888;
        case 0x19688cu: goto label_19688c;
        case 0x196890u: goto label_196890;
        case 0x196894u: goto label_196894;
        case 0x196898u: goto label_196898;
        case 0x19689cu: goto label_19689c;
        case 0x1968a0u: goto label_1968a0;
        case 0x1968a4u: goto label_1968a4;
        case 0x1968a8u: goto label_1968a8;
        case 0x1968acu: goto label_1968ac;
        case 0x1968b0u: goto label_1968b0;
        case 0x1968b4u: goto label_1968b4;
        case 0x1968b8u: goto label_1968b8;
        case 0x1968bcu: goto label_1968bc;
        case 0x1968c0u: goto label_1968c0;
        case 0x1968c4u: goto label_1968c4;
        case 0x1968c8u: goto label_1968c8;
        case 0x1968ccu: goto label_1968cc;
        case 0x1968d0u: goto label_1968d0;
        case 0x1968d4u: goto label_1968d4;
        case 0x1968d8u: goto label_1968d8;
        case 0x1968dcu: goto label_1968dc;
        case 0x1968e0u: goto label_1968e0;
        case 0x1968e4u: goto label_1968e4;
        case 0x1968e8u: goto label_1968e8;
        case 0x1968ecu: goto label_1968ec;
        case 0x1968f0u: goto label_1968f0;
        case 0x1968f4u: goto label_1968f4;
        case 0x1968f8u: goto label_1968f8;
        case 0x1968fcu: goto label_1968fc;
        case 0x196900u: goto label_196900;
        case 0x196904u: goto label_196904;
        case 0x196908u: goto label_196908;
        case 0x19690cu: goto label_19690c;
        case 0x196910u: goto label_196910;
        case 0x196914u: goto label_196914;
        case 0x196918u: goto label_196918;
        case 0x19691cu: goto label_19691c;
        case 0x196920u: goto label_196920;
        case 0x196924u: goto label_196924;
        case 0x196928u: goto label_196928;
        case 0x19692cu: goto label_19692c;
        case 0x196930u: goto label_196930;
        case 0x196934u: goto label_196934;
        case 0x196938u: goto label_196938;
        case 0x19693cu: goto label_19693c;
        case 0x196940u: goto label_196940;
        case 0x196944u: goto label_196944;
        case 0x196948u: goto label_196948;
        case 0x19694cu: goto label_19694c;
        case 0x196950u: goto label_196950;
        case 0x196954u: goto label_196954;
        case 0x196958u: goto label_196958;
        case 0x19695cu: goto label_19695c;
        case 0x196960u: goto label_196960;
        case 0x196964u: goto label_196964;
        case 0x196968u: goto label_196968;
        case 0x19696cu: goto label_19696c;
        case 0x196970u: goto label_196970;
        case 0x196974u: goto label_196974;
        case 0x196978u: goto label_196978;
        case 0x19697cu: goto label_19697c;
        case 0x196980u: goto label_196980;
        case 0x196984u: goto label_196984;
        case 0x196988u: goto label_196988;
        case 0x19698cu: goto label_19698c;
        case 0x196990u: goto label_196990;
        case 0x196994u: goto label_196994;
        case 0x196998u: goto label_196998;
        case 0x19699cu: goto label_19699c;
        case 0x1969a0u: goto label_1969a0;
        case 0x1969a4u: goto label_1969a4;
        case 0x1969a8u: goto label_1969a8;
        case 0x1969acu: goto label_1969ac;
        case 0x1969b0u: goto label_1969b0;
        case 0x1969b4u: goto label_1969b4;
        case 0x1969b8u: goto label_1969b8;
        case 0x1969bcu: goto label_1969bc;
        case 0x1969c0u: goto label_1969c0;
        case 0x1969c4u: goto label_1969c4;
        case 0x1969c8u: goto label_1969c8;
        case 0x1969ccu: goto label_1969cc;
        case 0x1969d0u: goto label_1969d0;
        case 0x1969d4u: goto label_1969d4;
        case 0x1969d8u: goto label_1969d8;
        case 0x1969dcu: goto label_1969dc;
        case 0x1969e0u: goto label_1969e0;
        case 0x1969e4u: goto label_1969e4;
        case 0x1969e8u: goto label_1969e8;
        case 0x1969ecu: goto label_1969ec;
        case 0x1969f0u: goto label_1969f0;
        case 0x1969f4u: goto label_1969f4;
        case 0x1969f8u: goto label_1969f8;
        case 0x1969fcu: goto label_1969fc;
        case 0x196a00u: goto label_196a00;
        case 0x196a04u: goto label_196a04;
        case 0x196a08u: goto label_196a08;
        case 0x196a0cu: goto label_196a0c;
        case 0x196a10u: goto label_196a10;
        case 0x196a14u: goto label_196a14;
        case 0x196a18u: goto label_196a18;
        case 0x196a1cu: goto label_196a1c;
        case 0x196a20u: goto label_196a20;
        case 0x196a24u: goto label_196a24;
        case 0x196a28u: goto label_196a28;
        case 0x196a2cu: goto label_196a2c;
        case 0x196a30u: goto label_196a30;
        case 0x196a34u: goto label_196a34;
        case 0x196a38u: goto label_196a38;
        case 0x196a3cu: goto label_196a3c;
        case 0x196a40u: goto label_196a40;
        case 0x196a44u: goto label_196a44;
        case 0x196a48u: goto label_196a48;
        case 0x196a4cu: goto label_196a4c;
        case 0x196a50u: goto label_196a50;
        case 0x196a54u: goto label_196a54;
        case 0x196a58u: goto label_196a58;
        case 0x196a5cu: goto label_196a5c;
        case 0x196a60u: goto label_196a60;
        case 0x196a64u: goto label_196a64;
        case 0x196a68u: goto label_196a68;
        case 0x196a6cu: goto label_196a6c;
        case 0x196a70u: goto label_196a70;
        case 0x196a74u: goto label_196a74;
        case 0x196a78u: goto label_196a78;
        case 0x196a7cu: goto label_196a7c;
        case 0x196a80u: goto label_196a80;
        case 0x196a84u: goto label_196a84;
        case 0x196a88u: goto label_196a88;
        case 0x196a8cu: goto label_196a8c;
        case 0x196a90u: goto label_196a90;
        case 0x196a94u: goto label_196a94;
        case 0x196a98u: goto label_196a98;
        case 0x196a9cu: goto label_196a9c;
        case 0x196aa0u: goto label_196aa0;
        case 0x196aa4u: goto label_196aa4;
        case 0x196aa8u: goto label_196aa8;
        case 0x196aacu: goto label_196aac;
        case 0x196ab0u: goto label_196ab0;
        case 0x196ab4u: goto label_196ab4;
        case 0x196ab8u: goto label_196ab8;
        case 0x196abcu: goto label_196abc;
        case 0x196ac0u: goto label_196ac0;
        case 0x196ac4u: goto label_196ac4;
        case 0x196ac8u: goto label_196ac8;
        case 0x196accu: goto label_196acc;
        case 0x196ad0u: goto label_196ad0;
        case 0x196ad4u: goto label_196ad4;
        case 0x196ad8u: goto label_196ad8;
        case 0x196adcu: goto label_196adc;
        case 0x196ae0u: goto label_196ae0;
        case 0x196ae4u: goto label_196ae4;
        case 0x196ae8u: goto label_196ae8;
        case 0x196aecu: goto label_196aec;
        case 0x196af0u: goto label_196af0;
        case 0x196af4u: goto label_196af4;
        case 0x196af8u: goto label_196af8;
        case 0x196afcu: goto label_196afc;
        case 0x196b00u: goto label_196b00;
        case 0x196b04u: goto label_196b04;
        case 0x196b08u: goto label_196b08;
        case 0x196b0cu: goto label_196b0c;
        case 0x196b10u: goto label_196b10;
        case 0x196b14u: goto label_196b14;
        case 0x196b18u: goto label_196b18;
        case 0x196b1cu: goto label_196b1c;
        case 0x196b20u: goto label_196b20;
        case 0x196b24u: goto label_196b24;
        case 0x196b28u: goto label_196b28;
        case 0x196b2cu: goto label_196b2c;
        case 0x196b30u: goto label_196b30;
        case 0x196b34u: goto label_196b34;
        case 0x196b38u: goto label_196b38;
        case 0x196b3cu: goto label_196b3c;
        case 0x196b40u: goto label_196b40;
        case 0x196b44u: goto label_196b44;
        case 0x196b48u: goto label_196b48;
        case 0x196b4cu: goto label_196b4c;
        case 0x196b50u: goto label_196b50;
        case 0x196b54u: goto label_196b54;
        case 0x196b58u: goto label_196b58;
        case 0x196b5cu: goto label_196b5c;
        case 0x196b60u: goto label_196b60;
        case 0x196b64u: goto label_196b64;
        case 0x196b68u: goto label_196b68;
        case 0x196b6cu: goto label_196b6c;
        case 0x196b70u: goto label_196b70;
        case 0x196b74u: goto label_196b74;
        case 0x196b78u: goto label_196b78;
        case 0x196b7cu: goto label_196b7c;
        case 0x196b80u: goto label_196b80;
        case 0x196b84u: goto label_196b84;
        case 0x196b88u: goto label_196b88;
        case 0x196b8cu: goto label_196b8c;
        case 0x196b90u: goto label_196b90;
        case 0x196b94u: goto label_196b94;
        case 0x196b98u: goto label_196b98;
        case 0x196b9cu: goto label_196b9c;
        case 0x196ba0u: goto label_196ba0;
        case 0x196ba4u: goto label_196ba4;
        case 0x196ba8u: goto label_196ba8;
        case 0x196bacu: goto label_196bac;
        case 0x196bb0u: goto label_196bb0;
        case 0x196bb4u: goto label_196bb4;
        case 0x196bb8u: goto label_196bb8;
        case 0x196bbcu: goto label_196bbc;
        case 0x196bc0u: goto label_196bc0;
        case 0x196bc4u: goto label_196bc4;
        case 0x196bc8u: goto label_196bc8;
        case 0x196bccu: goto label_196bcc;
        case 0x196bd0u: goto label_196bd0;
        case 0x196bd4u: goto label_196bd4;
        case 0x196bd8u: goto label_196bd8;
        case 0x196bdcu: goto label_196bdc;
        case 0x196be0u: goto label_196be0;
        case 0x196be4u: goto label_196be4;
        case 0x196be8u: goto label_196be8;
        case 0x196becu: goto label_196bec;
        case 0x196bf0u: goto label_196bf0;
        case 0x196bf4u: goto label_196bf4;
        case 0x196bf8u: goto label_196bf8;
        case 0x196bfcu: goto label_196bfc;
        case 0x196c00u: goto label_196c00;
        case 0x196c04u: goto label_196c04;
        case 0x196c08u: goto label_196c08;
        case 0x196c0cu: goto label_196c0c;
        case 0x196c10u: goto label_196c10;
        case 0x196c14u: goto label_196c14;
        case 0x196c18u: goto label_196c18;
        case 0x196c1cu: goto label_196c1c;
        case 0x196c20u: goto label_196c20;
        case 0x196c24u: goto label_196c24;
        case 0x196c28u: goto label_196c28;
        case 0x196c2cu: goto label_196c2c;
        case 0x196c30u: goto label_196c30;
        case 0x196c34u: goto label_196c34;
        case 0x196c38u: goto label_196c38;
        case 0x196c3cu: goto label_196c3c;
        case 0x196c40u: goto label_196c40;
        case 0x196c44u: goto label_196c44;
        case 0x196c48u: goto label_196c48;
        case 0x196c4cu: goto label_196c4c;
        case 0x196c50u: goto label_196c50;
        case 0x196c54u: goto label_196c54;
        case 0x196c58u: goto label_196c58;
        case 0x196c5cu: goto label_196c5c;
        case 0x196c60u: goto label_196c60;
        case 0x196c64u: goto label_196c64;
        case 0x196c68u: goto label_196c68;
        case 0x196c6cu: goto label_196c6c;
        case 0x196c70u: goto label_196c70;
        case 0x196c74u: goto label_196c74;
        case 0x196c78u: goto label_196c78;
        case 0x196c7cu: goto label_196c7c;
        case 0x196c80u: goto label_196c80;
        case 0x196c84u: goto label_196c84;
        case 0x196c88u: goto label_196c88;
        case 0x196c8cu: goto label_196c8c;
        case 0x196c90u: goto label_196c90;
        case 0x196c94u: goto label_196c94;
        case 0x196c98u: goto label_196c98;
        case 0x196c9cu: goto label_196c9c;
        case 0x196ca0u: goto label_196ca0;
        case 0x196ca4u: goto label_196ca4;
        case 0x196ca8u: goto label_196ca8;
        case 0x196cacu: goto label_196cac;
        case 0x196cb0u: goto label_196cb0;
        case 0x196cb4u: goto label_196cb4;
        case 0x196cb8u: goto label_196cb8;
        case 0x196cbcu: goto label_196cbc;
        case 0x196cc0u: goto label_196cc0;
        case 0x196cc4u: goto label_196cc4;
        case 0x196cc8u: goto label_196cc8;
        case 0x196cccu: goto label_196ccc;
        case 0x196cd0u: goto label_196cd0;
        case 0x196cd4u: goto label_196cd4;
        case 0x196cd8u: goto label_196cd8;
        case 0x196cdcu: goto label_196cdc;
        case 0x196ce0u: goto label_196ce0;
        case 0x196ce4u: goto label_196ce4;
        case 0x196ce8u: goto label_196ce8;
        case 0x196cecu: goto label_196cec;
        case 0x196cf0u: goto label_196cf0;
        case 0x196cf4u: goto label_196cf4;
        case 0x196cf8u: goto label_196cf8;
        case 0x196cfcu: goto label_196cfc;
        case 0x196d00u: goto label_196d00;
        case 0x196d04u: goto label_196d04;
        case 0x196d08u: goto label_196d08;
        case 0x196d0cu: goto label_196d0c;
        case 0x196d10u: goto label_196d10;
        case 0x196d14u: goto label_196d14;
        case 0x196d18u: goto label_196d18;
        case 0x196d1cu: goto label_196d1c;
        case 0x196d20u: goto label_196d20;
        case 0x196d24u: goto label_196d24;
        case 0x196d28u: goto label_196d28;
        case 0x196d2cu: goto label_196d2c;
        case 0x196d30u: goto label_196d30;
        case 0x196d34u: goto label_196d34;
        case 0x196d38u: goto label_196d38;
        case 0x196d3cu: goto label_196d3c;
        case 0x196d40u: goto label_196d40;
        case 0x196d44u: goto label_196d44;
        case 0x196d48u: goto label_196d48;
        case 0x196d4cu: goto label_196d4c;
        case 0x196d50u: goto label_196d50;
        case 0x196d54u: goto label_196d54;
        case 0x196d58u: goto label_196d58;
        case 0x196d5cu: goto label_196d5c;
        case 0x196d60u: goto label_196d60;
        case 0x196d64u: goto label_196d64;
        case 0x196d68u: goto label_196d68;
        case 0x196d6cu: goto label_196d6c;
        case 0x196d70u: goto label_196d70;
        case 0x196d74u: goto label_196d74;
        case 0x196d78u: goto label_196d78;
        case 0x196d7cu: goto label_196d7c;
        case 0x196d80u: goto label_196d80;
        case 0x196d84u: goto label_196d84;
        case 0x196d88u: goto label_196d88;
        case 0x196d8cu: goto label_196d8c;
        case 0x196d90u: goto label_196d90;
        case 0x196d94u: goto label_196d94;
        case 0x196d98u: goto label_196d98;
        case 0x196d9cu: goto label_196d9c;
        case 0x196da0u: goto label_196da0;
        case 0x196da4u: goto label_196da4;
        case 0x196da8u: goto label_196da8;
        case 0x196dacu: goto label_196dac;
        case 0x196db0u: goto label_196db0;
        case 0x196db4u: goto label_196db4;
        case 0x196db8u: goto label_196db8;
        case 0x196dbcu: goto label_196dbc;
        case 0x196dc0u: goto label_196dc0;
        case 0x196dc4u: goto label_196dc4;
        case 0x196dc8u: goto label_196dc8;
        case 0x196dccu: goto label_196dcc;
        case 0x196dd0u: goto label_196dd0;
        case 0x196dd4u: goto label_196dd4;
        case 0x196dd8u: goto label_196dd8;
        case 0x196ddcu: goto label_196ddc;
        case 0x196de0u: goto label_196de0;
        case 0x196de4u: goto label_196de4;
        case 0x196de8u: goto label_196de8;
        case 0x196decu: goto label_196dec;
        case 0x196df0u: goto label_196df0;
        case 0x196df4u: goto label_196df4;
        case 0x196df8u: goto label_196df8;
        case 0x196dfcu: goto label_196dfc;
        case 0x196e00u: goto label_196e00;
        case 0x196e04u: goto label_196e04;
        case 0x196e08u: goto label_196e08;
        case 0x196e0cu: goto label_196e0c;
        case 0x196e10u: goto label_196e10;
        case 0x196e14u: goto label_196e14;
        case 0x196e18u: goto label_196e18;
        case 0x196e1cu: goto label_196e1c;
        case 0x196e20u: goto label_196e20;
        case 0x196e24u: goto label_196e24;
        case 0x196e28u: goto label_196e28;
        case 0x196e2cu: goto label_196e2c;
        case 0x196e30u: goto label_196e30;
        case 0x196e34u: goto label_196e34;
        case 0x196e38u: goto label_196e38;
        case 0x196e3cu: goto label_196e3c;
        case 0x196e40u: goto label_196e40;
        case 0x196e44u: goto label_196e44;
        case 0x196e48u: goto label_196e48;
        case 0x196e4cu: goto label_196e4c;
        case 0x196e50u: goto label_196e50;
        case 0x196e54u: goto label_196e54;
        case 0x196e58u: goto label_196e58;
        case 0x196e5cu: goto label_196e5c;
        case 0x196e60u: goto label_196e60;
        case 0x196e64u: goto label_196e64;
        case 0x196e68u: goto label_196e68;
        case 0x196e6cu: goto label_196e6c;
        case 0x196e70u: goto label_196e70;
        case 0x196e74u: goto label_196e74;
        case 0x196e78u: goto label_196e78;
        case 0x196e7cu: goto label_196e7c;
        case 0x196e80u: goto label_196e80;
        case 0x196e84u: goto label_196e84;
        case 0x196e88u: goto label_196e88;
        case 0x196e8cu: goto label_196e8c;
        case 0x196e90u: goto label_196e90;
        case 0x196e94u: goto label_196e94;
        case 0x196e98u: goto label_196e98;
        case 0x196e9cu: goto label_196e9c;
        case 0x196ea0u: goto label_196ea0;
        case 0x196ea4u: goto label_196ea4;
        case 0x196ea8u: goto label_196ea8;
        case 0x196eacu: goto label_196eac;
        case 0x196eb0u: goto label_196eb0;
        case 0x196eb4u: goto label_196eb4;
        case 0x196eb8u: goto label_196eb8;
        case 0x196ebcu: goto label_196ebc;
        case 0x196ec0u: goto label_196ec0;
        case 0x196ec4u: goto label_196ec4;
        case 0x196ec8u: goto label_196ec8;
        case 0x196eccu: goto label_196ecc;
        case 0x196ed0u: goto label_196ed0;
        case 0x196ed4u: goto label_196ed4;
        case 0x196ed8u: goto label_196ed8;
        case 0x196edcu: goto label_196edc;
        case 0x196ee0u: goto label_196ee0;
        case 0x196ee4u: goto label_196ee4;
        case 0x196ee8u: goto label_196ee8;
        case 0x196eecu: goto label_196eec;
        case 0x196ef0u: goto label_196ef0;
        case 0x196ef4u: goto label_196ef4;
        case 0x196ef8u: goto label_196ef8;
        case 0x196efcu: goto label_196efc;
        case 0x196f00u: goto label_196f00;
        case 0x196f04u: goto label_196f04;
        case 0x196f08u: goto label_196f08;
        case 0x196f0cu: goto label_196f0c;
        case 0x196f10u: goto label_196f10;
        case 0x196f14u: goto label_196f14;
        case 0x196f18u: goto label_196f18;
        case 0x196f1cu: goto label_196f1c;
        case 0x196f20u: goto label_196f20;
        case 0x196f24u: goto label_196f24;
        case 0x196f28u: goto label_196f28;
        case 0x196f2cu: goto label_196f2c;
        case 0x196f30u: goto label_196f30;
        case 0x196f34u: goto label_196f34;
        case 0x196f38u: goto label_196f38;
        case 0x196f3cu: goto label_196f3c;
        case 0x196f40u: goto label_196f40;
        case 0x196f44u: goto label_196f44;
        case 0x196f48u: goto label_196f48;
        case 0x196f4cu: goto label_196f4c;
        case 0x196f50u: goto label_196f50;
        case 0x196f54u: goto label_196f54;
        case 0x196f58u: goto label_196f58;
        case 0x196f5cu: goto label_196f5c;
        case 0x196f60u: goto label_196f60;
        case 0x196f64u: goto label_196f64;
        case 0x196f68u: goto label_196f68;
        case 0x196f6cu: goto label_196f6c;
        case 0x196f70u: goto label_196f70;
        case 0x196f74u: goto label_196f74;
        case 0x196f78u: goto label_196f78;
        case 0x196f7cu: goto label_196f7c;
        case 0x196f80u: goto label_196f80;
        case 0x196f84u: goto label_196f84;
        case 0x196f88u: goto label_196f88;
        case 0x196f8cu: goto label_196f8c;
        case 0x196f90u: goto label_196f90;
        case 0x196f94u: goto label_196f94;
        case 0x196f98u: goto label_196f98;
        case 0x196f9cu: goto label_196f9c;
        case 0x196fa0u: goto label_196fa0;
        case 0x196fa4u: goto label_196fa4;
        case 0x196fa8u: goto label_196fa8;
        case 0x196facu: goto label_196fac;
        case 0x196fb0u: goto label_196fb0;
        case 0x196fb4u: goto label_196fb4;
        case 0x196fb8u: goto label_196fb8;
        case 0x196fbcu: goto label_196fbc;
        case 0x196fc0u: goto label_196fc0;
        case 0x196fc4u: goto label_196fc4;
        case 0x196fc8u: goto label_196fc8;
        case 0x196fccu: goto label_196fcc;
        case 0x196fd0u: goto label_196fd0;
        case 0x196fd4u: goto label_196fd4;
        case 0x196fd8u: goto label_196fd8;
        case 0x196fdcu: goto label_196fdc;
        default: return;
    }

label_196810:
    // 0x196810: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x196810u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
label_196814:
    // 0x196814: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x196814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_196818:
    // 0x196818: 0x23600  sll         $a2, $v0, 24
    ctx->pc = 0x196818u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_19681c:
    // 0x19681c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x19681cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_196820:
    // 0x196820: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x196820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_196824:
    // 0x196824: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x196824u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_196828:
    // 0x196828: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x196828u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_19682c:
    // 0x19682c: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x19682cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_196830:
    // 0x196830: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x196830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_196834:
    // 0x196834: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x196834u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_196838:
    // 0x196838: 0x3e00008  jr          $ra
label_19683c:
    if (ctx->pc == 0x19683Cu) {
        ctx->pc = 0x196840u;
        goto label_196840;
    }
    ctx->pc = 0x196838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196840u;
label_196840:
    // 0x196840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_196844:
    // 0x196844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_196848:
    // 0x196848: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x196848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19684c:
    // 0x19684c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_196850:
    if (ctx->pc == 0x196850u) {
        ctx->pc = 0x196854u;
        goto label_196854;
    }
    ctx->pc = 0x19684Cu;
    {
        const bool branch_taken_0x19684c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19684c) {
            ctx->pc = 0x19686Cu;
            goto label_19686c;
        }
    }
    ctx->pc = 0x196854u;
label_196854:
    // 0x196854: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x196854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_196858:
    // 0x196858: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_19685c:
    if (ctx->pc == 0x19685Cu) {
        ctx->pc = 0x196860u;
        goto label_196860;
    }
    ctx->pc = 0x196858u;
    {
        const bool branch_taken_0x196858 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x196858) {
            ctx->pc = 0x19686Cu;
            goto label_19686c;
        }
    }
    ctx->pc = 0x196860u;
label_196860:
    // 0x196860: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x196860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_196864:
    // 0x196864: 0xc0f809  jalr        $a2
label_196868:
    if (ctx->pc == 0x196868u) {
        ctx->pc = 0x196868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196864u;
        // 0x196868: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19686Cu;
        goto label_19686c;
    }
    ctx->pc = 0x196864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x19686Cu);
        ctx->pc = 0x196868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196864u;
        // 0x196868: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196864u, 0x19686Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19686Cu;
label_19686c:
    // 0x19686c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19686cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_196870:
    // 0x196870: 0x3e00008  jr          $ra
label_196874:
    if (ctx->pc == 0x196874u) {
        ctx->pc = 0x196874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196870u;
        // 0x196874: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196878u;
        goto label_196878;
    }
    ctx->pc = 0x196870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196870u;
        // 0x196874: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196878u;
label_196878:
    // 0x196878: 0x0  nop
    ctx->pc = 0x196878u;
    // NOP
label_19687c:
    // 0x19687c: 0x0  nop
    ctx->pc = 0x19687cu;
    // NOP
label_196880:
    // 0x196880: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x196880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_196884:
    // 0x196884: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x196884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_196888:
    // 0x196888: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x196888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_19688c:
    // 0x19688c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19688cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_196890:
    // 0x196890: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x196890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_196894:
    // 0x196894: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x196894u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_196898:
    // 0x196898: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x196898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_19689c:
    // 0x19689c: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x19689cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1968a0:
    // 0x1968a0: 0xc065f20  jal         func_197C80
label_1968a4:
    if (ctx->pc == 0x1968A4u) {
        ctx->pc = 0x1968A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968A0u;
        // 0x1968a4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1968A8u;
        goto label_1968a8;
    }
    ctx->pc = 0x1968A0u;
    SET_GPR_U32(ctx, 31, 0x1968A8u);
    ctx->pc = 0x1968A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1968A0u;
    // 0x1968a4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197C80u;
    { ctx->pc = 0x197c80; return; }
    ctx->pc = 0x1968A8u;
label_1968a8:
    // 0x1968a8: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x1968a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_1968ac:
    // 0x1968ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1968b0:
    if (ctx->pc == 0x1968B0u) {
        ctx->pc = 0x1968B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968ACu;
        // 0x1968b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1968B4u;
        goto label_1968b4;
    }
    ctx->pc = 0x1968ACu;
    {
        const bool branch_taken_0x1968ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1968B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968ACu;
        // 0x1968b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1968ac) {
            ctx->pc = 0x1968C0u;
            goto label_1968c0;
        }
    }
    ctx->pc = 0x1968B4u;
label_1968b4:
    // 0x1968b4: 0xc065988  jal         func_196620
label_1968b8:
    if (ctx->pc == 0x1968B8u) {
        ctx->pc = 0x1968BCu;
        goto label_1968bc;
    }
    ctx->pc = 0x1968B4u;
    SET_GPR_U32(ctx, 31, 0x1968BCu);
    ctx->pc = 0x196620u;
    { ctx->pc = 0x196620; return; }
    ctx->pc = 0x1968BCu;
label_1968bc:
    // 0x1968bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1968bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1968c0:
    // 0x1968c0: 0xc065fec  jal         func_197FB0
label_1968c4:
    if (ctx->pc == 0x1968C4u) {
        ctx->pc = 0x1968C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968C0u;
        // 0x1968c4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1968C8u;
        goto label_1968c8;
    }
    ctx->pc = 0x1968C0u;
    SET_GPR_U32(ctx, 31, 0x1968C8u);
    ctx->pc = 0x1968C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1968C0u;
    // 0x1968c4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197FB0u;
    { ctx->pc = 0x197fb0; return; }
    ctx->pc = 0x1968C8u;
label_1968c8:
    // 0x1968c8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1968c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1968cc:
    // 0x1968cc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1968d0:
    if (ctx->pc == 0x1968D0u) {
        ctx->pc = 0x1968D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968CCu;
        // 0x1968d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1968D4u;
        goto label_1968d4;
    }
    ctx->pc = 0x1968CCu;
    {
        const bool branch_taken_0x1968cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1968D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968CCu;
        // 0x1968d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1968cc) {
            ctx->pc = 0x1968E4u;
            goto label_1968e4;
        }
    }
    ctx->pc = 0x1968D4u;
label_1968d4:
    // 0x1968d4: 0xc065bdc  jal         func_196F70
label_1968d8:
    if (ctx->pc == 0x1968D8u) {
        ctx->pc = 0x1968D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968D4u;
        // 0x1968d8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1968DCu;
        goto label_1968dc;
    }
    ctx->pc = 0x1968D4u;
    SET_GPR_U32(ctx, 31, 0x1968DCu);
    ctx->pc = 0x1968D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1968D4u;
    // 0x1968d8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196F70u;
    goto label_196f70;
    ctx->pc = 0x1968DCu;
label_1968dc:
    // 0x1968dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1968e0:
    if (ctx->pc == 0x1968E0u) {
        ctx->pc = 0x1968E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968DCu;
        // 0x1968e0: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1968E4u;
        goto label_1968e4;
    }
    ctx->pc = 0x1968DCu;
    {
        const bool branch_taken_0x1968dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1968E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968DCu;
        // 0x1968e0: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1968dc) {
            ctx->pc = 0x1968E8u;
            goto label_1968e8;
        }
    }
    ctx->pc = 0x1968E4u;
label_1968e4:
    // 0x1968e4: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1968e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_1968e8:
    // 0x1968e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1968e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1968ec:
    // 0x1968ec: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1968ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1968f0:
    // 0x1968f0: 0xc065a84  jal         func_196A10
label_1968f4:
    if (ctx->pc == 0x1968F4u) {
        ctx->pc = 0x1968F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968F0u;
        // 0x1968f4: 0x27a60078  addiu       $a2, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1968F8u;
        goto label_1968f8;
    }
    ctx->pc = 0x1968F0u;
    SET_GPR_U32(ctx, 31, 0x1968F8u);
    ctx->pc = 0x1968F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1968F0u;
    // 0x1968f4: 0x27a60078  addiu       $a2, $sp, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196A10u;
    goto label_196a10;
    ctx->pc = 0x1968F8u;
label_1968f8:
    // 0x1968f8: 0x90460002  lbu         $a2, 0x2($v0)
    ctx->pc = 0x1968f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1968fc:
    // 0x1968fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1968fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196900:
    // 0x196900: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x196900u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_196904:
    // 0x196904: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x196904u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_196908:
    // 0x196908: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x196908u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_19690c:
    // 0x19690c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x19690cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_196910:
    // 0x196910: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x196910u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_196914:
    // 0x196914: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x196914u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_196918:
    // 0x196918: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x196918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_19691c:
    // 0x19691c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x19691cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_196920:
    // 0x196920: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x196920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_196924:
    // 0x196924: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x196924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_196928:
    // 0x196928: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x196928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_19692c:
    // 0x19692c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_196930:
    if (ctx->pc == 0x196930u) {
        ctx->pc = 0x196930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19692Cu;
        // 0x196930: 0x26040005  addiu       $a0, $s0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196934u;
        goto label_196934;
    }
    ctx->pc = 0x19692Cu;
    {
        const bool branch_taken_0x19692c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19692Cu;
        // 0x196930: 0x26040005  addiu       $a0, $s0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19692c) {
            ctx->pc = 0x19693Cu;
            goto label_19693c;
        }
    }
    ctx->pc = 0x196934u;
label_196934:
    // 0x196934: 0x10000003  b           . + 4 + (0x3 << 2)
label_196938:
    if (ctx->pc == 0x196938u) {
        ctx->pc = 0x196938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196934u;
        // 0x196938: 0x27b1006c  addiu       $s1, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19693Cu;
        goto label_19693c;
    }
    ctx->pc = 0x196934u;
    {
        const bool branch_taken_0x196934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196934u;
        // 0x196938: 0x27b1006c  addiu       $s1, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196934) {
            ctx->pc = 0x196944u;
            goto label_196944;
        }
    }
    ctx->pc = 0x19693Cu;
label_19693c:
    // 0x19693c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19693cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196940:
    // 0x196940: 0x27b1006c  addiu       $s1, $sp, 0x6C
    ctx->pc = 0x196940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_196944:
    // 0x196944: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x196944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_196948:
    // 0x196948: 0xc0659c0  jal         func_196700
label_19694c:
    if (ctx->pc == 0x19694Cu) {
        ctx->pc = 0x19694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196948u;
        // 0x19694c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196950u;
        goto label_196950;
    }
    ctx->pc = 0x196948u;
    SET_GPR_U32(ctx, 31, 0x196950u);
    ctx->pc = 0x19694Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196948u;
    // 0x19694c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    { ctx->pc = 0x196700; return; }
    ctx->pc = 0x196950u;
label_196950:
    // 0x196950: 0x27b30070  addiu       $s3, $sp, 0x70
    ctx->pc = 0x196950u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_196954:
    // 0x196954: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196958:
    // 0x196958: 0xc0659e8  jal         func_1967A0
label_19695c:
    if (ctx->pc == 0x19695Cu) {
        ctx->pc = 0x19695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196958u;
        // 0x19695c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196960u;
        goto label_196960;
    }
    ctx->pc = 0x196958u;
    SET_GPR_U32(ctx, 31, 0x196960u);
    ctx->pc = 0x19695Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196958u;
    // 0x19695c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x196960u;
label_196960:
    // 0x196960: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x196960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_196964:
    // 0x196964: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x196964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_196968:
    // 0x196968: 0xc065c3c  jal         func_1970F0
label_19696c:
    if (ctx->pc == 0x19696Cu) {
        ctx->pc = 0x19696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196968u;
        // 0x19696c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196970u;
        goto label_196970;
    }
    ctx->pc = 0x196968u;
    SET_GPR_U32(ctx, 31, 0x196970u);
    ctx->pc = 0x19696Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196968u;
    // 0x19696c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1970F0u;
    { ctx->pc = 0x1970f0; return; }
    ctx->pc = 0x196970u;
label_196970:
    // 0x196970: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x196970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_196974:
    // 0x196974: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x196974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_196978:
    // 0x196978: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x196978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_19697c:
    // 0x19697c: 0xdfa60078  ld          $a2, 0x78($sp)
    ctx->pc = 0x19697cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_196980:
    // 0x196980: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x196980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_196984:
    // 0x196984: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x196984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_196988:
    // 0x196988: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x196988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_19698c:
    // 0x19698c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19698cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_196990:
    // 0x196990: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x196990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_196994:
    // 0x196994: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x196994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_196998:
    // 0x196998: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x196998u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_19699c:
    // 0x19699c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19699cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1969a0:
    // 0x1969a0: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x1969a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1969a4:
    // 0x1969a4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1969a8:
    if (ctx->pc == 0x1969A8u) {
        ctx->pc = 0x1969A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969A4u;
        // 0x1969a8: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1969ACu;
        goto label_1969ac;
    }
    ctx->pc = 0x1969A4u;
    {
        const bool branch_taken_0x1969a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1969A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969A4u;
        // 0x1969a8: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1969a4) {
            ctx->pc = 0x1969C4u;
            goto label_1969c4;
        }
    }
    ctx->pc = 0x1969ACu;
label_1969ac:
    // 0x1969ac: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1969acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_1969b0:
    // 0x1969b0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1969b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1969b4:
    // 0x1969b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1969b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1969b8:
    // 0x1969b8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1969b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1969bc:
    // 0x1969bc: 0x10000006  b           . + 4 + (0x6 << 2)
label_1969c0:
    if (ctx->pc == 0x1969C0u) {
        ctx->pc = 0x1969C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969BCu;
        // 0x1969c0: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1969C4u;
        goto label_1969c4;
    }
    ctx->pc = 0x1969BCu;
    {
        const bool branch_taken_0x1969bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1969C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969BCu;
        // 0x1969c0: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1969bc) {
            ctx->pc = 0x1969D8u;
            goto label_1969d8;
        }
    }
    ctx->pc = 0x1969C4u;
label_1969c4:
    // 0x1969c4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1969c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1969c8:
    // 0x1969c8: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x1969c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
label_1969cc:
    // 0x1969cc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1969ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1969d0:
    // 0x1969d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1969d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1969d4:
    // 0x1969d4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1969d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_1969d8:
    // 0x1969d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1969d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1969dc:
    // 0x1969dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1969dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1969e0:
    // 0x1969e0: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1969e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1969e4:
    // 0x1969e4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1969e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1969e8:
    // 0x1969e8: 0xc065f94  jal         func_197E50
label_1969ec:
    if (ctx->pc == 0x1969ECu) {
        ctx->pc = 0x1969ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969E8u;
        // 0x1969ec: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1969F0u;
        goto label_1969f0;
    }
    ctx->pc = 0x1969E8u;
    SET_GPR_U32(ctx, 31, 0x1969F0u);
    ctx->pc = 0x1969ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1969E8u;
    // 0x1969ec: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197E50u;
    { ctx->pc = 0x197e50; return; }
    ctx->pc = 0x1969F0u;
label_1969f0:
    // 0x1969f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1969f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1969f4:
    // 0x1969f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1969f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1969f8:
    // 0x1969f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1969f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1969fc:
    // 0x1969fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1969fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_196a00:
    // 0x196a00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x196a00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_196a04:
    // 0x196a04: 0x3e00008  jr          $ra
label_196a08:
    if (ctx->pc == 0x196A08u) {
        ctx->pc = 0x196A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A04u;
        // 0x196a08: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196A0Cu;
        goto label_196a0c;
    }
    ctx->pc = 0x196A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A04u;
        // 0x196a08: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196A0Cu;
label_196a0c:
    // 0x196a0c: 0x0  nop
    ctx->pc = 0x196a0cu;
    // NOP
label_196a10:
    // 0x196a10: 0x27bdfc50  addiu       $sp, $sp, -0x3B0
    ctx->pc = 0x196a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966352));
label_196a14:
    // 0x196a14: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x196a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_196a18:
    // 0x196a18: 0x27a200b4  addiu       $v0, $sp, 0xB4
    ctx->pc = 0x196a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_196a1c:
    // 0x196a1c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x196a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_196a20:
    // 0x196a20: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x196a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_196a24:
    // 0x196a24: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x196a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_196a28:
    // 0x196a28: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x196a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_196a2c:
    // 0x196a2c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x196a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_196a30:
    // 0x196a30: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x196a30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_196a34:
    // 0x196a34: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x196a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_196a38:
    // 0x196a38: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x196a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_196a3c:
    // 0x196a3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x196a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_196a40:
    // 0x196a40: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x196a40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_196a44:
    // 0x196a44: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x196a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_196a48:
    // 0x196a48: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x196a48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_196a4c:
    // 0x196a4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x196a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_196a50:
    // 0x196a50: 0x27b200a8  addiu       $s2, $sp, 0xA8
    ctx->pc = 0x196a50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_196a54:
    // 0x196a54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x196a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_196a58:
    // 0x196a58: 0x26880020  addiu       $t0, $s4, 0x20
    ctx->pc = 0x196a58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_196a5c:
    // 0x196a5c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x196a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_196a60:
    // 0x196a60: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x196a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_196a64:
    // 0x196a64: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x196a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_196a68:
    // 0x196a68: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x196a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
label_196a6c:
    // 0x196a6c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x196a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_196a70:
    // 0x196a70: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x196a70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_196a74:
    // 0x196a74: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x196a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_196a78:
    // 0x196a78: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x196a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
label_196a7c:
    // 0x196a7c: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x196a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_196a80:
    // 0x196a80: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x196a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_196a84:
    // 0x196a84: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x196a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_196a88:
    // 0x196a88: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x196a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_196a8c:
    // 0x196a8c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x196a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_196a90:
    // 0x196a90: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x196a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_196a94:
    // 0x196a94: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x196a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_196a98:
    // 0x196a98: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x196a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_196a9c:
    // 0x196a9c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x196a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_196aa0:
    // 0x196aa0: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x196aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_196aa4:
    // 0x196aa4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x196aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_196aa8:
    // 0x196aa8: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x196aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_196aac:
    // 0x196aac: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x196aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_196ab0:
    // 0x196ab0: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x196ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_196ab4:
    // 0x196ab4: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x196ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_196ab8:
    // 0x196ab8: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x196ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_196abc:
    // 0x196abc: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x196abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_196ac0:
    // 0x196ac0: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x196ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
label_196ac4:
    // 0x196ac4: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x196ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_196ac8:
    // 0x196ac8: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x196ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
label_196acc:
    // 0x196acc: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x196accu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_196ad0:
    // 0x196ad0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x196ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_196ad4:
    // 0x196ad4: 0x79020010  lq          $v0, 0x10($t0)
    ctx->pc = 0x196ad4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 16)));
label_196ad8:
    // 0x196ad8: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x196ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
label_196adc:
    // 0x196adc: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x196adcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
label_196ae0:
    // 0x196ae0: 0x7ce20010  sq          $v0, 0x10($a3)
    ctx->pc = 0x196ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
label_196ae4:
    // 0x196ae4: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_196ae8:
    if (ctx->pc == 0x196AE8u) {
        ctx->pc = 0x196AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196AE4u;
        // 0x196ae8: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196AECu;
        goto label_196aec;
    }
    ctx->pc = 0x196AE4u;
    {
        const bool branch_taken_0x196ae4 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x196AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196AE4u;
        // 0x196ae8: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196ae4) {
            ctx->pc = 0x196ACCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196acc;
        }
    }
    ctx->pc = 0x196AECu;
label_196aec:
    // 0x196aec: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x196aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_196af0:
    // 0x196af0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_196af4:
    if (ctx->pc == 0x196AF4u) {
        ctx->pc = 0x196AF8u;
        goto label_196af8;
    }
    ctx->pc = 0x196AF0u;
    {
        const bool branch_taken_0x196af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196af0) {
            ctx->pc = 0x196B04u;
            goto label_196b04;
        }
    }
    ctx->pc = 0x196AF8u;
label_196af8:
    // 0x196af8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x196af8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_196afc:
    // 0x196afc: 0x10000002  b           . + 4 + (0x2 << 2)
label_196b00:
    if (ctx->pc == 0x196B00u) {
        ctx->pc = 0x196B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196AFCu;
        // 0x196b00: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        ctx->pc = 0x196B04u;
        goto label_196b04;
    }
    ctx->pc = 0x196AFCu;
    {
        const bool branch_taken_0x196afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196AFCu;
        // 0x196b00: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x196afc) {
            ctx->pc = 0x196B08u;
            goto label_196b08;
        }
    }
    ctx->pc = 0x196B04u;
label_196b04:
    // 0x196b04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x196b04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196b08:
    // 0x196b08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x196b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_196b0c:
    // 0x196b0c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x196b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_196b10:
    // 0x196b10: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x196b10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_196b14:
    // 0x196b14: 0x1020006f  beqz        $at, . + 4 + (0x6F << 2)
label_196b18:
    if (ctx->pc == 0x196B18u) {
        ctx->pc = 0x196B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B14u;
        // 0x196b18: 0x3c03002d  lui         $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196B1Cu;
        goto label_196b1c;
    }
    ctx->pc = 0x196B14u;
    {
        const bool branch_taken_0x196b14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x196B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B14u;
        // 0x196b18: 0x3c03002d  lui         $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196b14) {
            ctx->pc = 0x196CD4u;
            goto label_196cd4;
        }
    }
    ctx->pc = 0x196B1Cu;
label_196b1c:
    // 0x196b1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x196b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_196b20:
    // 0x196b20: 0x246398c0  addiu       $v1, $v1, -0x6740
    ctx->pc = 0x196b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940864));
label_196b24:
    // 0x196b24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x196b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_196b28:
    // 0x196b28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x196b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_196b2c:
    // 0x196b2c: 0x400008  jr          $v0
label_196b30:
    if (ctx->pc == 0x196B30u) {
        ctx->pc = 0x196B34u;
        goto label_196b34;
    }
    ctx->pc = 0x196B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196B34u: goto label_196b34;
            case 0x196BBCu: goto label_196bbc;
            case 0x196CD4u: goto label_196cd4;
            case 0x196CE8u: goto label_196ce8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196B2Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x196B34u;
label_196b34:
    // 0x196b34: 0x0  nop
    ctx->pc = 0x196b34u;
    // NOP
label_196b38:
    // 0x196b38: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x196b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_196b3c:
    // 0x196b3c: 0x90460002  lbu         $a2, 0x2($v0)
    ctx->pc = 0x196b3cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_196b40:
    // 0x196b40: 0x24440005  addiu       $a0, $v0, 0x5
    ctx->pc = 0x196b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_196b44:
    // 0x196b44: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x196b44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_196b48:
    // 0x196b48: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x196b48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_196b4c:
    // 0x196b4c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x196b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_196b50:
    // 0x196b50: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x196b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_196b54:
    // 0x196b54: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x196b54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_196b58:
    // 0x196b58: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x196b58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_196b5c:
    // 0x196b5c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x196b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_196b60:
    // 0x196b60: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x196b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_196b64:
    // 0x196b64: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x196b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_196b68:
    // 0x196b68: 0xafa20390  sw          $v0, 0x390($sp)
    ctx->pc = 0x196b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 912), GPR_U32(ctx, 2));
label_196b6c:
    // 0x196b6c: 0x8fa20390  lw          $v0, 0x390($sp)
    ctx->pc = 0x196b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 912)));
label_196b70:
    // 0x196b70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_196b74:
    if (ctx->pc == 0x196B74u) {
        ctx->pc = 0x196B78u;
        goto label_196b78;
    }
    ctx->pc = 0x196B70u;
    {
        const bool branch_taken_0x196b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196b70) {
            ctx->pc = 0x196B80u;
            goto label_196b80;
        }
    }
    ctx->pc = 0x196B78u;
label_196b78:
    // 0x196b78: 0x10000003  b           . + 4 + (0x3 << 2)
label_196b7c:
    if (ctx->pc == 0x196B7Cu) {
        ctx->pc = 0x196B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B78u;
        // 0x196b7c: 0xafa20390  sw          $v0, 0x390($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 912), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196B80u;
        goto label_196b80;
    }
    ctx->pc = 0x196B78u;
    {
        const bool branch_taken_0x196b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B78u;
        // 0x196b7c: 0xafa20390  sw          $v0, 0x390($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 912), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196b78) {
            ctx->pc = 0x196B88u;
            goto label_196b88;
        }
    }
    ctx->pc = 0x196B80u;
label_196b80:
    // 0x196b80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x196b80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196b84:
    // 0x196b84: 0xafa20390  sw          $v0, 0x390($sp)
    ctx->pc = 0x196b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 912), GPR_U32(ctx, 2));
label_196b88:
    // 0x196b88: 0xc0659c0  jal         func_196700
label_196b8c:
    if (ctx->pc == 0x196B8Cu) {
        ctx->pc = 0x196B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B88u;
        // 0x196b8c: 0x27a50394  addiu       $a1, $sp, 0x394 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 916));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196B90u;
        goto label_196b90;
    }
    ctx->pc = 0x196B88u;
    SET_GPR_U32(ctx, 31, 0x196B90u);
    ctx->pc = 0x196B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196B88u;
    // 0x196b8c: 0x27a50394  addiu       $a1, $sp, 0x394 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 916));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    { ctx->pc = 0x196700; return; }
    ctx->pc = 0x196B90u;
label_196b90:
    // 0x196b90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196b94:
    // 0x196b94: 0xc0659e8  jal         func_1967A0
label_196b98:
    if (ctx->pc == 0x196B98u) {
        ctx->pc = 0x196B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B94u;
        // 0x196b98: 0x27a50398  addiu       $a1, $sp, 0x398 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196B9Cu;
        goto label_196b9c;
    }
    ctx->pc = 0x196B94u;
    SET_GPR_U32(ctx, 31, 0x196B9Cu);
    ctx->pc = 0x196B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196B94u;
    // 0x196b98: 0x27a50398  addiu       $a1, $sp, 0x398 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x196B9Cu;
label_196b9c:
    // 0x196b9c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x196b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_196ba0:
    // 0x196ba0: 0x8fa50390  lw          $a1, 0x390($sp)
    ctx->pc = 0x196ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 912)));
label_196ba4:
    // 0x196ba4: 0xc0658e0  jal         func_196380
label_196ba8:
    if (ctx->pc == 0x196BA8u) {
        ctx->pc = 0x196BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196BA4u;
        // 0x196ba8: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196BACu;
        goto label_196bac;
    }
    ctx->pc = 0x196BA4u;
    SET_GPR_U32(ctx, 31, 0x196BACu);
    ctx->pc = 0x196BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196BA4u;
    // 0x196ba8: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196380u;
    { ctx->pc = 0x196380; return; }
    ctx->pc = 0x196BACu;
label_196bac:
    // 0x196bac: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_196bb0:
    if (ctx->pc == 0x196BB0u) {
        ctx->pc = 0x196BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196BACu;
        // 0x196bb0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196BB4u;
        goto label_196bb4;
    }
    ctx->pc = 0x196BACu;
    {
        const bool branch_taken_0x196bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196BACu;
        // 0x196bb0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196bac) {
            ctx->pc = 0x196CECu;
            goto label_196cec;
        }
    }
    ctx->pc = 0x196BB4u;
label_196bb4:
    // 0x196bb4: 0x10000051  b           . + 4 + (0x51 << 2)
label_196bb8:
    if (ctx->pc == 0x196BB8u) {
        ctx->pc = 0x196BBCu;
        goto label_196bbc;
    }
    ctx->pc = 0x196BB4u;
    {
        const bool branch_taken_0x196bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196bb4) {
            ctx->pc = 0x196CFCu;
            goto label_196cfc;
        }
    }
    ctx->pc = 0x196BBCu;
label_196bbc:
    // 0x196bbc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x196bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_196bc0:
    // 0x196bc0: 0x27a50380  addiu       $a1, $sp, 0x380
    ctx->pc = 0x196bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_196bc4:
    // 0x196bc4: 0xc0659c0  jal         func_196700
label_196bc8:
    if (ctx->pc == 0x196BC8u) {
        ctx->pc = 0x196BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196BC4u;
        // 0x196bc8: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196BCCu;
        goto label_196bcc;
    }
    ctx->pc = 0x196BC4u;
    SET_GPR_U32(ctx, 31, 0x196BCCu);
    ctx->pc = 0x196BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196BC4u;
    // 0x196bc8: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    { ctx->pc = 0x196700; return; }
    ctx->pc = 0x196BCCu;
label_196bcc:
    // 0x196bcc: 0x27b70384  addiu       $s7, $sp, 0x384
    ctx->pc = 0x196bccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 900));
label_196bd0:
    // 0x196bd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196bd4:
    // 0x196bd4: 0xc0659c0  jal         func_196700
label_196bd8:
    if (ctx->pc == 0x196BD8u) {
        ctx->pc = 0x196BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196BD4u;
        // 0x196bd8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196BDCu;
        goto label_196bdc;
    }
    ctx->pc = 0x196BD4u;
    SET_GPR_U32(ctx, 31, 0x196BDCu);
    ctx->pc = 0x196BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196BD4u;
    // 0x196bd8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    { ctx->pc = 0x196700; return; }
    ctx->pc = 0x196BDCu;
label_196bdc:
    // 0x196bdc: 0x27be0388  addiu       $fp, $sp, 0x388
    ctx->pc = 0x196bdcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 904));
label_196be0:
    // 0x196be0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196be4:
    // 0x196be4: 0xc0659e8  jal         func_1967A0
label_196be8:
    if (ctx->pc == 0x196BE8u) {
        ctx->pc = 0x196BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196BE4u;
        // 0x196be8: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196BECu;
        goto label_196bec;
    }
    ctx->pc = 0x196BE4u;
    SET_GPR_U32(ctx, 31, 0x196BECu);
    ctx->pc = 0x196BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196BE4u;
    // 0x196be8: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x196BECu;
label_196bec:
    // 0x196bec: 0x27a3038c  addiu       $v1, $sp, 0x38C
    ctx->pc = 0x196becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 908));
label_196bf0:
    // 0x196bf0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x196bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_196bf4:
    // 0x196bf4: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x196bf4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_196bf8:
    // 0x196bf8: 0x8e950000  lw          $s5, 0x0($s4)
    ctx->pc = 0x196bf8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_196bfc:
    // 0x196bfc: 0x10000018  b           . + 4 + (0x18 << 2)
label_196c00:
    if (ctx->pc == 0x196C00u) {
        ctx->pc = 0x196C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196BFCu;
        // 0x196c00: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196C04u;
        goto label_196c04;
    }
    ctx->pc = 0x196BFCu;
    {
        const bool branch_taken_0x196bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196BFCu;
        // 0x196c00: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196bfc) {
            ctx->pc = 0x196C60u;
            goto label_196c60;
        }
    }
    ctx->pc = 0x196C04u;
label_196c04:
    // 0x196c04: 0x0  nop
    ctx->pc = 0x196c04u;
    // NOP
label_196c08:
    // 0x196c08: 0x92270001  lbu         $a3, 0x1($s1)
    ctx->pc = 0x196c08u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_196c0c:
    // 0x196c0c: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x196c0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_196c10:
    // 0x196c10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x196c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_196c14:
    // 0x196c14: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x196c14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_196c18:
    // 0x196c18: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x196c18u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_196c1c:
    // 0x196c1c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x196c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_196c20:
    // 0x196c20: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x196c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_196c24:
    // 0x196c24: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x196c24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_196c28:
    // 0x196c28: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x196c28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
label_196c2c:
    // 0x196c2c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x196c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_196c30:
    // 0x196c30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x196c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_196c34:
    // 0x196c34: 0xafa203ac  sw          $v0, 0x3AC($sp)
    ctx->pc = 0x196c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 940), GPR_U32(ctx, 2));
label_196c38:
    // 0x196c38: 0x8fa503ac  lw          $a1, 0x3AC($sp)
    ctx->pc = 0x196c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 940)));
label_196c3c:
    // 0x196c3c: 0xc0658e0  jal         func_196380
label_196c40:
    if (ctx->pc == 0x196C40u) {
        ctx->pc = 0x196C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C3Cu;
        // 0x196c40: 0x27a603a0  addiu       $a2, $sp, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196C44u;
        goto label_196c44;
    }
    ctx->pc = 0x196C3Cu;
    SET_GPR_U32(ctx, 31, 0x196C44u);
    ctx->pc = 0x196C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196C3Cu;
    // 0x196c40: 0x27a603a0  addiu       $a2, $sp, 0x3A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196380u;
    { ctx->pc = 0x196380; return; }
    ctx->pc = 0x196C44u;
label_196c44:
    // 0x196c44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_196c48:
    if (ctx->pc == 0x196C48u) {
        ctx->pc = 0x196C4Cu;
        goto label_196c4c;
    }
    ctx->pc = 0x196C44u;
    {
        const bool branch_taken_0x196c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196c44) {
            ctx->pc = 0x196C54u;
            goto label_196c54;
        }
    }
    ctx->pc = 0x196C4Cu;
label_196c4c:
    // 0x196c4c: 0x10000008  b           . + 4 + (0x8 << 2)
label_196c50:
    if (ctx->pc == 0x196C50u) {
        ctx->pc = 0x196C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C4Cu;
        // 0x196c50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196C54u;
        goto label_196c54;
    }
    ctx->pc = 0x196C4Cu;
    {
        const bool branch_taken_0x196c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C4Cu;
        // 0x196c50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196c4c) {
            ctx->pc = 0x196C70u;
            goto label_196c70;
        }
    }
    ctx->pc = 0x196C54u;
label_196c54:
    // 0x196c54: 0x0  nop
    ctx->pc = 0x196c54u;
    // NOP
label_196c58:
    // 0x196c58: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x196c58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_196c5c:
    // 0x196c5c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x196c5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_196c60:
    // 0x196c60: 0x8fa20380  lw          $v0, 0x380($sp)
    ctx->pc = 0x196c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
label_196c64:
    // 0x196c64: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x196c64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_196c68:
    // 0x196c68: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_196c6c:
    if (ctx->pc == 0x196C6Cu) {
        ctx->pc = 0x196C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C68u;
        // 0x196c6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196C70u;
        goto label_196c70;
    }
    ctx->pc = 0x196C68u;
    {
        const bool branch_taken_0x196c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C68u;
        // 0x196c6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196c68) {
            ctx->pc = 0x196C04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196c04;
        }
    }
    ctx->pc = 0x196C70u;
label_196c70:
    // 0x196c70: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_196c74:
    if (ctx->pc == 0x196C74u) {
        ctx->pc = 0x196C78u;
        goto label_196c78;
    }
    ctx->pc = 0x196C70u;
    {
        const bool branch_taken_0x196c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x196c70) {
            ctx->pc = 0x196CE8u;
            goto label_196ce8;
        }
    }
    ctx->pc = 0x196C78u;
label_196c78:
    // 0x196c78: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x196c78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_196c7c:
    // 0x196c7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x196c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_196c80:
    // 0x196c80: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x196c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_196c84:
    // 0x196c84: 0xc065c3c  jal         func_1970F0
label_196c88:
    if (ctx->pc == 0x196C88u) {
        ctx->pc = 0x196C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C84u;
        // 0x196c88: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196C8Cu;
        goto label_196c8c;
    }
    ctx->pc = 0x196C84u;
    SET_GPR_U32(ctx, 31, 0x196C8Cu);
    ctx->pc = 0x196C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196C84u;
    // 0x196c88: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1970F0u;
    { ctx->pc = 0x1970f0; return; }
    ctx->pc = 0x196C8Cu;
label_196c8c:
    // 0x196c8c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x196c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_196c90:
    // 0x196c90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x196c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_196c94:
    // 0x196c94: 0x8e860018  lw          $a2, 0x18($s4)
    ctx->pc = 0x196c94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_196c98:
    // 0x196c98: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x196c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_196c9c:
    // 0x196c9c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x196c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_196ca0:
    // 0x196ca0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x196ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_196ca4:
    // 0x196ca4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x196ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_196ca8:
    // 0x196ca8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x196ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_196cac:
    // 0x196cac: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x196cacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_196cb0:
    // 0x196cb0: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x196cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_196cb4:
    // 0x196cb4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x196cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_196cb8:
    // 0x196cb8: 0xac700014  sw          $s0, 0x14($v1)
    ctx->pc = 0x196cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
label_196cbc:
    // 0x196cbc: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x196cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_196cc0:
    // 0x196cc0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x196cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_196cc4:
    // 0x196cc4: 0xc065f94  jal         func_197E50
label_196cc8:
    if (ctx->pc == 0x196CC8u) {
        ctx->pc = 0x196CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196CC4u;
        // 0x196cc8: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196CCCu;
        goto label_196ccc;
    }
    ctx->pc = 0x196CC4u;
    SET_GPR_U32(ctx, 31, 0x196CCCu);
    ctx->pc = 0x196CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196CC4u;
    // 0x196cc8: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197E50u;
    { ctx->pc = 0x197e50; return; }
    ctx->pc = 0x196CCCu;
label_196ccc:
    // 0x196ccc: 0x10000006  b           . + 4 + (0x6 << 2)
label_196cd0:
    if (ctx->pc == 0x196CD0u) {
        ctx->pc = 0x196CD4u;
        goto label_196cd4;
    }
    ctx->pc = 0x196CCCu;
    {
        const bool branch_taken_0x196ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196ccc) {
            ctx->pc = 0x196CE8u;
            goto label_196ce8;
        }
    }
    ctx->pc = 0x196CD4u;
label_196cd4:
    // 0x196cd4: 0x0  nop
    ctx->pc = 0x196cd4u;
    // NOP
label_196cd8:
    // 0x196cd8: 0xc065988  jal         func_196620
label_196cdc:
    if (ctx->pc == 0x196CDCu) {
        ctx->pc = 0x196CE0u;
        goto label_196ce0;
    }
    ctx->pc = 0x196CD8u;
    SET_GPR_U32(ctx, 31, 0x196CE0u);
    ctx->pc = 0x196620u;
    { ctx->pc = 0x196620; return; }
    ctx->pc = 0x196CE0u;
label_196ce0:
    // 0x196ce0: 0x10000006  b           . + 4 + (0x6 << 2)
label_196ce4:
    if (ctx->pc == 0x196CE4u) {
        ctx->pc = 0x196CE8u;
        goto label_196ce8;
    }
    ctx->pc = 0x196CE0u;
    {
        const bool branch_taken_0x196ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196ce0) {
            ctx->pc = 0x196CFCu;
            goto label_196cfc;
        }
    }
    ctx->pc = 0x196CE8u;
label_196ce8:
    // 0x196ce8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x196ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_196cec:
    // 0x196cec: 0xc065e58  jal         func_197960
label_196cf0:
    if (ctx->pc == 0x196CF0u) {
        ctx->pc = 0x196CF4u;
        goto label_196cf4;
    }
    ctx->pc = 0x196CECu;
    SET_GPR_U32(ctx, 31, 0x196CF4u);
    ctx->pc = 0x197960u;
    { ctx->pc = 0x197960; return; }
    ctx->pc = 0x196CF4u;
label_196cf4:
    // 0x196cf4: 0x1000ff85  b           . + 4 + (-0x7B << 2)
label_196cf8:
    if (ctx->pc == 0x196CF8u) {
        ctx->pc = 0x196CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196CF4u;
        // 0x196cf8: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x196CFCu;
        goto label_196cfc;
    }
    ctx->pc = 0x196CF4u;
    {
        const bool branch_taken_0x196cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196CF4u;
        // 0x196cf8: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x196cf4) {
            ctx->pc = 0x196B0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196b0c;
        }
    }
    ctx->pc = 0x196CFCu;
label_196cfc:
    // 0x196cfc: 0x0  nop
    ctx->pc = 0x196cfcu;
    // NOP
label_196d00:
    // 0x196d00: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x196d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_196d04:
    // 0x196d04: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x196d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_196d08:
    // 0x196d08: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x196d08u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_196d0c:
    // 0x196d0c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x196d0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_196d10:
    // 0x196d10: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x196d10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_196d14:
    // 0x196d14: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x196d14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_196d18:
    // 0x196d18: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x196d18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_196d1c:
    // 0x196d1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x196d1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_196d20:
    // 0x196d20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x196d20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_196d24:
    // 0x196d24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x196d24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_196d28:
    // 0x196d28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x196d28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_196d2c:
    // 0x196d2c: 0x3e00008  jr          $ra
label_196d30:
    if (ctx->pc == 0x196D30u) {
        ctx->pc = 0x196D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196D2Cu;
        // 0x196d30: 0x27bd03b0  addiu       $sp, $sp, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196D34u;
        goto label_196d34;
    }
    ctx->pc = 0x196D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196D2Cu;
        // 0x196d30: 0x27bd03b0  addiu       $sp, $sp, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196D34u;
label_196d34:
    // 0x196d34: 0x0  nop
    ctx->pc = 0x196d34u;
    // NOP
label_196d38:
    // 0x196d38: 0x0  nop
    ctx->pc = 0x196d38u;
    // NOP
label_196d3c:
    // 0x196d3c: 0x0  nop
    ctx->pc = 0x196d3cu;
    // NOP
label_196d40:
    // 0x196d40: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x196d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_196d44:
    // 0x196d44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x196d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_196d48:
    // 0x196d48: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x196d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_196d4c:
    // 0x196d4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x196d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_196d50:
    // 0x196d50: 0x3a0f021  addu        $fp, $sp, $zero
    ctx->pc = 0x196d50u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
label_196d54:
    // 0x196d54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x196d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_196d58:
    // 0x196d58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x196d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_196d5c:
    // 0x196d5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x196d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_196d60:
    // 0x196d60: 0x8c900014  lw          $s0, 0x14($a0)
    ctx->pc = 0x196d60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_196d64:
    // 0x196d64: 0x0  nop
    ctx->pc = 0x196d64u;
    // NOP
label_196d68:
    // 0x196d68: 0xc06597c  jal         func_1965F0
label_196d6c:
    if (ctx->pc == 0x196D6Cu) {
        ctx->pc = 0x196D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196D68u;
        // 0x196d6c: 0xafdd0084  sw          $sp, 0x84($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 132), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196D70u;
        goto label_196d70;
    }
    ctx->pc = 0x196D68u;
    SET_GPR_U32(ctx, 31, 0x196D70u);
    ctx->pc = 0x196D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196D68u;
    // 0x196d6c: 0xafdd0084  sw          $sp, 0x84($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 132), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1965F0u;
    { ctx->pc = 0x1965f0; return; }
    ctx->pc = 0x196D70u;
label_196d70:
    // 0x196d70: 0x10000059  b           . + 4 + (0x59 << 2)
label_196d74:
    if (ctx->pc == 0x196D74u) {
        ctx->pc = 0x196D78u;
        goto label_196d78;
    }
    ctx->pc = 0x196D70u;
    {
        const bool branch_taken_0x196d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196d70) {
            ctx->pc = 0x196ED8u;
            goto label_196ed8;
        }
    }
    ctx->pc = 0x196D78u;
label_196d78:
    // 0x196d78: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x196d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_196d7c:
    // 0x196d7c: 0xc0659c0  jal         func_196700
label_196d80:
    if (ctx->pc == 0x196D80u) {
        ctx->pc = 0x196D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196D7Cu;
        // 0x196d80: 0x27c50060  addiu       $a1, $fp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196D84u;
        goto label_196d84;
    }
    ctx->pc = 0x196D7Cu;
    SET_GPR_U32(ctx, 31, 0x196D84u);
    ctx->pc = 0x196D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196D7Cu;
    // 0x196d80: 0x27c50060  addiu       $a1, $fp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    { ctx->pc = 0x196700; return; }
    ctx->pc = 0x196D84u;
label_196d84:
    // 0x196d84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196d88:
    // 0x196d88: 0xc0659c0  jal         func_196700
label_196d8c:
    if (ctx->pc == 0x196D8Cu) {
        ctx->pc = 0x196D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196D88u;
        // 0x196d8c: 0x27c50064  addiu       $a1, $fp, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196D90u;
        goto label_196d90;
    }
    ctx->pc = 0x196D88u;
    SET_GPR_U32(ctx, 31, 0x196D90u);
    ctx->pc = 0x196D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196D88u;
    // 0x196d8c: 0x27c50064  addiu       $a1, $fp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    { ctx->pc = 0x196700; return; }
    ctx->pc = 0x196D90u;
label_196d90:
    // 0x196d90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196d94:
    // 0x196d94: 0xc0659e8  jal         func_1967A0
label_196d98:
    if (ctx->pc == 0x196D98u) {
        ctx->pc = 0x196D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196D94u;
        // 0x196d98: 0x27c50068  addiu       $a1, $fp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196D9Cu;
        goto label_196d9c;
    }
    ctx->pc = 0x196D94u;
    SET_GPR_U32(ctx, 31, 0x196D9Cu);
    ctx->pc = 0x196D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196D94u;
    // 0x196d98: 0x27c50068  addiu       $a1, $fp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x196D9Cu;
label_196d9c:
    // 0x196d9c: 0x27d3006c  addiu       $s3, $fp, 0x6C
    ctx->pc = 0x196d9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 108));
label_196da0:
    // 0x196da0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x196da0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_196da4:
    // 0x196da4: 0x8fd20074  lw          $s2, 0x74($fp)
    ctx->pc = 0x196da4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
label_196da8:
    // 0x196da8: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x196da8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_196dac:
    // 0x196dac: 0x10000016  b           . + 4 + (0x16 << 2)
label_196db0:
    if (ctx->pc == 0x196DB0u) {
        ctx->pc = 0x196DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196DACu;
        // 0x196db0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196DB4u;
        goto label_196db4;
    }
    ctx->pc = 0x196DACu;
    {
        const bool branch_taken_0x196dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196DACu;
        // 0x196db0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196dac) {
            ctx->pc = 0x196E08u;
            goto label_196e08;
        }
    }
    ctx->pc = 0x196DB4u;
label_196db4:
    // 0x196db4: 0x92270001  lbu         $a3, 0x1($s1)
    ctx->pc = 0x196db4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_196db8:
    // 0x196db8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x196db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_196dbc:
    // 0x196dbc: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x196dbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_196dc0:
    // 0x196dc0: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x196dc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_196dc4:
    // 0x196dc4: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x196dc4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_196dc8:
    // 0x196dc8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x196dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_196dcc:
    // 0x196dcc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x196dccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_196dd0:
    // 0x196dd0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x196dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_196dd4:
    // 0x196dd4: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x196dd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
label_196dd8:
    // 0x196dd8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x196dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_196ddc:
    // 0x196ddc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x196ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_196de0:
    // 0x196de0: 0xafc200a8  sw          $v0, 0xA8($fp)
    ctx->pc = 0x196de0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 168), GPR_U32(ctx, 2));
label_196de4:
    // 0x196de4: 0x8fc500a8  lw          $a1, 0xA8($fp)
    ctx->pc = 0x196de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 168)));
label_196de8:
    // 0x196de8: 0xc0658e0  jal         func_196380
label_196dec:
    if (ctx->pc == 0x196DECu) {
        ctx->pc = 0x196DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196DE8u;
        // 0x196dec: 0x27c60090  addiu       $a2, $fp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196DF0u;
        goto label_196df0;
    }
    ctx->pc = 0x196DE8u;
    SET_GPR_U32(ctx, 31, 0x196DF0u);
    ctx->pc = 0x196DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196DE8u;
    // 0x196dec: 0x27c60090  addiu       $a2, $fp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196380u;
    { ctx->pc = 0x196380; return; }
    ctx->pc = 0x196DF0u;
label_196df0:
    // 0x196df0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_196df4:
    if (ctx->pc == 0x196DF4u) {
        ctx->pc = 0x196DF8u;
        goto label_196df8;
    }
    ctx->pc = 0x196DF0u;
    {
        const bool branch_taken_0x196df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196df0) {
            ctx->pc = 0x196E00u;
            goto label_196e00;
        }
    }
    ctx->pc = 0x196DF8u;
label_196df8:
    // 0x196df8: 0x10000007  b           . + 4 + (0x7 << 2)
label_196dfc:
    if (ctx->pc == 0x196DFCu) {
        ctx->pc = 0x196DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196DF8u;
        // 0x196dfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196E00u;
        goto label_196e00;
    }
    ctx->pc = 0x196DF8u;
    {
        const bool branch_taken_0x196df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196DF8u;
        // 0x196dfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196df8) {
            ctx->pc = 0x196E18u;
            goto label_196e18;
        }
    }
    ctx->pc = 0x196E00u;
label_196e00:
    // 0x196e00: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x196e00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_196e04:
    // 0x196e04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x196e04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_196e08:
    // 0x196e08: 0x8fc20060  lw          $v0, 0x60($fp)
    ctx->pc = 0x196e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 96)));
label_196e0c:
    // 0x196e0c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x196e0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_196e10:
    // 0x196e10: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_196e14:
    if (ctx->pc == 0x196E14u) {
        ctx->pc = 0x196E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196E10u;
        // 0x196e14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196E18u;
        goto label_196e18;
    }
    ctx->pc = 0x196E10u;
    {
        const bool branch_taken_0x196e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196E10u;
        // 0x196e14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196e10) {
            ctx->pc = 0x196DB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196db4;
        }
    }
    ctx->pc = 0x196E18u;
label_196e18:
    // 0x196e18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_196e1c:
    if (ctx->pc == 0x196E1Cu) {
        ctx->pc = 0x196E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196E18u;
        // 0x196e1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196E20u;
        goto label_196e20;
    }
    ctx->pc = 0x196E18u;
    {
        const bool branch_taken_0x196e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196E18u;
        // 0x196e1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196e18) {
            ctx->pc = 0x196E2Cu;
            goto label_196e2c;
        }
    }
    ctx->pc = 0x196E20u;
label_196e20:
    // 0x196e20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x196e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196e24:
    // 0x196e24: 0xc065fb0  jal         func_197EC0
label_196e28:
    if (ctx->pc == 0x196E28u) {
        ctx->pc = 0x196E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196E24u;
        // 0x196e28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196E2Cu;
        goto label_196e2c;
    }
    ctx->pc = 0x196E24u;
    SET_GPR_U32(ctx, 31, 0x196E2Cu);
    ctx->pc = 0x196E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196E24u;
    // 0x196e28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197EC0u;
    { ctx->pc = 0x197ec0; return; }
    ctx->pc = 0x196E2Cu;
label_196e2c:
    // 0x196e2c: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x196e2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_196e30:
    // 0x196e30: 0x10000017  b           . + 4 + (0x17 << 2)
label_196e34:
    if (ctx->pc == 0x196E34u) {
        ctx->pc = 0x196E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196E30u;
        // 0x196e34: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196E38u;
        goto label_196e38;
    }
    ctx->pc = 0x196E30u;
    {
        const bool branch_taken_0x196e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196E30u;
        // 0x196e34: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196e30) {
            ctx->pc = 0x196E90u;
            goto label_196e90;
        }
    }
    ctx->pc = 0x196E38u;
label_196e38:
    // 0x196e38: 0x92270001  lbu         $a3, 0x1($s1)
    ctx->pc = 0x196e38u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_196e3c:
    // 0x196e3c: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x196e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_196e40:
    // 0x196e40: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x196e40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_196e44:
    // 0x196e44: 0x24849900  addiu       $a0, $a0, -0x6700
    ctx->pc = 0x196e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940928));
label_196e48:
    // 0x196e48: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x196e48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_196e4c:
    // 0x196e4c: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x196e4cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_196e50:
    // 0x196e50: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x196e50u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_196e54:
    // 0x196e54: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x196e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_196e58:
    // 0x196e58: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x196e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_196e5c:
    // 0x196e5c: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x196e5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
label_196e60:
    // 0x196e60: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x196e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_196e64:
    // 0x196e64: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x196e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_196e68:
    // 0x196e68: 0xafc200ac  sw          $v0, 0xAC($fp)
    ctx->pc = 0x196e68u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 172), GPR_U32(ctx, 2));
label_196e6c:
    // 0x196e6c: 0x8fc500ac  lw          $a1, 0xAC($fp)
    ctx->pc = 0x196e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 172)));
label_196e70:
    // 0x196e70: 0xc0658e0  jal         func_196380
label_196e74:
    if (ctx->pc == 0x196E74u) {
        ctx->pc = 0x196E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196E70u;
        // 0x196e74: 0x27c60098  addiu       $a2, $fp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196E78u;
        goto label_196e78;
    }
    ctx->pc = 0x196E70u;
    SET_GPR_U32(ctx, 31, 0x196E78u);
    ctx->pc = 0x196E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196E70u;
    // 0x196e74: 0x27c60098  addiu       $a2, $fp, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196380u;
    { ctx->pc = 0x196380; return; }
    ctx->pc = 0x196E78u;
label_196e78:
    // 0x196e78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_196e7c:
    if (ctx->pc == 0x196E7Cu) {
        ctx->pc = 0x196E80u;
        goto label_196e80;
    }
    ctx->pc = 0x196E78u;
    {
        const bool branch_taken_0x196e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196e78) {
            ctx->pc = 0x196E88u;
            goto label_196e88;
        }
    }
    ctx->pc = 0x196E80u;
label_196e80:
    // 0x196e80: 0x10000007  b           . + 4 + (0x7 << 2)
label_196e84:
    if (ctx->pc == 0x196E84u) {
        ctx->pc = 0x196E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196E80u;
        // 0x196e84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196E88u;
        goto label_196e88;
    }
    ctx->pc = 0x196E80u;
    {
        const bool branch_taken_0x196e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196E80u;
        // 0x196e84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196e80) {
            ctx->pc = 0x196EA0u;
            goto label_196ea0;
        }
    }
    ctx->pc = 0x196E88u;
label_196e88:
    // 0x196e88: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x196e88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_196e8c:
    // 0x196e8c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x196e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_196e90:
    // 0x196e90: 0x8fc20060  lw          $v0, 0x60($fp)
    ctx->pc = 0x196e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 96)));
label_196e94:
    // 0x196e94: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x196e94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_196e98:
    // 0x196e98: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_196e9c:
    if (ctx->pc == 0x196E9Cu) {
        ctx->pc = 0x196E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196E98u;
        // 0x196e9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196EA0u;
        goto label_196ea0;
    }
    ctx->pc = 0x196E98u;
    {
        const bool branch_taken_0x196e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196E98u;
        // 0x196e9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196e98) {
            ctx->pc = 0x196E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196e38;
        }
    }
    ctx->pc = 0x196EA0u;
label_196ea0:
    // 0x196ea0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_196ea4:
    if (ctx->pc == 0x196EA4u) {
        ctx->pc = 0x196EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196EA0u;
        // 0x196ea4: 0x27c40070  addiu       $a0, $fp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196EA8u;
        goto label_196ea8;
    }
    ctx->pc = 0x196EA0u;
    {
        const bool branch_taken_0x196ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196EA0u;
        // 0x196ea4: 0x27c40070  addiu       $a0, $fp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196ea0) {
            ctx->pc = 0x196ED0u;
            goto label_196ed0;
        }
    }
    ctx->pc = 0x196EA8u;
label_196ea8:
    // 0x196ea8: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x196ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_196eac:
    // 0x196eac: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x196eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_196eb0:
    // 0x196eb0: 0x2442ed90  addiu       $v0, $v0, -0x1270
    ctx->pc = 0x196eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962576));
label_196eb4:
    // 0x196eb4: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x196eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
label_196eb8:
    // 0x196eb8: 0x24849920  addiu       $a0, $a0, -0x66E0
    ctx->pc = 0x196eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940960));
label_196ebc:
    // 0x196ebc: 0xafc200a4  sw          $v0, 0xA4($fp)
    ctx->pc = 0x196ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 164), GPR_U32(ctx, 2));
label_196ec0:
    // 0x196ec0: 0x27c500a4  addiu       $a1, $fp, 0xA4
    ctx->pc = 0x196ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 164));
label_196ec4:
    // 0x196ec4: 0xc065fb0  jal         func_197EC0
label_196ec8:
    if (ctx->pc == 0x196EC8u) {
        ctx->pc = 0x196EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196EC4u;
        // 0x196ec8: 0x24c66f10  addiu       $a2, $a2, 0x6F10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196ECCu;
        goto label_196ecc;
    }
    ctx->pc = 0x196EC4u;
    SET_GPR_U32(ctx, 31, 0x196ECCu);
    ctx->pc = 0x196EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196EC4u;
    // 0x196ec8: 0x24c66f10  addiu       $a2, $a2, 0x6F10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197EC0u;
    { ctx->pc = 0x197ec0; return; }
    ctx->pc = 0x196ECCu;
label_196ecc:
    // 0x196ecc: 0x27c40070  addiu       $a0, $fp, 0x70
    ctx->pc = 0x196eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
label_196ed0:
    // 0x196ed0: 0xc065a10  jal         func_196840
label_196ed4:
    if (ctx->pc == 0x196ED4u) {
        ctx->pc = 0x196ED8u;
        goto label_196ed8;
    }
    ctx->pc = 0x196ED0u;
    SET_GPR_U32(ctx, 31, 0x196ED8u);
    ctx->pc = 0x196840u;
    goto label_196840;
    ctx->pc = 0x196ED8u;
label_196ed8:
    // 0x196ed8: 0xc065988  jal         func_196620
label_196edc:
    if (ctx->pc == 0x196EDCu) {
        ctx->pc = 0x196EE0u;
        goto label_196ee0;
    }
    ctx->pc = 0x196ED8u;
    SET_GPR_U32(ctx, 31, 0x196EE0u);
    ctx->pc = 0x196620u;
    { ctx->pc = 0x196620; return; }
    ctx->pc = 0x196EE0u;
label_196ee0:
    // 0x196ee0: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x196ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
label_196ee4:
    // 0x196ee4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x196ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_196ee8:
    // 0x196ee8: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x196ee8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_196eec:
    // 0x196eec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x196eecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_196ef0:
    // 0x196ef0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x196ef0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_196ef4:
    // 0x196ef4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x196ef4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_196ef8:
    // 0x196ef8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x196ef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_196efc:
    // 0x196efc: 0x3e00008  jr          $ra
label_196f00:
    if (ctx->pc == 0x196F00u) {
        ctx->pc = 0x196F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196EFCu;
        // 0x196f00: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196F04u;
        goto label_196f04;
    }
    ctx->pc = 0x196EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196EFCu;
        // 0x196f00: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196F04u;
label_196f04:
    // 0x196f04: 0x0  nop
    ctx->pc = 0x196f04u;
    // NOP
label_196f08:
    // 0x196f08: 0x0  nop
    ctx->pc = 0x196f08u;
    // NOP
label_196f0c:
    // 0x196f0c: 0x0  nop
    ctx->pc = 0x196f0cu;
    // NOP
label_196f10:
    // 0x196f10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x196f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_196f14:
    // 0x196f14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x196f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_196f18:
    // 0x196f18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x196f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_196f1c:
    // 0x196f1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x196f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_196f20:
    // 0x196f20: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_196f24:
    if (ctx->pc == 0x196F24u) {
        ctx->pc = 0x196F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196F20u;
        // 0x196f24: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196F28u;
        goto label_196f28;
    }
    ctx->pc = 0x196F20u;
    {
        const bool branch_taken_0x196f20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x196F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196F20u;
        // 0x196f24: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196f20) {
            ctx->pc = 0x196F60u;
            goto label_196f60;
        }
    }
    ctx->pc = 0x196F28u;
label_196f28:
    // 0x196f28: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x196f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_196f2c:
    // 0x196f2c: 0x2442ed90  addiu       $v0, $v0, -0x1270
    ctx->pc = 0x196f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962576));
label_196f30:
    // 0x196f30: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_196f34:
    if (ctx->pc == 0x196F34u) {
        ctx->pc = 0x196F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196F30u;
        // 0x196f34: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196F38u;
        goto label_196f38;
    }
    ctx->pc = 0x196F30u;
    {
        const bool branch_taken_0x196f30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x196F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196F30u;
        // 0x196f34: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196f30) {
            ctx->pc = 0x196F44u;
            goto label_196f44;
        }
    }
    ctx->pc = 0x196F38u;
label_196f38:
    // 0x196f38: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x196f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_196f3c:
    // 0x196f3c: 0x2442ed80  addiu       $v0, $v0, -0x1280
    ctx->pc = 0x196f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962560));
label_196f40:
    // 0x196f40: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x196f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_196f44:
    // 0x196f44: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x196f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_196f48:
    // 0x196f48: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x196f48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_196f4c:
    // 0x196f4c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_196f50:
    if (ctx->pc == 0x196F50u) {
        ctx->pc = 0x196F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196F4Cu;
        // 0x196f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196F54u;
        goto label_196f54;
    }
    ctx->pc = 0x196F4Cu;
    {
        const bool branch_taken_0x196f4c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x196F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196F4Cu;
        // 0x196f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196f4c) {
            ctx->pc = 0x196F5Cu;
            goto label_196f5c;
        }
    }
    ctx->pc = 0x196F54u;
label_196f54:
    // 0x196f54: 0xc0658b0  jal         func_1962C0
label_196f58:
    if (ctx->pc == 0x196F58u) {
        ctx->pc = 0x196F5Cu;
        goto label_196f5c;
    }
    ctx->pc = 0x196F54u;
    SET_GPR_U32(ctx, 31, 0x196F5Cu);
    ctx->pc = 0x1962C0u;
    { ctx->pc = 0x1962c0; return; }
    ctx->pc = 0x196F5Cu;
label_196f5c:
    // 0x196f5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x196f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_196f60:
    // 0x196f60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x196f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_196f64:
    // 0x196f64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x196f64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_196f68:
    // 0x196f68: 0x3e00008  jr          $ra
label_196f6c:
    if (ctx->pc == 0x196F6Cu) {
        ctx->pc = 0x196F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196F68u;
        // 0x196f6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196F70u;
        goto label_196f70;
    }
    ctx->pc = 0x196F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196F68u;
        // 0x196f6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196F70u;
label_196f70:
    // 0x196f70: 0x27bdfcd0  addiu       $sp, $sp, -0x330
    ctx->pc = 0x196f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966480));
label_196f74:
    // 0x196f74: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x196f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_196f78:
    // 0x196f78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x196f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_196f7c:
    // 0x196f7c: 0x27a20054  addiu       $v0, $sp, 0x54
    ctx->pc = 0x196f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_196f80:
    // 0x196f80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x196f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_196f84:
    // 0x196f84: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x196f84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_196f88:
    // 0x196f88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x196f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_196f8c:
    // 0x196f8c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x196f8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_196f90:
    // 0x196f90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x196f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_196f94:
    // 0x196f94: 0x27b10078  addiu       $s1, $sp, 0x78
    ctx->pc = 0x196f94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_196f98:
    // 0x196f98: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x196f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_196f9c:
    // 0x196f9c: 0x27b00048  addiu       $s0, $sp, 0x48
    ctx->pc = 0x196f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_196fa0:
    // 0x196fa0: 0x26480020  addiu       $t0, $s2, 0x20
    ctx->pc = 0x196fa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_196fa4:
    // 0x196fa4: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x196fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_196fa8:
    // 0x196fa8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x196fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_196fac:
    // 0x196fac: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x196facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_196fb0:
    // 0x196fb0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x196fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_196fb4:
    // 0x196fb4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x196fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_196fb8:
    // 0x196fb8: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x196fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_196fbc:
    // 0x196fbc: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x196fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
label_196fc0:
    // 0x196fc0: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x196fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_196fc4:
    // 0x196fc4: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x196fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_196fc8:
    // 0x196fc8: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x196fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_196fcc:
    // 0x196fcc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x196fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_196fd0:
    // 0x196fd0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x196fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_196fd4:
    // 0x196fd4: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x196fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_196fd8:
    // 0x196fd8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x196fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_196fdc:
    // 0x196fdc: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x196fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    ctx->pc = 0x196fe0u;
    return;
}

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


void FUN_0014eba0_part21(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1587e0u: goto label_1587e0;
        case 0x1587e4u: goto label_1587e4;
        case 0x1587e8u: goto label_1587e8;
        case 0x1587ecu: goto label_1587ec;
        case 0x1587f0u: goto label_1587f0;
        case 0x1587f4u: goto label_1587f4;
        case 0x1587f8u: goto label_1587f8;
        case 0x1587fcu: goto label_1587fc;
        case 0x158800u: goto label_158800;
        case 0x158804u: goto label_158804;
        case 0x158808u: goto label_158808;
        case 0x15880cu: goto label_15880c;
        case 0x158810u: goto label_158810;
        case 0x158814u: goto label_158814;
        case 0x158818u: goto label_158818;
        case 0x15881cu: goto label_15881c;
        case 0x158820u: goto label_158820;
        case 0x158824u: goto label_158824;
        case 0x158828u: goto label_158828;
        case 0x15882cu: goto label_15882c;
        case 0x158830u: goto label_158830;
        case 0x158834u: goto label_158834;
        case 0x158838u: goto label_158838;
        case 0x15883cu: goto label_15883c;
        case 0x158840u: goto label_158840;
        case 0x158844u: goto label_158844;
        case 0x158848u: goto label_158848;
        case 0x15884cu: goto label_15884c;
        case 0x158850u: goto label_158850;
        case 0x158854u: goto label_158854;
        case 0x158858u: goto label_158858;
        case 0x15885cu: goto label_15885c;
        case 0x158860u: goto label_158860;
        case 0x158864u: goto label_158864;
        case 0x158868u: goto label_158868;
        case 0x15886cu: goto label_15886c;
        case 0x158870u: goto label_158870;
        case 0x158874u: goto label_158874;
        case 0x158878u: goto label_158878;
        case 0x15887cu: goto label_15887c;
        case 0x158880u: goto label_158880;
        case 0x158884u: goto label_158884;
        case 0x158888u: goto label_158888;
        case 0x15888cu: goto label_15888c;
        case 0x158890u: goto label_158890;
        case 0x158894u: goto label_158894;
        case 0x158898u: goto label_158898;
        case 0x15889cu: goto label_15889c;
        case 0x1588a0u: goto label_1588a0;
        case 0x1588a4u: goto label_1588a4;
        case 0x1588a8u: goto label_1588a8;
        case 0x1588acu: goto label_1588ac;
        case 0x1588b0u: goto label_1588b0;
        case 0x1588b4u: goto label_1588b4;
        case 0x1588b8u: goto label_1588b8;
        case 0x1588bcu: goto label_1588bc;
        case 0x1588c0u: goto label_1588c0;
        case 0x1588c4u: goto label_1588c4;
        case 0x1588c8u: goto label_1588c8;
        case 0x1588ccu: goto label_1588cc;
        case 0x1588d0u: goto label_1588d0;
        case 0x1588d4u: goto label_1588d4;
        case 0x1588d8u: goto label_1588d8;
        case 0x1588dcu: goto label_1588dc;
        case 0x1588e0u: goto label_1588e0;
        case 0x1588e4u: goto label_1588e4;
        case 0x1588e8u: goto label_1588e8;
        case 0x1588ecu: goto label_1588ec;
        case 0x1588f0u: goto label_1588f0;
        case 0x1588f4u: goto label_1588f4;
        case 0x1588f8u: goto label_1588f8;
        case 0x1588fcu: goto label_1588fc;
        case 0x158900u: goto label_158900;
        case 0x158904u: goto label_158904;
        case 0x158908u: goto label_158908;
        case 0x15890cu: goto label_15890c;
        case 0x158910u: goto label_158910;
        case 0x158914u: goto label_158914;
        case 0x158918u: goto label_158918;
        case 0x15891cu: goto label_15891c;
        case 0x158920u: goto label_158920;
        case 0x158924u: goto label_158924;
        case 0x158928u: goto label_158928;
        case 0x15892cu: goto label_15892c;
        case 0x158930u: goto label_158930;
        case 0x158934u: goto label_158934;
        case 0x158938u: goto label_158938;
        case 0x15893cu: goto label_15893c;
        case 0x158940u: goto label_158940;
        case 0x158944u: goto label_158944;
        case 0x158948u: goto label_158948;
        case 0x15894cu: goto label_15894c;
        case 0x158950u: goto label_158950;
        case 0x158954u: goto label_158954;
        case 0x158958u: goto label_158958;
        case 0x15895cu: goto label_15895c;
        case 0x158960u: goto label_158960;
        case 0x158964u: goto label_158964;
        case 0x158968u: goto label_158968;
        case 0x15896cu: goto label_15896c;
        case 0x158970u: goto label_158970;
        case 0x158974u: goto label_158974;
        case 0x158978u: goto label_158978;
        case 0x15897cu: goto label_15897c;
        case 0x158980u: goto label_158980;
        case 0x158984u: goto label_158984;
        case 0x158988u: goto label_158988;
        case 0x15898cu: goto label_15898c;
        case 0x158990u: goto label_158990;
        case 0x158994u: goto label_158994;
        case 0x158998u: goto label_158998;
        case 0x15899cu: goto label_15899c;
        case 0x1589a0u: goto label_1589a0;
        case 0x1589a4u: goto label_1589a4;
        case 0x1589a8u: goto label_1589a8;
        case 0x1589acu: goto label_1589ac;
        case 0x1589b0u: goto label_1589b0;
        case 0x1589b4u: goto label_1589b4;
        case 0x1589b8u: goto label_1589b8;
        case 0x1589bcu: goto label_1589bc;
        case 0x1589c0u: goto label_1589c0;
        case 0x1589c4u: goto label_1589c4;
        case 0x1589c8u: goto label_1589c8;
        case 0x1589ccu: goto label_1589cc;
        case 0x1589d0u: goto label_1589d0;
        case 0x1589d4u: goto label_1589d4;
        case 0x1589d8u: goto label_1589d8;
        case 0x1589dcu: goto label_1589dc;
        case 0x1589e0u: goto label_1589e0;
        case 0x1589e4u: goto label_1589e4;
        case 0x1589e8u: goto label_1589e8;
        case 0x1589ecu: goto label_1589ec;
        case 0x1589f0u: goto label_1589f0;
        case 0x1589f4u: goto label_1589f4;
        case 0x1589f8u: goto label_1589f8;
        case 0x1589fcu: goto label_1589fc;
        case 0x158a00u: goto label_158a00;
        case 0x158a04u: goto label_158a04;
        case 0x158a08u: goto label_158a08;
        case 0x158a0cu: goto label_158a0c;
        case 0x158a10u: goto label_158a10;
        case 0x158a14u: goto label_158a14;
        case 0x158a18u: goto label_158a18;
        case 0x158a1cu: goto label_158a1c;
        case 0x158a20u: goto label_158a20;
        case 0x158a24u: goto label_158a24;
        case 0x158a28u: goto label_158a28;
        case 0x158a2cu: goto label_158a2c;
        case 0x158a30u: goto label_158a30;
        case 0x158a34u: goto label_158a34;
        case 0x158a38u: goto label_158a38;
        case 0x158a3cu: goto label_158a3c;
        case 0x158a40u: goto label_158a40;
        case 0x158a44u: goto label_158a44;
        case 0x158a48u: goto label_158a48;
        case 0x158a4cu: goto label_158a4c;
        case 0x158a50u: goto label_158a50;
        case 0x158a54u: goto label_158a54;
        case 0x158a58u: goto label_158a58;
        case 0x158a5cu: goto label_158a5c;
        case 0x158a60u: goto label_158a60;
        case 0x158a64u: goto label_158a64;
        case 0x158a68u: goto label_158a68;
        case 0x158a6cu: goto label_158a6c;
        case 0x158a70u: goto label_158a70;
        case 0x158a74u: goto label_158a74;
        case 0x158a78u: goto label_158a78;
        case 0x158a7cu: goto label_158a7c;
        case 0x158a80u: goto label_158a80;
        case 0x158a84u: goto label_158a84;
        case 0x158a88u: goto label_158a88;
        case 0x158a8cu: goto label_158a8c;
        case 0x158a90u: goto label_158a90;
        case 0x158a94u: goto label_158a94;
        case 0x158a98u: goto label_158a98;
        case 0x158a9cu: goto label_158a9c;
        case 0x158aa0u: goto label_158aa0;
        case 0x158aa4u: goto label_158aa4;
        case 0x158aa8u: goto label_158aa8;
        case 0x158aacu: goto label_158aac;
        case 0x158ab0u: goto label_158ab0;
        case 0x158ab4u: goto label_158ab4;
        case 0x158ab8u: goto label_158ab8;
        case 0x158abcu: goto label_158abc;
        case 0x158ac0u: goto label_158ac0;
        case 0x158ac4u: goto label_158ac4;
        case 0x158ac8u: goto label_158ac8;
        case 0x158accu: goto label_158acc;
        case 0x158ad0u: goto label_158ad0;
        case 0x158ad4u: goto label_158ad4;
        case 0x158ad8u: goto label_158ad8;
        case 0x158adcu: goto label_158adc;
        case 0x158ae0u: goto label_158ae0;
        case 0x158ae4u: goto label_158ae4;
        case 0x158ae8u: goto label_158ae8;
        case 0x158aecu: goto label_158aec;
        case 0x158af0u: goto label_158af0;
        case 0x158af4u: goto label_158af4;
        case 0x158af8u: goto label_158af8;
        case 0x158afcu: goto label_158afc;
        case 0x158b00u: goto label_158b00;
        case 0x158b04u: goto label_158b04;
        case 0x158b08u: goto label_158b08;
        case 0x158b0cu: goto label_158b0c;
        case 0x158b10u: goto label_158b10;
        case 0x158b14u: goto label_158b14;
        case 0x158b18u: goto label_158b18;
        case 0x158b1cu: goto label_158b1c;
        case 0x158b20u: goto label_158b20;
        case 0x158b24u: goto label_158b24;
        case 0x158b28u: goto label_158b28;
        case 0x158b2cu: goto label_158b2c;
        case 0x158b30u: goto label_158b30;
        case 0x158b34u: goto label_158b34;
        case 0x158b38u: goto label_158b38;
        case 0x158b3cu: goto label_158b3c;
        case 0x158b40u: goto label_158b40;
        case 0x158b44u: goto label_158b44;
        case 0x158b48u: goto label_158b48;
        case 0x158b4cu: goto label_158b4c;
        case 0x158b50u: goto label_158b50;
        case 0x158b54u: goto label_158b54;
        case 0x158b58u: goto label_158b58;
        case 0x158b5cu: goto label_158b5c;
        case 0x158b60u: goto label_158b60;
        case 0x158b64u: goto label_158b64;
        case 0x158b68u: goto label_158b68;
        case 0x158b6cu: goto label_158b6c;
        case 0x158b70u: goto label_158b70;
        case 0x158b74u: goto label_158b74;
        case 0x158b78u: goto label_158b78;
        case 0x158b7cu: goto label_158b7c;
        case 0x158b80u: goto label_158b80;
        case 0x158b84u: goto label_158b84;
        case 0x158b88u: goto label_158b88;
        case 0x158b8cu: goto label_158b8c;
        case 0x158b90u: goto label_158b90;
        case 0x158b94u: goto label_158b94;
        case 0x158b98u: goto label_158b98;
        case 0x158b9cu: goto label_158b9c;
        case 0x158ba0u: goto label_158ba0;
        case 0x158ba4u: goto label_158ba4;
        case 0x158ba8u: goto label_158ba8;
        case 0x158bacu: goto label_158bac;
        case 0x158bb0u: goto label_158bb0;
        case 0x158bb4u: goto label_158bb4;
        case 0x158bb8u: goto label_158bb8;
        case 0x158bbcu: goto label_158bbc;
        case 0x158bc0u: goto label_158bc0;
        case 0x158bc4u: goto label_158bc4;
        case 0x158bc8u: goto label_158bc8;
        case 0x158bccu: goto label_158bcc;
        case 0x158bd0u: goto label_158bd0;
        case 0x158bd4u: goto label_158bd4;
        case 0x158bd8u: goto label_158bd8;
        case 0x158bdcu: goto label_158bdc;
        case 0x158be0u: goto label_158be0;
        case 0x158be4u: goto label_158be4;
        case 0x158be8u: goto label_158be8;
        case 0x158becu: goto label_158bec;
        case 0x158bf0u: goto label_158bf0;
        case 0x158bf4u: goto label_158bf4;
        case 0x158bf8u: goto label_158bf8;
        case 0x158bfcu: goto label_158bfc;
        case 0x158c00u: goto label_158c00;
        case 0x158c04u: goto label_158c04;
        case 0x158c08u: goto label_158c08;
        case 0x158c0cu: goto label_158c0c;
        case 0x158c10u: goto label_158c10;
        case 0x158c14u: goto label_158c14;
        case 0x158c18u: goto label_158c18;
        case 0x158c1cu: goto label_158c1c;
        case 0x158c20u: goto label_158c20;
        case 0x158c24u: goto label_158c24;
        case 0x158c28u: goto label_158c28;
        case 0x158c2cu: goto label_158c2c;
        case 0x158c30u: goto label_158c30;
        case 0x158c34u: goto label_158c34;
        case 0x158c38u: goto label_158c38;
        case 0x158c3cu: goto label_158c3c;
        case 0x158c40u: goto label_158c40;
        case 0x158c44u: goto label_158c44;
        case 0x158c48u: goto label_158c48;
        case 0x158c4cu: goto label_158c4c;
        case 0x158c50u: goto label_158c50;
        case 0x158c54u: goto label_158c54;
        case 0x158c58u: goto label_158c58;
        case 0x158c5cu: goto label_158c5c;
        case 0x158c60u: goto label_158c60;
        case 0x158c64u: goto label_158c64;
        case 0x158c68u: goto label_158c68;
        case 0x158c6cu: goto label_158c6c;
        case 0x158c70u: goto label_158c70;
        case 0x158c74u: goto label_158c74;
        case 0x158c78u: goto label_158c78;
        case 0x158c7cu: goto label_158c7c;
        case 0x158c80u: goto label_158c80;
        case 0x158c84u: goto label_158c84;
        case 0x158c88u: goto label_158c88;
        case 0x158c8cu: goto label_158c8c;
        case 0x158c90u: goto label_158c90;
        case 0x158c94u: goto label_158c94;
        case 0x158c98u: goto label_158c98;
        case 0x158c9cu: goto label_158c9c;
        case 0x158ca0u: goto label_158ca0;
        case 0x158ca4u: goto label_158ca4;
        case 0x158ca8u: goto label_158ca8;
        case 0x158cacu: goto label_158cac;
        case 0x158cb0u: goto label_158cb0;
        case 0x158cb4u: goto label_158cb4;
        case 0x158cb8u: goto label_158cb8;
        case 0x158cbcu: goto label_158cbc;
        case 0x158cc0u: goto label_158cc0;
        case 0x158cc4u: goto label_158cc4;
        case 0x158cc8u: goto label_158cc8;
        case 0x158cccu: goto label_158ccc;
        case 0x158cd0u: goto label_158cd0;
        case 0x158cd4u: goto label_158cd4;
        case 0x158cd8u: goto label_158cd8;
        case 0x158cdcu: goto label_158cdc;
        case 0x158ce0u: goto label_158ce0;
        case 0x158ce4u: goto label_158ce4;
        case 0x158ce8u: goto label_158ce8;
        case 0x158cecu: goto label_158cec;
        case 0x158cf0u: goto label_158cf0;
        case 0x158cf4u: goto label_158cf4;
        case 0x158cf8u: goto label_158cf8;
        case 0x158cfcu: goto label_158cfc;
        case 0x158d00u: goto label_158d00;
        case 0x158d04u: goto label_158d04;
        case 0x158d08u: goto label_158d08;
        case 0x158d0cu: goto label_158d0c;
        case 0x158d10u: goto label_158d10;
        case 0x158d14u: goto label_158d14;
        case 0x158d18u: goto label_158d18;
        case 0x158d1cu: goto label_158d1c;
        case 0x158d20u: goto label_158d20;
        case 0x158d24u: goto label_158d24;
        case 0x158d28u: goto label_158d28;
        case 0x158d2cu: goto label_158d2c;
        case 0x158d30u: goto label_158d30;
        case 0x158d34u: goto label_158d34;
        case 0x158d38u: goto label_158d38;
        case 0x158d3cu: goto label_158d3c;
        case 0x158d40u: goto label_158d40;
        case 0x158d44u: goto label_158d44;
        case 0x158d48u: goto label_158d48;
        case 0x158d4cu: goto label_158d4c;
        case 0x158d50u: goto label_158d50;
        case 0x158d54u: goto label_158d54;
        case 0x158d58u: goto label_158d58;
        case 0x158d5cu: goto label_158d5c;
        case 0x158d60u: goto label_158d60;
        case 0x158d64u: goto label_158d64;
        case 0x158d68u: goto label_158d68;
        case 0x158d6cu: goto label_158d6c;
        case 0x158d70u: goto label_158d70;
        case 0x158d74u: goto label_158d74;
        case 0x158d78u: goto label_158d78;
        case 0x158d7cu: goto label_158d7c;
        case 0x158d80u: goto label_158d80;
        case 0x158d84u: goto label_158d84;
        case 0x158d88u: goto label_158d88;
        case 0x158d8cu: goto label_158d8c;
        case 0x158d90u: goto label_158d90;
        case 0x158d94u: goto label_158d94;
        case 0x158d98u: goto label_158d98;
        case 0x158d9cu: goto label_158d9c;
        case 0x158da0u: goto label_158da0;
        case 0x158da4u: goto label_158da4;
        case 0x158da8u: goto label_158da8;
        case 0x158dacu: goto label_158dac;
        case 0x158db0u: goto label_158db0;
        case 0x158db4u: goto label_158db4;
        case 0x158db8u: goto label_158db8;
        case 0x158dbcu: goto label_158dbc;
        case 0x158dc0u: goto label_158dc0;
        case 0x158dc4u: goto label_158dc4;
        case 0x158dc8u: goto label_158dc8;
        case 0x158dccu: goto label_158dcc;
        case 0x158dd0u: goto label_158dd0;
        case 0x158dd4u: goto label_158dd4;
        case 0x158dd8u: goto label_158dd8;
        case 0x158ddcu: goto label_158ddc;
        case 0x158de0u: goto label_158de0;
        case 0x158de4u: goto label_158de4;
        case 0x158de8u: goto label_158de8;
        case 0x158decu: goto label_158dec;
        case 0x158df0u: goto label_158df0;
        case 0x158df4u: goto label_158df4;
        case 0x158df8u: goto label_158df8;
        case 0x158dfcu: goto label_158dfc;
        case 0x158e00u: goto label_158e00;
        case 0x158e04u: goto label_158e04;
        case 0x158e08u: goto label_158e08;
        case 0x158e0cu: goto label_158e0c;
        case 0x158e10u: goto label_158e10;
        case 0x158e14u: goto label_158e14;
        case 0x158e18u: goto label_158e18;
        case 0x158e1cu: goto label_158e1c;
        case 0x158e20u: goto label_158e20;
        case 0x158e24u: goto label_158e24;
        case 0x158e28u: goto label_158e28;
        case 0x158e2cu: goto label_158e2c;
        case 0x158e30u: goto label_158e30;
        case 0x158e34u: goto label_158e34;
        case 0x158e38u: goto label_158e38;
        case 0x158e3cu: goto label_158e3c;
        case 0x158e40u: goto label_158e40;
        case 0x158e44u: goto label_158e44;
        case 0x158e48u: goto label_158e48;
        case 0x158e4cu: goto label_158e4c;
        case 0x158e50u: goto label_158e50;
        case 0x158e54u: goto label_158e54;
        case 0x158e58u: goto label_158e58;
        case 0x158e5cu: goto label_158e5c;
        case 0x158e60u: goto label_158e60;
        case 0x158e64u: goto label_158e64;
        case 0x158e68u: goto label_158e68;
        case 0x158e6cu: goto label_158e6c;
        case 0x158e70u: goto label_158e70;
        case 0x158e74u: goto label_158e74;
        case 0x158e78u: goto label_158e78;
        case 0x158e7cu: goto label_158e7c;
        case 0x158e80u: goto label_158e80;
        case 0x158e84u: goto label_158e84;
        case 0x158e88u: goto label_158e88;
        case 0x158e8cu: goto label_158e8c;
        case 0x158e90u: goto label_158e90;
        case 0x158e94u: goto label_158e94;
        case 0x158e98u: goto label_158e98;
        case 0x158e9cu: goto label_158e9c;
        case 0x158ea0u: goto label_158ea0;
        case 0x158ea4u: goto label_158ea4;
        case 0x158ea8u: goto label_158ea8;
        case 0x158eacu: goto label_158eac;
        case 0x158eb0u: goto label_158eb0;
        case 0x158eb4u: goto label_158eb4;
        case 0x158eb8u: goto label_158eb8;
        case 0x158ebcu: goto label_158ebc;
        case 0x158ec0u: goto label_158ec0;
        case 0x158ec4u: goto label_158ec4;
        case 0x158ec8u: goto label_158ec8;
        case 0x158eccu: goto label_158ecc;
        case 0x158ed0u: goto label_158ed0;
        case 0x158ed4u: goto label_158ed4;
        case 0x158ed8u: goto label_158ed8;
        case 0x158edcu: goto label_158edc;
        case 0x158ee0u: goto label_158ee0;
        case 0x158ee4u: goto label_158ee4;
        case 0x158ee8u: goto label_158ee8;
        case 0x158eecu: goto label_158eec;
        case 0x158ef0u: goto label_158ef0;
        case 0x158ef4u: goto label_158ef4;
        case 0x158ef8u: goto label_158ef8;
        case 0x158efcu: goto label_158efc;
        case 0x158f00u: goto label_158f00;
        case 0x158f04u: goto label_158f04;
        case 0x158f08u: goto label_158f08;
        case 0x158f0cu: goto label_158f0c;
        case 0x158f10u: goto label_158f10;
        case 0x158f14u: goto label_158f14;
        case 0x158f18u: goto label_158f18;
        case 0x158f1cu: goto label_158f1c;
        case 0x158f20u: goto label_158f20;
        case 0x158f24u: goto label_158f24;
        case 0x158f28u: goto label_158f28;
        case 0x158f2cu: goto label_158f2c;
        case 0x158f30u: goto label_158f30;
        case 0x158f34u: goto label_158f34;
        case 0x158f38u: goto label_158f38;
        case 0x158f3cu: goto label_158f3c;
        case 0x158f40u: goto label_158f40;
        case 0x158f44u: goto label_158f44;
        case 0x158f48u: goto label_158f48;
        case 0x158f4cu: goto label_158f4c;
        case 0x158f50u: goto label_158f50;
        case 0x158f54u: goto label_158f54;
        case 0x158f58u: goto label_158f58;
        case 0x158f5cu: goto label_158f5c;
        case 0x158f60u: goto label_158f60;
        case 0x158f64u: goto label_158f64;
        case 0x158f68u: goto label_158f68;
        case 0x158f6cu: goto label_158f6c;
        case 0x158f70u: goto label_158f70;
        case 0x158f74u: goto label_158f74;
        case 0x158f78u: goto label_158f78;
        case 0x158f7cu: goto label_158f7c;
        case 0x158f80u: goto label_158f80;
        case 0x158f84u: goto label_158f84;
        case 0x158f88u: goto label_158f88;
        case 0x158f8cu: goto label_158f8c;
        case 0x158f90u: goto label_158f90;
        case 0x158f94u: goto label_158f94;
        case 0x158f98u: goto label_158f98;
        case 0x158f9cu: goto label_158f9c;
        case 0x158fa0u: goto label_158fa0;
        case 0x158fa4u: goto label_158fa4;
        case 0x158fa8u: goto label_158fa8;
        case 0x158facu: goto label_158fac;
        default: return;
    }

label_1587e0:
    // 0x1587e0: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x1587e0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1587e4:
    // 0x1587e4: 0x0  nop
    ctx->pc = 0x1587e4u;
    // NOP
label_1587e8:
    // 0x1587e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1587e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1587ec:
    // 0x1587ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1587ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1587f0:
    // 0x1587f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1587f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1587f4:
    // 0x1587f4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1587f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1587f8:
    // 0x1587f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1587f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1587fc:
    // 0x1587fc: 0x0  nop
    ctx->pc = 0x1587fcu;
    // NOP
label_158800:
    // 0x158800: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x158800u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_158804:
    // 0x158804: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x158804u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_158808:
    // 0x158808: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x158808u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15880c:
    // 0x15880c: 0x123a00  sll         $a3, $s2, 8
    ctx->pc = 0x15880cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
label_158810:
    // 0x158810: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x158810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_158814:
    // 0x158814: 0xf24823  subu        $t1, $a3, $s2
    ctx->pc = 0x158814u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
label_158818:
    // 0x158818: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x158818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_15881c:
    // 0x15881c: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x15881cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_158820:
    // 0x158820: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x158820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_158824:
    // 0x158824: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x158824u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_158828:
    // 0x158828: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x158828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15882c:
    // 0x15882c: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x15882cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_158830:
    // 0x158830: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x158830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_158834:
    // 0x158834: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x158834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_158838:
    // 0x158838: 0x24880000  addiu       $t0, $a0, 0x0
    ctx->pc = 0x158838u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_15883c:
    // 0x15883c: 0x92040222  lbu         $a0, 0x222($s0)
    ctx->pc = 0x15883cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 546)));
label_158840:
    // 0x158840: 0x14800018  bnez        $a0, . + 4 + (0x18 << 2)
label_158844:
    if (ctx->pc == 0x158844u) {
        ctx->pc = 0x158848u;
        goto label_158848;
    }
    ctx->pc = 0x158840u;
    {
        const bool branch_taken_0x158840 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x158840) {
            ctx->pc = 0x1588A4u;
            goto label_1588a4;
        }
    }
    ctx->pc = 0x158848u;
label_158848:
    // 0x158848: 0x920a0220  lbu         $t2, 0x220($s0)
    ctx->pc = 0x158848u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 544)));
label_15884c:
    // 0x15884c: 0x122a0015  beq         $s1, $t2, . + 4 + (0x15 << 2)
label_158850:
    if (ctx->pc == 0x158850u) {
        ctx->pc = 0x158850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15884Cu;
        // 0x158850: 0x314900ff  andi        $t1, $t2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x158854u;
        goto label_158854;
    }
    ctx->pc = 0x15884Cu;
    {
        const bool branch_taken_0x15884c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 10));
        ctx->pc = 0x158850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15884Cu;
        // 0x158850: 0x314900ff  andi        $t1, $t2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15884c) {
            ctx->pc = 0x1588A4u;
            goto label_1588a4;
        }
    }
    ctx->pc = 0x158854u;
label_158854:
    // 0x158854: 0x920c0  sll         $a0, $t1, 3
    ctx->pc = 0x158854u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_158858:
    // 0x158858: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x158858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_15885c:
    // 0x15885c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x15885cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_158860:
    // 0x158860: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x158860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_158864:
    // 0x158864: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x158864u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_158868:
    // 0x158868: 0x91240015  lbu         $a0, 0x15($t1)
    ctx->pc = 0x158868u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 21)));
label_15886c:
    // 0x15886c: 0x1087000d  beq         $a0, $a3, . + 4 + (0xD << 2)
label_158870:
    if (ctx->pc == 0x158870u) {
        ctx->pc = 0x158874u;
        goto label_158874;
    }
    ctx->pc = 0x15886Cu;
    {
        const bool branch_taken_0x15886c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        if (branch_taken_0x15886c) {
            ctx->pc = 0x1588A4u;
            goto label_1588a4;
        }
    }
    ctx->pc = 0x158874u;
label_158874:
    // 0x158874: 0x1086000b  beq         $a0, $a2, . + 4 + (0xB << 2)
label_158878:
    if (ctx->pc == 0x158878u) {
        ctx->pc = 0x15887Cu;
        goto label_15887c;
    }
    ctx->pc = 0x158874u;
    {
        const bool branch_taken_0x158874 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x158874) {
            ctx->pc = 0x1588A4u;
            goto label_1588a4;
        }
    }
    ctx->pc = 0x15887Cu;
label_15887c:
    // 0x15887c: 0x10850009  beq         $a0, $a1, . + 4 + (0x9 << 2)
label_158880:
    if (ctx->pc == 0x158880u) {
        ctx->pc = 0x158884u;
        goto label_158884;
    }
    ctx->pc = 0x15887Cu;
    {
        const bool branch_taken_0x15887c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x15887c) {
            ctx->pc = 0x1588A4u;
            goto label_1588a4;
        }
    }
    ctx->pc = 0x158884u;
label_158884:
    // 0x158884: 0x91240012  lbu         $a0, 0x12($t1)
    ctx->pc = 0x158884u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 18)));
label_158888:
    // 0x158888: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_15888c:
    if (ctx->pc == 0x15888Cu) {
        ctx->pc = 0x158890u;
        goto label_158890;
    }
    ctx->pc = 0x158888u;
    {
        const bool branch_taken_0x158888 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x158888) {
            ctx->pc = 0x1588A4u;
            goto label_1588a4;
        }
    }
    ctx->pc = 0x158890u;
label_158890:
    // 0x158890: 0x16830003  bne         $s4, $v1, . + 4 + (0x3 << 2)
label_158894:
    if (ctx->pc == 0x158894u) {
        ctx->pc = 0x158898u;
        goto label_158898;
    }
    ctx->pc = 0x158890u;
    {
        const bool branch_taken_0x158890 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x158890) {
            ctx->pc = 0x1588A0u;
            goto label_1588a0;
        }
    }
    ctx->pc = 0x158898u;
label_158898:
    // 0x158898: 0x10000007  b           . + 4 + (0x7 << 2)
label_15889c:
    if (ctx->pc == 0x15889Cu) {
        ctx->pc = 0x15889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158898u;
        // 0x15889c: 0x140882d  daddu       $s1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1588A0u;
        goto label_1588a0;
    }
    ctx->pc = 0x158898u;
    {
        const bool branch_taken_0x158898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158898u;
        // 0x15889c: 0x140882d  daddu       $s1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158898) {
            ctx->pc = 0x1588B8u;
            goto label_1588b8;
        }
    }
    ctx->pc = 0x1588A0u;
label_1588a0:
    // 0x1588a0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1588a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1588a4:
    // 0x1588a4: 0x0  nop
    ctx->pc = 0x1588a4u;
    // NOP
label_1588a8:
    // 0x1588a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1588a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1588ac:
    // 0x1588ac: 0x2844000c  slti        $a0, $v0, 0xC
    ctx->pc = 0x1588acu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
label_1588b0:
    // 0x1588b0: 0x1480ffe2  bnez        $a0, . + 4 + (-0x1E << 2)
label_1588b4:
    if (ctx->pc == 0x1588B4u) {
        ctx->pc = 0x1588B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1588B0u;
        // 0x1588b4: 0x26100240  addiu       $s0, $s0, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1588B8u;
        goto label_1588b8;
    }
    ctx->pc = 0x1588B0u;
    {
        const bool branch_taken_0x1588b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1588B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1588B0u;
        // 0x1588b4: 0x26100240  addiu       $s0, $s0, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1588b0) {
            ctx->pc = 0x15883Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15883c;
        }
    }
    ctx->pc = 0x1588B8u;
label_1588b8:
    // 0x1588b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1588b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1588bc:
    // 0x1588bc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1588bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1588c0:
    // 0x1588c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1588c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1588c4:
    // 0x1588c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1588c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1588c8:
    // 0x1588c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1588c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1588cc:
    // 0x1588cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1588ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1588d0:
    // 0x1588d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1588d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1588d4:
    // 0x1588d4: 0x3e00008  jr          $ra
label_1588d8:
    if (ctx->pc == 0x1588D8u) {
        ctx->pc = 0x1588D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1588D4u;
        // 0x1588d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1588DCu;
        goto label_1588dc;
    }
    ctx->pc = 0x1588D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1588D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1588D4u;
        // 0x1588d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1588D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1588DCu;
label_1588dc:
    // 0x1588dc: 0x0  nop
    ctx->pc = 0x1588dcu;
    // NOP
label_1588e0:
    // 0x1588e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1588e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1588e4:
    // 0x1588e4: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x1588e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
label_1588e8:
    // 0x1588e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1588e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1588ec:
    // 0x1588ec: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1588ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1588f0:
    // 0x1588f0: 0xac204900  sw          $zero, 0x4900($at)
    ctx->pc = 0x1588f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 18688), GPR_U32(ctx, 0));
label_1588f4:
    // 0x1588f4: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x1588f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
label_1588f8:
    // 0x1588f8: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x1588f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_1588fc:
    // 0x1588fc: 0x34637e40  ori         $v1, $v1, 0x7E40
    ctx->pc = 0x1588fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32320);
label_158900:
    // 0x158900: 0x8c25c994  lw          $a1, -0x366C($at)
    ctx->pc = 0x158900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953364)));
label_158904:
    // 0x158904: 0x25081300  addiu       $t0, $t0, 0x1300
    ctx->pc = 0x158904u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4864));
label_158908:
    // 0x158908: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x158908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15890c:
    // 0x15890c: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x15890cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_158910:
    // 0x158910: 0x8c24c9c0  lw          $a0, -0x3640($at)
    ctx->pc = 0x158910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953408)));
label_158914:
    // 0x158914: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158918:
    // 0x158918: 0xac234904  sw          $v1, 0x4904($at)
    ctx->pc = 0x158918u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 18692), GPR_U32(ctx, 3));
label_15891c:
    // 0x15891c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15891cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158920:
    // 0x158920: 0xac254afc  sw          $a1, 0x4AFC($at)
    ctx->pc = 0x158920u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19196), GPR_U32(ctx, 5));
label_158924:
    // 0x158924: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158928:
    // 0x158928: 0xac244af8  sw          $a0, 0x4AF8($at)
    ctx->pc = 0x158928u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19192), GPR_U32(ctx, 4));
label_15892c:
    // 0x15892c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x15892cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_158930:
    // 0x158930: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x158930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_158934:
    // 0x158934: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x158934u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158938:
    // 0x158938: 0xa1050220  sb          $a1, 0x220($t0)
    ctx->pc = 0x158938u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 544), (uint8_t)GPR_U32(ctx, 5));
label_15893c:
    // 0x15893c: 0xa1040222  sb          $a0, 0x222($t0)
    ctx->pc = 0x15893cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 546), (uint8_t)GPR_U32(ctx, 4));
label_158940:
    // 0x158940: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x158940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_158944:
    // 0x158944: 0xad00022c  sw          $zero, 0x22C($t0)
    ctx->pc = 0x158944u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 556), GPR_U32(ctx, 0));
label_158948:
    // 0x158948: 0x28e3000c  slti        $v1, $a3, 0xC
    ctx->pc = 0x158948u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)12) ? 1 : 0);
label_15894c:
    // 0x15894c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_158950:
    if (ctx->pc == 0x158950u) {
        ctx->pc = 0x158950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15894Cu;
        // 0x158950: 0x25080240  addiu       $t0, $t0, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158954u;
        goto label_158954;
    }
    ctx->pc = 0x15894Cu;
    {
        const bool branch_taken_0x15894c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x158950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15894Cu;
        // 0x158950: 0x25080240  addiu       $t0, $t0, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15894c) {
            ctx->pc = 0x158938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158938;
        }
    }
    ctx->pc = 0x158954u;
label_158954:
    // 0x158954: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x158954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_158958:
    // 0x158958: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x158958u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_15895c:
    // 0x15895c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_158960:
    if (ctx->pc == 0x158960u) {
        ctx->pc = 0x158960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15895Cu;
        // 0x158960: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158964u;
        goto label_158964;
    }
    ctx->pc = 0x15895Cu;
    {
        const bool branch_taken_0x15895c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x158960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15895Cu;
        // 0x158960: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15895c) {
            ctx->pc = 0x158938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158938;
        }
    }
    ctx->pc = 0x158964u;
label_158964:
    // 0x158964: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158968:
    // 0x158968: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x158968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_15896c:
    // 0x15896c: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x15896cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_158970:
    // 0x158970: 0x14850011  bne         $a0, $a1, . + 4 + (0x11 << 2)
label_158974:
    if (ctx->pc == 0x158974u) {
        ctx->pc = 0x158974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158970u;
        // 0x158974: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158978u;
        goto label_158978;
    }
    ctx->pc = 0x158970u;
    {
        const bool branch_taken_0x158970 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x158974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158970u;
        // 0x158974: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158970) {
            ctx->pc = 0x1589B8u;
            goto label_1589b8;
        }
    }
    ctx->pc = 0x158978u;
label_158978:
    // 0x158978: 0xc08f0cc  jal         func_23C330
label_15897c:
    if (ctx->pc == 0x15897Cu) {
        ctx->pc = 0x158980u;
        goto label_158980;
    }
    ctx->pc = 0x158978u;
    SET_GPR_U32(ctx, 31, 0x158980u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x158980u;
label_158980:
    // 0x158980: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x158980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_158984:
    // 0x158984: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x158984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_158988:
    // 0x158988: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x158988u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15898c:
    // 0x15898c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15898cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158990:
    // 0x158990: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x158990u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_158994:
    // 0x158994: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x158994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_158998:
    // 0x158998: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x158998u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_15899c:
    // 0x15899c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15899cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1589a0:
    // 0x1589a0: 0x0  nop
    ctx->pc = 0x1589a0u;
    // NOP
label_1589a4:
    // 0x1589a4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1589a4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1589a8:
    // 0x1589a8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1589a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1589ac:
    // 0x1589ac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1589acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1589b0:
    // 0x1589b0: 0x1000003d  b           . + 4 + (0x3D << 2)
label_1589b4:
    if (ctx->pc == 0x1589B4u) {
        ctx->pc = 0x1589B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1589B0u;
        // 0x1589b4: 0xa0234910  sb          $v1, 0x4910($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 18704), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1589B8u;
        goto label_1589b8;
    }
    ctx->pc = 0x1589B0u;
    {
        const bool branch_taken_0x1589b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1589B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1589B0u;
        // 0x1589b4: 0xa0234910  sb          $v1, 0x4910($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 18704), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1589b0) {
            ctx->pc = 0x158AA8u;
            goto label_158aa8;
        }
    }
    ctx->pc = 0x1589B8u;
label_1589b8:
    // 0x1589b8: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
label_1589bc:
    if (ctx->pc == 0x1589BCu) {
        ctx->pc = 0x1589C0u;
        goto label_1589c0;
    }
    ctx->pc = 0x1589B8u;
    {
        const bool branch_taken_0x1589b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1589b8) {
            ctx->pc = 0x158A00u;
            goto label_158a00;
        }
    }
    ctx->pc = 0x1589C0u;
label_1589c0:
    // 0x1589c0: 0xc08f0cc  jal         func_23C330
label_1589c4:
    if (ctx->pc == 0x1589C4u) {
        ctx->pc = 0x1589C8u;
        goto label_1589c8;
    }
    ctx->pc = 0x1589C0u;
    SET_GPR_U32(ctx, 31, 0x1589C8u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1589C8u;
label_1589c8:
    // 0x1589c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1589c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1589cc:
    // 0x1589cc: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1589ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_1589d0:
    // 0x1589d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1589d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1589d4:
    // 0x1589d4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1589d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1589d8:
    // 0x1589d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1589d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1589dc:
    // 0x1589dc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1589dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_1589e0:
    // 0x1589e0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1589e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1589e4:
    // 0x1589e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1589e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1589e8:
    // 0x1589e8: 0x0  nop
    ctx->pc = 0x1589e8u;
    // NOP
label_1589ec:
    // 0x1589ec: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1589ecu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1589f0:
    // 0x1589f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1589f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1589f4:
    // 0x1589f4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1589f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1589f8:
    // 0x1589f8: 0x1000002b  b           . + 4 + (0x2B << 2)
label_1589fc:
    if (ctx->pc == 0x1589FCu) {
        ctx->pc = 0x1589FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1589F8u;
        // 0x1589fc: 0xa0234910  sb          $v1, 0x4910($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 18704), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158A00u;
        goto label_158a00;
    }
    ctx->pc = 0x1589F8u;
    {
        const bool branch_taken_0x1589f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1589FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1589F8u;
        // 0x1589fc: 0xa0234910  sb          $v1, 0x4910($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 18704), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1589f8) {
            ctx->pc = 0x158AA8u;
            goto label_158aa8;
        }
    }
    ctx->pc = 0x158A00u;
label_158a00:
    // 0x158a00: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x158a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_158a04:
    // 0x158a04: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
label_158a08:
    if (ctx->pc == 0x158A08u) {
        ctx->pc = 0x158A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A04u;
        // 0x158a08: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158A0Cu;
        goto label_158a0c;
    }
    ctx->pc = 0x158A04u;
    {
        const bool branch_taken_0x158a04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x158A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A04u;
        // 0x158a08: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a04) {
            ctx->pc = 0x158A4Cu;
            goto label_158a4c;
        }
    }
    ctx->pc = 0x158A0Cu;
label_158a0c:
    // 0x158a0c: 0xc08f0cc  jal         func_23C330
label_158a10:
    if (ctx->pc == 0x158A10u) {
        ctx->pc = 0x158A14u;
        goto label_158a14;
    }
    ctx->pc = 0x158A0Cu;
    SET_GPR_U32(ctx, 31, 0x158A14u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x158A14u;
label_158a14:
    // 0x158a14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x158a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_158a18:
    // 0x158a18: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x158a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_158a1c:
    // 0x158a1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x158a1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_158a20:
    // 0x158a20: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158a24:
    // 0x158a24: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x158a24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_158a28:
    // 0x158a28: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x158a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_158a2c:
    // 0x158a2c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x158a2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_158a30:
    // 0x158a30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x158a30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_158a34:
    // 0x158a34: 0x0  nop
    ctx->pc = 0x158a34u;
    // NOP
label_158a38:
    // 0x158a38: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x158a38u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_158a3c:
    // 0x158a3c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x158a3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_158a40:
    // 0x158a40: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x158a40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_158a44:
    // 0x158a44: 0x10000018  b           . + 4 + (0x18 << 2)
label_158a48:
    if (ctx->pc == 0x158A48u) {
        ctx->pc = 0x158A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A44u;
        // 0x158a48: 0xa0234910  sb          $v1, 0x4910($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 18704), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158A4Cu;
        goto label_158a4c;
    }
    ctx->pc = 0x158A44u;
    {
        const bool branch_taken_0x158a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A44u;
        // 0x158a48: 0xa0234910  sb          $v1, 0x4910($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 18704), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a44) {
            ctx->pc = 0x158AA8u;
            goto label_158aa8;
        }
    }
    ctx->pc = 0x158A4Cu;
label_158a4c:
    // 0x158a4c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x158a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_158a50:
    // 0x158a50: 0x84244af4  lh          $a0, 0x4AF4($at)
    ctx->pc = 0x158a50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_158a54:
    // 0x158a54: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_158a58:
    if (ctx->pc == 0x158A58u) {
        ctx->pc = 0x158A5Cu;
        goto label_158a5c;
    }
    ctx->pc = 0x158A54u;
    {
        const bool branch_taken_0x158a54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x158a54) {
            ctx->pc = 0x158A64u;
            goto label_158a64;
        }
    }
    ctx->pc = 0x158A5Cu;
label_158a5c:
    // 0x158a5c: 0x14850011  bne         $a0, $a1, . + 4 + (0x11 << 2)
label_158a60:
    if (ctx->pc == 0x158A60u) {
        ctx->pc = 0x158A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A5Cu;
        // 0x158a60: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158A64u;
        goto label_158a64;
    }
    ctx->pc = 0x158A5Cu;
    {
        const bool branch_taken_0x158a5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x158A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A5Cu;
        // 0x158a60: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a5c) {
            ctx->pc = 0x158AA4u;
            goto label_158aa4;
        }
    }
    ctx->pc = 0x158A64u;
label_158a64:
    // 0x158a64: 0xc08f0cc  jal         func_23C330
label_158a68:
    if (ctx->pc == 0x158A68u) {
        ctx->pc = 0x158A6Cu;
        goto label_158a6c;
    }
    ctx->pc = 0x158A64u;
    SET_GPR_U32(ctx, 31, 0x158A6Cu);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x158A6Cu;
label_158a6c:
    // 0x158a6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x158a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_158a70:
    // 0x158a70: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x158a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
label_158a74:
    // 0x158a74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x158a74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_158a78:
    // 0x158a78: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158a7c:
    // 0x158a7c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x158a7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_158a80:
    // 0x158a80: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x158a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_158a84:
    // 0x158a84: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x158a84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_158a88:
    // 0x158a88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x158a88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_158a8c:
    // 0x158a8c: 0x0  nop
    ctx->pc = 0x158a8cu;
    // NOP
label_158a90:
    // 0x158a90: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x158a90u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_158a94:
    // 0x158a94: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x158a94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_158a98:
    // 0x158a98: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x158a98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_158a9c:
    // 0x158a9c: 0x10000002  b           . + 4 + (0x2 << 2)
label_158aa0:
    if (ctx->pc == 0x158AA0u) {
        ctx->pc = 0x158AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A9Cu;
        // 0x158aa0: 0xa0234910  sb          $v1, 0x4910($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 18704), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158AA4u;
        goto label_158aa4;
    }
    ctx->pc = 0x158A9Cu;
    {
        const bool branch_taken_0x158a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A9Cu;
        // 0x158aa0: 0xa0234910  sb          $v1, 0x4910($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 18704), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a9c) {
            ctx->pc = 0x158AA8u;
            goto label_158aa8;
        }
    }
    ctx->pc = 0x158AA4u;
label_158aa4:
    // 0x158aa4: 0xa0204910  sb          $zero, 0x4910($at)
    ctx->pc = 0x158aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18704), (uint8_t)GPR_U32(ctx, 0));
label_158aa8:
    // 0x158aa8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158aac:
    // 0x158aac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x158aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_158ab0:
    // 0x158ab0: 0xa0204af7  sb          $zero, 0x4AF7($at)
    ctx->pc = 0x158ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19191), (uint8_t)GPR_U32(ctx, 0));
label_158ab4:
    // 0x158ab4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158ab8:
    // 0x158ab8: 0x90244999  lbu         $a0, 0x4999($at)
    ctx->pc = 0x158ab8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18841)));
label_158abc:
    // 0x158abc: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
label_158ac0:
    if (ctx->pc == 0x158AC0u) {
        ctx->pc = 0x158AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158ABCu;
        // 0x158ac0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158AC4u;
        goto label_158ac4;
    }
    ctx->pc = 0x158ABCu;
    {
        const bool branch_taken_0x158abc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x158AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158ABCu;
        // 0x158ac0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158abc) {
            ctx->pc = 0x158B04u;
            goto label_158b04;
        }
    }
    ctx->pc = 0x158AC4u;
label_158ac4:
    // 0x158ac4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x158ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_158ac8:
    // 0x158ac8: 0x8c244970  lw          $a0, 0x4970($at)
    ctx->pc = 0x158ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
label_158acc:
    // 0x158acc: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_158ad0:
    if (ctx->pc == 0x158AD0u) {
        ctx->pc = 0x158AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158ACCu;
        // 0x158ad0: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158AD4u;
        goto label_158ad4;
    }
    ctx->pc = 0x158ACCu;
    {
        const bool branch_taken_0x158acc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x158AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158ACCu;
        // 0x158ad0: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158acc) {
            ctx->pc = 0x158AECu;
            goto label_158aec;
        }
    }
    ctx->pc = 0x158AD4u;
label_158ad4:
    // 0x158ad4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158ad8:
    // 0x158ad8: 0x90234af7  lbu         $v1, 0x4AF7($at)
    ctx->pc = 0x158ad8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19191)));
label_158adc:
    // 0x158adc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x158adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_158ae0:
    // 0x158ae0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158ae4:
    // 0x158ae4: 0x10000007  b           . + 4 + (0x7 << 2)
label_158ae8:
    if (ctx->pc == 0x158AE8u) {
        ctx->pc = 0x158AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158AE4u;
        // 0x158ae8: 0xa0234af7  sb          $v1, 0x4AF7($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19191), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158AECu;
        goto label_158aec;
    }
    ctx->pc = 0x158AE4u;
    {
        const bool branch_taken_0x158ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158AE4u;
        // 0x158ae8: 0xa0234af7  sb          $v1, 0x4AF7($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19191), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ae4) {
            ctx->pc = 0x158B04u;
            goto label_158b04;
        }
    }
    ctx->pc = 0x158AECu;
label_158aec:
    // 0x158aec: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_158af0:
    if (ctx->pc == 0x158AF0u) {
        ctx->pc = 0x158AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158AECu;
        // 0x158af0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158AF4u;
        goto label_158af4;
    }
    ctx->pc = 0x158AECu;
    {
        const bool branch_taken_0x158aec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x158AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158AECu;
        // 0x158af0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158aec) {
            ctx->pc = 0x158B04u;
            goto label_158b04;
        }
    }
    ctx->pc = 0x158AF4u;
label_158af4:
    // 0x158af4: 0x90234af7  lbu         $v1, 0x4AF7($at)
    ctx->pc = 0x158af4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19191)));
label_158af8:
    // 0x158af8: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x158af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_158afc:
    // 0x158afc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158b00:
    // 0x158b00: 0xa0234af7  sb          $v1, 0x4AF7($at)
    ctx->pc = 0x158b00u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19191), (uint8_t)GPR_U32(ctx, 3));
label_158b04:
    // 0x158b04: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x158b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_158b08:
    // 0x158b08: 0x30660400  andi        $a2, $v1, 0x400
    ctx->pc = 0x158b08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_158b0c:
    // 0x158b0c: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
label_158b10:
    if (ctx->pc == 0x158B10u) {
        ctx->pc = 0x158B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B0Cu;
        // 0x158b10: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158B14u;
        goto label_158b14;
    }
    ctx->pc = 0x158B0Cu;
    {
        const bool branch_taken_0x158b0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x158B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B0Cu;
        // 0x158b10: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b0c) {
            ctx->pc = 0x158B74u;
            goto label_158b74;
        }
    }
    ctx->pc = 0x158B14u;
label_158b14:
    // 0x158b14: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158b18:
    // 0x158b18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x158b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_158b1c:
    // 0x158b1c: 0x90244a29  lbu         $a0, 0x4A29($at)
    ctx->pc = 0x158b1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18985)));
label_158b20:
    // 0x158b20: 0x1483002d  bne         $a0, $v1, . + 4 + (0x2D << 2)
label_158b24:
    if (ctx->pc == 0x158B24u) {
        ctx->pc = 0x158B28u;
        goto label_158b28;
    }
    ctx->pc = 0x158B20u;
    {
        const bool branch_taken_0x158b20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x158b20) {
            ctx->pc = 0x158BD8u;
            goto label_158bd8;
        }
    }
    ctx->pc = 0x158B28u;
label_158b28:
    // 0x158b28: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158b2c:
    // 0x158b2c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x158b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_158b30:
    // 0x158b30: 0x8c244a00  lw          $a0, 0x4A00($at)
    ctx->pc = 0x158b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18944)));
label_158b34:
    // 0x158b34: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_158b38:
    if (ctx->pc == 0x158B38u) {
        ctx->pc = 0x158B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B34u;
        // 0x158b38: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158B3Cu;
        goto label_158b3c;
    }
    ctx->pc = 0x158B34u;
    {
        const bool branch_taken_0x158b34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x158B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B34u;
        // 0x158b38: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b34) {
            ctx->pc = 0x158B54u;
            goto label_158b54;
        }
    }
    ctx->pc = 0x158B3Cu;
label_158b3c:
    // 0x158b3c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158b40:
    // 0x158b40: 0x90234af7  lbu         $v1, 0x4AF7($at)
    ctx->pc = 0x158b40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19191)));
label_158b44:
    // 0x158b44: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x158b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_158b48:
    // 0x158b48: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158b4c:
    // 0x158b4c: 0x10000022  b           . + 4 + (0x22 << 2)
label_158b50:
    if (ctx->pc == 0x158B50u) {
        ctx->pc = 0x158B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B4Cu;
        // 0x158b50: 0xa0234af7  sb          $v1, 0x4AF7($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19191), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158B54u;
        goto label_158b54;
    }
    ctx->pc = 0x158B4Cu;
    {
        const bool branch_taken_0x158b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B4Cu;
        // 0x158b50: 0xa0234af7  sb          $v1, 0x4AF7($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19191), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b4c) {
            ctx->pc = 0x158BD8u;
            goto label_158bd8;
        }
    }
    ctx->pc = 0x158B54u;
label_158b54:
    // 0x158b54: 0x14830020  bne         $a0, $v1, . + 4 + (0x20 << 2)
label_158b58:
    if (ctx->pc == 0x158B58u) {
        ctx->pc = 0x158B5Cu;
        goto label_158b5c;
    }
    ctx->pc = 0x158B54u;
    {
        const bool branch_taken_0x158b54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x158b54) {
            ctx->pc = 0x158BD8u;
            goto label_158bd8;
        }
    }
    ctx->pc = 0x158B5Cu;
label_158b5c:
    // 0x158b5c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158b60:
    // 0x158b60: 0x90234af7  lbu         $v1, 0x4AF7($at)
    ctx->pc = 0x158b60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19191)));
label_158b64:
    // 0x158b64: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x158b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_158b68:
    // 0x158b68: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158b6c:
    // 0x158b6c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_158b70:
    if (ctx->pc == 0x158B70u) {
        ctx->pc = 0x158B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B6Cu;
        // 0x158b70: 0xa0234af7  sb          $v1, 0x4AF7($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19191), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158B74u;
        goto label_158b74;
    }
    ctx->pc = 0x158B6Cu;
    {
        const bool branch_taken_0x158b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B6Cu;
        // 0x158b70: 0xa0234af7  sb          $v1, 0x4AF7($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19191), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b6c) {
            ctx->pc = 0x158BD8u;
            goto label_158bd8;
        }
    }
    ctx->pc = 0x158B74u;
label_158b74:
    // 0x158b74: 0x90254af6  lbu         $a1, 0x4AF6($at)
    ctx->pc = 0x158b74u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_158b78:
    // 0x158b78: 0x28a10029  slti        $at, $a1, 0x29
    ctx->pc = 0x158b78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)41) ? 1 : 0);
label_158b7c:
    // 0x158b7c: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_158b80:
    if (ctx->pc == 0x158B80u) {
        ctx->pc = 0x158B84u;
        goto label_158b84;
    }
    ctx->pc = 0x158B7Cu;
    {
        const bool branch_taken_0x158b7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x158b7c) {
            ctx->pc = 0x158BD8u;
            goto label_158bd8;
        }
    }
    ctx->pc = 0x158B84u;
label_158b84:
    // 0x158b84: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158b88:
    // 0x158b88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x158b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_158b8c:
    // 0x158b8c: 0x90244a29  lbu         $a0, 0x4A29($at)
    ctx->pc = 0x158b8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18985)));
label_158b90:
    // 0x158b90: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
label_158b94:
    if (ctx->pc == 0x158B94u) {
        ctx->pc = 0x158B98u;
        goto label_158b98;
    }
    ctx->pc = 0x158B90u;
    {
        const bool branch_taken_0x158b90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x158b90) {
            ctx->pc = 0x158BD8u;
            goto label_158bd8;
        }
    }
    ctx->pc = 0x158B98u;
label_158b98:
    // 0x158b98: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x158b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_158b9c:
    // 0x158b9c: 0x14a30007  bne         $a1, $v1, . + 4 + (0x7 << 2)
label_158ba0:
    if (ctx->pc == 0x158BA0u) {
        ctx->pc = 0x158BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B9Cu;
        // 0x158ba0: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158BA4u;
        goto label_158ba4;
    }
    ctx->pc = 0x158B9Cu;
    {
        const bool branch_taken_0x158b9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x158BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B9Cu;
        // 0x158ba0: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b9c) {
            ctx->pc = 0x158BBCu;
            goto label_158bbc;
        }
    }
    ctx->pc = 0x158BA4u;
label_158ba4:
    // 0x158ba4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158ba8:
    // 0x158ba8: 0x90234af7  lbu         $v1, 0x4AF7($at)
    ctx->pc = 0x158ba8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19191)));
label_158bac:
    // 0x158bac: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x158bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_158bb0:
    // 0x158bb0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158bb4:
    // 0x158bb4: 0x10000008  b           . + 4 + (0x8 << 2)
label_158bb8:
    if (ctx->pc == 0x158BB8u) {
        ctx->pc = 0x158BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BB4u;
        // 0x158bb8: 0xa0234af7  sb          $v1, 0x4AF7($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19191), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158BBCu;
        goto label_158bbc;
    }
    ctx->pc = 0x158BB4u;
    {
        const bool branch_taken_0x158bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BB4u;
        // 0x158bb8: 0xa0234af7  sb          $v1, 0x4AF7($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19191), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158bb4) {
            ctx->pc = 0x158BD8u;
            goto label_158bd8;
        }
    }
    ctx->pc = 0x158BBCu;
label_158bbc:
    // 0x158bbc: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
label_158bc0:
    if (ctx->pc == 0x158BC0u) {
        ctx->pc = 0x158BC4u;
        goto label_158bc4;
    }
    ctx->pc = 0x158BBCu;
    {
        const bool branch_taken_0x158bbc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x158bbc) {
            ctx->pc = 0x158BD8u;
            goto label_158bd8;
        }
    }
    ctx->pc = 0x158BC4u;
label_158bc4:
    // 0x158bc4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158bc8:
    // 0x158bc8: 0x90234af7  lbu         $v1, 0x4AF7($at)
    ctx->pc = 0x158bc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19191)));
label_158bcc:
    // 0x158bcc: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x158bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_158bd0:
    // 0x158bd0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158bd4:
    // 0x158bd4: 0xa0234af7  sb          $v1, 0x4AF7($at)
    ctx->pc = 0x158bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19191), (uint8_t)GPR_U32(ctx, 3));
label_158bd8:
    // 0x158bd8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158bdc:
    // 0x158bdc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x158bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_158be0:
    // 0x158be0: 0x8c244970  lw          $a0, 0x4970($at)
    ctx->pc = 0x158be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
label_158be4:
    // 0x158be4: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_158be8:
    if (ctx->pc == 0x158BE8u) {
        ctx->pc = 0x158BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BE4u;
        // 0x158be8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158BECu;
        goto label_158bec;
    }
    ctx->pc = 0x158BE4u;
    {
        const bool branch_taken_0x158be4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x158BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BE4u;
        // 0x158be8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158be4) {
            ctx->pc = 0x158BF0u;
            goto label_158bf0;
        }
    }
    ctx->pc = 0x158BECu;
label_158bec:
    // 0x158bec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x158becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_158bf0:
    // 0x158bf0: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_158bf4:
    if (ctx->pc == 0x158BF4u) {
        ctx->pc = 0x158BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BF0u;
        // 0x158bf4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158BF8u;
        goto label_158bf8;
    }
    ctx->pc = 0x158BF0u;
    {
        const bool branch_taken_0x158bf0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x158BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BF0u;
        // 0x158bf4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158bf0) {
            ctx->pc = 0x158C14u;
            goto label_158c14;
        }
    }
    ctx->pc = 0x158BF8u;
label_158bf8:
    // 0x158bf8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158bfc:
    // 0x158bfc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x158bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_158c00:
    // 0x158c00: 0x8c244a00  lw          $a0, 0x4A00($at)
    ctx->pc = 0x158c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18944)));
label_158c04:
    // 0x158c04: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
label_158c08:
    if (ctx->pc == 0x158C08u) {
        ctx->pc = 0x158C0Cu;
        goto label_158c0c;
    }
    ctx->pc = 0x158C04u;
    {
        const bool branch_taken_0x158c04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x158c04) {
            ctx->pc = 0x158C30u;
            goto label_158c30;
        }
    }
    ctx->pc = 0x158C0Cu;
label_158c0c:
    // 0x158c0c: 0x10000008  b           . + 4 + (0x8 << 2)
label_158c10:
    if (ctx->pc == 0x158C10u) {
        ctx->pc = 0x158C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C0Cu;
        // 0x158c10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C14u;
        goto label_158c14;
    }
    ctx->pc = 0x158C0Cu;
    {
        const bool branch_taken_0x158c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C0Cu;
        // 0x158c10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c0c) {
            ctx->pc = 0x158C30u;
            goto label_158c30;
        }
    }
    ctx->pc = 0x158C14u;
label_158c14:
    // 0x158c14: 0x90244af6  lbu         $a0, 0x4AF6($at)
    ctx->pc = 0x158c14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_158c18:
    // 0x158c18: 0x28810029  slti        $at, $a0, 0x29
    ctx->pc = 0x158c18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)41) ? 1 : 0);
label_158c1c:
    // 0x158c1c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_158c20:
    if (ctx->pc == 0x158C20u) {
        ctx->pc = 0x158C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C1Cu;
        // 0x158c20: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C24u;
        goto label_158c24;
    }
    ctx->pc = 0x158C1Cu;
    {
        const bool branch_taken_0x158c1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x158C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C1Cu;
        // 0x158c20: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c1c) {
            ctx->pc = 0x158C30u;
            goto label_158c30;
        }
    }
    ctx->pc = 0x158C24u;
label_158c24:
    // 0x158c24: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_158c28:
    if (ctx->pc == 0x158C28u) {
        ctx->pc = 0x158C2Cu;
        goto label_158c2c;
    }
    ctx->pc = 0x158C24u;
    {
        const bool branch_taken_0x158c24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x158c24) {
            ctx->pc = 0x158C30u;
            goto label_158c30;
        }
    }
    ctx->pc = 0x158C2Cu;
label_158c2c:
    // 0x158c2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x158c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_158c30:
    // 0x158c30: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158c34:
    // 0x158c34: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x158c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_158c38:
    // 0x158c38: 0x84244af4  lh          $a0, 0x4AF4($at)
    ctx->pc = 0x158c38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_158c3c:
    // 0x158c3c: 0x1483002f  bne         $a0, $v1, . + 4 + (0x2F << 2)
label_158c40:
    if (ctx->pc == 0x158C40u) {
        ctx->pc = 0x158C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C3Cu;
        // 0x158c40: 0x24030195  addiu       $v1, $zero, 0x195 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 405));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C44u;
        goto label_158c44;
    }
    ctx->pc = 0x158C3Cu;
    {
        const bool branch_taken_0x158c3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x158C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C3Cu;
        // 0x158c40: 0x24030195  addiu       $v1, $zero, 0x195 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 405));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c3c) {
            ctx->pc = 0x158CFCu;
            goto label_158cfc;
        }
    }
    ctx->pc = 0x158C44u;
label_158c44:
    // 0x158c44: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x158c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_158c48:
    // 0x158c48: 0x8c23ccf8  lw          $v1, -0x3308($at)
    ctx->pc = 0x158c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954232)));
label_158c4c:
    // 0x158c4c: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
label_158c50:
    if (ctx->pc == 0x158C50u) {
        ctx->pc = 0x158C54u;
        goto label_158c54;
    }
    ctx->pc = 0x158C4Cu;
    {
        const bool branch_taken_0x158c4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x158c4c) {
            ctx->pc = 0x158CF8u;
            goto label_158cf8;
        }
    }
    ctx->pc = 0x158C54u;
label_158c54:
    // 0x158c54: 0x14a00028  bnez        $a1, . + 4 + (0x28 << 2)
label_158c58:
    if (ctx->pc == 0x158C58u) {
        ctx->pc = 0x158C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C54u;
        // 0x158c58: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C5Cu;
        goto label_158c5c;
    }
    ctx->pc = 0x158C54u;
    {
        const bool branch_taken_0x158c54 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x158C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C54u;
        // 0x158c58: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c54) {
            ctx->pc = 0x158CF8u;
            goto label_158cf8;
        }
    }
    ctx->pc = 0x158C5Cu;
label_158c5c:
    // 0x158c5c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x158c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_158c60:
    // 0x158c60: 0x8c244afc  lw          $a0, 0x4AFC($at)
    ctx->pc = 0x158c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
label_158c64:
    // 0x158c64: 0x14830024  bne         $a0, $v1, . + 4 + (0x24 << 2)
label_158c68:
    if (ctx->pc == 0x158C68u) {
        ctx->pc = 0x158C6Cu;
        goto label_158c6c;
    }
    ctx->pc = 0x158C64u;
    {
        const bool branch_taken_0x158c64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x158c64) {
            ctx->pc = 0x158CF8u;
            goto label_158cf8;
        }
    }
    ctx->pc = 0x158C6Cu;
label_158c6c:
    // 0x158c6c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158c70:
    // 0x158c70: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x158c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_158c74:
    // 0x158c74: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x158c74u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_158c78:
    // 0x158c78: 0x1483001f  bne         $a0, $v1, . + 4 + (0x1F << 2)
label_158c7c:
    if (ctx->pc == 0x158C7Cu) {
        ctx->pc = 0x158C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C78u;
        // 0x158c7c: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C80u;
        goto label_158c80;
    }
    ctx->pc = 0x158C78u;
    {
        const bool branch_taken_0x158c78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x158C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C78u;
        // 0x158c7c: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c78) {
            ctx->pc = 0x158CF8u;
            goto label_158cf8;
        }
    }
    ctx->pc = 0x158C80u;
label_158c80:
    // 0x158c80: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x158c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_158c84:
    // 0x158c84: 0x8c2300ac  lw          $v1, 0xAC($at)
    ctx->pc = 0x158c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 172)));
label_158c88:
    // 0x158c88: 0x1464001b  bne         $v1, $a0, . + 4 + (0x1B << 2)
label_158c8c:
    if (ctx->pc == 0x158C8Cu) {
        ctx->pc = 0x158C90u;
        goto label_158c90;
    }
    ctx->pc = 0x158C88u;
    {
        const bool branch_taken_0x158c88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x158c88) {
            ctx->pc = 0x158CF8u;
            goto label_158cf8;
        }
    }
    ctx->pc = 0x158C90u;
label_158c90:
    // 0x158c90: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x158c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_158c94:
    // 0x158c94: 0x8c230064  lw          $v1, 0x64($at)
    ctx->pc = 0x158c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 100)));
label_158c98:
    // 0x158c98: 0x14640017  bne         $v1, $a0, . + 4 + (0x17 << 2)
label_158c9c:
    if (ctx->pc == 0x158C9Cu) {
        ctx->pc = 0x158C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C98u;
        // 0x158c9c: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158CA0u;
        goto label_158ca0;
    }
    ctx->pc = 0x158C98u;
    {
        const bool branch_taken_0x158c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x158C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C98u;
        // 0x158c9c: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c98) {
            ctx->pc = 0x158CF8u;
            goto label_158cf8;
        }
    }
    ctx->pc = 0x158CA0u;
label_158ca0:
    // 0x158ca0: 0x8c2302ec  lw          $v1, 0x2EC($at)
    ctx->pc = 0x158ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 748)));
label_158ca4:
    // 0x158ca4: 0x14640014  bne         $v1, $a0, . + 4 + (0x14 << 2)
label_158ca8:
    if (ctx->pc == 0x158CA8u) {
        ctx->pc = 0x158CACu;
        goto label_158cac;
    }
    ctx->pc = 0x158CA4u;
    {
        const bool branch_taken_0x158ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x158ca4) {
            ctx->pc = 0x158CF8u;
            goto label_158cf8;
        }
    }
    ctx->pc = 0x158CACu;
label_158cac:
    // 0x158cac: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x158cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_158cb0:
    // 0x158cb0: 0x8c2302d4  lw          $v1, 0x2D4($at)
    ctx->pc = 0x158cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 724)));
label_158cb4:
    // 0x158cb4: 0x14640010  bne         $v1, $a0, . + 4 + (0x10 << 2)
label_158cb8:
    if (ctx->pc == 0x158CB8u) {
        ctx->pc = 0x158CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158CB4u;
        // 0x158cb8: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158CBCu;
        goto label_158cbc;
    }
    ctx->pc = 0x158CB4u;
    {
        const bool branch_taken_0x158cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x158CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158CB4u;
        // 0x158cb8: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158cb4) {
            ctx->pc = 0x158CF8u;
            goto label_158cf8;
        }
    }
    ctx->pc = 0x158CBCu;
label_158cbc:
    // 0x158cbc: 0x8c230214  lw          $v1, 0x214($at)
    ctx->pc = 0x158cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 532)));
label_158cc0:
    // 0x158cc0: 0x1464000d  bne         $v1, $a0, . + 4 + (0xD << 2)
label_158cc4:
    if (ctx->pc == 0x158CC4u) {
        ctx->pc = 0x158CC8u;
        goto label_158cc8;
    }
    ctx->pc = 0x158CC0u;
    {
        const bool branch_taken_0x158cc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x158cc0) {
            ctx->pc = 0x158CF8u;
            goto label_158cf8;
        }
    }
    ctx->pc = 0x158CC8u;
label_158cc8:
    // 0x158cc8: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x158cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_158ccc:
    // 0x158ccc: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x158cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 316)));
label_158cd0:
    // 0x158cd0: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
label_158cd4:
    if (ctx->pc == 0x158CD4u) {
        ctx->pc = 0x158CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158CD0u;
        // 0x158cd4: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158CD8u;
        goto label_158cd8;
    }
    ctx->pc = 0x158CD0u;
    {
        const bool branch_taken_0x158cd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x158CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158CD0u;
        // 0x158cd4: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158cd0) {
            ctx->pc = 0x158CF8u;
            goto label_158cf8;
        }
    }
    ctx->pc = 0x158CD8u;
label_158cd8:
    // 0x158cd8: 0x8c230124  lw          $v1, 0x124($at)
    ctx->pc = 0x158cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 292)));
label_158cdc:
    // 0x158cdc: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
label_158ce0:
    if (ctx->pc == 0x158CE0u) {
        ctx->pc = 0x158CE4u;
        goto label_158ce4;
    }
    ctx->pc = 0x158CDCu;
    {
        const bool branch_taken_0x158cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x158cdc) {
            ctx->pc = 0x158CF8u;
            goto label_158cf8;
        }
    }
    ctx->pc = 0x158CE4u;
label_158ce4:
    // 0x158ce4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158ce8:
    // 0x158ce8: 0x90234af7  lbu         $v1, 0x4AF7($at)
    ctx->pc = 0x158ce8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19191)));
label_158cec:
    // 0x158cec: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x158cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_158cf0:
    // 0x158cf0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158cf4:
    // 0x158cf4: 0xa0234af7  sb          $v1, 0x4AF7($at)
    ctx->pc = 0x158cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19191), (uint8_t)GPR_U32(ctx, 3));
label_158cf8:
    // 0x158cf8: 0x24030195  addiu       $v1, $zero, 0x195
    ctx->pc = 0x158cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 405));
label_158cfc:
    // 0x158cfc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158d00:
    // 0x158d00: 0xa42349a2  sh          $v1, 0x49A2($at)
    ctx->pc = 0x158d00u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 18850), (uint16_t)GPR_U32(ctx, 3));
label_158d04:
    // 0x158d04: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158d08:
    // 0x158d08: 0xa4234a32  sh          $v1, 0x4A32($at)
    ctx->pc = 0x158d08u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 18994), (uint16_t)GPR_U32(ctx, 3));
label_158d0c:
    // 0x158d0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x158d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_158d10:
    // 0x158d10: 0x3e00008  jr          $ra
label_158d14:
    if (ctx->pc == 0x158D14u) {
        ctx->pc = 0x158D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D10u;
        // 0x158d14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158D18u;
        goto label_158d18;
    }
    ctx->pc = 0x158D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D10u;
        // 0x158d14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158D18u;
label_158d18:
    // 0x158d18: 0x0  nop
    ctx->pc = 0x158d18u;
    // NOP
label_158d1c:
    // 0x158d1c: 0x0  nop
    ctx->pc = 0x158d1cu;
    // NOP
label_158d20:
    // 0x158d20: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158d24:
    // 0x158d24: 0xa0204af0  sb          $zero, 0x4AF0($at)
    ctx->pc = 0x158d24u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19184), (uint8_t)GPR_U32(ctx, 0));
label_158d28:
    // 0x158d28: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158d2c:
    // 0x158d2c: 0x3e00008  jr          $ra
label_158d30:
    if (ctx->pc == 0x158D30u) {
        ctx->pc = 0x158D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D2Cu;
        // 0x158d30: 0xa0204af3  sb          $zero, 0x4AF3($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19187), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158D34u;
        goto label_158d34;
    }
    ctx->pc = 0x158D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D2Cu;
        // 0x158d30: 0xa0204af3  sb          $zero, 0x4AF3($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19187), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158D34u;
label_158d34:
    // 0x158d34: 0x0  nop
    ctx->pc = 0x158d34u;
    // NOP
label_158d38:
    // 0x158d38: 0x0  nop
    ctx->pc = 0x158d38u;
    // NOP
label_158d3c:
    // 0x158d3c: 0x0  nop
    ctx->pc = 0x158d3cu;
    // NOP
label_158d40:
    // 0x158d40: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158d44:
    // 0x158d44: 0x24030168  addiu       $v1, $zero, 0x168
    ctx->pc = 0x158d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_158d48:
    // 0x158d48: 0x8c254900  lw          $a1, 0x4900($at)
    ctx->pc = 0x158d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_158d4c:
    // 0x158d4c: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x158d4cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_158d50:
    // 0x158d50: 0x0  nop
    ctx->pc = 0x158d50u;
    // NOP
label_158d54:
    // 0x158d54: 0x0  nop
    ctx->pc = 0x158d54u;
    // NOP
label_158d58:
    // 0x158d58: 0x1810  mfhi        $v1
    ctx->pc = 0x158d58u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_158d5c:
    // 0x158d5c: 0x14600044  bnez        $v1, . + 4 + (0x44 << 2)
label_158d60:
    if (ctx->pc == 0x158D60u) {
        ctx->pc = 0x158D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D5Cu;
        // 0x158d60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158D64u;
        goto label_158d64;
    }
    ctx->pc = 0x158D5Cu;
    {
        const bool branch_taken_0x158d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x158D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D5Cu;
        // 0x158d60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158d5c) {
            ctx->pc = 0x158E70u;
            goto label_158e70;
        }
    }
    ctx->pc = 0x158D64u;
label_158d64:
    // 0x158d64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x158d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158d68:
    // 0x158d68: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x158d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_158d6c:
    // 0x158d6c: 0x24070383  addiu       $a3, $zero, 0x383
    ctx->pc = 0x158d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 899));
label_158d70:
    // 0x158d70: 0x646023  subu        $t4, $v1, $a0
    ctx->pc = 0x158d70u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_158d74:
    // 0x158d74: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x158d74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_158d78:
    // 0x158d78: 0xc40c0  sll         $t0, $t4, 3
    ctx->pc = 0x158d78u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_158d7c:
    // 0x158d7c: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x158d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
label_158d80:
    // 0x158d80: 0x1884021  addu        $t0, $t4, $t0
    ctx->pc = 0x158d80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
label_158d84:
    // 0x158d84: 0x24632570  addiu       $v1, $v1, 0x2570
    ctx->pc = 0x158d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9584));
label_158d88:
    // 0x158d88: 0x460c0  sll         $t4, $a0, 3
    ctx->pc = 0x158d88u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_158d8c:
    // 0x158d8c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x158d8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_158d90:
    // 0x158d90: 0x1846021  addu        $t4, $t4, $a0
    ctx->pc = 0x158d90u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
label_158d94:
    // 0x158d94: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x158d94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_158d98:
    // 0x158d98: 0x820c0  sll         $a0, $t0, 3
    ctx->pc = 0x158d98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_158d9c:
    // 0x158d9c: 0x240e0064  addiu       $t6, $zero, 0x64
    ctx->pc = 0x158d9cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_158da0:
    // 0x158da0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x158da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_158da4:
    // 0x158da4: 0xc2080  sll         $a0, $t4, 2
    ctx->pc = 0x158da4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_158da8:
    // 0x158da8: 0x8c2023  subu        $a0, $a0, $t4
    ctx->pc = 0x158da8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_158dac:
    // 0x158dac: 0x246c0000  addiu       $t4, $v1, 0x0
    ctx->pc = 0x158dacu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_158db0:
    // 0x158db0: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x158db0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_158db4:
    // 0x158db4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x158db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_158db8:
    // 0x158db8: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x158db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_158dbc:
    // 0x158dbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x158dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_158dc0:
    // 0x158dc0: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x158dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_158dc4:
    // 0x158dc4: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x158dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_158dc8:
    // 0x158dc8: 0x84880230  lh          $t0, 0x230($a0)
    ctx->pc = 0x158dc8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 560)));
label_158dcc:
    // 0x158dcc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x158dccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_158dd0:
    // 0x158dd0: 0x10e001a  div         $zero, $t0, $t6
    ctx->pc = 0x158dd0u;
    { int32_t divisor = GPR_S32(ctx, 14);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_158dd4:
    // 0x158dd4: 0x0  nop
    ctx->pc = 0x158dd4u;
    // NOP
label_158dd8:
    // 0x158dd8: 0x0  nop
    ctx->pc = 0x158dd8u;
    // NOP
label_158ddc:
    // 0x158ddc: 0x4010  mfhi        $t0
    ctx->pc = 0x158ddcu;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_158de0:
    // 0x158de0: 0x1100001e  beqz        $t0, . + 4 + (0x1E << 2)
label_158de4:
    if (ctx->pc == 0x158DE4u) {
        ctx->pc = 0x158DE8u;
        goto label_158de8;
    }
    ctx->pc = 0x158DE0u;
    {
        const bool branch_taken_0x158de0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x158de0) {
            ctx->pc = 0x158E5Cu;
            goto label_158e5c;
        }
    }
    ctx->pc = 0x158DE8u;
label_158de8:
    // 0x158de8: 0x908d0222  lbu         $t5, 0x222($a0)
    ctx->pc = 0x158de8u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 546)));
label_158dec:
    // 0x158dec: 0x15a0001b  bnez        $t5, . + 4 + (0x1B << 2)
label_158df0:
    if (ctx->pc == 0x158DF0u) {
        ctx->pc = 0x158DF4u;
        goto label_158df4;
    }
    ctx->pc = 0x158DECu;
    {
        const bool branch_taken_0x158dec = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x158dec) {
            ctx->pc = 0x158E5Cu;
            goto label_158e5c;
        }
    }
    ctx->pc = 0x158DF4u;
label_158df4:
    // 0x158df4: 0x84880232  lh          $t0, 0x232($a0)
    ctx->pc = 0x158df4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 562)));
label_158df8:
    // 0x158df8: 0x15a00018  bnez        $t5, . + 4 + (0x18 << 2)
label_158dfc:
    if (ctx->pc == 0x158DFCu) {
        ctx->pc = 0x158DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158DF8u;
        // 0x158dfc: 0x250f0001  addiu       $t7, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158E00u;
        goto label_158e00;
    }
    ctx->pc = 0x158DF8u;
    {
        const bool branch_taken_0x158df8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x158DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158DF8u;
        // 0x158dfc: 0x250f0001  addiu       $t7, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158df8) {
            ctx->pc = 0x158E5Cu;
            goto label_158e5c;
        }
    }
    ctx->pc = 0x158E00u;
label_158e00:
    // 0x158e00: 0x908d0220  lbu         $t5, 0x220($a0)
    ctx->pc = 0x158e00u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 544)));
label_158e04:
    // 0x158e04: 0xd40c0  sll         $t0, $t5, 3
    ctx->pc = 0x158e04u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
label_158e08:
    // 0x158e08: 0x10d4021  addu        $t0, $t0, $t5
    ctx->pc = 0x158e08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
label_158e0c:
    // 0x158e0c: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x158e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_158e10:
    // 0x158e10: 0x1884021  addu        $t0, $t4, $t0
    ctx->pc = 0x158e10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
label_158e14:
    // 0x158e14: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x158e14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_158e18:
    // 0x158e18: 0x91080015  lbu         $t0, 0x15($t0)
    ctx->pc = 0x158e18u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 21)));
label_158e1c:
    // 0x158e1c: 0x110b000f  beq         $t0, $t3, . + 4 + (0xF << 2)
label_158e20:
    if (ctx->pc == 0x158E20u) {
        ctx->pc = 0x158E24u;
        goto label_158e24;
    }
    ctx->pc = 0x158E1Cu;
    {
        const bool branch_taken_0x158e1c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 11));
        if (branch_taken_0x158e1c) {
            ctx->pc = 0x158E5Cu;
            goto label_158e5c;
        }
    }
    ctx->pc = 0x158E24u;
label_158e24:
    // 0x158e24: 0x110a000d  beq         $t0, $t2, . + 4 + (0xD << 2)
label_158e28:
    if (ctx->pc == 0x158E28u) {
        ctx->pc = 0x158E2Cu;
        goto label_158e2c;
    }
    ctx->pc = 0x158E24u;
    {
        const bool branch_taken_0x158e24 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 10));
        if (branch_taken_0x158e24) {
            ctx->pc = 0x158E5Cu;
            goto label_158e5c;
        }
    }
    ctx->pc = 0x158E2Cu;
label_158e2c:
    // 0x158e2c: 0x1109000b  beq         $t0, $t1, . + 4 + (0xB << 2)
label_158e30:
    if (ctx->pc == 0x158E30u) {
        ctx->pc = 0x158E34u;
        goto label_158e34;
    }
    ctx->pc = 0x158E2Cu;
    {
        const bool branch_taken_0x158e2c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 9));
        if (branch_taken_0x158e2c) {
            ctx->pc = 0x158E5Cu;
            goto label_158e5c;
        }
    }
    ctx->pc = 0x158E34u;
label_158e34:
    // 0x158e34: 0xa48f0230  sh          $t7, 0x230($a0)
    ctx->pc = 0x158e34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 560), (uint16_t)GPR_U32(ctx, 15));
label_158e38:
    // 0x158e38: 0x84880230  lh          $t0, 0x230($a0)
    ctx->pc = 0x158e38u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 560)));
label_158e3c:
    // 0x158e3c: 0x29010384  slti        $at, $t0, 0x384
    ctx->pc = 0x158e3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)900) ? 1 : 0);
label_158e40:
    // 0x158e40: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_158e44:
    if (ctx->pc == 0x158E44u) {
        ctx->pc = 0x158E48u;
        goto label_158e48;
    }
    ctx->pc = 0x158E40u;
    {
        const bool branch_taken_0x158e40 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x158e40) {
            ctx->pc = 0x158E50u;
            goto label_158e50;
        }
    }
    ctx->pc = 0x158E48u;
label_158e48:
    // 0x158e48: 0x10000004  b           . + 4 + (0x4 << 2)
label_158e4c:
    if (ctx->pc == 0x158E4Cu) {
        ctx->pc = 0x158E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E48u;
        // 0x158e4c: 0xa4870230  sh          $a3, 0x230($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 560), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158E50u;
        goto label_158e50;
    }
    ctx->pc = 0x158E48u;
    {
        const bool branch_taken_0x158e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E48u;
        // 0x158e4c: 0xa4870230  sh          $a3, 0x230($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 560), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158e48) {
            ctx->pc = 0x158E5Cu;
            goto label_158e5c;
        }
    }
    ctx->pc = 0x158E50u;
label_158e50:
    // 0x158e50: 0x1d000002  bgtz        $t0, . + 4 + (0x2 << 2)
label_158e54:
    if (ctx->pc == 0x158E54u) {
        ctx->pc = 0x158E58u;
        goto label_158e58;
    }
    ctx->pc = 0x158E50u;
    {
        const bool branch_taken_0x158e50 = (GPR_S32(ctx, 8) > 0);
        if (branch_taken_0x158e50) {
            ctx->pc = 0x158E5Cu;
            goto label_158e5c;
        }
    }
    ctx->pc = 0x158E58u;
label_158e58:
    // 0x158e58: 0xa48a0230  sh          $t2, 0x230($a0)
    ctx->pc = 0x158e58u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 560), (uint16_t)GPR_U32(ctx, 10));
label_158e5c:
    // 0x158e5c: 0x0  nop
    ctx->pc = 0x158e5cu;
    // NOP
label_158e60:
    // 0x158e60: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x158e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_158e64:
    // 0x158e64: 0x28a4000c  slti        $a0, $a1, 0xC
    ctx->pc = 0x158e64u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)12) ? 1 : 0);
label_158e68:
    // 0x158e68: 0x1480ffd6  bnez        $a0, . + 4 + (-0x2A << 2)
label_158e6c:
    if (ctx->pc == 0x158E6Cu) {
        ctx->pc = 0x158E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E68u;
        // 0x158e6c: 0x24c60240  addiu       $a2, $a2, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158E70u;
        goto label_158e70;
    }
    ctx->pc = 0x158E68u;
    {
        const bool branch_taken_0x158e68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x158E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E68u;
        // 0x158e6c: 0x24c60240  addiu       $a2, $a2, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158e68) {
            ctx->pc = 0x158DC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158dc4;
        }
    }
    ctx->pc = 0x158E70u;
label_158e70:
    // 0x158e70: 0x3e00008  jr          $ra
label_158e74:
    if (ctx->pc == 0x158E74u) {
        ctx->pc = 0x158E78u;
        goto label_158e78;
    }
    ctx->pc = 0x158E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158E78u;
label_158e78:
    // 0x158e78: 0x0  nop
    ctx->pc = 0x158e78u;
    // NOP
label_158e7c:
    // 0x158e7c: 0x0  nop
    ctx->pc = 0x158e7cu;
    // NOP
label_158e80:
    // 0x158e80: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x158e80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158e84:
    // 0x158e84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x158e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158e88:
    // 0x158e88: 0x45200  sll         $t2, $a0, 8
    ctx->pc = 0x158e88u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_158e8c:
    // 0x158e8c: 0x3c0b002f  lui         $t3, 0x2F
    ctx->pc = 0x158e8cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)47 << 16));
label_158e90:
    // 0x158e90: 0x1446823  subu        $t5, $t2, $a0
    ctx->pc = 0x158e90u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_158e94:
    // 0x158e94: 0x256b2570  addiu       $t3, $t3, 0x2570
    ctx->pc = 0x158e94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 9584));
label_158e98:
    // 0x158e98: 0xd60c0  sll         $t4, $t5, 3
    ctx->pc = 0x158e98u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
label_158e9c:
    // 0x158e9c: 0x24070383  addiu       $a3, $zero, 0x383
    ctx->pc = 0x158e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 899));
label_158ea0:
    // 0x158ea0: 0x1ac6021  addu        $t4, $t5, $t4
    ctx->pc = 0x158ea0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
label_158ea4:
    // 0x158ea4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x158ea4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_158ea8:
    // 0x158ea8: 0x468c0  sll         $t5, $a0, 3
    ctx->pc = 0x158ea8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_158eac:
    // 0x158eac: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x158eacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_158eb0:
    // 0x158eb0: 0x1a46821  addu        $t5, $t5, $a0
    ctx->pc = 0x158eb0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
label_158eb4:
    // 0x158eb4: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x158eb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_158eb8:
    // 0x158eb8: 0xc20c0  sll         $a0, $t4, 3
    ctx->pc = 0x158eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_158ebc:
    // 0x158ebc: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x158ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_158ec0:
    // 0x158ec0: 0xd5880  sll         $t3, $t5, 2
    ctx->pc = 0x158ec0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
label_158ec4:
    // 0x158ec4: 0x16d6023  subu        $t4, $t3, $t5
    ctx->pc = 0x158ec4u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
label_158ec8:
    // 0x158ec8: 0x248b0000  addiu       $t3, $a0, 0x0
    ctx->pc = 0x158ec8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_158ecc:
    // 0x158ecc: 0xc6200  sll         $t4, $t4, 8
    ctx->pc = 0x158eccu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 8));
label_158ed0:
    // 0x158ed0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x158ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_158ed4:
    // 0x158ed4: 0x24841300  addiu       $a0, $a0, 0x1300
    ctx->pc = 0x158ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4864));
label_158ed8:
    // 0x158ed8: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x158ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_158edc:
    // 0x158edc: 0x248d0000  addiu       $t5, $a0, 0x0
    ctx->pc = 0x158edcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_158ee0:
    // 0x158ee0: 0x1a67821  addu        $t7, $t5, $a2
    ctx->pc = 0x158ee0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 6)));
label_158ee4:
    // 0x158ee4: 0x91ec0222  lbu         $t4, 0x222($t7)
    ctx->pc = 0x158ee4u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 546)));
label_158ee8:
    // 0x158ee8: 0x1580001c  bnez        $t4, . + 4 + (0x1C << 2)
label_158eec:
    if (ctx->pc == 0x158EECu) {
        ctx->pc = 0x158EF0u;
        goto label_158ef0;
    }
    ctx->pc = 0x158EE8u;
    {
        const bool branch_taken_0x158ee8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x158ee8) {
            ctx->pc = 0x158F5Cu;
            goto label_158f5c;
        }
    }
    ctx->pc = 0x158EF0u;
label_158ef0:
    // 0x158ef0: 0x85e40232  lh          $a0, 0x232($t7)
    ctx->pc = 0x158ef0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 562)));
label_158ef4:
    // 0x158ef4: 0x15800019  bnez        $t4, . + 4 + (0x19 << 2)
label_158ef8:
    if (ctx->pc == 0x158EF8u) {
        ctx->pc = 0x158EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158EF4u;
        // 0x158ef8: 0x857021  addu        $t6, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158EFCu;
        goto label_158efc;
    }
    ctx->pc = 0x158EF4u;
    {
        const bool branch_taken_0x158ef4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x158EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158EF4u;
        // 0x158ef8: 0x857021  addu        $t6, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ef4) {
            ctx->pc = 0x158F5Cu;
            goto label_158f5c;
        }
    }
    ctx->pc = 0x158EFCu;
label_158efc:
    // 0x158efc: 0x91ec0220  lbu         $t4, 0x220($t7)
    ctx->pc = 0x158efcu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 544)));
label_158f00:
    // 0x158f00: 0xc20c0  sll         $a0, $t4, 3
    ctx->pc = 0x158f00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_158f04:
    // 0x158f04: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x158f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_158f08:
    // 0x158f08: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x158f08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_158f0c:
    // 0x158f0c: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x158f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_158f10:
    // 0x158f10: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x158f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_158f14:
    // 0x158f14: 0x90840015  lbu         $a0, 0x15($a0)
    ctx->pc = 0x158f14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 21)));
label_158f18:
    // 0x158f18: 0x108a0010  beq         $a0, $t2, . + 4 + (0x10 << 2)
label_158f1c:
    if (ctx->pc == 0x158F1Cu) {
        ctx->pc = 0x158F20u;
        goto label_158f20;
    }
    ctx->pc = 0x158F18u;
    {
        const bool branch_taken_0x158f18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 10));
        if (branch_taken_0x158f18) {
            ctx->pc = 0x158F5Cu;
            goto label_158f5c;
        }
    }
    ctx->pc = 0x158F20u;
label_158f20:
    // 0x158f20: 0x1089000e  beq         $a0, $t1, . + 4 + (0xE << 2)
label_158f24:
    if (ctx->pc == 0x158F24u) {
        ctx->pc = 0x158F28u;
        goto label_158f28;
    }
    ctx->pc = 0x158F20u;
    {
        const bool branch_taken_0x158f20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 9));
        if (branch_taken_0x158f20) {
            ctx->pc = 0x158F5Cu;
            goto label_158f5c;
        }
    }
    ctx->pc = 0x158F28u;
label_158f28:
    // 0x158f28: 0x1088000c  beq         $a0, $t0, . + 4 + (0xC << 2)
label_158f2c:
    if (ctx->pc == 0x158F2Cu) {
        ctx->pc = 0x158F30u;
        goto label_158f30;
    }
    ctx->pc = 0x158F28u;
    {
        const bool branch_taken_0x158f28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        if (branch_taken_0x158f28) {
            ctx->pc = 0x158F5Cu;
            goto label_158f5c;
        }
    }
    ctx->pc = 0x158F30u;
label_158f30:
    // 0x158f30: 0xa5ee0230  sh          $t6, 0x230($t7)
    ctx->pc = 0x158f30u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 560), (uint16_t)GPR_U32(ctx, 14));
label_158f34:
    // 0x158f34: 0x85e40230  lh          $a0, 0x230($t7)
    ctx->pc = 0x158f34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 560)));
label_158f38:
    // 0x158f38: 0x28810384  slti        $at, $a0, 0x384
    ctx->pc = 0x158f38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)900) ? 1 : 0);
label_158f3c:
    // 0x158f3c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_158f40:
    if (ctx->pc == 0x158F40u) {
        ctx->pc = 0x158F44u;
        goto label_158f44;
    }
    ctx->pc = 0x158F3Cu;
    {
        const bool branch_taken_0x158f3c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x158f3c) {
            ctx->pc = 0x158F4Cu;
            goto label_158f4c;
        }
    }
    ctx->pc = 0x158F44u;
label_158f44:
    // 0x158f44: 0x10000005  b           . + 4 + (0x5 << 2)
label_158f48:
    if (ctx->pc == 0x158F48u) {
        ctx->pc = 0x158F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F44u;
        // 0x158f48: 0xa5e70230  sh          $a3, 0x230($t7) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 15), 560), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158F4Cu;
        goto label_158f4c;
    }
    ctx->pc = 0x158F44u;
    {
        const bool branch_taken_0x158f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F44u;
        // 0x158f48: 0xa5e70230  sh          $a3, 0x230($t7) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 15), 560), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f44) {
            ctx->pc = 0x158F5Cu;
            goto label_158f5c;
        }
    }
    ctx->pc = 0x158F4Cu;
label_158f4c:
    // 0x158f4c: 0x0  nop
    ctx->pc = 0x158f4cu;
    // NOP
label_158f50:
    // 0x158f50: 0x1c800002  bgtz        $a0, . + 4 + (0x2 << 2)
label_158f54:
    if (ctx->pc == 0x158F54u) {
        ctx->pc = 0x158F58u;
        goto label_158f58;
    }
    ctx->pc = 0x158F50u;
    {
        const bool branch_taken_0x158f50 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x158f50) {
            ctx->pc = 0x158F5Cu;
            goto label_158f5c;
        }
    }
    ctx->pc = 0x158F58u;
label_158f58:
    // 0x158f58: 0xa5e90230  sh          $t1, 0x230($t7)
    ctx->pc = 0x158f58u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 560), (uint16_t)GPR_U32(ctx, 9));
label_158f5c:
    // 0x158f5c: 0x0  nop
    ctx->pc = 0x158f5cu;
    // NOP
label_158f60:
    // 0x158f60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x158f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_158f64:
    // 0x158f64: 0x2864000c  slti        $a0, $v1, 0xC
    ctx->pc = 0x158f64u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
label_158f68:
    // 0x158f68: 0x1480ffdd  bnez        $a0, . + 4 + (-0x23 << 2)
label_158f6c:
    if (ctx->pc == 0x158F6Cu) {
        ctx->pc = 0x158F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F68u;
        // 0x158f6c: 0x24c60240  addiu       $a2, $a2, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158F70u;
        goto label_158f70;
    }
    ctx->pc = 0x158F68u;
    {
        const bool branch_taken_0x158f68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x158F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F68u;
        // 0x158f6c: 0x24c60240  addiu       $a2, $a2, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f68) {
            ctx->pc = 0x158EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158ee0;
        }
    }
    ctx->pc = 0x158F70u;
label_158f70:
    // 0x158f70: 0x3e00008  jr          $ra
label_158f74:
    if (ctx->pc == 0x158F74u) {
        ctx->pc = 0x158F78u;
        goto label_158f78;
    }
    ctx->pc = 0x158F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158F78u;
label_158f78:
    // 0x158f78: 0x0  nop
    ctx->pc = 0x158f78u;
    // NOP
label_158f7c:
    // 0x158f7c: 0x0  nop
    ctx->pc = 0x158f7cu;
    // NOP
label_158f80:
    // 0x158f80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x158f80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158f84:
    // 0x158f84: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x158f84u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158f88:
    // 0x158f88: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x158f88u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158f8c:
    // 0x158f8c: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x158f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
label_158f90:
    // 0x158f90: 0x24c61300  addiu       $a2, $a2, 0x1300
    ctx->pc = 0x158f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4864));
label_158f94:
    // 0x158f94: 0xcb1821  addu        $v1, $a2, $t3
    ctx->pc = 0x158f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
label_158f98:
    // 0x158f98: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x158f98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158f9c:
    // 0x158f9c: 0xa4603608  sh          $zero, 0x3608($v1)
    ctx->pc = 0x158f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 13832), (uint16_t)GPR_U32(ctx, 0));
label_158fa0:
    // 0x158fa0: 0x246d3608  addiu       $t5, $v1, 0x3608
    ctx->pc = 0x158fa0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 13832));
label_158fa4:
    // 0x158fa4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x158fa4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158fa8:
    // 0x158fa8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x158fa8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158fac:
    // 0x158fac: 0xcc1821  addu        $v1, $a2, $t4
    ctx->pc = 0x158facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    ctx->pc = 0x158fb0u;
    return;
}

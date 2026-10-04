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


void FUN_0014eba0_part107(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1827c0u: goto label_1827c0;
        case 0x1827c4u: goto label_1827c4;
        case 0x1827c8u: goto label_1827c8;
        case 0x1827ccu: goto label_1827cc;
        case 0x1827d0u: goto label_1827d0;
        case 0x1827d4u: goto label_1827d4;
        case 0x1827d8u: goto label_1827d8;
        case 0x1827dcu: goto label_1827dc;
        case 0x1827e0u: goto label_1827e0;
        case 0x1827e4u: goto label_1827e4;
        case 0x1827e8u: goto label_1827e8;
        case 0x1827ecu: goto label_1827ec;
        case 0x1827f0u: goto label_1827f0;
        case 0x1827f4u: goto label_1827f4;
        case 0x1827f8u: goto label_1827f8;
        case 0x1827fcu: goto label_1827fc;
        case 0x182800u: goto label_182800;
        case 0x182804u: goto label_182804;
        case 0x182808u: goto label_182808;
        case 0x18280cu: goto label_18280c;
        case 0x182810u: goto label_182810;
        case 0x182814u: goto label_182814;
        case 0x182818u: goto label_182818;
        case 0x18281cu: goto label_18281c;
        case 0x182820u: goto label_182820;
        case 0x182824u: goto label_182824;
        case 0x182828u: goto label_182828;
        case 0x18282cu: goto label_18282c;
        case 0x182830u: goto label_182830;
        case 0x182834u: goto label_182834;
        case 0x182838u: goto label_182838;
        case 0x18283cu: goto label_18283c;
        case 0x182840u: goto label_182840;
        case 0x182844u: goto label_182844;
        case 0x182848u: goto label_182848;
        case 0x18284cu: goto label_18284c;
        case 0x182850u: goto label_182850;
        case 0x182854u: goto label_182854;
        case 0x182858u: goto label_182858;
        case 0x18285cu: goto label_18285c;
        case 0x182860u: goto label_182860;
        case 0x182864u: goto label_182864;
        case 0x182868u: goto label_182868;
        case 0x18286cu: goto label_18286c;
        case 0x182870u: goto label_182870;
        case 0x182874u: goto label_182874;
        case 0x182878u: goto label_182878;
        case 0x18287cu: goto label_18287c;
        case 0x182880u: goto label_182880;
        case 0x182884u: goto label_182884;
        case 0x182888u: goto label_182888;
        case 0x18288cu: goto label_18288c;
        case 0x182890u: goto label_182890;
        case 0x182894u: goto label_182894;
        case 0x182898u: goto label_182898;
        case 0x18289cu: goto label_18289c;
        case 0x1828a0u: goto label_1828a0;
        case 0x1828a4u: goto label_1828a4;
        case 0x1828a8u: goto label_1828a8;
        case 0x1828acu: goto label_1828ac;
        case 0x1828b0u: goto label_1828b0;
        case 0x1828b4u: goto label_1828b4;
        case 0x1828b8u: goto label_1828b8;
        case 0x1828bcu: goto label_1828bc;
        case 0x1828c0u: goto label_1828c0;
        case 0x1828c4u: goto label_1828c4;
        case 0x1828c8u: goto label_1828c8;
        case 0x1828ccu: goto label_1828cc;
        case 0x1828d0u: goto label_1828d0;
        case 0x1828d4u: goto label_1828d4;
        case 0x1828d8u: goto label_1828d8;
        case 0x1828dcu: goto label_1828dc;
        case 0x1828e0u: goto label_1828e0;
        case 0x1828e4u: goto label_1828e4;
        case 0x1828e8u: goto label_1828e8;
        case 0x1828ecu: goto label_1828ec;
        case 0x1828f0u: goto label_1828f0;
        case 0x1828f4u: goto label_1828f4;
        case 0x1828f8u: goto label_1828f8;
        case 0x1828fcu: goto label_1828fc;
        case 0x182900u: goto label_182900;
        case 0x182904u: goto label_182904;
        case 0x182908u: goto label_182908;
        case 0x18290cu: goto label_18290c;
        case 0x182910u: goto label_182910;
        case 0x182914u: goto label_182914;
        case 0x182918u: goto label_182918;
        case 0x18291cu: goto label_18291c;
        case 0x182920u: goto label_182920;
        case 0x182924u: goto label_182924;
        case 0x182928u: goto label_182928;
        case 0x18292cu: goto label_18292c;
        case 0x182930u: goto label_182930;
        case 0x182934u: goto label_182934;
        case 0x182938u: goto label_182938;
        case 0x18293cu: goto label_18293c;
        case 0x182940u: goto label_182940;
        case 0x182944u: goto label_182944;
        case 0x182948u: goto label_182948;
        case 0x18294cu: goto label_18294c;
        case 0x182950u: goto label_182950;
        case 0x182954u: goto label_182954;
        case 0x182958u: goto label_182958;
        case 0x18295cu: goto label_18295c;
        case 0x182960u: goto label_182960;
        case 0x182964u: goto label_182964;
        case 0x182968u: goto label_182968;
        case 0x18296cu: goto label_18296c;
        case 0x182970u: goto label_182970;
        case 0x182974u: goto label_182974;
        case 0x182978u: goto label_182978;
        case 0x18297cu: goto label_18297c;
        case 0x182980u: goto label_182980;
        case 0x182984u: goto label_182984;
        case 0x182988u: goto label_182988;
        case 0x18298cu: goto label_18298c;
        case 0x182990u: goto label_182990;
        case 0x182994u: goto label_182994;
        case 0x182998u: goto label_182998;
        case 0x18299cu: goto label_18299c;
        case 0x1829a0u: goto label_1829a0;
        case 0x1829a4u: goto label_1829a4;
        case 0x1829a8u: goto label_1829a8;
        case 0x1829acu: goto label_1829ac;
        case 0x1829b0u: goto label_1829b0;
        case 0x1829b4u: goto label_1829b4;
        case 0x1829b8u: goto label_1829b8;
        case 0x1829bcu: goto label_1829bc;
        case 0x1829c0u: goto label_1829c0;
        case 0x1829c4u: goto label_1829c4;
        case 0x1829c8u: goto label_1829c8;
        case 0x1829ccu: goto label_1829cc;
        case 0x1829d0u: goto label_1829d0;
        case 0x1829d4u: goto label_1829d4;
        case 0x1829d8u: goto label_1829d8;
        case 0x1829dcu: goto label_1829dc;
        case 0x1829e0u: goto label_1829e0;
        case 0x1829e4u: goto label_1829e4;
        case 0x1829e8u: goto label_1829e8;
        case 0x1829ecu: goto label_1829ec;
        case 0x1829f0u: goto label_1829f0;
        case 0x1829f4u: goto label_1829f4;
        case 0x1829f8u: goto label_1829f8;
        case 0x1829fcu: goto label_1829fc;
        case 0x182a00u: goto label_182a00;
        case 0x182a04u: goto label_182a04;
        case 0x182a08u: goto label_182a08;
        case 0x182a0cu: goto label_182a0c;
        case 0x182a10u: goto label_182a10;
        case 0x182a14u: goto label_182a14;
        case 0x182a18u: goto label_182a18;
        case 0x182a1cu: goto label_182a1c;
        case 0x182a20u: goto label_182a20;
        case 0x182a24u: goto label_182a24;
        case 0x182a28u: goto label_182a28;
        case 0x182a2cu: goto label_182a2c;
        case 0x182a30u: goto label_182a30;
        case 0x182a34u: goto label_182a34;
        case 0x182a38u: goto label_182a38;
        case 0x182a3cu: goto label_182a3c;
        case 0x182a40u: goto label_182a40;
        case 0x182a44u: goto label_182a44;
        case 0x182a48u: goto label_182a48;
        case 0x182a4cu: goto label_182a4c;
        case 0x182a50u: goto label_182a50;
        case 0x182a54u: goto label_182a54;
        case 0x182a58u: goto label_182a58;
        case 0x182a5cu: goto label_182a5c;
        case 0x182a60u: goto label_182a60;
        case 0x182a64u: goto label_182a64;
        case 0x182a68u: goto label_182a68;
        case 0x182a6cu: goto label_182a6c;
        case 0x182a70u: goto label_182a70;
        case 0x182a74u: goto label_182a74;
        case 0x182a78u: goto label_182a78;
        case 0x182a7cu: goto label_182a7c;
        case 0x182a80u: goto label_182a80;
        case 0x182a84u: goto label_182a84;
        case 0x182a88u: goto label_182a88;
        case 0x182a8cu: goto label_182a8c;
        case 0x182a90u: goto label_182a90;
        case 0x182a94u: goto label_182a94;
        case 0x182a98u: goto label_182a98;
        case 0x182a9cu: goto label_182a9c;
        case 0x182aa0u: goto label_182aa0;
        case 0x182aa4u: goto label_182aa4;
        case 0x182aa8u: goto label_182aa8;
        case 0x182aacu: goto label_182aac;
        case 0x182ab0u: goto label_182ab0;
        case 0x182ab4u: goto label_182ab4;
        case 0x182ab8u: goto label_182ab8;
        case 0x182abcu: goto label_182abc;
        case 0x182ac0u: goto label_182ac0;
        case 0x182ac4u: goto label_182ac4;
        case 0x182ac8u: goto label_182ac8;
        case 0x182accu: goto label_182acc;
        case 0x182ad0u: goto label_182ad0;
        case 0x182ad4u: goto label_182ad4;
        case 0x182ad8u: goto label_182ad8;
        case 0x182adcu: goto label_182adc;
        case 0x182ae0u: goto label_182ae0;
        case 0x182ae4u: goto label_182ae4;
        case 0x182ae8u: goto label_182ae8;
        case 0x182aecu: goto label_182aec;
        case 0x182af0u: goto label_182af0;
        case 0x182af4u: goto label_182af4;
        case 0x182af8u: goto label_182af8;
        case 0x182afcu: goto label_182afc;
        case 0x182b00u: goto label_182b00;
        case 0x182b04u: goto label_182b04;
        case 0x182b08u: goto label_182b08;
        case 0x182b0cu: goto label_182b0c;
        case 0x182b10u: goto label_182b10;
        case 0x182b14u: goto label_182b14;
        case 0x182b18u: goto label_182b18;
        case 0x182b1cu: goto label_182b1c;
        case 0x182b20u: goto label_182b20;
        case 0x182b24u: goto label_182b24;
        case 0x182b28u: goto label_182b28;
        case 0x182b2cu: goto label_182b2c;
        case 0x182b30u: goto label_182b30;
        case 0x182b34u: goto label_182b34;
        case 0x182b38u: goto label_182b38;
        case 0x182b3cu: goto label_182b3c;
        case 0x182b40u: goto label_182b40;
        case 0x182b44u: goto label_182b44;
        case 0x182b48u: goto label_182b48;
        case 0x182b4cu: goto label_182b4c;
        case 0x182b50u: goto label_182b50;
        case 0x182b54u: goto label_182b54;
        case 0x182b58u: goto label_182b58;
        case 0x182b5cu: goto label_182b5c;
        case 0x182b60u: goto label_182b60;
        case 0x182b64u: goto label_182b64;
        case 0x182b68u: goto label_182b68;
        case 0x182b6cu: goto label_182b6c;
        case 0x182b70u: goto label_182b70;
        case 0x182b74u: goto label_182b74;
        case 0x182b78u: goto label_182b78;
        case 0x182b7cu: goto label_182b7c;
        case 0x182b80u: goto label_182b80;
        case 0x182b84u: goto label_182b84;
        case 0x182b88u: goto label_182b88;
        case 0x182b8cu: goto label_182b8c;
        case 0x182b90u: goto label_182b90;
        case 0x182b94u: goto label_182b94;
        case 0x182b98u: goto label_182b98;
        case 0x182b9cu: goto label_182b9c;
        case 0x182ba0u: goto label_182ba0;
        case 0x182ba4u: goto label_182ba4;
        case 0x182ba8u: goto label_182ba8;
        case 0x182bacu: goto label_182bac;
        case 0x182bb0u: goto label_182bb0;
        case 0x182bb4u: goto label_182bb4;
        case 0x182bb8u: goto label_182bb8;
        case 0x182bbcu: goto label_182bbc;
        case 0x182bc0u: goto label_182bc0;
        case 0x182bc4u: goto label_182bc4;
        case 0x182bc8u: goto label_182bc8;
        case 0x182bccu: goto label_182bcc;
        case 0x182bd0u: goto label_182bd0;
        case 0x182bd4u: goto label_182bd4;
        case 0x182bd8u: goto label_182bd8;
        case 0x182bdcu: goto label_182bdc;
        case 0x182be0u: goto label_182be0;
        case 0x182be4u: goto label_182be4;
        case 0x182be8u: goto label_182be8;
        case 0x182becu: goto label_182bec;
        case 0x182bf0u: goto label_182bf0;
        case 0x182bf4u: goto label_182bf4;
        case 0x182bf8u: goto label_182bf8;
        case 0x182bfcu: goto label_182bfc;
        case 0x182c00u: goto label_182c00;
        case 0x182c04u: goto label_182c04;
        case 0x182c08u: goto label_182c08;
        case 0x182c0cu: goto label_182c0c;
        case 0x182c10u: goto label_182c10;
        case 0x182c14u: goto label_182c14;
        case 0x182c18u: goto label_182c18;
        case 0x182c1cu: goto label_182c1c;
        case 0x182c20u: goto label_182c20;
        case 0x182c24u: goto label_182c24;
        case 0x182c28u: goto label_182c28;
        case 0x182c2cu: goto label_182c2c;
        case 0x182c30u: goto label_182c30;
        case 0x182c34u: goto label_182c34;
        case 0x182c38u: goto label_182c38;
        case 0x182c3cu: goto label_182c3c;
        case 0x182c40u: goto label_182c40;
        case 0x182c44u: goto label_182c44;
        case 0x182c48u: goto label_182c48;
        case 0x182c4cu: goto label_182c4c;
        case 0x182c50u: goto label_182c50;
        case 0x182c54u: goto label_182c54;
        case 0x182c58u: goto label_182c58;
        case 0x182c5cu: goto label_182c5c;
        case 0x182c60u: goto label_182c60;
        case 0x182c64u: goto label_182c64;
        case 0x182c68u: goto label_182c68;
        case 0x182c6cu: goto label_182c6c;
        case 0x182c70u: goto label_182c70;
        case 0x182c74u: goto label_182c74;
        case 0x182c78u: goto label_182c78;
        case 0x182c7cu: goto label_182c7c;
        case 0x182c80u: goto label_182c80;
        case 0x182c84u: goto label_182c84;
        case 0x182c88u: goto label_182c88;
        case 0x182c8cu: goto label_182c8c;
        case 0x182c90u: goto label_182c90;
        case 0x182c94u: goto label_182c94;
        case 0x182c98u: goto label_182c98;
        case 0x182c9cu: goto label_182c9c;
        case 0x182ca0u: goto label_182ca0;
        case 0x182ca4u: goto label_182ca4;
        case 0x182ca8u: goto label_182ca8;
        case 0x182cacu: goto label_182cac;
        case 0x182cb0u: goto label_182cb0;
        case 0x182cb4u: goto label_182cb4;
        case 0x182cb8u: goto label_182cb8;
        case 0x182cbcu: goto label_182cbc;
        case 0x182cc0u: goto label_182cc0;
        case 0x182cc4u: goto label_182cc4;
        case 0x182cc8u: goto label_182cc8;
        case 0x182cccu: goto label_182ccc;
        case 0x182cd0u: goto label_182cd0;
        case 0x182cd4u: goto label_182cd4;
        case 0x182cd8u: goto label_182cd8;
        case 0x182cdcu: goto label_182cdc;
        case 0x182ce0u: goto label_182ce0;
        case 0x182ce4u: goto label_182ce4;
        case 0x182ce8u: goto label_182ce8;
        case 0x182cecu: goto label_182cec;
        case 0x182cf0u: goto label_182cf0;
        case 0x182cf4u: goto label_182cf4;
        case 0x182cf8u: goto label_182cf8;
        case 0x182cfcu: goto label_182cfc;
        case 0x182d00u: goto label_182d00;
        case 0x182d04u: goto label_182d04;
        case 0x182d08u: goto label_182d08;
        case 0x182d0cu: goto label_182d0c;
        case 0x182d10u: goto label_182d10;
        case 0x182d14u: goto label_182d14;
        case 0x182d18u: goto label_182d18;
        case 0x182d1cu: goto label_182d1c;
        case 0x182d20u: goto label_182d20;
        case 0x182d24u: goto label_182d24;
        case 0x182d28u: goto label_182d28;
        case 0x182d2cu: goto label_182d2c;
        case 0x182d30u: goto label_182d30;
        case 0x182d34u: goto label_182d34;
        case 0x182d38u: goto label_182d38;
        case 0x182d3cu: goto label_182d3c;
        case 0x182d40u: goto label_182d40;
        case 0x182d44u: goto label_182d44;
        case 0x182d48u: goto label_182d48;
        case 0x182d4cu: goto label_182d4c;
        case 0x182d50u: goto label_182d50;
        case 0x182d54u: goto label_182d54;
        case 0x182d58u: goto label_182d58;
        case 0x182d5cu: goto label_182d5c;
        case 0x182d60u: goto label_182d60;
        case 0x182d64u: goto label_182d64;
        case 0x182d68u: goto label_182d68;
        case 0x182d6cu: goto label_182d6c;
        case 0x182d70u: goto label_182d70;
        case 0x182d74u: goto label_182d74;
        case 0x182d78u: goto label_182d78;
        case 0x182d7cu: goto label_182d7c;
        case 0x182d80u: goto label_182d80;
        case 0x182d84u: goto label_182d84;
        case 0x182d88u: goto label_182d88;
        case 0x182d8cu: goto label_182d8c;
        case 0x182d90u: goto label_182d90;
        case 0x182d94u: goto label_182d94;
        case 0x182d98u: goto label_182d98;
        case 0x182d9cu: goto label_182d9c;
        case 0x182da0u: goto label_182da0;
        case 0x182da4u: goto label_182da4;
        case 0x182da8u: goto label_182da8;
        case 0x182dacu: goto label_182dac;
        case 0x182db0u: goto label_182db0;
        case 0x182db4u: goto label_182db4;
        case 0x182db8u: goto label_182db8;
        case 0x182dbcu: goto label_182dbc;
        case 0x182dc0u: goto label_182dc0;
        case 0x182dc4u: goto label_182dc4;
        case 0x182dc8u: goto label_182dc8;
        case 0x182dccu: goto label_182dcc;
        case 0x182dd0u: goto label_182dd0;
        case 0x182dd4u: goto label_182dd4;
        case 0x182dd8u: goto label_182dd8;
        case 0x182ddcu: goto label_182ddc;
        case 0x182de0u: goto label_182de0;
        case 0x182de4u: goto label_182de4;
        case 0x182de8u: goto label_182de8;
        case 0x182decu: goto label_182dec;
        case 0x182df0u: goto label_182df0;
        case 0x182df4u: goto label_182df4;
        case 0x182df8u: goto label_182df8;
        case 0x182dfcu: goto label_182dfc;
        case 0x182e00u: goto label_182e00;
        case 0x182e04u: goto label_182e04;
        case 0x182e08u: goto label_182e08;
        case 0x182e0cu: goto label_182e0c;
        case 0x182e10u: goto label_182e10;
        case 0x182e14u: goto label_182e14;
        case 0x182e18u: goto label_182e18;
        case 0x182e1cu: goto label_182e1c;
        case 0x182e20u: goto label_182e20;
        case 0x182e24u: goto label_182e24;
        case 0x182e28u: goto label_182e28;
        case 0x182e2cu: goto label_182e2c;
        case 0x182e30u: goto label_182e30;
        case 0x182e34u: goto label_182e34;
        case 0x182e38u: goto label_182e38;
        case 0x182e3cu: goto label_182e3c;
        case 0x182e40u: goto label_182e40;
        case 0x182e44u: goto label_182e44;
        case 0x182e48u: goto label_182e48;
        case 0x182e4cu: goto label_182e4c;
        case 0x182e50u: goto label_182e50;
        case 0x182e54u: goto label_182e54;
        case 0x182e58u: goto label_182e58;
        case 0x182e5cu: goto label_182e5c;
        case 0x182e60u: goto label_182e60;
        case 0x182e64u: goto label_182e64;
        case 0x182e68u: goto label_182e68;
        case 0x182e6cu: goto label_182e6c;
        case 0x182e70u: goto label_182e70;
        case 0x182e74u: goto label_182e74;
        case 0x182e78u: goto label_182e78;
        case 0x182e7cu: goto label_182e7c;
        case 0x182e80u: goto label_182e80;
        case 0x182e84u: goto label_182e84;
        case 0x182e88u: goto label_182e88;
        case 0x182e8cu: goto label_182e8c;
        case 0x182e90u: goto label_182e90;
        case 0x182e94u: goto label_182e94;
        case 0x182e98u: goto label_182e98;
        case 0x182e9cu: goto label_182e9c;
        case 0x182ea0u: goto label_182ea0;
        case 0x182ea4u: goto label_182ea4;
        case 0x182ea8u: goto label_182ea8;
        case 0x182eacu: goto label_182eac;
        case 0x182eb0u: goto label_182eb0;
        case 0x182eb4u: goto label_182eb4;
        case 0x182eb8u: goto label_182eb8;
        case 0x182ebcu: goto label_182ebc;
        case 0x182ec0u: goto label_182ec0;
        case 0x182ec4u: goto label_182ec4;
        case 0x182ec8u: goto label_182ec8;
        case 0x182eccu: goto label_182ecc;
        case 0x182ed0u: goto label_182ed0;
        case 0x182ed4u: goto label_182ed4;
        case 0x182ed8u: goto label_182ed8;
        case 0x182edcu: goto label_182edc;
        case 0x182ee0u: goto label_182ee0;
        case 0x182ee4u: goto label_182ee4;
        case 0x182ee8u: goto label_182ee8;
        case 0x182eecu: goto label_182eec;
        case 0x182ef0u: goto label_182ef0;
        case 0x182ef4u: goto label_182ef4;
        case 0x182ef8u: goto label_182ef8;
        case 0x182efcu: goto label_182efc;
        case 0x182f00u: goto label_182f00;
        case 0x182f04u: goto label_182f04;
        case 0x182f08u: goto label_182f08;
        case 0x182f0cu: goto label_182f0c;
        case 0x182f10u: goto label_182f10;
        case 0x182f14u: goto label_182f14;
        case 0x182f18u: goto label_182f18;
        case 0x182f1cu: goto label_182f1c;
        case 0x182f20u: goto label_182f20;
        case 0x182f24u: goto label_182f24;
        case 0x182f28u: goto label_182f28;
        case 0x182f2cu: goto label_182f2c;
        case 0x182f30u: goto label_182f30;
        case 0x182f34u: goto label_182f34;
        case 0x182f38u: goto label_182f38;
        case 0x182f3cu: goto label_182f3c;
        case 0x182f40u: goto label_182f40;
        case 0x182f44u: goto label_182f44;
        case 0x182f48u: goto label_182f48;
        case 0x182f4cu: goto label_182f4c;
        case 0x182f50u: goto label_182f50;
        case 0x182f54u: goto label_182f54;
        case 0x182f58u: goto label_182f58;
        case 0x182f5cu: goto label_182f5c;
        case 0x182f60u: goto label_182f60;
        case 0x182f64u: goto label_182f64;
        case 0x182f68u: goto label_182f68;
        case 0x182f6cu: goto label_182f6c;
        case 0x182f70u: goto label_182f70;
        case 0x182f74u: goto label_182f74;
        case 0x182f78u: goto label_182f78;
        case 0x182f7cu: goto label_182f7c;
        case 0x182f80u: goto label_182f80;
        case 0x182f84u: goto label_182f84;
        case 0x182f88u: goto label_182f88;
        case 0x182f8cu: goto label_182f8c;
        default: return;
    }

label_1827c0:
    if (ctx->pc == 0x1827C0u) {
        ctx->pc = 0x1827C4u;
        goto label_1827c4;
    }
    ctx->pc = 0x1827BCu;
    {
        const bool branch_taken_0x1827bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1827bc) {
            ctx->pc = 0x182938u;
            goto label_182938;
        }
    }
    ctx->pc = 0x1827C4u;
label_1827c4:
    // 0x1827c4: 0x92440231  lbu         $a0, 0x231($s2)
    ctx->pc = 0x1827c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 561)));
label_1827c8:
    // 0x1827c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1827c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1827cc:
    // 0x1827cc: 0x1083005a  beq         $a0, $v1, . + 4 + (0x5A << 2)
label_1827d0:
    if (ctx->pc == 0x1827D0u) {
        ctx->pc = 0x1827D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1827CCu;
        // 0x1827d0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1827D4u;
        goto label_1827d4;
    }
    ctx->pc = 0x1827CCu;
    {
        const bool branch_taken_0x1827cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1827D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1827CCu;
        // 0x1827d0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1827cc) {
            ctx->pc = 0x182938u;
            goto label_182938;
        }
    }
    ctx->pc = 0x1827D4u;
label_1827d4:
    // 0x1827d4: 0x10830058  beq         $a0, $v1, . + 4 + (0x58 << 2)
label_1827d8:
    if (ctx->pc == 0x1827D8u) {
        ctx->pc = 0x1827D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1827D4u;
        // 0x1827d8: 0x46010802  mul.s       $f0, $f1, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1827DCu;
        goto label_1827dc;
    }
    ctx->pc = 0x1827D4u;
    {
        const bool branch_taken_0x1827d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1827D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1827D4u;
        // 0x1827d8: 0x46010802  mul.s       $f0, $f1, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1827d4) {
            ctx->pc = 0x182938u;
            goto label_182938;
        }
    }
    ctx->pc = 0x1827DCu;
label_1827dc:
    // 0x1827dc: 0xc6410260  lwc1        $f1, 0x260($s2)
    ctx->pc = 0x1827dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1827e0:
    // 0x1827e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1827e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1827e4:
    // 0x1827e4: 0x0  nop
    ctx->pc = 0x1827e4u;
    // NOP
label_1827e8:
    // 0x1827e8: 0x45000053  bc1f        . + 4 + (0x53 << 2)
label_1827ec:
    if (ctx->pc == 0x1827ECu) {
        ctx->pc = 0x1827F0u;
        goto label_1827f0;
    }
    ctx->pc = 0x1827E8u;
    {
        const bool branch_taken_0x1827e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1827e8) {
            ctx->pc = 0x182938u;
            goto label_182938;
        }
    }
    ctx->pc = 0x1827F0u;
label_1827f0:
    // 0x1827f0: 0xc6420264  lwc1        $f2, 0x264($s2)
    ctx->pc = 0x1827f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1827f4:
    // 0x1827f4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1827f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1827f8:
    // 0x1827f8: 0xc6410044  lwc1        $f1, 0x44($s2)
    ctx->pc = 0x1827f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1827fc:
    // 0x1827fc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1827fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_182800:
    // 0x182800: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x182800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182804:
    // 0x182804: 0x0  nop
    ctx->pc = 0x182804u;
    // NOP
label_182808:
    // 0x182808: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x182808u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_18280c:
    // 0x18280c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x18280cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_182810:
    // 0x182810: 0x0  nop
    ctx->pc = 0x182810u;
    // NOP
label_182814:
    // 0x182814: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_182818:
    if (ctx->pc == 0x182818u) {
        ctx->pc = 0x182818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182814u;
        // 0x182818: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18281Cu;
        goto label_18281c;
    }
    ctx->pc = 0x182814u;
    {
        const bool branch_taken_0x182814 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x182818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182814u;
        // 0x182818: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182814) {
            ctx->pc = 0x182830u;
            goto label_182830;
        }
    }
    ctx->pc = 0x18281Cu;
label_18281c:
    // 0x18281c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18281cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_182820:
    // 0x182820: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x182820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_182824:
    // 0x182824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x182824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182828:
    // 0x182828: 0x1000000d  b           . + 4 + (0xD << 2)
label_18282c:
    if (ctx->pc == 0x18282Cu) {
        ctx->pc = 0x18282Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182828u;
        // 0x18282c: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x182830u;
        goto label_182830;
    }
    ctx->pc = 0x182828u;
    {
        const bool branch_taken_0x182828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18282Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182828u;
        // 0x18282c: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182828) {
            ctx->pc = 0x182860u;
            goto label_182860;
        }
    }
    ctx->pc = 0x182830u;
label_182830:
    // 0x182830: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x182830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_182834:
    // 0x182834: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x182834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182838:
    // 0x182838: 0x0  nop
    ctx->pc = 0x182838u;
    // NOP
label_18283c:
    // 0x18283c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x18283cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_182840:
    // 0x182840: 0x0  nop
    ctx->pc = 0x182840u;
    // NOP
label_182844:
    // 0x182844: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_182848:
    if (ctx->pc == 0x182848u) {
        ctx->pc = 0x18284Cu;
        goto label_18284c;
    }
    ctx->pc = 0x182844u;
    {
        const bool branch_taken_0x182844 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182844) {
            ctx->pc = 0x182860u;
            goto label_182860;
        }
    }
    ctx->pc = 0x18284Cu;
label_18284c:
    // 0x18284c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18284cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_182850:
    // 0x182850: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x182850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_182854:
    // 0x182854: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x182854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182858:
    // 0x182858: 0x10000001  b           . + 4 + (0x1 << 2)
label_18285c:
    if (ctx->pc == 0x18285Cu) {
        ctx->pc = 0x18285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182858u;
        // 0x18285c: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x182860u;
        goto label_182860;
    }
    ctx->pc = 0x182858u;
    {
        const bool branch_taken_0x182858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182858u;
        // 0x18285c: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182858) {
            ctx->pc = 0x182860u;
            goto label_182860;
        }
    }
    ctx->pc = 0x182860u;
label_182860:
    // 0x182860: 0xc06d448  jal         func_1B5120
label_182864:
    if (ctx->pc == 0x182864u) {
        ctx->pc = 0x182868u;
        goto label_182868;
    }
    ctx->pc = 0x182860u;
    SET_GPR_U32(ctx, 31, 0x182868u);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x182868u;
label_182868:
    // 0x182868: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x182868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
label_18286c:
    // 0x18286c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x18286cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_182870:
    // 0x182870: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x182870u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_182874:
    // 0x182874: 0x0  nop
    ctx->pc = 0x182874u;
    // NOP
label_182878:
    // 0x182878: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x182878u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18287c:
    // 0x18287c: 0x0  nop
    ctx->pc = 0x18287cu;
    // NOP
label_182880:
    // 0x182880: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
label_182884:
    if (ctx->pc == 0x182884u) {
        ctx->pc = 0x182888u;
        goto label_182888;
    }
    ctx->pc = 0x182880u;
    {
        const bool branch_taken_0x182880 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182880) {
            ctx->pc = 0x182938u;
            goto label_182938;
        }
    }
    ctx->pc = 0x182888u;
label_182888:
    // 0x182888: 0x92440236  lbu         $a0, 0x236($s2)
    ctx->pc = 0x182888u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 566)));
label_18288c:
    // 0x18288c: 0x2881004a  slti        $at, $a0, 0x4A
    ctx->pc = 0x18288cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)74) ? 1 : 0);
label_182890:
    // 0x182890: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
label_182894:
    if (ctx->pc == 0x182894u) {
        ctx->pc = 0x182898u;
        goto label_182898;
    }
    ctx->pc = 0x182890u;
    {
        const bool branch_taken_0x182890 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x182890) {
            ctx->pc = 0x182938u;
            goto label_182938;
        }
    }
    ctx->pc = 0x182898u;
label_182898:
    // 0x182898: 0x92430235  lbu         $v1, 0x235($s2)
    ctx->pc = 0x182898u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 565)));
label_18289c:
    // 0x18289c: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x18289cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_1828a0:
    // 0x1828a0: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
label_1828a4:
    if (ctx->pc == 0x1828A4u) {
        ctx->pc = 0x1828A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1828A0u;
        // 0x1828a4: 0x308500ff  andi        $a1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1828A8u;
        goto label_1828a8;
    }
    ctx->pc = 0x1828A0u;
    {
        const bool branch_taken_0x1828a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1828A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1828A0u;
        // 0x1828a4: 0x308500ff  andi        $a1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1828a0) {
            ctx->pc = 0x182938u;
            goto label_182938;
        }
    }
    ctx->pc = 0x1828A8u;
label_1828a8:
    // 0x1828a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1828a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1828ac:
    // 0x1828ac: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1828acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1828b0:
    // 0x1828b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1828b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1828b4:
    // 0x1828b4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1828b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1828b8:
    // 0x1828b8: 0x8f8484e0  lw          $a0, -0x7B20($gp)
    ctx->pc = 0x1828b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_1828bc:
    // 0x1828bc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1828bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1828c0:
    // 0x1828c0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1828c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1828c4:
    // 0x1828c4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1828c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1828c8:
    // 0x1828c8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1828c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1828cc:
    // 0x1828cc: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
label_1828d0:
    if (ctx->pc == 0x1828D0u) {
        ctx->pc = 0x1828D4u;
        goto label_1828d4;
    }
    ctx->pc = 0x1828CCu;
    {
        const bool branch_taken_0x1828cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1828cc) {
            ctx->pc = 0x182938u;
            goto label_182938;
        }
    }
    ctx->pc = 0x1828D4u;
label_1828d4:
    // 0x1828d4: 0x90a30232  lbu         $v1, 0x232($a1)
    ctx->pc = 0x1828d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 562)));
label_1828d8:
    // 0x1828d8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_1828dc:
    if (ctx->pc == 0x1828DCu) {
        ctx->pc = 0x1828E0u;
        goto label_1828e0;
    }
    ctx->pc = 0x1828D8u;
    {
        const bool branch_taken_0x1828d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1828d8) {
            ctx->pc = 0x1828F8u;
            goto label_1828f8;
        }
    }
    ctx->pc = 0x1828E0u;
label_1828e0:
    // 0x1828e0: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x1828e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_1828e4:
    // 0x1828e4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1828e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1828e8:
    // 0x1828e8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1828e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1828ec:
    // 0x1828ec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1828ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1828f0:
    // 0x1828f0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_1828f4:
    if (ctx->pc == 0x1828F4u) {
        ctx->pc = 0x1828F8u;
        goto label_1828f8;
    }
    ctx->pc = 0x1828F0u;
    {
        const bool branch_taken_0x1828f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1828f0) {
            ctx->pc = 0x182938u;
            goto label_182938;
        }
    }
    ctx->pc = 0x1828F8u;
label_1828f8:
    // 0x1828f8: 0x924301a2  lbu         $v1, 0x1A2($s2)
    ctx->pc = 0x1828f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 418)));
label_1828fc:
    // 0x1828fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_182900:
    if (ctx->pc == 0x182900u) {
        ctx->pc = 0x182904u;
        goto label_182904;
    }
    ctx->pc = 0x1828FCu;
    {
        const bool branch_taken_0x1828fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1828fc) {
            ctx->pc = 0x182910u;
            goto label_182910;
        }
    }
    ctx->pc = 0x182904u;
label_182904:
    // 0x182904: 0x90a301a2  lbu         $v1, 0x1A2($a1)
    ctx->pc = 0x182904u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 418)));
label_182908:
    // 0x182908: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_18290c:
    if (ctx->pc == 0x18290Cu) {
        ctx->pc = 0x182910u;
        goto label_182910;
    }
    ctx->pc = 0x182908u;
    {
        const bool branch_taken_0x182908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x182908) {
            ctx->pc = 0x182938u;
            goto label_182938;
        }
    }
    ctx->pc = 0x182910u;
label_182910:
    // 0x182910: 0x90a3023b  lbu         $v1, 0x23B($a1)
    ctx->pc = 0x182910u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 571)));
label_182914:
    // 0x182914: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_182918:
    if (ctx->pc == 0x182918u) {
        ctx->pc = 0x18291Cu;
        goto label_18291c;
    }
    ctx->pc = 0x182914u;
    {
        const bool branch_taken_0x182914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x182914) {
            ctx->pc = 0x182938u;
            goto label_182938;
        }
    }
    ctx->pc = 0x18291Cu;
label_18291c:
    // 0x18291c: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x18291cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_182920:
    // 0x182920: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x182920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_182924:
    // 0x182924: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x182924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_182928:
    // 0x182928: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_18292c:
    if (ctx->pc == 0x18292Cu) {
        ctx->pc = 0x18292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182928u;
        // 0x18292c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182930u;
        goto label_182930;
    }
    ctx->pc = 0x182928u;
    {
        const bool branch_taken_0x182928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182928u;
        // 0x18292c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182928) {
            ctx->pc = 0x182938u;
            goto label_182938;
        }
    }
    ctx->pc = 0x182930u;
label_182930:
    // 0x182930: 0xc040930  jal         func_1024C0
label_182934:
    if (ctx->pc == 0x182934u) {
        ctx->pc = 0x182938u;
        goto label_182938;
    }
    ctx->pc = 0x182930u;
    SET_GPR_U32(ctx, 31, 0x182938u);
    ctx->pc = 0x1024C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1024C0u, 0x182930u, 0x182938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182938u;
label_182938:
    // 0x182938: 0x8644003c  lh          $a0, 0x3C($s2)
    ctx->pc = 0x182938u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
label_18293c:
    // 0x18293c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x18293cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_182940:
    // 0x182940: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_182944:
    if (ctx->pc == 0x182944u) {
        ctx->pc = 0x182944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182940u;
        // 0x182944: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182948u;
        goto label_182948;
    }
    ctx->pc = 0x182940u;
    {
        const bool branch_taken_0x182940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x182944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182940u;
        // 0x182944: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182940) {
            ctx->pc = 0x18296Cu;
            goto label_18296c;
        }
    }
    ctx->pc = 0x182948u;
label_182948:
    // 0x182948: 0x14830103  bne         $a0, $v1, . + 4 + (0x103 << 2)
label_18294c:
    if (ctx->pc == 0x18294Cu) {
        ctx->pc = 0x182950u;
        goto label_182950;
    }
    ctx->pc = 0x182948u;
    {
        const bool branch_taken_0x182948 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x182948) {
            ctx->pc = 0x182D58u;
            goto label_182d58;
        }
    }
    ctx->pc = 0x182950u;
label_182950:
    // 0x182950: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x182950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_182954:
    // 0x182954: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x182954u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182958:
    // 0x182958: 0x0  nop
    ctx->pc = 0x182958u;
    // NOP
label_18295c:
    // 0x18295c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18295cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_182960:
    // 0x182960: 0x0  nop
    ctx->pc = 0x182960u;
    // NOP
label_182964:
    // 0x182964: 0x450000fc  bc1f        . + 4 + (0xFC << 2)
label_182968:
    if (ctx->pc == 0x182968u) {
        ctx->pc = 0x18296Cu;
        goto label_18296c;
    }
    ctx->pc = 0x182964u;
    {
        const bool branch_taken_0x182964 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182964) {
            ctx->pc = 0x182D58u;
            goto label_182d58;
        }
    }
    ctx->pc = 0x18296Cu;
label_18296c:
    // 0x18296c: 0x8e430194  lw          $v1, 0x194($s2)
    ctx->pc = 0x18296cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_182970:
    // 0x182970: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x182970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_182974:
    // 0x182974: 0x100000f8  b           . + 4 + (0xF8 << 2)
label_182978:
    if (ctx->pc == 0x182978u) {
        ctx->pc = 0x182978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182974u;
        // 0x182978: 0xae430194  sw          $v1, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18297Cu;
        goto label_18297c;
    }
    ctx->pc = 0x182974u;
    {
        const bool branch_taken_0x182974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182974u;
        // 0x182978: 0xae430194  sw          $v1, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182974) {
            ctx->pc = 0x182D58u;
            goto label_182d58;
        }
    }
    ctx->pc = 0x18297Cu;
label_18297c:
    // 0x18297c: 0xc062ca4  jal         func_18B290
label_182980:
    if (ctx->pc == 0x182980u) {
        ctx->pc = 0x182984u;
        goto label_182984;
    }
    ctx->pc = 0x18297Cu;
    SET_GPR_U32(ctx, 31, 0x182984u);
    ctx->pc = 0x18B290u;
    { ctx->pc = 0x18b290; return; }
    ctx->pc = 0x182984u;
label_182984:
    // 0x182984: 0x144000f4  bnez        $v0, . + 4 + (0xF4 << 2)
label_182988:
    if (ctx->pc == 0x182988u) {
        ctx->pc = 0x18298Cu;
        goto label_18298c;
    }
    ctx->pc = 0x182984u;
    {
        const bool branch_taken_0x182984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182984) {
            ctx->pc = 0x182D58u;
            goto label_182d58;
        }
    }
    ctx->pc = 0x18298Cu;
label_18298c:
    // 0x18298c: 0x8644003c  lh          $a0, 0x3C($s2)
    ctx->pc = 0x18298cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
label_182990:
    // 0x182990: 0x2403007b  addiu       $v1, $zero, 0x7B
    ctx->pc = 0x182990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
label_182994:
    // 0x182994: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_182998:
    if (ctx->pc == 0x182998u) {
        ctx->pc = 0x182998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182994u;
        // 0x182998: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18299Cu;
        goto label_18299c;
    }
    ctx->pc = 0x182994u;
    {
        const bool branch_taken_0x182994 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x182998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182994u;
        // 0x182998: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182994) {
            ctx->pc = 0x1829A8u;
            goto label_1829a8;
        }
    }
    ctx->pc = 0x18299Cu;
label_18299c:
    // 0x18299c: 0x2403007d  addiu       $v1, $zero, 0x7D
    ctx->pc = 0x18299cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
label_1829a0:
    // 0x1829a0: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
label_1829a4:
    if (ctx->pc == 0x1829A4u) {
        ctx->pc = 0x1829A8u;
        goto label_1829a8;
    }
    ctx->pc = 0x1829A0u;
    {
        const bool branch_taken_0x1829a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1829a0) {
            ctx->pc = 0x1829D4u;
            goto label_1829d4;
        }
    }
    ctx->pc = 0x1829A8u;
label_1829a8:
    // 0x1829a8: 0x92430232  lbu         $v1, 0x232($s2)
    ctx->pc = 0x1829a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 562)));
label_1829ac:
    // 0x1829ac: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x1829acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_1829b0:
    // 0x1829b0: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_1829b4:
    if (ctx->pc == 0x1829B4u) {
        ctx->pc = 0x1829B8u;
        goto label_1829b8;
    }
    ctx->pc = 0x1829B0u;
    {
        const bool branch_taken_0x1829b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1829b0) {
            ctx->pc = 0x1829D4u;
            goto label_1829d4;
        }
    }
    ctx->pc = 0x1829B8u;
label_1829b8:
    // 0x1829b8: 0x8e430194  lw          $v1, 0x194($s2)
    ctx->pc = 0x1829b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_1829bc:
    // 0x1829bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1829bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1829c0:
    // 0x1829c0: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1829c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_1829c4:
    // 0x1829c4: 0xae430194  sw          $v1, 0x194($s2)
    ctx->pc = 0x1829c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
label_1829c8:
    // 0x1829c8: 0x8243023d  lb          $v1, 0x23D($s2)
    ctx->pc = 0x1829c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 573)));
label_1829cc:
    // 0x1829cc: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1829ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_1829d0:
    // 0x1829d0: 0xa243023d  sb          $v1, 0x23D($s2)
    ctx->pc = 0x1829d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 573), (uint8_t)GPR_U32(ctx, 3));
label_1829d4:
    // 0x1829d4: 0x14a000e0  bnez        $a1, . + 4 + (0xE0 << 2)
label_1829d8:
    if (ctx->pc == 0x1829D8u) {
        ctx->pc = 0x1829DCu;
        goto label_1829dc;
    }
    ctx->pc = 0x1829D4u;
    {
        const bool branch_taken_0x1829d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1829d4) {
            ctx->pc = 0x182D58u;
            goto label_182d58;
        }
    }
    ctx->pc = 0x1829DCu;
label_1829dc:
    // 0x1829dc: 0x9243023d  lbu         $v1, 0x23D($s2)
    ctx->pc = 0x1829dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 573)));
label_1829e0:
    // 0x1829e0: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1829e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_1829e4:
    // 0x1829e4: 0x10600073  beqz        $v1, . + 4 + (0x73 << 2)
label_1829e8:
    if (ctx->pc == 0x1829E8u) {
        ctx->pc = 0x1829ECu;
        goto label_1829ec;
    }
    ctx->pc = 0x1829E4u;
    {
        const bool branch_taken_0x1829e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1829e4) {
            ctx->pc = 0x182BB4u;
            goto label_182bb4;
        }
    }
    ctx->pc = 0x1829ECu;
label_1829ec:
    // 0x1829ec: 0x92440236  lbu         $a0, 0x236($s2)
    ctx->pc = 0x1829ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 566)));
label_1829f0:
    // 0x1829f0: 0x2881004a  slti        $at, $a0, 0x4A
    ctx->pc = 0x1829f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)74) ? 1 : 0);
label_1829f4:
    // 0x1829f4: 0x1020006a  beqz        $at, . + 4 + (0x6A << 2)
label_1829f8:
    if (ctx->pc == 0x1829F8u) {
        ctx->pc = 0x1829F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1829F4u;
        // 0x1829f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1829FCu;
        goto label_1829fc;
    }
    ctx->pc = 0x1829F4u;
    {
        const bool branch_taken_0x1829f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1829F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1829F4u;
        // 0x1829f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1829f4) {
            ctx->pc = 0x182BA0u;
            goto label_182ba0;
        }
    }
    ctx->pc = 0x1829FCu;
label_1829fc:
    // 0x1829fc: 0x92430235  lbu         $v1, 0x235($s2)
    ctx->pc = 0x1829fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 565)));
label_182a00:
    // 0x182a00: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x182a00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_182a04:
    // 0x182a04: 0x10200066  beqz        $at, . + 4 + (0x66 << 2)
label_182a08:
    if (ctx->pc == 0x182A08u) {
        ctx->pc = 0x182A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A04u;
        // 0x182a08: 0x308500ff  andi        $a1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x182A0Cu;
        goto label_182a0c;
    }
    ctx->pc = 0x182A04u;
    {
        const bool branch_taken_0x182a04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x182A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A04u;
        // 0x182a08: 0x308500ff  andi        $a1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a04) {
            ctx->pc = 0x182BA0u;
            goto label_182ba0;
        }
    }
    ctx->pc = 0x182A0Cu;
label_182a0c:
    // 0x182a0c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x182a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_182a10:
    // 0x182a10: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x182a10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_182a14:
    // 0x182a14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x182a14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_182a18:
    // 0x182a18: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x182a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_182a1c:
    // 0x182a1c: 0x8f8484e0  lw          $a0, -0x7B20($gp)
    ctx->pc = 0x182a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_182a20:
    // 0x182a20: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x182a20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_182a24:
    // 0x182a24: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x182a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_182a28:
    // 0x182a28: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x182a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_182a2c:
    // 0x182a2c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x182a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_182a30:
    // 0x182a30: 0x1080005b  beqz        $a0, . + 4 + (0x5B << 2)
label_182a34:
    if (ctx->pc == 0x182A34u) {
        ctx->pc = 0x182A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A30u;
        // 0x182a34: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182A38u;
        goto label_182a38;
    }
    ctx->pc = 0x182A30u;
    {
        const bool branch_taken_0x182a30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x182A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A30u;
        // 0x182a34: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a30) {
            ctx->pc = 0x182BA0u;
            goto label_182ba0;
        }
    }
    ctx->pc = 0x182A38u;
label_182a38:
    // 0x182a38: 0x9083023a  lbu         $v1, 0x23A($a0)
    ctx->pc = 0x182a38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 570)));
label_182a3c:
    // 0x182a3c: 0x14600058  bnez        $v1, . + 4 + (0x58 << 2)
label_182a40:
    if (ctx->pc == 0x182A40u) {
        ctx->pc = 0x182A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A3Cu;
        // 0x182a40: 0x24860150  addiu       $a2, $a0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182A44u;
        goto label_182a44;
    }
    ctx->pc = 0x182A3Cu;
    {
        const bool branch_taken_0x182a3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x182A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A3Cu;
        // 0x182a40: 0x24860150  addiu       $a2, $a0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a3c) {
            ctx->pc = 0x182BA0u;
            goto label_182ba0;
        }
    }
    ctx->pc = 0x182A44u;
label_182a44:
    // 0x182a44: 0x26450150  addiu       $a1, $s2, 0x150
    ctx->pc = 0x182a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_182a48:
    // 0x182a48: 0x26440264  addiu       $a0, $s2, 0x264
    ctx->pc = 0x182a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 612));
label_182a4c:
    // 0x182a4c: 0xc0439e8  jal         func_10E7A0
label_182a50:
    if (ctx->pc == 0x182A50u) {
        ctx->pc = 0x182A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A4Cu;
        // 0x182a50: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182A54u;
        goto label_182a54;
    }
    ctx->pc = 0x182A4Cu;
    SET_GPR_U32(ctx, 31, 0x182A54u);
    ctx->pc = 0x182A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182A4Cu;
    // 0x182a50: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x182A4Cu, 0x182A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182A54u;
label_182a54:
    // 0x182a54: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
label_182a58:
    if (ctx->pc == 0x182A58u) {
        ctx->pc = 0x182A5Cu;
        goto label_182a5c;
    }
    ctx->pc = 0x182A54u;
    {
        const bool branch_taken_0x182a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182a54) {
            ctx->pc = 0x182BA0u;
            goto label_182ba0;
        }
    }
    ctx->pc = 0x182A5Cu;
label_182a5c:
    // 0x182a5c: 0xc6430264  lwc1        $f3, 0x264($s2)
    ctx->pc = 0x182a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_182a60:
    // 0x182a60: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x182a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_182a64:
    // 0x182a64: 0xc6420044  lwc1        $f2, 0x44($s2)
    ctx->pc = 0x182a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_182a68:
    // 0x182a68: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x182a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_182a6c:
    // 0x182a6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x182a6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182a70:
    // 0x182a70: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x182a70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_182a74:
    // 0x182a74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x182a74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_182a78:
    // 0x182a78: 0x0  nop
    ctx->pc = 0x182a78u;
    // NOP
label_182a7c:
    // 0x182a7c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_182a80:
    if (ctx->pc == 0x182A80u) {
        ctx->pc = 0x182A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A7Cu;
        // 0x182a80: 0x3c03c049  lui         $v1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182A84u;
        goto label_182a84;
    }
    ctx->pc = 0x182A7Cu;
    {
        const bool branch_taken_0x182a7c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x182A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A7Cu;
        // 0x182a80: 0x3c03c049  lui         $v1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a7c) {
            ctx->pc = 0x182A98u;
            goto label_182a98;
        }
    }
    ctx->pc = 0x182A84u;
label_182a84:
    // 0x182a84: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x182a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_182a88:
    // 0x182a88: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x182a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_182a8c:
    // 0x182a8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x182a8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182a90:
    // 0x182a90: 0x1000000d  b           . + 4 + (0xD << 2)
label_182a94:
    if (ctx->pc == 0x182A94u) {
        ctx->pc = 0x182A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A90u;
        // 0x182a94: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x182A98u;
        goto label_182a98;
    }
    ctx->pc = 0x182A90u;
    {
        const bool branch_taken_0x182a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A90u;
        // 0x182a94: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a90) {
            ctx->pc = 0x182AC8u;
            goto label_182ac8;
        }
    }
    ctx->pc = 0x182A98u;
label_182a98:
    // 0x182a98: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x182a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_182a9c:
    // 0x182a9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x182a9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182aa0:
    // 0x182aa0: 0x0  nop
    ctx->pc = 0x182aa0u;
    // NOP
label_182aa4:
    // 0x182aa4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x182aa4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_182aa8:
    // 0x182aa8: 0x0  nop
    ctx->pc = 0x182aa8u;
    // NOP
label_182aac:
    // 0x182aac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_182ab0:
    if (ctx->pc == 0x182AB0u) {
        ctx->pc = 0x182AB4u;
        goto label_182ab4;
    }
    ctx->pc = 0x182AACu;
    {
        const bool branch_taken_0x182aac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182aac) {
            ctx->pc = 0x182AC8u;
            goto label_182ac8;
        }
    }
    ctx->pc = 0x182AB4u;
label_182ab4:
    // 0x182ab4: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x182ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_182ab8:
    // 0x182ab8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x182ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_182abc:
    // 0x182abc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x182abcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182ac0:
    // 0x182ac0: 0x10000001  b           . + 4 + (0x1 << 2)
label_182ac4:
    if (ctx->pc == 0x182AC4u) {
        ctx->pc = 0x182AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182AC0u;
        // 0x182ac4: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x182AC8u;
        goto label_182ac8;
    }
    ctx->pc = 0x182AC0u;
    {
        const bool branch_taken_0x182ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182AC0u;
        // 0x182ac4: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182ac0) {
            ctx->pc = 0x182AC8u;
            goto label_182ac8;
        }
    }
    ctx->pc = 0x182AC8u;
label_182ac8:
    // 0x182ac8: 0x3c03be32  lui         $v1, 0xBE32
    ctx->pc = 0x182ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48690 << 16));
label_182acc:
    // 0x182acc: 0x3463b8c3  ori         $v1, $v1, 0xB8C3
    ctx->pc = 0x182accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47299);
label_182ad0:
    // 0x182ad0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x182ad0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182ad4:
    // 0x182ad4: 0x0  nop
    ctx->pc = 0x182ad4u;
    // NOP
label_182ad8:
    // 0x182ad8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x182ad8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_182adc:
    // 0x182adc: 0x0  nop
    ctx->pc = 0x182adcu;
    // NOP
label_182ae0:
    // 0x182ae0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_182ae4:
    if (ctx->pc == 0x182AE4u) {
        ctx->pc = 0x182AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182AE0u;
        // 0x182ae4: 0x3c033e32  lui         $v1, 0x3E32 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15922 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182AE8u;
        goto label_182ae8;
    }
    ctx->pc = 0x182AE0u;
    {
        const bool branch_taken_0x182ae0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x182AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182AE0u;
        // 0x182ae4: 0x3c033e32  lui         $v1, 0x3E32 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15922 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182ae0) {
            ctx->pc = 0x182B04u;
            goto label_182b04;
        }
    }
    ctx->pc = 0x182AE8u;
label_182ae8:
    // 0x182ae8: 0x3c033e32  lui         $v1, 0x3E32
    ctx->pc = 0x182ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15922 << 16));
label_182aec:
    // 0x182aec: 0x3463b8c3  ori         $v1, $v1, 0xB8C3
    ctx->pc = 0x182aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47299);
label_182af0:
    // 0x182af0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x182af0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182af4:
    // 0x182af4: 0x0  nop
    ctx->pc = 0x182af4u;
    // NOP
label_182af8:
    // 0x182af8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x182af8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_182afc:
    // 0x182afc: 0x1000000c  b           . + 4 + (0xC << 2)
label_182b00:
    if (ctx->pc == 0x182B00u) {
        ctx->pc = 0x182B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182AFCu;
        // 0x182b00: 0xe6400044  swc1        $f0, 0x44($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x182B04u;
        goto label_182b04;
    }
    ctx->pc = 0x182AFCu;
    {
        const bool branch_taken_0x182afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182AFCu;
        // 0x182b00: 0xe6400044  swc1        $f0, 0x44($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x182afc) {
            ctx->pc = 0x182B30u;
            goto label_182b30;
        }
    }
    ctx->pc = 0x182B04u;
label_182b04:
    // 0x182b04: 0x3463b8c3  ori         $v1, $v1, 0xB8C3
    ctx->pc = 0x182b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47299);
label_182b08:
    // 0x182b08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x182b08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182b0c:
    // 0x182b0c: 0x0  nop
    ctx->pc = 0x182b0cu;
    // NOP
label_182b10:
    // 0x182b10: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x182b10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_182b14:
    // 0x182b14: 0x0  nop
    ctx->pc = 0x182b14u;
    // NOP
label_182b18:
    // 0x182b18: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_182b1c:
    if (ctx->pc == 0x182B1Cu) {
        ctx->pc = 0x182B20u;
        goto label_182b20;
    }
    ctx->pc = 0x182B18u;
    {
        const bool branch_taken_0x182b18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x182b18) {
            ctx->pc = 0x182B2Cu;
            goto label_182b2c;
        }
    }
    ctx->pc = 0x182B20u;
label_182b20:
    // 0x182b20: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x182b20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_182b24:
    // 0x182b24: 0x10000002  b           . + 4 + (0x2 << 2)
label_182b28:
    if (ctx->pc == 0x182B28u) {
        ctx->pc = 0x182B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B24u;
        // 0x182b28: 0xe6400044  swc1        $f0, 0x44($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x182B2Cu;
        goto label_182b2c;
    }
    ctx->pc = 0x182B24u;
    {
        const bool branch_taken_0x182b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B24u;
        // 0x182b28: 0xe6400044  swc1        $f0, 0x44($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b24) {
            ctx->pc = 0x182B30u;
            goto label_182b30;
        }
    }
    ctx->pc = 0x182B2Cu;
label_182b2c:
    // 0x182b2c: 0xe6430044  swc1        $f3, 0x44($s2)
    ctx->pc = 0x182b2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
label_182b30:
    // 0x182b30: 0xc6410044  lwc1        $f1, 0x44($s2)
    ctx->pc = 0x182b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_182b34:
    // 0x182b34: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x182b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_182b38:
    // 0x182b38: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x182b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_182b3c:
    // 0x182b3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x182b3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182b40:
    // 0x182b40: 0x0  nop
    ctx->pc = 0x182b40u;
    // NOP
label_182b44:
    // 0x182b44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x182b44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_182b48:
    // 0x182b48: 0x0  nop
    ctx->pc = 0x182b48u;
    // NOP
label_182b4c:
    // 0x182b4c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_182b50:
    if (ctx->pc == 0x182B50u) {
        ctx->pc = 0x182B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B4Cu;
        // 0x182b50: 0x3c03c049  lui         $v1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182B54u;
        goto label_182b54;
    }
    ctx->pc = 0x182B4Cu;
    {
        const bool branch_taken_0x182b4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x182B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B4Cu;
        // 0x182b50: 0x3c03c049  lui         $v1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b4c) {
            ctx->pc = 0x182B68u;
            goto label_182b68;
        }
    }
    ctx->pc = 0x182B54u;
label_182b54:
    // 0x182b54: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x182b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_182b58:
    // 0x182b58: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x182b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_182b5c:
    // 0x182b5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x182b5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182b60:
    // 0x182b60: 0x1000000d  b           . + 4 + (0xD << 2)
label_182b64:
    if (ctx->pc == 0x182B64u) {
        ctx->pc = 0x182B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B60u;
        // 0x182b64: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x182B68u;
        goto label_182b68;
    }
    ctx->pc = 0x182B60u;
    {
        const bool branch_taken_0x182b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B60u;
        // 0x182b64: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b60) {
            ctx->pc = 0x182B98u;
            goto label_182b98;
        }
    }
    ctx->pc = 0x182B68u;
label_182b68:
    // 0x182b68: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x182b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_182b6c:
    // 0x182b6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x182b6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182b70:
    // 0x182b70: 0x0  nop
    ctx->pc = 0x182b70u;
    // NOP
label_182b74:
    // 0x182b74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x182b74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_182b78:
    // 0x182b78: 0x0  nop
    ctx->pc = 0x182b78u;
    // NOP
label_182b7c:
    // 0x182b7c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_182b80:
    if (ctx->pc == 0x182B80u) {
        ctx->pc = 0x182B84u;
        goto label_182b84;
    }
    ctx->pc = 0x182B7Cu;
    {
        const bool branch_taken_0x182b7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182b7c) {
            ctx->pc = 0x182B98u;
            goto label_182b98;
        }
    }
    ctx->pc = 0x182B84u;
label_182b84:
    // 0x182b84: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x182b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_182b88:
    // 0x182b88: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x182b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_182b8c:
    // 0x182b8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x182b8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182b90:
    // 0x182b90: 0x10000001  b           . + 4 + (0x1 << 2)
label_182b94:
    if (ctx->pc == 0x182B94u) {
        ctx->pc = 0x182B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B90u;
        // 0x182b94: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x182B98u;
        goto label_182b98;
    }
    ctx->pc = 0x182B90u;
    {
        const bool branch_taken_0x182b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B90u;
        // 0x182b94: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b90) {
            ctx->pc = 0x182B98u;
            goto label_182b98;
        }
    }
    ctx->pc = 0x182B98u;
label_182b98:
    // 0x182b98: 0x10000001  b           . + 4 + (0x1 << 2)
label_182b9c:
    if (ctx->pc == 0x182B9Cu) {
        ctx->pc = 0x182B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B98u;
        // 0x182b9c: 0xe6410044  swc1        $f1, 0x44($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x182BA0u;
        goto label_182ba0;
    }
    ctx->pc = 0x182B98u;
    {
        const bool branch_taken_0x182b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B98u;
        // 0x182b9c: 0xe6410044  swc1        $f1, 0x44($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b98) {
            ctx->pc = 0x182BA0u;
            goto label_182ba0;
        }
    }
    ctx->pc = 0x182BA0u;
label_182ba0:
    // 0x182ba0: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_182ba4:
    if (ctx->pc == 0x182BA4u) {
        ctx->pc = 0x182BA8u;
        goto label_182ba8;
    }
    ctx->pc = 0x182BA0u;
    {
        const bool branch_taken_0x182ba0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x182ba0) {
            ctx->pc = 0x182BB4u;
            goto label_182bb4;
        }
    }
    ctx->pc = 0x182BA8u;
label_182ba8:
    // 0x182ba8: 0x8243023d  lb          $v1, 0x23D($s2)
    ctx->pc = 0x182ba8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 573)));
label_182bac:
    // 0x182bac: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x182bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
label_182bb0:
    // 0x182bb0: 0xa243023d  sb          $v1, 0x23D($s2)
    ctx->pc = 0x182bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 573), (uint8_t)GPR_U32(ctx, 3));
label_182bb4:
    // 0x182bb4: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x182bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_182bb8:
    // 0x182bb8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x182bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_182bbc:
    // 0x182bbc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x182bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_182bc0:
    // 0x182bc0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x182bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_182bc4:
    // 0x182bc4: 0x1060004f  beqz        $v1, . + 4 + (0x4F << 2)
label_182bc8:
    if (ctx->pc == 0x182BC8u) {
        ctx->pc = 0x182BCCu;
        goto label_182bcc;
    }
    ctx->pc = 0x182BC4u;
    {
        const bool branch_taken_0x182bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x182bc4) {
            ctx->pc = 0x182D04u;
            goto label_182d04;
        }
    }
    ctx->pc = 0x182BCCu;
label_182bcc:
    // 0x182bcc: 0x92440237  lbu         $a0, 0x237($s2)
    ctx->pc = 0x182bccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 567)));
label_182bd0:
    // 0x182bd0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_182bd4:
    if (ctx->pc == 0x182BD4u) {
        ctx->pc = 0x182BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182BD0u;
        // 0x182bd4: 0x2483fffe  addiu       $v1, $a0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182BD8u;
        goto label_182bd8;
    }
    ctx->pc = 0x182BD0u;
    {
        const bool branch_taken_0x182bd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x182BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182BD0u;
        // 0x182bd4: 0x2483fffe  addiu       $v1, $a0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182bd0) {
            ctx->pc = 0x182BF0u;
            goto label_182bf0;
        }
    }
    ctx->pc = 0x182BD8u;
label_182bd8:
    // 0x182bd8: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x182bd8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_182bdc:
    // 0x182bdc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_182be0:
    if (ctx->pc == 0x182BE0u) {
        ctx->pc = 0x182BE4u;
        goto label_182be4;
    }
    ctx->pc = 0x182BDCu;
    {
        const bool branch_taken_0x182bdc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x182bdc) {
            ctx->pc = 0x182BF0u;
            goto label_182bf0;
        }
    }
    ctx->pc = 0x182BE4u;
label_182be4:
    // 0x182be4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x182be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_182be8:
    // 0x182be8: 0x14830046  bne         $a0, $v1, . + 4 + (0x46 << 2)
label_182bec:
    if (ctx->pc == 0x182BECu) {
        ctx->pc = 0x182BF0u;
        goto label_182bf0;
    }
    ctx->pc = 0x182BE8u;
    {
        const bool branch_taken_0x182be8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x182be8) {
            ctx->pc = 0x182D04u;
            goto label_182d04;
        }
    }
    ctx->pc = 0x182BF0u;
label_182bf0:
    // 0x182bf0: 0x92420233  lbu         $v0, 0x233($s2)
    ctx->pc = 0x182bf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 563)));
label_182bf4:
    // 0x182bf4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_182bf8:
    if (ctx->pc == 0x182BF8u) {
        ctx->pc = 0x182BFCu;
        goto label_182bfc;
    }
    ctx->pc = 0x182BF4u;
    {
        const bool branch_taken_0x182bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182bf4) {
            ctx->pc = 0x182C10u;
            goto label_182c10;
        }
    }
    ctx->pc = 0x182BFCu;
label_182bfc:
    // 0x182bfc: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x182bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_182c00:
    // 0x182c00: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x182c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_182c04:
    // 0x182c04: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x182c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_182c08:
    // 0x182c08: 0x10000005  b           . + 4 + (0x5 << 2)
label_182c0c:
    if (ctx->pc == 0x182C0Cu) {
        ctx->pc = 0x182C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C08u;
        // 0x182c0c: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x182C10u;
        goto label_182c10;
    }
    ctx->pc = 0x182C08u;
    {
        const bool branch_taken_0x182c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C08u;
        // 0x182c0c: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c08) {
            ctx->pc = 0x182C20u;
            goto label_182c20;
        }
    }
    ctx->pc = 0x182C10u;
label_182c10:
    // 0x182c10: 0xc6400210  lwc1        $f0, 0x210($s2)
    ctx->pc = 0x182c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_182c14:
    // 0x182c14: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x182c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_182c18:
    // 0x182c18: 0xc6400214  lwc1        $f0, 0x214($s2)
    ctx->pc = 0x182c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_182c1c:
    // 0x182c1c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x182c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_182c20:
    // 0x182c20: 0x92220020  lbu         $v0, 0x20($s1)
    ctx->pc = 0x182c20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
label_182c24:
    // 0x182c24: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_182c28:
    if (ctx->pc == 0x182C28u) {
        ctx->pc = 0x182C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C24u;
        // 0x182c28: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182C2Cu;
        goto label_182c2c;
    }
    ctx->pc = 0x182C24u;
    {
        const bool branch_taken_0x182c24 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x182C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C24u;
        // 0x182c28: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c24) {
            ctx->pc = 0x182C38u;
            goto label_182c38;
        }
    }
    ctx->pc = 0x182C2Cu;
label_182c2c:
    // 0x182c2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x182c2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182c30:
    // 0x182c30: 0x10000007  b           . + 4 + (0x7 << 2)
label_182c34:
    if (ctx->pc == 0x182C34u) {
        ctx->pc = 0x182C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C30u;
        // 0x182c34: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x182C38u;
        goto label_182c38;
    }
    ctx->pc = 0x182C30u;
    {
        const bool branch_taken_0x182c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C30u;
        // 0x182c34: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c30) {
            ctx->pc = 0x182C50u;
            goto label_182c50;
        }
    }
    ctx->pc = 0x182C38u;
label_182c38:
    // 0x182c38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x182c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_182c3c:
    // 0x182c3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x182c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_182c40:
    // 0x182c40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x182c40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182c44:
    // 0x182c44: 0x0  nop
    ctx->pc = 0x182c44u;
    // NOP
label_182c48:
    // 0x182c48: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x182c48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_182c4c:
    // 0x182c4c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x182c4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_182c50:
    // 0x182c50: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x182c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
label_182c54:
    // 0x182c54: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x182c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_182c58:
    // 0x182c58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x182c58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182c5c:
    // 0x182c5c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x182c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_182c60:
    // 0x182c60: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x182c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_182c64:
    // 0x182c64: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x182c64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_182c68:
    // 0x182c68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x182c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_182c6c:
    // 0x182c6c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x182c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_182c70:
    // 0x182c70: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x182c70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_182c74:
    // 0x182c74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x182c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182c78:
    // 0x182c78: 0x0  nop
    ctx->pc = 0x182c78u;
    // NOP
label_182c7c:
    // 0x182c7c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x182c7cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_182c80:
    // 0x182c80: 0x0  nop
    ctx->pc = 0x182c80u;
    // NOP
label_182c84:
    // 0x182c84: 0x0  nop
    ctx->pc = 0x182c84u;
    // NOP
label_182c88:
    // 0x182c88: 0x46026036  c.le.s      $f12, $f2
    ctx->pc = 0x182c88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_182c8c:
    // 0x182c8c: 0x0  nop
    ctx->pc = 0x182c8cu;
    // NOP
label_182c90:
    // 0x182c90: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_182c94:
    if (ctx->pc == 0x182C94u) {
        ctx->pc = 0x182C98u;
        goto label_182c98;
    }
    ctx->pc = 0x182C90u;
    {
        const bool branch_taken_0x182c90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182c90) {
            ctx->pc = 0x182C9Cu;
            goto label_182c9c;
        }
    }
    ctx->pc = 0x182C98u;
label_182c98:
    // 0x182c98: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x182c98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_182c9c:
    // 0x182c9c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_182ca0:
    if (ctx->pc == 0x182CA0u) {
        ctx->pc = 0x182CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C9Cu;
        // 0x182ca0: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182CA4u;
        goto label_182ca4;
    }
    ctx->pc = 0x182C9Cu;
    {
        const bool branch_taken_0x182c9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x182CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C9Cu;
        // 0x182ca0: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c9c) {
            ctx->pc = 0x182CB8u;
            goto label_182cb8;
        }
    }
    ctx->pc = 0x182CA4u;
label_182ca4:
    // 0x182ca4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x182ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_182ca8:
    // 0x182ca8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x182ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_182cac:
    // 0x182cac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x182cacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182cb0:
    // 0x182cb0: 0x1000000d  b           . + 4 + (0xD << 2)
label_182cb4:
    if (ctx->pc == 0x182CB4u) {
        ctx->pc = 0x182CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182CB0u;
        // 0x182cb4: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x182CB8u;
        goto label_182cb8;
    }
    ctx->pc = 0x182CB0u;
    {
        const bool branch_taken_0x182cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182CB0u;
        // 0x182cb4: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182cb0) {
            ctx->pc = 0x182CE8u;
            goto label_182ce8;
        }
    }
    ctx->pc = 0x182CB8u;
label_182cb8:
    // 0x182cb8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x182cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_182cbc:
    // 0x182cbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x182cbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182cc0:
    // 0x182cc0: 0x0  nop
    ctx->pc = 0x182cc0u;
    // NOP
label_182cc4:
    // 0x182cc4: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x182cc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_182cc8:
    // 0x182cc8: 0x0  nop
    ctx->pc = 0x182cc8u;
    // NOP
label_182ccc:
    // 0x182ccc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_182cd0:
    if (ctx->pc == 0x182CD0u) {
        ctx->pc = 0x182CD4u;
        goto label_182cd4;
    }
    ctx->pc = 0x182CCCu;
    {
        const bool branch_taken_0x182ccc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182ccc) {
            ctx->pc = 0x182CE8u;
            goto label_182ce8;
        }
    }
    ctx->pc = 0x182CD4u;
label_182cd4:
    // 0x182cd4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x182cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_182cd8:
    // 0x182cd8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x182cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_182cdc:
    // 0x182cdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x182cdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182ce0:
    // 0x182ce0: 0x10000001  b           . + 4 + (0x1 << 2)
label_182ce4:
    if (ctx->pc == 0x182CE4u) {
        ctx->pc = 0x182CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182CE0u;
        // 0x182ce4: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x182CE8u;
        goto label_182ce8;
    }
    ctx->pc = 0x182CE0u;
    {
        const bool branch_taken_0x182ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182CE0u;
        // 0x182ce4: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182ce0) {
            ctx->pc = 0x182CE8u;
            goto label_182ce8;
        }
    }
    ctx->pc = 0x182CE8u;
label_182ce8:
    // 0x182ce8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x182ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_182cec:
    // 0x182cec: 0xc0625b8  jal         func_1896E0
label_182cf0:
    if (ctx->pc == 0x182CF0u) {
        ctx->pc = 0x182CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182CECu;
        // 0x182cf0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182CF4u;
        goto label_182cf4;
    }
    ctx->pc = 0x182CECu;
    SET_GPR_U32(ctx, 31, 0x182CF4u);
    ctx->pc = 0x182CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182CECu;
    // 0x182cf0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1896E0u;
    { ctx->pc = 0x1896e0; return; }
    ctx->pc = 0x182CF4u;
label_182cf4:
    // 0x182cf4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_182cf8:
    if (ctx->pc == 0x182CF8u) {
        ctx->pc = 0x182CFCu;
        goto label_182cfc;
    }
    ctx->pc = 0x182CF4u;
    {
        const bool branch_taken_0x182cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x182cf4) {
            ctx->pc = 0x182D04u;
            goto label_182d04;
        }
    }
    ctx->pc = 0x182CFCu;
label_182cfc:
    // 0x182cfc: 0xa640019e  sh          $zero, 0x19E($s2)
    ctx->pc = 0x182cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 0));
label_182d00:
    // 0x182d00: 0xa640019c  sh          $zero, 0x19C($s2)
    ctx->pc = 0x182d00u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 0));
label_182d04:
    // 0x182d04: 0x8e450194  lw          $a1, 0x194($s2)
    ctx->pc = 0x182d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_182d08:
    // 0x182d08: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x182d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_182d0c:
    // 0x182d0c: 0x34646050  ori         $a0, $v1, 0x6050
    ctx->pc = 0x182d0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24656);
label_182d10:
    // 0x182d10: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x182d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_182d14:
    // 0x182d14: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x182d14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_182d18:
    // 0x182d18: 0xae440194  sw          $a0, 0x194($s2)
    ctx->pc = 0x182d18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 4));
label_182d1c:
    // 0x182d1c: 0x8644003c  lh          $a0, 0x3C($s2)
    ctx->pc = 0x182d1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
label_182d20:
    // 0x182d20: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_182d24:
    if (ctx->pc == 0x182D24u) {
        ctx->pc = 0x182D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182D20u;
        // 0x182d24: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182D28u;
        goto label_182d28;
    }
    ctx->pc = 0x182D20u;
    {
        const bool branch_taken_0x182d20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x182D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182D20u;
        // 0x182d24: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182d20) {
            ctx->pc = 0x182D4Cu;
            goto label_182d4c;
        }
    }
    ctx->pc = 0x182D28u;
label_182d28:
    // 0x182d28: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
label_182d2c:
    if (ctx->pc == 0x182D2Cu) {
        ctx->pc = 0x182D30u;
        goto label_182d30;
    }
    ctx->pc = 0x182D28u;
    {
        const bool branch_taken_0x182d28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x182d28) {
            ctx->pc = 0x182D58u;
            goto label_182d58;
        }
    }
    ctx->pc = 0x182D30u;
label_182d30:
    // 0x182d30: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x182d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_182d34:
    // 0x182d34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x182d34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182d38:
    // 0x182d38: 0x0  nop
    ctx->pc = 0x182d38u;
    // NOP
label_182d3c:
    // 0x182d3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x182d3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_182d40:
    // 0x182d40: 0x0  nop
    ctx->pc = 0x182d40u;
    // NOP
label_182d44:
    // 0x182d44: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_182d48:
    if (ctx->pc == 0x182D48u) {
        ctx->pc = 0x182D4Cu;
        goto label_182d4c;
    }
    ctx->pc = 0x182D44u;
    {
        const bool branch_taken_0x182d44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182d44) {
            ctx->pc = 0x182D58u;
            goto label_182d58;
        }
    }
    ctx->pc = 0x182D4Cu;
label_182d4c:
    // 0x182d4c: 0x8e430194  lw          $v1, 0x194($s2)
    ctx->pc = 0x182d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_182d50:
    // 0x182d50: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x182d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_182d54:
    // 0x182d54: 0xae430194  sw          $v1, 0x194($s2)
    ctx->pc = 0x182d54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
label_182d58:
    // 0x182d58: 0x92440236  lbu         $a0, 0x236($s2)
    ctx->pc = 0x182d58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 566)));
label_182d5c:
    // 0x182d5c: 0x2881004a  slti        $at, $a0, 0x4A
    ctx->pc = 0x182d5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)74) ? 1 : 0);
label_182d60:
    // 0x182d60: 0x1020004c  beqz        $at, . + 4 + (0x4C << 2)
label_182d64:
    if (ctx->pc == 0x182D64u) {
        ctx->pc = 0x182D68u;
        goto label_182d68;
    }
    ctx->pc = 0x182D60u;
    {
        const bool branch_taken_0x182d60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x182d60) {
            ctx->pc = 0x182E94u;
            goto label_182e94;
        }
    }
    ctx->pc = 0x182D68u;
label_182d68:
    // 0x182d68: 0x92430235  lbu         $v1, 0x235($s2)
    ctx->pc = 0x182d68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 565)));
label_182d6c:
    // 0x182d6c: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x182d6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_182d70:
    // 0x182d70: 0x10200048  beqz        $at, . + 4 + (0x48 << 2)
label_182d74:
    if (ctx->pc == 0x182D74u) {
        ctx->pc = 0x182D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182D70u;
        // 0x182d74: 0x308500ff  andi        $a1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x182D78u;
        goto label_182d78;
    }
    ctx->pc = 0x182D70u;
    {
        const bool branch_taken_0x182d70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x182D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182D70u;
        // 0x182d74: 0x308500ff  andi        $a1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182d70) {
            ctx->pc = 0x182E94u;
            goto label_182e94;
        }
    }
    ctx->pc = 0x182D78u;
label_182d78:
    // 0x182d78: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x182d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_182d7c:
    // 0x182d7c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x182d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_182d80:
    // 0x182d80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x182d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_182d84:
    // 0x182d84: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x182d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_182d88:
    // 0x182d88: 0x8f8484e0  lw          $a0, -0x7B20($gp)
    ctx->pc = 0x182d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_182d8c:
    // 0x182d8c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x182d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_182d90:
    // 0x182d90: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x182d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_182d94:
    // 0x182d94: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x182d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_182d98:
    // 0x182d98: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x182d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_182d9c:
    // 0x182d9c: 0x1080003d  beqz        $a0, . + 4 + (0x3D << 2)
label_182da0:
    if (ctx->pc == 0x182DA0u) {
        ctx->pc = 0x182DA4u;
        goto label_182da4;
    }
    ctx->pc = 0x182D9Cu;
    {
        const bool branch_taken_0x182d9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x182d9c) {
            ctx->pc = 0x182E94u;
            goto label_182e94;
        }
    }
    ctx->pc = 0x182DA4u;
label_182da4:
    // 0x182da4: 0x9083022f  lbu         $v1, 0x22F($a0)
    ctx->pc = 0x182da4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 559)));
label_182da8:
    // 0x182da8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x182da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_182dac:
    // 0x182dac: 0x10000039  b           . + 4 + (0x39 << 2)
label_182db0:
    if (ctx->pc == 0x182DB0u) {
        ctx->pc = 0x182DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182DACu;
        // 0x182db0: 0xa083022f  sb          $v1, 0x22F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 559), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182DB4u;
        goto label_182db4;
    }
    ctx->pc = 0x182DACu;
    {
        const bool branch_taken_0x182dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182DACu;
        // 0x182db0: 0xa083022f  sb          $v1, 0x22F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 559), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182dac) {
            ctx->pc = 0x182E94u;
            goto label_182e94;
        }
    }
    ctx->pc = 0x182DB4u;
label_182db4:
    // 0x182db4: 0xc6400150  lwc1        $f0, 0x150($s2)
    ctx->pc = 0x182db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_182db8:
    // 0x182db8: 0x3c0368db  lui         $v1, 0x68DB
    ctx->pc = 0x182db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26843 << 16));
label_182dbc:
    // 0x182dbc: 0x34678bad  ori         $a3, $v1, 0x8BAD
    ctx->pc = 0x182dbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)35757);
label_182dc0:
    // 0x182dc0: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x182dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
label_182dc4:
    // 0x182dc4: 0x34664dd3  ori         $a2, $v1, 0x4DD3
    ctx->pc = 0x182dc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
label_182dc8:
    // 0x182dc8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x182dc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_182dcc:
    // 0x182dcc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x182dccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_182dd0:
    // 0x182dd0: 0x0  nop
    ctx->pc = 0x182dd0u;
    // NOP
label_182dd4:
    // 0x182dd4: 0xe30018  mult        $zero, $a3, $v1
    ctx->pc = 0x182dd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_182dd8:
    // 0x182dd8: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x182dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_182ddc:
    // 0x182ddc: 0x0  nop
    ctx->pc = 0x182ddcu;
    // NOP
label_182de0:
    // 0x182de0: 0x1810  mfhi        $v1
    ctx->pc = 0x182de0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_182de4:
    // 0x182de4: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x182de4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_182de8:
    // 0x182de8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x182de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_182dec:
    // 0x182dec: 0xa2430218  sb          $v1, 0x218($s2)
    ctx->pc = 0x182decu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 536), (uint8_t)GPR_U32(ctx, 3));
label_182df0:
    // 0x182df0: 0xc6400158  lwc1        $f0, 0x158($s2)
    ctx->pc = 0x182df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_182df4:
    // 0x182df4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x182df4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_182df8:
    // 0x182df8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x182df8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_182dfc:
    // 0x182dfc: 0x0  nop
    ctx->pc = 0x182dfcu;
    // NOP
label_182e00:
    // 0x182e00: 0xe30018  mult        $zero, $a3, $v1
    ctx->pc = 0x182e00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_182e04:
    // 0x182e04: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x182e04u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_182e08:
    // 0x182e08: 0x0  nop
    ctx->pc = 0x182e08u;
    // NOP
label_182e0c:
    // 0x182e0c: 0x1810  mfhi        $v1
    ctx->pc = 0x182e0cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_182e10:
    // 0x182e10: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x182e10u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_182e14:
    // 0x182e14: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x182e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_182e18:
    // 0x182e18: 0xa2430219  sb          $v1, 0x219($s2)
    ctx->pc = 0x182e18u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 537), (uint8_t)GPR_U32(ctx, 3));
label_182e1c:
    // 0x182e1c: 0xc6400150  lwc1        $f0, 0x150($s2)
    ctx->pc = 0x182e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_182e20:
    // 0x182e20: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x182e20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_182e24:
    // 0x182e24: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x182e24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_182e28:
    // 0x182e28: 0x0  nop
    ctx->pc = 0x182e28u;
    // NOP
label_182e2c:
    // 0x182e2c: 0xc30018  mult        $zero, $a2, $v1
    ctx->pc = 0x182e2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_182e30:
    // 0x182e30: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x182e30u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_182e34:
    // 0x182e34: 0x0  nop
    ctx->pc = 0x182e34u;
    // NOP
label_182e38:
    // 0x182e38: 0x1810  mfhi        $v1
    ctx->pc = 0x182e38u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_182e3c:
    // 0x182e3c: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x182e3cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_182e40:
    // 0x182e40: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x182e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_182e44:
    // 0x182e44: 0xa243021a  sb          $v1, 0x21A($s2)
    ctx->pc = 0x182e44u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 538), (uint8_t)GPR_U32(ctx, 3));
label_182e48:
    // 0x182e48: 0xc6400158  lwc1        $f0, 0x158($s2)
    ctx->pc = 0x182e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_182e4c:
    // 0x182e4c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x182e4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_182e50:
    // 0x182e50: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x182e50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_182e54:
    // 0x182e54: 0x0  nop
    ctx->pc = 0x182e54u;
    // NOP
label_182e58:
    // 0x182e58: 0xc30018  mult        $zero, $a2, $v1
    ctx->pc = 0x182e58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_182e5c:
    // 0x182e5c: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x182e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_182e60:
    // 0x182e60: 0x0  nop
    ctx->pc = 0x182e60u;
    // NOP
label_182e64:
    // 0x182e64: 0x1810  mfhi        $v1
    ctx->pc = 0x182e64u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_182e68:
    // 0x182e68: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x182e68u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_182e6c:
    // 0x182e6c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x182e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_182e70:
    // 0x182e70: 0xa243021b  sb          $v1, 0x21B($s2)
    ctx->pc = 0x182e70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 539), (uint8_t)GPR_U32(ctx, 3));
label_182e74:
    // 0x182e74: 0xa640019c  sh          $zero, 0x19C($s2)
    ctx->pc = 0x182e74u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 0));
label_182e78:
    // 0x182e78: 0xa640019e  sh          $zero, 0x19E($s2)
    ctx->pc = 0x182e78u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 0));
label_182e7c:
    // 0x182e7c: 0xae400194  sw          $zero, 0x194($s2)
    ctx->pc = 0x182e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 0));
label_182e80:
    // 0x182e80: 0x9243023b  lbu         $v1, 0x23B($s2)
    ctx->pc = 0x182e80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 571)));
label_182e84:
    // 0x182e84: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_182e88:
    if (ctx->pc == 0x182E88u) {
        ctx->pc = 0x182E8Cu;
        goto label_182e8c;
    }
    ctx->pc = 0x182E84u;
    {
        const bool branch_taken_0x182e84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x182e84) {
            ctx->pc = 0x182E94u;
            goto label_182e94;
        }
    }
    ctx->pc = 0x182E8Cu;
label_182e8c:
    // 0x182e8c: 0xc045a10  jal         func_116840
label_182e90:
    if (ctx->pc == 0x182E90u) {
        ctx->pc = 0x182E94u;
        goto label_182e94;
    }
    ctx->pc = 0x182E8Cu;
    SET_GPR_U32(ctx, 31, 0x182E94u);
    ctx->pc = 0x116840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116840u, 0x182E8Cu, 0x182E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182E94u;
label_182e94:
    // 0x182e94: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x182e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_182e98:
    // 0x182e98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x182e98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_182e9c:
    // 0x182e9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x182e9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_182ea0:
    // 0x182ea0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182ea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_182ea4:
    // 0x182ea4: 0x3e00008  jr          $ra
label_182ea8:
    if (ctx->pc == 0x182EA8u) {
        ctx->pc = 0x182EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182EA4u;
        // 0x182ea8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182EACu;
        goto label_182eac;
    }
    ctx->pc = 0x182EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182EA4u;
        // 0x182ea8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182EACu;
label_182eac:
    // 0x182eac: 0x0  nop
    ctx->pc = 0x182eacu;
    // NOP
label_182eb0:
    // 0x182eb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x182eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_182eb4:
    // 0x182eb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x182eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_182eb8:
    // 0x182eb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x182eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_182ebc:
    // 0x182ebc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_182ec0:
    // 0x182ec0: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x182ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_182ec4:
    // 0x182ec4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x182ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_182ec8:
    // 0x182ec8: 0x90830219  lbu         $v1, 0x219($a0)
    ctx->pc = 0x182ec8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 537)));
label_182ecc:
    // 0x182ecc: 0x90850218  lbu         $a1, 0x218($a0)
    ctx->pc = 0x182eccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 536)));
label_182ed0:
    // 0x182ed0: 0x90c70218  lbu         $a3, 0x218($a2)
    ctx->pc = 0x182ed0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 536)));
label_182ed4:
    // 0x182ed4: 0x90c40219  lbu         $a0, 0x219($a2)
    ctx->pc = 0x182ed4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 537)));
label_182ed8:
    // 0x182ed8: 0xe52823  subu        $a1, $a3, $a1
    ctx->pc = 0x182ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_182edc:
    // 0x182edc: 0x833823  subu        $a3, $a0, $v1
    ctx->pc = 0x182edcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_182ee0:
    // 0x182ee0: 0xa0202a  slt         $a0, $a1, $zero
    ctx->pc = 0x182ee0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_182ee4:
    // 0x182ee4: 0x51822  neg         $v1, $a1
    ctx->pc = 0x182ee4u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 5), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_182ee8:
    // 0x182ee8: 0xa4180a  movz        $v1, $a1, $a0
    ctx->pc = 0x182ee8u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
label_182eec:
    // 0x182eec: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x182eecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_182ef0:
    // 0x182ef0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_182ef4:
    if (ctx->pc == 0x182EF4u) {
        ctx->pc = 0x182EF8u;
        goto label_182ef8;
    }
    ctx->pc = 0x182EF0u;
    {
        const bool branch_taken_0x182ef0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x182ef0) {
            ctx->pc = 0x182F10u;
            goto label_182f10;
        }
    }
    ctx->pc = 0x182EF8u;
label_182ef8:
    // 0x182ef8: 0xe0202a  slt         $a0, $a3, $zero
    ctx->pc = 0x182ef8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_182efc:
    // 0x182efc: 0x71822  neg         $v1, $a3
    ctx->pc = 0x182efcu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 7), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_182f00:
    // 0x182f00: 0xe4180a  movz        $v1, $a3, $a0
    ctx->pc = 0x182f00u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
label_182f04:
    // 0x182f04: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x182f04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_182f08:
    // 0x182f08: 0x1420003d  bnez        $at, . + 4 + (0x3D << 2)
label_182f0c:
    if (ctx->pc == 0x182F0Cu) {
        ctx->pc = 0x182F10u;
        goto label_182f10;
    }
    ctx->pc = 0x182F08u;
    {
        const bool branch_taken_0x182f08 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x182f08) {
            ctx->pc = 0x183000u;
            { ctx->pc = 0x183000; return; }
        }
    }
    ctx->pc = 0x182F10u;
label_182f10:
    // 0x182f10: 0x18a00004  blez        $a1, . + 4 + (0x4 << 2)
label_182f14:
    if (ctx->pc == 0x182F14u) {
        ctx->pc = 0x182F18u;
        goto label_182f18;
    }
    ctx->pc = 0x182F10u;
    {
        const bool branch_taken_0x182f10 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x182f10) {
            ctx->pc = 0x182F24u;
            goto label_182f24;
        }
    }
    ctx->pc = 0x182F18u;
label_182f18:
    // 0x182f18: 0x90c20218  lbu         $v0, 0x218($a2)
    ctx->pc = 0x182f18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 536)));
label_182f1c:
    // 0x182f1c: 0x10000008  b           . + 4 + (0x8 << 2)
label_182f20:
    if (ctx->pc == 0x182F20u) {
        ctx->pc = 0x182F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182F1Cu;
        // 0x182f20: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182F24u;
        goto label_182f24;
    }
    ctx->pc = 0x182F1Cu;
    {
        const bool branch_taken_0x182f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182F1Cu;
        // 0x182f20: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182f1c) {
            ctx->pc = 0x182F40u;
            goto label_182f40;
        }
    }
    ctx->pc = 0x182F24u;
label_182f24:
    // 0x182f24: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
label_182f28:
    if (ctx->pc == 0x182F28u) {
        ctx->pc = 0x182F2Cu;
        goto label_182f2c;
    }
    ctx->pc = 0x182F24u;
    {
        const bool branch_taken_0x182f24 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x182f24) {
            ctx->pc = 0x182F38u;
            goto label_182f38;
        }
    }
    ctx->pc = 0x182F2Cu;
label_182f2c:
    // 0x182f2c: 0x90c20218  lbu         $v0, 0x218($a2)
    ctx->pc = 0x182f2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 536)));
label_182f30:
    // 0x182f30: 0x10000003  b           . + 4 + (0x3 << 2)
label_182f34:
    if (ctx->pc == 0x182F34u) {
        ctx->pc = 0x182F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182F30u;
        // 0x182f34: 0x24430001  addiu       $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182F38u;
        goto label_182f38;
    }
    ctx->pc = 0x182F30u;
    {
        const bool branch_taken_0x182f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182F30u;
        // 0x182f34: 0x24430001  addiu       $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182f30) {
            ctx->pc = 0x182F40u;
            goto label_182f40;
        }
    }
    ctx->pc = 0x182F38u;
label_182f38:
    // 0x182f38: 0x90c30218  lbu         $v1, 0x218($a2)
    ctx->pc = 0x182f38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 536)));
label_182f3c:
    // 0x182f3c: 0x0  nop
    ctx->pc = 0x182f3cu;
    // NOP
label_182f40:
    // 0x182f40: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
label_182f44:
    if (ctx->pc == 0x182F44u) {
        ctx->pc = 0x182F48u;
        goto label_182f48;
    }
    ctx->pc = 0x182F40u;
    {
        const bool branch_taken_0x182f40 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x182f40) {
            ctx->pc = 0x182F54u;
            goto label_182f54;
        }
    }
    ctx->pc = 0x182F48u;
label_182f48:
    // 0x182f48: 0x90c20219  lbu         $v0, 0x219($a2)
    ctx->pc = 0x182f48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 537)));
label_182f4c:
    // 0x182f4c: 0x10000008  b           . + 4 + (0x8 << 2)
label_182f50:
    if (ctx->pc == 0x182F50u) {
        ctx->pc = 0x182F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182F4Cu;
        // 0x182f50: 0x2447ffff  addiu       $a3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182F54u;
        goto label_182f54;
    }
    ctx->pc = 0x182F4Cu;
    {
        const bool branch_taken_0x182f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182F4Cu;
        // 0x182f50: 0x2447ffff  addiu       $a3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182f4c) {
            ctx->pc = 0x182F70u;
            goto label_182f70;
        }
    }
    ctx->pc = 0x182F54u;
label_182f54:
    // 0x182f54: 0x4e10004  bgez        $a3, . + 4 + (0x4 << 2)
label_182f58:
    if (ctx->pc == 0x182F58u) {
        ctx->pc = 0x182F5Cu;
        goto label_182f5c;
    }
    ctx->pc = 0x182F54u;
    {
        const bool branch_taken_0x182f54 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x182f54) {
            ctx->pc = 0x182F68u;
            goto label_182f68;
        }
    }
    ctx->pc = 0x182F5Cu;
label_182f5c:
    // 0x182f5c: 0x90c20219  lbu         $v0, 0x219($a2)
    ctx->pc = 0x182f5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 537)));
label_182f60:
    // 0x182f60: 0x10000003  b           . + 4 + (0x3 << 2)
label_182f64:
    if (ctx->pc == 0x182F64u) {
        ctx->pc = 0x182F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182F60u;
        // 0x182f64: 0x24470001  addiu       $a3, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182F68u;
        goto label_182f68;
    }
    ctx->pc = 0x182F60u;
    {
        const bool branch_taken_0x182f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182F60u;
        // 0x182f64: 0x24470001  addiu       $a3, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182f60) {
            ctx->pc = 0x182F70u;
            goto label_182f70;
        }
    }
    ctx->pc = 0x182F68u;
label_182f68:
    // 0x182f68: 0x90c70219  lbu         $a3, 0x219($a2)
    ctx->pc = 0x182f68u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 537)));
label_182f6c:
    // 0x182f6c: 0x0  nop
    ctx->pc = 0x182f6cu;
    // NOP
label_182f70:
    // 0x182f70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x182f70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182f74:
    // 0x182f74: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x182f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
label_182f78:
    // 0x182f78: 0x27b1003c  addiu       $s1, $sp, 0x3C
    ctx->pc = 0x182f78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_182f7c:
    // 0x182f7c: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x182f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_182f80:
    // 0x182f80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x182f80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_182f84:
    // 0x182f84: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x182f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_182f88:
    // 0x182f88: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x182f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
label_182f8c:
    // 0x182f8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x182f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x182f90u;
    return;
}

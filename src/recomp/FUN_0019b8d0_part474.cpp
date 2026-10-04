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

// Function: FUN_0019b8d0
// Address: 0x19b8d0 - 0x29b8d8
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b8d0_part474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x282820u: goto label_282820;
        case 0x282824u: goto label_282824;
        case 0x282828u: goto label_282828;
        case 0x28282cu: goto label_28282c;
        case 0x282830u: goto label_282830;
        case 0x282834u: goto label_282834;
        case 0x282838u: goto label_282838;
        case 0x28283cu: goto label_28283c;
        case 0x282840u: goto label_282840;
        case 0x282844u: goto label_282844;
        case 0x282848u: goto label_282848;
        case 0x28284cu: goto label_28284c;
        case 0x282850u: goto label_282850;
        case 0x282854u: goto label_282854;
        case 0x282858u: goto label_282858;
        case 0x28285cu: goto label_28285c;
        case 0x282860u: goto label_282860;
        case 0x282864u: goto label_282864;
        case 0x282868u: goto label_282868;
        case 0x28286cu: goto label_28286c;
        case 0x282870u: goto label_282870;
        case 0x282874u: goto label_282874;
        case 0x282878u: goto label_282878;
        case 0x28287cu: goto label_28287c;
        case 0x282880u: goto label_282880;
        case 0x282884u: goto label_282884;
        case 0x282888u: goto label_282888;
        case 0x28288cu: goto label_28288c;
        case 0x282890u: goto label_282890;
        case 0x282894u: goto label_282894;
        case 0x282898u: goto label_282898;
        case 0x28289cu: goto label_28289c;
        case 0x2828a0u: goto label_2828a0;
        case 0x2828a4u: goto label_2828a4;
        case 0x2828a8u: goto label_2828a8;
        case 0x2828acu: goto label_2828ac;
        case 0x2828b0u: goto label_2828b0;
        case 0x2828b4u: goto label_2828b4;
        case 0x2828b8u: goto label_2828b8;
        case 0x2828bcu: goto label_2828bc;
        case 0x2828c0u: goto label_2828c0;
        case 0x2828c4u: goto label_2828c4;
        case 0x2828c8u: goto label_2828c8;
        case 0x2828ccu: goto label_2828cc;
        case 0x2828d0u: goto label_2828d0;
        case 0x2828d4u: goto label_2828d4;
        case 0x2828d8u: goto label_2828d8;
        case 0x2828dcu: goto label_2828dc;
        case 0x2828e0u: goto label_2828e0;
        case 0x2828e4u: goto label_2828e4;
        case 0x2828e8u: goto label_2828e8;
        case 0x2828ecu: goto label_2828ec;
        case 0x2828f0u: goto label_2828f0;
        case 0x2828f4u: goto label_2828f4;
        case 0x2828f8u: goto label_2828f8;
        case 0x2828fcu: goto label_2828fc;
        case 0x282900u: goto label_282900;
        case 0x282904u: goto label_282904;
        case 0x282908u: goto label_282908;
        case 0x28290cu: goto label_28290c;
        case 0x282910u: goto label_282910;
        case 0x282914u: goto label_282914;
        case 0x282918u: goto label_282918;
        case 0x28291cu: goto label_28291c;
        case 0x282920u: goto label_282920;
        case 0x282924u: goto label_282924;
        case 0x282928u: goto label_282928;
        case 0x28292cu: goto label_28292c;
        case 0x282930u: goto label_282930;
        case 0x282934u: goto label_282934;
        case 0x282938u: goto label_282938;
        case 0x28293cu: goto label_28293c;
        case 0x282940u: goto label_282940;
        case 0x282944u: goto label_282944;
        case 0x282948u: goto label_282948;
        case 0x28294cu: goto label_28294c;
        case 0x282950u: goto label_282950;
        case 0x282954u: goto label_282954;
        case 0x282958u: goto label_282958;
        case 0x28295cu: goto label_28295c;
        case 0x282960u: goto label_282960;
        case 0x282964u: goto label_282964;
        case 0x282968u: goto label_282968;
        case 0x28296cu: goto label_28296c;
        case 0x282970u: goto label_282970;
        case 0x282974u: goto label_282974;
        case 0x282978u: goto label_282978;
        case 0x28297cu: goto label_28297c;
        case 0x282980u: goto label_282980;
        case 0x282984u: goto label_282984;
        case 0x282988u: goto label_282988;
        case 0x28298cu: goto label_28298c;
        case 0x282990u: goto label_282990;
        case 0x282994u: goto label_282994;
        case 0x282998u: goto label_282998;
        case 0x28299cu: goto label_28299c;
        case 0x2829a0u: goto label_2829a0;
        case 0x2829a4u: goto label_2829a4;
        case 0x2829a8u: goto label_2829a8;
        case 0x2829acu: goto label_2829ac;
        case 0x2829b0u: goto label_2829b0;
        case 0x2829b4u: goto label_2829b4;
        case 0x2829b8u: goto label_2829b8;
        case 0x2829bcu: goto label_2829bc;
        case 0x2829c0u: goto label_2829c0;
        case 0x2829c4u: goto label_2829c4;
        case 0x2829c8u: goto label_2829c8;
        case 0x2829ccu: goto label_2829cc;
        case 0x2829d0u: goto label_2829d0;
        case 0x2829d4u: goto label_2829d4;
        case 0x2829d8u: goto label_2829d8;
        case 0x2829dcu: goto label_2829dc;
        case 0x2829e0u: goto label_2829e0;
        case 0x2829e4u: goto label_2829e4;
        case 0x2829e8u: goto label_2829e8;
        case 0x2829ecu: goto label_2829ec;
        case 0x2829f0u: goto label_2829f0;
        case 0x2829f4u: goto label_2829f4;
        case 0x2829f8u: goto label_2829f8;
        case 0x2829fcu: goto label_2829fc;
        case 0x282a00u: goto label_282a00;
        case 0x282a04u: goto label_282a04;
        case 0x282a08u: goto label_282a08;
        case 0x282a0cu: goto label_282a0c;
        case 0x282a10u: goto label_282a10;
        case 0x282a14u: goto label_282a14;
        case 0x282a18u: goto label_282a18;
        case 0x282a1cu: goto label_282a1c;
        case 0x282a20u: goto label_282a20;
        case 0x282a24u: goto label_282a24;
        case 0x282a28u: goto label_282a28;
        case 0x282a2cu: goto label_282a2c;
        case 0x282a30u: goto label_282a30;
        case 0x282a34u: goto label_282a34;
        case 0x282a38u: goto label_282a38;
        case 0x282a3cu: goto label_282a3c;
        case 0x282a40u: goto label_282a40;
        case 0x282a44u: goto label_282a44;
        case 0x282a48u: goto label_282a48;
        case 0x282a4cu: goto label_282a4c;
        case 0x282a50u: goto label_282a50;
        case 0x282a54u: goto label_282a54;
        case 0x282a58u: goto label_282a58;
        case 0x282a5cu: goto label_282a5c;
        case 0x282a60u: goto label_282a60;
        case 0x282a64u: goto label_282a64;
        case 0x282a68u: goto label_282a68;
        case 0x282a6cu: goto label_282a6c;
        case 0x282a70u: goto label_282a70;
        case 0x282a74u: goto label_282a74;
        case 0x282a78u: goto label_282a78;
        case 0x282a7cu: goto label_282a7c;
        case 0x282a80u: goto label_282a80;
        case 0x282a84u: goto label_282a84;
        case 0x282a88u: goto label_282a88;
        case 0x282a8cu: goto label_282a8c;
        case 0x282a90u: goto label_282a90;
        case 0x282a94u: goto label_282a94;
        case 0x282a98u: goto label_282a98;
        case 0x282a9cu: goto label_282a9c;
        case 0x282aa0u: goto label_282aa0;
        case 0x282aa4u: goto label_282aa4;
        case 0x282aa8u: goto label_282aa8;
        case 0x282aacu: goto label_282aac;
        case 0x282ab0u: goto label_282ab0;
        case 0x282ab4u: goto label_282ab4;
        case 0x282ab8u: goto label_282ab8;
        case 0x282abcu: goto label_282abc;
        case 0x282ac0u: goto label_282ac0;
        case 0x282ac4u: goto label_282ac4;
        case 0x282ac8u: goto label_282ac8;
        case 0x282accu: goto label_282acc;
        case 0x282ad0u: goto label_282ad0;
        case 0x282ad4u: goto label_282ad4;
        case 0x282ad8u: goto label_282ad8;
        case 0x282adcu: goto label_282adc;
        case 0x282ae0u: goto label_282ae0;
        case 0x282ae4u: goto label_282ae4;
        case 0x282ae8u: goto label_282ae8;
        case 0x282aecu: goto label_282aec;
        case 0x282af0u: goto label_282af0;
        case 0x282af4u: goto label_282af4;
        case 0x282af8u: goto label_282af8;
        case 0x282afcu: goto label_282afc;
        case 0x282b00u: goto label_282b00;
        case 0x282b04u: goto label_282b04;
        case 0x282b08u: goto label_282b08;
        case 0x282b0cu: goto label_282b0c;
        case 0x282b10u: goto label_282b10;
        case 0x282b14u: goto label_282b14;
        case 0x282b18u: goto label_282b18;
        case 0x282b1cu: goto label_282b1c;
        case 0x282b20u: goto label_282b20;
        case 0x282b24u: goto label_282b24;
        case 0x282b28u: goto label_282b28;
        case 0x282b2cu: goto label_282b2c;
        case 0x282b30u: goto label_282b30;
        case 0x282b34u: goto label_282b34;
        case 0x282b38u: goto label_282b38;
        case 0x282b3cu: goto label_282b3c;
        case 0x282b40u: goto label_282b40;
        case 0x282b44u: goto label_282b44;
        case 0x282b48u: goto label_282b48;
        case 0x282b4cu: goto label_282b4c;
        case 0x282b50u: goto label_282b50;
        case 0x282b54u: goto label_282b54;
        case 0x282b58u: goto label_282b58;
        case 0x282b5cu: goto label_282b5c;
        case 0x282b60u: goto label_282b60;
        case 0x282b64u: goto label_282b64;
        case 0x282b68u: goto label_282b68;
        case 0x282b6cu: goto label_282b6c;
        case 0x282b70u: goto label_282b70;
        case 0x282b74u: goto label_282b74;
        case 0x282b78u: goto label_282b78;
        case 0x282b7cu: goto label_282b7c;
        case 0x282b80u: goto label_282b80;
        case 0x282b84u: goto label_282b84;
        case 0x282b88u: goto label_282b88;
        case 0x282b8cu: goto label_282b8c;
        case 0x282b90u: goto label_282b90;
        case 0x282b94u: goto label_282b94;
        case 0x282b98u: goto label_282b98;
        case 0x282b9cu: goto label_282b9c;
        case 0x282ba0u: goto label_282ba0;
        case 0x282ba4u: goto label_282ba4;
        case 0x282ba8u: goto label_282ba8;
        case 0x282bacu: goto label_282bac;
        case 0x282bb0u: goto label_282bb0;
        case 0x282bb4u: goto label_282bb4;
        case 0x282bb8u: goto label_282bb8;
        case 0x282bbcu: goto label_282bbc;
        case 0x282bc0u: goto label_282bc0;
        case 0x282bc4u: goto label_282bc4;
        case 0x282bc8u: goto label_282bc8;
        case 0x282bccu: goto label_282bcc;
        case 0x282bd0u: goto label_282bd0;
        case 0x282bd4u: goto label_282bd4;
        case 0x282bd8u: goto label_282bd8;
        case 0x282bdcu: goto label_282bdc;
        case 0x282be0u: goto label_282be0;
        case 0x282be4u: goto label_282be4;
        case 0x282be8u: goto label_282be8;
        case 0x282becu: goto label_282bec;
        case 0x282bf0u: goto label_282bf0;
        case 0x282bf4u: goto label_282bf4;
        case 0x282bf8u: goto label_282bf8;
        case 0x282bfcu: goto label_282bfc;
        case 0x282c00u: goto label_282c00;
        case 0x282c04u: goto label_282c04;
        case 0x282c08u: goto label_282c08;
        case 0x282c0cu: goto label_282c0c;
        case 0x282c10u: goto label_282c10;
        case 0x282c14u: goto label_282c14;
        case 0x282c18u: goto label_282c18;
        case 0x282c1cu: goto label_282c1c;
        case 0x282c20u: goto label_282c20;
        case 0x282c24u: goto label_282c24;
        case 0x282c28u: goto label_282c28;
        case 0x282c2cu: goto label_282c2c;
        case 0x282c30u: goto label_282c30;
        case 0x282c34u: goto label_282c34;
        case 0x282c38u: goto label_282c38;
        case 0x282c3cu: goto label_282c3c;
        case 0x282c40u: goto label_282c40;
        case 0x282c44u: goto label_282c44;
        case 0x282c48u: goto label_282c48;
        case 0x282c4cu: goto label_282c4c;
        case 0x282c50u: goto label_282c50;
        case 0x282c54u: goto label_282c54;
        case 0x282c58u: goto label_282c58;
        case 0x282c5cu: goto label_282c5c;
        case 0x282c60u: goto label_282c60;
        case 0x282c64u: goto label_282c64;
        case 0x282c68u: goto label_282c68;
        case 0x282c6cu: goto label_282c6c;
        case 0x282c70u: goto label_282c70;
        case 0x282c74u: goto label_282c74;
        case 0x282c78u: goto label_282c78;
        case 0x282c7cu: goto label_282c7c;
        case 0x282c80u: goto label_282c80;
        case 0x282c84u: goto label_282c84;
        case 0x282c88u: goto label_282c88;
        case 0x282c8cu: goto label_282c8c;
        case 0x282c90u: goto label_282c90;
        case 0x282c94u: goto label_282c94;
        case 0x282c98u: goto label_282c98;
        case 0x282c9cu: goto label_282c9c;
        case 0x282ca0u: goto label_282ca0;
        case 0x282ca4u: goto label_282ca4;
        case 0x282ca8u: goto label_282ca8;
        case 0x282cacu: goto label_282cac;
        case 0x282cb0u: goto label_282cb0;
        case 0x282cb4u: goto label_282cb4;
        case 0x282cb8u: goto label_282cb8;
        case 0x282cbcu: goto label_282cbc;
        case 0x282cc0u: goto label_282cc0;
        case 0x282cc4u: goto label_282cc4;
        case 0x282cc8u: goto label_282cc8;
        case 0x282cccu: goto label_282ccc;
        case 0x282cd0u: goto label_282cd0;
        case 0x282cd4u: goto label_282cd4;
        case 0x282cd8u: goto label_282cd8;
        case 0x282cdcu: goto label_282cdc;
        case 0x282ce0u: goto label_282ce0;
        case 0x282ce4u: goto label_282ce4;
        case 0x282ce8u: goto label_282ce8;
        case 0x282cecu: goto label_282cec;
        case 0x282cf0u: goto label_282cf0;
        case 0x282cf4u: goto label_282cf4;
        case 0x282cf8u: goto label_282cf8;
        case 0x282cfcu: goto label_282cfc;
        case 0x282d00u: goto label_282d00;
        case 0x282d04u: goto label_282d04;
        case 0x282d08u: goto label_282d08;
        case 0x282d0cu: goto label_282d0c;
        case 0x282d10u: goto label_282d10;
        case 0x282d14u: goto label_282d14;
        case 0x282d18u: goto label_282d18;
        case 0x282d1cu: goto label_282d1c;
        case 0x282d20u: goto label_282d20;
        case 0x282d24u: goto label_282d24;
        case 0x282d28u: goto label_282d28;
        case 0x282d2cu: goto label_282d2c;
        case 0x282d30u: goto label_282d30;
        case 0x282d34u: goto label_282d34;
        case 0x282d38u: goto label_282d38;
        case 0x282d3cu: goto label_282d3c;
        case 0x282d40u: goto label_282d40;
        case 0x282d44u: goto label_282d44;
        case 0x282d48u: goto label_282d48;
        case 0x282d4cu: goto label_282d4c;
        case 0x282d50u: goto label_282d50;
        case 0x282d54u: goto label_282d54;
        case 0x282d58u: goto label_282d58;
        case 0x282d5cu: goto label_282d5c;
        case 0x282d60u: goto label_282d60;
        case 0x282d64u: goto label_282d64;
        case 0x282d68u: goto label_282d68;
        case 0x282d6cu: goto label_282d6c;
        case 0x282d70u: goto label_282d70;
        case 0x282d74u: goto label_282d74;
        case 0x282d78u: goto label_282d78;
        case 0x282d7cu: goto label_282d7c;
        case 0x282d80u: goto label_282d80;
        case 0x282d84u: goto label_282d84;
        case 0x282d88u: goto label_282d88;
        case 0x282d8cu: goto label_282d8c;
        case 0x282d90u: goto label_282d90;
        case 0x282d94u: goto label_282d94;
        case 0x282d98u: goto label_282d98;
        case 0x282d9cu: goto label_282d9c;
        case 0x282da0u: goto label_282da0;
        case 0x282da4u: goto label_282da4;
        case 0x282da8u: goto label_282da8;
        case 0x282dacu: goto label_282dac;
        case 0x282db0u: goto label_282db0;
        case 0x282db4u: goto label_282db4;
        case 0x282db8u: goto label_282db8;
        case 0x282dbcu: goto label_282dbc;
        case 0x282dc0u: goto label_282dc0;
        case 0x282dc4u: goto label_282dc4;
        case 0x282dc8u: goto label_282dc8;
        case 0x282dccu: goto label_282dcc;
        case 0x282dd0u: goto label_282dd0;
        case 0x282dd4u: goto label_282dd4;
        case 0x282dd8u: goto label_282dd8;
        case 0x282ddcu: goto label_282ddc;
        case 0x282de0u: goto label_282de0;
        case 0x282de4u: goto label_282de4;
        case 0x282de8u: goto label_282de8;
        case 0x282decu: goto label_282dec;
        case 0x282df0u: goto label_282df0;
        case 0x282df4u: goto label_282df4;
        case 0x282df8u: goto label_282df8;
        case 0x282dfcu: goto label_282dfc;
        case 0x282e00u: goto label_282e00;
        case 0x282e04u: goto label_282e04;
        case 0x282e08u: goto label_282e08;
        case 0x282e0cu: goto label_282e0c;
        case 0x282e10u: goto label_282e10;
        case 0x282e14u: goto label_282e14;
        case 0x282e18u: goto label_282e18;
        case 0x282e1cu: goto label_282e1c;
        case 0x282e20u: goto label_282e20;
        case 0x282e24u: goto label_282e24;
        case 0x282e28u: goto label_282e28;
        case 0x282e2cu: goto label_282e2c;
        case 0x282e30u: goto label_282e30;
        case 0x282e34u: goto label_282e34;
        case 0x282e38u: goto label_282e38;
        case 0x282e3cu: goto label_282e3c;
        case 0x282e40u: goto label_282e40;
        case 0x282e44u: goto label_282e44;
        case 0x282e48u: goto label_282e48;
        case 0x282e4cu: goto label_282e4c;
        case 0x282e50u: goto label_282e50;
        case 0x282e54u: goto label_282e54;
        case 0x282e58u: goto label_282e58;
        case 0x282e5cu: goto label_282e5c;
        case 0x282e60u: goto label_282e60;
        case 0x282e64u: goto label_282e64;
        case 0x282e68u: goto label_282e68;
        case 0x282e6cu: goto label_282e6c;
        case 0x282e70u: goto label_282e70;
        case 0x282e74u: goto label_282e74;
        case 0x282e78u: goto label_282e78;
        case 0x282e7cu: goto label_282e7c;
        case 0x282e80u: goto label_282e80;
        case 0x282e84u: goto label_282e84;
        case 0x282e88u: goto label_282e88;
        case 0x282e8cu: goto label_282e8c;
        case 0x282e90u: goto label_282e90;
        case 0x282e94u: goto label_282e94;
        case 0x282e98u: goto label_282e98;
        case 0x282e9cu: goto label_282e9c;
        case 0x282ea0u: goto label_282ea0;
        case 0x282ea4u: goto label_282ea4;
        case 0x282ea8u: goto label_282ea8;
        case 0x282eacu: goto label_282eac;
        case 0x282eb0u: goto label_282eb0;
        case 0x282eb4u: goto label_282eb4;
        case 0x282eb8u: goto label_282eb8;
        case 0x282ebcu: goto label_282ebc;
        case 0x282ec0u: goto label_282ec0;
        case 0x282ec4u: goto label_282ec4;
        case 0x282ec8u: goto label_282ec8;
        case 0x282eccu: goto label_282ecc;
        case 0x282ed0u: goto label_282ed0;
        case 0x282ed4u: goto label_282ed4;
        case 0x282ed8u: goto label_282ed8;
        case 0x282edcu: goto label_282edc;
        case 0x282ee0u: goto label_282ee0;
        case 0x282ee4u: goto label_282ee4;
        case 0x282ee8u: goto label_282ee8;
        case 0x282eecu: goto label_282eec;
        case 0x282ef0u: goto label_282ef0;
        case 0x282ef4u: goto label_282ef4;
        case 0x282ef8u: goto label_282ef8;
        case 0x282efcu: goto label_282efc;
        case 0x282f00u: goto label_282f00;
        case 0x282f04u: goto label_282f04;
        case 0x282f08u: goto label_282f08;
        case 0x282f0cu: goto label_282f0c;
        case 0x282f10u: goto label_282f10;
        case 0x282f14u: goto label_282f14;
        case 0x282f18u: goto label_282f18;
        case 0x282f1cu: goto label_282f1c;
        case 0x282f20u: goto label_282f20;
        case 0x282f24u: goto label_282f24;
        case 0x282f28u: goto label_282f28;
        case 0x282f2cu: goto label_282f2c;
        case 0x282f30u: goto label_282f30;
        case 0x282f34u: goto label_282f34;
        case 0x282f38u: goto label_282f38;
        case 0x282f3cu: goto label_282f3c;
        case 0x282f40u: goto label_282f40;
        case 0x282f44u: goto label_282f44;
        case 0x282f48u: goto label_282f48;
        case 0x282f4cu: goto label_282f4c;
        case 0x282f50u: goto label_282f50;
        case 0x282f54u: goto label_282f54;
        case 0x282f58u: goto label_282f58;
        case 0x282f5cu: goto label_282f5c;
        case 0x282f60u: goto label_282f60;
        case 0x282f64u: goto label_282f64;
        case 0x282f68u: goto label_282f68;
        case 0x282f6cu: goto label_282f6c;
        case 0x282f70u: goto label_282f70;
        case 0x282f74u: goto label_282f74;
        case 0x282f78u: goto label_282f78;
        case 0x282f7cu: goto label_282f7c;
        case 0x282f80u: goto label_282f80;
        case 0x282f84u: goto label_282f84;
        case 0x282f88u: goto label_282f88;
        case 0x282f8cu: goto label_282f8c;
        case 0x282f90u: goto label_282f90;
        case 0x282f94u: goto label_282f94;
        case 0x282f98u: goto label_282f98;
        case 0x282f9cu: goto label_282f9c;
        case 0x282fa0u: goto label_282fa0;
        case 0x282fa4u: goto label_282fa4;
        case 0x282fa8u: goto label_282fa8;
        case 0x282facu: goto label_282fac;
        case 0x282fb0u: goto label_282fb0;
        case 0x282fb4u: goto label_282fb4;
        case 0x282fb8u: goto label_282fb8;
        case 0x282fbcu: goto label_282fbc;
        case 0x282fc0u: goto label_282fc0;
        case 0x282fc4u: goto label_282fc4;
        case 0x282fc8u: goto label_282fc8;
        case 0x282fccu: goto label_282fcc;
        case 0x282fd0u: goto label_282fd0;
        case 0x282fd4u: goto label_282fd4;
        case 0x282fd8u: goto label_282fd8;
        case 0x282fdcu: goto label_282fdc;
        case 0x282fe0u: goto label_282fe0;
        case 0x282fe4u: goto label_282fe4;
        case 0x282fe8u: goto label_282fe8;
        case 0x282fecu: goto label_282fec;
        default: return;
    }

label_282820:
    // 0x282820: 0x3c656042  .word       0x3C656042                   # lui         $a1, 0x6042 # 00600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24642 << 16));
label_282824:
    // 0x282824: 0xbf272b02  cache       0x07, 0x2B02($t9)
    ctx->pc = 0x282824u;
    // CACHE instruction (ignored)
label_282828:
    // 0x282828: 0xc061687f  ll          $at, 0x687F($v1)
    ctx->pc = 0x282828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26751); SET_GPR_S32(ctx, 1, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28282c:
    // 0x28282c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28282cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282830:
    // 0x282830: 0x0  nop
    ctx->pc = 0x282830u;
    // NOP
label_282834:
    // 0x282834: 0x0  nop
    ctx->pc = 0x282834u;
    // NOP
label_282838:
    // 0x282838: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282838u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28283c:
    // 0x28283c: 0x0  nop
    ctx->pc = 0x28283cu;
    // NOP
label_282840:
    // 0x282840: 0x3c83126f  .word       0x3C83126F                   # lui         $v1, 0x126F # 00800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4719 << 16));
label_282844:
    // 0x282844: 0x3cd4fdf4  .word       0x3CD4FDF4                   # lui         $s4, 0xFDF4 # 00C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282844u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65012 << 16));
label_282848:
    // 0x282848: 0x40bd47b0  .word       0x40BD47B0                   # dmtc0       $sp, BadVaddr # 000007B0 <InstrIdType: R5900_COP0>
    ctx->pc = 0x282848u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x282848 raw=0x40BD47B0"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28284c:
    // 0x28284c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28284cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282850:
    // 0x282850: 0x0  nop
    ctx->pc = 0x282850u;
    // NOP
label_282854:
    // 0x282854: 0x0  nop
    ctx->pc = 0x282854u;
    // NOP
label_282858:
    // 0x282858: 0x0  nop
    ctx->pc = 0x282858u;
    // NOP
label_28285c:
    // 0x28285c: 0x0  nop
    ctx->pc = 0x28285cu;
    // NOP
label_282860:
    // 0x282860: 0x0  nop
    ctx->pc = 0x282860u;
    // NOP
label_282864:
    // 0x282864: 0x0  nop
    ctx->pc = 0x282864u;
    // NOP
label_282868:
    // 0x282868: 0x0  nop
    ctx->pc = 0x282868u;
    // NOP
label_28286c:
    // 0x28286c: 0x0  nop
    ctx->pc = 0x28286cu;
    // NOP
label_282870:
    // 0x282870: 0x0  nop
    ctx->pc = 0x282870u;
    // NOP
label_282874:
    // 0x282874: 0x0  nop
    ctx->pc = 0x282874u;
    // NOP
label_282878:
    // 0x282878: 0x0  nop
    ctx->pc = 0x282878u;
    // NOP
label_28287c:
    // 0x28287c: 0x0  nop
    ctx->pc = 0x28287cu;
    // NOP
label_282880:
    // 0x282880: 0x0  nop
    ctx->pc = 0x282880u;
    // NOP
label_282884:
    // 0x282884: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282884u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282888:
    // 0x282888: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282888u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28288c:
    // 0x28288c: 0x0  nop
    ctx->pc = 0x28288cu;
    // NOP
label_282890:
    // 0x282890: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282890u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282894:
    // 0x282894: 0x0  nop
    ctx->pc = 0x282894u;
    // NOP
label_282898:
    // 0x282898: 0xc2940000  ll          $s4, 0x0($s4)
    ctx->pc = 0x282898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); SET_GPR_S32(ctx, 20, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28289c:
    // 0x28289c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28289cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2828a0:
    // 0x2828a0: 0x0  nop
    ctx->pc = 0x2828a0u;
    // NOP
label_2828a4:
    // 0x2828a4: 0x0  nop
    ctx->pc = 0x2828a4u;
    // NOP
label_2828a8:
    // 0x2828a8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2828a8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2828ac:
    // 0x2828ac: 0x0  nop
    ctx->pc = 0x2828acu;
    // NOP
label_2828b0:
    // 0x2828b0: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x2828b0u;
    // CACHE instruction (ignored)
label_2828b4:
    // 0x2828b4: 0x0  nop
    ctx->pc = 0x2828b4u;
    // NOP
label_2828b8:
    // 0x2828b8: 0xc2940000  ll          $s4, 0x0($s4)
    ctx->pc = 0x2828b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); SET_GPR_S32(ctx, 20, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2828bc:
    // 0x2828bc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2828bcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2828c0:
    // 0x2828c0: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2828c0u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2828c4:
    // 0x2828c4: 0x0  nop
    ctx->pc = 0x2828c4u;
    // NOP
label_2828c8:
    // 0x2828c8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2828c8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2828cc:
    // 0x2828cc: 0x0  nop
    ctx->pc = 0x2828ccu;
    // NOP
label_2828d0:
    // 0x2828d0: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x2828d0u;
    // CACHE instruction (ignored)
label_2828d4:
    // 0x2828d4: 0x0  nop
    ctx->pc = 0x2828d4u;
    // NOP
label_2828d8:
    // 0x2828d8: 0xc2e40000  ll          $a0, 0x0($s7)
    ctx->pc = 0x2828d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 4, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2828dc:
    // 0x2828dc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2828dcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2828e0:
    // 0x2828e0: 0x0  nop
    ctx->pc = 0x2828e0u;
    // NOP
label_2828e4:
    // 0x2828e4: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2828e4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2828e8:
    // 0x2828e8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2828e8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2828ec:
    // 0x2828ec: 0x0  nop
    ctx->pc = 0x2828ecu;
    // NOP
label_2828f0:
    // 0x2828f0: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2828f0u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2828f4:
    // 0x2828f4: 0x0  nop
    ctx->pc = 0x2828f4u;
    // NOP
label_2828f8:
    // 0x2828f8: 0xc2940000  ll          $s4, 0x0($s4)
    ctx->pc = 0x2828f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); SET_GPR_S32(ctx, 20, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2828fc:
    // 0x2828fc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2828fcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282900:
    // 0x282900: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282900u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282904:
    // 0x282904: 0x0  nop
    ctx->pc = 0x282904u;
    // NOP
label_282908:
    // 0x282908: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282908u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28290c:
    // 0x28290c: 0x0  nop
    ctx->pc = 0x28290cu;
    // NOP
label_282910:
    // 0x282910: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x282910u;
    // CACHE instruction (ignored)
label_282914:
    // 0x282914: 0x0  nop
    ctx->pc = 0x282914u;
    // NOP
label_282918:
    // 0x282918: 0xc2e40000  ll          $a0, 0x0($s7)
    ctx->pc = 0x282918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 4, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28291c:
    // 0x28291c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28291cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282920:
    // 0x282920: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282920u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282924:
    // 0x282924: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282924u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282928:
    // 0x282928: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282928u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28292c:
    // 0x28292c: 0x0  nop
    ctx->pc = 0x28292cu;
    // NOP
label_282930:
    // 0x282930: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282930u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282934:
    // 0x282934: 0x0  nop
    ctx->pc = 0x282934u;
    // NOP
label_282938:
    // 0x282938: 0xc2e40000  ll          $a0, 0x0($s7)
    ctx->pc = 0x282938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 4, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28293c:
    // 0x28293c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28293cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282940:
    // 0x282940: 0x0  nop
    ctx->pc = 0x282940u;
    // NOP
label_282944:
    // 0x282944: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282944u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282948:
    // 0x282948: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282948u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28294c:
    // 0x28294c: 0x0  nop
    ctx->pc = 0x28294cu;
    // NOP
label_282950:
    // 0x282950: 0x0  nop
    ctx->pc = 0x282950u;
    // NOP
label_282954:
    // 0x282954: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282954u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282958:
    // 0x282958: 0xc2940000  ll          $s4, 0x0($s4)
    ctx->pc = 0x282958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); SET_GPR_S32(ctx, 20, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28295c:
    // 0x28295c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28295cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282960:
    // 0x282960: 0x0  nop
    ctx->pc = 0x282960u;
    // NOP
label_282964:
    // 0x282964: 0x0  nop
    ctx->pc = 0x282964u;
    // NOP
label_282968:
    // 0x282968: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282968u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28296c:
    // 0x28296c: 0x0  nop
    ctx->pc = 0x28296cu;
    // NOP
label_282970:
    // 0x282970: 0x0  nop
    ctx->pc = 0x282970u;
    // NOP
label_282974:
    // 0x282974: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x282974u;
    // CACHE instruction (ignored)
label_282978:
    // 0x282978: 0xc2940000  ll          $s4, 0x0($s4)
    ctx->pc = 0x282978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); SET_GPR_S32(ctx, 20, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28297c:
    // 0x28297c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28297cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282980:
    // 0x282980: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282980u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282984:
    // 0x282984: 0x0  nop
    ctx->pc = 0x282984u;
    // NOP
label_282988:
    // 0x282988: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282988u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28298c:
    // 0x28298c: 0x0  nop
    ctx->pc = 0x28298cu;
    // NOP
label_282990:
    // 0x282990: 0x0  nop
    ctx->pc = 0x282990u;
    // NOP
label_282994:
    // 0x282994: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x282994u;
    // CACHE instruction (ignored)
label_282998:
    // 0x282998: 0xc2e40000  ll          $a0, 0x0($s7)
    ctx->pc = 0x282998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 4, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28299c:
    // 0x28299c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28299cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2829a0:
    // 0x2829a0: 0x0  nop
    ctx->pc = 0x2829a0u;
    // NOP
label_2829a4:
    // 0x2829a4: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2829a4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2829a8:
    // 0x2829a8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2829a8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2829ac:
    // 0x2829ac: 0x0  nop
    ctx->pc = 0x2829acu;
    // NOP
label_2829b0:
    // 0x2829b0: 0x0  nop
    ctx->pc = 0x2829b0u;
    // NOP
label_2829b4:
    // 0x2829b4: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2829b4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2829b8:
    // 0x2829b8: 0xc2940000  ll          $s4, 0x0($s4)
    ctx->pc = 0x2829b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); SET_GPR_S32(ctx, 20, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2829bc:
    // 0x2829bc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2829bcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2829c0:
    // 0x2829c0: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2829c0u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2829c4:
    // 0x2829c4: 0x0  nop
    ctx->pc = 0x2829c4u;
    // NOP
label_2829c8:
    // 0x2829c8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2829c8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2829cc:
    // 0x2829cc: 0x0  nop
    ctx->pc = 0x2829ccu;
    // NOP
label_2829d0:
    // 0x2829d0: 0x0  nop
    ctx->pc = 0x2829d0u;
    // NOP
label_2829d4:
    // 0x2829d4: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x2829d4u;
    // CACHE instruction (ignored)
label_2829d8:
    // 0x2829d8: 0xc2e40000  ll          $a0, 0x0($s7)
    ctx->pc = 0x2829d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 4, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2829dc:
    // 0x2829dc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2829dcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2829e0:
    // 0x2829e0: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2829e0u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2829e4:
    // 0x2829e4: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2829e4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2829e8:
    // 0x2829e8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2829e8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2829ec:
    // 0x2829ec: 0x0  nop
    ctx->pc = 0x2829ecu;
    // NOP
label_2829f0:
    // 0x2829f0: 0x0  nop
    ctx->pc = 0x2829f0u;
    // NOP
label_2829f4:
    // 0x2829f4: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2829f4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2829f8:
    // 0x2829f8: 0xc2e40000  ll          $a0, 0x0($s7)
    ctx->pc = 0x2829f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 4, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2829fc:
    // 0x2829fc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2829fcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282a00:
    // 0x282a00: 0x2c9710  .word       0x002C9710                   # mfhi        $s2 # 002C0700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282a00u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_282a04:
    // 0x282a04: 0x2c9730  tge         $at, $t4, 604
    ctx->pc = 0x282a04u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_282a08:
    // 0x282a08: 0x2c9750  .word       0x002C9750                   # mfhi        $s2 # 002C0740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282a08u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_282a0c:
    // 0x282a0c: 0x2c9770  tge         $at, $t4, 605
    ctx->pc = 0x282a0cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_282a10:
    // 0x282a10: 0x2c9790  .word       0x002C9790                   # mfhi        $s2 # 002C0780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282a10u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_282a14:
    // 0x282a14: 0x2c97b0  tge         $at, $t4, 606
    ctx->pc = 0x282a14u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_282a18:
    // 0x282a18: 0x2c97d0  .word       0x002C97D0                   # mfhi        $s2 # 002C07C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282a18u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_282a1c:
    // 0x282a1c: 0x2c97f0  tge         $at, $t4, 607
    ctx->pc = 0x282a1cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_282a20:
    // 0x282a20: 0x0  nop
    ctx->pc = 0x282a20u;
    // NOP
label_282a24:
    // 0x282a24: 0x0  nop
    ctx->pc = 0x282a24u;
    // NOP
label_282a28:
    // 0x282a28: 0x0  nop
    ctx->pc = 0x282a28u;
    // NOP
label_282a2c:
    // 0x282a2c: 0x0  nop
    ctx->pc = 0x282a2cu;
    // NOP
label_282a30:
    // 0x282a30: 0x133000  sll         $a2, $s3, 0
    ctx->pc = 0x282a30u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 0));
label_282a34:
    // 0x282a34: 0x1000100  .word       0x01000100                   # sll         $zero, $zero, 4 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282a34u;
    
label_282a38:
    // 0x282a38: 0x133100  sll         $a2, $s3, 4
    ctx->pc = 0x282a38u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_282a3c:
    // 0x282a3c: 0x1000100  .word       0x01000100                   # sll         $zero, $zero, 4 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282a3cu;
    
label_282a40:
    // 0x282a40: 0x143200  sll         $a2, $s4, 8
    ctx->pc = 0x282a40u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 8));
label_282a44:
    // 0x282a44: 0x1000100  .word       0x01000100                   # sll         $zero, $zero, 4 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282a44u;
    
label_282a48:
    // 0x282a48: 0x143280  sll         $a2, $s4, 10
    ctx->pc = 0x282a48u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 10));
label_282a4c:
    // 0x282a4c: 0x2800400  .word       0x02800400                   # sll         $zero, $zero, 16 # 02800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282a4cu;
    
label_282a50:
    // 0x282a50: 0x143780  sll         $a2, $s4, 30
    ctx->pc = 0x282a50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 30));
label_282a54:
    // 0x282a54: 0x800080  .word       0x00800080                   # sll         $zero, $zero, 2 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282a54u;
    
label_282a58:
    // 0x282a58: 0x1437a0  .word       0x001437A0                   # add         $a2, $zero, $s4 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282a58u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_282a5c:
    // 0x282a5c: 0x1000400  .word       0x01000400                   # sll         $zero, $zero, 16 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282a5cu;
    
label_282a60:
    // 0x282a60: 0x1439a0  .word       0x001439A0                   # add         $a3, $zero, $s4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282a60u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_282a64:
    // 0x282a64: 0x2000100  .word       0x02000100                   # sll         $zero, $zero, 4 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282a64u;
    
label_282a68:
    // 0x282a68: 0x143aa0  .word       0x00143AA0                   # add         $a3, $zero, $s4 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282a68u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_282a6c:
    // 0x282a6c: 0x1000200  .word       0x01000200                   # sll         $zero, $zero, 8 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282a6cu;
    
label_282a70:
    // 0x282a70: 0x131680  sll         $v0, $s3, 26
    ctx->pc = 0x282a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 26));
label_282a74:
    // 0x282a74: 0x4000400  bltz        $zero, . + 4 + (0x400 << 2)
label_282a78:
    if (ctx->pc == 0x282A78u) {
        ctx->pc = 0x282A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A74u;
        // 0x282a78: 0x131900  sll         $v1, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282A7Cu;
        goto label_282a7c;
    }
    ctx->pc = 0x282A74u;
    {
        const bool branch_taken_0x282a74 = (GPR_S32(ctx, 0) < 0);
        ctx->pc = 0x282A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A74u;
        // 0x282a78: 0x131900  sll         $v1, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a74) {
            ctx->pc = 0x283A78u;
            { ctx->pc = 0x283a78; return; }
        }
    }
    ctx->pc = 0x282A7Cu;
label_282a7c:
    // 0x282a7c: 0x4000400  bltz        $zero, . + 4 + (0x400 << 2)
label_282a80:
    if (ctx->pc == 0x282A80u) {
        ctx->pc = 0x282A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A7Cu;
        // 0x282a80: 0x132800  sll         $a1, $s3, 0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282A84u;
        goto label_282a84;
    }
    ctx->pc = 0x282A7Cu;
    {
        const bool branch_taken_0x282a7c = (GPR_S32(ctx, 0) < 0);
        ctx->pc = 0x282A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A7Cu;
        // 0x282a80: 0x132800  sll         $a1, $s3, 0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a7c) {
            ctx->pc = 0x283A80u;
            { ctx->pc = 0x283a80; return; }
        }
    }
    ctx->pc = 0x282A84u;
label_282a84:
    // 0x282a84: 0x4000400  bltz        $zero, . + 4 + (0x400 << 2)
label_282a88:
    if (ctx->pc == 0x282A88u) {
        ctx->pc = 0x282A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A84u;
        // 0x282a88: 0x131680  sll         $v0, $s3, 26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282A8Cu;
        goto label_282a8c;
    }
    ctx->pc = 0x282A84u;
    {
        const bool branch_taken_0x282a84 = (GPR_S32(ctx, 0) < 0);
        ctx->pc = 0x282A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A84u;
        // 0x282a88: 0x131680  sll         $v0, $s3, 26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a84) {
            ctx->pc = 0x283A88u;
            { ctx->pc = 0x283a88; return; }
        }
    }
    ctx->pc = 0x282A8Cu;
label_282a8c:
    // 0x282a8c: 0x2000100  .word       0x02000100                   # sll         $zero, $zero, 4 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282a8cu;
    
label_282a90:
    // 0x282a90: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x282a90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_282a94:
    // 0x282a94: 0x2000100  .word       0x02000100                   # sll         $zero, $zero, 4 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282a94u;
    
label_282a98:
    // 0x282a98: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x282a98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_282a9c:
    // 0x282a9c: 0x1000100  .word       0x01000100                   # sll         $zero, $zero, 4 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282a9cu;
    
label_282aa0:
    // 0x282aa0: 0x132500  sll         $a0, $s3, 20
    ctx->pc = 0x282aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 20));
label_282aa4:
    // 0x282aa4: 0x1000200  .word       0x01000200                   # sll         $zero, $zero, 8 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282aa4u;
    
label_282aa8:
    // 0x282aa8: 0x142700  sll         $a0, $s4, 28
    ctx->pc = 0x282aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 28));
label_282aac:
    // 0x282aac: 0x1000100  .word       0x01000100                   # sll         $zero, $zero, 4 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282aacu;
    
label_282ab0:
    // 0x282ab0: 0x132780  sll         $a0, $s3, 30
    ctx->pc = 0x282ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 30));
label_282ab4:
    // 0x282ab4: 0x400100  .word       0x00400100                   # sll         $zero, $zero, 4 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282ab4u;
    
label_282ab8:
    // 0x282ab8: 0x1427c0  sll         $a0, $s4, 31
    ctx->pc = 0x282ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 31));
label_282abc:
    // 0x282abc: 0x1000100  .word       0x01000100                   # sll         $zero, $zero, 4 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282abcu;
    
label_282ac0:
    // 0x282ac0: 0x142840  sll         $a1, $s4, 1
    ctx->pc = 0x282ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_282ac4:
    // 0x282ac4: 0x1000100  .word       0x01000100                   # sll         $zero, $zero, 4 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282ac4u;
    
label_282ac8:
    // 0x282ac8: 0x1428c0  sll         $a1, $s4, 3
    ctx->pc = 0x282ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_282acc:
    // 0x282acc: 0x1000100  .word       0x01000100                   # sll         $zero, $zero, 4 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282accu;
    
label_282ad0:
    // 0x282ad0: 0x142940  sll         $a1, $s4, 5
    ctx->pc = 0x282ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
label_282ad4:
    // 0x282ad4: 0x1000100  .word       0x01000100                   # sll         $zero, $zero, 4 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282ad4u;
    
label_282ad8:
    // 0x282ad8: 0x1429c0  sll         $a1, $s4, 7
    ctx->pc = 0x282ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 7));
label_282adc:
    // 0x282adc: 0x1000100  .word       0x01000100                   # sll         $zero, $zero, 4 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282adcu;
    
label_282ae0:
    // 0x282ae0: 0x142a40  sll         $a1, $s4, 9
    ctx->pc = 0x282ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 9));
label_282ae4:
    // 0x282ae4: 0x1000100  .word       0x01000100                   # sll         $zero, $zero, 4 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282ae4u;
    
label_282ae8:
    // 0x282ae8: 0x132ac0  sll         $a1, $s3, 11
    ctx->pc = 0x282ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 11));
label_282aec:
    // 0x282aec: 0x1000100  .word       0x01000100                   # sll         $zero, $zero, 4 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282aecu;
    
label_282af0:
    // 0x282af0: 0x132bc0  sll         $a1, $s3, 15
    ctx->pc = 0x282af0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 15));
label_282af4:
    // 0x282af4: 0x1000200  .word       0x01000200                   # sll         $zero, $zero, 8 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282af4u;
    
label_282af8:
    // 0x282af8: 0x142dc0  sll         $a1, $s4, 23
    ctx->pc = 0x282af8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 23));
label_282afc:
    // 0x282afc: 0x1000100  .word       0x01000100                   # sll         $zero, $zero, 4 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282afcu;
    
label_282b00:
    // 0x282b00: 0x142e40  sll         $a1, $s4, 25
    ctx->pc = 0x282b00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 25));
label_282b04:
    // 0x282b04: 0x800100  .word       0x00800100                   # sll         $zero, $zero, 4 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282b04u;
    
label_282b08:
    // 0x282b08: 0x0  nop
    ctx->pc = 0x282b08u;
    // NOP
label_282b0c:
    // 0x282b0c: 0x0  nop
    ctx->pc = 0x282b0cu;
    // NOP
label_282b10:
    // 0x282b10: 0x5c000206  bgtzl       $zero, . + 4 + (0x206 << 2)
label_282b14:
    if (ctx->pc == 0x282B14u) {
        ctx->pc = 0x282B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B10u;
        // 0x282b14: 0x6400  sll         $t4, $zero, 16 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282B18u;
        goto label_282b18;
    }
    ctx->pc = 0x282B10u;
    {
        const bool branch_taken_0x282b10 = (GPR_S32(ctx, 0) > 0);
        if (branch_taken_0x282b10) {
            ctx->pc = 0x282B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282B10u;
            // 0x282b14: 0x6400  sll         $t4, $zero, 16 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28332Cu;
            { ctx->pc = 0x28332c; return; }
        }
    }
    ctx->pc = 0x282B18u;
label_282b18:
    // 0x282b18: 0x500410  .word       0x00500410                   # mfhi        $zero # 00500400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282b18u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_282b1c:
    // 0x282b1c: 0x59000308  blezl       $t0, . + 4 + (0x308 << 2)
label_282b20:
    if (ctx->pc == 0x282B20u) {
        ctx->pc = 0x282B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B1Cu;
        // 0x282b20: 0x5f00  sll         $t3, $zero, 28 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282B24u;
        goto label_282b24;
    }
    ctx->pc = 0x282B1Cu;
    {
        const bool branch_taken_0x282b1c = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x282b1c) {
            ctx->pc = 0x282B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282B1Cu;
            // 0x282b20: 0x5f00  sll         $t3, $zero, 28 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283740u;
            { ctx->pc = 0x283740; return; }
        }
    }
    ctx->pc = 0x282B24u;
label_282b24:
    // 0x282b24: 0x4b0514  .word       0x004B0514                   # dsllv       $zero, $t3, $v0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282b24u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 11) << (GPR_U32(ctx, 2) & 0x3F));
label_282b28:
    // 0x282b28: 0x5600040a  bnel        $s0, $zero, . + 4 + (0x40A << 2)
label_282b2c:
    if (ctx->pc == 0x282B2Cu) {
        ctx->pc = 0x282B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B28u;
        // 0x282b2c: 0x5a00  sll         $t3, $zero, 8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282B30u;
        goto label_282b30;
    }
    ctx->pc = 0x282B28u;
    {
        const bool branch_taken_0x282b28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x282b28) {
            ctx->pc = 0x282B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282B28u;
            // 0x282b2c: 0x5a00  sll         $t3, $zero, 8 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283B54u;
            { ctx->pc = 0x283b54; return; }
        }
    }
    ctx->pc = 0x282B30u;
label_282b30:
    // 0x282b30: 0x460618  .word       0x00460618                   # mult        $zero, $v0, $a2 # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x282b30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_282b34:
    // 0x282b34: 0x5300050c  beql        $t8, $zero, . + 4 + (0x50C << 2)
label_282b38:
    if (ctx->pc == 0x282B38u) {
        ctx->pc = 0x282B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B34u;
        // 0x282b38: 0x5500  sll         $t2, $zero, 20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282B3Cu;
        goto label_282b3c;
    }
    ctx->pc = 0x282B34u;
    {
        const bool branch_taken_0x282b34 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        if (branch_taken_0x282b34) {
            ctx->pc = 0x282B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282B34u;
            // 0x282b38: 0x5500  sll         $t2, $zero, 20 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283F68u;
            { ctx->pc = 0x283f68; return; }
        }
    }
    ctx->pc = 0x282B3Cu;
label_282b3c:
    // 0x282b3c: 0x41071c  .word       0x0041071C                   # dmult       $v0, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282b3cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x282B3C raw=0x0041071C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_282b40:
    // 0x282b40: 0x5000060e  beql        $zero, $zero, . + 4 + (0x60E << 2)
label_282b44:
    if (ctx->pc == 0x282B44u) {
        ctx->pc = 0x282B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B40u;
        // 0x282b44: 0x5000  sll         $t2, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282B48u;
        goto label_282b48;
    }
    ctx->pc = 0x282B40u;
    {
        const bool branch_taken_0x282b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282b40) {
            ctx->pc = 0x282B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282B40u;
            // 0x282b44: 0x5000  sll         $t2, $zero, 0 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28437Cu;
            { ctx->pc = 0x28437c; return; }
        }
    }
    ctx->pc = 0x282B48u;
label_282b48:
    // 0x282b48: 0x3c0820  add         $at, $at, $gp
    ctx->pc = 0x282b48u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 28);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_282b4c:
    // 0x282b4c: 0x49000714  bc2f        . + 4 + (0x714 << 2)
label_282b50:
    if (ctx->pc == 0x282B50u) {
        ctx->pc = 0x282B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B4Cu;
        // 0x282b50: 0x4b02  srl         $t1, $zero, 12 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282B54u;
        goto label_282b54;
    }
    ctx->pc = 0x282B4Cu;
    {
        const bool branch_taken_0x282b4c = (!(ctx->vu0_status & 0x1));
        ctx->pc = 0x282B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B4Cu;
        // 0x282b50: 0x4b02  srl         $t1, $zero, 12 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b4c) {
            ctx->pc = 0x2847A0u;
            { ctx->pc = 0x2847a0; return; }
        }
    }
    ctx->pc = 0x282B54u;
label_282b54:
    // 0x282b54: 0x370924  .word       0x00370924                   # and         $at, $at, $s7 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282b54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 23));
label_282b58:
    // 0x282b58: 0x43000819  .word       0x43000819                   # INVALID     $t8, $zero, 0x819 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x282b58u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x282B58 raw=0x43000819"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_282b5c:
    // 0x282b5c: 0x5004604  bltz        $t0, . + 4 + (0x4604 << 2)
label_282b60:
    if (ctx->pc == 0x282B60u) {
        ctx->pc = 0x282B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B5Cu;
        // 0x282b60: 0xf320a28  jal         func_CC828A0 (Delay Slot)
        // JAL 0xCC828A0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x282B64u;
        goto label_282b64;
    }
    ctx->pc = 0x282B5Cu;
    {
        const bool branch_taken_0x282b5c = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x282B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B5Cu;
        // 0x282b60: 0xf320a28  jal         func_CC828A0 (Delay Slot)
        // JAL 0xCC828A0 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b5c) {
            ctx->pc = 0x294370u;
            { ctx->pc = 0x294370; return; }
        }
    }
    ctx->pc = 0x282B64u;
label_282b64:
    // 0x282b64: 0x3d00091e  .word       0x3D00091E                   # lui         $zero, 0x91E # 01000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282b64u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)2334 << 16));
label_282b68:
    // 0x282b68: 0x5004106  bltz        $t0, . + 4 + (0x4106 << 2)
label_282b6c:
    if (ctx->pc == 0x282B6Cu) {
        ctx->pc = 0x282B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B68u;
        // 0x282b6c: 0x142d0b2c  bne         $at, $t5, . + 4 + (0xB2C << 2) (Delay Slot)
        // Likely branch instruction at 0x282B6C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x282B70u;
        goto label_282b70;
    }
    ctx->pc = 0x282B68u;
    {
        const bool branch_taken_0x282b68 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x282B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B68u;
        // 0x282b6c: 0x142d0b2c  bne         $at, $t5, . + 4 + (0xB2C << 2) (Delay Slot)
        // Likely branch instruction at 0x282B6C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b68) {
            ctx->pc = 0x292F84u;
            { ctx->pc = 0x292f84; return; }
        }
    }
    ctx->pc = 0x282B70u;
label_282b70:
    // 0x282b70: 0x30050a25  andi        $a1, $zero, 0xA25
    ctx->pc = 0x282b70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)2597);
label_282b74:
    // 0x282b74: 0x5003c08  bltz        $t0, . + 4 + (0x3C08 << 2)
label_282b78:
    if (ctx->pc == 0x282B78u) {
        ctx->pc = 0x282B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B74u;
        // 0x282b78: 0x19280c30  .word       0x19280C30                   # blez        $t1, . + 4 + (0xC30 << 2) # 00080000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x282B78 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x282B7Cu;
        goto label_282b7c;
    }
    ctx->pc = 0x282B74u;
    {
        const bool branch_taken_0x282b74 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x282B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B74u;
        // 0x282b78: 0x19280c30  .word       0x19280C30                   # blez        $t1, . + 4 + (0xC30 << 2) # 00080000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x282B78 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b74) {
            ctx->pc = 0x291B98u;
            { ctx->pc = 0x291b98; return; }
        }
    }
    ctx->pc = 0x282B7Cu;
label_282b7c:
    // 0x282b7c: 0x2c050b28  sltiu       $a1, $zero, 0xB28
    ctx->pc = 0x282b7cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)(int64_t)(int32_t)2856) ? 1 : 0);
label_282b80:
    // 0x282b80: 0x500370a  bltz        $t0, . + 4 + (0x370A << 2)
label_282b84:
    if (ctx->pc == 0x282B84u) {
        ctx->pc = 0x282B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B80u;
        // 0x282b84: 0x1e230d34  .word       0x1E230D34                   # bgtz        $s1, . + 4 + (0xD34 << 2) # 00030000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x282B84 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x282B88u;
        goto label_282b88;
    }
    ctx->pc = 0x282B80u;
    {
        const bool branch_taken_0x282b80 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x282B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B80u;
        // 0x282b84: 0x1e230d34  .word       0x1E230D34                   # bgtz        $s1, . + 4 + (0xD34 << 2) # 00030000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x282B84 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b80) {
            ctx->pc = 0x2907ACu;
            { ctx->pc = 0x2907ac; return; }
        }
    }
    ctx->pc = 0x282B88u;
label_282b88:
    // 0x282b88: 0x30000c28  andi        $zero, $zero, 0xC28
    ctx->pc = 0x282b88u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3112);
label_282b8c:
    // 0x282b8c: 0x500320c  bltz        $t0, . + 4 + (0x320C << 2)
label_282b90:
    if (ctx->pc == 0x282B90u) {
        ctx->pc = 0x282B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B8Cu;
        // 0x282b90: 0x231e0f37  addi        $fp, $t8, 0xF37 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 24), (int32_t)3895, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x282B94u;
        goto label_282b94;
    }
    ctx->pc = 0x282B8Cu;
    {
        const bool branch_taken_0x282b8c = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x282B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B8Cu;
        // 0x282b90: 0x231e0f37  addi        $fp, $t8, 0xF37 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 24), (int32_t)3895, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b8c) {
            ctx->pc = 0x28F3C0u;
            { ctx->pc = 0x28f3c0; return; }
        }
    }
    ctx->pc = 0x282B94u;
label_282b94:
    // 0x282b94: 0x2d000d2a  sltiu       $zero, $t0, 0xD2A
    ctx->pc = 0x282b94u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)3370) ? 1 : 0);
label_282b98:
    // 0x282b98: 0xa002d0e  j           func_800B438
label_282b9c:
    if (ctx->pc == 0x282B9Cu) {
        ctx->pc = 0x282B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B98u;
        // 0x282b9c: 0x281a1139  slti        $k0, $zero, 0x1139 (Delay Slot)
        SET_GPR_U64(ctx, 26, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)4409) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x282BA0u;
        goto label_282ba0;
    }
    ctx->pc = 0x282B98u;
    ctx->pc = 0x282B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282B98u;
    // 0x282b9c: 0x281a1139  slti        $k0, $zero, 0x1139 (Delay Slot)
    SET_GPR_U64(ctx, 26, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)4409) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x800B438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x800B438u, 0x282B98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x282BA0u;
label_282ba0:
    // 0x282ba0: 0x2a000e2c  slti        $zero, $s0, 0xE2C
    ctx->pc = 0x282ba0u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3628) ? 1 : 0);
label_282ba4:
    // 0x282ba4: 0x14002810  bnez        $zero, . + 4 + (0x2810 << 2)
label_282ba8:
    if (ctx->pc == 0x282BA8u) {
        ctx->pc = 0x282BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282BA4u;
        // 0x282ba8: 0x2d16133b  sltiu       $s6, $t0, 0x133B (Delay Slot)
        SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)4923) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x282BACu;
        goto label_282bac;
    }
    ctx->pc = 0x282BA4u;
    {
        const bool branch_taken_0x282ba4 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 0));
        ctx->pc = 0x282BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282BA4u;
        // 0x282ba8: 0x2d16133b  sltiu       $s6, $t0, 0x133B (Delay Slot)
        SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)4923) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282ba4) {
            ctx->pc = 0x28CBE8u;
            { ctx->pc = 0x28cbe8; return; }
        }
    }
    ctx->pc = 0x282BACu;
label_282bac:
    // 0x282bac: 0x27000f2e  addiu       $zero, $t8, 0xF2E
    ctx->pc = 0x282bacu;
    // NOP (addiu $zero, ...)
label_282bb0:
    // 0x282bb0: 0x1e002312  bgtz        $s0, . + 4 + (0x2312 << 2)
label_282bb4:
    if (ctx->pc == 0x282BB4u) {
        ctx->pc = 0x282BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282BB0u;
        // 0x282bb4: 0x3212153d  andi        $s2, $s0, 0x153D (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)5437);
        ctx->in_delay_slot = false;
        ctx->pc = 0x282BB8u;
        goto label_282bb8;
    }
    ctx->pc = 0x282BB0u;
    {
        const bool branch_taken_0x282bb0 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x282BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282BB0u;
        // 0x282bb4: 0x3212153d  andi        $s2, $s0, 0x153D (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)5437);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282bb0) {
            ctx->pc = 0x28B7FCu;
            { ctx->pc = 0x28b7fc; return; }
        }
    }
    ctx->pc = 0x282BB8u;
label_282bb8:
    // 0x282bb8: 0x24001030  addiu       $zero, $zero, 0x1030
    ctx->pc = 0x282bb8u;
    // NOP (addiu $zero, ...)
label_282bbc:
    // 0x282bbc: 0x28001e14  slti        $zero, $zero, 0x1E14
    ctx->pc = 0x282bbcu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)7700) ? 1 : 0);
label_282bc0:
    // 0x282bc0: 0x370e173f  ori         $t6, $t8, 0x173F
    ctx->pc = 0x282bc0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)5951);
label_282bc4:
    // 0x282bc4: 0x1c051132  .word       0x1C051132                   # bgtz        $zero, . + 4 + (0x1132 << 2) # 00050000 <InstrIdType: CPU_NORMAL>
label_282bc8:
    if (ctx->pc == 0x282BC8u) {
        ctx->pc = 0x282BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282BC4u;
        // 0x282bc8: 0x3c051416  lui         $a1, 0x1416 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5142 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282BCCu;
        goto label_282bcc;
    }
    ctx->pc = 0x282BC4u;
    {
        const bool branch_taken_0x282bc4 = (GPR_S32(ctx, 0) > 0);
        ctx->pc = 0x282BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282BC4u;
        // 0x282bc8: 0x3c051416  lui         $a1, 0x1416 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282bc4) {
            ctx->pc = 0x287090u;
            { ctx->pc = 0x287090; return; }
        }
    }
    ctx->pc = 0x282BCCu;
label_282bcc:
    // 0x282bcc: 0x500a2832  beql        $zero, $t2, . + 4 + (0x2832 << 2)
label_282bd0:
    if (ctx->pc == 0x282BD0u) {
        ctx->pc = 0x282BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282BCCu;
        // 0x282bd0: 0xf0a1437  jal         func_C2850DC (Delay Slot)
        // JAL 0xC2850DC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x282BD4u;
        goto label_282bd4;
    }
    ctx->pc = 0x282BCCu;
    {
        const bool branch_taken_0x282bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 10));
        if (branch_taken_0x282bcc) {
            ctx->pc = 0x282BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282BCCu;
            // 0x282bd0: 0xf0a1437  jal         func_C2850DC (Delay Slot)
            // JAL 0xC2850DC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CC98u;
            { ctx->pc = 0x28cc98; return; }
        }
    }
    ctx->pc = 0x282BD4u;
label_282bd4:
    // 0x282bd4: 0x460a0a18  .word       0x460A0A18                   # adda.s      $f1, $f10 # 00000200 <InstrIdType: R5900_COP1_FPUS>
    ctx->pc = 0x282bd4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[10]));
label_282bd8:
    // 0x282bd8: 0x55062737  bnel        $t0, $a2, . + 4 + (0x2737 << 2)
label_282bdc:
    if (ctx->pc == 0x282BDCu) {
        ctx->pc = 0x282BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282BD8u;
        // 0x282bdc: 0x50f143c  .word       0x050F143C                   # INVALID     $t0, $t7, 0x143C # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//         throw std::runtime_error("Unhandled REGIMM instruction: 0xF at 0x282BDC raw=0x050F143C");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x282BE0u;
        goto label_282be0;
    }
    ctx->pc = 0x282BD8u;
    {
        const bool branch_taken_0x282bd8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        if (branch_taken_0x282bd8) {
            ctx->pc = 0x282BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282BD8u;
            // 0x282bdc: 0x50f143c  .word       0x050F143C                   # INVALID     $t0, $t7, 0x143C # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//             throw std::runtime_error("Unhandled REGIMM instruction: 0xF at 0x282BDC raw=0x050F143C");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C8B8u;
            { ctx->pc = 0x28c8b8; return; }
        }
    }
    ctx->pc = 0x282BE0u;
label_282be0:
    // 0x282be0: 0x500f001a  beql        $zero, $t7, . + 4 + (0x1A << 2)
label_282be4:
    if (ctx->pc == 0x282BE4u) {
        ctx->pc = 0x282BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282BE0u;
        // 0x282be4: 0x5a03253c  .word       0x5A03253C                   # blezl       $s0, . + 4 + (0x253C << 2) # 00030000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x282BE4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x282BE8u;
        goto label_282be8;
    }
    ctx->pc = 0x282BE0u;
    {
        const bool branch_taken_0x282be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 15));
        if (branch_taken_0x282be0) {
            ctx->pc = 0x282BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282BE0u;
            // 0x282be4: 0x5a03253c  .word       0x5A03253C                   # blezl       $s0, . + 4 + (0x253C << 2) # 00030000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x282BE4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x282C4Cu;
            goto label_282c4c;
        }
    }
    ctx->pc = 0x282BE8u;
label_282be8:
    // 0x282be8: 0x140f41  .word       0x00140F41                   # INVALID     $zero, $s4, 0xF41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282be8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x282BE8 raw=0x00140F41"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_282bec:
    // 0x282bec: 0x5a14001c  .word       0x5A14001C                   # blezl       $s0, . + 4 + (0x1C << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_282bf0:
    if (ctx->pc == 0x282BF0u) {
        ctx->pc = 0x282BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282BECu;
        // 0x282bf0: 0x5f001e46  bgtzl       $t8, . + 4 + (0x1E46 << 2) (Delay Slot)
        // Likely branch instruction at 0x282BF0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x282BF4u;
        goto label_282bf4;
    }
    ctx->pc = 0x282BECu;
    {
        const bool branch_taken_0x282bec = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x282bec) {
            ctx->pc = 0x282BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282BECu;
            // 0x282bf0: 0x5f001e46  bgtzl       $t8, . + 4 + (0x1E46 << 2) (Delay Slot)
            // Likely branch instruction at 0x282BF0 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x282C60u;
            goto label_282c60;
        }
    }
    ctx->pc = 0x282BF4u;
label_282bf4:
    // 0x282bf4: 0x190d3e  dsrl32      $at, $t9, 20
    ctx->pc = 0x282bf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 25) >> (32 + 20));
label_282bf8:
    // 0x282bf8: 0x641e001e  daddiu      $fp, $zero, 0x1E
    ctx->pc = 0x282bf8u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)30);
label_282bfc:
    // 0x282bfc: 0x64001450  daddiu      $zero, $zero, 0x1450
    ctx->pc = 0x282bfcu;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)5200);
label_282c00:
    // 0x282c00: 0x5105040a  beql        $t0, $a1, . + 4 + (0x40A << 2)
label_282c04:
    if (ctx->pc == 0x282C04u) {
        ctx->pc = 0x282C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282C00u;
        // 0x282c04: 0x55a00  sll         $t3, $a1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282C08u;
        goto label_282c08;
    }
    ctx->pc = 0x282C00u;
    {
        const bool branch_taken_0x282c00 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        if (branch_taken_0x282c00) {
            ctx->pc = 0x282C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282C00u;
            // 0x282c04: 0x55a00  sll         $t3, $a1, 8 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283C2Cu;
            { ctx->pc = 0x283c2c; return; }
        }
    }
    ctx->pc = 0x282C08u;
label_282c08:
    // 0x282c08: 0x460618  .word       0x00460618                   # mult        $zero, $v0, $a2 # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x282c08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_282c0c:
    // 0x282c0c: 0x3e050819  .word       0x3E050819                   # lui         $a1, 0x819 # 02000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2073 << 16));
label_282c10:
    // 0x282c10: 0x5054604  .word       0x05054604                   # INVALID     $t0, $a1, 0x4604 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x282c10u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x282C10 raw=0x05054604");
 /* MITIGATED */
label_282c14:
    // 0x282c14: 0xf320a28  jal         func_CC828A0
label_282c18:
    if (ctx->pc == 0x282C18u) {
        ctx->pc = 0x282C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282C14u;
        // 0x282c18: 0x2b050c28  slti        $a1, $t8, 0xC28 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)3112) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x282C1Cu;
        goto label_282c1c;
    }
    ctx->pc = 0x282C14u;
    SET_GPR_U32(ctx, 31, 0x282C1Cu);
    ctx->pc = 0x282C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282C14u;
    // 0x282c18: 0x2b050c28  slti        $a1, $t8, 0xC28 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)3112) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0xCC828A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xCC828A0u, 0x282C14u, 0x282C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282C1Cu;
label_282c1c:
    // 0x282c1c: 0x505320c  .word       0x0505320C                   # INVALID     $t0, $a1, 0x320C # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x282c1cu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x282C1C raw=0x0505320C");
 /* MITIGATED */
label_282c20:
    // 0x282c20: 0x231e0f37  addi        $fp, $t8, 0xF37
    ctx->pc = 0x282c20u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 24), (int32_t)3895, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
label_282c24:
    // 0x282c24: 0x1f051030  .word       0x1F051030                   # bgtz        $t8, . + 4 + (0x1030 << 2) # 00050000 <InstrIdType: CPU_NORMAL>
label_282c28:
    if (ctx->pc == 0x282C28u) {
        ctx->pc = 0x282C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282C24u;
        // 0x282c28: 0x28051e14  slti        $a1, $zero, 0x1E14 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)7700) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x282C2Cu;
        goto label_282c2c;
    }
    ctx->pc = 0x282C24u;
    {
        const bool branch_taken_0x282c24 = (GPR_S32(ctx, 24) > 0);
        ctx->pc = 0x282C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282C24u;
        // 0x282c28: 0x28051e14  slti        $a1, $zero, 0x1E14 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)7700) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c24) {
            ctx->pc = 0x286CE8u;
            { ctx->pc = 0x286ce8; return; }
        }
    }
    ctx->pc = 0x282C2Cu;
label_282c2c:
    // 0x282c2c: 0x370e173f  ori         $t6, $t8, 0x173F
    ctx->pc = 0x282c2cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)5951);
label_282c30:
    // 0x282c30: 0x5505000a  bnel        $t0, $a1, . + 4 + (0xA << 2)
label_282c34:
    if (ctx->pc == 0x282C34u) {
        ctx->pc = 0x282C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282C30u;
        // 0x282c34: 0x4055a00  .word       0x04055A00                   # INVALID     $zero, $a1, 0x5A00 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//         throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x282C34 raw=0x04055A00");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x282C38u;
        goto label_282c38;
    }
    ctx->pc = 0x282C30u;
    {
        const bool branch_taken_0x282c30 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        if (branch_taken_0x282c30) {
            ctx->pc = 0x282C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282C30u;
            // 0x282c34: 0x4055a00  .word       0x04055A00                   # INVALID     $zero, $a1, 0x5A00 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//             throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x282C34 raw=0x04055A00");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x282C5Cu;
            goto label_282c5c;
        }
    }
    ctx->pc = 0x282C38u;
label_282c38:
    // 0x282c38: 0x4c0018  mult        $zero, $v0, $t4
    ctx->pc = 0x282c38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_282c3c:
    // 0x282c3c: 0x46050019  suba.s      $f0, $f5
    ctx->pc = 0x282c3cu;
    FPU_SET_ACC(ctx, FPU_SUB_S(ctx->f[0], ctx->f[5]));
label_282c40:
    // 0x282c40: 0xd054604  jal         func_4151810
label_282c44:
    if (ctx->pc == 0x282C44u) {
        ctx->pc = 0x282C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282C40u;
        // 0x282c44: 0x3c0028  .word       0x003C0028                   # mfsa        $zero # 003C0000 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 0, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x282C48u;
        goto label_282c48;
    }
    ctx->pc = 0x282C40u;
    SET_GPR_U32(ctx, 31, 0x282C48u);
    ctx->pc = 0x282C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282C40u;
    // 0x282c44: 0x3c0028  .word       0x003C0028                   # mfsa        $zero # 003C0000 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    SET_GPR_U32(ctx, 0, ctx->sa);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4151810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4151810u, 0x282C40u, 0x282C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282C48u;
label_282c48:
    // 0x282c48: 0x37050028  ori         $a1, $t8, 0x28
    ctx->pc = 0x282c48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)40);
label_282c4c:
    // 0x282c4c: 0x1105320c  beq         $t0, $a1, . + 4 + (0x320C << 2)
label_282c50:
    if (ctx->pc == 0x282C50u) {
        ctx->pc = 0x282C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282C4Cu;
        // 0x282c50: 0x2d0037  .word       0x002D0037                   # INVALID     $at, $t5, 0x37 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x282C50 raw=0x002D0037"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x282C54u;
        goto label_282c54;
    }
    ctx->pc = 0x282C4Cu;
    {
        const bool branch_taken_0x282c4c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        ctx->pc = 0x282C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282C4Cu;
        // 0x282c50: 0x2d0037  .word       0x002D0037                   # INVALID     $at, $t5, 0x37 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x282C50 raw=0x002D0037"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c4c) {
            ctx->pc = 0x28F480u;
            { ctx->pc = 0x28f480; return; }
        }
    }
    ctx->pc = 0x282C54u;
label_282c54:
    // 0x282c54: 0x2f050030  sltiu       $a1, $t8, 0x30
    ctx->pc = 0x282c54u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
label_282c58:
    // 0x282c58: 0x38051e14  xori        $a1, $zero, 0x1E14
    ctx->pc = 0x282c58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)7700);
label_282c5c:
    // 0x282c5c: 0x25003f  .word       0x0025003F                   # dsra32      $zero, $a1, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282c5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 5) >> (32 + 0));
label_282c60:
    // 0x282c60: 0x51050e00  beql        $t0, $a1, . + 4 + (0xE00 << 2)
label_282c64:
    if (ctx->pc == 0x282C64u) {
        ctx->pc = 0x282C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282C60u;
        // 0x282c64: 0x55a00  sll         $t3, $a1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282C68u;
        goto label_282c68;
    }
    ctx->pc = 0x282C60u;
    {
        const bool branch_taken_0x282c60 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        if (branch_taken_0x282c60) {
            ctx->pc = 0x282C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282C60u;
            // 0x282c64: 0x55a00  sll         $t3, $a1, 8 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286464u;
            { ctx->pc = 0x286464; return; }
        }
    }
    ctx->pc = 0x282C68u;
label_282c68:
    // 0x282c68: 0x640000  .word       0x00640000                   # sll         $zero, $a0, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282c68u;
    
label_282c6c:
    // 0x282c6c: 0x3e052100  .word       0x3E052100                   # lui         $a1, 0x2100 # 02000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8448 << 16));
label_282c70:
    // 0x282c70: 0x5054600  .word       0x05054600                   # INVALID     $t0, $a1, 0x4600 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x282c70u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x282C70 raw=0x05054600");
 /* MITIGATED */
label_282c74:
    // 0x282c74: 0x640000  .word       0x00640000                   # sll         $zero, $a0, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282c74u;
    
label_282c78:
    // 0x282c78: 0x2b053400  slti        $a1, $t8, 0x3400
    ctx->pc = 0x282c78u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)13312) ? 1 : 0);
label_282c7c:
    // 0x282c7c: 0x5053200  .word       0x05053200                   # INVALID     $t0, $a1, 0x3200 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x282c7cu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x282C7C raw=0x05053200");
 /* MITIGATED */
label_282c80:
    // 0x282c80: 0x640000  .word       0x00640000                   # sll         $zero, $a0, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282c80u;
    
label_282c84:
    // 0x282c84: 0x1f054000  .word       0x1F054000                   # bgtz        $t8, . + 4 + (0x4000 << 2) # 00050000 <InstrIdType: CPU_NORMAL>
label_282c88:
    if (ctx->pc == 0x282C88u) {
        ctx->pc = 0x282C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282C84u;
        // 0x282c88: 0x28051e00  slti        $a1, $zero, 0x1E00 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)7680) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x282C8Cu;
        goto label_282c8c;
    }
    ctx->pc = 0x282C84u;
    {
        const bool branch_taken_0x282c84 = (GPR_S32(ctx, 24) > 0);
        ctx->pc = 0x282C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282C84u;
        // 0x282c88: 0x28051e00  slti        $a1, $zero, 0x1E00 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)7680) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c84) {
            ctx->pc = 0x292C88u;
            { ctx->pc = 0x292c88; return; }
        }
    }
    ctx->pc = 0x282C8Cu;
label_282c8c:
    // 0x282c8c: 0x640000  .word       0x00640000                   # sll         $zero, $a0, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282c8cu;
    
label_282c90:
    // 0x282c90: 0x64000000  daddiu      $zero, $zero, 0x0
    ctx->pc = 0x282c90u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)0);
label_282c94:
    // 0x282c94: 0x55a00  sll         $t3, $a1, 8
    ctx->pc = 0x282c94u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_282c98:
    // 0x282c98: 0x640000  .word       0x00640000                   # sll         $zero, $a0, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282c98u;
    
label_282c9c:
    // 0x282c9c: 0x64000000  daddiu      $zero, $zero, 0x0
    ctx->pc = 0x282c9cu;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)0);
label_282ca0:
    // 0x282ca0: 0x5054600  .word       0x05054600                   # INVALID     $t0, $a1, 0x4600 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x282ca0u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x282CA0 raw=0x05054600");
 /* MITIGATED */
label_282ca4:
    // 0x282ca4: 0x640000  .word       0x00640000                   # sll         $zero, $a0, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282ca4u;
    
label_282ca8:
    // 0x282ca8: 0x64000000  daddiu      $zero, $zero, 0x0
    ctx->pc = 0x282ca8u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)0);
label_282cac:
    // 0x282cac: 0x5053200  .word       0x05053200                   # INVALID     $t0, $a1, 0x3200 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x282cacu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x282CAC raw=0x05053200");
 /* MITIGATED */
label_282cb0:
    // 0x282cb0: 0x640000  .word       0x00640000                   # sll         $zero, $a0, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282cb0u;
    
label_282cb4:
    // 0x282cb4: 0x64000000  daddiu      $zero, $zero, 0x0
    ctx->pc = 0x282cb4u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)0);
label_282cb8:
    // 0x282cb8: 0x28051e00  slti        $a1, $zero, 0x1E00
    ctx->pc = 0x282cb8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)7680) ? 1 : 0);
label_282cbc:
    // 0x282cbc: 0x640000  .word       0x00640000                   # sll         $zero, $a0, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282cbcu;
    
label_282cc0:
    // 0x282cc0: 0x0  nop
    ctx->pc = 0x282cc0u;
    // NOP
label_282cc4:
    // 0x282cc4: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282cc4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282cc8:
    // 0x282cc8: 0x0  nop
    ctx->pc = 0x282cc8u;
    // NOP
label_282ccc:
    // 0x282ccc: 0x0  nop
    ctx->pc = 0x282cccu;
    // NOP
label_282cd0:
    // 0x282cd0: 0x0  nop
    ctx->pc = 0x282cd0u;
    // NOP
label_282cd4:
    // 0x282cd4: 0x0  nop
    ctx->pc = 0x282cd4u;
    // NOP
label_282cd8:
    // 0x282cd8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282cd8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282cdc:
    // 0x282cdc: 0x0  nop
    ctx->pc = 0x282cdcu;
    // NOP
label_282ce0:
    // 0x282ce0: 0x0  nop
    ctx->pc = 0x282ce0u;
    // NOP
label_282ce4:
    // 0x282ce4: 0x0  nop
    ctx->pc = 0x282ce4u;
    // NOP
label_282ce8:
    // 0x282ce8: 0x0  nop
    ctx->pc = 0x282ce8u;
    // NOP
label_282cec:
    // 0x282cec: 0x0  nop
    ctx->pc = 0x282cecu;
    // NOP
label_282cf0:
    // 0x282cf0: 0x0  nop
    ctx->pc = 0x282cf0u;
    // NOP
label_282cf4:
    // 0x282cf4: 0xc3480000  ll          $t0, 0x0($k0)
    ctx->pc = 0x282cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_282cf8:
    // 0x282cf8: 0xc47a0000  lwc1        $f26, 0x0($v1)
    ctx->pc = 0x282cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_282cfc:
    // 0x282cfc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282cfcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282d00:
    // 0x282d00: 0x0  nop
    ctx->pc = 0x282d00u;
    // NOP
label_282d04:
    // 0x282d04: 0xc3480000  ll          $t0, 0x0($k0)
    ctx->pc = 0x282d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_282d08:
    // 0x282d08: 0x0  nop
    ctx->pc = 0x282d08u;
    // NOP
label_282d0c:
    // 0x282d0c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282d0cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282d10:
    // 0x282d10: 0x0  nop
    ctx->pc = 0x282d10u;
    // NOP
label_282d14:
    // 0x282d14: 0x0  nop
    ctx->pc = 0x282d14u;
    // NOP
label_282d18:
    // 0x282d18: 0x0  nop
    ctx->pc = 0x282d18u;
    // NOP
label_282d1c:
    // 0x282d1c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282d1cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282d20:
    // 0x282d20: 0x0  nop
    ctx->pc = 0x282d20u;
    // NOP
label_282d24:
    // 0x282d24: 0x0  nop
    ctx->pc = 0x282d24u;
    // NOP
label_282d28:
    // 0x282d28: 0x0  nop
    ctx->pc = 0x282d28u;
    // NOP
label_282d2c:
    // 0x282d2c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282d2cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282d30:
    // 0x282d30: 0x0  nop
    ctx->pc = 0x282d30u;
    // NOP
label_282d34:
    // 0x282d34: 0x0  nop
    ctx->pc = 0x282d34u;
    // NOP
label_282d38:
    // 0x282d38: 0x0  nop
    ctx->pc = 0x282d38u;
    // NOP
label_282d3c:
    // 0x282d3c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282d3cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282d40:
    // 0x282d40: 0x0  nop
    ctx->pc = 0x282d40u;
    // NOP
label_282d44:
    // 0x282d44: 0x0  nop
    ctx->pc = 0x282d44u;
    // NOP
label_282d48:
    // 0x282d48: 0x0  nop
    ctx->pc = 0x282d48u;
    // NOP
label_282d4c:
    // 0x282d4c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282d4cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282d50:
    // 0x282d50: 0x0  nop
    ctx->pc = 0x282d50u;
    // NOP
label_282d54:
    // 0x282d54: 0x0  nop
    ctx->pc = 0x282d54u;
    // NOP
label_282d58:
    // 0x282d58: 0x422627f0  .word       0x422627F0                   # INVALID     $s1, $a2, 0x27F0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x282d58u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x282D58 raw=0x422627F0"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_282d5c:
    // 0x282d5c: 0x422627f0  .word       0x422627F0                   # INVALID     $s1, $a2, 0x27F0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x282d5cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x282D5C raw=0x422627F0"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_282d60:
    // 0x282d60: 0x0  nop
    ctx->pc = 0x282d60u;
    // NOP
label_282d64:
    // 0x282d64: 0x0  nop
    ctx->pc = 0x282d64u;
    // NOP
label_282d68:
    // 0x282d68: 0x0  nop
    ctx->pc = 0x282d68u;
    // NOP
label_282d6c:
    // 0x282d6c: 0x0  nop
    ctx->pc = 0x282d6cu;
    // NOP
label_282d70:
    // 0x282d70: 0x0  nop
    ctx->pc = 0x282d70u;
    // NOP
label_282d74:
    // 0x282d74: 0x0  nop
    ctx->pc = 0x282d74u;
    // NOP
label_282d78:
    // 0x282d78: 0x0  nop
    ctx->pc = 0x282d78u;
    // NOP
label_282d7c:
    // 0x282d7c: 0x0  nop
    ctx->pc = 0x282d7cu;
    // NOP
label_282d80:
    // 0x282d80: 0x0  nop
    ctx->pc = 0x282d80u;
    // NOP
label_282d84:
    // 0x282d84: 0x4452f08e  .word       0x4452F08E                   # cfc1        $s2, $30 # 0000008E <InstrIdType: R5900_COP1>
    ctx->pc = 0x282d84u;
    SET_GPR_U32(ctx, 18, 0); // Unimplemented FCR30
label_282d88:
    // 0x282d88: 0x0  nop
    ctx->pc = 0x282d88u;
    // NOP
label_282d8c:
    // 0x282d8c: 0x0  nop
    ctx->pc = 0x282d8cu;
    // NOP
label_282d90:
    // 0x282d90: 0x0  nop
    ctx->pc = 0x282d90u;
    // NOP
label_282d94:
    // 0x282d94: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x282d94u;
    
label_282d98:
    // 0x282d98: 0xe0  .word       0x000000E0                   # add         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282d98u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_282d9c:
    // 0x282d9c: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x282d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_282da0:
    // 0x282da0: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x282da0u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_282da4:
    // 0x282da4: 0x0  nop
    ctx->pc = 0x282da4u;
    // NOP
label_282da8:
    // 0x282da8: 0x0  nop
    ctx->pc = 0x282da8u;
    // NOP
label_282dac:
    // 0x282dac: 0x0  nop
    ctx->pc = 0x282dacu;
    // NOP
label_282db0:
    // 0x282db0: 0x0  nop
    ctx->pc = 0x282db0u;
    // NOP
label_282db4:
    // 0x282db4: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282db4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282db8:
    // 0x282db8: 0x0  nop
    ctx->pc = 0x282db8u;
    // NOP
label_282dbc:
    // 0x282dbc: 0x0  nop
    ctx->pc = 0x282dbcu;
    // NOP
label_282dc0:
    // 0x282dc0: 0x0  nop
    ctx->pc = 0x282dc0u;
    // NOP
label_282dc4:
    // 0x282dc4: 0x0  nop
    ctx->pc = 0x282dc4u;
    // NOP
label_282dc8:
    // 0x282dc8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282dc8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282dcc:
    // 0x282dcc: 0x0  nop
    ctx->pc = 0x282dccu;
    // NOP
label_282dd0:
    // 0x282dd0: 0x0  nop
    ctx->pc = 0x282dd0u;
    // NOP
label_282dd4:
    // 0x282dd4: 0x0  nop
    ctx->pc = 0x282dd4u;
    // NOP
label_282dd8:
    // 0x282dd8: 0x0  nop
    ctx->pc = 0x282dd8u;
    // NOP
label_282ddc:
    // 0x282ddc: 0x0  nop
    ctx->pc = 0x282ddcu;
    // NOP
label_282de0:
    // 0x282de0: 0x0  nop
    ctx->pc = 0x282de0u;
    // NOP
label_282de4:
    // 0x282de4: 0xc3480000  ll          $t0, 0x0($k0)
    ctx->pc = 0x282de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_282de8:
    // 0x282de8: 0xc47a0000  lwc1        $f26, 0x0($v1)
    ctx->pc = 0x282de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_282dec:
    // 0x282dec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282decu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282df0:
    // 0x282df0: 0x0  nop
    ctx->pc = 0x282df0u;
    // NOP
label_282df4:
    // 0x282df4: 0xc3480000  ll          $t0, 0x0($k0)
    ctx->pc = 0x282df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_282df8:
    // 0x282df8: 0x0  nop
    ctx->pc = 0x282df8u;
    // NOP
label_282dfc:
    // 0x282dfc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282dfcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282e00:
    // 0x282e00: 0x0  nop
    ctx->pc = 0x282e00u;
    // NOP
label_282e04:
    // 0x282e04: 0x0  nop
    ctx->pc = 0x282e04u;
    // NOP
label_282e08:
    // 0x282e08: 0x0  nop
    ctx->pc = 0x282e08u;
    // NOP
label_282e0c:
    // 0x282e0c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282e0cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282e10:
    // 0x282e10: 0x0  nop
    ctx->pc = 0x282e10u;
    // NOP
label_282e14:
    // 0x282e14: 0x0  nop
    ctx->pc = 0x282e14u;
    // NOP
label_282e18:
    // 0x282e18: 0x0  nop
    ctx->pc = 0x282e18u;
    // NOP
label_282e1c:
    // 0x282e1c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282e1cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282e20:
    // 0x282e20: 0x0  nop
    ctx->pc = 0x282e20u;
    // NOP
label_282e24:
    // 0x282e24: 0x0  nop
    ctx->pc = 0x282e24u;
    // NOP
label_282e28:
    // 0x282e28: 0x0  nop
    ctx->pc = 0x282e28u;
    // NOP
label_282e2c:
    // 0x282e2c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282e2cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282e30:
    // 0x282e30: 0x0  nop
    ctx->pc = 0x282e30u;
    // NOP
label_282e34:
    // 0x282e34: 0x0  nop
    ctx->pc = 0x282e34u;
    // NOP
label_282e38:
    // 0x282e38: 0x0  nop
    ctx->pc = 0x282e38u;
    // NOP
label_282e3c:
    // 0x282e3c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282e3cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282e40:
    // 0x282e40: 0x0  nop
    ctx->pc = 0x282e40u;
    // NOP
label_282e44:
    // 0x282e44: 0x0  nop
    ctx->pc = 0x282e44u;
    // NOP
label_282e48:
    // 0x282e48: 0x422627f0  .word       0x422627F0                   # INVALID     $s1, $a2, 0x27F0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x282e48u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x282E48 raw=0x422627F0"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_282e4c:
    // 0x282e4c: 0x422627f0  .word       0x422627F0                   # INVALID     $s1, $a2, 0x27F0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x282e4cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x282E4C raw=0x422627F0"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_282e50:
    // 0x282e50: 0x0  nop
    ctx->pc = 0x282e50u;
    // NOP
label_282e54:
    // 0x282e54: 0x0  nop
    ctx->pc = 0x282e54u;
    // NOP
label_282e58:
    // 0x282e58: 0x0  nop
    ctx->pc = 0x282e58u;
    // NOP
label_282e5c:
    // 0x282e5c: 0x0  nop
    ctx->pc = 0x282e5cu;
    // NOP
label_282e60:
    // 0x282e60: 0x0  nop
    ctx->pc = 0x282e60u;
    // NOP
label_282e64:
    // 0x282e64: 0x0  nop
    ctx->pc = 0x282e64u;
    // NOP
label_282e68:
    // 0x282e68: 0x0  nop
    ctx->pc = 0x282e68u;
    // NOP
label_282e6c:
    // 0x282e6c: 0x0  nop
    ctx->pc = 0x282e6cu;
    // NOP
label_282e70:
    // 0x282e70: 0x0  nop
    ctx->pc = 0x282e70u;
    // NOP
label_282e74:
    // 0x282e74: 0x4452f08e  .word       0x4452F08E                   # cfc1        $s2, $30 # 0000008E <InstrIdType: R5900_COP1>
    ctx->pc = 0x282e74u;
    SET_GPR_U32(ctx, 18, 0); // Unimplemented FCR30
label_282e78:
    // 0x282e78: 0x0  nop
    ctx->pc = 0x282e78u;
    // NOP
label_282e7c:
    // 0x282e7c: 0x0  nop
    ctx->pc = 0x282e7cu;
    // NOP
label_282e80:
    // 0x282e80: 0x0  nop
    ctx->pc = 0x282e80u;
    // NOP
label_282e84:
    // 0x282e84: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x282e84u;
    
label_282e88:
    // 0x282e88: 0xe0  .word       0x000000E0                   # add         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282e88u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_282e8c:
    // 0x282e8c: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x282e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_282e90:
    // 0x282e90: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x282e90u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_282e94:
    // 0x282e94: 0x0  nop
    ctx->pc = 0x282e94u;
    // NOP
label_282e98:
    // 0x282e98: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282e98u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x282E98 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_282e9c:
    // 0x282e9c: 0x0  nop
    ctx->pc = 0x282e9cu;
    // NOP
label_282ea0:
    // 0x282ea0: 0x5e9  .word       0x000005E9                   # mtsa        $zero # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x282ea0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_282ea4:
    // 0x282ea4: 0x5e9  .word       0x000005E9                   # mtsa        $zero # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x282ea4u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_282ea8:
    // 0x282ea8: 0x5ea  .word       0x000005EA                   # slt         $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282ea8u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_282eac:
    // 0x282eac: 0x5eb  .word       0x000005EB                   # sltu        $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282eacu;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_282eb0:
    // 0x282eb0: 0x5eb  .word       0x000005EB                   # sltu        $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282eb0u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_282eb4:
    // 0x282eb4: 0x5eb  .word       0x000005EB                   # sltu        $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282eb4u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_282eb8:
    // 0x282eb8: 0x5eb  .word       0x000005EB                   # sltu        $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282eb8u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_282ebc:
    // 0x282ebc: 0x5e9  .word       0x000005E9                   # mtsa        $zero # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x282ebcu;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_282ec0:
    // 0x282ec0: 0x5eb  .word       0x000005EB                   # sltu        $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282ec0u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_282ec4:
    // 0x282ec4: 0x5e9  .word       0x000005E9                   # mtsa        $zero # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x282ec4u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_282ec8:
    // 0x282ec8: 0x5e9  .word       0x000005E9                   # mtsa        $zero # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x282ec8u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_282ecc:
    // 0x282ecc: 0x5eb  .word       0x000005EB                   # sltu        $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282eccu;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_282ed0:
    // 0x282ed0: 0x5e9  .word       0x000005E9                   # mtsa        $zero # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x282ed0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_282ed4:
    // 0x282ed4: 0x5e9  .word       0x000005E9                   # mtsa        $zero # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x282ed4u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_282ed8:
    // 0x282ed8: 0x5e9  .word       0x000005E9                   # mtsa        $zero # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x282ed8u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_282edc:
    // 0x282edc: 0x5e9  .word       0x000005E9                   # mtsa        $zero # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x282edcu;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_282ee0:
    // 0x282ee0: 0x5eb  .word       0x000005EB                   # sltu        $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282ee0u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_282ee4:
    // 0x282ee4: 0x5e9  .word       0x000005E9                   # mtsa        $zero # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x282ee4u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_282ee8:
    // 0x282ee8: 0x5eb  .word       0x000005EB                   # sltu        $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282ee8u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_282eec:
    // 0x282eec: 0x5eb  .word       0x000005EB                   # sltu        $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282eecu;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_282ef0:
    // 0x282ef0: 0x5e9  .word       0x000005E9                   # mtsa        $zero # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x282ef0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_282ef4:
    // 0x282ef4: 0x5eb  .word       0x000005EB                   # sltu        $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282ef4u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_282ef8:
    // 0x282ef8: 0x5ec  .word       0x000005EC                   # dadd        $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282ef8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_282efc:
    // 0x282efc: 0x5eb  .word       0x000005EB                   # sltu        $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282efcu;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_282f00:
    // 0x282f00: 0x5eb  .word       0x000005EB                   # sltu        $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282f00u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_282f04:
    // 0x282f04: 0x5eb  .word       0x000005EB                   # sltu        $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282f04u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_282f08:
    // 0x282f08: 0x5eb  .word       0x000005EB                   # sltu        $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282f08u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_282f0c:
    // 0x282f0c: 0x5e9  .word       0x000005E9                   # mtsa        $zero # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x282f0cu;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_282f10:
    // 0x282f10: 0x5e9  .word       0x000005E9                   # mtsa        $zero # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x282f10u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_282f14:
    // 0x282f14: 0x5e9  .word       0x000005E9                   # mtsa        $zero # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x282f14u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_282f18:
    // 0x282f18: 0x5e9  .word       0x000005E9                   # mtsa        $zero # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x282f18u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_282f1c:
    // 0x282f1c: 0x5eb  .word       0x000005EB                   # sltu        $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282f1cu;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_282f20:
    // 0x282f20: 0x5e9  .word       0x000005E9                   # mtsa        $zero # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x282f20u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_282f24:
    // 0x282f24: 0x5ec  .word       0x000005EC                   # dadd        $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282f24u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_282f28:
    // 0x282f28: 0x5eb  .word       0x000005EB                   # sltu        $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282f28u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_282f2c:
    // 0x282f2c: 0x5eb  .word       0x000005EB                   # sltu        $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282f2cu;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_282f30:
    // 0x282f30: 0x5e9  .word       0x000005E9                   # mtsa        $zero # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x282f30u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_282f34:
    // 0x282f34: 0x5e9  .word       0x000005E9                   # mtsa        $zero # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x282f34u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_282f38:
    // 0x282f38: 0x5e9  .word       0x000005E9                   # mtsa        $zero # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x282f38u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_282f3c:
    // 0x282f3c: 0x5e9  .word       0x000005E9                   # mtsa        $zero # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x282f3cu;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_282f40:
    // 0x282f40: 0x5e9  .word       0x000005E9                   # mtsa        $zero # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x282f40u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_282f44:
    // 0x282f44: 0x0  nop
    ctx->pc = 0x282f44u;
    // NOP
label_282f48:
    // 0x282f48: 0x0  nop
    ctx->pc = 0x282f48u;
    // NOP
label_282f4c:
    // 0x282f4c: 0x0  nop
    ctx->pc = 0x282f4cu;
    // NOP
label_282f50:
    // 0x282f50: 0x0  nop
    ctx->pc = 0x282f50u;
    // NOP
label_282f54:
    // 0x282f54: 0x0  nop
    ctx->pc = 0x282f54u;
    // NOP
label_282f58:
    // 0x282f58: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282f58u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282f5c:
    // 0x282f5c: 0x0  nop
    ctx->pc = 0x282f5cu;
    // NOP
label_282f60:
    // 0x282f60: 0x0  nop
    ctx->pc = 0x282f60u;
    // NOP
label_282f64:
    // 0x282f64: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282f64u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282f68:
    // 0x282f68: 0x0  nop
    ctx->pc = 0x282f68u;
    // NOP
label_282f6c:
    // 0x282f6c: 0x0  nop
    ctx->pc = 0x282f6cu;
    // NOP
label_282f70:
    // 0x282f70: 0x0  nop
    ctx->pc = 0x282f70u;
    // NOP
label_282f74:
    // 0x282f74: 0x0  nop
    ctx->pc = 0x282f74u;
    // NOP
label_282f78:
    // 0x282f78: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282f78u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282f7c:
    // 0x282f7c: 0x0  nop
    ctx->pc = 0x282f7cu;
    // NOP
label_282f80:
    // 0x282f80: 0x0  nop
    ctx->pc = 0x282f80u;
    // NOP
label_282f84:
    // 0x282f84: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282f84u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282f88:
    // 0x282f88: 0x0  nop
    ctx->pc = 0x282f88u;
    // NOP
label_282f8c:
    // 0x282f8c: 0x0  nop
    ctx->pc = 0x282f8cu;
    // NOP
label_282f90:
    // 0x282f90: 0x0  nop
    ctx->pc = 0x282f90u;
    // NOP
label_282f94:
    // 0x282f94: 0x0  nop
    ctx->pc = 0x282f94u;
    // NOP
label_282f98:
    // 0x282f98: 0x43960000  .word       0x43960000                   # INVALID     $gp, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x282f98u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x282F98 raw=0x43960000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_282f9c:
    // 0x282f9c: 0x0  nop
    ctx->pc = 0x282f9cu;
    // NOP
label_282fa0:
    // 0x282fa0: 0x0  nop
    ctx->pc = 0x282fa0u;
    // NOP
label_282fa4:
    // 0x282fa4: 0x0  nop
    ctx->pc = 0x282fa4u;
    // NOP
label_282fa8:
    // 0x282fa8: 0x0  nop
    ctx->pc = 0x282fa8u;
    // NOP
label_282fac:
    // 0x282fac: 0x0  nop
    ctx->pc = 0x282facu;
    // NOP
label_282fb0:
    // 0x282fb0: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282fb0u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282fb4:
    // 0x282fb4: 0xbe2aaaab  cache       0x0A, -0x5555($s1)
    ctx->pc = 0x282fb4u;
    // CACHE instruction (ignored)
label_282fb8:
    // 0x282fb8: 0x3c088889  lui         $t0, 0x8889
    ctx->pc = 0x282fb8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)34953 << 16));
label_282fbc:
    // 0x282fbc: 0xb9500d01  swr         $s0, 0xD01($t2)
    ctx->pc = 0x282fbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 3329); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_282fc0:
    // 0x282fc0: 0xbf000000  cache       0x00, 0x0($t8)
    ctx->pc = 0x282fc0u;
    // CACHE instruction (ignored)
label_282fc4:
    // 0x282fc4: 0x3d2aaaab  .word       0x3D2AAAAB                   # lui         $t2, 0xAAAB # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282fc4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43691 << 16));
label_282fc8:
    // 0x282fc8: 0xbab60b61  swr         $s6, 0xB61($s5)
    ctx->pc = 0x282fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 2913); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 22); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_282fcc:
    // 0x282fcc: 0x37d00d01  ori         $s0, $fp, 0xD01
    ctx->pc = 0x282fccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)3329);
label_282fd0:
    // 0x282fd0: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x282fd0u;
    // CACHE instruction (ignored)
label_282fd4:
    // 0x282fd4: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x282fd4u;
    // CACHE instruction (ignored)
label_282fd8:
    // 0x282fd8: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x282fd8u;
    // CACHE instruction (ignored)
label_282fdc:
    // 0x282fdc: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x282fdcu;
    // CACHE instruction (ignored)
label_282fe0:
    // 0x282fe0: 0x3f7ffff5  .word       0x3F7FFFF5                   # lui         $ra, 0xFFF5 # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282fe0u;
    SET_GPR_S32(ctx, 31, (int32_t)((uint32_t)65525 << 16));
label_282fe4:
    // 0x282fe4: 0xbeaaa61c  cache       0x0A, -0x59E4($s5)
    ctx->pc = 0x282fe4u;
    // CACHE instruction (ignored)
label_282fe8:
    // 0x282fe8: 0x3e4c40a6  .word       0x3E4C40A6                   # lui         $t4, 0x40A6 # 02400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282fe8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16550 << 16));
label_282fec:
    // 0x282fec: 0xbe0e6c63  cache       0x0E, 0x6C63($s0)
    ctx->pc = 0x282fecu;
    // CACHE instruction (ignored)
    ctx->pc = 0x282ff0u;
    return;
}

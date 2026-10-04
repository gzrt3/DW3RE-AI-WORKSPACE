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


void FUN_0014eba0_part574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x266830u: goto label_266830;
        case 0x266834u: goto label_266834;
        case 0x266838u: goto label_266838;
        case 0x26683cu: goto label_26683c;
        case 0x266840u: goto label_266840;
        case 0x266844u: goto label_266844;
        case 0x266848u: goto label_266848;
        case 0x26684cu: goto label_26684c;
        case 0x266850u: goto label_266850;
        case 0x266854u: goto label_266854;
        case 0x266858u: goto label_266858;
        case 0x26685cu: goto label_26685c;
        case 0x266860u: goto label_266860;
        case 0x266864u: goto label_266864;
        case 0x266868u: goto label_266868;
        case 0x26686cu: goto label_26686c;
        case 0x266870u: goto label_266870;
        case 0x266874u: goto label_266874;
        case 0x266878u: goto label_266878;
        case 0x26687cu: goto label_26687c;
        case 0x266880u: goto label_266880;
        case 0x266884u: goto label_266884;
        case 0x266888u: goto label_266888;
        case 0x26688cu: goto label_26688c;
        case 0x266890u: goto label_266890;
        case 0x266894u: goto label_266894;
        case 0x266898u: goto label_266898;
        case 0x26689cu: goto label_26689c;
        case 0x2668a0u: goto label_2668a0;
        case 0x2668a4u: goto label_2668a4;
        case 0x2668a8u: goto label_2668a8;
        case 0x2668acu: goto label_2668ac;
        case 0x2668b0u: goto label_2668b0;
        case 0x2668b4u: goto label_2668b4;
        case 0x2668b8u: goto label_2668b8;
        case 0x2668bcu: goto label_2668bc;
        case 0x2668c0u: goto label_2668c0;
        case 0x2668c4u: goto label_2668c4;
        case 0x2668c8u: goto label_2668c8;
        case 0x2668ccu: goto label_2668cc;
        case 0x2668d0u: goto label_2668d0;
        case 0x2668d4u: goto label_2668d4;
        case 0x2668d8u: goto label_2668d8;
        case 0x2668dcu: goto label_2668dc;
        case 0x2668e0u: goto label_2668e0;
        case 0x2668e4u: goto label_2668e4;
        case 0x2668e8u: goto label_2668e8;
        case 0x2668ecu: goto label_2668ec;
        case 0x2668f0u: goto label_2668f0;
        case 0x2668f4u: goto label_2668f4;
        case 0x2668f8u: goto label_2668f8;
        case 0x2668fcu: goto label_2668fc;
        case 0x266900u: goto label_266900;
        case 0x266904u: goto label_266904;
        case 0x266908u: goto label_266908;
        case 0x26690cu: goto label_26690c;
        case 0x266910u: goto label_266910;
        case 0x266914u: goto label_266914;
        case 0x266918u: goto label_266918;
        case 0x26691cu: goto label_26691c;
        case 0x266920u: goto label_266920;
        case 0x266924u: goto label_266924;
        case 0x266928u: goto label_266928;
        case 0x26692cu: goto label_26692c;
        case 0x266930u: goto label_266930;
        case 0x266934u: goto label_266934;
        case 0x266938u: goto label_266938;
        case 0x26693cu: goto label_26693c;
        case 0x266940u: goto label_266940;
        case 0x266944u: goto label_266944;
        case 0x266948u: goto label_266948;
        case 0x26694cu: goto label_26694c;
        case 0x266950u: goto label_266950;
        case 0x266954u: goto label_266954;
        case 0x266958u: goto label_266958;
        case 0x26695cu: goto label_26695c;
        case 0x266960u: goto label_266960;
        case 0x266964u: goto label_266964;
        case 0x266968u: goto label_266968;
        case 0x26696cu: goto label_26696c;
        case 0x266970u: goto label_266970;
        case 0x266974u: goto label_266974;
        case 0x266978u: goto label_266978;
        case 0x26697cu: goto label_26697c;
        case 0x266980u: goto label_266980;
        case 0x266984u: goto label_266984;
        case 0x266988u: goto label_266988;
        case 0x26698cu: goto label_26698c;
        case 0x266990u: goto label_266990;
        case 0x266994u: goto label_266994;
        case 0x266998u: goto label_266998;
        case 0x26699cu: goto label_26699c;
        case 0x2669a0u: goto label_2669a0;
        case 0x2669a4u: goto label_2669a4;
        case 0x2669a8u: goto label_2669a8;
        case 0x2669acu: goto label_2669ac;
        case 0x2669b0u: goto label_2669b0;
        case 0x2669b4u: goto label_2669b4;
        case 0x2669b8u: goto label_2669b8;
        case 0x2669bcu: goto label_2669bc;
        case 0x2669c0u: goto label_2669c0;
        case 0x2669c4u: goto label_2669c4;
        case 0x2669c8u: goto label_2669c8;
        case 0x2669ccu: goto label_2669cc;
        case 0x2669d0u: goto label_2669d0;
        case 0x2669d4u: goto label_2669d4;
        case 0x2669d8u: goto label_2669d8;
        case 0x2669dcu: goto label_2669dc;
        case 0x2669e0u: goto label_2669e0;
        case 0x2669e4u: goto label_2669e4;
        case 0x2669e8u: goto label_2669e8;
        case 0x2669ecu: goto label_2669ec;
        case 0x2669f0u: goto label_2669f0;
        case 0x2669f4u: goto label_2669f4;
        case 0x2669f8u: goto label_2669f8;
        case 0x2669fcu: goto label_2669fc;
        case 0x266a00u: goto label_266a00;
        case 0x266a04u: goto label_266a04;
        case 0x266a08u: goto label_266a08;
        case 0x266a0cu: goto label_266a0c;
        case 0x266a10u: goto label_266a10;
        case 0x266a14u: goto label_266a14;
        case 0x266a18u: goto label_266a18;
        case 0x266a1cu: goto label_266a1c;
        case 0x266a20u: goto label_266a20;
        case 0x266a24u: goto label_266a24;
        case 0x266a28u: goto label_266a28;
        case 0x266a2cu: goto label_266a2c;
        case 0x266a30u: goto label_266a30;
        case 0x266a34u: goto label_266a34;
        case 0x266a38u: goto label_266a38;
        case 0x266a3cu: goto label_266a3c;
        case 0x266a40u: goto label_266a40;
        case 0x266a44u: goto label_266a44;
        case 0x266a48u: goto label_266a48;
        case 0x266a4cu: goto label_266a4c;
        case 0x266a50u: goto label_266a50;
        case 0x266a54u: goto label_266a54;
        case 0x266a58u: goto label_266a58;
        case 0x266a5cu: goto label_266a5c;
        case 0x266a60u: goto label_266a60;
        case 0x266a64u: goto label_266a64;
        case 0x266a68u: goto label_266a68;
        case 0x266a6cu: goto label_266a6c;
        case 0x266a70u: goto label_266a70;
        case 0x266a74u: goto label_266a74;
        case 0x266a78u: goto label_266a78;
        case 0x266a7cu: goto label_266a7c;
        case 0x266a80u: goto label_266a80;
        case 0x266a84u: goto label_266a84;
        case 0x266a88u: goto label_266a88;
        case 0x266a8cu: goto label_266a8c;
        case 0x266a90u: goto label_266a90;
        case 0x266a94u: goto label_266a94;
        case 0x266a98u: goto label_266a98;
        case 0x266a9cu: goto label_266a9c;
        case 0x266aa0u: goto label_266aa0;
        case 0x266aa4u: goto label_266aa4;
        case 0x266aa8u: goto label_266aa8;
        case 0x266aacu: goto label_266aac;
        case 0x266ab0u: goto label_266ab0;
        case 0x266ab4u: goto label_266ab4;
        case 0x266ab8u: goto label_266ab8;
        case 0x266abcu: goto label_266abc;
        case 0x266ac0u: goto label_266ac0;
        case 0x266ac4u: goto label_266ac4;
        case 0x266ac8u: goto label_266ac8;
        case 0x266accu: goto label_266acc;
        case 0x266ad0u: goto label_266ad0;
        case 0x266ad4u: goto label_266ad4;
        case 0x266ad8u: goto label_266ad8;
        case 0x266adcu: goto label_266adc;
        case 0x266ae0u: goto label_266ae0;
        case 0x266ae4u: goto label_266ae4;
        case 0x266ae8u: goto label_266ae8;
        case 0x266aecu: goto label_266aec;
        case 0x266af0u: goto label_266af0;
        case 0x266af4u: goto label_266af4;
        case 0x266af8u: goto label_266af8;
        case 0x266afcu: goto label_266afc;
        case 0x266b00u: goto label_266b00;
        case 0x266b04u: goto label_266b04;
        case 0x266b08u: goto label_266b08;
        case 0x266b0cu: goto label_266b0c;
        case 0x266b10u: goto label_266b10;
        case 0x266b14u: goto label_266b14;
        case 0x266b18u: goto label_266b18;
        case 0x266b1cu: goto label_266b1c;
        case 0x266b20u: goto label_266b20;
        case 0x266b24u: goto label_266b24;
        case 0x266b28u: goto label_266b28;
        case 0x266b2cu: goto label_266b2c;
        case 0x266b30u: goto label_266b30;
        case 0x266b34u: goto label_266b34;
        case 0x266b38u: goto label_266b38;
        case 0x266b3cu: goto label_266b3c;
        case 0x266b40u: goto label_266b40;
        case 0x266b44u: goto label_266b44;
        case 0x266b48u: goto label_266b48;
        case 0x266b4cu: goto label_266b4c;
        case 0x266b50u: goto label_266b50;
        case 0x266b54u: goto label_266b54;
        case 0x266b58u: goto label_266b58;
        case 0x266b5cu: goto label_266b5c;
        case 0x266b60u: goto label_266b60;
        case 0x266b64u: goto label_266b64;
        case 0x266b68u: goto label_266b68;
        case 0x266b6cu: goto label_266b6c;
        case 0x266b70u: goto label_266b70;
        case 0x266b74u: goto label_266b74;
        case 0x266b78u: goto label_266b78;
        case 0x266b7cu: goto label_266b7c;
        case 0x266b80u: goto label_266b80;
        case 0x266b84u: goto label_266b84;
        case 0x266b88u: goto label_266b88;
        case 0x266b8cu: goto label_266b8c;
        case 0x266b90u: goto label_266b90;
        case 0x266b94u: goto label_266b94;
        case 0x266b98u: goto label_266b98;
        case 0x266b9cu: goto label_266b9c;
        case 0x266ba0u: goto label_266ba0;
        case 0x266ba4u: goto label_266ba4;
        case 0x266ba8u: goto label_266ba8;
        case 0x266bacu: goto label_266bac;
        case 0x266bb0u: goto label_266bb0;
        case 0x266bb4u: goto label_266bb4;
        case 0x266bb8u: goto label_266bb8;
        case 0x266bbcu: goto label_266bbc;
        case 0x266bc0u: goto label_266bc0;
        case 0x266bc4u: goto label_266bc4;
        case 0x266bc8u: goto label_266bc8;
        case 0x266bccu: goto label_266bcc;
        case 0x266bd0u: goto label_266bd0;
        case 0x266bd4u: goto label_266bd4;
        case 0x266bd8u: goto label_266bd8;
        case 0x266bdcu: goto label_266bdc;
        case 0x266be0u: goto label_266be0;
        case 0x266be4u: goto label_266be4;
        case 0x266be8u: goto label_266be8;
        case 0x266becu: goto label_266bec;
        case 0x266bf0u: goto label_266bf0;
        case 0x266bf4u: goto label_266bf4;
        case 0x266bf8u: goto label_266bf8;
        case 0x266bfcu: goto label_266bfc;
        case 0x266c00u: goto label_266c00;
        case 0x266c04u: goto label_266c04;
        case 0x266c08u: goto label_266c08;
        case 0x266c0cu: goto label_266c0c;
        case 0x266c10u: goto label_266c10;
        case 0x266c14u: goto label_266c14;
        case 0x266c18u: goto label_266c18;
        case 0x266c1cu: goto label_266c1c;
        case 0x266c20u: goto label_266c20;
        case 0x266c24u: goto label_266c24;
        case 0x266c28u: goto label_266c28;
        case 0x266c2cu: goto label_266c2c;
        case 0x266c30u: goto label_266c30;
        case 0x266c34u: goto label_266c34;
        case 0x266c38u: goto label_266c38;
        case 0x266c3cu: goto label_266c3c;
        case 0x266c40u: goto label_266c40;
        case 0x266c44u: goto label_266c44;
        case 0x266c48u: goto label_266c48;
        case 0x266c4cu: goto label_266c4c;
        case 0x266c50u: goto label_266c50;
        case 0x266c54u: goto label_266c54;
        case 0x266c58u: goto label_266c58;
        case 0x266c5cu: goto label_266c5c;
        case 0x266c60u: goto label_266c60;
        case 0x266c64u: goto label_266c64;
        case 0x266c68u: goto label_266c68;
        case 0x266c6cu: goto label_266c6c;
        case 0x266c70u: goto label_266c70;
        case 0x266c74u: goto label_266c74;
        case 0x266c78u: goto label_266c78;
        case 0x266c7cu: goto label_266c7c;
        case 0x266c80u: goto label_266c80;
        case 0x266c84u: goto label_266c84;
        case 0x266c88u: goto label_266c88;
        case 0x266c8cu: goto label_266c8c;
        case 0x266c90u: goto label_266c90;
        case 0x266c94u: goto label_266c94;
        case 0x266c98u: goto label_266c98;
        case 0x266c9cu: goto label_266c9c;
        case 0x266ca0u: goto label_266ca0;
        case 0x266ca4u: goto label_266ca4;
        case 0x266ca8u: goto label_266ca8;
        case 0x266cacu: goto label_266cac;
        case 0x266cb0u: goto label_266cb0;
        case 0x266cb4u: goto label_266cb4;
        case 0x266cb8u: goto label_266cb8;
        case 0x266cbcu: goto label_266cbc;
        case 0x266cc0u: goto label_266cc0;
        case 0x266cc4u: goto label_266cc4;
        case 0x266cc8u: goto label_266cc8;
        case 0x266cccu: goto label_266ccc;
        case 0x266cd0u: goto label_266cd0;
        case 0x266cd4u: goto label_266cd4;
        case 0x266cd8u: goto label_266cd8;
        case 0x266cdcu: goto label_266cdc;
        case 0x266ce0u: goto label_266ce0;
        case 0x266ce4u: goto label_266ce4;
        case 0x266ce8u: goto label_266ce8;
        case 0x266cecu: goto label_266cec;
        case 0x266cf0u: goto label_266cf0;
        case 0x266cf4u: goto label_266cf4;
        case 0x266cf8u: goto label_266cf8;
        case 0x266cfcu: goto label_266cfc;
        case 0x266d00u: goto label_266d00;
        case 0x266d04u: goto label_266d04;
        case 0x266d08u: goto label_266d08;
        case 0x266d0cu: goto label_266d0c;
        case 0x266d10u: goto label_266d10;
        case 0x266d14u: goto label_266d14;
        case 0x266d18u: goto label_266d18;
        case 0x266d1cu: goto label_266d1c;
        case 0x266d20u: goto label_266d20;
        case 0x266d24u: goto label_266d24;
        case 0x266d28u: goto label_266d28;
        case 0x266d2cu: goto label_266d2c;
        case 0x266d30u: goto label_266d30;
        case 0x266d34u: goto label_266d34;
        case 0x266d38u: goto label_266d38;
        case 0x266d3cu: goto label_266d3c;
        case 0x266d40u: goto label_266d40;
        case 0x266d44u: goto label_266d44;
        case 0x266d48u: goto label_266d48;
        case 0x266d4cu: goto label_266d4c;
        case 0x266d50u: goto label_266d50;
        case 0x266d54u: goto label_266d54;
        case 0x266d58u: goto label_266d58;
        case 0x266d5cu: goto label_266d5c;
        case 0x266d60u: goto label_266d60;
        case 0x266d64u: goto label_266d64;
        case 0x266d68u: goto label_266d68;
        case 0x266d6cu: goto label_266d6c;
        case 0x266d70u: goto label_266d70;
        case 0x266d74u: goto label_266d74;
        case 0x266d78u: goto label_266d78;
        case 0x266d7cu: goto label_266d7c;
        case 0x266d80u: goto label_266d80;
        case 0x266d84u: goto label_266d84;
        case 0x266d88u: goto label_266d88;
        case 0x266d8cu: goto label_266d8c;
        case 0x266d90u: goto label_266d90;
        case 0x266d94u: goto label_266d94;
        case 0x266d98u: goto label_266d98;
        case 0x266d9cu: goto label_266d9c;
        case 0x266da0u: goto label_266da0;
        case 0x266da4u: goto label_266da4;
        case 0x266da8u: goto label_266da8;
        case 0x266dacu: goto label_266dac;
        case 0x266db0u: goto label_266db0;
        case 0x266db4u: goto label_266db4;
        case 0x266db8u: goto label_266db8;
        case 0x266dbcu: goto label_266dbc;
        case 0x266dc0u: goto label_266dc0;
        case 0x266dc4u: goto label_266dc4;
        case 0x266dc8u: goto label_266dc8;
        case 0x266dccu: goto label_266dcc;
        case 0x266dd0u: goto label_266dd0;
        case 0x266dd4u: goto label_266dd4;
        case 0x266dd8u: goto label_266dd8;
        case 0x266ddcu: goto label_266ddc;
        case 0x266de0u: goto label_266de0;
        case 0x266de4u: goto label_266de4;
        case 0x266de8u: goto label_266de8;
        case 0x266decu: goto label_266dec;
        case 0x266df0u: goto label_266df0;
        case 0x266df4u: goto label_266df4;
        case 0x266df8u: goto label_266df8;
        case 0x266dfcu: goto label_266dfc;
        case 0x266e00u: goto label_266e00;
        case 0x266e04u: goto label_266e04;
        case 0x266e08u: goto label_266e08;
        case 0x266e0cu: goto label_266e0c;
        case 0x266e10u: goto label_266e10;
        case 0x266e14u: goto label_266e14;
        case 0x266e18u: goto label_266e18;
        case 0x266e1cu: goto label_266e1c;
        case 0x266e20u: goto label_266e20;
        case 0x266e24u: goto label_266e24;
        case 0x266e28u: goto label_266e28;
        case 0x266e2cu: goto label_266e2c;
        case 0x266e30u: goto label_266e30;
        case 0x266e34u: goto label_266e34;
        case 0x266e38u: goto label_266e38;
        case 0x266e3cu: goto label_266e3c;
        case 0x266e40u: goto label_266e40;
        case 0x266e44u: goto label_266e44;
        case 0x266e48u: goto label_266e48;
        case 0x266e4cu: goto label_266e4c;
        case 0x266e50u: goto label_266e50;
        case 0x266e54u: goto label_266e54;
        case 0x266e58u: goto label_266e58;
        case 0x266e5cu: goto label_266e5c;
        case 0x266e60u: goto label_266e60;
        case 0x266e64u: goto label_266e64;
        case 0x266e68u: goto label_266e68;
        case 0x266e6cu: goto label_266e6c;
        case 0x266e70u: goto label_266e70;
        case 0x266e74u: goto label_266e74;
        case 0x266e78u: goto label_266e78;
        case 0x266e7cu: goto label_266e7c;
        case 0x266e80u: goto label_266e80;
        case 0x266e84u: goto label_266e84;
        case 0x266e88u: goto label_266e88;
        case 0x266e8cu: goto label_266e8c;
        case 0x266e90u: goto label_266e90;
        case 0x266e94u: goto label_266e94;
        case 0x266e98u: goto label_266e98;
        case 0x266e9cu: goto label_266e9c;
        case 0x266ea0u: goto label_266ea0;
        case 0x266ea4u: goto label_266ea4;
        case 0x266ea8u: goto label_266ea8;
        case 0x266eacu: goto label_266eac;
        case 0x266eb0u: goto label_266eb0;
        case 0x266eb4u: goto label_266eb4;
        case 0x266eb8u: goto label_266eb8;
        case 0x266ebcu: goto label_266ebc;
        case 0x266ec0u: goto label_266ec0;
        case 0x266ec4u: goto label_266ec4;
        case 0x266ec8u: goto label_266ec8;
        case 0x266eccu: goto label_266ecc;
        case 0x266ed0u: goto label_266ed0;
        case 0x266ed4u: goto label_266ed4;
        case 0x266ed8u: goto label_266ed8;
        case 0x266edcu: goto label_266edc;
        case 0x266ee0u: goto label_266ee0;
        case 0x266ee4u: goto label_266ee4;
        case 0x266ee8u: goto label_266ee8;
        case 0x266eecu: goto label_266eec;
        case 0x266ef0u: goto label_266ef0;
        case 0x266ef4u: goto label_266ef4;
        case 0x266ef8u: goto label_266ef8;
        case 0x266efcu: goto label_266efc;
        case 0x266f00u: goto label_266f00;
        case 0x266f04u: goto label_266f04;
        case 0x266f08u: goto label_266f08;
        case 0x266f0cu: goto label_266f0c;
        case 0x266f10u: goto label_266f10;
        case 0x266f14u: goto label_266f14;
        case 0x266f18u: goto label_266f18;
        case 0x266f1cu: goto label_266f1c;
        case 0x266f20u: goto label_266f20;
        case 0x266f24u: goto label_266f24;
        case 0x266f28u: goto label_266f28;
        case 0x266f2cu: goto label_266f2c;
        case 0x266f30u: goto label_266f30;
        case 0x266f34u: goto label_266f34;
        case 0x266f38u: goto label_266f38;
        case 0x266f3cu: goto label_266f3c;
        case 0x266f40u: goto label_266f40;
        case 0x266f44u: goto label_266f44;
        case 0x266f48u: goto label_266f48;
        case 0x266f4cu: goto label_266f4c;
        case 0x266f50u: goto label_266f50;
        case 0x266f54u: goto label_266f54;
        case 0x266f58u: goto label_266f58;
        case 0x266f5cu: goto label_266f5c;
        case 0x266f60u: goto label_266f60;
        case 0x266f64u: goto label_266f64;
        case 0x266f68u: goto label_266f68;
        case 0x266f6cu: goto label_266f6c;
        case 0x266f70u: goto label_266f70;
        case 0x266f74u: goto label_266f74;
        case 0x266f78u: goto label_266f78;
        case 0x266f7cu: goto label_266f7c;
        case 0x266f80u: goto label_266f80;
        case 0x266f84u: goto label_266f84;
        case 0x266f88u: goto label_266f88;
        case 0x266f8cu: goto label_266f8c;
        case 0x266f90u: goto label_266f90;
        case 0x266f94u: goto label_266f94;
        case 0x266f98u: goto label_266f98;
        case 0x266f9cu: goto label_266f9c;
        case 0x266fa0u: goto label_266fa0;
        case 0x266fa4u: goto label_266fa4;
        case 0x266fa8u: goto label_266fa8;
        case 0x266facu: goto label_266fac;
        case 0x266fb0u: goto label_266fb0;
        case 0x266fb4u: goto label_266fb4;
        case 0x266fb8u: goto label_266fb8;
        case 0x266fbcu: goto label_266fbc;
        case 0x266fc0u: goto label_266fc0;
        case 0x266fc4u: goto label_266fc4;
        case 0x266fc8u: goto label_266fc8;
        case 0x266fccu: goto label_266fcc;
        case 0x266fd0u: goto label_266fd0;
        case 0x266fd4u: goto label_266fd4;
        case 0x266fd8u: goto label_266fd8;
        case 0x266fdcu: goto label_266fdc;
        case 0x266fe0u: goto label_266fe0;
        case 0x266fe4u: goto label_266fe4;
        case 0x266fe8u: goto label_266fe8;
        case 0x266fecu: goto label_266fec;
        case 0x266ff0u: goto label_266ff0;
        case 0x266ff4u: goto label_266ff4;
        case 0x266ff8u: goto label_266ff8;
        case 0x266ffcu: goto label_266ffc;
        default: return;
    }

label_266830:
    // 0x266830: 0x10abc  dsll32      $at, $at, 10
    ctx->pc = 0x266830u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << (32 + 10));
label_266834:
    // 0x266834: 0x5990  .word       0x00005990                   # mfhi        $t3 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266834u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_266838:
    // 0x266838: 0x0  nop
    ctx->pc = 0x266838u;
    // NOP
label_26683c:
    // 0x26683c: 0x0  nop
    ctx->pc = 0x26683cu;
    // NOP
label_266840:
    // 0x266840: 0x10ac8  .word       0x00010AC8                   # jr          $zero # 00010AC0 <InstrIdType: CPU_SPECIAL>
label_266844:
    if (ctx->pc == 0x266844u) {
        ctx->pc = 0x266844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266840u;
        // 0x266844: 0x5a80  sll         $t3, $zero, 10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266848u;
        goto label_266848;
    }
    ctx->pc = 0x266840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x266844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266840u;
        // 0x266844: 0x5a80  sll         $t3, $zero, 10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266840u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x266848u;
label_266848:
    // 0x266848: 0x0  nop
    ctx->pc = 0x266848u;
    // NOP
label_26684c:
    // 0x26684c: 0x0  nop
    ctx->pc = 0x26684cu;
    // NOP
label_266850:
    // 0x266850: 0x10ad4  .word       0x00010AD4                   # dsllv       $at, $at, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266850u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_266854:
    // 0x266854: 0x99b0  tge         $zero, $zero, 614
    ctx->pc = 0x266854u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266858:
    // 0x266858: 0x0  nop
    ctx->pc = 0x266858u;
    // NOP
label_26685c:
    // 0x26685c: 0x0  nop
    ctx->pc = 0x26685cu;
    // NOP
label_266860:
    // 0x266860: 0x10ae8  .word       0x00010AE8                   # mfsa        $at # 000102C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x266860u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_266864:
    // 0x266864: 0x75c0  sll         $t6, $zero, 23
    ctx->pc = 0x266864u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_266868:
    // 0x266868: 0x0  nop
    ctx->pc = 0x266868u;
    // NOP
label_26686c:
    // 0x26686c: 0x0  nop
    ctx->pc = 0x26686cu;
    // NOP
label_266870:
    // 0x266870: 0x10af7  .word       0x00010AF7                   # INVALID     $zero, $at, 0xAF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266870u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x266870 raw=0x00010AF7");
 /* MITIGATED */
label_266874:
    // 0x266874: 0x7e00  sll         $t7, $zero, 24
    ctx->pc = 0x266874u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_266878:
    // 0x266878: 0x0  nop
    ctx->pc = 0x266878u;
    // NOP
label_26687c:
    // 0x26687c: 0x0  nop
    ctx->pc = 0x26687cu;
    // NOP
label_266880:
    // 0x266880: 0x10b07  .word       0x00010B07                   # srav        $at, $at, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266880u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_266884:
    // 0x266884: 0x5f40  sll         $t3, $zero, 29
    ctx->pc = 0x266884u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_266888:
    // 0x266888: 0x0  nop
    ctx->pc = 0x266888u;
    // NOP
label_26688c:
    // 0x26688c: 0x0  nop
    ctx->pc = 0x26688cu;
    // NOP
label_266890:
    // 0x266890: 0x10b13  .word       0x00010B13                   # mtlo        $zero # 00010B00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266890u;
    ctx->lo = GPR_U64(ctx, 0);
label_266894:
    // 0x266894: 0x4530  tge         $zero, $zero, 276
    ctx->pc = 0x266894u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266898:
    // 0x266898: 0x0  nop
    ctx->pc = 0x266898u;
    // NOP
label_26689c:
    // 0x26689c: 0x0  nop
    ctx->pc = 0x26689cu;
    // NOP
label_2668a0:
    // 0x2668a0: 0x10b1c  .word       0x00010B1C                   # dmult       $zero, $at # 00000B00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2668a0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2668A0 raw=0x00010B1C");
 /* MITIGATED */
label_2668a4:
    // 0x2668a4: 0x8f60  .word       0x00008F60                   # add         $s1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2668a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2668a8:
    // 0x2668a8: 0x0  nop
    ctx->pc = 0x2668a8u;
    // NOP
label_2668ac:
    // 0x2668ac: 0x0  nop
    ctx->pc = 0x2668acu;
    // NOP
label_2668b0:
    // 0x2668b0: 0x10b2e  .word       0x00010B2E                   # dsub        $at, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2668b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_2668b4:
    // 0x2668b4: 0x2270  tge         $zero, $zero, 137
    ctx->pc = 0x2668b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2668b8:
    // 0x2668b8: 0x0  nop
    ctx->pc = 0x2668b8u;
    // NOP
label_2668bc:
    // 0x2668bc: 0x0  nop
    ctx->pc = 0x2668bcu;
    // NOP
label_2668c0:
    // 0x2668c0: 0x10b33  tltu        $zero, $at, 44
    ctx->pc = 0x2668c0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2668c4:
    // 0x2668c4: 0x73e0  .word       0x000073E0                   # add         $t6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2668c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2668c8:
    // 0x2668c8: 0x0  nop
    ctx->pc = 0x2668c8u;
    // NOP
label_2668cc:
    // 0x2668cc: 0x0  nop
    ctx->pc = 0x2668ccu;
    // NOP
label_2668d0:
    // 0x2668d0: 0x10b42  srl         $at, $at, 13
    ctx->pc = 0x2668d0u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 1), 13));
label_2668d4:
    // 0x2668d4: 0x9d00  sll         $s3, $zero, 20
    ctx->pc = 0x2668d4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_2668d8:
    // 0x2668d8: 0x0  nop
    ctx->pc = 0x2668d8u;
    // NOP
label_2668dc:
    // 0x2668dc: 0x0  nop
    ctx->pc = 0x2668dcu;
    // NOP
label_2668e0:
    // 0x2668e0: 0x10b56  .word       0x00010B56                   # dsrlv       $at, $at, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2668e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_2668e4:
    // 0x2668e4: 0x4c70  tge         $zero, $zero, 305
    ctx->pc = 0x2668e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2668e8:
    // 0x2668e8: 0x0  nop
    ctx->pc = 0x2668e8u;
    // NOP
label_2668ec:
    // 0x2668ec: 0x0  nop
    ctx->pc = 0x2668ecu;
    // NOP
label_2668f0:
    // 0x2668f0: 0x10b60  .word       0x00010B60                   # add         $at, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2668f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_2668f4:
    // 0x2668f4: 0x3840  sll         $a3, $zero, 1
    ctx->pc = 0x2668f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_2668f8:
    // 0x2668f8: 0x0  nop
    ctx->pc = 0x2668f8u;
    // NOP
label_2668fc:
    // 0x2668fc: 0x0  nop
    ctx->pc = 0x2668fcu;
    // NOP
label_266900:
    // 0x266900: 0x10b68  .word       0x00010B68                   # mfsa        $at # 00010340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x266900u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_266904:
    // 0x266904: 0x4e50  .word       0x00004E50                   # mfhi        $t1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266904u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_266908:
    // 0x266908: 0x0  nop
    ctx->pc = 0x266908u;
    // NOP
label_26690c:
    // 0x26690c: 0x0  nop
    ctx->pc = 0x26690cu;
    // NOP
label_266910:
    // 0x266910: 0x10b72  tlt         $zero, $at, 45
    ctx->pc = 0x266910u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_266914:
    // 0x266914: 0x55a0  .word       0x000055A0                   # add         $t2, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266914u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_266918:
    // 0x266918: 0x0  nop
    ctx->pc = 0x266918u;
    // NOP
label_26691c:
    // 0x26691c: 0x0  nop
    ctx->pc = 0x26691cu;
    // NOP
label_266920:
    // 0x266920: 0x10b7d  .word       0x00010B7D                   # INVALID     $zero, $at, 0xB7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266920u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x266920 raw=0x00010B7D");
 /* MITIGATED */
label_266924:
    // 0x266924: 0x7640  sll         $t6, $zero, 25
    ctx->pc = 0x266924u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_266928:
    // 0x266928: 0x0  nop
    ctx->pc = 0x266928u;
    // NOP
label_26692c:
    // 0x26692c: 0x0  nop
    ctx->pc = 0x26692cu;
    // NOP
label_266930:
    // 0x266930: 0x10b8c  .word       0x00010B8C                   # syscall     46 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266930u;
    ctx->pc = 0x266934u;
runtime->handleSyscall(rdram, ctx, 0x42Eu);
label_266934:
    // 0x266934: 0x5b70  tge         $zero, $zero, 365
    ctx->pc = 0x266934u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266938:
    // 0x266938: 0x0  nop
    ctx->pc = 0x266938u;
    // NOP
label_26693c:
    // 0x26693c: 0x0  nop
    ctx->pc = 0x26693cu;
    // NOP
label_266940:
    // 0x266940: 0x10b98  .word       0x00010B98                   # mult        $at, $zero, $at # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x266940u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_266944:
    // 0x266944: 0x8980  sll         $s1, $zero, 6
    ctx->pc = 0x266944u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_266948:
    // 0x266948: 0x0  nop
    ctx->pc = 0x266948u;
    // NOP
label_26694c:
    // 0x26694c: 0x0  nop
    ctx->pc = 0x26694cu;
    // NOP
label_266950:
    // 0x266950: 0x10baa  .word       0x00010BAA                   # slt         $at, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266950u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_266954:
    // 0x266954: 0xd1d0  .word       0x0000D1D0                   # mfhi        $k0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266954u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_266958:
    // 0x266958: 0x0  nop
    ctx->pc = 0x266958u;
    // NOP
label_26695c:
    // 0x26695c: 0x0  nop
    ctx->pc = 0x26695cu;
    // NOP
label_266960:
    // 0x266960: 0x10bc5  .word       0x00010BC5                   # INVALID     $zero, $at, 0xBC5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266960u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x266960 raw=0x00010BC5");
 /* MITIGATED */
label_266964:
    // 0x266964: 0x9360  .word       0x00009360                   # add         $s2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266964u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_266968:
    // 0x266968: 0x0  nop
    ctx->pc = 0x266968u;
    // NOP
label_26696c:
    // 0x26696c: 0x0  nop
    ctx->pc = 0x26696cu;
    // NOP
label_266970:
    // 0x266970: 0x10bd8  .word       0x00010BD8                   # mult        $at, $zero, $at # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x266970u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_266974:
    // 0x266974: 0x9140  sll         $s2, $zero, 5
    ctx->pc = 0x266974u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_266978:
    // 0x266978: 0x0  nop
    ctx->pc = 0x266978u;
    // NOP
label_26697c:
    // 0x26697c: 0x0  nop
    ctx->pc = 0x26697cu;
    // NOP
label_266980:
    // 0x266980: 0x10beb  .word       0x00010BEB                   # sltu        $at, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266980u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_266984:
    // 0x266984: 0x4fc0  sll         $t1, $zero, 31
    ctx->pc = 0x266984u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_266988:
    // 0x266988: 0x0  nop
    ctx->pc = 0x266988u;
    // NOP
label_26698c:
    // 0x26698c: 0x0  nop
    ctx->pc = 0x26698cu;
    // NOP
label_266990:
    // 0x266990: 0x10bf5  .word       0x00010BF5                   # INVALID     $zero, $at, 0xBF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266990u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x266990 raw=0x00010BF5");
 /* MITIGATED */
label_266994:
    // 0x266994: 0x3f80  sll         $a3, $zero, 30
    ctx->pc = 0x266994u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_266998:
    // 0x266998: 0x0  nop
    ctx->pc = 0x266998u;
    // NOP
label_26699c:
    // 0x26699c: 0x0  nop
    ctx->pc = 0x26699cu;
    // NOP
label_2669a0:
    // 0x2669a0: 0x10bfd  .word       0x00010BFD                   # INVALID     $zero, $at, 0xBFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2669a0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2669A0 raw=0x00010BFD");
 /* MITIGATED */
label_2669a4:
    // 0x2669a4: 0x92a0  .word       0x000092A0                   # add         $s2, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2669a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2669a8:
    // 0x2669a8: 0x0  nop
    ctx->pc = 0x2669a8u;
    // NOP
label_2669ac:
    // 0x2669ac: 0x0  nop
    ctx->pc = 0x2669acu;
    // NOP
label_2669b0:
    // 0x2669b0: 0x10c10  .word       0x00010C10                   # mfhi        $at # 00010400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2669b0u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_2669b4:
    // 0x2669b4: 0x4dd0  .word       0x00004DD0                   # mfhi        $t1 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2669b4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_2669b8:
    // 0x2669b8: 0x0  nop
    ctx->pc = 0x2669b8u;
    // NOP
label_2669bc:
    // 0x2669bc: 0x0  nop
    ctx->pc = 0x2669bcu;
    // NOP
label_2669c0:
    // 0x2669c0: 0x10c1a  .word       0x00010C1A                   # div         $at, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2669c0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2669c4:
    // 0x2669c4: 0x92b0  tge         $zero, $zero, 586
    ctx->pc = 0x2669c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2669c8:
    // 0x2669c8: 0x0  nop
    ctx->pc = 0x2669c8u;
    // NOP
label_2669cc:
    // 0x2669cc: 0x0  nop
    ctx->pc = 0x2669ccu;
    // NOP
label_2669d0:
    // 0x2669d0: 0x10c2d  .word       0x00010C2D                   # daddu       $at, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2669d0u;
    SET_GPR_U64(ctx, 1, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_2669d4:
    // 0x2669d4: 0x54d0  .word       0x000054D0                   # mfhi        $t2 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2669d4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_2669d8:
    // 0x2669d8: 0x0  nop
    ctx->pc = 0x2669d8u;
    // NOP
label_2669dc:
    // 0x2669dc: 0x0  nop
    ctx->pc = 0x2669dcu;
    // NOP
label_2669e0:
    // 0x2669e0: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x2669e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
label_2669e4:
    // 0x2669e4: 0x43c0  sll         $t0, $zero, 15
    ctx->pc = 0x2669e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_2669e8:
    // 0x2669e8: 0x0  nop
    ctx->pc = 0x2669e8u;
    // NOP
label_2669ec:
    // 0x2669ec: 0x0  nop
    ctx->pc = 0x2669ecu;
    // NOP
label_2669f0:
    // 0x2669f0: 0x10c41  .word       0x00010C41                   # INVALID     $zero, $at, 0xC41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2669f0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2669F0 raw=0x00010C41");
 /* MITIGATED */
label_2669f4:
    // 0x2669f4: 0x5fd0  .word       0x00005FD0                   # mfhi        $t3 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2669f4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2669f8:
    // 0x2669f8: 0x0  nop
    ctx->pc = 0x2669f8u;
    // NOP
label_2669fc:
    // 0x2669fc: 0x0  nop
    ctx->pc = 0x2669fcu;
    // NOP
label_266a00:
    // 0x266a00: 0x10c4d  break       1, 49
    ctx->pc = 0x266a00u;
    runtime->handleBreak(rdram, ctx);
label_266a04:
    // 0x266a04: 0x1e60  .word       0x00001E60                   # add         $v1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266a04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_266a08:
    // 0x266a08: 0x0  nop
    ctx->pc = 0x266a08u;
    // NOP
label_266a0c:
    // 0x266a0c: 0x0  nop
    ctx->pc = 0x266a0cu;
    // NOP
label_266a10:
    // 0x266a10: 0x10c51  .word       0x00010C51                   # mthi        $zero # 00010C40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266a10u;
    ctx->hi = GPR_U64(ctx, 0);
label_266a14:
    // 0x266a14: 0x2820  add         $a1, $zero, $zero
    ctx->pc = 0x266a14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_266a18:
    // 0x266a18: 0x0  nop
    ctx->pc = 0x266a18u;
    // NOP
label_266a1c:
    // 0x266a1c: 0x0  nop
    ctx->pc = 0x266a1cu;
    // NOP
label_266a20:
    // 0x266a20: 0x10c57  .word       0x00010C57                   # dsrav       $at, $at, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266a20u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_266a24:
    // 0x266a24: 0x3990  .word       0x00003990                   # mfhi        $a3 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266a24u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_266a28:
    // 0x266a28: 0x0  nop
    ctx->pc = 0x266a28u;
    // NOP
label_266a2c:
    // 0x266a2c: 0x0  nop
    ctx->pc = 0x266a2cu;
    // NOP
label_266a30:
    // 0x266a30: 0x10c5f  .word       0x00010C5F                   # ddivu       $at, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266a30u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x266A30 raw=0x00010C5F");
 /* MITIGATED */
label_266a34:
    // 0x266a34: 0x4280  sll         $t0, $zero, 10
    ctx->pc = 0x266a34u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_266a38:
    // 0x266a38: 0x0  nop
    ctx->pc = 0x266a38u;
    // NOP
label_266a3c:
    // 0x266a3c: 0x0  nop
    ctx->pc = 0x266a3cu;
    // NOP
label_266a40:
    // 0x266a40: 0x10c68  .word       0x00010C68                   # mfsa        $at # 00010440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x266a40u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_266a44:
    // 0x266a44: 0x47f0  tge         $zero, $zero, 287
    ctx->pc = 0x266a44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266a48:
    // 0x266a48: 0x0  nop
    ctx->pc = 0x266a48u;
    // NOP
label_266a4c:
    // 0x266a4c: 0x0  nop
    ctx->pc = 0x266a4cu;
    // NOP
label_266a50:
    // 0x266a50: 0x10c71  tgeu        $zero, $at, 49
    ctx->pc = 0x266a50u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_266a54:
    // 0x266a54: 0x40c0  sll         $t0, $zero, 3
    ctx->pc = 0x266a54u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_266a58:
    // 0x266a58: 0x0  nop
    ctx->pc = 0x266a58u;
    // NOP
label_266a5c:
    // 0x266a5c: 0x0  nop
    ctx->pc = 0x266a5cu;
    // NOP
label_266a60:
    // 0x266a60: 0x10c7a  dsrl        $at, $at, 17
    ctx->pc = 0x266a60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) >> 17);
label_266a64:
    // 0x266a64: 0x5400  sll         $t2, $zero, 16
    ctx->pc = 0x266a64u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_266a68:
    // 0x266a68: 0x0  nop
    ctx->pc = 0x266a68u;
    // NOP
label_266a6c:
    // 0x266a6c: 0x0  nop
    ctx->pc = 0x266a6cu;
    // NOP
label_266a70:
    // 0x266a70: 0x10c85  .word       0x00010C85                   # INVALID     $zero, $at, 0xC85 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266a70u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x266A70 raw=0x00010C85");
 /* MITIGATED */
label_266a74:
    // 0x266a74: 0x4fa0  .word       0x00004FA0                   # add         $t1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266a74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_266a78:
    // 0x266a78: 0x0  nop
    ctx->pc = 0x266a78u;
    // NOP
label_266a7c:
    // 0x266a7c: 0x0  nop
    ctx->pc = 0x266a7cu;
    // NOP
label_266a80:
    // 0x266a80: 0x10c8f  .word       0x00010C8F                   # sync.p # 00010800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266a80u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_266a84:
    // 0x266a84: 0x4640  sll         $t0, $zero, 25
    ctx->pc = 0x266a84u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_266a88:
    // 0x266a88: 0x0  nop
    ctx->pc = 0x266a88u;
    // NOP
label_266a8c:
    // 0x266a8c: 0x0  nop
    ctx->pc = 0x266a8cu;
    // NOP
label_266a90:
    // 0x266a90: 0x10c98  .word       0x00010C98                   # mult        $at, $zero, $at # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x266a90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_266a94:
    // 0x266a94: 0x4aa0  .word       0x00004AA0                   # add         $t1, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266a94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_266a98:
    // 0x266a98: 0x0  nop
    ctx->pc = 0x266a98u;
    // NOP
label_266a9c:
    // 0x266a9c: 0x0  nop
    ctx->pc = 0x266a9cu;
    // NOP
label_266aa0:
    // 0x266aa0: 0x10ca2  .word       0x00010CA2                   # neg         $at, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266aa0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_266aa4:
    // 0x266aa4: 0x5e70  tge         $zero, $zero, 377
    ctx->pc = 0x266aa4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266aa8:
    // 0x266aa8: 0x0  nop
    ctx->pc = 0x266aa8u;
    // NOP
label_266aac:
    // 0x266aac: 0x0  nop
    ctx->pc = 0x266aacu;
    // NOP
label_266ab0:
    // 0x266ab0: 0x10cae  .word       0x00010CAE                   # dsub        $at, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266ab0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_266ab4:
    // 0x266ab4: 0x6ac0  sll         $t5, $zero, 11
    ctx->pc = 0x266ab4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_266ab8:
    // 0x266ab8: 0x0  nop
    ctx->pc = 0x266ab8u;
    // NOP
label_266abc:
    // 0x266abc: 0x0  nop
    ctx->pc = 0x266abcu;
    // NOP
label_266ac0:
    // 0x266ac0: 0x10cbc  dsll32      $at, $at, 18
    ctx->pc = 0x266ac0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << (32 + 18));
label_266ac4:
    // 0x266ac4: 0x32c0  sll         $a2, $zero, 11
    ctx->pc = 0x266ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_266ac8:
    // 0x266ac8: 0x0  nop
    ctx->pc = 0x266ac8u;
    // NOP
label_266acc:
    // 0x266acc: 0x0  nop
    ctx->pc = 0x266accu;
    // NOP
label_266ad0:
    // 0x266ad0: 0x10cc3  sra         $at, $at, 19
    ctx->pc = 0x266ad0u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 1), 19));
label_266ad4:
    // 0x266ad4: 0x4bb0  tge         $zero, $zero, 302
    ctx->pc = 0x266ad4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266ad8:
    // 0x266ad8: 0x0  nop
    ctx->pc = 0x266ad8u;
    // NOP
label_266adc:
    // 0x266adc: 0x0  nop
    ctx->pc = 0x266adcu;
    // NOP
label_266ae0:
    // 0x266ae0: 0x10ccd  break       1, 51
    ctx->pc = 0x266ae0u;
    runtime->handleBreak(rdram, ctx);
label_266ae4:
    // 0x266ae4: 0x4550  .word       0x00004550                   # mfhi        $t0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266ae4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_266ae8:
    // 0x266ae8: 0x0  nop
    ctx->pc = 0x266ae8u;
    // NOP
label_266aec:
    // 0x266aec: 0x0  nop
    ctx->pc = 0x266aecu;
    // NOP
label_266af0:
    // 0x266af0: 0x10cd6  .word       0x00010CD6                   # dsrlv       $at, $at, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266af0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_266af4:
    // 0x266af4: 0x42d0  .word       0x000042D0                   # mfhi        $t0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266af4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_266af8:
    // 0x266af8: 0x0  nop
    ctx->pc = 0x266af8u;
    // NOP
label_266afc:
    // 0x266afc: 0x0  nop
    ctx->pc = 0x266afcu;
    // NOP
label_266b00:
    // 0x266b00: 0x10cdf  .word       0x00010CDF                   # ddivu       $at, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266b00u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x266B00 raw=0x00010CDF");
 /* MITIGATED */
label_266b04:
    // 0x266b04: 0x3ec0  sll         $a3, $zero, 27
    ctx->pc = 0x266b04u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_266b08:
    // 0x266b08: 0x0  nop
    ctx->pc = 0x266b08u;
    // NOP
label_266b0c:
    // 0x266b0c: 0x0  nop
    ctx->pc = 0x266b0cu;
    // NOP
label_266b10:
    // 0x266b10: 0x10ce7  .word       0x00010CE7                   # nor         $at, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266b10u;
    SET_GPR_U64(ctx, 1, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_266b14:
    // 0x266b14: 0x41a0  .word       0x000041A0                   # add         $t0, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266b14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_266b18:
    // 0x266b18: 0x0  nop
    ctx->pc = 0x266b18u;
    // NOP
label_266b1c:
    // 0x266b1c: 0x0  nop
    ctx->pc = 0x266b1cu;
    // NOP
label_266b20:
    // 0x266b20: 0x10cf0  tge         $zero, $at, 51
    ctx->pc = 0x266b20u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_266b24:
    // 0x266b24: 0x4290  .word       0x00004290                   # mfhi        $t0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266b24u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_266b28:
    // 0x266b28: 0x0  nop
    ctx->pc = 0x266b28u;
    // NOP
label_266b2c:
    // 0x266b2c: 0x0  nop
    ctx->pc = 0x266b2cu;
    // NOP
label_266b30:
    // 0x266b30: 0x10cf9  .word       0x00010CF9                   # INVALID     $zero, $at, 0xCF9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266b30u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x266B30 raw=0x00010CF9");
 /* MITIGATED */
label_266b34:
    // 0x266b34: 0x3920  .word       0x00003920                   # add         $a3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266b34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_266b38:
    // 0x266b38: 0x0  nop
    ctx->pc = 0x266b38u;
    // NOP
label_266b3c:
    // 0x266b3c: 0x0  nop
    ctx->pc = 0x266b3cu;
    // NOP
label_266b40:
    // 0x266b40: 0x10d01  .word       0x00010D01                   # INVALID     $zero, $at, 0xD01 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266b40u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x266B40 raw=0x00010D01");
 /* MITIGATED */
label_266b44:
    // 0x266b44: 0x4c30  tge         $zero, $zero, 304
    ctx->pc = 0x266b44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266b48:
    // 0x266b48: 0x0  nop
    ctx->pc = 0x266b48u;
    // NOP
label_266b4c:
    // 0x266b4c: 0x0  nop
    ctx->pc = 0x266b4cu;
    // NOP
label_266b50:
    // 0x266b50: 0x10d0b  .word       0x00010D0B                   # movn        $at, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266b50u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_266b54:
    // 0x266b54: 0x29e0  .word       0x000029E0                   # add         $a1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266b54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_266b58:
    // 0x266b58: 0x0  nop
    ctx->pc = 0x266b58u;
    // NOP
label_266b5c:
    // 0x266b5c: 0x0  nop
    ctx->pc = 0x266b5cu;
    // NOP
label_266b60:
    // 0x266b60: 0x10d11  .word       0x00010D11                   # mthi        $zero # 00010D00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266b60u;
    ctx->hi = GPR_U64(ctx, 0);
label_266b64:
    // 0x266b64: 0x6d70  tge         $zero, $zero, 437
    ctx->pc = 0x266b64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266b68:
    // 0x266b68: 0x0  nop
    ctx->pc = 0x266b68u;
    // NOP
label_266b6c:
    // 0x266b6c: 0x0  nop
    ctx->pc = 0x266b6cu;
    // NOP
label_266b70:
    // 0x266b70: 0x10d1f  .word       0x00010D1F                   # ddivu       $at, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266b70u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x266B70 raw=0x00010D1F");
 /* MITIGATED */
label_266b74:
    // 0x266b74: 0x4de0  .word       0x00004DE0                   # add         $t1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266b74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_266b78:
    // 0x266b78: 0x0  nop
    ctx->pc = 0x266b78u;
    // NOP
label_266b7c:
    // 0x266b7c: 0x0  nop
    ctx->pc = 0x266b7cu;
    // NOP
label_266b80:
    // 0x266b80: 0x10d29  .word       0x00010D29                   # mtsa        $zero # 00010D00 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x266b80u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_266b84:
    // 0x266b84: 0x4030  tge         $zero, $zero, 256
    ctx->pc = 0x266b84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266b88:
    // 0x266b88: 0x0  nop
    ctx->pc = 0x266b88u;
    // NOP
label_266b8c:
    // 0x266b8c: 0x0  nop
    ctx->pc = 0x266b8cu;
    // NOP
label_266b90:
    // 0x266b90: 0x10d32  tlt         $zero, $at, 52
    ctx->pc = 0x266b90u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_266b94:
    // 0x266b94: 0x4690  .word       0x00004690                   # mfhi        $t0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266b94u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_266b98:
    // 0x266b98: 0x0  nop
    ctx->pc = 0x266b98u;
    // NOP
label_266b9c:
    // 0x266b9c: 0x0  nop
    ctx->pc = 0x266b9cu;
    // NOP
label_266ba0:
    // 0x266ba0: 0x10d3b  dsra        $at, $at, 20
    ctx->pc = 0x266ba0u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 1) >> 20);
label_266ba4:
    // 0x266ba4: 0x3e10  .word       0x00003E10                   # mfhi        $a3 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266ba4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_266ba8:
    // 0x266ba8: 0x0  nop
    ctx->pc = 0x266ba8u;
    // NOP
label_266bac:
    // 0x266bac: 0x0  nop
    ctx->pc = 0x266bacu;
    // NOP
label_266bb0:
    // 0x266bb0: 0x10d43  sra         $at, $at, 21
    ctx->pc = 0x266bb0u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 1), 21));
label_266bb4:
    // 0x266bb4: 0x3b30  tge         $zero, $zero, 236
    ctx->pc = 0x266bb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266bb8:
    // 0x266bb8: 0x0  nop
    ctx->pc = 0x266bb8u;
    // NOP
label_266bbc:
    // 0x266bbc: 0x0  nop
    ctx->pc = 0x266bbcu;
    // NOP
label_266bc0:
    // 0x266bc0: 0x10d4b  .word       0x00010D4B                   # movn        $at, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266bc0u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_266bc4:
    // 0x266bc4: 0x4fc0  sll         $t1, $zero, 31
    ctx->pc = 0x266bc4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_266bc8:
    // 0x266bc8: 0x0  nop
    ctx->pc = 0x266bc8u;
    // NOP
label_266bcc:
    // 0x266bcc: 0x0  nop
    ctx->pc = 0x266bccu;
    // NOP
label_266bd0:
    // 0x266bd0: 0x10d55  .word       0x00010D55                   # INVALID     $zero, $at, 0xD55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266bd0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x266BD0 raw=0x00010D55");
 /* MITIGATED */
label_266bd4:
    // 0x266bd4: 0x3710  .word       0x00003710                   # mfhi        $a2 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266bd4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_266bd8:
    // 0x266bd8: 0x0  nop
    ctx->pc = 0x266bd8u;
    // NOP
label_266bdc:
    // 0x266bdc: 0x0  nop
    ctx->pc = 0x266bdcu;
    // NOP
label_266be0:
    // 0x266be0: 0x10d5c  .word       0x00010D5C                   # dmult       $zero, $at # 00000D40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266be0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x266BE0 raw=0x00010D5C");
 /* MITIGATED */
label_266be4:
    // 0x266be4: 0x4300  sll         $t0, $zero, 12
    ctx->pc = 0x266be4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_266be8:
    // 0x266be8: 0x0  nop
    ctx->pc = 0x266be8u;
    // NOP
label_266bec:
    // 0x266bec: 0x0  nop
    ctx->pc = 0x266becu;
    // NOP
label_266bf0:
    // 0x266bf0: 0x10d65  .word       0x00010D65                   # or          $at, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266bf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_266bf4:
    // 0x266bf4: 0x5050  .word       0x00005050                   # mfhi        $t2 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266bf4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_266bf8:
    // 0x266bf8: 0x0  nop
    ctx->pc = 0x266bf8u;
    // NOP
label_266bfc:
    // 0x266bfc: 0x0  nop
    ctx->pc = 0x266bfcu;
    // NOP
label_266c00:
    // 0x266c00: 0x10d70  tge         $zero, $at, 53
    ctx->pc = 0x266c00u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_266c04:
    // 0x266c04: 0x4b10  .word       0x00004B10                   # mfhi        $t1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266c04u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_266c08:
    // 0x266c08: 0x0  nop
    ctx->pc = 0x266c08u;
    // NOP
label_266c0c:
    // 0x266c0c: 0x0  nop
    ctx->pc = 0x266c0cu;
    // NOP
label_266c10:
    // 0x266c10: 0x10d7a  dsrl        $at, $at, 21
    ctx->pc = 0x266c10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) >> 21);
label_266c14:
    // 0x266c14: 0x41e0  .word       0x000041E0                   # add         $t0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266c14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_266c18:
    // 0x266c18: 0x0  nop
    ctx->pc = 0x266c18u;
    // NOP
label_266c1c:
    // 0x266c1c: 0x0  nop
    ctx->pc = 0x266c1cu;
    // NOP
label_266c20:
    // 0x266c20: 0x10d83  sra         $at, $at, 22
    ctx->pc = 0x266c20u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 1), 22));
label_266c24:
    // 0x266c24: 0x6560  .word       0x00006560                   # add         $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266c24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_266c28:
    // 0x266c28: 0x0  nop
    ctx->pc = 0x266c28u;
    // NOP
label_266c2c:
    // 0x266c2c: 0x0  nop
    ctx->pc = 0x266c2cu;
    // NOP
label_266c30:
    // 0x266c30: 0x10d90  .word       0x00010D90                   # mfhi        $at # 00010580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266c30u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_266c34:
    // 0x266c34: 0x4c70  tge         $zero, $zero, 305
    ctx->pc = 0x266c34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266c38:
    // 0x266c38: 0x0  nop
    ctx->pc = 0x266c38u;
    // NOP
label_266c3c:
    // 0x266c3c: 0x0  nop
    ctx->pc = 0x266c3cu;
    // NOP
label_266c40:
    // 0x266c40: 0x10d9a  .word       0x00010D9A                   # div         $at, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266c40u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_266c44:
    // 0x266c44: 0x3750  .word       0x00003750                   # mfhi        $a2 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266c44u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_266c48:
    // 0x266c48: 0x0  nop
    ctx->pc = 0x266c48u;
    // NOP
label_266c4c:
    // 0x266c4c: 0x0  nop
    ctx->pc = 0x266c4cu;
    // NOP
label_266c50:
    // 0x266c50: 0x10da1  .word       0x00010DA1                   # addu        $at, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266c50u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_266c54:
    // 0x266c54: 0x29f0  tge         $zero, $zero, 167
    ctx->pc = 0x266c54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266c58:
    // 0x266c58: 0x0  nop
    ctx->pc = 0x266c58u;
    // NOP
label_266c5c:
    // 0x266c5c: 0x0  nop
    ctx->pc = 0x266c5cu;
    // NOP
label_266c60:
    // 0x266c60: 0x10da7  .word       0x00010DA7                   # nor         $at, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266c60u;
    SET_GPR_U64(ctx, 1, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_266c64:
    // 0x266c64: 0x6640  sll         $t4, $zero, 25
    ctx->pc = 0x266c64u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_266c68:
    // 0x266c68: 0x0  nop
    ctx->pc = 0x266c68u;
    // NOP
label_266c6c:
    // 0x266c6c: 0x0  nop
    ctx->pc = 0x266c6cu;
    // NOP
label_266c70:
    // 0x266c70: 0x10db4  teq         $zero, $at, 54
    ctx->pc = 0x266c70u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_266c74:
    // 0x266c74: 0x3910  .word       0x00003910                   # mfhi        $a3 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266c74u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_266c78:
    // 0x266c78: 0x0  nop
    ctx->pc = 0x266c78u;
    // NOP
label_266c7c:
    // 0x266c7c: 0x0  nop
    ctx->pc = 0x266c7cu;
    // NOP
label_266c80:
    // 0x266c80: 0x10dbc  dsll32      $at, $at, 22
    ctx->pc = 0x266c80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << (32 + 22));
label_266c84:
    // 0x266c84: 0x32b0  tge         $zero, $zero, 202
    ctx->pc = 0x266c84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266c88:
    // 0x266c88: 0x0  nop
    ctx->pc = 0x266c88u;
    // NOP
label_266c8c:
    // 0x266c8c: 0x0  nop
    ctx->pc = 0x266c8cu;
    // NOP
label_266c90:
    // 0x266c90: 0x10dc3  sra         $at, $at, 23
    ctx->pc = 0x266c90u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 1), 23));
label_266c94:
    // 0x266c94: 0x4060  .word       0x00004060                   # add         $t0, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266c94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_266c98:
    // 0x266c98: 0x0  nop
    ctx->pc = 0x266c98u;
    // NOP
label_266c9c:
    // 0x266c9c: 0x0  nop
    ctx->pc = 0x266c9cu;
    // NOP
label_266ca0:
    // 0x266ca0: 0x10dcc  .word       0x00010DCC                   # syscall     55 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266ca0u;
    ctx->pc = 0x266CA4u;
runtime->handleSyscall(rdram, ctx, 0x437u);
label_266ca4:
    // 0x266ca4: 0x5060  .word       0x00005060                   # add         $t2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266ca4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_266ca8:
    // 0x266ca8: 0x0  nop
    ctx->pc = 0x266ca8u;
    // NOP
label_266cac:
    // 0x266cac: 0x0  nop
    ctx->pc = 0x266cacu;
    // NOP
label_266cb0:
    // 0x266cb0: 0x10dd7  .word       0x00010DD7                   # dsrav       $at, $at, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266cb0u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_266cb4:
    // 0x266cb4: 0xa5e0  .word       0x0000A5E0                   # add         $s4, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266cb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_266cb8:
    // 0x266cb8: 0x0  nop
    ctx->pc = 0x266cb8u;
    // NOP
label_266cbc:
    // 0x266cbc: 0x0  nop
    ctx->pc = 0x266cbcu;
    // NOP
label_266cc0:
    // 0x266cc0: 0x10dec  .word       0x00010DEC                   # dadd        $at, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266cc0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_266cc4:
    // 0x266cc4: 0x50d0  .word       0x000050D0                   # mfhi        $t2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266cc4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_266cc8:
    // 0x266cc8: 0x0  nop
    ctx->pc = 0x266cc8u;
    // NOP
label_266ccc:
    // 0x266ccc: 0x0  nop
    ctx->pc = 0x266cccu;
    // NOP
label_266cd0:
    // 0x266cd0: 0x10df7  .word       0x00010DF7                   # INVALID     $zero, $at, 0xDF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266cd0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x266CD0 raw=0x00010DF7");
 /* MITIGATED */
label_266cd4:
    // 0x266cd4: 0x6730  tge         $zero, $zero, 412
    ctx->pc = 0x266cd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266cd8:
    // 0x266cd8: 0x0  nop
    ctx->pc = 0x266cd8u;
    // NOP
label_266cdc:
    // 0x266cdc: 0x0  nop
    ctx->pc = 0x266cdcu;
    // NOP
label_266ce0:
    // 0x266ce0: 0x10e04  .word       0x00010E04                   # sllv        $at, $at, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_266ce4:
    // 0x266ce4: 0x9530  tge         $zero, $zero, 596
    ctx->pc = 0x266ce4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266ce8:
    // 0x266ce8: 0x0  nop
    ctx->pc = 0x266ce8u;
    // NOP
label_266cec:
    // 0x266cec: 0x0  nop
    ctx->pc = 0x266cecu;
    // NOP
label_266cf0:
    // 0x266cf0: 0x10e17  .word       0x00010E17                   # dsrav       $at, $at, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266cf0u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_266cf4:
    // 0x266cf4: 0x78b0  tge         $zero, $zero, 482
    ctx->pc = 0x266cf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266cf8:
    // 0x266cf8: 0x0  nop
    ctx->pc = 0x266cf8u;
    // NOP
label_266cfc:
    // 0x266cfc: 0x0  nop
    ctx->pc = 0x266cfcu;
    // NOP
label_266d00:
    // 0x266d00: 0x10e27  .word       0x00010E27                   # nor         $at, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266d00u;
    SET_GPR_U64(ctx, 1, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_266d04:
    // 0x266d04: 0x5170  tge         $zero, $zero, 325
    ctx->pc = 0x266d04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266d08:
    // 0x266d08: 0x0  nop
    ctx->pc = 0x266d08u;
    // NOP
label_266d0c:
    // 0x266d0c: 0x0  nop
    ctx->pc = 0x266d0cu;
    // NOP
label_266d10:
    // 0x266d10: 0x10e32  tlt         $zero, $at, 56
    ctx->pc = 0x266d10u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_266d14:
    // 0x266d14: 0x81c0  sll         $s0, $zero, 7
    ctx->pc = 0x266d14u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_266d18:
    // 0x266d18: 0x0  nop
    ctx->pc = 0x266d18u;
    // NOP
label_266d1c:
    // 0x266d1c: 0x0  nop
    ctx->pc = 0x266d1cu;
    // NOP
label_266d20:
    // 0x266d20: 0x10e43  sra         $at, $at, 25
    ctx->pc = 0x266d20u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 1), 25));
label_266d24:
    // 0x266d24: 0x6900  sll         $t5, $zero, 4
    ctx->pc = 0x266d24u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_266d28:
    // 0x266d28: 0x0  nop
    ctx->pc = 0x266d28u;
    // NOP
label_266d2c:
    // 0x266d2c: 0x0  nop
    ctx->pc = 0x266d2cu;
    // NOP
label_266d30:
    // 0x266d30: 0x10e51  .word       0x00010E51                   # mthi        $zero # 00010E40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266d30u;
    ctx->hi = GPR_U64(ctx, 0);
label_266d34:
    // 0x266d34: 0x48c0  sll         $t1, $zero, 3
    ctx->pc = 0x266d34u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_266d38:
    // 0x266d38: 0x0  nop
    ctx->pc = 0x266d38u;
    // NOP
label_266d3c:
    // 0x266d3c: 0x0  nop
    ctx->pc = 0x266d3cu;
    // NOP
label_266d40:
    // 0x266d40: 0x10e5b  .word       0x00010E5B                   # divu        $at, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266d40u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_266d44:
    // 0x266d44: 0x8d50  .word       0x00008D50                   # mfhi        $s1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266d44u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_266d48:
    // 0x266d48: 0x0  nop
    ctx->pc = 0x266d48u;
    // NOP
label_266d4c:
    // 0x266d4c: 0x0  nop
    ctx->pc = 0x266d4cu;
    // NOP
label_266d50:
    // 0x266d50: 0x10e6d  .word       0x00010E6D                   # daddu       $at, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266d50u;
    SET_GPR_U64(ctx, 1, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_266d54:
    // 0x266d54: 0x5fe0  .word       0x00005FE0                   # add         $t3, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266d54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_266d58:
    // 0x266d58: 0x0  nop
    ctx->pc = 0x266d58u;
    // NOP
label_266d5c:
    // 0x266d5c: 0x0  nop
    ctx->pc = 0x266d5cu;
    // NOP
label_266d60:
    // 0x266d60: 0x10e79  .word       0x00010E79                   # INVALID     $zero, $at, 0xE79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266d60u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x266D60 raw=0x00010E79");
 /* MITIGATED */
label_266d64:
    // 0x266d64: 0x6280  sll         $t4, $zero, 10
    ctx->pc = 0x266d64u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_266d68:
    // 0x266d68: 0x0  nop
    ctx->pc = 0x266d68u;
    // NOP
label_266d6c:
    // 0x266d6c: 0x0  nop
    ctx->pc = 0x266d6cu;
    // NOP
label_266d70:
    // 0x266d70: 0x10e86  .word       0x00010E86                   # srlv        $at, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266d70u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_266d74:
    // 0x266d74: 0x6900  sll         $t5, $zero, 4
    ctx->pc = 0x266d74u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_266d78:
    // 0x266d78: 0x0  nop
    ctx->pc = 0x266d78u;
    // NOP
label_266d7c:
    // 0x266d7c: 0x0  nop
    ctx->pc = 0x266d7cu;
    // NOP
label_266d80:
    // 0x266d80: 0x10e94  .word       0x00010E94                   # dsllv       $at, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266d80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_266d84:
    // 0x266d84: 0x7be0  .word       0x00007BE0                   # add         $t7, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266d84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_266d88:
    // 0x266d88: 0x0  nop
    ctx->pc = 0x266d88u;
    // NOP
label_266d8c:
    // 0x266d8c: 0x0  nop
    ctx->pc = 0x266d8cu;
    // NOP
label_266d90:
    // 0x266d90: 0x10ea4  .word       0x00010EA4                   # and         $at, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266d90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_266d94:
    // 0x266d94: 0x7670  tge         $zero, $zero, 473
    ctx->pc = 0x266d94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266d98:
    // 0x266d98: 0x0  nop
    ctx->pc = 0x266d98u;
    // NOP
label_266d9c:
    // 0x266d9c: 0x0  nop
    ctx->pc = 0x266d9cu;
    // NOP
label_266da0:
    // 0x266da0: 0x10eb3  tltu        $zero, $at, 58
    ctx->pc = 0x266da0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_266da4:
    // 0x266da4: 0x5c50  .word       0x00005C50                   # mfhi        $t3 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266da4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_266da8:
    // 0x266da8: 0x0  nop
    ctx->pc = 0x266da8u;
    // NOP
label_266dac:
    // 0x266dac: 0x0  nop
    ctx->pc = 0x266dacu;
    // NOP
label_266db0:
    // 0x266db0: 0x10ebf  dsra32      $at, $at, 26
    ctx->pc = 0x266db0u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 1) >> (32 + 26));
label_266db4:
    // 0x266db4: 0x8ab0  tge         $zero, $zero, 554
    ctx->pc = 0x266db4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266db8:
    // 0x266db8: 0x0  nop
    ctx->pc = 0x266db8u;
    // NOP
label_266dbc:
    // 0x266dbc: 0x0  nop
    ctx->pc = 0x266dbcu;
    // NOP
label_266dc0:
    // 0x266dc0: 0x10ed1  .word       0x00010ED1                   # mthi        $zero # 00010EC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266dc0u;
    ctx->hi = GPR_U64(ctx, 0);
label_266dc4:
    // 0x266dc4: 0x6690  .word       0x00006690                   # mfhi        $t4 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266dc4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_266dc8:
    // 0x266dc8: 0x0  nop
    ctx->pc = 0x266dc8u;
    // NOP
label_266dcc:
    // 0x266dcc: 0x0  nop
    ctx->pc = 0x266dccu;
    // NOP
label_266dd0:
    // 0x266dd0: 0x10ede  .word       0x00010EDE                   # ddiv        $at, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266dd0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x266DD0 raw=0x00010EDE");
 /* MITIGATED */
label_266dd4:
    // 0x266dd4: 0x9900  sll         $s3, $zero, 4
    ctx->pc = 0x266dd4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_266dd8:
    // 0x266dd8: 0x0  nop
    ctx->pc = 0x266dd8u;
    // NOP
label_266ddc:
    // 0x266ddc: 0x0  nop
    ctx->pc = 0x266ddcu;
    // NOP
label_266de0:
    // 0x266de0: 0x10ef2  tlt         $zero, $at, 59
    ctx->pc = 0x266de0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_266de4:
    // 0x266de4: 0x6d60  .word       0x00006D60                   # add         $t5, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266de4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_266de8:
    // 0x266de8: 0x0  nop
    ctx->pc = 0x266de8u;
    // NOP
label_266dec:
    // 0x266dec: 0x0  nop
    ctx->pc = 0x266decu;
    // NOP
label_266df0:
    // 0x266df0: 0x10f00  sll         $at, $at, 28
    ctx->pc = 0x266df0u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 28));
label_266df4:
    // 0x266df4: 0x7680  sll         $t6, $zero, 26
    ctx->pc = 0x266df4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_266df8:
    // 0x266df8: 0x0  nop
    ctx->pc = 0x266df8u;
    // NOP
label_266dfc:
    // 0x266dfc: 0x0  nop
    ctx->pc = 0x266dfcu;
    // NOP
label_266e00:
    // 0x266e00: 0x10f0f  .word       0x00010F0F                   # sync.p # 00010800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266e00u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_266e04:
    // 0x266e04: 0x7940  sll         $t7, $zero, 5
    ctx->pc = 0x266e04u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_266e08:
    // 0x266e08: 0x0  nop
    ctx->pc = 0x266e08u;
    // NOP
label_266e0c:
    // 0x266e0c: 0x0  nop
    ctx->pc = 0x266e0cu;
    // NOP
label_266e10:
    // 0x266e10: 0x10f1f  .word       0x00010F1F                   # ddivu       $at, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266e10u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x266E10 raw=0x00010F1F");
 /* MITIGATED */
label_266e14:
    // 0x266e14: 0x5a10  .word       0x00005A10                   # mfhi        $t3 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266e14u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_266e18:
    // 0x266e18: 0x0  nop
    ctx->pc = 0x266e18u;
    // NOP
label_266e1c:
    // 0x266e1c: 0x0  nop
    ctx->pc = 0x266e1cu;
    // NOP
label_266e20:
    // 0x266e20: 0x10f2b  .word       0x00010F2B                   # sltu        $at, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266e20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_266e24:
    // 0x266e24: 0x67c0  sll         $t4, $zero, 31
    ctx->pc = 0x266e24u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_266e28:
    // 0x266e28: 0x0  nop
    ctx->pc = 0x266e28u;
    // NOP
label_266e2c:
    // 0x266e2c: 0x0  nop
    ctx->pc = 0x266e2cu;
    // NOP
label_266e30:
    // 0x266e30: 0x10f38  dsll        $at, $at, 28
    ctx->pc = 0x266e30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 28);
label_266e34:
    // 0x266e34: 0x7210  .word       0x00007210                   # mfhi        $t6 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266e34u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_266e38:
    // 0x266e38: 0x0  nop
    ctx->pc = 0x266e38u;
    // NOP
label_266e3c:
    // 0x266e3c: 0x0  nop
    ctx->pc = 0x266e3cu;
    // NOP
label_266e40:
    // 0x266e40: 0x10f47  .word       0x00010F47                   # srav        $at, $at, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266e40u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_266e44:
    // 0x266e44: 0x9b10  .word       0x00009B10                   # mfhi        $s3 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266e44u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_266e48:
    // 0x266e48: 0x0  nop
    ctx->pc = 0x266e48u;
    // NOP
label_266e4c:
    // 0x266e4c: 0x0  nop
    ctx->pc = 0x266e4cu;
    // NOP
label_266e50:
    // 0x266e50: 0x10f5b  .word       0x00010F5B                   # divu        $at, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266e50u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_266e54:
    // 0x266e54: 0x8e30  tge         $zero, $zero, 568
    ctx->pc = 0x266e54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266e58:
    // 0x266e58: 0x0  nop
    ctx->pc = 0x266e58u;
    // NOP
label_266e5c:
    // 0x266e5c: 0x0  nop
    ctx->pc = 0x266e5cu;
    // NOP
label_266e60:
    // 0x266e60: 0x10f6d  .word       0x00010F6D                   # daddu       $at, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266e60u;
    SET_GPR_U64(ctx, 1, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_266e64:
    // 0x266e64: 0x84e0  .word       0x000084E0                   # add         $s0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266e64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_266e68:
    // 0x266e68: 0x0  nop
    ctx->pc = 0x266e68u;
    // NOP
label_266e6c:
    // 0x266e6c: 0x0  nop
    ctx->pc = 0x266e6cu;
    // NOP
label_266e70:
    // 0x266e70: 0x10f7e  dsrl32      $at, $at, 29
    ctx->pc = 0x266e70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) >> (32 + 29));
label_266e74:
    // 0x266e74: 0x95c0  sll         $s2, $zero, 23
    ctx->pc = 0x266e74u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_266e78:
    // 0x266e78: 0x0  nop
    ctx->pc = 0x266e78u;
    // NOP
label_266e7c:
    // 0x266e7c: 0x0  nop
    ctx->pc = 0x266e7cu;
    // NOP
label_266e80:
    // 0x266e80: 0x10f91  .word       0x00010F91                   # mthi        $zero # 00010F80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266e80u;
    ctx->hi = GPR_U64(ctx, 0);
label_266e84:
    // 0x266e84: 0xa410  .word       0x0000A410                   # mfhi        $s4 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266e84u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_266e88:
    // 0x266e88: 0x0  nop
    ctx->pc = 0x266e88u;
    // NOP
label_266e8c:
    // 0x266e8c: 0x0  nop
    ctx->pc = 0x266e8cu;
    // NOP
label_266e90:
    // 0x266e90: 0x10fa6  .word       0x00010FA6                   # xor         $at, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266e90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_266e94:
    // 0x266e94: 0x92a0  .word       0x000092A0                   # add         $s2, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266e94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_266e98:
    // 0x266e98: 0x0  nop
    ctx->pc = 0x266e98u;
    // NOP
label_266e9c:
    // 0x266e9c: 0x0  nop
    ctx->pc = 0x266e9cu;
    // NOP
label_266ea0:
    // 0x266ea0: 0x10fb9  .word       0x00010FB9                   # INVALID     $zero, $at, 0xFB9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266ea0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x266EA0 raw=0x00010FB9");
 /* MITIGATED */
label_266ea4:
    // 0x266ea4: 0x6ea0  .word       0x00006EA0                   # add         $t5, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266ea4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_266ea8:
    // 0x266ea8: 0x0  nop
    ctx->pc = 0x266ea8u;
    // NOP
label_266eac:
    // 0x266eac: 0x0  nop
    ctx->pc = 0x266eacu;
    // NOP
label_266eb0:
    // 0x266eb0: 0x10fc7  .word       0x00010FC7                   # srav        $at, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266eb0u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_266eb4:
    // 0x266eb4: 0xc7c0  sll         $t8, $zero, 31
    ctx->pc = 0x266eb4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_266eb8:
    // 0x266eb8: 0x0  nop
    ctx->pc = 0x266eb8u;
    // NOP
label_266ebc:
    // 0x266ebc: 0x0  nop
    ctx->pc = 0x266ebcu;
    // NOP
label_266ec0:
    // 0x266ec0: 0x10fe0  .word       0x00010FE0                   # add         $at, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266ec0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_266ec4:
    // 0x266ec4: 0x8700  sll         $s0, $zero, 28
    ctx->pc = 0x266ec4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_266ec8:
    // 0x266ec8: 0x0  nop
    ctx->pc = 0x266ec8u;
    // NOP
label_266ecc:
    // 0x266ecc: 0x0  nop
    ctx->pc = 0x266eccu;
    // NOP
label_266ed0:
    // 0x266ed0: 0x10ff1  tgeu        $zero, $at, 63
    ctx->pc = 0x266ed0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_266ed4:
    // 0x266ed4: 0x9290  .word       0x00009290                   # mfhi        $s2 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266ed4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_266ed8:
    // 0x266ed8: 0x0  nop
    ctx->pc = 0x266ed8u;
    // NOP
label_266edc:
    // 0x266edc: 0x0  nop
    ctx->pc = 0x266edcu;
    // NOP
label_266ee0:
    // 0x266ee0: 0x11004  sllv        $v0, $at, $zero
    ctx->pc = 0x266ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_266ee4:
    // 0x266ee4: 0x62b0  tge         $zero, $zero, 394
    ctx->pc = 0x266ee4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266ee8:
    // 0x266ee8: 0x0  nop
    ctx->pc = 0x266ee8u;
    // NOP
label_266eec:
    // 0x266eec: 0x0  nop
    ctx->pc = 0x266eecu;
    // NOP
label_266ef0:
    // 0x266ef0: 0x11011  .word       0x00011011                   # mthi        $zero # 00011000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266ef0u;
    ctx->hi = GPR_U64(ctx, 0);
label_266ef4:
    // 0x266ef4: 0x87e0  .word       0x000087E0                   # add         $s0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266ef4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_266ef8:
    // 0x266ef8: 0x0  nop
    ctx->pc = 0x266ef8u;
    // NOP
label_266efc:
    // 0x266efc: 0x0  nop
    ctx->pc = 0x266efcu;
    // NOP
label_266f00:
    // 0x266f00: 0x11022  neg         $v0, $at
    ctx->pc = 0x266f00u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
label_266f04:
    // 0x266f04: 0x6720  .word       0x00006720                   # add         $t4, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266f04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_266f08:
    // 0x266f08: 0x0  nop
    ctx->pc = 0x266f08u;
    // NOP
label_266f0c:
    // 0x266f0c: 0x0  nop
    ctx->pc = 0x266f0cu;
    // NOP
label_266f10:
    // 0x266f10: 0x1102f  dsubu       $v0, $zero, $at
    ctx->pc = 0x266f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_266f14:
    // 0x266f14: 0x7a30  tge         $zero, $zero, 488
    ctx->pc = 0x266f14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266f18:
    // 0x266f18: 0x0  nop
    ctx->pc = 0x266f18u;
    // NOP
label_266f1c:
    // 0x266f1c: 0x0  nop
    ctx->pc = 0x266f1cu;
    // NOP
label_266f20:
    // 0x266f20: 0x1103f  dsra32      $v0, $at, 0
    ctx->pc = 0x266f20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 1) >> (32 + 0));
label_266f24:
    // 0x266f24: 0x8130  tge         $zero, $zero, 516
    ctx->pc = 0x266f24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266f28:
    // 0x266f28: 0x0  nop
    ctx->pc = 0x266f28u;
    // NOP
label_266f2c:
    // 0x266f2c: 0x0  nop
    ctx->pc = 0x266f2cu;
    // NOP
label_266f30:
    // 0x266f30: 0x11050  .word       0x00011050                   # mfhi        $v0 # 00010040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266f30u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_266f34:
    // 0x266f34: 0x7100  sll         $t6, $zero, 4
    ctx->pc = 0x266f34u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_266f38:
    // 0x266f38: 0x0  nop
    ctx->pc = 0x266f38u;
    // NOP
label_266f3c:
    // 0x266f3c: 0x0  nop
    ctx->pc = 0x266f3cu;
    // NOP
label_266f40:
    // 0x266f40: 0x1105f  .word       0x0001105F                   # ddivu       $v0, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266f40u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x266F40 raw=0x0001105F");
 /* MITIGATED */
label_266f44:
    // 0x266f44: 0x6160  .word       0x00006160                   # add         $t4, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266f44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_266f48:
    // 0x266f48: 0x0  nop
    ctx->pc = 0x266f48u;
    // NOP
label_266f4c:
    // 0x266f4c: 0x0  nop
    ctx->pc = 0x266f4cu;
    // NOP
label_266f50:
    // 0x266f50: 0x1106c  .word       0x0001106C                   # dadd        $v0, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266f50u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_266f54:
    // 0x266f54: 0xc700  sll         $t8, $zero, 28
    ctx->pc = 0x266f54u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_266f58:
    // 0x266f58: 0x0  nop
    ctx->pc = 0x266f58u;
    // NOP
label_266f5c:
    // 0x266f5c: 0x0  nop
    ctx->pc = 0x266f5cu;
    // NOP
label_266f60:
    // 0x266f60: 0x11085  .word       0x00011085                   # INVALID     $zero, $at, 0x1085 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266f60u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x266F60 raw=0x00011085");
 /* MITIGATED */
label_266f64:
    // 0x266f64: 0xa6d0  .word       0x0000A6D0                   # mfhi        $s4 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266f64u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_266f68:
    // 0x266f68: 0x0  nop
    ctx->pc = 0x266f68u;
    // NOP
label_266f6c:
    // 0x266f6c: 0x0  nop
    ctx->pc = 0x266f6cu;
    // NOP
label_266f70:
    // 0x266f70: 0x1109a  .word       0x0001109A                   # div         $v0, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266f70u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_266f74:
    // 0x266f74: 0x6cc0  sll         $t5, $zero, 19
    ctx->pc = 0x266f74u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_266f78:
    // 0x266f78: 0x0  nop
    ctx->pc = 0x266f78u;
    // NOP
label_266f7c:
    // 0x266f7c: 0x0  nop
    ctx->pc = 0x266f7cu;
    // NOP
label_266f80:
    // 0x266f80: 0x110a8  .word       0x000110A8                   # mfsa        $v0 # 00010080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x266f80u;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_266f84:
    // 0x266f84: 0x8690  .word       0x00008690                   # mfhi        $s0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266f84u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_266f88:
    // 0x266f88: 0x0  nop
    ctx->pc = 0x266f88u;
    // NOP
label_266f8c:
    // 0x266f8c: 0x0  nop
    ctx->pc = 0x266f8cu;
    // NOP
label_266f90:
    // 0x266f90: 0x110b9  .word       0x000110B9                   # INVALID     $zero, $at, 0x10B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266f90u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x266F90 raw=0x000110B9");
 /* MITIGATED */
label_266f94:
    // 0x266f94: 0x88d0  .word       0x000088D0                   # mfhi        $s1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266f94u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_266f98:
    // 0x266f98: 0x0  nop
    ctx->pc = 0x266f98u;
    // NOP
label_266f9c:
    // 0x266f9c: 0x0  nop
    ctx->pc = 0x266f9cu;
    // NOP
label_266fa0:
    // 0x266fa0: 0x110cb  .word       0x000110CB                   # movn        $v0, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266fa0u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_266fa4:
    // 0x266fa4: 0x9240  sll         $s2, $zero, 9
    ctx->pc = 0x266fa4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_266fa8:
    // 0x266fa8: 0x0  nop
    ctx->pc = 0x266fa8u;
    // NOP
label_266fac:
    // 0x266fac: 0x0  nop
    ctx->pc = 0x266facu;
    // NOP
label_266fb0:
    // 0x266fb0: 0x110de  .word       0x000110DE                   # ddiv        $v0, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266fb0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x266FB0 raw=0x000110DE");
 /* MITIGATED */
label_266fb4:
    // 0x266fb4: 0xaf90  .word       0x0000AF90                   # mfhi        $s5 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266fb4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_266fb8:
    // 0x266fb8: 0x0  nop
    ctx->pc = 0x266fb8u;
    // NOP
label_266fbc:
    // 0x266fbc: 0x0  nop
    ctx->pc = 0x266fbcu;
    // NOP
label_266fc0:
    // 0x266fc0: 0x110f4  teq         $zero, $at, 67
    ctx->pc = 0x266fc0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_266fc4:
    // 0x266fc4: 0x8ec0  sll         $s1, $zero, 27
    ctx->pc = 0x266fc4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_266fc8:
    // 0x266fc8: 0x0  nop
    ctx->pc = 0x266fc8u;
    // NOP
label_266fcc:
    // 0x266fcc: 0x0  nop
    ctx->pc = 0x266fccu;
    // NOP
label_266fd0:
    // 0x266fd0: 0x11106  .word       0x00011106                   # srlv        $v0, $at, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_266fd4:
    // 0x266fd4: 0xc1d0  .word       0x0000C1D0                   # mfhi        $t8 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266fd4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_266fd8:
    // 0x266fd8: 0x0  nop
    ctx->pc = 0x266fd8u;
    // NOP
label_266fdc:
    // 0x266fdc: 0x0  nop
    ctx->pc = 0x266fdcu;
    // NOP
label_266fe0:
    // 0x266fe0: 0x1111f  .word       0x0001111F                   # ddivu       $v0, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266fe0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x266FE0 raw=0x0001111F");
 /* MITIGATED */
label_266fe4:
    // 0x266fe4: 0x8c20  .word       0x00008C20                   # add         $s1, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266fe4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_266fe8:
    // 0x266fe8: 0x0  nop
    ctx->pc = 0x266fe8u;
    // NOP
label_266fec:
    // 0x266fec: 0x0  nop
    ctx->pc = 0x266fecu;
    // NOP
label_266ff0:
    // 0x266ff0: 0x11131  tgeu        $zero, $at, 68
    ctx->pc = 0x266ff0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_266ff4:
    // 0x266ff4: 0x9930  tge         $zero, $zero, 612
    ctx->pc = 0x266ff4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266ff8:
    // 0x266ff8: 0x0  nop
    ctx->pc = 0x266ff8u;
    // NOP
label_266ffc:
    // 0x266ffc: 0x0  nop
    ctx->pc = 0x266ffcu;
    // NOP
    ctx->pc = 0x267000u;
    return;
}

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


void FUN_0019b868_part218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2057b8u: goto label_2057b8;
        case 0x2057bcu: goto label_2057bc;
        case 0x2057c0u: goto label_2057c0;
        case 0x2057c4u: goto label_2057c4;
        case 0x2057c8u: goto label_2057c8;
        case 0x2057ccu: goto label_2057cc;
        case 0x2057d0u: goto label_2057d0;
        case 0x2057d4u: goto label_2057d4;
        case 0x2057d8u: goto label_2057d8;
        case 0x2057dcu: goto label_2057dc;
        case 0x2057e0u: goto label_2057e0;
        case 0x2057e4u: goto label_2057e4;
        case 0x2057e8u: goto label_2057e8;
        case 0x2057ecu: goto label_2057ec;
        case 0x2057f0u: goto label_2057f0;
        case 0x2057f4u: goto label_2057f4;
        case 0x2057f8u: goto label_2057f8;
        case 0x2057fcu: goto label_2057fc;
        case 0x205800u: goto label_205800;
        case 0x205804u: goto label_205804;
        case 0x205808u: goto label_205808;
        case 0x20580cu: goto label_20580c;
        case 0x205810u: goto label_205810;
        case 0x205814u: goto label_205814;
        case 0x205818u: goto label_205818;
        case 0x20581cu: goto label_20581c;
        case 0x205820u: goto label_205820;
        case 0x205824u: goto label_205824;
        case 0x205828u: goto label_205828;
        case 0x20582cu: goto label_20582c;
        case 0x205830u: goto label_205830;
        case 0x205834u: goto label_205834;
        case 0x205838u: goto label_205838;
        case 0x20583cu: goto label_20583c;
        case 0x205840u: goto label_205840;
        case 0x205844u: goto label_205844;
        case 0x205848u: goto label_205848;
        case 0x20584cu: goto label_20584c;
        case 0x205850u: goto label_205850;
        case 0x205854u: goto label_205854;
        case 0x205858u: goto label_205858;
        case 0x20585cu: goto label_20585c;
        case 0x205860u: goto label_205860;
        case 0x205864u: goto label_205864;
        case 0x205868u: goto label_205868;
        case 0x20586cu: goto label_20586c;
        case 0x205870u: goto label_205870;
        case 0x205874u: goto label_205874;
        case 0x205878u: goto label_205878;
        case 0x20587cu: goto label_20587c;
        case 0x205880u: goto label_205880;
        case 0x205884u: goto label_205884;
        case 0x205888u: goto label_205888;
        case 0x20588cu: goto label_20588c;
        case 0x205890u: goto label_205890;
        case 0x205894u: goto label_205894;
        case 0x205898u: goto label_205898;
        case 0x20589cu: goto label_20589c;
        case 0x2058a0u: goto label_2058a0;
        case 0x2058a4u: goto label_2058a4;
        case 0x2058a8u: goto label_2058a8;
        case 0x2058acu: goto label_2058ac;
        case 0x2058b0u: goto label_2058b0;
        case 0x2058b4u: goto label_2058b4;
        case 0x2058b8u: goto label_2058b8;
        case 0x2058bcu: goto label_2058bc;
        case 0x2058c0u: goto label_2058c0;
        case 0x2058c4u: goto label_2058c4;
        case 0x2058c8u: goto label_2058c8;
        case 0x2058ccu: goto label_2058cc;
        case 0x2058d0u: goto label_2058d0;
        case 0x2058d4u: goto label_2058d4;
        case 0x2058d8u: goto label_2058d8;
        case 0x2058dcu: goto label_2058dc;
        case 0x2058e0u: goto label_2058e0;
        case 0x2058e4u: goto label_2058e4;
        case 0x2058e8u: goto label_2058e8;
        case 0x2058ecu: goto label_2058ec;
        case 0x2058f0u: goto label_2058f0;
        case 0x2058f4u: goto label_2058f4;
        case 0x2058f8u: goto label_2058f8;
        case 0x2058fcu: goto label_2058fc;
        case 0x205900u: goto label_205900;
        case 0x205904u: goto label_205904;
        case 0x205908u: goto label_205908;
        case 0x20590cu: goto label_20590c;
        case 0x205910u: goto label_205910;
        case 0x205914u: goto label_205914;
        case 0x205918u: goto label_205918;
        case 0x20591cu: goto label_20591c;
        case 0x205920u: goto label_205920;
        case 0x205924u: goto label_205924;
        case 0x205928u: goto label_205928;
        case 0x20592cu: goto label_20592c;
        case 0x205930u: goto label_205930;
        case 0x205934u: goto label_205934;
        case 0x205938u: goto label_205938;
        case 0x20593cu: goto label_20593c;
        case 0x205940u: goto label_205940;
        case 0x205944u: goto label_205944;
        case 0x205948u: goto label_205948;
        case 0x20594cu: goto label_20594c;
        case 0x205950u: goto label_205950;
        case 0x205954u: goto label_205954;
        case 0x205958u: goto label_205958;
        case 0x20595cu: goto label_20595c;
        case 0x205960u: goto label_205960;
        case 0x205964u: goto label_205964;
        case 0x205968u: goto label_205968;
        case 0x20596cu: goto label_20596c;
        case 0x205970u: goto label_205970;
        case 0x205974u: goto label_205974;
        case 0x205978u: goto label_205978;
        case 0x20597cu: goto label_20597c;
        case 0x205980u: goto label_205980;
        case 0x205984u: goto label_205984;
        case 0x205988u: goto label_205988;
        case 0x20598cu: goto label_20598c;
        case 0x205990u: goto label_205990;
        case 0x205994u: goto label_205994;
        case 0x205998u: goto label_205998;
        case 0x20599cu: goto label_20599c;
        case 0x2059a0u: goto label_2059a0;
        case 0x2059a4u: goto label_2059a4;
        case 0x2059a8u: goto label_2059a8;
        case 0x2059acu: goto label_2059ac;
        case 0x2059b0u: goto label_2059b0;
        case 0x2059b4u: goto label_2059b4;
        case 0x2059b8u: goto label_2059b8;
        case 0x2059bcu: goto label_2059bc;
        case 0x2059c0u: goto label_2059c0;
        case 0x2059c4u: goto label_2059c4;
        case 0x2059c8u: goto label_2059c8;
        case 0x2059ccu: goto label_2059cc;
        case 0x2059d0u: goto label_2059d0;
        case 0x2059d4u: goto label_2059d4;
        case 0x2059d8u: goto label_2059d8;
        case 0x2059dcu: goto label_2059dc;
        case 0x2059e0u: goto label_2059e0;
        case 0x2059e4u: goto label_2059e4;
        case 0x2059e8u: goto label_2059e8;
        case 0x2059ecu: goto label_2059ec;
        case 0x2059f0u: goto label_2059f0;
        case 0x2059f4u: goto label_2059f4;
        case 0x2059f8u: goto label_2059f8;
        case 0x2059fcu: goto label_2059fc;
        case 0x205a00u: goto label_205a00;
        case 0x205a04u: goto label_205a04;
        case 0x205a08u: goto label_205a08;
        case 0x205a0cu: goto label_205a0c;
        case 0x205a10u: goto label_205a10;
        case 0x205a14u: goto label_205a14;
        case 0x205a18u: goto label_205a18;
        case 0x205a1cu: goto label_205a1c;
        case 0x205a20u: goto label_205a20;
        case 0x205a24u: goto label_205a24;
        case 0x205a28u: goto label_205a28;
        case 0x205a2cu: goto label_205a2c;
        case 0x205a30u: goto label_205a30;
        case 0x205a34u: goto label_205a34;
        case 0x205a38u: goto label_205a38;
        case 0x205a3cu: goto label_205a3c;
        case 0x205a40u: goto label_205a40;
        case 0x205a44u: goto label_205a44;
        case 0x205a48u: goto label_205a48;
        case 0x205a4cu: goto label_205a4c;
        case 0x205a50u: goto label_205a50;
        case 0x205a54u: goto label_205a54;
        case 0x205a58u: goto label_205a58;
        case 0x205a5cu: goto label_205a5c;
        case 0x205a60u: goto label_205a60;
        case 0x205a64u: goto label_205a64;
        case 0x205a68u: goto label_205a68;
        case 0x205a6cu: goto label_205a6c;
        case 0x205a70u: goto label_205a70;
        case 0x205a74u: goto label_205a74;
        case 0x205a78u: goto label_205a78;
        case 0x205a7cu: goto label_205a7c;
        case 0x205a80u: goto label_205a80;
        case 0x205a84u: goto label_205a84;
        case 0x205a88u: goto label_205a88;
        case 0x205a8cu: goto label_205a8c;
        case 0x205a90u: goto label_205a90;
        case 0x205a94u: goto label_205a94;
        case 0x205a98u: goto label_205a98;
        case 0x205a9cu: goto label_205a9c;
        case 0x205aa0u: goto label_205aa0;
        case 0x205aa4u: goto label_205aa4;
        case 0x205aa8u: goto label_205aa8;
        case 0x205aacu: goto label_205aac;
        case 0x205ab0u: goto label_205ab0;
        case 0x205ab4u: goto label_205ab4;
        case 0x205ab8u: goto label_205ab8;
        case 0x205abcu: goto label_205abc;
        case 0x205ac0u: goto label_205ac0;
        case 0x205ac4u: goto label_205ac4;
        case 0x205ac8u: goto label_205ac8;
        case 0x205accu: goto label_205acc;
        case 0x205ad0u: goto label_205ad0;
        case 0x205ad4u: goto label_205ad4;
        case 0x205ad8u: goto label_205ad8;
        case 0x205adcu: goto label_205adc;
        case 0x205ae0u: goto label_205ae0;
        case 0x205ae4u: goto label_205ae4;
        case 0x205ae8u: goto label_205ae8;
        case 0x205aecu: goto label_205aec;
        case 0x205af0u: goto label_205af0;
        case 0x205af4u: goto label_205af4;
        case 0x205af8u: goto label_205af8;
        case 0x205afcu: goto label_205afc;
        case 0x205b00u: goto label_205b00;
        case 0x205b04u: goto label_205b04;
        case 0x205b08u: goto label_205b08;
        case 0x205b0cu: goto label_205b0c;
        case 0x205b10u: goto label_205b10;
        case 0x205b14u: goto label_205b14;
        case 0x205b18u: goto label_205b18;
        case 0x205b1cu: goto label_205b1c;
        case 0x205b20u: goto label_205b20;
        case 0x205b24u: goto label_205b24;
        case 0x205b28u: goto label_205b28;
        case 0x205b2cu: goto label_205b2c;
        case 0x205b30u: goto label_205b30;
        case 0x205b34u: goto label_205b34;
        case 0x205b38u: goto label_205b38;
        case 0x205b3cu: goto label_205b3c;
        case 0x205b40u: goto label_205b40;
        case 0x205b44u: goto label_205b44;
        case 0x205b48u: goto label_205b48;
        case 0x205b4cu: goto label_205b4c;
        case 0x205b50u: goto label_205b50;
        case 0x205b54u: goto label_205b54;
        case 0x205b58u: goto label_205b58;
        case 0x205b5cu: goto label_205b5c;
        case 0x205b60u: goto label_205b60;
        case 0x205b64u: goto label_205b64;
        case 0x205b68u: goto label_205b68;
        case 0x205b6cu: goto label_205b6c;
        case 0x205b70u: goto label_205b70;
        case 0x205b74u: goto label_205b74;
        case 0x205b78u: goto label_205b78;
        case 0x205b7cu: goto label_205b7c;
        case 0x205b80u: goto label_205b80;
        case 0x205b84u: goto label_205b84;
        case 0x205b88u: goto label_205b88;
        case 0x205b8cu: goto label_205b8c;
        case 0x205b90u: goto label_205b90;
        case 0x205b94u: goto label_205b94;
        case 0x205b98u: goto label_205b98;
        case 0x205b9cu: goto label_205b9c;
        case 0x205ba0u: goto label_205ba0;
        case 0x205ba4u: goto label_205ba4;
        case 0x205ba8u: goto label_205ba8;
        case 0x205bacu: goto label_205bac;
        case 0x205bb0u: goto label_205bb0;
        case 0x205bb4u: goto label_205bb4;
        case 0x205bb8u: goto label_205bb8;
        case 0x205bbcu: goto label_205bbc;
        case 0x205bc0u: goto label_205bc0;
        case 0x205bc4u: goto label_205bc4;
        case 0x205bc8u: goto label_205bc8;
        case 0x205bccu: goto label_205bcc;
        case 0x205bd0u: goto label_205bd0;
        case 0x205bd4u: goto label_205bd4;
        case 0x205bd8u: goto label_205bd8;
        case 0x205bdcu: goto label_205bdc;
        case 0x205be0u: goto label_205be0;
        case 0x205be4u: goto label_205be4;
        case 0x205be8u: goto label_205be8;
        case 0x205becu: goto label_205bec;
        case 0x205bf0u: goto label_205bf0;
        case 0x205bf4u: goto label_205bf4;
        case 0x205bf8u: goto label_205bf8;
        case 0x205bfcu: goto label_205bfc;
        case 0x205c00u: goto label_205c00;
        case 0x205c04u: goto label_205c04;
        case 0x205c08u: goto label_205c08;
        case 0x205c0cu: goto label_205c0c;
        case 0x205c10u: goto label_205c10;
        case 0x205c14u: goto label_205c14;
        case 0x205c18u: goto label_205c18;
        case 0x205c1cu: goto label_205c1c;
        case 0x205c20u: goto label_205c20;
        case 0x205c24u: goto label_205c24;
        case 0x205c28u: goto label_205c28;
        case 0x205c2cu: goto label_205c2c;
        case 0x205c30u: goto label_205c30;
        case 0x205c34u: goto label_205c34;
        case 0x205c38u: goto label_205c38;
        case 0x205c3cu: goto label_205c3c;
        case 0x205c40u: goto label_205c40;
        case 0x205c44u: goto label_205c44;
        case 0x205c48u: goto label_205c48;
        case 0x205c4cu: goto label_205c4c;
        case 0x205c50u: goto label_205c50;
        case 0x205c54u: goto label_205c54;
        case 0x205c58u: goto label_205c58;
        case 0x205c5cu: goto label_205c5c;
        case 0x205c60u: goto label_205c60;
        case 0x205c64u: goto label_205c64;
        case 0x205c68u: goto label_205c68;
        case 0x205c6cu: goto label_205c6c;
        case 0x205c70u: goto label_205c70;
        case 0x205c74u: goto label_205c74;
        case 0x205c78u: goto label_205c78;
        case 0x205c7cu: goto label_205c7c;
        case 0x205c80u: goto label_205c80;
        case 0x205c84u: goto label_205c84;
        case 0x205c88u: goto label_205c88;
        case 0x205c8cu: goto label_205c8c;
        case 0x205c90u: goto label_205c90;
        case 0x205c94u: goto label_205c94;
        case 0x205c98u: goto label_205c98;
        case 0x205c9cu: goto label_205c9c;
        case 0x205ca0u: goto label_205ca0;
        case 0x205ca4u: goto label_205ca4;
        case 0x205ca8u: goto label_205ca8;
        case 0x205cacu: goto label_205cac;
        case 0x205cb0u: goto label_205cb0;
        case 0x205cb4u: goto label_205cb4;
        case 0x205cb8u: goto label_205cb8;
        case 0x205cbcu: goto label_205cbc;
        case 0x205cc0u: goto label_205cc0;
        case 0x205cc4u: goto label_205cc4;
        case 0x205cc8u: goto label_205cc8;
        case 0x205cccu: goto label_205ccc;
        case 0x205cd0u: goto label_205cd0;
        case 0x205cd4u: goto label_205cd4;
        case 0x205cd8u: goto label_205cd8;
        case 0x205cdcu: goto label_205cdc;
        case 0x205ce0u: goto label_205ce0;
        case 0x205ce4u: goto label_205ce4;
        case 0x205ce8u: goto label_205ce8;
        case 0x205cecu: goto label_205cec;
        case 0x205cf0u: goto label_205cf0;
        case 0x205cf4u: goto label_205cf4;
        case 0x205cf8u: goto label_205cf8;
        case 0x205cfcu: goto label_205cfc;
        case 0x205d00u: goto label_205d00;
        case 0x205d04u: goto label_205d04;
        case 0x205d08u: goto label_205d08;
        case 0x205d0cu: goto label_205d0c;
        case 0x205d10u: goto label_205d10;
        case 0x205d14u: goto label_205d14;
        case 0x205d18u: goto label_205d18;
        case 0x205d1cu: goto label_205d1c;
        case 0x205d20u: goto label_205d20;
        case 0x205d24u: goto label_205d24;
        case 0x205d28u: goto label_205d28;
        case 0x205d2cu: goto label_205d2c;
        case 0x205d30u: goto label_205d30;
        case 0x205d34u: goto label_205d34;
        case 0x205d38u: goto label_205d38;
        case 0x205d3cu: goto label_205d3c;
        case 0x205d40u: goto label_205d40;
        case 0x205d44u: goto label_205d44;
        case 0x205d48u: goto label_205d48;
        case 0x205d4cu: goto label_205d4c;
        case 0x205d50u: goto label_205d50;
        case 0x205d54u: goto label_205d54;
        case 0x205d58u: goto label_205d58;
        case 0x205d5cu: goto label_205d5c;
        case 0x205d60u: goto label_205d60;
        case 0x205d64u: goto label_205d64;
        case 0x205d68u: goto label_205d68;
        case 0x205d6cu: goto label_205d6c;
        case 0x205d70u: goto label_205d70;
        case 0x205d74u: goto label_205d74;
        case 0x205d78u: goto label_205d78;
        case 0x205d7cu: goto label_205d7c;
        case 0x205d80u: goto label_205d80;
        case 0x205d84u: goto label_205d84;
        case 0x205d88u: goto label_205d88;
        case 0x205d8cu: goto label_205d8c;
        case 0x205d90u: goto label_205d90;
        case 0x205d94u: goto label_205d94;
        case 0x205d98u: goto label_205d98;
        case 0x205d9cu: goto label_205d9c;
        case 0x205da0u: goto label_205da0;
        case 0x205da4u: goto label_205da4;
        case 0x205da8u: goto label_205da8;
        case 0x205dacu: goto label_205dac;
        case 0x205db0u: goto label_205db0;
        case 0x205db4u: goto label_205db4;
        case 0x205db8u: goto label_205db8;
        case 0x205dbcu: goto label_205dbc;
        case 0x205dc0u: goto label_205dc0;
        case 0x205dc4u: goto label_205dc4;
        case 0x205dc8u: goto label_205dc8;
        case 0x205dccu: goto label_205dcc;
        case 0x205dd0u: goto label_205dd0;
        case 0x205dd4u: goto label_205dd4;
        case 0x205dd8u: goto label_205dd8;
        case 0x205ddcu: goto label_205ddc;
        case 0x205de0u: goto label_205de0;
        case 0x205de4u: goto label_205de4;
        case 0x205de8u: goto label_205de8;
        case 0x205decu: goto label_205dec;
        case 0x205df0u: goto label_205df0;
        case 0x205df4u: goto label_205df4;
        case 0x205df8u: goto label_205df8;
        case 0x205dfcu: goto label_205dfc;
        case 0x205e00u: goto label_205e00;
        case 0x205e04u: goto label_205e04;
        case 0x205e08u: goto label_205e08;
        case 0x205e0cu: goto label_205e0c;
        case 0x205e10u: goto label_205e10;
        case 0x205e14u: goto label_205e14;
        case 0x205e18u: goto label_205e18;
        case 0x205e1cu: goto label_205e1c;
        case 0x205e20u: goto label_205e20;
        case 0x205e24u: goto label_205e24;
        case 0x205e28u: goto label_205e28;
        case 0x205e2cu: goto label_205e2c;
        case 0x205e30u: goto label_205e30;
        case 0x205e34u: goto label_205e34;
        case 0x205e38u: goto label_205e38;
        case 0x205e3cu: goto label_205e3c;
        case 0x205e40u: goto label_205e40;
        case 0x205e44u: goto label_205e44;
        case 0x205e48u: goto label_205e48;
        case 0x205e4cu: goto label_205e4c;
        case 0x205e50u: goto label_205e50;
        case 0x205e54u: goto label_205e54;
        case 0x205e58u: goto label_205e58;
        case 0x205e5cu: goto label_205e5c;
        case 0x205e60u: goto label_205e60;
        case 0x205e64u: goto label_205e64;
        case 0x205e68u: goto label_205e68;
        case 0x205e6cu: goto label_205e6c;
        case 0x205e70u: goto label_205e70;
        case 0x205e74u: goto label_205e74;
        case 0x205e78u: goto label_205e78;
        case 0x205e7cu: goto label_205e7c;
        case 0x205e80u: goto label_205e80;
        case 0x205e84u: goto label_205e84;
        case 0x205e88u: goto label_205e88;
        case 0x205e8cu: goto label_205e8c;
        case 0x205e90u: goto label_205e90;
        case 0x205e94u: goto label_205e94;
        case 0x205e98u: goto label_205e98;
        case 0x205e9cu: goto label_205e9c;
        case 0x205ea0u: goto label_205ea0;
        case 0x205ea4u: goto label_205ea4;
        case 0x205ea8u: goto label_205ea8;
        case 0x205eacu: goto label_205eac;
        case 0x205eb0u: goto label_205eb0;
        case 0x205eb4u: goto label_205eb4;
        case 0x205eb8u: goto label_205eb8;
        case 0x205ebcu: goto label_205ebc;
        case 0x205ec0u: goto label_205ec0;
        case 0x205ec4u: goto label_205ec4;
        case 0x205ec8u: goto label_205ec8;
        case 0x205eccu: goto label_205ecc;
        case 0x205ed0u: goto label_205ed0;
        case 0x205ed4u: goto label_205ed4;
        case 0x205ed8u: goto label_205ed8;
        case 0x205edcu: goto label_205edc;
        case 0x205ee0u: goto label_205ee0;
        case 0x205ee4u: goto label_205ee4;
        case 0x205ee8u: goto label_205ee8;
        case 0x205eecu: goto label_205eec;
        case 0x205ef0u: goto label_205ef0;
        case 0x205ef4u: goto label_205ef4;
        case 0x205ef8u: goto label_205ef8;
        case 0x205efcu: goto label_205efc;
        case 0x205f00u: goto label_205f00;
        case 0x205f04u: goto label_205f04;
        case 0x205f08u: goto label_205f08;
        case 0x205f0cu: goto label_205f0c;
        case 0x205f10u: goto label_205f10;
        case 0x205f14u: goto label_205f14;
        case 0x205f18u: goto label_205f18;
        case 0x205f1cu: goto label_205f1c;
        case 0x205f20u: goto label_205f20;
        case 0x205f24u: goto label_205f24;
        case 0x205f28u: goto label_205f28;
        case 0x205f2cu: goto label_205f2c;
        case 0x205f30u: goto label_205f30;
        case 0x205f34u: goto label_205f34;
        case 0x205f38u: goto label_205f38;
        case 0x205f3cu: goto label_205f3c;
        case 0x205f40u: goto label_205f40;
        case 0x205f44u: goto label_205f44;
        case 0x205f48u: goto label_205f48;
        case 0x205f4cu: goto label_205f4c;
        case 0x205f50u: goto label_205f50;
        case 0x205f54u: goto label_205f54;
        case 0x205f58u: goto label_205f58;
        case 0x205f5cu: goto label_205f5c;
        case 0x205f60u: goto label_205f60;
        case 0x205f64u: goto label_205f64;
        case 0x205f68u: goto label_205f68;
        case 0x205f6cu: goto label_205f6c;
        case 0x205f70u: goto label_205f70;
        case 0x205f74u: goto label_205f74;
        case 0x205f78u: goto label_205f78;
        case 0x205f7cu: goto label_205f7c;
        case 0x205f80u: goto label_205f80;
        case 0x205f84u: goto label_205f84;
        default: return;
    }

label_2057b8:
    // 0x2057b8: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x2057b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_2057bc:
    // 0x2057bc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2057bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2057c0:
    // 0x2057c0: 0x8c442498  lw          $a0, 0x2498($v0)
    ctx->pc = 0x2057c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9368)));
label_2057c4:
    // 0x2057c4: 0x28820059  slti        $v0, $a0, 0x59
    ctx->pc = 0x2057c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)89) ? 1 : 0);
label_2057c8:
    // 0x2057c8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2057cc:
    if (ctx->pc == 0x2057CCu) {
        ctx->pc = 0x2057D0u;
        goto label_2057d0;
    }
    ctx->pc = 0x2057C8u;
    {
        const bool branch_taken_0x2057c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2057c8) {
            ctx->pc = 0x2057DCu;
            goto label_2057dc;
        }
    }
    ctx->pc = 0x2057D0u;
label_2057d0:
    // 0x2057d0: 0x240200ab  addiu       $v0, $zero, 0xAB
    ctx->pc = 0x2057d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_2057d4:
    // 0x2057d4: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
label_2057d8:
    if (ctx->pc == 0x2057D8u) {
        ctx->pc = 0x2057DCu;
        goto label_2057dc;
    }
    ctx->pc = 0x2057D4u;
    {
        const bool branch_taken_0x2057d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2057d4) {
            ctx->pc = 0x2057FCu;
            goto label_2057fc;
        }
    }
    ctx->pc = 0x2057DCu;
label_2057dc:
    // 0x2057dc: 0x0  nop
    ctx->pc = 0x2057dcu;
    // NOP
label_2057e0:
    // 0x2057e0: 0xa2a30120  sb          $v1, 0x120($s5)
    ctx->pc = 0x2057e0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 288), (uint8_t)GPR_U32(ctx, 3));
label_2057e4:
    // 0x2057e4: 0xa2a30121  sb          $v1, 0x121($s5)
    ctx->pc = 0x2057e4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 289), (uint8_t)GPR_U32(ctx, 3));
label_2057e8:
    // 0x2057e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2057e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2057ec:
    // 0x2057ec: 0xa2a30122  sb          $v1, 0x122($s5)
    ctx->pc = 0x2057ecu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 290), (uint8_t)GPR_U32(ctx, 3));
label_2057f0:
    // 0x2057f0: 0xa2a00123  sb          $zero, 0x123($s5)
    ctx->pc = 0x2057f0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 291), (uint8_t)GPR_U32(ctx, 0));
label_2057f4:
    // 0x2057f4: 0x10000007  b           . + 4 + (0x7 << 2)
label_2057f8:
    if (ctx->pc == 0x2057F8u) {
        ctx->pc = 0x2057F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057F4u;
        // 0x2057f8: 0xaea20124  sw          $v0, 0x124($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2057FCu;
        goto label_2057fc;
    }
    ctx->pc = 0x2057F4u;
    {
        const bool branch_taken_0x2057f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2057F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057F4u;
        // 0x2057f8: 0xaea20124  sw          $v0, 0x124($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2057f4) {
            ctx->pc = 0x205814u;
            goto label_205814;
        }
    }
    ctx->pc = 0x2057FCu;
label_2057fc:
    // 0x2057fc: 0x0  nop
    ctx->pc = 0x2057fcu;
    // NOP
label_205800:
    // 0x205800: 0xa2a30120  sb          $v1, 0x120($s5)
    ctx->pc = 0x205800u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 288), (uint8_t)GPR_U32(ctx, 3));
label_205804:
    // 0x205804: 0xa2a30121  sb          $v1, 0x121($s5)
    ctx->pc = 0x205804u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 289), (uint8_t)GPR_U32(ctx, 3));
label_205808:
    // 0x205808: 0xa2a30122  sb          $v1, 0x122($s5)
    ctx->pc = 0x205808u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 290), (uint8_t)GPR_U32(ctx, 3));
label_20580c:
    // 0x20580c: 0xa2a70123  sb          $a3, 0x123($s5)
    ctx->pc = 0x20580cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 291), (uint8_t)GPR_U32(ctx, 7));
label_205810:
    // 0x205810: 0xaea60124  sw          $a2, 0x124($s5)
    ctx->pc = 0x205810u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 292), GPR_U32(ctx, 6));
label_205814:
    // 0x205814: 0x0  nop
    ctx->pc = 0x205814u;
    // NOP
label_205818:
    // 0x205818: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x205818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_20581c:
    // 0x20581c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x20581cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_205820:
    // 0x205820: 0xc070c20  jal         func_1C3080
label_205824:
    if (ctx->pc == 0x205824u) {
        ctx->pc = 0x205824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205820u;
        // 0x205824: 0x8c442498  lw          $a0, 0x2498($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205828u;
        goto label_205828;
    }
    ctx->pc = 0x205820u;
    SET_GPR_U32(ctx, 31, 0x205828u);
    ctx->pc = 0x205824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205820u;
    // 0x205824: 0x8c442498  lw          $a0, 0x2498($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9368)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3080u;
    { ctx->pc = 0x1c3080; return; }
    ctx->pc = 0x205828u;
label_205828:
    // 0x205828: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x205828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20582c:
    // 0x20582c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x20582cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_205830:
    // 0x205830: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x205830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_205834:
    // 0x205834: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x205834u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205838:
    // 0x205838: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x205838u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20583c:
    // 0x20583c: 0xc066c72  jal         func_19B1C8
label_205840:
    if (ctx->pc == 0x205840u) {
        ctx->pc = 0x205840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20583Cu;
        // 0x205840: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205844u;
        goto label_205844;
    }
    ctx->pc = 0x20583Cu;
    SET_GPR_U32(ctx, 31, 0x205844u);
    ctx->pc = 0x205840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20583Cu;
    // 0x205840: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20583Cu, 0x205844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205844u;
label_205844:
    // 0x205844: 0x8f8490f8  lw          $a0, -0x6F08($gp)
    ctx->pc = 0x205844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_205848:
    // 0x205848: 0x8c822490  lw          $v0, 0x2490($a0)
    ctx->pc = 0x205848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 9360)));
label_20584c:
    // 0x20584c: 0x1454002f  bne         $v0, $s4, . + 4 + (0x2F << 2)
label_205850:
    if (ctx->pc == 0x205850u) {
        ctx->pc = 0x205850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20584Cu;
        // 0x205850: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205854u;
        goto label_205854;
    }
    ctx->pc = 0x20584Cu;
    {
        const bool branch_taken_0x20584c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x205850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20584Cu;
        // 0x205850: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20584c) {
            ctx->pc = 0x20590Cu;
            goto label_20590c;
        }
    }
    ctx->pc = 0x205854u;
label_205854:
    // 0x205854: 0x8c85248c  lw          $a1, 0x248C($a0)
    ctx->pc = 0x205854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 9356)));
label_205858:
    // 0x205858: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x205858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20585c:
    // 0x20585c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x20585cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_205860:
    // 0x205860: 0x28a10020  slti        $at, $a1, 0x20
    ctx->pc = 0x205860u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_205864:
    // 0x205864: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x205864u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_205868:
    // 0x205868: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x205868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20586c:
    // 0x20586c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x20586cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_205870:
    // 0x205870: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x205870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_205874:
    // 0x205874: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x205874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_205878:
    // 0x205878: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_20587c:
    if (ctx->pc == 0x20587Cu) {
        ctx->pc = 0x20587Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205878u;
        // 0x20587c: 0x24551ee0  addiu       $s5, $v0, 0x1EE0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 7904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205880u;
        goto label_205880;
    }
    ctx->pc = 0x205878u;
    {
        const bool branch_taken_0x205878 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20587Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205878u;
        // 0x20587c: 0x24551ee0  addiu       $s5, $v0, 0x1EE0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 7904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205878) {
            ctx->pc = 0x20589Cu;
            goto label_20589c;
        }
    }
    ctx->pc = 0x205880u;
label_205880:
    // 0x205880: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x205880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_205884:
    // 0x205884: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_205888:
    if (ctx->pc == 0x205888u) {
        ctx->pc = 0x205888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205884u;
        // 0x205888: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20588Cu;
        goto label_20588c;
    }
    ctx->pc = 0x205884u;
    {
        const bool branch_taken_0x205884 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x205888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205884u;
        // 0x205888: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205884) {
            ctx->pc = 0x205894u;
            goto label_205894;
        }
    }
    ctx->pc = 0x20588Cu;
label_20588c:
    // 0x20588c: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x20588cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_205890:
    // 0x205890: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x205890u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_205894:
    // 0x205894: 0x10000009  b           . + 4 + (0x9 << 2)
label_205898:
    if (ctx->pc == 0x205898u) {
        ctx->pc = 0x205898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205894u;
        // 0x205898: 0x24430020  addiu       $v1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20589Cu;
        goto label_20589c;
    }
    ctx->pc = 0x205894u;
    {
        const bool branch_taken_0x205894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205894u;
        // 0x205898: 0x24430020  addiu       $v1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205894) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x20589Cu;
label_20589c:
    // 0x20589c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x20589cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2058a0:
    // 0x2058a0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2058a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2058a4:
    // 0x2058a4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2058a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_2058a8:
    // 0x2058a8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_2058ac:
    if (ctx->pc == 0x2058ACu) {
        ctx->pc = 0x2058ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058A8u;
        // 0x2058ac: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2058B0u;
        goto label_2058b0;
    }
    ctx->pc = 0x2058A8u;
    {
        const bool branch_taken_0x2058a8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2058ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058A8u;
        // 0x2058ac: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2058a8) {
            ctx->pc = 0x2058B8u;
            goto label_2058b8;
        }
    }
    ctx->pc = 0x2058B0u;
label_2058b0:
    // 0x2058b0: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x2058b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_2058b4:
    // 0x2058b4: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x2058b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_2058b8:
    // 0x2058b8: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x2058b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_2058bc:
    // 0x2058bc: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x2058bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
label_2058c0:
    // 0x2058c0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2058c4:
    if (ctx->pc == 0x2058C4u) {
        ctx->pc = 0x2058C8u;
        goto label_2058c8;
    }
    ctx->pc = 0x2058C0u;
    {
        const bool branch_taken_0x2058c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2058c0) {
            ctx->pc = 0x2058CCu;
            goto label_2058cc;
        }
    }
    ctx->pc = 0x2058C8u;
label_2058c8:
    // 0x2058c8: 0x2673003c  addiu       $s3, $s3, 0x3C
    ctx->pc = 0x2058c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
label_2058cc:
    // 0x2058cc: 0x0  nop
    ctx->pc = 0x2058ccu;
    // NOP
label_2058d0:
    // 0x2058d0: 0x306a00ff  andi        $t2, $v1, 0xFF
    ctx->pc = 0x2058d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2058d4:
    // 0x2058d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2058d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2058d8:
    // 0x2058d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2058d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2058dc:
    // 0x2058dc: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x2058dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_2058e0:
    // 0x2058e0: 0x24070078  addiu       $a3, $zero, 0x78
    ctx->pc = 0x2058e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_2058e4:
    // 0x2058e4: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x2058e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2058e8:
    // 0x2058e8: 0xc07c0d0  jal         func_1F0340
label_2058ec:
    if (ctx->pc == 0x2058ECu) {
        ctx->pc = 0x2058ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058E8u;
        // 0x2058ec: 0x2409000c  addiu       $t1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2058F0u;
        goto label_2058f0;
    }
    ctx->pc = 0x2058E8u;
    SET_GPR_U32(ctx, 31, 0x2058F0u);
    ctx->pc = 0x2058ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2058E8u;
    // 0x2058ec: 0x2409000c  addiu       $t1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0340u;
    { ctx->pc = 0x1f0340; return; }
    ctx->pc = 0x2058F0u;
label_2058f0:
    // 0x2058f0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2058f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2058f4:
    // 0x2058f4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2058f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2058f8:
    // 0x2058f8: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x2058f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_2058fc:
    // 0x2058fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2058fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205900:
    // 0x205900: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x205900u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205904:
    // 0x205904: 0xc066c72  jal         func_19B1C8
label_205908:
    if (ctx->pc == 0x205908u) {
        ctx->pc = 0x205908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205904u;
        // 0x205908: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20590Cu;
        goto label_20590c;
    }
    ctx->pc = 0x205904u;
    SET_GPR_U32(ctx, 31, 0x20590Cu);
    ctx->pc = 0x205908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205904u;
    // 0x205908: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x205904u, 0x20590Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20590Cu;
label_20590c:
    // 0x20590c: 0x0  nop
    ctx->pc = 0x20590cu;
    // NOP
label_205910:
    // 0x205910: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x205910u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_205914:
    // 0x205914: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x205914u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
label_205918:
    // 0x205918: 0x261002a0  addiu       $s0, $s0, 0x2A0
    ctx->pc = 0x205918u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
label_20591c:
    // 0x20591c: 0x1440ff5d  bnez        $v0, . + 4 + (-0xA3 << 2)
label_205920:
    if (ctx->pc == 0x205920u) {
        ctx->pc = 0x205920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20591Cu;
        // 0x205920: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205924u;
        goto label_205924;
    }
    ctx->pc = 0x20591Cu;
    {
        const bool branch_taken_0x20591c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20591Cu;
        // 0x205920: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20591c) {
            ctx->pc = 0x205694u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x205694; return; }
        }
    }
    ctx->pc = 0x205924u;
label_205924:
    // 0x205924: 0x8f8a90f8  lw          $t2, -0x6F08($gp)
    ctx->pc = 0x205924u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_205928:
    // 0x205928: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x205928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20592c:
    // 0x20592c: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x20592cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_205930:
    // 0x205930: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x205930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_205934:
    // 0x205934: 0x3445aaab  ori         $a1, $v0, 0xAAAB
    ctx->pc = 0x205934u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_205938:
    // 0x205938: 0x2404fdb0  addiu       $a0, $zero, -0x250
    ctx->pc = 0x205938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966704));
label_20593c:
    // 0x20593c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x20593cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_205940:
    // 0x205940: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x205940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_205944:
    // 0x205944: 0x24080060  addiu       $t0, $zero, 0x60
    ctx->pc = 0x205944u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_205948:
    // 0x205948: 0x8d492484  lw          $t1, 0x2484($t2)
    ctx->pc = 0x205948u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 9348)));
label_20594c:
    // 0x20594c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x20594cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_205950:
    // 0x205950: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x205950u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_205954:
    // 0x205954: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x205954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_205958:
    // 0x205958: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x205958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20595c:
    // 0x20595c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20595cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_205960:
    // 0x205960: 0x1241818  mult        $v1, $t1, $a0
    ctx->pc = 0x205960u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_205964:
    // 0x205964: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x205964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_205968:
    // 0x205968: 0x24500fc0  addiu       $s0, $v0, 0xFC0
    ctx->pc = 0x205968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4032));
label_20596c:
    // 0x20596c: 0xa30018  mult        $zero, $a1, $v1
    ctx->pc = 0x20596cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_205970:
    // 0x205970: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x205970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_205974:
    // 0x205974: 0x0  nop
    ctx->pc = 0x205974u;
    // NOP
label_205978:
    // 0x205978: 0x1010  mfhi        $v0
    ctx->pc = 0x205978u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_20597c:
    // 0x20597c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x20597cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_205980:
    // 0x205980: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x205980u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_205984:
    // 0x205984: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x205984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_205988:
    // 0x205988: 0x24510280  addiu       $s1, $v0, 0x280
    ctx->pc = 0x205988u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
label_20598c:
    // 0x20598c: 0xc07c25c  jal         func_1F0970
label_205990:
    if (ctx->pc == 0x205990u) {
        ctx->pc = 0x205990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20598Cu;
        // 0x205990: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205994u;
        goto label_205994;
    }
    ctx->pc = 0x20598Cu;
    SET_GPR_U32(ctx, 31, 0x205994u);
    ctx->pc = 0x205990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20598Cu;
    // 0x205990: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0970u;
    { ctx->pc = 0x1f0970; return; }
    ctx->pc = 0x205994u;
label_205994:
    // 0x205994: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x205994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_205998:
    // 0x205998: 0x24037d00  addiu       $v1, $zero, 0x7D00
    ctx->pc = 0x205998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32000));
label_20599c:
    // 0x20599c: 0x24476c00  addiu       $a3, $v0, 0x6C00
    ctx->pc = 0x20599cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_2059a0:
    // 0x2059a0: 0x3405fe00  ori         $a1, $zero, 0xFE00
    ctx->pc = 0x2059a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_2059a4:
    // 0x2059a4: 0xa6070630  sh          $a3, 0x630($s0)
    ctx->pc = 0x2059a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1584), (uint16_t)GPR_U32(ctx, 7));
label_2059a8:
    // 0x2059a8: 0x26220090  addiu       $v0, $s1, 0x90
    ctx->pc = 0x2059a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_2059ac:
    // 0x2059ac: 0xa6030632  sh          $v1, 0x632($s0)
    ctx->pc = 0x2059acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1586), (uint16_t)GPR_U32(ctx, 3));
label_2059b0:
    // 0x2059b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2059b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2059b4:
    // 0x2059b4: 0x24466c00  addiu       $a2, $v0, 0x6C00
    ctx->pc = 0x2059b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_2059b8:
    // 0x2059b8: 0xae050634  sw          $a1, 0x634($s0)
    ctx->pc = 0x2059b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1588), GPR_U32(ctx, 5));
label_2059bc:
    // 0x2059bc: 0x26220054  addiu       $v0, $s1, 0x54
    ctx->pc = 0x2059bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_2059c0:
    // 0x2059c0: 0xa6060640  sh          $a2, 0x640($s0)
    ctx->pc = 0x2059c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1600), (uint16_t)GPR_U32(ctx, 6));
label_2059c4:
    // 0x2059c4: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2059c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2059c8:
    // 0x2059c8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2059c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2059cc:
    // 0x2059cc: 0xa6040642  sh          $a0, 0x642($s0)
    ctx->pc = 0x2059ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1602), (uint16_t)GPR_U32(ctx, 4));
label_2059d0:
    // 0x2059d0: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x2059d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_2059d4:
    // 0x2059d4: 0xae050644  sw          $a1, 0x644($s0)
    ctx->pc = 0x2059d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1604), GPR_U32(ctx, 5));
label_2059d8:
    // 0x2059d8: 0x24027fa0  addiu       $v0, $zero, 0x7FA0
    ctx->pc = 0x2059d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32672));
label_2059dc:
    // 0x2059dc: 0xa60306d0  sh          $v1, 0x6D0($s0)
    ctx->pc = 0x2059dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1744), (uint16_t)GPR_U32(ctx, 3));
label_2059e0:
    // 0x2059e0: 0xa60206d2  sh          $v0, 0x6D2($s0)
    ctx->pc = 0x2059e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1746), (uint16_t)GPR_U32(ctx, 2));
label_2059e4:
    // 0x2059e4: 0xae0506d4  sw          $a1, 0x6D4($s0)
    ctx->pc = 0x2059e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1748), GPR_U32(ctx, 5));
label_2059e8:
    // 0x2059e8: 0xa60606e0  sh          $a2, 0x6E0($s0)
    ctx->pc = 0x2059e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1760), (uint16_t)GPR_U32(ctx, 6));
label_2059ec:
    // 0x2059ec: 0xa60406e2  sh          $a0, 0x6E2($s0)
    ctx->pc = 0x2059ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1762), (uint16_t)GPR_U32(ctx, 4));
label_2059f0:
    // 0x2059f0: 0xae0506e4  sw          $a1, 0x6E4($s0)
    ctx->pc = 0x2059f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1764), GPR_U32(ctx, 5));
label_2059f4:
    // 0x2059f4: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x2059f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_2059f8:
    // 0x2059f8: 0x8c422494  lw          $v0, 0x2494($v0)
    ctx->pc = 0x2059f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9364)));
label_2059fc:
    // 0x2059fc: 0x28410059  slti        $at, $v0, 0x59
    ctx->pc = 0x2059fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)89) ? 1 : 0);
label_205a00:
    // 0x205a00: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_205a04:
    if (ctx->pc == 0x205A04u) {
        ctx->pc = 0x205A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A00u;
        // 0x205a04: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205A08u;
        goto label_205a08;
    }
    ctx->pc = 0x205A00u;
    {
        const bool branch_taken_0x205a00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x205A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A00u;
        // 0x205a04: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205a00) {
            ctx->pc = 0x205A10u;
            goto label_205a10;
        }
    }
    ctx->pc = 0x205A08u;
label_205a08:
    // 0x205a08: 0x10000002  b           . + 4 + (0x2 << 2)
label_205a0c:
    if (ctx->pc == 0x205A0Cu) {
        ctx->pc = 0x205A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A08u;
        // 0x205a0c: 0xa20006c3  sb          $zero, 0x6C3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1731), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205A10u;
        goto label_205a10;
    }
    ctx->pc = 0x205A08u;
    {
        const bool branch_taken_0x205a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A08u;
        // 0x205a0c: 0xa20006c3  sb          $zero, 0x6C3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1731), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205a08) {
            ctx->pc = 0x205A14u;
            goto label_205a14;
        }
    }
    ctx->pc = 0x205A10u;
label_205a10:
    // 0x205a10: 0xa20206c3  sb          $v0, 0x6C3($s0)
    ctx->pc = 0x205a10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1731), (uint8_t)GPR_U32(ctx, 2));
label_205a14:
    // 0x205a14: 0x26220070  addiu       $v0, $s1, 0x70
    ctx->pc = 0x205a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_205a18:
    // 0x205a18: 0xa6070770  sh          $a3, 0x770($s0)
    ctx->pc = 0x205a18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1904), (uint16_t)GPR_U32(ctx, 7));
label_205a1c:
    // 0x205a1c: 0x24037c60  addiu       $v1, $zero, 0x7C60
    ctx->pc = 0x205a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31840));
label_205a20:
    // 0x205a20: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x205a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_205a24:
    // 0x205a24: 0xa6030772  sh          $v1, 0x772($s0)
    ctx->pc = 0x205a24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1906), (uint16_t)GPR_U32(ctx, 3));
label_205a28:
    // 0x205a28: 0x3404fe00  ori         $a0, $zero, 0xFE00
    ctx->pc = 0x205a28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_205a2c:
    // 0x205a2c: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x205a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_205a30:
    // 0x205a30: 0xae040774  sw          $a0, 0x774($s0)
    ctx->pc = 0x205a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1908), GPR_U32(ctx, 4));
label_205a34:
    // 0x205a34: 0x24027ce0  addiu       $v0, $zero, 0x7CE0
    ctx->pc = 0x205a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31968));
label_205a38:
    // 0x205a38: 0xa6030780  sh          $v1, 0x780($s0)
    ctx->pc = 0x205a38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1920), (uint16_t)GPR_U32(ctx, 3));
label_205a3c:
    // 0x205a3c: 0xa6020782  sh          $v0, 0x782($s0)
    ctx->pc = 0x205a3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1922), (uint16_t)GPR_U32(ctx, 2));
label_205a40:
    // 0x205a40: 0xae040784  sw          $a0, 0x784($s0)
    ctx->pc = 0x205a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1924), GPR_U32(ctx, 4));
label_205a44:
    // 0x205a44: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x205a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_205a48:
    // 0x205a48: 0xc070c20  jal         func_1C3080
label_205a4c:
    if (ctx->pc == 0x205A4Cu) {
        ctx->pc = 0x205A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A48u;
        // 0x205a4c: 0x8c442494  lw          $a0, 0x2494($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9364)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205A50u;
        goto label_205a50;
    }
    ctx->pc = 0x205A48u;
    SET_GPR_U32(ctx, 31, 0x205A50u);
    ctx->pc = 0x205A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205A48u;
    // 0x205a4c: 0x8c442494  lw          $a0, 0x2494($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9364)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3080u;
    { ctx->pc = 0x1c3080; return; }
    ctx->pc = 0x205A50u;
label_205a50:
    // 0x205a50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x205a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205a54:
    // 0x205a54: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x205a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_205a58:
    // 0x205a58: 0x24060079  addiu       $a2, $zero, 0x79
    ctx->pc = 0x205a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
label_205a5c:
    // 0x205a5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x205a5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205a60:
    // 0x205a60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x205a60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205a64:
    // 0x205a64: 0xc066c72  jal         func_19B1C8
label_205a68:
    if (ctx->pc == 0x205A68u) {
        ctx->pc = 0x205A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A64u;
        // 0x205a68: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205A6Cu;
        goto label_205a6c;
    }
    ctx->pc = 0x205A64u;
    SET_GPR_U32(ctx, 31, 0x205A6Cu);
    ctx->pc = 0x205A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205A64u;
    // 0x205a68: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x205A64u, 0x205A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205A6Cu;
label_205a6c:
    // 0x205a6c: 0x8f8890f8  lw          $t0, -0x6F08($gp)
    ctx->pc = 0x205a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_205a70:
    // 0x205a70: 0x8d042488  lw          $a0, 0x2488($t0)
    ctx->pc = 0x205a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 9352)));
label_205a74:
    // 0x205a74: 0x18800093  blez        $a0, . + 4 + (0x93 << 2)
label_205a78:
    if (ctx->pc == 0x205A78u) {
        ctx->pc = 0x205A7Cu;
        goto label_205a7c;
    }
    ctx->pc = 0x205A74u;
    {
        const bool branch_taken_0x205a74 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x205a74) {
            ctx->pc = 0x205CC4u;
            goto label_205cc4;
        }
    }
    ctx->pc = 0x205A7Cu;
label_205a7c:
    // 0x205a7c: 0x8d092490  lw          $t1, 0x2490($t0)
    ctx->pc = 0x205a7cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 9360)));
label_205a80:
    // 0x205a80: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x205a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_205a84:
    // 0x205a84: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x205a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_205a88:
    // 0x205a88: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x205a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
label_205a8c:
    // 0x205a8c: 0x8c253ffc  lw          $a1, 0x3FFC($at)
    ctx->pc = 0x205a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_205a90:
    // 0x205a90: 0x34435556  ori         $v1, $v0, 0x5556
    ctx->pc = 0x205a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
label_205a94:
    // 0x205a94: 0x126001a  div         $zero, $t1, $a2
    ctx->pc = 0x205a94u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_205a98:
    // 0x205a98: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x205a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_205a9c:
    // 0x205a9c: 0x453823  subu        $a3, $v0, $a1
    ctx->pc = 0x205a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_205aa0:
    // 0x205aa0: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x205aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_205aa4:
    // 0x205aa4: 0x92fc2  srl         $a1, $t1, 31
    ctx->pc = 0x205aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_205aa8:
    // 0x205aa8: 0x473023  subu        $a2, $v0, $a3
    ctx->pc = 0x205aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_205aac:
    // 0x205aac: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x205aacu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_205ab0:
    // 0x205ab0: 0x29220003  slti        $v0, $t1, 0x3
    ctx->pc = 0x205ab0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
label_205ab4:
    // 0x205ab4: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x205ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_205ab8:
    // 0x205ab8: 0x24d00d20  addiu       $s0, $a2, 0xD20
    ctx->pc = 0x205ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 3360));
label_205abc:
    // 0x205abc: 0x3010  mfhi        $a2
    ctx->pc = 0x205abcu;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_205ac0:
    // 0x205ac0: 0x690018  mult        $zero, $v1, $t1
    ctx->pc = 0x205ac0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_205ac4:
    // 0x205ac4: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x205ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_205ac8:
    // 0x205ac8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x205ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_205acc:
    // 0x205acc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x205accu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_205ad0:
    // 0x205ad0: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x205ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_205ad4:
    // 0x205ad4: 0x1810  mfhi        $v1
    ctx->pc = 0x205ad4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_205ad8:
    // 0x205ad8: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x205ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_205adc:
    // 0x205adc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x205adcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_205ae0:
    // 0x205ae0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x205ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_205ae4:
    // 0x205ae4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x205ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_205ae8:
    // 0x205ae8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_205aec:
    if (ctx->pc == 0x205AECu) {
        ctx->pc = 0x205AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AE8u;
        // 0x205aec: 0x246500f0  addiu       $a1, $v1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205AF0u;
        goto label_205af0;
    }
    ctx->pc = 0x205AE8u;
    {
        const bool branch_taken_0x205ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AE8u;
        // 0x205aec: 0x246500f0  addiu       $a1, $v1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ae8) {
            ctx->pc = 0x205AF4u;
            goto label_205af4;
        }
    }
    ctx->pc = 0x205AF0u;
label_205af0:
    // 0x205af0: 0x24c6003c  addiu       $a2, $a2, 0x3C
    ctx->pc = 0x205af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 60));
label_205af4:
    // 0x205af4: 0x24c3ffd0  addiu       $v1, $a2, -0x30
    ctx->pc = 0x205af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
label_205af8:
    // 0x205af8: 0x24a2ff80  addiu       $v0, $a1, -0x80
    ctx->pc = 0x205af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967168));
label_205afc:
    // 0x205afc: 0x643018  mult        $a2, $v1, $a0
    ctx->pc = 0x205afcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_205b00:
    // 0x205b00: 0x70445018  mult1       $t2, $v0, $a0
    ctx->pc = 0x205b00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_205b04:
    // 0x205b04: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x205b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_205b08:
    // 0x205b08: 0xa4fc2  srl         $t1, $t2, 31
    ctx->pc = 0x205b08u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
label_205b0c:
    // 0x205b0c: 0x3443aaab  ori         $v1, $v0, 0xAAAB
    ctx->pc = 0x205b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_205b10:
    // 0x205b10: 0x65fc2  srl         $t3, $a2, 31
    ctx->pc = 0x205b10u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_205b14:
    // 0x205b14: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x205b14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_205b18:
    // 0x205b18: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x205b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_205b1c:
    // 0x205b1c: 0x822823  subu        $a1, $a0, $v0
    ctx->pc = 0x205b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_205b20:
    // 0x205b20: 0x41023  negu        $v0, $a0
    ctx->pc = 0x205b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_205b24:
    // 0x205b24: 0x540c0  sll         $t0, $a1, 3
    ctx->pc = 0x205b24u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_205b28:
    // 0x205b28: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x205b28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_205b2c:
    // 0x205b2c: 0x2010  mfhi        $a0
    ctx->pc = 0x205b2cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_205b30:
    // 0x205b30: 0x837c2  srl         $a2, $t0, 31
    ctx->pc = 0x205b30u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_205b34:
    // 0x205b34: 0x53fc2  srl         $a3, $a1, 31
    ctx->pc = 0x205b34u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_205b38:
    // 0x205b38: 0x3402fe00  ori         $v0, $zero, 0xFE00
    ctx->pc = 0x205b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_205b3c:
    // 0x205b3c: 0x6a0018  mult        $zero, $v1, $t2
    ctx->pc = 0x205b3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_205b40:
    // 0x205b40: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x205b40u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_205b44:
    // 0x205b44: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x205b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_205b48:
    // 0x205b48: 0x248a0030  addiu       $t2, $a0, 0x30
    ctx->pc = 0x205b48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_205b4c:
    // 0x205b4c: 0xa2100  sll         $a0, $t2, 4
    ctx->pc = 0x205b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_205b50:
    // 0x205b50: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x205b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
label_205b54:
    // 0x205b54: 0xa6040090  sh          $a0, 0x90($s0)
    ctx->pc = 0x205b54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 144), (uint16_t)GPR_U32(ctx, 4));
label_205b58:
    // 0x205b58: 0x2010  mfhi        $a0
    ctx->pc = 0x205b58u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_205b5c:
    // 0x205b5c: 0x680018  mult        $zero, $v1, $t0
    ctx->pc = 0x205b5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_205b60:
    // 0x205b60: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x205b60u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_205b64:
    // 0x205b64: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x205b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_205b68:
    // 0x205b68: 0x24880080  addiu       $t0, $a0, 0x80
    ctx->pc = 0x205b68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_205b6c:
    // 0x205b6c: 0x820c0  sll         $a0, $t0, 3
    ctx->pc = 0x205b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_205b70:
    // 0x205b70: 0x24847900  addiu       $a0, $a0, 0x7900
    ctx->pc = 0x205b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
label_205b74:
    // 0x205b74: 0xa6040092  sh          $a0, 0x92($s0)
    ctx->pc = 0x205b74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 146), (uint16_t)GPR_U32(ctx, 4));
label_205b78:
    // 0x205b78: 0x2010  mfhi        $a0
    ctx->pc = 0x205b78u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_205b7c:
    // 0x205b7c: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x205b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_205b80:
    // 0x205b80: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x205b80u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_205b84:
    // 0x205b84: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x205b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_205b88:
    // 0x205b88: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x205b88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_205b8c:
    // 0x205b8c: 0x24840090  addiu       $a0, $a0, 0x90
    ctx->pc = 0x205b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
label_205b90:
    // 0x205b90: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x205b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_205b94:
    // 0x205b94: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x205b94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_205b98:
    // 0x205b98: 0x24a56c00  addiu       $a1, $a1, 0x6C00
    ctx->pc = 0x205b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27648));
label_205b9c:
    // 0x205b9c: 0x3010  mfhi        $a2
    ctx->pc = 0x205b9cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_205ba0:
    // 0x205ba0: 0xa60500a0  sh          $a1, 0xA0($s0)
    ctx->pc = 0x205ba0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 160), (uint16_t)GPR_U32(ctx, 5));
label_205ba4:
    // 0x205ba4: 0x62843  sra         $a1, $a2, 1
    ctx->pc = 0x205ba4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 1));
label_205ba8:
    // 0x205ba8: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x205ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_205bac:
    // 0x205bac: 0x24a50060  addiu       $a1, $a1, 0x60
    ctx->pc = 0x205bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
label_205bb0:
    // 0x205bb0: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x205bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_205bb4:
    // 0x205bb4: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x205bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_205bb8:
    // 0x205bb8: 0x24c67900  addiu       $a2, $a2, 0x7900
    ctx->pc = 0x205bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
label_205bbc:
    // 0x205bbc: 0xa60600a2  sh          $a2, 0xA2($s0)
    ctx->pc = 0x205bbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 162), (uint16_t)GPR_U32(ctx, 6));
label_205bc0:
    // 0x205bc0: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x205bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
label_205bc4:
    // 0x205bc4: 0x8f8690f8  lw          $a2, -0x6F08($gp)
    ctx->pc = 0x205bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_205bc8:
    // 0x205bc8: 0x8cc82488  lw          $t0, 0x2488($a2)
    ctx->pc = 0x205bc8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 9352)));
label_205bcc:
    // 0x205bcc: 0x83823  negu        $a3, $t0
    ctx->pc = 0x205bccu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
label_205bd0:
    // 0x205bd0: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x205bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_205bd4:
    // 0x205bd4: 0xc84023  subu        $t0, $a2, $t0
    ctx->pc = 0x205bd4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_205bd8:
    // 0x205bd8: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x205bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_205bdc:
    // 0x205bdc: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x205bdcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_205be0:
    // 0x205be0: 0x737c2  srl         $a2, $a3, 31
    ctx->pc = 0x205be0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_205be4:
    // 0x205be4: 0x680018  mult        $zero, $v1, $t0
    ctx->pc = 0x205be4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_205be8:
    // 0x205be8: 0x84fc2  srl         $t1, $t0, 31
    ctx->pc = 0x205be8u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_205bec:
    // 0x205bec: 0x0  nop
    ctx->pc = 0x205becu;
    // NOP
label_205bf0:
    // 0x205bf0: 0x4010  mfhi        $t0
    ctx->pc = 0x205bf0u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_205bf4:
    // 0x205bf4: 0x670018  mult        $zero, $v1, $a3
    ctx->pc = 0x205bf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_205bf8:
    // 0x205bf8: 0x81843  sra         $v1, $t0, 1
    ctx->pc = 0x205bf8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 8), 1));
label_205bfc:
    // 0x205bfc: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x205bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_205c00:
    // 0x205c00: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x205c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
label_205c04:
    // 0x205c04: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x205c04u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_205c08:
    // 0x205c08: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x205c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_205c0c:
    // 0x205c0c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x205c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_205c10:
    // 0x205c10: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x205c10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_205c14:
    // 0x205c14: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x205c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
label_205c18:
    // 0x205c18: 0xa6040130  sh          $a0, 0x130($s0)
    ctx->pc = 0x205c18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 304), (uint16_t)GPR_U32(ctx, 4));
label_205c1c:
    // 0x205c1c: 0x24646c00  addiu       $a0, $v1, 0x6C00
    ctx->pc = 0x205c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_205c20:
    // 0x205c20: 0x1810  mfhi        $v1
    ctx->pc = 0x205c20u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_205c24:
    // 0x205c24: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x205c24u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_205c28:
    // 0x205c28: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x205c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_205c2c:
    // 0x205c2c: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x205c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_205c30:
    // 0x205c30: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x205c30u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_205c34:
    // 0x205c34: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x205c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_205c38:
    // 0x205c38: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x205c38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_205c3c:
    // 0x205c3c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x205c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_205c40:
    // 0x205c40: 0x24a57900  addiu       $a1, $a1, 0x7900
    ctx->pc = 0x205c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30976));
label_205c44:
    // 0x205c44: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x205c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_205c48:
    // 0x205c48: 0xa6050132  sh          $a1, 0x132($s0)
    ctx->pc = 0x205c48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 306), (uint16_t)GPR_U32(ctx, 5));
label_205c4c:
    // 0x205c4c: 0xae020134  sw          $v0, 0x134($s0)
    ctx->pc = 0x205c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
label_205c50:
    // 0x205c50: 0xa6040140  sh          $a0, 0x140($s0)
    ctx->pc = 0x205c50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 4));
label_205c54:
    // 0x205c54: 0xa6030142  sh          $v1, 0x142($s0)
    ctx->pc = 0x205c54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 322), (uint16_t)GPR_U32(ctx, 3));
label_205c58:
    // 0x205c58: 0xae020144  sw          $v0, 0x144($s0)
    ctx->pc = 0x205c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 2));
label_205c5c:
    // 0x205c5c: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x205c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_205c60:
    // 0x205c60: 0x8c432490  lw          $v1, 0x2490($v0)
    ctx->pc = 0x205c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9360)));
label_205c64:
    // 0x205c64: 0x24422498  addiu       $v0, $v0, 0x2498
    ctx->pc = 0x205c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9368));
label_205c68:
    // 0x205c68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x205c68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_205c6c:
    // 0x205c6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x205c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_205c70:
    // 0x205c70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x205c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_205c74:
    // 0x205c74: 0x28410059  slti        $at, $v0, 0x59
    ctx->pc = 0x205c74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)89) ? 1 : 0);
label_205c78:
    // 0x205c78: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_205c7c:
    if (ctx->pc == 0x205C7Cu) {
        ctx->pc = 0x205C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C78u;
        // 0x205c7c: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205C80u;
        goto label_205c80;
    }
    ctx->pc = 0x205C78u;
    {
        const bool branch_taken_0x205c78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x205C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C78u;
        // 0x205c7c: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c78) {
            ctx->pc = 0x205C88u;
            goto label_205c88;
        }
    }
    ctx->pc = 0x205C80u;
label_205c80:
    // 0x205c80: 0x10000002  b           . + 4 + (0x2 << 2)
label_205c84:
    if (ctx->pc == 0x205C84u) {
        ctx->pc = 0x205C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C80u;
        // 0x205c84: 0xa2000123  sb          $zero, 0x123($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 291), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205C88u;
        goto label_205c88;
    }
    ctx->pc = 0x205C80u;
    {
        const bool branch_taken_0x205c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C80u;
        // 0x205c84: 0xa2000123  sb          $zero, 0x123($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 291), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c80) {
            ctx->pc = 0x205C8Cu;
            goto label_205c8c;
        }
    }
    ctx->pc = 0x205C88u;
label_205c88:
    // 0x205c88: 0xa2020123  sb          $v0, 0x123($s0)
    ctx->pc = 0x205c88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 291), (uint8_t)GPR_U32(ctx, 2));
label_205c8c:
    // 0x205c8c: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x205c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_205c90:
    // 0x205c90: 0x8c432490  lw          $v1, 0x2490($v0)
    ctx->pc = 0x205c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9360)));
label_205c94:
    // 0x205c94: 0x24422498  addiu       $v0, $v0, 0x2498
    ctx->pc = 0x205c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9368));
label_205c98:
    // 0x205c98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x205c98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_205c9c:
    // 0x205c9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x205c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_205ca0:
    // 0x205ca0: 0xc070c20  jal         func_1C3080
label_205ca4:
    if (ctx->pc == 0x205CA4u) {
        ctx->pc = 0x205CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205CA0u;
        // 0x205ca4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205CA8u;
        goto label_205ca8;
    }
    ctx->pc = 0x205CA0u;
    SET_GPR_U32(ctx, 31, 0x205CA8u);
    ctx->pc = 0x205CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205CA0u;
    // 0x205ca4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3080u;
    { ctx->pc = 0x1c3080; return; }
    ctx->pc = 0x205CA8u;
label_205ca8:
    // 0x205ca8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x205ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_205cac:
    // 0x205cac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x205cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205cb0:
    // 0x205cb0: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x205cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_205cb4:
    // 0x205cb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x205cb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205cb8:
    // 0x205cb8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x205cb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205cbc:
    // 0x205cbc: 0xc066c72  jal         func_19B1C8
label_205cc0:
    if (ctx->pc == 0x205CC0u) {
        ctx->pc = 0x205CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205CBCu;
        // 0x205cc0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205CC4u;
        goto label_205cc4;
    }
    ctx->pc = 0x205CBCu;
    SET_GPR_U32(ctx, 31, 0x205CC4u);
    ctx->pc = 0x205CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205CBCu;
    // 0x205cc0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x205CBCu, 0x205CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205CC4u;
label_205cc4:
    // 0x205cc4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x205cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_205cc8:
    // 0x205cc8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x205cc8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_205ccc:
    // 0x205ccc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x205cccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_205cd0:
    // 0x205cd0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x205cd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_205cd4:
    // 0x205cd4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x205cd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_205cd8:
    // 0x205cd8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x205cd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_205cdc:
    // 0x205cdc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x205cdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_205ce0:
    // 0x205ce0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x205ce0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_205ce4:
    // 0x205ce4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x205ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_205ce8:
    // 0x205ce8: 0x3e00008  jr          $ra
label_205cec:
    if (ctx->pc == 0x205CECu) {
        ctx->pc = 0x205CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205CE8u;
        // 0x205cec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205CF0u;
        goto label_205cf0;
    }
    ctx->pc = 0x205CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205CE8u;
        // 0x205cec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205CF0u;
label_205cf0:
    // 0x205cf0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x205cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_205cf4:
    // 0x205cf4: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x205cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_205cf8:
    // 0x205cf8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x205cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_205cfc:
    // 0x205cfc: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x205cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_205d00:
    // 0x205d00: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x205d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_205d04:
    // 0x205d04: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x205d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_205d08:
    // 0x205d08: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x205d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_205d0c:
    // 0x205d0c: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x205d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_205d10:
    // 0x205d10: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x205d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_205d14:
    // 0x205d14: 0x24a51300  addiu       $a1, $a1, 0x1300
    ctx->pc = 0x205d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4864));
label_205d18:
    // 0x205d18: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x205d18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_205d1c:
    // 0x205d1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x205d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_205d20:
    // 0x205d20: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x205d20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_205d24:
    // 0x205d24: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x205d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_205d28:
    // 0x205d28: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x205d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_205d2c:
    // 0x205d2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x205d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_205d30:
    // 0x205d30: 0xa4b821  addu        $s7, $a1, $a0
    ctx->pc = 0x205d30u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_205d34:
    // 0x205d34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x205d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_205d38:
    // 0x205d38: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x205d38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_205d3c:
    // 0x205d3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x205d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_205d40:
    // 0x205d40: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x205d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_205d44:
    // 0x205d44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x205d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_205d48:
    // 0x205d48: 0x2442497c  addiu       $v0, $v0, 0x497C
    ctx->pc = 0x205d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18812));
label_205d4c:
    // 0x205d4c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x205d4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205d50:
    // 0x205d50: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x205d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_205d54:
    // 0x205d54: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x205d54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_205d58:
    // 0x205d58: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x205d58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_205d5c:
    // 0x205d5c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_205d60:
    if (ctx->pc == 0x205D60u) {
        ctx->pc = 0x205D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D5Cu;
        // 0x205d60: 0x26f33620  addiu       $s3, $s7, 0x3620 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 13856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205D64u;
        goto label_205d64;
    }
    ctx->pc = 0x205D5Cu;
    {
        const bool branch_taken_0x205d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D5Cu;
        // 0x205d60: 0x26f33620  addiu       $s3, $s7, 0x3620 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 13856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205d5c) {
            ctx->pc = 0x205DD4u;
            goto label_205dd4;
        }
    }
    ctx->pc = 0x205D64u;
label_205d64:
    // 0x205d64: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x205d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_205d68:
    // 0x205d68: 0x92630070  lbu         $v1, 0x70($s3)
    ctx->pc = 0x205d68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 112)));
label_205d6c:
    // 0x205d6c: 0x24424990  addiu       $v0, $v0, 0x4990
    ctx->pc = 0x205d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18832));
label_205d70:
    // 0x205d70: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x205d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_205d74:
    // 0x205d74: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x205d74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_205d78:
    // 0x205d78: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_205d7c:
    if (ctx->pc == 0x205D7Cu) {
        ctx->pc = 0x205D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D78u;
        // 0x205d7c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205D80u;
        goto label_205d80;
    }
    ctx->pc = 0x205D78u;
    {
        const bool branch_taken_0x205d78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x205D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D78u;
        // 0x205d7c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205d78) {
            ctx->pc = 0x205DD4u;
            goto label_205dd4;
        }
    }
    ctx->pc = 0x205D80u;
label_205d80:
    // 0x205d80: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_205d84:
    if (ctx->pc == 0x205D84u) {
        ctx->pc = 0x205D88u;
        goto label_205d88;
    }
    ctx->pc = 0x205D80u;
    {
        const bool branch_taken_0x205d80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x205d80) {
            ctx->pc = 0x205D90u;
            goto label_205d90;
        }
    }
    ctx->pc = 0x205D88u;
label_205d88:
    // 0x205d88: 0x10000002  b           . + 4 + (0x2 << 2)
label_205d8c:
    if (ctx->pc == 0x205D8Cu) {
        ctx->pc = 0x205D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D88u;
        // 0x205d8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205D90u;
        goto label_205d90;
    }
    ctx->pc = 0x205D88u;
    {
        const bool branch_taken_0x205d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D88u;
        // 0x205d8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205d88) {
            ctx->pc = 0x205D94u;
            goto label_205d94;
        }
    }
    ctx->pc = 0x205D90u;
label_205d90:
    // 0x205d90: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x205d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_205d94:
    // 0x205d94: 0xa2620070  sb          $v0, 0x70($s3)
    ctx->pc = 0x205d94u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 112), (uint8_t)GPR_U32(ctx, 2));
label_205d98:
    // 0x205d98: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x205d98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_205d9c:
    // 0x205d9c: 0x92650070  lbu         $a1, 0x70($s3)
    ctx->pc = 0x205d9cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 112)));
label_205da0:
    // 0x205da0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x205da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_205da4:
    // 0x205da4: 0x2442caec  addiu       $v0, $v0, -0x3514
    ctx->pc = 0x205da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953708));
label_205da8:
    // 0x205da8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x205da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_205dac:
    // 0x205dac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x205dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_205db0:
    // 0x205db0: 0xc056834  jal         func_15A0D0
label_205db4:
    if (ctx->pc == 0x205DB4u) {
        ctx->pc = 0x205DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205DB0u;
        // 0x205db4: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205DB8u;
        goto label_205db8;
    }
    ctx->pc = 0x205DB0u;
    SET_GPR_U32(ctx, 31, 0x205DB8u);
    ctx->pc = 0x205DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205DB0u;
    // 0x205db4: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A0D0u, 0x205DB0u, 0x205DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205DB8u;
label_205db8:
    // 0x205db8: 0x8263006a  lb          $v1, 0x6A($s3)
    ctx->pc = 0x205db8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 106)));
label_205dbc:
    // 0x205dbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x205dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205dc0:
    // 0x205dc0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x205dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_205dc4:
    // 0x205dc4: 0xa2630077  sb          $v1, 0x77($s3)
    ctx->pc = 0x205dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 119), (uint8_t)GPR_U32(ctx, 3));
label_205dc8:
    // 0x205dc8: 0x92630077  lbu         $v1, 0x77($s3)
    ctx->pc = 0x205dc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 119)));
label_205dcc:
    // 0x205dcc: 0xa2630076  sb          $v1, 0x76($s3)
    ctx->pc = 0x205dccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 118), (uint8_t)GPR_U32(ctx, 3));
label_205dd0:
    // 0x205dd0: 0xa2620078  sb          $v0, 0x78($s3)
    ctx->pc = 0x205dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 120), (uint8_t)GPR_U32(ctx, 2));
label_205dd4:
    // 0x205dd4: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x205dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_205dd8:
    // 0x205dd8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x205dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_205ddc:
    // 0x205ddc: 0x92630070  lbu         $v1, 0x70($s3)
    ctx->pc = 0x205ddcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 112)));
label_205de0:
    // 0x205de0: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x205de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_205de4:
    // 0x205de4: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x205de4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_205de8:
    // 0x205de8: 0xc078050  jal         func_1E0140
label_205dec:
    if (ctx->pc == 0x205DECu) {
        ctx->pc = 0x205DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205DE8u;
        // 0x205dec: 0xac23e310  sw          $v1, -0x1CF0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294959888), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205DF0u;
        goto label_205df0;
    }
    ctx->pc = 0x205DE8u;
    SET_GPR_U32(ctx, 31, 0x205DF0u);
    ctx->pc = 0x205DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205DE8u;
    // 0x205dec: 0xac23e310  sw          $v1, -0x1CF0($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959888), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x205DF0u;
label_205df0:
    // 0x205df0: 0xc078070  jal         func_1E01C0
label_205df4:
    if (ctx->pc == 0x205DF4u) {
        ctx->pc = 0x205DF8u;
        goto label_205df8;
    }
    ctx->pc = 0x205DF0u;
    SET_GPR_U32(ctx, 31, 0x205DF8u);
    ctx->pc = 0x1E01C0u;
    { ctx->pc = 0x1e01c0; return; }
    ctx->pc = 0x205DF8u;
label_205df8:
    // 0x205df8: 0xc081d14  jal         func_207450
label_205dfc:
    if (ctx->pc == 0x205DFCu) {
        ctx->pc = 0x205DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205DF8u;
        // 0x205dfc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205E00u;
        goto label_205e00;
    }
    ctx->pc = 0x205DF8u;
    SET_GPR_U32(ctx, 31, 0x205E00u);
    ctx->pc = 0x205DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205DF8u;
    // 0x205dfc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207450u;
    { ctx->pc = 0x207450; return; }
    ctx->pc = 0x205E00u;
label_205e00:
    // 0x205e00: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x205e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_205e04:
    // 0x205e04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x205e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205e08:
    // 0x205e08: 0x3444e2e0  ori         $a0, $v0, 0xE2E0
    ctx->pc = 0x205e08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58080);
label_205e0c:
    // 0x205e0c: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x205e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_205e10:
    // 0x205e10: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x205e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_205e14:
    // 0x205e14: 0x10000003  b           . + 4 + (0x3 << 2)
label_205e18:
    if (ctx->pc == 0x205E18u) {
        ctx->pc = 0x205E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E14u;
        // 0x205e18: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205E1Cu;
        goto label_205e1c;
    }
    ctx->pc = 0x205E14u;
    {
        const bool branch_taken_0x205e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E14u;
        // 0x205e18: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205e14) {
            ctx->pc = 0x205E24u;
            goto label_205e24;
        }
    }
    ctx->pc = 0x205E1Cu;
label_205e1c:
    // 0x205e1c: 0xc07b48c  jal         func_1ED230
label_205e20:
    if (ctx->pc == 0x205E20u) {
        ctx->pc = 0x205E24u;
        goto label_205e24;
    }
    ctx->pc = 0x205E1Cu;
    SET_GPR_U32(ctx, 31, 0x205E24u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x205E24u;
label_205e24:
    // 0x205e24: 0x0  nop
    ctx->pc = 0x205e24u;
    // NOP
label_205e28:
    // 0x205e28: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x205e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_205e2c:
    // 0x205e2c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x205e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_205e30:
    // 0x205e30: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x205e30u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_205e34:
    // 0x205e34: 0x8c22e2e0  lw          $v0, -0x1D20($at)
    ctx->pc = 0x205e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959840)));
label_205e38:
    // 0x205e38: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_205e3c:
    if (ctx->pc == 0x205E3Cu) {
        ctx->pc = 0x205E40u;
        goto label_205e40;
    }
    ctx->pc = 0x205E38u;
    {
        const bool branch_taken_0x205e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205e38) {
            ctx->pc = 0x205E1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205e1c;
        }
    }
    ctx->pc = 0x205E40u;
label_205e40:
    // 0x205e40: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x205e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_205e44:
    // 0x205e44: 0x3442e30c  ori         $v0, $v0, 0xE30C
    ctx->pc = 0x205e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58124);
label_205e48:
    // 0x205e48: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x205e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_205e4c:
    // 0x205e4c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x205e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_205e50:
    // 0x205e50: 0x8f828f44  lw          $v0, -0x70BC($gp)
    ctx->pc = 0x205e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
label_205e54:
    // 0x205e54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_205e58:
    if (ctx->pc == 0x205E58u) {
        ctx->pc = 0x205E5Cu;
        goto label_205e5c;
    }
    ctx->pc = 0x205E54u;
    {
        const bool branch_taken_0x205e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205e54) {
            ctx->pc = 0x205E64u;
            goto label_205e64;
        }
    }
    ctx->pc = 0x205E5Cu;
label_205e5c:
    // 0x205e5c: 0x10000128  b           . + 4 + (0x128 << 2)
label_205e60:
    if (ctx->pc == 0x205E60u) {
        ctx->pc = 0x205E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E5Cu;
        // 0x205e60: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205E64u;
        goto label_205e64;
    }
    ctx->pc = 0x205E5Cu;
    {
        const bool branch_taken_0x205e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E5Cu;
        // 0x205e60: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205e5c) {
            ctx->pc = 0x206300u;
            { ctx->pc = 0x206300; return; }
        }
    }
    ctx->pc = 0x205E64u;
label_205e64:
    // 0x205e64: 0x8f828f40  lw          $v0, -0x70C0($gp)
    ctx->pc = 0x205e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938432)));
label_205e68:
    // 0x205e68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_205e6c:
    if (ctx->pc == 0x205E6Cu) {
        ctx->pc = 0x205E70u;
        goto label_205e70;
    }
    ctx->pc = 0x205E68u;
    {
        const bool branch_taken_0x205e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205e68) {
            ctx->pc = 0x205E78u;
            goto label_205e78;
        }
    }
    ctx->pc = 0x205E70u;
label_205e70:
    // 0x205e70: 0x10000123  b           . + 4 + (0x123 << 2)
label_205e74:
    if (ctx->pc == 0x205E74u) {
        ctx->pc = 0x205E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E70u;
        // 0x205e74: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205E78u;
        goto label_205e78;
    }
    ctx->pc = 0x205E70u;
    {
        const bool branch_taken_0x205e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E70u;
        // 0x205e74: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205e70) {
            ctx->pc = 0x206300u;
            { ctx->pc = 0x206300; return; }
        }
    }
    ctx->pc = 0x205E78u;
label_205e78:
    // 0x205e78: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x205e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_205e7c:
    // 0x205e7c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x205e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_205e80:
    // 0x205e80: 0x3463e324  ori         $v1, $v1, 0xE324
    ctx->pc = 0x205e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)58148);
label_205e84:
    // 0x205e84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x205e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_205e88:
    // 0x205e88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x205e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_205e8c:
    // 0x205e8c: 0x1440007f  bnez        $v0, . + 4 + (0x7F << 2)
label_205e90:
    if (ctx->pc == 0x205E90u) {
        ctx->pc = 0x205E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E8Cu;
        // 0x205e90: 0x152100  sll         $a0, $s5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205E94u;
        goto label_205e94;
    }
    ctx->pc = 0x205E8Cu;
    {
        const bool branch_taken_0x205e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E8Cu;
        // 0x205e90: 0x152100  sll         $a0, $s5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205e8c) {
            ctx->pc = 0x20608Cu;
            { ctx->pc = 0x20608c; return; }
        }
    }
    ctx->pc = 0x205E94u;
label_205e94:
    // 0x205e94: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x205e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_205e98:
    // 0x205e98: 0x821804  sllv        $v1, $v0, $a0
    ctx->pc = 0x205e98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_205e9c:
    // 0x205e9c: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x205e9cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_205ea0:
    // 0x205ea0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x205ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_205ea4:
    // 0x205ea4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_205ea8:
    if (ctx->pc == 0x205EA8u) {
        ctx->pc = 0x205EACu;
        goto label_205eac;
    }
    ctx->pc = 0x205EA4u;
    {
        const bool branch_taken_0x205ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205ea4) {
            ctx->pc = 0x205EC0u;
            goto label_205ec0;
        }
    }
    ctx->pc = 0x205EACu;
label_205eac:
    // 0x205eac: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x205eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_205eb0:
    // 0x205eb0: 0xc05b420  jal         func_16D080
label_205eb4:
    if (ctx->pc == 0x205EB4u) {
        ctx->pc = 0x205EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205EB0u;
        // 0x205eb4: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205EB8u;
        goto label_205eb8;
    }
    ctx->pc = 0x205EB0u;
    SET_GPR_U32(ctx, 31, 0x205EB8u);
    ctx->pc = 0x205EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205EB0u;
    // 0x205eb4: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x205EB0u, 0x205EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205EB8u;
label_205eb8:
    // 0x205eb8: 0x10000111  b           . + 4 + (0x111 << 2)
label_205ebc:
    if (ctx->pc == 0x205EBCu) {
        ctx->pc = 0x205EC0u;
        goto label_205ec0;
    }
    ctx->pc = 0x205EB8u;
    {
        const bool branch_taken_0x205eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x205eb8) {
            ctx->pc = 0x206300u;
            { ctx->pc = 0x206300; return; }
        }
    }
    ctx->pc = 0x205EC0u;
label_205ec0:
    // 0x205ec0: 0xdf8287c0  ld          $v0, -0x7840($gp)
    ctx->pc = 0x205ec0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_205ec4:
    // 0x205ec4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x205ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_205ec8:
    // 0x205ec8: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x205ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_205ecc:
    // 0x205ecc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x205eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_205ed0:
    // 0x205ed0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_205ed4:
    if (ctx->pc == 0x205ED4u) {
        ctx->pc = 0x205ED8u;
        goto label_205ed8;
    }
    ctx->pc = 0x205ED0u;
    {
        const bool branch_taken_0x205ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205ed0) {
            ctx->pc = 0x205F0Cu;
            goto label_205f0c;
        }
    }
    ctx->pc = 0x205ED8u;
label_205ed8:
    // 0x205ed8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x205ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205edc:
    // 0x205edc: 0xc05b420  jal         func_16D080
label_205ee0:
    if (ctx->pc == 0x205EE0u) {
        ctx->pc = 0x205EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205EDCu;
        // 0x205ee0: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205EE4u;
        goto label_205ee4;
    }
    ctx->pc = 0x205EDCu;
    SET_GPR_U32(ctx, 31, 0x205EE4u);
    ctx->pc = 0x205EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205EDCu;
    // 0x205ee0: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x205EDCu, 0x205EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205EE4u;
label_205ee4:
    // 0x205ee4: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_205ee8:
    if (ctx->pc == 0x205EE8u) {
        ctx->pc = 0x205EECu;
        goto label_205eec;
    }
    ctx->pc = 0x205EE4u;
    {
        const bool branch_taken_0x205ee4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x205ee4) {
            ctx->pc = 0x205EF4u;
            goto label_205ef4;
        }
    }
    ctx->pc = 0x205EECu;
label_205eec:
    // 0x205eec: 0x10000002  b           . + 4 + (0x2 << 2)
label_205ef0:
    if (ctx->pc == 0x205EF0u) {
        ctx->pc = 0x205EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205EECu;
        // 0x205ef0: 0x24120006  addiu       $s2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205EF4u;
        goto label_205ef4;
    }
    ctx->pc = 0x205EECu;
    {
        const bool branch_taken_0x205eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205EECu;
        // 0x205ef0: 0x24120006  addiu       $s2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205eec) {
            ctx->pc = 0x205EF8u;
            goto label_205ef8;
        }
    }
    ctx->pc = 0x205EF4u;
label_205ef4:
    // 0x205ef4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x205ef4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_205ef8:
    // 0x205ef8: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x205ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_205efc:
    // 0x205efc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x205efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_205f00:
    // 0x205f00: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x205f00u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_205f04:
    // 0x205f04: 0x100000fa  b           . + 4 + (0xFA << 2)
label_205f08:
    if (ctx->pc == 0x205F08u) {
        ctx->pc = 0x205F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F04u;
        // 0x205f08: 0xac32e30c  sw          $s2, -0x1CF4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294959884), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205F0Cu;
        goto label_205f0c;
    }
    ctx->pc = 0x205F04u;
    {
        const bool branch_taken_0x205f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F04u;
        // 0x205f08: 0xac32e30c  sw          $s2, -0x1CF4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294959884), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205f04) {
            ctx->pc = 0x2062F0u;
            { ctx->pc = 0x2062f0; return; }
        }
    }
    ctx->pc = 0x205F0Cu;
label_205f0c:
    // 0x205f0c: 0x0  nop
    ctx->pc = 0x205f0cu;
    // NOP
label_205f10:
    // 0x205f10: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x205f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_205f14:
    // 0x205f14: 0x821804  sllv        $v1, $v0, $a0
    ctx->pc = 0x205f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_205f18:
    // 0x205f18: 0xdf8287c0  ld          $v0, -0x7840($gp)
    ctx->pc = 0x205f18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_205f1c:
    // 0x205f1c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x205f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_205f20:
    // 0x205f20: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_205f24:
    if (ctx->pc == 0x205F24u) {
        ctx->pc = 0x205F28u;
        goto label_205f28;
    }
    ctx->pc = 0x205F20u;
    {
        const bool branch_taken_0x205f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205f20) {
            ctx->pc = 0x205F60u;
            goto label_205f60;
        }
    }
    ctx->pc = 0x205F28u;
label_205f28:
    // 0x205f28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x205f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205f2c:
    // 0x205f2c: 0xc05b420  jal         func_16D080
label_205f30:
    if (ctx->pc == 0x205F30u) {
        ctx->pc = 0x205F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F2Cu;
        // 0x205f30: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205F34u;
        goto label_205f34;
    }
    ctx->pc = 0x205F2Cu;
    SET_GPR_U32(ctx, 31, 0x205F34u);
    ctx->pc = 0x205F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205F2Cu;
    // 0x205f30: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x205F2Cu, 0x205F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205F34u;
label_205f34:
    // 0x205f34: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x205f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_205f38:
    // 0x205f38: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
label_205f3c:
    if (ctx->pc == 0x205F3Cu) {
        ctx->pc = 0x205F40u;
        goto label_205f40;
    }
    ctx->pc = 0x205F38u;
    {
        const bool branch_taken_0x205f38 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x205f38) {
            ctx->pc = 0x205F48u;
            goto label_205f48;
        }
    }
    ctx->pc = 0x205F40u;
label_205f40:
    // 0x205f40: 0x10000002  b           . + 4 + (0x2 << 2)
label_205f44:
    if (ctx->pc == 0x205F44u) {
        ctx->pc = 0x205F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F40u;
        // 0x205f44: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205F48u;
        goto label_205f48;
    }
    ctx->pc = 0x205F40u;
    {
        const bool branch_taken_0x205f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F40u;
        // 0x205f44: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205f40) {
            ctx->pc = 0x205F4Cu;
            goto label_205f4c;
        }
    }
    ctx->pc = 0x205F48u;
label_205f48:
    // 0x205f48: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x205f48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_205f4c:
    // 0x205f4c: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x205f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_205f50:
    // 0x205f50: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x205f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_205f54:
    // 0x205f54: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x205f54u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_205f58:
    // 0x205f58: 0x100000e5  b           . + 4 + (0xE5 << 2)
label_205f5c:
    if (ctx->pc == 0x205F5Cu) {
        ctx->pc = 0x205F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F58u;
        // 0x205f5c: 0xac32e30c  sw          $s2, -0x1CF4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294959884), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205F60u;
        goto label_205f60;
    }
    ctx->pc = 0x205F58u;
    {
        const bool branch_taken_0x205f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F58u;
        // 0x205f5c: 0xac32e30c  sw          $s2, -0x1CF4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294959884), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205f58) {
            ctx->pc = 0x2062F0u;
            { ctx->pc = 0x2062f0; return; }
        }
    }
    ctx->pc = 0x205F60u;
label_205f60:
    // 0x205f60: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x205f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_205f64:
    // 0x205f64: 0x821804  sllv        $v1, $v0, $a0
    ctx->pc = 0x205f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_205f68:
    // 0x205f68: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x205f68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_205f6c:
    // 0x205f6c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x205f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_205f70:
    // 0x205f70: 0x104000df  beqz        $v0, . + 4 + (0xDF << 2)
label_205f74:
    if (ctx->pc == 0x205F74u) {
        ctx->pc = 0x205F78u;
        goto label_205f78;
    }
    ctx->pc = 0x205F70u;
    {
        const bool branch_taken_0x205f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205f70) {
            ctx->pc = 0x2062F0u;
            { ctx->pc = 0x2062f0; return; }
        }
    }
    ctx->pc = 0x205F78u;
label_205f78:
    // 0x205f78: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x205f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_205f7c:
    // 0x205f7c: 0xc05b420  jal         func_16D080
label_205f80:
    if (ctx->pc == 0x205F80u) {
        ctx->pc = 0x205F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F7Cu;
        // 0x205f80: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205F84u;
        goto label_205f84;
    }
    ctx->pc = 0x205F7Cu;
    SET_GPR_U32(ctx, 31, 0x205F84u);
    ctx->pc = 0x205F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205F7Cu;
    // 0x205f80: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x205F7Cu, 0x205F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205F84u;
label_205f84:
    // 0x205f84: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x205f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x205f88u;
    return;
}

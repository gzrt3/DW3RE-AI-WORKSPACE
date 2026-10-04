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


void FUN_0014eba0_part105(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x181820u: goto label_181820;
        case 0x181824u: goto label_181824;
        case 0x181828u: goto label_181828;
        case 0x18182cu: goto label_18182c;
        case 0x181830u: goto label_181830;
        case 0x181834u: goto label_181834;
        case 0x181838u: goto label_181838;
        case 0x18183cu: goto label_18183c;
        case 0x181840u: goto label_181840;
        case 0x181844u: goto label_181844;
        case 0x181848u: goto label_181848;
        case 0x18184cu: goto label_18184c;
        case 0x181850u: goto label_181850;
        case 0x181854u: goto label_181854;
        case 0x181858u: goto label_181858;
        case 0x18185cu: goto label_18185c;
        case 0x181860u: goto label_181860;
        case 0x181864u: goto label_181864;
        case 0x181868u: goto label_181868;
        case 0x18186cu: goto label_18186c;
        case 0x181870u: goto label_181870;
        case 0x181874u: goto label_181874;
        case 0x181878u: goto label_181878;
        case 0x18187cu: goto label_18187c;
        case 0x181880u: goto label_181880;
        case 0x181884u: goto label_181884;
        case 0x181888u: goto label_181888;
        case 0x18188cu: goto label_18188c;
        case 0x181890u: goto label_181890;
        case 0x181894u: goto label_181894;
        case 0x181898u: goto label_181898;
        case 0x18189cu: goto label_18189c;
        case 0x1818a0u: goto label_1818a0;
        case 0x1818a4u: goto label_1818a4;
        case 0x1818a8u: goto label_1818a8;
        case 0x1818acu: goto label_1818ac;
        case 0x1818b0u: goto label_1818b0;
        case 0x1818b4u: goto label_1818b4;
        case 0x1818b8u: goto label_1818b8;
        case 0x1818bcu: goto label_1818bc;
        case 0x1818c0u: goto label_1818c0;
        case 0x1818c4u: goto label_1818c4;
        case 0x1818c8u: goto label_1818c8;
        case 0x1818ccu: goto label_1818cc;
        case 0x1818d0u: goto label_1818d0;
        case 0x1818d4u: goto label_1818d4;
        case 0x1818d8u: goto label_1818d8;
        case 0x1818dcu: goto label_1818dc;
        case 0x1818e0u: goto label_1818e0;
        case 0x1818e4u: goto label_1818e4;
        case 0x1818e8u: goto label_1818e8;
        case 0x1818ecu: goto label_1818ec;
        case 0x1818f0u: goto label_1818f0;
        case 0x1818f4u: goto label_1818f4;
        case 0x1818f8u: goto label_1818f8;
        case 0x1818fcu: goto label_1818fc;
        case 0x181900u: goto label_181900;
        case 0x181904u: goto label_181904;
        case 0x181908u: goto label_181908;
        case 0x18190cu: goto label_18190c;
        case 0x181910u: goto label_181910;
        case 0x181914u: goto label_181914;
        case 0x181918u: goto label_181918;
        case 0x18191cu: goto label_18191c;
        case 0x181920u: goto label_181920;
        case 0x181924u: goto label_181924;
        case 0x181928u: goto label_181928;
        case 0x18192cu: goto label_18192c;
        case 0x181930u: goto label_181930;
        case 0x181934u: goto label_181934;
        case 0x181938u: goto label_181938;
        case 0x18193cu: goto label_18193c;
        case 0x181940u: goto label_181940;
        case 0x181944u: goto label_181944;
        case 0x181948u: goto label_181948;
        case 0x18194cu: goto label_18194c;
        case 0x181950u: goto label_181950;
        case 0x181954u: goto label_181954;
        case 0x181958u: goto label_181958;
        case 0x18195cu: goto label_18195c;
        case 0x181960u: goto label_181960;
        case 0x181964u: goto label_181964;
        case 0x181968u: goto label_181968;
        case 0x18196cu: goto label_18196c;
        case 0x181970u: goto label_181970;
        case 0x181974u: goto label_181974;
        case 0x181978u: goto label_181978;
        case 0x18197cu: goto label_18197c;
        case 0x181980u: goto label_181980;
        case 0x181984u: goto label_181984;
        case 0x181988u: goto label_181988;
        case 0x18198cu: goto label_18198c;
        case 0x181990u: goto label_181990;
        case 0x181994u: goto label_181994;
        case 0x181998u: goto label_181998;
        case 0x18199cu: goto label_18199c;
        case 0x1819a0u: goto label_1819a0;
        case 0x1819a4u: goto label_1819a4;
        case 0x1819a8u: goto label_1819a8;
        case 0x1819acu: goto label_1819ac;
        case 0x1819b0u: goto label_1819b0;
        case 0x1819b4u: goto label_1819b4;
        case 0x1819b8u: goto label_1819b8;
        case 0x1819bcu: goto label_1819bc;
        case 0x1819c0u: goto label_1819c0;
        case 0x1819c4u: goto label_1819c4;
        case 0x1819c8u: goto label_1819c8;
        case 0x1819ccu: goto label_1819cc;
        case 0x1819d0u: goto label_1819d0;
        case 0x1819d4u: goto label_1819d4;
        case 0x1819d8u: goto label_1819d8;
        case 0x1819dcu: goto label_1819dc;
        case 0x1819e0u: goto label_1819e0;
        case 0x1819e4u: goto label_1819e4;
        case 0x1819e8u: goto label_1819e8;
        case 0x1819ecu: goto label_1819ec;
        case 0x1819f0u: goto label_1819f0;
        case 0x1819f4u: goto label_1819f4;
        case 0x1819f8u: goto label_1819f8;
        case 0x1819fcu: goto label_1819fc;
        case 0x181a00u: goto label_181a00;
        case 0x181a04u: goto label_181a04;
        case 0x181a08u: goto label_181a08;
        case 0x181a0cu: goto label_181a0c;
        case 0x181a10u: goto label_181a10;
        case 0x181a14u: goto label_181a14;
        case 0x181a18u: goto label_181a18;
        case 0x181a1cu: goto label_181a1c;
        case 0x181a20u: goto label_181a20;
        case 0x181a24u: goto label_181a24;
        case 0x181a28u: goto label_181a28;
        case 0x181a2cu: goto label_181a2c;
        case 0x181a30u: goto label_181a30;
        case 0x181a34u: goto label_181a34;
        case 0x181a38u: goto label_181a38;
        case 0x181a3cu: goto label_181a3c;
        case 0x181a40u: goto label_181a40;
        case 0x181a44u: goto label_181a44;
        case 0x181a48u: goto label_181a48;
        case 0x181a4cu: goto label_181a4c;
        case 0x181a50u: goto label_181a50;
        case 0x181a54u: goto label_181a54;
        case 0x181a58u: goto label_181a58;
        case 0x181a5cu: goto label_181a5c;
        case 0x181a60u: goto label_181a60;
        case 0x181a64u: goto label_181a64;
        case 0x181a68u: goto label_181a68;
        case 0x181a6cu: goto label_181a6c;
        case 0x181a70u: goto label_181a70;
        case 0x181a74u: goto label_181a74;
        case 0x181a78u: goto label_181a78;
        case 0x181a7cu: goto label_181a7c;
        case 0x181a80u: goto label_181a80;
        case 0x181a84u: goto label_181a84;
        case 0x181a88u: goto label_181a88;
        case 0x181a8cu: goto label_181a8c;
        case 0x181a90u: goto label_181a90;
        case 0x181a94u: goto label_181a94;
        case 0x181a98u: goto label_181a98;
        case 0x181a9cu: goto label_181a9c;
        case 0x181aa0u: goto label_181aa0;
        case 0x181aa4u: goto label_181aa4;
        case 0x181aa8u: goto label_181aa8;
        case 0x181aacu: goto label_181aac;
        case 0x181ab0u: goto label_181ab0;
        case 0x181ab4u: goto label_181ab4;
        case 0x181ab8u: goto label_181ab8;
        case 0x181abcu: goto label_181abc;
        case 0x181ac0u: goto label_181ac0;
        case 0x181ac4u: goto label_181ac4;
        case 0x181ac8u: goto label_181ac8;
        case 0x181accu: goto label_181acc;
        case 0x181ad0u: goto label_181ad0;
        case 0x181ad4u: goto label_181ad4;
        case 0x181ad8u: goto label_181ad8;
        case 0x181adcu: goto label_181adc;
        case 0x181ae0u: goto label_181ae0;
        case 0x181ae4u: goto label_181ae4;
        case 0x181ae8u: goto label_181ae8;
        case 0x181aecu: goto label_181aec;
        case 0x181af0u: goto label_181af0;
        case 0x181af4u: goto label_181af4;
        case 0x181af8u: goto label_181af8;
        case 0x181afcu: goto label_181afc;
        case 0x181b00u: goto label_181b00;
        case 0x181b04u: goto label_181b04;
        case 0x181b08u: goto label_181b08;
        case 0x181b0cu: goto label_181b0c;
        case 0x181b10u: goto label_181b10;
        case 0x181b14u: goto label_181b14;
        case 0x181b18u: goto label_181b18;
        case 0x181b1cu: goto label_181b1c;
        case 0x181b20u: goto label_181b20;
        case 0x181b24u: goto label_181b24;
        case 0x181b28u: goto label_181b28;
        case 0x181b2cu: goto label_181b2c;
        case 0x181b30u: goto label_181b30;
        case 0x181b34u: goto label_181b34;
        case 0x181b38u: goto label_181b38;
        case 0x181b3cu: goto label_181b3c;
        case 0x181b40u: goto label_181b40;
        case 0x181b44u: goto label_181b44;
        case 0x181b48u: goto label_181b48;
        case 0x181b4cu: goto label_181b4c;
        case 0x181b50u: goto label_181b50;
        case 0x181b54u: goto label_181b54;
        case 0x181b58u: goto label_181b58;
        case 0x181b5cu: goto label_181b5c;
        case 0x181b60u: goto label_181b60;
        case 0x181b64u: goto label_181b64;
        case 0x181b68u: goto label_181b68;
        case 0x181b6cu: goto label_181b6c;
        case 0x181b70u: goto label_181b70;
        case 0x181b74u: goto label_181b74;
        case 0x181b78u: goto label_181b78;
        case 0x181b7cu: goto label_181b7c;
        case 0x181b80u: goto label_181b80;
        case 0x181b84u: goto label_181b84;
        case 0x181b88u: goto label_181b88;
        case 0x181b8cu: goto label_181b8c;
        case 0x181b90u: goto label_181b90;
        case 0x181b94u: goto label_181b94;
        case 0x181b98u: goto label_181b98;
        case 0x181b9cu: goto label_181b9c;
        case 0x181ba0u: goto label_181ba0;
        case 0x181ba4u: goto label_181ba4;
        case 0x181ba8u: goto label_181ba8;
        case 0x181bacu: goto label_181bac;
        case 0x181bb0u: goto label_181bb0;
        case 0x181bb4u: goto label_181bb4;
        case 0x181bb8u: goto label_181bb8;
        case 0x181bbcu: goto label_181bbc;
        case 0x181bc0u: goto label_181bc0;
        case 0x181bc4u: goto label_181bc4;
        case 0x181bc8u: goto label_181bc8;
        case 0x181bccu: goto label_181bcc;
        case 0x181bd0u: goto label_181bd0;
        case 0x181bd4u: goto label_181bd4;
        case 0x181bd8u: goto label_181bd8;
        case 0x181bdcu: goto label_181bdc;
        case 0x181be0u: goto label_181be0;
        case 0x181be4u: goto label_181be4;
        case 0x181be8u: goto label_181be8;
        case 0x181becu: goto label_181bec;
        case 0x181bf0u: goto label_181bf0;
        case 0x181bf4u: goto label_181bf4;
        case 0x181bf8u: goto label_181bf8;
        case 0x181bfcu: goto label_181bfc;
        case 0x181c00u: goto label_181c00;
        case 0x181c04u: goto label_181c04;
        case 0x181c08u: goto label_181c08;
        case 0x181c0cu: goto label_181c0c;
        case 0x181c10u: goto label_181c10;
        case 0x181c14u: goto label_181c14;
        case 0x181c18u: goto label_181c18;
        case 0x181c1cu: goto label_181c1c;
        case 0x181c20u: goto label_181c20;
        case 0x181c24u: goto label_181c24;
        case 0x181c28u: goto label_181c28;
        case 0x181c2cu: goto label_181c2c;
        case 0x181c30u: goto label_181c30;
        case 0x181c34u: goto label_181c34;
        case 0x181c38u: goto label_181c38;
        case 0x181c3cu: goto label_181c3c;
        case 0x181c40u: goto label_181c40;
        case 0x181c44u: goto label_181c44;
        case 0x181c48u: goto label_181c48;
        case 0x181c4cu: goto label_181c4c;
        case 0x181c50u: goto label_181c50;
        case 0x181c54u: goto label_181c54;
        case 0x181c58u: goto label_181c58;
        case 0x181c5cu: goto label_181c5c;
        case 0x181c60u: goto label_181c60;
        case 0x181c64u: goto label_181c64;
        case 0x181c68u: goto label_181c68;
        case 0x181c6cu: goto label_181c6c;
        case 0x181c70u: goto label_181c70;
        case 0x181c74u: goto label_181c74;
        case 0x181c78u: goto label_181c78;
        case 0x181c7cu: goto label_181c7c;
        case 0x181c80u: goto label_181c80;
        case 0x181c84u: goto label_181c84;
        case 0x181c88u: goto label_181c88;
        case 0x181c8cu: goto label_181c8c;
        case 0x181c90u: goto label_181c90;
        case 0x181c94u: goto label_181c94;
        case 0x181c98u: goto label_181c98;
        case 0x181c9cu: goto label_181c9c;
        case 0x181ca0u: goto label_181ca0;
        case 0x181ca4u: goto label_181ca4;
        case 0x181ca8u: goto label_181ca8;
        case 0x181cacu: goto label_181cac;
        case 0x181cb0u: goto label_181cb0;
        case 0x181cb4u: goto label_181cb4;
        case 0x181cb8u: goto label_181cb8;
        case 0x181cbcu: goto label_181cbc;
        case 0x181cc0u: goto label_181cc0;
        case 0x181cc4u: goto label_181cc4;
        case 0x181cc8u: goto label_181cc8;
        case 0x181cccu: goto label_181ccc;
        case 0x181cd0u: goto label_181cd0;
        case 0x181cd4u: goto label_181cd4;
        case 0x181cd8u: goto label_181cd8;
        case 0x181cdcu: goto label_181cdc;
        case 0x181ce0u: goto label_181ce0;
        case 0x181ce4u: goto label_181ce4;
        case 0x181ce8u: goto label_181ce8;
        case 0x181cecu: goto label_181cec;
        case 0x181cf0u: goto label_181cf0;
        case 0x181cf4u: goto label_181cf4;
        case 0x181cf8u: goto label_181cf8;
        case 0x181cfcu: goto label_181cfc;
        case 0x181d00u: goto label_181d00;
        case 0x181d04u: goto label_181d04;
        case 0x181d08u: goto label_181d08;
        case 0x181d0cu: goto label_181d0c;
        case 0x181d10u: goto label_181d10;
        case 0x181d14u: goto label_181d14;
        case 0x181d18u: goto label_181d18;
        case 0x181d1cu: goto label_181d1c;
        case 0x181d20u: goto label_181d20;
        case 0x181d24u: goto label_181d24;
        case 0x181d28u: goto label_181d28;
        case 0x181d2cu: goto label_181d2c;
        case 0x181d30u: goto label_181d30;
        case 0x181d34u: goto label_181d34;
        case 0x181d38u: goto label_181d38;
        case 0x181d3cu: goto label_181d3c;
        case 0x181d40u: goto label_181d40;
        case 0x181d44u: goto label_181d44;
        case 0x181d48u: goto label_181d48;
        case 0x181d4cu: goto label_181d4c;
        case 0x181d50u: goto label_181d50;
        case 0x181d54u: goto label_181d54;
        case 0x181d58u: goto label_181d58;
        case 0x181d5cu: goto label_181d5c;
        case 0x181d60u: goto label_181d60;
        case 0x181d64u: goto label_181d64;
        case 0x181d68u: goto label_181d68;
        case 0x181d6cu: goto label_181d6c;
        case 0x181d70u: goto label_181d70;
        case 0x181d74u: goto label_181d74;
        case 0x181d78u: goto label_181d78;
        case 0x181d7cu: goto label_181d7c;
        case 0x181d80u: goto label_181d80;
        case 0x181d84u: goto label_181d84;
        case 0x181d88u: goto label_181d88;
        case 0x181d8cu: goto label_181d8c;
        case 0x181d90u: goto label_181d90;
        case 0x181d94u: goto label_181d94;
        case 0x181d98u: goto label_181d98;
        case 0x181d9cu: goto label_181d9c;
        case 0x181da0u: goto label_181da0;
        case 0x181da4u: goto label_181da4;
        case 0x181da8u: goto label_181da8;
        case 0x181dacu: goto label_181dac;
        case 0x181db0u: goto label_181db0;
        case 0x181db4u: goto label_181db4;
        case 0x181db8u: goto label_181db8;
        case 0x181dbcu: goto label_181dbc;
        case 0x181dc0u: goto label_181dc0;
        case 0x181dc4u: goto label_181dc4;
        case 0x181dc8u: goto label_181dc8;
        case 0x181dccu: goto label_181dcc;
        case 0x181dd0u: goto label_181dd0;
        case 0x181dd4u: goto label_181dd4;
        case 0x181dd8u: goto label_181dd8;
        case 0x181ddcu: goto label_181ddc;
        case 0x181de0u: goto label_181de0;
        case 0x181de4u: goto label_181de4;
        case 0x181de8u: goto label_181de8;
        case 0x181decu: goto label_181dec;
        case 0x181df0u: goto label_181df0;
        case 0x181df4u: goto label_181df4;
        case 0x181df8u: goto label_181df8;
        case 0x181dfcu: goto label_181dfc;
        case 0x181e00u: goto label_181e00;
        case 0x181e04u: goto label_181e04;
        case 0x181e08u: goto label_181e08;
        case 0x181e0cu: goto label_181e0c;
        case 0x181e10u: goto label_181e10;
        case 0x181e14u: goto label_181e14;
        case 0x181e18u: goto label_181e18;
        case 0x181e1cu: goto label_181e1c;
        case 0x181e20u: goto label_181e20;
        case 0x181e24u: goto label_181e24;
        case 0x181e28u: goto label_181e28;
        case 0x181e2cu: goto label_181e2c;
        case 0x181e30u: goto label_181e30;
        case 0x181e34u: goto label_181e34;
        case 0x181e38u: goto label_181e38;
        case 0x181e3cu: goto label_181e3c;
        case 0x181e40u: goto label_181e40;
        case 0x181e44u: goto label_181e44;
        case 0x181e48u: goto label_181e48;
        case 0x181e4cu: goto label_181e4c;
        case 0x181e50u: goto label_181e50;
        case 0x181e54u: goto label_181e54;
        case 0x181e58u: goto label_181e58;
        case 0x181e5cu: goto label_181e5c;
        case 0x181e60u: goto label_181e60;
        case 0x181e64u: goto label_181e64;
        case 0x181e68u: goto label_181e68;
        case 0x181e6cu: goto label_181e6c;
        case 0x181e70u: goto label_181e70;
        case 0x181e74u: goto label_181e74;
        case 0x181e78u: goto label_181e78;
        case 0x181e7cu: goto label_181e7c;
        case 0x181e80u: goto label_181e80;
        case 0x181e84u: goto label_181e84;
        case 0x181e88u: goto label_181e88;
        case 0x181e8cu: goto label_181e8c;
        case 0x181e90u: goto label_181e90;
        case 0x181e94u: goto label_181e94;
        case 0x181e98u: goto label_181e98;
        case 0x181e9cu: goto label_181e9c;
        case 0x181ea0u: goto label_181ea0;
        case 0x181ea4u: goto label_181ea4;
        case 0x181ea8u: goto label_181ea8;
        case 0x181eacu: goto label_181eac;
        case 0x181eb0u: goto label_181eb0;
        case 0x181eb4u: goto label_181eb4;
        case 0x181eb8u: goto label_181eb8;
        case 0x181ebcu: goto label_181ebc;
        case 0x181ec0u: goto label_181ec0;
        case 0x181ec4u: goto label_181ec4;
        case 0x181ec8u: goto label_181ec8;
        case 0x181eccu: goto label_181ecc;
        case 0x181ed0u: goto label_181ed0;
        case 0x181ed4u: goto label_181ed4;
        case 0x181ed8u: goto label_181ed8;
        case 0x181edcu: goto label_181edc;
        case 0x181ee0u: goto label_181ee0;
        case 0x181ee4u: goto label_181ee4;
        case 0x181ee8u: goto label_181ee8;
        case 0x181eecu: goto label_181eec;
        case 0x181ef0u: goto label_181ef0;
        case 0x181ef4u: goto label_181ef4;
        case 0x181ef8u: goto label_181ef8;
        case 0x181efcu: goto label_181efc;
        case 0x181f00u: goto label_181f00;
        case 0x181f04u: goto label_181f04;
        case 0x181f08u: goto label_181f08;
        case 0x181f0cu: goto label_181f0c;
        case 0x181f10u: goto label_181f10;
        case 0x181f14u: goto label_181f14;
        case 0x181f18u: goto label_181f18;
        case 0x181f1cu: goto label_181f1c;
        case 0x181f20u: goto label_181f20;
        case 0x181f24u: goto label_181f24;
        case 0x181f28u: goto label_181f28;
        case 0x181f2cu: goto label_181f2c;
        case 0x181f30u: goto label_181f30;
        case 0x181f34u: goto label_181f34;
        case 0x181f38u: goto label_181f38;
        case 0x181f3cu: goto label_181f3c;
        case 0x181f40u: goto label_181f40;
        case 0x181f44u: goto label_181f44;
        case 0x181f48u: goto label_181f48;
        case 0x181f4cu: goto label_181f4c;
        case 0x181f50u: goto label_181f50;
        case 0x181f54u: goto label_181f54;
        case 0x181f58u: goto label_181f58;
        case 0x181f5cu: goto label_181f5c;
        case 0x181f60u: goto label_181f60;
        case 0x181f64u: goto label_181f64;
        case 0x181f68u: goto label_181f68;
        case 0x181f6cu: goto label_181f6c;
        case 0x181f70u: goto label_181f70;
        case 0x181f74u: goto label_181f74;
        case 0x181f78u: goto label_181f78;
        case 0x181f7cu: goto label_181f7c;
        case 0x181f80u: goto label_181f80;
        case 0x181f84u: goto label_181f84;
        case 0x181f88u: goto label_181f88;
        case 0x181f8cu: goto label_181f8c;
        case 0x181f90u: goto label_181f90;
        case 0x181f94u: goto label_181f94;
        case 0x181f98u: goto label_181f98;
        case 0x181f9cu: goto label_181f9c;
        case 0x181fa0u: goto label_181fa0;
        case 0x181fa4u: goto label_181fa4;
        case 0x181fa8u: goto label_181fa8;
        case 0x181facu: goto label_181fac;
        case 0x181fb0u: goto label_181fb0;
        case 0x181fb4u: goto label_181fb4;
        case 0x181fb8u: goto label_181fb8;
        case 0x181fbcu: goto label_181fbc;
        case 0x181fc0u: goto label_181fc0;
        case 0x181fc4u: goto label_181fc4;
        case 0x181fc8u: goto label_181fc8;
        case 0x181fccu: goto label_181fcc;
        case 0x181fd0u: goto label_181fd0;
        case 0x181fd4u: goto label_181fd4;
        case 0x181fd8u: goto label_181fd8;
        case 0x181fdcu: goto label_181fdc;
        case 0x181fe0u: goto label_181fe0;
        case 0x181fe4u: goto label_181fe4;
        case 0x181fe8u: goto label_181fe8;
        case 0x181fecu: goto label_181fec;
        default: return;
    }

label_181820:
    // 0x181820: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x181820u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
label_181824:
    // 0x181824: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181824u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_181828:
    // 0x181828: 0x4c00007  bltz        $a2, . + 4 + (0x7 << 2)
label_18182c:
    if (ctx->pc == 0x18182Cu) {
        ctx->pc = 0x18182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181828u;
        // 0x18182c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181830u;
        goto label_181830;
    }
    ctx->pc = 0x181828u;
    {
        const bool branch_taken_0x181828 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x18182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181828u;
        // 0x18182c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181828) {
            ctx->pc = 0x181848u;
            goto label_181848;
        }
    }
    ctx->pc = 0x181830u;
label_181830:
    // 0x181830: 0x28c100b8  slti        $at, $a2, 0xB8
    ctx->pc = 0x181830u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)184) ? 1 : 0);
label_181834:
    // 0x181834: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_181838:
    if (ctx->pc == 0x181838u) {
        ctx->pc = 0x181838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181834u;
        // 0x181838: 0x28c500b8  slti        $a1, $a2, 0xB8 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)184) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18183Cu;
        goto label_18183c;
    }
    ctx->pc = 0x181834u;
    {
        const bool branch_taken_0x181834 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x181838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181834u;
        // 0x181838: 0x28c500b8  slti        $a1, $a2, 0xB8 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)184) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x181834) {
            ctx->pc = 0x18184Cu;
            goto label_18184c;
        }
    }
    ctx->pc = 0x18183Cu;
label_18183c:
    // 0x18183c: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x18183cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_181840:
    // 0x181840: 0x10000007  b           . + 4 + (0x7 << 2)
label_181844:
    if (ctx->pc == 0x181844u) {
        ctx->pc = 0x181844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181840u;
        // 0x181844: 0x24a93ba0  addiu       $t1, $a1, 0x3BA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 15264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181848u;
        goto label_181848;
    }
    ctx->pc = 0x181840u;
    {
        const bool branch_taken_0x181840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181840u;
        // 0x181844: 0x24a93ba0  addiu       $t1, $a1, 0x3BA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 15264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181840) {
            ctx->pc = 0x181860u;
            goto label_181860;
        }
    }
    ctx->pc = 0x181848u;
label_181848:
    // 0x181848: 0x28c500b8  slti        $a1, $a2, 0xB8
    ctx->pc = 0x181848u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)184) ? 1 : 0);
label_18184c:
    // 0x18184c: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
label_181850:
    if (ctx->pc == 0x181850u) {
        ctx->pc = 0x181850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18184Cu;
        // 0x181850: 0x28c10238  slti        $at, $a2, 0x238 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)568) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x181854u;
        goto label_181854;
    }
    ctx->pc = 0x18184Cu;
    {
        const bool branch_taken_0x18184c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x181850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18184Cu;
        // 0x181850: 0x28c10238  slti        $at, $a2, 0x238 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)568) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18184c) {
            ctx->pc = 0x181860u;
            goto label_181860;
        }
    }
    ctx->pc = 0x181854u;
label_181854:
    // 0x181854: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_181858:
    if (ctx->pc == 0x181858u) {
        ctx->pc = 0x18185Cu;
        goto label_18185c;
    }
    ctx->pc = 0x181854u;
    {
        const bool branch_taken_0x181854 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x181854) {
            ctx->pc = 0x181860u;
            goto label_181860;
        }
    }
    ctx->pc = 0x18185Cu;
label_18185c:
    // 0x18185c: 0x24c93dc8  addiu       $t1, $a2, 0x3DC8
    ctx->pc = 0x18185cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 15816));
label_181860:
    // 0x181860: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x181860u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
label_181864:
    // 0x181864: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x181864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_181868:
    // 0x181868: 0xa1c3c  dsll32      $v1, $t2, 16
    ctx->pc = 0x181868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 16));
label_18186c:
    // 0x18186c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x18186cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_181870:
    // 0x181870: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181870u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_181874:
    // 0x181874: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x181874u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_181878:
    // 0x181878: 0x32bb8  dsll        $a1, $v1, 14
    ctx->pc = 0x181878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 14);
label_18187c:
    // 0x18187c: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x18187cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
label_181880:
    // 0x181880: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181880u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_181884:
    // 0x181884: 0xc52025  or          $a0, $a2, $a1
    ctx->pc = 0x181884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_181888:
    // 0x181888: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x181888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
label_18188c:
    // 0x18188c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x18188cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_181890:
    // 0x181890: 0x21eb8  dsll        $v1, $v0, 26
    ctx->pc = 0x181890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 26);
label_181894:
    // 0x181894: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x181894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
label_181898:
    // 0x181898: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x181898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_18189c:
    // 0x18189c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18189cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1818a0:
    // 0x1818a0: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1818a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
label_1818a4:
    // 0x1818a4: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x1818a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1818a8:
    // 0x1818a8: 0x9143c  dsll32      $v0, $t1, 16
    ctx->pc = 0x1818a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 16));
label_1818ac:
    // 0x1818ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1818acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1818b0:
    // 0x1818b0: 0x2217c  dsll32      $a0, $v0, 5
    ctx->pc = 0x1818b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 5));
label_1818b4:
    // 0x1818b4: 0x8143c  dsll32      $v0, $t0, 16
    ctx->pc = 0x1818b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 16));
label_1818b8:
    // 0x1818b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1818b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1818bc:
    // 0x1818bc: 0x21cfc  dsll32      $v1, $v0, 19
    ctx->pc = 0x1818bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 19));
label_1818c0:
    // 0x1818c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1818c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1818c4:
    // 0x1818c4: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1818c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_1818c8:
    // 0x1818c8: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1818c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_1818cc:
    // 0x1818cc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1818ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1818d0:
    // 0x1818d0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1818d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1818d4:
    // 0x1818d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1818d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1818d8:
    // 0x1818d8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1818d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1818dc:
    // 0x1818dc: 0x3e00008  jr          $ra
label_1818e0:
    if (ctx->pc == 0x1818E0u) {
        ctx->pc = 0x1818E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1818DCu;
        // 0x1818e0: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1818E4u;
        goto label_1818e4;
    }
    ctx->pc = 0x1818DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1818E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1818DCu;
        // 0x1818e0: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1818DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1818E4u;
label_1818e4:
    // 0x1818e4: 0x0  nop
    ctx->pc = 0x1818e4u;
    // NOP
label_1818e8:
    // 0x1818e8: 0x0  nop
    ctx->pc = 0x1818e8u;
    // NOP
label_1818ec:
    // 0x1818ec: 0x0  nop
    ctx->pc = 0x1818ecu;
    // NOP
label_1818f0:
    // 0x1818f0: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1818f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
label_1818f4:
    // 0x1818f4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1818f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1818f8:
    // 0x1818f8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1818f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1818fc:
    // 0x1818fc: 0x3c021fff  lui         $v0, 0x1FFF
    ctx->pc = 0x1818fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8191 << 16));
label_181900:
    // 0x181900: 0x32f7c  dsll32      $a1, $v1, 29
    ctx->pc = 0x181900u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 29));
label_181904:
    // 0x181904: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x181904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_181908:
    // 0x181908: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x181908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_18190c:
    // 0x18190c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18190cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_181910:
    // 0x181910: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x181910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_181914:
    // 0x181914: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x181914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_181918:
    // 0x181918: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x181918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_18191c:
    // 0x18191c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x18191cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_181920:
    // 0x181920: 0x3e00008  jr          $ra
label_181924:
    if (ctx->pc == 0x181924u) {
        ctx->pc = 0x181924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181920u;
        // 0x181924: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181928u;
        goto label_181928;
    }
    ctx->pc = 0x181920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181920u;
        // 0x181924: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181928u;
label_181928:
    // 0x181928: 0x0  nop
    ctx->pc = 0x181928u;
    // NOP
label_18192c:
    // 0x18192c: 0x0  nop
    ctx->pc = 0x18192cu;
    // NOP
label_181930:
    // 0x181930: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
label_181934:
    if (ctx->pc == 0x181934u) {
        ctx->pc = 0x181934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181930u;
        // 0x181934: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181938u;
        goto label_181938;
    }
    ctx->pc = 0x181930u;
    {
        const bool branch_taken_0x181930 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x181934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181930u;
        // 0x181934: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181930) {
            ctx->pc = 0x181950u;
            goto label_181950;
        }
    }
    ctx->pc = 0x181938u;
label_181938:
    // 0x181938: 0x28a100b8  slti        $at, $a1, 0xB8
    ctx->pc = 0x181938u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)184) ? 1 : 0);
label_18193c:
    // 0x18193c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_181940:
    if (ctx->pc == 0x181940u) {
        ctx->pc = 0x181940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18193Cu;
        // 0x181940: 0x28a200b8  slti        $v0, $a1, 0xB8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)184) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x181944u;
        goto label_181944;
    }
    ctx->pc = 0x18193Cu;
    {
        const bool branch_taken_0x18193c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x181940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18193Cu;
        // 0x181940: 0x28a200b8  slti        $v0, $a1, 0xB8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)184) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18193c) {
            ctx->pc = 0x181954u;
            goto label_181954;
        }
    }
    ctx->pc = 0x181944u;
label_181944:
    // 0x181944: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x181944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_181948:
    // 0x181948: 0x10000008  b           . + 4 + (0x8 << 2)
label_18194c:
    if (ctx->pc == 0x18194Cu) {
        ctx->pc = 0x18194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181948u;
        // 0x18194c: 0x24433ba0  addiu       $v1, $v0, 0x3BA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181950u;
        goto label_181950;
    }
    ctx->pc = 0x181948u;
    {
        const bool branch_taken_0x181948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181948u;
        // 0x18194c: 0x24433ba0  addiu       $v1, $v0, 0x3BA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181948) {
            ctx->pc = 0x18196Cu;
            goto label_18196c;
        }
    }
    ctx->pc = 0x181950u;
label_181950:
    // 0x181950: 0x28a200b8  slti        $v0, $a1, 0xB8
    ctx->pc = 0x181950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)184) ? 1 : 0);
label_181954:
    // 0x181954: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_181958:
    if (ctx->pc == 0x181958u) {
        ctx->pc = 0x181958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181954u;
        // 0x181958: 0x3143c  dsll32      $v0, $v1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18195Cu;
        goto label_18195c;
    }
    ctx->pc = 0x181954u;
    {
        const bool branch_taken_0x181954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181954u;
        // 0x181958: 0x3143c  dsll32      $v0, $v1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181954) {
            ctx->pc = 0x181970u;
            goto label_181970;
        }
    }
    ctx->pc = 0x18195Cu;
label_18195c:
    // 0x18195c: 0x28a10238  slti        $at, $a1, 0x238
    ctx->pc = 0x18195cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)568) ? 1 : 0);
label_181960:
    // 0x181960: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_181964:
    if (ctx->pc == 0x181964u) {
        ctx->pc = 0x181968u;
        goto label_181968;
    }
    ctx->pc = 0x181960u;
    {
        const bool branch_taken_0x181960 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x181960) {
            ctx->pc = 0x18196Cu;
            goto label_18196c;
        }
    }
    ctx->pc = 0x181968u;
label_181968:
    // 0x181968: 0x24a33dc8  addiu       $v1, $a1, 0x3DC8
    ctx->pc = 0x181968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15816));
label_18196c:
    // 0x18196c: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x18196cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
label_181970:
    // 0x181970: 0x3c03fff8  lui         $v1, 0xFFF8
    ctx->pc = 0x181970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65528 << 16));
label_181974:
    // 0x181974: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x181974u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_181978:
    // 0x181978: 0x3463001f  ori         $v1, $v1, 0x1F
    ctx->pc = 0x181978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31);
label_18197c:
    // 0x18197c: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x18197cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
label_181980:
    // 0x181980: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x181980u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_181984:
    // 0x181984: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x181984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_181988:
    // 0x181988: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x181988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_18198c:
    // 0x18198c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x18198cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_181990:
    // 0x181990: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x181990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_181994:
    // 0x181994: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x181994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_181998:
    // 0x181998: 0x3e00008  jr          $ra
label_18199c:
    if (ctx->pc == 0x18199Cu) {
        ctx->pc = 0x18199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181998u;
        // 0x18199c: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1819A0u;
        goto label_1819a0;
    }
    ctx->pc = 0x181998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181998u;
        // 0x18199c: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1819A0u;
label_1819a0:
    // 0x1819a0: 0x4800007  bltz        $a0, . + 4 + (0x7 << 2)
label_1819a4:
    if (ctx->pc == 0x1819A4u) {
        ctx->pc = 0x1819A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819A0u;
        // 0x1819a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1819A8u;
        goto label_1819a8;
    }
    ctx->pc = 0x1819A0u;
    {
        const bool branch_taken_0x1819a0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1819A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819A0u;
        // 0x1819a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1819a0) {
            ctx->pc = 0x1819C0u;
            goto label_1819c0;
        }
    }
    ctx->pc = 0x1819A8u;
label_1819a8:
    // 0x1819a8: 0x288100b8  slti        $at, $a0, 0xB8
    ctx->pc = 0x1819a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)184) ? 1 : 0);
label_1819ac:
    // 0x1819ac: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_1819b0:
    if (ctx->pc == 0x1819B0u) {
        ctx->pc = 0x1819B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819ACu;
        // 0x1819b0: 0x288300b8  slti        $v1, $a0, 0xB8 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)184) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1819B4u;
        goto label_1819b4;
    }
    ctx->pc = 0x1819ACu;
    {
        const bool branch_taken_0x1819ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1819B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819ACu;
        // 0x1819b0: 0x288300b8  slti        $v1, $a0, 0xB8 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)184) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1819ac) {
            ctx->pc = 0x1819C4u;
            goto label_1819c4;
        }
    }
    ctx->pc = 0x1819B4u;
label_1819b4:
    // 0x1819b4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1819b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1819b8:
    // 0x1819b8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1819bc:
    if (ctx->pc == 0x1819BCu) {
        ctx->pc = 0x1819BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819B8u;
        // 0x1819bc: 0x24423ba0  addiu       $v0, $v0, 0x3BA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1819C0u;
        goto label_1819c0;
    }
    ctx->pc = 0x1819B8u;
    {
        const bool branch_taken_0x1819b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1819BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819B8u;
        // 0x1819bc: 0x24423ba0  addiu       $v0, $v0, 0x3BA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1819b8) {
            ctx->pc = 0x1819D8u;
            goto label_1819d8;
        }
    }
    ctx->pc = 0x1819C0u;
label_1819c0:
    // 0x1819c0: 0x288300b8  slti        $v1, $a0, 0xB8
    ctx->pc = 0x1819c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)184) ? 1 : 0);
label_1819c4:
    // 0x1819c4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1819c8:
    if (ctx->pc == 0x1819C8u) {
        ctx->pc = 0x1819C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819C4u;
        // 0x1819c8: 0x28810238  slti        $at, $a0, 0x238 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)568) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1819CCu;
        goto label_1819cc;
    }
    ctx->pc = 0x1819C4u;
    {
        const bool branch_taken_0x1819c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1819C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819C4u;
        // 0x1819c8: 0x28810238  slti        $at, $a0, 0x238 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)568) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1819c4) {
            ctx->pc = 0x1819D8u;
            goto label_1819d8;
        }
    }
    ctx->pc = 0x1819CCu;
label_1819cc:
    // 0x1819cc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1819d0:
    if (ctx->pc == 0x1819D0u) {
        ctx->pc = 0x1819D4u;
        goto label_1819d4;
    }
    ctx->pc = 0x1819CCu;
    {
        const bool branch_taken_0x1819cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1819cc) {
            ctx->pc = 0x1819D8u;
            goto label_1819d8;
        }
    }
    ctx->pc = 0x1819D4u;
label_1819d4:
    // 0x1819d4: 0x24823dc8  addiu       $v0, $a0, 0x3DC8
    ctx->pc = 0x1819d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15816));
label_1819d8:
    // 0x1819d8: 0x3e00008  jr          $ra
label_1819dc:
    if (ctx->pc == 0x1819DCu) {
        ctx->pc = 0x1819E0u;
        goto label_1819e0;
    }
    ctx->pc = 0x1819D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1819D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1819E0u;
label_1819e0:
    // 0x1819e0: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1819e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1819e4:
    // 0x1819e4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1819e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1819e8:
    // 0x1819e8: 0x24422a30  addiu       $v0, $v0, 0x2A30
    ctx->pc = 0x1819e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10800));
label_1819ec:
    // 0x1819ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1819ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1819f0:
    // 0x1819f0: 0x3e00008  jr          $ra
label_1819f4:
    if (ctx->pc == 0x1819F4u) {
        ctx->pc = 0x1819F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819F0u;
        // 0x1819f4: 0x84420000  lh          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1819F8u;
        goto label_1819f8;
    }
    ctx->pc = 0x1819F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1819F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819F0u;
        // 0x1819f4: 0x84420000  lh          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1819F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1819F8u;
label_1819f8:
    // 0x1819f8: 0x0  nop
    ctx->pc = 0x1819f8u;
    // NOP
label_1819fc:
    // 0x1819fc: 0x0  nop
    ctx->pc = 0x1819fcu;
    // NOP
label_181a00:
    // 0x181a00: 0x3e00008  jr          $ra
label_181a04:
    if (ctx->pc == 0x181A04u) {
        ctx->pc = 0x181A08u;
        goto label_181a08;
    }
    ctx->pc = 0x181A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181A08u;
label_181a08:
    // 0x181a08: 0x0  nop
    ctx->pc = 0x181a08u;
    // NOP
label_181a0c:
    // 0x181a0c: 0x0  nop
    ctx->pc = 0x181a0cu;
    // NOP
label_181a10:
    // 0x181a10: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x181a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_181a14:
    // 0x181a14: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x181a14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
label_181a18:
    // 0x181a18: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x181a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_181a1c:
    // 0x181a1c: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x181a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
label_181a20:
    // 0x181a20: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x181a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_181a24:
    // 0x181a24: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x181a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_181a28:
    // 0x181a28: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x181a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_181a2c:
    // 0x181a2c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x181a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_181a30:
    // 0x181a30: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x181a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_181a34:
    // 0x181a34: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x181a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_181a38:
    // 0x181a38: 0x3e00008  jr          $ra
label_181a3c:
    if (ctx->pc == 0x181A3Cu) {
        ctx->pc = 0x181A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A38u;
        // 0x181a3c: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181A40u;
        goto label_181a40;
    }
    ctx->pc = 0x181A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A38u;
        // 0x181a3c: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181A40u;
label_181a40:
    // 0x181a40: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x181a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
label_181a44:
    // 0x181a44: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x181a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_181a48:
    // 0x181a48: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181a48u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_181a4c:
    // 0x181a4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x181a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181a50:
    // 0x181a50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x181a50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181a54:
    // 0x181a54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x181a54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181a58:
    // 0x181a58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x181a58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181a5c:
    // 0x181a5c: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_181a60:
    if (ctx->pc == 0x181A60u) {
        ctx->pc = 0x181A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A5Cu;
        // 0x181a60: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181A64u;
        goto label_181a64;
    }
    ctx->pc = 0x181A5Cu;
    {
        const bool branch_taken_0x181a5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x181A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A5Cu;
        // 0x181a60: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181a5c) {
            ctx->pc = 0x181AC4u;
            goto label_181ac4;
        }
    }
    ctx->pc = 0x181A64u;
label_181a64:
    // 0x181a64: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x181a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_181a68:
    // 0x181a68: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_181a6c:
    if (ctx->pc == 0x181A6Cu) {
        ctx->pc = 0x181A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A68u;
        // 0x181a6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181A70u;
        goto label_181a70;
    }
    ctx->pc = 0x181A68u;
    {
        const bool branch_taken_0x181a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x181A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A68u;
        // 0x181a6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181a68) {
            ctx->pc = 0x181AB4u;
            goto label_181ab4;
        }
    }
    ctx->pc = 0x181A70u;
label_181a70:
    // 0x181a70: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_181a74:
    if (ctx->pc == 0x181A74u) {
        ctx->pc = 0x181A78u;
        goto label_181a78;
    }
    ctx->pc = 0x181A70u;
    {
        const bool branch_taken_0x181a70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x181a70) {
            ctx->pc = 0x181AA4u;
            goto label_181aa4;
        }
    }
    ctx->pc = 0x181A78u;
label_181a78:
    // 0x181a78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_181a7c:
    // 0x181a7c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_181a80:
    if (ctx->pc == 0x181A80u) {
        ctx->pc = 0x181A84u;
        goto label_181a84;
    }
    ctx->pc = 0x181A7Cu;
    {
        const bool branch_taken_0x181a7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x181a7c) {
            ctx->pc = 0x181A94u;
            goto label_181a94;
        }
    }
    ctx->pc = 0x181A84u;
label_181a84:
    // 0x181a84: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_181a88:
    if (ctx->pc == 0x181A88u) {
        ctx->pc = 0x181A8Cu;
        goto label_181a8c;
    }
    ctx->pc = 0x181A84u;
    {
        const bool branch_taken_0x181a84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x181a84) {
            ctx->pc = 0x181A94u;
            goto label_181a94;
        }
    }
    ctx->pc = 0x181A8Cu;
label_181a8c:
    // 0x181a8c: 0x10000011  b           . + 4 + (0x11 << 2)
label_181a90:
    if (ctx->pc == 0x181A90u) {
        ctx->pc = 0x181A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A8Cu;
        // 0x181a90: 0x25420001  addiu       $v0, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181A94u;
        goto label_181a94;
    }
    ctx->pc = 0x181A8Cu;
    {
        const bool branch_taken_0x181a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A8Cu;
        // 0x181a90: 0x25420001  addiu       $v0, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181a8c) {
            ctx->pc = 0x181AD4u;
            goto label_181ad4;
        }
    }
    ctx->pc = 0x181A94u;
label_181a94:
    // 0x181a94: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x181a94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181a98:
    // 0x181a98: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x181a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_181a9c:
    // 0x181a9c: 0x1000000c  b           . + 4 + (0xC << 2)
label_181aa0:
    if (ctx->pc == 0x181AA0u) {
        ctx->pc = 0x181AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A9Cu;
        // 0x181aa0: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181AA4u;
        goto label_181aa4;
    }
    ctx->pc = 0x181A9Cu;
    {
        const bool branch_taken_0x181a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A9Cu;
        // 0x181aa0: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181a9c) {
            ctx->pc = 0x181AD0u;
            goto label_181ad0;
        }
    }
    ctx->pc = 0x181AA4u;
label_181aa4:
    // 0x181aa4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x181aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_181aa8:
    // 0x181aa8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x181aa8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_181aac:
    // 0x181aac: 0x10000008  b           . + 4 + (0x8 << 2)
label_181ab0:
    if (ctx->pc == 0x181AB0u) {
        ctx->pc = 0x181AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181AACu;
        // 0x181ab0: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181AB4u;
        goto label_181ab4;
    }
    ctx->pc = 0x181AACu;
    {
        const bool branch_taken_0x181aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181AACu;
        // 0x181ab0: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181aac) {
            ctx->pc = 0x181AD0u;
            goto label_181ad0;
        }
    }
    ctx->pc = 0x181AB4u;
label_181ab4:
    // 0x181ab4: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x181ab4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_181ab8:
    // 0x181ab8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x181ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_181abc:
    // 0x181abc: 0x10000004  b           . + 4 + (0x4 << 2)
label_181ac0:
    if (ctx->pc == 0x181AC0u) {
        ctx->pc = 0x181AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181ABCu;
        // 0x181ac0: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181AC4u;
        goto label_181ac4;
    }
    ctx->pc = 0x181ABCu;
    {
        const bool branch_taken_0x181abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181ABCu;
        // 0x181ac0: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181abc) {
            ctx->pc = 0x181AD0u;
            goto label_181ad0;
        }
    }
    ctx->pc = 0x181AC4u;
label_181ac4:
    // 0x181ac4: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x181ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_181ac8:
    // 0x181ac8: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x181ac8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_181acc:
    // 0x181acc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x181accu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_181ad0:
    // 0x181ad0: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x181ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_181ad4:
    // 0x181ad4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_181ad8:
    if (ctx->pc == 0x181AD8u) {
        ctx->pc = 0x181AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181AD4u;
        // 0x181ad8: 0x25843  sra         $t3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181ADCu;
        goto label_181adc;
    }
    ctx->pc = 0x181AD4u;
    {
        const bool branch_taken_0x181ad4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x181AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181AD4u;
        // 0x181ad8: 0x25843  sra         $t3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181ad4) {
            ctx->pc = 0x181AE4u;
            goto label_181ae4;
        }
    }
    ctx->pc = 0x181ADCu;
label_181adc:
    // 0x181adc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x181adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_181ae0:
    // 0x181ae0: 0x25843  sra         $t3, $v0, 1
    ctx->pc = 0x181ae0u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 1));
label_181ae4:
    // 0x181ae4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x181ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_181ae8:
    // 0x181ae8: 0xa1843  sra         $v1, $t2, 1
    ctx->pc = 0x181ae8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 10), 1));
label_181aec:
    // 0x181aec: 0x5410003  bgez        $t2, . + 4 + (0x3 << 2)
label_181af0:
    if (ctx->pc == 0x181AF0u) {
        ctx->pc = 0x181AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181AECu;
        // 0x181af0: 0x1621004  sllv        $v0, $v0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 11) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181AF4u;
        goto label_181af4;
    }
    ctx->pc = 0x181AECu;
    {
        const bool branch_taken_0x181aec = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x181AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181AECu;
        // 0x181af0: 0x1621004  sllv        $v0, $v0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 11) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181aec) {
            ctx->pc = 0x181AFCu;
            goto label_181afc;
        }
    }
    ctx->pc = 0x181AF4u;
label_181af4:
    // 0x181af4: 0x25430001  addiu       $v1, $t2, 0x1
    ctx->pc = 0x181af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_181af8:
    // 0x181af8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x181af8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_181afc:
    // 0x181afc: 0x240d0008  addiu       $t5, $zero, 0x8
    ctx->pc = 0x181afcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_181b00:
    // 0x181b00: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x181b00u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181b04:
    // 0x181b04: 0x6d1804  sllv        $v1, $t5, $v1
    ctx->pc = 0x181b04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 3) & 0x1F));
label_181b08:
    // 0x181b08: 0x10000018  b           . + 4 + (0x18 << 2)
label_181b0c:
    if (ctx->pc == 0x181B0Cu) {
        ctx->pc = 0x181B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181B08u;
        // 0x181b0c: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181B10u;
        goto label_181b10;
    }
    ctx->pc = 0x181B08u;
    {
        const bool branch_taken_0x181b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181B08u;
        // 0x181b0c: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b08) {
            ctx->pc = 0x181B6Cu;
            goto label_181b6c;
        }
    }
    ctx->pc = 0x181B10u;
label_181b10:
    // 0x181b10: 0x254c0001  addiu       $t4, $t2, 0x1
    ctx->pc = 0x181b10u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_181b14:
    // 0x181b14: 0x5810003  bgez        $t4, . + 4 + (0x3 << 2)
label_181b18:
    if (ctx->pc == 0x181B18u) {
        ctx->pc = 0x181B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181B14u;
        // 0x181b18: 0xc5843  sra         $t3, $t4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181B1Cu;
        goto label_181b1c;
    }
    ctx->pc = 0x181B14u;
    {
        const bool branch_taken_0x181b14 = (GPR_S32(ctx, 12) >= 0);
        ctx->pc = 0x181B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181B14u;
        // 0x181b18: 0xc5843  sra         $t3, $t4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b14) {
            ctx->pc = 0x181B24u;
            goto label_181b24;
        }
    }
    ctx->pc = 0x181B1Cu;
label_181b1c:
    // 0x181b1c: 0x258b0001  addiu       $t3, $t4, 0x1
    ctx->pc = 0x181b1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_181b20:
    // 0x181b20: 0xb5843  sra         $t3, $t3, 1
    ctx->pc = 0x181b20u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 1));
label_181b24:
    // 0x181b24: 0x16d6004  sllv        $t4, $t5, $t3
    ctx->pc = 0x181b24u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 11) & 0x1F));
label_181b28:
    // 0x181b28: 0x5410003  bgez        $t2, . + 4 + (0x3 << 2)
label_181b2c:
    if (ctx->pc == 0x181B2Cu) {
        ctx->pc = 0x181B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181B28u;
        // 0x181b2c: 0xa5843  sra         $t3, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181B30u;
        goto label_181b30;
    }
    ctx->pc = 0x181B28u;
    {
        const bool branch_taken_0x181b28 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x181B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181B28u;
        // 0x181b2c: 0xa5843  sra         $t3, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b28) {
            ctx->pc = 0x181B38u;
            goto label_181b38;
        }
    }
    ctx->pc = 0x181B30u;
label_181b30:
    // 0x181b30: 0x254b0001  addiu       $t3, $t2, 0x1
    ctx->pc = 0x181b30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_181b34:
    // 0x181b34: 0xb5843  sra         $t3, $t3, 1
    ctx->pc = 0x181b34u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 1));
label_181b38:
    // 0x181b38: 0x16d7004  sllv        $t6, $t5, $t3
    ctx->pc = 0x181b38u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 11) & 0x1F));
label_181b3c:
    // 0x181b3c: 0x84ab0000  lh          $t3, 0x0($a1)
    ctx->pc = 0x181b3cu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_181b40:
    // 0x181b40: 0x18b082a  slt         $at, $t4, $t3
    ctx->pc = 0x181b40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_181b44:
    // 0x181b44: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
label_181b48:
    if (ctx->pc == 0x181B48u) {
        ctx->pc = 0x181B4Cu;
        goto label_181b4c;
    }
    ctx->pc = 0x181B44u;
    {
        const bool branch_taken_0x181b44 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x181b44) {
            ctx->pc = 0x181B68u;
            goto label_181b68;
        }
    }
    ctx->pc = 0x181B4Cu;
label_181b4c:
    // 0x181b4c: 0x84cb0000  lh          $t3, 0x0($a2)
    ctx->pc = 0x181b4cu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_181b50:
    // 0x181b50: 0x1cb082a  slt         $at, $t6, $t3
    ctx->pc = 0x181b50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_181b54:
    // 0x181b54: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_181b58:
    if (ctx->pc == 0x181B58u) {
        ctx->pc = 0x181B5Cu;
        goto label_181b5c;
    }
    ctx->pc = 0x181B54u;
    {
        const bool branch_taken_0x181b54 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x181b54) {
            ctx->pc = 0x181B68u;
            goto label_181b68;
        }
    }
    ctx->pc = 0x181B5Cu;
label_181b5c:
    // 0x181b5c: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x181b5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_181b60:
    // 0x181b60: 0x10000008  b           . + 4 + (0x8 << 2)
label_181b64:
    if (ctx->pc == 0x181B64u) {
        ctx->pc = 0x181B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181B60u;
        // 0x181b64: 0x1c0482d  daddu       $t1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181B68u;
        goto label_181b68;
    }
    ctx->pc = 0x181B60u;
    {
        const bool branch_taken_0x181b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181B60u;
        // 0x181b64: 0x1c0482d  daddu       $t1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b60) {
            ctx->pc = 0x181B84u;
            goto label_181b84;
        }
    }
    ctx->pc = 0x181B68u;
label_181b68:
    // 0x181b68: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x181b68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_181b6c:
    // 0x181b6c: 0x0  nop
    ctx->pc = 0x181b6cu;
    // NOP
label_181b70:
    // 0x181b70: 0x8c082a  slt         $at, $a0, $t4
    ctx->pc = 0x181b70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
label_181b74:
    // 0x181b74: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_181b78:
    if (ctx->pc == 0x181B78u) {
        ctx->pc = 0x181B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181B74u;
        // 0x181b78: 0xee082a  slt         $at, $a3, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x181B7Cu;
        goto label_181b7c;
    }
    ctx->pc = 0x181B74u;
    {
        const bool branch_taken_0x181b74 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x181B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181B74u;
        // 0x181b78: 0xee082a  slt         $at, $a3, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b74) {
            ctx->pc = 0x181B84u;
            goto label_181b84;
        }
    }
    ctx->pc = 0x181B7Cu;
label_181b7c:
    // 0x181b7c: 0x1020ffe4  beqz        $at, . + 4 + (-0x1C << 2)
label_181b80:
    if (ctx->pc == 0x181B80u) {
        ctx->pc = 0x181B84u;
        goto label_181b84;
    }
    ctx->pc = 0x181B7Cu;
    {
        const bool branch_taken_0x181b7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x181b7c) {
            ctx->pc = 0x181B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181b10;
        }
    }
    ctx->pc = 0x181B84u;
label_181b84:
    // 0x181b84: 0x0  nop
    ctx->pc = 0x181b84u;
    // NOP
label_181b88:
    // 0x181b88: 0x8c082a  slt         $at, $a0, $t4
    ctx->pc = 0x181b88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
label_181b8c:
    // 0x181b8c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_181b90:
    if (ctx->pc == 0x181B90u) {
        ctx->pc = 0x181B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181B8Cu;
        // 0x181b90: 0xee082a  slt         $at, $a3, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x181B94u;
        goto label_181b94;
    }
    ctx->pc = 0x181B8Cu;
    {
        const bool branch_taken_0x181b8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x181B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181B8Cu;
        // 0x181b90: 0xee082a  slt         $at, $a3, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b8c) {
            ctx->pc = 0x181B9Cu;
            goto label_181b9c;
        }
    }
    ctx->pc = 0x181B94u;
label_181b94:
    // 0x181b94: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_181b98:
    if (ctx->pc == 0x181B98u) {
        ctx->pc = 0x181B9Cu;
        goto label_181b9c;
    }
    ctx->pc = 0x181B94u;
    {
        const bool branch_taken_0x181b94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x181b94) {
            ctx->pc = 0x181BD8u;
            goto label_181bd8;
        }
    }
    ctx->pc = 0x181B9Cu;
label_181b9c:
    // 0x181b9c: 0x84a90000  lh          $t1, 0x0($a1)
    ctx->pc = 0x181b9cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_181ba0:
    // 0x181ba0: 0x84c80000  lh          $t0, 0x0($a2)
    ctx->pc = 0x181ba0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_181ba4:
    // 0x181ba4: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x181ba4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_181ba8:
    // 0x181ba8: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x181ba8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_181bac:
    // 0x181bac: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x181bacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_181bb0:
    // 0x181bb0: 0x124001a  div         $zero, $t1, $a0
    ctx->pc = 0x181bb0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_181bb4:
    // 0x181bb4: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x181bb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_181bb8:
    // 0x181bb8: 0x0  nop
    ctx->pc = 0x181bb8u;
    // NOP
label_181bbc:
    // 0x181bbc: 0x5012  mflo        $t2
    ctx->pc = 0x181bbcu;
    SET_GPR_U64(ctx, 10, ctx->lo);
label_181bc0:
    // 0x181bc0: 0x7107001a  div1        $zero, $t0, $a3
    ctx->pc = 0x181bc0u;
    { int32_t divisor = GPR_S32(ctx, 7); int32_t dividend = GPR_S32(ctx, 8); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
label_181bc4:
    // 0x181bc4: 0x0  nop
    ctx->pc = 0x181bc4u;
    // NOP
label_181bc8:
    // 0x181bc8: 0x0  nop
    ctx->pc = 0x181bc8u;
    // NOP
label_181bcc:
    // 0x181bcc: 0x70004812  mflo1       $t1
    ctx->pc = 0x181bccu;
    SET_GPR_U64(ctx, 9, ctx->lo1);
label_181bd0:
    // 0x181bd0: 0x8a4018  mult        $t0, $a0, $t2
    ctx->pc = 0x181bd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_181bd4:
    // 0x181bd4: 0xe94818  mult        $t1, $a3, $t1
    ctx->pc = 0x181bd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_181bd8:
    // 0x181bd8: 0x102001a  div         $zero, $t0, $v0
    ctx->pc = 0x181bd8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_181bdc:
    // 0x181bdc: 0xa4a80000  sh          $t0, 0x0($a1)
    ctx->pc = 0x181bdcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 8));
label_181be0:
    // 0x181be0: 0xa4c90000  sh          $t1, 0x0($a2)
    ctx->pc = 0x181be0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 9));
label_181be4:
    // 0x181be4: 0x2012  mflo        $a0
    ctx->pc = 0x181be4u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_181be8:
    // 0x181be8: 0x7123001a  div1        $zero, $t1, $v1
    ctx->pc = 0x181be8u;
    { int32_t divisor = GPR_S32(ctx, 3); int32_t dividend = GPR_S32(ctx, 9); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
label_181bec:
    // 0x181bec: 0x0  nop
    ctx->pc = 0x181becu;
    // NOP
label_181bf0:
    // 0x181bf0: 0x0  nop
    ctx->pc = 0x181bf0u;
    // NOP
label_181bf4:
    // 0x181bf4: 0x70001012  mflo1       $v0
    ctx->pc = 0x181bf4u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
label_181bf8:
    // 0x181bf8: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x181bf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_181bfc:
    // 0x181bfc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x181bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_181c00:
    // 0x181c00: 0x3e00008  jr          $ra
label_181c04:
    if (ctx->pc == 0x181C04u) {
        ctx->pc = 0x181C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C00u;
        // 0x181c04: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181C08u;
        goto label_181c08;
    }
    ctx->pc = 0x181C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C00u;
        // 0x181c04: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181C08u;
label_181c08:
    // 0x181c08: 0x0  nop
    ctx->pc = 0x181c08u;
    // NOP
label_181c0c:
    // 0x181c0c: 0x0  nop
    ctx->pc = 0x181c0cu;
    // NOP
label_181c10:
    // 0x181c10: 0x4443c  dsll32      $t0, $a0, 16
    ctx->pc = 0x181c10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << (32 + 16));
label_181c14:
    // 0x181c14: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x181c14u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
label_181c18:
    // 0x181c18: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x181c18u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
label_181c1c:
    // 0x181c1c: 0x1000000b  b           . + 4 + (0xB << 2)
label_181c20:
    if (ctx->pc == 0x181C20u) {
        ctx->pc = 0x181C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C1Cu;
        // 0x181c20: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181C24u;
        goto label_181c24;
    }
    ctx->pc = 0x181C1Cu;
    {
        const bool branch_taken_0x181c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C1Cu;
        // 0x181c20: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181c1c) {
            ctx->pc = 0x181C4Cu;
            goto label_181c4c;
        }
    }
    ctx->pc = 0x181C24u;
label_181c24:
    // 0x181c24: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181c24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_181c28:
    // 0x181c28: 0x68082a  slt         $at, $v1, $t0
    ctx->pc = 0x181c28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_181c2c:
    // 0x181c2c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_181c30:
    if (ctx->pc == 0x181C30u) {
        ctx->pc = 0x181C34u;
        goto label_181c34;
    }
    ctx->pc = 0x181C2Cu;
    {
        const bool branch_taken_0x181c2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x181c2c) {
            ctx->pc = 0x181C60u;
            goto label_181c60;
        }
    }
    ctx->pc = 0x181C34u;
label_181c34:
    // 0x181c34: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x181c34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_181c38:
    // 0x181c38: 0x91840  sll         $v1, $t1, 1
    ctx->pc = 0x181c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_181c3c:
    // 0x181c3c: 0x34c3c  dsll32      $t1, $v1, 16
    ctx->pc = 0x181c3cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 16));
label_181c40:
    // 0x181c40: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x181c40u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
label_181c44:
    // 0x181c44: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x181c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_181c48:
    // 0x181c48: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x181c48u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_181c4c:
    // 0x181c4c: 0x0  nop
    ctx->pc = 0x181c4cu;
    // NOP
label_181c50:
    // 0x181c50: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x181c50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_181c54:
    // 0x181c54: 0x2863000a  slti        $v1, $v1, 0xA
    ctx->pc = 0x181c54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
label_181c58:
    // 0x181c58: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_181c5c:
    if (ctx->pc == 0x181C5Cu) {
        ctx->pc = 0x181C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C58u;
        // 0x181c5c: 0x91c3c  dsll32      $v1, $t1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181C60u;
        goto label_181c60;
    }
    ctx->pc = 0x181C58u;
    {
        const bool branch_taken_0x181c58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x181C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C58u;
        // 0x181c5c: 0x91c3c  dsll32      $v1, $t1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181c58) {
            ctx->pc = 0x181C24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181c24;
        }
    }
    ctx->pc = 0x181C60u;
label_181c60:
    // 0x181c60: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x181c60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
label_181c64:
    // 0x181c64: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x181c64u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_181c68:
    // 0x181c68: 0xa4e00000  sh          $zero, 0x0($a3)
    ctx->pc = 0x181c68u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 0));
label_181c6c:
    // 0x181c6c: 0x1000000b  b           . + 4 + (0xB << 2)
label_181c70:
    if (ctx->pc == 0x181C70u) {
        ctx->pc = 0x181C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C6Cu;
        // 0x181c70: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181C74u;
        goto label_181c74;
    }
    ctx->pc = 0x181C6Cu;
    {
        const bool branch_taken_0x181c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C6Cu;
        // 0x181c70: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181c6c) {
            ctx->pc = 0x181C9Cu;
            goto label_181c9c;
        }
    }
    ctx->pc = 0x181C74u;
label_181c74:
    // 0x181c74: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181c74u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_181c78:
    // 0x181c78: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x181c78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_181c7c:
    // 0x181c7c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_181c80:
    if (ctx->pc == 0x181C80u) {
        ctx->pc = 0x181C84u;
        goto label_181c84;
    }
    ctx->pc = 0x181C7Cu;
    {
        const bool branch_taken_0x181c7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x181c7c) {
            ctx->pc = 0x181CB0u;
            goto label_181cb0;
        }
    }
    ctx->pc = 0x181C84u;
label_181c84:
    // 0x181c84: 0x84e40000  lh          $a0, 0x0($a3)
    ctx->pc = 0x181c84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_181c88:
    // 0x181c88: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x181c88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_181c8c:
    // 0x181c8c: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x181c8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
label_181c90:
    // 0x181c90: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181c90u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_181c94:
    // 0x181c94: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x181c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_181c98:
    // 0x181c98: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x181c98u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
label_181c9c:
    // 0x181c9c: 0x0  nop
    ctx->pc = 0x181c9cu;
    // NOP
label_181ca0:
    // 0x181ca0: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x181ca0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_181ca4:
    // 0x181ca4: 0x2863000a  slti        $v1, $v1, 0xA
    ctx->pc = 0x181ca4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
label_181ca8:
    // 0x181ca8: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_181cac:
    if (ctx->pc == 0x181CACu) {
        ctx->pc = 0x181CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181CA8u;
        // 0x181cac: 0x61c3c  dsll32      $v1, $a2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181CB0u;
        goto label_181cb0;
    }
    ctx->pc = 0x181CA8u;
    {
        const bool branch_taken_0x181ca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x181CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181CA8u;
        // 0x181cac: 0x61c3c  dsll32      $v1, $a2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181ca8) {
            ctx->pc = 0x181C74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181c74;
        }
    }
    ctx->pc = 0x181CB0u;
label_181cb0:
    // 0x181cb0: 0x3e00008  jr          $ra
label_181cb4:
    if (ctx->pc == 0x181CB4u) {
        ctx->pc = 0x181CB8u;
        goto label_181cb8;
    }
    ctx->pc = 0x181CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181CB8u;
label_181cb8:
    // 0x181cb8: 0x0  nop
    ctx->pc = 0x181cb8u;
    // NOP
label_181cbc:
    // 0x181cbc: 0x0  nop
    ctx->pc = 0x181cbcu;
    // NOP
label_181cc0:
    // 0x181cc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x181cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_181cc4:
    // 0x181cc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x181cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_181cc8:
    // 0x181cc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x181cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_181ccc:
    // 0x181ccc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x181cccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_181cd0:
    // 0x181cd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x181cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_181cd4:
    // 0x181cd4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x181cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_181cd8:
    // 0x181cd8: 0xc066580  jal         func_199600
label_181cdc:
    if (ctx->pc == 0x181CDCu) {
        ctx->pc = 0x181CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181CD8u;
        // 0x181cdc: 0x24849810  addiu       $a0, $a0, -0x67F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181CE0u;
        goto label_181ce0;
    }
    ctx->pc = 0x181CD8u;
    SET_GPR_U32(ctx, 31, 0x181CE0u);
    ctx->pc = 0x181CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181CD8u;
    // 0x181cdc: 0x24849810  addiu       $a0, $a0, -0x67F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199600u;
    { ctx->pc = 0x199600; return; }
    ctx->pc = 0x181CE0u;
label_181ce0:
    // 0x181ce0: 0xc0692a8  jal         func_1A4AA0
label_181ce4:
    if (ctx->pc == 0x181CE4u) {
        ctx->pc = 0x181CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181CE0u;
        // 0x181ce4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181CE8u;
        goto label_181ce8;
    }
    ctx->pc = 0x181CE0u;
    SET_GPR_U32(ctx, 31, 0x181CE8u);
    ctx->pc = 0x181CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181CE0u;
    // 0x181ce4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    { ctx->pc = 0x1a4aa0; return; }
    ctx->pc = 0x181CE8u;
label_181ce8:
    // 0x181ce8: 0x8f9087e4  lw          $s0, -0x781C($gp)
    ctx->pc = 0x181ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936548)));
label_181cec:
    // 0x181cec: 0xc06029c  jal         func_180A70
label_181cf0:
    if (ctx->pc == 0x181CF0u) {
        ctx->pc = 0x181CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181CECu;
        // 0x181cf0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181CF4u;
        goto label_181cf4;
    }
    ctx->pc = 0x181CECu;
    SET_GPR_U32(ctx, 31, 0x181CF4u);
    ctx->pc = 0x181CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181CECu;
    // 0x181cf0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180A70u;
    { ctx->pc = 0x180a70; return; }
    ctx->pc = 0x181CF4u;
label_181cf4:
    // 0x181cf4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x181cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_181cf8:
    // 0x181cf8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x181cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_181cfc:
    // 0x181cfc: 0xc066630  jal         func_1998C0
label_181d00:
    if (ctx->pc == 0x181D00u) {
        ctx->pc = 0x181D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181CFCu;
        // 0x181d00: 0x24849810  addiu       $a0, $a0, -0x67F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181D04u;
        goto label_181d04;
    }
    ctx->pc = 0x181CFCu;
    SET_GPR_U32(ctx, 31, 0x181D04u);
    ctx->pc = 0x181D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181CFCu;
    // 0x181d00: 0x24849810  addiu       $a0, $a0, -0x67F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1998C0u;
    { ctx->pc = 0x1998c0; return; }
    ctx->pc = 0x181D04u;
label_181d04:
    // 0x181d04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x181d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181d08:
    // 0x181d08: 0xc066440  jal         func_199100
label_181d0c:
    if (ctx->pc == 0x181D0Cu) {
        ctx->pc = 0x181D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D08u;
        // 0x181d0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181D10u;
        goto label_181d10;
    }
    ctx->pc = 0x181D08u;
    SET_GPR_U32(ctx, 31, 0x181D10u);
    ctx->pc = 0x181D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181D08u;
    // 0x181d0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199100u;
    { ctx->pc = 0x199100; return; }
    ctx->pc = 0x181D10u;
label_181d10:
    // 0x181d10: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_181d14:
    if (ctx->pc == 0x181D14u) {
        ctx->pc = 0x181D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D10u;
        // 0x181d14: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181D18u;
        goto label_181d18;
    }
    ctx->pc = 0x181D10u;
    {
        const bool branch_taken_0x181d10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x181D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D10u;
        // 0x181d14: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181d10) {
            ctx->pc = 0x181D20u;
            goto label_181d20;
        }
    }
    ctx->pc = 0x181D18u;
label_181d18:
    // 0x181d18: 0xc06029c  jal         func_180A70
label_181d1c:
    if (ctx->pc == 0x181D1Cu) {
        ctx->pc = 0x181D20u;
        goto label_181d20;
    }
    ctx->pc = 0x181D18u;
    SET_GPR_U32(ctx, 31, 0x181D20u);
    ctx->pc = 0x180A70u;
    { ctx->pc = 0x180a70; return; }
    ctx->pc = 0x181D20u;
label_181d20:
    // 0x181d20: 0x8f8687a4  lw          $a2, -0x785C($gp)
    ctx->pc = 0x181d20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936484)));
label_181d24:
    // 0x181d24: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x181d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_181d28:
    // 0x181d28: 0x64040040  daddiu      $a0, $zero, 0x40
    ctx->pc = 0x181d28u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
label_181d2c:
    // 0x181d2c: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x181d2cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_181d30:
    // 0x181d30: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x181d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_181d34:
    // 0x181d34: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x181d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_181d38:
    // 0x181d38: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x181d38u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_181d3c:
    // 0x181d3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x181d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_181d40:
    // 0x181d40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x181d40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_181d44:
    // 0x181d44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_181d48:
    // 0x181d48: 0x3e00008  jr          $ra
label_181d4c:
    if (ctx->pc == 0x181D4Cu) {
        ctx->pc = 0x181D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D48u;
        // 0x181d4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181D50u;
        goto label_181d50;
    }
    ctx->pc = 0x181D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D48u;
        // 0x181d4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181D50u;
label_181d50:
    // 0x181d50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x181d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_181d54:
    // 0x181d54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_181d58:
    // 0x181d58: 0x8f878590  lw          $a3, -0x7A70($gp)
    ctx->pc = 0x181d58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_181d5c:
    // 0x181d5c: 0x30e30040  andi        $v1, $a3, 0x40
    ctx->pc = 0x181d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)64);
label_181d60:
    // 0x181d60: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_181d64:
    if (ctx->pc == 0x181D64u) {
        ctx->pc = 0x181D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D60u;
        // 0x181d64: 0x30e30010  andi        $v1, $a3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x181D68u;
        goto label_181d68;
    }
    ctx->pc = 0x181D60u;
    {
        const bool branch_taken_0x181d60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x181D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D60u;
        // 0x181d64: 0x30e30010  andi        $v1, $a3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x181d60) {
            ctx->pc = 0x181DA0u;
            goto label_181da0;
        }
    }
    ctx->pc = 0x181D68u;
label_181d68:
    // 0x181d68: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_181d6c:
    if (ctx->pc == 0x181D6Cu) {
        ctx->pc = 0x181D70u;
        goto label_181d70;
    }
    ctx->pc = 0x181D68u;
    {
        const bool branch_taken_0x181d68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x181d68) {
            ctx->pc = 0x181DA0u;
            goto label_181da0;
        }
    }
    ctx->pc = 0x181D70u;
label_181d70:
    // 0x181d70: 0x8f8784e0  lw          $a3, -0x7B20($gp)
    ctx->pc = 0x181d70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_181d74:
    // 0x181d74: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x181d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_181d78:
    // 0x181d78: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x181d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_181d7c:
    // 0x181d7c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x181d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_181d80:
    // 0x181d80: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x181d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_181d84:
    // 0x181d84: 0x24e20d80  addiu       $v0, $a3, 0xD80
    ctx->pc = 0x181d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3456));
label_181d88:
    // 0x181d88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x181d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_181d8c:
    // 0x181d8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x181d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_181d90:
    // 0x181d90: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x181d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_181d94:
    // 0x181d94: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x181d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
label_181d98:
    // 0x181d98: 0xc066e26  jal         func_19B898
label_181d9c:
    if (ctx->pc == 0x181D9Cu) {
        ctx->pc = 0x181D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D98u;
        // 0x181d9c: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181DA0u;
        goto label_181da0;
    }
    ctx->pc = 0x181D98u;
    SET_GPR_U32(ctx, 31, 0x181DA0u);
    ctx->pc = 0x181D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181D98u;
    // 0x181d9c: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x181DA0u;
label_181da0:
    // 0x181da0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_181da4:
    // 0x181da4: 0x3e00008  jr          $ra
label_181da8:
    if (ctx->pc == 0x181DA8u) {
        ctx->pc = 0x181DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181DA4u;
        // 0x181da8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181DACu;
        goto label_181dac;
    }
    ctx->pc = 0x181DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181DA4u;
        // 0x181da8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181DACu;
label_181dac:
    // 0x181dac: 0x0  nop
    ctx->pc = 0x181dacu;
    // NOP
label_181db0:
    // 0x181db0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x181db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_181db4:
    // 0x181db4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x181db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_181db8:
    // 0x181db8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x181db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_181dbc:
    // 0x181dbc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x181dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_181dc0:
    // 0x181dc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x181dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_181dc4:
    // 0x181dc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x181dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_181dc8:
    // 0x181dc8: 0x8f9184e0  lw          $s1, -0x7B20($gp)
    ctx->pc = 0x181dc8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_181dcc:
    // 0x181dcc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x181dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181dd0:
    // 0x181dd0: 0x0  nop
    ctx->pc = 0x181dd0u;
    // NOP
label_181dd4:
    // 0x181dd4: 0x9223002e  lbu         $v1, 0x2E($s1)
    ctx->pc = 0x181dd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
label_181dd8:
    // 0x181dd8: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
label_181ddc:
    if (ctx->pc == 0x181DDCu) {
        ctx->pc = 0x181DE0u;
        goto label_181de0;
    }
    ctx->pc = 0x181DD8u;
    {
        const bool branch_taken_0x181dd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x181dd8) {
            ctx->pc = 0x181E30u;
            goto label_181e30;
        }
    }
    ctx->pc = 0x181DE0u;
label_181de0:
    // 0x181de0: 0x9223002f  lbu         $v1, 0x2F($s1)
    ctx->pc = 0x181de0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 47)));
label_181de4:
    // 0x181de4: 0x286100ff  slti        $at, $v1, 0xFF
    ctx->pc = 0x181de4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
label_181de8:
    // 0x181de8: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_181dec:
    if (ctx->pc == 0x181DECu) {
        ctx->pc = 0x181DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181DE8u;
        // 0x181dec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181DF0u;
        goto label_181df0;
    }
    ctx->pc = 0x181DE8u;
    {
        const bool branch_taken_0x181de8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x181DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181DE8u;
        // 0x181dec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181de8) {
            ctx->pc = 0x181E30u;
            goto label_181e30;
        }
    }
    ctx->pc = 0x181DF0u;
label_181df0:
    // 0x181df0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x181df0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181df4:
    // 0x181df4: 0x0  nop
    ctx->pc = 0x181df4u;
    // NOP
label_181df8:
    // 0x181df8: 0x2331821  addu        $v1, $s1, $s3
    ctx->pc = 0x181df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_181dfc:
    // 0x181dfc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x181dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_181e00:
    // 0x181e00: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_181e04:
    if (ctx->pc == 0x181E04u) {
        ctx->pc = 0x181E08u;
        goto label_181e08;
    }
    ctx->pc = 0x181E00u;
    {
        const bool branch_taken_0x181e00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x181e00) {
            ctx->pc = 0x181E1Cu;
            goto label_181e1c;
        }
    }
    ctx->pc = 0x181E08u;
label_181e08:
    // 0x181e08: 0x9083023b  lbu         $v1, 0x23B($a0)
    ctx->pc = 0x181e08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 571)));
label_181e0c:
    // 0x181e0c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_181e10:
    if (ctx->pc == 0x181E10u) {
        ctx->pc = 0x181E14u;
        goto label_181e14;
    }
    ctx->pc = 0x181E0Cu;
    {
        const bool branch_taken_0x181e0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x181e0c) {
            ctx->pc = 0x181E1Cu;
            goto label_181e1c;
        }
    }
    ctx->pc = 0x181E14u;
label_181e14:
    // 0x181e14: 0xc045a10  jal         func_116840
label_181e18:
    if (ctx->pc == 0x181E18u) {
        ctx->pc = 0x181E1Cu;
        goto label_181e1c;
    }
    ctx->pc = 0x181E14u;
    SET_GPR_U32(ctx, 31, 0x181E1Cu);
    ctx->pc = 0x116840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116840u, 0x181E14u, 0x181E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181E1Cu;
label_181e1c:
    // 0x181e1c: 0x0  nop
    ctx->pc = 0x181e1cu;
    // NOP
label_181e20:
    // 0x181e20: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x181e20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_181e24:
    // 0x181e24: 0x2a430009  slti        $v1, $s2, 0x9
    ctx->pc = 0x181e24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
label_181e28:
    // 0x181e28: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_181e2c:
    if (ctx->pc == 0x181E2Cu) {
        ctx->pc = 0x181E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E28u;
        // 0x181e2c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181E30u;
        goto label_181e30;
    }
    ctx->pc = 0x181E28u;
    {
        const bool branch_taken_0x181e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x181E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E28u;
        // 0x181e2c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181e28) {
            ctx->pc = 0x181DF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181df4;
        }
    }
    ctx->pc = 0x181E30u;
label_181e30:
    // 0x181e30: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x181e30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_181e34:
    // 0x181e34: 0x2a03004a  slti        $v1, $s0, 0x4A
    ctx->pc = 0x181e34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)74) ? 1 : 0);
label_181e38:
    // 0x181e38: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
label_181e3c:
    if (ctx->pc == 0x181E3Cu) {
        ctx->pc = 0x181E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E38u;
        // 0x181e3c: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181E40u;
        goto label_181e40;
    }
    ctx->pc = 0x181E38u;
    {
        const bool branch_taken_0x181e38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x181E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E38u;
        // 0x181e3c: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181e38) {
            ctx->pc = 0x181DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181dd0;
        }
    }
    ctx->pc = 0x181E40u;
label_181e40:
    // 0x181e40: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x181e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_181e44:
    // 0x181e44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x181e44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_181e48:
    // 0x181e48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x181e48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_181e4c:
    // 0x181e4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x181e4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_181e50:
    // 0x181e50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181e50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_181e54:
    // 0x181e54: 0x3e00008  jr          $ra
label_181e58:
    if (ctx->pc == 0x181E58u) {
        ctx->pc = 0x181E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E54u;
        // 0x181e58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181E5Cu;
        goto label_181e5c;
    }
    ctx->pc = 0x181E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E54u;
        // 0x181e58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181E5Cu;
label_181e5c:
    // 0x181e5c: 0x0  nop
    ctx->pc = 0x181e5cu;
    // NOP
label_181e60:
    // 0x181e60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x181e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_181e64:
    // 0x181e64: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x181e64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181e68:
    // 0x181e68: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x181e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_181e6c:
    // 0x181e6c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x181e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_181e70:
    // 0x181e70: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x181e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_181e74:
    // 0x181e74: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x181e74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181e78:
    // 0x181e78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x181e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_181e7c:
    // 0x181e7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x181e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_181e80:
    // 0x181e80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x181e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_181e84:
    // 0x181e84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x181e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_181e88:
    // 0x181e88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x181e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_181e8c:
    // 0x181e8c: 0x8f8684e0  lw          $a2, -0x7B20($gp)
    ctx->pc = 0x181e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_181e90:
    // 0x181e90: 0x0  nop
    ctx->pc = 0x181e90u;
    // NOP
label_181e94:
    // 0x181e94: 0x0  nop
    ctx->pc = 0x181e94u;
    // NOP
label_181e98:
    // 0x181e98: 0x90c2002e  lbu         $v0, 0x2E($a2)
    ctx->pc = 0x181e98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 46)));
label_181e9c:
    // 0x181e9c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_181ea0:
    if (ctx->pc == 0x181EA0u) {
        ctx->pc = 0x181EA4u;
        goto label_181ea4;
    }
    ctx->pc = 0x181E9Cu;
    {
        const bool branch_taken_0x181e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181e9c) {
            ctx->pc = 0x181EE8u;
            goto label_181ee8;
        }
    }
    ctx->pc = 0x181EA4u;
label_181ea4:
    // 0x181ea4: 0x90c2002f  lbu         $v0, 0x2F($a2)
    ctx->pc = 0x181ea4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 47)));
label_181ea8:
    // 0x181ea8: 0x284100ff  slti        $at, $v0, 0xFF
    ctx->pc = 0x181ea8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
label_181eac:
    // 0x181eac: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_181eb0:
    if (ctx->pc == 0x181EB0u) {
        ctx->pc = 0x181EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181EACu;
        // 0x181eb0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181EB4u;
        goto label_181eb4;
    }
    ctx->pc = 0x181EACu;
    {
        const bool branch_taken_0x181eac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x181EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181EACu;
        // 0x181eb0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181eac) {
            ctx->pc = 0x181EE8u;
            goto label_181ee8;
        }
    }
    ctx->pc = 0x181EB4u;
label_181eb4:
    // 0x181eb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x181eb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181eb8:
    // 0x181eb8: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x181eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_181ebc:
    // 0x181ebc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x181ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_181ec0:
    // 0x181ec0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_181ec4:
    if (ctx->pc == 0x181EC4u) {
        ctx->pc = 0x181EC8u;
        goto label_181ec8;
    }
    ctx->pc = 0x181EC0u;
    {
        const bool branch_taken_0x181ec0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x181ec0) {
            ctx->pc = 0x181ED8u;
            goto label_181ed8;
        }
    }
    ctx->pc = 0x181EC8u;
label_181ec8:
    // 0x181ec8: 0x90a2023a  lbu         $v0, 0x23A($a1)
    ctx->pc = 0x181ec8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 570)));
label_181ecc:
    // 0x181ecc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_181ed0:
    if (ctx->pc == 0x181ED0u) {
        ctx->pc = 0x181ED4u;
        goto label_181ed4;
    }
    ctx->pc = 0x181ECCu;
    {
        const bool branch_taken_0x181ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181ecc) {
            ctx->pc = 0x181ED8u;
            goto label_181ed8;
        }
    }
    ctx->pc = 0x181ED4u;
label_181ed4:
    // 0x181ed4: 0xa0a0022f  sb          $zero, 0x22F($a1)
    ctx->pc = 0x181ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 559), (uint8_t)GPR_U32(ctx, 0));
label_181ed8:
    // 0x181ed8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x181ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_181edc:
    // 0x181edc: 0x28820009  slti        $v0, $a0, 0x9
    ctx->pc = 0x181edcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
label_181ee0:
    // 0x181ee0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_181ee4:
    if (ctx->pc == 0x181EE4u) {
        ctx->pc = 0x181EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181EE0u;
        // 0x181ee4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181EE8u;
        goto label_181ee8;
    }
    ctx->pc = 0x181EE0u;
    {
        const bool branch_taken_0x181ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181EE0u;
        // 0x181ee4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181ee0) {
            ctx->pc = 0x181EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181eb8;
        }
    }
    ctx->pc = 0x181EE8u;
label_181ee8:
    // 0x181ee8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x181ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_181eec:
    // 0x181eec: 0x2862004a  slti        $v0, $v1, 0x4A
    ctx->pc = 0x181eecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)74) ? 1 : 0);
label_181ef0:
    // 0x181ef0: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_181ef4:
    if (ctx->pc == 0x181EF4u) {
        ctx->pc = 0x181EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181EF0u;
        // 0x181ef4: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181EF8u;
        goto label_181ef8;
    }
    ctx->pc = 0x181EF0u;
    {
        const bool branch_taken_0x181ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181EF0u;
        // 0x181ef4: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181ef0) {
            ctx->pc = 0x181E94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181e94;
        }
    }
    ctx->pc = 0x181EF8u;
label_181ef8:
    // 0x181ef8: 0x8f9284e0  lw          $s2, -0x7B20($gp)
    ctx->pc = 0x181ef8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_181efc:
    // 0x181efc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x181efcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181f00:
    // 0x181f00: 0x0  nop
    ctx->pc = 0x181f00u;
    // NOP
label_181f04:
    // 0x181f04: 0x9242002e  lbu         $v0, 0x2E($s2)
    ctx->pc = 0x181f04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 46)));
label_181f08:
    // 0x181f08: 0x1440007c  bnez        $v0, . + 4 + (0x7C << 2)
label_181f0c:
    if (ctx->pc == 0x181F0Cu) {
        ctx->pc = 0x181F10u;
        goto label_181f10;
    }
    ctx->pc = 0x181F08u;
    {
        const bool branch_taken_0x181f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181f08) {
            ctx->pc = 0x1820FCu;
            { ctx->pc = 0x1820fc; return; }
        }
    }
    ctx->pc = 0x181F10u;
label_181f10:
    // 0x181f10: 0x9242002f  lbu         $v0, 0x2F($s2)
    ctx->pc = 0x181f10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 47)));
label_181f14:
    // 0x181f14: 0x284100ff  slti        $at, $v0, 0xFF
    ctx->pc = 0x181f14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
label_181f18:
    // 0x181f18: 0x10200078  beqz        $at, . + 4 + (0x78 << 2)
label_181f1c:
    if (ctx->pc == 0x181F1Cu) {
        ctx->pc = 0x181F20u;
        goto label_181f20;
    }
    ctx->pc = 0x181F18u;
    {
        const bool branch_taken_0x181f18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x181f18) {
            ctx->pc = 0x1820FCu;
            { ctx->pc = 0x1820fc; return; }
        }
    }
    ctx->pc = 0x181F20u;
label_181f20:
    // 0x181f20: 0x9245002c  lbu         $a1, 0x2C($s2)
    ctx->pc = 0x181f20u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
label_181f24:
    // 0x181f24: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x181f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_181f28:
    // 0x181f28: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x181f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_181f2c:
    // 0x181f2c: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x181f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_181f30:
    // 0x181f30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x181f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_181f34:
    // 0x181f34: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x181f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_181f38:
    // 0x181f38: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x181f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_181f3c:
    // 0x181f3c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x181f3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181f40:
    // 0x181f40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x181f40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181f44:
    // 0x181f44: 0x51200  sll         $v0, $a1, 8
    ctx->pc = 0x181f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_181f48:
    // 0x181f48: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x181f48u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_181f4c:
    // 0x181f4c: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x181f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_181f50:
    // 0x181f50: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x181f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_181f54:
    // 0x181f54: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x181f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_181f58:
    // 0x181f58: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x181f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_181f5c:
    // 0x181f5c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x181f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_181f60:
    // 0x181f60: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x181f60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_181f64:
    // 0x181f64: 0x0  nop
    ctx->pc = 0x181f64u;
    // NOP
label_181f68:
    // 0x181f68: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x181f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_181f6c:
    // 0x181f6c: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x181f6cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_181f70:
    // 0x181f70: 0x12a00046  beqz        $s5, . + 4 + (0x46 << 2)
label_181f74:
    if (ctx->pc == 0x181F74u) {
        ctx->pc = 0x181F78u;
        goto label_181f78;
    }
    ctx->pc = 0x181F70u;
    {
        const bool branch_taken_0x181f70 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x181f70) {
            ctx->pc = 0x18208Cu;
            { ctx->pc = 0x18208c; return; }
        }
    }
    ctx->pc = 0x181F78u;
label_181f78:
    // 0x181f78: 0x92a20232  lbu         $v0, 0x232($s5)
    ctx->pc = 0x181f78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 562)));
label_181f7c:
    // 0x181f7c: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
label_181f80:
    if (ctx->pc == 0x181F80u) {
        ctx->pc = 0x181F84u;
        goto label_181f84;
    }
    ctx->pc = 0x181F7Cu;
    {
        const bool branch_taken_0x181f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181f7c) {
            ctx->pc = 0x182058u;
            { ctx->pc = 0x182058; return; }
        }
    }
    ctx->pc = 0x181F84u;
label_181f84:
    // 0x181f84: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x181f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_181f88:
    // 0x181f88: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x181f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_181f8c:
    // 0x181f8c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_181f90:
    if (ctx->pc == 0x181F90u) {
        ctx->pc = 0x181F94u;
        goto label_181f94;
    }
    ctx->pc = 0x181F8Cu;
    {
        const bool branch_taken_0x181f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181f8c) {
            ctx->pc = 0x182024u;
            { ctx->pc = 0x182024; return; }
        }
    }
    ctx->pc = 0x181F94u;
label_181f94:
    // 0x181f94: 0x92a50238  lbu         $a1, 0x238($s5)
    ctx->pc = 0x181f94u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 568)));
label_181f98:
    // 0x181f98: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x181f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_181f9c:
    // 0x181f9c: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x181f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_181fa0:
    // 0x181fa0: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x181fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_181fa4:
    // 0x181fa4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x181fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_181fa8:
    // 0x181fa8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x181fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_181fac:
    // 0x181fac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x181facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_181fb0:
    // 0x181fb0: 0x90630dfc  lbu         $v1, 0xDFC($v1)
    ctx->pc = 0x181fb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3580)));
label_181fb4:
    // 0x181fb4: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
label_181fb8:
    if (ctx->pc == 0x181FB8u) {
        ctx->pc = 0x181FBCu;
        goto label_181fbc;
    }
    ctx->pc = 0x181FB4u;
    {
        const bool branch_taken_0x181fb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x181fb4) {
            ctx->pc = 0x18208Cu;
            { ctx->pc = 0x18208c; return; }
        }
    }
    ctx->pc = 0x181FBCu;
label_181fbc:
    // 0x181fbc: 0x8f8484e0  lw          $a0, -0x7B20($gp)
    ctx->pc = 0x181fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_181fc0:
    // 0x181fc0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x181fc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_181fc4:
    // 0x181fc4: 0x92a70234  lbu         $a3, 0x234($s5)
    ctx->pc = 0x181fc4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 564)));
label_181fc8:
    // 0x181fc8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x181fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_181fcc:
    // 0x181fcc: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x181fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_181fd0:
    // 0x181fd0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x181fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_181fd4:
    // 0x181fd4: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x181fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
label_181fd8:
    // 0x181fd8: 0x24632570  addiu       $v1, $v1, 0x2570
    ctx->pc = 0x181fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9584));
label_181fdc:
    // 0x181fdc: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x181fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_181fe0:
    // 0x181fe0: 0x72200  sll         $a0, $a3, 8
    ctx->pc = 0x181fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_181fe4:
    // 0x181fe4: 0x90c5002f  lbu         $a1, 0x2F($a2)
    ctx->pc = 0x181fe4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 47)));
label_181fe8:
    // 0x181fe8: 0x873823  subu        $a3, $a0, $a3
    ctx->pc = 0x181fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_181fec:
    // 0x181fec: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x181fecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    ctx->pc = 0x181ff0u;
    return;
}

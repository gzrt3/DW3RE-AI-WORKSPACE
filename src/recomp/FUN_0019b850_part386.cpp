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

// Function: FUN_0019b850
// Address: 0x19b850 - 0x29b858
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b850_part386(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x257820u: goto label_257820;
        case 0x257824u: goto label_257824;
        case 0x257828u: goto label_257828;
        case 0x25782cu: goto label_25782c;
        case 0x257830u: goto label_257830;
        case 0x257834u: goto label_257834;
        case 0x257838u: goto label_257838;
        case 0x25783cu: goto label_25783c;
        case 0x257840u: goto label_257840;
        case 0x257844u: goto label_257844;
        case 0x257848u: goto label_257848;
        case 0x25784cu: goto label_25784c;
        case 0x257850u: goto label_257850;
        case 0x257854u: goto label_257854;
        case 0x257858u: goto label_257858;
        case 0x25785cu: goto label_25785c;
        case 0x257860u: goto label_257860;
        case 0x257864u: goto label_257864;
        case 0x257868u: goto label_257868;
        case 0x25786cu: goto label_25786c;
        case 0x257870u: goto label_257870;
        case 0x257874u: goto label_257874;
        case 0x257878u: goto label_257878;
        case 0x25787cu: goto label_25787c;
        case 0x257880u: goto label_257880;
        case 0x257884u: goto label_257884;
        case 0x257888u: goto label_257888;
        case 0x25788cu: goto label_25788c;
        case 0x257890u: goto label_257890;
        case 0x257894u: goto label_257894;
        case 0x257898u: goto label_257898;
        case 0x25789cu: goto label_25789c;
        case 0x2578a0u: goto label_2578a0;
        case 0x2578a4u: goto label_2578a4;
        case 0x2578a8u: goto label_2578a8;
        case 0x2578acu: goto label_2578ac;
        case 0x2578b0u: goto label_2578b0;
        case 0x2578b4u: goto label_2578b4;
        case 0x2578b8u: goto label_2578b8;
        case 0x2578bcu: goto label_2578bc;
        case 0x2578c0u: goto label_2578c0;
        case 0x2578c4u: goto label_2578c4;
        case 0x2578c8u: goto label_2578c8;
        case 0x2578ccu: goto label_2578cc;
        case 0x2578d0u: goto label_2578d0;
        case 0x2578d4u: goto label_2578d4;
        case 0x2578d8u: goto label_2578d8;
        case 0x2578dcu: goto label_2578dc;
        case 0x2578e0u: goto label_2578e0;
        case 0x2578e4u: goto label_2578e4;
        case 0x2578e8u: goto label_2578e8;
        case 0x2578ecu: goto label_2578ec;
        case 0x2578f0u: goto label_2578f0;
        case 0x2578f4u: goto label_2578f4;
        case 0x2578f8u: goto label_2578f8;
        case 0x2578fcu: goto label_2578fc;
        case 0x257900u: goto label_257900;
        case 0x257904u: goto label_257904;
        case 0x257908u: goto label_257908;
        case 0x25790cu: goto label_25790c;
        case 0x257910u: goto label_257910;
        case 0x257914u: goto label_257914;
        case 0x257918u: goto label_257918;
        case 0x25791cu: goto label_25791c;
        case 0x257920u: goto label_257920;
        case 0x257924u: goto label_257924;
        case 0x257928u: goto label_257928;
        case 0x25792cu: goto label_25792c;
        case 0x257930u: goto label_257930;
        case 0x257934u: goto label_257934;
        case 0x257938u: goto label_257938;
        case 0x25793cu: goto label_25793c;
        case 0x257940u: goto label_257940;
        case 0x257944u: goto label_257944;
        case 0x257948u: goto label_257948;
        case 0x25794cu: goto label_25794c;
        case 0x257950u: goto label_257950;
        case 0x257954u: goto label_257954;
        case 0x257958u: goto label_257958;
        case 0x25795cu: goto label_25795c;
        case 0x257960u: goto label_257960;
        case 0x257964u: goto label_257964;
        case 0x257968u: goto label_257968;
        case 0x25796cu: goto label_25796c;
        case 0x257970u: goto label_257970;
        case 0x257974u: goto label_257974;
        case 0x257978u: goto label_257978;
        case 0x25797cu: goto label_25797c;
        case 0x257980u: goto label_257980;
        case 0x257984u: goto label_257984;
        case 0x257988u: goto label_257988;
        case 0x25798cu: goto label_25798c;
        case 0x257990u: goto label_257990;
        case 0x257994u: goto label_257994;
        case 0x257998u: goto label_257998;
        case 0x25799cu: goto label_25799c;
        case 0x2579a0u: goto label_2579a0;
        case 0x2579a4u: goto label_2579a4;
        case 0x2579a8u: goto label_2579a8;
        case 0x2579acu: goto label_2579ac;
        case 0x2579b0u: goto label_2579b0;
        case 0x2579b4u: goto label_2579b4;
        case 0x2579b8u: goto label_2579b8;
        case 0x2579bcu: goto label_2579bc;
        case 0x2579c0u: goto label_2579c0;
        case 0x2579c4u: goto label_2579c4;
        case 0x2579c8u: goto label_2579c8;
        case 0x2579ccu: goto label_2579cc;
        case 0x2579d0u: goto label_2579d0;
        case 0x2579d4u: goto label_2579d4;
        case 0x2579d8u: goto label_2579d8;
        case 0x2579dcu: goto label_2579dc;
        case 0x2579e0u: goto label_2579e0;
        case 0x2579e4u: goto label_2579e4;
        case 0x2579e8u: goto label_2579e8;
        case 0x2579ecu: goto label_2579ec;
        case 0x2579f0u: goto label_2579f0;
        case 0x2579f4u: goto label_2579f4;
        case 0x2579f8u: goto label_2579f8;
        case 0x2579fcu: goto label_2579fc;
        case 0x257a00u: goto label_257a00;
        case 0x257a04u: goto label_257a04;
        case 0x257a08u: goto label_257a08;
        case 0x257a0cu: goto label_257a0c;
        case 0x257a10u: goto label_257a10;
        case 0x257a14u: goto label_257a14;
        case 0x257a18u: goto label_257a18;
        case 0x257a1cu: goto label_257a1c;
        case 0x257a20u: goto label_257a20;
        case 0x257a24u: goto label_257a24;
        case 0x257a28u: goto label_257a28;
        case 0x257a2cu: goto label_257a2c;
        case 0x257a30u: goto label_257a30;
        case 0x257a34u: goto label_257a34;
        case 0x257a38u: goto label_257a38;
        case 0x257a3cu: goto label_257a3c;
        case 0x257a40u: goto label_257a40;
        case 0x257a44u: goto label_257a44;
        case 0x257a48u: goto label_257a48;
        case 0x257a4cu: goto label_257a4c;
        case 0x257a50u: goto label_257a50;
        case 0x257a54u: goto label_257a54;
        case 0x257a58u: goto label_257a58;
        case 0x257a5cu: goto label_257a5c;
        case 0x257a60u: goto label_257a60;
        case 0x257a64u: goto label_257a64;
        case 0x257a68u: goto label_257a68;
        case 0x257a6cu: goto label_257a6c;
        case 0x257a70u: goto label_257a70;
        case 0x257a74u: goto label_257a74;
        case 0x257a78u: goto label_257a78;
        case 0x257a7cu: goto label_257a7c;
        case 0x257a80u: goto label_257a80;
        case 0x257a84u: goto label_257a84;
        case 0x257a88u: goto label_257a88;
        case 0x257a8cu: goto label_257a8c;
        case 0x257a90u: goto label_257a90;
        case 0x257a94u: goto label_257a94;
        case 0x257a98u: goto label_257a98;
        case 0x257a9cu: goto label_257a9c;
        case 0x257aa0u: goto label_257aa0;
        case 0x257aa4u: goto label_257aa4;
        case 0x257aa8u: goto label_257aa8;
        case 0x257aacu: goto label_257aac;
        case 0x257ab0u: goto label_257ab0;
        case 0x257ab4u: goto label_257ab4;
        case 0x257ab8u: goto label_257ab8;
        case 0x257abcu: goto label_257abc;
        case 0x257ac0u: goto label_257ac0;
        case 0x257ac4u: goto label_257ac4;
        case 0x257ac8u: goto label_257ac8;
        case 0x257accu: goto label_257acc;
        case 0x257ad0u: goto label_257ad0;
        case 0x257ad4u: goto label_257ad4;
        case 0x257ad8u: goto label_257ad8;
        case 0x257adcu: goto label_257adc;
        case 0x257ae0u: goto label_257ae0;
        case 0x257ae4u: goto label_257ae4;
        case 0x257ae8u: goto label_257ae8;
        case 0x257aecu: goto label_257aec;
        case 0x257af0u: goto label_257af0;
        case 0x257af4u: goto label_257af4;
        case 0x257af8u: goto label_257af8;
        case 0x257afcu: goto label_257afc;
        case 0x257b00u: goto label_257b00;
        case 0x257b04u: goto label_257b04;
        case 0x257b08u: goto label_257b08;
        case 0x257b0cu: goto label_257b0c;
        case 0x257b10u: goto label_257b10;
        case 0x257b14u: goto label_257b14;
        case 0x257b18u: goto label_257b18;
        case 0x257b1cu: goto label_257b1c;
        case 0x257b20u: goto label_257b20;
        case 0x257b24u: goto label_257b24;
        case 0x257b28u: goto label_257b28;
        case 0x257b2cu: goto label_257b2c;
        case 0x257b30u: goto label_257b30;
        case 0x257b34u: goto label_257b34;
        case 0x257b38u: goto label_257b38;
        case 0x257b3cu: goto label_257b3c;
        case 0x257b40u: goto label_257b40;
        case 0x257b44u: goto label_257b44;
        case 0x257b48u: goto label_257b48;
        case 0x257b4cu: goto label_257b4c;
        case 0x257b50u: goto label_257b50;
        case 0x257b54u: goto label_257b54;
        case 0x257b58u: goto label_257b58;
        case 0x257b5cu: goto label_257b5c;
        case 0x257b60u: goto label_257b60;
        case 0x257b64u: goto label_257b64;
        case 0x257b68u: goto label_257b68;
        case 0x257b6cu: goto label_257b6c;
        case 0x257b70u: goto label_257b70;
        case 0x257b74u: goto label_257b74;
        case 0x257b78u: goto label_257b78;
        case 0x257b7cu: goto label_257b7c;
        case 0x257b80u: goto label_257b80;
        case 0x257b84u: goto label_257b84;
        case 0x257b88u: goto label_257b88;
        case 0x257b8cu: goto label_257b8c;
        case 0x257b90u: goto label_257b90;
        case 0x257b94u: goto label_257b94;
        case 0x257b98u: goto label_257b98;
        case 0x257b9cu: goto label_257b9c;
        case 0x257ba0u: goto label_257ba0;
        case 0x257ba4u: goto label_257ba4;
        case 0x257ba8u: goto label_257ba8;
        case 0x257bacu: goto label_257bac;
        case 0x257bb0u: goto label_257bb0;
        case 0x257bb4u: goto label_257bb4;
        case 0x257bb8u: goto label_257bb8;
        case 0x257bbcu: goto label_257bbc;
        case 0x257bc0u: goto label_257bc0;
        case 0x257bc4u: goto label_257bc4;
        case 0x257bc8u: goto label_257bc8;
        case 0x257bccu: goto label_257bcc;
        case 0x257bd0u: goto label_257bd0;
        case 0x257bd4u: goto label_257bd4;
        case 0x257bd8u: goto label_257bd8;
        case 0x257bdcu: goto label_257bdc;
        case 0x257be0u: goto label_257be0;
        case 0x257be4u: goto label_257be4;
        case 0x257be8u: goto label_257be8;
        case 0x257becu: goto label_257bec;
        case 0x257bf0u: goto label_257bf0;
        case 0x257bf4u: goto label_257bf4;
        case 0x257bf8u: goto label_257bf8;
        case 0x257bfcu: goto label_257bfc;
        case 0x257c00u: goto label_257c00;
        case 0x257c04u: goto label_257c04;
        case 0x257c08u: goto label_257c08;
        case 0x257c0cu: goto label_257c0c;
        case 0x257c10u: goto label_257c10;
        case 0x257c14u: goto label_257c14;
        case 0x257c18u: goto label_257c18;
        case 0x257c1cu: goto label_257c1c;
        case 0x257c20u: goto label_257c20;
        case 0x257c24u: goto label_257c24;
        case 0x257c28u: goto label_257c28;
        case 0x257c2cu: goto label_257c2c;
        case 0x257c30u: goto label_257c30;
        case 0x257c34u: goto label_257c34;
        case 0x257c38u: goto label_257c38;
        case 0x257c3cu: goto label_257c3c;
        case 0x257c40u: goto label_257c40;
        case 0x257c44u: goto label_257c44;
        case 0x257c48u: goto label_257c48;
        case 0x257c4cu: goto label_257c4c;
        case 0x257c50u: goto label_257c50;
        case 0x257c54u: goto label_257c54;
        case 0x257c58u: goto label_257c58;
        case 0x257c5cu: goto label_257c5c;
        case 0x257c60u: goto label_257c60;
        case 0x257c64u: goto label_257c64;
        case 0x257c68u: goto label_257c68;
        case 0x257c6cu: goto label_257c6c;
        case 0x257c70u: goto label_257c70;
        case 0x257c74u: goto label_257c74;
        case 0x257c78u: goto label_257c78;
        case 0x257c7cu: goto label_257c7c;
        case 0x257c80u: goto label_257c80;
        case 0x257c84u: goto label_257c84;
        case 0x257c88u: goto label_257c88;
        case 0x257c8cu: goto label_257c8c;
        case 0x257c90u: goto label_257c90;
        case 0x257c94u: goto label_257c94;
        case 0x257c98u: goto label_257c98;
        case 0x257c9cu: goto label_257c9c;
        case 0x257ca0u: goto label_257ca0;
        case 0x257ca4u: goto label_257ca4;
        case 0x257ca8u: goto label_257ca8;
        case 0x257cacu: goto label_257cac;
        case 0x257cb0u: goto label_257cb0;
        case 0x257cb4u: goto label_257cb4;
        case 0x257cb8u: goto label_257cb8;
        case 0x257cbcu: goto label_257cbc;
        case 0x257cc0u: goto label_257cc0;
        case 0x257cc4u: goto label_257cc4;
        case 0x257cc8u: goto label_257cc8;
        case 0x257cccu: goto label_257ccc;
        case 0x257cd0u: goto label_257cd0;
        case 0x257cd4u: goto label_257cd4;
        case 0x257cd8u: goto label_257cd8;
        case 0x257cdcu: goto label_257cdc;
        case 0x257ce0u: goto label_257ce0;
        case 0x257ce4u: goto label_257ce4;
        case 0x257ce8u: goto label_257ce8;
        case 0x257cecu: goto label_257cec;
        case 0x257cf0u: goto label_257cf0;
        case 0x257cf4u: goto label_257cf4;
        case 0x257cf8u: goto label_257cf8;
        case 0x257cfcu: goto label_257cfc;
        case 0x257d00u: goto label_257d00;
        case 0x257d04u: goto label_257d04;
        case 0x257d08u: goto label_257d08;
        case 0x257d0cu: goto label_257d0c;
        case 0x257d10u: goto label_257d10;
        case 0x257d14u: goto label_257d14;
        case 0x257d18u: goto label_257d18;
        case 0x257d1cu: goto label_257d1c;
        case 0x257d20u: goto label_257d20;
        case 0x257d24u: goto label_257d24;
        case 0x257d28u: goto label_257d28;
        case 0x257d2cu: goto label_257d2c;
        case 0x257d30u: goto label_257d30;
        case 0x257d34u: goto label_257d34;
        case 0x257d38u: goto label_257d38;
        case 0x257d3cu: goto label_257d3c;
        case 0x257d40u: goto label_257d40;
        case 0x257d44u: goto label_257d44;
        case 0x257d48u: goto label_257d48;
        case 0x257d4cu: goto label_257d4c;
        case 0x257d50u: goto label_257d50;
        case 0x257d54u: goto label_257d54;
        case 0x257d58u: goto label_257d58;
        case 0x257d5cu: goto label_257d5c;
        case 0x257d60u: goto label_257d60;
        case 0x257d64u: goto label_257d64;
        case 0x257d68u: goto label_257d68;
        case 0x257d6cu: goto label_257d6c;
        case 0x257d70u: goto label_257d70;
        case 0x257d74u: goto label_257d74;
        case 0x257d78u: goto label_257d78;
        case 0x257d7cu: goto label_257d7c;
        case 0x257d80u: goto label_257d80;
        case 0x257d84u: goto label_257d84;
        case 0x257d88u: goto label_257d88;
        case 0x257d8cu: goto label_257d8c;
        case 0x257d90u: goto label_257d90;
        case 0x257d94u: goto label_257d94;
        case 0x257d98u: goto label_257d98;
        case 0x257d9cu: goto label_257d9c;
        case 0x257da0u: goto label_257da0;
        case 0x257da4u: goto label_257da4;
        case 0x257da8u: goto label_257da8;
        case 0x257dacu: goto label_257dac;
        case 0x257db0u: goto label_257db0;
        case 0x257db4u: goto label_257db4;
        case 0x257db8u: goto label_257db8;
        case 0x257dbcu: goto label_257dbc;
        case 0x257dc0u: goto label_257dc0;
        case 0x257dc4u: goto label_257dc4;
        case 0x257dc8u: goto label_257dc8;
        case 0x257dccu: goto label_257dcc;
        case 0x257dd0u: goto label_257dd0;
        case 0x257dd4u: goto label_257dd4;
        case 0x257dd8u: goto label_257dd8;
        case 0x257ddcu: goto label_257ddc;
        case 0x257de0u: goto label_257de0;
        case 0x257de4u: goto label_257de4;
        case 0x257de8u: goto label_257de8;
        case 0x257decu: goto label_257dec;
        case 0x257df0u: goto label_257df0;
        case 0x257df4u: goto label_257df4;
        case 0x257df8u: goto label_257df8;
        case 0x257dfcu: goto label_257dfc;
        case 0x257e00u: goto label_257e00;
        case 0x257e04u: goto label_257e04;
        case 0x257e08u: goto label_257e08;
        case 0x257e0cu: goto label_257e0c;
        case 0x257e10u: goto label_257e10;
        case 0x257e14u: goto label_257e14;
        case 0x257e18u: goto label_257e18;
        case 0x257e1cu: goto label_257e1c;
        case 0x257e20u: goto label_257e20;
        case 0x257e24u: goto label_257e24;
        case 0x257e28u: goto label_257e28;
        case 0x257e2cu: goto label_257e2c;
        case 0x257e30u: goto label_257e30;
        case 0x257e34u: goto label_257e34;
        case 0x257e38u: goto label_257e38;
        case 0x257e3cu: goto label_257e3c;
        case 0x257e40u: goto label_257e40;
        case 0x257e44u: goto label_257e44;
        case 0x257e48u: goto label_257e48;
        case 0x257e4cu: goto label_257e4c;
        case 0x257e50u: goto label_257e50;
        case 0x257e54u: goto label_257e54;
        case 0x257e58u: goto label_257e58;
        case 0x257e5cu: goto label_257e5c;
        case 0x257e60u: goto label_257e60;
        case 0x257e64u: goto label_257e64;
        case 0x257e68u: goto label_257e68;
        case 0x257e6cu: goto label_257e6c;
        case 0x257e70u: goto label_257e70;
        case 0x257e74u: goto label_257e74;
        case 0x257e78u: goto label_257e78;
        case 0x257e7cu: goto label_257e7c;
        case 0x257e80u: goto label_257e80;
        case 0x257e84u: goto label_257e84;
        case 0x257e88u: goto label_257e88;
        case 0x257e8cu: goto label_257e8c;
        case 0x257e90u: goto label_257e90;
        case 0x257e94u: goto label_257e94;
        case 0x257e98u: goto label_257e98;
        case 0x257e9cu: goto label_257e9c;
        case 0x257ea0u: goto label_257ea0;
        case 0x257ea4u: goto label_257ea4;
        case 0x257ea8u: goto label_257ea8;
        case 0x257eacu: goto label_257eac;
        case 0x257eb0u: goto label_257eb0;
        case 0x257eb4u: goto label_257eb4;
        case 0x257eb8u: goto label_257eb8;
        case 0x257ebcu: goto label_257ebc;
        case 0x257ec0u: goto label_257ec0;
        case 0x257ec4u: goto label_257ec4;
        case 0x257ec8u: goto label_257ec8;
        case 0x257eccu: goto label_257ecc;
        case 0x257ed0u: goto label_257ed0;
        case 0x257ed4u: goto label_257ed4;
        case 0x257ed8u: goto label_257ed8;
        case 0x257edcu: goto label_257edc;
        case 0x257ee0u: goto label_257ee0;
        case 0x257ee4u: goto label_257ee4;
        case 0x257ee8u: goto label_257ee8;
        case 0x257eecu: goto label_257eec;
        case 0x257ef0u: goto label_257ef0;
        case 0x257ef4u: goto label_257ef4;
        case 0x257ef8u: goto label_257ef8;
        case 0x257efcu: goto label_257efc;
        case 0x257f00u: goto label_257f00;
        case 0x257f04u: goto label_257f04;
        case 0x257f08u: goto label_257f08;
        case 0x257f0cu: goto label_257f0c;
        case 0x257f10u: goto label_257f10;
        case 0x257f14u: goto label_257f14;
        case 0x257f18u: goto label_257f18;
        case 0x257f1cu: goto label_257f1c;
        case 0x257f20u: goto label_257f20;
        case 0x257f24u: goto label_257f24;
        case 0x257f28u: goto label_257f28;
        case 0x257f2cu: goto label_257f2c;
        case 0x257f30u: goto label_257f30;
        case 0x257f34u: goto label_257f34;
        case 0x257f38u: goto label_257f38;
        case 0x257f3cu: goto label_257f3c;
        case 0x257f40u: goto label_257f40;
        case 0x257f44u: goto label_257f44;
        case 0x257f48u: goto label_257f48;
        case 0x257f4cu: goto label_257f4c;
        case 0x257f50u: goto label_257f50;
        case 0x257f54u: goto label_257f54;
        case 0x257f58u: goto label_257f58;
        case 0x257f5cu: goto label_257f5c;
        case 0x257f60u: goto label_257f60;
        case 0x257f64u: goto label_257f64;
        case 0x257f68u: goto label_257f68;
        case 0x257f6cu: goto label_257f6c;
        case 0x257f70u: goto label_257f70;
        case 0x257f74u: goto label_257f74;
        case 0x257f78u: goto label_257f78;
        case 0x257f7cu: goto label_257f7c;
        case 0x257f80u: goto label_257f80;
        case 0x257f84u: goto label_257f84;
        case 0x257f88u: goto label_257f88;
        case 0x257f8cu: goto label_257f8c;
        case 0x257f90u: goto label_257f90;
        case 0x257f94u: goto label_257f94;
        case 0x257f98u: goto label_257f98;
        case 0x257f9cu: goto label_257f9c;
        case 0x257fa0u: goto label_257fa0;
        case 0x257fa4u: goto label_257fa4;
        case 0x257fa8u: goto label_257fa8;
        case 0x257facu: goto label_257fac;
        case 0x257fb0u: goto label_257fb0;
        case 0x257fb4u: goto label_257fb4;
        case 0x257fb8u: goto label_257fb8;
        case 0x257fbcu: goto label_257fbc;
        case 0x257fc0u: goto label_257fc0;
        case 0x257fc4u: goto label_257fc4;
        case 0x257fc8u: goto label_257fc8;
        case 0x257fccu: goto label_257fcc;
        case 0x257fd0u: goto label_257fd0;
        case 0x257fd4u: goto label_257fd4;
        case 0x257fd8u: goto label_257fd8;
        case 0x257fdcu: goto label_257fdc;
        case 0x257fe0u: goto label_257fe0;
        case 0x257fe4u: goto label_257fe4;
        case 0x257fe8u: goto label_257fe8;
        case 0x257fecu: goto label_257fec;
        default: return;
    }

label_257820:
    // 0x257820: 0x13b6  tne         $zero, $zero, 78
    ctx->pc = 0x257820u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257824:
    // 0x257824: 0x5890  .word       0x00005890                   # mfhi        $t3 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257824u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_257828:
    // 0x257828: 0x0  nop
    ctx->pc = 0x257828u;
    // NOP
label_25782c:
    // 0x25782c: 0x0  nop
    ctx->pc = 0x25782cu;
    // NOP
label_257830:
    // 0x257830: 0x13c2  srl         $v0, $zero, 15
    ctx->pc = 0x257830u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 0), 15));
label_257834:
    // 0x257834: 0x2f70  tge         $zero, $zero, 189
    ctx->pc = 0x257834u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257838:
    // 0x257838: 0x0  nop
    ctx->pc = 0x257838u;
    // NOP
label_25783c:
    // 0x25783c: 0x0  nop
    ctx->pc = 0x25783cu;
    // NOP
label_257840:
    // 0x257840: 0x13c8  .word       0x000013C8                   # jr          $zero # 000013C0 <InstrIdType: CPU_SPECIAL>
label_257844:
    if (ctx->pc == 0x257844u) {
        ctx->pc = 0x257844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257840u;
        // 0x257844: 0xdff0  tge         $zero, $zero, 895 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x257848u;
        goto label_257848;
    }
    ctx->pc = 0x257840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x257844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257840u;
        // 0x257844: 0xdff0  tge         $zero, $zero, 895 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257840u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x257848u;
label_257848:
    // 0x257848: 0x0  nop
    ctx->pc = 0x257848u;
    // NOP
label_25784c:
    // 0x25784c: 0x0  nop
    ctx->pc = 0x25784cu;
    // NOP
label_257850:
    // 0x257850: 0x13e4  .word       0x000013E4                   # and         $v0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_257854:
    // 0x257854: 0x46e0  .word       0x000046E0                   # add         $t0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257854u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_257858:
    // 0x257858: 0x0  nop
    ctx->pc = 0x257858u;
    // NOP
label_25785c:
    // 0x25785c: 0x0  nop
    ctx->pc = 0x25785cu;
    // NOP
label_257860:
    // 0x257860: 0x13ed  .word       0x000013ED                   # daddu       $v0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257860u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_257864:
    // 0x257864: 0x5190  .word       0x00005190                   # mfhi        $t2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257864u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_257868:
    // 0x257868: 0x0  nop
    ctx->pc = 0x257868u;
    // NOP
label_25786c:
    // 0x25786c: 0x0  nop
    ctx->pc = 0x25786cu;
    // NOP
label_257870:
    // 0x257870: 0x13f8  dsll        $v0, $zero, 15
    ctx->pc = 0x257870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << 15);
label_257874:
    // 0x257874: 0x6460  .word       0x00006460                   # add         $t4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257874u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_257878:
    // 0x257878: 0x0  nop
    ctx->pc = 0x257878u;
    // NOP
label_25787c:
    // 0x25787c: 0x0  nop
    ctx->pc = 0x25787cu;
    // NOP
label_257880:
    // 0x257880: 0x1405  .word       0x00001405                   # INVALID     $zero, $zero, 0x1405 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257880u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x257880 raw=0x00001405"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_257884:
    // 0x257884: 0x5960  .word       0x00005960                   # add         $t3, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257884u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_257888:
    // 0x257888: 0x0  nop
    ctx->pc = 0x257888u;
    // NOP
label_25788c:
    // 0x25788c: 0x0  nop
    ctx->pc = 0x25788cu;
    // NOP
label_257890:
    // 0x257890: 0x1411  .word       0x00001411                   # mthi        $zero # 00001400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257890u;
    ctx->hi = GPR_U64(ctx, 0);
label_257894:
    // 0x257894: 0x7840  sll         $t7, $zero, 1
    ctx->pc = 0x257894u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_257898:
    // 0x257898: 0x0  nop
    ctx->pc = 0x257898u;
    // NOP
label_25789c:
    // 0x25789c: 0x0  nop
    ctx->pc = 0x25789cu;
    // NOP
label_2578a0:
    // 0x2578a0: 0x1421  .word       0x00001421                   # addu        $v0, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2578a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2578a4:
    // 0x2578a4: 0x7770  tge         $zero, $zero, 477
    ctx->pc = 0x2578a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2578a8:
    // 0x2578a8: 0x0  nop
    ctx->pc = 0x2578a8u;
    // NOP
label_2578ac:
    // 0x2578ac: 0x0  nop
    ctx->pc = 0x2578acu;
    // NOP
label_2578b0:
    // 0x2578b0: 0x1430  tge         $zero, $zero, 80
    ctx->pc = 0x2578b0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2578b4:
    // 0x2578b4: 0x10fc0  sll         $at, $at, 31
    ctx->pc = 0x2578b4u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 31));
label_2578b8:
    // 0x2578b8: 0x0  nop
    ctx->pc = 0x2578b8u;
    // NOP
label_2578bc:
    // 0x2578bc: 0x0  nop
    ctx->pc = 0x2578bcu;
    // NOP
label_2578c0:
    // 0x2578c0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2578c0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2578c4:
    // 0x2578c4: 0x0  nop
    ctx->pc = 0x2578c4u;
    // NOP
label_2578c8:
    // 0x2578c8: 0x0  nop
    ctx->pc = 0x2578c8u;
    // NOP
label_2578cc:
    // 0x2578cc: 0x0  nop
    ctx->pc = 0x2578ccu;
    // NOP
label_2578d0:
    // 0x2578d0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2578d0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2578d4:
    // 0x2578d4: 0x0  nop
    ctx->pc = 0x2578d4u;
    // NOP
label_2578d8:
    // 0x2578d8: 0x0  nop
    ctx->pc = 0x2578d8u;
    // NOP
label_2578dc:
    // 0x2578dc: 0x0  nop
    ctx->pc = 0x2578dcu;
    // NOP
label_2578e0:
    // 0x2578e0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2578e0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2578e4:
    // 0x2578e4: 0x0  nop
    ctx->pc = 0x2578e4u;
    // NOP
label_2578e8:
    // 0x2578e8: 0x0  nop
    ctx->pc = 0x2578e8u;
    // NOP
label_2578ec:
    // 0x2578ec: 0x0  nop
    ctx->pc = 0x2578ecu;
    // NOP
label_2578f0:
    // 0x2578f0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2578f0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2578f4:
    // 0x2578f4: 0x0  nop
    ctx->pc = 0x2578f4u;
    // NOP
label_2578f8:
    // 0x2578f8: 0x0  nop
    ctx->pc = 0x2578f8u;
    // NOP
label_2578fc:
    // 0x2578fc: 0x0  nop
    ctx->pc = 0x2578fcu;
    // NOP
label_257900:
    // 0x257900: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257900u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257904:
    // 0x257904: 0x0  nop
    ctx->pc = 0x257904u;
    // NOP
label_257908:
    // 0x257908: 0x0  nop
    ctx->pc = 0x257908u;
    // NOP
label_25790c:
    // 0x25790c: 0x0  nop
    ctx->pc = 0x25790cu;
    // NOP
label_257910:
    // 0x257910: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257910u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257914:
    // 0x257914: 0x0  nop
    ctx->pc = 0x257914u;
    // NOP
label_257918:
    // 0x257918: 0x0  nop
    ctx->pc = 0x257918u;
    // NOP
label_25791c:
    // 0x25791c: 0x0  nop
    ctx->pc = 0x25791cu;
    // NOP
label_257920:
    // 0x257920: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257920u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257924:
    // 0x257924: 0x0  nop
    ctx->pc = 0x257924u;
    // NOP
label_257928:
    // 0x257928: 0x0  nop
    ctx->pc = 0x257928u;
    // NOP
label_25792c:
    // 0x25792c: 0x0  nop
    ctx->pc = 0x25792cu;
    // NOP
label_257930:
    // 0x257930: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257930u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257934:
    // 0x257934: 0x0  nop
    ctx->pc = 0x257934u;
    // NOP
label_257938:
    // 0x257938: 0x0  nop
    ctx->pc = 0x257938u;
    // NOP
label_25793c:
    // 0x25793c: 0x0  nop
    ctx->pc = 0x25793cu;
    // NOP
label_257940:
    // 0x257940: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257940u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257944:
    // 0x257944: 0x0  nop
    ctx->pc = 0x257944u;
    // NOP
label_257948:
    // 0x257948: 0x0  nop
    ctx->pc = 0x257948u;
    // NOP
label_25794c:
    // 0x25794c: 0x0  nop
    ctx->pc = 0x25794cu;
    // NOP
label_257950:
    // 0x257950: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257950u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257954:
    // 0x257954: 0x0  nop
    ctx->pc = 0x257954u;
    // NOP
label_257958:
    // 0x257958: 0x0  nop
    ctx->pc = 0x257958u;
    // NOP
label_25795c:
    // 0x25795c: 0x0  nop
    ctx->pc = 0x25795cu;
    // NOP
label_257960:
    // 0x257960: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257960u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257964:
    // 0x257964: 0x0  nop
    ctx->pc = 0x257964u;
    // NOP
label_257968:
    // 0x257968: 0x0  nop
    ctx->pc = 0x257968u;
    // NOP
label_25796c:
    // 0x25796c: 0x0  nop
    ctx->pc = 0x25796cu;
    // NOP
label_257970:
    // 0x257970: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257970u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257974:
    // 0x257974: 0x0  nop
    ctx->pc = 0x257974u;
    // NOP
label_257978:
    // 0x257978: 0x0  nop
    ctx->pc = 0x257978u;
    // NOP
label_25797c:
    // 0x25797c: 0x0  nop
    ctx->pc = 0x25797cu;
    // NOP
label_257980:
    // 0x257980: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257980u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257984:
    // 0x257984: 0x0  nop
    ctx->pc = 0x257984u;
    // NOP
label_257988:
    // 0x257988: 0x0  nop
    ctx->pc = 0x257988u;
    // NOP
label_25798c:
    // 0x25798c: 0x0  nop
    ctx->pc = 0x25798cu;
    // NOP
label_257990:
    // 0x257990: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257990u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257994:
    // 0x257994: 0x0  nop
    ctx->pc = 0x257994u;
    // NOP
label_257998:
    // 0x257998: 0x0  nop
    ctx->pc = 0x257998u;
    // NOP
label_25799c:
    // 0x25799c: 0x0  nop
    ctx->pc = 0x25799cu;
    // NOP
label_2579a0:
    // 0x2579a0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2579a0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2579a4:
    // 0x2579a4: 0x0  nop
    ctx->pc = 0x2579a4u;
    // NOP
label_2579a8:
    // 0x2579a8: 0x0  nop
    ctx->pc = 0x2579a8u;
    // NOP
label_2579ac:
    // 0x2579ac: 0x0  nop
    ctx->pc = 0x2579acu;
    // NOP
label_2579b0:
    // 0x2579b0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2579b0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2579b4:
    // 0x2579b4: 0x0  nop
    ctx->pc = 0x2579b4u;
    // NOP
label_2579b8:
    // 0x2579b8: 0x0  nop
    ctx->pc = 0x2579b8u;
    // NOP
label_2579bc:
    // 0x2579bc: 0x0  nop
    ctx->pc = 0x2579bcu;
    // NOP
label_2579c0:
    // 0x2579c0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2579c0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2579c4:
    // 0x2579c4: 0x0  nop
    ctx->pc = 0x2579c4u;
    // NOP
label_2579c8:
    // 0x2579c8: 0x0  nop
    ctx->pc = 0x2579c8u;
    // NOP
label_2579cc:
    // 0x2579cc: 0x0  nop
    ctx->pc = 0x2579ccu;
    // NOP
label_2579d0:
    // 0x2579d0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2579d0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2579d4:
    // 0x2579d4: 0x0  nop
    ctx->pc = 0x2579d4u;
    // NOP
label_2579d8:
    // 0x2579d8: 0x0  nop
    ctx->pc = 0x2579d8u;
    // NOP
label_2579dc:
    // 0x2579dc: 0x0  nop
    ctx->pc = 0x2579dcu;
    // NOP
label_2579e0:
    // 0x2579e0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2579e0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2579e4:
    // 0x2579e4: 0x0  nop
    ctx->pc = 0x2579e4u;
    // NOP
label_2579e8:
    // 0x2579e8: 0x0  nop
    ctx->pc = 0x2579e8u;
    // NOP
label_2579ec:
    // 0x2579ec: 0x0  nop
    ctx->pc = 0x2579ecu;
    // NOP
label_2579f0:
    // 0x2579f0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2579f0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2579f4:
    // 0x2579f4: 0x0  nop
    ctx->pc = 0x2579f4u;
    // NOP
label_2579f8:
    // 0x2579f8: 0x0  nop
    ctx->pc = 0x2579f8u;
    // NOP
label_2579fc:
    // 0x2579fc: 0x0  nop
    ctx->pc = 0x2579fcu;
    // NOP
label_257a00:
    // 0x257a00: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257a00u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257a04:
    // 0x257a04: 0x0  nop
    ctx->pc = 0x257a04u;
    // NOP
label_257a08:
    // 0x257a08: 0x0  nop
    ctx->pc = 0x257a08u;
    // NOP
label_257a0c:
    // 0x257a0c: 0x0  nop
    ctx->pc = 0x257a0cu;
    // NOP
label_257a10:
    // 0x257a10: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257a10u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257a14:
    // 0x257a14: 0x0  nop
    ctx->pc = 0x257a14u;
    // NOP
label_257a18:
    // 0x257a18: 0x0  nop
    ctx->pc = 0x257a18u;
    // NOP
label_257a1c:
    // 0x257a1c: 0x0  nop
    ctx->pc = 0x257a1cu;
    // NOP
label_257a20:
    // 0x257a20: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257a20u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257a24:
    // 0x257a24: 0x0  nop
    ctx->pc = 0x257a24u;
    // NOP
label_257a28:
    // 0x257a28: 0x0  nop
    ctx->pc = 0x257a28u;
    // NOP
label_257a2c:
    // 0x257a2c: 0x0  nop
    ctx->pc = 0x257a2cu;
    // NOP
label_257a30:
    // 0x257a30: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257a30u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257a34:
    // 0x257a34: 0x0  nop
    ctx->pc = 0x257a34u;
    // NOP
label_257a38:
    // 0x257a38: 0x0  nop
    ctx->pc = 0x257a38u;
    // NOP
label_257a3c:
    // 0x257a3c: 0x0  nop
    ctx->pc = 0x257a3cu;
    // NOP
label_257a40:
    // 0x257a40: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257a40u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257a44:
    // 0x257a44: 0x0  nop
    ctx->pc = 0x257a44u;
    // NOP
label_257a48:
    // 0x257a48: 0x0  nop
    ctx->pc = 0x257a48u;
    // NOP
label_257a4c:
    // 0x257a4c: 0x0  nop
    ctx->pc = 0x257a4cu;
    // NOP
label_257a50:
    // 0x257a50: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257a50u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257a54:
    // 0x257a54: 0x0  nop
    ctx->pc = 0x257a54u;
    // NOP
label_257a58:
    // 0x257a58: 0x0  nop
    ctx->pc = 0x257a58u;
    // NOP
label_257a5c:
    // 0x257a5c: 0x0  nop
    ctx->pc = 0x257a5cu;
    // NOP
label_257a60:
    // 0x257a60: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257a60u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257a64:
    // 0x257a64: 0x0  nop
    ctx->pc = 0x257a64u;
    // NOP
label_257a68:
    // 0x257a68: 0x0  nop
    ctx->pc = 0x257a68u;
    // NOP
label_257a6c:
    // 0x257a6c: 0x0  nop
    ctx->pc = 0x257a6cu;
    // NOP
label_257a70:
    // 0x257a70: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257a70u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257a74:
    // 0x257a74: 0x0  nop
    ctx->pc = 0x257a74u;
    // NOP
label_257a78:
    // 0x257a78: 0x0  nop
    ctx->pc = 0x257a78u;
    // NOP
label_257a7c:
    // 0x257a7c: 0x0  nop
    ctx->pc = 0x257a7cu;
    // NOP
label_257a80:
    // 0x257a80: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257a80u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257a84:
    // 0x257a84: 0x0  nop
    ctx->pc = 0x257a84u;
    // NOP
label_257a88:
    // 0x257a88: 0x0  nop
    ctx->pc = 0x257a88u;
    // NOP
label_257a8c:
    // 0x257a8c: 0x0  nop
    ctx->pc = 0x257a8cu;
    // NOP
label_257a90:
    // 0x257a90: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257a90u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257a94:
    // 0x257a94: 0x0  nop
    ctx->pc = 0x257a94u;
    // NOP
label_257a98:
    // 0x257a98: 0x0  nop
    ctx->pc = 0x257a98u;
    // NOP
label_257a9c:
    // 0x257a9c: 0x0  nop
    ctx->pc = 0x257a9cu;
    // NOP
label_257aa0:
    // 0x257aa0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257aa0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257aa4:
    // 0x257aa4: 0x0  nop
    ctx->pc = 0x257aa4u;
    // NOP
label_257aa8:
    // 0x257aa8: 0x0  nop
    ctx->pc = 0x257aa8u;
    // NOP
label_257aac:
    // 0x257aac: 0x0  nop
    ctx->pc = 0x257aacu;
    // NOP
label_257ab0:
    // 0x257ab0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257ab0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257ab4:
    // 0x257ab4: 0x0  nop
    ctx->pc = 0x257ab4u;
    // NOP
label_257ab8:
    // 0x257ab8: 0x0  nop
    ctx->pc = 0x257ab8u;
    // NOP
label_257abc:
    // 0x257abc: 0x0  nop
    ctx->pc = 0x257abcu;
    // NOP
label_257ac0:
    // 0x257ac0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257ac0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257ac4:
    // 0x257ac4: 0x0  nop
    ctx->pc = 0x257ac4u;
    // NOP
label_257ac8:
    // 0x257ac8: 0x0  nop
    ctx->pc = 0x257ac8u;
    // NOP
label_257acc:
    // 0x257acc: 0x0  nop
    ctx->pc = 0x257accu;
    // NOP
label_257ad0:
    // 0x257ad0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257ad0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257ad4:
    // 0x257ad4: 0x0  nop
    ctx->pc = 0x257ad4u;
    // NOP
label_257ad8:
    // 0x257ad8: 0x0  nop
    ctx->pc = 0x257ad8u;
    // NOP
label_257adc:
    // 0x257adc: 0x0  nop
    ctx->pc = 0x257adcu;
    // NOP
label_257ae0:
    // 0x257ae0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257ae0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257ae4:
    // 0x257ae4: 0x0  nop
    ctx->pc = 0x257ae4u;
    // NOP
label_257ae8:
    // 0x257ae8: 0x0  nop
    ctx->pc = 0x257ae8u;
    // NOP
label_257aec:
    // 0x257aec: 0x0  nop
    ctx->pc = 0x257aecu;
    // NOP
label_257af0:
    // 0x257af0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257af0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257af4:
    // 0x257af4: 0x0  nop
    ctx->pc = 0x257af4u;
    // NOP
label_257af8:
    // 0x257af8: 0x0  nop
    ctx->pc = 0x257af8u;
    // NOP
label_257afc:
    // 0x257afc: 0x0  nop
    ctx->pc = 0x257afcu;
    // NOP
label_257b00:
    // 0x257b00: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257b00u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257b04:
    // 0x257b04: 0x0  nop
    ctx->pc = 0x257b04u;
    // NOP
label_257b08:
    // 0x257b08: 0x0  nop
    ctx->pc = 0x257b08u;
    // NOP
label_257b0c:
    // 0x257b0c: 0x0  nop
    ctx->pc = 0x257b0cu;
    // NOP
label_257b10:
    // 0x257b10: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257b10u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257b14:
    // 0x257b14: 0x0  nop
    ctx->pc = 0x257b14u;
    // NOP
label_257b18:
    // 0x257b18: 0x0  nop
    ctx->pc = 0x257b18u;
    // NOP
label_257b1c:
    // 0x257b1c: 0x0  nop
    ctx->pc = 0x257b1cu;
    // NOP
label_257b20:
    // 0x257b20: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257b20u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257b24:
    // 0x257b24: 0x0  nop
    ctx->pc = 0x257b24u;
    // NOP
label_257b28:
    // 0x257b28: 0x0  nop
    ctx->pc = 0x257b28u;
    // NOP
label_257b2c:
    // 0x257b2c: 0x0  nop
    ctx->pc = 0x257b2cu;
    // NOP
label_257b30:
    // 0x257b30: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257b30u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257b34:
    // 0x257b34: 0x0  nop
    ctx->pc = 0x257b34u;
    // NOP
label_257b38:
    // 0x257b38: 0x0  nop
    ctx->pc = 0x257b38u;
    // NOP
label_257b3c:
    // 0x257b3c: 0x0  nop
    ctx->pc = 0x257b3cu;
    // NOP
label_257b40:
    // 0x257b40: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257b40u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257b44:
    // 0x257b44: 0x0  nop
    ctx->pc = 0x257b44u;
    // NOP
label_257b48:
    // 0x257b48: 0x0  nop
    ctx->pc = 0x257b48u;
    // NOP
label_257b4c:
    // 0x257b4c: 0x0  nop
    ctx->pc = 0x257b4cu;
    // NOP
label_257b50:
    // 0x257b50: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257b50u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257b54:
    // 0x257b54: 0x0  nop
    ctx->pc = 0x257b54u;
    // NOP
label_257b58:
    // 0x257b58: 0x0  nop
    ctx->pc = 0x257b58u;
    // NOP
label_257b5c:
    // 0x257b5c: 0x0  nop
    ctx->pc = 0x257b5cu;
    // NOP
label_257b60:
    // 0x257b60: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257b60u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257b64:
    // 0x257b64: 0x0  nop
    ctx->pc = 0x257b64u;
    // NOP
label_257b68:
    // 0x257b68: 0x0  nop
    ctx->pc = 0x257b68u;
    // NOP
label_257b6c:
    // 0x257b6c: 0x0  nop
    ctx->pc = 0x257b6cu;
    // NOP
label_257b70:
    // 0x257b70: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257b70u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257b74:
    // 0x257b74: 0x0  nop
    ctx->pc = 0x257b74u;
    // NOP
label_257b78:
    // 0x257b78: 0x0  nop
    ctx->pc = 0x257b78u;
    // NOP
label_257b7c:
    // 0x257b7c: 0x0  nop
    ctx->pc = 0x257b7cu;
    // NOP
label_257b80:
    // 0x257b80: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257b80u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257b84:
    // 0x257b84: 0x0  nop
    ctx->pc = 0x257b84u;
    // NOP
label_257b88:
    // 0x257b88: 0x0  nop
    ctx->pc = 0x257b88u;
    // NOP
label_257b8c:
    // 0x257b8c: 0x0  nop
    ctx->pc = 0x257b8cu;
    // NOP
label_257b90:
    // 0x257b90: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257b90u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257b94:
    // 0x257b94: 0x0  nop
    ctx->pc = 0x257b94u;
    // NOP
label_257b98:
    // 0x257b98: 0x0  nop
    ctx->pc = 0x257b98u;
    // NOP
label_257b9c:
    // 0x257b9c: 0x0  nop
    ctx->pc = 0x257b9cu;
    // NOP
label_257ba0:
    // 0x257ba0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257ba0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257ba4:
    // 0x257ba4: 0x0  nop
    ctx->pc = 0x257ba4u;
    // NOP
label_257ba8:
    // 0x257ba8: 0x0  nop
    ctx->pc = 0x257ba8u;
    // NOP
label_257bac:
    // 0x257bac: 0x0  nop
    ctx->pc = 0x257bacu;
    // NOP
label_257bb0:
    // 0x257bb0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257bb0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257bb4:
    // 0x257bb4: 0x0  nop
    ctx->pc = 0x257bb4u;
    // NOP
label_257bb8:
    // 0x257bb8: 0x0  nop
    ctx->pc = 0x257bb8u;
    // NOP
label_257bbc:
    // 0x257bbc: 0x0  nop
    ctx->pc = 0x257bbcu;
    // NOP
label_257bc0:
    // 0x257bc0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257bc0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257bc4:
    // 0x257bc4: 0x0  nop
    ctx->pc = 0x257bc4u;
    // NOP
label_257bc8:
    // 0x257bc8: 0x0  nop
    ctx->pc = 0x257bc8u;
    // NOP
label_257bcc:
    // 0x257bcc: 0x0  nop
    ctx->pc = 0x257bccu;
    // NOP
label_257bd0:
    // 0x257bd0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257bd0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257bd4:
    // 0x257bd4: 0x0  nop
    ctx->pc = 0x257bd4u;
    // NOP
label_257bd8:
    // 0x257bd8: 0x0  nop
    ctx->pc = 0x257bd8u;
    // NOP
label_257bdc:
    // 0x257bdc: 0x0  nop
    ctx->pc = 0x257bdcu;
    // NOP
label_257be0:
    // 0x257be0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257be0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257be4:
    // 0x257be4: 0x0  nop
    ctx->pc = 0x257be4u;
    // NOP
label_257be8:
    // 0x257be8: 0x0  nop
    ctx->pc = 0x257be8u;
    // NOP
label_257bec:
    // 0x257bec: 0x0  nop
    ctx->pc = 0x257becu;
    // NOP
label_257bf0:
    // 0x257bf0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257bf0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257bf4:
    // 0x257bf4: 0x0  nop
    ctx->pc = 0x257bf4u;
    // NOP
label_257bf8:
    // 0x257bf8: 0x0  nop
    ctx->pc = 0x257bf8u;
    // NOP
label_257bfc:
    // 0x257bfc: 0x0  nop
    ctx->pc = 0x257bfcu;
    // NOP
label_257c00:
    // 0x257c00: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257c00u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257c04:
    // 0x257c04: 0x0  nop
    ctx->pc = 0x257c04u;
    // NOP
label_257c08:
    // 0x257c08: 0x0  nop
    ctx->pc = 0x257c08u;
    // NOP
label_257c0c:
    // 0x257c0c: 0x0  nop
    ctx->pc = 0x257c0cu;
    // NOP
label_257c10:
    // 0x257c10: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257c10u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257c14:
    // 0x257c14: 0x0  nop
    ctx->pc = 0x257c14u;
    // NOP
label_257c18:
    // 0x257c18: 0x0  nop
    ctx->pc = 0x257c18u;
    // NOP
label_257c1c:
    // 0x257c1c: 0x0  nop
    ctx->pc = 0x257c1cu;
    // NOP
label_257c20:
    // 0x257c20: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257c20u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257c24:
    // 0x257c24: 0x0  nop
    ctx->pc = 0x257c24u;
    // NOP
label_257c28:
    // 0x257c28: 0x0  nop
    ctx->pc = 0x257c28u;
    // NOP
label_257c2c:
    // 0x257c2c: 0x0  nop
    ctx->pc = 0x257c2cu;
    // NOP
label_257c30:
    // 0x257c30: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257c30u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257c34:
    // 0x257c34: 0x0  nop
    ctx->pc = 0x257c34u;
    // NOP
label_257c38:
    // 0x257c38: 0x0  nop
    ctx->pc = 0x257c38u;
    // NOP
label_257c3c:
    // 0x257c3c: 0x0  nop
    ctx->pc = 0x257c3cu;
    // NOP
label_257c40:
    // 0x257c40: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257c40u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257c44:
    // 0x257c44: 0x4890  .word       0x00004890                   # mfhi        $t1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257c44u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_257c48:
    // 0x257c48: 0x0  nop
    ctx->pc = 0x257c48u;
    // NOP
label_257c4c:
    // 0x257c4c: 0x0  nop
    ctx->pc = 0x257c4cu;
    // NOP
label_257c50:
    // 0x257c50: 0x145c  .word       0x0000145C                   # dmult       $zero, $zero # 00001440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257c50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x257C50 raw=0x0000145C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_257c54:
    // 0x257c54: 0x7880  sll         $t7, $zero, 2
    ctx->pc = 0x257c54u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_257c58:
    // 0x257c58: 0x0  nop
    ctx->pc = 0x257c58u;
    // NOP
label_257c5c:
    // 0x257c5c: 0x0  nop
    ctx->pc = 0x257c5cu;
    // NOP
label_257c60:
    // 0x257c60: 0x146c  .word       0x0000146C                   # dadd        $v0, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257c60u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_257c64:
    // 0x257c64: 0x8960  .word       0x00008960                   # add         $s1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257c64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_257c68:
    // 0x257c68: 0x0  nop
    ctx->pc = 0x257c68u;
    // NOP
label_257c6c:
    // 0x257c6c: 0x0  nop
    ctx->pc = 0x257c6cu;
    // NOP
label_257c70:
    // 0x257c70: 0x147e  dsrl32      $v0, $zero, 17
    ctx->pc = 0x257c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) >> (32 + 17));
label_257c74:
    // 0x257c74: 0x5df0  tge         $zero, $zero, 375
    ctx->pc = 0x257c74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257c78:
    // 0x257c78: 0x0  nop
    ctx->pc = 0x257c78u;
    // NOP
label_257c7c:
    // 0x257c7c: 0x0  nop
    ctx->pc = 0x257c7cu;
    // NOP
label_257c80:
    // 0x257c80: 0x148a  .word       0x0000148A                   # movz        $v0, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257c80u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_257c84:
    // 0x257c84: 0x4ed0  .word       0x00004ED0                   # mfhi        $t1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257c84u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_257c88:
    // 0x257c88: 0x0  nop
    ctx->pc = 0x257c88u;
    // NOP
label_257c8c:
    // 0x257c8c: 0x0  nop
    ctx->pc = 0x257c8cu;
    // NOP
label_257c90:
    // 0x257c90: 0x1494  .word       0x00001494                   # dsllv       $v0, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_257c94:
    // 0x257c94: 0x5960  .word       0x00005960                   # add         $t3, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257c94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_257c98:
    // 0x257c98: 0x0  nop
    ctx->pc = 0x257c98u;
    // NOP
label_257c9c:
    // 0x257c9c: 0x0  nop
    ctx->pc = 0x257c9cu;
    // NOP
label_257ca0:
    // 0x257ca0: 0x14a0  .word       0x000014A0                   # add         $v0, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257ca0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_257ca4:
    // 0x257ca4: 0x7c40  sll         $t7, $zero, 17
    ctx->pc = 0x257ca4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_257ca8:
    // 0x257ca8: 0x0  nop
    ctx->pc = 0x257ca8u;
    // NOP
label_257cac:
    // 0x257cac: 0x0  nop
    ctx->pc = 0x257cacu;
    // NOP
label_257cb0:
    // 0x257cb0: 0x14b0  tge         $zero, $zero, 82
    ctx->pc = 0x257cb0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257cb4:
    // 0x257cb4: 0x4a00  sll         $t1, $zero, 8
    ctx->pc = 0x257cb4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_257cb8:
    // 0x257cb8: 0x0  nop
    ctx->pc = 0x257cb8u;
    // NOP
label_257cbc:
    // 0x257cbc: 0x0  nop
    ctx->pc = 0x257cbcu;
    // NOP
label_257cc0:
    // 0x257cc0: 0x14ba  dsrl        $v0, $zero, 18
    ctx->pc = 0x257cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) >> 18);
label_257cc4:
    // 0x257cc4: 0x98d0  .word       0x000098D0                   # mfhi        $s3 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257cc4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_257cc8:
    // 0x257cc8: 0x0  nop
    ctx->pc = 0x257cc8u;
    // NOP
label_257ccc:
    // 0x257ccc: 0x0  nop
    ctx->pc = 0x257cccu;
    // NOP
label_257cd0:
    // 0x257cd0: 0x14ce  .word       0x000014CE                   # INVALID     $zero, $zero, 0x14CE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257cd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x257CD0 raw=0x000014CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_257cd4:
    // 0x257cd4: 0x69b0  tge         $zero, $zero, 422
    ctx->pc = 0x257cd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257cd8:
    // 0x257cd8: 0x0  nop
    ctx->pc = 0x257cd8u;
    // NOP
label_257cdc:
    // 0x257cdc: 0x0  nop
    ctx->pc = 0x257cdcu;
    // NOP
label_257ce0:
    // 0x257ce0: 0x14dc  .word       0x000014DC                   # dmult       $zero, $zero # 000014C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257ce0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x257CE0 raw=0x000014DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_257ce4:
    // 0x257ce4: 0x5760  .word       0x00005760                   # add         $t2, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257ce4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_257ce8:
    // 0x257ce8: 0x0  nop
    ctx->pc = 0x257ce8u;
    // NOP
label_257cec:
    // 0x257cec: 0x0  nop
    ctx->pc = 0x257cecu;
    // NOP
label_257cf0:
    // 0x257cf0: 0x14e7  .word       0x000014E7                   # not         $v0, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257cf0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_257cf4:
    // 0x257cf4: 0x7c40  sll         $t7, $zero, 17
    ctx->pc = 0x257cf4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_257cf8:
    // 0x257cf8: 0x0  nop
    ctx->pc = 0x257cf8u;
    // NOP
label_257cfc:
    // 0x257cfc: 0x0  nop
    ctx->pc = 0x257cfcu;
    // NOP
label_257d00:
    // 0x257d00: 0x14f7  .word       0x000014F7                   # INVALID     $zero, $zero, 0x14F7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257d00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x257D00 raw=0x000014F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_257d04:
    // 0x257d04: 0x8760  .word       0x00008760                   # add         $s0, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257d04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_257d08:
    // 0x257d08: 0x0  nop
    ctx->pc = 0x257d08u;
    // NOP
label_257d0c:
    // 0x257d0c: 0x0  nop
    ctx->pc = 0x257d0cu;
    // NOP
label_257d10:
    // 0x257d10: 0x1508  .word       0x00001508                   # jr          $zero # 00001500 <InstrIdType: CPU_SPECIAL>
label_257d14:
    if (ctx->pc == 0x257D14u) {
        ctx->pc = 0x257D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D10u;
        // 0x257d14: 0x6120  .word       0x00006120                   # add         $t4, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x257D18u;
        goto label_257d18;
    }
    ctx->pc = 0x257D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x257D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D10u;
        // 0x257d14: 0x6120  .word       0x00006120                   # add         $t4, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257D10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x257D18u;
label_257d18:
    // 0x257d18: 0x0  nop
    ctx->pc = 0x257d18u;
    // NOP
label_257d1c:
    // 0x257d1c: 0x0  nop
    ctx->pc = 0x257d1cu;
    // NOP
label_257d20:
    // 0x257d20: 0x1515  .word       0x00001515                   # INVALID     $zero, $zero, 0x1515 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257d20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x257D20 raw=0x00001515"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_257d24:
    // 0x257d24: 0x4920  .word       0x00004920                   # add         $t1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257d24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_257d28:
    // 0x257d28: 0x0  nop
    ctx->pc = 0x257d28u;
    // NOP
label_257d2c:
    // 0x257d2c: 0x0  nop
    ctx->pc = 0x257d2cu;
    // NOP
label_257d30:
    // 0x257d30: 0x151f  .word       0x0000151F                   # ddivu       $v0, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257d30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x257D30 raw=0x0000151F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_257d34:
    // 0x257d34: 0x55b0  tge         $zero, $zero, 342
    ctx->pc = 0x257d34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257d38:
    // 0x257d38: 0x0  nop
    ctx->pc = 0x257d38u;
    // NOP
label_257d3c:
    // 0x257d3c: 0x0  nop
    ctx->pc = 0x257d3cu;
    // NOP
label_257d40:
    // 0x257d40: 0x152a  .word       0x0000152A                   # slt         $v0, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257d40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_257d44:
    // 0x257d44: 0x3880  sll         $a3, $zero, 2
    ctx->pc = 0x257d44u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_257d48:
    // 0x257d48: 0x0  nop
    ctx->pc = 0x257d48u;
    // NOP
label_257d4c:
    // 0x257d4c: 0x0  nop
    ctx->pc = 0x257d4cu;
    // NOP
label_257d50:
    // 0x257d50: 0x1532  tlt         $zero, $zero, 84
    ctx->pc = 0x257d50u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257d54:
    // 0x257d54: 0x3640  sll         $a2, $zero, 25
    ctx->pc = 0x257d54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_257d58:
    // 0x257d58: 0x0  nop
    ctx->pc = 0x257d58u;
    // NOP
label_257d5c:
    // 0x257d5c: 0x0  nop
    ctx->pc = 0x257d5cu;
    // NOP
label_257d60:
    // 0x257d60: 0x1539  .word       0x00001539                   # INVALID     $zero, $zero, 0x1539 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257d60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x257D60 raw=0x00001539"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_257d64:
    // 0x257d64: 0x2a40  sll         $a1, $zero, 9
    ctx->pc = 0x257d64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_257d68:
    // 0x257d68: 0x0  nop
    ctx->pc = 0x257d68u;
    // NOP
label_257d6c:
    // 0x257d6c: 0x0  nop
    ctx->pc = 0x257d6cu;
    // NOP
label_257d70:
    // 0x257d70: 0x153f  dsra32      $v0, $zero, 20
    ctx->pc = 0x257d70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 0) >> (32 + 20));
label_257d74:
    // 0x257d74: 0x3a40  sll         $a3, $zero, 9
    ctx->pc = 0x257d74u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_257d78:
    // 0x257d78: 0x0  nop
    ctx->pc = 0x257d78u;
    // NOP
label_257d7c:
    // 0x257d7c: 0x0  nop
    ctx->pc = 0x257d7cu;
    // NOP
label_257d80:
    // 0x257d80: 0x1547  .word       0x00001547                   # srav        $v0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257d80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_257d84:
    // 0x257d84: 0x5e40  sll         $t3, $zero, 25
    ctx->pc = 0x257d84u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_257d88:
    // 0x257d88: 0x0  nop
    ctx->pc = 0x257d88u;
    // NOP
label_257d8c:
    // 0x257d8c: 0x0  nop
    ctx->pc = 0x257d8cu;
    // NOP
label_257d90:
    // 0x257d90: 0x1553  .word       0x00001553                   # mtlo        $zero # 00001540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257d90u;
    ctx->lo = GPR_U64(ctx, 0);
label_257d94:
    // 0x257d94: 0xaa20  .word       0x0000AA20                   # add         $s5, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257d94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_257d98:
    // 0x257d98: 0x0  nop
    ctx->pc = 0x257d98u;
    // NOP
label_257d9c:
    // 0x257d9c: 0x0  nop
    ctx->pc = 0x257d9cu;
    // NOP
label_257da0:
    // 0x257da0: 0x1569  .word       0x00001569                   # mtsa        $zero # 00001540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x257da0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_257da4:
    // 0x257da4: 0xcdd0  .word       0x0000CDD0                   # mfhi        $t9 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257da4u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_257da8:
    // 0x257da8: 0x0  nop
    ctx->pc = 0x257da8u;
    // NOP
label_257dac:
    // 0x257dac: 0x0  nop
    ctx->pc = 0x257dacu;
    // NOP
label_257db0:
    // 0x257db0: 0x1583  sra         $v0, $zero, 22
    ctx->pc = 0x257db0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 0), 22));
label_257db4:
    // 0x257db4: 0xbae0  .word       0x0000BAE0                   # add         $s7, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257db4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_257db8:
    // 0x257db8: 0x0  nop
    ctx->pc = 0x257db8u;
    // NOP
label_257dbc:
    // 0x257dbc: 0x0  nop
    ctx->pc = 0x257dbcu;
    // NOP
label_257dc0:
    // 0x257dc0: 0x159b  .word       0x0000159B                   # divu        $v0, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257dc0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_257dc4:
    // 0x257dc4: 0xd340  sll         $k0, $zero, 13
    ctx->pc = 0x257dc4u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_257dc8:
    // 0x257dc8: 0x0  nop
    ctx->pc = 0x257dc8u;
    // NOP
label_257dcc:
    // 0x257dcc: 0x0  nop
    ctx->pc = 0x257dccu;
    // NOP
label_257dd0:
    // 0x257dd0: 0x15b6  tne         $zero, $zero, 86
    ctx->pc = 0x257dd0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257dd4:
    // 0x257dd4: 0xec00  sll         $sp, $zero, 16
    ctx->pc = 0x257dd4u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_257dd8:
    // 0x257dd8: 0x0  nop
    ctx->pc = 0x257dd8u;
    // NOP
label_257ddc:
    // 0x257ddc: 0x0  nop
    ctx->pc = 0x257ddcu;
    // NOP
label_257de0:
    // 0x257de0: 0x15d4  .word       0x000015D4                   # dsllv       $v0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_257de4:
    // 0x257de4: 0x81a0  .word       0x000081A0                   # add         $s0, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257de4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_257de8:
    // 0x257de8: 0x0  nop
    ctx->pc = 0x257de8u;
    // NOP
label_257dec:
    // 0x257dec: 0x0  nop
    ctx->pc = 0x257decu;
    // NOP
label_257df0:
    // 0x257df0: 0x15e5  .word       0x000015E5                   # move        $v0, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_257df4:
    // 0x257df4: 0x10800  sll         $at, $at, 0
    ctx->pc = 0x257df4u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
label_257df8:
    // 0x257df8: 0x0  nop
    ctx->pc = 0x257df8u;
    // NOP
label_257dfc:
    // 0x257dfc: 0x0  nop
    ctx->pc = 0x257dfcu;
    // NOP
label_257e00:
    // 0x257e00: 0x1606  .word       0x00001606                   # srlv        $v0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_257e04:
    // 0x257e04: 0x8940  sll         $s1, $zero, 5
    ctx->pc = 0x257e04u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_257e08:
    // 0x257e08: 0x0  nop
    ctx->pc = 0x257e08u;
    // NOP
label_257e0c:
    // 0x257e0c: 0x0  nop
    ctx->pc = 0x257e0cu;
    // NOP
label_257e10:
    // 0x257e10: 0x1618  .word       0x00001618                   # mult        $v0, $zero, $zero # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x257e10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_257e14:
    // 0x257e14: 0xeb40  sll         $sp, $zero, 13
    ctx->pc = 0x257e14u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_257e18:
    // 0x257e18: 0x0  nop
    ctx->pc = 0x257e18u;
    // NOP
label_257e1c:
    // 0x257e1c: 0x0  nop
    ctx->pc = 0x257e1cu;
    // NOP
label_257e20:
    // 0x257e20: 0x1636  tne         $zero, $zero, 88
    ctx->pc = 0x257e20u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257e24:
    // 0x257e24: 0xaa00  sll         $s5, $zero, 8
    ctx->pc = 0x257e24u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_257e28:
    // 0x257e28: 0x0  nop
    ctx->pc = 0x257e28u;
    // NOP
label_257e2c:
    // 0x257e2c: 0x0  nop
    ctx->pc = 0x257e2cu;
    // NOP
label_257e30:
    // 0x257e30: 0x164c  syscall     89
    ctx->pc = 0x257e30u;
    ctx->pc = 0x257E34u;
runtime->handleSyscall(rdram, ctx, 0x59u);
label_257e34:
    // 0x257e34: 0x11fa0  .word       0x00011FA0                   # add         $v1, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257e34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_257e38:
    // 0x257e38: 0x0  nop
    ctx->pc = 0x257e38u;
    // NOP
label_257e3c:
    // 0x257e3c: 0x0  nop
    ctx->pc = 0x257e3cu;
    // NOP
label_257e40:
    // 0x257e40: 0x1670  tge         $zero, $zero, 89
    ctx->pc = 0x257e40u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257e44:
    // 0x257e44: 0x100c0  sll         $zero, $at, 3
    ctx->pc = 0x257e44u;
    
label_257e48:
    // 0x257e48: 0x0  nop
    ctx->pc = 0x257e48u;
    // NOP
label_257e4c:
    // 0x257e4c: 0x0  nop
    ctx->pc = 0x257e4cu;
    // NOP
label_257e50:
    // 0x257e50: 0x1691  .word       0x00001691                   # mthi        $zero # 00001680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257e50u;
    ctx->hi = GPR_U64(ctx, 0);
label_257e54:
    // 0x257e54: 0xfe90  .word       0x0000FE90                   # mfhi        $ra # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257e54u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_257e58:
    // 0x257e58: 0x0  nop
    ctx->pc = 0x257e58u;
    // NOP
label_257e5c:
    // 0x257e5c: 0x0  nop
    ctx->pc = 0x257e5cu;
    // NOP
label_257e60:
    // 0x257e60: 0x16b1  tgeu        $zero, $zero, 90
    ctx->pc = 0x257e60u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257e64:
    // 0x257e64: 0xace0  .word       0x0000ACE0                   # add         $s5, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257e64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_257e68:
    // 0x257e68: 0x0  nop
    ctx->pc = 0x257e68u;
    // NOP
label_257e6c:
    // 0x257e6c: 0x0  nop
    ctx->pc = 0x257e6cu;
    // NOP
label_257e70:
    // 0x257e70: 0x16c7  .word       0x000016C7                   # srav        $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257e70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_257e74:
    // 0x257e74: 0xb3c0  sll         $s6, $zero, 15
    ctx->pc = 0x257e74u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_257e78:
    // 0x257e78: 0x0  nop
    ctx->pc = 0x257e78u;
    // NOP
label_257e7c:
    // 0x257e7c: 0x0  nop
    ctx->pc = 0x257e7cu;
    // NOP
label_257e80:
    // 0x257e80: 0x16de  .word       0x000016DE                   # ddiv        $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257e80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x257E80 raw=0x000016DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_257e84:
    // 0x257e84: 0xdb20  .word       0x0000DB20                   # add         $k1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257e84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_257e88:
    // 0x257e88: 0x0  nop
    ctx->pc = 0x257e88u;
    // NOP
label_257e8c:
    // 0x257e8c: 0x0  nop
    ctx->pc = 0x257e8cu;
    // NOP
label_257e90:
    // 0x257e90: 0x16fa  dsrl        $v0, $zero, 27
    ctx->pc = 0x257e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) >> 27);
label_257e94:
    // 0x257e94: 0xce70  tge         $zero, $zero, 825
    ctx->pc = 0x257e94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257e98:
    // 0x257e98: 0x0  nop
    ctx->pc = 0x257e98u;
    // NOP
label_257e9c:
    // 0x257e9c: 0x0  nop
    ctx->pc = 0x257e9cu;
    // NOP
label_257ea0:
    // 0x257ea0: 0x1714  .word       0x00001714                   # dsllv       $v0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_257ea4:
    // 0x257ea4: 0x11f50  .word       0x00011F50                   # mfhi        $v1 # 00010740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257ea4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_257ea8:
    // 0x257ea8: 0x0  nop
    ctx->pc = 0x257ea8u;
    // NOP
label_257eac:
    // 0x257eac: 0x0  nop
    ctx->pc = 0x257eacu;
    // NOP
label_257eb0:
    // 0x257eb0: 0x1738  dsll        $v0, $zero, 28
    ctx->pc = 0x257eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << 28);
label_257eb4:
    // 0x257eb4: 0x107b0  tge         $zero, $at, 30
    ctx->pc = 0x257eb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_257eb8:
    // 0x257eb8: 0x0  nop
    ctx->pc = 0x257eb8u;
    // NOP
label_257ebc:
    // 0x257ebc: 0x0  nop
    ctx->pc = 0x257ebcu;
    // NOP
label_257ec0:
    // 0x257ec0: 0x1759  .word       0x00001759                   # multu       $zero, $zero # 00001740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257ec0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_257ec4:
    // 0x257ec4: 0xdf50  .word       0x0000DF50                   # mfhi        $k1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257ec4u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_257ec8:
    // 0x257ec8: 0x0  nop
    ctx->pc = 0x257ec8u;
    // NOP
label_257ecc:
    // 0x257ecc: 0x0  nop
    ctx->pc = 0x257eccu;
    // NOP
label_257ed0:
    // 0x257ed0: 0x1775  .word       0x00001775                   # INVALID     $zero, $zero, 0x1775 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257ed0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x257ED0 raw=0x00001775"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_257ed4:
    // 0x257ed4: 0x11a80  sll         $v1, $at, 10
    ctx->pc = 0x257ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 10));
label_257ed8:
    // 0x257ed8: 0x0  nop
    ctx->pc = 0x257ed8u;
    // NOP
label_257edc:
    // 0x257edc: 0x0  nop
    ctx->pc = 0x257edcu;
    // NOP
label_257ee0:
    // 0x257ee0: 0x1799  .word       0x00001799                   # multu       $zero, $zero # 00001780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257ee0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_257ee4:
    // 0x257ee4: 0xbdc0  sll         $s7, $zero, 23
    ctx->pc = 0x257ee4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_257ee8:
    // 0x257ee8: 0x0  nop
    ctx->pc = 0x257ee8u;
    // NOP
label_257eec:
    // 0x257eec: 0x0  nop
    ctx->pc = 0x257eecu;
    // NOP
label_257ef0:
    // 0x257ef0: 0x17b1  tgeu        $zero, $zero, 94
    ctx->pc = 0x257ef0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257ef4:
    // 0x257ef4: 0xbba0  .word       0x0000BBA0                   # add         $s7, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257ef4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_257ef8:
    // 0x257ef8: 0x0  nop
    ctx->pc = 0x257ef8u;
    // NOP
label_257efc:
    // 0x257efc: 0x0  nop
    ctx->pc = 0x257efcu;
    // NOP
label_257f00:
    // 0x257f00: 0x17c9  .word       0x000017C9                   # jalr        $v0, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
label_257f04:
    if (ctx->pc == 0x257F04u) {
        ctx->pc = 0x257F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F00u;
        // 0x257f04: 0xbb00  sll         $s7, $zero, 12 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257F08u;
        goto label_257f08;
    }
    ctx->pc = 0x257F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 2, 0x257F08u);
        ctx->pc = 0x257F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F00u;
        // 0x257f04: 0xbb00  sll         $s7, $zero, 12 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257F00u, 0x257F08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x257F08u;
label_257f08:
    // 0x257f08: 0x0  nop
    ctx->pc = 0x257f08u;
    // NOP
label_257f0c:
    // 0x257f0c: 0x0  nop
    ctx->pc = 0x257f0cu;
    // NOP
label_257f10:
    // 0x257f10: 0x17e1  .word       0x000017E1                   # addu        $v0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_257f14:
    // 0x257f14: 0xbe50  .word       0x0000BE50                   # mfhi        $s7 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257f14u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_257f18:
    // 0x257f18: 0x0  nop
    ctx->pc = 0x257f18u;
    // NOP
label_257f1c:
    // 0x257f1c: 0x0  nop
    ctx->pc = 0x257f1cu;
    // NOP
label_257f20:
    // 0x257f20: 0x17f9  .word       0x000017F9                   # INVALID     $zero, $zero, 0x17F9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257f20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x257F20 raw=0x000017F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_257f24:
    // 0x257f24: 0xd920  .word       0x0000D920                   # add         $k1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257f24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_257f28:
    // 0x257f28: 0x0  nop
    ctx->pc = 0x257f28u;
    // NOP
label_257f2c:
    // 0x257f2c: 0x0  nop
    ctx->pc = 0x257f2cu;
    // NOP
label_257f30:
    // 0x257f30: 0x1815  .word       0x00001815                   # INVALID     $zero, $zero, 0x1815 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257f30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x257F30 raw=0x00001815"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_257f34:
    // 0x257f34: 0xc920  .word       0x0000C920                   # add         $t9, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257f34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_257f38:
    // 0x257f38: 0x0  nop
    ctx->pc = 0x257f38u;
    // NOP
label_257f3c:
    // 0x257f3c: 0x0  nop
    ctx->pc = 0x257f3cu;
    // NOP
label_257f40:
    // 0x257f40: 0x182f  dsubu       $v1, $zero, $zero
    ctx->pc = 0x257f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_257f44:
    // 0x257f44: 0x1fec0  sll         $ra, $at, 27
    ctx->pc = 0x257f44u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 1), 27));
label_257f48:
    // 0x257f48: 0x0  nop
    ctx->pc = 0x257f48u;
    // NOP
label_257f4c:
    // 0x257f4c: 0x0  nop
    ctx->pc = 0x257f4cu;
    // NOP
label_257f50:
    // 0x257f50: 0x186f  .word       0x0000186F                   # dsubu       $v1, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_257f54:
    // 0x257f54: 0xbf90  .word       0x0000BF90                   # mfhi        $s7 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257f54u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_257f58:
    // 0x257f58: 0x0  nop
    ctx->pc = 0x257f58u;
    // NOP
label_257f5c:
    // 0x257f5c: 0x0  nop
    ctx->pc = 0x257f5cu;
    // NOP
label_257f60:
    // 0x257f60: 0x1887  .word       0x00001887                   # srav        $v1, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257f60u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_257f64:
    // 0x257f64: 0xc2c0  sll         $t8, $zero, 11
    ctx->pc = 0x257f64u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_257f68:
    // 0x257f68: 0x0  nop
    ctx->pc = 0x257f68u;
    // NOP
label_257f6c:
    // 0x257f6c: 0x0  nop
    ctx->pc = 0x257f6cu;
    // NOP
label_257f70:
    // 0x257f70: 0x18a0  .word       0x000018A0                   # add         $v1, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257f70u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_257f74:
    // 0x257f74: 0x7ee0  .word       0x00007EE0                   # add         $t7, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257f74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_257f78:
    // 0x257f78: 0x0  nop
    ctx->pc = 0x257f78u;
    // NOP
label_257f7c:
    // 0x257f7c: 0x0  nop
    ctx->pc = 0x257f7cu;
    // NOP
label_257f80:
    // 0x257f80: 0x18b0  tge         $zero, $zero, 98
    ctx->pc = 0x257f80u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257f84:
    // 0x257f84: 0xe560  .word       0x0000E560                   # add         $gp, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257f84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_257f88:
    // 0x257f88: 0x0  nop
    ctx->pc = 0x257f88u;
    // NOP
label_257f8c:
    // 0x257f8c: 0x0  nop
    ctx->pc = 0x257f8cu;
    // NOP
label_257f90:
    // 0x257f90: 0x18cd  break       0, 99
    ctx->pc = 0x257f90u;
    runtime->handleBreak(rdram, ctx);
label_257f94:
    // 0x257f94: 0x98d0  .word       0x000098D0                   # mfhi        $s3 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257f94u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_257f98:
    // 0x257f98: 0x0  nop
    ctx->pc = 0x257f98u;
    // NOP
label_257f9c:
    // 0x257f9c: 0x0  nop
    ctx->pc = 0x257f9cu;
    // NOP
label_257fa0:
    // 0x257fa0: 0x18e1  .word       0x000018E1                   # addu        $v1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_257fa4:
    // 0x257fa4: 0x8e90  .word       0x00008E90                   # mfhi        $s1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257fa4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_257fa8:
    // 0x257fa8: 0x0  nop
    ctx->pc = 0x257fa8u;
    // NOP
label_257fac:
    // 0x257fac: 0x0  nop
    ctx->pc = 0x257facu;
    // NOP
label_257fb0:
    // 0x257fb0: 0x18f3  tltu        $zero, $zero, 99
    ctx->pc = 0x257fb0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257fb4:
    // 0x257fb4: 0xf770  tge         $zero, $zero, 989
    ctx->pc = 0x257fb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257fb8:
    // 0x257fb8: 0x0  nop
    ctx->pc = 0x257fb8u;
    // NOP
label_257fbc:
    // 0x257fbc: 0x0  nop
    ctx->pc = 0x257fbcu;
    // NOP
label_257fc0:
    // 0x257fc0: 0x1912  .word       0x00001912                   # mflo        $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257fc0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_257fc4:
    // 0x257fc4: 0xae90  .word       0x0000AE90                   # mfhi        $s5 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257fc4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_257fc8:
    // 0x257fc8: 0x0  nop
    ctx->pc = 0x257fc8u;
    // NOP
label_257fcc:
    // 0x257fcc: 0x0  nop
    ctx->pc = 0x257fccu;
    // NOP
label_257fd0:
    // 0x257fd0: 0x1928  .word       0x00001928                   # mfsa        $v1 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x257fd0u;
    SET_GPR_U32(ctx, 3, ctx->sa);
label_257fd4:
    // 0x257fd4: 0xf520  .word       0x0000F520                   # add         $fp, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257fd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_257fd8:
    // 0x257fd8: 0x0  nop
    ctx->pc = 0x257fd8u;
    // NOP
label_257fdc:
    // 0x257fdc: 0x0  nop
    ctx->pc = 0x257fdcu;
    // NOP
label_257fe0:
    // 0x257fe0: 0x1947  .word       0x00001947                   # srav        $v1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257fe0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_257fe4:
    // 0x257fe4: 0x9960  .word       0x00009960                   # add         $s3, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257fe4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_257fe8:
    // 0x257fe8: 0x0  nop
    ctx->pc = 0x257fe8u;
    // NOP
label_257fec:
    // 0x257fec: 0x0  nop
    ctx->pc = 0x257fecu;
    // NOP
    ctx->pc = 0x257ff0u;
    return;
}

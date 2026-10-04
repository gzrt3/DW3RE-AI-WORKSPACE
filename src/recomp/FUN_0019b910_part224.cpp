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

// Function: FUN_0019b910
// Address: 0x19b910 - 0x29b9f0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b910_part224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x208740u: goto label_208740;
        case 0x208744u: goto label_208744;
        case 0x208748u: goto label_208748;
        case 0x20874cu: goto label_20874c;
        case 0x208750u: goto label_208750;
        case 0x208754u: goto label_208754;
        case 0x208758u: goto label_208758;
        case 0x20875cu: goto label_20875c;
        case 0x208760u: goto label_208760;
        case 0x208764u: goto label_208764;
        case 0x208768u: goto label_208768;
        case 0x20876cu: goto label_20876c;
        case 0x208770u: goto label_208770;
        case 0x208774u: goto label_208774;
        case 0x208778u: goto label_208778;
        case 0x20877cu: goto label_20877c;
        case 0x208780u: goto label_208780;
        case 0x208784u: goto label_208784;
        case 0x208788u: goto label_208788;
        case 0x20878cu: goto label_20878c;
        case 0x208790u: goto label_208790;
        case 0x208794u: goto label_208794;
        case 0x208798u: goto label_208798;
        case 0x20879cu: goto label_20879c;
        case 0x2087a0u: goto label_2087a0;
        case 0x2087a4u: goto label_2087a4;
        case 0x2087a8u: goto label_2087a8;
        case 0x2087acu: goto label_2087ac;
        case 0x2087b0u: goto label_2087b0;
        case 0x2087b4u: goto label_2087b4;
        case 0x2087b8u: goto label_2087b8;
        case 0x2087bcu: goto label_2087bc;
        case 0x2087c0u: goto label_2087c0;
        case 0x2087c4u: goto label_2087c4;
        case 0x2087c8u: goto label_2087c8;
        case 0x2087ccu: goto label_2087cc;
        case 0x2087d0u: goto label_2087d0;
        case 0x2087d4u: goto label_2087d4;
        case 0x2087d8u: goto label_2087d8;
        case 0x2087dcu: goto label_2087dc;
        case 0x2087e0u: goto label_2087e0;
        case 0x2087e4u: goto label_2087e4;
        case 0x2087e8u: goto label_2087e8;
        case 0x2087ecu: goto label_2087ec;
        case 0x2087f0u: goto label_2087f0;
        case 0x2087f4u: goto label_2087f4;
        case 0x2087f8u: goto label_2087f8;
        case 0x2087fcu: goto label_2087fc;
        case 0x208800u: goto label_208800;
        case 0x208804u: goto label_208804;
        case 0x208808u: goto label_208808;
        case 0x20880cu: goto label_20880c;
        case 0x208810u: goto label_208810;
        case 0x208814u: goto label_208814;
        case 0x208818u: goto label_208818;
        case 0x20881cu: goto label_20881c;
        case 0x208820u: goto label_208820;
        case 0x208824u: goto label_208824;
        case 0x208828u: goto label_208828;
        case 0x20882cu: goto label_20882c;
        case 0x208830u: goto label_208830;
        case 0x208834u: goto label_208834;
        case 0x208838u: goto label_208838;
        case 0x20883cu: goto label_20883c;
        case 0x208840u: goto label_208840;
        case 0x208844u: goto label_208844;
        case 0x208848u: goto label_208848;
        case 0x20884cu: goto label_20884c;
        case 0x208850u: goto label_208850;
        case 0x208854u: goto label_208854;
        case 0x208858u: goto label_208858;
        case 0x20885cu: goto label_20885c;
        case 0x208860u: goto label_208860;
        case 0x208864u: goto label_208864;
        case 0x208868u: goto label_208868;
        case 0x20886cu: goto label_20886c;
        case 0x208870u: goto label_208870;
        case 0x208874u: goto label_208874;
        case 0x208878u: goto label_208878;
        case 0x20887cu: goto label_20887c;
        case 0x208880u: goto label_208880;
        case 0x208884u: goto label_208884;
        case 0x208888u: goto label_208888;
        case 0x20888cu: goto label_20888c;
        case 0x208890u: goto label_208890;
        case 0x208894u: goto label_208894;
        case 0x208898u: goto label_208898;
        case 0x20889cu: goto label_20889c;
        case 0x2088a0u: goto label_2088a0;
        case 0x2088a4u: goto label_2088a4;
        case 0x2088a8u: goto label_2088a8;
        case 0x2088acu: goto label_2088ac;
        case 0x2088b0u: goto label_2088b0;
        case 0x2088b4u: goto label_2088b4;
        case 0x2088b8u: goto label_2088b8;
        case 0x2088bcu: goto label_2088bc;
        case 0x2088c0u: goto label_2088c0;
        case 0x2088c4u: goto label_2088c4;
        case 0x2088c8u: goto label_2088c8;
        case 0x2088ccu: goto label_2088cc;
        case 0x2088d0u: goto label_2088d0;
        case 0x2088d4u: goto label_2088d4;
        case 0x2088d8u: goto label_2088d8;
        case 0x2088dcu: goto label_2088dc;
        case 0x2088e0u: goto label_2088e0;
        case 0x2088e4u: goto label_2088e4;
        case 0x2088e8u: goto label_2088e8;
        case 0x2088ecu: goto label_2088ec;
        case 0x2088f0u: goto label_2088f0;
        case 0x2088f4u: goto label_2088f4;
        case 0x2088f8u: goto label_2088f8;
        case 0x2088fcu: goto label_2088fc;
        case 0x208900u: goto label_208900;
        case 0x208904u: goto label_208904;
        case 0x208908u: goto label_208908;
        case 0x20890cu: goto label_20890c;
        case 0x208910u: goto label_208910;
        case 0x208914u: goto label_208914;
        case 0x208918u: goto label_208918;
        case 0x20891cu: goto label_20891c;
        case 0x208920u: goto label_208920;
        case 0x208924u: goto label_208924;
        case 0x208928u: goto label_208928;
        case 0x20892cu: goto label_20892c;
        case 0x208930u: goto label_208930;
        case 0x208934u: goto label_208934;
        case 0x208938u: goto label_208938;
        case 0x20893cu: goto label_20893c;
        case 0x208940u: goto label_208940;
        case 0x208944u: goto label_208944;
        case 0x208948u: goto label_208948;
        case 0x20894cu: goto label_20894c;
        case 0x208950u: goto label_208950;
        case 0x208954u: goto label_208954;
        case 0x208958u: goto label_208958;
        case 0x20895cu: goto label_20895c;
        case 0x208960u: goto label_208960;
        case 0x208964u: goto label_208964;
        case 0x208968u: goto label_208968;
        case 0x20896cu: goto label_20896c;
        case 0x208970u: goto label_208970;
        case 0x208974u: goto label_208974;
        case 0x208978u: goto label_208978;
        case 0x20897cu: goto label_20897c;
        case 0x208980u: goto label_208980;
        case 0x208984u: goto label_208984;
        case 0x208988u: goto label_208988;
        case 0x20898cu: goto label_20898c;
        case 0x208990u: goto label_208990;
        case 0x208994u: goto label_208994;
        case 0x208998u: goto label_208998;
        case 0x20899cu: goto label_20899c;
        case 0x2089a0u: goto label_2089a0;
        case 0x2089a4u: goto label_2089a4;
        case 0x2089a8u: goto label_2089a8;
        case 0x2089acu: goto label_2089ac;
        case 0x2089b0u: goto label_2089b0;
        case 0x2089b4u: goto label_2089b4;
        case 0x2089b8u: goto label_2089b8;
        case 0x2089bcu: goto label_2089bc;
        case 0x2089c0u: goto label_2089c0;
        case 0x2089c4u: goto label_2089c4;
        case 0x2089c8u: goto label_2089c8;
        case 0x2089ccu: goto label_2089cc;
        case 0x2089d0u: goto label_2089d0;
        case 0x2089d4u: goto label_2089d4;
        case 0x2089d8u: goto label_2089d8;
        case 0x2089dcu: goto label_2089dc;
        case 0x2089e0u: goto label_2089e0;
        case 0x2089e4u: goto label_2089e4;
        case 0x2089e8u: goto label_2089e8;
        case 0x2089ecu: goto label_2089ec;
        case 0x2089f0u: goto label_2089f0;
        case 0x2089f4u: goto label_2089f4;
        case 0x2089f8u: goto label_2089f8;
        case 0x2089fcu: goto label_2089fc;
        case 0x208a00u: goto label_208a00;
        case 0x208a04u: goto label_208a04;
        case 0x208a08u: goto label_208a08;
        case 0x208a0cu: goto label_208a0c;
        case 0x208a10u: goto label_208a10;
        case 0x208a14u: goto label_208a14;
        case 0x208a18u: goto label_208a18;
        case 0x208a1cu: goto label_208a1c;
        case 0x208a20u: goto label_208a20;
        case 0x208a24u: goto label_208a24;
        case 0x208a28u: goto label_208a28;
        case 0x208a2cu: goto label_208a2c;
        case 0x208a30u: goto label_208a30;
        case 0x208a34u: goto label_208a34;
        case 0x208a38u: goto label_208a38;
        case 0x208a3cu: goto label_208a3c;
        case 0x208a40u: goto label_208a40;
        case 0x208a44u: goto label_208a44;
        case 0x208a48u: goto label_208a48;
        case 0x208a4cu: goto label_208a4c;
        case 0x208a50u: goto label_208a50;
        case 0x208a54u: goto label_208a54;
        case 0x208a58u: goto label_208a58;
        case 0x208a5cu: goto label_208a5c;
        case 0x208a60u: goto label_208a60;
        case 0x208a64u: goto label_208a64;
        case 0x208a68u: goto label_208a68;
        case 0x208a6cu: goto label_208a6c;
        case 0x208a70u: goto label_208a70;
        case 0x208a74u: goto label_208a74;
        case 0x208a78u: goto label_208a78;
        case 0x208a7cu: goto label_208a7c;
        case 0x208a80u: goto label_208a80;
        case 0x208a84u: goto label_208a84;
        case 0x208a88u: goto label_208a88;
        case 0x208a8cu: goto label_208a8c;
        case 0x208a90u: goto label_208a90;
        case 0x208a94u: goto label_208a94;
        case 0x208a98u: goto label_208a98;
        case 0x208a9cu: goto label_208a9c;
        case 0x208aa0u: goto label_208aa0;
        case 0x208aa4u: goto label_208aa4;
        case 0x208aa8u: goto label_208aa8;
        case 0x208aacu: goto label_208aac;
        case 0x208ab0u: goto label_208ab0;
        case 0x208ab4u: goto label_208ab4;
        case 0x208ab8u: goto label_208ab8;
        case 0x208abcu: goto label_208abc;
        case 0x208ac0u: goto label_208ac0;
        case 0x208ac4u: goto label_208ac4;
        case 0x208ac8u: goto label_208ac8;
        case 0x208accu: goto label_208acc;
        case 0x208ad0u: goto label_208ad0;
        case 0x208ad4u: goto label_208ad4;
        case 0x208ad8u: goto label_208ad8;
        case 0x208adcu: goto label_208adc;
        case 0x208ae0u: goto label_208ae0;
        case 0x208ae4u: goto label_208ae4;
        case 0x208ae8u: goto label_208ae8;
        case 0x208aecu: goto label_208aec;
        case 0x208af0u: goto label_208af0;
        case 0x208af4u: goto label_208af4;
        case 0x208af8u: goto label_208af8;
        case 0x208afcu: goto label_208afc;
        case 0x208b00u: goto label_208b00;
        case 0x208b04u: goto label_208b04;
        case 0x208b08u: goto label_208b08;
        case 0x208b0cu: goto label_208b0c;
        case 0x208b10u: goto label_208b10;
        case 0x208b14u: goto label_208b14;
        case 0x208b18u: goto label_208b18;
        case 0x208b1cu: goto label_208b1c;
        case 0x208b20u: goto label_208b20;
        case 0x208b24u: goto label_208b24;
        case 0x208b28u: goto label_208b28;
        case 0x208b2cu: goto label_208b2c;
        case 0x208b30u: goto label_208b30;
        case 0x208b34u: goto label_208b34;
        case 0x208b38u: goto label_208b38;
        case 0x208b3cu: goto label_208b3c;
        case 0x208b40u: goto label_208b40;
        case 0x208b44u: goto label_208b44;
        case 0x208b48u: goto label_208b48;
        case 0x208b4cu: goto label_208b4c;
        case 0x208b50u: goto label_208b50;
        case 0x208b54u: goto label_208b54;
        case 0x208b58u: goto label_208b58;
        case 0x208b5cu: goto label_208b5c;
        case 0x208b60u: goto label_208b60;
        case 0x208b64u: goto label_208b64;
        case 0x208b68u: goto label_208b68;
        case 0x208b6cu: goto label_208b6c;
        case 0x208b70u: goto label_208b70;
        case 0x208b74u: goto label_208b74;
        case 0x208b78u: goto label_208b78;
        case 0x208b7cu: goto label_208b7c;
        case 0x208b80u: goto label_208b80;
        case 0x208b84u: goto label_208b84;
        case 0x208b88u: goto label_208b88;
        case 0x208b8cu: goto label_208b8c;
        case 0x208b90u: goto label_208b90;
        case 0x208b94u: goto label_208b94;
        case 0x208b98u: goto label_208b98;
        case 0x208b9cu: goto label_208b9c;
        case 0x208ba0u: goto label_208ba0;
        case 0x208ba4u: goto label_208ba4;
        case 0x208ba8u: goto label_208ba8;
        case 0x208bacu: goto label_208bac;
        case 0x208bb0u: goto label_208bb0;
        case 0x208bb4u: goto label_208bb4;
        case 0x208bb8u: goto label_208bb8;
        case 0x208bbcu: goto label_208bbc;
        case 0x208bc0u: goto label_208bc0;
        case 0x208bc4u: goto label_208bc4;
        case 0x208bc8u: goto label_208bc8;
        case 0x208bccu: goto label_208bcc;
        case 0x208bd0u: goto label_208bd0;
        case 0x208bd4u: goto label_208bd4;
        case 0x208bd8u: goto label_208bd8;
        case 0x208bdcu: goto label_208bdc;
        case 0x208be0u: goto label_208be0;
        case 0x208be4u: goto label_208be4;
        case 0x208be8u: goto label_208be8;
        case 0x208becu: goto label_208bec;
        case 0x208bf0u: goto label_208bf0;
        case 0x208bf4u: goto label_208bf4;
        case 0x208bf8u: goto label_208bf8;
        case 0x208bfcu: goto label_208bfc;
        case 0x208c00u: goto label_208c00;
        case 0x208c04u: goto label_208c04;
        case 0x208c08u: goto label_208c08;
        case 0x208c0cu: goto label_208c0c;
        case 0x208c10u: goto label_208c10;
        case 0x208c14u: goto label_208c14;
        case 0x208c18u: goto label_208c18;
        case 0x208c1cu: goto label_208c1c;
        case 0x208c20u: goto label_208c20;
        case 0x208c24u: goto label_208c24;
        case 0x208c28u: goto label_208c28;
        case 0x208c2cu: goto label_208c2c;
        case 0x208c30u: goto label_208c30;
        case 0x208c34u: goto label_208c34;
        case 0x208c38u: goto label_208c38;
        case 0x208c3cu: goto label_208c3c;
        case 0x208c40u: goto label_208c40;
        case 0x208c44u: goto label_208c44;
        case 0x208c48u: goto label_208c48;
        case 0x208c4cu: goto label_208c4c;
        case 0x208c50u: goto label_208c50;
        case 0x208c54u: goto label_208c54;
        case 0x208c58u: goto label_208c58;
        case 0x208c5cu: goto label_208c5c;
        case 0x208c60u: goto label_208c60;
        case 0x208c64u: goto label_208c64;
        case 0x208c68u: goto label_208c68;
        case 0x208c6cu: goto label_208c6c;
        case 0x208c70u: goto label_208c70;
        case 0x208c74u: goto label_208c74;
        case 0x208c78u: goto label_208c78;
        case 0x208c7cu: goto label_208c7c;
        case 0x208c80u: goto label_208c80;
        case 0x208c84u: goto label_208c84;
        case 0x208c88u: goto label_208c88;
        case 0x208c8cu: goto label_208c8c;
        case 0x208c90u: goto label_208c90;
        case 0x208c94u: goto label_208c94;
        case 0x208c98u: goto label_208c98;
        case 0x208c9cu: goto label_208c9c;
        case 0x208ca0u: goto label_208ca0;
        case 0x208ca4u: goto label_208ca4;
        case 0x208ca8u: goto label_208ca8;
        case 0x208cacu: goto label_208cac;
        case 0x208cb0u: goto label_208cb0;
        case 0x208cb4u: goto label_208cb4;
        case 0x208cb8u: goto label_208cb8;
        case 0x208cbcu: goto label_208cbc;
        case 0x208cc0u: goto label_208cc0;
        case 0x208cc4u: goto label_208cc4;
        case 0x208cc8u: goto label_208cc8;
        case 0x208cccu: goto label_208ccc;
        case 0x208cd0u: goto label_208cd0;
        case 0x208cd4u: goto label_208cd4;
        case 0x208cd8u: goto label_208cd8;
        case 0x208cdcu: goto label_208cdc;
        case 0x208ce0u: goto label_208ce0;
        case 0x208ce4u: goto label_208ce4;
        case 0x208ce8u: goto label_208ce8;
        case 0x208cecu: goto label_208cec;
        case 0x208cf0u: goto label_208cf0;
        case 0x208cf4u: goto label_208cf4;
        case 0x208cf8u: goto label_208cf8;
        case 0x208cfcu: goto label_208cfc;
        case 0x208d00u: goto label_208d00;
        case 0x208d04u: goto label_208d04;
        case 0x208d08u: goto label_208d08;
        case 0x208d0cu: goto label_208d0c;
        case 0x208d10u: goto label_208d10;
        case 0x208d14u: goto label_208d14;
        case 0x208d18u: goto label_208d18;
        case 0x208d1cu: goto label_208d1c;
        case 0x208d20u: goto label_208d20;
        case 0x208d24u: goto label_208d24;
        case 0x208d28u: goto label_208d28;
        case 0x208d2cu: goto label_208d2c;
        case 0x208d30u: goto label_208d30;
        case 0x208d34u: goto label_208d34;
        case 0x208d38u: goto label_208d38;
        case 0x208d3cu: goto label_208d3c;
        case 0x208d40u: goto label_208d40;
        case 0x208d44u: goto label_208d44;
        case 0x208d48u: goto label_208d48;
        case 0x208d4cu: goto label_208d4c;
        case 0x208d50u: goto label_208d50;
        case 0x208d54u: goto label_208d54;
        case 0x208d58u: goto label_208d58;
        case 0x208d5cu: goto label_208d5c;
        case 0x208d60u: goto label_208d60;
        case 0x208d64u: goto label_208d64;
        case 0x208d68u: goto label_208d68;
        case 0x208d6cu: goto label_208d6c;
        case 0x208d70u: goto label_208d70;
        case 0x208d74u: goto label_208d74;
        case 0x208d78u: goto label_208d78;
        case 0x208d7cu: goto label_208d7c;
        case 0x208d80u: goto label_208d80;
        case 0x208d84u: goto label_208d84;
        case 0x208d88u: goto label_208d88;
        case 0x208d8cu: goto label_208d8c;
        case 0x208d90u: goto label_208d90;
        case 0x208d94u: goto label_208d94;
        case 0x208d98u: goto label_208d98;
        case 0x208d9cu: goto label_208d9c;
        case 0x208da0u: goto label_208da0;
        case 0x208da4u: goto label_208da4;
        case 0x208da8u: goto label_208da8;
        case 0x208dacu: goto label_208dac;
        case 0x208db0u: goto label_208db0;
        case 0x208db4u: goto label_208db4;
        case 0x208db8u: goto label_208db8;
        case 0x208dbcu: goto label_208dbc;
        case 0x208dc0u: goto label_208dc0;
        case 0x208dc4u: goto label_208dc4;
        case 0x208dc8u: goto label_208dc8;
        case 0x208dccu: goto label_208dcc;
        case 0x208dd0u: goto label_208dd0;
        case 0x208dd4u: goto label_208dd4;
        case 0x208dd8u: goto label_208dd8;
        case 0x208ddcu: goto label_208ddc;
        case 0x208de0u: goto label_208de0;
        case 0x208de4u: goto label_208de4;
        case 0x208de8u: goto label_208de8;
        case 0x208decu: goto label_208dec;
        case 0x208df0u: goto label_208df0;
        case 0x208df4u: goto label_208df4;
        case 0x208df8u: goto label_208df8;
        case 0x208dfcu: goto label_208dfc;
        case 0x208e00u: goto label_208e00;
        case 0x208e04u: goto label_208e04;
        case 0x208e08u: goto label_208e08;
        case 0x208e0cu: goto label_208e0c;
        case 0x208e10u: goto label_208e10;
        case 0x208e14u: goto label_208e14;
        case 0x208e18u: goto label_208e18;
        case 0x208e1cu: goto label_208e1c;
        case 0x208e20u: goto label_208e20;
        case 0x208e24u: goto label_208e24;
        case 0x208e28u: goto label_208e28;
        case 0x208e2cu: goto label_208e2c;
        case 0x208e30u: goto label_208e30;
        case 0x208e34u: goto label_208e34;
        case 0x208e38u: goto label_208e38;
        case 0x208e3cu: goto label_208e3c;
        case 0x208e40u: goto label_208e40;
        case 0x208e44u: goto label_208e44;
        case 0x208e48u: goto label_208e48;
        case 0x208e4cu: goto label_208e4c;
        case 0x208e50u: goto label_208e50;
        case 0x208e54u: goto label_208e54;
        case 0x208e58u: goto label_208e58;
        case 0x208e5cu: goto label_208e5c;
        case 0x208e60u: goto label_208e60;
        case 0x208e64u: goto label_208e64;
        case 0x208e68u: goto label_208e68;
        case 0x208e6cu: goto label_208e6c;
        case 0x208e70u: goto label_208e70;
        case 0x208e74u: goto label_208e74;
        case 0x208e78u: goto label_208e78;
        case 0x208e7cu: goto label_208e7c;
        case 0x208e80u: goto label_208e80;
        case 0x208e84u: goto label_208e84;
        case 0x208e88u: goto label_208e88;
        case 0x208e8cu: goto label_208e8c;
        case 0x208e90u: goto label_208e90;
        case 0x208e94u: goto label_208e94;
        case 0x208e98u: goto label_208e98;
        case 0x208e9cu: goto label_208e9c;
        case 0x208ea0u: goto label_208ea0;
        case 0x208ea4u: goto label_208ea4;
        case 0x208ea8u: goto label_208ea8;
        case 0x208eacu: goto label_208eac;
        case 0x208eb0u: goto label_208eb0;
        case 0x208eb4u: goto label_208eb4;
        case 0x208eb8u: goto label_208eb8;
        case 0x208ebcu: goto label_208ebc;
        case 0x208ec0u: goto label_208ec0;
        case 0x208ec4u: goto label_208ec4;
        case 0x208ec8u: goto label_208ec8;
        case 0x208eccu: goto label_208ecc;
        case 0x208ed0u: goto label_208ed0;
        case 0x208ed4u: goto label_208ed4;
        case 0x208ed8u: goto label_208ed8;
        case 0x208edcu: goto label_208edc;
        case 0x208ee0u: goto label_208ee0;
        case 0x208ee4u: goto label_208ee4;
        case 0x208ee8u: goto label_208ee8;
        case 0x208eecu: goto label_208eec;
        case 0x208ef0u: goto label_208ef0;
        case 0x208ef4u: goto label_208ef4;
        case 0x208ef8u: goto label_208ef8;
        case 0x208efcu: goto label_208efc;
        case 0x208f00u: goto label_208f00;
        case 0x208f04u: goto label_208f04;
        case 0x208f08u: goto label_208f08;
        case 0x208f0cu: goto label_208f0c;
        default: return;
    }

label_208740:
    // 0x208740: 0x26e20118  addiu       $v0, $s7, 0x118
    ctx->pc = 0x208740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 280));
label_208744:
    // 0x208744: 0x26240088  addiu       $a0, $s1, 0x88
    ctx->pc = 0x208744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
label_208748:
    // 0x208748: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x208748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20874c:
    // 0x20874c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20874cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208750:
    // 0x208750: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x208750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_208754:
    // 0x208754: 0x24676c00  addiu       $a3, $v1, 0x6C00
    ctx->pc = 0x208754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_208758:
    // 0x208758: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x208758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20875c:
    // 0x20875c: 0x2151821  addu        $v1, $s0, $s5
    ctx->pc = 0x20875cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_208760:
    // 0x208760: 0x24486c00  addiu       $t0, $v0, 0x6C00
    ctx->pc = 0x208760u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_208764:
    // 0x208764: 0xa4676330  sh          $a3, 0x6330($v1)
    ctx->pc = 0x208764u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 25392), (uint16_t)GPR_U32(ctx, 7));
label_208768:
    // 0x208768: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x208768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_20876c:
    // 0x20876c: 0x24467900  addiu       $a2, $v0, 0x7900
    ctx->pc = 0x20876cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_208770:
    // 0x208770: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x208770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_208774:
    // 0x208774: 0xa4666332  sh          $a2, 0x6332($v1)
    ctx->pc = 0x208774u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 25394), (uint16_t)GPR_U32(ctx, 6));
label_208778:
    // 0x208778: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x208778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_20877c:
    // 0x20877c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20877cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208780:
    // 0x208780: 0x24497900  addiu       $t1, $v0, 0x7900
    ctx->pc = 0x208780u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_208784:
    // 0x208784: 0x3402fe00  ori         $v0, $zero, 0xFE00
    ctx->pc = 0x208784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_208788:
    // 0x208788: 0xac626334  sw          $v0, 0x6334($v1)
    ctx->pc = 0x208788u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 25396), GPR_U32(ctx, 2));
label_20878c:
    // 0x20878c: 0xa4686348  sh          $t0, 0x6348($v1)
    ctx->pc = 0x20878cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 25416), (uint16_t)GPR_U32(ctx, 8));
label_208790:
    // 0x208790: 0xa466634a  sh          $a2, 0x634A($v1)
    ctx->pc = 0x208790u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 25418), (uint16_t)GPR_U32(ctx, 6));
label_208794:
    // 0x208794: 0xac62634c  sw          $v0, 0x634C($v1)
    ctx->pc = 0x208794u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 25420), GPR_U32(ctx, 2));
label_208798:
    // 0x208798: 0xa4676360  sh          $a3, 0x6360($v1)
    ctx->pc = 0x208798u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 25440), (uint16_t)GPR_U32(ctx, 7));
label_20879c:
    // 0x20879c: 0xa4696362  sh          $t1, 0x6362($v1)
    ctx->pc = 0x20879cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 25442), (uint16_t)GPR_U32(ctx, 9));
label_2087a0:
    // 0x2087a0: 0xac626364  sw          $v0, 0x6364($v1)
    ctx->pc = 0x2087a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 25444), GPR_U32(ctx, 2));
label_2087a4:
    // 0x2087a4: 0xa4686378  sh          $t0, 0x6378($v1)
    ctx->pc = 0x2087a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 25464), (uint16_t)GPR_U32(ctx, 8));
label_2087a8:
    // 0x2087a8: 0xa469637a  sh          $t1, 0x637A($v1)
    ctx->pc = 0x2087a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 25466), (uint16_t)GPR_U32(ctx, 9));
label_2087ac:
    // 0x2087ac: 0xc054e6c  jal         func_1539B0
label_2087b0:
    if (ctx->pc == 0x2087B0u) {
        ctx->pc = 0x2087B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2087ACu;
        // 0x2087b0: 0xac62637c  sw          $v0, 0x637C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 25468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2087B4u;
        goto label_2087b4;
    }
    ctx->pc = 0x2087ACu;
    SET_GPR_U32(ctx, 31, 0x2087B4u);
    ctx->pc = 0x2087B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2087ACu;
    // 0x2087b0: 0xac62637c  sw          $v0, 0x637C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 25468), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539B0u, 0x2087ACu, 0x2087B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2087B4u;
label_2087b4:
    // 0x2087b4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2087b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2087b8:
    // 0x2087b8: 0x26e80140  addiu       $t0, $s7, 0x140
    ctx->pc = 0x2087b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 320));
label_2087bc:
    // 0x2087bc: 0x26290072  addiu       $t1, $s1, 0x72
    ctx->pc = 0x2087bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 114));
label_2087c0:
    // 0x2087c0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2087c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2087c4:
    // 0x2087c4: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x2087c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_2087c8:
    // 0x2087c8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2087c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2087cc:
    // 0x2087cc: 0xc054e5c  jal         func_153970
label_2087d0:
    if (ctx->pc == 0x2087D0u) {
        ctx->pc = 0x2087D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2087CCu;
        // 0x2087d0: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2087D4u;
        goto label_2087d4;
    }
    ctx->pc = 0x2087CCu;
    SET_GPR_U32(ctx, 31, 0x2087D4u);
    ctx->pc = 0x2087D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2087CCu;
    // 0x2087d0: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x2087CCu, 0x2087D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2087D4u;
label_2087d4:
    // 0x2087d4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2087d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2087d8:
    // 0x2087d8: 0x213f021  addu        $fp, $s0, $s3
    ctx->pc = 0x2087d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_2087dc:
    // 0x2087dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2087dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2087e0:
    // 0x2087e0: 0x27c46e30  addiu       $a0, $fp, 0x6E30
    ctx->pc = 0x2087e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 28208));
label_2087e4:
    // 0x2087e4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2087e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2087e8:
    // 0x2087e8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2087e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2087ec:
    // 0x2087ec: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2087ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2087f0:
    // 0x2087f0: 0xc054e74  jal         func_1539D0
label_2087f4:
    if (ctx->pc == 0x2087F4u) {
        ctx->pc = 0x2087F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2087F0u;
        // 0x2087f4: 0x24480011  addiu       $t0, $v0, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2087F8u;
        goto label_2087f8;
    }
    ctx->pc = 0x2087F0u;
    SET_GPR_U32(ctx, 31, 0x2087F8u);
    ctx->pc = 0x2087F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2087F0u;
    // 0x2087f4: 0x24480011  addiu       $t0, $v0, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x2087F0u, 0x2087F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2087F8u;
label_2087f8:
    // 0x2087f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2087f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2087fc:
    // 0x2087fc: 0xc054e6c  jal         func_1539B0
label_208800:
    if (ctx->pc == 0x208800u) {
        ctx->pc = 0x208800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2087FCu;
        // 0x208800: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208804u;
        goto label_208804;
    }
    ctx->pc = 0x2087FCu;
    SET_GPR_U32(ctx, 31, 0x208804u);
    ctx->pc = 0x208800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2087FCu;
    // 0x208800: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539B0u, 0x2087FCu, 0x208804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208804u;
label_208804:
    // 0x208804: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x208804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_208808:
    // 0x208808: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x208808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_20880c:
    // 0x20880c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x20880cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_208810:
    // 0x208810: 0x8c22e300  lw          $v0, -0x1D00($at)
    ctx->pc = 0x208810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959872)));
label_208814:
    // 0x208814: 0x282082a  slt         $at, $s4, $v0
    ctx->pc = 0x208814u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_208818:
    // 0x208818: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
label_20881c:
    if (ctx->pc == 0x20881Cu) {
        ctx->pc = 0x20881Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208818u;
        // 0x20881c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208820u;
        goto label_208820;
    }
    ctx->pc = 0x208818u;
    {
        const bool branch_taken_0x208818 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20881Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208818u;
        // 0x20881c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208818) {
            ctx->pc = 0x2088C4u;
            goto label_2088c4;
        }
    }
    ctx->pc = 0x208820u;
label_208820:
    // 0x208820: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x208820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208824:
    // 0x208824: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x208824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_208828:
    // 0x208828: 0x3c53021  addu        $a2, $fp, $a1
    ctx->pc = 0x208828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_20882c:
    // 0x20882c: 0xa0c36eeb  sb          $v1, 0x6EEB($a2)
    ctx->pc = 0x20882cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 28395), (uint8_t)GPR_U32(ctx, 3));
label_208830:
    // 0x208830: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x208830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_208834:
    // 0x208834: 0xa0c36ed3  sb          $v1, 0x6ED3($a2)
    ctx->pc = 0x208834u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 28371), (uint8_t)GPR_U32(ctx, 3));
label_208838:
    // 0x208838: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x208838u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
label_20883c:
    // 0x20883c: 0xa0c36ebb  sb          $v1, 0x6EBB($a2)
    ctx->pc = 0x20883cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 28347), (uint8_t)GPR_U32(ctx, 3));
label_208840:
    // 0x208840: 0x24a50680  addiu       $a1, $a1, 0x680
    ctx->pc = 0x208840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1664));
label_208844:
    // 0x208844: 0xa0c36ea3  sb          $v1, 0x6EA3($a2)
    ctx->pc = 0x208844u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 28323), (uint8_t)GPR_U32(ctx, 3));
label_208848:
    // 0x208848: 0xa0c36fbb  sb          $v1, 0x6FBB($a2)
    ctx->pc = 0x208848u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 28603), (uint8_t)GPR_U32(ctx, 3));
label_20884c:
    // 0x20884c: 0xa0c36fa3  sb          $v1, 0x6FA3($a2)
    ctx->pc = 0x20884cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 28579), (uint8_t)GPR_U32(ctx, 3));
label_208850:
    // 0x208850: 0xa0c36f8b  sb          $v1, 0x6F8B($a2)
    ctx->pc = 0x208850u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 28555), (uint8_t)GPR_U32(ctx, 3));
label_208854:
    // 0x208854: 0xa0c36f73  sb          $v1, 0x6F73($a2)
    ctx->pc = 0x208854u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 28531), (uint8_t)GPR_U32(ctx, 3));
label_208858:
    // 0x208858: 0xa0c3708b  sb          $v1, 0x708B($a2)
    ctx->pc = 0x208858u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 28811), (uint8_t)GPR_U32(ctx, 3));
label_20885c:
    // 0x20885c: 0xa0c37073  sb          $v1, 0x7073($a2)
    ctx->pc = 0x20885cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 28787), (uint8_t)GPR_U32(ctx, 3));
label_208860:
    // 0x208860: 0xa0c3705b  sb          $v1, 0x705B($a2)
    ctx->pc = 0x208860u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 28763), (uint8_t)GPR_U32(ctx, 3));
label_208864:
    // 0x208864: 0xa0c37043  sb          $v1, 0x7043($a2)
    ctx->pc = 0x208864u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 28739), (uint8_t)GPR_U32(ctx, 3));
label_208868:
    // 0x208868: 0xa0c3715b  sb          $v1, 0x715B($a2)
    ctx->pc = 0x208868u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 29019), (uint8_t)GPR_U32(ctx, 3));
label_20886c:
    // 0x20886c: 0xa0c37143  sb          $v1, 0x7143($a2)
    ctx->pc = 0x20886cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 28995), (uint8_t)GPR_U32(ctx, 3));
label_208870:
    // 0x208870: 0xa0c3712b  sb          $v1, 0x712B($a2)
    ctx->pc = 0x208870u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 28971), (uint8_t)GPR_U32(ctx, 3));
label_208874:
    // 0x208874: 0xa0c37113  sb          $v1, 0x7113($a2)
    ctx->pc = 0x208874u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 28947), (uint8_t)GPR_U32(ctx, 3));
label_208878:
    // 0x208878: 0xa0c3722b  sb          $v1, 0x722B($a2)
    ctx->pc = 0x208878u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 29227), (uint8_t)GPR_U32(ctx, 3));
label_20887c:
    // 0x20887c: 0xa0c37213  sb          $v1, 0x7213($a2)
    ctx->pc = 0x20887cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 29203), (uint8_t)GPR_U32(ctx, 3));
label_208880:
    // 0x208880: 0xa0c371fb  sb          $v1, 0x71FB($a2)
    ctx->pc = 0x208880u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 29179), (uint8_t)GPR_U32(ctx, 3));
label_208884:
    // 0x208884: 0xa0c371e3  sb          $v1, 0x71E3($a2)
    ctx->pc = 0x208884u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 29155), (uint8_t)GPR_U32(ctx, 3));
label_208888:
    // 0x208888: 0xa0c372fb  sb          $v1, 0x72FB($a2)
    ctx->pc = 0x208888u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 29435), (uint8_t)GPR_U32(ctx, 3));
label_20888c:
    // 0x20888c: 0xa0c372e3  sb          $v1, 0x72E3($a2)
    ctx->pc = 0x20888cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 29411), (uint8_t)GPR_U32(ctx, 3));
label_208890:
    // 0x208890: 0xa0c372cb  sb          $v1, 0x72CB($a2)
    ctx->pc = 0x208890u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 29387), (uint8_t)GPR_U32(ctx, 3));
label_208894:
    // 0x208894: 0xa0c372b3  sb          $v1, 0x72B3($a2)
    ctx->pc = 0x208894u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 29363), (uint8_t)GPR_U32(ctx, 3));
label_208898:
    // 0x208898: 0xa0c373cb  sb          $v1, 0x73CB($a2)
    ctx->pc = 0x208898u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 29643), (uint8_t)GPR_U32(ctx, 3));
label_20889c:
    // 0x20889c: 0xa0c373b3  sb          $v1, 0x73B3($a2)
    ctx->pc = 0x20889cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 29619), (uint8_t)GPR_U32(ctx, 3));
label_2088a0:
    // 0x2088a0: 0xa0c3739b  sb          $v1, 0x739B($a2)
    ctx->pc = 0x2088a0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 29595), (uint8_t)GPR_U32(ctx, 3));
label_2088a4:
    // 0x2088a4: 0xa0c37383  sb          $v1, 0x7383($a2)
    ctx->pc = 0x2088a4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 29571), (uint8_t)GPR_U32(ctx, 3));
label_2088a8:
    // 0x2088a8: 0xa0c3749b  sb          $v1, 0x749B($a2)
    ctx->pc = 0x2088a8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 29851), (uint8_t)GPR_U32(ctx, 3));
label_2088ac:
    // 0x2088ac: 0xa0c37483  sb          $v1, 0x7483($a2)
    ctx->pc = 0x2088acu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 29827), (uint8_t)GPR_U32(ctx, 3));
label_2088b0:
    // 0x2088b0: 0xa0c3746b  sb          $v1, 0x746B($a2)
    ctx->pc = 0x2088b0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 29803), (uint8_t)GPR_U32(ctx, 3));
label_2088b4:
    // 0x2088b4: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_2088b8:
    if (ctx->pc == 0x2088B8u) {
        ctx->pc = 0x2088B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2088B4u;
        // 0x2088b8: 0xa0c37453  sb          $v1, 0x7453($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 29779), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2088BCu;
        goto label_2088bc;
    }
    ctx->pc = 0x2088B4u;
    {
        const bool branch_taken_0x2088b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2088B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2088B4u;
        // 0x2088b8: 0xa0c37453  sb          $v1, 0x7453($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 29779), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2088b4) {
            ctx->pc = 0x208828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208828;
        }
    }
    ctx->pc = 0x2088BCu;
label_2088bc:
    // 0x2088bc: 0x1000002b  b           . + 4 + (0x2B << 2)
label_2088c0:
    if (ctx->pc == 0x2088C0u) {
        ctx->pc = 0x2088C4u;
        goto label_2088c4;
    }
    ctx->pc = 0x2088BCu;
    {
        const bool branch_taken_0x2088bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2088bc) {
            ctx->pc = 0x20896Cu;
            goto label_20896c;
        }
    }
    ctx->pc = 0x2088C4u;
label_2088c4:
    // 0x2088c4: 0x0  nop
    ctx->pc = 0x2088c4u;
    // NOP
label_2088c8:
    // 0x2088c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2088c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2088cc:
    // 0x2088cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2088ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2088d0:
    // 0x2088d0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2088d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2088d4:
    // 0x2088d4: 0x0  nop
    ctx->pc = 0x2088d4u;
    // NOP
label_2088d8:
    // 0x2088d8: 0x3c42821  addu        $a1, $fp, $a0
    ctx->pc = 0x2088d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
label_2088dc:
    // 0x2088dc: 0xa0a36eeb  sb          $v1, 0x6EEB($a1)
    ctx->pc = 0x2088dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 28395), (uint8_t)GPR_U32(ctx, 3));
label_2088e0:
    // 0x2088e0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2088e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_2088e4:
    // 0x2088e4: 0xa0a36ed3  sb          $v1, 0x6ED3($a1)
    ctx->pc = 0x2088e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 28371), (uint8_t)GPR_U32(ctx, 3));
label_2088e8:
    // 0x2088e8: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x2088e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
label_2088ec:
    // 0x2088ec: 0xa0a36ebb  sb          $v1, 0x6EBB($a1)
    ctx->pc = 0x2088ecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 28347), (uint8_t)GPR_U32(ctx, 3));
label_2088f0:
    // 0x2088f0: 0x24840680  addiu       $a0, $a0, 0x680
    ctx->pc = 0x2088f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1664));
label_2088f4:
    // 0x2088f4: 0xa0a36ea3  sb          $v1, 0x6EA3($a1)
    ctx->pc = 0x2088f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 28323), (uint8_t)GPR_U32(ctx, 3));
label_2088f8:
    // 0x2088f8: 0xa0a36fbb  sb          $v1, 0x6FBB($a1)
    ctx->pc = 0x2088f8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 28603), (uint8_t)GPR_U32(ctx, 3));
label_2088fc:
    // 0x2088fc: 0xa0a36fa3  sb          $v1, 0x6FA3($a1)
    ctx->pc = 0x2088fcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 28579), (uint8_t)GPR_U32(ctx, 3));
label_208900:
    // 0x208900: 0xa0a36f8b  sb          $v1, 0x6F8B($a1)
    ctx->pc = 0x208900u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 28555), (uint8_t)GPR_U32(ctx, 3));
label_208904:
    // 0x208904: 0xa0a36f73  sb          $v1, 0x6F73($a1)
    ctx->pc = 0x208904u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 28531), (uint8_t)GPR_U32(ctx, 3));
label_208908:
    // 0x208908: 0xa0a3708b  sb          $v1, 0x708B($a1)
    ctx->pc = 0x208908u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 28811), (uint8_t)GPR_U32(ctx, 3));
label_20890c:
    // 0x20890c: 0xa0a37073  sb          $v1, 0x7073($a1)
    ctx->pc = 0x20890cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 28787), (uint8_t)GPR_U32(ctx, 3));
label_208910:
    // 0x208910: 0xa0a3705b  sb          $v1, 0x705B($a1)
    ctx->pc = 0x208910u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 28763), (uint8_t)GPR_U32(ctx, 3));
label_208914:
    // 0x208914: 0xa0a37043  sb          $v1, 0x7043($a1)
    ctx->pc = 0x208914u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 28739), (uint8_t)GPR_U32(ctx, 3));
label_208918:
    // 0x208918: 0xa0a3715b  sb          $v1, 0x715B($a1)
    ctx->pc = 0x208918u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 29019), (uint8_t)GPR_U32(ctx, 3));
label_20891c:
    // 0x20891c: 0xa0a37143  sb          $v1, 0x7143($a1)
    ctx->pc = 0x20891cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 28995), (uint8_t)GPR_U32(ctx, 3));
label_208920:
    // 0x208920: 0xa0a3712b  sb          $v1, 0x712B($a1)
    ctx->pc = 0x208920u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 28971), (uint8_t)GPR_U32(ctx, 3));
label_208924:
    // 0x208924: 0xa0a37113  sb          $v1, 0x7113($a1)
    ctx->pc = 0x208924u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 28947), (uint8_t)GPR_U32(ctx, 3));
label_208928:
    // 0x208928: 0xa0a3722b  sb          $v1, 0x722B($a1)
    ctx->pc = 0x208928u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 29227), (uint8_t)GPR_U32(ctx, 3));
label_20892c:
    // 0x20892c: 0xa0a37213  sb          $v1, 0x7213($a1)
    ctx->pc = 0x20892cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 29203), (uint8_t)GPR_U32(ctx, 3));
label_208930:
    // 0x208930: 0xa0a371fb  sb          $v1, 0x71FB($a1)
    ctx->pc = 0x208930u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 29179), (uint8_t)GPR_U32(ctx, 3));
label_208934:
    // 0x208934: 0xa0a371e3  sb          $v1, 0x71E3($a1)
    ctx->pc = 0x208934u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 29155), (uint8_t)GPR_U32(ctx, 3));
label_208938:
    // 0x208938: 0xa0a372fb  sb          $v1, 0x72FB($a1)
    ctx->pc = 0x208938u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 29435), (uint8_t)GPR_U32(ctx, 3));
label_20893c:
    // 0x20893c: 0xa0a372e3  sb          $v1, 0x72E3($a1)
    ctx->pc = 0x20893cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 29411), (uint8_t)GPR_U32(ctx, 3));
label_208940:
    // 0x208940: 0xa0a372cb  sb          $v1, 0x72CB($a1)
    ctx->pc = 0x208940u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 29387), (uint8_t)GPR_U32(ctx, 3));
label_208944:
    // 0x208944: 0xa0a372b3  sb          $v1, 0x72B3($a1)
    ctx->pc = 0x208944u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 29363), (uint8_t)GPR_U32(ctx, 3));
label_208948:
    // 0x208948: 0xa0a373cb  sb          $v1, 0x73CB($a1)
    ctx->pc = 0x208948u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 29643), (uint8_t)GPR_U32(ctx, 3));
label_20894c:
    // 0x20894c: 0xa0a373b3  sb          $v1, 0x73B3($a1)
    ctx->pc = 0x20894cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 29619), (uint8_t)GPR_U32(ctx, 3));
label_208950:
    // 0x208950: 0xa0a3739b  sb          $v1, 0x739B($a1)
    ctx->pc = 0x208950u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 29595), (uint8_t)GPR_U32(ctx, 3));
label_208954:
    // 0x208954: 0xa0a37383  sb          $v1, 0x7383($a1)
    ctx->pc = 0x208954u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 29571), (uint8_t)GPR_U32(ctx, 3));
label_208958:
    // 0x208958: 0xa0a3749b  sb          $v1, 0x749B($a1)
    ctx->pc = 0x208958u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 29851), (uint8_t)GPR_U32(ctx, 3));
label_20895c:
    // 0x20895c: 0xa0a37483  sb          $v1, 0x7483($a1)
    ctx->pc = 0x20895cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 29827), (uint8_t)GPR_U32(ctx, 3));
label_208960:
    // 0x208960: 0xa0a3746b  sb          $v1, 0x746B($a1)
    ctx->pc = 0x208960u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 29803), (uint8_t)GPR_U32(ctx, 3));
label_208964:
    // 0x208964: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
label_208968:
    if (ctx->pc == 0x208968u) {
        ctx->pc = 0x208968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208964u;
        // 0x208968: 0xa0a37453  sb          $v1, 0x7453($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 29779), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20896Cu;
        goto label_20896c;
    }
    ctx->pc = 0x208964u;
    {
        const bool branch_taken_0x208964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208964u;
        // 0x208968: 0xa0a37453  sb          $v1, 0x7453($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 29779), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208964) {
            ctx->pc = 0x2088D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2088d4;
        }
    }
    ctx->pc = 0x20896Cu;
label_20896c:
    // 0x20896c: 0x0  nop
    ctx->pc = 0x20896cu;
    // NOP
label_208970:
    // 0x208970: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x208970u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_208974:
    // 0x208974: 0x2a820008  slti        $v0, $s4, 0x8
    ctx->pc = 0x208974u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
label_208978:
    // 0x208978: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x208978u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_20897c:
    // 0x20897c: 0x26d600a0  addiu       $s6, $s6, 0xA0
    ctx->pc = 0x20897cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 160));
label_208980:
    // 0x208980: 0x26b500d0  addiu       $s5, $s5, 0xD0
    ctx->pc = 0x208980u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
label_208984:
    // 0x208984: 0x26520011  addiu       $s2, $s2, 0x11
    ctx->pc = 0x208984u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 17));
label_208988:
    // 0x208988: 0x1440ff5e  bnez        $v0, . + 4 + (-0xA2 << 2)
label_20898c:
    if (ctx->pc == 0x20898Cu) {
        ctx->pc = 0x20898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208988u;
        // 0x20898c: 0x26730d00  addiu       $s3, $s3, 0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208990u;
        goto label_208990;
    }
    ctx->pc = 0x208988u;
    {
        const bool branch_taken_0x208988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208988u;
        // 0x20898c: 0x26730d00  addiu       $s3, $s3, 0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208988) {
            ctx->pc = 0x208704u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x208704; return; }
        }
    }
    ctx->pc = 0x208990u;
label_208990:
    // 0x208990: 0x26e20118  addiu       $v0, $s7, 0x118
    ctx->pc = 0x208990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 280));
label_208994:
    // 0x208994: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x208994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_208998:
    // 0x208998: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x208998u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20899c:
    // 0x20899c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x20899cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_2089a0:
    // 0x2089a0: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x2089a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
label_2089a4:
    // 0x2089a4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2089a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2089a8:
    // 0x2089a8: 0xa424d6b0  sh          $a0, -0x2950($at)
    ctx->pc = 0x2089a8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294956720), (uint16_t)GPR_U32(ctx, 4));
label_2089ac:
    // 0x2089ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2089acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2089b0:
    // 0x2089b0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2089b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2089b4:
    // 0x2089b4: 0x340382b0  ori         $v1, $zero, 0x82B0
    ctx->pc = 0x2089b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33456);
label_2089b8:
    // 0x2089b8: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2089b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_2089bc:
    // 0x2089bc: 0x3404fe00  ori         $a0, $zero, 0xFE00
    ctx->pc = 0x2089bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_2089c0:
    // 0x2089c0: 0xa423d6b2  sh          $v1, -0x294E($at)
    ctx->pc = 0x2089c0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294956722), (uint16_t)GPR_U32(ctx, 3));
label_2089c4:
    // 0x2089c4: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x2089c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_2089c8:
    // 0x2089c8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2089c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2089cc:
    // 0x2089cc: 0x34038330  ori         $v1, $zero, 0x8330
    ctx->pc = 0x2089ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33584);
label_2089d0:
    // 0x2089d0: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2089d0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_2089d4:
    // 0x2089d4: 0xac24d6b4  sw          $a0, -0x294C($at)
    ctx->pc = 0x2089d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956724), GPR_U32(ctx, 4));
label_2089d8:
    // 0x2089d8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2089d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2089dc:
    // 0x2089dc: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2089dcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_2089e0:
    // 0x2089e0: 0xa422d6c0  sh          $v0, -0x2940($at)
    ctx->pc = 0x2089e0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294956736), (uint16_t)GPR_U32(ctx, 2));
label_2089e4:
    // 0x2089e4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2089e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2089e8:
    // 0x2089e8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2089e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2089ec:
    // 0x2089ec: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2089ecu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_2089f0:
    // 0x2089f0: 0xa423d6c2  sh          $v1, -0x293E($at)
    ctx->pc = 0x2089f0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294956738), (uint16_t)GPR_U32(ctx, 3));
label_2089f4:
    // 0x2089f4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2089f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2089f8:
    // 0x2089f8: 0x3443e31c  ori         $v1, $v0, 0xE31C
    ctx->pc = 0x2089f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58140);
label_2089fc:
    // 0x2089fc: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2089fcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_208a00:
    // 0x208a00: 0xac24d6c4  sw          $a0, -0x293C($at)
    ctx->pc = 0x208a00u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956740), GPR_U32(ctx, 4));
label_208a04:
    // 0x208a04: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x208a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_208a08:
    // 0x208a08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x208a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_208a0c:
    // 0x208a0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x208a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_208a10:
    // 0x208a10: 0x2841000f  slti        $at, $v0, 0xF
    ctx->pc = 0x208a10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
label_208a14:
    // 0x208a14: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
label_208a18:
    if (ctx->pc == 0x208A18u) {
        ctx->pc = 0x208A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A14u;
        // 0x208a18: 0x3401d6d0  ori         $at, $zero, 0xD6D0 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54992);
        ctx->in_delay_slot = false;
        ctx->pc = 0x208A1Cu;
        goto label_208a1c;
    }
    ctx->pc = 0x208A14u;
    {
        const bool branch_taken_0x208a14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x208A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A14u;
        // 0x208a18: 0x3401d6d0  ori         $at, $zero, 0xD6D0 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54992);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a14) {
            ctx->pc = 0x208AA4u;
            goto label_208aa4;
        }
    }
    ctx->pc = 0x208A1Cu;
label_208a1c:
    // 0x208a1c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x208a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_208a20:
    // 0x208a20: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x208a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_208a24:
    // 0x208a24: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x208a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_208a28:
    // 0x208a28: 0x24423330  addiu       $v0, $v0, 0x3330
    ctx->pc = 0x208a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13104));
label_208a2c:
    // 0x208a2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x208a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_208a30:
    // 0x208a30: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x208a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_208a34:
    // 0x208a34: 0xc055148  jal         func_154520
label_208a38:
    if (ctx->pc == 0x208A38u) {
        ctx->pc = 0x208A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A34u;
        // 0x208a38: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208A3Cu;
        goto label_208a3c;
    }
    ctx->pc = 0x208A34u;
    SET_GPR_U32(ctx, 31, 0x208A3Cu);
    ctx->pc = 0x208A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208A34u;
    // 0x208a38: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154520u, 0x208A34u, 0x208A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208A3Cu;
label_208a3c:
    // 0x208a3c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x208a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_208a40:
    // 0x208a40: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x208a40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_208a44:
    // 0x208a44: 0x26e80118  addiu       $t0, $s7, 0x118
    ctx->pc = 0x208a44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 280));
label_208a48:
    // 0x208a48: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x208a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_208a4c:
    // 0x208a4c: 0xe2280a  movz        $a1, $a3, $v0
    ctx->pc = 0x208a4cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
label_208a50:
    // 0x208a50: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x208a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_208a54:
    // 0x208a54: 0x24090146  addiu       $t1, $zero, 0x146
    ctx->pc = 0x208a54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 326));
label_208a58:
    // 0x208a58: 0xc054e5c  jal         func_153970
label_208a5c:
    if (ctx->pc == 0x208A5Cu) {
        ctx->pc = 0x208A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A58u;
        // 0x208a5c: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x208A60u;
        goto label_208a60;
    }
    ctx->pc = 0x208A58u;
    SET_GPR_U32(ctx, 31, 0x208A60u);
    ctx->pc = 0x208A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208A58u;
    // 0x208a5c: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x208A58u, 0x208A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208A60u;
label_208a60:
    // 0x208a60: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x208a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_208a64:
    // 0x208a64: 0x3401d6d0  ori         $at, $zero, 0xD6D0
    ctx->pc = 0x208a64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54992);
label_208a68:
    // 0x208a68: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x208a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_208a6c:
    // 0x208a6c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x208a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_208a70:
    // 0x208a70: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x208a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_208a74:
    // 0x208a74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x208a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208a78:
    // 0x208a78: 0x24423330  addiu       $v0, $v0, 0x3330
    ctx->pc = 0x208a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13104));
label_208a7c:
    // 0x208a7c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x208a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_208a80:
    // 0x208a80: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x208a80u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_208a84:
    // 0x208a84: 0x8c23e31c  lw          $v1, -0x1CE4($at)
    ctx->pc = 0x208a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959900)));
label_208a88:
    // 0x208a88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x208a88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_208a8c:
    // 0x208a8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x208a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_208a90:
    // 0x208a90: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x208a90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_208a94:
    // 0x208a94: 0xc054e74  jal         func_1539D0
label_208a98:
    if (ctx->pc == 0x208A98u) {
        ctx->pc = 0x208A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A94u;
        // 0x208a98: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208A9Cu;
        goto label_208a9c;
    }
    ctx->pc = 0x208A94u;
    SET_GPR_U32(ctx, 31, 0x208A9Cu);
    ctx->pc = 0x208A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208A94u;
    // 0x208a98: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x208A94u, 0x208A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208A9Cu;
label_208a9c:
    // 0x208a9c: 0x10000009  b           . + 4 + (0x9 << 2)
label_208aa0:
    if (ctx->pc == 0x208AA0u) {
        ctx->pc = 0x208AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A9Cu;
        // 0x208aa0: 0x26e20118  addiu       $v0, $s7, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208AA4u;
        goto label_208aa4;
    }
    ctx->pc = 0x208A9Cu;
    {
        const bool branch_taken_0x208a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A9Cu;
        // 0x208aa0: 0x26e20118  addiu       $v0, $s7, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a9c) {
            ctx->pc = 0x208AC4u;
            goto label_208ac4;
        }
    }
    ctx->pc = 0x208AA4u;
label_208aa4:
    // 0x208aa4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x208aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208aa8:
    // 0x208aa8: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x208aa8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_208aac:
    // 0x208aac: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x208aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_208ab0:
    // 0x208ab0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x208ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_208ab4:
    // 0x208ab4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x208ab4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_208ab8:
    // 0x208ab8: 0xc054e74  jal         func_1539D0
label_208abc:
    if (ctx->pc == 0x208ABCu) {
        ctx->pc = 0x208ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AB8u;
        // 0x208abc: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208AC0u;
        goto label_208ac0;
    }
    ctx->pc = 0x208AB8u;
    SET_GPR_U32(ctx, 31, 0x208AC0u);
    ctx->pc = 0x208ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208AB8u;
    // 0x208abc: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x208AB8u, 0x208AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208AC0u;
label_208ac0:
    // 0x208ac0: 0x26e20118  addiu       $v0, $s7, 0x118
    ctx->pc = 0x208ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 280));
label_208ac4:
    // 0x208ac4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x208ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_208ac8:
    // 0x208ac8: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x208ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_208acc:
    // 0x208acc: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x208accu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_208ad0:
    // 0x208ad0: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x208ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
label_208ad4:
    // 0x208ad4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x208ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_208ad8:
    // 0x208ad8: 0xa424e450  sh          $a0, -0x1BB0($at)
    ctx->pc = 0x208ad8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294960208), (uint16_t)GPR_U32(ctx, 4));
label_208adc:
    // 0x208adc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x208adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_208ae0:
    // 0x208ae0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x208ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_208ae4:
    // 0x208ae4: 0x34038440  ori         $v1, $zero, 0x8440
    ctx->pc = 0x208ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33856);
label_208ae8:
    // 0x208ae8: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x208ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_208aec:
    // 0x208aec: 0x3404fe00  ori         $a0, $zero, 0xFE00
    ctx->pc = 0x208aecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_208af0:
    // 0x208af0: 0xa423e452  sh          $v1, -0x1BAE($at)
    ctx->pc = 0x208af0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294960210), (uint16_t)GPR_U32(ctx, 3));
label_208af4:
    // 0x208af4: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x208af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_208af8:
    // 0x208af8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x208af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_208afc:
    // 0x208afc: 0x340384c0  ori         $v1, $zero, 0x84C0
    ctx->pc = 0x208afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33984);
label_208b00:
    // 0x208b00: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x208b00u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_208b04:
    // 0x208b04: 0xac24e454  sw          $a0, -0x1BAC($at)
    ctx->pc = 0x208b04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960212), GPR_U32(ctx, 4));
label_208b08:
    // 0x208b08: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x208b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_208b0c:
    // 0x208b0c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x208b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_208b10:
    // 0x208b10: 0xa422e460  sh          $v0, -0x1BA0($at)
    ctx->pc = 0x208b10u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294960224), (uint16_t)GPR_U32(ctx, 2));
label_208b14:
    // 0x208b14: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x208b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_208b18:
    // 0x208b18: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x208b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_208b1c:
    // 0x208b1c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x208b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_208b20:
    // 0x208b20: 0xa423e462  sh          $v1, -0x1B9E($at)
    ctx->pc = 0x208b20u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294960226), (uint16_t)GPR_U32(ctx, 3));
label_208b24:
    // 0x208b24: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x208b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_208b28:
    // 0x208b28: 0x3443e320  ori         $v1, $v0, 0xE320
    ctx->pc = 0x208b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58144);
label_208b2c:
    // 0x208b2c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x208b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_208b30:
    // 0x208b30: 0xac24e464  sw          $a0, -0x1B9C($at)
    ctx->pc = 0x208b30u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960228), GPR_U32(ctx, 4));
label_208b34:
    // 0x208b34: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x208b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_208b38:
    // 0x208b38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x208b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_208b3c:
    // 0x208b3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x208b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_208b40:
    // 0x208b40: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x208b40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
label_208b44:
    // 0x208b44: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
label_208b48:
    if (ctx->pc == 0x208B48u) {
        ctx->pc = 0x208B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B44u;
        // 0x208b48: 0x3401e470  ori         $at, $zero, 0xE470 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58480);
        ctx->in_delay_slot = false;
        ctx->pc = 0x208B4Cu;
        goto label_208b4c;
    }
    ctx->pc = 0x208B44u;
    {
        const bool branch_taken_0x208b44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x208B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B44u;
        // 0x208b48: 0x3401e470  ori         $at, $zero, 0xE470 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58480);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208b44) {
            ctx->pc = 0x208BD4u;
            goto label_208bd4;
        }
    }
    ctx->pc = 0x208B4Cu;
label_208b4c:
    // 0x208b4c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x208b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_208b50:
    // 0x208b50: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x208b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_208b54:
    // 0x208b54: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x208b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_208b58:
    // 0x208b58: 0x24423020  addiu       $v0, $v0, 0x3020
    ctx->pc = 0x208b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12320));
label_208b5c:
    // 0x208b5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x208b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_208b60:
    // 0x208b60: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x208b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_208b64:
    // 0x208b64: 0xc055148  jal         func_154520
label_208b68:
    if (ctx->pc == 0x208B68u) {
        ctx->pc = 0x208B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B64u;
        // 0x208b68: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208B6Cu;
        goto label_208b6c;
    }
    ctx->pc = 0x208B64u;
    SET_GPR_U32(ctx, 31, 0x208B6Cu);
    ctx->pc = 0x208B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208B64u;
    // 0x208b68: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154520u, 0x208B64u, 0x208B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208B6Cu;
label_208b6c:
    // 0x208b6c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x208b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_208b70:
    // 0x208b70: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x208b70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_208b74:
    // 0x208b74: 0x26e80118  addiu       $t0, $s7, 0x118
    ctx->pc = 0x208b74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 280));
label_208b78:
    // 0x208b78: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x208b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_208b7c:
    // 0x208b7c: 0xe2280a  movz        $a1, $a3, $v0
    ctx->pc = 0x208b7cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
label_208b80:
    // 0x208b80: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x208b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_208b84:
    // 0x208b84: 0x24090178  addiu       $t1, $zero, 0x178
    ctx->pc = 0x208b84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 376));
label_208b88:
    // 0x208b88: 0xc054e5c  jal         func_153970
label_208b8c:
    if (ctx->pc == 0x208B8Cu) {
        ctx->pc = 0x208B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B88u;
        // 0x208b8c: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x208B90u;
        goto label_208b90;
    }
    ctx->pc = 0x208B88u;
    SET_GPR_U32(ctx, 31, 0x208B90u);
    ctx->pc = 0x208B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208B88u;
    // 0x208b8c: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x208B88u, 0x208B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208B90u;
label_208b90:
    // 0x208b90: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x208b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_208b94:
    // 0x208b94: 0x3401e470  ori         $at, $zero, 0xE470
    ctx->pc = 0x208b94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58480);
label_208b98:
    // 0x208b98: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x208b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_208b9c:
    // 0x208b9c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x208b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_208ba0:
    // 0x208ba0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x208ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_208ba4:
    // 0x208ba4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x208ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208ba8:
    // 0x208ba8: 0x24423020  addiu       $v0, $v0, 0x3020
    ctx->pc = 0x208ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12320));
label_208bac:
    // 0x208bac: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x208bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_208bb0:
    // 0x208bb0: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x208bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_208bb4:
    // 0x208bb4: 0x8c23e320  lw          $v1, -0x1CE0($at)
    ctx->pc = 0x208bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959904)));
label_208bb8:
    // 0x208bb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x208bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_208bbc:
    // 0x208bbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x208bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_208bc0:
    // 0x208bc0: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x208bc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_208bc4:
    // 0x208bc4: 0xc054e74  jal         func_1539D0
label_208bc8:
    if (ctx->pc == 0x208BC8u) {
        ctx->pc = 0x208BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BC4u;
        // 0x208bc8: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208BCCu;
        goto label_208bcc;
    }
    ctx->pc = 0x208BC4u;
    SET_GPR_U32(ctx, 31, 0x208BCCu);
    ctx->pc = 0x208BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208BC4u;
    // 0x208bc8: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x208BC4u, 0x208BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208BCCu;
label_208bcc:
    // 0x208bcc: 0x10000009  b           . + 4 + (0x9 << 2)
label_208bd0:
    if (ctx->pc == 0x208BD0u) {
        ctx->pc = 0x208BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BCCu;
        // 0x208bd0: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208BD4u;
        goto label_208bd4;
    }
    ctx->pc = 0x208BCCu;
    {
        const bool branch_taken_0x208bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BCCu;
        // 0x208bd0: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208bcc) {
            ctx->pc = 0x208BF4u;
            goto label_208bf4;
        }
    }
    ctx->pc = 0x208BD4u;
label_208bd4:
    // 0x208bd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x208bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208bd8:
    // 0x208bd8: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x208bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_208bdc:
    // 0x208bdc: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x208bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_208be0:
    // 0x208be0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x208be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_208be4:
    // 0x208be4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x208be4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_208be8:
    // 0x208be8: 0xc054e74  jal         func_1539D0
label_208bec:
    if (ctx->pc == 0x208BECu) {
        ctx->pc = 0x208BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BE8u;
        // 0x208bec: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208BF0u;
        goto label_208bf0;
    }
    ctx->pc = 0x208BE8u;
    SET_GPR_U32(ctx, 31, 0x208BF0u);
    ctx->pc = 0x208BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208BE8u;
    // 0x208bec: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x208BE8u, 0x208BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208BF0u;
label_208bf0:
    // 0x208bf0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x208bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_208bf4:
    // 0x208bf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x208bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_208bf8:
    // 0x208bf8: 0x24060f17  addiu       $a2, $zero, 0xF17
    ctx->pc = 0x208bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3863));
label_208bfc:
    // 0x208bfc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x208bfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208c00:
    // 0x208c00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x208c00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208c04:
    // 0x208c04: 0xc066c72  jal         func_19B1C8
label_208c08:
    if (ctx->pc == 0x208C08u) {
        ctx->pc = 0x208C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C04u;
        // 0x208c08: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208C0Cu;
        goto label_208c0c;
    }
    ctx->pc = 0x208C04u;
    SET_GPR_U32(ctx, 31, 0x208C0Cu);
    ctx->pc = 0x208C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208C04u;
    // 0x208c08: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x208C04u, 0x208C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208C0Cu;
label_208c0c:
    // 0x208c0c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x208c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_208c10:
    // 0x208c10: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x208c10u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_208c14:
    // 0x208c14: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x208c14u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_208c18:
    // 0x208c18: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x208c18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_208c1c:
    // 0x208c1c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x208c1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_208c20:
    // 0x208c20: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x208c20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_208c24:
    // 0x208c24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x208c24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_208c28:
    // 0x208c28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x208c28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_208c2c:
    // 0x208c2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x208c2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_208c30:
    // 0x208c30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x208c30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_208c34:
    // 0x208c34: 0x3e00008  jr          $ra
label_208c38:
    if (ctx->pc == 0x208C38u) {
        ctx->pc = 0x208C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C34u;
        // 0x208c38: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208C3Cu;
        goto label_208c3c;
    }
    ctx->pc = 0x208C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C34u;
        // 0x208c38: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208C3Cu;
label_208c3c:
    // 0x208c3c: 0x0  nop
    ctx->pc = 0x208c3cu;
    // NOP
label_208c40:
    // 0x208c40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x208c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_208c44:
    // 0x208c44: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x208c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_208c48:
    // 0x208c48: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x208c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_208c4c:
    // 0x208c4c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x208c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_208c50:
    // 0x208c50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x208c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_208c54:
    // 0x208c54: 0x24140009  addiu       $s4, $zero, 0x9
    ctx->pc = 0x208c54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_208c58:
    // 0x208c58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x208c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_208c5c:
    // 0x208c5c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x208c5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208c60:
    // 0x208c60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x208c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_208c64:
    // 0x208c64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x208c64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_208c68:
    // 0x208c68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x208c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_208c6c:
    // 0x208c6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x208c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208c70:
    // 0x208c70: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x208c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_208c74:
    // 0x208c74: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x208c74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208c78:
    // 0x208c78: 0xc0825bc  jal         func_2096F0
label_208c7c:
    if (ctx->pc == 0x208C7Cu) {
        ctx->pc = 0x208C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C78u;
        // 0x208c7c: 0xac5357f4  sw          $s3, 0x57F4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22516), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208C80u;
        goto label_208c80;
    }
    ctx->pc = 0x208C78u;
    SET_GPR_U32(ctx, 31, 0x208C80u);
    ctx->pc = 0x208C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208C78u;
    // 0x208c7c: 0xac5357f4  sw          $s3, 0x57F4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 22516), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2096F0u;
    { ctx->pc = 0x2096f0; return; }
    ctx->pc = 0x208C80u;
label_208c80:
    // 0x208c80: 0xc078050  jal         func_1E0140
label_208c84:
    if (ctx->pc == 0x208C84u) {
        ctx->pc = 0x208C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C80u;
        // 0x208c84: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208C88u;
        goto label_208c88;
    }
    ctx->pc = 0x208C80u;
    SET_GPR_U32(ctx, 31, 0x208C88u);
    ctx->pc = 0x208C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208C80u;
    // 0x208c84: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x208C88u;
label_208c88:
    // 0x208c88: 0xc078070  jal         func_1E01C0
label_208c8c:
    if (ctx->pc == 0x208C8Cu) {
        ctx->pc = 0x208C90u;
        goto label_208c90;
    }
    ctx->pc = 0x208C88u;
    SET_GPR_U32(ctx, 31, 0x208C90u);
    ctx->pc = 0x1E01C0u;
    { ctx->pc = 0x1e01c0; return; }
    ctx->pc = 0x208C90u;
label_208c90:
    // 0x208c90: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x208c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_208c94:
    // 0x208c94: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x208c94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_208c98:
    // 0x208c98: 0x10000003  b           . + 4 + (0x3 << 2)
label_208c9c:
    if (ctx->pc == 0x208C9Cu) {
        ctx->pc = 0x208C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C98u;
        // 0x208c9c: 0xac435720  sw          $v1, 0x5720($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22304), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208CA0u;
        goto label_208ca0;
    }
    ctx->pc = 0x208C98u;
    {
        const bool branch_taken_0x208c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C98u;
        // 0x208c9c: 0xac435720  sw          $v1, 0x5720($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22304), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c98) {
            ctx->pc = 0x208CA8u;
            goto label_208ca8;
        }
    }
    ctx->pc = 0x208CA0u;
label_208ca0:
    // 0x208ca0: 0xc07b48c  jal         func_1ED230
label_208ca4:
    if (ctx->pc == 0x208CA4u) {
        ctx->pc = 0x208CA8u;
        goto label_208ca8;
    }
    ctx->pc = 0x208CA0u;
    SET_GPR_U32(ctx, 31, 0x208CA8u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x208CA8u;
label_208ca8:
    // 0x208ca8: 0x8f839100  lw          $v1, -0x6F00($gp)
    ctx->pc = 0x208ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_208cac:
    // 0x208cac: 0x8c625720  lw          $v0, 0x5720($v1)
    ctx->pc = 0x208cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22304)));
label_208cb0:
    // 0x208cb0: 0x0  nop
    ctx->pc = 0x208cb0u;
    // NOP
label_208cb4:
    // 0x208cb4: 0x0  nop
    ctx->pc = 0x208cb4u;
    // NOP
label_208cb8:
    // 0x208cb8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_208cbc:
    if (ctx->pc == 0x208CBCu) {
        ctx->pc = 0x208CC0u;
        goto label_208cc0;
    }
    ctx->pc = 0x208CB8u;
    {
        const bool branch_taken_0x208cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208cb8) {
            ctx->pc = 0x208CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208ca0;
        }
    }
    ctx->pc = 0x208CC0u;
label_208cc0:
    // 0x208cc0: 0xac6057ec  sw          $zero, 0x57EC($v1)
    ctx->pc = 0x208cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22508), GPR_U32(ctx, 0));
label_208cc4:
    // 0x208cc4: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x208cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_208cc8:
    // 0x208cc8: 0x8c555734  lw          $s5, 0x5734($v0)
    ctx->pc = 0x208cc8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22324)));
label_208ccc:
    // 0x208ccc: 0x2aa10028  slti        $at, $s5, 0x28
    ctx->pc = 0x208cccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)40) ? 1 : 0);
label_208cd0:
    // 0x208cd0: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_208cd4:
    if (ctx->pc == 0x208CD4u) {
        ctx->pc = 0x208CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CD0u;
        // 0x208cd4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208CD8u;
        goto label_208cd8;
    }
    ctx->pc = 0x208CD0u;
    {
        const bool branch_taken_0x208cd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x208CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CD0u;
        // 0x208cd4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208cd0) {
            ctx->pc = 0x208D20u;
            goto label_208d20;
        }
    }
    ctx->pc = 0x208CD8u;
label_208cd8:
    // 0x208cd8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x208cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_208cdc:
    // 0x208cdc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x208cdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_208ce0:
    // 0x208ce0: 0x24070198  addiu       $a3, $zero, 0x198
    ctx->pc = 0x208ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
label_208ce4:
    // 0x208ce4: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x208ce4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_208ce8:
    // 0x208ce8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x208ce8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208cec:
    // 0x208cec: 0xc07f734  jal         func_1FDCD0
label_208cf0:
    if (ctx->pc == 0x208CF0u) {
        ctx->pc = 0x208CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CECu;
        // 0x208cf0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208CF4u;
        goto label_208cf4;
    }
    ctx->pc = 0x208CECu;
    SET_GPR_U32(ctx, 31, 0x208CF4u);
    ctx->pc = 0x208CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208CECu;
    // 0x208cf0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDCD0u;
    { ctx->pc = 0x1fdcd0; return; }
    ctx->pc = 0x208CF4u;
label_208cf4:
    // 0x208cf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x208cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208cf8:
    // 0x208cf8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x208cf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_208cfc:
    // 0x208cfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x208cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_208d00:
    // 0x208d00: 0x240600ab  addiu       $a2, $zero, 0xAB
    ctx->pc = 0x208d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_208d04:
    // 0x208d04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x208d04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208d08:
    // 0x208d08: 0x24090198  addiu       $t1, $zero, 0x198
    ctx->pc = 0x208d08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
label_208d0c:
    // 0x208d0c: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x208d0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_208d10:
    // 0x208d10: 0xc07f47c  jal         func_1FD1F0
label_208d14:
    if (ctx->pc == 0x208D14u) {
        ctx->pc = 0x208D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D10u;
        // 0x208d14: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208D18u;
        goto label_208d18;
    }
    ctx->pc = 0x208D10u;
    SET_GPR_U32(ctx, 31, 0x208D18u);
    ctx->pc = 0x208D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208D10u;
    // 0x208d14: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD1F0u;
    { ctx->pc = 0x1fd1f0; return; }
    ctx->pc = 0x208D18u;
label_208d18:
    // 0x208d18: 0x10000006  b           . + 4 + (0x6 << 2)
label_208d1c:
    if (ctx->pc == 0x208D1Cu) {
        ctx->pc = 0x208D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D18u;
        // 0x208d1c: 0x8f828f44  lw          $v0, -0x70BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208D20u;
        goto label_208d20;
    }
    ctx->pc = 0x208D18u;
    {
        const bool branch_taken_0x208d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D18u;
        // 0x208d1c: 0x8f828f44  lw          $v0, -0x70BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208d18) {
            ctx->pc = 0x208D34u;
            goto label_208d34;
        }
    }
    ctx->pc = 0x208D20u;
label_208d20:
    // 0x208d20: 0xc07f708  jal         func_1FDC20
label_208d24:
    if (ctx->pc == 0x208D24u) {
        ctx->pc = 0x208D28u;
        goto label_208d28;
    }
    ctx->pc = 0x208D20u;
    SET_GPR_U32(ctx, 31, 0x208D28u);
    ctx->pc = 0x1FDC20u;
    { ctx->pc = 0x1fdc20; return; }
    ctx->pc = 0x208D28u;
label_208d28:
    // 0x208d28: 0xc07f468  jal         func_1FD1A0
label_208d2c:
    if (ctx->pc == 0x208D2Cu) {
        ctx->pc = 0x208D30u;
        goto label_208d30;
    }
    ctx->pc = 0x208D28u;
    SET_GPR_U32(ctx, 31, 0x208D30u);
    ctx->pc = 0x1FD1A0u;
    { ctx->pc = 0x1fd1a0; return; }
    ctx->pc = 0x208D30u;
label_208d30:
    // 0x208d30: 0x8f828f44  lw          $v0, -0x70BC($gp)
    ctx->pc = 0x208d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
label_208d34:
    // 0x208d34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_208d38:
    if (ctx->pc == 0x208D38u) {
        ctx->pc = 0x208D3Cu;
        goto label_208d3c;
    }
    ctx->pc = 0x208D34u;
    {
        const bool branch_taken_0x208d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208d34) {
            ctx->pc = 0x208D44u;
            goto label_208d44;
        }
    }
    ctx->pc = 0x208D3Cu;
label_208d3c:
    // 0x208d3c: 0x10000252  b           . + 4 + (0x252 << 2)
label_208d40:
    if (ctx->pc == 0x208D40u) {
        ctx->pc = 0x208D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D3Cu;
        // 0x208d40: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208D44u;
        goto label_208d44;
    }
    ctx->pc = 0x208D3Cu;
    {
        const bool branch_taken_0x208d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D3Cu;
        // 0x208d40: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208d3c) {
            ctx->pc = 0x209688u;
            { ctx->pc = 0x209688; return; }
        }
    }
    ctx->pc = 0x208D44u;
label_208d44:
    // 0x208d44: 0x8f828f40  lw          $v0, -0x70C0($gp)
    ctx->pc = 0x208d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938432)));
label_208d48:
    // 0x208d48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_208d4c:
    if (ctx->pc == 0x208D4Cu) {
        ctx->pc = 0x208D50u;
        goto label_208d50;
    }
    ctx->pc = 0x208D48u;
    {
        const bool branch_taken_0x208d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208d48) {
            ctx->pc = 0x208D58u;
            goto label_208d58;
        }
    }
    ctx->pc = 0x208D50u;
label_208d50:
    // 0x208d50: 0x1000024d  b           . + 4 + (0x24D << 2)
label_208d54:
    if (ctx->pc == 0x208D54u) {
        ctx->pc = 0x208D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D50u;
        // 0x208d54: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208D58u;
        goto label_208d58;
    }
    ctx->pc = 0x208D50u;
    {
        const bool branch_taken_0x208d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D50u;
        // 0x208d54: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208d50) {
            ctx->pc = 0x209688u;
            { ctx->pc = 0x209688; return; }
        }
    }
    ctx->pc = 0x208D58u;
label_208d58:
    // 0x208d58: 0x126000f7  beqz        $s3, . + 4 + (0xF7 << 2)
label_208d5c:
    if (ctx->pc == 0x208D5Cu) {
        ctx->pc = 0x208D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D58u;
        // 0x208d5c: 0x122100  sll         $a0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208D60u;
        goto label_208d60;
    }
    ctx->pc = 0x208D58u;
    {
        const bool branch_taken_0x208d58 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x208D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D58u;
        // 0x208d5c: 0x122100  sll         $a0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208d58) {
            ctx->pc = 0x209138u;
            { ctx->pc = 0x209138; return; }
        }
    }
    ctx->pc = 0x208D60u;
label_208d60:
    // 0x208d60: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x208d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_208d64:
    // 0x208d64: 0x821804  sllv        $v1, $v0, $a0
    ctx->pc = 0x208d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_208d68:
    // 0x208d68: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x208d68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_208d6c:
    // 0x208d6c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x208d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_208d70:
    // 0x208d70: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_208d74:
    if (ctx->pc == 0x208D74u) {
        ctx->pc = 0x208D78u;
        goto label_208d78;
    }
    ctx->pc = 0x208D70u;
    {
        const bool branch_taken_0x208d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208d70) {
            ctx->pc = 0x208E58u;
            goto label_208e58;
        }
    }
    ctx->pc = 0x208D78u;
label_208d78:
    // 0x208d78: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x208d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_208d7c:
    // 0x208d7c: 0xc05b420  jal         func_16D080
label_208d80:
    if (ctx->pc == 0x208D80u) {
        ctx->pc = 0x208D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D7Cu;
        // 0x208d80: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208D84u;
        goto label_208d84;
    }
    ctx->pc = 0x208D7Cu;
    SET_GPR_U32(ctx, 31, 0x208D84u);
    ctx->pc = 0x208D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208D7Cu;
    // 0x208d80: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x208D7Cu, 0x208D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208D84u;
label_208d84:
    // 0x208d84: 0x8f839100  lw          $v1, -0x6F00($gp)
    ctx->pc = 0x208d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_208d88:
    // 0x208d88: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x208d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_208d8c:
    // 0x208d8c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x208d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_208d90:
    // 0x208d90: 0x8c515734  lw          $s1, 0x5734($v0)
    ctx->pc = 0x208d90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22324)));
label_208d94:
    // 0x208d94: 0x2a210028  slti        $at, $s1, 0x28
    ctx->pc = 0x208d94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)40) ? 1 : 0);
label_208d98:
    // 0x208d98: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_208d9c:
    if (ctx->pc == 0x208D9Cu) {
        ctx->pc = 0x208DA0u;
        goto label_208da0;
    }
    ctx->pc = 0x208D98u;
    {
        const bool branch_taken_0x208d98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x208d98) {
            ctx->pc = 0x208DA8u;
            goto label_208da8;
        }
    }
    ctx->pc = 0x208DA0u;
label_208da0:
    // 0x208da0: 0x10000002  b           . + 4 + (0x2 << 2)
label_208da4:
    if (ctx->pc == 0x208DA4u) {
        ctx->pc = 0x208DA8u;
        goto label_208da8;
    }
    ctx->pc = 0x208DA0u;
    {
        const bool branch_taken_0x208da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208da0) {
            ctx->pc = 0x208DACu;
            goto label_208dac;
        }
    }
    ctx->pc = 0x208DA8u;
label_208da8:
    // 0x208da8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x208da8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208dac:
    // 0x208dac: 0x0  nop
    ctx->pc = 0x208dacu;
    // NOP
label_208db0:
    // 0x208db0: 0xac6057f4  sw          $zero, 0x57F4($v1)
    ctx->pc = 0x208db0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22516), GPR_U32(ctx, 0));
label_208db4:
    // 0x208db4: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x208db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_208db8:
    // 0x208db8: 0x2a210028  slti        $at, $s1, 0x28
    ctx->pc = 0x208db8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)40) ? 1 : 0);
label_208dbc:
    // 0x208dbc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x208dbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208dc0:
    // 0x208dc0: 0x24150028  addiu       $s5, $zero, 0x28
    ctx->pc = 0x208dc0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_208dc4:
    // 0x208dc4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_208dc8:
    if (ctx->pc == 0x208DC8u) {
        ctx->pc = 0x208DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DC4u;
        // 0x208dc8: 0xac5157f0  sw          $s1, 0x57F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22512), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208DCCu;
        goto label_208dcc;
    }
    ctx->pc = 0x208DC4u;
    {
        const bool branch_taken_0x208dc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x208DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DC4u;
        // 0x208dc8: 0xac5157f0  sw          $s1, 0x57F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22512), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208dc4) {
            ctx->pc = 0x208DE0u;
            goto label_208de0;
        }
    }
    ctx->pc = 0x208DCCu;
label_208dcc:
    // 0x208dcc: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x208dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_208dd0:
    // 0x208dd0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x208dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_208dd4:
    // 0x208dd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x208dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_208dd8:
    // 0x208dd8: 0x8c555748  lw          $s5, 0x5748($v0)
    ctx->pc = 0x208dd8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22344)));
label_208ddc:
    // 0x208ddc: 0x0  nop
    ctx->pc = 0x208ddcu;
    // NOP
label_208de0:
    // 0x208de0: 0x2aa10028  slti        $at, $s5, 0x28
    ctx->pc = 0x208de0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)40) ? 1 : 0);
label_208de4:
    // 0x208de4: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_208de8:
    if (ctx->pc == 0x208DE8u) {
        ctx->pc = 0x208DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DE4u;
        // 0x208de8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208DECu;
        goto label_208dec;
    }
    ctx->pc = 0x208DE4u;
    {
        const bool branch_taken_0x208de4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x208DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DE4u;
        // 0x208de8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208de4) {
            ctx->pc = 0x208E34u;
            goto label_208e34;
        }
    }
    ctx->pc = 0x208DECu;
label_208dec:
    // 0x208dec: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x208decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_208df0:
    // 0x208df0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x208df0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_208df4:
    // 0x208df4: 0x24070198  addiu       $a3, $zero, 0x198
    ctx->pc = 0x208df4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
label_208df8:
    // 0x208df8: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x208df8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_208dfc:
    // 0x208dfc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x208dfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208e00:
    // 0x208e00: 0xc07f734  jal         func_1FDCD0
label_208e04:
    if (ctx->pc == 0x208E04u) {
        ctx->pc = 0x208E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E00u;
        // 0x208e04: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208E08u;
        goto label_208e08;
    }
    ctx->pc = 0x208E00u;
    SET_GPR_U32(ctx, 31, 0x208E08u);
    ctx->pc = 0x208E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208E00u;
    // 0x208e04: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDCD0u;
    { ctx->pc = 0x1fdcd0; return; }
    ctx->pc = 0x208E08u;
label_208e08:
    // 0x208e08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x208e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208e0c:
    // 0x208e0c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x208e0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_208e10:
    // 0x208e10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x208e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_208e14:
    // 0x208e14: 0x240600ab  addiu       $a2, $zero, 0xAB
    ctx->pc = 0x208e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_208e18:
    // 0x208e18: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x208e18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_208e1c:
    // 0x208e1c: 0x24090198  addiu       $t1, $zero, 0x198
    ctx->pc = 0x208e1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
label_208e20:
    // 0x208e20: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x208e20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_208e24:
    // 0x208e24: 0xc07f47c  jal         func_1FD1F0
label_208e28:
    if (ctx->pc == 0x208E28u) {
        ctx->pc = 0x208E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E24u;
        // 0x208e28: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208E2Cu;
        goto label_208e2c;
    }
    ctx->pc = 0x208E24u;
    SET_GPR_U32(ctx, 31, 0x208E2Cu);
    ctx->pc = 0x208E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208E24u;
    // 0x208e28: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD1F0u;
    { ctx->pc = 0x1fd1f0; return; }
    ctx->pc = 0x208E2Cu;
label_208e2c:
    // 0x208e2c: 0x10000006  b           . + 4 + (0x6 << 2)
label_208e30:
    if (ctx->pc == 0x208E30u) {
        ctx->pc = 0x208E34u;
        goto label_208e34;
    }
    ctx->pc = 0x208E2Cu;
    {
        const bool branch_taken_0x208e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208e2c) {
            ctx->pc = 0x208E48u;
            goto label_208e48;
        }
    }
    ctx->pc = 0x208E34u;
label_208e34:
    // 0x208e34: 0x0  nop
    ctx->pc = 0x208e34u;
    // NOP
label_208e38:
    // 0x208e38: 0xc07f708  jal         func_1FDC20
label_208e3c:
    if (ctx->pc == 0x208E3Cu) {
        ctx->pc = 0x208E40u;
        goto label_208e40;
    }
    ctx->pc = 0x208E38u;
    SET_GPR_U32(ctx, 31, 0x208E40u);
    ctx->pc = 0x1FDC20u;
    { ctx->pc = 0x1fdc20; return; }
    ctx->pc = 0x208E40u;
label_208e40:
    // 0x208e40: 0xc07f468  jal         func_1FD1A0
label_208e44:
    if (ctx->pc == 0x208E44u) {
        ctx->pc = 0x208E48u;
        goto label_208e48;
    }
    ctx->pc = 0x208E40u;
    SET_GPR_U32(ctx, 31, 0x208E48u);
    ctx->pc = 0x1FD1A0u;
    { ctx->pc = 0x1fd1a0; return; }
    ctx->pc = 0x208E48u;
label_208e48:
    // 0x208e48: 0xc078050  jal         func_1E0140
label_208e4c:
    if (ctx->pc == 0x208E4Cu) {
        ctx->pc = 0x208E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E48u;
        // 0x208e4c: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208E50u;
        goto label_208e50;
    }
    ctx->pc = 0x208E48u;
    SET_GPR_U32(ctx, 31, 0x208E50u);
    ctx->pc = 0x208E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208E48u;
    // 0x208e4c: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x208E50u;
label_208e50:
    // 0x208e50: 0x10000209  b           . + 4 + (0x209 << 2)
label_208e54:
    if (ctx->pc == 0x208E54u) {
        ctx->pc = 0x208E58u;
        goto label_208e58;
    }
    ctx->pc = 0x208E50u;
    {
        const bool branch_taken_0x208e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208e50) {
            ctx->pc = 0x209678u;
            { ctx->pc = 0x209678; return; }
        }
    }
    ctx->pc = 0x208E58u;
label_208e58:
    // 0x208e58: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x208e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_208e5c:
    // 0x208e5c: 0x821804  sllv        $v1, $v0, $a0
    ctx->pc = 0x208e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_208e60:
    // 0x208e60: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x208e60u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_208e64:
    // 0x208e64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x208e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_208e68:
    // 0x208e68: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_208e6c:
    if (ctx->pc == 0x208E6Cu) {
        ctx->pc = 0x208E70u;
        goto label_208e70;
    }
    ctx->pc = 0x208E68u;
    {
        const bool branch_taken_0x208e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208e68) {
            ctx->pc = 0x208E84u;
            goto label_208e84;
        }
    }
    ctx->pc = 0x208E70u;
label_208e70:
    // 0x208e70: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x208e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_208e74:
    // 0x208e74: 0xc05b420  jal         func_16D080
label_208e78:
    if (ctx->pc == 0x208E78u) {
        ctx->pc = 0x208E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E74u;
        // 0x208e78: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208E7Cu;
        goto label_208e7c;
    }
    ctx->pc = 0x208E74u;
    SET_GPR_U32(ctx, 31, 0x208E7Cu);
    ctx->pc = 0x208E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208E74u;
    // 0x208e78: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x208E74u, 0x208E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208E7Cu;
label_208e7c:
    // 0x208e7c: 0x10000202  b           . + 4 + (0x202 << 2)
label_208e80:
    if (ctx->pc == 0x208E80u) {
        ctx->pc = 0x208E84u;
        goto label_208e84;
    }
    ctx->pc = 0x208E7Cu;
    {
        const bool branch_taken_0x208e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208e7c) {
            ctx->pc = 0x209688u;
            { ctx->pc = 0x209688; return; }
        }
    }
    ctx->pc = 0x208E84u;
label_208e84:
    // 0x208e84: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x208e84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_208e88:
    // 0x208e88: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x208e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_208e8c:
    // 0x208e8c: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x208e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_208e90:
    // 0x208e90: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x208e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_208e94:
    // 0x208e94: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_208e98:
    if (ctx->pc == 0x208E98u) {
        ctx->pc = 0x208E9Cu;
        goto label_208e9c;
    }
    ctx->pc = 0x208E94u;
    {
        const bool branch_taken_0x208e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208e94) {
            ctx->pc = 0x208F90u;
            { ctx->pc = 0x208f90; return; }
        }
    }
    ctx->pc = 0x208E9Cu;
label_208e9c:
    // 0x208e9c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x208e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_208ea0:
    // 0x208ea0: 0xc05b420  jal         func_16D080
label_208ea4:
    if (ctx->pc == 0x208EA4u) {
        ctx->pc = 0x208EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208EA0u;
        // 0x208ea4: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208EA8u;
        goto label_208ea8;
    }
    ctx->pc = 0x208EA0u;
    SET_GPR_U32(ctx, 31, 0x208EA8u);
    ctx->pc = 0x208EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208EA0u;
    // 0x208ea4: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x208EA0u, 0x208EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208EA8u;
label_208ea8:
    // 0x208ea8: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x208ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_208eac:
    // 0x208eac: 0x103880  sll         $a3, $s0, 2
    ctx->pc = 0x208eacu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_208eb0:
    // 0x208eb0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x208eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_208eb4:
    // 0x208eb4: 0x24465734  addiu       $a2, $v0, 0x5734
    ctx->pc = 0x208eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 22324));
label_208eb8:
    // 0x208eb8: 0x8c425734  lw          $v0, 0x5734($v0)
    ctx->pc = 0x208eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22324)));
label_208ebc:
    // 0x208ebc: 0x28410028  slti        $at, $v0, 0x28
    ctx->pc = 0x208ebcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)40) ? 1 : 0);
label_208ec0:
    // 0x208ec0: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_208ec4:
    if (ctx->pc == 0x208EC4u) {
        ctx->pc = 0x208EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208EC0u;
        // 0x208ec4: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208EC8u;
        goto label_208ec8;
    }
    ctx->pc = 0x208EC0u;
    {
        const bool branch_taken_0x208ec0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x208EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208EC0u;
        // 0x208ec4: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ec0) {
            ctx->pc = 0x208EF4u;
            goto label_208ef4;
        }
    }
    ctx->pc = 0x208EC8u;
label_208ec8:
    // 0x208ec8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x208ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_208ecc:
    // 0x208ecc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x208eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_208ed0:
    // 0x208ed0: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x208ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_208ed4:
    // 0x208ed4: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x208ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_208ed8:
    // 0x208ed8: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x208ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_208edc:
    // 0x208edc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x208edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_208ee0:
    // 0x208ee0: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x208ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_208ee4:
    // 0x208ee4: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x208ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_208ee8:
    // 0x208ee8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x208ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_208eec:
    // 0x208eec: 0xa065367e  sb          $a1, 0x367E($v1)
    ctx->pc = 0x208eecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 13950), (uint8_t)GPR_U32(ctx, 5));
label_208ef0:
    // 0x208ef0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x208ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_208ef4:
    // 0x208ef4: 0x0  nop
    ctx->pc = 0x208ef4u;
    // NOP
label_208ef8:
    // 0x208ef8: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x208ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_208efc:
    // 0x208efc: 0x2a010005  slti        $at, $s0, 0x5
    ctx->pc = 0x208efcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
label_208f00:
    // 0x208f00: 0x24150028  addiu       $s5, $zero, 0x28
    ctx->pc = 0x208f00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_208f04:
    // 0x208f04: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_208f08:
    if (ctx->pc == 0x208F08u) {
        ctx->pc = 0x208F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F04u;
        // 0x208f08: 0xac5057ec  sw          $s0, 0x57EC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22508), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208F0Cu;
        goto label_208f0c;
    }
    ctx->pc = 0x208F04u;
    {
        const bool branch_taken_0x208f04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x208F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F04u;
        // 0x208f08: 0xac5057ec  sw          $s0, 0x57EC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22508), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208f04) {
            ctx->pc = 0x208F1Cu;
            { ctx->pc = 0x208f1c; return; }
        }
    }
    ctx->pc = 0x208F0Cu;
label_208f0c:
    // 0x208f0c: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x208f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
    ctx->pc = 0x208f10u;
    return;
}

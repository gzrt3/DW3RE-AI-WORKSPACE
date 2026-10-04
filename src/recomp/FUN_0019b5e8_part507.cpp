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

// Function: FUN_0019b5e8
// Address: 0x19b5e8 - 0x29b5f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b5e8_part507(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x292708u: goto label_292708;
        case 0x29270cu: goto label_29270c;
        case 0x292710u: goto label_292710;
        case 0x292714u: goto label_292714;
        case 0x292718u: goto label_292718;
        case 0x29271cu: goto label_29271c;
        case 0x292720u: goto label_292720;
        case 0x292724u: goto label_292724;
        case 0x292728u: goto label_292728;
        case 0x29272cu: goto label_29272c;
        case 0x292730u: goto label_292730;
        case 0x292734u: goto label_292734;
        case 0x292738u: goto label_292738;
        case 0x29273cu: goto label_29273c;
        case 0x292740u: goto label_292740;
        case 0x292744u: goto label_292744;
        case 0x292748u: goto label_292748;
        case 0x29274cu: goto label_29274c;
        case 0x292750u: goto label_292750;
        case 0x292754u: goto label_292754;
        case 0x292758u: goto label_292758;
        case 0x29275cu: goto label_29275c;
        case 0x292760u: goto label_292760;
        case 0x292764u: goto label_292764;
        case 0x292768u: goto label_292768;
        case 0x29276cu: goto label_29276c;
        case 0x292770u: goto label_292770;
        case 0x292774u: goto label_292774;
        case 0x292778u: goto label_292778;
        case 0x29277cu: goto label_29277c;
        case 0x292780u: goto label_292780;
        case 0x292784u: goto label_292784;
        case 0x292788u: goto label_292788;
        case 0x29278cu: goto label_29278c;
        case 0x292790u: goto label_292790;
        case 0x292794u: goto label_292794;
        case 0x292798u: goto label_292798;
        case 0x29279cu: goto label_29279c;
        case 0x2927a0u: goto label_2927a0;
        case 0x2927a4u: goto label_2927a4;
        case 0x2927a8u: goto label_2927a8;
        case 0x2927acu: goto label_2927ac;
        case 0x2927b0u: goto label_2927b0;
        case 0x2927b4u: goto label_2927b4;
        case 0x2927b8u: goto label_2927b8;
        case 0x2927bcu: goto label_2927bc;
        case 0x2927c0u: goto label_2927c0;
        case 0x2927c4u: goto label_2927c4;
        case 0x2927c8u: goto label_2927c8;
        case 0x2927ccu: goto label_2927cc;
        case 0x2927d0u: goto label_2927d0;
        case 0x2927d4u: goto label_2927d4;
        case 0x2927d8u: goto label_2927d8;
        case 0x2927dcu: goto label_2927dc;
        case 0x2927e0u: goto label_2927e0;
        case 0x2927e4u: goto label_2927e4;
        case 0x2927e8u: goto label_2927e8;
        case 0x2927ecu: goto label_2927ec;
        case 0x2927f0u: goto label_2927f0;
        case 0x2927f4u: goto label_2927f4;
        case 0x2927f8u: goto label_2927f8;
        case 0x2927fcu: goto label_2927fc;
        case 0x292800u: goto label_292800;
        case 0x292804u: goto label_292804;
        case 0x292808u: goto label_292808;
        case 0x29280cu: goto label_29280c;
        case 0x292810u: goto label_292810;
        case 0x292814u: goto label_292814;
        case 0x292818u: goto label_292818;
        case 0x29281cu: goto label_29281c;
        case 0x292820u: goto label_292820;
        case 0x292824u: goto label_292824;
        case 0x292828u: goto label_292828;
        case 0x29282cu: goto label_29282c;
        case 0x292830u: goto label_292830;
        case 0x292834u: goto label_292834;
        case 0x292838u: goto label_292838;
        case 0x29283cu: goto label_29283c;
        case 0x292840u: goto label_292840;
        case 0x292844u: goto label_292844;
        case 0x292848u: goto label_292848;
        case 0x29284cu: goto label_29284c;
        case 0x292850u: goto label_292850;
        case 0x292854u: goto label_292854;
        case 0x292858u: goto label_292858;
        case 0x29285cu: goto label_29285c;
        case 0x292860u: goto label_292860;
        case 0x292864u: goto label_292864;
        case 0x292868u: goto label_292868;
        case 0x29286cu: goto label_29286c;
        case 0x292870u: goto label_292870;
        case 0x292874u: goto label_292874;
        case 0x292878u: goto label_292878;
        case 0x29287cu: goto label_29287c;
        case 0x292880u: goto label_292880;
        case 0x292884u: goto label_292884;
        case 0x292888u: goto label_292888;
        case 0x29288cu: goto label_29288c;
        case 0x292890u: goto label_292890;
        case 0x292894u: goto label_292894;
        case 0x292898u: goto label_292898;
        case 0x29289cu: goto label_29289c;
        case 0x2928a0u: goto label_2928a0;
        case 0x2928a4u: goto label_2928a4;
        case 0x2928a8u: goto label_2928a8;
        case 0x2928acu: goto label_2928ac;
        case 0x2928b0u: goto label_2928b0;
        case 0x2928b4u: goto label_2928b4;
        case 0x2928b8u: goto label_2928b8;
        case 0x2928bcu: goto label_2928bc;
        case 0x2928c0u: goto label_2928c0;
        case 0x2928c4u: goto label_2928c4;
        case 0x2928c8u: goto label_2928c8;
        case 0x2928ccu: goto label_2928cc;
        case 0x2928d0u: goto label_2928d0;
        case 0x2928d4u: goto label_2928d4;
        case 0x2928d8u: goto label_2928d8;
        case 0x2928dcu: goto label_2928dc;
        case 0x2928e0u: goto label_2928e0;
        case 0x2928e4u: goto label_2928e4;
        case 0x2928e8u: goto label_2928e8;
        case 0x2928ecu: goto label_2928ec;
        case 0x2928f0u: goto label_2928f0;
        case 0x2928f4u: goto label_2928f4;
        case 0x2928f8u: goto label_2928f8;
        case 0x2928fcu: goto label_2928fc;
        case 0x292900u: goto label_292900;
        case 0x292904u: goto label_292904;
        case 0x292908u: goto label_292908;
        case 0x29290cu: goto label_29290c;
        case 0x292910u: goto label_292910;
        case 0x292914u: goto label_292914;
        case 0x292918u: goto label_292918;
        case 0x29291cu: goto label_29291c;
        case 0x292920u: goto label_292920;
        case 0x292924u: goto label_292924;
        case 0x292928u: goto label_292928;
        case 0x29292cu: goto label_29292c;
        case 0x292930u: goto label_292930;
        case 0x292934u: goto label_292934;
        case 0x292938u: goto label_292938;
        case 0x29293cu: goto label_29293c;
        case 0x292940u: goto label_292940;
        case 0x292944u: goto label_292944;
        case 0x292948u: goto label_292948;
        case 0x29294cu: goto label_29294c;
        case 0x292950u: goto label_292950;
        case 0x292954u: goto label_292954;
        case 0x292958u: goto label_292958;
        case 0x29295cu: goto label_29295c;
        case 0x292960u: goto label_292960;
        case 0x292964u: goto label_292964;
        case 0x292968u: goto label_292968;
        case 0x29296cu: goto label_29296c;
        case 0x292970u: goto label_292970;
        case 0x292974u: goto label_292974;
        case 0x292978u: goto label_292978;
        case 0x29297cu: goto label_29297c;
        case 0x292980u: goto label_292980;
        case 0x292984u: goto label_292984;
        case 0x292988u: goto label_292988;
        case 0x29298cu: goto label_29298c;
        case 0x292990u: goto label_292990;
        case 0x292994u: goto label_292994;
        case 0x292998u: goto label_292998;
        case 0x29299cu: goto label_29299c;
        case 0x2929a0u: goto label_2929a0;
        case 0x2929a4u: goto label_2929a4;
        case 0x2929a8u: goto label_2929a8;
        case 0x2929acu: goto label_2929ac;
        case 0x2929b0u: goto label_2929b0;
        case 0x2929b4u: goto label_2929b4;
        case 0x2929b8u: goto label_2929b8;
        case 0x2929bcu: goto label_2929bc;
        case 0x2929c0u: goto label_2929c0;
        case 0x2929c4u: goto label_2929c4;
        case 0x2929c8u: goto label_2929c8;
        case 0x2929ccu: goto label_2929cc;
        case 0x2929d0u: goto label_2929d0;
        case 0x2929d4u: goto label_2929d4;
        case 0x2929d8u: goto label_2929d8;
        case 0x2929dcu: goto label_2929dc;
        case 0x2929e0u: goto label_2929e0;
        case 0x2929e4u: goto label_2929e4;
        case 0x2929e8u: goto label_2929e8;
        case 0x2929ecu: goto label_2929ec;
        case 0x2929f0u: goto label_2929f0;
        case 0x2929f4u: goto label_2929f4;
        case 0x2929f8u: goto label_2929f8;
        case 0x2929fcu: goto label_2929fc;
        case 0x292a00u: goto label_292a00;
        case 0x292a04u: goto label_292a04;
        case 0x292a08u: goto label_292a08;
        case 0x292a0cu: goto label_292a0c;
        case 0x292a10u: goto label_292a10;
        case 0x292a14u: goto label_292a14;
        case 0x292a18u: goto label_292a18;
        case 0x292a1cu: goto label_292a1c;
        case 0x292a20u: goto label_292a20;
        case 0x292a24u: goto label_292a24;
        case 0x292a28u: goto label_292a28;
        case 0x292a2cu: goto label_292a2c;
        case 0x292a30u: goto label_292a30;
        case 0x292a34u: goto label_292a34;
        case 0x292a38u: goto label_292a38;
        case 0x292a3cu: goto label_292a3c;
        case 0x292a40u: goto label_292a40;
        case 0x292a44u: goto label_292a44;
        case 0x292a48u: goto label_292a48;
        case 0x292a4cu: goto label_292a4c;
        case 0x292a50u: goto label_292a50;
        case 0x292a54u: goto label_292a54;
        case 0x292a58u: goto label_292a58;
        case 0x292a5cu: goto label_292a5c;
        case 0x292a60u: goto label_292a60;
        case 0x292a64u: goto label_292a64;
        case 0x292a68u: goto label_292a68;
        case 0x292a6cu: goto label_292a6c;
        case 0x292a70u: goto label_292a70;
        case 0x292a74u: goto label_292a74;
        case 0x292a78u: goto label_292a78;
        case 0x292a7cu: goto label_292a7c;
        case 0x292a80u: goto label_292a80;
        case 0x292a84u: goto label_292a84;
        case 0x292a88u: goto label_292a88;
        case 0x292a8cu: goto label_292a8c;
        case 0x292a90u: goto label_292a90;
        case 0x292a94u: goto label_292a94;
        case 0x292a98u: goto label_292a98;
        case 0x292a9cu: goto label_292a9c;
        case 0x292aa0u: goto label_292aa0;
        case 0x292aa4u: goto label_292aa4;
        case 0x292aa8u: goto label_292aa8;
        case 0x292aacu: goto label_292aac;
        case 0x292ab0u: goto label_292ab0;
        case 0x292ab4u: goto label_292ab4;
        case 0x292ab8u: goto label_292ab8;
        case 0x292abcu: goto label_292abc;
        case 0x292ac0u: goto label_292ac0;
        case 0x292ac4u: goto label_292ac4;
        case 0x292ac8u: goto label_292ac8;
        case 0x292accu: goto label_292acc;
        case 0x292ad0u: goto label_292ad0;
        case 0x292ad4u: goto label_292ad4;
        case 0x292ad8u: goto label_292ad8;
        case 0x292adcu: goto label_292adc;
        case 0x292ae0u: goto label_292ae0;
        case 0x292ae4u: goto label_292ae4;
        case 0x292ae8u: goto label_292ae8;
        case 0x292aecu: goto label_292aec;
        case 0x292af0u: goto label_292af0;
        case 0x292af4u: goto label_292af4;
        case 0x292af8u: goto label_292af8;
        case 0x292afcu: goto label_292afc;
        case 0x292b00u: goto label_292b00;
        case 0x292b04u: goto label_292b04;
        case 0x292b08u: goto label_292b08;
        case 0x292b0cu: goto label_292b0c;
        case 0x292b10u: goto label_292b10;
        case 0x292b14u: goto label_292b14;
        case 0x292b18u: goto label_292b18;
        case 0x292b1cu: goto label_292b1c;
        case 0x292b20u: goto label_292b20;
        case 0x292b24u: goto label_292b24;
        case 0x292b28u: goto label_292b28;
        case 0x292b2cu: goto label_292b2c;
        case 0x292b30u: goto label_292b30;
        case 0x292b34u: goto label_292b34;
        case 0x292b38u: goto label_292b38;
        case 0x292b3cu: goto label_292b3c;
        case 0x292b40u: goto label_292b40;
        case 0x292b44u: goto label_292b44;
        case 0x292b48u: goto label_292b48;
        case 0x292b4cu: goto label_292b4c;
        case 0x292b50u: goto label_292b50;
        case 0x292b54u: goto label_292b54;
        case 0x292b58u: goto label_292b58;
        case 0x292b5cu: goto label_292b5c;
        case 0x292b60u: goto label_292b60;
        case 0x292b64u: goto label_292b64;
        case 0x292b68u: goto label_292b68;
        case 0x292b6cu: goto label_292b6c;
        case 0x292b70u: goto label_292b70;
        case 0x292b74u: goto label_292b74;
        case 0x292b78u: goto label_292b78;
        case 0x292b7cu: goto label_292b7c;
        case 0x292b80u: goto label_292b80;
        case 0x292b84u: goto label_292b84;
        case 0x292b88u: goto label_292b88;
        case 0x292b8cu: goto label_292b8c;
        case 0x292b90u: goto label_292b90;
        case 0x292b94u: goto label_292b94;
        case 0x292b98u: goto label_292b98;
        case 0x292b9cu: goto label_292b9c;
        case 0x292ba0u: goto label_292ba0;
        case 0x292ba4u: goto label_292ba4;
        case 0x292ba8u: goto label_292ba8;
        case 0x292bacu: goto label_292bac;
        case 0x292bb0u: goto label_292bb0;
        case 0x292bb4u: goto label_292bb4;
        case 0x292bb8u: goto label_292bb8;
        case 0x292bbcu: goto label_292bbc;
        case 0x292bc0u: goto label_292bc0;
        case 0x292bc4u: goto label_292bc4;
        case 0x292bc8u: goto label_292bc8;
        case 0x292bccu: goto label_292bcc;
        case 0x292bd0u: goto label_292bd0;
        case 0x292bd4u: goto label_292bd4;
        case 0x292bd8u: goto label_292bd8;
        case 0x292bdcu: goto label_292bdc;
        case 0x292be0u: goto label_292be0;
        case 0x292be4u: goto label_292be4;
        case 0x292be8u: goto label_292be8;
        case 0x292becu: goto label_292bec;
        case 0x292bf0u: goto label_292bf0;
        case 0x292bf4u: goto label_292bf4;
        case 0x292bf8u: goto label_292bf8;
        case 0x292bfcu: goto label_292bfc;
        case 0x292c00u: goto label_292c00;
        case 0x292c04u: goto label_292c04;
        case 0x292c08u: goto label_292c08;
        case 0x292c0cu: goto label_292c0c;
        case 0x292c10u: goto label_292c10;
        case 0x292c14u: goto label_292c14;
        case 0x292c18u: goto label_292c18;
        case 0x292c1cu: goto label_292c1c;
        case 0x292c20u: goto label_292c20;
        case 0x292c24u: goto label_292c24;
        case 0x292c28u: goto label_292c28;
        case 0x292c2cu: goto label_292c2c;
        case 0x292c30u: goto label_292c30;
        case 0x292c34u: goto label_292c34;
        case 0x292c38u: goto label_292c38;
        case 0x292c3cu: goto label_292c3c;
        case 0x292c40u: goto label_292c40;
        case 0x292c44u: goto label_292c44;
        case 0x292c48u: goto label_292c48;
        case 0x292c4cu: goto label_292c4c;
        case 0x292c50u: goto label_292c50;
        case 0x292c54u: goto label_292c54;
        case 0x292c58u: goto label_292c58;
        case 0x292c5cu: goto label_292c5c;
        case 0x292c60u: goto label_292c60;
        case 0x292c64u: goto label_292c64;
        case 0x292c68u: goto label_292c68;
        case 0x292c6cu: goto label_292c6c;
        case 0x292c70u: goto label_292c70;
        case 0x292c74u: goto label_292c74;
        case 0x292c78u: goto label_292c78;
        case 0x292c7cu: goto label_292c7c;
        case 0x292c80u: goto label_292c80;
        case 0x292c84u: goto label_292c84;
        case 0x292c88u: goto label_292c88;
        case 0x292c8cu: goto label_292c8c;
        case 0x292c90u: goto label_292c90;
        case 0x292c94u: goto label_292c94;
        case 0x292c98u: goto label_292c98;
        case 0x292c9cu: goto label_292c9c;
        case 0x292ca0u: goto label_292ca0;
        case 0x292ca4u: goto label_292ca4;
        case 0x292ca8u: goto label_292ca8;
        case 0x292cacu: goto label_292cac;
        case 0x292cb0u: goto label_292cb0;
        case 0x292cb4u: goto label_292cb4;
        case 0x292cb8u: goto label_292cb8;
        case 0x292cbcu: goto label_292cbc;
        case 0x292cc0u: goto label_292cc0;
        case 0x292cc4u: goto label_292cc4;
        case 0x292cc8u: goto label_292cc8;
        case 0x292cccu: goto label_292ccc;
        case 0x292cd0u: goto label_292cd0;
        case 0x292cd4u: goto label_292cd4;
        case 0x292cd8u: goto label_292cd8;
        case 0x292cdcu: goto label_292cdc;
        case 0x292ce0u: goto label_292ce0;
        case 0x292ce4u: goto label_292ce4;
        case 0x292ce8u: goto label_292ce8;
        case 0x292cecu: goto label_292cec;
        case 0x292cf0u: goto label_292cf0;
        case 0x292cf4u: goto label_292cf4;
        case 0x292cf8u: goto label_292cf8;
        case 0x292cfcu: goto label_292cfc;
        case 0x292d00u: goto label_292d00;
        case 0x292d04u: goto label_292d04;
        case 0x292d08u: goto label_292d08;
        case 0x292d0cu: goto label_292d0c;
        case 0x292d10u: goto label_292d10;
        case 0x292d14u: goto label_292d14;
        case 0x292d18u: goto label_292d18;
        case 0x292d1cu: goto label_292d1c;
        case 0x292d20u: goto label_292d20;
        case 0x292d24u: goto label_292d24;
        case 0x292d28u: goto label_292d28;
        case 0x292d2cu: goto label_292d2c;
        case 0x292d30u: goto label_292d30;
        case 0x292d34u: goto label_292d34;
        case 0x292d38u: goto label_292d38;
        case 0x292d3cu: goto label_292d3c;
        case 0x292d40u: goto label_292d40;
        case 0x292d44u: goto label_292d44;
        case 0x292d48u: goto label_292d48;
        case 0x292d4cu: goto label_292d4c;
        case 0x292d50u: goto label_292d50;
        case 0x292d54u: goto label_292d54;
        case 0x292d58u: goto label_292d58;
        case 0x292d5cu: goto label_292d5c;
        case 0x292d60u: goto label_292d60;
        case 0x292d64u: goto label_292d64;
        case 0x292d68u: goto label_292d68;
        case 0x292d6cu: goto label_292d6c;
        case 0x292d70u: goto label_292d70;
        case 0x292d74u: goto label_292d74;
        case 0x292d78u: goto label_292d78;
        case 0x292d7cu: goto label_292d7c;
        case 0x292d80u: goto label_292d80;
        case 0x292d84u: goto label_292d84;
        case 0x292d88u: goto label_292d88;
        case 0x292d8cu: goto label_292d8c;
        case 0x292d90u: goto label_292d90;
        case 0x292d94u: goto label_292d94;
        case 0x292d98u: goto label_292d98;
        case 0x292d9cu: goto label_292d9c;
        case 0x292da0u: goto label_292da0;
        case 0x292da4u: goto label_292da4;
        case 0x292da8u: goto label_292da8;
        case 0x292dacu: goto label_292dac;
        case 0x292db0u: goto label_292db0;
        case 0x292db4u: goto label_292db4;
        case 0x292db8u: goto label_292db8;
        case 0x292dbcu: goto label_292dbc;
        case 0x292dc0u: goto label_292dc0;
        case 0x292dc4u: goto label_292dc4;
        case 0x292dc8u: goto label_292dc8;
        case 0x292dccu: goto label_292dcc;
        case 0x292dd0u: goto label_292dd0;
        case 0x292dd4u: goto label_292dd4;
        case 0x292dd8u: goto label_292dd8;
        case 0x292ddcu: goto label_292ddc;
        case 0x292de0u: goto label_292de0;
        case 0x292de4u: goto label_292de4;
        case 0x292de8u: goto label_292de8;
        case 0x292decu: goto label_292dec;
        case 0x292df0u: goto label_292df0;
        case 0x292df4u: goto label_292df4;
        case 0x292df8u: goto label_292df8;
        case 0x292dfcu: goto label_292dfc;
        case 0x292e00u: goto label_292e00;
        case 0x292e04u: goto label_292e04;
        case 0x292e08u: goto label_292e08;
        case 0x292e0cu: goto label_292e0c;
        case 0x292e10u: goto label_292e10;
        case 0x292e14u: goto label_292e14;
        case 0x292e18u: goto label_292e18;
        case 0x292e1cu: goto label_292e1c;
        case 0x292e20u: goto label_292e20;
        case 0x292e24u: goto label_292e24;
        case 0x292e28u: goto label_292e28;
        case 0x292e2cu: goto label_292e2c;
        case 0x292e30u: goto label_292e30;
        case 0x292e34u: goto label_292e34;
        case 0x292e38u: goto label_292e38;
        case 0x292e3cu: goto label_292e3c;
        case 0x292e40u: goto label_292e40;
        case 0x292e44u: goto label_292e44;
        case 0x292e48u: goto label_292e48;
        case 0x292e4cu: goto label_292e4c;
        case 0x292e50u: goto label_292e50;
        case 0x292e54u: goto label_292e54;
        case 0x292e58u: goto label_292e58;
        case 0x292e5cu: goto label_292e5c;
        case 0x292e60u: goto label_292e60;
        case 0x292e64u: goto label_292e64;
        case 0x292e68u: goto label_292e68;
        case 0x292e6cu: goto label_292e6c;
        case 0x292e70u: goto label_292e70;
        case 0x292e74u: goto label_292e74;
        case 0x292e78u: goto label_292e78;
        case 0x292e7cu: goto label_292e7c;
        case 0x292e80u: goto label_292e80;
        case 0x292e84u: goto label_292e84;
        case 0x292e88u: goto label_292e88;
        case 0x292e8cu: goto label_292e8c;
        case 0x292e90u: goto label_292e90;
        case 0x292e94u: goto label_292e94;
        case 0x292e98u: goto label_292e98;
        case 0x292e9cu: goto label_292e9c;
        case 0x292ea0u: goto label_292ea0;
        case 0x292ea4u: goto label_292ea4;
        case 0x292ea8u: goto label_292ea8;
        case 0x292eacu: goto label_292eac;
        case 0x292eb0u: goto label_292eb0;
        case 0x292eb4u: goto label_292eb4;
        case 0x292eb8u: goto label_292eb8;
        case 0x292ebcu: goto label_292ebc;
        case 0x292ec0u: goto label_292ec0;
        case 0x292ec4u: goto label_292ec4;
        case 0x292ec8u: goto label_292ec8;
        case 0x292eccu: goto label_292ecc;
        case 0x292ed0u: goto label_292ed0;
        case 0x292ed4u: goto label_292ed4;
        default: return;
    }

label_292708:
    // 0x292708: 0x425c0  sll         $a0, $a0, 23
    ctx->pc = 0x292708u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
label_29270c:
    // 0x29270c: 0x0  nop
    ctx->pc = 0x29270cu;
    // NOP
label_292710:
    // 0x292710: 0x82fd  .word       0x000082FD                   # INVALID     $zero, $zero, -0x7D03 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292710u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x292710 raw=0x000082FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292714:
    // 0x292714: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292714u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292718:
    // 0x292718: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29271c:
    // 0x29271c: 0x0  nop
    ctx->pc = 0x29271cu;
    // NOP
label_292720:
    // 0x292720: 0x82ff  dsra32      $s0, $zero, 11
    ctx->pc = 0x292720u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (32 + 11));
label_292724:
    // 0x292724: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292724u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292728:
    // 0x292728: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292728u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_29272c:
    // 0x29272c: 0x0  nop
    ctx->pc = 0x29272cu;
    // NOP
label_292730:
    // 0x292730: 0x8301  .word       0x00008301                   # INVALID     $zero, $zero, -0x7CFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292730u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x292730 raw=0x00008301"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292734:
    // 0x292734: 0x81  .word       0x00000081                   # INVALID     $zero, $zero, 0x81 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292734u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x292734 raw=0x00000081"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292738:
    // 0x292738: 0x40090  .word       0x00040090                   # mfhi        $zero # 00040080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292738u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29273c:
    // 0x29273c: 0x0  nop
    ctx->pc = 0x29273cu;
    // NOP
label_292740:
    // 0x292740: 0x8382  srl         $s0, $zero, 14
    ctx->pc = 0x292740u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 0), 14));
label_292744:
    // 0x292744: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292744u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292748:
    // 0x292748: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29274c:
    // 0x29274c: 0x0  nop
    ctx->pc = 0x29274cu;
    // NOP
label_292750:
    // 0x292750: 0x8384  .word       0x00008384                   # sllv        $s0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292750u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_292754:
    // 0x292754: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292754u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292758:
    // 0x292758: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292758u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_29275c:
    // 0x29275c: 0x0  nop
    ctx->pc = 0x29275cu;
    // NOP
label_292760:
    // 0x292760: 0x8386  .word       0x00008386                   # srlv        $s0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292760u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_292764:
    // 0x292764: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x292764u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
label_292768:
    // 0x292768: 0x3b9b0  tge         $zero, $v1, 742
    ctx->pc = 0x292768u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29276c:
    // 0x29276c: 0x0  nop
    ctx->pc = 0x29276cu;
    // NOP
label_292770:
    // 0x292770: 0x83fe  dsrl32      $s0, $zero, 15
    ctx->pc = 0x292770u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) >> (32 + 15));
label_292774:
    // 0x292774: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292774u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292778:
    // 0x292778: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29277c:
    // 0x29277c: 0x0  nop
    ctx->pc = 0x29277cu;
    // NOP
label_292780:
    // 0x292780: 0x8400  sll         $s0, $zero, 16
    ctx->pc = 0x292780u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_292784:
    // 0x292784: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292784u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292788:
    // 0x292788: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292788u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_29278c:
    // 0x29278c: 0x0  nop
    ctx->pc = 0x29278cu;
    // NOP
label_292790:
    // 0x292790: 0x8402  srl         $s0, $zero, 16
    ctx->pc = 0x292790u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 0), 16));
label_292794:
    // 0x292794: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292794u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_292798:
    // 0x292798: 0x37790  .word       0x00037790                   # mfhi        $t6 # 00030780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292798u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_29279c:
    // 0x29279c: 0x0  nop
    ctx->pc = 0x29279cu;
    // NOP
label_2927a0:
    // 0x2927a0: 0x8471  tgeu        $zero, $zero, 529
    ctx->pc = 0x2927a0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2927a4:
    // 0x2927a4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2927a4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2927a8:
    // 0x2927a8: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x2927a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2927ac:
    // 0x2927ac: 0x0  nop
    ctx->pc = 0x2927acu;
    // NOP
label_2927b0:
    // 0x2927b0: 0x8473  tltu        $zero, $zero, 529
    ctx->pc = 0x2927b0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2927b4:
    // 0x2927b4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2927b4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2927b8:
    // 0x2927b8: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x2927b8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_2927bc:
    // 0x2927bc: 0x0  nop
    ctx->pc = 0x2927bcu;
    // NOP
label_2927c0:
    // 0x2927c0: 0x8475  .word       0x00008475                   # INVALID     $zero, $zero, -0x7B8B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2927c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2927C0 raw=0x00008475"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2927c4:
    // 0x2927c4: 0x77  .word       0x00000077                   # INVALID     $zero, $zero, 0x77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2927c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2927C4 raw=0x00000077"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2927c8:
    // 0x2927c8: 0x3b470  tge         $zero, $v1, 721
    ctx->pc = 0x2927c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2927cc:
    // 0x2927cc: 0x0  nop
    ctx->pc = 0x2927ccu;
    // NOP
label_2927d0:
    // 0x2927d0: 0x84ec  .word       0x000084EC                   # dadd        $s0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2927d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_2927d4:
    // 0x2927d4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2927d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2927d8:
    // 0x2927d8: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x2927d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2927dc:
    // 0x2927dc: 0x0  nop
    ctx->pc = 0x2927dcu;
    // NOP
label_2927e0:
    // 0x2927e0: 0x84ee  .word       0x000084EE                   # dsub        $s0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2927e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_2927e4:
    // 0x2927e4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2927e4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2927e8:
    // 0x2927e8: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x2927e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_2927ec:
    // 0x2927ec: 0x0  nop
    ctx->pc = 0x2927ecu;
    // NOP
label_2927f0:
    // 0x2927f0: 0x84f0  tge         $zero, $zero, 531
    ctx->pc = 0x2927f0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2927f4:
    // 0x2927f4: 0x5e  .word       0x0000005E                   # ddiv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2927f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2927F4 raw=0x0000005E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2927f8:
    // 0x2927f8: 0x2e9e0  .word       0x0002E9E0                   # add         $sp, $zero, $v0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2927f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_2927fc:
    // 0x2927fc: 0x0  nop
    ctx->pc = 0x2927fcu;
    // NOP
label_292800:
    // 0x292800: 0x854e  .word       0x0000854E                   # INVALID     $zero, $zero, -0x7AB2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292800u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x292800 raw=0x0000854E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292804:
    // 0x292804: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292804u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292808:
    // 0x292808: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29280c:
    // 0x29280c: 0x0  nop
    ctx->pc = 0x29280cu;
    // NOP
label_292810:
    // 0x292810: 0x8550  .word       0x00008550                   # mfhi        $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292810u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_292814:
    // 0x292814: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292814u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292818:
    // 0x292818: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292818u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_29281c:
    // 0x29281c: 0x0  nop
    ctx->pc = 0x29281cu;
    // NOP
label_292820:
    // 0x292820: 0x8552  .word       0x00008552                   # mflo        $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292820u;
    SET_GPR_U64(ctx, 16, ctx->lo);
label_292824:
    // 0x292824: 0x79  .word       0x00000079                   # INVALID     $zero, $zero, 0x79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292824u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x292824 raw=0x00000079"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292828:
    // 0x292828: 0x3c0f0  tge         $zero, $v1, 771
    ctx->pc = 0x292828u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29282c:
    // 0x29282c: 0x0  nop
    ctx->pc = 0x29282cu;
    // NOP
label_292830:
    // 0x292830: 0x85cb  .word       0x000085CB                   # movn        $s0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292830u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_292834:
    // 0x292834: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292834u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292838:
    // 0x292838: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29283c:
    // 0x29283c: 0x0  nop
    ctx->pc = 0x29283cu;
    // NOP
label_292840:
    // 0x292840: 0x85cd  break       0, 535
    ctx->pc = 0x292840u;
    runtime->handleBreak(rdram, ctx);
label_292844:
    // 0x292844: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292844u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292848:
    // 0x292848: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292848u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_29284c:
    // 0x29284c: 0x0  nop
    ctx->pc = 0x29284cu;
    // NOP
label_292850:
    // 0x292850: 0x85cf  .word       0x000085CF                   # sync.p # 00008000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292850u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_292854:
    // 0x292854: 0x7a  dsrl        $zero, $zero, 1
    ctx->pc = 0x292854u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 1);
label_292858:
    // 0x292858: 0x3c970  tge         $zero, $v1, 805
    ctx->pc = 0x292858u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29285c:
    // 0x29285c: 0x0  nop
    ctx->pc = 0x29285cu;
    // NOP
label_292860:
    // 0x292860: 0x8649  .word       0x00008649                   # jalr        $s0, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
label_292864:
    if (ctx->pc == 0x292864u) {
        ctx->pc = 0x292864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292860u;
        // 0x292864: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292868u;
        goto label_292868;
    }
    ctx->pc = 0x292860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 16, 0x292868u);
        ctx->pc = 0x292864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292860u;
        // 0x292864: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292860u, 0x292868u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x292868u;
label_292868:
    // 0x292868: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29286c:
    // 0x29286c: 0x0  nop
    ctx->pc = 0x29286cu;
    // NOP
label_292870:
    // 0x292870: 0x864b  .word       0x0000864B                   # movn        $s0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292870u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_292874:
    // 0x292874: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292874u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292878:
    // 0x292878: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292878u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_29287c:
    // 0x29287c: 0x0  nop
    ctx->pc = 0x29287cu;
    // NOP
label_292880:
    // 0x292880: 0x864d  break       0, 537
    ctx->pc = 0x292880u;
    runtime->handleBreak(rdram, ctx);
label_292884:
    // 0x292884: 0x8f  sync
    ctx->pc = 0x292884u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_292888:
    // 0x292888: 0x47060  .word       0x00047060                   # add         $t6, $zero, $a0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292888u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_29288c:
    // 0x29288c: 0x0  nop
    ctx->pc = 0x29288cu;
    // NOP
label_292890:
    // 0x292890: 0x86dc  .word       0x000086DC                   # dmult       $zero, $zero # 000086C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292890u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x292890 raw=0x000086DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292894:
    // 0x292894: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292894u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292898:
    // 0x292898: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29289c:
    // 0x29289c: 0x0  nop
    ctx->pc = 0x29289cu;
    // NOP
label_2928a0:
    // 0x2928a0: 0x86de  .word       0x000086DE                   # ddiv        $s0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2928a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2928A0 raw=0x000086DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2928a4:
    // 0x2928a4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2928a4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2928a8:
    // 0x2928a8: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x2928a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_2928ac:
    // 0x2928ac: 0x0  nop
    ctx->pc = 0x2928acu;
    // NOP
label_2928b0:
    // 0x2928b0: 0x86e0  .word       0x000086E0                   # add         $s0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2928b0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2928b4:
    // 0x2928b4: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x2928b4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2928b8:
    // 0x2928b8: 0x18c40  sll         $s1, $at, 17
    ctx->pc = 0x2928b8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_2928bc:
    // 0x2928bc: 0x0  nop
    ctx->pc = 0x2928bcu;
    // NOP
label_2928c0:
    // 0x2928c0: 0x8712  .word       0x00008712                   # mflo        $s0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2928c0u;
    SET_GPR_U64(ctx, 16, ctx->lo);
label_2928c4:
    // 0x2928c4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2928c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2928c8:
    // 0x2928c8: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x2928c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2928cc:
    // 0x2928cc: 0x0  nop
    ctx->pc = 0x2928ccu;
    // NOP
label_2928d0:
    // 0x2928d0: 0x8714  .word       0x00008714                   # dsllv       $s0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2928d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2928d4:
    // 0x2928d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2928d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2928D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2928d8:
    // 0x2928d8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2928d8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2928dc:
    // 0x2928dc: 0x0  nop
    ctx->pc = 0x2928dcu;
    // NOP
label_2928e0:
    // 0x2928e0: 0x8715  .word       0x00008715                   # INVALID     $zero, $zero, -0x78EB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2928e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2928E0 raw=0x00008715"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2928e4:
    // 0x2928e4: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x2928e4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2928e8:
    // 0x2928e8: 0x18c00  sll         $s1, $at, 16
    ctx->pc = 0x2928e8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 1), 16));
label_2928ec:
    // 0x2928ec: 0x0  nop
    ctx->pc = 0x2928ecu;
    // NOP
label_2928f0:
    // 0x2928f0: 0x8747  .word       0x00008747                   # srav        $s0, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2928f0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2928f4:
    // 0x2928f4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2928f4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2928f8:
    // 0x2928f8: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x2928f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2928fc:
    // 0x2928fc: 0x0  nop
    ctx->pc = 0x2928fcu;
    // NOP
label_292900:
    // 0x292900: 0x8749  .word       0x00008749                   # jalr        $s0, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
label_292904:
    if (ctx->pc == 0x292904u) {
        ctx->pc = 0x292904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292900u;
        // 0x292904: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x292904 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x292908u;
        goto label_292908;
    }
    ctx->pc = 0x292900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 16, 0x292908u);
        ctx->pc = 0x292904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292900u;
        // 0x292904: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x292904 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292900u, 0x292908u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x292908u;
label_292908:
    // 0x292908: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x292908u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29290c:
    // 0x29290c: 0x0  nop
    ctx->pc = 0x29290cu;
    // NOP
label_292910:
    // 0x292910: 0x874a  .word       0x0000874A                   # movz        $s0, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292910u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_292914:
    // 0x292914: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x292914u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292918:
    // 0x292918: 0x391c0  sll         $s2, $v1, 7
    ctx->pc = 0x292918u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_29291c:
    // 0x29291c: 0x0  nop
    ctx->pc = 0x29291cu;
    // NOP
label_292920:
    // 0x292920: 0x87bd  .word       0x000087BD                   # INVALID     $zero, $zero, -0x7843 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292920u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x292920 raw=0x000087BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292924:
    // 0x292924: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292924u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292928:
    // 0x292928: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29292c:
    // 0x29292c: 0x0  nop
    ctx->pc = 0x29292cu;
    // NOP
label_292930:
    // 0x292930: 0x87bf  dsra32      $s0, $zero, 30
    ctx->pc = 0x292930u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (32 + 30));
label_292934:
    // 0x292934: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292934u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292938:
    // 0x292938: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292938u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_29293c:
    // 0x29293c: 0x0  nop
    ctx->pc = 0x29293cu;
    // NOP
label_292940:
    // 0x292940: 0x87c1  .word       0x000087C1                   # INVALID     $zero, $zero, -0x783F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292940u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x292940 raw=0x000087C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292944:
    // 0x292944: 0xb0  tge         $zero, $zero, 2
    ctx->pc = 0x292944u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292948:
    // 0x292948: 0x57a10  .word       0x00057A10                   # mfhi        $t7 # 00050200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292948u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_29294c:
    // 0x29294c: 0x0  nop
    ctx->pc = 0x29294cu;
    // NOP
label_292950:
    // 0x292950: 0x8871  tgeu        $zero, $zero, 545
    ctx->pc = 0x292950u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292954:
    // 0x292954: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292954u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292958:
    // 0x292958: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29295c:
    // 0x29295c: 0x0  nop
    ctx->pc = 0x29295cu;
    // NOP
label_292960:
    // 0x292960: 0x8873  tltu        $zero, $zero, 545
    ctx->pc = 0x292960u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292964:
    // 0x292964: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292964u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292968:
    // 0x292968: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292968u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_29296c:
    // 0x29296c: 0x0  nop
    ctx->pc = 0x29296cu;
    // NOP
label_292970:
    // 0x292970: 0x8875  .word       0x00008875                   # INVALID     $zero, $zero, -0x778B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292970u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x292970 raw=0x00008875"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292974:
    // 0x292974: 0xa9  .word       0x000000A9                   # mtsa        $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x292974u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_292978:
    // 0x292978: 0x546d0  .word       0x000546D0                   # mfhi        $t0 # 000506C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292978u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_29297c:
    // 0x29297c: 0x0  nop
    ctx->pc = 0x29297cu;
    // NOP
label_292980:
    // 0x292980: 0x891e  .word       0x0000891E                   # ddiv        $s1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292980u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x292980 raw=0x0000891E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292984:
    // 0x292984: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292984u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292988:
    // 0x292988: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29298c:
    // 0x29298c: 0x0  nop
    ctx->pc = 0x29298cu;
    // NOP
label_292990:
    // 0x292990: 0x8920  .word       0x00008920                   # add         $s1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292990u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_292994:
    // 0x292994: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292994u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292998:
    // 0x292998: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292998u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_29299c:
    // 0x29299c: 0x0  nop
    ctx->pc = 0x29299cu;
    // NOP
label_2929a0:
    // 0x2929a0: 0x8922  .word       0x00008922                   # neg         $s1, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2929a0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
label_2929a4:
    // 0x2929a4: 0x83  sra         $zero, $zero, 2
    ctx->pc = 0x2929a4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 2));
label_2929a8:
    // 0x2929a8: 0x41460  .word       0x00041460                   # add         $v0, $zero, $a0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2929a8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_2929ac:
    // 0x2929ac: 0x0  nop
    ctx->pc = 0x2929acu;
    // NOP
label_2929b0:
    // 0x2929b0: 0x89a5  .word       0x000089A5                   # move        $s1, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2929b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2929b4:
    // 0x2929b4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2929b4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2929b8:
    // 0x2929b8: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x2929b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2929bc:
    // 0x2929bc: 0x0  nop
    ctx->pc = 0x2929bcu;
    // NOP
label_2929c0:
    // 0x2929c0: 0x89a7  .word       0x000089A7                   # not         $s1, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2929c0u;
    SET_GPR_U64(ctx, 17, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2929c4:
    // 0x2929c4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2929c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2929c8:
    // 0x2929c8: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x2929c8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_2929cc:
    // 0x2929cc: 0x0  nop
    ctx->pc = 0x2929ccu;
    // NOP
label_2929d0:
    // 0x2929d0: 0x89a9  .word       0x000089A9                   # mtsa        $zero # 00008980 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2929d0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2929d4:
    // 0x2929d4: 0x86  .word       0x00000086                   # srlv        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2929d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2929d8:
    // 0x2929d8: 0x42f70  tge         $zero, $a0, 189
    ctx->pc = 0x2929d8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_2929dc:
    // 0x2929dc: 0x0  nop
    ctx->pc = 0x2929dcu;
    // NOP
label_2929e0:
    // 0x2929e0: 0x8a2f  .word       0x00008A2F                   # dsubu       $s1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2929e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2929e4:
    // 0x2929e4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2929e4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2929e8:
    // 0x2929e8: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x2929e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2929ec:
    // 0x2929ec: 0x0  nop
    ctx->pc = 0x2929ecu;
    // NOP
label_2929f0:
    // 0x2929f0: 0x8a31  tgeu        $zero, $zero, 552
    ctx->pc = 0x2929f0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2929f4:
    // 0x2929f4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2929f4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2929f8:
    // 0x2929f8: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x2929f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_2929fc:
    // 0x2929fc: 0x0  nop
    ctx->pc = 0x2929fcu;
    // NOP
label_292a00:
    // 0x292a00: 0x8a33  tltu        $zero, $zero, 552
    ctx->pc = 0x292a00u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292a04:
    // 0x292a04: 0xc3  sra         $zero, $zero, 3
    ctx->pc = 0x292a04u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 3));
label_292a08:
    // 0x292a08: 0x61360  .word       0x00061360                   # add         $v0, $zero, $a2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292a08u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_292a0c:
    // 0x292a0c: 0x0  nop
    ctx->pc = 0x292a0cu;
    // NOP
label_292a10:
    // 0x292a10: 0x8af6  tne         $zero, $zero, 555
    ctx->pc = 0x292a10u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292a14:
    // 0x292a14: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292a14u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292a18:
    // 0x292a18: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292a1c:
    // 0x292a1c: 0x0  nop
    ctx->pc = 0x292a1cu;
    // NOP
label_292a20:
    // 0x292a20: 0x8af8  dsll        $s1, $zero, 11
    ctx->pc = 0x292a20u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) << 11);
label_292a24:
    // 0x292a24: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292a24u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292a28:
    // 0x292a28: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292a28u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292a2c:
    // 0x292a2c: 0x0  nop
    ctx->pc = 0x292a2cu;
    // NOP
label_292a30:
    // 0x292a30: 0x8afa  dsrl        $s1, $zero, 11
    ctx->pc = 0x292a30u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) >> 11);
label_292a34:
    // 0x292a34: 0x7d  .word       0x0000007D                   # INVALID     $zero, $zero, 0x7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292a34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x292A34 raw=0x0000007D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292a38:
    // 0x292a38: 0x3e420  .word       0x0003E420                   # add         $gp, $zero, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292a38u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_292a3c:
    // 0x292a3c: 0x0  nop
    ctx->pc = 0x292a3cu;
    // NOP
label_292a40:
    // 0x292a40: 0x8b77  .word       0x00008B77                   # INVALID     $zero, $zero, -0x7489 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292a40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x292A40 raw=0x00008B77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292a44:
    // 0x292a44: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292a44u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292a48:
    // 0x292a48: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292a4c:
    // 0x292a4c: 0x0  nop
    ctx->pc = 0x292a4cu;
    // NOP
label_292a50:
    // 0x292a50: 0x8b79  .word       0x00008B79                   # INVALID     $zero, $zero, -0x7487 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292a50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x292A50 raw=0x00008B79"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292a54:
    // 0x292a54: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292a54u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292a58:
    // 0x292a58: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292a58u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292a5c:
    // 0x292a5c: 0x0  nop
    ctx->pc = 0x292a5cu;
    // NOP
label_292a60:
    // 0x292a60: 0x8b7b  dsra        $s1, $zero, 13
    ctx->pc = 0x292a60u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 0) >> 13);
label_292a64:
    // 0x292a64: 0xb5  .word       0x000000B5                   # INVALID     $zero, $zero, 0xB5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292a64u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x292A64 raw=0x000000B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292a68:
    // 0x292a68: 0x5a2b0  tge         $zero, $a1, 650
    ctx->pc = 0x292a68u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
label_292a6c:
    // 0x292a6c: 0x0  nop
    ctx->pc = 0x292a6cu;
    // NOP
label_292a70:
    // 0x292a70: 0x8c30  tge         $zero, $zero, 560
    ctx->pc = 0x292a70u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292a74:
    // 0x292a74: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292a74u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292a78:
    // 0x292a78: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292a7c:
    // 0x292a7c: 0x0  nop
    ctx->pc = 0x292a7cu;
    // NOP
label_292a80:
    // 0x292a80: 0x8c32  tlt         $zero, $zero, 560
    ctx->pc = 0x292a80u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292a84:
    // 0x292a84: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292a84u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292a88:
    // 0x292a88: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292a88u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292a8c:
    // 0x292a8c: 0x0  nop
    ctx->pc = 0x292a8cu;
    // NOP
label_292a90:
    // 0x292a90: 0x8c34  teq         $zero, $zero, 560
    ctx->pc = 0x292a90u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292a94:
    // 0x292a94: 0x83  sra         $zero, $zero, 2
    ctx->pc = 0x292a94u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 2));
label_292a98:
    // 0x292a98: 0x41070  tge         $zero, $a0, 65
    ctx->pc = 0x292a98u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_292a9c:
    // 0x292a9c: 0x0  nop
    ctx->pc = 0x292a9cu;
    // NOP
label_292aa0:
    // 0x292aa0: 0x8cb7  .word       0x00008CB7                   # INVALID     $zero, $zero, -0x7349 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292aa0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x292AA0 raw=0x00008CB7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292aa4:
    // 0x292aa4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292aa4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292aa8:
    // 0x292aa8: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292aac:
    // 0x292aac: 0x0  nop
    ctx->pc = 0x292aacu;
    // NOP
label_292ab0:
    // 0x292ab0: 0x8cb9  .word       0x00008CB9                   # INVALID     $zero, $zero, -0x7347 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292ab0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x292AB0 raw=0x00008CB9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292ab4:
    // 0x292ab4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292ab4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292ab8:
    // 0x292ab8: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292abc:
    // 0x292abc: 0x0  nop
    ctx->pc = 0x292abcu;
    // NOP
label_292ac0:
    // 0x292ac0: 0x8cbb  dsra        $s1, $zero, 18
    ctx->pc = 0x292ac0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 0) >> 18);
label_292ac4:
    // 0x292ac4: 0x75  .word       0x00000075                   # INVALID     $zero, $zero, 0x75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292ac4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x292AC4 raw=0x00000075"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292ac8:
    // 0x292ac8: 0x3a390  .word       0x0003A390                   # mfhi        $s4 # 00030380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292ac8u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_292acc:
    // 0x292acc: 0x0  nop
    ctx->pc = 0x292accu;
    // NOP
label_292ad0:
    // 0x292ad0: 0x8d30  tge         $zero, $zero, 564
    ctx->pc = 0x292ad0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292ad4:
    // 0x292ad4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292ad4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292ad8:
    // 0x292ad8: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292adc:
    // 0x292adc: 0x0  nop
    ctx->pc = 0x292adcu;
    // NOP
label_292ae0:
    // 0x292ae0: 0x8d32  tlt         $zero, $zero, 564
    ctx->pc = 0x292ae0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292ae4:
    // 0x292ae4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292ae4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292ae8:
    // 0x292ae8: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292aec:
    // 0x292aec: 0x0  nop
    ctx->pc = 0x292aecu;
    // NOP
label_292af0:
    // 0x292af0: 0x8d34  teq         $zero, $zero, 564
    ctx->pc = 0x292af0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292af4:
    // 0x292af4: 0x84  .word       0x00000084                   # sllv        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292af4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_292af8:
    // 0x292af8: 0x418a0  .word       0x000418A0                   # add         $v1, $zero, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292af8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_292afc:
    // 0x292afc: 0x0  nop
    ctx->pc = 0x292afcu;
    // NOP
label_292b00:
    // 0x292b00: 0x8db8  dsll        $s1, $zero, 22
    ctx->pc = 0x292b00u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) << 22);
label_292b04:
    // 0x292b04: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292b04u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292b08:
    // 0x292b08: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292b0c:
    // 0x292b0c: 0x0  nop
    ctx->pc = 0x292b0cu;
    // NOP
label_292b10:
    // 0x292b10: 0x8dba  dsrl        $s1, $zero, 22
    ctx->pc = 0x292b10u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) >> 22);
label_292b14:
    // 0x292b14: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292b14u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292b18:
    // 0x292b18: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292b18u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292b1c:
    // 0x292b1c: 0x0  nop
    ctx->pc = 0x292b1cu;
    // NOP
label_292b20:
    // 0x292b20: 0x8dbc  dsll32      $s1, $zero, 22
    ctx->pc = 0x292b20u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) << (32 + 22));
label_292b24:
    // 0x292b24: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x292b24u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292b28:
    // 0x292b28: 0x39b30  tge         $zero, $v1, 620
    ctx->pc = 0x292b28u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_292b2c:
    // 0x292b2c: 0x0  nop
    ctx->pc = 0x292b2cu;
    // NOP
label_292b30:
    // 0x292b30: 0x8e30  tge         $zero, $zero, 568
    ctx->pc = 0x292b30u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292b34:
    // 0x292b34: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292b34u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292b38:
    // 0x292b38: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292b3c:
    // 0x292b3c: 0x0  nop
    ctx->pc = 0x292b3cu;
    // NOP
label_292b40:
    // 0x292b40: 0x8e32  tlt         $zero, $zero, 568
    ctx->pc = 0x292b40u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292b44:
    // 0x292b44: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292b44u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292b48:
    // 0x292b48: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292b48u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292b4c:
    // 0x292b4c: 0x0  nop
    ctx->pc = 0x292b4cu;
    // NOP
label_292b50:
    // 0x292b50: 0x8e34  teq         $zero, $zero, 568
    ctx->pc = 0x292b50u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292b54:
    // 0x292b54: 0x81  .word       0x00000081                   # INVALID     $zero, $zero, 0x81 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292b54u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x292B54 raw=0x00000081"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292b58:
    // 0x292b58: 0x40320  .word       0x00040320                   # add         $zero, $zero, $a0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292b58u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_292b5c:
    // 0x292b5c: 0x0  nop
    ctx->pc = 0x292b5cu;
    // NOP
label_292b60:
    // 0x292b60: 0x8eb5  .word       0x00008EB5                   # INVALID     $zero, $zero, -0x714B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292b60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x292B60 raw=0x00008EB5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292b64:
    // 0x292b64: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292b64u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292b68:
    // 0x292b68: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292b6c:
    // 0x292b6c: 0x0  nop
    ctx->pc = 0x292b6cu;
    // NOP
label_292b70:
    // 0x292b70: 0x8eb7  .word       0x00008EB7                   # INVALID     $zero, $zero, -0x7149 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292b70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x292B70 raw=0x00008EB7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292b74:
    // 0x292b74: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292b74u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292b78:
    // 0x292b78: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292b78u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292b7c:
    // 0x292b7c: 0x0  nop
    ctx->pc = 0x292b7cu;
    // NOP
label_292b80:
    // 0x292b80: 0x8eb9  .word       0x00008EB9                   # INVALID     $zero, $zero, -0x7147 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292b80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x292B80 raw=0x00008EB9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292b84:
    // 0x292b84: 0x84  .word       0x00000084                   # sllv        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292b84u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_292b88:
    // 0x292b88: 0x41ca0  .word       0x00041CA0                   # add         $v1, $zero, $a0 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292b88u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_292b8c:
    // 0x292b8c: 0x0  nop
    ctx->pc = 0x292b8cu;
    // NOP
label_292b90:
    // 0x292b90: 0x8f3d  .word       0x00008F3D                   # INVALID     $zero, $zero, -0x70C3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292b90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x292B90 raw=0x00008F3D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292b94:
    // 0x292b94: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292b94u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292b98:
    // 0x292b98: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292b9c:
    // 0x292b9c: 0x0  nop
    ctx->pc = 0x292b9cu;
    // NOP
label_292ba0:
    // 0x292ba0: 0x8f3f  dsra32      $s1, $zero, 28
    ctx->pc = 0x292ba0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 0) >> (32 + 28));
label_292ba4:
    // 0x292ba4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292ba4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292ba8:
    // 0x292ba8: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292bac:
    // 0x292bac: 0x0  nop
    ctx->pc = 0x292bacu;
    // NOP
label_292bb0:
    // 0x292bb0: 0x8f41  .word       0x00008F41                   # INVALID     $zero, $zero, -0x70BF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292bb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x292BB0 raw=0x00008F41"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292bb4:
    // 0x292bb4: 0x5e  .word       0x0000005E                   # ddiv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292bb4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x292BB4 raw=0x0000005E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292bb8:
    // 0x292bb8: 0x2ed60  .word       0x0002ED60                   # add         $sp, $zero, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292bb8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_292bbc:
    // 0x292bbc: 0x0  nop
    ctx->pc = 0x292bbcu;
    // NOP
label_292bc0:
    // 0x292bc0: 0x8f9f  .word       0x00008F9F                   # ddivu       $s1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292bc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x292BC0 raw=0x00008F9F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292bc4:
    // 0x292bc4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292bc4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292bc8:
    // 0x292bc8: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292bcc:
    // 0x292bcc: 0x0  nop
    ctx->pc = 0x292bccu;
    // NOP
label_292bd0:
    // 0x292bd0: 0x8fa1  .word       0x00008FA1                   # addu        $s1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292bd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_292bd4:
    // 0x292bd4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292bd4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292bd8:
    // 0x292bd8: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292bdc:
    // 0x292bdc: 0x0  nop
    ctx->pc = 0x292bdcu;
    // NOP
label_292be0:
    // 0x292be0: 0x8fa3  .word       0x00008FA3                   # negu        $s1, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292be0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_292be4:
    // 0x292be4: 0x82  srl         $zero, $zero, 2
    ctx->pc = 0x292be4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
label_292be8:
    // 0x292be8: 0x409d0  .word       0x000409D0                   # mfhi        $at # 000401C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292be8u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_292bec:
    // 0x292bec: 0x0  nop
    ctx->pc = 0x292becu;
    // NOP
label_292bf0:
    // 0x292bf0: 0x9025  move        $s2, $zero
    ctx->pc = 0x292bf0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_292bf4:
    // 0x292bf4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292bf4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292bf8:
    // 0x292bf8: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292bfc:
    // 0x292bfc: 0x0  nop
    ctx->pc = 0x292bfcu;
    // NOP
label_292c00:
    // 0x292c00: 0x9027  not         $s2, $zero
    ctx->pc = 0x292c00u;
    SET_GPR_U64(ctx, 18, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_292c04:
    // 0x292c04: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292c04u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292c08:
    // 0x292c08: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292c08u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292c0c:
    // 0x292c0c: 0x0  nop
    ctx->pc = 0x292c0cu;
    // NOP
label_292c10:
    // 0x292c10: 0x9029  .word       0x00009029                   # mtsa        $zero # 00009000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x292c10u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_292c14:
    // 0x292c14: 0x92  .word       0x00000092                   # mflo        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292c14u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_292c18:
    // 0x292c18: 0x48e10  .word       0x00048E10                   # mfhi        $s1 # 00040600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292c18u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_292c1c:
    // 0x292c1c: 0x0  nop
    ctx->pc = 0x292c1cu;
    // NOP
label_292c20:
    // 0x292c20: 0x90bb  dsra        $s2, $zero, 2
    ctx->pc = 0x292c20u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 0) >> 2);
label_292c24:
    // 0x292c24: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292c24u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292c28:
    // 0x292c28: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292c2c:
    // 0x292c2c: 0x0  nop
    ctx->pc = 0x292c2cu;
    // NOP
label_292c30:
    // 0x292c30: 0x90bd  .word       0x000090BD                   # INVALID     $zero, $zero, -0x6F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292c30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x292C30 raw=0x000090BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292c34:
    // 0x292c34: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292c34u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292c38:
    // 0x292c38: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292c38u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292c3c:
    // 0x292c3c: 0x0  nop
    ctx->pc = 0x292c3cu;
    // NOP
label_292c40:
    // 0x292c40: 0x90bf  dsra32      $s2, $zero, 2
    ctx->pc = 0x292c40u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 0) >> (32 + 2));
label_292c44:
    // 0x292c44: 0x62  .word       0x00000062                   # neg         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292c44u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_292c48:
    // 0x292c48: 0x30b80  sll         $at, $v1, 14
    ctx->pc = 0x292c48u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 3), 14));
label_292c4c:
    // 0x292c4c: 0x0  nop
    ctx->pc = 0x292c4cu;
    // NOP
label_292c50:
    // 0x292c50: 0x9121  .word       0x00009121                   # addu        $s2, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292c50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_292c54:
    // 0x292c54: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292c54u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292c58:
    // 0x292c58: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292c5c:
    // 0x292c5c: 0x0  nop
    ctx->pc = 0x292c5cu;
    // NOP
label_292c60:
    // 0x292c60: 0x9123  .word       0x00009123                   # negu        $s2, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292c60u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_292c64:
    // 0x292c64: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292c64u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292c68:
    // 0x292c68: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292c68u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292c6c:
    // 0x292c6c: 0x0  nop
    ctx->pc = 0x292c6cu;
    // NOP
label_292c70:
    // 0x292c70: 0x9125  .word       0x00009125                   # move        $s2, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292c70u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_292c74:
    // 0x292c74: 0x7f  dsra32      $zero, $zero, 1
    ctx->pc = 0x292c74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 1));
label_292c78:
    // 0x292c78: 0x3f400  sll         $fp, $v1, 16
    ctx->pc = 0x292c78u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_292c7c:
    // 0x292c7c: 0x0  nop
    ctx->pc = 0x292c7cu;
    // NOP
label_292c80:
    // 0x292c80: 0x91a4  .word       0x000091A4                   # and         $s2, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292c80u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_292c84:
    // 0x292c84: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292c84u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292c88:
    // 0x292c88: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292c8c:
    // 0x292c8c: 0x0  nop
    ctx->pc = 0x292c8cu;
    // NOP
label_292c90:
    // 0x292c90: 0x91a6  .word       0x000091A6                   # xor         $s2, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292c90u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_292c94:
    // 0x292c94: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292c94u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292c98:
    // 0x292c98: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292c98u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292c9c:
    // 0x292c9c: 0x0  nop
    ctx->pc = 0x292c9cu;
    // NOP
label_292ca0:
    // 0x292ca0: 0x91a8  .word       0x000091A8                   # mfsa        $s2 # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x292ca0u;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_292ca4:
    // 0x292ca4: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x292ca4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292ca8:
    // 0x292ca8: 0x39ae0  .word       0x00039AE0                   # add         $s3, $zero, $v1 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292ca8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_292cac:
    // 0x292cac: 0x0  nop
    ctx->pc = 0x292cacu;
    // NOP
label_292cb0:
    // 0x292cb0: 0x921c  .word       0x0000921C                   # dmult       $zero, $zero # 00009200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292cb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x292CB0 raw=0x0000921C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292cb4:
    // 0x292cb4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292cb4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292cb8:
    // 0x292cb8: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292cbc:
    // 0x292cbc: 0x0  nop
    ctx->pc = 0x292cbcu;
    // NOP
label_292cc0:
    // 0x292cc0: 0x921e  .word       0x0000921E                   # ddiv        $s2, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292cc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x292CC0 raw=0x0000921E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292cc4:
    // 0x292cc4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292cc4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292cc8:
    // 0x292cc8: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292ccc:
    // 0x292ccc: 0x0  nop
    ctx->pc = 0x292cccu;
    // NOP
label_292cd0:
    // 0x292cd0: 0x9220  .word       0x00009220                   # add         $s2, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292cd0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_292cd4:
    // 0x292cd4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292cd4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292cd8:
    // 0x292cd8: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292cdc:
    // 0x292cdc: 0x0  nop
    ctx->pc = 0x292cdcu;
    // NOP
label_292ce0:
    // 0x292ce0: 0x9222  .word       0x00009222                   # neg         $s2, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292ce0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_292ce4:
    // 0x292ce4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292ce4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292ce8:
    // 0x292ce8: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292cec:
    // 0x292cec: 0x0  nop
    ctx->pc = 0x292cecu;
    // NOP
label_292cf0:
    // 0x292cf0: 0x9224  .word       0x00009224                   # and         $s2, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292cf0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_292cf4:
    // 0x292cf4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292cf4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292cf8:
    // 0x292cf8: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292cfc:
    // 0x292cfc: 0x0  nop
    ctx->pc = 0x292cfcu;
    // NOP
label_292d00:
    // 0x292d00: 0x9226  .word       0x00009226                   # xor         $s2, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292d00u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_292d04:
    // 0x292d04: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292d04u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292d08:
    // 0x292d08: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292d08u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292d0c:
    // 0x292d0c: 0x0  nop
    ctx->pc = 0x292d0cu;
    // NOP
label_292d10:
    // 0x292d10: 0x9228  .word       0x00009228                   # mfsa        $s2 # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x292d10u;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_292d14:
    // 0x292d14: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292d14u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292d18:
    // 0x292d18: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292d1c:
    // 0x292d1c: 0x0  nop
    ctx->pc = 0x292d1cu;
    // NOP
label_292d20:
    // 0x292d20: 0x922a  .word       0x0000922A                   # slt         $s2, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292d20u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_292d24:
    // 0x292d24: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292d24u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292d28:
    // 0x292d28: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292d28u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292d2c:
    // 0x292d2c: 0x0  nop
    ctx->pc = 0x292d2cu;
    // NOP
label_292d30:
    // 0x292d30: 0x922c  .word       0x0000922C                   # dadd        $s2, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292d30u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_292d34:
    // 0x292d34: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292d34u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292d38:
    // 0x292d38: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292d3c:
    // 0x292d3c: 0x0  nop
    ctx->pc = 0x292d3cu;
    // NOP
label_292d40:
    // 0x292d40: 0x922e  .word       0x0000922E                   # dsub        $s2, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292d40u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_292d44:
    // 0x292d44: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292d44u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292d48:
    // 0x292d48: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292d48u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292d4c:
    // 0x292d4c: 0x0  nop
    ctx->pc = 0x292d4cu;
    // NOP
label_292d50:
    // 0x292d50: 0x9230  tge         $zero, $zero, 584
    ctx->pc = 0x292d50u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292d54:
    // 0x292d54: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292d54u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292d58:
    // 0x292d58: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292d5c:
    // 0x292d5c: 0x0  nop
    ctx->pc = 0x292d5cu;
    // NOP
label_292d60:
    // 0x292d60: 0x9232  tlt         $zero, $zero, 584
    ctx->pc = 0x292d60u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292d64:
    // 0x292d64: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292d64u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292d68:
    // 0x292d68: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292d68u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292d6c:
    // 0x292d6c: 0x0  nop
    ctx->pc = 0x292d6cu;
    // NOP
label_292d70:
    // 0x292d70: 0x9234  teq         $zero, $zero, 584
    ctx->pc = 0x292d70u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292d74:
    // 0x292d74: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292d74u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292d78:
    // 0x292d78: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292d7c:
    // 0x292d7c: 0x0  nop
    ctx->pc = 0x292d7cu;
    // NOP
label_292d80:
    // 0x292d80: 0x9236  tne         $zero, $zero, 584
    ctx->pc = 0x292d80u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292d84:
    // 0x292d84: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292d84u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292d88:
    // 0x292d88: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292d88u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292d8c:
    // 0x292d8c: 0x0  nop
    ctx->pc = 0x292d8cu;
    // NOP
label_292d90:
    // 0x292d90: 0x9238  dsll        $s2, $zero, 8
    ctx->pc = 0x292d90u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) << 8);
label_292d94:
    // 0x292d94: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292d94u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292d98:
    // 0x292d98: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292d9c:
    // 0x292d9c: 0x0  nop
    ctx->pc = 0x292d9cu;
    // NOP
label_292da0:
    // 0x292da0: 0x923a  dsrl        $s2, $zero, 8
    ctx->pc = 0x292da0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) >> 8);
label_292da4:
    // 0x292da4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292da4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292da8:
    // 0x292da8: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292da8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292dac:
    // 0x292dac: 0x0  nop
    ctx->pc = 0x292dacu;
    // NOP
label_292db0:
    // 0x292db0: 0x923c  dsll32      $s2, $zero, 8
    ctx->pc = 0x292db0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) << (32 + 8));
label_292db4:
    // 0x292db4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292db4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292db8:
    // 0x292db8: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292dbc:
    // 0x292dbc: 0x0  nop
    ctx->pc = 0x292dbcu;
    // NOP
label_292dc0:
    // 0x292dc0: 0x923e  dsrl32      $s2, $zero, 8
    ctx->pc = 0x292dc0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) >> (32 + 8));
label_292dc4:
    // 0x292dc4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292dc4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292dc8:
    // 0x292dc8: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292dcc:
    // 0x292dcc: 0x0  nop
    ctx->pc = 0x292dccu;
    // NOP
label_292dd0:
    // 0x292dd0: 0x9240  sll         $s2, $zero, 9
    ctx->pc = 0x292dd0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_292dd4:
    // 0x292dd4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292dd4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292dd8:
    // 0x292dd8: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292ddc:
    // 0x292ddc: 0x0  nop
    ctx->pc = 0x292ddcu;
    // NOP
label_292de0:
    // 0x292de0: 0x9242  srl         $s2, $zero, 9
    ctx->pc = 0x292de0u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 0), 9));
label_292de4:
    // 0x292de4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292de4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292de8:
    // 0x292de8: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292de8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292dec:
    // 0x292dec: 0x0  nop
    ctx->pc = 0x292decu;
    // NOP
label_292df0:
    // 0x292df0: 0x9244  .word       0x00009244                   # sllv        $s2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292df0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_292df4:
    // 0x292df4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292df4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292df8:
    // 0x292df8: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292dfc:
    // 0x292dfc: 0x0  nop
    ctx->pc = 0x292dfcu;
    // NOP
label_292e00:
    // 0x292e00: 0x9246  .word       0x00009246                   # srlv        $s2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292e00u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_292e04:
    // 0x292e04: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292e04u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292e08:
    // 0x292e08: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292e08u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292e0c:
    // 0x292e0c: 0x0  nop
    ctx->pc = 0x292e0cu;
    // NOP
label_292e10:
    // 0x292e10: 0x9248  .word       0x00009248                   # jr          $zero # 00009240 <InstrIdType: CPU_SPECIAL>
label_292e14:
    if (ctx->pc == 0x292E14u) {
        ctx->pc = 0x292E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E10u;
        // 0x292e14: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292E18u;
        goto label_292e18;
    }
    ctx->pc = 0x292E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x292E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E10u;
        // 0x292e14: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292E10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x292E18u;
label_292e18:
    // 0x292e18: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292e1c:
    // 0x292e1c: 0x0  nop
    ctx->pc = 0x292e1cu;
    // NOP
label_292e20:
    // 0x292e20: 0x924a  .word       0x0000924A                   # movz        $s2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292e20u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_292e24:
    // 0x292e24: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292e24u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292e28:
    // 0x292e28: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292e28u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292e2c:
    // 0x292e2c: 0x0  nop
    ctx->pc = 0x292e2cu;
    // NOP
label_292e30:
    // 0x292e30: 0x924c  syscall     585
    ctx->pc = 0x292e30u;
    ctx->pc = 0x292E34u;
runtime->handleSyscall(rdram, ctx, 0x249u);
label_292e34:
    // 0x292e34: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292e34u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292e38:
    // 0x292e38: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292e3c:
    // 0x292e3c: 0x0  nop
    ctx->pc = 0x292e3cu;
    // NOP
label_292e40:
    // 0x292e40: 0x924e  .word       0x0000924E                   # INVALID     $zero, $zero, -0x6DB2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292e40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x292E40 raw=0x0000924E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292e44:
    // 0x292e44: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292e44u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292e48:
    // 0x292e48: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292e48u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292e4c:
    // 0x292e4c: 0x0  nop
    ctx->pc = 0x292e4cu;
    // NOP
label_292e50:
    // 0x292e50: 0x9250  .word       0x00009250                   # mfhi        $s2 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292e50u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_292e54:
    // 0x292e54: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292e54u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292e58:
    // 0x292e58: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292e5c:
    // 0x292e5c: 0x0  nop
    ctx->pc = 0x292e5cu;
    // NOP
label_292e60:
    // 0x292e60: 0x9252  .word       0x00009252                   # mflo        $s2 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292e60u;
    SET_GPR_U64(ctx, 18, ctx->lo);
label_292e64:
    // 0x292e64: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292e64u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292e68:
    // 0x292e68: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292e68u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292e6c:
    // 0x292e6c: 0x0  nop
    ctx->pc = 0x292e6cu;
    // NOP
label_292e70:
    // 0x292e70: 0x9254  .word       0x00009254                   # dsllv       $s2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292e70u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_292e74:
    // 0x292e74: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292e74u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292e78:
    // 0x292e78: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292e7c:
    // 0x292e7c: 0x0  nop
    ctx->pc = 0x292e7cu;
    // NOP
label_292e80:
    // 0x292e80: 0x9256  .word       0x00009256                   # dsrlv       $s2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292e80u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_292e84:
    // 0x292e84: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292e84u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292e88:
    // 0x292e88: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292e88u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292e8c:
    // 0x292e8c: 0x0  nop
    ctx->pc = 0x292e8cu;
    // NOP
label_292e90:
    // 0x292e90: 0x9258  .word       0x00009258                   # mult        $s2, $zero, $zero # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x292e90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_292e94:
    // 0x292e94: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292e94u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292e98:
    // 0x292e98: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292e9c:
    // 0x292e9c: 0x0  nop
    ctx->pc = 0x292e9cu;
    // NOP
label_292ea0:
    // 0x292ea0: 0x925a  .word       0x0000925A                   # div         $s2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292ea0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_292ea4:
    // 0x292ea4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292ea4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292ea8:
    // 0x292ea8: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292eac:
    // 0x292eac: 0x0  nop
    ctx->pc = 0x292eacu;
    // NOP
label_292eb0:
    // 0x292eb0: 0x925c  .word       0x0000925C                   # dmult       $zero, $zero # 00009240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292eb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x292EB0 raw=0x0000925C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292eb4:
    // 0x292eb4: 0x4f  sync
    ctx->pc = 0x292eb4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_292eb8:
    // 0x292eb8: 0x27460  .word       0x00027460                   # add         $t6, $zero, $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292eb8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_292ebc:
    // 0x292ebc: 0x0  nop
    ctx->pc = 0x292ebcu;
    // NOP
label_292ec0:
    // 0x292ec0: 0x92ab  .word       0x000092AB                   # sltu        $s2, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292ec0u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_292ec4:
    // 0x292ec4: 0x41  .word       0x00000041                   # INVALID     $zero, $zero, 0x41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292ec4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x292EC4 raw=0x00000041"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292ec8:
    // 0x292ec8: 0x20440  sll         $zero, $v0, 17
    ctx->pc = 0x292ec8u;
    
label_292ecc:
    // 0x292ecc: 0x0  nop
    ctx->pc = 0x292eccu;
    // NOP
label_292ed0:
    // 0x292ed0: 0x92ec  .word       0x000092EC                   # dadd        $s2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292ed0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_292ed4:
    // 0x292ed4: 0x264  .word       0x00000264                   # and         $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292ed4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
    ctx->pc = 0x292ed8u;
    return;
}

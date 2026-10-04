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

// Function: FUN_0019b808
// Address: 0x19b808 - 0x29b810
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b808_part349(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2456c8u: goto label_2456c8;
        case 0x2456ccu: goto label_2456cc;
        case 0x2456d0u: goto label_2456d0;
        case 0x2456d4u: goto label_2456d4;
        case 0x2456d8u: goto label_2456d8;
        case 0x2456dcu: goto label_2456dc;
        case 0x2456e0u: goto label_2456e0;
        case 0x2456e4u: goto label_2456e4;
        case 0x2456e8u: goto label_2456e8;
        case 0x2456ecu: goto label_2456ec;
        case 0x2456f0u: goto label_2456f0;
        case 0x2456f4u: goto label_2456f4;
        case 0x2456f8u: goto label_2456f8;
        case 0x2456fcu: goto label_2456fc;
        case 0x245700u: goto label_245700;
        case 0x245704u: goto label_245704;
        case 0x245708u: goto label_245708;
        case 0x24570cu: goto label_24570c;
        case 0x245710u: goto label_245710;
        case 0x245714u: goto label_245714;
        case 0x245718u: goto label_245718;
        case 0x24571cu: goto label_24571c;
        case 0x245720u: goto label_245720;
        case 0x245724u: goto label_245724;
        case 0x245728u: goto label_245728;
        case 0x24572cu: goto label_24572c;
        case 0x245730u: goto label_245730;
        case 0x245734u: goto label_245734;
        case 0x245738u: goto label_245738;
        case 0x24573cu: goto label_24573c;
        case 0x245740u: goto label_245740;
        case 0x245744u: goto label_245744;
        case 0x245748u: goto label_245748;
        case 0x24574cu: goto label_24574c;
        case 0x245750u: goto label_245750;
        case 0x245754u: goto label_245754;
        case 0x245758u: goto label_245758;
        case 0x24575cu: goto label_24575c;
        case 0x245760u: goto label_245760;
        case 0x245764u: goto label_245764;
        case 0x245768u: goto label_245768;
        case 0x24576cu: goto label_24576c;
        case 0x245770u: goto label_245770;
        case 0x245774u: goto label_245774;
        case 0x245778u: goto label_245778;
        case 0x24577cu: goto label_24577c;
        case 0x245780u: goto label_245780;
        case 0x245784u: goto label_245784;
        case 0x245788u: goto label_245788;
        case 0x24578cu: goto label_24578c;
        case 0x245790u: goto label_245790;
        case 0x245794u: goto label_245794;
        case 0x245798u: goto label_245798;
        case 0x24579cu: goto label_24579c;
        case 0x2457a0u: goto label_2457a0;
        case 0x2457a4u: goto label_2457a4;
        case 0x2457a8u: goto label_2457a8;
        case 0x2457acu: goto label_2457ac;
        case 0x2457b0u: goto label_2457b0;
        case 0x2457b4u: goto label_2457b4;
        case 0x2457b8u: goto label_2457b8;
        case 0x2457bcu: goto label_2457bc;
        case 0x2457c0u: goto label_2457c0;
        case 0x2457c4u: goto label_2457c4;
        case 0x2457c8u: goto label_2457c8;
        case 0x2457ccu: goto label_2457cc;
        case 0x2457d0u: goto label_2457d0;
        case 0x2457d4u: goto label_2457d4;
        case 0x2457d8u: goto label_2457d8;
        case 0x2457dcu: goto label_2457dc;
        case 0x2457e0u: goto label_2457e0;
        case 0x2457e4u: goto label_2457e4;
        case 0x2457e8u: goto label_2457e8;
        case 0x2457ecu: goto label_2457ec;
        case 0x2457f0u: goto label_2457f0;
        case 0x2457f4u: goto label_2457f4;
        case 0x2457f8u: goto label_2457f8;
        case 0x2457fcu: goto label_2457fc;
        case 0x245800u: goto label_245800;
        case 0x245804u: goto label_245804;
        case 0x245808u: goto label_245808;
        case 0x24580cu: goto label_24580c;
        case 0x245810u: goto label_245810;
        case 0x245814u: goto label_245814;
        case 0x245818u: goto label_245818;
        case 0x24581cu: goto label_24581c;
        case 0x245820u: goto label_245820;
        case 0x245824u: goto label_245824;
        case 0x245828u: goto label_245828;
        case 0x24582cu: goto label_24582c;
        case 0x245830u: goto label_245830;
        case 0x245834u: goto label_245834;
        case 0x245838u: goto label_245838;
        case 0x24583cu: goto label_24583c;
        case 0x245840u: goto label_245840;
        case 0x245844u: goto label_245844;
        case 0x245848u: goto label_245848;
        case 0x24584cu: goto label_24584c;
        case 0x245850u: goto label_245850;
        case 0x245854u: goto label_245854;
        case 0x245858u: goto label_245858;
        case 0x24585cu: goto label_24585c;
        case 0x245860u: goto label_245860;
        case 0x245864u: goto label_245864;
        case 0x245868u: goto label_245868;
        case 0x24586cu: goto label_24586c;
        case 0x245870u: goto label_245870;
        case 0x245874u: goto label_245874;
        case 0x245878u: goto label_245878;
        case 0x24587cu: goto label_24587c;
        case 0x245880u: goto label_245880;
        case 0x245884u: goto label_245884;
        case 0x245888u: goto label_245888;
        case 0x24588cu: goto label_24588c;
        case 0x245890u: goto label_245890;
        case 0x245894u: goto label_245894;
        case 0x245898u: goto label_245898;
        case 0x24589cu: goto label_24589c;
        case 0x2458a0u: goto label_2458a0;
        case 0x2458a4u: goto label_2458a4;
        case 0x2458a8u: goto label_2458a8;
        case 0x2458acu: goto label_2458ac;
        case 0x2458b0u: goto label_2458b0;
        case 0x2458b4u: goto label_2458b4;
        case 0x2458b8u: goto label_2458b8;
        case 0x2458bcu: goto label_2458bc;
        case 0x2458c0u: goto label_2458c0;
        case 0x2458c4u: goto label_2458c4;
        case 0x2458c8u: goto label_2458c8;
        case 0x2458ccu: goto label_2458cc;
        case 0x2458d0u: goto label_2458d0;
        case 0x2458d4u: goto label_2458d4;
        case 0x2458d8u: goto label_2458d8;
        case 0x2458dcu: goto label_2458dc;
        case 0x2458e0u: goto label_2458e0;
        case 0x2458e4u: goto label_2458e4;
        case 0x2458e8u: goto label_2458e8;
        case 0x2458ecu: goto label_2458ec;
        case 0x2458f0u: goto label_2458f0;
        case 0x2458f4u: goto label_2458f4;
        case 0x2458f8u: goto label_2458f8;
        case 0x2458fcu: goto label_2458fc;
        case 0x245900u: goto label_245900;
        case 0x245904u: goto label_245904;
        case 0x245908u: goto label_245908;
        case 0x24590cu: goto label_24590c;
        case 0x245910u: goto label_245910;
        case 0x245914u: goto label_245914;
        case 0x245918u: goto label_245918;
        case 0x24591cu: goto label_24591c;
        case 0x245920u: goto label_245920;
        case 0x245924u: goto label_245924;
        case 0x245928u: goto label_245928;
        case 0x24592cu: goto label_24592c;
        case 0x245930u: goto label_245930;
        case 0x245934u: goto label_245934;
        case 0x245938u: goto label_245938;
        case 0x24593cu: goto label_24593c;
        case 0x245940u: goto label_245940;
        case 0x245944u: goto label_245944;
        case 0x245948u: goto label_245948;
        case 0x24594cu: goto label_24594c;
        case 0x245950u: goto label_245950;
        case 0x245954u: goto label_245954;
        case 0x245958u: goto label_245958;
        case 0x24595cu: goto label_24595c;
        case 0x245960u: goto label_245960;
        case 0x245964u: goto label_245964;
        case 0x245968u: goto label_245968;
        case 0x24596cu: goto label_24596c;
        case 0x245970u: goto label_245970;
        case 0x245974u: goto label_245974;
        case 0x245978u: goto label_245978;
        case 0x24597cu: goto label_24597c;
        case 0x245980u: goto label_245980;
        case 0x245984u: goto label_245984;
        case 0x245988u: goto label_245988;
        case 0x24598cu: goto label_24598c;
        case 0x245990u: goto label_245990;
        case 0x245994u: goto label_245994;
        case 0x245998u: goto label_245998;
        case 0x24599cu: goto label_24599c;
        case 0x2459a0u: goto label_2459a0;
        case 0x2459a4u: goto label_2459a4;
        case 0x2459a8u: goto label_2459a8;
        case 0x2459acu: goto label_2459ac;
        case 0x2459b0u: goto label_2459b0;
        case 0x2459b4u: goto label_2459b4;
        case 0x2459b8u: goto label_2459b8;
        case 0x2459bcu: goto label_2459bc;
        case 0x2459c0u: goto label_2459c0;
        case 0x2459c4u: goto label_2459c4;
        case 0x2459c8u: goto label_2459c8;
        case 0x2459ccu: goto label_2459cc;
        case 0x2459d0u: goto label_2459d0;
        case 0x2459d4u: goto label_2459d4;
        case 0x2459d8u: goto label_2459d8;
        case 0x2459dcu: goto label_2459dc;
        case 0x2459e0u: goto label_2459e0;
        case 0x2459e4u: goto label_2459e4;
        case 0x2459e8u: goto label_2459e8;
        case 0x2459ecu: goto label_2459ec;
        case 0x2459f0u: goto label_2459f0;
        case 0x2459f4u: goto label_2459f4;
        case 0x2459f8u: goto label_2459f8;
        case 0x2459fcu: goto label_2459fc;
        case 0x245a00u: goto label_245a00;
        case 0x245a04u: goto label_245a04;
        case 0x245a08u: goto label_245a08;
        case 0x245a0cu: goto label_245a0c;
        case 0x245a10u: goto label_245a10;
        case 0x245a14u: goto label_245a14;
        case 0x245a18u: goto label_245a18;
        case 0x245a1cu: goto label_245a1c;
        case 0x245a20u: goto label_245a20;
        case 0x245a24u: goto label_245a24;
        case 0x245a28u: goto label_245a28;
        case 0x245a2cu: goto label_245a2c;
        case 0x245a30u: goto label_245a30;
        case 0x245a34u: goto label_245a34;
        case 0x245a38u: goto label_245a38;
        case 0x245a3cu: goto label_245a3c;
        case 0x245a40u: goto label_245a40;
        case 0x245a44u: goto label_245a44;
        case 0x245a48u: goto label_245a48;
        case 0x245a4cu: goto label_245a4c;
        case 0x245a50u: goto label_245a50;
        case 0x245a54u: goto label_245a54;
        case 0x245a58u: goto label_245a58;
        case 0x245a5cu: goto label_245a5c;
        case 0x245a60u: goto label_245a60;
        case 0x245a64u: goto label_245a64;
        case 0x245a68u: goto label_245a68;
        case 0x245a6cu: goto label_245a6c;
        case 0x245a70u: goto label_245a70;
        case 0x245a74u: goto label_245a74;
        case 0x245a78u: goto label_245a78;
        case 0x245a7cu: goto label_245a7c;
        case 0x245a80u: goto label_245a80;
        case 0x245a84u: goto label_245a84;
        case 0x245a88u: goto label_245a88;
        case 0x245a8cu: goto label_245a8c;
        case 0x245a90u: goto label_245a90;
        case 0x245a94u: goto label_245a94;
        case 0x245a98u: goto label_245a98;
        case 0x245a9cu: goto label_245a9c;
        case 0x245aa0u: goto label_245aa0;
        case 0x245aa4u: goto label_245aa4;
        case 0x245aa8u: goto label_245aa8;
        case 0x245aacu: goto label_245aac;
        case 0x245ab0u: goto label_245ab0;
        case 0x245ab4u: goto label_245ab4;
        case 0x245ab8u: goto label_245ab8;
        case 0x245abcu: goto label_245abc;
        case 0x245ac0u: goto label_245ac0;
        case 0x245ac4u: goto label_245ac4;
        case 0x245ac8u: goto label_245ac8;
        case 0x245accu: goto label_245acc;
        case 0x245ad0u: goto label_245ad0;
        case 0x245ad4u: goto label_245ad4;
        case 0x245ad8u: goto label_245ad8;
        case 0x245adcu: goto label_245adc;
        case 0x245ae0u: goto label_245ae0;
        case 0x245ae4u: goto label_245ae4;
        case 0x245ae8u: goto label_245ae8;
        case 0x245aecu: goto label_245aec;
        case 0x245af0u: goto label_245af0;
        case 0x245af4u: goto label_245af4;
        case 0x245af8u: goto label_245af8;
        case 0x245afcu: goto label_245afc;
        case 0x245b00u: goto label_245b00;
        case 0x245b04u: goto label_245b04;
        case 0x245b08u: goto label_245b08;
        case 0x245b0cu: goto label_245b0c;
        case 0x245b10u: goto label_245b10;
        case 0x245b14u: goto label_245b14;
        case 0x245b18u: goto label_245b18;
        case 0x245b1cu: goto label_245b1c;
        case 0x245b20u: goto label_245b20;
        case 0x245b24u: goto label_245b24;
        case 0x245b28u: goto label_245b28;
        case 0x245b2cu: goto label_245b2c;
        case 0x245b30u: goto label_245b30;
        case 0x245b34u: goto label_245b34;
        case 0x245b38u: goto label_245b38;
        case 0x245b3cu: goto label_245b3c;
        case 0x245b40u: goto label_245b40;
        case 0x245b44u: goto label_245b44;
        case 0x245b48u: goto label_245b48;
        case 0x245b4cu: goto label_245b4c;
        case 0x245b50u: goto label_245b50;
        case 0x245b54u: goto label_245b54;
        case 0x245b58u: goto label_245b58;
        case 0x245b5cu: goto label_245b5c;
        case 0x245b60u: goto label_245b60;
        case 0x245b64u: goto label_245b64;
        case 0x245b68u: goto label_245b68;
        case 0x245b6cu: goto label_245b6c;
        case 0x245b70u: goto label_245b70;
        case 0x245b74u: goto label_245b74;
        case 0x245b78u: goto label_245b78;
        case 0x245b7cu: goto label_245b7c;
        case 0x245b80u: goto label_245b80;
        case 0x245b84u: goto label_245b84;
        case 0x245b88u: goto label_245b88;
        case 0x245b8cu: goto label_245b8c;
        case 0x245b90u: goto label_245b90;
        case 0x245b94u: goto label_245b94;
        case 0x245b98u: goto label_245b98;
        case 0x245b9cu: goto label_245b9c;
        case 0x245ba0u: goto label_245ba0;
        case 0x245ba4u: goto label_245ba4;
        case 0x245ba8u: goto label_245ba8;
        case 0x245bacu: goto label_245bac;
        case 0x245bb0u: goto label_245bb0;
        case 0x245bb4u: goto label_245bb4;
        case 0x245bb8u: goto label_245bb8;
        case 0x245bbcu: goto label_245bbc;
        case 0x245bc0u: goto label_245bc0;
        case 0x245bc4u: goto label_245bc4;
        case 0x245bc8u: goto label_245bc8;
        case 0x245bccu: goto label_245bcc;
        case 0x245bd0u: goto label_245bd0;
        case 0x245bd4u: goto label_245bd4;
        case 0x245bd8u: goto label_245bd8;
        case 0x245bdcu: goto label_245bdc;
        case 0x245be0u: goto label_245be0;
        case 0x245be4u: goto label_245be4;
        case 0x245be8u: goto label_245be8;
        case 0x245becu: goto label_245bec;
        case 0x245bf0u: goto label_245bf0;
        case 0x245bf4u: goto label_245bf4;
        case 0x245bf8u: goto label_245bf8;
        case 0x245bfcu: goto label_245bfc;
        case 0x245c00u: goto label_245c00;
        case 0x245c04u: goto label_245c04;
        case 0x245c08u: goto label_245c08;
        case 0x245c0cu: goto label_245c0c;
        case 0x245c10u: goto label_245c10;
        case 0x245c14u: goto label_245c14;
        case 0x245c18u: goto label_245c18;
        case 0x245c1cu: goto label_245c1c;
        case 0x245c20u: goto label_245c20;
        case 0x245c24u: goto label_245c24;
        case 0x245c28u: goto label_245c28;
        case 0x245c2cu: goto label_245c2c;
        case 0x245c30u: goto label_245c30;
        case 0x245c34u: goto label_245c34;
        case 0x245c38u: goto label_245c38;
        case 0x245c3cu: goto label_245c3c;
        case 0x245c40u: goto label_245c40;
        case 0x245c44u: goto label_245c44;
        case 0x245c48u: goto label_245c48;
        case 0x245c4cu: goto label_245c4c;
        case 0x245c50u: goto label_245c50;
        case 0x245c54u: goto label_245c54;
        case 0x245c58u: goto label_245c58;
        case 0x245c5cu: goto label_245c5c;
        case 0x245c60u: goto label_245c60;
        case 0x245c64u: goto label_245c64;
        case 0x245c68u: goto label_245c68;
        case 0x245c6cu: goto label_245c6c;
        case 0x245c70u: goto label_245c70;
        case 0x245c74u: goto label_245c74;
        case 0x245c78u: goto label_245c78;
        case 0x245c7cu: goto label_245c7c;
        case 0x245c80u: goto label_245c80;
        case 0x245c84u: goto label_245c84;
        case 0x245c88u: goto label_245c88;
        case 0x245c8cu: goto label_245c8c;
        case 0x245c90u: goto label_245c90;
        case 0x245c94u: goto label_245c94;
        case 0x245c98u: goto label_245c98;
        case 0x245c9cu: goto label_245c9c;
        case 0x245ca0u: goto label_245ca0;
        case 0x245ca4u: goto label_245ca4;
        case 0x245ca8u: goto label_245ca8;
        case 0x245cacu: goto label_245cac;
        case 0x245cb0u: goto label_245cb0;
        case 0x245cb4u: goto label_245cb4;
        case 0x245cb8u: goto label_245cb8;
        case 0x245cbcu: goto label_245cbc;
        case 0x245cc0u: goto label_245cc0;
        case 0x245cc4u: goto label_245cc4;
        case 0x245cc8u: goto label_245cc8;
        case 0x245cccu: goto label_245ccc;
        case 0x245cd0u: goto label_245cd0;
        case 0x245cd4u: goto label_245cd4;
        case 0x245cd8u: goto label_245cd8;
        case 0x245cdcu: goto label_245cdc;
        case 0x245ce0u: goto label_245ce0;
        case 0x245ce4u: goto label_245ce4;
        case 0x245ce8u: goto label_245ce8;
        case 0x245cecu: goto label_245cec;
        case 0x245cf0u: goto label_245cf0;
        case 0x245cf4u: goto label_245cf4;
        case 0x245cf8u: goto label_245cf8;
        case 0x245cfcu: goto label_245cfc;
        case 0x245d00u: goto label_245d00;
        case 0x245d04u: goto label_245d04;
        case 0x245d08u: goto label_245d08;
        case 0x245d0cu: goto label_245d0c;
        case 0x245d10u: goto label_245d10;
        case 0x245d14u: goto label_245d14;
        case 0x245d18u: goto label_245d18;
        case 0x245d1cu: goto label_245d1c;
        case 0x245d20u: goto label_245d20;
        case 0x245d24u: goto label_245d24;
        case 0x245d28u: goto label_245d28;
        case 0x245d2cu: goto label_245d2c;
        case 0x245d30u: goto label_245d30;
        case 0x245d34u: goto label_245d34;
        case 0x245d38u: goto label_245d38;
        case 0x245d3cu: goto label_245d3c;
        case 0x245d40u: goto label_245d40;
        case 0x245d44u: goto label_245d44;
        case 0x245d48u: goto label_245d48;
        case 0x245d4cu: goto label_245d4c;
        case 0x245d50u: goto label_245d50;
        case 0x245d54u: goto label_245d54;
        case 0x245d58u: goto label_245d58;
        case 0x245d5cu: goto label_245d5c;
        case 0x245d60u: goto label_245d60;
        case 0x245d64u: goto label_245d64;
        case 0x245d68u: goto label_245d68;
        case 0x245d6cu: goto label_245d6c;
        case 0x245d70u: goto label_245d70;
        case 0x245d74u: goto label_245d74;
        case 0x245d78u: goto label_245d78;
        case 0x245d7cu: goto label_245d7c;
        case 0x245d80u: goto label_245d80;
        case 0x245d84u: goto label_245d84;
        case 0x245d88u: goto label_245d88;
        case 0x245d8cu: goto label_245d8c;
        case 0x245d90u: goto label_245d90;
        case 0x245d94u: goto label_245d94;
        case 0x245d98u: goto label_245d98;
        case 0x245d9cu: goto label_245d9c;
        case 0x245da0u: goto label_245da0;
        case 0x245da4u: goto label_245da4;
        case 0x245da8u: goto label_245da8;
        case 0x245dacu: goto label_245dac;
        case 0x245db0u: goto label_245db0;
        case 0x245db4u: goto label_245db4;
        case 0x245db8u: goto label_245db8;
        case 0x245dbcu: goto label_245dbc;
        case 0x245dc0u: goto label_245dc0;
        case 0x245dc4u: goto label_245dc4;
        case 0x245dc8u: goto label_245dc8;
        case 0x245dccu: goto label_245dcc;
        case 0x245dd0u: goto label_245dd0;
        case 0x245dd4u: goto label_245dd4;
        case 0x245dd8u: goto label_245dd8;
        case 0x245ddcu: goto label_245ddc;
        case 0x245de0u: goto label_245de0;
        case 0x245de4u: goto label_245de4;
        case 0x245de8u: goto label_245de8;
        case 0x245decu: goto label_245dec;
        case 0x245df0u: goto label_245df0;
        case 0x245df4u: goto label_245df4;
        case 0x245df8u: goto label_245df8;
        case 0x245dfcu: goto label_245dfc;
        case 0x245e00u: goto label_245e00;
        case 0x245e04u: goto label_245e04;
        case 0x245e08u: goto label_245e08;
        case 0x245e0cu: goto label_245e0c;
        case 0x245e10u: goto label_245e10;
        case 0x245e14u: goto label_245e14;
        case 0x245e18u: goto label_245e18;
        case 0x245e1cu: goto label_245e1c;
        case 0x245e20u: goto label_245e20;
        case 0x245e24u: goto label_245e24;
        case 0x245e28u: goto label_245e28;
        case 0x245e2cu: goto label_245e2c;
        case 0x245e30u: goto label_245e30;
        case 0x245e34u: goto label_245e34;
        case 0x245e38u: goto label_245e38;
        case 0x245e3cu: goto label_245e3c;
        case 0x245e40u: goto label_245e40;
        case 0x245e44u: goto label_245e44;
        case 0x245e48u: goto label_245e48;
        case 0x245e4cu: goto label_245e4c;
        case 0x245e50u: goto label_245e50;
        case 0x245e54u: goto label_245e54;
        case 0x245e58u: goto label_245e58;
        case 0x245e5cu: goto label_245e5c;
        case 0x245e60u: goto label_245e60;
        case 0x245e64u: goto label_245e64;
        case 0x245e68u: goto label_245e68;
        case 0x245e6cu: goto label_245e6c;
        case 0x245e70u: goto label_245e70;
        case 0x245e74u: goto label_245e74;
        case 0x245e78u: goto label_245e78;
        case 0x245e7cu: goto label_245e7c;
        case 0x245e80u: goto label_245e80;
        case 0x245e84u: goto label_245e84;
        case 0x245e88u: goto label_245e88;
        case 0x245e8cu: goto label_245e8c;
        case 0x245e90u: goto label_245e90;
        case 0x245e94u: goto label_245e94;
        default: return;
    }

label_2456c8:
    // 0x2456c8: 0x0  nop
    ctx->pc = 0x2456c8u;
    // NOP
label_2456cc:
    // 0x2456cc: 0x0  nop
    ctx->pc = 0x2456ccu;
    // NOP
label_2456d0:
    // 0x2456d0: 0x4010  mfhi        $t0
    ctx->pc = 0x2456d0u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2456d4:
    // 0x2456d4: 0xc0915f0  jal         func_2457C0
label_2456d8:
    if (ctx->pc == 0x2456D8u) {
        ctx->pc = 0x2456D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2456D4u;
        // 0x2456d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2456DCu;
        goto label_2456dc;
    }
    ctx->pc = 0x2456D4u;
    SET_GPR_U32(ctx, 31, 0x2456DCu);
    ctx->pc = 0x2456D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2456D4u;
    // 0x2456d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2457C0u;
    goto label_2457c0;
    ctx->pc = 0x2456DCu;
label_2456dc:
    // 0x2456dc: 0x2aa30064  slti        $v1, $s5, 0x64
    ctx->pc = 0x2456dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)100) ? 1 : 0);
label_2456e0:
    // 0x2456e0: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_2456e4:
    if (ctx->pc == 0x2456E4u) {
        ctx->pc = 0x2456E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2456E0u;
        // 0x2456e4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2456E8u;
        goto label_2456e8;
    }
    ctx->pc = 0x2456E0u;
    {
        const bool branch_taken_0x2456e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2456E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2456E0u;
        // 0x2456e4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2456e0) {
            ctx->pc = 0x245724u;
            goto label_245724;
        }
    }
    ctx->pc = 0x2456E8u;
label_2456e8:
    // 0x2456e8: 0x151fc2  srl         $v1, $s5, 31
    ctx->pc = 0x2456e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
label_2456ec:
    // 0x2456ec: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x2456ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_2456f0:
    // 0x2456f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2456f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2456f4:
    // 0x2456f4: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x2456f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_2456f8:
    // 0x2456f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2456f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2456fc:
    // 0x2456fc: 0x550018  mult        $zero, $v0, $s5
    ctx->pc = 0x2456fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_245700:
    // 0x245700: 0x26c60140  addiu       $a2, $s6, 0x140
    ctx->pc = 0x245700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 320));
label_245704:
    // 0x245704: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x245704u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_245708:
    // 0x245708: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x245708u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24570c:
    // 0x24570c: 0x1010  mfhi        $v0
    ctx->pc = 0x24570cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_245710:
    // 0x245710: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x245710u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_245714:
    // 0x245714: 0xc0915f0  jal         func_2457C0
label_245718:
    if (ctx->pc == 0x245718u) {
        ctx->pc = 0x245718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245714u;
        // 0x245718: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24571Cu;
        goto label_24571c;
    }
    ctx->pc = 0x245714u;
    SET_GPR_U32(ctx, 31, 0x24571Cu);
    ctx->pc = 0x245718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245714u;
    // 0x245718: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2457C0u;
    goto label_2457c0;
    ctx->pc = 0x24571Cu;
label_24571c:
    // 0x24571c: 0x10000013  b           . + 4 + (0x13 << 2)
label_245720:
    if (ctx->pc == 0x245720u) {
        ctx->pc = 0x245720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24571Cu;
        // 0x245720: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245724u;
        goto label_245724;
    }
    ctx->pc = 0x24571Cu;
    {
        const bool branch_taken_0x24571c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24571Cu;
        // 0x245720: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24571c) {
            ctx->pc = 0x24576Cu;
            goto label_24576c;
        }
    }
    ctx->pc = 0x245724u;
label_245724:
    // 0x245724: 0x10000010  b           . + 4 + (0x10 << 2)
label_245728:
    if (ctx->pc == 0x245728u) {
        ctx->pc = 0x245728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245724u;
        // 0x245728: 0xa2c001b3  sb          $zero, 0x1B3($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 435), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24572Cu;
        goto label_24572c;
    }
    ctx->pc = 0x245724u;
    {
        const bool branch_taken_0x245724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245724u;
        // 0x245728: 0xa2c001b3  sb          $zero, 0x1B3($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 435), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245724) {
            ctx->pc = 0x245768u;
            goto label_245768;
        }
    }
    ctx->pc = 0x24572Cu;
label_24572c:
    // 0x24572c: 0xa2c00113  sb          $zero, 0x113($s6)
    ctx->pc = 0x24572cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 275), (uint8_t)GPR_U32(ctx, 0));
label_245730:
    // 0x245730: 0x1000000d  b           . + 4 + (0xD << 2)
label_245734:
    if (ctx->pc == 0x245734u) {
        ctx->pc = 0x245734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245730u;
        // 0x245734: 0xa2c001b3  sb          $zero, 0x1B3($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 435), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245738u;
        goto label_245738;
    }
    ctx->pc = 0x245730u;
    {
        const bool branch_taken_0x245730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245730u;
        // 0x245734: 0xa2c001b3  sb          $zero, 0x1B3($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 435), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245730) {
            ctx->pc = 0x245768u;
            goto label_245768;
        }
    }
    ctx->pc = 0x245738u;
label_245738:
    // 0x245738: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x245738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24573c:
    // 0x24573c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24573cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_245740:
    // 0x245740: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x245740u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_245744:
    // 0x245744: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x245744u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_245748:
    // 0x245748: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x245748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_24574c:
    // 0x24574c: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x24574cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_245750:
    // 0x245750: 0xc0915f0  jal         func_2457C0
label_245754:
    if (ctx->pc == 0x245754u) {
        ctx->pc = 0x245754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245750u;
        // 0x245754: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245758u;
        goto label_245758;
    }
    ctx->pc = 0x245750u;
    SET_GPR_U32(ctx, 31, 0x245758u);
    ctx->pc = 0x245754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245750u;
    // 0x245754: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2457C0u;
    goto label_2457c0;
    ctx->pc = 0x245758u;
label_245758:
    // 0x245758: 0x26d600a0  addiu       $s6, $s6, 0xA0
    ctx->pc = 0x245758u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 160));
label_24575c:
    // 0x24575c: 0xa2c00073  sb          $zero, 0x73($s6)
    ctx->pc = 0x24575cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 115), (uint8_t)GPR_U32(ctx, 0));
label_245760:
    // 0x245760: 0x26d600a0  addiu       $s6, $s6, 0xA0
    ctx->pc = 0x245760u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 160));
label_245764:
    // 0x245764: 0xa2c00073  sb          $zero, 0x73($s6)
    ctx->pc = 0x245764u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 115), (uint8_t)GPR_U32(ctx, 0));
label_245768:
    // 0x245768: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x245768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_24576c:
    // 0x24576c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x24576cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_245770:
    // 0x245770: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x245770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_245774:
    // 0x245774: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x245774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_245778:
    // 0x245778: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x245778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24577c:
    // 0x24577c: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x24577cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_245780:
    // 0x245780: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x245780u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245784:
    // 0x245784: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x245784u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245788:
    // 0x245788: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x245788u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24578c:
    // 0x24578c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x24578cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_245790:
    // 0x245790: 0xc066c72  jal         func_19B1C8
label_245794:
    if (ctx->pc == 0x245794u) {
        ctx->pc = 0x245794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245790u;
        // 0x245794: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245798u;
        goto label_245798;
    }
    ctx->pc = 0x245790u;
    SET_GPR_U32(ctx, 31, 0x245798u);
    ctx->pc = 0x245794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245790u;
    // 0x245794: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x245790u, 0x245798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245798u;
label_245798:
    // 0x245798: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x245798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_24579c:
    // 0x24579c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x24579cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2457a0:
    // 0x2457a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2457a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2457a4:
    // 0x2457a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2457a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2457a8:
    // 0x2457a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2457a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2457ac:
    // 0x2457ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2457acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2457b0:
    // 0x2457b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2457b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2457b4:
    // 0x2457b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2457b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2457b8:
    // 0x2457b8: 0x3e00008  jr          $ra
label_2457bc:
    if (ctx->pc == 0x2457BCu) {
        ctx->pc = 0x2457BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2457B8u;
        // 0x2457bc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2457C0u;
        goto label_2457c0;
    }
    ctx->pc = 0x2457B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2457BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2457B8u;
        // 0x2457bc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2457B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2457C0u;
label_2457c0:
    // 0x2457c0: 0x90a20006  lbu         $v0, 0x6($a1)
    ctx->pc = 0x2457c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
label_2457c4:
    // 0x2457c4: 0x2841000f  slti        $at, $v0, 0xF
    ctx->pc = 0x2457c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
label_2457c8:
    // 0x2457c8: 0x10200049  beqz        $at, . + 4 + (0x49 << 2)
label_2457cc:
    if (ctx->pc == 0x2457CCu) {
        ctx->pc = 0x2457D0u;
        goto label_2457d0;
    }
    ctx->pc = 0x2457C8u;
    {
        const bool branch_taken_0x2457c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2457c8) {
            ctx->pc = 0x2458F0u;
            goto label_2458f0;
        }
    }
    ctx->pc = 0x2457D0u;
label_2457d0:
    // 0x2457d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2457d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2457d4:
    // 0x2457d4: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x2457d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_2457d8:
    // 0x2457d8: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x2457d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
label_2457dc:
    // 0x2457dc: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x2457dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_2457e0:
    // 0x2457e0: 0x2442eab0  addiu       $v0, $v0, -0x1550
    ctx->pc = 0x2457e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961840));
label_2457e4:
    // 0x2457e4: 0x436821  addu        $t5, $v0, $v1
    ctx->pc = 0x2457e4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2457e8:
    // 0x2457e8: 0x95ab0000  lhu         $t3, 0x0($t5)
    ctx->pc = 0x2457e8u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
label_2457ec:
    // 0x2457ec: 0x5610003  bgez        $t3, . + 4 + (0x3 << 2)
label_2457f0:
    if (ctx->pc == 0x2457F0u) {
        ctx->pc = 0x2457F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2457ECu;
        // 0x2457f0: 0xb1043  sra         $v0, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2457F4u;
        goto label_2457f4;
    }
    ctx->pc = 0x2457ECu;
    {
        const bool branch_taken_0x2457ec = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x2457F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2457ECu;
        // 0x2457f0: 0xb1043  sra         $v0, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2457ec) {
            ctx->pc = 0x2457FCu;
            goto label_2457fc;
        }
    }
    ctx->pc = 0x2457F4u;
label_2457f4:
    // 0x2457f4: 0x25620001  addiu       $v0, $t3, 0x1
    ctx->pc = 0x2457f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_2457f8:
    // 0x2457f8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2457f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_2457fc:
    // 0x2457fc: 0x90a30006  lbu         $v1, 0x6($a1)
    ctx->pc = 0x2457fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
label_245800:
    // 0x245800: 0xe26023  subu        $t4, $a3, $v0
    ctx->pc = 0x245800u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_245804:
    // 0x245804: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x245804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_245808:
    // 0x245808: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x245808u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24580c:
    // 0x24580c: 0x4b1821  addu        $v1, $v0, $t3
    ctx->pc = 0x24580cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_245810:
    // 0x245810: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_245814:
    if (ctx->pc == 0x245814u) {
        ctx->pc = 0x245814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245810u;
        // 0x245814: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245818u;
        goto label_245818;
    }
    ctx->pc = 0x245810u;
    {
        const bool branch_taken_0x245810 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x245814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245810u;
        // 0x245814: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245810) {
            ctx->pc = 0x245820u;
            goto label_245820;
        }
    }
    ctx->pc = 0x245818u;
label_245818:
    // 0x245818: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x245818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_24581c:
    // 0x24581c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x24581cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_245820:
    // 0x245820: 0x1821023  subu        $v0, $t4, $v0
    ctx->pc = 0x245820u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_245824:
    // 0x245824: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x245824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_245828:
    // 0x245828: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x245828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_24582c:
    // 0x24582c: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x24582cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_245830:
    // 0x245830: 0xa4c20080  sh          $v0, 0x80($a2)
    ctx->pc = 0x245830u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 128), (uint16_t)GPR_U32(ctx, 2));
label_245834:
    // 0x245834: 0x90ab0006  lbu         $t3, 0x6($a1)
    ctx->pc = 0x245834u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
label_245838:
    // 0x245838: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x245838u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
label_24583c:
    // 0x24583c: 0x6b1823  subu        $v1, $v1, $t3
    ctx->pc = 0x24583cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_245840:
    // 0x245840: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x245840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_245844:
    // 0x245844: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_245848:
    if (ctx->pc == 0x245848u) {
        ctx->pc = 0x245848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245844u;
        // 0x245848: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24584Cu;
        goto label_24584c;
    }
    ctx->pc = 0x245844u;
    {
        const bool branch_taken_0x245844 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x245848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245844u;
        // 0x245848: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245844) {
            ctx->pc = 0x245854u;
            goto label_245854;
        }
    }
    ctx->pc = 0x24584Cu;
label_24584c:
    // 0x24584c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x24584cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_245850:
    // 0x245850: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x245850u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_245854:
    // 0x245854: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x245854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_245858:
    // 0x245858: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x245858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_24585c:
    // 0x24585c: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x24585cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_245860:
    // 0x245860: 0x11400018  beqz        $t2, . + 4 + (0x18 << 2)
label_245864:
    if (ctx->pc == 0x245864u) {
        ctx->pc = 0x245864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245860u;
        // 0x245864: 0xa4c20090  sh          $v0, 0x90($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 144), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245868u;
        goto label_245868;
    }
    ctx->pc = 0x245860u;
    {
        const bool branch_taken_0x245860 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x245864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245860u;
        // 0x245864: 0xa4c20090  sh          $v0, 0x90($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 144), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245860) {
            ctx->pc = 0x2458C4u;
            goto label_2458c4;
        }
    }
    ctx->pc = 0x245868u;
label_245868:
    // 0x245868: 0x90a30006  lbu         $v1, 0x6($a1)
    ctx->pc = 0x245868u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
label_24586c:
    // 0x24586c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x24586cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_245870:
    // 0x245870: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x245870u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_245874:
    // 0x245874: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x245874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_245878:
    // 0x245878: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x245878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24587c:
    // 0x24587c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_245880:
    if (ctx->pc == 0x245880u) {
        ctx->pc = 0x245880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24587Cu;
        // 0x245880: 0x22883  sra         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245884u;
        goto label_245884;
    }
    ctx->pc = 0x24587Cu;
    {
        const bool branch_taken_0x24587c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x245880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24587Cu;
        // 0x245880: 0x22883  sra         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24587c) {
            ctx->pc = 0x24588Cu;
            goto label_24588c;
        }
    }
    ctx->pc = 0x245884u;
label_245884:
    // 0x245884: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x245884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_245888:
    // 0x245888: 0x22883  sra         $a1, $v0, 2
    ctx->pc = 0x245888u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 2));
label_24588c:
    // 0x24588c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x24588cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_245890:
    // 0x245890: 0x24030086  addiu       $v1, $zero, 0x86
    ctx->pc = 0x245890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
label_245894:
    // 0x245894: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x245894u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_245898:
    // 0x245898: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x245898u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_24589c:
    // 0x24589c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x24589cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2458a0:
    // 0x2458a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2458a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2458a4:
    // 0x2458a4: 0x2442009e  addiu       $v0, $v0, 0x9E
    ctx->pc = 0x2458a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 158));
label_2458a8:
    // 0x2458a8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2458a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2458ac:
    // 0x2458ac: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2458acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2458b0:
    // 0x2458b0: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x2458b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_2458b4:
    // 0x2458b4: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x2458b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_2458b8:
    // 0x2458b8: 0xa4c30082  sh          $v1, 0x82($a2)
    ctx->pc = 0x2458b8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 130), (uint16_t)GPR_U32(ctx, 3));
label_2458bc:
    // 0x2458bc: 0x10000029  b           . + 4 + (0x29 << 2)
label_2458c0:
    if (ctx->pc == 0x2458C0u) {
        ctx->pc = 0x2458C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2458BCu;
        // 0x2458c0: 0xa4c20092  sh          $v0, 0x92($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 146), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2458C4u;
        goto label_2458c4;
    }
    ctx->pc = 0x2458BCu;
    {
        const bool branch_taken_0x2458bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2458C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2458BCu;
        // 0x2458c0: 0xa4c20092  sh          $v0, 0x92($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 146), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2458bc) {
            ctx->pc = 0x245964u;
            goto label_245964;
        }
    }
    ctx->pc = 0x2458C4u;
label_2458c4:
    // 0x2458c4: 0x90a50006  lbu         $a1, 0x6($a1)
    ctx->pc = 0x2458c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
label_2458c8:
    // 0x2458c8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2458c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2458cc:
    // 0x2458cc: 0x240300cc  addiu       $v1, $zero, 0xCC
    ctx->pc = 0x2458ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
label_2458d0:
    // 0x2458d0: 0x34028060  ori         $v0, $zero, 0x8060
    ctx->pc = 0x2458d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32864);
label_2458d4:
    // 0x2458d4: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x2458d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2458d8:
    // 0x2458d8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2458d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2458dc:
    // 0x2458dc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2458dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2458e0:
    // 0x2458e0: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x2458e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_2458e4:
    // 0x2458e4: 0xa4c30082  sh          $v1, 0x82($a2)
    ctx->pc = 0x2458e4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 130), (uint16_t)GPR_U32(ctx, 3));
label_2458e8:
    // 0x2458e8: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2458ec:
    if (ctx->pc == 0x2458ECu) {
        ctx->pc = 0x2458ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2458E8u;
        // 0x2458ec: 0xa4c20092  sh          $v0, 0x92($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 146), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2458F0u;
        goto label_2458f0;
    }
    ctx->pc = 0x2458E8u;
    {
        const bool branch_taken_0x2458e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2458ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2458E8u;
        // 0x2458ec: 0xa4c20092  sh          $v0, 0x92($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 146), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2458e8) {
            ctx->pc = 0x245964u;
            goto label_245964;
        }
    }
    ctx->pc = 0x2458F0u;
label_2458f0:
    // 0x2458f0: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x2458f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_2458f4:
    // 0x2458f4: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x2458f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_2458f8:
    // 0x2458f8: 0x2442eab0  addiu       $v0, $v0, -0x1550
    ctx->pc = 0x2458f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961840));
label_2458fc:
    // 0x2458fc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2458fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_245900:
    // 0x245900: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x245900u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_245904:
    // 0x245904: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x245904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_245908:
    // 0x245908: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x245908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_24590c:
    // 0x24590c: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x24590cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_245910:
    // 0x245910: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x245910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_245914:
    // 0x245914: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x245914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_245918:
    // 0x245918: 0xa4c30080  sh          $v1, 0x80($a2)
    ctx->pc = 0x245918u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 128), (uint16_t)GPR_U32(ctx, 3));
label_24591c:
    // 0x24591c: 0x1140000d  beqz        $t2, . + 4 + (0xD << 2)
label_245920:
    if (ctx->pc == 0x245920u) {
        ctx->pc = 0x245920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24591Cu;
        // 0x245920: 0xa4c20090  sh          $v0, 0x90($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 144), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245924u;
        goto label_245924;
    }
    ctx->pc = 0x24591Cu;
    {
        const bool branch_taken_0x24591c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x245920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24591Cu;
        // 0x245920: 0xa4c20090  sh          $v0, 0x90($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 144), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24591c) {
            ctx->pc = 0x245954u;
            goto label_245954;
        }
    }
    ctx->pc = 0x245924u;
label_245924:
    // 0x245924: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x245924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_245928:
    // 0x245928: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x245928u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_24592c:
    // 0x24592c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x24592cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_245930:
    // 0x245930: 0x24430086  addiu       $v1, $v0, 0x86
    ctx->pc = 0x245930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 134));
label_245934:
    // 0x245934: 0x2442009e  addiu       $v0, $v0, 0x9E
    ctx->pc = 0x245934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 158));
label_245938:
    // 0x245938: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x245938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_24593c:
    // 0x24593c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x24593cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_245940:
    // 0x245940: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x245940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_245944:
    // 0x245944: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x245944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_245948:
    // 0x245948: 0xa4c30082  sh          $v1, 0x82($a2)
    ctx->pc = 0x245948u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 130), (uint16_t)GPR_U32(ctx, 3));
label_24594c:
    // 0x24594c: 0x10000005  b           . + 4 + (0x5 << 2)
label_245950:
    if (ctx->pc == 0x245950u) {
        ctx->pc = 0x245950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24594Cu;
        // 0x245950: 0xa4c20092  sh          $v0, 0x92($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 146), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245954u;
        goto label_245954;
    }
    ctx->pc = 0x24594Cu;
    {
        const bool branch_taken_0x24594c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24594Cu;
        // 0x245950: 0xa4c20092  sh          $v0, 0x92($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 146), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24594c) {
            ctx->pc = 0x245964u;
            goto label_245964;
        }
    }
    ctx->pc = 0x245954u;
label_245954:
    // 0x245954: 0x24037f60  addiu       $v1, $zero, 0x7F60
    ctx->pc = 0x245954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32608));
label_245958:
    // 0x245958: 0x34028060  ori         $v0, $zero, 0x8060
    ctx->pc = 0x245958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32864);
label_24595c:
    // 0x24595c: 0xa4c30082  sh          $v1, 0x82($a2)
    ctx->pc = 0x24595cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 130), (uint16_t)GPR_U32(ctx, 3));
label_245960:
    // 0x245960: 0xa4c20092  sh          $v0, 0x92($a2)
    ctx->pc = 0x245960u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 146), (uint16_t)GPR_U32(ctx, 2));
label_245964:
    // 0x245964: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x245964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_245968:
    // 0x245968: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x245968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_24596c:
    // 0x24596c: 0x2442ea90  addiu       $v0, $v0, -0x1570
    ctx->pc = 0x24596cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961808));
label_245970:
    // 0x245970: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x245970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_245974:
    // 0x245974: 0x435021  addu        $t2, $v0, $v1
    ctx->pc = 0x245974u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_245978:
    // 0x245978: 0x24040208  addiu       $a0, $zero, 0x208
    ctx->pc = 0x245978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
label_24597c:
    // 0x24597c: 0x85480000  lh          $t0, 0x0($t2)
    ctx->pc = 0x24597cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
label_245980:
    // 0x245980: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x245980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_245984:
    // 0x245984: 0x2442eab0  addiu       $v0, $v0, -0x1550
    ctx->pc = 0x245984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961840));
label_245988:
    // 0x245988: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x245988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24598c:
    // 0x24598c: 0x2403007c  addiu       $v1, $zero, 0x7C
    ctx->pc = 0x24598cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
label_245990:
    // 0x245990: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x245990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_245994:
    // 0x245994: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x245994u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_245998:
    // 0x245998: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x245998u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_24599c:
    // 0x24599c: 0xa4c80078  sh          $t0, 0x78($a2)
    ctx->pc = 0x24599cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 120), (uint16_t)GPR_U32(ctx, 8));
label_2459a0:
    // 0x2459a0: 0xa4c5007a  sh          $a1, 0x7A($a2)
    ctx->pc = 0x2459a0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 122), (uint16_t)GPR_U32(ctx, 5));
label_2459a4:
    // 0x2459a4: 0x84480000  lh          $t0, 0x0($v0)
    ctx->pc = 0x2459a4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2459a8:
    // 0x2459a8: 0x85450000  lh          $a1, 0x0($t2)
    ctx->pc = 0x2459a8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
label_2459ac:
    // 0x2459ac: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x2459acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_2459b0:
    // 0x2459b0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2459b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2459b4:
    // 0x2459b4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2459b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_2459b8:
    // 0x2459b8: 0xa4c50088  sh          $a1, 0x88($a2)
    ctx->pc = 0x2459b8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 136), (uint16_t)GPR_U32(ctx, 5));
label_2459bc:
    // 0x2459bc: 0xa4c4008a  sh          $a0, 0x8A($a2)
    ctx->pc = 0x2459bcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 138), (uint16_t)GPR_U32(ctx, 4));
label_2459c0:
    // 0x2459c0: 0xa0c90073  sb          $t1, 0x73($a2)
    ctx->pc = 0x2459c0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 115), (uint8_t)GPR_U32(ctx, 9));
label_2459c4:
    // 0x2459c4: 0x95480000  lhu         $t0, 0x0($t2)
    ctx->pc = 0x2459c4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
label_2459c8:
    // 0x2459c8: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x2459c8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2459cc:
    // 0x2459cc: 0x82138  dsll        $a0, $t0, 4
    ctx->pc = 0x2459ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) << 4);
label_2459d0:
    // 0x2459d0: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x2459d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_2459d4:
    // 0x2459d4: 0x3484000a  ori         $a0, $a0, 0xA
    ctx->pc = 0x2459d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
label_2459d8:
    // 0x2459d8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2459d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_2459dc:
    // 0x2459dc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2459dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_2459e0:
    // 0x2459e0: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2459e0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_2459e4:
    // 0x2459e4: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x2459e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
label_2459e8:
    // 0x2459e8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2459e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_2459ec:
    // 0x2459ec: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2459ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2459f0:
    // 0x2459f0: 0xfcc30040  sd          $v1, 0x40($a2)
    ctx->pc = 0x2459f0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 64), GPR_U64(ctx, 3));
label_2459f4:
    // 0x2459f4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2459f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2459f8:
    // 0x2459f8: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x2459f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_2459fc:
    // 0x2459fc: 0x3e00008  jr          $ra
label_245a00:
    if (ctx->pc == 0x245A00u) {
        ctx->pc = 0x245A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2459FCu;
        // 0x245a00: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245A04u;
        goto label_245a04;
    }
    ctx->pc = 0x2459FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2459FCu;
        // 0x245a00: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2459FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245A04u;
label_245a04:
    // 0x245a04: 0x0  nop
    ctx->pc = 0x245a04u;
    // NOP
label_245a08:
    // 0x245a08: 0x0  nop
    ctx->pc = 0x245a08u;
    // NOP
label_245a0c:
    // 0x245a0c: 0x0  nop
    ctx->pc = 0x245a0cu;
    // NOP
label_245a10:
    // 0x245a10: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x245a10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245a14:
    // 0x245a14: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x245a14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245a18:
    // 0x245a18: 0x3c07004b  lui         $a3, 0x4B
    ctx->pc = 0x245a18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)75 << 16));
label_245a1c:
    // 0x245a1c: 0x24e703a0  addiu       $a3, $a3, 0x3A0
    ctx->pc = 0x245a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 928));
label_245a20:
    // 0x245a20: 0xe91821  addu        $v1, $a3, $t1
    ctx->pc = 0x245a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_245a24:
    // 0x245a24: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x245a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_245a28:
    // 0x245a28: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
label_245a2c:
    if (ctx->pc == 0x245A2Cu) {
        ctx->pc = 0x245A30u;
        goto label_245a30;
    }
    ctx->pc = 0x245A28u;
    {
        const bool branch_taken_0x245a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x245a28) {
            ctx->pc = 0x245A40u;
            goto label_245a40;
        }
    }
    ctx->pc = 0x245A30u;
label_245a30:
    // 0x245a30: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x245a30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_245a34:
    // 0x245a34: 0x29030002  slti        $v1, $t0, 0x2
    ctx->pc = 0x245a34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
label_245a38:
    // 0x245a38: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_245a3c:
    if (ctx->pc == 0x245A3Cu) {
        ctx->pc = 0x245A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A38u;
        // 0x245a3c: 0x25290070  addiu       $t1, $t1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245A40u;
        goto label_245a40;
    }
    ctx->pc = 0x245A38u;
    {
        const bool branch_taken_0x245a38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x245A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A38u;
        // 0x245a3c: 0x25290070  addiu       $t1, $t1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245a38) {
            ctx->pc = 0x245A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_245a20;
        }
    }
    ctx->pc = 0x245A40u;
label_245a40:
    // 0x245a40: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x245a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_245a44:
    // 0x245a44: 0x683821  addu        $a3, $v1, $t0
    ctx->pc = 0x245a44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_245a48:
    // 0x245a48: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x245a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
label_245a4c:
    // 0x245a4c: 0x740c0  sll         $t0, $a3, 3
    ctx->pc = 0x245a4cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_245a50:
    // 0x245a50: 0x24630230  addiu       $v1, $v1, 0x230
    ctx->pc = 0x245a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 560));
label_245a54:
    // 0x245a54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x245a54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_245a58:
    // 0x245a58: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x245a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_245a5c:
    // 0x245a5c: 0x8c690010  lw          $t1, 0x10($v1)
    ctx->pc = 0x245a5cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_245a60:
    // 0x245a60: 0x31280001  andi        $t0, $t1, 0x1
    ctx->pc = 0x245a60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
label_245a64:
    // 0x245a64: 0x15070012  bne         $t0, $a3, . + 4 + (0x12 << 2)
label_245a68:
    if (ctx->pc == 0x245A68u) {
        ctx->pc = 0x245A6Cu;
        goto label_245a6c;
    }
    ctx->pc = 0x245A64u;
    {
        const bool branch_taken_0x245a64 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x245a64) {
            ctx->pc = 0x245AB0u;
            goto label_245ab0;
        }
    }
    ctx->pc = 0x245A6Cu;
label_245a6c:
    // 0x245a6c: 0x90670000  lbu         $a3, 0x0($v1)
    ctx->pc = 0x245a6cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_245a70:
    // 0x245a70: 0x10e0056f  beqz        $a3, . + 4 + (0x56F << 2)
label_245a74:
    if (ctx->pc == 0x245A74u) {
        ctx->pc = 0x245A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A70u;
        // 0x245a74: 0x25270001  addiu       $a3, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245A78u;
        goto label_245a78;
    }
    ctx->pc = 0x245A70u;
    {
        const bool branch_taken_0x245a70 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x245A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A70u;
        // 0x245a74: 0x25270001  addiu       $a3, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245a70) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x245A78u;
label_245a78:
    // 0x245a78: 0xac670010  sw          $a3, 0x10($v1)
    ctx->pc = 0x245a78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 7));
label_245a7c:
    // 0x245a7c: 0x8c670010  lw          $a3, 0x10($v1)
    ctx->pc = 0x245a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_245a80:
    // 0x245a80: 0x73842  srl         $a3, $a3, 1
    ctx->pc = 0x245a80u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
label_245a84:
    // 0x245a84: 0x2ce10005  sltiu       $at, $a3, 0x5
    ctx->pc = 0x245a84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_245a88:
    // 0x245a88: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_245a8c:
    if (ctx->pc == 0x245A8Cu) {
        ctx->pc = 0x245A90u;
        goto label_245a90;
    }
    ctx->pc = 0x245A88u;
    {
        const bool branch_taken_0x245a88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x245a88) {
            ctx->pc = 0x245A98u;
            goto label_245a98;
        }
    }
    ctx->pc = 0x245A90u;
label_245a90:
    // 0x245a90: 0x10000003  b           . + 4 + (0x3 << 2)
label_245a94:
    if (ctx->pc == 0x245A94u) {
        ctx->pc = 0x245A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A90u;
        // 0x245a94: 0xa467000e  sh          $a3, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245A98u;
        goto label_245a98;
    }
    ctx->pc = 0x245A90u;
    {
        const bool branch_taken_0x245a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A90u;
        // 0x245a94: 0xa467000e  sh          $a3, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245a90) {
            ctx->pc = 0x245AA0u;
            goto label_245aa0;
        }
    }
    ctx->pc = 0x245A98u;
label_245a98:
    // 0x245a98: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x245a98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_245a9c:
    // 0x245a9c: 0xa467000e  sh          $a3, 0xE($v1)
    ctx->pc = 0x245a9cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 7));
label_245aa0:
    // 0x245aa0: 0xa460000c  sh          $zero, 0xC($v1)
    ctx->pc = 0x245aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 0));
label_245aa4:
    // 0x245aa4: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x245aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_245aa8:
    // 0x245aa8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x245aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_245aac:
    // 0x245aac: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x245aacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_245ab0:
    // 0x245ab0: 0x908a0270  lbu         $t2, 0x270($a0)
    ctx->pc = 0x245ab0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 624)));
label_245ab4:
    // 0x245ab4: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x245ab4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
label_245ab8:
    // 0x245ab8: 0x2407005c  addiu       $a3, $zero, 0x5C
    ctx->pc = 0x245ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_245abc:
    // 0x245abc: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x245abcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
label_245ac0:
    // 0x245ac0: 0x1494824  and         $t1, $t2, $t1
    ctx->pc = 0x245ac0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
label_245ac4:
    // 0x245ac4: 0xa0690008  sb          $t1, 0x8($v1)
    ctx->pc = 0x245ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 9));
label_245ac8:
    // 0x245ac8: 0xa0670007  sb          $a3, 0x7($v1)
    ctx->pc = 0x245ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 7));
label_245acc:
    // 0x245acc: 0x8c690014  lw          $t1, 0x14($v1)
    ctx->pc = 0x245accu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_245ad0:
    // 0x245ad0: 0x1283824  and         $a3, $t1, $t0
    ctx->pc = 0x245ad0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
label_245ad4:
    // 0x245ad4: 0x10e8006e  beq         $a3, $t0, . + 4 + (0x6E << 2)
label_245ad8:
    if (ctx->pc == 0x245AD8u) {
        ctx->pc = 0x245ADCu;
        goto label_245adc;
    }
    ctx->pc = 0x245AD4u;
    {
        const bool branch_taken_0x245ad4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 8));
        if (branch_taken_0x245ad4) {
            ctx->pc = 0x245C90u;
            goto label_245c90;
        }
    }
    ctx->pc = 0x245ADCu;
label_245adc:
    // 0x245adc: 0x90a80241  lbu         $t0, 0x241($a1)
    ctx->pc = 0x245adcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 577)));
label_245ae0:
    // 0x245ae0: 0x100082a  slt         $at, $t0, $zero
    ctx->pc = 0x245ae0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_245ae4:
    // 0x245ae4: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
label_245ae8:
    if (ctx->pc == 0x245AE8u) {
        ctx->pc = 0x245AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245AE4u;
        // 0x245ae8: 0x29070029  slti        $a3, $t0, 0x29 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)41) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x245AECu;
        goto label_245aec;
    }
    ctx->pc = 0x245AE4u;
    {
        const bool branch_taken_0x245ae4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x245AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245AE4u;
        // 0x245ae8: 0x29070029  slti        $a3, $t0, 0x29 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)41) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x245ae4) {
            ctx->pc = 0x245B50u;
            goto label_245b50;
        }
    }
    ctx->pc = 0x245AECu;
label_245aec:
    // 0x245aec: 0x29010029  slti        $at, $t0, 0x29
    ctx->pc = 0x245aecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)41) ? 1 : 0);
label_245af0:
    // 0x245af0: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
label_245af4:
    if (ctx->pc == 0x245AF4u) {
        ctx->pc = 0x245AF8u;
        goto label_245af8;
    }
    ctx->pc = 0x245AF0u;
    {
        const bool branch_taken_0x245af0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x245af0) {
            ctx->pc = 0x245B50u;
            goto label_245b50;
        }
    }
    ctx->pc = 0x245AF8u;
label_245af8:
    // 0x245af8: 0x3c080008  lui         $t0, 0x8
    ctx->pc = 0x245af8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8 << 16));
label_245afc:
    // 0x245afc: 0x1283824  and         $a3, $t1, $t0
    ctx->pc = 0x245afcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
label_245b00:
    // 0x245b00: 0x14e00063  bnez        $a3, . + 4 + (0x63 << 2)
label_245b04:
    if (ctx->pc == 0x245B04u) {
        ctx->pc = 0x245B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B00u;
        // 0x245b04: 0x1283825  or          $a3, $t1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245B08u;
        goto label_245b08;
    }
    ctx->pc = 0x245B00u;
    {
        const bool branch_taken_0x245b00 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x245B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B00u;
        // 0x245b04: 0x1283825  or          $a3, $t1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b00) {
            ctx->pc = 0x245C90u;
            goto label_245c90;
        }
    }
    ctx->pc = 0x245B08u;
label_245b08:
    // 0x245b08: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x245b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_245b0c:
    // 0x245b0c: 0xac670014  sw          $a3, 0x14($v1)
    ctx->pc = 0x245b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 7));
label_245b10:
    // 0x245b10: 0x9027eb03  lbu         $a3, -0x14FD($at)
    ctx->pc = 0x245b10u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961923)));
label_245b14:
    // 0x245b14: 0x7443c  dsll32      $t0, $a3, 16
    ctx->pc = 0x245b14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 16));
label_245b18:
    // 0x245b18: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x245b18u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
label_245b1c:
    // 0x245b1c: 0x1900005c  blez        $t0, . + 4 + (0x5C << 2)
label_245b20:
    if (ctx->pc == 0x245B20u) {
        ctx->pc = 0x245B24u;
        goto label_245b24;
    }
    ctx->pc = 0x245B1Cu;
    {
        const bool branch_taken_0x245b1c = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x245b1c) {
            ctx->pc = 0x245C90u;
            goto label_245c90;
        }
    }
    ctx->pc = 0x245B24u;
label_245b24:
    // 0x245b24: 0x8467000e  lh          $a3, 0xE($v1)
    ctx->pc = 0x245b24u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_245b28:
    // 0x245b28: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x245b28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_245b2c:
    // 0x245b2c: 0x28e10064  slti        $at, $a3, 0x64
    ctx->pc = 0x245b2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)100) ? 1 : 0);
label_245b30:
    // 0x245b30: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_245b34:
    if (ctx->pc == 0x245B34u) {
        ctx->pc = 0x245B38u;
        goto label_245b38;
    }
    ctx->pc = 0x245B30u;
    {
        const bool branch_taken_0x245b30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x245b30) {
            ctx->pc = 0x245B40u;
            goto label_245b40;
        }
    }
    ctx->pc = 0x245B38u;
label_245b38:
    // 0x245b38: 0x10000003  b           . + 4 + (0x3 << 2)
label_245b3c:
    if (ctx->pc == 0x245B3Cu) {
        ctx->pc = 0x245B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B38u;
        // 0x245b3c: 0xa467000e  sh          $a3, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245B40u;
        goto label_245b40;
    }
    ctx->pc = 0x245B38u;
    {
        const bool branch_taken_0x245b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B38u;
        // 0x245b3c: 0xa467000e  sh          $a3, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b38) {
            ctx->pc = 0x245B48u;
            goto label_245b48;
        }
    }
    ctx->pc = 0x245B40u;
label_245b40:
    // 0x245b40: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x245b40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_245b44:
    // 0x245b44: 0xa467000e  sh          $a3, 0xE($v1)
    ctx->pc = 0x245b44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 7));
label_245b48:
    // 0x245b48: 0x10000051  b           . + 4 + (0x51 << 2)
label_245b4c:
    if (ctx->pc == 0x245B4Cu) {
        ctx->pc = 0x245B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B48u;
        // 0x245b4c: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245B50u;
        goto label_245b50;
    }
    ctx->pc = 0x245B48u;
    {
        const bool branch_taken_0x245b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B48u;
        // 0x245b4c: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b48) {
            ctx->pc = 0x245C90u;
            goto label_245c90;
        }
    }
    ctx->pc = 0x245B50u;
label_245b50:
    // 0x245b50: 0x14e0001a  bnez        $a3, . + 4 + (0x1A << 2)
label_245b54:
    if (ctx->pc == 0x245B54u) {
        ctx->pc = 0x245B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B50u;
        // 0x245b54: 0x290100d8  slti        $at, $t0, 0xD8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)216) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x245B58u;
        goto label_245b58;
    }
    ctx->pc = 0x245B50u;
    {
        const bool branch_taken_0x245b50 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x245B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B50u;
        // 0x245b54: 0x290100d8  slti        $at, $t0, 0xD8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)216) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b50) {
            ctx->pc = 0x245BBCu;
            goto label_245bbc;
        }
    }
    ctx->pc = 0x245B58u;
label_245b58:
    // 0x245b58: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_245b5c:
    if (ctx->pc == 0x245B5Cu) {
        ctx->pc = 0x245B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B58u;
        // 0x245b5c: 0x3c080010  lui         $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245B60u;
        goto label_245b60;
    }
    ctx->pc = 0x245B58u;
    {
        const bool branch_taken_0x245b58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x245B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B58u;
        // 0x245b5c: 0x3c080010  lui         $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b58) {
            ctx->pc = 0x245BBCu;
            goto label_245bbc;
        }
    }
    ctx->pc = 0x245B60u;
label_245b60:
    // 0x245b60: 0x1283824  and         $a3, $t1, $t0
    ctx->pc = 0x245b60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
label_245b64:
    // 0x245b64: 0x14e0004a  bnez        $a3, . + 4 + (0x4A << 2)
label_245b68:
    if (ctx->pc == 0x245B68u) {
        ctx->pc = 0x245B6Cu;
        goto label_245b6c;
    }
    ctx->pc = 0x245B64u;
    {
        const bool branch_taken_0x245b64 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x245b64) {
            ctx->pc = 0x245C90u;
            goto label_245c90;
        }
    }
    ctx->pc = 0x245B6Cu;
label_245b6c:
    // 0x245b6c: 0x8c670014  lw          $a3, 0x14($v1)
    ctx->pc = 0x245b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_245b70:
    // 0x245b70: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x245b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_245b74:
    // 0x245b74: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x245b74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_245b78:
    // 0x245b78: 0xac670014  sw          $a3, 0x14($v1)
    ctx->pc = 0x245b78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 7));
label_245b7c:
    // 0x245b7c: 0x9027eb04  lbu         $a3, -0x14FC($at)
    ctx->pc = 0x245b7cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961924)));
label_245b80:
    // 0x245b80: 0x7443c  dsll32      $t0, $a3, 16
    ctx->pc = 0x245b80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 16));
label_245b84:
    // 0x245b84: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x245b84u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
label_245b88:
    // 0x245b88: 0x19000041  blez        $t0, . + 4 + (0x41 << 2)
label_245b8c:
    if (ctx->pc == 0x245B8Cu) {
        ctx->pc = 0x245B90u;
        goto label_245b90;
    }
    ctx->pc = 0x245B88u;
    {
        const bool branch_taken_0x245b88 = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x245b88) {
            ctx->pc = 0x245C90u;
            goto label_245c90;
        }
    }
    ctx->pc = 0x245B90u;
label_245b90:
    // 0x245b90: 0x8467000e  lh          $a3, 0xE($v1)
    ctx->pc = 0x245b90u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_245b94:
    // 0x245b94: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x245b94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_245b98:
    // 0x245b98: 0x28e10064  slti        $at, $a3, 0x64
    ctx->pc = 0x245b98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)100) ? 1 : 0);
label_245b9c:
    // 0x245b9c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_245ba0:
    if (ctx->pc == 0x245BA0u) {
        ctx->pc = 0x245BA4u;
        goto label_245ba4;
    }
    ctx->pc = 0x245B9Cu;
    {
        const bool branch_taken_0x245b9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x245b9c) {
            ctx->pc = 0x245BACu;
            goto label_245bac;
        }
    }
    ctx->pc = 0x245BA4u;
label_245ba4:
    // 0x245ba4: 0x10000003  b           . + 4 + (0x3 << 2)
label_245ba8:
    if (ctx->pc == 0x245BA8u) {
        ctx->pc = 0x245BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BA4u;
        // 0x245ba8: 0xa467000e  sh          $a3, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245BACu;
        goto label_245bac;
    }
    ctx->pc = 0x245BA4u;
    {
        const bool branch_taken_0x245ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BA4u;
        // 0x245ba8: 0xa467000e  sh          $a3, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245ba4) {
            ctx->pc = 0x245BB4u;
            goto label_245bb4;
        }
    }
    ctx->pc = 0x245BACu;
label_245bac:
    // 0x245bac: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x245bacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_245bb0:
    // 0x245bb0: 0xa467000e  sh          $a3, 0xE($v1)
    ctx->pc = 0x245bb0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 7));
label_245bb4:
    // 0x245bb4: 0x10000036  b           . + 4 + (0x36 << 2)
label_245bb8:
    if (ctx->pc == 0x245BB8u) {
        ctx->pc = 0x245BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BB4u;
        // 0x245bb8: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245BBCu;
        goto label_245bbc;
    }
    ctx->pc = 0x245BB4u;
    {
        const bool branch_taken_0x245bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BB4u;
        // 0x245bb8: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245bb4) {
            ctx->pc = 0x245C90u;
            goto label_245c90;
        }
    }
    ctx->pc = 0x245BBCu;
label_245bbc:
    // 0x245bbc: 0x90a70233  lbu         $a3, 0x233($a1)
    ctx->pc = 0x245bbcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 563)));
label_245bc0:
    // 0x245bc0: 0x14e00033  bnez        $a3, . + 4 + (0x33 << 2)
label_245bc4:
    if (ctx->pc == 0x245BC4u) {
        ctx->pc = 0x245BC8u;
        goto label_245bc8;
    }
    ctx->pc = 0x245BC0u;
    {
        const bool branch_taken_0x245bc0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x245bc0) {
            ctx->pc = 0x245C90u;
            goto label_245c90;
        }
    }
    ctx->pc = 0x245BC8u;
label_245bc8:
    // 0x245bc8: 0x90a80232  lbu         $t0, 0x232($a1)
    ctx->pc = 0x245bc8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 562)));
label_245bcc:
    // 0x245bcc: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x245bccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_245bd0:
    // 0x245bd0: 0x11070019  beq         $t0, $a3, . + 4 + (0x19 << 2)
label_245bd4:
    if (ctx->pc == 0x245BD4u) {
        ctx->pc = 0x245BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BD0u;
        // 0x245bd4: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245BD8u;
        goto label_245bd8;
    }
    ctx->pc = 0x245BD0u;
    {
        const bool branch_taken_0x245bd0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        ctx->pc = 0x245BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BD0u;
        // 0x245bd4: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245bd0) {
            ctx->pc = 0x245C38u;
            goto label_245c38;
        }
    }
    ctx->pc = 0x245BD8u;
label_245bd8:
    // 0x245bd8: 0x3c080020  lui         $t0, 0x20
    ctx->pc = 0x245bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32 << 16));
label_245bdc:
    // 0x245bdc: 0x1283824  and         $a3, $t1, $t0
    ctx->pc = 0x245bdcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
label_245be0:
    // 0x245be0: 0x14e0002b  bnez        $a3, . + 4 + (0x2B << 2)
label_245be4:
    if (ctx->pc == 0x245BE4u) {
        ctx->pc = 0x245BE8u;
        goto label_245be8;
    }
    ctx->pc = 0x245BE0u;
    {
        const bool branch_taken_0x245be0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x245be0) {
            ctx->pc = 0x245C90u;
            goto label_245c90;
        }
    }
    ctx->pc = 0x245BE8u;
label_245be8:
    // 0x245be8: 0x8c670014  lw          $a3, 0x14($v1)
    ctx->pc = 0x245be8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_245bec:
    // 0x245bec: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x245becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_245bf0:
    // 0x245bf0: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x245bf0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_245bf4:
    // 0x245bf4: 0xac670014  sw          $a3, 0x14($v1)
    ctx->pc = 0x245bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 7));
label_245bf8:
    // 0x245bf8: 0x9027eb05  lbu         $a3, -0x14FB($at)
    ctx->pc = 0x245bf8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961925)));
label_245bfc:
    // 0x245bfc: 0x7443c  dsll32      $t0, $a3, 16
    ctx->pc = 0x245bfcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 16));
label_245c00:
    // 0x245c00: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x245c00u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
label_245c04:
    // 0x245c04: 0x19000022  blez        $t0, . + 4 + (0x22 << 2)
label_245c08:
    if (ctx->pc == 0x245C08u) {
        ctx->pc = 0x245C0Cu;
        goto label_245c0c;
    }
    ctx->pc = 0x245C04u;
    {
        const bool branch_taken_0x245c04 = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x245c04) {
            ctx->pc = 0x245C90u;
            goto label_245c90;
        }
    }
    ctx->pc = 0x245C0Cu;
label_245c0c:
    // 0x245c0c: 0x8467000e  lh          $a3, 0xE($v1)
    ctx->pc = 0x245c0cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_245c10:
    // 0x245c10: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x245c10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_245c14:
    // 0x245c14: 0x28e10064  slti        $at, $a3, 0x64
    ctx->pc = 0x245c14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)100) ? 1 : 0);
label_245c18:
    // 0x245c18: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_245c1c:
    if (ctx->pc == 0x245C1Cu) {
        ctx->pc = 0x245C20u;
        goto label_245c20;
    }
    ctx->pc = 0x245C18u;
    {
        const bool branch_taken_0x245c18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x245c18) {
            ctx->pc = 0x245C28u;
            goto label_245c28;
        }
    }
    ctx->pc = 0x245C20u;
label_245c20:
    // 0x245c20: 0x10000003  b           . + 4 + (0x3 << 2)
label_245c24:
    if (ctx->pc == 0x245C24u) {
        ctx->pc = 0x245C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C20u;
        // 0x245c24: 0xa467000e  sh          $a3, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245C28u;
        goto label_245c28;
    }
    ctx->pc = 0x245C20u;
    {
        const bool branch_taken_0x245c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C20u;
        // 0x245c24: 0xa467000e  sh          $a3, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245c20) {
            ctx->pc = 0x245C30u;
            goto label_245c30;
        }
    }
    ctx->pc = 0x245C28u;
label_245c28:
    // 0x245c28: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x245c28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_245c2c:
    // 0x245c2c: 0xa467000e  sh          $a3, 0xE($v1)
    ctx->pc = 0x245c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 7));
label_245c30:
    // 0x245c30: 0x10000017  b           . + 4 + (0x17 << 2)
label_245c34:
    if (ctx->pc == 0x245C34u) {
        ctx->pc = 0x245C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C30u;
        // 0x245c34: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245C38u;
        goto label_245c38;
    }
    ctx->pc = 0x245C30u;
    {
        const bool branch_taken_0x245c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C30u;
        // 0x245c34: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245c30) {
            ctx->pc = 0x245C90u;
            goto label_245c90;
        }
    }
    ctx->pc = 0x245C38u;
label_245c38:
    // 0x245c38: 0x1283824  and         $a3, $t1, $t0
    ctx->pc = 0x245c38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
label_245c3c:
    // 0x245c3c: 0x14e00014  bnez        $a3, . + 4 + (0x14 << 2)
label_245c40:
    if (ctx->pc == 0x245C40u) {
        ctx->pc = 0x245C44u;
        goto label_245c44;
    }
    ctx->pc = 0x245C3Cu;
    {
        const bool branch_taken_0x245c3c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x245c3c) {
            ctx->pc = 0x245C90u;
            goto label_245c90;
        }
    }
    ctx->pc = 0x245C44u;
label_245c44:
    // 0x245c44: 0x8c670014  lw          $a3, 0x14($v1)
    ctx->pc = 0x245c44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_245c48:
    // 0x245c48: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x245c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_245c4c:
    // 0x245c4c: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x245c4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_245c50:
    // 0x245c50: 0xac670014  sw          $a3, 0x14($v1)
    ctx->pc = 0x245c50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 7));
label_245c54:
    // 0x245c54: 0x9027eb06  lbu         $a3, -0x14FA($at)
    ctx->pc = 0x245c54u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961926)));
label_245c58:
    // 0x245c58: 0x7443c  dsll32      $t0, $a3, 16
    ctx->pc = 0x245c58u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 16));
label_245c5c:
    // 0x245c5c: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x245c5cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
label_245c60:
    // 0x245c60: 0x1900000b  blez        $t0, . + 4 + (0xB << 2)
label_245c64:
    if (ctx->pc == 0x245C64u) {
        ctx->pc = 0x245C68u;
        goto label_245c68;
    }
    ctx->pc = 0x245C60u;
    {
        const bool branch_taken_0x245c60 = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x245c60) {
            ctx->pc = 0x245C90u;
            goto label_245c90;
        }
    }
    ctx->pc = 0x245C68u;
label_245c68:
    // 0x245c68: 0x8467000e  lh          $a3, 0xE($v1)
    ctx->pc = 0x245c68u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_245c6c:
    // 0x245c6c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x245c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_245c70:
    // 0x245c70: 0x28e10064  slti        $at, $a3, 0x64
    ctx->pc = 0x245c70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)100) ? 1 : 0);
label_245c74:
    // 0x245c74: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_245c78:
    if (ctx->pc == 0x245C78u) {
        ctx->pc = 0x245C7Cu;
        goto label_245c7c;
    }
    ctx->pc = 0x245C74u;
    {
        const bool branch_taken_0x245c74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x245c74) {
            ctx->pc = 0x245C84u;
            goto label_245c84;
        }
    }
    ctx->pc = 0x245C7Cu;
label_245c7c:
    // 0x245c7c: 0x10000003  b           . + 4 + (0x3 << 2)
label_245c80:
    if (ctx->pc == 0x245C80u) {
        ctx->pc = 0x245C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C7Cu;
        // 0x245c80: 0xa467000e  sh          $a3, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245C84u;
        goto label_245c84;
    }
    ctx->pc = 0x245C7Cu;
    {
        const bool branch_taken_0x245c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C7Cu;
        // 0x245c80: 0xa467000e  sh          $a3, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245c7c) {
            ctx->pc = 0x245C8Cu;
            goto label_245c8c;
        }
    }
    ctx->pc = 0x245C84u;
label_245c84:
    // 0x245c84: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x245c84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_245c88:
    // 0x245c88: 0xa467000e  sh          $a3, 0xE($v1)
    ctx->pc = 0x245c88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 7));
label_245c8c:
    // 0x245c8c: 0xa0600006  sb          $zero, 0x6($v1)
    ctx->pc = 0x245c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
label_245c90:
    // 0x245c90: 0x8c680014  lw          $t0, 0x14($v1)
    ctx->pc = 0x245c90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_245c94:
    // 0x245c94: 0x3c070080  lui         $a3, 0x80
    ctx->pc = 0x245c94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
label_245c98:
    // 0x245c98: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x245c98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
label_245c9c:
    // 0x245c9c: 0x14e0001e  bnez        $a3, . + 4 + (0x1E << 2)
label_245ca0:
    if (ctx->pc == 0x245CA0u) {
        ctx->pc = 0x245CA4u;
        goto label_245ca4;
    }
    ctx->pc = 0x245C9Cu;
    {
        const bool branch_taken_0x245c9c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x245c9c) {
            ctx->pc = 0x245D18u;
            goto label_245d18;
        }
    }
    ctx->pc = 0x245CA4u;
label_245ca4:
    // 0x245ca4: 0x8ca70198  lw          $a3, 0x198($a1)
    ctx->pc = 0x245ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 408)));
label_245ca8:
    // 0x245ca8: 0x30e50020  andi        $a1, $a3, 0x20
    ctx->pc = 0x245ca8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
label_245cac:
    // 0x245cac: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_245cb0:
    if (ctx->pc == 0x245CB0u) {
        ctx->pc = 0x245CB4u;
        goto label_245cb4;
    }
    ctx->pc = 0x245CACu;
    {
        const bool branch_taken_0x245cac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x245cac) {
            ctx->pc = 0x245CC8u;
            goto label_245cc8;
        }
    }
    ctx->pc = 0x245CB4u;
label_245cb4:
    // 0x245cb4: 0x30e50040  andi        $a1, $a3, 0x40
    ctx->pc = 0x245cb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)64);
label_245cb8:
    // 0x245cb8: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_245cbc:
    if (ctx->pc == 0x245CBCu) {
        ctx->pc = 0x245CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245CB8u;
        // 0x245cbc: 0x30e50080  andi        $a1, $a3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x245CC0u;
        goto label_245cc0;
    }
    ctx->pc = 0x245CB8u;
    {
        const bool branch_taken_0x245cb8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x245CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245CB8u;
        // 0x245cbc: 0x30e50080  andi        $a1, $a3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x245cb8) {
            ctx->pc = 0x245CC8u;
            goto label_245cc8;
        }
    }
    ctx->pc = 0x245CC0u;
label_245cc0:
    // 0x245cc0: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
label_245cc4:
    if (ctx->pc == 0x245CC4u) {
        ctx->pc = 0x245CC8u;
        goto label_245cc8;
    }
    ctx->pc = 0x245CC0u;
    {
        const bool branch_taken_0x245cc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x245cc0) {
            ctx->pc = 0x245D18u;
            goto label_245d18;
        }
    }
    ctx->pc = 0x245CC8u;
label_245cc8:
    // 0x245cc8: 0x8c670014  lw          $a3, 0x14($v1)
    ctx->pc = 0x245cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_245ccc:
    // 0x245ccc: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x245cccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
label_245cd0:
    // 0x245cd0: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x245cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_245cd4:
    // 0x245cd4: 0xe52825  or          $a1, $a3, $a1
    ctx->pc = 0x245cd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
label_245cd8:
    // 0x245cd8: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x245cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
label_245cdc:
    // 0x245cdc: 0x9025eb07  lbu         $a1, -0x14F9($at)
    ctx->pc = 0x245cdcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961927)));
label_245ce0:
    // 0x245ce0: 0x53c3c  dsll32      $a3, $a1, 16
    ctx->pc = 0x245ce0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 16));
label_245ce4:
    // 0x245ce4: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x245ce4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
label_245ce8:
    // 0x245ce8: 0x18e0000b  blez        $a3, . + 4 + (0xB << 2)
label_245cec:
    if (ctx->pc == 0x245CECu) {
        ctx->pc = 0x245CF0u;
        goto label_245cf0;
    }
    ctx->pc = 0x245CE8u;
    {
        const bool branch_taken_0x245ce8 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x245ce8) {
            ctx->pc = 0x245D18u;
            goto label_245d18;
        }
    }
    ctx->pc = 0x245CF0u;
label_245cf0:
    // 0x245cf0: 0x8465000e  lh          $a1, 0xE($v1)
    ctx->pc = 0x245cf0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_245cf4:
    // 0x245cf4: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x245cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_245cf8:
    // 0x245cf8: 0x28a10064  slti        $at, $a1, 0x64
    ctx->pc = 0x245cf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)100) ? 1 : 0);
label_245cfc:
    // 0x245cfc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_245d00:
    if (ctx->pc == 0x245D00u) {
        ctx->pc = 0x245D04u;
        goto label_245d04;
    }
    ctx->pc = 0x245CFCu;
    {
        const bool branch_taken_0x245cfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x245cfc) {
            ctx->pc = 0x245D0Cu;
            goto label_245d0c;
        }
    }
    ctx->pc = 0x245D04u;
label_245d04:
    // 0x245d04: 0x10000003  b           . + 4 + (0x3 << 2)
label_245d08:
    if (ctx->pc == 0x245D08u) {
        ctx->pc = 0x245D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D04u;
        // 0x245d08: 0xa465000e  sh          $a1, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245D0Cu;
        goto label_245d0c;
    }
    ctx->pc = 0x245D04u;
    {
        const bool branch_taken_0x245d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D04u;
        // 0x245d08: 0xa465000e  sh          $a1, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d04) {
            ctx->pc = 0x245D14u;
            goto label_245d14;
        }
    }
    ctx->pc = 0x245D0Cu;
label_245d0c:
    // 0x245d0c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x245d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_245d10:
    // 0x245d10: 0xa465000e  sh          $a1, 0xE($v1)
    ctx->pc = 0x245d10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 5));
label_245d14:
    // 0x245d14: 0xa0600006  sb          $zero, 0x6($v1)
    ctx->pc = 0x245d14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
label_245d18:
    // 0x245d18: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x245d18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_245d1c:
    // 0x245d1c: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x245d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
label_245d20:
    // 0x245d20: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x245d20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_245d24:
    // 0x245d24: 0x10a0003e  beqz        $a1, . + 4 + (0x3E << 2)
label_245d28:
    if (ctx->pc == 0x245D28u) {
        ctx->pc = 0x245D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D24u;
        // 0x245d28: 0x30c50008  andi        $a1, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x245D2Cu;
        goto label_245d2c;
    }
    ctx->pc = 0x245D24u;
    {
        const bool branch_taken_0x245d24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x245D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D24u;
        // 0x245d28: 0x30c50008  andi        $a1, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d24) {
            ctx->pc = 0x245E20u;
            goto label_245e20;
        }
    }
    ctx->pc = 0x245D2Cu;
label_245d2c:
    // 0x245d2c: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x245d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_245d30:
    // 0x245d30: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x245d30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_245d34:
    // 0x245d34: 0xc52024  and         $a0, $a2, $a1
    ctx->pc = 0x245d34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_245d38:
    // 0x245d38: 0x148004bd  bnez        $a0, . + 4 + (0x4BD << 2)
label_245d3c:
    if (ctx->pc == 0x245D3Cu) {
        ctx->pc = 0x245D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D38u;
        // 0x245d3c: 0xc52025  or          $a0, $a2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245D40u;
        goto label_245d40;
    }
    ctx->pc = 0x245D38u;
    {
        const bool branch_taken_0x245d38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x245D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D38u;
        // 0x245d3c: 0xc52025  or          $a0, $a2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d38) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x245D40u;
label_245d40:
    // 0x245d40: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x245d40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
label_245d44:
    // 0x245d44: 0x8465000c  lh          $a1, 0xC($v1)
    ctx->pc = 0x245d44u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_245d48:
    // 0x245d48: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x245d48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_245d4c:
    // 0x245d4c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_245d50:
    if (ctx->pc == 0x245D50u) {
        ctx->pc = 0x245D54u;
        goto label_245d54;
    }
    ctx->pc = 0x245D4Cu;
    {
        const bool branch_taken_0x245d4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x245d4c) {
            ctx->pc = 0x245D5Cu;
            goto label_245d5c;
        }
    }
    ctx->pc = 0x245D54u;
label_245d54:
    // 0x245d54: 0x10000005  b           . + 4 + (0x5 << 2)
label_245d58:
    if (ctx->pc == 0x245D58u) {
        ctx->pc = 0x245D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D54u;
        // 0x245d58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245D5Cu;
        goto label_245d5c;
    }
    ctx->pc = 0x245D54u;
    {
        const bool branch_taken_0x245d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D54u;
        // 0x245d58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d54) {
            ctx->pc = 0x245D6Cu;
            goto label_245d6c;
        }
    }
    ctx->pc = 0x245D5Cu;
label_245d5c:
    // 0x245d5c: 0x24a4fffe  addiu       $a0, $a1, -0x2
    ctx->pc = 0x245d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_245d60:
    // 0x245d60: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x245d60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_245d64:
    // 0x245d64: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x245d64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_245d68:
    // 0x245d68: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x245d68u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_245d6c:
    // 0x245d6c: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x245d6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
label_245d70:
    // 0x245d70: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x245d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_245d74:
    // 0x245d74: 0x9024eb02  lbu         $a0, -0x14FE($at)
    ctx->pc = 0x245d74u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961922)));
label_245d78:
    // 0x245d78: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x245d78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
label_245d7c:
    // 0x245d7c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x245d7cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_245d80:
    // 0x245d80: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x245d80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_245d84:
    // 0x245d84: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x245d84u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_245d88:
    // 0x245d88: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x245d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_245d8c:
    // 0x245d8c: 0x2881001a  slti        $at, $a0, 0x1A
    ctx->pc = 0x245d8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)26) ? 1 : 0);
label_245d90:
    // 0x245d90: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_245d94:
    if (ctx->pc == 0x245D94u) {
        ctx->pc = 0x245D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D90u;
        // 0x245d94: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245D98u;
        goto label_245d98;
    }
    ctx->pc = 0x245D90u;
    {
        const bool branch_taken_0x245d90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x245D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D90u;
        // 0x245d94: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d90) {
            ctx->pc = 0x245DA0u;
            goto label_245da0;
        }
    }
    ctx->pc = 0x245D98u;
label_245d98:
    // 0x245d98: 0x10000003  b           . + 4 + (0x3 << 2)
label_245d9c:
    if (ctx->pc == 0x245D9Cu) {
        ctx->pc = 0x245D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D98u;
        // 0x245d9c: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245DA0u;
        goto label_245da0;
    }
    ctx->pc = 0x245D98u;
    {
        const bool branch_taken_0x245d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D98u;
        // 0x245d9c: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d98) {
            ctx->pc = 0x245DA8u;
            goto label_245da8;
        }
    }
    ctx->pc = 0x245DA0u;
label_245da0:
    // 0x245da0: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x245da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_245da4:
    // 0x245da4: 0xa464000c  sh          $a0, 0xC($v1)
    ctx->pc = 0x245da4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
label_245da8:
    // 0x245da8: 0x8464000c  lh          $a0, 0xC($v1)
    ctx->pc = 0x245da8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_245dac:
    // 0x245dac: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x245dacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_245db0:
    // 0x245db0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_245db4:
    if (ctx->pc == 0x245DB4u) {
        ctx->pc = 0x245DB8u;
        goto label_245db8;
    }
    ctx->pc = 0x245DB0u;
    {
        const bool branch_taken_0x245db0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x245db0) {
            ctx->pc = 0x245DC0u;
            goto label_245dc0;
        }
    }
    ctx->pc = 0x245DB8u;
label_245db8:
    // 0x245db8: 0x10000005  b           . + 4 + (0x5 << 2)
label_245dbc:
    if (ctx->pc == 0x245DBCu) {
        ctx->pc = 0x245DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245DB8u;
        // 0x245dbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245DC0u;
        goto label_245dc0;
    }
    ctx->pc = 0x245DB8u;
    {
        const bool branch_taken_0x245db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245DB8u;
        // 0x245dbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245db8) {
            ctx->pc = 0x245DD0u;
            goto label_245dd0;
        }
    }
    ctx->pc = 0x245DC0u;
label_245dc0:
    // 0x245dc0: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x245dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_245dc4:
    // 0x245dc4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x245dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_245dc8:
    // 0x245dc8: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x245dc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_245dcc:
    // 0x245dcc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x245dccu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_245dd0:
    // 0x245dd0: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x245dd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_245dd4:
    // 0x245dd4: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x245dd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
label_245dd8:
    // 0x245dd8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x245dd8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_245ddc:
    // 0x245ddc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x245ddcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_245de0:
    // 0x245de0: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x245de0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_245de4:
    // 0x245de4: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x245de4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_245de8:
    // 0x245de8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x245de8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_245dec:
    // 0x245dec: 0x18a00490  blez        $a1, . + 4 + (0x490 << 2)
label_245df0:
    if (ctx->pc == 0x245DF0u) {
        ctx->pc = 0x245DF4u;
        goto label_245df4;
    }
    ctx->pc = 0x245DECu;
    {
        const bool branch_taken_0x245dec = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x245dec) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x245DF4u;
label_245df4:
    // 0x245df4: 0x8464000e  lh          $a0, 0xE($v1)
    ctx->pc = 0x245df4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_245df8:
    // 0x245df8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x245df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_245dfc:
    // 0x245dfc: 0x28810064  slti        $at, $a0, 0x64
    ctx->pc = 0x245dfcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
label_245e00:
    // 0x245e00: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_245e04:
    if (ctx->pc == 0x245E04u) {
        ctx->pc = 0x245E08u;
        goto label_245e08;
    }
    ctx->pc = 0x245E00u;
    {
        const bool branch_taken_0x245e00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x245e00) {
            ctx->pc = 0x245E10u;
            goto label_245e10;
        }
    }
    ctx->pc = 0x245E08u;
label_245e08:
    // 0x245e08: 0x10000003  b           . + 4 + (0x3 << 2)
label_245e0c:
    if (ctx->pc == 0x245E0Cu) {
        ctx->pc = 0x245E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E08u;
        // 0x245e0c: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E10u;
        goto label_245e10;
    }
    ctx->pc = 0x245E08u;
    {
        const bool branch_taken_0x245e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E08u;
        // 0x245e0c: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e08) {
            ctx->pc = 0x245E18u;
            goto label_245e18;
        }
    }
    ctx->pc = 0x245E10u;
label_245e10:
    // 0x245e10: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x245e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_245e14:
    // 0x245e14: 0xa464000e  sh          $a0, 0xE($v1)
    ctx->pc = 0x245e14u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
label_245e18:
    // 0x245e18: 0x10000485  b           . + 4 + (0x485 << 2)
label_245e1c:
    if (ctx->pc == 0x245E1Cu) {
        ctx->pc = 0x245E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E18u;
        // 0x245e1c: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E20u;
        goto label_245e20;
    }
    ctx->pc = 0x245E18u;
    {
        const bool branch_taken_0x245e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E18u;
        // 0x245e1c: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e18) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x245E20u;
label_245e20:
    // 0x245e20: 0x10a0003e  beqz        $a1, . + 4 + (0x3E << 2)
label_245e24:
    if (ctx->pc == 0x245E24u) {
        ctx->pc = 0x245E28u;
        goto label_245e28;
    }
    ctx->pc = 0x245E20u;
    {
        const bool branch_taken_0x245e20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x245e20) {
            ctx->pc = 0x245F1Cu;
            { ctx->pc = 0x245f1c; return; }
        }
    }
    ctx->pc = 0x245E28u;
label_245e28:
    // 0x245e28: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x245e28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_245e2c:
    // 0x245e2c: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x245e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
label_245e30:
    // 0x245e30: 0xc52024  and         $a0, $a2, $a1
    ctx->pc = 0x245e30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_245e34:
    // 0x245e34: 0x1480047e  bnez        $a0, . + 4 + (0x47E << 2)
label_245e38:
    if (ctx->pc == 0x245E38u) {
        ctx->pc = 0x245E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E34u;
        // 0x245e38: 0xc52025  or          $a0, $a2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E3Cu;
        goto label_245e3c;
    }
    ctx->pc = 0x245E34u;
    {
        const bool branch_taken_0x245e34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x245E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E34u;
        // 0x245e38: 0xc52025  or          $a0, $a2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e34) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x245E3Cu;
label_245e3c:
    // 0x245e3c: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x245e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
label_245e40:
    // 0x245e40: 0x8465000c  lh          $a1, 0xC($v1)
    ctx->pc = 0x245e40u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_245e44:
    // 0x245e44: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x245e44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_245e48:
    // 0x245e48: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_245e4c:
    if (ctx->pc == 0x245E4Cu) {
        ctx->pc = 0x245E50u;
        goto label_245e50;
    }
    ctx->pc = 0x245E48u;
    {
        const bool branch_taken_0x245e48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x245e48) {
            ctx->pc = 0x245E58u;
            goto label_245e58;
        }
    }
    ctx->pc = 0x245E50u;
label_245e50:
    // 0x245e50: 0x10000005  b           . + 4 + (0x5 << 2)
label_245e54:
    if (ctx->pc == 0x245E54u) {
        ctx->pc = 0x245E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E50u;
        // 0x245e54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E58u;
        goto label_245e58;
    }
    ctx->pc = 0x245E50u;
    {
        const bool branch_taken_0x245e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E50u;
        // 0x245e54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e50) {
            ctx->pc = 0x245E68u;
            goto label_245e68;
        }
    }
    ctx->pc = 0x245E58u;
label_245e58:
    // 0x245e58: 0x24a4fffe  addiu       $a0, $a1, -0x2
    ctx->pc = 0x245e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_245e5c:
    // 0x245e5c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x245e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_245e60:
    // 0x245e60: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x245e60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_245e64:
    // 0x245e64: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x245e64u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_245e68:
    // 0x245e68: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x245e68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
label_245e6c:
    // 0x245e6c: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x245e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_245e70:
    // 0x245e70: 0x9024eb01  lbu         $a0, -0x14FF($at)
    ctx->pc = 0x245e70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961921)));
label_245e74:
    // 0x245e74: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x245e74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
label_245e78:
    // 0x245e78: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x245e78u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_245e7c:
    // 0x245e7c: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x245e7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_245e80:
    // 0x245e80: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x245e80u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_245e84:
    // 0x245e84: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x245e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_245e88:
    // 0x245e88: 0x2881001a  slti        $at, $a0, 0x1A
    ctx->pc = 0x245e88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)26) ? 1 : 0);
label_245e8c:
    // 0x245e8c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_245e90:
    if (ctx->pc == 0x245E90u) {
        ctx->pc = 0x245E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E8Cu;
        // 0x245e90: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E94u;
        goto label_245e94;
    }
    ctx->pc = 0x245E8Cu;
    {
        const bool branch_taken_0x245e8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x245E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E8Cu;
        // 0x245e90: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e8c) {
            ctx->pc = 0x245E9Cu;
            { ctx->pc = 0x245e9c; return; }
        }
    }
    ctx->pc = 0x245E94u;
label_245e94:
    // 0x245e94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x245e98u;
    return;
}

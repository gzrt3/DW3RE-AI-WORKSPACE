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

// Function: entry_00254d38
// Address: 0x254d38 - 0x27d478
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_00254d38_part74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x278788u: goto label_278788;
        case 0x27878cu: goto label_27878c;
        case 0x278790u: goto label_278790;
        case 0x278794u: goto label_278794;
        case 0x278798u: goto label_278798;
        case 0x27879cu: goto label_27879c;
        case 0x2787a0u: goto label_2787a0;
        case 0x2787a4u: goto label_2787a4;
        case 0x2787a8u: goto label_2787a8;
        case 0x2787acu: goto label_2787ac;
        case 0x2787b0u: goto label_2787b0;
        case 0x2787b4u: goto label_2787b4;
        case 0x2787b8u: goto label_2787b8;
        case 0x2787bcu: goto label_2787bc;
        case 0x2787c0u: goto label_2787c0;
        case 0x2787c4u: goto label_2787c4;
        case 0x2787c8u: goto label_2787c8;
        case 0x2787ccu: goto label_2787cc;
        case 0x2787d0u: goto label_2787d0;
        case 0x2787d4u: goto label_2787d4;
        case 0x2787d8u: goto label_2787d8;
        case 0x2787dcu: goto label_2787dc;
        case 0x2787e0u: goto label_2787e0;
        case 0x2787e4u: goto label_2787e4;
        case 0x2787e8u: goto label_2787e8;
        case 0x2787ecu: goto label_2787ec;
        case 0x2787f0u: goto label_2787f0;
        case 0x2787f4u: goto label_2787f4;
        case 0x2787f8u: goto label_2787f8;
        case 0x2787fcu: goto label_2787fc;
        case 0x278800u: goto label_278800;
        case 0x278804u: goto label_278804;
        case 0x278808u: goto label_278808;
        case 0x27880cu: goto label_27880c;
        case 0x278810u: goto label_278810;
        case 0x278814u: goto label_278814;
        case 0x278818u: goto label_278818;
        case 0x27881cu: goto label_27881c;
        case 0x278820u: goto label_278820;
        case 0x278824u: goto label_278824;
        case 0x278828u: goto label_278828;
        case 0x27882cu: goto label_27882c;
        case 0x278830u: goto label_278830;
        case 0x278834u: goto label_278834;
        case 0x278838u: goto label_278838;
        case 0x27883cu: goto label_27883c;
        case 0x278840u: goto label_278840;
        case 0x278844u: goto label_278844;
        case 0x278848u: goto label_278848;
        case 0x27884cu: goto label_27884c;
        case 0x278850u: goto label_278850;
        case 0x278854u: goto label_278854;
        case 0x278858u: goto label_278858;
        case 0x27885cu: goto label_27885c;
        case 0x278860u: goto label_278860;
        case 0x278864u: goto label_278864;
        case 0x278868u: goto label_278868;
        case 0x27886cu: goto label_27886c;
        case 0x278870u: goto label_278870;
        case 0x278874u: goto label_278874;
        case 0x278878u: goto label_278878;
        case 0x27887cu: goto label_27887c;
        case 0x278880u: goto label_278880;
        case 0x278884u: goto label_278884;
        case 0x278888u: goto label_278888;
        case 0x27888cu: goto label_27888c;
        case 0x278890u: goto label_278890;
        case 0x278894u: goto label_278894;
        case 0x278898u: goto label_278898;
        case 0x27889cu: goto label_27889c;
        case 0x2788a0u: goto label_2788a0;
        case 0x2788a4u: goto label_2788a4;
        case 0x2788a8u: goto label_2788a8;
        case 0x2788acu: goto label_2788ac;
        case 0x2788b0u: goto label_2788b0;
        case 0x2788b4u: goto label_2788b4;
        case 0x2788b8u: goto label_2788b8;
        case 0x2788bcu: goto label_2788bc;
        case 0x2788c0u: goto label_2788c0;
        case 0x2788c4u: goto label_2788c4;
        case 0x2788c8u: goto label_2788c8;
        case 0x2788ccu: goto label_2788cc;
        case 0x2788d0u: goto label_2788d0;
        case 0x2788d4u: goto label_2788d4;
        case 0x2788d8u: goto label_2788d8;
        case 0x2788dcu: goto label_2788dc;
        case 0x2788e0u: goto label_2788e0;
        case 0x2788e4u: goto label_2788e4;
        case 0x2788e8u: goto label_2788e8;
        case 0x2788ecu: goto label_2788ec;
        case 0x2788f0u: goto label_2788f0;
        case 0x2788f4u: goto label_2788f4;
        case 0x2788f8u: goto label_2788f8;
        case 0x2788fcu: goto label_2788fc;
        case 0x278900u: goto label_278900;
        case 0x278904u: goto label_278904;
        case 0x278908u: goto label_278908;
        case 0x27890cu: goto label_27890c;
        case 0x278910u: goto label_278910;
        case 0x278914u: goto label_278914;
        case 0x278918u: goto label_278918;
        case 0x27891cu: goto label_27891c;
        case 0x278920u: goto label_278920;
        case 0x278924u: goto label_278924;
        case 0x278928u: goto label_278928;
        case 0x27892cu: goto label_27892c;
        case 0x278930u: goto label_278930;
        case 0x278934u: goto label_278934;
        case 0x278938u: goto label_278938;
        case 0x27893cu: goto label_27893c;
        case 0x278940u: goto label_278940;
        case 0x278944u: goto label_278944;
        case 0x278948u: goto label_278948;
        case 0x27894cu: goto label_27894c;
        case 0x278950u: goto label_278950;
        case 0x278954u: goto label_278954;
        case 0x278958u: goto label_278958;
        case 0x27895cu: goto label_27895c;
        case 0x278960u: goto label_278960;
        case 0x278964u: goto label_278964;
        case 0x278968u: goto label_278968;
        case 0x27896cu: goto label_27896c;
        case 0x278970u: goto label_278970;
        case 0x278974u: goto label_278974;
        case 0x278978u: goto label_278978;
        case 0x27897cu: goto label_27897c;
        case 0x278980u: goto label_278980;
        case 0x278984u: goto label_278984;
        case 0x278988u: goto label_278988;
        case 0x27898cu: goto label_27898c;
        case 0x278990u: goto label_278990;
        case 0x278994u: goto label_278994;
        case 0x278998u: goto label_278998;
        case 0x27899cu: goto label_27899c;
        case 0x2789a0u: goto label_2789a0;
        case 0x2789a4u: goto label_2789a4;
        case 0x2789a8u: goto label_2789a8;
        case 0x2789acu: goto label_2789ac;
        case 0x2789b0u: goto label_2789b0;
        case 0x2789b4u: goto label_2789b4;
        case 0x2789b8u: goto label_2789b8;
        case 0x2789bcu: goto label_2789bc;
        case 0x2789c0u: goto label_2789c0;
        case 0x2789c4u: goto label_2789c4;
        case 0x2789c8u: goto label_2789c8;
        case 0x2789ccu: goto label_2789cc;
        case 0x2789d0u: goto label_2789d0;
        case 0x2789d4u: goto label_2789d4;
        case 0x2789d8u: goto label_2789d8;
        case 0x2789dcu: goto label_2789dc;
        case 0x2789e0u: goto label_2789e0;
        case 0x2789e4u: goto label_2789e4;
        case 0x2789e8u: goto label_2789e8;
        case 0x2789ecu: goto label_2789ec;
        case 0x2789f0u: goto label_2789f0;
        case 0x2789f4u: goto label_2789f4;
        case 0x2789f8u: goto label_2789f8;
        case 0x2789fcu: goto label_2789fc;
        case 0x278a00u: goto label_278a00;
        case 0x278a04u: goto label_278a04;
        case 0x278a08u: goto label_278a08;
        case 0x278a0cu: goto label_278a0c;
        case 0x278a10u: goto label_278a10;
        case 0x278a14u: goto label_278a14;
        case 0x278a18u: goto label_278a18;
        case 0x278a1cu: goto label_278a1c;
        case 0x278a20u: goto label_278a20;
        case 0x278a24u: goto label_278a24;
        case 0x278a28u: goto label_278a28;
        case 0x278a2cu: goto label_278a2c;
        case 0x278a30u: goto label_278a30;
        case 0x278a34u: goto label_278a34;
        case 0x278a38u: goto label_278a38;
        case 0x278a3cu: goto label_278a3c;
        case 0x278a40u: goto label_278a40;
        case 0x278a44u: goto label_278a44;
        case 0x278a48u: goto label_278a48;
        case 0x278a4cu: goto label_278a4c;
        case 0x278a50u: goto label_278a50;
        case 0x278a54u: goto label_278a54;
        case 0x278a58u: goto label_278a58;
        case 0x278a5cu: goto label_278a5c;
        case 0x278a60u: goto label_278a60;
        case 0x278a64u: goto label_278a64;
        case 0x278a68u: goto label_278a68;
        case 0x278a6cu: goto label_278a6c;
        case 0x278a70u: goto label_278a70;
        case 0x278a74u: goto label_278a74;
        case 0x278a78u: goto label_278a78;
        case 0x278a7cu: goto label_278a7c;
        case 0x278a80u: goto label_278a80;
        case 0x278a84u: goto label_278a84;
        case 0x278a88u: goto label_278a88;
        case 0x278a8cu: goto label_278a8c;
        case 0x278a90u: goto label_278a90;
        case 0x278a94u: goto label_278a94;
        case 0x278a98u: goto label_278a98;
        case 0x278a9cu: goto label_278a9c;
        case 0x278aa0u: goto label_278aa0;
        case 0x278aa4u: goto label_278aa4;
        case 0x278aa8u: goto label_278aa8;
        case 0x278aacu: goto label_278aac;
        case 0x278ab0u: goto label_278ab0;
        case 0x278ab4u: goto label_278ab4;
        case 0x278ab8u: goto label_278ab8;
        case 0x278abcu: goto label_278abc;
        case 0x278ac0u: goto label_278ac0;
        case 0x278ac4u: goto label_278ac4;
        case 0x278ac8u: goto label_278ac8;
        case 0x278accu: goto label_278acc;
        case 0x278ad0u: goto label_278ad0;
        case 0x278ad4u: goto label_278ad4;
        case 0x278ad8u: goto label_278ad8;
        case 0x278adcu: goto label_278adc;
        case 0x278ae0u: goto label_278ae0;
        case 0x278ae4u: goto label_278ae4;
        case 0x278ae8u: goto label_278ae8;
        case 0x278aecu: goto label_278aec;
        case 0x278af0u: goto label_278af0;
        case 0x278af4u: goto label_278af4;
        case 0x278af8u: goto label_278af8;
        case 0x278afcu: goto label_278afc;
        case 0x278b00u: goto label_278b00;
        case 0x278b04u: goto label_278b04;
        case 0x278b08u: goto label_278b08;
        case 0x278b0cu: goto label_278b0c;
        case 0x278b10u: goto label_278b10;
        case 0x278b14u: goto label_278b14;
        case 0x278b18u: goto label_278b18;
        case 0x278b1cu: goto label_278b1c;
        case 0x278b20u: goto label_278b20;
        case 0x278b24u: goto label_278b24;
        case 0x278b28u: goto label_278b28;
        case 0x278b2cu: goto label_278b2c;
        case 0x278b30u: goto label_278b30;
        case 0x278b34u: goto label_278b34;
        case 0x278b38u: goto label_278b38;
        case 0x278b3cu: goto label_278b3c;
        case 0x278b40u: goto label_278b40;
        case 0x278b44u: goto label_278b44;
        case 0x278b48u: goto label_278b48;
        case 0x278b4cu: goto label_278b4c;
        case 0x278b50u: goto label_278b50;
        case 0x278b54u: goto label_278b54;
        case 0x278b58u: goto label_278b58;
        case 0x278b5cu: goto label_278b5c;
        case 0x278b60u: goto label_278b60;
        case 0x278b64u: goto label_278b64;
        case 0x278b68u: goto label_278b68;
        case 0x278b6cu: goto label_278b6c;
        case 0x278b70u: goto label_278b70;
        case 0x278b74u: goto label_278b74;
        case 0x278b78u: goto label_278b78;
        case 0x278b7cu: goto label_278b7c;
        case 0x278b80u: goto label_278b80;
        case 0x278b84u: goto label_278b84;
        case 0x278b88u: goto label_278b88;
        case 0x278b8cu: goto label_278b8c;
        case 0x278b90u: goto label_278b90;
        case 0x278b94u: goto label_278b94;
        case 0x278b98u: goto label_278b98;
        case 0x278b9cu: goto label_278b9c;
        case 0x278ba0u: goto label_278ba0;
        case 0x278ba4u: goto label_278ba4;
        case 0x278ba8u: goto label_278ba8;
        case 0x278bacu: goto label_278bac;
        case 0x278bb0u: goto label_278bb0;
        case 0x278bb4u: goto label_278bb4;
        case 0x278bb8u: goto label_278bb8;
        case 0x278bbcu: goto label_278bbc;
        case 0x278bc0u: goto label_278bc0;
        case 0x278bc4u: goto label_278bc4;
        case 0x278bc8u: goto label_278bc8;
        case 0x278bccu: goto label_278bcc;
        case 0x278bd0u: goto label_278bd0;
        case 0x278bd4u: goto label_278bd4;
        case 0x278bd8u: goto label_278bd8;
        case 0x278bdcu: goto label_278bdc;
        case 0x278be0u: goto label_278be0;
        case 0x278be4u: goto label_278be4;
        case 0x278be8u: goto label_278be8;
        case 0x278becu: goto label_278bec;
        case 0x278bf0u: goto label_278bf0;
        case 0x278bf4u: goto label_278bf4;
        case 0x278bf8u: goto label_278bf8;
        case 0x278bfcu: goto label_278bfc;
        case 0x278c00u: goto label_278c00;
        case 0x278c04u: goto label_278c04;
        case 0x278c08u: goto label_278c08;
        case 0x278c0cu: goto label_278c0c;
        case 0x278c10u: goto label_278c10;
        case 0x278c14u: goto label_278c14;
        case 0x278c18u: goto label_278c18;
        case 0x278c1cu: goto label_278c1c;
        case 0x278c20u: goto label_278c20;
        case 0x278c24u: goto label_278c24;
        case 0x278c28u: goto label_278c28;
        case 0x278c2cu: goto label_278c2c;
        case 0x278c30u: goto label_278c30;
        case 0x278c34u: goto label_278c34;
        case 0x278c38u: goto label_278c38;
        case 0x278c3cu: goto label_278c3c;
        case 0x278c40u: goto label_278c40;
        case 0x278c44u: goto label_278c44;
        case 0x278c48u: goto label_278c48;
        case 0x278c4cu: goto label_278c4c;
        case 0x278c50u: goto label_278c50;
        case 0x278c54u: goto label_278c54;
        case 0x278c58u: goto label_278c58;
        case 0x278c5cu: goto label_278c5c;
        case 0x278c60u: goto label_278c60;
        case 0x278c64u: goto label_278c64;
        case 0x278c68u: goto label_278c68;
        case 0x278c6cu: goto label_278c6c;
        case 0x278c70u: goto label_278c70;
        case 0x278c74u: goto label_278c74;
        case 0x278c78u: goto label_278c78;
        case 0x278c7cu: goto label_278c7c;
        case 0x278c80u: goto label_278c80;
        case 0x278c84u: goto label_278c84;
        case 0x278c88u: goto label_278c88;
        case 0x278c8cu: goto label_278c8c;
        case 0x278c90u: goto label_278c90;
        case 0x278c94u: goto label_278c94;
        case 0x278c98u: goto label_278c98;
        case 0x278c9cu: goto label_278c9c;
        case 0x278ca0u: goto label_278ca0;
        case 0x278ca4u: goto label_278ca4;
        case 0x278ca8u: goto label_278ca8;
        case 0x278cacu: goto label_278cac;
        case 0x278cb0u: goto label_278cb0;
        case 0x278cb4u: goto label_278cb4;
        case 0x278cb8u: goto label_278cb8;
        case 0x278cbcu: goto label_278cbc;
        case 0x278cc0u: goto label_278cc0;
        case 0x278cc4u: goto label_278cc4;
        case 0x278cc8u: goto label_278cc8;
        case 0x278cccu: goto label_278ccc;
        case 0x278cd0u: goto label_278cd0;
        case 0x278cd4u: goto label_278cd4;
        case 0x278cd8u: goto label_278cd8;
        case 0x278cdcu: goto label_278cdc;
        case 0x278ce0u: goto label_278ce0;
        case 0x278ce4u: goto label_278ce4;
        case 0x278ce8u: goto label_278ce8;
        case 0x278cecu: goto label_278cec;
        case 0x278cf0u: goto label_278cf0;
        case 0x278cf4u: goto label_278cf4;
        case 0x278cf8u: goto label_278cf8;
        case 0x278cfcu: goto label_278cfc;
        case 0x278d00u: goto label_278d00;
        case 0x278d04u: goto label_278d04;
        case 0x278d08u: goto label_278d08;
        case 0x278d0cu: goto label_278d0c;
        case 0x278d10u: goto label_278d10;
        case 0x278d14u: goto label_278d14;
        case 0x278d18u: goto label_278d18;
        case 0x278d1cu: goto label_278d1c;
        case 0x278d20u: goto label_278d20;
        case 0x278d24u: goto label_278d24;
        case 0x278d28u: goto label_278d28;
        case 0x278d2cu: goto label_278d2c;
        case 0x278d30u: goto label_278d30;
        case 0x278d34u: goto label_278d34;
        case 0x278d38u: goto label_278d38;
        case 0x278d3cu: goto label_278d3c;
        case 0x278d40u: goto label_278d40;
        case 0x278d44u: goto label_278d44;
        case 0x278d48u: goto label_278d48;
        case 0x278d4cu: goto label_278d4c;
        case 0x278d50u: goto label_278d50;
        case 0x278d54u: goto label_278d54;
        case 0x278d58u: goto label_278d58;
        case 0x278d5cu: goto label_278d5c;
        case 0x278d60u: goto label_278d60;
        case 0x278d64u: goto label_278d64;
        case 0x278d68u: goto label_278d68;
        case 0x278d6cu: goto label_278d6c;
        case 0x278d70u: goto label_278d70;
        case 0x278d74u: goto label_278d74;
        case 0x278d78u: goto label_278d78;
        case 0x278d7cu: goto label_278d7c;
        case 0x278d80u: goto label_278d80;
        case 0x278d84u: goto label_278d84;
        case 0x278d88u: goto label_278d88;
        case 0x278d8cu: goto label_278d8c;
        case 0x278d90u: goto label_278d90;
        case 0x278d94u: goto label_278d94;
        case 0x278d98u: goto label_278d98;
        case 0x278d9cu: goto label_278d9c;
        case 0x278da0u: goto label_278da0;
        case 0x278da4u: goto label_278da4;
        case 0x278da8u: goto label_278da8;
        case 0x278dacu: goto label_278dac;
        case 0x278db0u: goto label_278db0;
        case 0x278db4u: goto label_278db4;
        case 0x278db8u: goto label_278db8;
        case 0x278dbcu: goto label_278dbc;
        case 0x278dc0u: goto label_278dc0;
        case 0x278dc4u: goto label_278dc4;
        case 0x278dc8u: goto label_278dc8;
        case 0x278dccu: goto label_278dcc;
        case 0x278dd0u: goto label_278dd0;
        case 0x278dd4u: goto label_278dd4;
        case 0x278dd8u: goto label_278dd8;
        case 0x278ddcu: goto label_278ddc;
        case 0x278de0u: goto label_278de0;
        case 0x278de4u: goto label_278de4;
        case 0x278de8u: goto label_278de8;
        case 0x278decu: goto label_278dec;
        case 0x278df0u: goto label_278df0;
        case 0x278df4u: goto label_278df4;
        case 0x278df8u: goto label_278df8;
        case 0x278dfcu: goto label_278dfc;
        case 0x278e00u: goto label_278e00;
        case 0x278e04u: goto label_278e04;
        case 0x278e08u: goto label_278e08;
        case 0x278e0cu: goto label_278e0c;
        case 0x278e10u: goto label_278e10;
        case 0x278e14u: goto label_278e14;
        case 0x278e18u: goto label_278e18;
        case 0x278e1cu: goto label_278e1c;
        case 0x278e20u: goto label_278e20;
        case 0x278e24u: goto label_278e24;
        case 0x278e28u: goto label_278e28;
        case 0x278e2cu: goto label_278e2c;
        case 0x278e30u: goto label_278e30;
        case 0x278e34u: goto label_278e34;
        case 0x278e38u: goto label_278e38;
        case 0x278e3cu: goto label_278e3c;
        case 0x278e40u: goto label_278e40;
        case 0x278e44u: goto label_278e44;
        case 0x278e48u: goto label_278e48;
        case 0x278e4cu: goto label_278e4c;
        case 0x278e50u: goto label_278e50;
        case 0x278e54u: goto label_278e54;
        case 0x278e58u: goto label_278e58;
        case 0x278e5cu: goto label_278e5c;
        case 0x278e60u: goto label_278e60;
        case 0x278e64u: goto label_278e64;
        case 0x278e68u: goto label_278e68;
        case 0x278e6cu: goto label_278e6c;
        case 0x278e70u: goto label_278e70;
        case 0x278e74u: goto label_278e74;
        case 0x278e78u: goto label_278e78;
        case 0x278e7cu: goto label_278e7c;
        case 0x278e80u: goto label_278e80;
        case 0x278e84u: goto label_278e84;
        case 0x278e88u: goto label_278e88;
        case 0x278e8cu: goto label_278e8c;
        case 0x278e90u: goto label_278e90;
        case 0x278e94u: goto label_278e94;
        case 0x278e98u: goto label_278e98;
        case 0x278e9cu: goto label_278e9c;
        case 0x278ea0u: goto label_278ea0;
        case 0x278ea4u: goto label_278ea4;
        case 0x278ea8u: goto label_278ea8;
        case 0x278eacu: goto label_278eac;
        case 0x278eb0u: goto label_278eb0;
        case 0x278eb4u: goto label_278eb4;
        case 0x278eb8u: goto label_278eb8;
        case 0x278ebcu: goto label_278ebc;
        case 0x278ec0u: goto label_278ec0;
        case 0x278ec4u: goto label_278ec4;
        case 0x278ec8u: goto label_278ec8;
        case 0x278eccu: goto label_278ecc;
        case 0x278ed0u: goto label_278ed0;
        case 0x278ed4u: goto label_278ed4;
        case 0x278ed8u: goto label_278ed8;
        case 0x278edcu: goto label_278edc;
        case 0x278ee0u: goto label_278ee0;
        case 0x278ee4u: goto label_278ee4;
        case 0x278ee8u: goto label_278ee8;
        case 0x278eecu: goto label_278eec;
        case 0x278ef0u: goto label_278ef0;
        case 0x278ef4u: goto label_278ef4;
        case 0x278ef8u: goto label_278ef8;
        case 0x278efcu: goto label_278efc;
        case 0x278f00u: goto label_278f00;
        case 0x278f04u: goto label_278f04;
        case 0x278f08u: goto label_278f08;
        case 0x278f0cu: goto label_278f0c;
        case 0x278f10u: goto label_278f10;
        case 0x278f14u: goto label_278f14;
        case 0x278f18u: goto label_278f18;
        case 0x278f1cu: goto label_278f1c;
        case 0x278f20u: goto label_278f20;
        case 0x278f24u: goto label_278f24;
        case 0x278f28u: goto label_278f28;
        case 0x278f2cu: goto label_278f2c;
        case 0x278f30u: goto label_278f30;
        case 0x278f34u: goto label_278f34;
        case 0x278f38u: goto label_278f38;
        case 0x278f3cu: goto label_278f3c;
        case 0x278f40u: goto label_278f40;
        case 0x278f44u: goto label_278f44;
        case 0x278f48u: goto label_278f48;
        case 0x278f4cu: goto label_278f4c;
        case 0x278f50u: goto label_278f50;
        case 0x278f54u: goto label_278f54;
        default: return;
    }

label_278788:
    // 0x278788: 0x0  nop
    ctx->pc = 0x278788u;
    // NOP
label_27878c:
    // 0x27878c: 0x0  nop
    ctx->pc = 0x27878cu;
    // NOP
label_278790:
    // 0x278790: 0xfa5e  .word       0x0000FA5E                   # ddiv        $ra, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278790u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x278790 raw=0x0000FA5E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278794:
    // 0x278794: 0x6460  .word       0x00006460                   # add         $t4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278794u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_278798:
    // 0x278798: 0x0  nop
    ctx->pc = 0x278798u;
    // NOP
label_27879c:
    // 0x27879c: 0x0  nop
    ctx->pc = 0x27879cu;
    // NOP
label_2787a0:
    // 0x2787a0: 0xfa6b  .word       0x0000FA6B                   # sltu        $ra, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2787a0u;
    SET_GPR_U64(ctx, 31, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2787a4:
    // 0x2787a4: 0x73c0  sll         $t6, $zero, 15
    ctx->pc = 0x2787a4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_2787a8:
    // 0x2787a8: 0x0  nop
    ctx->pc = 0x2787a8u;
    // NOP
label_2787ac:
    // 0x2787ac: 0x0  nop
    ctx->pc = 0x2787acu;
    // NOP
label_2787b0:
    // 0x2787b0: 0xfa7a  dsrl        $ra, $zero, 9
    ctx->pc = 0x2787b0u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) >> 9);
label_2787b4:
    // 0x2787b4: 0x6de0  .word       0x00006DE0                   # add         $t5, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2787b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2787b8:
    // 0x2787b8: 0x0  nop
    ctx->pc = 0x2787b8u;
    // NOP
label_2787bc:
    // 0x2787bc: 0x0  nop
    ctx->pc = 0x2787bcu;
    // NOP
label_2787c0:
    // 0x2787c0: 0xfa88  .word       0x0000FA88                   # jr          $zero # 0000FA80 <InstrIdType: CPU_SPECIAL>
label_2787c4:
    if (ctx->pc == 0x2787C4u) {
        ctx->pc = 0x2787C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2787C0u;
        // 0x2787c4: 0x7230  tge         $zero, $zero, 456 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2787C8u;
        goto label_2787c8;
    }
    ctx->pc = 0x2787C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2787C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2787C0u;
        // 0x2787c4: 0x7230  tge         $zero, $zero, 456 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2787C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2787C8u;
label_2787c8:
    // 0x2787c8: 0x0  nop
    ctx->pc = 0x2787c8u;
    // NOP
label_2787cc:
    // 0x2787cc: 0x0  nop
    ctx->pc = 0x2787ccu;
    // NOP
label_2787d0:
    // 0x2787d0: 0xfa97  .word       0x0000FA97                   # dsrav       $ra, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2787d0u;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2787d4:
    // 0x2787d4: 0x7c40  sll         $t7, $zero, 17
    ctx->pc = 0x2787d4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2787d8:
    // 0x2787d8: 0x0  nop
    ctx->pc = 0x2787d8u;
    // NOP
label_2787dc:
    // 0x2787dc: 0x0  nop
    ctx->pc = 0x2787dcu;
    // NOP
label_2787e0:
    // 0x2787e0: 0xfaa7  .word       0x0000FAA7                   # not         $ra, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2787e0u;
    SET_GPR_U64(ctx, 31, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2787e4:
    // 0x2787e4: 0x61b0  tge         $zero, $zero, 390
    ctx->pc = 0x2787e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2787e8:
    // 0x2787e8: 0x0  nop
    ctx->pc = 0x2787e8u;
    // NOP
label_2787ec:
    // 0x2787ec: 0x0  nop
    ctx->pc = 0x2787ecu;
    // NOP
label_2787f0:
    // 0x2787f0: 0xfab4  teq         $zero, $zero, 1002
    ctx->pc = 0x2787f0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2787f4:
    // 0x2787f4: 0x6120  .word       0x00006120                   # add         $t4, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2787f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2787f8:
    // 0x2787f8: 0x0  nop
    ctx->pc = 0x2787f8u;
    // NOP
label_2787fc:
    // 0x2787fc: 0x0  nop
    ctx->pc = 0x2787fcu;
    // NOP
label_278800:
    // 0x278800: 0xfac1  .word       0x0000FAC1                   # INVALID     $zero, $zero, -0x53F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278800u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x278800 raw=0x0000FAC1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278804:
    // 0x278804: 0x5ad0  .word       0x00005AD0                   # mfhi        $t3 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278804u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_278808:
    // 0x278808: 0x0  nop
    ctx->pc = 0x278808u;
    // NOP
label_27880c:
    // 0x27880c: 0x0  nop
    ctx->pc = 0x27880cu;
    // NOP
label_278810:
    // 0x278810: 0xfacd  break       0, 1003
    ctx->pc = 0x278810u;
    runtime->handleBreak(rdram, ctx);
label_278814:
    // 0x278814: 0x4870  tge         $zero, $zero, 289
    ctx->pc = 0x278814u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278818:
    // 0x278818: 0x0  nop
    ctx->pc = 0x278818u;
    // NOP
label_27881c:
    // 0x27881c: 0x0  nop
    ctx->pc = 0x27881cu;
    // NOP
label_278820:
    // 0x278820: 0xfad7  .word       0x0000FAD7                   # dsrav       $ra, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278820u;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_278824:
    // 0x278824: 0x2b00  sll         $a1, $zero, 12
    ctx->pc = 0x278824u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_278828:
    // 0x278828: 0x0  nop
    ctx->pc = 0x278828u;
    // NOP
label_27882c:
    // 0x27882c: 0x0  nop
    ctx->pc = 0x27882cu;
    // NOP
label_278830:
    // 0x278830: 0xfadd  .word       0x0000FADD                   # dmultu      $zero, $zero # 0000FAC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278830u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x278830 raw=0x0000FADD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278834:
    // 0x278834: 0x4510  .word       0x00004510                   # mfhi        $t0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278834u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_278838:
    // 0x278838: 0x0  nop
    ctx->pc = 0x278838u;
    // NOP
label_27883c:
    // 0x27883c: 0x0  nop
    ctx->pc = 0x27883cu;
    // NOP
label_278840:
    // 0x278840: 0xfae6  .word       0x0000FAE6                   # xor         $ra, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278840u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_278844:
    // 0x278844: 0xa160  .word       0x0000A160                   # add         $s4, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278844u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_278848:
    // 0x278848: 0x0  nop
    ctx->pc = 0x278848u;
    // NOP
label_27884c:
    // 0x27884c: 0x0  nop
    ctx->pc = 0x27884cu;
    // NOP
label_278850:
    // 0x278850: 0xfafb  dsra        $ra, $zero, 11
    ctx->pc = 0x278850u;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 0) >> 11);
label_278854:
    // 0x278854: 0x51b0  tge         $zero, $zero, 326
    ctx->pc = 0x278854u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278858:
    // 0x278858: 0x0  nop
    ctx->pc = 0x278858u;
    // NOP
label_27885c:
    // 0x27885c: 0x0  nop
    ctx->pc = 0x27885cu;
    // NOP
label_278860:
    // 0x278860: 0xfb06  .word       0x0000FB06                   # srlv        $ra, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278860u;
    SET_GPR_S32(ctx, 31, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_278864:
    // 0x278864: 0x6480  sll         $t4, $zero, 18
    ctx->pc = 0x278864u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_278868:
    // 0x278868: 0x0  nop
    ctx->pc = 0x278868u;
    // NOP
label_27886c:
    // 0x27886c: 0x0  nop
    ctx->pc = 0x27886cu;
    // NOP
label_278870:
    // 0x278870: 0xfb13  .word       0x0000FB13                   # mtlo        $zero # 0000FB00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278870u;
    ctx->lo = GPR_U64(ctx, 0);
label_278874:
    // 0x278874: 0xb3c0  sll         $s6, $zero, 15
    ctx->pc = 0x278874u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_278878:
    // 0x278878: 0x0  nop
    ctx->pc = 0x278878u;
    // NOP
label_27887c:
    // 0x27887c: 0x0  nop
    ctx->pc = 0x27887cu;
    // NOP
label_278880:
    // 0x278880: 0xfb2a  .word       0x0000FB2A                   # slt         $ra, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278880u;
    SET_GPR_U64(ctx, 31, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_278884:
    // 0x278884: 0x45d0  .word       0x000045D0                   # mfhi        $t0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278884u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_278888:
    // 0x278888: 0x0  nop
    ctx->pc = 0x278888u;
    // NOP
label_27888c:
    // 0x27888c: 0x0  nop
    ctx->pc = 0x27888cu;
    // NOP
label_278890:
    // 0x278890: 0xfb33  tltu        $zero, $zero, 1004
    ctx->pc = 0x278890u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278894:
    // 0x278894: 0x39c0  sll         $a3, $zero, 7
    ctx->pc = 0x278894u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_278898:
    // 0x278898: 0x0  nop
    ctx->pc = 0x278898u;
    // NOP
label_27889c:
    // 0x27889c: 0x0  nop
    ctx->pc = 0x27889cu;
    // NOP
label_2788a0:
    // 0x2788a0: 0xfb3b  dsra        $ra, $zero, 12
    ctx->pc = 0x2788a0u;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 0) >> 12);
label_2788a4:
    // 0x2788a4: 0x6c40  sll         $t5, $zero, 17
    ctx->pc = 0x2788a4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2788a8:
    // 0x2788a8: 0x0  nop
    ctx->pc = 0x2788a8u;
    // NOP
label_2788ac:
    // 0x2788ac: 0x0  nop
    ctx->pc = 0x2788acu;
    // NOP
label_2788b0:
    // 0x2788b0: 0xfb49  .word       0x0000FB49                   # jalr        $zero # 00000340 <InstrIdType: CPU_SPECIAL>
label_2788b4:
    if (ctx->pc == 0x2788B4u) {
        ctx->pc = 0x2788B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2788B0u;
        // 0x2788b4: 0x7b80  sll         $t7, $zero, 14 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2788B8u;
        goto label_2788b8;
    }
    ctx->pc = 0x2788B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 31, 0x2788B8u);
        ctx->pc = 0x2788B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2788B0u;
        // 0x2788b4: 0x7b80  sll         $t7, $zero, 14 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2788B0u, 0x2788B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2788B8u;
label_2788b8:
    // 0x2788b8: 0x0  nop
    ctx->pc = 0x2788b8u;
    // NOP
label_2788bc:
    // 0x2788bc: 0x0  nop
    ctx->pc = 0x2788bcu;
    // NOP
label_2788c0:
    // 0x2788c0: 0xfb59  .word       0x0000FB59                   # multu       $zero, $zero # 0000FB40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2788c0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2788c4:
    // 0x2788c4: 0x57c0  sll         $t2, $zero, 31
    ctx->pc = 0x2788c4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_2788c8:
    // 0x2788c8: 0x0  nop
    ctx->pc = 0x2788c8u;
    // NOP
label_2788cc:
    // 0x2788cc: 0x0  nop
    ctx->pc = 0x2788ccu;
    // NOP
label_2788d0:
    // 0x2788d0: 0xfb64  .word       0x0000FB64                   # and         $ra, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2788d0u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2788d4:
    // 0x2788d4: 0x9520  .word       0x00009520                   # add         $s2, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2788d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2788d8:
    // 0x2788d8: 0x0  nop
    ctx->pc = 0x2788d8u;
    // NOP
label_2788dc:
    // 0x2788dc: 0x0  nop
    ctx->pc = 0x2788dcu;
    // NOP
label_2788e0:
    // 0x2788e0: 0xfb77  .word       0x0000FB77                   # INVALID     $zero, $zero, -0x489 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2788e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2788E0 raw=0x0000FB77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2788e4:
    // 0x2788e4: 0x34e0  .word       0x000034E0                   # add         $a2, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2788e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_2788e8:
    // 0x2788e8: 0x0  nop
    ctx->pc = 0x2788e8u;
    // NOP
label_2788ec:
    // 0x2788ec: 0x0  nop
    ctx->pc = 0x2788ecu;
    // NOP
label_2788f0:
    // 0x2788f0: 0xfb7e  dsrl32      $ra, $zero, 13
    ctx->pc = 0x2788f0u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) >> (32 + 13));
label_2788f4:
    // 0x2788f4: 0x9660  .word       0x00009660                   # add         $s2, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2788f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2788f8:
    // 0x2788f8: 0x0  nop
    ctx->pc = 0x2788f8u;
    // NOP
label_2788fc:
    // 0x2788fc: 0x0  nop
    ctx->pc = 0x2788fcu;
    // NOP
label_278900:
    // 0x278900: 0xfb91  .word       0x0000FB91                   # mthi        $zero # 0000FB80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278900u;
    ctx->hi = GPR_U64(ctx, 0);
label_278904:
    // 0x278904: 0x6e40  sll         $t5, $zero, 25
    ctx->pc = 0x278904u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_278908:
    // 0x278908: 0x0  nop
    ctx->pc = 0x278908u;
    // NOP
label_27890c:
    // 0x27890c: 0x0  nop
    ctx->pc = 0x27890cu;
    // NOP
label_278910:
    // 0x278910: 0xfb9f  .word       0x0000FB9F                   # ddivu       $ra, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278910u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x278910 raw=0x0000FB9F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278914:
    // 0x278914: 0x1fc0  sll         $v1, $zero, 31
    ctx->pc = 0x278914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_278918:
    // 0x278918: 0x0  nop
    ctx->pc = 0x278918u;
    // NOP
label_27891c:
    // 0x27891c: 0x0  nop
    ctx->pc = 0x27891cu;
    // NOP
label_278920:
    // 0x278920: 0xfba3  .word       0x0000FBA3                   # negu        $ra, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278920u;
    SET_GPR_S32(ctx, 31, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_278924:
    // 0x278924: 0x87c0  sll         $s0, $zero, 31
    ctx->pc = 0x278924u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_278928:
    // 0x278928: 0x0  nop
    ctx->pc = 0x278928u;
    // NOP
label_27892c:
    // 0x27892c: 0x0  nop
    ctx->pc = 0x27892cu;
    // NOP
label_278930:
    // 0x278930: 0xfbb4  teq         $zero, $zero, 1006
    ctx->pc = 0x278930u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278934:
    // 0x278934: 0x86b0  tge         $zero, $zero, 538
    ctx->pc = 0x278934u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278938:
    // 0x278938: 0x0  nop
    ctx->pc = 0x278938u;
    // NOP
label_27893c:
    // 0x27893c: 0x0  nop
    ctx->pc = 0x27893cu;
    // NOP
label_278940:
    // 0x278940: 0xfbc5  .word       0x0000FBC5                   # INVALID     $zero, $zero, -0x43B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278940u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x278940 raw=0x0000FBC5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278944:
    // 0x278944: 0x4bf0  tge         $zero, $zero, 303
    ctx->pc = 0x278944u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278948:
    // 0x278948: 0x0  nop
    ctx->pc = 0x278948u;
    // NOP
label_27894c:
    // 0x27894c: 0x0  nop
    ctx->pc = 0x27894cu;
    // NOP
label_278950:
    // 0x278950: 0xfbcf  .word       0x0000FBCF                   # sync # 0000F800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278950u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_278954:
    // 0x278954: 0x4440  sll         $t0, $zero, 17
    ctx->pc = 0x278954u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_278958:
    // 0x278958: 0x0  nop
    ctx->pc = 0x278958u;
    // NOP
label_27895c:
    // 0x27895c: 0x0  nop
    ctx->pc = 0x27895cu;
    // NOP
label_278960:
    // 0x278960: 0xfbd8  .word       0x0000FBD8                   # mult        $ra, $zero, $zero # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x278960u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_278964:
    // 0x278964: 0x5d10  .word       0x00005D10                   # mfhi        $t3 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278964u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_278968:
    // 0x278968: 0x0  nop
    ctx->pc = 0x278968u;
    // NOP
label_27896c:
    // 0x27896c: 0x0  nop
    ctx->pc = 0x27896cu;
    // NOP
label_278970:
    // 0x278970: 0xfbe4  .word       0x0000FBE4                   # and         $ra, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278970u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_278974:
    // 0x278974: 0x36c0  sll         $a2, $zero, 27
    ctx->pc = 0x278974u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_278978:
    // 0x278978: 0x0  nop
    ctx->pc = 0x278978u;
    // NOP
label_27897c:
    // 0x27897c: 0x0  nop
    ctx->pc = 0x27897cu;
    // NOP
label_278980:
    // 0x278980: 0xfbeb  .word       0x0000FBEB                   # sltu        $ra, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278980u;
    SET_GPR_U64(ctx, 31, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_278984:
    // 0x278984: 0x34b0  tge         $zero, $zero, 210
    ctx->pc = 0x278984u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278988:
    // 0x278988: 0x0  nop
    ctx->pc = 0x278988u;
    // NOP
label_27898c:
    // 0x27898c: 0x0  nop
    ctx->pc = 0x27898cu;
    // NOP
label_278990:
    // 0x278990: 0xfbf2  tlt         $zero, $zero, 1007
    ctx->pc = 0x278990u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278994:
    // 0x278994: 0x6c50  .word       0x00006C50                   # mfhi        $t5 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278994u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_278998:
    // 0x278998: 0x0  nop
    ctx->pc = 0x278998u;
    // NOP
label_27899c:
    // 0x27899c: 0x0  nop
    ctx->pc = 0x27899cu;
    // NOP
label_2789a0:
    // 0x2789a0: 0xfc00  sll         $ra, $zero, 16
    ctx->pc = 0x2789a0u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_2789a4:
    // 0x2789a4: 0x7c70  tge         $zero, $zero, 497
    ctx->pc = 0x2789a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2789a8:
    // 0x2789a8: 0x0  nop
    ctx->pc = 0x2789a8u;
    // NOP
label_2789ac:
    // 0x2789ac: 0x0  nop
    ctx->pc = 0x2789acu;
    // NOP
label_2789b0:
    // 0x2789b0: 0xfc10  .word       0x0000FC10                   # mfhi        $ra # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2789b0u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_2789b4:
    // 0x2789b4: 0x3ec0  sll         $a3, $zero, 27
    ctx->pc = 0x2789b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_2789b8:
    // 0x2789b8: 0x0  nop
    ctx->pc = 0x2789b8u;
    // NOP
label_2789bc:
    // 0x2789bc: 0x0  nop
    ctx->pc = 0x2789bcu;
    // NOP
label_2789c0:
    // 0x2789c0: 0xfc18  .word       0x0000FC18                   # mult        $ra, $zero, $zero # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2789c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2789c4:
    // 0x2789c4: 0x5240  sll         $t2, $zero, 9
    ctx->pc = 0x2789c4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_2789c8:
    // 0x2789c8: 0x0  nop
    ctx->pc = 0x2789c8u;
    // NOP
label_2789cc:
    // 0x2789cc: 0x0  nop
    ctx->pc = 0x2789ccu;
    // NOP
label_2789d0:
    // 0x2789d0: 0xfc23  .word       0x0000FC23                   # negu        $ra, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2789d0u;
    SET_GPR_S32(ctx, 31, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2789d4:
    // 0x2789d4: 0x84f0  tge         $zero, $zero, 531
    ctx->pc = 0x2789d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2789d8:
    // 0x2789d8: 0x0  nop
    ctx->pc = 0x2789d8u;
    // NOP
label_2789dc:
    // 0x2789dc: 0x0  nop
    ctx->pc = 0x2789dcu;
    // NOP
label_2789e0:
    // 0x2789e0: 0xfc34  teq         $zero, $zero, 1008
    ctx->pc = 0x2789e0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2789e4:
    // 0x2789e4: 0x6e60  .word       0x00006E60                   # add         $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2789e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2789e8:
    // 0x2789e8: 0x0  nop
    ctx->pc = 0x2789e8u;
    // NOP
label_2789ec:
    // 0x2789ec: 0x0  nop
    ctx->pc = 0x2789ecu;
    // NOP
label_2789f0:
    // 0x2789f0: 0xfc42  srl         $ra, $zero, 17
    ctx->pc = 0x2789f0u;
    SET_GPR_S32(ctx, 31, (int32_t)SRL32(GPR_U32(ctx, 0), 17));
label_2789f4:
    // 0x2789f4: 0x41f0  tge         $zero, $zero, 263
    ctx->pc = 0x2789f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2789f8:
    // 0x2789f8: 0x0  nop
    ctx->pc = 0x2789f8u;
    // NOP
label_2789fc:
    // 0x2789fc: 0x0  nop
    ctx->pc = 0x2789fcu;
    // NOP
label_278a00:
    // 0x278a00: 0xfc4b  .word       0x0000FC4B                   # movn        $ra, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278a00u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 0));
label_278a04:
    // 0x278a04: 0x5eb0  tge         $zero, $zero, 378
    ctx->pc = 0x278a04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278a08:
    // 0x278a08: 0x0  nop
    ctx->pc = 0x278a08u;
    // NOP
label_278a0c:
    // 0x278a0c: 0x0  nop
    ctx->pc = 0x278a0cu;
    // NOP
label_278a10:
    // 0x278a10: 0xfc57  .word       0x0000FC57                   # dsrav       $ra, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278a10u;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_278a14:
    // 0x278a14: 0x3580  sll         $a2, $zero, 22
    ctx->pc = 0x278a14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_278a18:
    // 0x278a18: 0x0  nop
    ctx->pc = 0x278a18u;
    // NOP
label_278a1c:
    // 0x278a1c: 0x0  nop
    ctx->pc = 0x278a1cu;
    // NOP
label_278a20:
    // 0x278a20: 0xfc5e  .word       0x0000FC5E                   # ddiv        $ra, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278a20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x278A20 raw=0x0000FC5E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278a24:
    // 0x278a24: 0x6800  sll         $t5, $zero, 0
    ctx->pc = 0x278a24u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_278a28:
    // 0x278a28: 0x0  nop
    ctx->pc = 0x278a28u;
    // NOP
label_278a2c:
    // 0x278a2c: 0x0  nop
    ctx->pc = 0x278a2cu;
    // NOP
label_278a30:
    // 0x278a30: 0xfc6b  .word       0x0000FC6B                   # sltu        $ra, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278a30u;
    SET_GPR_U64(ctx, 31, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_278a34:
    // 0x278a34: 0x3a00  sll         $a3, $zero, 8
    ctx->pc = 0x278a34u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_278a38:
    // 0x278a38: 0x0  nop
    ctx->pc = 0x278a38u;
    // NOP
label_278a3c:
    // 0x278a3c: 0x0  nop
    ctx->pc = 0x278a3cu;
    // NOP
label_278a40:
    // 0x278a40: 0xfc73  tltu        $zero, $zero, 1009
    ctx->pc = 0x278a40u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278a44:
    // 0x278a44: 0x5150  .word       0x00005150                   # mfhi        $t2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278a44u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_278a48:
    // 0x278a48: 0x0  nop
    ctx->pc = 0x278a48u;
    // NOP
label_278a4c:
    // 0x278a4c: 0x0  nop
    ctx->pc = 0x278a4cu;
    // NOP
label_278a50:
    // 0x278a50: 0xfc7e  dsrl32      $ra, $zero, 17
    ctx->pc = 0x278a50u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) >> (32 + 17));
label_278a54:
    // 0x278a54: 0x6bd0  .word       0x00006BD0                   # mfhi        $t5 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278a54u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_278a58:
    // 0x278a58: 0x0  nop
    ctx->pc = 0x278a58u;
    // NOP
label_278a5c:
    // 0x278a5c: 0x0  nop
    ctx->pc = 0x278a5cu;
    // NOP
label_278a60:
    // 0x278a60: 0xfc8c  syscall     1010
    ctx->pc = 0x278a60u;
    ctx->pc = 0x278A64u;
runtime->handleSyscall(rdram, ctx, 0x3F2u);
label_278a64:
    // 0x278a64: 0x4ed0  .word       0x00004ED0                   # mfhi        $t1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278a64u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_278a68:
    // 0x278a68: 0x0  nop
    ctx->pc = 0x278a68u;
    // NOP
label_278a6c:
    // 0x278a6c: 0x0  nop
    ctx->pc = 0x278a6cu;
    // NOP
label_278a70:
    // 0x278a70: 0xfc96  .word       0x0000FC96                   # dsrlv       $ra, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278a70u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_278a74:
    // 0x278a74: 0x1e50  .word       0x00001E50                   # mfhi        $v1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278a74u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_278a78:
    // 0x278a78: 0x0  nop
    ctx->pc = 0x278a78u;
    // NOP
label_278a7c:
    // 0x278a7c: 0x0  nop
    ctx->pc = 0x278a7cu;
    // NOP
label_278a80:
    // 0x278a80: 0xfc9a  .word       0x0000FC9A                   # div         $ra, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278a80u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_278a84:
    // 0x278a84: 0x27f0  tge         $zero, $zero, 159
    ctx->pc = 0x278a84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278a88:
    // 0x278a88: 0x0  nop
    ctx->pc = 0x278a88u;
    // NOP
label_278a8c:
    // 0x278a8c: 0x0  nop
    ctx->pc = 0x278a8cu;
    // NOP
label_278a90:
    // 0x278a90: 0xfc9f  .word       0x0000FC9F                   # ddivu       $ra, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278a90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x278A90 raw=0x0000FC9F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278a94:
    // 0x278a94: 0x25b0  tge         $zero, $zero, 150
    ctx->pc = 0x278a94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278a98:
    // 0x278a98: 0x0  nop
    ctx->pc = 0x278a98u;
    // NOP
label_278a9c:
    // 0x278a9c: 0x0  nop
    ctx->pc = 0x278a9cu;
    // NOP
label_278aa0:
    // 0x278aa0: 0xfca4  .word       0x0000FCA4                   # and         $ra, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278aa0u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_278aa4:
    // 0x278aa4: 0x32d0  .word       0x000032D0                   # mfhi        $a2 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278aa4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_278aa8:
    // 0x278aa8: 0x0  nop
    ctx->pc = 0x278aa8u;
    // NOP
label_278aac:
    // 0x278aac: 0x0  nop
    ctx->pc = 0x278aacu;
    // NOP
label_278ab0:
    // 0x278ab0: 0xfcab  .word       0x0000FCAB                   # sltu        $ra, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278ab0u;
    SET_GPR_U64(ctx, 31, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_278ab4:
    // 0x278ab4: 0x4620  .word       0x00004620                   # add         $t0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278ab4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_278ab8:
    // 0x278ab8: 0x0  nop
    ctx->pc = 0x278ab8u;
    // NOP
label_278abc:
    // 0x278abc: 0x0  nop
    ctx->pc = 0x278abcu;
    // NOP
label_278ac0:
    // 0x278ac0: 0xfcb4  teq         $zero, $zero, 1010
    ctx->pc = 0x278ac0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278ac4:
    // 0x278ac4: 0x5990  .word       0x00005990                   # mfhi        $t3 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278ac4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_278ac8:
    // 0x278ac8: 0x0  nop
    ctx->pc = 0x278ac8u;
    // NOP
label_278acc:
    // 0x278acc: 0x0  nop
    ctx->pc = 0x278accu;
    // NOP
label_278ad0:
    // 0x278ad0: 0xfcc0  sll         $ra, $zero, 19
    ctx->pc = 0x278ad0u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_278ad4:
    // 0x278ad4: 0x7aa0  .word       0x00007AA0                   # add         $t7, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278ad4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_278ad8:
    // 0x278ad8: 0x0  nop
    ctx->pc = 0x278ad8u;
    // NOP
label_278adc:
    // 0x278adc: 0x0  nop
    ctx->pc = 0x278adcu;
    // NOP
label_278ae0:
    // 0x278ae0: 0xfcd0  .word       0x0000FCD0                   # mfhi        $ra # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278ae0u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_278ae4:
    // 0x278ae4: 0x5a20  .word       0x00005A20                   # add         $t3, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278ae4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_278ae8:
    // 0x278ae8: 0x0  nop
    ctx->pc = 0x278ae8u;
    // NOP
label_278aec:
    // 0x278aec: 0x0  nop
    ctx->pc = 0x278aecu;
    // NOP
label_278af0:
    // 0x278af0: 0xfcdc  .word       0x0000FCDC                   # dmult       $zero, $zero # 0000FCC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278af0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x278AF0 raw=0x0000FCDC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278af4:
    // 0x278af4: 0x7500  sll         $t6, $zero, 20
    ctx->pc = 0x278af4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_278af8:
    // 0x278af8: 0x0  nop
    ctx->pc = 0x278af8u;
    // NOP
label_278afc:
    // 0x278afc: 0x0  nop
    ctx->pc = 0x278afcu;
    // NOP
label_278b00:
    // 0x278b00: 0xfceb  .word       0x0000FCEB                   # sltu        $ra, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278b00u;
    SET_GPR_U64(ctx, 31, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_278b04:
    // 0x278b04: 0x6700  sll         $t4, $zero, 28
    ctx->pc = 0x278b04u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_278b08:
    // 0x278b08: 0x0  nop
    ctx->pc = 0x278b08u;
    // NOP
label_278b0c:
    // 0x278b0c: 0x0  nop
    ctx->pc = 0x278b0cu;
    // NOP
label_278b10:
    // 0x278b10: 0xfcf8  dsll        $ra, $zero, 19
    ctx->pc = 0x278b10u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) << 19);
label_278b14:
    // 0x278b14: 0x3fe0  .word       0x00003FE0                   # add         $a3, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278b14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_278b18:
    // 0x278b18: 0x0  nop
    ctx->pc = 0x278b18u;
    // NOP
label_278b1c:
    // 0x278b1c: 0x0  nop
    ctx->pc = 0x278b1cu;
    // NOP
label_278b20:
    // 0x278b20: 0xfd00  sll         $ra, $zero, 20
    ctx->pc = 0x278b20u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_278b24:
    // 0x278b24: 0x6a30  tge         $zero, $zero, 424
    ctx->pc = 0x278b24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278b28:
    // 0x278b28: 0x0  nop
    ctx->pc = 0x278b28u;
    // NOP
label_278b2c:
    // 0x278b2c: 0x0  nop
    ctx->pc = 0x278b2cu;
    // NOP
label_278b30:
    // 0x278b30: 0xfd0e  .word       0x0000FD0E                   # INVALID     $zero, $zero, -0x2F2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278b30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x278B30 raw=0x0000FD0E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278b34:
    // 0x278b34: 0x75e0  .word       0x000075E0                   # add         $t6, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278b34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_278b38:
    // 0x278b38: 0x0  nop
    ctx->pc = 0x278b38u;
    // NOP
label_278b3c:
    // 0x278b3c: 0x0  nop
    ctx->pc = 0x278b3cu;
    // NOP
label_278b40:
    // 0x278b40: 0xfd1d  .word       0x0000FD1D                   # dmultu      $zero, $zero # 0000FD00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278b40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x278B40 raw=0x0000FD1D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278b44:
    // 0x278b44: 0x43a0  .word       0x000043A0                   # add         $t0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278b44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_278b48:
    // 0x278b48: 0x0  nop
    ctx->pc = 0x278b48u;
    // NOP
label_278b4c:
    // 0x278b4c: 0x0  nop
    ctx->pc = 0x278b4cu;
    // NOP
label_278b50:
    // 0x278b50: 0xfd26  .word       0x0000FD26                   # xor         $ra, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278b50u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_278b54:
    // 0x278b54: 0x2a90  .word       0x00002A90                   # mfhi        $a1 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278b54u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_278b58:
    // 0x278b58: 0x0  nop
    ctx->pc = 0x278b58u;
    // NOP
label_278b5c:
    // 0x278b5c: 0x0  nop
    ctx->pc = 0x278b5cu;
    // NOP
label_278b60:
    // 0x278b60: 0xfd2c  .word       0x0000FD2C                   # dadd        $ra, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278b60u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_278b64:
    // 0x278b64: 0xace0  .word       0x0000ACE0                   # add         $s5, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278b64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_278b68:
    // 0x278b68: 0x0  nop
    ctx->pc = 0x278b68u;
    // NOP
label_278b6c:
    // 0x278b6c: 0x0  nop
    ctx->pc = 0x278b6cu;
    // NOP
label_278b70:
    // 0x278b70: 0xfd42  srl         $ra, $zero, 21
    ctx->pc = 0x278b70u;
    SET_GPR_S32(ctx, 31, (int32_t)SRL32(GPR_U32(ctx, 0), 21));
label_278b74:
    // 0x278b74: 0x9f20  .word       0x00009F20                   # add         $s3, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278b74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_278b78:
    // 0x278b78: 0x0  nop
    ctx->pc = 0x278b78u;
    // NOP
label_278b7c:
    // 0x278b7c: 0x0  nop
    ctx->pc = 0x278b7cu;
    // NOP
label_278b80:
    // 0x278b80: 0xfd56  .word       0x0000FD56                   # dsrlv       $ra, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278b80u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_278b84:
    // 0x278b84: 0x44c0  sll         $t0, $zero, 19
    ctx->pc = 0x278b84u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_278b88:
    // 0x278b88: 0x0  nop
    ctx->pc = 0x278b88u;
    // NOP
label_278b8c:
    // 0x278b8c: 0x0  nop
    ctx->pc = 0x278b8cu;
    // NOP
label_278b90:
    // 0x278b90: 0xfd5f  .word       0x0000FD5F                   # ddivu       $ra, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278b90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x278B90 raw=0x0000FD5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278b94:
    // 0x278b94: 0x7630  tge         $zero, $zero, 472
    ctx->pc = 0x278b94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278b98:
    // 0x278b98: 0x0  nop
    ctx->pc = 0x278b98u;
    // NOP
label_278b9c:
    // 0x278b9c: 0x0  nop
    ctx->pc = 0x278b9cu;
    // NOP
label_278ba0:
    // 0x278ba0: 0xfd6e  .word       0x0000FD6E                   # dsub        $ra, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278ba0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_278ba4:
    // 0x278ba4: 0x5930  tge         $zero, $zero, 356
    ctx->pc = 0x278ba4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278ba8:
    // 0x278ba8: 0x0  nop
    ctx->pc = 0x278ba8u;
    // NOP
label_278bac:
    // 0x278bac: 0x0  nop
    ctx->pc = 0x278bacu;
    // NOP
label_278bb0:
    // 0x278bb0: 0xfd7a  dsrl        $ra, $zero, 21
    ctx->pc = 0x278bb0u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) >> 21);
label_278bb4:
    // 0x278bb4: 0xa630  tge         $zero, $zero, 664
    ctx->pc = 0x278bb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278bb8:
    // 0x278bb8: 0x0  nop
    ctx->pc = 0x278bb8u;
    // NOP
label_278bbc:
    // 0x278bbc: 0x0  nop
    ctx->pc = 0x278bbcu;
    // NOP
label_278bc0:
    // 0x278bc0: 0xfd8f  .word       0x0000FD8F                   # sync.p # 0000F800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278bc0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_278bc4:
    // 0x278bc4: 0x8160  .word       0x00008160                   # add         $s0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278bc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_278bc8:
    // 0x278bc8: 0x0  nop
    ctx->pc = 0x278bc8u;
    // NOP
label_278bcc:
    // 0x278bcc: 0x0  nop
    ctx->pc = 0x278bccu;
    // NOP
label_278bd0:
    // 0x278bd0: 0xfda0  .word       0x0000FDA0                   # add         $ra, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278bd0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_278bd4:
    // 0x278bd4: 0x48c0  sll         $t1, $zero, 3
    ctx->pc = 0x278bd4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_278bd8:
    // 0x278bd8: 0x0  nop
    ctx->pc = 0x278bd8u;
    // NOP
label_278bdc:
    // 0x278bdc: 0x0  nop
    ctx->pc = 0x278bdcu;
    // NOP
label_278be0:
    // 0x278be0: 0xfdaa  .word       0x0000FDAA                   # slt         $ra, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278be0u;
    SET_GPR_U64(ctx, 31, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_278be4:
    // 0x278be4: 0x6960  .word       0x00006960                   # add         $t5, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278be4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_278be8:
    // 0x278be8: 0x0  nop
    ctx->pc = 0x278be8u;
    // NOP
label_278bec:
    // 0x278bec: 0x0  nop
    ctx->pc = 0x278becu;
    // NOP
label_278bf0:
    // 0x278bf0: 0xfdb8  dsll        $ra, $zero, 22
    ctx->pc = 0x278bf0u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) << 22);
label_278bf4:
    // 0x278bf4: 0x5880  sll         $t3, $zero, 2
    ctx->pc = 0x278bf4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_278bf8:
    // 0x278bf8: 0x0  nop
    ctx->pc = 0x278bf8u;
    // NOP
label_278bfc:
    // 0x278bfc: 0x0  nop
    ctx->pc = 0x278bfcu;
    // NOP
label_278c00:
    // 0x278c00: 0xfdc4  .word       0x0000FDC4                   # sllv        $ra, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278c00u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_278c04:
    // 0x278c04: 0xb030  tge         $zero, $zero, 704
    ctx->pc = 0x278c04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278c08:
    // 0x278c08: 0x0  nop
    ctx->pc = 0x278c08u;
    // NOP
label_278c0c:
    // 0x278c0c: 0x0  nop
    ctx->pc = 0x278c0cu;
    // NOP
label_278c10:
    // 0x278c10: 0xfddb  .word       0x0000FDDB                   # divu        $ra, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278c10u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_278c14:
    // 0x278c14: 0x76a0  .word       0x000076A0                   # add         $t6, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278c14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_278c18:
    // 0x278c18: 0x0  nop
    ctx->pc = 0x278c18u;
    // NOP
label_278c1c:
    // 0x278c1c: 0x0  nop
    ctx->pc = 0x278c1cu;
    // NOP
label_278c20:
    // 0x278c20: 0xfdea  .word       0x0000FDEA                   # slt         $ra, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278c20u;
    SET_GPR_U64(ctx, 31, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_278c24:
    // 0x278c24: 0x70d0  .word       0x000070D0                   # mfhi        $t6 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278c24u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_278c28:
    // 0x278c28: 0x0  nop
    ctx->pc = 0x278c28u;
    // NOP
label_278c2c:
    // 0x278c2c: 0x0  nop
    ctx->pc = 0x278c2cu;
    // NOP
label_278c30:
    // 0x278c30: 0xfdf9  .word       0x0000FDF9                   # INVALID     $zero, $zero, -0x207 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278c30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x278C30 raw=0x0000FDF9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278c34:
    // 0x278c34: 0x60a0  .word       0x000060A0                   # add         $t4, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278c34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_278c38:
    // 0x278c38: 0x0  nop
    ctx->pc = 0x278c38u;
    // NOP
label_278c3c:
    // 0x278c3c: 0x0  nop
    ctx->pc = 0x278c3cu;
    // NOP
label_278c40:
    // 0x278c40: 0xfe06  .word       0x0000FE06                   # srlv        $ra, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278c40u;
    SET_GPR_S32(ctx, 31, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_278c44:
    // 0x278c44: 0xeed0  .word       0x0000EED0                   # mfhi        $sp # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278c44u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_278c48:
    // 0x278c48: 0x0  nop
    ctx->pc = 0x278c48u;
    // NOP
label_278c4c:
    // 0x278c4c: 0x0  nop
    ctx->pc = 0x278c4cu;
    // NOP
label_278c50:
    // 0x278c50: 0xfe24  .word       0x0000FE24                   # and         $ra, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278c50u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_278c54:
    // 0x278c54: 0x7040  sll         $t6, $zero, 1
    ctx->pc = 0x278c54u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_278c58:
    // 0x278c58: 0x0  nop
    ctx->pc = 0x278c58u;
    // NOP
label_278c5c:
    // 0x278c5c: 0x0  nop
    ctx->pc = 0x278c5cu;
    // NOP
label_278c60:
    // 0x278c60: 0xfe33  tltu        $zero, $zero, 1016
    ctx->pc = 0x278c60u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278c64:
    // 0x278c64: 0x9550  .word       0x00009550                   # mfhi        $s2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278c64u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_278c68:
    // 0x278c68: 0x0  nop
    ctx->pc = 0x278c68u;
    // NOP
label_278c6c:
    // 0x278c6c: 0x0  nop
    ctx->pc = 0x278c6cu;
    // NOP
label_278c70:
    // 0x278c70: 0xfe46  .word       0x0000FE46                   # srlv        $ra, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278c70u;
    SET_GPR_S32(ctx, 31, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_278c74:
    // 0x278c74: 0x4640  sll         $t0, $zero, 25
    ctx->pc = 0x278c74u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_278c78:
    // 0x278c78: 0x0  nop
    ctx->pc = 0x278c78u;
    // NOP
label_278c7c:
    // 0x278c7c: 0x0  nop
    ctx->pc = 0x278c7cu;
    // NOP
label_278c80:
    // 0x278c80: 0xfe4f  .word       0x0000FE4F                   # sync.p # 0000F800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278c80u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_278c84:
    // 0x278c84: 0x47e0  .word       0x000047E0                   # add         $t0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278c84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_278c88:
    // 0x278c88: 0x0  nop
    ctx->pc = 0x278c88u;
    // NOP
label_278c8c:
    // 0x278c8c: 0x0  nop
    ctx->pc = 0x278c8cu;
    // NOP
label_278c90:
    // 0x278c90: 0xfe58  .word       0x0000FE58                   # mult        $ra, $zero, $zero # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x278c90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_278c94:
    // 0x278c94: 0x7f70  tge         $zero, $zero, 509
    ctx->pc = 0x278c94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278c98:
    // 0x278c98: 0x0  nop
    ctx->pc = 0x278c98u;
    // NOP
label_278c9c:
    // 0x278c9c: 0x0  nop
    ctx->pc = 0x278c9cu;
    // NOP
label_278ca0:
    // 0x278ca0: 0xfe68  .word       0x0000FE68                   # mfsa        $ra # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x278ca0u;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_278ca4:
    // 0x278ca4: 0x7640  sll         $t6, $zero, 25
    ctx->pc = 0x278ca4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_278ca8:
    // 0x278ca8: 0x0  nop
    ctx->pc = 0x278ca8u;
    // NOP
label_278cac:
    // 0x278cac: 0x0  nop
    ctx->pc = 0x278cacu;
    // NOP
label_278cb0:
    // 0x278cb0: 0xfe77  .word       0x0000FE77                   # INVALID     $zero, $zero, -0x189 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278cb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x278CB0 raw=0x0000FE77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278cb4:
    // 0x278cb4: 0x6150  .word       0x00006150                   # mfhi        $t4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278cb4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_278cb8:
    // 0x278cb8: 0x0  nop
    ctx->pc = 0x278cb8u;
    // NOP
label_278cbc:
    // 0x278cbc: 0x0  nop
    ctx->pc = 0x278cbcu;
    // NOP
label_278cc0:
    // 0x278cc0: 0xfe84  .word       0x0000FE84                   # sllv        $ra, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278cc0u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_278cc4:
    // 0x278cc4: 0x7ba0  .word       0x00007BA0                   # add         $t7, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278cc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_278cc8:
    // 0x278cc8: 0x0  nop
    ctx->pc = 0x278cc8u;
    // NOP
label_278ccc:
    // 0x278ccc: 0x0  nop
    ctx->pc = 0x278cccu;
    // NOP
label_278cd0:
    // 0x278cd0: 0xfe94  .word       0x0000FE94                   # dsllv       $ra, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278cd0u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_278cd4:
    // 0x278cd4: 0x55a0  .word       0x000055A0                   # add         $t2, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278cd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_278cd8:
    // 0x278cd8: 0x0  nop
    ctx->pc = 0x278cd8u;
    // NOP
label_278cdc:
    // 0x278cdc: 0x0  nop
    ctx->pc = 0x278cdcu;
    // NOP
label_278ce0:
    // 0x278ce0: 0xfe9f  .word       0x0000FE9F                   # ddivu       $ra, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278ce0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x278CE0 raw=0x0000FE9F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278ce4:
    // 0x278ce4: 0x8ab0  tge         $zero, $zero, 554
    ctx->pc = 0x278ce4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278ce8:
    // 0x278ce8: 0x0  nop
    ctx->pc = 0x278ce8u;
    // NOP
label_278cec:
    // 0x278cec: 0x0  nop
    ctx->pc = 0x278cecu;
    // NOP
label_278cf0:
    // 0x278cf0: 0xfeb1  tgeu        $zero, $zero, 1018
    ctx->pc = 0x278cf0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278cf4:
    // 0x278cf4: 0x6940  sll         $t5, $zero, 5
    ctx->pc = 0x278cf4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_278cf8:
    // 0x278cf8: 0x0  nop
    ctx->pc = 0x278cf8u;
    // NOP
label_278cfc:
    // 0x278cfc: 0x0  nop
    ctx->pc = 0x278cfcu;
    // NOP
label_278d00:
    // 0x278d00: 0xfebf  dsra32      $ra, $zero, 26
    ctx->pc = 0x278d00u;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 0) >> (32 + 26));
label_278d04:
    // 0x278d04: 0x37d0  .word       0x000037D0                   # mfhi        $a2 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278d04u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_278d08:
    // 0x278d08: 0x0  nop
    ctx->pc = 0x278d08u;
    // NOP
label_278d0c:
    // 0x278d0c: 0x0  nop
    ctx->pc = 0x278d0cu;
    // NOP
label_278d10:
    // 0x278d10: 0xfec6  .word       0x0000FEC6                   # srlv        $ra, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278d10u;
    SET_GPR_S32(ctx, 31, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_278d14:
    // 0x278d14: 0x77d0  .word       0x000077D0                   # mfhi        $t6 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278d14u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_278d18:
    // 0x278d18: 0x0  nop
    ctx->pc = 0x278d18u;
    // NOP
label_278d1c:
    // 0x278d1c: 0x0  nop
    ctx->pc = 0x278d1cu;
    // NOP
label_278d20:
    // 0x278d20: 0xfed5  .word       0x0000FED5                   # INVALID     $zero, $zero, -0x12B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278d20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x278D20 raw=0x0000FED5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278d24:
    // 0x278d24: 0x8ec0  sll         $s1, $zero, 27
    ctx->pc = 0x278d24u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_278d28:
    // 0x278d28: 0x0  nop
    ctx->pc = 0x278d28u;
    // NOP
label_278d2c:
    // 0x278d2c: 0x0  nop
    ctx->pc = 0x278d2cu;
    // NOP
label_278d30:
    // 0x278d30: 0xfee7  .word       0x0000FEE7                   # not         $ra, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278d30u;
    SET_GPR_U64(ctx, 31, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_278d34:
    // 0x278d34: 0x70d0  .word       0x000070D0                   # mfhi        $t6 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278d34u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_278d38:
    // 0x278d38: 0x0  nop
    ctx->pc = 0x278d38u;
    // NOP
label_278d3c:
    // 0x278d3c: 0x0  nop
    ctx->pc = 0x278d3cu;
    // NOP
label_278d40:
    // 0x278d40: 0xfef6  tne         $zero, $zero, 1019
    ctx->pc = 0x278d40u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278d44:
    // 0x278d44: 0x6950  .word       0x00006950                   # mfhi        $t5 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278d44u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_278d48:
    // 0x278d48: 0x0  nop
    ctx->pc = 0x278d48u;
    // NOP
label_278d4c:
    // 0x278d4c: 0x0  nop
    ctx->pc = 0x278d4cu;
    // NOP
label_278d50:
    // 0x278d50: 0xff04  .word       0x0000FF04                   # sllv        $ra, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278d50u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_278d54:
    // 0x278d54: 0x4940  sll         $t1, $zero, 5
    ctx->pc = 0x278d54u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_278d58:
    // 0x278d58: 0x0  nop
    ctx->pc = 0x278d58u;
    // NOP
label_278d5c:
    // 0x278d5c: 0x0  nop
    ctx->pc = 0x278d5cu;
    // NOP
label_278d60:
    // 0x278d60: 0xff0e  .word       0x0000FF0E                   # INVALID     $zero, $zero, -0xF2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278d60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x278D60 raw=0x0000FF0E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278d64:
    // 0x278d64: 0x5680  sll         $t2, $zero, 26
    ctx->pc = 0x278d64u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_278d68:
    // 0x278d68: 0x0  nop
    ctx->pc = 0x278d68u;
    // NOP
label_278d6c:
    // 0x278d6c: 0x0  nop
    ctx->pc = 0x278d6cu;
    // NOP
label_278d70:
    // 0x278d70: 0xff19  .word       0x0000FF19                   # multu       $zero, $zero # 0000FF00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278d70u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_278d74:
    // 0x278d74: 0x42c0  sll         $t0, $zero, 11
    ctx->pc = 0x278d74u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_278d78:
    // 0x278d78: 0x0  nop
    ctx->pc = 0x278d78u;
    // NOP
label_278d7c:
    // 0x278d7c: 0x0  nop
    ctx->pc = 0x278d7cu;
    // NOP
label_278d80:
    // 0x278d80: 0xff22  .word       0x0000FF22                   # neg         $ra, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278d80u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
label_278d84:
    // 0x278d84: 0x7c30  tge         $zero, $zero, 496
    ctx->pc = 0x278d84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278d88:
    // 0x278d88: 0x0  nop
    ctx->pc = 0x278d88u;
    // NOP
label_278d8c:
    // 0x278d8c: 0x0  nop
    ctx->pc = 0x278d8cu;
    // NOP
label_278d90:
    // 0x278d90: 0xff32  tlt         $zero, $zero, 1020
    ctx->pc = 0x278d90u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278d94:
    // 0x278d94: 0x8f70  tge         $zero, $zero, 573
    ctx->pc = 0x278d94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278d98:
    // 0x278d98: 0x0  nop
    ctx->pc = 0x278d98u;
    // NOP
label_278d9c:
    // 0x278d9c: 0x0  nop
    ctx->pc = 0x278d9cu;
    // NOP
label_278da0:
    // 0x278da0: 0xff44  .word       0x0000FF44                   # sllv        $ra, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278da0u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_278da4:
    // 0x278da4: 0x5800  sll         $t3, $zero, 0
    ctx->pc = 0x278da4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_278da8:
    // 0x278da8: 0x0  nop
    ctx->pc = 0x278da8u;
    // NOP
label_278dac:
    // 0x278dac: 0x0  nop
    ctx->pc = 0x278dacu;
    // NOP
label_278db0:
    // 0x278db0: 0xff4f  .word       0x0000FF4F                   # sync.p # 0000F800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278db0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_278db4:
    // 0x278db4: 0x3050  .word       0x00003050                   # mfhi        $a2 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278db4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_278db8:
    // 0x278db8: 0x0  nop
    ctx->pc = 0x278db8u;
    // NOP
label_278dbc:
    // 0x278dbc: 0x0  nop
    ctx->pc = 0x278dbcu;
    // NOP
label_278dc0:
    // 0x278dc0: 0xff56  .word       0x0000FF56                   # dsrlv       $ra, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278dc0u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_278dc4:
    // 0x278dc4: 0x6ed0  .word       0x00006ED0                   # mfhi        $t5 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278dc4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_278dc8:
    // 0x278dc8: 0x0  nop
    ctx->pc = 0x278dc8u;
    // NOP
label_278dcc:
    // 0x278dcc: 0x0  nop
    ctx->pc = 0x278dccu;
    // NOP
label_278dd0:
    // 0x278dd0: 0xff64  .word       0x0000FF64                   # and         $ra, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278dd0u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_278dd4:
    // 0x278dd4: 0x8250  .word       0x00008250                   # mfhi        $s0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278dd4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_278dd8:
    // 0x278dd8: 0x0  nop
    ctx->pc = 0x278dd8u;
    // NOP
label_278ddc:
    // 0x278ddc: 0x0  nop
    ctx->pc = 0x278ddcu;
    // NOP
label_278de0:
    // 0x278de0: 0xff75  .word       0x0000FF75                   # INVALID     $zero, $zero, -0x8B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278de0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x278DE0 raw=0x0000FF75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278de4:
    // 0x278de4: 0x8240  sll         $s0, $zero, 9
    ctx->pc = 0x278de4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_278de8:
    // 0x278de8: 0x0  nop
    ctx->pc = 0x278de8u;
    // NOP
label_278dec:
    // 0x278dec: 0x0  nop
    ctx->pc = 0x278decu;
    // NOP
label_278df0:
    // 0x278df0: 0xff86  .word       0x0000FF86                   # srlv        $ra, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278df0u;
    SET_GPR_S32(ctx, 31, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_278df4:
    // 0x278df4: 0x7d90  .word       0x00007D90                   # mfhi        $t7 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278df4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_278df8:
    // 0x278df8: 0x0  nop
    ctx->pc = 0x278df8u;
    // NOP
label_278dfc:
    // 0x278dfc: 0x0  nop
    ctx->pc = 0x278dfcu;
    // NOP
label_278e00:
    // 0x278e00: 0xff96  .word       0x0000FF96                   # dsrlv       $ra, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278e00u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_278e04:
    // 0x278e04: 0x45b0  tge         $zero, $zero, 278
    ctx->pc = 0x278e04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278e08:
    // 0x278e08: 0x0  nop
    ctx->pc = 0x278e08u;
    // NOP
label_278e0c:
    // 0x278e0c: 0x0  nop
    ctx->pc = 0x278e0cu;
    // NOP
label_278e10:
    // 0x278e10: 0xff9f  .word       0x0000FF9F                   # ddivu       $ra, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278e10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x278E10 raw=0x0000FF9F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278e14:
    // 0x278e14: 0x8ea0  .word       0x00008EA0                   # add         $s1, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278e14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_278e18:
    // 0x278e18: 0x0  nop
    ctx->pc = 0x278e18u;
    // NOP
label_278e1c:
    // 0x278e1c: 0x0  nop
    ctx->pc = 0x278e1cu;
    // NOP
label_278e20:
    // 0x278e20: 0xffb1  tgeu        $zero, $zero, 1022
    ctx->pc = 0x278e20u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278e24:
    // 0x278e24: 0x4260  .word       0x00004260                   # add         $t0, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278e24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_278e28:
    // 0x278e28: 0x0  nop
    ctx->pc = 0x278e28u;
    // NOP
label_278e2c:
    // 0x278e2c: 0x0  nop
    ctx->pc = 0x278e2cu;
    // NOP
label_278e30:
    // 0x278e30: 0xffba  dsrl        $ra, $zero, 30
    ctx->pc = 0x278e30u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) >> 30);
label_278e34:
    // 0x278e34: 0x7250  .word       0x00007250                   # mfhi        $t6 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278e34u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_278e38:
    // 0x278e38: 0x0  nop
    ctx->pc = 0x278e38u;
    // NOP
label_278e3c:
    // 0x278e3c: 0x0  nop
    ctx->pc = 0x278e3cu;
    // NOP
label_278e40:
    // 0x278e40: 0xffc9  .word       0x0000FFC9                   # jalr        $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
label_278e44:
    if (ctx->pc == 0x278E44u) {
        ctx->pc = 0x278E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278E40u;
        // 0x278e44: 0x9960  .word       0x00009960                   # add         $s3, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x278E48u;
        goto label_278e48;
    }
    ctx->pc = 0x278E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 31, 0x278E48u);
        ctx->pc = 0x278E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278E40u;
        // 0x278e44: 0x9960  .word       0x00009960                   # add         $s3, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278E40u, 0x278E48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x278E48u;
label_278e48:
    // 0x278e48: 0x0  nop
    ctx->pc = 0x278e48u;
    // NOP
label_278e4c:
    // 0x278e4c: 0x0  nop
    ctx->pc = 0x278e4cu;
    // NOP
label_278e50:
    // 0x278e50: 0xffdd  .word       0x0000FFDD                   # dmultu      $zero, $zero # 0000FFC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278e50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x278E50 raw=0x0000FFDD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278e54:
    // 0x278e54: 0x48e0  .word       0x000048E0                   # add         $t1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278e54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_278e58:
    // 0x278e58: 0x0  nop
    ctx->pc = 0x278e58u;
    // NOP
label_278e5c:
    // 0x278e5c: 0x0  nop
    ctx->pc = 0x278e5cu;
    // NOP
label_278e60:
    // 0x278e60: 0xffe7  .word       0x0000FFE7                   # not         $ra, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278e60u;
    SET_GPR_U64(ctx, 31, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_278e64:
    // 0x278e64: 0x8880  sll         $s1, $zero, 2
    ctx->pc = 0x278e64u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_278e68:
    // 0x278e68: 0x0  nop
    ctx->pc = 0x278e68u;
    // NOP
label_278e6c:
    // 0x278e6c: 0x0  nop
    ctx->pc = 0x278e6cu;
    // NOP
label_278e70:
    // 0x278e70: 0xfff9  .word       0x0000FFF9                   # INVALID     $zero, $zero, -0x7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278e70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x278E70 raw=0x0000FFF9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278e74:
    // 0x278e74: 0x4590  .word       0x00004590                   # mfhi        $t0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278e74u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_278e78:
    // 0x278e78: 0x0  nop
    ctx->pc = 0x278e78u;
    // NOP
label_278e7c:
    // 0x278e7c: 0x0  nop
    ctx->pc = 0x278e7cu;
    // NOP
label_278e80:
    // 0x278e80: 0x10002  srl         $zero, $at, 0
    ctx->pc = 0x278e80u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 1), 0));
label_278e84:
    // 0x278e84: 0x2fe0  .word       0x00002FE0                   # add         $a1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278e84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_278e88:
    // 0x278e88: 0x0  nop
    ctx->pc = 0x278e88u;
    // NOP
label_278e8c:
    // 0x278e8c: 0x0  nop
    ctx->pc = 0x278e8cu;
    // NOP
label_278e90:
    // 0x278e90: 0x10008  .word       0x00010008                   # jr          $zero # 00010000 <InstrIdType: CPU_SPECIAL>
label_278e94:
    if (ctx->pc == 0x278E94u) {
        ctx->pc = 0x278E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278E90u;
        // 0x278e94: 0x4560  .word       0x00004560                   # add         $t0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x278E98u;
        goto label_278e98;
    }
    ctx->pc = 0x278E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x278E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278E90u;
        // 0x278e94: 0x4560  .word       0x00004560                   # add         $t0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278E90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x278E98u;
label_278e98:
    // 0x278e98: 0x0  nop
    ctx->pc = 0x278e98u;
    // NOP
label_278e9c:
    // 0x278e9c: 0x0  nop
    ctx->pc = 0x278e9cu;
    // NOP
label_278ea0:
    // 0x278ea0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278ea0u;
    ctx->hi = GPR_U64(ctx, 0);
label_278ea4:
    // 0x278ea4: 0x5920  .word       0x00005920                   # add         $t3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278ea4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_278ea8:
    // 0x278ea8: 0x0  nop
    ctx->pc = 0x278ea8u;
    // NOP
label_278eac:
    // 0x278eac: 0x0  nop
    ctx->pc = 0x278eacu;
    // NOP
label_278eb0:
    // 0x278eb0: 0x1001d  dmultu      $zero, $at
    ctx->pc = 0x278eb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x278EB0 raw=0x0001001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278eb4:
    // 0x278eb4: 0x64a0  .word       0x000064A0                   # add         $t4, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278eb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_278eb8:
    // 0x278eb8: 0x0  nop
    ctx->pc = 0x278eb8u;
    // NOP
label_278ebc:
    // 0x278ebc: 0x0  nop
    ctx->pc = 0x278ebcu;
    // NOP
label_278ec0:
    // 0x278ec0: 0x1002a  slt         $zero, $zero, $at
    ctx->pc = 0x278ec0u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_278ec4:
    // 0x278ec4: 0x8a00  sll         $s1, $zero, 8
    ctx->pc = 0x278ec4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_278ec8:
    // 0x278ec8: 0x0  nop
    ctx->pc = 0x278ec8u;
    // NOP
label_278ecc:
    // 0x278ecc: 0x0  nop
    ctx->pc = 0x278eccu;
    // NOP
label_278ed0:
    // 0x278ed0: 0x1003c  dsll32      $zero, $at, 0
    ctx->pc = 0x278ed0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) << (32 + 0));
label_278ed4:
    // 0x278ed4: 0xb090  .word       0x0000B090                   # mfhi        $s6 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278ed4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_278ed8:
    // 0x278ed8: 0x0  nop
    ctx->pc = 0x278ed8u;
    // NOP
label_278edc:
    // 0x278edc: 0x0  nop
    ctx->pc = 0x278edcu;
    // NOP
label_278ee0:
    // 0x278ee0: 0x10053  .word       0x00010053                   # mtlo        $zero # 00010040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278ee0u;
    ctx->lo = GPR_U64(ctx, 0);
label_278ee4:
    // 0x278ee4: 0x7ed0  .word       0x00007ED0                   # mfhi        $t7 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278ee4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_278ee8:
    // 0x278ee8: 0x0  nop
    ctx->pc = 0x278ee8u;
    // NOP
label_278eec:
    // 0x278eec: 0x0  nop
    ctx->pc = 0x278eecu;
    // NOP
label_278ef0:
    // 0x278ef0: 0x10063  .word       0x00010063                   # negu        $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278ef0u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_278ef4:
    // 0x278ef4: 0x100e0  .word       0x000100E0                   # add         $zero, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278ef4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_278ef8:
    // 0x278ef8: 0x0  nop
    ctx->pc = 0x278ef8u;
    // NOP
label_278efc:
    // 0x278efc: 0x0  nop
    ctx->pc = 0x278efcu;
    // NOP
label_278f00:
    // 0x278f00: 0x10084  .word       0x00010084                   # sllv        $zero, $at, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278f00u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_278f04:
    // 0x278f04: 0xcdc0  sll         $t9, $zero, 23
    ctx->pc = 0x278f04u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_278f08:
    // 0x278f08: 0x0  nop
    ctx->pc = 0x278f08u;
    // NOP
label_278f0c:
    // 0x278f0c: 0x0  nop
    ctx->pc = 0x278f0cu;
    // NOP
label_278f10:
    // 0x278f10: 0x1009e  .word       0x0001009E                   # ddiv        $zero, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278f10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x278F10 raw=0x0001009E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278f14:
    // 0x278f14: 0xdff0  tge         $zero, $zero, 895
    ctx->pc = 0x278f14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278f18:
    // 0x278f18: 0x0  nop
    ctx->pc = 0x278f18u;
    // NOP
label_278f1c:
    // 0x278f1c: 0x0  nop
    ctx->pc = 0x278f1cu;
    // NOP
label_278f20:
    // 0x278f20: 0x100ba  dsrl        $zero, $at, 2
    ctx->pc = 0x278f20u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) >> 2);
label_278f24:
    // 0x278f24: 0x9720  .word       0x00009720                   # add         $s2, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278f24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_278f28:
    // 0x278f28: 0x0  nop
    ctx->pc = 0x278f28u;
    // NOP
label_278f2c:
    // 0x278f2c: 0x0  nop
    ctx->pc = 0x278f2cu;
    // NOP
label_278f30:
    // 0x278f30: 0x100cd  break       1, 3
    ctx->pc = 0x278f30u;
    runtime->handleBreak(rdram, ctx);
label_278f34:
    // 0x278f34: 0x7fa0  .word       0x00007FA0                   # add         $t7, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278f34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_278f38:
    // 0x278f38: 0x0  nop
    ctx->pc = 0x278f38u;
    // NOP
label_278f3c:
    // 0x278f3c: 0x0  nop
    ctx->pc = 0x278f3cu;
    // NOP
label_278f40:
    // 0x278f40: 0x100dd  .word       0x000100DD                   # dmultu      $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278f40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x278F40 raw=0x000100DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278f44:
    // 0x278f44: 0xf150  .word       0x0000F150                   # mfhi        $fp # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278f44u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_278f48:
    // 0x278f48: 0x0  nop
    ctx->pc = 0x278f48u;
    // NOP
label_278f4c:
    // 0x278f4c: 0x0  nop
    ctx->pc = 0x278f4cu;
    // NOP
label_278f50:
    // 0x278f50: 0x100fc  dsll32      $zero, $at, 3
    ctx->pc = 0x278f50u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) << (32 + 3));
label_278f54:
    // 0x278f54: 0x62b0  tge         $zero, $zero, 394
    ctx->pc = 0x278f54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x278f58u;
    return;
}

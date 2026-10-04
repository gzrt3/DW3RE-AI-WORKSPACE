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


void FUN_0019b850_part345(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2437d0u: goto label_2437d0;
        case 0x2437d4u: goto label_2437d4;
        case 0x2437d8u: goto label_2437d8;
        case 0x2437dcu: goto label_2437dc;
        case 0x2437e0u: goto label_2437e0;
        case 0x2437e4u: goto label_2437e4;
        case 0x2437e8u: goto label_2437e8;
        case 0x2437ecu: goto label_2437ec;
        case 0x2437f0u: goto label_2437f0;
        case 0x2437f4u: goto label_2437f4;
        case 0x2437f8u: goto label_2437f8;
        case 0x2437fcu: goto label_2437fc;
        case 0x243800u: goto label_243800;
        case 0x243804u: goto label_243804;
        case 0x243808u: goto label_243808;
        case 0x24380cu: goto label_24380c;
        case 0x243810u: goto label_243810;
        case 0x243814u: goto label_243814;
        case 0x243818u: goto label_243818;
        case 0x24381cu: goto label_24381c;
        case 0x243820u: goto label_243820;
        case 0x243824u: goto label_243824;
        case 0x243828u: goto label_243828;
        case 0x24382cu: goto label_24382c;
        case 0x243830u: goto label_243830;
        case 0x243834u: goto label_243834;
        case 0x243838u: goto label_243838;
        case 0x24383cu: goto label_24383c;
        case 0x243840u: goto label_243840;
        case 0x243844u: goto label_243844;
        case 0x243848u: goto label_243848;
        case 0x24384cu: goto label_24384c;
        case 0x243850u: goto label_243850;
        case 0x243854u: goto label_243854;
        case 0x243858u: goto label_243858;
        case 0x24385cu: goto label_24385c;
        case 0x243860u: goto label_243860;
        case 0x243864u: goto label_243864;
        case 0x243868u: goto label_243868;
        case 0x24386cu: goto label_24386c;
        case 0x243870u: goto label_243870;
        case 0x243874u: goto label_243874;
        case 0x243878u: goto label_243878;
        case 0x24387cu: goto label_24387c;
        case 0x243880u: goto label_243880;
        case 0x243884u: goto label_243884;
        case 0x243888u: goto label_243888;
        case 0x24388cu: goto label_24388c;
        case 0x243890u: goto label_243890;
        case 0x243894u: goto label_243894;
        case 0x243898u: goto label_243898;
        case 0x24389cu: goto label_24389c;
        case 0x2438a0u: goto label_2438a0;
        case 0x2438a4u: goto label_2438a4;
        case 0x2438a8u: goto label_2438a8;
        case 0x2438acu: goto label_2438ac;
        case 0x2438b0u: goto label_2438b0;
        case 0x2438b4u: goto label_2438b4;
        case 0x2438b8u: goto label_2438b8;
        case 0x2438bcu: goto label_2438bc;
        case 0x2438c0u: goto label_2438c0;
        case 0x2438c4u: goto label_2438c4;
        case 0x2438c8u: goto label_2438c8;
        case 0x2438ccu: goto label_2438cc;
        case 0x2438d0u: goto label_2438d0;
        case 0x2438d4u: goto label_2438d4;
        case 0x2438d8u: goto label_2438d8;
        case 0x2438dcu: goto label_2438dc;
        case 0x2438e0u: goto label_2438e0;
        case 0x2438e4u: goto label_2438e4;
        case 0x2438e8u: goto label_2438e8;
        case 0x2438ecu: goto label_2438ec;
        case 0x2438f0u: goto label_2438f0;
        case 0x2438f4u: goto label_2438f4;
        case 0x2438f8u: goto label_2438f8;
        case 0x2438fcu: goto label_2438fc;
        case 0x243900u: goto label_243900;
        case 0x243904u: goto label_243904;
        case 0x243908u: goto label_243908;
        case 0x24390cu: goto label_24390c;
        case 0x243910u: goto label_243910;
        case 0x243914u: goto label_243914;
        case 0x243918u: goto label_243918;
        case 0x24391cu: goto label_24391c;
        case 0x243920u: goto label_243920;
        case 0x243924u: goto label_243924;
        case 0x243928u: goto label_243928;
        case 0x24392cu: goto label_24392c;
        case 0x243930u: goto label_243930;
        case 0x243934u: goto label_243934;
        case 0x243938u: goto label_243938;
        case 0x24393cu: goto label_24393c;
        case 0x243940u: goto label_243940;
        case 0x243944u: goto label_243944;
        case 0x243948u: goto label_243948;
        case 0x24394cu: goto label_24394c;
        case 0x243950u: goto label_243950;
        case 0x243954u: goto label_243954;
        case 0x243958u: goto label_243958;
        case 0x24395cu: goto label_24395c;
        case 0x243960u: goto label_243960;
        case 0x243964u: goto label_243964;
        case 0x243968u: goto label_243968;
        case 0x24396cu: goto label_24396c;
        case 0x243970u: goto label_243970;
        case 0x243974u: goto label_243974;
        case 0x243978u: goto label_243978;
        case 0x24397cu: goto label_24397c;
        case 0x243980u: goto label_243980;
        case 0x243984u: goto label_243984;
        case 0x243988u: goto label_243988;
        case 0x24398cu: goto label_24398c;
        case 0x243990u: goto label_243990;
        case 0x243994u: goto label_243994;
        case 0x243998u: goto label_243998;
        case 0x24399cu: goto label_24399c;
        case 0x2439a0u: goto label_2439a0;
        case 0x2439a4u: goto label_2439a4;
        case 0x2439a8u: goto label_2439a8;
        case 0x2439acu: goto label_2439ac;
        case 0x2439b0u: goto label_2439b0;
        case 0x2439b4u: goto label_2439b4;
        case 0x2439b8u: goto label_2439b8;
        case 0x2439bcu: goto label_2439bc;
        case 0x2439c0u: goto label_2439c0;
        case 0x2439c4u: goto label_2439c4;
        case 0x2439c8u: goto label_2439c8;
        case 0x2439ccu: goto label_2439cc;
        case 0x2439d0u: goto label_2439d0;
        case 0x2439d4u: goto label_2439d4;
        case 0x2439d8u: goto label_2439d8;
        case 0x2439dcu: goto label_2439dc;
        case 0x2439e0u: goto label_2439e0;
        case 0x2439e4u: goto label_2439e4;
        case 0x2439e8u: goto label_2439e8;
        case 0x2439ecu: goto label_2439ec;
        case 0x2439f0u: goto label_2439f0;
        case 0x2439f4u: goto label_2439f4;
        case 0x2439f8u: goto label_2439f8;
        case 0x2439fcu: goto label_2439fc;
        case 0x243a00u: goto label_243a00;
        case 0x243a04u: goto label_243a04;
        case 0x243a08u: goto label_243a08;
        case 0x243a0cu: goto label_243a0c;
        case 0x243a10u: goto label_243a10;
        case 0x243a14u: goto label_243a14;
        case 0x243a18u: goto label_243a18;
        case 0x243a1cu: goto label_243a1c;
        case 0x243a20u: goto label_243a20;
        case 0x243a24u: goto label_243a24;
        case 0x243a28u: goto label_243a28;
        case 0x243a2cu: goto label_243a2c;
        case 0x243a30u: goto label_243a30;
        case 0x243a34u: goto label_243a34;
        case 0x243a38u: goto label_243a38;
        case 0x243a3cu: goto label_243a3c;
        case 0x243a40u: goto label_243a40;
        case 0x243a44u: goto label_243a44;
        case 0x243a48u: goto label_243a48;
        case 0x243a4cu: goto label_243a4c;
        case 0x243a50u: goto label_243a50;
        case 0x243a54u: goto label_243a54;
        case 0x243a58u: goto label_243a58;
        case 0x243a5cu: goto label_243a5c;
        case 0x243a60u: goto label_243a60;
        case 0x243a64u: goto label_243a64;
        case 0x243a68u: goto label_243a68;
        case 0x243a6cu: goto label_243a6c;
        case 0x243a70u: goto label_243a70;
        case 0x243a74u: goto label_243a74;
        case 0x243a78u: goto label_243a78;
        case 0x243a7cu: goto label_243a7c;
        case 0x243a80u: goto label_243a80;
        case 0x243a84u: goto label_243a84;
        case 0x243a88u: goto label_243a88;
        case 0x243a8cu: goto label_243a8c;
        case 0x243a90u: goto label_243a90;
        case 0x243a94u: goto label_243a94;
        case 0x243a98u: goto label_243a98;
        case 0x243a9cu: goto label_243a9c;
        case 0x243aa0u: goto label_243aa0;
        case 0x243aa4u: goto label_243aa4;
        case 0x243aa8u: goto label_243aa8;
        case 0x243aacu: goto label_243aac;
        case 0x243ab0u: goto label_243ab0;
        case 0x243ab4u: goto label_243ab4;
        case 0x243ab8u: goto label_243ab8;
        case 0x243abcu: goto label_243abc;
        case 0x243ac0u: goto label_243ac0;
        case 0x243ac4u: goto label_243ac4;
        case 0x243ac8u: goto label_243ac8;
        case 0x243accu: goto label_243acc;
        case 0x243ad0u: goto label_243ad0;
        case 0x243ad4u: goto label_243ad4;
        case 0x243ad8u: goto label_243ad8;
        case 0x243adcu: goto label_243adc;
        case 0x243ae0u: goto label_243ae0;
        case 0x243ae4u: goto label_243ae4;
        case 0x243ae8u: goto label_243ae8;
        case 0x243aecu: goto label_243aec;
        case 0x243af0u: goto label_243af0;
        case 0x243af4u: goto label_243af4;
        case 0x243af8u: goto label_243af8;
        case 0x243afcu: goto label_243afc;
        case 0x243b00u: goto label_243b00;
        case 0x243b04u: goto label_243b04;
        case 0x243b08u: goto label_243b08;
        case 0x243b0cu: goto label_243b0c;
        case 0x243b10u: goto label_243b10;
        case 0x243b14u: goto label_243b14;
        case 0x243b18u: goto label_243b18;
        case 0x243b1cu: goto label_243b1c;
        case 0x243b20u: goto label_243b20;
        case 0x243b24u: goto label_243b24;
        case 0x243b28u: goto label_243b28;
        case 0x243b2cu: goto label_243b2c;
        case 0x243b30u: goto label_243b30;
        case 0x243b34u: goto label_243b34;
        case 0x243b38u: goto label_243b38;
        case 0x243b3cu: goto label_243b3c;
        case 0x243b40u: goto label_243b40;
        case 0x243b44u: goto label_243b44;
        case 0x243b48u: goto label_243b48;
        case 0x243b4cu: goto label_243b4c;
        case 0x243b50u: goto label_243b50;
        case 0x243b54u: goto label_243b54;
        case 0x243b58u: goto label_243b58;
        case 0x243b5cu: goto label_243b5c;
        case 0x243b60u: goto label_243b60;
        case 0x243b64u: goto label_243b64;
        case 0x243b68u: goto label_243b68;
        case 0x243b6cu: goto label_243b6c;
        case 0x243b70u: goto label_243b70;
        case 0x243b74u: goto label_243b74;
        case 0x243b78u: goto label_243b78;
        case 0x243b7cu: goto label_243b7c;
        case 0x243b80u: goto label_243b80;
        case 0x243b84u: goto label_243b84;
        case 0x243b88u: goto label_243b88;
        case 0x243b8cu: goto label_243b8c;
        case 0x243b90u: goto label_243b90;
        case 0x243b94u: goto label_243b94;
        case 0x243b98u: goto label_243b98;
        case 0x243b9cu: goto label_243b9c;
        case 0x243ba0u: goto label_243ba0;
        case 0x243ba4u: goto label_243ba4;
        case 0x243ba8u: goto label_243ba8;
        case 0x243bacu: goto label_243bac;
        case 0x243bb0u: goto label_243bb0;
        case 0x243bb4u: goto label_243bb4;
        case 0x243bb8u: goto label_243bb8;
        case 0x243bbcu: goto label_243bbc;
        case 0x243bc0u: goto label_243bc0;
        case 0x243bc4u: goto label_243bc4;
        case 0x243bc8u: goto label_243bc8;
        case 0x243bccu: goto label_243bcc;
        case 0x243bd0u: goto label_243bd0;
        case 0x243bd4u: goto label_243bd4;
        case 0x243bd8u: goto label_243bd8;
        case 0x243bdcu: goto label_243bdc;
        case 0x243be0u: goto label_243be0;
        case 0x243be4u: goto label_243be4;
        case 0x243be8u: goto label_243be8;
        case 0x243becu: goto label_243bec;
        case 0x243bf0u: goto label_243bf0;
        case 0x243bf4u: goto label_243bf4;
        case 0x243bf8u: goto label_243bf8;
        case 0x243bfcu: goto label_243bfc;
        case 0x243c00u: goto label_243c00;
        case 0x243c04u: goto label_243c04;
        case 0x243c08u: goto label_243c08;
        case 0x243c0cu: goto label_243c0c;
        case 0x243c10u: goto label_243c10;
        case 0x243c14u: goto label_243c14;
        case 0x243c18u: goto label_243c18;
        case 0x243c1cu: goto label_243c1c;
        case 0x243c20u: goto label_243c20;
        case 0x243c24u: goto label_243c24;
        case 0x243c28u: goto label_243c28;
        case 0x243c2cu: goto label_243c2c;
        case 0x243c30u: goto label_243c30;
        case 0x243c34u: goto label_243c34;
        case 0x243c38u: goto label_243c38;
        case 0x243c3cu: goto label_243c3c;
        case 0x243c40u: goto label_243c40;
        case 0x243c44u: goto label_243c44;
        case 0x243c48u: goto label_243c48;
        case 0x243c4cu: goto label_243c4c;
        case 0x243c50u: goto label_243c50;
        case 0x243c54u: goto label_243c54;
        case 0x243c58u: goto label_243c58;
        case 0x243c5cu: goto label_243c5c;
        case 0x243c60u: goto label_243c60;
        case 0x243c64u: goto label_243c64;
        case 0x243c68u: goto label_243c68;
        case 0x243c6cu: goto label_243c6c;
        case 0x243c70u: goto label_243c70;
        case 0x243c74u: goto label_243c74;
        case 0x243c78u: goto label_243c78;
        case 0x243c7cu: goto label_243c7c;
        case 0x243c80u: goto label_243c80;
        case 0x243c84u: goto label_243c84;
        case 0x243c88u: goto label_243c88;
        case 0x243c8cu: goto label_243c8c;
        case 0x243c90u: goto label_243c90;
        case 0x243c94u: goto label_243c94;
        case 0x243c98u: goto label_243c98;
        case 0x243c9cu: goto label_243c9c;
        case 0x243ca0u: goto label_243ca0;
        case 0x243ca4u: goto label_243ca4;
        case 0x243ca8u: goto label_243ca8;
        case 0x243cacu: goto label_243cac;
        case 0x243cb0u: goto label_243cb0;
        case 0x243cb4u: goto label_243cb4;
        case 0x243cb8u: goto label_243cb8;
        case 0x243cbcu: goto label_243cbc;
        case 0x243cc0u: goto label_243cc0;
        case 0x243cc4u: goto label_243cc4;
        case 0x243cc8u: goto label_243cc8;
        case 0x243cccu: goto label_243ccc;
        case 0x243cd0u: goto label_243cd0;
        case 0x243cd4u: goto label_243cd4;
        case 0x243cd8u: goto label_243cd8;
        case 0x243cdcu: goto label_243cdc;
        case 0x243ce0u: goto label_243ce0;
        case 0x243ce4u: goto label_243ce4;
        case 0x243ce8u: goto label_243ce8;
        case 0x243cecu: goto label_243cec;
        case 0x243cf0u: goto label_243cf0;
        case 0x243cf4u: goto label_243cf4;
        case 0x243cf8u: goto label_243cf8;
        case 0x243cfcu: goto label_243cfc;
        case 0x243d00u: goto label_243d00;
        case 0x243d04u: goto label_243d04;
        case 0x243d08u: goto label_243d08;
        case 0x243d0cu: goto label_243d0c;
        case 0x243d10u: goto label_243d10;
        case 0x243d14u: goto label_243d14;
        case 0x243d18u: goto label_243d18;
        case 0x243d1cu: goto label_243d1c;
        case 0x243d20u: goto label_243d20;
        case 0x243d24u: goto label_243d24;
        case 0x243d28u: goto label_243d28;
        case 0x243d2cu: goto label_243d2c;
        case 0x243d30u: goto label_243d30;
        case 0x243d34u: goto label_243d34;
        case 0x243d38u: goto label_243d38;
        case 0x243d3cu: goto label_243d3c;
        case 0x243d40u: goto label_243d40;
        case 0x243d44u: goto label_243d44;
        case 0x243d48u: goto label_243d48;
        case 0x243d4cu: goto label_243d4c;
        case 0x243d50u: goto label_243d50;
        case 0x243d54u: goto label_243d54;
        case 0x243d58u: goto label_243d58;
        case 0x243d5cu: goto label_243d5c;
        case 0x243d60u: goto label_243d60;
        case 0x243d64u: goto label_243d64;
        case 0x243d68u: goto label_243d68;
        case 0x243d6cu: goto label_243d6c;
        case 0x243d70u: goto label_243d70;
        case 0x243d74u: goto label_243d74;
        case 0x243d78u: goto label_243d78;
        case 0x243d7cu: goto label_243d7c;
        case 0x243d80u: goto label_243d80;
        case 0x243d84u: goto label_243d84;
        case 0x243d88u: goto label_243d88;
        case 0x243d8cu: goto label_243d8c;
        case 0x243d90u: goto label_243d90;
        case 0x243d94u: goto label_243d94;
        case 0x243d98u: goto label_243d98;
        case 0x243d9cu: goto label_243d9c;
        case 0x243da0u: goto label_243da0;
        case 0x243da4u: goto label_243da4;
        case 0x243da8u: goto label_243da8;
        case 0x243dacu: goto label_243dac;
        case 0x243db0u: goto label_243db0;
        case 0x243db4u: goto label_243db4;
        case 0x243db8u: goto label_243db8;
        case 0x243dbcu: goto label_243dbc;
        case 0x243dc0u: goto label_243dc0;
        case 0x243dc4u: goto label_243dc4;
        case 0x243dc8u: goto label_243dc8;
        case 0x243dccu: goto label_243dcc;
        case 0x243dd0u: goto label_243dd0;
        case 0x243dd4u: goto label_243dd4;
        case 0x243dd8u: goto label_243dd8;
        case 0x243ddcu: goto label_243ddc;
        case 0x243de0u: goto label_243de0;
        case 0x243de4u: goto label_243de4;
        case 0x243de8u: goto label_243de8;
        case 0x243decu: goto label_243dec;
        case 0x243df0u: goto label_243df0;
        case 0x243df4u: goto label_243df4;
        case 0x243df8u: goto label_243df8;
        case 0x243dfcu: goto label_243dfc;
        case 0x243e00u: goto label_243e00;
        case 0x243e04u: goto label_243e04;
        case 0x243e08u: goto label_243e08;
        case 0x243e0cu: goto label_243e0c;
        case 0x243e10u: goto label_243e10;
        case 0x243e14u: goto label_243e14;
        case 0x243e18u: goto label_243e18;
        case 0x243e1cu: goto label_243e1c;
        case 0x243e20u: goto label_243e20;
        case 0x243e24u: goto label_243e24;
        case 0x243e28u: goto label_243e28;
        case 0x243e2cu: goto label_243e2c;
        case 0x243e30u: goto label_243e30;
        case 0x243e34u: goto label_243e34;
        case 0x243e38u: goto label_243e38;
        case 0x243e3cu: goto label_243e3c;
        case 0x243e40u: goto label_243e40;
        case 0x243e44u: goto label_243e44;
        case 0x243e48u: goto label_243e48;
        case 0x243e4cu: goto label_243e4c;
        case 0x243e50u: goto label_243e50;
        case 0x243e54u: goto label_243e54;
        case 0x243e58u: goto label_243e58;
        case 0x243e5cu: goto label_243e5c;
        case 0x243e60u: goto label_243e60;
        case 0x243e64u: goto label_243e64;
        case 0x243e68u: goto label_243e68;
        case 0x243e6cu: goto label_243e6c;
        case 0x243e70u: goto label_243e70;
        case 0x243e74u: goto label_243e74;
        case 0x243e78u: goto label_243e78;
        case 0x243e7cu: goto label_243e7c;
        case 0x243e80u: goto label_243e80;
        case 0x243e84u: goto label_243e84;
        case 0x243e88u: goto label_243e88;
        case 0x243e8cu: goto label_243e8c;
        case 0x243e90u: goto label_243e90;
        case 0x243e94u: goto label_243e94;
        case 0x243e98u: goto label_243e98;
        case 0x243e9cu: goto label_243e9c;
        case 0x243ea0u: goto label_243ea0;
        case 0x243ea4u: goto label_243ea4;
        case 0x243ea8u: goto label_243ea8;
        case 0x243eacu: goto label_243eac;
        case 0x243eb0u: goto label_243eb0;
        case 0x243eb4u: goto label_243eb4;
        case 0x243eb8u: goto label_243eb8;
        case 0x243ebcu: goto label_243ebc;
        case 0x243ec0u: goto label_243ec0;
        case 0x243ec4u: goto label_243ec4;
        case 0x243ec8u: goto label_243ec8;
        case 0x243eccu: goto label_243ecc;
        case 0x243ed0u: goto label_243ed0;
        case 0x243ed4u: goto label_243ed4;
        case 0x243ed8u: goto label_243ed8;
        case 0x243edcu: goto label_243edc;
        case 0x243ee0u: goto label_243ee0;
        case 0x243ee4u: goto label_243ee4;
        case 0x243ee8u: goto label_243ee8;
        case 0x243eecu: goto label_243eec;
        case 0x243ef0u: goto label_243ef0;
        case 0x243ef4u: goto label_243ef4;
        case 0x243ef8u: goto label_243ef8;
        case 0x243efcu: goto label_243efc;
        case 0x243f00u: goto label_243f00;
        case 0x243f04u: goto label_243f04;
        case 0x243f08u: goto label_243f08;
        case 0x243f0cu: goto label_243f0c;
        case 0x243f10u: goto label_243f10;
        case 0x243f14u: goto label_243f14;
        case 0x243f18u: goto label_243f18;
        case 0x243f1cu: goto label_243f1c;
        case 0x243f20u: goto label_243f20;
        case 0x243f24u: goto label_243f24;
        case 0x243f28u: goto label_243f28;
        case 0x243f2cu: goto label_243f2c;
        case 0x243f30u: goto label_243f30;
        case 0x243f34u: goto label_243f34;
        case 0x243f38u: goto label_243f38;
        case 0x243f3cu: goto label_243f3c;
        case 0x243f40u: goto label_243f40;
        case 0x243f44u: goto label_243f44;
        case 0x243f48u: goto label_243f48;
        case 0x243f4cu: goto label_243f4c;
        case 0x243f50u: goto label_243f50;
        case 0x243f54u: goto label_243f54;
        case 0x243f58u: goto label_243f58;
        case 0x243f5cu: goto label_243f5c;
        case 0x243f60u: goto label_243f60;
        case 0x243f64u: goto label_243f64;
        case 0x243f68u: goto label_243f68;
        case 0x243f6cu: goto label_243f6c;
        case 0x243f70u: goto label_243f70;
        case 0x243f74u: goto label_243f74;
        case 0x243f78u: goto label_243f78;
        case 0x243f7cu: goto label_243f7c;
        case 0x243f80u: goto label_243f80;
        case 0x243f84u: goto label_243f84;
        case 0x243f88u: goto label_243f88;
        case 0x243f8cu: goto label_243f8c;
        case 0x243f90u: goto label_243f90;
        case 0x243f94u: goto label_243f94;
        case 0x243f98u: goto label_243f98;
        case 0x243f9cu: goto label_243f9c;
        default: return;
    }

label_2437d0:
    // 0x2437d0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2437d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2437d4:
    // 0x2437d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2437d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2437d8:
    // 0x2437d8: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2437d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2437dc:
    // 0x2437dc: 0x28c10013  slti        $at, $a2, 0x13
    ctx->pc = 0x2437dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)19) ? 1 : 0);
label_2437e0:
    // 0x2437e0: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x2437e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_2437e4:
    // 0x2437e4: 0x338c0  sll         $a3, $v1, 3
    ctx->pc = 0x2437e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2437e8:
    // 0x2437e8: 0x2442023e  addiu       $v0, $v0, 0x23E
    ctx->pc = 0x2437e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 574));
label_2437ec:
    // 0x2437ec: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2437ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_2437f0:
    // 0x2437f0: 0x84480000  lh          $t0, 0x0($v0)
    ctx->pc = 0x2437f0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2437f4:
    // 0x2437f4: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_2437f8:
    if (ctx->pc == 0x2437F8u) {
        ctx->pc = 0x2437F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2437F4u;
        // 0x2437f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2437FCu;
        goto label_2437fc;
    }
    ctx->pc = 0x2437F4u;
    {
        const bool branch_taken_0x2437f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2437F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2437F4u;
        // 0x2437f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2437f4) {
            ctx->pc = 0x243848u;
            goto label_243848;
        }
    }
    ctx->pc = 0x2437FCu;
label_2437fc:
    // 0x2437fc: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x2437fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_243800:
    // 0x243800: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x243800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_243804:
    // 0x243804: 0x24420230  addiu       $v0, $v0, 0x230
    ctx->pc = 0x243804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
label_243808:
    // 0x243808: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x243808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_24380c:
    // 0x24380c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x24380cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_243810:
    // 0x243810: 0x0  nop
    ctx->pc = 0x243810u;
    // NOP
label_243814:
    // 0x243814: 0xc41004  sllv        $v0, $a0, $a2
    ctx->pc = 0x243814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
label_243818:
    // 0x243818: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x243818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_24381c:
    // 0x24381c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_243820:
    if (ctx->pc == 0x243820u) {
        ctx->pc = 0x243824u;
        goto label_243824;
    }
    ctx->pc = 0x24381Cu;
    {
        const bool branch_taken_0x24381c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24381c) {
            ctx->pc = 0x243834u;
            goto label_243834;
        }
    }
    ctx->pc = 0x243824u;
label_243824:
    // 0x243824: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x243824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_243828:
    // 0x243828: 0x28a1000c  slti        $at, $a1, 0xC
    ctx->pc = 0x243828u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)12) ? 1 : 0);
label_24382c:
    // 0x24382c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_243830:
    if (ctx->pc == 0x243830u) {
        ctx->pc = 0x243834u;
        goto label_243834;
    }
    ctx->pc = 0x24382Cu;
    {
        const bool branch_taken_0x24382c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24382c) {
            ctx->pc = 0x243848u;
            goto label_243848;
        }
    }
    ctx->pc = 0x243834u;
label_243834:
    // 0x243834: 0x0  nop
    ctx->pc = 0x243834u;
    // NOP
label_243838:
    // 0x243838: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x243838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_24383c:
    // 0x24383c: 0x28c20013  slti        $v0, $a2, 0x13
    ctx->pc = 0x24383cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)19) ? 1 : 0);
label_243840:
    // 0x243840: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_243844:
    if (ctx->pc == 0x243844u) {
        ctx->pc = 0x243844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243840u;
        // 0x243844: 0xc41004  sllv        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243848u;
        goto label_243848;
    }
    ctx->pc = 0x243840u;
    {
        const bool branch_taken_0x243840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243840u;
        // 0x243844: 0xc41004  sllv        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243840) {
            ctx->pc = 0x243818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243818;
        }
    }
    ctx->pc = 0x243848u;
label_243848:
    // 0x243848: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x243848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_24384c:
    // 0x24384c: 0x2442eb08  addiu       $v0, $v0, -0x14F8
    ctx->pc = 0x24384cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961928));
label_243850:
    // 0x243850: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x243850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_243854:
    // 0x243854: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x243854u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_243858:
    // 0x243858: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x243858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_24385c:
    // 0x24385c: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x24385cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
label_243860:
    // 0x243860: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x243860u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
label_243864:
    // 0x243864: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
label_243868:
    if (ctx->pc == 0x243868u) {
        ctx->pc = 0x243868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243864u;
        // 0x243868: 0x3c03005a  lui         $v1, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24386Cu;
        goto label_24386c;
    }
    ctx->pc = 0x243864u;
    {
        const bool branch_taken_0x243864 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x243868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243864u;
        // 0x243868: 0x3c03005a  lui         $v1, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243864) {
            ctx->pc = 0x243874u;
            goto label_243874;
        }
    }
    ctx->pc = 0x24386Cu;
label_24386c:
    // 0x24386c: 0x10000013  b           . + 4 + (0x13 << 2)
label_243870:
    if (ctx->pc == 0x243870u) {
        ctx->pc = 0x243870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24386Cu;
        // 0x243870: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243874u;
        goto label_243874;
    }
    ctx->pc = 0x24386Cu;
    {
        const bool branch_taken_0x24386c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24386Cu;
        // 0x243870: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24386c) {
            ctx->pc = 0x2438BCu;
            goto label_2438bc;
        }
    }
    ctx->pc = 0x243874u;
label_243874:
    // 0x243874: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x243874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_243878:
    // 0x243878: 0x24630238  addiu       $v1, $v1, 0x238
    ctx->pc = 0x243878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 568));
label_24387c:
    // 0x24387c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x24387cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_243880:
    // 0x243880: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x243880u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_243884:
    // 0x243884: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x243884u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_243888:
    // 0x243888: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x243888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_24388c:
    // 0x24388c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x24388cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_243890:
    // 0x243890: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x243890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_243894:
    // 0x243894: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x243894u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
label_243898:
    // 0x243898: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x243898u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
label_24389c:
    // 0x24389c: 0x29010064  slti        $at, $t0, 0x64
    ctx->pc = 0x24389cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)100) ? 1 : 0);
label_2438a0:
    // 0x2438a0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2438a4:
    if (ctx->pc == 0x2438A4u) {
        ctx->pc = 0x2438A8u;
        goto label_2438a8;
    }
    ctx->pc = 0x2438A0u;
    {
        const bool branch_taken_0x2438a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2438a0) {
            ctx->pc = 0x2438B0u;
            goto label_2438b0;
        }
    }
    ctx->pc = 0x2438A8u;
label_2438a8:
    // 0x2438a8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2438ac:
    if (ctx->pc == 0x2438ACu) {
        ctx->pc = 0x2438ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2438A8u;
        // 0x2438ac: 0x8143c  dsll32      $v0, $t0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2438B0u;
        goto label_2438b0;
    }
    ctx->pc = 0x2438A8u;
    {
        const bool branch_taken_0x2438a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2438ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2438A8u;
        // 0x2438ac: 0x8143c  dsll32      $v0, $t0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2438a8) {
            ctx->pc = 0x2438B8u;
            goto label_2438b8;
        }
    }
    ctx->pc = 0x2438B0u;
label_2438b0:
    // 0x2438b0: 0x24080064  addiu       $t0, $zero, 0x64
    ctx->pc = 0x2438b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2438b4:
    // 0x2438b4: 0x8143c  dsll32      $v0, $t0, 16
    ctx->pc = 0x2438b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 16));
label_2438b8:
    // 0x2438b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2438b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2438bc:
    // 0x2438bc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2438bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_2438c0:
    // 0x2438c0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2438c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2438c4:
    // 0x2438c4: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_2438c8:
    if (ctx->pc == 0x2438C8u) {
        ctx->pc = 0x2438CCu;
        goto label_2438cc;
    }
    ctx->pc = 0x2438C4u;
    {
        const bool branch_taken_0x2438c4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2438c4) {
            ctx->pc = 0x2438D4u;
            goto label_2438d4;
        }
    }
    ctx->pc = 0x2438CCu;
label_2438cc:
    // 0x2438cc: 0x10000002  b           . + 4 + (0x2 << 2)
label_2438d0:
    if (ctx->pc == 0x2438D0u) {
        ctx->pc = 0x2438D4u;
        goto label_2438d4;
    }
    ctx->pc = 0x2438CCu;
    {
        const bool branch_taken_0x2438cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2438cc) {
            ctx->pc = 0x2438D8u;
            goto label_2438d8;
        }
    }
    ctx->pc = 0x2438D4u;
label_2438d4:
    // 0x2438d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2438d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2438d8:
    // 0x2438d8: 0x3e00008  jr          $ra
label_2438dc:
    if (ctx->pc == 0x2438DCu) {
        ctx->pc = 0x2438E0u;
        goto label_2438e0;
    }
    ctx->pc = 0x2438D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2438D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2438E0u;
label_2438e0:
    // 0x2438e0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2438e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2438e4:
    // 0x2438e4: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2438e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2438e8:
    // 0x2438e8: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x2438e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_2438ec:
    // 0x2438ec: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2438ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2438f0:
    // 0x2438f0: 0x24420240  addiu       $v0, $v0, 0x240
    ctx->pc = 0x2438f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
label_2438f4:
    // 0x2438f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2438f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2438f8:
    // 0x2438f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2438f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2438fc:
    // 0x2438fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2438fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_243900:
    // 0x243900: 0x3e00008  jr          $ra
label_243904:
    if (ctx->pc == 0x243904u) {
        ctx->pc = 0x243904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243900u;
        // 0x243904: 0x21042  srl         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243908u;
        goto label_243908;
    }
    ctx->pc = 0x243900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243900u;
        // 0x243904: 0x21042  srl         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243908u;
label_243908:
    // 0x243908: 0x0  nop
    ctx->pc = 0x243908u;
    // NOP
label_24390c:
    // 0x24390c: 0x0  nop
    ctx->pc = 0x24390cu;
    // NOP
label_243910:
    // 0x243910: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x243910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_243914:
    // 0x243914: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x243914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_243918:
    // 0x243918: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x243918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_24391c:
    // 0x24391c: 0x246349a4  addiu       $v1, $v1, 0x49A4
    ctx->pc = 0x24391cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18852));
label_243920:
    // 0x243920: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x243920u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_243924:
    // 0x243924: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x243924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_243928:
    // 0x243928: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x243928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_24392c:
    // 0x24392c: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x24392cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_243930:
    // 0x243930: 0x244249a5  addiu       $v0, $v0, 0x49A5
    ctx->pc = 0x243930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18853));
label_243934:
    // 0x243934: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x243934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_243938:
    // 0x243938: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x243938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_24393c:
    // 0x24393c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x24393cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_243940:
    // 0x243940: 0x244249a6  addiu       $v0, $v0, 0x49A6
    ctx->pc = 0x243940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18854));
label_243944:
    // 0x243944: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x243944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_243948:
    // 0x243948: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x243948u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_24394c:
    // 0x24394c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x24394cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_243950:
    // 0x243950: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x243950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_243954:
    // 0x243954: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x243954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_243958:
    // 0x243958: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x243958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24395c:
    // 0x24395c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x24395cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_243960:
    // 0x243960: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x243960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_243964:
    // 0x243964: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x243964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_243968:
    // 0x243968: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x243968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24396c:
    // 0x24396c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x24396cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_243970:
    // 0x243970: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x243970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_243974:
    // 0x243974: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x243974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_243978:
    // 0x243978: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x243978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_24397c:
    // 0x24397c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x24397cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_243980:
    // 0x243980: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x243980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_243984:
    // 0x243984: 0x28410bb8  slti        $at, $v0, 0xBB8
    ctx->pc = 0x243984u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3000) ? 1 : 0);
label_243988:
    // 0x243988: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_24398c:
    if (ctx->pc == 0x24398Cu) {
        ctx->pc = 0x243990u;
        goto label_243990;
    }
    ctx->pc = 0x243988u;
    {
        const bool branch_taken_0x243988 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x243988) {
            ctx->pc = 0x243998u;
            goto label_243998;
        }
    }
    ctx->pc = 0x243990u;
label_243990:
    // 0x243990: 0x10000002  b           . + 4 + (0x2 << 2)
label_243994:
    if (ctx->pc == 0x243994u) {
        ctx->pc = 0x243998u;
        goto label_243998;
    }
    ctx->pc = 0x243990u;
    {
        const bool branch_taken_0x243990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243990) {
            ctx->pc = 0x24399Cu;
            goto label_24399c;
        }
    }
    ctx->pc = 0x243998u;
label_243998:
    // 0x243998: 0x24020bb8  addiu       $v0, $zero, 0xBB8
    ctx->pc = 0x243998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
label_24399c:
    // 0x24399c: 0x3e00008  jr          $ra
label_2439a0:
    if (ctx->pc == 0x2439A0u) {
        ctx->pc = 0x2439A4u;
        goto label_2439a4;
    }
    ctx->pc = 0x24399Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24399Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2439A4u;
label_2439a4:
    // 0x2439a4: 0x0  nop
    ctx->pc = 0x2439a4u;
    // NOP
label_2439a8:
    // 0x2439a8: 0x0  nop
    ctx->pc = 0x2439a8u;
    // NOP
label_2439ac:
    // 0x2439ac: 0x0  nop
    ctx->pc = 0x2439acu;
    // NOP
label_2439b0:
    // 0x2439b0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x2439b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2439b4:
    // 0x2439b4: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2439b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2439b8:
    // 0x2439b8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2439b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_2439bc:
    // 0x2439bc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2439bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2439c0:
    // 0x2439c0: 0x244249a5  addiu       $v0, $v0, 0x49A5
    ctx->pc = 0x2439c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18853));
label_2439c4:
    // 0x2439c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2439c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2439c8:
    // 0x2439c8: 0x3e00008  jr          $ra
label_2439cc:
    if (ctx->pc == 0x2439CCu) {
        ctx->pc = 0x2439CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2439C8u;
        // 0x2439cc: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2439D0u;
        goto label_2439d0;
    }
    ctx->pc = 0x2439C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2439CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2439C8u;
        // 0x2439cc: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2439C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2439D0u;
label_2439d0:
    // 0x2439d0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x2439d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2439d4:
    // 0x2439d4: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2439d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2439d8:
    // 0x2439d8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2439d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_2439dc:
    // 0x2439dc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2439dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2439e0:
    // 0x2439e0: 0x244249a4  addiu       $v0, $v0, 0x49A4
    ctx->pc = 0x2439e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18852));
label_2439e4:
    // 0x2439e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2439e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2439e8:
    // 0x2439e8: 0x3e00008  jr          $ra
label_2439ec:
    if (ctx->pc == 0x2439ECu) {
        ctx->pc = 0x2439ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2439E8u;
        // 0x2439ec: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2439F0u;
        goto label_2439f0;
    }
    ctx->pc = 0x2439E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2439ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2439E8u;
        // 0x2439ec: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2439E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2439F0u;
label_2439f0:
    // 0x2439f0: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x2439f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_2439f4:
    // 0x2439f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2439f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2439f8:
    // 0x2439f8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x2439f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_2439fc:
    // 0x2439fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2439fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243a00:
    // 0x243a00: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x243a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
label_243a04:
    // 0x243a04: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x243a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_243a08:
    // 0x243a08: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x243a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_243a0c:
    // 0x243a0c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x243a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_243a10:
    // 0x243a10: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x243a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_243a14:
    // 0x243a14: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x243a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_243a18:
    // 0x243a18: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x243a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_243a1c:
    // 0x243a1c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x243a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_243a20:
    // 0x243a20: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x243a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_243a24:
    // 0x243a24: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x243a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_243a28:
    // 0x243a28: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x243a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_243a2c:
    // 0x243a2c: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x243a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_243a30:
    // 0x243a30: 0x3c06005a  lui         $a2, 0x5A
    ctx->pc = 0x243a30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)90 << 16));
label_243a34:
    // 0x243a34: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x243a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_243a38:
    // 0x243a38: 0x24c60230  addiu       $a2, $a2, 0x230
    ctx->pc = 0x243a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 560));
label_243a3c:
    // 0x243a3c: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x243a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_243a40:
    // 0x243a40: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x243a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_243a44:
    // 0x243a44: 0xc94021  addu        $t0, $a2, $t1
    ctx->pc = 0x243a44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_243a48:
    // 0x243a48: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x243a48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_243a4c:
    // 0x243a4c: 0xa1000003  sb          $zero, 0x3($t0)
    ctx->pc = 0x243a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 0));
label_243a50:
    // 0x243a50: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x243a50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_243a54:
    // 0x243a54: 0xa1000001  sb          $zero, 0x1($t0)
    ctx->pc = 0x243a54u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 0));
label_243a58:
    // 0x243a58: 0x25290018  addiu       $t1, $t1, 0x18
    ctx->pc = 0x243a58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
label_243a5c:
    // 0x243a5c: 0xad000014  sw          $zero, 0x14($t0)
    ctx->pc = 0x243a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 0));
label_243a60:
    // 0x243a60: 0xa500000c  sh          $zero, 0xC($t0)
    ctx->pc = 0x243a60u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 12), (uint16_t)GPR_U32(ctx, 0));
label_243a64:
    // 0x243a64: 0xa500000e  sh          $zero, 0xE($t0)
    ctx->pc = 0x243a64u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 0));
label_243a68:
    // 0x243a68: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x243a68u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
label_243a6c:
    // 0x243a6c: 0xa1000006  sb          $zero, 0x6($t0)
    ctx->pc = 0x243a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 6), (uint8_t)GPR_U32(ctx, 0));
label_243a70:
    // 0x243a70: 0xa1000005  sb          $zero, 0x5($t0)
    ctx->pc = 0x243a70u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 5), (uint8_t)GPR_U32(ctx, 0));
label_243a74:
    // 0x243a74: 0xa1000008  sb          $zero, 0x8($t0)
    ctx->pc = 0x243a74u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 8), (uint8_t)GPR_U32(ctx, 0));
label_243a78:
    // 0x243a78: 0xa1000007  sb          $zero, 0x7($t0)
    ctx->pc = 0x243a78u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 7), (uint8_t)GPR_U32(ctx, 0));
label_243a7c:
    // 0x243a7c: 0xa1050000  sb          $a1, 0x0($t0)
    ctx->pc = 0x243a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 5));
label_243a80:
    // 0x243a80: 0xa1040002  sb          $a0, 0x2($t0)
    ctx->pc = 0x243a80u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 4));
label_243a84:
    // 0x243a84: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_243a88:
    if (ctx->pc == 0x243A88u) {
        ctx->pc = 0x243A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A84u;
        // 0x243a88: 0xa1030004  sb          $v1, 0x4($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243A8Cu;
        goto label_243a8c;
    }
    ctx->pc = 0x243A84u;
    {
        const bool branch_taken_0x243a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A84u;
        // 0x243a88: 0xa1030004  sb          $v1, 0x4($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243a84) {
            ctx->pc = 0x243A44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243a44;
        }
    }
    ctx->pc = 0x243A8Cu;
label_243a8c:
    // 0x243a8c: 0xc041738  jal         func_105CE0
label_243a90:
    if (ctx->pc == 0x243A90u) {
        ctx->pc = 0x243A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A8Cu;
        // 0x243a90: 0x240407f7  addiu       $a0, $zero, 0x7F7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2039));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243A94u;
        goto label_243a94;
    }
    ctx->pc = 0x243A8Cu;
    SET_GPR_U32(ctx, 31, 0x243A94u);
    ctx->pc = 0x243A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243A8Cu;
    // 0x243a90: 0x240407f7  addiu       $a0, $zero, 0x7F7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2039));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x243A8Cu, 0x243A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243A94u;
label_243a94:
    // 0x243a94: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x243a94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_243a98:
    // 0x243a98: 0xc070080  jal         func_1C0200
label_243a9c:
    if (ctx->pc == 0x243A9Cu) {
        ctx->pc = 0x243A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A98u;
        // 0x243a9c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243AA0u;
        goto label_243aa0;
    }
    ctx->pc = 0x243A98u;
    SET_GPR_U32(ctx, 31, 0x243AA0u);
    ctx->pc = 0x243A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243A98u;
    // 0x243a9c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x243AA0u;
label_243aa0:
    // 0x243aa0: 0x240407f7  addiu       $a0, $zero, 0x7F7
    ctx->pc = 0x243aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2039));
label_243aa4:
    // 0x243aa4: 0xc0416e4  jal         func_105B90
label_243aa8:
    if (ctx->pc == 0x243AA8u) {
        ctx->pc = 0x243AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243AA4u;
        // 0x243aa8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243AACu;
        goto label_243aac;
    }
    ctx->pc = 0x243AA4u;
    SET_GPR_U32(ctx, 31, 0x243AACu);
    ctx->pc = 0x243AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243AA4u;
    // 0x243aa8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x243AA4u, 0x243AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243AACu;
label_243aac:
    // 0x243aac: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x243aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
label_243ab0:
    // 0x243ab0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x243ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243ab4:
    // 0x243ab4: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x243ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_243ab8:
    // 0x243ab8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x243ab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243abc:
    // 0x243abc: 0x2407001a  addiu       $a3, $zero, 0x1A
    ctx->pc = 0x243abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_243ac0:
    // 0x243ac0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x243ac0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243ac4:
    // 0x243ac4: 0xc0603d4  jal         func_180F50
label_243ac8:
    if (ctx->pc == 0x243AC8u) {
        ctx->pc = 0x243AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243AC4u;
        // 0x243ac8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243ACCu;
        goto label_243acc;
    }
    ctx->pc = 0x243AC4u;
    SET_GPR_U32(ctx, 31, 0x243ACCu);
    ctx->pc = 0x243AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243AC4u;
    // 0x243ac8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180F50u, 0x243AC4u, 0x243ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243ACCu;
label_243acc:
    // 0x243acc: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x243accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_243ad0:
    // 0x243ad0: 0x24050116  addiu       $a1, $zero, 0x116
    ctx->pc = 0x243ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
label_243ad4:
    // 0x243ad4: 0xc060578  jal         func_1815E0
label_243ad8:
    if (ctx->pc == 0x243AD8u) {
        ctx->pc = 0x243AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243AD4u;
        // 0x243ad8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243ADCu;
        goto label_243adc;
    }
    ctx->pc = 0x243AD4u;
    SET_GPR_U32(ctx, 31, 0x243ADCu);
    ctx->pc = 0x243AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243AD4u;
    // 0x243ad8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x243AD4u, 0x243ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243ADCu;
label_243adc:
    // 0x243adc: 0xffa200f0  sd          $v0, 0xF0($sp)
    ctx->pc = 0x243adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 2));
label_243ae0:
    // 0x243ae0: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x243ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_243ae4:
    // 0x243ae4: 0x24050117  addiu       $a1, $zero, 0x117
    ctx->pc = 0x243ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 279));
label_243ae8:
    // 0x243ae8: 0xc060578  jal         func_1815E0
label_243aec:
    if (ctx->pc == 0x243AECu) {
        ctx->pc = 0x243AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243AE8u;
        // 0x243aec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243AF0u;
        goto label_243af0;
    }
    ctx->pc = 0x243AE8u;
    SET_GPR_U32(ctx, 31, 0x243AF0u);
    ctx->pc = 0x243AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243AE8u;
    // 0x243aec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x243AE8u, 0x243AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243AF0u;
label_243af0:
    // 0x243af0: 0xffa200f8  sd          $v0, 0xF8($sp)
    ctx->pc = 0x243af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 2));
label_243af4:
    // 0x243af4: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x243af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_243af8:
    // 0x243af8: 0x24050119  addiu       $a1, $zero, 0x119
    ctx->pc = 0x243af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 281));
label_243afc:
    // 0x243afc: 0xc060578  jal         func_1815E0
label_243b00:
    if (ctx->pc == 0x243B00u) {
        ctx->pc = 0x243B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243AFCu;
        // 0x243b00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243B04u;
        goto label_243b04;
    }
    ctx->pc = 0x243AFCu;
    SET_GPR_U32(ctx, 31, 0x243B04u);
    ctx->pc = 0x243B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243AFCu;
    // 0x243b00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x243AFCu, 0x243B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243B04u;
label_243b04:
    // 0x243b04: 0xffa20100  sd          $v0, 0x100($sp)
    ctx->pc = 0x243b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 2));
label_243b08:
    // 0x243b08: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x243b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_243b0c:
    // 0x243b0c: 0x2405011a  addiu       $a1, $zero, 0x11A
    ctx->pc = 0x243b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 282));
label_243b10:
    // 0x243b10: 0xc060578  jal         func_1815E0
label_243b14:
    if (ctx->pc == 0x243B14u) {
        ctx->pc = 0x243B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B10u;
        // 0x243b14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243B18u;
        goto label_243b18;
    }
    ctx->pc = 0x243B10u;
    SET_GPR_U32(ctx, 31, 0x243B18u);
    ctx->pc = 0x243B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243B10u;
    // 0x243b14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x243B10u, 0x243B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243B18u;
label_243b18:
    // 0x243b18: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x243b18u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_243b1c:
    // 0x243b1c: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x243b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_243b20:
    // 0x243b20: 0x24050118  addiu       $a1, $zero, 0x118
    ctx->pc = 0x243b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
label_243b24:
    // 0x243b24: 0xc060578  jal         func_1815E0
label_243b28:
    if (ctx->pc == 0x243B28u) {
        ctx->pc = 0x243B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B24u;
        // 0x243b28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243B2Cu;
        goto label_243b2c;
    }
    ctx->pc = 0x243B24u;
    SET_GPR_U32(ctx, 31, 0x243B2Cu);
    ctx->pc = 0x243B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243B24u;
    // 0x243b28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x243B24u, 0x243B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243B2Cu;
label_243b2c:
    // 0x243b2c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x243b2cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_243b30:
    // 0x243b30: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x243b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_243b34:
    // 0x243b34: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x243b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
label_243b38:
    // 0x243b38: 0xafa00160  sw          $zero, 0x160($sp)
    ctx->pc = 0x243b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
label_243b3c:
    // 0x243b3c: 0xafa00170  sw          $zero, 0x170($sp)
    ctx->pc = 0x243b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 0));
label_243b40:
    // 0x243b40: 0xafa00180  sw          $zero, 0x180($sp)
    ctx->pc = 0x243b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 0));
label_243b44:
    // 0x243b44: 0xafa00190  sw          $zero, 0x190($sp)
    ctx->pc = 0x243b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
label_243b48:
    // 0x243b48: 0xafa001a0  sw          $zero, 0x1A0($sp)
    ctx->pc = 0x243b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 0));
label_243b4c:
    // 0x243b4c: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x243b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
label_243b50:
    // 0x243b50: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x243b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
label_243b54:
    // 0x243b54: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x243b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
label_243b58:
    // 0x243b58: 0xafa00140  sw          $zero, 0x140($sp)
    ctx->pc = 0x243b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
label_243b5c:
    // 0x243b5c: 0x0  nop
    ctx->pc = 0x243b5cu;
    // NOP
label_243b60:
    // 0x243b60: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x243b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_243b64:
    // 0x243b64: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x243b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
label_243b68:
    // 0x243b68: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x243b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_243b6c:
    // 0x243b6c: 0x24634f60  addiu       $v1, $v1, 0x4F60
    ctx->pc = 0x243b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20320));
label_243b70:
    // 0x243b70: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x243b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_243b74:
    // 0x243b74: 0x24430000  addiu       $v1, $v0, 0x0
    ctx->pc = 0x243b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_243b78:
    // 0x243b78: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x243b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_243b7c:
    // 0x243b7c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x243b7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_243b80:
    // 0x243b80: 0xc05e234  jal         func_1788D0
label_243b84:
    if (ctx->pc == 0x243B84u) {
        ctx->pc = 0x243B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B80u;
        // 0x243b84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243B88u;
        goto label_243b88;
    }
    ctx->pc = 0x243B80u;
    SET_GPR_U32(ctx, 31, 0x243B88u);
    ctx->pc = 0x243B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243B80u;
    // 0x243b84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x243B80u, 0x243B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243B88u;
label_243b88:
    // 0x243b88: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x243b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_243b8c:
    // 0x243b8c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_243b90:
    if (ctx->pc == 0x243B90u) {
        ctx->pc = 0x243B94u;
        goto label_243b94;
    }
    ctx->pc = 0x243B8Cu;
    {
        const bool branch_taken_0x243b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243b8c) {
            ctx->pc = 0x243BE8u;
            goto label_243be8;
        }
    }
    ctx->pc = 0x243B94u;
label_243b94:
    // 0x243b94: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x243b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_243b98:
    // 0x243b98: 0x24090050  addiu       $t1, $zero, 0x50
    ctx->pc = 0x243b98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_243b9c:
    // 0x243b9c: 0xffa90008  sd          $t1, 0x8($sp)
    ctx->pc = 0x243b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 9));
label_243ba0:
    // 0x243ba0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x243ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_243ba4:
    // 0x243ba4: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x243ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_243ba8:
    // 0x243ba8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x243ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_243bac:
    // 0x243bac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x243bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_243bb0:
    // 0x243bb0: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x243bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_243bb4:
    // 0x243bb4: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x243bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_243bb8:
    // 0x243bb8: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x243bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_243bbc:
    // 0x243bbc: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x243bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
label_243bc0:
    // 0x243bc0: 0x3408ffe0  ori         $t0, $zero, 0xFFE0
    ctx->pc = 0x243bc0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_243bc4:
    // 0x243bc4: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x243bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_243bc8:
    // 0x243bc8: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x243bc8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_243bcc:
    // 0x243bcc: 0x240b00b0  addiu       $t3, $zero, 0xB0
    ctx->pc = 0x243bccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_243bd0:
    // 0x243bd0: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x243bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
label_243bd4:
    // 0x243bd4: 0xdfa500f0  ld          $a1, 0xF0($sp)
    ctx->pc = 0x243bd4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_243bd8:
    // 0x243bd8: 0xc05dd88  jal         func_177620
label_243bdc:
    if (ctx->pc == 0x243BDCu) {
        ctx->pc = 0x243BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243BD8u;
        // 0x243bdc: 0x24470086  addiu       $a3, $v0, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 134));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243BE0u;
        goto label_243be0;
    }
    ctx->pc = 0x243BD8u;
    SET_GPR_U32(ctx, 31, 0x243BE0u);
    ctx->pc = 0x243BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243BD8u;
    // 0x243bdc: 0x24470086  addiu       $a3, $v0, 0x86 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 134));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177620u, 0x243BD8u, 0x243BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243BE0u;
label_243be0:
    // 0x243be0: 0x10000011  b           . + 4 + (0x11 << 2)
label_243be4:
    if (ctx->pc == 0x243BE4u) {
        ctx->pc = 0x243BE8u;
        goto label_243be8;
    }
    ctx->pc = 0x243BE0u;
    {
        const bool branch_taken_0x243be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243be0) {
            ctx->pc = 0x243C28u;
            goto label_243c28;
        }
    }
    ctx->pc = 0x243BE8u;
label_243be8:
    // 0x243be8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x243be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_243bec:
    // 0x243bec: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x243becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_243bf0:
    // 0x243bf0: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x243bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_243bf4:
    // 0x243bf4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x243bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_243bf8:
    // 0x243bf8: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x243bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_243bfc:
    // 0x243bfc: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x243bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_243c00:
    // 0x243c00: 0x240700cc  addiu       $a3, $zero, 0xCC
    ctx->pc = 0x243c00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
label_243c04:
    // 0x243c04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x243c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_243c08:
    // 0x243c08: 0x3408ffe0  ori         $t0, $zero, 0xFFE0
    ctx->pc = 0x243c08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_243c0c:
    // 0x243c0c: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x243c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_243c10:
    // 0x243c10: 0x240900b0  addiu       $t1, $zero, 0xB0
    ctx->pc = 0x243c10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_243c14:
    // 0x243c14: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x243c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_243c18:
    // 0x243c18: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x243c18u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243c1c:
    // 0x243c1c: 0xdfa500f0  ld          $a1, 0xF0($sp)
    ctx->pc = 0x243c1cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_243c20:
    // 0x243c20: 0xc05de30  jal         func_1778C0
label_243c24:
    if (ctx->pc == 0x243C24u) {
        ctx->pc = 0x243C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C20u;
        // 0x243c24: 0x240b0050  addiu       $t3, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243C28u;
        goto label_243c28;
    }
    ctx->pc = 0x243C20u;
    SET_GPR_U32(ctx, 31, 0x243C28u);
    ctx->pc = 0x243C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243C20u;
    // 0x243c24: 0x240b0050  addiu       $t3, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x243C20u, 0x243C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243C28u;
label_243c28:
    // 0x243c28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x243c28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243c2c:
    // 0x243c2c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x243c2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243c30:
    // 0x243c30: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x243c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_243c34:
    // 0x243c34: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x243c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_243c38:
    // 0x243c38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x243c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_243c3c:
    // 0x243c3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x243c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_243c40:
    // 0x243c40: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x243c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_243c44:
    // 0x243c44: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x243c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_243c48:
    // 0x243c48: 0x3408ffe0  ori         $t0, $zero, 0xFFE0
    ctx->pc = 0x243c48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_243c4c:
    // 0x243c4c: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x243c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_243c50:
    // 0x243c50: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x243c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_243c54:
    // 0x243c54: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x243c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_243c58:
    // 0x243c58: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x243c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
label_243c5c:
    // 0x243c5c: 0x9429ea90  lhu         $t1, -0x1570($at)
    ctx->pc = 0x243c5cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294961808)));
label_243c60:
    // 0x243c60: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x243c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_243c64:
    // 0x243c64: 0xdfa500f0  ld          $a1, 0xF0($sp)
    ctx->pc = 0x243c64u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_243c68:
    // 0x243c68: 0x240700cc  addiu       $a3, $zero, 0xCC
    ctx->pc = 0x243c68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
label_243c6c:
    // 0x243c6c: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x243c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_243c70:
    // 0x243c70: 0x942beab0  lhu         $t3, -0x1550($at)
    ctx->pc = 0x243c70u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294961840)));
label_243c74:
    // 0x243c74: 0xc05de30  jal         func_1778C0
label_243c78:
    if (ctx->pc == 0x243C78u) {
        ctx->pc = 0x243C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C74u;
        // 0x243c78: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243C7Cu;
        goto label_243c7c;
    }
    ctx->pc = 0x243C74u;
    SET_GPR_U32(ctx, 31, 0x243C7Cu);
    ctx->pc = 0x243C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243C74u;
    // 0x243c78: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x243C74u, 0x243C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243C7Cu;
label_243c7c:
    // 0x243c7c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x243c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_243c80:
    // 0x243c80: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x243c80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_243c84:
    // 0x243c84: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_243c88:
    if (ctx->pc == 0x243C88u) {
        ctx->pc = 0x243C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C84u;
        // 0x243c88: 0x265200a0  addiu       $s2, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243C8Cu;
        goto label_243c8c;
    }
    ctx->pc = 0x243C84u;
    {
        const bool branch_taken_0x243c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C84u;
        // 0x243c88: 0x265200a0  addiu       $s2, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c84) {
            ctx->pc = 0x243C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243c30;
        }
    }
    ctx->pc = 0x243C8Cu;
label_243c8c:
    // 0x243c8c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x243c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_243c90:
    // 0x243c90: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x243c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
label_243c94:
    // 0x243c94: 0x24632ee0  addiu       $v1, $v1, 0x2EE0
    ctx->pc = 0x243c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12000));
label_243c98:
    // 0x243c98: 0x24050081  addiu       $a1, $zero, 0x81
    ctx->pc = 0x243c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
label_243c9c:
    // 0x243c9c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x243c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_243ca0:
    // 0x243ca0: 0x24430000  addiu       $v1, $v0, 0x0
    ctx->pc = 0x243ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_243ca4:
    // 0x243ca4: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x243ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_243ca8:
    // 0x243ca8: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x243ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_243cac:
    // 0x243cac: 0xc05e234  jal         func_1788D0
label_243cb0:
    if (ctx->pc == 0x243CB0u) {
        ctx->pc = 0x243CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243CACu;
        // 0x243cb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243CB4u;
        goto label_243cb4;
    }
    ctx->pc = 0x243CACu;
    SET_GPR_U32(ctx, 31, 0x243CB4u);
    ctx->pc = 0x243CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243CACu;
    // 0x243cb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x243CACu, 0x243CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243CB4u;
label_243cb4:
    // 0x243cb4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x243cb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243cb8:
    // 0x243cb8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x243cb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243cbc:
    // 0x243cbc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x243cbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243cc0:
    // 0x243cc0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x243cc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243cc4:
    // 0x243cc4: 0x0  nop
    ctx->pc = 0x243cc4u;
    // NOP
label_243cc8:
    // 0x243cc8: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x243cc8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_243ccc:
    // 0x243ccc: 0xffaa0000  sd          $t2, 0x0($sp)
    ctx->pc = 0x243cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 10));
label_243cd0:
    // 0x243cd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x243cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_243cd4:
    // 0x243cd4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x243cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_243cd8:
    // 0x243cd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x243cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_243cdc:
    // 0x243cdc: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x243cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_243ce0:
    // 0x243ce0: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x243ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_243ce4:
    // 0x243ce4: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x243ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_243ce8:
    // 0x243ce8: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x243ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_243cec:
    // 0x243cec: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x243cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_243cf0:
    // 0x243cf0: 0xdfa500f8  ld          $a1, 0xF8($sp)
    ctx->pc = 0x243cf0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 248)));
label_243cf4:
    // 0x243cf4: 0x2442eac8  addiu       $v0, $v0, -0x1538
    ctx->pc = 0x243cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961864));
label_243cf8:
    // 0x243cf8: 0x26460028  addiu       $a2, $s2, 0x28
    ctx->pc = 0x243cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
label_243cfc:
    // 0x243cfc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x243cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_243d00:
    // 0x243d00: 0x240700b0  addiu       $a3, $zero, 0xB0
    ctx->pc = 0x243d00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_243d04:
    // 0x243d04: 0x94490000  lhu         $t1, 0x0($v0)
    ctx->pc = 0x243d04u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_243d08:
    // 0x243d08: 0x3408ffe0  ori         $t0, $zero, 0xFFE0
    ctx->pc = 0x243d08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_243d0c:
    // 0x243d0c: 0xc05de30  jal         func_1778C0
label_243d10:
    if (ctx->pc == 0x243D10u) {
        ctx->pc = 0x243D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D0Cu;
        // 0x243d10: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243D14u;
        goto label_243d14;
    }
    ctx->pc = 0x243D0Cu;
    SET_GPR_U32(ctx, 31, 0x243D14u);
    ctx->pc = 0x243D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243D0Cu;
    // 0x243d10: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x243D0Cu, 0x243D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243D14u;
label_243d14:
    // 0x243d14: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x243d14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_243d18:
    // 0x243d18: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x243d18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_243d1c:
    // 0x243d1c: 0x2a820007  slti        $v0, $s4, 0x7
    ctx->pc = 0x243d1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)7) ? 1 : 0);
label_243d20:
    // 0x243d20: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x243d20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_243d24:
    // 0x243d24: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_243d28:
    if (ctx->pc == 0x243D28u) {
        ctx->pc = 0x243D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D24u;
        // 0x243d28: 0x267300a0  addiu       $s3, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243D2Cu;
        goto label_243d2c;
    }
    ctx->pc = 0x243D24u;
    {
        const bool branch_taken_0x243d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D24u;
        // 0x243d28: 0x267300a0  addiu       $s3, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243d24) {
            ctx->pc = 0x243CC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243cc4;
        }
    }
    ctx->pc = 0x243D2Cu;
label_243d2c:
    // 0x243d2c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x243d2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243d30:
    // 0x243d30: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x243d30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243d34:
    // 0x243d34: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x243d34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243d38:
    // 0x243d38: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x243d38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243d3c:
    // 0x243d3c: 0x0  nop
    ctx->pc = 0x243d3cu;
    // NOP
label_243d40:
    // 0x243d40: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x243d40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_243d44:
    // 0x243d44: 0xffaa0000  sd          $t2, 0x0($sp)
    ctx->pc = 0x243d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 10));
label_243d48:
    // 0x243d48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x243d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_243d4c:
    // 0x243d4c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x243d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_243d50:
    // 0x243d50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x243d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_243d54:
    // 0x243d54: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x243d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_243d58:
    // 0x243d58: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x243d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_243d5c:
    // 0x243d5c: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x243d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_243d60:
    // 0x243d60: 0x24440470  addiu       $a0, $v0, 0x470
    ctx->pc = 0x243d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1136));
label_243d64:
    // 0x243d64: 0xdfa500f8  ld          $a1, 0xF8($sp)
    ctx->pc = 0x243d64u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 248)));
label_243d68:
    // 0x243d68: 0x262600d0  addiu       $a2, $s1, 0xD0
    ctx->pc = 0x243d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_243d6c:
    // 0x243d6c: 0x240700b0  addiu       $a3, $zero, 0xB0
    ctx->pc = 0x243d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_243d70:
    // 0x243d70: 0x3408ffe0  ori         $t0, $zero, 0xFFE0
    ctx->pc = 0x243d70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_243d74:
    // 0x243d74: 0x240900f0  addiu       $t1, $zero, 0xF0
    ctx->pc = 0x243d74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_243d78:
    // 0x243d78: 0xc05de30  jal         func_1778C0
label_243d7c:
    if (ctx->pc == 0x243D7Cu) {
        ctx->pc = 0x243D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D78u;
        // 0x243d7c: 0x240b0010  addiu       $t3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243D80u;
        goto label_243d80;
    }
    ctx->pc = 0x243D78u;
    SET_GPR_U32(ctx, 31, 0x243D80u);
    ctx->pc = 0x243D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243D78u;
    // 0x243d7c: 0x240b0010  addiu       $t3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x243D78u, 0x243D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243D80u;
label_243d80:
    // 0x243d80: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x243d80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_243d84:
    // 0x243d84: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x243d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_243d88:
    // 0x243d88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x243d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_243d8c:
    // 0x243d8c: 0xffaa0000  sd          $t2, 0x0($sp)
    ctx->pc = 0x243d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 10));
label_243d90:
    // 0x243d90: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x243d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_243d94:
    // 0x243d94: 0x244405b0  addiu       $a0, $v0, 0x5B0
    ctx->pc = 0x243d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1456));
label_243d98:
    // 0x243d98: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x243d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_243d9c:
    // 0x243d9c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x243d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_243da0:
    // 0x243da0: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x243da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_243da4:
    // 0x243da4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x243da4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243da8:
    // 0x243da8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x243da8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243dac:
    // 0x243dac: 0x3408ffe0  ori         $t0, $zero, 0xFFE0
    ctx->pc = 0x243dacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_243db0:
    // 0x243db0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x243db0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243db4:
    // 0x243db4: 0xc05df9c  jal         func_177E70
label_243db8:
    if (ctx->pc == 0x243DB8u) {
        ctx->pc = 0x243DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DB4u;
        // 0x243db8: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243DBCu;
        goto label_243dbc;
    }
    ctx->pc = 0x243DB4u;
    SET_GPR_U32(ctx, 31, 0x243DBCu);
    ctx->pc = 0x243DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243DB4u;
    // 0x243db8: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177E70u, 0x243DB4u, 0x243DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243DBCu;
label_243dbc:
    // 0x243dbc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x243dbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_243dc0:
    // 0x243dc0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x243dc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_243dc4:
    // 0x243dc4: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x243dc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_243dc8:
    // 0x243dc8: 0x265200a0  addiu       $s2, $s2, 0xA0
    ctx->pc = 0x243dc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_243dcc:
    // 0x243dcc: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
label_243dd0:
    if (ctx->pc == 0x243DD0u) {
        ctx->pc = 0x243DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DCCu;
        // 0x243dd0: 0x267300d0  addiu       $s3, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243DD4u;
        goto label_243dd4;
    }
    ctx->pc = 0x243DCCu;
    {
        const bool branch_taken_0x243dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DCCu;
        // 0x243dd0: 0x267300d0  addiu       $s3, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243dcc) {
            ctx->pc = 0x243D3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243d3c;
        }
    }
    ctx->pc = 0x243DD4u;
label_243dd4:
    // 0x243dd4: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x243dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_243dd8:
    // 0x243dd8: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x243dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
label_243ddc:
    // 0x243ddc: 0x24630fe0  addiu       $v1, $v1, 0xFE0
    ctx->pc = 0x243ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4064));
label_243de0:
    // 0x243de0: 0x2405007b  addiu       $a1, $zero, 0x7B
    ctx->pc = 0x243de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
label_243de4:
    // 0x243de4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x243de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_243de8:
    // 0x243de8: 0x24430000  addiu       $v1, $v0, 0x0
    ctx->pc = 0x243de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_243dec:
    // 0x243dec: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x243decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_243df0:
    // 0x243df0: 0x62f021  addu        $fp, $v1, $v0
    ctx->pc = 0x243df0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_243df4:
    // 0x243df4: 0xc05e234  jal         func_1788D0
label_243df8:
    if (ctx->pc == 0x243DF8u) {
        ctx->pc = 0x243DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DF4u;
        // 0x243df8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243DFCu;
        goto label_243dfc;
    }
    ctx->pc = 0x243DF4u;
    SET_GPR_U32(ctx, 31, 0x243DFCu);
    ctx->pc = 0x243DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243DF4u;
    // 0x243df8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x243DF4u, 0x243DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243DFCu;
label_243dfc:
    // 0x243dfc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x243dfcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243e00:
    // 0x243e00: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x243e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243e04:
    // 0x243e04: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x243e04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243e08:
    // 0x243e08: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x243e08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243e0c:
    // 0x243e0c: 0x0  nop
    ctx->pc = 0x243e0cu;
    // NOP
label_243e10:
    // 0x243e10: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x243e10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_243e14:
    // 0x243e14: 0xffaa0000  sd          $t2, 0x0($sp)
    ctx->pc = 0x243e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 10));
label_243e18:
    // 0x243e18: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x243e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_243e1c:
    // 0x243e1c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x243e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_243e20:
    // 0x243e20: 0x3d3a021  addu        $s4, $fp, $s3
    ctx->pc = 0x243e20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
label_243e24:
    // 0x243e24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x243e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_243e28:
    // 0x243e28: 0x26460028  addiu       $a2, $s2, 0x28
    ctx->pc = 0x243e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
label_243e2c:
    // 0x243e2c: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x243e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_243e30:
    // 0x243e30: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x243e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_243e34:
    // 0x243e34: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x243e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_243e38:
    // 0x243e38: 0x240700b0  addiu       $a3, $zero, 0xB0
    ctx->pc = 0x243e38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_243e3c:
    // 0x243e3c: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x243e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_243e40:
    // 0x243e40: 0xdfa500f8  ld          $a1, 0xF8($sp)
    ctx->pc = 0x243e40u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 248)));
label_243e44:
    // 0x243e44: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x243e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
label_243e48:
    // 0x243e48: 0x3408ffe0  ori         $t0, $zero, 0xFFE0
    ctx->pc = 0x243e48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_243e4c:
    // 0x243e4c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x243e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_243e50:
    // 0x243e50: 0x94490000  lhu         $t1, 0x0($v0)
    ctx->pc = 0x243e50u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_243e54:
    // 0x243e54: 0xc05de30  jal         func_1778C0
label_243e58:
    if (ctx->pc == 0x243E58u) {
        ctx->pc = 0x243E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E54u;
        // 0x243e58: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243E5Cu;
        goto label_243e5c;
    }
    ctx->pc = 0x243E54u;
    SET_GPR_U32(ctx, 31, 0x243E5Cu);
    ctx->pc = 0x243E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243E54u;
    // 0x243e58: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x243E54u, 0x243E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243E5Cu;
label_243e5c:
    // 0x243e5c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x243e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_243e60:
    // 0x243e60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x243e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_243e64:
    // 0x243e64: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x243e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_243e68:
    // 0x243e68: 0x268403d0  addiu       $a0, $s4, 0x3D0
    ctx->pc = 0x243e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 976));
label_243e6c:
    // 0x243e6c: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x243e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_243e70:
    // 0x243e70: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x243e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_243e74:
    // 0x243e74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x243e74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243e78:
    // 0x243e78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x243e78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243e7c:
    // 0x243e7c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x243e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_243e80:
    // 0x243e80: 0x3408ffe0  ori         $t0, $zero, 0xFFE0
    ctx->pc = 0x243e80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_243e84:
    // 0x243e84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x243e84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243e88:
    // 0x243e88: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x243e88u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243e8c:
    // 0x243e8c: 0xc05de30  jal         func_1778C0
label_243e90:
    if (ctx->pc == 0x243E90u) {
        ctx->pc = 0x243E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E8Cu;
        // 0x243e90: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243E94u;
        goto label_243e94;
    }
    ctx->pc = 0x243E8Cu;
    SET_GPR_U32(ctx, 31, 0x243E94u);
    ctx->pc = 0x243E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243E8Cu;
    // 0x243e90: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x243E8Cu, 0x243E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243E94u;
label_243e94:
    // 0x243e94: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x243e94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_243e98:
    // 0x243e98: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x243e98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_243e9c:
    // 0x243e9c: 0x2aa20005  slti        $v0, $s5, 0x5
    ctx->pc = 0x243e9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
label_243ea0:
    // 0x243ea0: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x243ea0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_243ea4:
    // 0x243ea4: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_243ea8:
    if (ctx->pc == 0x243EA8u) {
        ctx->pc = 0x243EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EA4u;
        // 0x243ea8: 0x267300a0  addiu       $s3, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243EACu;
        goto label_243eac;
    }
    ctx->pc = 0x243EA4u;
    {
        const bool branch_taken_0x243ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EA4u;
        // 0x243ea8: 0x267300a0  addiu       $s3, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243ea4) {
            ctx->pc = 0x243E0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243e0c;
        }
    }
    ctx->pc = 0x243EACu;
label_243eac:
    // 0x243eac: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x243eacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_243eb0:
    // 0x243eb0: 0x240600b0  addiu       $a2, $zero, 0xB0
    ctx->pc = 0x243eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_243eb4:
    // 0x243eb4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x243eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_243eb8:
    // 0x243eb8: 0xffaa0000  sd          $t2, 0x0($sp)
    ctx->pc = 0x243eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 10));
label_243ebc:
    // 0x243ebc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x243ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_243ec0:
    // 0x243ec0: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x243ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_243ec4:
    // 0x243ec4: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x243ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_243ec8:
    // 0x243ec8: 0x27c40330  addiu       $a0, $fp, 0x330
    ctx->pc = 0x243ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 816));
label_243ecc:
    // 0x243ecc: 0xdfa500f8  ld          $a1, 0xF8($sp)
    ctx->pc = 0x243eccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 248)));
label_243ed0:
    // 0x243ed0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x243ed0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_243ed4:
    // 0x243ed4: 0x3408ffe0  ori         $t0, $zero, 0xFFE0
    ctx->pc = 0x243ed4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_243ed8:
    // 0x243ed8: 0x240900f0  addiu       $t1, $zero, 0xF0
    ctx->pc = 0x243ed8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_243edc:
    // 0x243edc: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x243edcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_243ee0:
    // 0x243ee0: 0xc05de30  jal         func_1778C0
label_243ee4:
    if (ctx->pc == 0x243EE4u) {
        ctx->pc = 0x243EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EE0u;
        // 0x243ee4: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243EE8u;
        goto label_243ee8;
    }
    ctx->pc = 0x243EE0u;
    SET_GPR_U32(ctx, 31, 0x243EE8u);
    ctx->pc = 0x243EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243EE0u;
    // 0x243ee4: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x243EE0u, 0x243EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243EE8u;
label_243ee8:
    // 0x243ee8: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x243ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_243eec:
    // 0x243eec: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x243eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
label_243ef0:
    // 0x243ef0: 0x24630260  addiu       $v1, $v1, 0x260
    ctx->pc = 0x243ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 608));
label_243ef4:
    // 0x243ef4: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x243ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_243ef8:
    // 0x243ef8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x243ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_243efc:
    // 0x243efc: 0x24430000  addiu       $v1, $v0, 0x0
    ctx->pc = 0x243efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_243f00:
    // 0x243f00: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x243f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_243f04:
    // 0x243f04: 0x62a821  addu        $s5, $v1, $v0
    ctx->pc = 0x243f04u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_243f08:
    // 0x243f08: 0xc05e234  jal         func_1788D0
label_243f0c:
    if (ctx->pc == 0x243F0Cu) {
        ctx->pc = 0x243F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F08u;
        // 0x243f0c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243F10u;
        goto label_243f10;
    }
    ctx->pc = 0x243F08u;
    SET_GPR_U32(ctx, 31, 0x243F10u);
    ctx->pc = 0x243F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243F08u;
    // 0x243f0c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x243F08u, 0x243F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243F10u;
label_243f10:
    // 0x243f10: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x243f10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243f14:
    // 0x243f14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x243f14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243f18:
    // 0x243f18: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x243f18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243f1c:
    // 0x243f1c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x243f1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243f20:
    // 0x243f20: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x243f20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_243f24:
    // 0x243f24: 0xffaa0000  sd          $t2, 0x0($sp)
    ctx->pc = 0x243f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 10));
label_243f28:
    // 0x243f28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x243f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_243f2c:
    // 0x243f2c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x243f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_243f30:
    // 0x243f30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x243f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_243f34:
    // 0x243f34: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x243f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_243f38:
    // 0x243f38: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x243f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_243f3c:
    // 0x243f3c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x243f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_243f40:
    // 0x243f40: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x243f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_243f44:
    // 0x243f44: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x243f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_243f48:
    // 0x243f48: 0xdfa500f8  ld          $a1, 0xF8($sp)
    ctx->pc = 0x243f48u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 248)));
label_243f4c:
    // 0x243f4c: 0x2442eae8  addiu       $v0, $v0, -0x1518
    ctx->pc = 0x243f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961896));
label_243f50:
    // 0x243f50: 0x26460028  addiu       $a2, $s2, 0x28
    ctx->pc = 0x243f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
label_243f54:
    // 0x243f54: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x243f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_243f58:
    // 0x243f58: 0x240700b0  addiu       $a3, $zero, 0xB0
    ctx->pc = 0x243f58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_243f5c:
    // 0x243f5c: 0x94490000  lhu         $t1, 0x0($v0)
    ctx->pc = 0x243f5cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_243f60:
    // 0x243f60: 0x3408ffe0  ori         $t0, $zero, 0xFFE0
    ctx->pc = 0x243f60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_243f64:
    // 0x243f64: 0xc05de30  jal         func_1778C0
label_243f68:
    if (ctx->pc == 0x243F68u) {
        ctx->pc = 0x243F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F64u;
        // 0x243f68: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243F6Cu;
        goto label_243f6c;
    }
    ctx->pc = 0x243F64u;
    SET_GPR_U32(ctx, 31, 0x243F6Cu);
    ctx->pc = 0x243F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243F64u;
    // 0x243f68: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x243F64u, 0x243F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243F6Cu;
label_243f6c:
    // 0x243f6c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x243f6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_243f70:
    // 0x243f70: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x243f70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_243f74:
    // 0x243f74: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x243f74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
label_243f78:
    // 0x243f78: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x243f78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_243f7c:
    // 0x243f7c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_243f80:
    if (ctx->pc == 0x243F80u) {
        ctx->pc = 0x243F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F7Cu;
        // 0x243f80: 0x267300a0  addiu       $s3, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243F84u;
        goto label_243f84;
    }
    ctx->pc = 0x243F7Cu;
    {
        const bool branch_taken_0x243f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F7Cu;
        // 0x243f80: 0x267300a0  addiu       $s3, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243f7c) {
            ctx->pc = 0x243F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243f20;
        }
    }
    ctx->pc = 0x243F84u;
label_243f84:
    // 0x243f84: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x243f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_243f88:
    // 0x243f88: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_243f8c:
    if (ctx->pc == 0x243F8Cu) {
        ctx->pc = 0x243F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F88u;
        // 0x243f8c: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243F90u;
        goto label_243f90;
    }
    ctx->pc = 0x243F88u;
    {
        const bool branch_taken_0x243f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F88u;
        // 0x243f8c: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243f88) {
            ctx->pc = 0x24406Cu;
            { ctx->pc = 0x24406c; return; }
        }
    }
    ctx->pc = 0x243F90u;
label_243f90:
    // 0x243f90: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x243f90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_243f94:
    // 0x243f94: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x243f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_243f98:
    // 0x243f98: 0x26040750  addiu       $a0, $s0, 0x750
    ctx->pc = 0x243f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1872));
label_243f9c:
    // 0x243f9c: 0xffa90008  sd          $t1, 0x8($sp)
    ctx->pc = 0x243f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 9));
    ctx->pc = 0x243fa0u;
    return;
}

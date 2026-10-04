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


void FUN_0019b5e8_part317(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x235aa8u: goto label_235aa8;
        case 0x235aacu: goto label_235aac;
        case 0x235ab0u: goto label_235ab0;
        case 0x235ab4u: goto label_235ab4;
        case 0x235ab8u: goto label_235ab8;
        case 0x235abcu: goto label_235abc;
        case 0x235ac0u: goto label_235ac0;
        case 0x235ac4u: goto label_235ac4;
        case 0x235ac8u: goto label_235ac8;
        case 0x235accu: goto label_235acc;
        case 0x235ad0u: goto label_235ad0;
        case 0x235ad4u: goto label_235ad4;
        case 0x235ad8u: goto label_235ad8;
        case 0x235adcu: goto label_235adc;
        case 0x235ae0u: goto label_235ae0;
        case 0x235ae4u: goto label_235ae4;
        case 0x235ae8u: goto label_235ae8;
        case 0x235aecu: goto label_235aec;
        case 0x235af0u: goto label_235af0;
        case 0x235af4u: goto label_235af4;
        case 0x235af8u: goto label_235af8;
        case 0x235afcu: goto label_235afc;
        case 0x235b00u: goto label_235b00;
        case 0x235b04u: goto label_235b04;
        case 0x235b08u: goto label_235b08;
        case 0x235b0cu: goto label_235b0c;
        case 0x235b10u: goto label_235b10;
        case 0x235b14u: goto label_235b14;
        case 0x235b18u: goto label_235b18;
        case 0x235b1cu: goto label_235b1c;
        case 0x235b20u: goto label_235b20;
        case 0x235b24u: goto label_235b24;
        case 0x235b28u: goto label_235b28;
        case 0x235b2cu: goto label_235b2c;
        case 0x235b30u: goto label_235b30;
        case 0x235b34u: goto label_235b34;
        case 0x235b38u: goto label_235b38;
        case 0x235b3cu: goto label_235b3c;
        case 0x235b40u: goto label_235b40;
        case 0x235b44u: goto label_235b44;
        case 0x235b48u: goto label_235b48;
        case 0x235b4cu: goto label_235b4c;
        case 0x235b50u: goto label_235b50;
        case 0x235b54u: goto label_235b54;
        case 0x235b58u: goto label_235b58;
        case 0x235b5cu: goto label_235b5c;
        case 0x235b60u: goto label_235b60;
        case 0x235b64u: goto label_235b64;
        case 0x235b68u: goto label_235b68;
        case 0x235b6cu: goto label_235b6c;
        case 0x235b70u: goto label_235b70;
        case 0x235b74u: goto label_235b74;
        case 0x235b78u: goto label_235b78;
        case 0x235b7cu: goto label_235b7c;
        case 0x235b80u: goto label_235b80;
        case 0x235b84u: goto label_235b84;
        case 0x235b88u: goto label_235b88;
        case 0x235b8cu: goto label_235b8c;
        case 0x235b90u: goto label_235b90;
        case 0x235b94u: goto label_235b94;
        case 0x235b98u: goto label_235b98;
        case 0x235b9cu: goto label_235b9c;
        case 0x235ba0u: goto label_235ba0;
        case 0x235ba4u: goto label_235ba4;
        case 0x235ba8u: goto label_235ba8;
        case 0x235bacu: goto label_235bac;
        case 0x235bb0u: goto label_235bb0;
        case 0x235bb4u: goto label_235bb4;
        case 0x235bb8u: goto label_235bb8;
        case 0x235bbcu: goto label_235bbc;
        case 0x235bc0u: goto label_235bc0;
        case 0x235bc4u: goto label_235bc4;
        case 0x235bc8u: goto label_235bc8;
        case 0x235bccu: goto label_235bcc;
        case 0x235bd0u: goto label_235bd0;
        case 0x235bd4u: goto label_235bd4;
        case 0x235bd8u: goto label_235bd8;
        case 0x235bdcu: goto label_235bdc;
        case 0x235be0u: goto label_235be0;
        case 0x235be4u: goto label_235be4;
        case 0x235be8u: goto label_235be8;
        case 0x235becu: goto label_235bec;
        case 0x235bf0u: goto label_235bf0;
        case 0x235bf4u: goto label_235bf4;
        case 0x235bf8u: goto label_235bf8;
        case 0x235bfcu: goto label_235bfc;
        case 0x235c00u: goto label_235c00;
        case 0x235c04u: goto label_235c04;
        case 0x235c08u: goto label_235c08;
        case 0x235c0cu: goto label_235c0c;
        case 0x235c10u: goto label_235c10;
        case 0x235c14u: goto label_235c14;
        case 0x235c18u: goto label_235c18;
        case 0x235c1cu: goto label_235c1c;
        case 0x235c20u: goto label_235c20;
        case 0x235c24u: goto label_235c24;
        case 0x235c28u: goto label_235c28;
        case 0x235c2cu: goto label_235c2c;
        case 0x235c30u: goto label_235c30;
        case 0x235c34u: goto label_235c34;
        case 0x235c38u: goto label_235c38;
        case 0x235c3cu: goto label_235c3c;
        case 0x235c40u: goto label_235c40;
        case 0x235c44u: goto label_235c44;
        case 0x235c48u: goto label_235c48;
        case 0x235c4cu: goto label_235c4c;
        case 0x235c50u: goto label_235c50;
        case 0x235c54u: goto label_235c54;
        case 0x235c58u: goto label_235c58;
        case 0x235c5cu: goto label_235c5c;
        case 0x235c60u: goto label_235c60;
        case 0x235c64u: goto label_235c64;
        case 0x235c68u: goto label_235c68;
        case 0x235c6cu: goto label_235c6c;
        case 0x235c70u: goto label_235c70;
        case 0x235c74u: goto label_235c74;
        case 0x235c78u: goto label_235c78;
        case 0x235c7cu: goto label_235c7c;
        case 0x235c80u: goto label_235c80;
        case 0x235c84u: goto label_235c84;
        case 0x235c88u: goto label_235c88;
        case 0x235c8cu: goto label_235c8c;
        case 0x235c90u: goto label_235c90;
        case 0x235c94u: goto label_235c94;
        case 0x235c98u: goto label_235c98;
        case 0x235c9cu: goto label_235c9c;
        case 0x235ca0u: goto label_235ca0;
        case 0x235ca4u: goto label_235ca4;
        case 0x235ca8u: goto label_235ca8;
        case 0x235cacu: goto label_235cac;
        case 0x235cb0u: goto label_235cb0;
        case 0x235cb4u: goto label_235cb4;
        case 0x235cb8u: goto label_235cb8;
        case 0x235cbcu: goto label_235cbc;
        case 0x235cc0u: goto label_235cc0;
        case 0x235cc4u: goto label_235cc4;
        case 0x235cc8u: goto label_235cc8;
        case 0x235cccu: goto label_235ccc;
        case 0x235cd0u: goto label_235cd0;
        case 0x235cd4u: goto label_235cd4;
        case 0x235cd8u: goto label_235cd8;
        case 0x235cdcu: goto label_235cdc;
        case 0x235ce0u: goto label_235ce0;
        case 0x235ce4u: goto label_235ce4;
        case 0x235ce8u: goto label_235ce8;
        case 0x235cecu: goto label_235cec;
        case 0x235cf0u: goto label_235cf0;
        case 0x235cf4u: goto label_235cf4;
        case 0x235cf8u: goto label_235cf8;
        case 0x235cfcu: goto label_235cfc;
        case 0x235d00u: goto label_235d00;
        case 0x235d04u: goto label_235d04;
        case 0x235d08u: goto label_235d08;
        case 0x235d0cu: goto label_235d0c;
        case 0x235d10u: goto label_235d10;
        case 0x235d14u: goto label_235d14;
        case 0x235d18u: goto label_235d18;
        case 0x235d1cu: goto label_235d1c;
        case 0x235d20u: goto label_235d20;
        case 0x235d24u: goto label_235d24;
        case 0x235d28u: goto label_235d28;
        case 0x235d2cu: goto label_235d2c;
        case 0x235d30u: goto label_235d30;
        case 0x235d34u: goto label_235d34;
        case 0x235d38u: goto label_235d38;
        case 0x235d3cu: goto label_235d3c;
        case 0x235d40u: goto label_235d40;
        case 0x235d44u: goto label_235d44;
        case 0x235d48u: goto label_235d48;
        case 0x235d4cu: goto label_235d4c;
        case 0x235d50u: goto label_235d50;
        case 0x235d54u: goto label_235d54;
        case 0x235d58u: goto label_235d58;
        case 0x235d5cu: goto label_235d5c;
        case 0x235d60u: goto label_235d60;
        case 0x235d64u: goto label_235d64;
        case 0x235d68u: goto label_235d68;
        case 0x235d6cu: goto label_235d6c;
        case 0x235d70u: goto label_235d70;
        case 0x235d74u: goto label_235d74;
        case 0x235d78u: goto label_235d78;
        case 0x235d7cu: goto label_235d7c;
        case 0x235d80u: goto label_235d80;
        case 0x235d84u: goto label_235d84;
        case 0x235d88u: goto label_235d88;
        case 0x235d8cu: goto label_235d8c;
        case 0x235d90u: goto label_235d90;
        case 0x235d94u: goto label_235d94;
        case 0x235d98u: goto label_235d98;
        case 0x235d9cu: goto label_235d9c;
        case 0x235da0u: goto label_235da0;
        case 0x235da4u: goto label_235da4;
        case 0x235da8u: goto label_235da8;
        case 0x235dacu: goto label_235dac;
        case 0x235db0u: goto label_235db0;
        case 0x235db4u: goto label_235db4;
        case 0x235db8u: goto label_235db8;
        case 0x235dbcu: goto label_235dbc;
        case 0x235dc0u: goto label_235dc0;
        case 0x235dc4u: goto label_235dc4;
        case 0x235dc8u: goto label_235dc8;
        case 0x235dccu: goto label_235dcc;
        case 0x235dd0u: goto label_235dd0;
        case 0x235dd4u: goto label_235dd4;
        case 0x235dd8u: goto label_235dd8;
        case 0x235ddcu: goto label_235ddc;
        case 0x235de0u: goto label_235de0;
        case 0x235de4u: goto label_235de4;
        case 0x235de8u: goto label_235de8;
        case 0x235decu: goto label_235dec;
        case 0x235df0u: goto label_235df0;
        case 0x235df4u: goto label_235df4;
        case 0x235df8u: goto label_235df8;
        case 0x235dfcu: goto label_235dfc;
        case 0x235e00u: goto label_235e00;
        case 0x235e04u: goto label_235e04;
        case 0x235e08u: goto label_235e08;
        case 0x235e0cu: goto label_235e0c;
        case 0x235e10u: goto label_235e10;
        case 0x235e14u: goto label_235e14;
        case 0x235e18u: goto label_235e18;
        case 0x235e1cu: goto label_235e1c;
        case 0x235e20u: goto label_235e20;
        case 0x235e24u: goto label_235e24;
        case 0x235e28u: goto label_235e28;
        case 0x235e2cu: goto label_235e2c;
        case 0x235e30u: goto label_235e30;
        case 0x235e34u: goto label_235e34;
        case 0x235e38u: goto label_235e38;
        case 0x235e3cu: goto label_235e3c;
        case 0x235e40u: goto label_235e40;
        case 0x235e44u: goto label_235e44;
        case 0x235e48u: goto label_235e48;
        case 0x235e4cu: goto label_235e4c;
        case 0x235e50u: goto label_235e50;
        case 0x235e54u: goto label_235e54;
        case 0x235e58u: goto label_235e58;
        case 0x235e5cu: goto label_235e5c;
        case 0x235e60u: goto label_235e60;
        case 0x235e64u: goto label_235e64;
        case 0x235e68u: goto label_235e68;
        case 0x235e6cu: goto label_235e6c;
        case 0x235e70u: goto label_235e70;
        case 0x235e74u: goto label_235e74;
        case 0x235e78u: goto label_235e78;
        case 0x235e7cu: goto label_235e7c;
        case 0x235e80u: goto label_235e80;
        case 0x235e84u: goto label_235e84;
        case 0x235e88u: goto label_235e88;
        case 0x235e8cu: goto label_235e8c;
        case 0x235e90u: goto label_235e90;
        case 0x235e94u: goto label_235e94;
        case 0x235e98u: goto label_235e98;
        case 0x235e9cu: goto label_235e9c;
        case 0x235ea0u: goto label_235ea0;
        case 0x235ea4u: goto label_235ea4;
        case 0x235ea8u: goto label_235ea8;
        case 0x235eacu: goto label_235eac;
        case 0x235eb0u: goto label_235eb0;
        case 0x235eb4u: goto label_235eb4;
        case 0x235eb8u: goto label_235eb8;
        case 0x235ebcu: goto label_235ebc;
        case 0x235ec0u: goto label_235ec0;
        case 0x235ec4u: goto label_235ec4;
        case 0x235ec8u: goto label_235ec8;
        case 0x235eccu: goto label_235ecc;
        case 0x235ed0u: goto label_235ed0;
        case 0x235ed4u: goto label_235ed4;
        case 0x235ed8u: goto label_235ed8;
        case 0x235edcu: goto label_235edc;
        case 0x235ee0u: goto label_235ee0;
        case 0x235ee4u: goto label_235ee4;
        case 0x235ee8u: goto label_235ee8;
        case 0x235eecu: goto label_235eec;
        case 0x235ef0u: goto label_235ef0;
        case 0x235ef4u: goto label_235ef4;
        case 0x235ef8u: goto label_235ef8;
        case 0x235efcu: goto label_235efc;
        case 0x235f00u: goto label_235f00;
        case 0x235f04u: goto label_235f04;
        case 0x235f08u: goto label_235f08;
        case 0x235f0cu: goto label_235f0c;
        case 0x235f10u: goto label_235f10;
        case 0x235f14u: goto label_235f14;
        case 0x235f18u: goto label_235f18;
        case 0x235f1cu: goto label_235f1c;
        case 0x235f20u: goto label_235f20;
        case 0x235f24u: goto label_235f24;
        case 0x235f28u: goto label_235f28;
        case 0x235f2cu: goto label_235f2c;
        case 0x235f30u: goto label_235f30;
        case 0x235f34u: goto label_235f34;
        case 0x235f38u: goto label_235f38;
        case 0x235f3cu: goto label_235f3c;
        case 0x235f40u: goto label_235f40;
        case 0x235f44u: goto label_235f44;
        case 0x235f48u: goto label_235f48;
        case 0x235f4cu: goto label_235f4c;
        case 0x235f50u: goto label_235f50;
        case 0x235f54u: goto label_235f54;
        case 0x235f58u: goto label_235f58;
        case 0x235f5cu: goto label_235f5c;
        case 0x235f60u: goto label_235f60;
        case 0x235f64u: goto label_235f64;
        case 0x235f68u: goto label_235f68;
        case 0x235f6cu: goto label_235f6c;
        case 0x235f70u: goto label_235f70;
        case 0x235f74u: goto label_235f74;
        case 0x235f78u: goto label_235f78;
        case 0x235f7cu: goto label_235f7c;
        case 0x235f80u: goto label_235f80;
        case 0x235f84u: goto label_235f84;
        case 0x235f88u: goto label_235f88;
        case 0x235f8cu: goto label_235f8c;
        case 0x235f90u: goto label_235f90;
        case 0x235f94u: goto label_235f94;
        case 0x235f98u: goto label_235f98;
        case 0x235f9cu: goto label_235f9c;
        case 0x235fa0u: goto label_235fa0;
        case 0x235fa4u: goto label_235fa4;
        case 0x235fa8u: goto label_235fa8;
        case 0x235facu: goto label_235fac;
        case 0x235fb0u: goto label_235fb0;
        case 0x235fb4u: goto label_235fb4;
        case 0x235fb8u: goto label_235fb8;
        case 0x235fbcu: goto label_235fbc;
        case 0x235fc0u: goto label_235fc0;
        case 0x235fc4u: goto label_235fc4;
        case 0x235fc8u: goto label_235fc8;
        case 0x235fccu: goto label_235fcc;
        case 0x235fd0u: goto label_235fd0;
        case 0x235fd4u: goto label_235fd4;
        case 0x235fd8u: goto label_235fd8;
        case 0x235fdcu: goto label_235fdc;
        case 0x235fe0u: goto label_235fe0;
        case 0x235fe4u: goto label_235fe4;
        case 0x235fe8u: goto label_235fe8;
        case 0x235fecu: goto label_235fec;
        case 0x235ff0u: goto label_235ff0;
        case 0x235ff4u: goto label_235ff4;
        case 0x235ff8u: goto label_235ff8;
        case 0x235ffcu: goto label_235ffc;
        case 0x236000u: goto label_236000;
        case 0x236004u: goto label_236004;
        case 0x236008u: goto label_236008;
        case 0x23600cu: goto label_23600c;
        case 0x236010u: goto label_236010;
        case 0x236014u: goto label_236014;
        case 0x236018u: goto label_236018;
        case 0x23601cu: goto label_23601c;
        case 0x236020u: goto label_236020;
        case 0x236024u: goto label_236024;
        case 0x236028u: goto label_236028;
        case 0x23602cu: goto label_23602c;
        case 0x236030u: goto label_236030;
        case 0x236034u: goto label_236034;
        case 0x236038u: goto label_236038;
        case 0x23603cu: goto label_23603c;
        case 0x236040u: goto label_236040;
        case 0x236044u: goto label_236044;
        case 0x236048u: goto label_236048;
        case 0x23604cu: goto label_23604c;
        case 0x236050u: goto label_236050;
        case 0x236054u: goto label_236054;
        case 0x236058u: goto label_236058;
        case 0x23605cu: goto label_23605c;
        case 0x236060u: goto label_236060;
        case 0x236064u: goto label_236064;
        case 0x236068u: goto label_236068;
        case 0x23606cu: goto label_23606c;
        case 0x236070u: goto label_236070;
        case 0x236074u: goto label_236074;
        case 0x236078u: goto label_236078;
        case 0x23607cu: goto label_23607c;
        case 0x236080u: goto label_236080;
        case 0x236084u: goto label_236084;
        case 0x236088u: goto label_236088;
        case 0x23608cu: goto label_23608c;
        case 0x236090u: goto label_236090;
        case 0x236094u: goto label_236094;
        case 0x236098u: goto label_236098;
        case 0x23609cu: goto label_23609c;
        case 0x2360a0u: goto label_2360a0;
        case 0x2360a4u: goto label_2360a4;
        case 0x2360a8u: goto label_2360a8;
        case 0x2360acu: goto label_2360ac;
        case 0x2360b0u: goto label_2360b0;
        case 0x2360b4u: goto label_2360b4;
        case 0x2360b8u: goto label_2360b8;
        case 0x2360bcu: goto label_2360bc;
        case 0x2360c0u: goto label_2360c0;
        case 0x2360c4u: goto label_2360c4;
        case 0x2360c8u: goto label_2360c8;
        case 0x2360ccu: goto label_2360cc;
        case 0x2360d0u: goto label_2360d0;
        case 0x2360d4u: goto label_2360d4;
        case 0x2360d8u: goto label_2360d8;
        case 0x2360dcu: goto label_2360dc;
        case 0x2360e0u: goto label_2360e0;
        case 0x2360e4u: goto label_2360e4;
        case 0x2360e8u: goto label_2360e8;
        case 0x2360ecu: goto label_2360ec;
        case 0x2360f0u: goto label_2360f0;
        case 0x2360f4u: goto label_2360f4;
        case 0x2360f8u: goto label_2360f8;
        case 0x2360fcu: goto label_2360fc;
        case 0x236100u: goto label_236100;
        case 0x236104u: goto label_236104;
        case 0x236108u: goto label_236108;
        case 0x23610cu: goto label_23610c;
        case 0x236110u: goto label_236110;
        case 0x236114u: goto label_236114;
        case 0x236118u: goto label_236118;
        case 0x23611cu: goto label_23611c;
        case 0x236120u: goto label_236120;
        case 0x236124u: goto label_236124;
        case 0x236128u: goto label_236128;
        case 0x23612cu: goto label_23612c;
        case 0x236130u: goto label_236130;
        case 0x236134u: goto label_236134;
        case 0x236138u: goto label_236138;
        case 0x23613cu: goto label_23613c;
        case 0x236140u: goto label_236140;
        case 0x236144u: goto label_236144;
        case 0x236148u: goto label_236148;
        case 0x23614cu: goto label_23614c;
        case 0x236150u: goto label_236150;
        case 0x236154u: goto label_236154;
        case 0x236158u: goto label_236158;
        case 0x23615cu: goto label_23615c;
        case 0x236160u: goto label_236160;
        case 0x236164u: goto label_236164;
        case 0x236168u: goto label_236168;
        case 0x23616cu: goto label_23616c;
        case 0x236170u: goto label_236170;
        case 0x236174u: goto label_236174;
        case 0x236178u: goto label_236178;
        case 0x23617cu: goto label_23617c;
        case 0x236180u: goto label_236180;
        case 0x236184u: goto label_236184;
        case 0x236188u: goto label_236188;
        case 0x23618cu: goto label_23618c;
        case 0x236190u: goto label_236190;
        case 0x236194u: goto label_236194;
        case 0x236198u: goto label_236198;
        case 0x23619cu: goto label_23619c;
        case 0x2361a0u: goto label_2361a0;
        case 0x2361a4u: goto label_2361a4;
        case 0x2361a8u: goto label_2361a8;
        case 0x2361acu: goto label_2361ac;
        case 0x2361b0u: goto label_2361b0;
        case 0x2361b4u: goto label_2361b4;
        case 0x2361b8u: goto label_2361b8;
        case 0x2361bcu: goto label_2361bc;
        case 0x2361c0u: goto label_2361c0;
        case 0x2361c4u: goto label_2361c4;
        case 0x2361c8u: goto label_2361c8;
        case 0x2361ccu: goto label_2361cc;
        case 0x2361d0u: goto label_2361d0;
        case 0x2361d4u: goto label_2361d4;
        case 0x2361d8u: goto label_2361d8;
        case 0x2361dcu: goto label_2361dc;
        case 0x2361e0u: goto label_2361e0;
        case 0x2361e4u: goto label_2361e4;
        case 0x2361e8u: goto label_2361e8;
        case 0x2361ecu: goto label_2361ec;
        case 0x2361f0u: goto label_2361f0;
        case 0x2361f4u: goto label_2361f4;
        case 0x2361f8u: goto label_2361f8;
        case 0x2361fcu: goto label_2361fc;
        case 0x236200u: goto label_236200;
        case 0x236204u: goto label_236204;
        case 0x236208u: goto label_236208;
        case 0x23620cu: goto label_23620c;
        case 0x236210u: goto label_236210;
        case 0x236214u: goto label_236214;
        case 0x236218u: goto label_236218;
        case 0x23621cu: goto label_23621c;
        case 0x236220u: goto label_236220;
        case 0x236224u: goto label_236224;
        case 0x236228u: goto label_236228;
        case 0x23622cu: goto label_23622c;
        case 0x236230u: goto label_236230;
        case 0x236234u: goto label_236234;
        case 0x236238u: goto label_236238;
        case 0x23623cu: goto label_23623c;
        case 0x236240u: goto label_236240;
        case 0x236244u: goto label_236244;
        case 0x236248u: goto label_236248;
        case 0x23624cu: goto label_23624c;
        case 0x236250u: goto label_236250;
        case 0x236254u: goto label_236254;
        case 0x236258u: goto label_236258;
        case 0x23625cu: goto label_23625c;
        case 0x236260u: goto label_236260;
        case 0x236264u: goto label_236264;
        case 0x236268u: goto label_236268;
        case 0x23626cu: goto label_23626c;
        case 0x236270u: goto label_236270;
        case 0x236274u: goto label_236274;
        default: return;
    }

label_235aa8:
    // 0x235aa8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_235aac:
    if (ctx->pc == 0x235AACu) {
        ctx->pc = 0x235AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235AA8u;
        // 0x235aac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235AB0u;
        goto label_235ab0;
    }
    ctx->pc = 0x235AA8u;
    {
        const bool branch_taken_0x235aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235AA8u;
        // 0x235aac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235aa8) {
            ctx->pc = 0x235B18u;
            goto label_235b18;
        }
    }
    ctx->pc = 0x235AB0u;
label_235ab0:
    // 0x235ab0: 0xc08d650  jal         func_235940
label_235ab4:
    if (ctx->pc == 0x235AB4u) {
        ctx->pc = 0x235AB8u;
        goto label_235ab8;
    }
    ctx->pc = 0x235AB0u;
    SET_GPR_U32(ctx, 31, 0x235AB8u);
    ctx->pc = 0x235940u;
    { ctx->pc = 0x235940; return; }
    ctx->pc = 0x235AB8u;
label_235ab8:
    // 0x235ab8: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x235ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_235abc:
    // 0x235abc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235ac0:
    // 0x235ac0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x235ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_235ac4:
    // 0x235ac4: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x235ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
label_235ac8:
    // 0x235ac8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x235ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_235acc:
    // 0x235acc: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
label_235ad0:
    if (ctx->pc == 0x235AD0u) {
        ctx->pc = 0x235AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235ACCu;
        // 0x235ad0: 0x2445040c  addiu       $a1, $v0, 0x40C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1036));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235AD4u;
        goto label_235ad4;
    }
    ctx->pc = 0x235ACCu;
    {
        const bool branch_taken_0x235acc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x235AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235ACCu;
        // 0x235ad0: 0x2445040c  addiu       $a1, $v0, 0x40C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1036));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235acc) {
            ctx->pc = 0x235B0Cu;
            goto label_235b0c;
        }
    }
    ctx->pc = 0x235AD4u;
label_235ad4:
    // 0x235ad4: 0xac520400  sw          $s2, 0x400($v0)
    ctx->pc = 0x235ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1024), GPR_U32(ctx, 18));
label_235ad8:
    // 0x235ad8: 0x2410fffe  addiu       $s0, $zero, -0x2
    ctx->pc = 0x235ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_235adc:
    // 0x235adc: 0xac540404  sw          $s4, 0x404($v0)
    ctx->pc = 0x235adcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1028), GPR_U32(ctx, 20));
label_235ae0:
    // 0x235ae0: 0xc08dc08  jal         func_237020
label_235ae4:
    if (ctx->pc == 0x235AE4u) {
        ctx->pc = 0x235AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235AE0u;
        // 0x235ae4: 0xac550408  sw          $s5, 0x408($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1032), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235AE8u;
        goto label_235ae8;
    }
    ctx->pc = 0x235AE0u;
    SET_GPR_U32(ctx, 31, 0x235AE8u);
    ctx->pc = 0x235AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235AE0u;
    // 0x235ae4: 0xac550408  sw          $s5, 0x408($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1032), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237020u;
    { ctx->pc = 0x237020; return; }
    ctx->pc = 0x235AE8u;
label_235ae8:
    // 0x235ae8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x235ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_235aec:
    // 0x235aec: 0x2652824  and         $a1, $s3, $a1
    ctx->pc = 0x235aecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & GPR_U64(ctx, 5));
label_235af0:
    // 0x235af0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_235af4:
    // 0x235af4: 0x34a50031  ori         $a1, $a1, 0x31
    ctx->pc = 0x235af4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49);
label_235af8:
    // 0x235af8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_235afc:
    if (ctx->pc == 0x235AFCu) {
        ctx->pc = 0x235AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235AF8u;
        // 0x235afc: 0x2446000c  addiu       $a2, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235B00u;
        goto label_235b00;
    }
    ctx->pc = 0x235AF8u;
    {
        const bool branch_taken_0x235af8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x235AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235AF8u;
        // 0x235afc: 0x2446000c  addiu       $a2, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235af8) {
            ctx->pc = 0x235B0Cu;
            goto label_235b0c;
        }
    }
    ctx->pc = 0x235B00u;
label_235b00:
    // 0x235b00: 0xc08d666  jal         func_235998
label_235b04:
    if (ctx->pc == 0x235B04u) {
        ctx->pc = 0x235B08u;
        goto label_235b08;
    }
    ctx->pc = 0x235B00u;
    SET_GPR_U32(ctx, 31, 0x235B08u);
    ctx->pc = 0x235998u;
    { ctx->pc = 0x235998; return; }
    ctx->pc = 0x235B08u;
label_235b08:
    // 0x235b08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235b0c:
    // 0x235b0c: 0xc069210  jal         func_1A4840
label_235b10:
    if (ctx->pc == 0x235B10u) {
        ctx->pc = 0x235B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B0Cu;
        // 0x235b10: 0x8f8482e8  lw          $a0, -0x7D18($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235B14u;
        goto label_235b14;
    }
    ctx->pc = 0x235B0Cu;
    SET_GPR_U32(ctx, 31, 0x235B14u);
    ctx->pc = 0x235B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235B0Cu;
    // 0x235b10: 0x8f8482e8  lw          $a0, -0x7D18($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x235B14u;
label_235b14:
    // 0x235b14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x235b14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235b18:
    // 0x235b18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235b18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235b1c:
    // 0x235b1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235b1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_235b20:
    // 0x235b20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x235b20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_235b24:
    // 0x235b24: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x235b24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_235b28:
    // 0x235b28: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x235b28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_235b2c:
    // 0x235b2c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x235b2cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_235b30:
    // 0x235b30: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x235b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_235b34:
    // 0x235b34: 0x3e00008  jr          $ra
label_235b38:
    if (ctx->pc == 0x235B38u) {
        ctx->pc = 0x235B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B34u;
        // 0x235b38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235B3Cu;
        goto label_235b3c;
    }
    ctx->pc = 0x235B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B34u;
        // 0x235b38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235B3Cu;
label_235b3c:
    // 0x235b3c: 0x0  nop
    ctx->pc = 0x235b3cu;
    // NOP
label_235b40:
    // 0x235b40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x235b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_235b44:
    // 0x235b44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x235b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_235b48:
    // 0x235b48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x235b48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_235b4c:
    // 0x235b4c: 0x8f8482e8  lw          $a0, -0x7D18($gp)
    ctx->pc = 0x235b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935272)));
label_235b50:
    // 0x235b50: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x235b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_235b54:
    // 0x235b54: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x235b54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_235b58:
    // 0x235b58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x235b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_235b5c:
    // 0x235b5c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x235b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_235b60:
    // 0x235b60: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x235b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_235b64:
    // 0x235b64: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x235b64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_235b68:
    // 0x235b68: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x235b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_235b6c:
    // 0x235b6c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x235b6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_235b70:
    // 0x235b70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_235b74:
    // 0x235b74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x235b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_235b78:
    // 0x235b78: 0xc08dbf8  jal         func_236FE0
label_235b7c:
    if (ctx->pc == 0x235B7Cu) {
        ctx->pc = 0x235B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B78u;
        // 0x235b7c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235B80u;
        goto label_235b80;
    }
    ctx->pc = 0x235B78u;
    SET_GPR_U32(ctx, 31, 0x235B80u);
    ctx->pc = 0x235B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235B78u;
    // 0x235b7c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x235B80u;
label_235b80:
    // 0x235b80: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_235b84:
    if (ctx->pc == 0x235B84u) {
        ctx->pc = 0x235B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B80u;
        // 0x235b84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235B88u;
        goto label_235b88;
    }
    ctx->pc = 0x235B80u;
    {
        const bool branch_taken_0x235b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B80u;
        // 0x235b84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235b80) {
            ctx->pc = 0x235BF0u;
            goto label_235bf0;
        }
    }
    ctx->pc = 0x235B88u;
label_235b88:
    // 0x235b88: 0xc08d650  jal         func_235940
label_235b8c:
    if (ctx->pc == 0x235B8Cu) {
        ctx->pc = 0x235B90u;
        goto label_235b90;
    }
    ctx->pc = 0x235B88u;
    SET_GPR_U32(ctx, 31, 0x235B90u);
    ctx->pc = 0x235940u;
    { ctx->pc = 0x235940; return; }
    ctx->pc = 0x235B90u;
label_235b90:
    // 0x235b90: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x235b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_235b94:
    // 0x235b94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235b98:
    // 0x235b98: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x235b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_235b9c:
    // 0x235b9c: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x235b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
label_235ba0:
    // 0x235ba0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x235ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_235ba4:
    // 0x235ba4: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
label_235ba8:
    if (ctx->pc == 0x235BA8u) {
        ctx->pc = 0x235BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BA4u;
        // 0x235ba8: 0x2445040c  addiu       $a1, $v0, 0x40C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1036));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235BACu;
        goto label_235bac;
    }
    ctx->pc = 0x235BA4u;
    {
        const bool branch_taken_0x235ba4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x235BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BA4u;
        // 0x235ba8: 0x2445040c  addiu       $a1, $v0, 0x40C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1036));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ba4) {
            ctx->pc = 0x235BE4u;
            goto label_235be4;
        }
    }
    ctx->pc = 0x235BACu;
label_235bac:
    // 0x235bac: 0xac520400  sw          $s2, 0x400($v0)
    ctx->pc = 0x235bacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1024), GPR_U32(ctx, 18));
label_235bb0:
    // 0x235bb0: 0x2410fffe  addiu       $s0, $zero, -0x2
    ctx->pc = 0x235bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_235bb4:
    // 0x235bb4: 0xac540404  sw          $s4, 0x404($v0)
    ctx->pc = 0x235bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1028), GPR_U32(ctx, 20));
label_235bb8:
    // 0x235bb8: 0xc08dc08  jal         func_237020
label_235bbc:
    if (ctx->pc == 0x235BBCu) {
        ctx->pc = 0x235BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BB8u;
        // 0x235bbc: 0xac550408  sw          $s5, 0x408($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1032), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235BC0u;
        goto label_235bc0;
    }
    ctx->pc = 0x235BB8u;
    SET_GPR_U32(ctx, 31, 0x235BC0u);
    ctx->pc = 0x235BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235BB8u;
    // 0x235bbc: 0xac550408  sw          $s5, 0x408($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1032), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237020u;
    { ctx->pc = 0x237020; return; }
    ctx->pc = 0x235BC0u;
label_235bc0:
    // 0x235bc0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x235bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_235bc4:
    // 0x235bc4: 0x2652824  and         $a1, $s3, $a1
    ctx->pc = 0x235bc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & GPR_U64(ctx, 5));
label_235bc8:
    // 0x235bc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_235bcc:
    // 0x235bcc: 0x34a50032  ori         $a1, $a1, 0x32
    ctx->pc = 0x235bccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)50);
label_235bd0:
    // 0x235bd0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_235bd4:
    if (ctx->pc == 0x235BD4u) {
        ctx->pc = 0x235BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BD0u;
        // 0x235bd4: 0x2446000c  addiu       $a2, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235BD8u;
        goto label_235bd8;
    }
    ctx->pc = 0x235BD0u;
    {
        const bool branch_taken_0x235bd0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x235BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BD0u;
        // 0x235bd4: 0x2446000c  addiu       $a2, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235bd0) {
            ctx->pc = 0x235BE4u;
            goto label_235be4;
        }
    }
    ctx->pc = 0x235BD8u;
label_235bd8:
    // 0x235bd8: 0xc08d666  jal         func_235998
label_235bdc:
    if (ctx->pc == 0x235BDCu) {
        ctx->pc = 0x235BE0u;
        goto label_235be0;
    }
    ctx->pc = 0x235BD8u;
    SET_GPR_U32(ctx, 31, 0x235BE0u);
    ctx->pc = 0x235998u;
    { ctx->pc = 0x235998; return; }
    ctx->pc = 0x235BE0u;
label_235be0:
    // 0x235be0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235be0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235be4:
    // 0x235be4: 0xc069210  jal         func_1A4840
label_235be8:
    if (ctx->pc == 0x235BE8u) {
        ctx->pc = 0x235BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BE4u;
        // 0x235be8: 0x8f8482e8  lw          $a0, -0x7D18($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235BECu;
        goto label_235bec;
    }
    ctx->pc = 0x235BE4u;
    SET_GPR_U32(ctx, 31, 0x235BECu);
    ctx->pc = 0x235BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235BE4u;
    // 0x235be8: 0x8f8482e8  lw          $a0, -0x7D18($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x235BECu;
label_235bec:
    // 0x235bec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x235becu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235bf0:
    // 0x235bf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235bf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235bf4:
    // 0x235bf4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235bf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_235bf8:
    // 0x235bf8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x235bf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_235bfc:
    // 0x235bfc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x235bfcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_235c00:
    // 0x235c00: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x235c00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_235c04:
    // 0x235c04: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x235c04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_235c08:
    // 0x235c08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x235c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_235c0c:
    // 0x235c0c: 0x3e00008  jr          $ra
label_235c10:
    if (ctx->pc == 0x235C10u) {
        ctx->pc = 0x235C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C0Cu;
        // 0x235c10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235C14u;
        goto label_235c14;
    }
    ctx->pc = 0x235C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C0Cu;
        // 0x235c10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235C14u;
label_235c14:
    // 0x235c14: 0x0  nop
    ctx->pc = 0x235c14u;
    // NOP
label_235c18:
    // 0x235c18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_235c1c:
    // 0x235c1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x235c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_235c20:
    // 0x235c20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x235c20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_235c24:
    // 0x235c24: 0x8f8482e8  lw          $a0, -0x7D18($gp)
    ctx->pc = 0x235c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935272)));
label_235c28:
    // 0x235c28: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x235c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_235c2c:
    // 0x235c2c: 0x30b300ff  andi        $s3, $a1, 0xFF
    ctx->pc = 0x235c2cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_235c30:
    // 0x235c30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x235c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_235c34:
    // 0x235c34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x235c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_235c38:
    // 0x235c38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_235c3c:
    // 0x235c3c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x235c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_235c40:
    // 0x235c40: 0xc08dbf8  jal         func_236FE0
label_235c44:
    if (ctx->pc == 0x235C44u) {
        ctx->pc = 0x235C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C40u;
        // 0x235c44: 0x30d200ff  andi        $s2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x235C48u;
        goto label_235c48;
    }
    ctx->pc = 0x235C40u;
    SET_GPR_U32(ctx, 31, 0x235C48u);
    ctx->pc = 0x235C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235C40u;
    // 0x235c44: 0x30d200ff  andi        $s2, $a2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x235C48u;
label_235c48:
    // 0x235c48: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_235c4c:
    if (ctx->pc == 0x235C4Cu) {
        ctx->pc = 0x235C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C48u;
        // 0x235c4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235C50u;
        goto label_235c50;
    }
    ctx->pc = 0x235C48u;
    {
        const bool branch_taken_0x235c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C48u;
        // 0x235c4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235c48) {
            ctx->pc = 0x235C90u;
            goto label_235c90;
        }
    }
    ctx->pc = 0x235C50u;
label_235c50:
    // 0x235c50: 0xc08d650  jal         func_235940
label_235c54:
    if (ctx->pc == 0x235C54u) {
        ctx->pc = 0x235C58u;
        goto label_235c58;
    }
    ctx->pc = 0x235C50u;
    SET_GPR_U32(ctx, 31, 0x235C58u);
    ctx->pc = 0x235940u;
    { ctx->pc = 0x235940; return; }
    ctx->pc = 0x235C58u;
label_235c58:
    // 0x235c58: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x235c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_235c5c:
    // 0x235c5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235c60:
    // 0x235c60: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x235c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_235c64:
    // 0x235c64: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x235c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
label_235c68:
    // 0x235c68: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x235c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_235c6c:
    // 0x235c6c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_235c70:
    if (ctx->pc == 0x235C70u) {
        ctx->pc = 0x235C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C6Cu;
        // 0x235c70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235C74u;
        goto label_235c74;
    }
    ctx->pc = 0x235C6Cu;
    {
        const bool branch_taken_0x235c6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x235C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C6Cu;
        // 0x235c70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235c6c) {
            ctx->pc = 0x235C84u;
            goto label_235c84;
        }
    }
    ctx->pc = 0x235C74u;
label_235c74:
    // 0x235c74: 0xac520404  sw          $s2, 0x404($v0)
    ctx->pc = 0x235c74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1028), GPR_U32(ctx, 18));
label_235c78:
    // 0x235c78: 0xc08d666  jal         func_235998
label_235c7c:
    if (ctx->pc == 0x235C7Cu) {
        ctx->pc = 0x235C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C78u;
        // 0x235c7c: 0xac530400  sw          $s3, 0x400($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1024), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235C80u;
        goto label_235c80;
    }
    ctx->pc = 0x235C78u;
    SET_GPR_U32(ctx, 31, 0x235C80u);
    ctx->pc = 0x235C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235C78u;
    // 0x235c7c: 0xac530400  sw          $s3, 0x400($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1024), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235998u;
    { ctx->pc = 0x235998; return; }
    ctx->pc = 0x235C80u;
label_235c80:
    // 0x235c80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235c84:
    // 0x235c84: 0xc069210  jal         func_1A4840
label_235c88:
    if (ctx->pc == 0x235C88u) {
        ctx->pc = 0x235C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C84u;
        // 0x235c88: 0x8f8482e8  lw          $a0, -0x7D18($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235C8Cu;
        goto label_235c8c;
    }
    ctx->pc = 0x235C84u;
    SET_GPR_U32(ctx, 31, 0x235C8Cu);
    ctx->pc = 0x235C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235C84u;
    // 0x235c88: 0x8f8482e8  lw          $a0, -0x7D18($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x235C8Cu;
label_235c8c:
    // 0x235c8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x235c8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235c90:
    // 0x235c90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235c90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235c94:
    // 0x235c94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235c94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_235c98:
    // 0x235c98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x235c98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_235c9c:
    // 0x235c9c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x235c9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_235ca0:
    // 0x235ca0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x235ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_235ca4:
    // 0x235ca4: 0x3e00008  jr          $ra
label_235ca8:
    if (ctx->pc == 0x235CA8u) {
        ctx->pc = 0x235CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CA4u;
        // 0x235ca8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235CACu;
        goto label_235cac;
    }
    ctx->pc = 0x235CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CA4u;
        // 0x235ca8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235CACu;
label_235cac:
    // 0x235cac: 0x0  nop
    ctx->pc = 0x235cacu;
    // NOP
label_235cb0:
    // 0x235cb0: 0x8f8282ec  lw          $v0, -0x7D14($gp)
    ctx->pc = 0x235cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935276)));
label_235cb4:
    // 0x235cb4: 0x3e00008  jr          $ra
label_235cb8:
    if (ctx->pc == 0x235CB8u) {
        ctx->pc = 0x235CBCu;
        goto label_235cbc;
    }
    ctx->pc = 0x235CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235CBCu;
label_235cbc:
    // 0x235cbc: 0x0  nop
    ctx->pc = 0x235cbcu;
    // NOP
label_235cc0:
    // 0x235cc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x235cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_235cc4:
    // 0x235cc4: 0xaf8282f8  sw          $v0, -0x7D08($gp)
    ctx->pc = 0x235cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935288), GPR_U32(ctx, 2));
label_235cc8:
    // 0x235cc8: 0xaf8082fc  sw          $zero, -0x7D04($gp)
    ctx->pc = 0x235cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935292), GPR_U32(ctx, 0));
label_235ccc:
    // 0x235ccc: 0x3e00008  jr          $ra
label_235cd0:
    if (ctx->pc == 0x235CD0u) {
        ctx->pc = 0x235CD4u;
        goto label_235cd4;
    }
    ctx->pc = 0x235CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235CD4u;
label_235cd4:
    // 0x235cd4: 0x0  nop
    ctx->pc = 0x235cd4u;
    // NOP
label_235cd8:
    // 0x235cd8: 0x8f828300  lw          $v0, -0x7D00($gp)
    ctx->pc = 0x235cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935296)));
label_235cdc:
    // 0x235cdc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x235cdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_235ce0:
    // 0x235ce0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_235ce4:
    // 0x235ce4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x235ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_235ce8:
    // 0x235ce8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x235ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_235cec:
    // 0x235cec: 0x3c110059  lui         $s1, 0x59
    ctx->pc = 0x235cecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
label_235cf0:
    // 0x235cf0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_235cf4:
    if (ctx->pc == 0x235CF4u) {
        ctx->pc = 0x235CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CF0u;
        // 0x235cf4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235CF8u;
        goto label_235cf8;
    }
    ctx->pc = 0x235CF0u;
    {
        const bool branch_taken_0x235cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CF0u;
        // 0x235cf4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235cf0) {
            ctx->pc = 0x235D08u;
            goto label_235d08;
        }
    }
    ctx->pc = 0x235CF8u;
label_235cf8:
    // 0x235cf8: 0x10000007  b           . + 4 + (0x7 << 2)
label_235cfc:
    if (ctx->pc == 0x235CFCu) {
        ctx->pc = 0x235CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CF8u;
        // 0x235cfc: 0x2402fff6  addiu       $v0, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235D00u;
        goto label_235d00;
    }
    ctx->pc = 0x235CF8u;
    {
        const bool branch_taken_0x235cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CF8u;
        // 0x235cfc: 0x2402fff6  addiu       $v0, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235cf8) {
            ctx->pc = 0x235D18u;
            goto label_235d18;
        }
    }
    ctx->pc = 0x235D00u;
label_235d00:
    // 0x235d00: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_235d04:
    if (ctx->pc == 0x235D04u) {
        ctx->pc = 0x235D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D00u;
        // 0x235d04: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235D08u;
        goto label_235d08;
    }
    ctx->pc = 0x235D00u;
    {
        const bool branch_taken_0x235d00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x235D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D00u;
        // 0x235d04: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235d00) {
            ctx->pc = 0x235D18u;
            goto label_235d18;
        }
    }
    ctx->pc = 0x235D08u;
label_235d08:
    // 0x235d08: 0xc069ea6  jal         func_1A7A98
label_235d0c:
    if (ctx->pc == 0x235D0Cu) {
        ctx->pc = 0x235D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D08u;
        // 0x235d0c: 0x2624b2c0  addiu       $a0, $s1, -0x4D40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235D10u;
        goto label_235d10;
    }
    ctx->pc = 0x235D08u;
    SET_GPR_U32(ctx, 31, 0x235D10u);
    ctx->pc = 0x235D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235D08u;
    // 0x235d0c: 0x2624b2c0  addiu       $a0, $s1, -0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7A98u;
    { ctx->pc = 0x1a7a98; return; }
    ctx->pc = 0x235D10u;
label_235d10:
    // 0x235d10: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_235d14:
    if (ctx->pc == 0x235D14u) {
        ctx->pc = 0x235D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D10u;
        // 0x235d14: 0x32030001  andi        $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x235D18u;
        goto label_235d18;
    }
    ctx->pc = 0x235D10u;
    {
        const bool branch_taken_0x235d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D10u;
        // 0x235d14: 0x32030001  andi        $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235d10) {
            ctx->pc = 0x235D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_235d00;
        }
    }
    ctx->pc = 0x235D18u;
label_235d18:
    // 0x235d18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235d18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235d1c:
    // 0x235d1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235d1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_235d20:
    // 0x235d20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_235d24:
    // 0x235d24: 0x3e00008  jr          $ra
label_235d28:
    if (ctx->pc == 0x235D28u) {
        ctx->pc = 0x235D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D24u;
        // 0x235d28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235D2Cu;
        goto label_235d2c;
    }
    ctx->pc = 0x235D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D24u;
        // 0x235d28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235D2Cu;
label_235d2c:
    // 0x235d2c: 0x0  nop
    ctx->pc = 0x235d2cu;
    // NOP
label_235d30:
    // 0x235d30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x235d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_235d34:
    // 0x235d34: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x235d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_235d38:
    // 0x235d38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x235d38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_235d3c:
    // 0x235d3c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x235d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_235d40:
    // 0x235d40: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x235d40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_235d44:
    // 0x235d44: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x235d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_235d48:
    // 0x235d48: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x235d48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_235d4c:
    // 0x235d4c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x235d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_235d50:
    // 0x235d50: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x235d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_235d54:
    // 0x235d54: 0xc08d736  jal         func_235CD8
label_235d58:
    if (ctx->pc == 0x235D58u) {
        ctx->pc = 0x235D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D54u;
        // 0x235d58: 0x32130003  andi        $s3, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x235D5Cu;
        goto label_235d5c;
    }
    ctx->pc = 0x235D54u;
    SET_GPR_U32(ctx, 31, 0x235D5Cu);
    ctx->pc = 0x235D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235D54u;
    // 0x235d58: 0x32130003  andi        $s3, $s0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x235CD8u;
    goto label_235cd8;
    ctx->pc = 0x235D5Cu;
label_235d5c:
    // 0x235d5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x235d5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235d60:
    // 0x235d60: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x235d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_235d64:
    // 0x235d64: 0x2442b1c0  addiu       $v0, $v0, -0x4E40
    ctx->pc = 0x235d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
label_235d68:
    // 0x235d68: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x235d68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_235d6c:
    // 0x235d6c: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x235d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_235d70:
    // 0x235d70: 0x3a660001  xori        $a2, $s3, 0x1
    ctx->pc = 0x235d70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
label_235d74:
    // 0x235d74: 0x3c0b0023  lui         $t3, 0x23
    ctx->pc = 0x235d74u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)35 << 16));
label_235d78:
    // 0x235d78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x235d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_235d7c:
    // 0x235d7c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x235d7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235d80:
    // 0x235d80: 0x244c0084  addiu       $t4, $v0, 0x84
    ctx->pc = 0x235d80u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
label_235d84:
    // 0x235d84: 0x2484b2c0  addiu       $a0, $a0, -0x4D40
    ctx->pc = 0x235d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947520));
label_235d88:
    // 0x235d88: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x235d88u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_235d8c:
    // 0x235d8c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x235d8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_235d90:
    // 0x235d90: 0x256b5cc0  addiu       $t3, $t3, 0x5CC0
    ctx->pc = 0x235d90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 23744));
label_235d94:
    // 0x235d94: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x235d94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235d98:
    // 0x235d98: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x235d98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_235d9c:
    // 0x235d9c: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x235d9cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_235da0:
    // 0x235da0: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
label_235da4:
    if (ctx->pc == 0x235DA4u) {
        ctx->pc = 0x235DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DA0u;
        // 0x235da4: 0x24020095  addiu       $v0, $zero, 0x95 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235DA8u;
        goto label_235da8;
    }
    ctx->pc = 0x235DA0u;
    {
        const bool branch_taken_0x235da0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x235DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DA0u;
        // 0x235da4: 0x24020095  addiu       $v0, $zero, 0x95 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235da0) {
            ctx->pc = 0x235DF8u;
            goto label_235df8;
        }
    }
    ctx->pc = 0x235DA8u;
label_235da8:
    // 0x235da8: 0xaf8082f8  sw          $zero, -0x7D08($gp)
    ctx->pc = 0x235da8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935288), GPR_U32(ctx, 0));
label_235dac:
    // 0x235dac: 0x16220002  bne         $s1, $v0, . + 4 + (0x2 << 2)
label_235db0:
    if (ctx->pc == 0x235DB0u) {
        ctx->pc = 0x235DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DACu;
        // 0x235db0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235DB4u;
        goto label_235db4;
    }
    ctx->pc = 0x235DACu;
    {
        const bool branch_taken_0x235dac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x235DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DACu;
        // 0x235db0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235dac) {
            ctx->pc = 0x235DB8u;
            goto label_235db8;
        }
    }
    ctx->pc = 0x235DB4u;
label_235db4:
    // 0x235db4: 0xaf8282fc  sw          $v0, -0x7D04($gp)
    ctx->pc = 0x235db4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935292), GPR_U32(ctx, 2));
label_235db8:
    // 0x235db8: 0xc069e2a  jal         func_1A78A8
label_235dbc:
    if (ctx->pc == 0x235DBCu) {
        ctx->pc = 0x235DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DB8u;
        // 0x235dbc: 0xafac0000  sw          $t4, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235DC0u;
        goto label_235dc0;
    }
    ctx->pc = 0x235DB8u;
    SET_GPR_U32(ctx, 31, 0x235DC0u);
    ctx->pc = 0x235DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235DB8u;
    // 0x235dbc: 0xafac0000  sw          $t4, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x235DC0u;
label_235dc0:
    // 0x235dc0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x235dc0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235dc4:
    // 0x235dc4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_235dc8:
    if (ctx->pc == 0x235DC8u) {
        ctx->pc = 0x235DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DC4u;
        // 0x235dc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235DCCu;
        goto label_235dcc;
    }
    ctx->pc = 0x235DC4u;
    {
        const bool branch_taken_0x235dc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x235DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DC4u;
        // 0x235dc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235dc4) {
            ctx->pc = 0x235DE0u;
            goto label_235de0;
        }
    }
    ctx->pc = 0x235DCCu;
label_235dcc:
    // 0x235dcc: 0x5262000a  beql        $s3, $v0, . + 4 + (0xA << 2)
label_235dd0:
    if (ctx->pc == 0x235DD0u) {
        ctx->pc = 0x235DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DCCu;
        // 0x235dd0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235DD4u;
        goto label_235dd4;
    }
    ctx->pc = 0x235DCCu;
    {
        const bool branch_taken_0x235dcc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x235dcc) {
            ctx->pc = 0x235DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235DCCu;
            // 0x235dd0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235DF8u;
            goto label_235df8;
        }
    }
    ctx->pc = 0x235DD4u;
label_235dd4:
    // 0x235dd4: 0x10000009  b           . + 4 + (0x9 << 2)
label_235dd8:
    if (ctx->pc == 0x235DD8u) {
        ctx->pc = 0x235DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DD4u;
        // 0x235dd8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235DDCu;
        goto label_235ddc;
    }
    ctx->pc = 0x235DD4u;
    {
        const bool branch_taken_0x235dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DD4u;
        // 0x235dd8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235dd4) {
            ctx->pc = 0x235DFCu;
            goto label_235dfc;
        }
    }
    ctx->pc = 0x235DDCu;
label_235ddc:
    // 0x235ddc: 0x0  nop
    ctx->pc = 0x235ddcu;
    // NOP
label_235de0:
    // 0x235de0: 0x2402ff9d  addiu       $v0, $zero, -0x63
    ctx->pc = 0x235de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
label_235de4:
    // 0x235de4: 0x2403ff9d  addiu       $v1, $zero, -0x63
    ctx->pc = 0x235de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
label_235de8:
    // 0x235de8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x235de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_235dec:
    // 0x235dec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x235decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_235df0:
    // 0x235df0: 0xaf8282f8  sw          $v0, -0x7D08($gp)
    ctx->pc = 0x235df0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935288), GPR_U32(ctx, 2));
label_235df4:
    // 0x235df4: 0xaf8082fc  sw          $zero, -0x7D04($gp)
    ctx->pc = 0x235df4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935292), GPR_U32(ctx, 0));
label_235df8:
    // 0x235df8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x235df8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_235dfc:
    // 0x235dfc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x235dfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_235e00:
    // 0x235e00: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x235e00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_235e04:
    // 0x235e04: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x235e04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_235e08:
    // 0x235e08: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x235e08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_235e0c:
    // 0x235e0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x235e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_235e10:
    // 0x235e10: 0x3e00008  jr          $ra
label_235e14:
    if (ctx->pc == 0x235E14u) {
        ctx->pc = 0x235E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E10u;
        // 0x235e14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235E18u;
        goto label_235e18;
    }
    ctx->pc = 0x235E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E10u;
        // 0x235e14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235E18u;
label_235e18:
    // 0x235e18: 0x8f828300  lw          $v0, -0x7D00($gp)
    ctx->pc = 0x235e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935296)));
label_235e1c:
    // 0x235e1c: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x235e1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_235e20:
    // 0x235e20: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x235e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_235e24:
    // 0x235e24: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x235e24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_235e28:
    // 0x235e28: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x235e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_235e2c:
    // 0x235e2c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x235e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_235e30:
    // 0x235e30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_235e34:
    if (ctx->pc == 0x235E34u) {
        ctx->pc = 0x235E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E30u;
        // 0x235e34: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235E38u;
        goto label_235e38;
    }
    ctx->pc = 0x235E30u;
    {
        const bool branch_taken_0x235e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E30u;
        // 0x235e34: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235e30) {
            ctx->pc = 0x235E40u;
            goto label_235e40;
        }
    }
    ctx->pc = 0x235E38u;
label_235e38:
    // 0x235e38: 0x10000060  b           . + 4 + (0x60 << 2)
label_235e3c:
    if (ctx->pc == 0x235E3Cu) {
        ctx->pc = 0x235E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E38u;
        // 0x235e3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235E40u;
        goto label_235e40;
    }
    ctx->pc = 0x235E38u;
    {
        const bool branch_taken_0x235e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E38u;
        // 0x235e3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235e38) {
            ctx->pc = 0x235FBCu;
            goto label_235fbc;
        }
    }
    ctx->pc = 0x235E40u;
label_235e40:
    // 0x235e40: 0xc069c1a  jal         func_1A7068
label_235e44:
    if (ctx->pc == 0x235E44u) {
        ctx->pc = 0x235E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E40u;
        // 0x235e44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235E48u;
        goto label_235e48;
    }
    ctx->pc = 0x235E40u;
    SET_GPR_U32(ctx, 31, 0x235E48u);
    ctx->pc = 0x235E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235E40u;
    // 0x235e44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7068u;
    { ctx->pc = 0x1a7068; return; }
    ctx->pc = 0x235E48u;
label_235e48:
    // 0x235e48: 0x1000000d  b           . + 4 + (0xD << 2)
label_235e4c:
    if (ctx->pc == 0x235E4Cu) {
        ctx->pc = 0x235E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E48u;
        // 0x235e4c: 0x3c110059  lui         $s1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235E50u;
        goto label_235e50;
    }
    ctx->pc = 0x235E48u;
    {
        const bool branch_taken_0x235e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E48u;
        // 0x235e4c: 0x3c110059  lui         $s1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235e48) {
            ctx->pc = 0x235E80u;
            goto label_235e80;
        }
    }
    ctx->pc = 0x235E50u;
label_235e50:
    // 0x235e50: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x235e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_235e54:
    // 0x235e54: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x235e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_235e58:
    // 0x235e58: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x235e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_235e5c:
    // 0x235e5c: 0x0  nop
    ctx->pc = 0x235e5cu;
    // NOP
label_235e60:
    // 0x235e60: 0x0  nop
    ctx->pc = 0x235e60u;
    // NOP
label_235e64:
    // 0x235e64: 0x0  nop
    ctx->pc = 0x235e64u;
    // NOP
label_235e68:
    // 0x235e68: 0x0  nop
    ctx->pc = 0x235e68u;
    // NOP
label_235e6c:
    // 0x235e6c: 0x0  nop
    ctx->pc = 0x235e6cu;
    // NOP
label_235e70:
    // 0x235e70: 0x0  nop
    ctx->pc = 0x235e70u;
    // NOP
label_235e74:
    // 0x235e74: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
label_235e78:
    if (ctx->pc == 0x235E78u) {
        ctx->pc = 0x235E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E74u;
        // 0x235e78: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235E7Cu;
        goto label_235e7c;
    }
    ctx->pc = 0x235E74u;
    {
        const bool branch_taken_0x235e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x235e74) {
            ctx->pc = 0x235E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235E74u;
            // 0x235e78: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_235e60;
        }
    }
    ctx->pc = 0x235E7Cu;
label_235e7c:
    // 0x235e7c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x235e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_235e80:
    // 0x235e80: 0x2630b2c0  addiu       $s0, $s1, -0x4D40
    ctx->pc = 0x235e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947520));
label_235e84:
    // 0x235e84: 0x3c054b53  lui         $a1, 0x4B53
    ctx->pc = 0x235e84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19283 << 16));
label_235e88:
    // 0x235e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235e8c:
    // 0x235e8c: 0x34a54e47  ori         $a1, $a1, 0x4E47
    ctx->pc = 0x235e8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20039);
label_235e90:
    // 0x235e90: 0xc069db6  jal         func_1A76D8
label_235e94:
    if (ctx->pc == 0x235E94u) {
        ctx->pc = 0x235E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E90u;
        // 0x235e94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235E98u;
        goto label_235e98;
    }
    ctx->pc = 0x235E90u;
    SET_GPR_U32(ctx, 31, 0x235E98u);
    ctx->pc = 0x235E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235E90u;
    // 0x235e94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    { ctx->pc = 0x1a76d8; return; }
    ctx->pc = 0x235E98u;
label_235e98:
    // 0x235e98: 0x4400048  bltz        $v0, . + 4 + (0x48 << 2)
label_235e9c:
    if (ctx->pc == 0x235E9Cu) {
        ctx->pc = 0x235E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E98u;
        // 0x235e9c: 0x2402ff9d  addiu       $v0, $zero, -0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235EA0u;
        goto label_235ea0;
    }
    ctx->pc = 0x235E98u;
    {
        const bool branch_taken_0x235e98 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x235E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E98u;
        // 0x235e9c: 0x2402ff9d  addiu       $v0, $zero, -0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235e98) {
            ctx->pc = 0x235FBCu;
            goto label_235fbc;
        }
    }
    ctx->pc = 0x235EA0u;
label_235ea0:
    // 0x235ea0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x235ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_235ea4:
    // 0x235ea4: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
label_235ea8:
    if (ctx->pc == 0x235EA8u) {
        ctx->pc = 0x235EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EA4u;
        // 0x235ea8: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235EACu;
        goto label_235eac;
    }
    ctx->pc = 0x235EA4u;
    {
        const bool branch_taken_0x235ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EA4u;
        // 0x235ea8: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ea4) {
            ctx->pc = 0x235E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_235e50;
        }
    }
    ctx->pc = 0x235EACu;
label_235eac:
    // 0x235eac: 0x1000000e  b           . + 4 + (0xE << 2)
label_235eb0:
    if (ctx->pc == 0x235EB0u) {
        ctx->pc = 0x235EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EACu;
        // 0x235eb0: 0x3c110059  lui         $s1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235EB4u;
        goto label_235eb4;
    }
    ctx->pc = 0x235EACu;
    {
        const bool branch_taken_0x235eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EACu;
        // 0x235eb0: 0x3c110059  lui         $s1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235eac) {
            ctx->pc = 0x235EE8u;
            goto label_235ee8;
        }
    }
    ctx->pc = 0x235EB4u;
label_235eb4:
    // 0x235eb4: 0x0  nop
    ctx->pc = 0x235eb4u;
    // NOP
label_235eb8:
    // 0x235eb8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x235eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_235ebc:
    // 0x235ebc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x235ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_235ec0:
    // 0x235ec0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x235ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_235ec4:
    // 0x235ec4: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x235ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_235ec8:
    // 0x235ec8: 0x0  nop
    ctx->pc = 0x235ec8u;
    // NOP
label_235ecc:
    // 0x235ecc: 0x0  nop
    ctx->pc = 0x235eccu;
    // NOP
label_235ed0:
    // 0x235ed0: 0x0  nop
    ctx->pc = 0x235ed0u;
    // NOP
label_235ed4:
    // 0x235ed4: 0x0  nop
    ctx->pc = 0x235ed4u;
    // NOP
label_235ed8:
    // 0x235ed8: 0x0  nop
    ctx->pc = 0x235ed8u;
    // NOP
label_235edc:
    // 0x235edc: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
label_235ee0:
    if (ctx->pc == 0x235EE0u) {
        ctx->pc = 0x235EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EDCu;
        // 0x235ee0: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235EE4u;
        goto label_235ee4;
    }
    ctx->pc = 0x235EDCu;
    {
        const bool branch_taken_0x235edc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x235edc) {
            ctx->pc = 0x235EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235EDCu;
            // 0x235ee0: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_235ec8;
        }
    }
    ctx->pc = 0x235EE4u;
label_235ee4:
    // 0x235ee4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x235ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_235ee8:
    // 0x235ee8: 0x2630b2e8  addiu       $s0, $s1, -0x4D18
    ctx->pc = 0x235ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947560));
label_235eec:
    // 0x235eec: 0x3c054b53  lui         $a1, 0x4B53
    ctx->pc = 0x235eecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19283 << 16));
label_235ef0:
    // 0x235ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235ef4:
    // 0x235ef4: 0x34a54e48  ori         $a1, $a1, 0x4E48
    ctx->pc = 0x235ef4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20040);
label_235ef8:
    // 0x235ef8: 0xc069db6  jal         func_1A76D8
label_235efc:
    if (ctx->pc == 0x235EFCu) {
        ctx->pc = 0x235EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EF8u;
        // 0x235efc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F00u;
        goto label_235f00;
    }
    ctx->pc = 0x235EF8u;
    SET_GPR_U32(ctx, 31, 0x235F00u);
    ctx->pc = 0x235EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235EF8u;
    // 0x235efc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    { ctx->pc = 0x1a76d8; return; }
    ctx->pc = 0x235F00u;
label_235f00:
    // 0x235f00: 0x440002e  bltz        $v0, . + 4 + (0x2E << 2)
label_235f04:
    if (ctx->pc == 0x235F04u) {
        ctx->pc = 0x235F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F00u;
        // 0x235f04: 0x2402ff9d  addiu       $v0, $zero, -0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F08u;
        goto label_235f08;
    }
    ctx->pc = 0x235F00u;
    {
        const bool branch_taken_0x235f00 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x235F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F00u;
        // 0x235f04: 0x2402ff9d  addiu       $v0, $zero, -0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235f00) {
            ctx->pc = 0x235FBCu;
            goto label_235fbc;
        }
    }
    ctx->pc = 0x235F08u;
label_235f08:
    // 0x235f08: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x235f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_235f0c:
    // 0x235f0c: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
label_235f10:
    if (ctx->pc == 0x235F10u) {
        ctx->pc = 0x235F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F0Cu;
        // 0x235f10: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F14u;
        goto label_235f14;
    }
    ctx->pc = 0x235F0Cu;
    {
        const bool branch_taken_0x235f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F0Cu;
        // 0x235f10: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235f0c) {
            ctx->pc = 0x235EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_235eb8;
        }
    }
    ctx->pc = 0x235F14u;
label_235f14:
    // 0x235f14: 0xc069a5a  jal         func_1A6968
label_235f18:
    if (ctx->pc == 0x235F18u) {
        ctx->pc = 0x235F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F14u;
        // 0x235f18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F1Cu;
        goto label_235f1c;
    }
    ctx->pc = 0x235F14u;
    SET_GPR_U32(ctx, 31, 0x235F1Cu);
    ctx->pc = 0x235F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235F14u;
    // 0x235f18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6968u;
    { ctx->pc = 0x1a6968; return; }
    ctx->pc = 0x235F1Cu;
label_235f1c:
    // 0x235f1c: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x235f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_235f20:
    // 0x235f20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x235f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235f24:
    // 0x235f24: 0xc069a5a  jal         func_1A6968
label_235f28:
    if (ctx->pc == 0x235F28u) {
        ctx->pc = 0x235F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F24u;
        // 0x235f28: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F2Cu;
        goto label_235f2c;
    }
    ctx->pc = 0x235F24u;
    SET_GPR_U32(ctx, 31, 0x235F2Cu);
    ctx->pc = 0x235F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235F24u;
    // 0x235f28: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6968u;
    { ctx->pc = 0x1a6968; return; }
    ctx->pc = 0x235F2Cu;
label_235f2c:
    // 0x235f2c: 0xc0692a8  jal         func_1A4AA0
label_235f30:
    if (ctx->pc == 0x235F30u) {
        ctx->pc = 0x235F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F2Cu;
        // 0x235f30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F34u;
        goto label_235f34;
    }
    ctx->pc = 0x235F2Cu;
    SET_GPR_U32(ctx, 31, 0x235F34u);
    ctx->pc = 0x235F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235F2Cu;
    // 0x235f30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    { ctx->pc = 0x1a4aa0; return; }
    ctx->pc = 0x235F34u;
label_235f34:
    // 0x235f34: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x235f34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_235f38:
    // 0x235f38: 0xafb00014  sw          $s0, 0x14($sp)
    ctx->pc = 0x235f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
label_235f3c:
    // 0x235f3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_235f40:
    // 0x235f40: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x235f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
label_235f44:
    // 0x235f44: 0xc069208  jal         func_1A4820
label_235f48:
    if (ctx->pc == 0x235F48u) {
        ctx->pc = 0x235F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F44u;
        // 0x235f48: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F4Cu;
        goto label_235f4c;
    }
    ctx->pc = 0x235F44u;
    SET_GPR_U32(ctx, 31, 0x235F4Cu);
    ctx->pc = 0x235F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235F44u;
    // 0x235f48: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x235F4Cu;
label_235f4c:
    // 0x235f4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_235f50:
    // 0x235f50: 0xc069208  jal         func_1A4820
label_235f54:
    if (ctx->pc == 0x235F54u) {
        ctx->pc = 0x235F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F50u;
        // 0x235f54: 0xaf8282f0  sw          $v0, -0x7D10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F58u;
        goto label_235f58;
    }
    ctx->pc = 0x235F50u;
    SET_GPR_U32(ctx, 31, 0x235F58u);
    ctx->pc = 0x235F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235F50u;
    // 0x235f54: 0xaf8282f0  sw          $v0, -0x7D10($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935280), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x235F58u;
label_235f58:
    // 0x235f58: 0xaf908300  sw          $s0, -0x7D00($gp)
    ctx->pc = 0x235f58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935296), GPR_U32(ctx, 16));
label_235f5c:
    // 0x235f5c: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x235f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_235f60:
    // 0x235f60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x235f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_235f64:
    // 0x235f64: 0xc08dbf8  jal         func_236FE0
label_235f68:
    if (ctx->pc == 0x235F68u) {
        ctx->pc = 0x235F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F64u;
        // 0x235f68: 0xaf8282f4  sw          $v0, -0x7D0C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F6Cu;
        goto label_235f6c;
    }
    ctx->pc = 0x235F64u;
    SET_GPR_U32(ctx, 31, 0x235F6Cu);
    ctx->pc = 0x235F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235F64u;
    // 0x235f68: 0xaf8282f4  sw          $v0, -0x7D0C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935284), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x235F6Cu;
label_235f6c:
    // 0x235f6c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x235f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_235f70:
    // 0x235f70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x235f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_235f74:
    // 0x235f74: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x235f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_235f78:
    // 0x235f78: 0x2469b1c0  addiu       $t1, $v1, -0x4E40
    ctx->pc = 0x235f78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947264));
label_235f7c:
    // 0x235f7c: 0x6a420007  ldl         $v0, 0x7($s2)
    ctx->pc = 0x235f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_235f80:
    // 0x235f80: 0x6e420000  ldr         $v0, 0x0($s2)
    ctx->pc = 0x235f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_235f84:
    // 0x235f84: 0x6a47000f  ldl         $a3, 0xF($s2)
    ctx->pc = 0x235f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_235f88:
    // 0x235f88: 0x6e470008  ldr         $a3, 0x8($s2)
    ctx->pc = 0x235f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_235f8c:
    // 0x235f8c: 0x8e480010  lw          $t0, 0x10($s2)
    ctx->pc = 0x235f8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_235f90:
    // 0x235f90: 0xb1220007  sdl         $v0, 0x7($t1)
    ctx->pc = 0x235f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_235f94:
    // 0x235f94: 0xb5220000  sdr         $v0, 0x0($t1)
    ctx->pc = 0x235f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_235f98:
    // 0x235f98: 0xb127000f  sdl         $a3, 0xF($t1)
    ctx->pc = 0x235f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_235f9c:
    // 0x235f9c: 0xb5270008  sdr         $a3, 0x8($t1)
    ctx->pc = 0x235f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_235fa0:
    // 0x235fa0: 0xad280010  sw          $t0, 0x10($t1)
    ctx->pc = 0x235fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 8));
label_235fa4:
    // 0x235fa4: 0xc08d74c  jal         func_235D30
label_235fa8:
    if (ctx->pc == 0x235FA8u) {
        ctx->pc = 0x235FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FA4u;
        // 0x235fa8: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235FACu;
        goto label_235fac;
    }
    ctx->pc = 0x235FA4u;
    SET_GPR_U32(ctx, 31, 0x235FACu);
    ctx->pc = 0x235FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235FA4u;
    // 0x235fa8: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235D30u;
    goto label_235d30;
    ctx->pc = 0x235FACu;
label_235fac:
    // 0x235fac: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x235facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_235fb0:
    // 0x235fb0: 0xc069210  jal         func_1A4840
label_235fb4:
    if (ctx->pc == 0x235FB4u) {
        ctx->pc = 0x235FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FB0u;
        // 0x235fb4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235FB8u;
        goto label_235fb8;
    }
    ctx->pc = 0x235FB0u;
    SET_GPR_U32(ctx, 31, 0x235FB8u);
    ctx->pc = 0x235FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235FB0u;
    // 0x235fb4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x235FB8u;
label_235fb8:
    // 0x235fb8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x235fb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235fbc:
    // 0x235fbc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x235fbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_235fc0:
    // 0x235fc0: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x235fc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_235fc4:
    // 0x235fc4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x235fc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_235fc8:
    // 0x235fc8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x235fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_235fcc:
    // 0x235fcc: 0x3e00008  jr          $ra
label_235fd0:
    if (ctx->pc == 0x235FD0u) {
        ctx->pc = 0x235FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FCCu;
        // 0x235fd0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235FD4u;
        goto label_235fd4;
    }
    ctx->pc = 0x235FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FCCu;
        // 0x235fd0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235FD4u;
label_235fd4:
    // 0x235fd4: 0x0  nop
    ctx->pc = 0x235fd4u;
    // NOP
label_235fd8:
    // 0x235fd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x235fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_235fdc:
    // 0x235fdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_235fe0:
    // 0x235fe0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x235fe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_235fe4:
    // 0x235fe4: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x235fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_235fe8:
    // 0x235fe8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x235fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235fec:
    // 0x235fec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x235fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_235ff0:
    // 0x235ff0: 0xc08dbf8  jal         func_236FE0
label_235ff4:
    if (ctx->pc == 0x235FF4u) {
        ctx->pc = 0x235FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FF0u;
        // 0x235ff4: 0x32100003  andi        $s0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x235FF8u;
        goto label_235ff8;
    }
    ctx->pc = 0x235FF0u;
    SET_GPR_U32(ctx, 31, 0x235FF8u);
    ctx->pc = 0x235FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235FF0u;
    // 0x235ff4: 0x32100003  andi        $s0, $s0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x235FF8u;
label_235ff8:
    // 0x235ff8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_235ffc:
    if (ctx->pc == 0x235FFCu) {
        ctx->pc = 0x235FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FF8u;
        // 0x235ffc: 0x3a040001  xori        $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x236000u;
        goto label_236000;
    }
    ctx->pc = 0x235FF8u;
    {
        const bool branch_taken_0x235ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FF8u;
        // 0x235ffc: 0x3a040001  xori        $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ff8) {
            ctx->pc = 0x236024u;
            goto label_236024;
        }
    }
    ctx->pc = 0x236000u;
label_236000:
    // 0x236000: 0xc08d736  jal         func_235CD8
label_236004:
    if (ctx->pc == 0x236004u) {
        ctx->pc = 0x236004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236000u;
        // 0x236004: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x236008u;
        goto label_236008;
    }
    ctx->pc = 0x236000u;
    SET_GPR_U32(ctx, 31, 0x236008u);
    ctx->pc = 0x236004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236000u;
    // 0x236004: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x235CD8u;
    goto label_235cd8;
    ctx->pc = 0x236008u;
label_236008:
    // 0x236008: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23600c:
    // 0x23600c: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
label_236010:
    if (ctx->pc == 0x236010u) {
        ctx->pc = 0x236010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23600Cu;
        // 0x236010: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236014u;
        goto label_236014;
    }
    ctx->pc = 0x23600Cu;
    {
        const bool branch_taken_0x23600c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x236010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23600Cu;
        // 0x236010: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23600c) {
            ctx->pc = 0x236018u;
            goto label_236018;
        }
    }
    ctx->pc = 0x236014u;
label_236014:
    // 0x236014: 0x8c50b240  lw          $s0, -0x4DC0($v0)
    ctx->pc = 0x236014u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947392)));
label_236018:
    // 0x236018: 0xc069210  jal         func_1A4840
label_23601c:
    if (ctx->pc == 0x23601Cu) {
        ctx->pc = 0x23601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236018u;
        // 0x23601c: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236020u;
        goto label_236020;
    }
    ctx->pc = 0x236018u;
    SET_GPR_U32(ctx, 31, 0x236020u);
    ctx->pc = 0x23601Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236018u;
    // 0x23601c: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x236020u;
label_236020:
    // 0x236020: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236020u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236024:
    // 0x236024: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236024u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236028:
    // 0x236028: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23602c:
    // 0x23602c: 0x3e00008  jr          $ra
label_236030:
    if (ctx->pc == 0x236030u) {
        ctx->pc = 0x236030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23602Cu;
        // 0x236030: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236034u;
        goto label_236034;
    }
    ctx->pc = 0x23602Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23602Cu;
        // 0x236030: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23602Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236034u;
label_236034:
    // 0x236034: 0x0  nop
    ctx->pc = 0x236034u;
    // NOP
label_236038:
    // 0x236038: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x236038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23603c:
    // 0x23603c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23603cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_236040:
    // 0x236040: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x236040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_236044:
    // 0x236044: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x236044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_236048:
    // 0x236048: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x236048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_23604c:
    // 0x23604c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x23604cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_236050:
    // 0x236050: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x236050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_236054:
    // 0x236054: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x236054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_236058:
    // 0x236058: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x236058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_23605c:
    // 0x23605c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x23605cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_236060:
    // 0x236060: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_236064:
    // 0x236064: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x236064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_236068:
    // 0x236068: 0xc08dbf8  jal         func_236FE0
label_23606c:
    if (ctx->pc == 0x23606Cu) {
        ctx->pc = 0x23606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236068u;
        // 0x23606c: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236070u;
        goto label_236070;
    }
    ctx->pc = 0x236068u;
    SET_GPR_U32(ctx, 31, 0x236070u);
    ctx->pc = 0x23606Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236068u;
    // 0x23606c: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x236070u;
label_236070:
    // 0x236070: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_236074:
    if (ctx->pc == 0x236074u) {
        ctx->pc = 0x236074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236070u;
        // 0x236074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236078u;
        goto label_236078;
    }
    ctx->pc = 0x236070u;
    {
        const bool branch_taken_0x236070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236070u;
        // 0x236074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236070) {
            ctx->pc = 0x2360BCu;
            goto label_2360bc;
        }
    }
    ctx->pc = 0x236078u;
label_236078:
    // 0x236078: 0xc08d736  jal         func_235CD8
label_23607c:
    if (ctx->pc == 0x23607Cu) {
        ctx->pc = 0x236080u;
        goto label_236080;
    }
    ctx->pc = 0x236078u;
    SET_GPR_U32(ctx, 31, 0x236080u);
    ctx->pc = 0x235CD8u;
    goto label_235cd8;
    ctx->pc = 0x236080u;
label_236080:
    // 0x236080: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x236080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_236084:
    // 0x236084: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236088:
    // 0x236088: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x236088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_23608c:
    // 0x23608c: 0x2442b1c0  addiu       $v0, $v0, -0x4E40
    ctx->pc = 0x23608cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
label_236090:
    // 0x236090: 0x24050091  addiu       $a1, $zero, 0x91
    ctx->pc = 0x236090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
label_236094:
    // 0x236094: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_236098:
    if (ctx->pc == 0x236098u) {
        ctx->pc = 0x236098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236094u;
        // 0x236098: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23609Cu;
        goto label_23609c;
    }
    ctx->pc = 0x236094u;
    {
        const bool branch_taken_0x236094 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x236098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236094u;
        // 0x236098: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236094) {
            ctx->pc = 0x2360B0u;
            goto label_2360b0;
        }
    }
    ctx->pc = 0x23609Cu;
label_23609c:
    // 0x23609c: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x23609cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
label_2360a0:
    // 0x2360a0: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x2360a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
label_2360a4:
    // 0x2360a4: 0xc08d74c  jal         func_235D30
label_2360a8:
    if (ctx->pc == 0x2360A8u) {
        ctx->pc = 0x2360A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360A4u;
        // 0x2360a8: 0xac530004  sw          $s3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2360ACu;
        goto label_2360ac;
    }
    ctx->pc = 0x2360A4u;
    SET_GPR_U32(ctx, 31, 0x2360ACu);
    ctx->pc = 0x2360A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2360A4u;
    // 0x2360a8: 0xac530004  sw          $s3, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235D30u;
    goto label_235d30;
    ctx->pc = 0x2360ACu;
label_2360ac:
    // 0x2360ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2360acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2360b0:
    // 0x2360b0: 0xc069210  jal         func_1A4840
label_2360b4:
    if (ctx->pc == 0x2360B4u) {
        ctx->pc = 0x2360B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360B0u;
        // 0x2360b4: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2360B8u;
        goto label_2360b8;
    }
    ctx->pc = 0x2360B0u;
    SET_GPR_U32(ctx, 31, 0x2360B8u);
    ctx->pc = 0x2360B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2360B0u;
    // 0x2360b4: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x2360B8u;
label_2360b8:
    // 0x2360b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2360b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2360bc:
    // 0x2360bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2360bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2360c0:
    // 0x2360c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2360c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2360c4:
    // 0x2360c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2360c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2360c8:
    // 0x2360c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2360c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2360cc:
    // 0x2360cc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2360ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2360d0:
    // 0x2360d0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2360d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2360d4:
    // 0x2360d4: 0x3e00008  jr          $ra
label_2360d8:
    if (ctx->pc == 0x2360D8u) {
        ctx->pc = 0x2360D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360D4u;
        // 0x2360d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2360DCu;
        goto label_2360dc;
    }
    ctx->pc = 0x2360D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2360D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360D4u;
        // 0x2360d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2360D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2360DCu;
label_2360dc:
    // 0x2360dc: 0x0  nop
    ctx->pc = 0x2360dcu;
    // NOP
label_2360e0:
    // 0x2360e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2360e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2360e4:
    // 0x2360e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2360e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2360e8:
    // 0x2360e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2360e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2360ec:
    // 0x2360ec: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x2360ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_2360f0:
    // 0x2360f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2360f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2360f4:
    // 0x2360f4: 0xc08dbf8  jal         func_236FE0
label_2360f8:
    if (ctx->pc == 0x2360F8u) {
        ctx->pc = 0x2360F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360F4u;
        // 0x2360f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2360FCu;
        goto label_2360fc;
    }
    ctx->pc = 0x2360F4u;
    SET_GPR_U32(ctx, 31, 0x2360FCu);
    ctx->pc = 0x2360F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2360F4u;
    // 0x2360f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x2360FCu;
label_2360fc:
    // 0x2360fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2360fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236100:
    // 0x236100: 0x24050092  addiu       $a1, $zero, 0x92
    ctx->pc = 0x236100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
label_236104:
    // 0x236104: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_236108:
    if (ctx->pc == 0x236108u) {
        ctx->pc = 0x236108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236104u;
        // 0x236108: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23610Cu;
        goto label_23610c;
    }
    ctx->pc = 0x236104u;
    {
        const bool branch_taken_0x236104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236104u;
        // 0x236108: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236104) {
            ctx->pc = 0x236124u;
            goto label_236124;
        }
    }
    ctx->pc = 0x23610Cu;
label_23610c:
    // 0x23610c: 0xc08d74c  jal         func_235D30
label_236110:
    if (ctx->pc == 0x236110u) {
        ctx->pc = 0x236114u;
        goto label_236114;
    }
    ctx->pc = 0x23610Cu;
    SET_GPR_U32(ctx, 31, 0x236114u);
    ctx->pc = 0x235D30u;
    goto label_235d30;
    ctx->pc = 0x236114u;
label_236114:
    // 0x236114: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x236114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_236118:
    // 0x236118: 0xc069210  jal         func_1A4840
label_23611c:
    if (ctx->pc == 0x23611Cu) {
        ctx->pc = 0x23611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236118u;
        // 0x23611c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236120u;
        goto label_236120;
    }
    ctx->pc = 0x236118u;
    SET_GPR_U32(ctx, 31, 0x236120u);
    ctx->pc = 0x23611Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236118u;
    // 0x23611c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x236120u;
label_236120:
    // 0x236120: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236124:
    // 0x236124: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236124u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236128:
    // 0x236128: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23612c:
    // 0x23612c: 0x3e00008  jr          $ra
label_236130:
    if (ctx->pc == 0x236130u) {
        ctx->pc = 0x236130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23612Cu;
        // 0x236130: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236134u;
        goto label_236134;
    }
    ctx->pc = 0x23612Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23612Cu;
        // 0x236130: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23612Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236134u;
label_236134:
    // 0x236134: 0x0  nop
    ctx->pc = 0x236134u;
    // NOP
label_236138:
    // 0x236138: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x236138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_23613c:
    // 0x23613c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23613cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_236140:
    // 0x236140: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x236140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_236144:
    // 0x236144: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x236144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_236148:
    // 0x236148: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x236148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_23614c:
    // 0x23614c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x23614cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_236150:
    // 0x236150: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x236150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_236154:
    // 0x236154: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x236154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_236158:
    // 0x236158: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x236158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_23615c:
    // 0x23615c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x23615cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_236160:
    // 0x236160: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x236160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_236164:
    // 0x236164: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x236164u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_236168:
    // 0x236168: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x236168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_23616c:
    // 0x23616c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x23616cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_236170:
    // 0x236170: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x236170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_236174:
    // 0x236174: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x236174u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_236178:
    // 0x236178: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23617c:
    // 0x23617c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x23617cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_236180:
    // 0x236180: 0xc08dbf8  jal         func_236FE0
label_236184:
    if (ctx->pc == 0x236184u) {
        ctx->pc = 0x236184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236180u;
        // 0x236184: 0x140902d  daddu       $s2, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236188u;
        goto label_236188;
    }
    ctx->pc = 0x236180u;
    SET_GPR_U32(ctx, 31, 0x236188u);
    ctx->pc = 0x236184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236180u;
    // 0x236184: 0x140902d  daddu       $s2, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x236188u;
label_236188:
    // 0x236188: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_23618c:
    if (ctx->pc == 0x23618Cu) {
        ctx->pc = 0x23618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236188u;
        // 0x23618c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236190u;
        goto label_236190;
    }
    ctx->pc = 0x236188u;
    {
        const bool branch_taken_0x236188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236188u;
        // 0x23618c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236188) {
            ctx->pc = 0x2361E0u;
            goto label_2361e0;
        }
    }
    ctx->pc = 0x236190u;
label_236190:
    // 0x236190: 0xc08d736  jal         func_235CD8
label_236194:
    if (ctx->pc == 0x236194u) {
        ctx->pc = 0x236198u;
        goto label_236198;
    }
    ctx->pc = 0x236190u;
    SET_GPR_U32(ctx, 31, 0x236198u);
    ctx->pc = 0x235CD8u;
    goto label_235cd8;
    ctx->pc = 0x236198u;
label_236198:
    // 0x236198: 0x24050093  addiu       $a1, $zero, 0x93
    ctx->pc = 0x236198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
label_23619c:
    // 0x23619c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23619cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2361a0:
    // 0x2361a0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2361a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_2361a4:
    // 0x2361a4: 0x2442b1c0  addiu       $v0, $v0, -0x4E40
    ctx->pc = 0x2361a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
label_2361a8:
    // 0x2361a8: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x2361a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2361ac:
    // 0x2361ac: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_2361b0:
    if (ctx->pc == 0x2361B0u) {
        ctx->pc = 0x2361B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2361ACu;
        // 0x2361b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2361B4u;
        goto label_2361b4;
    }
    ctx->pc = 0x2361ACu;
    {
        const bool branch_taken_0x2361ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2361B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2361ACu;
        // 0x2361b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2361ac) {
            ctx->pc = 0x2361D4u;
            goto label_2361d4;
        }
    }
    ctx->pc = 0x2361B4u;
label_2361b4:
    // 0x2361b4: 0xac520014  sw          $s2, 0x14($v0)
    ctx->pc = 0x2361b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 18));
label_2361b8:
    // 0x2361b8: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x2361b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
label_2361bc:
    // 0x2361bc: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x2361bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
label_2361c0:
    // 0x2361c0: 0xac540008  sw          $s4, 0x8($v0)
    ctx->pc = 0x2361c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 20));
label_2361c4:
    // 0x2361c4: 0xac55000c  sw          $s5, 0xC($v0)
    ctx->pc = 0x2361c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 21));
label_2361c8:
    // 0x2361c8: 0xc08d74c  jal         func_235D30
label_2361cc:
    if (ctx->pc == 0x2361CCu) {
        ctx->pc = 0x2361CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2361C8u;
        // 0x2361cc: 0xac560010  sw          $s6, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2361D0u;
        goto label_2361d0;
    }
    ctx->pc = 0x2361C8u;
    SET_GPR_U32(ctx, 31, 0x2361D0u);
    ctx->pc = 0x2361CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2361C8u;
    // 0x2361cc: 0xac560010  sw          $s6, 0x10($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235D30u;
    goto label_235d30;
    ctx->pc = 0x2361D0u;
label_2361d0:
    // 0x2361d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2361d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2361d4:
    // 0x2361d4: 0xc069210  jal         func_1A4840
label_2361d8:
    if (ctx->pc == 0x2361D8u) {
        ctx->pc = 0x2361D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2361D4u;
        // 0x2361d8: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2361DCu;
        goto label_2361dc;
    }
    ctx->pc = 0x2361D4u;
    SET_GPR_U32(ctx, 31, 0x2361DCu);
    ctx->pc = 0x2361D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2361D4u;
    // 0x2361d8: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x2361DCu;
label_2361dc:
    // 0x2361dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2361dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2361e0:
    // 0x2361e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2361e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2361e4:
    // 0x2361e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2361e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2361e8:
    // 0x2361e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2361e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2361ec:
    // 0x2361ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2361ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2361f0:
    // 0x2361f0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2361f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2361f4:
    // 0x2361f4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2361f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2361f8:
    // 0x2361f8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2361f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2361fc:
    // 0x2361fc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2361fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_236200:
    // 0x236200: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x236200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_236204:
    // 0x236204: 0x3e00008  jr          $ra
label_236208:
    if (ctx->pc == 0x236208u) {
        ctx->pc = 0x236208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236204u;
        // 0x236208: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23620Cu;
        goto label_23620c;
    }
    ctx->pc = 0x236204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236204u;
        // 0x236208: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23620Cu;
label_23620c:
    // 0x23620c: 0x0  nop
    ctx->pc = 0x23620cu;
    // NOP
label_236210:
    // 0x236210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x236210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_236214:
    // 0x236214: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x236214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_236218:
    // 0x236218: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x236218u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23621c:
    // 0x23621c: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x23621cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_236220:
    // 0x236220: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x236220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_236224:
    // 0x236224: 0x30b300ff  andi        $s3, $a1, 0xFF
    ctx->pc = 0x236224u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_236228:
    // 0x236228: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x236228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23622c:
    // 0x23622c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23622cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_236230:
    // 0x236230: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_236234:
    // 0x236234: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x236234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_236238:
    // 0x236238: 0xc08dbf8  jal         func_236FE0
label_23623c:
    if (ctx->pc == 0x23623Cu) {
        ctx->pc = 0x23623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236238u;
        // 0x23623c: 0x30d200ff  andi        $s2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x236240u;
        goto label_236240;
    }
    ctx->pc = 0x236238u;
    SET_GPR_U32(ctx, 31, 0x236240u);
    ctx->pc = 0x23623Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236238u;
    // 0x23623c: 0x30d200ff  andi        $s2, $a2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x236240u;
label_236240:
    // 0x236240: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_236244:
    if (ctx->pc == 0x236244u) {
        ctx->pc = 0x236244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236240u;
        // 0x236244: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236248u;
        goto label_236248;
    }
    ctx->pc = 0x236240u;
    {
        const bool branch_taken_0x236240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236240u;
        // 0x236244: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236240) {
            ctx->pc = 0x236288u;
            { ctx->pc = 0x236288; return; }
        }
    }
    ctx->pc = 0x236248u;
label_236248:
    // 0x236248: 0xc08d736  jal         func_235CD8
label_23624c:
    if (ctx->pc == 0x23624Cu) {
        ctx->pc = 0x236250u;
        goto label_236250;
    }
    ctx->pc = 0x236248u;
    SET_GPR_U32(ctx, 31, 0x236250u);
    ctx->pc = 0x235CD8u;
    goto label_235cd8;
    ctx->pc = 0x236250u;
label_236250:
    // 0x236250: 0x24050094  addiu       $a1, $zero, 0x94
    ctx->pc = 0x236250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
label_236254:
    // 0x236254: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236258:
    // 0x236258: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x236258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_23625c:
    // 0x23625c: 0x2442b1c0  addiu       $v0, $v0, -0x4E40
    ctx->pc = 0x23625cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
label_236260:
    // 0x236260: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x236260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_236264:
    // 0x236264: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_236268:
    if (ctx->pc == 0x236268u) {
        ctx->pc = 0x236268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236264u;
        // 0x236268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23626Cu;
        goto label_23626c;
    }
    ctx->pc = 0x236264u;
    {
        const bool branch_taken_0x236264 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x236268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236264u;
        // 0x236268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236264) {
            ctx->pc = 0x23627Cu;
            { ctx->pc = 0x23627c; return; }
        }
    }
    ctx->pc = 0x23626Cu;
label_23626c:
    // 0x23626c: 0xac520004  sw          $s2, 0x4($v0)
    ctx->pc = 0x23626cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
label_236270:
    // 0x236270: 0xc08d74c  jal         func_235D30
label_236274:
    if (ctx->pc == 0x236274u) {
        ctx->pc = 0x236274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236270u;
        // 0x236274: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236278u;
        { ctx->pc = 0x236278; return; }
    }
    ctx->pc = 0x236270u;
    SET_GPR_U32(ctx, 31, 0x236278u);
    ctx->pc = 0x236274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236270u;
    // 0x236274: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235D30u;
    goto label_235d30;
    ctx->pc = 0x236278u;
    ctx->pc = 0x236278u;
    return;
}

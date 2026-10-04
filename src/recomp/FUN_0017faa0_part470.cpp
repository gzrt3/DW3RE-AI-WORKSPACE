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

// Function: FUN_0017faa0
// Address: 0x17faa0 - 0x2bfb1c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017faa0_part470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x264ab0u: goto label_264ab0;
        case 0x264ab4u: goto label_264ab4;
        case 0x264ab8u: goto label_264ab8;
        case 0x264abcu: goto label_264abc;
        case 0x264ac0u: goto label_264ac0;
        case 0x264ac4u: goto label_264ac4;
        case 0x264ac8u: goto label_264ac8;
        case 0x264accu: goto label_264acc;
        case 0x264ad0u: goto label_264ad0;
        case 0x264ad4u: goto label_264ad4;
        case 0x264ad8u: goto label_264ad8;
        case 0x264adcu: goto label_264adc;
        case 0x264ae0u: goto label_264ae0;
        case 0x264ae4u: goto label_264ae4;
        case 0x264ae8u: goto label_264ae8;
        case 0x264aecu: goto label_264aec;
        case 0x264af0u: goto label_264af0;
        case 0x264af4u: goto label_264af4;
        case 0x264af8u: goto label_264af8;
        case 0x264afcu: goto label_264afc;
        case 0x264b00u: goto label_264b00;
        case 0x264b04u: goto label_264b04;
        case 0x264b08u: goto label_264b08;
        case 0x264b0cu: goto label_264b0c;
        case 0x264b10u: goto label_264b10;
        case 0x264b14u: goto label_264b14;
        case 0x264b18u: goto label_264b18;
        case 0x264b1cu: goto label_264b1c;
        case 0x264b20u: goto label_264b20;
        case 0x264b24u: goto label_264b24;
        case 0x264b28u: goto label_264b28;
        case 0x264b2cu: goto label_264b2c;
        case 0x264b30u: goto label_264b30;
        case 0x264b34u: goto label_264b34;
        case 0x264b38u: goto label_264b38;
        case 0x264b3cu: goto label_264b3c;
        case 0x264b40u: goto label_264b40;
        case 0x264b44u: goto label_264b44;
        case 0x264b48u: goto label_264b48;
        case 0x264b4cu: goto label_264b4c;
        case 0x264b50u: goto label_264b50;
        case 0x264b54u: goto label_264b54;
        case 0x264b58u: goto label_264b58;
        case 0x264b5cu: goto label_264b5c;
        case 0x264b60u: goto label_264b60;
        case 0x264b64u: goto label_264b64;
        case 0x264b68u: goto label_264b68;
        case 0x264b6cu: goto label_264b6c;
        case 0x264b70u: goto label_264b70;
        case 0x264b74u: goto label_264b74;
        case 0x264b78u: goto label_264b78;
        case 0x264b7cu: goto label_264b7c;
        case 0x264b80u: goto label_264b80;
        case 0x264b84u: goto label_264b84;
        case 0x264b88u: goto label_264b88;
        case 0x264b8cu: goto label_264b8c;
        case 0x264b90u: goto label_264b90;
        case 0x264b94u: goto label_264b94;
        case 0x264b98u: goto label_264b98;
        case 0x264b9cu: goto label_264b9c;
        case 0x264ba0u: goto label_264ba0;
        case 0x264ba4u: goto label_264ba4;
        case 0x264ba8u: goto label_264ba8;
        case 0x264bacu: goto label_264bac;
        case 0x264bb0u: goto label_264bb0;
        case 0x264bb4u: goto label_264bb4;
        case 0x264bb8u: goto label_264bb8;
        case 0x264bbcu: goto label_264bbc;
        case 0x264bc0u: goto label_264bc0;
        case 0x264bc4u: goto label_264bc4;
        case 0x264bc8u: goto label_264bc8;
        case 0x264bccu: goto label_264bcc;
        case 0x264bd0u: goto label_264bd0;
        case 0x264bd4u: goto label_264bd4;
        case 0x264bd8u: goto label_264bd8;
        case 0x264bdcu: goto label_264bdc;
        case 0x264be0u: goto label_264be0;
        case 0x264be4u: goto label_264be4;
        case 0x264be8u: goto label_264be8;
        case 0x264becu: goto label_264bec;
        case 0x264bf0u: goto label_264bf0;
        case 0x264bf4u: goto label_264bf4;
        case 0x264bf8u: goto label_264bf8;
        case 0x264bfcu: goto label_264bfc;
        case 0x264c00u: goto label_264c00;
        case 0x264c04u: goto label_264c04;
        case 0x264c08u: goto label_264c08;
        case 0x264c0cu: goto label_264c0c;
        case 0x264c10u: goto label_264c10;
        case 0x264c14u: goto label_264c14;
        case 0x264c18u: goto label_264c18;
        case 0x264c1cu: goto label_264c1c;
        case 0x264c20u: goto label_264c20;
        case 0x264c24u: goto label_264c24;
        case 0x264c28u: goto label_264c28;
        case 0x264c2cu: goto label_264c2c;
        case 0x264c30u: goto label_264c30;
        case 0x264c34u: goto label_264c34;
        case 0x264c38u: goto label_264c38;
        case 0x264c3cu: goto label_264c3c;
        case 0x264c40u: goto label_264c40;
        case 0x264c44u: goto label_264c44;
        case 0x264c48u: goto label_264c48;
        case 0x264c4cu: goto label_264c4c;
        case 0x264c50u: goto label_264c50;
        case 0x264c54u: goto label_264c54;
        case 0x264c58u: goto label_264c58;
        case 0x264c5cu: goto label_264c5c;
        case 0x264c60u: goto label_264c60;
        case 0x264c64u: goto label_264c64;
        case 0x264c68u: goto label_264c68;
        case 0x264c6cu: goto label_264c6c;
        case 0x264c70u: goto label_264c70;
        case 0x264c74u: goto label_264c74;
        case 0x264c78u: goto label_264c78;
        case 0x264c7cu: goto label_264c7c;
        case 0x264c80u: goto label_264c80;
        case 0x264c84u: goto label_264c84;
        case 0x264c88u: goto label_264c88;
        case 0x264c8cu: goto label_264c8c;
        case 0x264c90u: goto label_264c90;
        case 0x264c94u: goto label_264c94;
        case 0x264c98u: goto label_264c98;
        case 0x264c9cu: goto label_264c9c;
        case 0x264ca0u: goto label_264ca0;
        case 0x264ca4u: goto label_264ca4;
        case 0x264ca8u: goto label_264ca8;
        case 0x264cacu: goto label_264cac;
        case 0x264cb0u: goto label_264cb0;
        case 0x264cb4u: goto label_264cb4;
        case 0x264cb8u: goto label_264cb8;
        case 0x264cbcu: goto label_264cbc;
        case 0x264cc0u: goto label_264cc0;
        case 0x264cc4u: goto label_264cc4;
        case 0x264cc8u: goto label_264cc8;
        case 0x264cccu: goto label_264ccc;
        case 0x264cd0u: goto label_264cd0;
        case 0x264cd4u: goto label_264cd4;
        case 0x264cd8u: goto label_264cd8;
        case 0x264cdcu: goto label_264cdc;
        case 0x264ce0u: goto label_264ce0;
        case 0x264ce4u: goto label_264ce4;
        case 0x264ce8u: goto label_264ce8;
        case 0x264cecu: goto label_264cec;
        case 0x264cf0u: goto label_264cf0;
        case 0x264cf4u: goto label_264cf4;
        case 0x264cf8u: goto label_264cf8;
        case 0x264cfcu: goto label_264cfc;
        case 0x264d00u: goto label_264d00;
        case 0x264d04u: goto label_264d04;
        case 0x264d08u: goto label_264d08;
        case 0x264d0cu: goto label_264d0c;
        case 0x264d10u: goto label_264d10;
        case 0x264d14u: goto label_264d14;
        case 0x264d18u: goto label_264d18;
        case 0x264d1cu: goto label_264d1c;
        case 0x264d20u: goto label_264d20;
        case 0x264d24u: goto label_264d24;
        case 0x264d28u: goto label_264d28;
        case 0x264d2cu: goto label_264d2c;
        case 0x264d30u: goto label_264d30;
        case 0x264d34u: goto label_264d34;
        case 0x264d38u: goto label_264d38;
        case 0x264d3cu: goto label_264d3c;
        case 0x264d40u: goto label_264d40;
        case 0x264d44u: goto label_264d44;
        case 0x264d48u: goto label_264d48;
        case 0x264d4cu: goto label_264d4c;
        case 0x264d50u: goto label_264d50;
        case 0x264d54u: goto label_264d54;
        case 0x264d58u: goto label_264d58;
        case 0x264d5cu: goto label_264d5c;
        case 0x264d60u: goto label_264d60;
        case 0x264d64u: goto label_264d64;
        case 0x264d68u: goto label_264d68;
        case 0x264d6cu: goto label_264d6c;
        case 0x264d70u: goto label_264d70;
        case 0x264d74u: goto label_264d74;
        case 0x264d78u: goto label_264d78;
        case 0x264d7cu: goto label_264d7c;
        case 0x264d80u: goto label_264d80;
        case 0x264d84u: goto label_264d84;
        case 0x264d88u: goto label_264d88;
        case 0x264d8cu: goto label_264d8c;
        case 0x264d90u: goto label_264d90;
        case 0x264d94u: goto label_264d94;
        case 0x264d98u: goto label_264d98;
        case 0x264d9cu: goto label_264d9c;
        case 0x264da0u: goto label_264da0;
        case 0x264da4u: goto label_264da4;
        case 0x264da8u: goto label_264da8;
        case 0x264dacu: goto label_264dac;
        case 0x264db0u: goto label_264db0;
        case 0x264db4u: goto label_264db4;
        case 0x264db8u: goto label_264db8;
        case 0x264dbcu: goto label_264dbc;
        case 0x264dc0u: goto label_264dc0;
        case 0x264dc4u: goto label_264dc4;
        case 0x264dc8u: goto label_264dc8;
        case 0x264dccu: goto label_264dcc;
        case 0x264dd0u: goto label_264dd0;
        case 0x264dd4u: goto label_264dd4;
        case 0x264dd8u: goto label_264dd8;
        case 0x264ddcu: goto label_264ddc;
        case 0x264de0u: goto label_264de0;
        case 0x264de4u: goto label_264de4;
        case 0x264de8u: goto label_264de8;
        case 0x264decu: goto label_264dec;
        case 0x264df0u: goto label_264df0;
        case 0x264df4u: goto label_264df4;
        case 0x264df8u: goto label_264df8;
        case 0x264dfcu: goto label_264dfc;
        case 0x264e00u: goto label_264e00;
        case 0x264e04u: goto label_264e04;
        case 0x264e08u: goto label_264e08;
        case 0x264e0cu: goto label_264e0c;
        case 0x264e10u: goto label_264e10;
        case 0x264e14u: goto label_264e14;
        case 0x264e18u: goto label_264e18;
        case 0x264e1cu: goto label_264e1c;
        case 0x264e20u: goto label_264e20;
        case 0x264e24u: goto label_264e24;
        case 0x264e28u: goto label_264e28;
        case 0x264e2cu: goto label_264e2c;
        case 0x264e30u: goto label_264e30;
        case 0x264e34u: goto label_264e34;
        case 0x264e38u: goto label_264e38;
        case 0x264e3cu: goto label_264e3c;
        case 0x264e40u: goto label_264e40;
        case 0x264e44u: goto label_264e44;
        case 0x264e48u: goto label_264e48;
        case 0x264e4cu: goto label_264e4c;
        case 0x264e50u: goto label_264e50;
        case 0x264e54u: goto label_264e54;
        case 0x264e58u: goto label_264e58;
        case 0x264e5cu: goto label_264e5c;
        case 0x264e60u: goto label_264e60;
        case 0x264e64u: goto label_264e64;
        case 0x264e68u: goto label_264e68;
        case 0x264e6cu: goto label_264e6c;
        case 0x264e70u: goto label_264e70;
        case 0x264e74u: goto label_264e74;
        case 0x264e78u: goto label_264e78;
        case 0x264e7cu: goto label_264e7c;
        case 0x264e80u: goto label_264e80;
        case 0x264e84u: goto label_264e84;
        case 0x264e88u: goto label_264e88;
        case 0x264e8cu: goto label_264e8c;
        case 0x264e90u: goto label_264e90;
        case 0x264e94u: goto label_264e94;
        case 0x264e98u: goto label_264e98;
        case 0x264e9cu: goto label_264e9c;
        case 0x264ea0u: goto label_264ea0;
        case 0x264ea4u: goto label_264ea4;
        case 0x264ea8u: goto label_264ea8;
        case 0x264eacu: goto label_264eac;
        case 0x264eb0u: goto label_264eb0;
        case 0x264eb4u: goto label_264eb4;
        case 0x264eb8u: goto label_264eb8;
        case 0x264ebcu: goto label_264ebc;
        case 0x264ec0u: goto label_264ec0;
        case 0x264ec4u: goto label_264ec4;
        case 0x264ec8u: goto label_264ec8;
        case 0x264eccu: goto label_264ecc;
        case 0x264ed0u: goto label_264ed0;
        case 0x264ed4u: goto label_264ed4;
        case 0x264ed8u: goto label_264ed8;
        case 0x264edcu: goto label_264edc;
        case 0x264ee0u: goto label_264ee0;
        case 0x264ee4u: goto label_264ee4;
        case 0x264ee8u: goto label_264ee8;
        case 0x264eecu: goto label_264eec;
        case 0x264ef0u: goto label_264ef0;
        case 0x264ef4u: goto label_264ef4;
        case 0x264ef8u: goto label_264ef8;
        case 0x264efcu: goto label_264efc;
        case 0x264f00u: goto label_264f00;
        case 0x264f04u: goto label_264f04;
        case 0x264f08u: goto label_264f08;
        case 0x264f0cu: goto label_264f0c;
        case 0x264f10u: goto label_264f10;
        case 0x264f14u: goto label_264f14;
        case 0x264f18u: goto label_264f18;
        case 0x264f1cu: goto label_264f1c;
        case 0x264f20u: goto label_264f20;
        case 0x264f24u: goto label_264f24;
        case 0x264f28u: goto label_264f28;
        case 0x264f2cu: goto label_264f2c;
        case 0x264f30u: goto label_264f30;
        case 0x264f34u: goto label_264f34;
        case 0x264f38u: goto label_264f38;
        case 0x264f3cu: goto label_264f3c;
        case 0x264f40u: goto label_264f40;
        case 0x264f44u: goto label_264f44;
        case 0x264f48u: goto label_264f48;
        case 0x264f4cu: goto label_264f4c;
        case 0x264f50u: goto label_264f50;
        case 0x264f54u: goto label_264f54;
        case 0x264f58u: goto label_264f58;
        case 0x264f5cu: goto label_264f5c;
        case 0x264f60u: goto label_264f60;
        case 0x264f64u: goto label_264f64;
        case 0x264f68u: goto label_264f68;
        case 0x264f6cu: goto label_264f6c;
        case 0x264f70u: goto label_264f70;
        case 0x264f74u: goto label_264f74;
        case 0x264f78u: goto label_264f78;
        case 0x264f7cu: goto label_264f7c;
        case 0x264f80u: goto label_264f80;
        case 0x264f84u: goto label_264f84;
        case 0x264f88u: goto label_264f88;
        case 0x264f8cu: goto label_264f8c;
        case 0x264f90u: goto label_264f90;
        case 0x264f94u: goto label_264f94;
        case 0x264f98u: goto label_264f98;
        case 0x264f9cu: goto label_264f9c;
        case 0x264fa0u: goto label_264fa0;
        case 0x264fa4u: goto label_264fa4;
        case 0x264fa8u: goto label_264fa8;
        case 0x264facu: goto label_264fac;
        case 0x264fb0u: goto label_264fb0;
        case 0x264fb4u: goto label_264fb4;
        case 0x264fb8u: goto label_264fb8;
        case 0x264fbcu: goto label_264fbc;
        case 0x264fc0u: goto label_264fc0;
        case 0x264fc4u: goto label_264fc4;
        case 0x264fc8u: goto label_264fc8;
        case 0x264fccu: goto label_264fcc;
        case 0x264fd0u: goto label_264fd0;
        case 0x264fd4u: goto label_264fd4;
        case 0x264fd8u: goto label_264fd8;
        case 0x264fdcu: goto label_264fdc;
        case 0x264fe0u: goto label_264fe0;
        case 0x264fe4u: goto label_264fe4;
        case 0x264fe8u: goto label_264fe8;
        case 0x264fecu: goto label_264fec;
        case 0x264ff0u: goto label_264ff0;
        case 0x264ff4u: goto label_264ff4;
        case 0x264ff8u: goto label_264ff8;
        case 0x264ffcu: goto label_264ffc;
        case 0x265000u: goto label_265000;
        case 0x265004u: goto label_265004;
        case 0x265008u: goto label_265008;
        case 0x26500cu: goto label_26500c;
        case 0x265010u: goto label_265010;
        case 0x265014u: goto label_265014;
        case 0x265018u: goto label_265018;
        case 0x26501cu: goto label_26501c;
        case 0x265020u: goto label_265020;
        case 0x265024u: goto label_265024;
        case 0x265028u: goto label_265028;
        case 0x26502cu: goto label_26502c;
        case 0x265030u: goto label_265030;
        case 0x265034u: goto label_265034;
        case 0x265038u: goto label_265038;
        case 0x26503cu: goto label_26503c;
        case 0x265040u: goto label_265040;
        case 0x265044u: goto label_265044;
        case 0x265048u: goto label_265048;
        case 0x26504cu: goto label_26504c;
        case 0x265050u: goto label_265050;
        case 0x265054u: goto label_265054;
        case 0x265058u: goto label_265058;
        case 0x26505cu: goto label_26505c;
        case 0x265060u: goto label_265060;
        case 0x265064u: goto label_265064;
        case 0x265068u: goto label_265068;
        case 0x26506cu: goto label_26506c;
        case 0x265070u: goto label_265070;
        case 0x265074u: goto label_265074;
        case 0x265078u: goto label_265078;
        case 0x26507cu: goto label_26507c;
        case 0x265080u: goto label_265080;
        case 0x265084u: goto label_265084;
        case 0x265088u: goto label_265088;
        case 0x26508cu: goto label_26508c;
        case 0x265090u: goto label_265090;
        case 0x265094u: goto label_265094;
        case 0x265098u: goto label_265098;
        case 0x26509cu: goto label_26509c;
        case 0x2650a0u: goto label_2650a0;
        case 0x2650a4u: goto label_2650a4;
        case 0x2650a8u: goto label_2650a8;
        case 0x2650acu: goto label_2650ac;
        case 0x2650b0u: goto label_2650b0;
        case 0x2650b4u: goto label_2650b4;
        case 0x2650b8u: goto label_2650b8;
        case 0x2650bcu: goto label_2650bc;
        case 0x2650c0u: goto label_2650c0;
        case 0x2650c4u: goto label_2650c4;
        case 0x2650c8u: goto label_2650c8;
        case 0x2650ccu: goto label_2650cc;
        case 0x2650d0u: goto label_2650d0;
        case 0x2650d4u: goto label_2650d4;
        case 0x2650d8u: goto label_2650d8;
        case 0x2650dcu: goto label_2650dc;
        case 0x2650e0u: goto label_2650e0;
        case 0x2650e4u: goto label_2650e4;
        case 0x2650e8u: goto label_2650e8;
        case 0x2650ecu: goto label_2650ec;
        case 0x2650f0u: goto label_2650f0;
        case 0x2650f4u: goto label_2650f4;
        case 0x2650f8u: goto label_2650f8;
        case 0x2650fcu: goto label_2650fc;
        case 0x265100u: goto label_265100;
        case 0x265104u: goto label_265104;
        case 0x265108u: goto label_265108;
        case 0x26510cu: goto label_26510c;
        case 0x265110u: goto label_265110;
        case 0x265114u: goto label_265114;
        case 0x265118u: goto label_265118;
        case 0x26511cu: goto label_26511c;
        case 0x265120u: goto label_265120;
        case 0x265124u: goto label_265124;
        case 0x265128u: goto label_265128;
        case 0x26512cu: goto label_26512c;
        case 0x265130u: goto label_265130;
        case 0x265134u: goto label_265134;
        case 0x265138u: goto label_265138;
        case 0x26513cu: goto label_26513c;
        case 0x265140u: goto label_265140;
        case 0x265144u: goto label_265144;
        case 0x265148u: goto label_265148;
        case 0x26514cu: goto label_26514c;
        case 0x265150u: goto label_265150;
        case 0x265154u: goto label_265154;
        case 0x265158u: goto label_265158;
        case 0x26515cu: goto label_26515c;
        case 0x265160u: goto label_265160;
        case 0x265164u: goto label_265164;
        case 0x265168u: goto label_265168;
        case 0x26516cu: goto label_26516c;
        case 0x265170u: goto label_265170;
        case 0x265174u: goto label_265174;
        case 0x265178u: goto label_265178;
        case 0x26517cu: goto label_26517c;
        case 0x265180u: goto label_265180;
        case 0x265184u: goto label_265184;
        case 0x265188u: goto label_265188;
        case 0x26518cu: goto label_26518c;
        case 0x265190u: goto label_265190;
        case 0x265194u: goto label_265194;
        case 0x265198u: goto label_265198;
        case 0x26519cu: goto label_26519c;
        case 0x2651a0u: goto label_2651a0;
        case 0x2651a4u: goto label_2651a4;
        case 0x2651a8u: goto label_2651a8;
        case 0x2651acu: goto label_2651ac;
        case 0x2651b0u: goto label_2651b0;
        case 0x2651b4u: goto label_2651b4;
        case 0x2651b8u: goto label_2651b8;
        case 0x2651bcu: goto label_2651bc;
        case 0x2651c0u: goto label_2651c0;
        case 0x2651c4u: goto label_2651c4;
        case 0x2651c8u: goto label_2651c8;
        case 0x2651ccu: goto label_2651cc;
        case 0x2651d0u: goto label_2651d0;
        case 0x2651d4u: goto label_2651d4;
        case 0x2651d8u: goto label_2651d8;
        case 0x2651dcu: goto label_2651dc;
        case 0x2651e0u: goto label_2651e0;
        case 0x2651e4u: goto label_2651e4;
        case 0x2651e8u: goto label_2651e8;
        case 0x2651ecu: goto label_2651ec;
        case 0x2651f0u: goto label_2651f0;
        case 0x2651f4u: goto label_2651f4;
        case 0x2651f8u: goto label_2651f8;
        case 0x2651fcu: goto label_2651fc;
        case 0x265200u: goto label_265200;
        case 0x265204u: goto label_265204;
        case 0x265208u: goto label_265208;
        case 0x26520cu: goto label_26520c;
        case 0x265210u: goto label_265210;
        case 0x265214u: goto label_265214;
        case 0x265218u: goto label_265218;
        case 0x26521cu: goto label_26521c;
        case 0x265220u: goto label_265220;
        case 0x265224u: goto label_265224;
        case 0x265228u: goto label_265228;
        case 0x26522cu: goto label_26522c;
        case 0x265230u: goto label_265230;
        case 0x265234u: goto label_265234;
        case 0x265238u: goto label_265238;
        case 0x26523cu: goto label_26523c;
        case 0x265240u: goto label_265240;
        case 0x265244u: goto label_265244;
        case 0x265248u: goto label_265248;
        case 0x26524cu: goto label_26524c;
        case 0x265250u: goto label_265250;
        case 0x265254u: goto label_265254;
        case 0x265258u: goto label_265258;
        case 0x26525cu: goto label_26525c;
        case 0x265260u: goto label_265260;
        case 0x265264u: goto label_265264;
        case 0x265268u: goto label_265268;
        case 0x26526cu: goto label_26526c;
        case 0x265270u: goto label_265270;
        case 0x265274u: goto label_265274;
        case 0x265278u: goto label_265278;
        case 0x26527cu: goto label_26527c;
        default: return;
    }

label_264ab0:
    // 0x264ab0: 0xf2f6  tne         $zero, $zero, 971
    ctx->pc = 0x264ab0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264ab4:
    // 0x264ab4: 0x97c0  sll         $s2, $zero, 31
    ctx->pc = 0x264ab4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_264ab8:
    // 0x264ab8: 0x0  nop
    ctx->pc = 0x264ab8u;
    // NOP
label_264abc:
    // 0x264abc: 0x0  nop
    ctx->pc = 0x264abcu;
    // NOP
label_264ac0:
    // 0x264ac0: 0xf309  .word       0x0000F309                   # jalr        $fp, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
label_264ac4:
    if (ctx->pc == 0x264AC4u) {
        ctx->pc = 0x264AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264AC0u;
        // 0x264ac4: 0x7dd0  .word       0x00007DD0                   # mfhi        $t7 # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 15, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x264AC8u;
        goto label_264ac8;
    }
    ctx->pc = 0x264AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 30, 0x264AC8u);
        ctx->pc = 0x264AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264AC0u;
        // 0x264ac4: 0x7dd0  .word       0x00007DD0                   # mfhi        $t7 # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 15, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264AC0u, 0x264AC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x264AC8u;
label_264ac8:
    // 0x264ac8: 0x0  nop
    ctx->pc = 0x264ac8u;
    // NOP
label_264acc:
    // 0x264acc: 0x0  nop
    ctx->pc = 0x264accu;
    // NOP
label_264ad0:
    // 0x264ad0: 0xf319  .word       0x0000F319                   # multu       $zero, $zero # 0000F300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ad0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_264ad4:
    // 0x264ad4: 0xac90  .word       0x0000AC90                   # mfhi        $s5 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ad4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_264ad8:
    // 0x264ad8: 0x0  nop
    ctx->pc = 0x264ad8u;
    // NOP
label_264adc:
    // 0x264adc: 0x0  nop
    ctx->pc = 0x264adcu;
    // NOP
label_264ae0:
    // 0x264ae0: 0xf32f  .word       0x0000F32F                   # dsubu       $fp, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ae0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_264ae4:
    // 0x264ae4: 0x4960  .word       0x00004960                   # add         $t1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ae4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_264ae8:
    // 0x264ae8: 0x0  nop
    ctx->pc = 0x264ae8u;
    // NOP
label_264aec:
    // 0x264aec: 0x0  nop
    ctx->pc = 0x264aecu;
    // NOP
label_264af0:
    // 0x264af0: 0xf339  .word       0x0000F339                   # INVALID     $zero, $zero, -0xCC7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264af0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x264AF0 raw=0x0000F339"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264af4:
    // 0x264af4: 0x6450  .word       0x00006450                   # mfhi        $t4 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264af4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_264af8:
    // 0x264af8: 0x0  nop
    ctx->pc = 0x264af8u;
    // NOP
label_264afc:
    // 0x264afc: 0x0  nop
    ctx->pc = 0x264afcu;
    // NOP
label_264b00:
    // 0x264b00: 0xf346  .word       0x0000F346                   # srlv        $fp, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264b00u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_264b04:
    // 0x264b04: 0x48e0  .word       0x000048E0                   # add         $t1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264b04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_264b08:
    // 0x264b08: 0x0  nop
    ctx->pc = 0x264b08u;
    // NOP
label_264b0c:
    // 0x264b0c: 0x0  nop
    ctx->pc = 0x264b0cu;
    // NOP
label_264b10:
    // 0x264b10: 0xf350  .word       0x0000F350                   # mfhi        $fp # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264b10u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_264b14:
    // 0x264b14: 0x4690  .word       0x00004690                   # mfhi        $t0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264b14u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_264b18:
    // 0x264b18: 0x0  nop
    ctx->pc = 0x264b18u;
    // NOP
label_264b1c:
    // 0x264b1c: 0x0  nop
    ctx->pc = 0x264b1cu;
    // NOP
label_264b20:
    // 0x264b20: 0xf359  .word       0x0000F359                   # multu       $zero, $zero # 0000F340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264b20u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_264b24:
    // 0x264b24: 0x85d0  .word       0x000085D0                   # mfhi        $s0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264b24u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_264b28:
    // 0x264b28: 0x0  nop
    ctx->pc = 0x264b28u;
    // NOP
label_264b2c:
    // 0x264b2c: 0x0  nop
    ctx->pc = 0x264b2cu;
    // NOP
label_264b30:
    // 0x264b30: 0xf36a  .word       0x0000F36A                   # slt         $fp, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264b30u;
    SET_GPR_U64(ctx, 30, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_264b34:
    // 0x264b34: 0x5000  sll         $t2, $zero, 0
    ctx->pc = 0x264b34u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_264b38:
    // 0x264b38: 0x0  nop
    ctx->pc = 0x264b38u;
    // NOP
label_264b3c:
    // 0x264b3c: 0x0  nop
    ctx->pc = 0x264b3cu;
    // NOP
label_264b40:
    // 0x264b40: 0xf374  teq         $zero, $zero, 973
    ctx->pc = 0x264b40u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264b44:
    // 0x264b44: 0x66a0  .word       0x000066A0                   # add         $t4, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264b44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_264b48:
    // 0x264b48: 0x0  nop
    ctx->pc = 0x264b48u;
    // NOP
label_264b4c:
    // 0x264b4c: 0x0  nop
    ctx->pc = 0x264b4cu;
    // NOP
label_264b50:
    // 0x264b50: 0xf381  .word       0x0000F381                   # INVALID     $zero, $zero, -0xC7F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264b50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x264B50 raw=0x0000F381"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264b54:
    // 0x264b54: 0x8650  .word       0x00008650                   # mfhi        $s0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264b54u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_264b58:
    // 0x264b58: 0x0  nop
    ctx->pc = 0x264b58u;
    // NOP
label_264b5c:
    // 0x264b5c: 0x0  nop
    ctx->pc = 0x264b5cu;
    // NOP
label_264b60:
    // 0x264b60: 0xf392  .word       0x0000F392                   # mflo        $fp # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264b60u;
    SET_GPR_U64(ctx, 30, ctx->lo);
label_264b64:
    // 0x264b64: 0x6450  .word       0x00006450                   # mfhi        $t4 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264b64u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_264b68:
    // 0x264b68: 0x0  nop
    ctx->pc = 0x264b68u;
    // NOP
label_264b6c:
    // 0x264b6c: 0x0  nop
    ctx->pc = 0x264b6cu;
    // NOP
label_264b70:
    // 0x264b70: 0xf39f  .word       0x0000F39F                   # ddivu       $fp, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264b70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x264B70 raw=0x0000F39F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264b74:
    // 0x264b74: 0x4e90  .word       0x00004E90                   # mfhi        $t1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264b74u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_264b78:
    // 0x264b78: 0x0  nop
    ctx->pc = 0x264b78u;
    // NOP
label_264b7c:
    // 0x264b7c: 0x0  nop
    ctx->pc = 0x264b7cu;
    // NOP
label_264b80:
    // 0x264b80: 0xf3a9  .word       0x0000F3A9                   # mtsa        $zero # 0000F380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x264b80u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_264b84:
    // 0x264b84: 0x4bc0  sll         $t1, $zero, 15
    ctx->pc = 0x264b84u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_264b88:
    // 0x264b88: 0x0  nop
    ctx->pc = 0x264b88u;
    // NOP
label_264b8c:
    // 0x264b8c: 0x0  nop
    ctx->pc = 0x264b8cu;
    // NOP
label_264b90:
    // 0x264b90: 0xf3b3  tltu        $zero, $zero, 974
    ctx->pc = 0x264b90u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264b94:
    // 0x264b94: 0x4a50  .word       0x00004A50                   # mfhi        $t1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264b94u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_264b98:
    // 0x264b98: 0x0  nop
    ctx->pc = 0x264b98u;
    // NOP
label_264b9c:
    // 0x264b9c: 0x0  nop
    ctx->pc = 0x264b9cu;
    // NOP
label_264ba0:
    // 0x264ba0: 0xf3bd  .word       0x0000F3BD                   # INVALID     $zero, $zero, -0xC43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ba0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x264BA0 raw=0x0000F3BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264ba4:
    // 0x264ba4: 0x4520  .word       0x00004520                   # add         $t0, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ba4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_264ba8:
    // 0x264ba8: 0x0  nop
    ctx->pc = 0x264ba8u;
    // NOP
label_264bac:
    // 0x264bac: 0x0  nop
    ctx->pc = 0x264bacu;
    // NOP
label_264bb0:
    // 0x264bb0: 0xf3c6  .word       0x0000F3C6                   # srlv        $fp, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264bb0u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_264bb4:
    // 0x264bb4: 0x6450  .word       0x00006450                   # mfhi        $t4 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264bb4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_264bb8:
    // 0x264bb8: 0x0  nop
    ctx->pc = 0x264bb8u;
    // NOP
label_264bbc:
    // 0x264bbc: 0x0  nop
    ctx->pc = 0x264bbcu;
    // NOP
label_264bc0:
    // 0x264bc0: 0xf3d3  .word       0x0000F3D3                   # mtlo        $zero # 0000F3C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264bc0u;
    ctx->lo = GPR_U64(ctx, 0);
label_264bc4:
    // 0x264bc4: 0x5d30  tge         $zero, $zero, 372
    ctx->pc = 0x264bc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264bc8:
    // 0x264bc8: 0x0  nop
    ctx->pc = 0x264bc8u;
    // NOP
label_264bcc:
    // 0x264bcc: 0x0  nop
    ctx->pc = 0x264bccu;
    // NOP
label_264bd0:
    // 0x264bd0: 0xf3df  .word       0x0000F3DF                   # ddivu       $fp, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264bd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x264BD0 raw=0x0000F3DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264bd4:
    // 0x264bd4: 0x7890  .word       0x00007890                   # mfhi        $t7 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264bd4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_264bd8:
    // 0x264bd8: 0x0  nop
    ctx->pc = 0x264bd8u;
    // NOP
label_264bdc:
    // 0x264bdc: 0x0  nop
    ctx->pc = 0x264bdcu;
    // NOP
label_264be0:
    // 0x264be0: 0xf3ef  .word       0x0000F3EF                   # dsubu       $fp, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264be0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_264be4:
    // 0x264be4: 0x6b30  tge         $zero, $zero, 428
    ctx->pc = 0x264be4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264be8:
    // 0x264be8: 0x0  nop
    ctx->pc = 0x264be8u;
    // NOP
label_264bec:
    // 0x264bec: 0x0  nop
    ctx->pc = 0x264becu;
    // NOP
label_264bf0:
    // 0x264bf0: 0xf3fd  .word       0x0000F3FD                   # INVALID     $zero, $zero, -0xC03 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264bf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x264BF0 raw=0x0000F3FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264bf4:
    // 0x264bf4: 0x7510  .word       0x00007510                   # mfhi        $t6 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264bf4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_264bf8:
    // 0x264bf8: 0x0  nop
    ctx->pc = 0x264bf8u;
    // NOP
label_264bfc:
    // 0x264bfc: 0x0  nop
    ctx->pc = 0x264bfcu;
    // NOP
label_264c00:
    // 0x264c00: 0xf40c  syscall     976
    ctx->pc = 0x264c00u;
    ctx->pc = 0x264C04u;
runtime->handleSyscall(rdram, ctx, 0x3D0u);
label_264c04:
    // 0x264c04: 0xa930  tge         $zero, $zero, 676
    ctx->pc = 0x264c04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264c08:
    // 0x264c08: 0x0  nop
    ctx->pc = 0x264c08u;
    // NOP
label_264c0c:
    // 0x264c0c: 0x0  nop
    ctx->pc = 0x264c0cu;
    // NOP
label_264c10:
    // 0x264c10: 0xf422  .word       0x0000F422                   # neg         $fp, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264c10u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
label_264c14:
    // 0x264c14: 0x5ac0  sll         $t3, $zero, 11
    ctx->pc = 0x264c14u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_264c18:
    // 0x264c18: 0x0  nop
    ctx->pc = 0x264c18u;
    // NOP
label_264c1c:
    // 0x264c1c: 0x0  nop
    ctx->pc = 0x264c1cu;
    // NOP
label_264c20:
    // 0x264c20: 0xf42e  .word       0x0000F42E                   # dsub        $fp, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264c20u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 30, r); }
label_264c24:
    // 0x264c24: 0x7d10  .word       0x00007D10                   # mfhi        $t7 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264c24u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_264c28:
    // 0x264c28: 0x0  nop
    ctx->pc = 0x264c28u;
    // NOP
label_264c2c:
    // 0x264c2c: 0x0  nop
    ctx->pc = 0x264c2cu;
    // NOP
label_264c30:
    // 0x264c30: 0xf43e  dsrl32      $fp, $zero, 16
    ctx->pc = 0x264c30u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) >> (32 + 16));
label_264c34:
    // 0x264c34: 0x6700  sll         $t4, $zero, 28
    ctx->pc = 0x264c34u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_264c38:
    // 0x264c38: 0x0  nop
    ctx->pc = 0x264c38u;
    // NOP
label_264c3c:
    // 0x264c3c: 0x0  nop
    ctx->pc = 0x264c3cu;
    // NOP
label_264c40:
    // 0x264c40: 0xf44b  .word       0x0000F44B                   # movn        $fp, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264c40u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 0));
label_264c44:
    // 0x264c44: 0x6770  tge         $zero, $zero, 413
    ctx->pc = 0x264c44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264c48:
    // 0x264c48: 0x0  nop
    ctx->pc = 0x264c48u;
    // NOP
label_264c4c:
    // 0x264c4c: 0x0  nop
    ctx->pc = 0x264c4cu;
    // NOP
label_264c50:
    // 0x264c50: 0xf458  .word       0x0000F458                   # mult        $fp, $zero, $zero # 00000440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x264c50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_264c54:
    // 0x264c54: 0x6420  .word       0x00006420                   # add         $t4, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264c54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_264c58:
    // 0x264c58: 0x0  nop
    ctx->pc = 0x264c58u;
    // NOP
label_264c5c:
    // 0x264c5c: 0x0  nop
    ctx->pc = 0x264c5cu;
    // NOP
label_264c60:
    // 0x264c60: 0xf465  .word       0x0000F465                   # move        $fp, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264c60u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_264c64:
    // 0x264c64: 0x43c0  sll         $t0, $zero, 15
    ctx->pc = 0x264c64u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_264c68:
    // 0x264c68: 0x0  nop
    ctx->pc = 0x264c68u;
    // NOP
label_264c6c:
    // 0x264c6c: 0x0  nop
    ctx->pc = 0x264c6cu;
    // NOP
label_264c70:
    // 0x264c70: 0xf46e  .word       0x0000F46E                   # dsub        $fp, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264c70u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 30, r); }
label_264c74:
    // 0x264c74: 0x79c0  sll         $t7, $zero, 7
    ctx->pc = 0x264c74u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_264c78:
    // 0x264c78: 0x0  nop
    ctx->pc = 0x264c78u;
    // NOP
label_264c7c:
    // 0x264c7c: 0x0  nop
    ctx->pc = 0x264c7cu;
    // NOP
label_264c80:
    // 0x264c80: 0xf47e  dsrl32      $fp, $zero, 17
    ctx->pc = 0x264c80u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) >> (32 + 17));
label_264c84:
    // 0x264c84: 0xa750  .word       0x0000A750                   # mfhi        $s4 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264c84u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_264c88:
    // 0x264c88: 0x0  nop
    ctx->pc = 0x264c88u;
    // NOP
label_264c8c:
    // 0x264c8c: 0x0  nop
    ctx->pc = 0x264c8cu;
    // NOP
label_264c90:
    // 0x264c90: 0xf493  .word       0x0000F493                   # mtlo        $zero # 0000F480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264c90u;
    ctx->lo = GPR_U64(ctx, 0);
label_264c94:
    // 0x264c94: 0x4000  sll         $t0, $zero, 0
    ctx->pc = 0x264c94u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_264c98:
    // 0x264c98: 0x0  nop
    ctx->pc = 0x264c98u;
    // NOP
label_264c9c:
    // 0x264c9c: 0x0  nop
    ctx->pc = 0x264c9cu;
    // NOP
label_264ca0:
    // 0x264ca0: 0xf49b  .word       0x0000F49B                   # divu        $fp, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ca0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_264ca4:
    // 0x264ca4: 0x5070  tge         $zero, $zero, 321
    ctx->pc = 0x264ca4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264ca8:
    // 0x264ca8: 0x0  nop
    ctx->pc = 0x264ca8u;
    // NOP
label_264cac:
    // 0x264cac: 0x0  nop
    ctx->pc = 0x264cacu;
    // NOP
label_264cb0:
    // 0x264cb0: 0xf4a6  .word       0x0000F4A6                   # xor         $fp, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264cb0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_264cb4:
    // 0x264cb4: 0x7d80  sll         $t7, $zero, 22
    ctx->pc = 0x264cb4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_264cb8:
    // 0x264cb8: 0x0  nop
    ctx->pc = 0x264cb8u;
    // NOP
label_264cbc:
    // 0x264cbc: 0x0  nop
    ctx->pc = 0x264cbcu;
    // NOP
label_264cc0:
    // 0x264cc0: 0xf4b6  tne         $zero, $zero, 978
    ctx->pc = 0x264cc0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264cc4:
    // 0x264cc4: 0x5690  .word       0x00005690                   # mfhi        $t2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264cc4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_264cc8:
    // 0x264cc8: 0x0  nop
    ctx->pc = 0x264cc8u;
    // NOP
label_264ccc:
    // 0x264ccc: 0x0  nop
    ctx->pc = 0x264cccu;
    // NOP
label_264cd0:
    // 0x264cd0: 0xf4c1  .word       0x0000F4C1                   # INVALID     $zero, $zero, -0xB3F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264cd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x264CD0 raw=0x0000F4C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264cd4:
    // 0x264cd4: 0x4780  sll         $t0, $zero, 30
    ctx->pc = 0x264cd4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_264cd8:
    // 0x264cd8: 0x0  nop
    ctx->pc = 0x264cd8u;
    // NOP
label_264cdc:
    // 0x264cdc: 0x0  nop
    ctx->pc = 0x264cdcu;
    // NOP
label_264ce0:
    // 0x264ce0: 0xf4ca  .word       0x0000F4CA                   # movz        $fp, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ce0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 0));
label_264ce4:
    // 0x264ce4: 0x6590  .word       0x00006590                   # mfhi        $t4 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ce4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_264ce8:
    // 0x264ce8: 0x0  nop
    ctx->pc = 0x264ce8u;
    // NOP
label_264cec:
    // 0x264cec: 0x0  nop
    ctx->pc = 0x264cecu;
    // NOP
label_264cf0:
    // 0x264cf0: 0xf4d7  .word       0x0000F4D7                   # dsrav       $fp, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264cf0u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_264cf4:
    // 0x264cf4: 0x7150  .word       0x00007150                   # mfhi        $t6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264cf4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_264cf8:
    // 0x264cf8: 0x0  nop
    ctx->pc = 0x264cf8u;
    // NOP
label_264cfc:
    // 0x264cfc: 0x0  nop
    ctx->pc = 0x264cfcu;
    // NOP
label_264d00:
    // 0x264d00: 0xf4e6  .word       0x0000F4E6                   # xor         $fp, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264d00u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_264d04:
    // 0x264d04: 0xdf30  tge         $zero, $zero, 892
    ctx->pc = 0x264d04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264d08:
    // 0x264d08: 0x0  nop
    ctx->pc = 0x264d08u;
    // NOP
label_264d0c:
    // 0x264d0c: 0x0  nop
    ctx->pc = 0x264d0cu;
    // NOP
label_264d10:
    // 0x264d10: 0xf502  srl         $fp, $zero, 20
    ctx->pc = 0x264d10u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 0), 20));
label_264d14:
    // 0x264d14: 0xac80  sll         $s5, $zero, 18
    ctx->pc = 0x264d14u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_264d18:
    // 0x264d18: 0x0  nop
    ctx->pc = 0x264d18u;
    // NOP
label_264d1c:
    // 0x264d1c: 0x0  nop
    ctx->pc = 0x264d1cu;
    // NOP
label_264d20:
    // 0x264d20: 0xf518  .word       0x0000F518                   # mult        $fp, $zero, $zero # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x264d20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_264d24:
    // 0x264d24: 0x8ba0  .word       0x00008BA0                   # add         $s1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264d24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_264d28:
    // 0x264d28: 0x0  nop
    ctx->pc = 0x264d28u;
    // NOP
label_264d2c:
    // 0x264d2c: 0x0  nop
    ctx->pc = 0x264d2cu;
    // NOP
label_264d30:
    // 0x264d30: 0xf52a  .word       0x0000F52A                   # slt         $fp, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264d30u;
    SET_GPR_U64(ctx, 30, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_264d34:
    // 0x264d34: 0x6f30  tge         $zero, $zero, 444
    ctx->pc = 0x264d34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264d38:
    // 0x264d38: 0x0  nop
    ctx->pc = 0x264d38u;
    // NOP
label_264d3c:
    // 0x264d3c: 0x0  nop
    ctx->pc = 0x264d3cu;
    // NOP
label_264d40:
    // 0x264d40: 0xf538  dsll        $fp, $zero, 20
    ctx->pc = 0x264d40u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) << 20);
label_264d44:
    // 0x264d44: 0x4f00  sll         $t1, $zero, 28
    ctx->pc = 0x264d44u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_264d48:
    // 0x264d48: 0x0  nop
    ctx->pc = 0x264d48u;
    // NOP
label_264d4c:
    // 0x264d4c: 0x0  nop
    ctx->pc = 0x264d4cu;
    // NOP
label_264d50:
    // 0x264d50: 0xf542  srl         $fp, $zero, 21
    ctx->pc = 0x264d50u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 0), 21));
label_264d54:
    // 0x264d54: 0x63b0  tge         $zero, $zero, 398
    ctx->pc = 0x264d54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264d58:
    // 0x264d58: 0x0  nop
    ctx->pc = 0x264d58u;
    // NOP
label_264d5c:
    // 0x264d5c: 0x0  nop
    ctx->pc = 0x264d5cu;
    // NOP
label_264d60:
    // 0x264d60: 0xf54f  .word       0x0000F54F                   # sync.p # 0000F000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264d60u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_264d64:
    // 0x264d64: 0x64e0  .word       0x000064E0                   # add         $t4, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264d64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_264d68:
    // 0x264d68: 0x0  nop
    ctx->pc = 0x264d68u;
    // NOP
label_264d6c:
    // 0x264d6c: 0x0  nop
    ctx->pc = 0x264d6cu;
    // NOP
label_264d70:
    // 0x264d70: 0xf55c  .word       0x0000F55C                   # dmult       $zero, $zero # 0000F540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264d70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x264D70 raw=0x0000F55C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264d74:
    // 0x264d74: 0x6020  add         $t4, $zero, $zero
    ctx->pc = 0x264d74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_264d78:
    // 0x264d78: 0x0  nop
    ctx->pc = 0x264d78u;
    // NOP
label_264d7c:
    // 0x264d7c: 0x0  nop
    ctx->pc = 0x264d7cu;
    // NOP
label_264d80:
    // 0x264d80: 0xf569  .word       0x0000F569                   # mtsa        $zero # 0000F540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x264d80u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_264d84:
    // 0x264d84: 0x7c30  tge         $zero, $zero, 496
    ctx->pc = 0x264d84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264d88:
    // 0x264d88: 0x0  nop
    ctx->pc = 0x264d88u;
    // NOP
label_264d8c:
    // 0x264d8c: 0x0  nop
    ctx->pc = 0x264d8cu;
    // NOP
label_264d90:
    // 0x264d90: 0xf579  .word       0x0000F579                   # INVALID     $zero, $zero, -0xA87 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264d90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x264D90 raw=0x0000F579"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264d94:
    // 0x264d94: 0xb240  sll         $s6, $zero, 9
    ctx->pc = 0x264d94u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_264d98:
    // 0x264d98: 0x0  nop
    ctx->pc = 0x264d98u;
    // NOP
label_264d9c:
    // 0x264d9c: 0x0  nop
    ctx->pc = 0x264d9cu;
    // NOP
label_264da0:
    // 0x264da0: 0xf590  .word       0x0000F590                   # mfhi        $fp # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264da0u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_264da4:
    // 0x264da4: 0x6080  sll         $t4, $zero, 2
    ctx->pc = 0x264da4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_264da8:
    // 0x264da8: 0x0  nop
    ctx->pc = 0x264da8u;
    // NOP
label_264dac:
    // 0x264dac: 0x0  nop
    ctx->pc = 0x264dacu;
    // NOP
label_264db0:
    // 0x264db0: 0xf59d  .word       0x0000F59D                   # dmultu      $zero, $zero # 0000F580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264db0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x264DB0 raw=0x0000F59D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264db4:
    // 0x264db4: 0x74b0  tge         $zero, $zero, 466
    ctx->pc = 0x264db4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264db8:
    // 0x264db8: 0x0  nop
    ctx->pc = 0x264db8u;
    // NOP
label_264dbc:
    // 0x264dbc: 0x0  nop
    ctx->pc = 0x264dbcu;
    // NOP
label_264dc0:
    // 0x264dc0: 0xf5ac  .word       0x0000F5AC                   # dadd        $fp, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264dc0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 30, r); }
label_264dc4:
    // 0x264dc4: 0x82e0  .word       0x000082E0                   # add         $s0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264dc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_264dc8:
    // 0x264dc8: 0x0  nop
    ctx->pc = 0x264dc8u;
    // NOP
label_264dcc:
    // 0x264dcc: 0x0  nop
    ctx->pc = 0x264dccu;
    // NOP
label_264dd0:
    // 0x264dd0: 0xf5bd  .word       0x0000F5BD                   # INVALID     $zero, $zero, -0xA43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264dd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x264DD0 raw=0x0000F5BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264dd4:
    // 0x264dd4: 0x5aa0  .word       0x00005AA0                   # add         $t3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264dd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_264dd8:
    // 0x264dd8: 0x0  nop
    ctx->pc = 0x264dd8u;
    // NOP
label_264ddc:
    // 0x264ddc: 0x0  nop
    ctx->pc = 0x264ddcu;
    // NOP
label_264de0:
    // 0x264de0: 0xf5c9  .word       0x0000F5C9                   # jalr        $fp, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
label_264de4:
    if (ctx->pc == 0x264DE4u) {
        ctx->pc = 0x264DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264DE0u;
        // 0x264de4: 0x4220  .word       0x00004220                   # add         $t0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x264DE8u;
        goto label_264de8;
    }
    ctx->pc = 0x264DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 30, 0x264DE8u);
        ctx->pc = 0x264DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264DE0u;
        // 0x264de4: 0x4220  .word       0x00004220                   # add         $t0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264DE0u, 0x264DE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x264DE8u;
label_264de8:
    // 0x264de8: 0x0  nop
    ctx->pc = 0x264de8u;
    // NOP
label_264dec:
    // 0x264dec: 0x0  nop
    ctx->pc = 0x264decu;
    // NOP
label_264df0:
    // 0x264df0: 0xf5d2  .word       0x0000F5D2                   # mflo        $fp # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264df0u;
    SET_GPR_U64(ctx, 30, ctx->lo);
label_264df4:
    // 0x264df4: 0x3250  .word       0x00003250                   # mfhi        $a2 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264df4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_264df8:
    // 0x264df8: 0x0  nop
    ctx->pc = 0x264df8u;
    // NOP
label_264dfc:
    // 0x264dfc: 0x0  nop
    ctx->pc = 0x264dfcu;
    // NOP
label_264e00:
    // 0x264e00: 0xf5d9  .word       0x0000F5D9                   # multu       $zero, $zero # 0000F5C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264e00u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_264e04:
    // 0x264e04: 0x5380  sll         $t2, $zero, 14
    ctx->pc = 0x264e04u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_264e08:
    // 0x264e08: 0x0  nop
    ctx->pc = 0x264e08u;
    // NOP
label_264e0c:
    // 0x264e0c: 0x0  nop
    ctx->pc = 0x264e0cu;
    // NOP
label_264e10:
    // 0x264e10: 0xf5e4  .word       0x0000F5E4                   # and         $fp, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264e10u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_264e14:
    // 0x264e14: 0x8f80  sll         $s1, $zero, 30
    ctx->pc = 0x264e14u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_264e18:
    // 0x264e18: 0x0  nop
    ctx->pc = 0x264e18u;
    // NOP
label_264e1c:
    // 0x264e1c: 0x0  nop
    ctx->pc = 0x264e1cu;
    // NOP
label_264e20:
    // 0x264e20: 0xf5f6  tne         $zero, $zero, 983
    ctx->pc = 0x264e20u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264e24:
    // 0x264e24: 0x6280  sll         $t4, $zero, 10
    ctx->pc = 0x264e24u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_264e28:
    // 0x264e28: 0x0  nop
    ctx->pc = 0x264e28u;
    // NOP
label_264e2c:
    // 0x264e2c: 0x0  nop
    ctx->pc = 0x264e2cu;
    // NOP
label_264e30:
    // 0x264e30: 0xf603  sra         $fp, $zero, 24
    ctx->pc = 0x264e30u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 0), 24));
label_264e34:
    // 0x264e34: 0x43b0  tge         $zero, $zero, 270
    ctx->pc = 0x264e34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264e38:
    // 0x264e38: 0x0  nop
    ctx->pc = 0x264e38u;
    // NOP
label_264e3c:
    // 0x264e3c: 0x0  nop
    ctx->pc = 0x264e3cu;
    // NOP
label_264e40:
    // 0x264e40: 0xf60c  syscall     984
    ctx->pc = 0x264e40u;
    ctx->pc = 0x264E44u;
runtime->handleSyscall(rdram, ctx, 0x3D8u);
label_264e44:
    // 0x264e44: 0x3f60  .word       0x00003F60                   # add         $a3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264e44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_264e48:
    // 0x264e48: 0x0  nop
    ctx->pc = 0x264e48u;
    // NOP
label_264e4c:
    // 0x264e4c: 0x0  nop
    ctx->pc = 0x264e4cu;
    // NOP
label_264e50:
    // 0x264e50: 0xf614  .word       0x0000F614                   # dsllv       $fp, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264e50u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_264e54:
    // 0x264e54: 0x5b00  sll         $t3, $zero, 12
    ctx->pc = 0x264e54u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_264e58:
    // 0x264e58: 0x0  nop
    ctx->pc = 0x264e58u;
    // NOP
label_264e5c:
    // 0x264e5c: 0x0  nop
    ctx->pc = 0x264e5cu;
    // NOP
label_264e60:
    // 0x264e60: 0xf620  .word       0x0000F620                   # add         $fp, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264e60u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_264e64:
    // 0x264e64: 0x2c00  sll         $a1, $zero, 16
    ctx->pc = 0x264e64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_264e68:
    // 0x264e68: 0x0  nop
    ctx->pc = 0x264e68u;
    // NOP
label_264e6c:
    // 0x264e6c: 0x0  nop
    ctx->pc = 0x264e6cu;
    // NOP
label_264e70:
    // 0x264e70: 0xf626  .word       0x0000F626                   # xor         $fp, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264e70u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_264e74:
    // 0x264e74: 0x5bd0  .word       0x00005BD0                   # mfhi        $t3 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264e74u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_264e78:
    // 0x264e78: 0x0  nop
    ctx->pc = 0x264e78u;
    // NOP
label_264e7c:
    // 0x264e7c: 0x0  nop
    ctx->pc = 0x264e7cu;
    // NOP
label_264e80:
    // 0x264e80: 0xf632  tlt         $zero, $zero, 984
    ctx->pc = 0x264e80u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264e84:
    // 0x264e84: 0x52b0  tge         $zero, $zero, 330
    ctx->pc = 0x264e84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264e88:
    // 0x264e88: 0x0  nop
    ctx->pc = 0x264e88u;
    // NOP
label_264e8c:
    // 0x264e8c: 0x0  nop
    ctx->pc = 0x264e8cu;
    // NOP
label_264e90:
    // 0x264e90: 0xf63d  .word       0x0000F63D                   # INVALID     $zero, $zero, -0x9C3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264e90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x264E90 raw=0x0000F63D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264e94:
    // 0x264e94: 0x4180  sll         $t0, $zero, 6
    ctx->pc = 0x264e94u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_264e98:
    // 0x264e98: 0x0  nop
    ctx->pc = 0x264e98u;
    // NOP
label_264e9c:
    // 0x264e9c: 0x0  nop
    ctx->pc = 0x264e9cu;
    // NOP
label_264ea0:
    // 0x264ea0: 0xf646  .word       0x0000F646                   # srlv        $fp, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ea0u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_264ea4:
    // 0x264ea4: 0x4720  .word       0x00004720                   # add         $t0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ea4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_264ea8:
    // 0x264ea8: 0x0  nop
    ctx->pc = 0x264ea8u;
    // NOP
label_264eac:
    // 0x264eac: 0x0  nop
    ctx->pc = 0x264eacu;
    // NOP
label_264eb0:
    // 0x264eb0: 0xf64f  .word       0x0000F64F                   # sync.p # 0000F000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264eb0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_264eb4:
    // 0x264eb4: 0x6ac0  sll         $t5, $zero, 11
    ctx->pc = 0x264eb4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_264eb8:
    // 0x264eb8: 0x0  nop
    ctx->pc = 0x264eb8u;
    // NOP
label_264ebc:
    // 0x264ebc: 0x0  nop
    ctx->pc = 0x264ebcu;
    // NOP
label_264ec0:
    // 0x264ec0: 0xf65d  .word       0x0000F65D                   # dmultu      $zero, $zero # 0000F640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ec0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x264EC0 raw=0x0000F65D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264ec4:
    // 0x264ec4: 0x8570  tge         $zero, $zero, 533
    ctx->pc = 0x264ec4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264ec8:
    // 0x264ec8: 0x0  nop
    ctx->pc = 0x264ec8u;
    // NOP
label_264ecc:
    // 0x264ecc: 0x0  nop
    ctx->pc = 0x264eccu;
    // NOP
label_264ed0:
    // 0x264ed0: 0xf66e  .word       0x0000F66E                   # dsub        $fp, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ed0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 30, r); }
label_264ed4:
    // 0x264ed4: 0x5ae0  .word       0x00005AE0                   # add         $t3, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ed4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_264ed8:
    // 0x264ed8: 0x0  nop
    ctx->pc = 0x264ed8u;
    // NOP
label_264edc:
    // 0x264edc: 0x0  nop
    ctx->pc = 0x264edcu;
    // NOP
label_264ee0:
    // 0x264ee0: 0xf67a  dsrl        $fp, $zero, 25
    ctx->pc = 0x264ee0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) >> 25);
label_264ee4:
    // 0x264ee4: 0x5510  .word       0x00005510                   # mfhi        $t2 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ee4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_264ee8:
    // 0x264ee8: 0x0  nop
    ctx->pc = 0x264ee8u;
    // NOP
label_264eec:
    // 0x264eec: 0x0  nop
    ctx->pc = 0x264eecu;
    // NOP
label_264ef0:
    // 0x264ef0: 0xf685  .word       0x0000F685                   # INVALID     $zero, $zero, -0x97B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ef0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x264EF0 raw=0x0000F685"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264ef4:
    // 0x264ef4: 0x4490  .word       0x00004490                   # mfhi        $t0 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ef4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_264ef8:
    // 0x264ef8: 0x0  nop
    ctx->pc = 0x264ef8u;
    // NOP
label_264efc:
    // 0x264efc: 0x0  nop
    ctx->pc = 0x264efcu;
    // NOP
label_264f00:
    // 0x264f00: 0xf68e  .word       0x0000F68E                   # INVALID     $zero, $zero, -0x972 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264f00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x264F00 raw=0x0000F68E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264f04:
    // 0x264f04: 0x39e0  .word       0x000039E0                   # add         $a3, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264f04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_264f08:
    // 0x264f08: 0x0  nop
    ctx->pc = 0x264f08u;
    // NOP
label_264f0c:
    // 0x264f0c: 0x0  nop
    ctx->pc = 0x264f0cu;
    // NOP
label_264f10:
    // 0x264f10: 0xf696  .word       0x0000F696                   # dsrlv       $fp, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264f10u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_264f14:
    // 0x264f14: 0x36e0  .word       0x000036E0                   # add         $a2, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264f14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_264f18:
    // 0x264f18: 0x0  nop
    ctx->pc = 0x264f18u;
    // NOP
label_264f1c:
    // 0x264f1c: 0x0  nop
    ctx->pc = 0x264f1cu;
    // NOP
label_264f20:
    // 0x264f20: 0xf69d  .word       0x0000F69D                   # dmultu      $zero, $zero # 0000F680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264f20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x264F20 raw=0x0000F69D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264f24:
    // 0x264f24: 0x2740  sll         $a0, $zero, 29
    ctx->pc = 0x264f24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_264f28:
    // 0x264f28: 0x0  nop
    ctx->pc = 0x264f28u;
    // NOP
label_264f2c:
    // 0x264f2c: 0x0  nop
    ctx->pc = 0x264f2cu;
    // NOP
label_264f30:
    // 0x264f30: 0xf6a2  .word       0x0000F6A2                   # neg         $fp, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264f30u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
label_264f34:
    // 0x264f34: 0x5430  tge         $zero, $zero, 336
    ctx->pc = 0x264f34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264f38:
    // 0x264f38: 0x0  nop
    ctx->pc = 0x264f38u;
    // NOP
label_264f3c:
    // 0x264f3c: 0x0  nop
    ctx->pc = 0x264f3cu;
    // NOP
label_264f40:
    // 0x264f40: 0xf6ad  .word       0x0000F6AD                   # daddu       $fp, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264f40u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_264f44:
    // 0x264f44: 0x8540  sll         $s0, $zero, 21
    ctx->pc = 0x264f44u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_264f48:
    // 0x264f48: 0x0  nop
    ctx->pc = 0x264f48u;
    // NOP
label_264f4c:
    // 0x264f4c: 0x0  nop
    ctx->pc = 0x264f4cu;
    // NOP
label_264f50:
    // 0x264f50: 0xf6be  dsrl32      $fp, $zero, 26
    ctx->pc = 0x264f50u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) >> (32 + 26));
label_264f54:
    // 0x264f54: 0x3ac0  sll         $a3, $zero, 11
    ctx->pc = 0x264f54u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_264f58:
    // 0x264f58: 0x0  nop
    ctx->pc = 0x264f58u;
    // NOP
label_264f5c:
    // 0x264f5c: 0x0  nop
    ctx->pc = 0x264f5cu;
    // NOP
label_264f60:
    // 0x264f60: 0xf6c6  .word       0x0000F6C6                   # srlv        $fp, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264f60u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_264f64:
    // 0x264f64: 0x3480  sll         $a2, $zero, 18
    ctx->pc = 0x264f64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_264f68:
    // 0x264f68: 0x0  nop
    ctx->pc = 0x264f68u;
    // NOP
label_264f6c:
    // 0x264f6c: 0x0  nop
    ctx->pc = 0x264f6cu;
    // NOP
label_264f70:
    // 0x264f70: 0xf6cd  break       0, 987
    ctx->pc = 0x264f70u;
    runtime->handleBreak(rdram, ctx);
label_264f74:
    // 0x264f74: 0x3c80  sll         $a3, $zero, 18
    ctx->pc = 0x264f74u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_264f78:
    // 0x264f78: 0x0  nop
    ctx->pc = 0x264f78u;
    // NOP
label_264f7c:
    // 0x264f7c: 0x0  nop
    ctx->pc = 0x264f7cu;
    // NOP
label_264f80:
    // 0x264f80: 0xf6d5  .word       0x0000F6D5                   # INVALID     $zero, $zero, -0x92B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264f80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x264F80 raw=0x0000F6D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264f84:
    // 0x264f84: 0x6400  sll         $t4, $zero, 16
    ctx->pc = 0x264f84u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_264f88:
    // 0x264f88: 0x0  nop
    ctx->pc = 0x264f88u;
    // NOP
label_264f8c:
    // 0x264f8c: 0x0  nop
    ctx->pc = 0x264f8cu;
    // NOP
label_264f90:
    // 0x264f90: 0xf6e2  .word       0x0000F6E2                   # neg         $fp, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264f90u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
label_264f94:
    // 0x264f94: 0x4070  tge         $zero, $zero, 257
    ctx->pc = 0x264f94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264f98:
    // 0x264f98: 0x0  nop
    ctx->pc = 0x264f98u;
    // NOP
label_264f9c:
    // 0x264f9c: 0x0  nop
    ctx->pc = 0x264f9cu;
    // NOP
label_264fa0:
    // 0x264fa0: 0xf6eb  .word       0x0000F6EB                   # sltu        $fp, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264fa0u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_264fa4:
    // 0x264fa4: 0x4bb0  tge         $zero, $zero, 302
    ctx->pc = 0x264fa4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264fa8:
    // 0x264fa8: 0x0  nop
    ctx->pc = 0x264fa8u;
    // NOP
label_264fac:
    // 0x264fac: 0x0  nop
    ctx->pc = 0x264facu;
    // NOP
label_264fb0:
    // 0x264fb0: 0xf6f5  .word       0x0000F6F5                   # INVALID     $zero, $zero, -0x90B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264fb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x264FB0 raw=0x0000F6F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264fb4:
    // 0x264fb4: 0x63d0  .word       0x000063D0                   # mfhi        $t4 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264fb4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_264fb8:
    // 0x264fb8: 0x0  nop
    ctx->pc = 0x264fb8u;
    // NOP
label_264fbc:
    // 0x264fbc: 0x0  nop
    ctx->pc = 0x264fbcu;
    // NOP
label_264fc0:
    // 0x264fc0: 0xf702  srl         $fp, $zero, 28
    ctx->pc = 0x264fc0u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 0), 28));
label_264fc4:
    // 0x264fc4: 0x89a0  .word       0x000089A0                   # add         $s1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264fc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_264fc8:
    // 0x264fc8: 0x0  nop
    ctx->pc = 0x264fc8u;
    // NOP
label_264fcc:
    // 0x264fcc: 0x0  nop
    ctx->pc = 0x264fccu;
    // NOP
label_264fd0:
    // 0x264fd0: 0xf714  .word       0x0000F714                   # dsllv       $fp, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264fd0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_264fd4:
    // 0x264fd4: 0x5250  .word       0x00005250                   # mfhi        $t2 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264fd4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_264fd8:
    // 0x264fd8: 0x0  nop
    ctx->pc = 0x264fd8u;
    // NOP
label_264fdc:
    // 0x264fdc: 0x0  nop
    ctx->pc = 0x264fdcu;
    // NOP
label_264fe0:
    // 0x264fe0: 0xf71f  .word       0x0000F71F                   # ddivu       $fp, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264fe0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x264FE0 raw=0x0000F71F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264fe4:
    // 0x264fe4: 0x8a00  sll         $s1, $zero, 8
    ctx->pc = 0x264fe4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_264fe8:
    // 0x264fe8: 0x0  nop
    ctx->pc = 0x264fe8u;
    // NOP
label_264fec:
    // 0x264fec: 0x0  nop
    ctx->pc = 0x264fecu;
    // NOP
label_264ff0:
    // 0x264ff0: 0xf731  tgeu        $zero, $zero, 988
    ctx->pc = 0x264ff0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264ff4:
    // 0x264ff4: 0xb700  sll         $s6, $zero, 28
    ctx->pc = 0x264ff4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_264ff8:
    // 0x264ff8: 0x0  nop
    ctx->pc = 0x264ff8u;
    // NOP
label_264ffc:
    // 0x264ffc: 0x0  nop
    ctx->pc = 0x264ffcu;
    // NOP
label_265000:
    // 0x265000: 0xf748  .word       0x0000F748                   # jr          $zero # 0000F740 <InstrIdType: CPU_SPECIAL>
label_265004:
    if (ctx->pc == 0x265004u) {
        ctx->pc = 0x265004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265000u;
        // 0x265004: 0x5ef0  tge         $zero, $zero, 379 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x265008u;
        goto label_265008;
    }
    ctx->pc = 0x265000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x265004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265000u;
        // 0x265004: 0x5ef0  tge         $zero, $zero, 379 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265000u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x265008u;
label_265008:
    // 0x265008: 0x0  nop
    ctx->pc = 0x265008u;
    // NOP
label_26500c:
    // 0x26500c: 0x0  nop
    ctx->pc = 0x26500cu;
    // NOP
label_265010:
    // 0x265010: 0xf754  .word       0x0000F754                   # dsllv       $fp, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265010u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_265014:
    // 0x265014: 0x7a90  .word       0x00007A90                   # mfhi        $t7 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265014u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_265018:
    // 0x265018: 0x0  nop
    ctx->pc = 0x265018u;
    // NOP
label_26501c:
    // 0x26501c: 0x0  nop
    ctx->pc = 0x26501cu;
    // NOP
label_265020:
    // 0x265020: 0xf764  .word       0x0000F764                   # and         $fp, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265020u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_265024:
    // 0x265024: 0x5320  .word       0x00005320                   # add         $t2, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265024u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_265028:
    // 0x265028: 0x0  nop
    ctx->pc = 0x265028u;
    // NOP
label_26502c:
    // 0x26502c: 0x0  nop
    ctx->pc = 0x26502cu;
    // NOP
label_265030:
    // 0x265030: 0xf76f  .word       0x0000F76F                   # dsubu       $fp, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265030u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_265034:
    // 0x265034: 0x4f90  .word       0x00004F90                   # mfhi        $t1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265034u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_265038:
    // 0x265038: 0x0  nop
    ctx->pc = 0x265038u;
    // NOP
label_26503c:
    // 0x26503c: 0x0  nop
    ctx->pc = 0x26503cu;
    // NOP
label_265040:
    // 0x265040: 0xf779  .word       0x0000F779                   # INVALID     $zero, $zero, -0x887 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265040u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x265040 raw=0x0000F779"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265044:
    // 0x265044: 0x3ef0  tge         $zero, $zero, 251
    ctx->pc = 0x265044u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265048:
    // 0x265048: 0x0  nop
    ctx->pc = 0x265048u;
    // NOP
label_26504c:
    // 0x26504c: 0x0  nop
    ctx->pc = 0x26504cu;
    // NOP
label_265050:
    // 0x265050: 0xf781  .word       0x0000F781                   # INVALID     $zero, $zero, -0x87F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265050u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x265050 raw=0x0000F781"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265054:
    // 0x265054: 0x4480  sll         $t0, $zero, 18
    ctx->pc = 0x265054u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_265058:
    // 0x265058: 0x0  nop
    ctx->pc = 0x265058u;
    // NOP
label_26505c:
    // 0x26505c: 0x0  nop
    ctx->pc = 0x26505cu;
    // NOP
label_265060:
    // 0x265060: 0xf78a  .word       0x0000F78A                   # movz        $fp, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265060u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 0));
label_265064:
    // 0x265064: 0x9d60  .word       0x00009D60                   # add         $s3, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265064u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_265068:
    // 0x265068: 0x0  nop
    ctx->pc = 0x265068u;
    // NOP
label_26506c:
    // 0x26506c: 0x0  nop
    ctx->pc = 0x26506cu;
    // NOP
label_265070:
    // 0x265070: 0xf79e  .word       0x0000F79E                   # ddiv        $fp, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265070u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x265070 raw=0x0000F79E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265074:
    // 0x265074: 0x7c90  .word       0x00007C90                   # mfhi        $t7 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265074u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_265078:
    // 0x265078: 0x0  nop
    ctx->pc = 0x265078u;
    // NOP
label_26507c:
    // 0x26507c: 0x0  nop
    ctx->pc = 0x26507cu;
    // NOP
label_265080:
    // 0x265080: 0xf7ae  .word       0x0000F7AE                   # dsub        $fp, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265080u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 30, r); }
label_265084:
    // 0x265084: 0x5bd0  .word       0x00005BD0                   # mfhi        $t3 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265084u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_265088:
    // 0x265088: 0x0  nop
    ctx->pc = 0x265088u;
    // NOP
label_26508c:
    // 0x26508c: 0x0  nop
    ctx->pc = 0x26508cu;
    // NOP
label_265090:
    // 0x265090: 0xf7ba  dsrl        $fp, $zero, 30
    ctx->pc = 0x265090u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) >> 30);
label_265094:
    // 0x265094: 0x49a0  .word       0x000049A0                   # add         $t1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265094u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_265098:
    // 0x265098: 0x0  nop
    ctx->pc = 0x265098u;
    // NOP
label_26509c:
    // 0x26509c: 0x0  nop
    ctx->pc = 0x26509cu;
    // NOP
label_2650a0:
    // 0x2650a0: 0xf7c4  .word       0x0000F7C4                   # sllv        $fp, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2650a0u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2650a4:
    // 0x2650a4: 0x3d60  .word       0x00003D60                   # add         $a3, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2650a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_2650a8:
    // 0x2650a8: 0x0  nop
    ctx->pc = 0x2650a8u;
    // NOP
label_2650ac:
    // 0x2650ac: 0x0  nop
    ctx->pc = 0x2650acu;
    // NOP
label_2650b0:
    // 0x2650b0: 0xf7cc  syscall     991
    ctx->pc = 0x2650b0u;
    ctx->pc = 0x2650B4u;
runtime->handleSyscall(rdram, ctx, 0x3DFu);
label_2650b4:
    // 0x2650b4: 0x5a30  tge         $zero, $zero, 360
    ctx->pc = 0x2650b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2650b8:
    // 0x2650b8: 0x0  nop
    ctx->pc = 0x2650b8u;
    // NOP
label_2650bc:
    // 0x2650bc: 0x0  nop
    ctx->pc = 0x2650bcu;
    // NOP
label_2650c0:
    // 0x2650c0: 0xf7d8  .word       0x0000F7D8                   # mult        $fp, $zero, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2650c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_2650c4:
    // 0x2650c4: 0x3e90  .word       0x00003E90                   # mfhi        $a3 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2650c4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_2650c8:
    // 0x2650c8: 0x0  nop
    ctx->pc = 0x2650c8u;
    // NOP
label_2650cc:
    // 0x2650cc: 0x0  nop
    ctx->pc = 0x2650ccu;
    // NOP
label_2650d0:
    // 0x2650d0: 0xf7e0  .word       0x0000F7E0                   # add         $fp, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2650d0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_2650d4:
    // 0x2650d4: 0x51f0  tge         $zero, $zero, 327
    ctx->pc = 0x2650d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2650d8:
    // 0x2650d8: 0x0  nop
    ctx->pc = 0x2650d8u;
    // NOP
label_2650dc:
    // 0x2650dc: 0x0  nop
    ctx->pc = 0x2650dcu;
    // NOP
label_2650e0:
    // 0x2650e0: 0xf7eb  .word       0x0000F7EB                   # sltu        $fp, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2650e0u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2650e4:
    // 0x2650e4: 0x53e0  .word       0x000053E0                   # add         $t2, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2650e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_2650e8:
    // 0x2650e8: 0x0  nop
    ctx->pc = 0x2650e8u;
    // NOP
label_2650ec:
    // 0x2650ec: 0x0  nop
    ctx->pc = 0x2650ecu;
    // NOP
label_2650f0:
    // 0x2650f0: 0xf7f6  tne         $zero, $zero, 991
    ctx->pc = 0x2650f0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2650f4:
    // 0x2650f4: 0x5700  sll         $t2, $zero, 28
    ctx->pc = 0x2650f4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_2650f8:
    // 0x2650f8: 0x0  nop
    ctx->pc = 0x2650f8u;
    // NOP
label_2650fc:
    // 0x2650fc: 0x0  nop
    ctx->pc = 0x2650fcu;
    // NOP
label_265100:
    // 0x265100: 0xf801  .word       0x0000F801                   # INVALID     $zero, $zero, -0x7FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265100u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x265100 raw=0x0000F801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265104:
    // 0x265104: 0x6640  sll         $t4, $zero, 25
    ctx->pc = 0x265104u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_265108:
    // 0x265108: 0x0  nop
    ctx->pc = 0x265108u;
    // NOP
label_26510c:
    // 0x26510c: 0x0  nop
    ctx->pc = 0x26510cu;
    // NOP
label_265110:
    // 0x265110: 0xf80e  .word       0x0000F80E                   # INVALID     $zero, $zero, -0x7F2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265110u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x265110 raw=0x0000F80E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265114:
    // 0x265114: 0x7da0  .word       0x00007DA0                   # add         $t7, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265114u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_265118:
    // 0x265118: 0x0  nop
    ctx->pc = 0x265118u;
    // NOP
label_26511c:
    // 0x26511c: 0x0  nop
    ctx->pc = 0x26511cu;
    // NOP
label_265120:
    // 0x265120: 0xf81e  ddiv        $ra, $zero, $zero
    ctx->pc = 0x265120u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x265120 raw=0x0000F81E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265124:
    // 0x265124: 0x9f60  .word       0x00009F60                   # add         $s3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265124u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_265128:
    // 0x265128: 0x0  nop
    ctx->pc = 0x265128u;
    // NOP
label_26512c:
    // 0x26512c: 0x0  nop
    ctx->pc = 0x26512cu;
    // NOP
label_265130:
    // 0x265130: 0xf832  tlt         $zero, $zero, 992
    ctx->pc = 0x265130u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265134:
    // 0x265134: 0x6a50  .word       0x00006A50                   # mfhi        $t5 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265134u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_265138:
    // 0x265138: 0x0  nop
    ctx->pc = 0x265138u;
    // NOP
label_26513c:
    // 0x26513c: 0x0  nop
    ctx->pc = 0x26513cu;
    // NOP
label_265140:
    // 0x265140: 0xf840  sll         $ra, $zero, 1
    ctx->pc = 0x265140u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_265144:
    // 0x265144: 0x5ba0  .word       0x00005BA0                   # add         $t3, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265144u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_265148:
    // 0x265148: 0x0  nop
    ctx->pc = 0x265148u;
    // NOP
label_26514c:
    // 0x26514c: 0x0  nop
    ctx->pc = 0x26514cu;
    // NOP
label_265150:
    // 0x265150: 0xf84c  syscall     993
    ctx->pc = 0x265150u;
    ctx->pc = 0x265154u;
runtime->handleSyscall(rdram, ctx, 0x3E1u);
label_265154:
    // 0x265154: 0x6110  .word       0x00006110                   # mfhi        $t4 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265154u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_265158:
    // 0x265158: 0x0  nop
    ctx->pc = 0x265158u;
    // NOP
label_26515c:
    // 0x26515c: 0x0  nop
    ctx->pc = 0x26515cu;
    // NOP
label_265160:
    // 0x265160: 0xf859  .word       0x0000F859                   # multu       $zero, $zero # 0000F840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265160u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_265164:
    // 0x265164: 0x9f60  .word       0x00009F60                   # add         $s3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265164u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_265168:
    // 0x265168: 0x0  nop
    ctx->pc = 0x265168u;
    // NOP
label_26516c:
    // 0x26516c: 0x0  nop
    ctx->pc = 0x26516cu;
    // NOP
label_265170:
    // 0x265170: 0xf86d  .word       0x0000F86D                   # daddu       $ra, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265170u;
    SET_GPR_U64(ctx, 31, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_265174:
    // 0x265174: 0x4160  .word       0x00004160                   # add         $t0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265174u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_265178:
    // 0x265178: 0x0  nop
    ctx->pc = 0x265178u;
    // NOP
label_26517c:
    // 0x26517c: 0x0  nop
    ctx->pc = 0x26517cu;
    // NOP
label_265180:
    // 0x265180: 0xf876  tne         $zero, $zero, 993
    ctx->pc = 0x265180u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265184:
    // 0x265184: 0x5c80  sll         $t3, $zero, 18
    ctx->pc = 0x265184u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_265188:
    // 0x265188: 0x0  nop
    ctx->pc = 0x265188u;
    // NOP
label_26518c:
    // 0x26518c: 0x0  nop
    ctx->pc = 0x26518cu;
    // NOP
label_265190:
    // 0x265190: 0xf882  srl         $ra, $zero, 2
    ctx->pc = 0x265190u;
    SET_GPR_S32(ctx, 31, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
label_265194:
    // 0x265194: 0xac10  .word       0x0000AC10                   # mfhi        $s5 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265194u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_265198:
    // 0x265198: 0x0  nop
    ctx->pc = 0x265198u;
    // NOP
label_26519c:
    // 0x26519c: 0x0  nop
    ctx->pc = 0x26519cu;
    // NOP
label_2651a0:
    // 0x2651a0: 0xf898  .word       0x0000F898                   # mult        $ra, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2651a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2651a4:
    // 0x2651a4: 0xaaf0  tge         $zero, $zero, 683
    ctx->pc = 0x2651a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2651a8:
    // 0x2651a8: 0x0  nop
    ctx->pc = 0x2651a8u;
    // NOP
label_2651ac:
    // 0x2651ac: 0x0  nop
    ctx->pc = 0x2651acu;
    // NOP
label_2651b0:
    // 0x2651b0: 0xf8ae  .word       0x0000F8AE                   # dsub        $ra, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2651b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_2651b4:
    // 0x2651b4: 0x5c30  tge         $zero, $zero, 368
    ctx->pc = 0x2651b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2651b8:
    // 0x2651b8: 0x0  nop
    ctx->pc = 0x2651b8u;
    // NOP
label_2651bc:
    // 0x2651bc: 0x0  nop
    ctx->pc = 0x2651bcu;
    // NOP
label_2651c0:
    // 0x2651c0: 0xf8ba  dsrl        $ra, $zero, 2
    ctx->pc = 0x2651c0u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) >> 2);
label_2651c4:
    // 0x2651c4: 0x4360  .word       0x00004360                   # add         $t0, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2651c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2651c8:
    // 0x2651c8: 0x0  nop
    ctx->pc = 0x2651c8u;
    // NOP
label_2651cc:
    // 0x2651cc: 0x0  nop
    ctx->pc = 0x2651ccu;
    // NOP
label_2651d0:
    // 0x2651d0: 0xf8c3  sra         $ra, $zero, 3
    ctx->pc = 0x2651d0u;
    SET_GPR_S32(ctx, 31, SRA32(GPR_S32(ctx, 0), 3));
label_2651d4:
    // 0x2651d4: 0x2c50  .word       0x00002C50                   # mfhi        $a1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2651d4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_2651d8:
    // 0x2651d8: 0x0  nop
    ctx->pc = 0x2651d8u;
    // NOP
label_2651dc:
    // 0x2651dc: 0x0  nop
    ctx->pc = 0x2651dcu;
    // NOP
label_2651e0:
    // 0x2651e0: 0xf8c9  .word       0x0000F8C9                   # jalr        $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_2651e4:
    if (ctx->pc == 0x2651E4u) {
        ctx->pc = 0x2651E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2651E0u;
        // 0x2651e4: 0x5d50  .word       0x00005D50                   # mfhi        $t3 # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 11, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2651E8u;
        goto label_2651e8;
    }
    ctx->pc = 0x2651E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 31, 0x2651E8u);
        ctx->pc = 0x2651E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2651E0u;
        // 0x2651e4: 0x5d50  .word       0x00005D50                   # mfhi        $t3 # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 11, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2651E0u, 0x2651E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2651E8u;
label_2651e8:
    // 0x2651e8: 0x0  nop
    ctx->pc = 0x2651e8u;
    // NOP
label_2651ec:
    // 0x2651ec: 0x0  nop
    ctx->pc = 0x2651ecu;
    // NOP
label_2651f0:
    // 0x2651f0: 0xf8d5  .word       0x0000F8D5                   # INVALID     $zero, $zero, -0x72B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2651f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2651F0 raw=0x0000F8D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2651f4:
    // 0x2651f4: 0x6890  .word       0x00006890                   # mfhi        $t5 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2651f4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2651f8:
    // 0x2651f8: 0x0  nop
    ctx->pc = 0x2651f8u;
    // NOP
label_2651fc:
    // 0x2651fc: 0x0  nop
    ctx->pc = 0x2651fcu;
    // NOP
label_265200:
    // 0x265200: 0xf8e3  .word       0x0000F8E3                   # negu        $ra, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265200u;
    SET_GPR_S32(ctx, 31, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_265204:
    // 0x265204: 0x7060  .word       0x00007060                   # add         $t6, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265204u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_265208:
    // 0x265208: 0x0  nop
    ctx->pc = 0x265208u;
    // NOP
label_26520c:
    // 0x26520c: 0x0  nop
    ctx->pc = 0x26520cu;
    // NOP
label_265210:
    // 0x265210: 0xf8f2  tlt         $zero, $zero, 995
    ctx->pc = 0x265210u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265214:
    // 0x265214: 0x91d0  .word       0x000091D0                   # mfhi        $s2 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265214u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_265218:
    // 0x265218: 0x0  nop
    ctx->pc = 0x265218u;
    // NOP
label_26521c:
    // 0x26521c: 0x0  nop
    ctx->pc = 0x26521cu;
    // NOP
label_265220:
    // 0x265220: 0xf905  .word       0x0000F905                   # INVALID     $zero, $zero, -0x6FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265220u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x265220 raw=0x0000F905"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265224:
    // 0x265224: 0xc6f0  tge         $zero, $zero, 795
    ctx->pc = 0x265224u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265228:
    // 0x265228: 0x0  nop
    ctx->pc = 0x265228u;
    // NOP
label_26522c:
    // 0x26522c: 0x0  nop
    ctx->pc = 0x26522cu;
    // NOP
label_265230:
    // 0x265230: 0xf91e  .word       0x0000F91E                   # ddiv        $ra, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265230u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x265230 raw=0x0000F91E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265234:
    // 0x265234: 0x9d20  .word       0x00009D20                   # add         $s3, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265234u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_265238:
    // 0x265238: 0x0  nop
    ctx->pc = 0x265238u;
    // NOP
label_26523c:
    // 0x26523c: 0x0  nop
    ctx->pc = 0x26523cu;
    // NOP
label_265240:
    // 0x265240: 0xf932  tlt         $zero, $zero, 996
    ctx->pc = 0x265240u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265244:
    // 0x265244: 0x7360  .word       0x00007360                   # add         $t6, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265244u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_265248:
    // 0x265248: 0x0  nop
    ctx->pc = 0x265248u;
    // NOP
label_26524c:
    // 0x26524c: 0x0  nop
    ctx->pc = 0x26524cu;
    // NOP
label_265250:
    // 0x265250: 0xf941  .word       0x0000F941                   # INVALID     $zero, $zero, -0x6BF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265250u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x265250 raw=0x0000F941"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265254:
    // 0x265254: 0x2ee0  .word       0x00002EE0                   # add         $a1, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265254u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_265258:
    // 0x265258: 0x0  nop
    ctx->pc = 0x265258u;
    // NOP
label_26525c:
    // 0x26525c: 0x0  nop
    ctx->pc = 0x26525cu;
    // NOP
label_265260:
    // 0x265260: 0xf947  .word       0x0000F947                   # srav        $ra, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265260u;
    SET_GPR_S32(ctx, 31, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_265264:
    // 0x265264: 0x6490  .word       0x00006490                   # mfhi        $t4 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265264u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_265268:
    // 0x265268: 0x0  nop
    ctx->pc = 0x265268u;
    // NOP
label_26526c:
    // 0x26526c: 0x0  nop
    ctx->pc = 0x26526cu;
    // NOP
label_265270:
    // 0x265270: 0xf954  .word       0x0000F954                   # dsllv       $ra, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265270u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_265274:
    // 0x265274: 0x9cc0  sll         $s3, $zero, 19
    ctx->pc = 0x265274u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_265278:
    // 0x265278: 0x0  nop
    ctx->pc = 0x265278u;
    // NOP
label_26527c:
    // 0x26527c: 0x0  nop
    ctx->pc = 0x26527cu;
    // NOP
    ctx->pc = 0x265280u;
    return;
}

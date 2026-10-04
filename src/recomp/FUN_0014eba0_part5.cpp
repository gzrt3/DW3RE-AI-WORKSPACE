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


void FUN_0014eba0_part5(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x150ae0u: goto label_150ae0;
        case 0x150ae4u: goto label_150ae4;
        case 0x150ae8u: goto label_150ae8;
        case 0x150aecu: goto label_150aec;
        case 0x150af0u: goto label_150af0;
        case 0x150af4u: goto label_150af4;
        case 0x150af8u: goto label_150af8;
        case 0x150afcu: goto label_150afc;
        case 0x150b00u: goto label_150b00;
        case 0x150b04u: goto label_150b04;
        case 0x150b08u: goto label_150b08;
        case 0x150b0cu: goto label_150b0c;
        case 0x150b10u: goto label_150b10;
        case 0x150b14u: goto label_150b14;
        case 0x150b18u: goto label_150b18;
        case 0x150b1cu: goto label_150b1c;
        case 0x150b20u: goto label_150b20;
        case 0x150b24u: goto label_150b24;
        case 0x150b28u: goto label_150b28;
        case 0x150b2cu: goto label_150b2c;
        case 0x150b30u: goto label_150b30;
        case 0x150b34u: goto label_150b34;
        case 0x150b38u: goto label_150b38;
        case 0x150b3cu: goto label_150b3c;
        case 0x150b40u: goto label_150b40;
        case 0x150b44u: goto label_150b44;
        case 0x150b48u: goto label_150b48;
        case 0x150b4cu: goto label_150b4c;
        case 0x150b50u: goto label_150b50;
        case 0x150b54u: goto label_150b54;
        case 0x150b58u: goto label_150b58;
        case 0x150b5cu: goto label_150b5c;
        case 0x150b60u: goto label_150b60;
        case 0x150b64u: goto label_150b64;
        case 0x150b68u: goto label_150b68;
        case 0x150b6cu: goto label_150b6c;
        case 0x150b70u: goto label_150b70;
        case 0x150b74u: goto label_150b74;
        case 0x150b78u: goto label_150b78;
        case 0x150b7cu: goto label_150b7c;
        case 0x150b80u: goto label_150b80;
        case 0x150b84u: goto label_150b84;
        case 0x150b88u: goto label_150b88;
        case 0x150b8cu: goto label_150b8c;
        case 0x150b90u: goto label_150b90;
        case 0x150b94u: goto label_150b94;
        case 0x150b98u: goto label_150b98;
        case 0x150b9cu: goto label_150b9c;
        case 0x150ba0u: goto label_150ba0;
        case 0x150ba4u: goto label_150ba4;
        case 0x150ba8u: goto label_150ba8;
        case 0x150bacu: goto label_150bac;
        case 0x150bb0u: goto label_150bb0;
        case 0x150bb4u: goto label_150bb4;
        case 0x150bb8u: goto label_150bb8;
        case 0x150bbcu: goto label_150bbc;
        case 0x150bc0u: goto label_150bc0;
        case 0x150bc4u: goto label_150bc4;
        case 0x150bc8u: goto label_150bc8;
        case 0x150bccu: goto label_150bcc;
        case 0x150bd0u: goto label_150bd0;
        case 0x150bd4u: goto label_150bd4;
        case 0x150bd8u: goto label_150bd8;
        case 0x150bdcu: goto label_150bdc;
        case 0x150be0u: goto label_150be0;
        case 0x150be4u: goto label_150be4;
        case 0x150be8u: goto label_150be8;
        case 0x150becu: goto label_150bec;
        case 0x150bf0u: goto label_150bf0;
        case 0x150bf4u: goto label_150bf4;
        case 0x150bf8u: goto label_150bf8;
        case 0x150bfcu: goto label_150bfc;
        case 0x150c00u: goto label_150c00;
        case 0x150c04u: goto label_150c04;
        case 0x150c08u: goto label_150c08;
        case 0x150c0cu: goto label_150c0c;
        case 0x150c10u: goto label_150c10;
        case 0x150c14u: goto label_150c14;
        case 0x150c18u: goto label_150c18;
        case 0x150c1cu: goto label_150c1c;
        case 0x150c20u: goto label_150c20;
        case 0x150c24u: goto label_150c24;
        case 0x150c28u: goto label_150c28;
        case 0x150c2cu: goto label_150c2c;
        case 0x150c30u: goto label_150c30;
        case 0x150c34u: goto label_150c34;
        case 0x150c38u: goto label_150c38;
        case 0x150c3cu: goto label_150c3c;
        case 0x150c40u: goto label_150c40;
        case 0x150c44u: goto label_150c44;
        case 0x150c48u: goto label_150c48;
        case 0x150c4cu: goto label_150c4c;
        case 0x150c50u: goto label_150c50;
        case 0x150c54u: goto label_150c54;
        case 0x150c58u: goto label_150c58;
        case 0x150c5cu: goto label_150c5c;
        case 0x150c60u: goto label_150c60;
        case 0x150c64u: goto label_150c64;
        case 0x150c68u: goto label_150c68;
        case 0x150c6cu: goto label_150c6c;
        case 0x150c70u: goto label_150c70;
        case 0x150c74u: goto label_150c74;
        case 0x150c78u: goto label_150c78;
        case 0x150c7cu: goto label_150c7c;
        case 0x150c80u: goto label_150c80;
        case 0x150c84u: goto label_150c84;
        case 0x150c88u: goto label_150c88;
        case 0x150c8cu: goto label_150c8c;
        case 0x150c90u: goto label_150c90;
        case 0x150c94u: goto label_150c94;
        case 0x150c98u: goto label_150c98;
        case 0x150c9cu: goto label_150c9c;
        case 0x150ca0u: goto label_150ca0;
        case 0x150ca4u: goto label_150ca4;
        case 0x150ca8u: goto label_150ca8;
        case 0x150cacu: goto label_150cac;
        case 0x150cb0u: goto label_150cb0;
        case 0x150cb4u: goto label_150cb4;
        case 0x150cb8u: goto label_150cb8;
        case 0x150cbcu: goto label_150cbc;
        case 0x150cc0u: goto label_150cc0;
        case 0x150cc4u: goto label_150cc4;
        case 0x150cc8u: goto label_150cc8;
        case 0x150cccu: goto label_150ccc;
        case 0x150cd0u: goto label_150cd0;
        case 0x150cd4u: goto label_150cd4;
        case 0x150cd8u: goto label_150cd8;
        case 0x150cdcu: goto label_150cdc;
        case 0x150ce0u: goto label_150ce0;
        case 0x150ce4u: goto label_150ce4;
        case 0x150ce8u: goto label_150ce8;
        case 0x150cecu: goto label_150cec;
        case 0x150cf0u: goto label_150cf0;
        case 0x150cf4u: goto label_150cf4;
        case 0x150cf8u: goto label_150cf8;
        case 0x150cfcu: goto label_150cfc;
        case 0x150d00u: goto label_150d00;
        case 0x150d04u: goto label_150d04;
        case 0x150d08u: goto label_150d08;
        case 0x150d0cu: goto label_150d0c;
        case 0x150d10u: goto label_150d10;
        case 0x150d14u: goto label_150d14;
        case 0x150d18u: goto label_150d18;
        case 0x150d1cu: goto label_150d1c;
        case 0x150d20u: goto label_150d20;
        case 0x150d24u: goto label_150d24;
        case 0x150d28u: goto label_150d28;
        case 0x150d2cu: goto label_150d2c;
        case 0x150d30u: goto label_150d30;
        case 0x150d34u: goto label_150d34;
        case 0x150d38u: goto label_150d38;
        case 0x150d3cu: goto label_150d3c;
        case 0x150d40u: goto label_150d40;
        case 0x150d44u: goto label_150d44;
        case 0x150d48u: goto label_150d48;
        case 0x150d4cu: goto label_150d4c;
        case 0x150d50u: goto label_150d50;
        case 0x150d54u: goto label_150d54;
        case 0x150d58u: goto label_150d58;
        case 0x150d5cu: goto label_150d5c;
        case 0x150d60u: goto label_150d60;
        case 0x150d64u: goto label_150d64;
        case 0x150d68u: goto label_150d68;
        case 0x150d6cu: goto label_150d6c;
        case 0x150d70u: goto label_150d70;
        case 0x150d74u: goto label_150d74;
        case 0x150d78u: goto label_150d78;
        case 0x150d7cu: goto label_150d7c;
        case 0x150d80u: goto label_150d80;
        case 0x150d84u: goto label_150d84;
        case 0x150d88u: goto label_150d88;
        case 0x150d8cu: goto label_150d8c;
        case 0x150d90u: goto label_150d90;
        case 0x150d94u: goto label_150d94;
        case 0x150d98u: goto label_150d98;
        case 0x150d9cu: goto label_150d9c;
        case 0x150da0u: goto label_150da0;
        case 0x150da4u: goto label_150da4;
        case 0x150da8u: goto label_150da8;
        case 0x150dacu: goto label_150dac;
        case 0x150db0u: goto label_150db0;
        case 0x150db4u: goto label_150db4;
        case 0x150db8u: goto label_150db8;
        case 0x150dbcu: goto label_150dbc;
        case 0x150dc0u: goto label_150dc0;
        case 0x150dc4u: goto label_150dc4;
        case 0x150dc8u: goto label_150dc8;
        case 0x150dccu: goto label_150dcc;
        case 0x150dd0u: goto label_150dd0;
        case 0x150dd4u: goto label_150dd4;
        case 0x150dd8u: goto label_150dd8;
        case 0x150ddcu: goto label_150ddc;
        case 0x150de0u: goto label_150de0;
        case 0x150de4u: goto label_150de4;
        case 0x150de8u: goto label_150de8;
        case 0x150decu: goto label_150dec;
        case 0x150df0u: goto label_150df0;
        case 0x150df4u: goto label_150df4;
        case 0x150df8u: goto label_150df8;
        case 0x150dfcu: goto label_150dfc;
        case 0x150e00u: goto label_150e00;
        case 0x150e04u: goto label_150e04;
        case 0x150e08u: goto label_150e08;
        case 0x150e0cu: goto label_150e0c;
        case 0x150e10u: goto label_150e10;
        case 0x150e14u: goto label_150e14;
        case 0x150e18u: goto label_150e18;
        case 0x150e1cu: goto label_150e1c;
        case 0x150e20u: goto label_150e20;
        case 0x150e24u: goto label_150e24;
        case 0x150e28u: goto label_150e28;
        case 0x150e2cu: goto label_150e2c;
        case 0x150e30u: goto label_150e30;
        case 0x150e34u: goto label_150e34;
        case 0x150e38u: goto label_150e38;
        case 0x150e3cu: goto label_150e3c;
        case 0x150e40u: goto label_150e40;
        case 0x150e44u: goto label_150e44;
        case 0x150e48u: goto label_150e48;
        case 0x150e4cu: goto label_150e4c;
        case 0x150e50u: goto label_150e50;
        case 0x150e54u: goto label_150e54;
        case 0x150e58u: goto label_150e58;
        case 0x150e5cu: goto label_150e5c;
        case 0x150e60u: goto label_150e60;
        case 0x150e64u: goto label_150e64;
        case 0x150e68u: goto label_150e68;
        case 0x150e6cu: goto label_150e6c;
        case 0x150e70u: goto label_150e70;
        case 0x150e74u: goto label_150e74;
        case 0x150e78u: goto label_150e78;
        case 0x150e7cu: goto label_150e7c;
        case 0x150e80u: goto label_150e80;
        case 0x150e84u: goto label_150e84;
        case 0x150e88u: goto label_150e88;
        case 0x150e8cu: goto label_150e8c;
        case 0x150e90u: goto label_150e90;
        case 0x150e94u: goto label_150e94;
        case 0x150e98u: goto label_150e98;
        case 0x150e9cu: goto label_150e9c;
        case 0x150ea0u: goto label_150ea0;
        case 0x150ea4u: goto label_150ea4;
        case 0x150ea8u: goto label_150ea8;
        case 0x150eacu: goto label_150eac;
        case 0x150eb0u: goto label_150eb0;
        case 0x150eb4u: goto label_150eb4;
        case 0x150eb8u: goto label_150eb8;
        case 0x150ebcu: goto label_150ebc;
        case 0x150ec0u: goto label_150ec0;
        case 0x150ec4u: goto label_150ec4;
        case 0x150ec8u: goto label_150ec8;
        case 0x150eccu: goto label_150ecc;
        case 0x150ed0u: goto label_150ed0;
        case 0x150ed4u: goto label_150ed4;
        case 0x150ed8u: goto label_150ed8;
        case 0x150edcu: goto label_150edc;
        case 0x150ee0u: goto label_150ee0;
        case 0x150ee4u: goto label_150ee4;
        case 0x150ee8u: goto label_150ee8;
        case 0x150eecu: goto label_150eec;
        case 0x150ef0u: goto label_150ef0;
        case 0x150ef4u: goto label_150ef4;
        case 0x150ef8u: goto label_150ef8;
        case 0x150efcu: goto label_150efc;
        case 0x150f00u: goto label_150f00;
        case 0x150f04u: goto label_150f04;
        case 0x150f08u: goto label_150f08;
        case 0x150f0cu: goto label_150f0c;
        case 0x150f10u: goto label_150f10;
        case 0x150f14u: goto label_150f14;
        case 0x150f18u: goto label_150f18;
        case 0x150f1cu: goto label_150f1c;
        case 0x150f20u: goto label_150f20;
        case 0x150f24u: goto label_150f24;
        case 0x150f28u: goto label_150f28;
        case 0x150f2cu: goto label_150f2c;
        case 0x150f30u: goto label_150f30;
        case 0x150f34u: goto label_150f34;
        case 0x150f38u: goto label_150f38;
        case 0x150f3cu: goto label_150f3c;
        case 0x150f40u: goto label_150f40;
        case 0x150f44u: goto label_150f44;
        case 0x150f48u: goto label_150f48;
        case 0x150f4cu: goto label_150f4c;
        case 0x150f50u: goto label_150f50;
        case 0x150f54u: goto label_150f54;
        case 0x150f58u: goto label_150f58;
        case 0x150f5cu: goto label_150f5c;
        case 0x150f60u: goto label_150f60;
        case 0x150f64u: goto label_150f64;
        case 0x150f68u: goto label_150f68;
        case 0x150f6cu: goto label_150f6c;
        case 0x150f70u: goto label_150f70;
        case 0x150f74u: goto label_150f74;
        case 0x150f78u: goto label_150f78;
        case 0x150f7cu: goto label_150f7c;
        case 0x150f80u: goto label_150f80;
        case 0x150f84u: goto label_150f84;
        case 0x150f88u: goto label_150f88;
        case 0x150f8cu: goto label_150f8c;
        case 0x150f90u: goto label_150f90;
        case 0x150f94u: goto label_150f94;
        case 0x150f98u: goto label_150f98;
        case 0x150f9cu: goto label_150f9c;
        case 0x150fa0u: goto label_150fa0;
        case 0x150fa4u: goto label_150fa4;
        case 0x150fa8u: goto label_150fa8;
        case 0x150facu: goto label_150fac;
        case 0x150fb0u: goto label_150fb0;
        case 0x150fb4u: goto label_150fb4;
        case 0x150fb8u: goto label_150fb8;
        case 0x150fbcu: goto label_150fbc;
        case 0x150fc0u: goto label_150fc0;
        case 0x150fc4u: goto label_150fc4;
        case 0x150fc8u: goto label_150fc8;
        case 0x150fccu: goto label_150fcc;
        case 0x150fd0u: goto label_150fd0;
        case 0x150fd4u: goto label_150fd4;
        case 0x150fd8u: goto label_150fd8;
        case 0x150fdcu: goto label_150fdc;
        case 0x150fe0u: goto label_150fe0;
        case 0x150fe4u: goto label_150fe4;
        case 0x150fe8u: goto label_150fe8;
        case 0x150fecu: goto label_150fec;
        case 0x150ff0u: goto label_150ff0;
        case 0x150ff4u: goto label_150ff4;
        case 0x150ff8u: goto label_150ff8;
        case 0x150ffcu: goto label_150ffc;
        case 0x151000u: goto label_151000;
        case 0x151004u: goto label_151004;
        case 0x151008u: goto label_151008;
        case 0x15100cu: goto label_15100c;
        case 0x151010u: goto label_151010;
        case 0x151014u: goto label_151014;
        case 0x151018u: goto label_151018;
        case 0x15101cu: goto label_15101c;
        case 0x151020u: goto label_151020;
        case 0x151024u: goto label_151024;
        case 0x151028u: goto label_151028;
        case 0x15102cu: goto label_15102c;
        case 0x151030u: goto label_151030;
        case 0x151034u: goto label_151034;
        case 0x151038u: goto label_151038;
        case 0x15103cu: goto label_15103c;
        case 0x151040u: goto label_151040;
        case 0x151044u: goto label_151044;
        case 0x151048u: goto label_151048;
        case 0x15104cu: goto label_15104c;
        case 0x151050u: goto label_151050;
        case 0x151054u: goto label_151054;
        case 0x151058u: goto label_151058;
        case 0x15105cu: goto label_15105c;
        case 0x151060u: goto label_151060;
        case 0x151064u: goto label_151064;
        case 0x151068u: goto label_151068;
        case 0x15106cu: goto label_15106c;
        case 0x151070u: goto label_151070;
        case 0x151074u: goto label_151074;
        case 0x151078u: goto label_151078;
        case 0x15107cu: goto label_15107c;
        case 0x151080u: goto label_151080;
        case 0x151084u: goto label_151084;
        case 0x151088u: goto label_151088;
        case 0x15108cu: goto label_15108c;
        case 0x151090u: goto label_151090;
        case 0x151094u: goto label_151094;
        case 0x151098u: goto label_151098;
        case 0x15109cu: goto label_15109c;
        case 0x1510a0u: goto label_1510a0;
        case 0x1510a4u: goto label_1510a4;
        case 0x1510a8u: goto label_1510a8;
        case 0x1510acu: goto label_1510ac;
        case 0x1510b0u: goto label_1510b0;
        case 0x1510b4u: goto label_1510b4;
        case 0x1510b8u: goto label_1510b8;
        case 0x1510bcu: goto label_1510bc;
        case 0x1510c0u: goto label_1510c0;
        case 0x1510c4u: goto label_1510c4;
        case 0x1510c8u: goto label_1510c8;
        case 0x1510ccu: goto label_1510cc;
        case 0x1510d0u: goto label_1510d0;
        case 0x1510d4u: goto label_1510d4;
        case 0x1510d8u: goto label_1510d8;
        case 0x1510dcu: goto label_1510dc;
        case 0x1510e0u: goto label_1510e0;
        case 0x1510e4u: goto label_1510e4;
        case 0x1510e8u: goto label_1510e8;
        case 0x1510ecu: goto label_1510ec;
        case 0x1510f0u: goto label_1510f0;
        case 0x1510f4u: goto label_1510f4;
        case 0x1510f8u: goto label_1510f8;
        case 0x1510fcu: goto label_1510fc;
        case 0x151100u: goto label_151100;
        case 0x151104u: goto label_151104;
        case 0x151108u: goto label_151108;
        case 0x15110cu: goto label_15110c;
        case 0x151110u: goto label_151110;
        case 0x151114u: goto label_151114;
        case 0x151118u: goto label_151118;
        case 0x15111cu: goto label_15111c;
        case 0x151120u: goto label_151120;
        case 0x151124u: goto label_151124;
        case 0x151128u: goto label_151128;
        case 0x15112cu: goto label_15112c;
        case 0x151130u: goto label_151130;
        case 0x151134u: goto label_151134;
        case 0x151138u: goto label_151138;
        case 0x15113cu: goto label_15113c;
        case 0x151140u: goto label_151140;
        case 0x151144u: goto label_151144;
        case 0x151148u: goto label_151148;
        case 0x15114cu: goto label_15114c;
        case 0x151150u: goto label_151150;
        case 0x151154u: goto label_151154;
        case 0x151158u: goto label_151158;
        case 0x15115cu: goto label_15115c;
        case 0x151160u: goto label_151160;
        case 0x151164u: goto label_151164;
        case 0x151168u: goto label_151168;
        case 0x15116cu: goto label_15116c;
        case 0x151170u: goto label_151170;
        case 0x151174u: goto label_151174;
        case 0x151178u: goto label_151178;
        case 0x15117cu: goto label_15117c;
        case 0x151180u: goto label_151180;
        case 0x151184u: goto label_151184;
        case 0x151188u: goto label_151188;
        case 0x15118cu: goto label_15118c;
        case 0x151190u: goto label_151190;
        case 0x151194u: goto label_151194;
        case 0x151198u: goto label_151198;
        case 0x15119cu: goto label_15119c;
        case 0x1511a0u: goto label_1511a0;
        case 0x1511a4u: goto label_1511a4;
        case 0x1511a8u: goto label_1511a8;
        case 0x1511acu: goto label_1511ac;
        case 0x1511b0u: goto label_1511b0;
        case 0x1511b4u: goto label_1511b4;
        case 0x1511b8u: goto label_1511b8;
        case 0x1511bcu: goto label_1511bc;
        case 0x1511c0u: goto label_1511c0;
        case 0x1511c4u: goto label_1511c4;
        case 0x1511c8u: goto label_1511c8;
        case 0x1511ccu: goto label_1511cc;
        case 0x1511d0u: goto label_1511d0;
        case 0x1511d4u: goto label_1511d4;
        case 0x1511d8u: goto label_1511d8;
        case 0x1511dcu: goto label_1511dc;
        case 0x1511e0u: goto label_1511e0;
        case 0x1511e4u: goto label_1511e4;
        case 0x1511e8u: goto label_1511e8;
        case 0x1511ecu: goto label_1511ec;
        case 0x1511f0u: goto label_1511f0;
        case 0x1511f4u: goto label_1511f4;
        case 0x1511f8u: goto label_1511f8;
        case 0x1511fcu: goto label_1511fc;
        case 0x151200u: goto label_151200;
        case 0x151204u: goto label_151204;
        case 0x151208u: goto label_151208;
        case 0x15120cu: goto label_15120c;
        case 0x151210u: goto label_151210;
        case 0x151214u: goto label_151214;
        case 0x151218u: goto label_151218;
        case 0x15121cu: goto label_15121c;
        case 0x151220u: goto label_151220;
        case 0x151224u: goto label_151224;
        case 0x151228u: goto label_151228;
        case 0x15122cu: goto label_15122c;
        case 0x151230u: goto label_151230;
        case 0x151234u: goto label_151234;
        case 0x151238u: goto label_151238;
        case 0x15123cu: goto label_15123c;
        case 0x151240u: goto label_151240;
        case 0x151244u: goto label_151244;
        case 0x151248u: goto label_151248;
        case 0x15124cu: goto label_15124c;
        case 0x151250u: goto label_151250;
        case 0x151254u: goto label_151254;
        case 0x151258u: goto label_151258;
        case 0x15125cu: goto label_15125c;
        case 0x151260u: goto label_151260;
        case 0x151264u: goto label_151264;
        case 0x151268u: goto label_151268;
        case 0x15126cu: goto label_15126c;
        case 0x151270u: goto label_151270;
        case 0x151274u: goto label_151274;
        case 0x151278u: goto label_151278;
        case 0x15127cu: goto label_15127c;
        case 0x151280u: goto label_151280;
        case 0x151284u: goto label_151284;
        case 0x151288u: goto label_151288;
        case 0x15128cu: goto label_15128c;
        case 0x151290u: goto label_151290;
        case 0x151294u: goto label_151294;
        case 0x151298u: goto label_151298;
        case 0x15129cu: goto label_15129c;
        case 0x1512a0u: goto label_1512a0;
        case 0x1512a4u: goto label_1512a4;
        case 0x1512a8u: goto label_1512a8;
        case 0x1512acu: goto label_1512ac;
        default: return;
    }

label_150ae0:
    // 0x150ae0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x150ae0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_150ae4:
    // 0x150ae4: 0x0  nop
    ctx->pc = 0x150ae4u;
    // NOP
label_150ae8:
    // 0x150ae8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x150ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_150aec:
    // 0x150aec: 0xc04494c  jal         func_112530
label_150af0:
    if (ctx->pc == 0x150AF0u) {
        ctx->pc = 0x150AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150AECu;
        // 0x150af0: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150AF4u;
        goto label_150af4;
    }
    ctx->pc = 0x150AECu;
    SET_GPR_U32(ctx, 31, 0x150AF4u);
    ctx->pc = 0x150AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150AECu;
    // 0x150af0: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112530u, 0x150AECu, 0x150AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150AF4u;
label_150af4:
    // 0x150af4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_150af8:
    if (ctx->pc == 0x150AF8u) {
        ctx->pc = 0x150AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150AF4u;
        // 0x150af8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150AFCu;
        goto label_150afc;
    }
    ctx->pc = 0x150AF4u;
    {
        const bool branch_taken_0x150af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150AF4u;
        // 0x150af8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150af4) {
            ctx->pc = 0x150B18u;
            goto label_150b18;
        }
    }
    ctx->pc = 0x150AFCu;
label_150afc:
    // 0x150afc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x150afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_150b00:
    // 0x150b00: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x150b00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_150b04:
    // 0x150b04: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x150b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_150b08:
    // 0x150b08: 0xc043274  jal         func_10C9D0
label_150b0c:
    if (ctx->pc == 0x150B0Cu) {
        ctx->pc = 0x150B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150B08u;
        // 0x150b0c: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150B10u;
        goto label_150b10;
    }
    ctx->pc = 0x150B08u;
    SET_GPR_U32(ctx, 31, 0x150B10u);
    ctx->pc = 0x150B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150B08u;
    // 0x150b0c: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C9D0u, 0x150B08u, 0x150B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150B10u;
label_150b10:
    // 0x150b10: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_150b14:
    if (ctx->pc == 0x150B14u) {
        ctx->pc = 0x150B18u;
        goto label_150b18;
    }
    ctx->pc = 0x150B10u;
    {
        const bool branch_taken_0x150b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150b10) {
            ctx->pc = 0x150B2Cu;
            goto label_150b2c;
        }
    }
    ctx->pc = 0x150B18u;
label_150b18:
    // 0x150b18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x150b18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_150b1c:
    // 0x150b1c: 0x26100220  addiu       $s0, $s0, 0x220
    ctx->pc = 0x150b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
label_150b20:
    // 0x150b20: 0x2a220028  slti        $v0, $s1, 0x28
    ctx->pc = 0x150b20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)40) ? 1 : 0);
label_150b24:
    // 0x150b24: 0x1440ff90  bnez        $v0, . + 4 + (-0x70 << 2)
label_150b28:
    if (ctx->pc == 0x150B28u) {
        ctx->pc = 0x150B2Cu;
        goto label_150b2c;
    }
    ctx->pc = 0x150B24u;
    {
        const bool branch_taken_0x150b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x150b24) {
            ctx->pc = 0x150968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x150968; return; }
        }
    }
    ctx->pc = 0x150B2Cu;
label_150b2c:
    // 0x150b2c: 0x0  nop
    ctx->pc = 0x150b2cu;
    // NOP
label_150b30:
    // 0x150b30: 0x2a210028  slti        $at, $s1, 0x28
    ctx->pc = 0x150b30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)40) ? 1 : 0);
label_150b34:
    // 0x150b34: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_150b38:
    if (ctx->pc == 0x150B38u) {
        ctx->pc = 0x150B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150B34u;
        // 0x150b38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150B3Cu;
        goto label_150b3c;
    }
    ctx->pc = 0x150B34u;
    {
        const bool branch_taken_0x150b34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x150B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150B34u;
        // 0x150b38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150b34) {
            ctx->pc = 0x150B40u;
            goto label_150b40;
        }
    }
    ctx->pc = 0x150B3Cu;
label_150b3c:
    // 0x150b3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x150b3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_150b40:
    // 0x150b40: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x150b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_150b44:
    // 0x150b44: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x150b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_150b48:
    // 0x150b48: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x150b48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_150b4c:
    // 0x150b4c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x150b4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_150b50:
    // 0x150b50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x150b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_150b54:
    // 0x150b54: 0x3e00008  jr          $ra
label_150b58:
    if (ctx->pc == 0x150B58u) {
        ctx->pc = 0x150B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150B54u;
        // 0x150b58: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150B5Cu;
        goto label_150b5c;
    }
    ctx->pc = 0x150B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150B54u;
        // 0x150b58: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150B5Cu;
label_150b5c:
    // 0x150b5c: 0x0  nop
    ctx->pc = 0x150b5cu;
    // NOP
label_150b60:
    // 0x150b60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x150b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_150b64:
    // 0x150b64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x150b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_150b68:
    // 0x150b68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x150b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_150b6c:
    // 0x150b6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x150b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_150b70:
    // 0x150b70: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_150b74:
    if (ctx->pc == 0x150B74u) {
        ctx->pc = 0x150B78u;
        goto label_150b78;
    }
    ctx->pc = 0x150B70u;
    {
        const bool branch_taken_0x150b70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x150b70) {
            ctx->pc = 0x150B9Cu;
            goto label_150b9c;
        }
    }
    ctx->pc = 0x150B78u;
label_150b78:
    // 0x150b78: 0x8e040200  lw          $a0, 0x200($s0)
    ctx->pc = 0x150b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
label_150b7c:
    // 0x150b7c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_150b80:
    if (ctx->pc == 0x150B80u) {
        ctx->pc = 0x150B84u;
        goto label_150b84;
    }
    ctx->pc = 0x150B7Cu;
    {
        const bool branch_taken_0x150b7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x150b7c) {
            ctx->pc = 0x150B8Cu;
            goto label_150b8c;
        }
    }
    ctx->pc = 0x150B84u;
label_150b84:
    // 0x150b84: 0xc0542ec  jal         func_150BB0
label_150b88:
    if (ctx->pc == 0x150B88u) {
        ctx->pc = 0x150B8Cu;
        goto label_150b8c;
    }
    ctx->pc = 0x150B84u;
    SET_GPR_U32(ctx, 31, 0x150B8Cu);
    ctx->pc = 0x150BB0u;
    goto label_150bb0;
    ctx->pc = 0x150B8Cu;
label_150b8c:
    // 0x150b8c: 0xc0452cc  jal         func_114B30
label_150b90:
    if (ctx->pc == 0x150B90u) {
        ctx->pc = 0x150B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150B8Cu;
        // 0x150b90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150B94u;
        goto label_150b94;
    }
    ctx->pc = 0x150B8Cu;
    SET_GPR_U32(ctx, 31, 0x150B94u);
    ctx->pc = 0x150B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150B8Cu;
    // 0x150b90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114B30u, 0x150B8Cu, 0x150B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150B94u;
label_150b94:
    // 0x150b94: 0xae00020c  sw          $zero, 0x20C($s0)
    ctx->pc = 0x150b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 0));
label_150b98:
    // 0x150b98: 0xae000204  sw          $zero, 0x204($s0)
    ctx->pc = 0x150b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
label_150b9c:
    // 0x150b9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x150b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_150ba0:
    // 0x150ba0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x150ba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_150ba4:
    // 0x150ba4: 0x3e00008  jr          $ra
label_150ba8:
    if (ctx->pc == 0x150BA8u) {
        ctx->pc = 0x150BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150BA4u;
        // 0x150ba8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150BACu;
        goto label_150bac;
    }
    ctx->pc = 0x150BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150BA4u;
        // 0x150ba8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150BACu;
label_150bac:
    // 0x150bac: 0x0  nop
    ctx->pc = 0x150bacu;
    // NOP
label_150bb0:
    // 0x150bb0: 0x8c860038  lw          $a2, 0x38($a0)
    ctx->pc = 0x150bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_150bb4:
    // 0x150bb4: 0x10c0004d  beqz        $a2, . + 4 + (0x4D << 2)
label_150bb8:
    if (ctx->pc == 0x150BB8u) {
        ctx->pc = 0x150BBCu;
        goto label_150bbc;
    }
    ctx->pc = 0x150BB4u;
    {
        const bool branch_taken_0x150bb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x150bb4) {
            ctx->pc = 0x150CECu;
            goto label_150cec;
        }
    }
    ctx->pc = 0x150BBCu;
label_150bbc:
    // 0x150bbc: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x150bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_150bc0:
    // 0x150bc0: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
label_150bc4:
    if (ctx->pc == 0x150BC4u) {
        ctx->pc = 0x150BC8u;
        goto label_150bc8;
    }
    ctx->pc = 0x150BC0u;
    {
        const bool branch_taken_0x150bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150bc0) {
            ctx->pc = 0x150C80u;
            goto label_150c80;
        }
    }
    ctx->pc = 0x150BC8u;
label_150bc8:
    // 0x150bc8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x150bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_150bcc:
    // 0x150bcc: 0x24850040  addiu       $a1, $a0, 0x40
    ctx->pc = 0x150bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_150bd0:
    // 0x150bd0: 0xac650088  sw          $a1, 0x88($v1)
    ctx->pc = 0x150bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 5));
label_150bd4:
    // 0x150bd4: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x150bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_150bd8:
    // 0x150bd8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_150bdc:
    if (ctx->pc == 0x150BDCu) {
        ctx->pc = 0x150BE0u;
        goto label_150be0;
    }
    ctx->pc = 0x150BD8u;
    {
        const bool branch_taken_0x150bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150bd8) {
            ctx->pc = 0x150C38u;
            goto label_150c38;
        }
    }
    ctx->pc = 0x150BE0u;
label_150be0:
    // 0x150be0: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x150be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_150be4:
    // 0x150be4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x150be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_150be8:
    // 0x150be8: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x150be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_150bec:
    // 0x150bec: 0x24a70090  addiu       $a3, $a1, 0x90
    ctx->pc = 0x150becu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
label_150bf0:
    // 0x150bf0: 0x38650001  xori        $a1, $v1, 0x1
    ctx->pc = 0x150bf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_150bf4:
    // 0x150bf4: 0x24e3008e  addiu       $v1, $a3, 0x8E
    ctx->pc = 0x150bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 142));
label_150bf8:
    // 0x150bf8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x150bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_150bfc:
    // 0x150bfc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x150bfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_150c00:
    // 0x150c00: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_150c04:
    if (ctx->pc == 0x150C04u) {
        ctx->pc = 0x150C08u;
        goto label_150c08;
    }
    ctx->pc = 0x150C00u;
    {
        const bool branch_taken_0x150c00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150c00) {
            ctx->pc = 0x150C28u;
            goto label_150c28;
        }
    }
    ctx->pc = 0x150C08u;
label_150c08:
    // 0x150c08: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x150c08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_150c0c:
    // 0x150c0c: 0x24e30080  addiu       $v1, $a3, 0x80
    ctx->pc = 0x150c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
label_150c10:
    // 0x150c10: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x150c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_150c14:
    // 0x150c14: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x150c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_150c18:
    // 0x150c18: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x150c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_150c1c:
    // 0x150c1c: 0xc4620038  lwc1        $f2, 0x38($v1)
    ctx->pc = 0x150c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_150c20:
    // 0x150c20: 0x10000009  b           . + 4 + (0x9 << 2)
label_150c24:
    if (ctx->pc == 0x150C24u) {
        ctx->pc = 0x150C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150C20u;
        // 0x150c24: 0xc4600030  lwc1        $f0, 0x30($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x150C28u;
        goto label_150c28;
    }
    ctx->pc = 0x150C20u;
    {
        const bool branch_taken_0x150c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150C20u;
        // 0x150c24: 0xc4600030  lwc1        $f0, 0x30($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150c20) {
            ctx->pc = 0x150C48u;
            goto label_150c48;
        }
    }
    ctx->pc = 0x150C28u;
label_150c28:
    // 0x150c28: 0xc4c10154  lwc1        $f1, 0x154($a2)
    ctx->pc = 0x150c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_150c2c:
    // 0x150c2c: 0xc4c20158  lwc1        $f2, 0x158($a2)
    ctx->pc = 0x150c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_150c30:
    // 0x150c30: 0x10000005  b           . + 4 + (0x5 << 2)
label_150c34:
    if (ctx->pc == 0x150C34u) {
        ctx->pc = 0x150C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150C30u;
        // 0x150c34: 0xc4c00150  lwc1        $f0, 0x150($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x150C38u;
        goto label_150c38;
    }
    ctx->pc = 0x150C30u;
    {
        const bool branch_taken_0x150c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150C30u;
        // 0x150c34: 0xc4c00150  lwc1        $f0, 0x150($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150c30) {
            ctx->pc = 0x150C48u;
            goto label_150c48;
        }
    }
    ctx->pc = 0x150C38u;
label_150c38:
    // 0x150c38: 0xc4c00150  lwc1        $f0, 0x150($a2)
    ctx->pc = 0x150c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_150c3c:
    // 0x150c3c: 0xc4c10154  lwc1        $f1, 0x154($a2)
    ctx->pc = 0x150c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_150c40:
    // 0x150c40: 0xc4c20158  lwc1        $f2, 0x158($a2)
    ctx->pc = 0x150c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_150c44:
    // 0x150c44: 0x0  nop
    ctx->pc = 0x150c44u;
    // NOP
label_150c48:
    // 0x150c48: 0xe4800050  swc1        $f0, 0x50($a0)
    ctx->pc = 0x150c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
label_150c4c:
    // 0x150c4c: 0xe4820058  swc1        $f2, 0x58($a0)
    ctx->pc = 0x150c4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
label_150c50:
    // 0x150c50: 0x8483003e  lh          $v1, 0x3E($a0)
    ctx->pc = 0x150c50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 62)));
label_150c54:
    // 0x150c54: 0x286101ff  slti        $at, $v1, 0x1FF
    ctx->pc = 0x150c54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)511) ? 1 : 0);
label_150c58:
    // 0x150c58: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
label_150c5c:
    if (ctx->pc == 0x150C5Cu) {
        ctx->pc = 0x150C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150C58u;
        // 0x150c5c: 0x32900  sll         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150C60u;
        goto label_150c60;
    }
    ctx->pc = 0x150C58u;
    {
        const bool branch_taken_0x150c58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x150C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150C58u;
        // 0x150c5c: 0x32900  sll         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150c58) {
            ctx->pc = 0x150CC0u;
            goto label_150cc0;
        }
    }
    ctx->pc = 0x150C60u;
label_150c60:
    // 0x150c60: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x150c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_150c64:
    // 0x150c64: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x150c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_150c68:
    // 0x150c68: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x150c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_150c6c:
    // 0x150c6c: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x150c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_150c70:
    // 0x150c70: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_150c74:
    if (ctx->pc == 0x150C74u) {
        ctx->pc = 0x150C78u;
        goto label_150c78;
    }
    ctx->pc = 0x150C70u;
    {
        const bool branch_taken_0x150c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150c70) {
            ctx->pc = 0x150CC0u;
            goto label_150cc0;
        }
    }
    ctx->pc = 0x150C78u;
label_150c78:
    // 0x150c78: 0x10000011  b           . + 4 + (0x11 << 2)
label_150c7c:
    if (ctx->pc == 0x150C7Cu) {
        ctx->pc = 0x150C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150C78u;
        // 0x150c7c: 0xe4810054  swc1        $f1, 0x54($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x150C80u;
        goto label_150c80;
    }
    ctx->pc = 0x150C78u;
    {
        const bool branch_taken_0x150c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150C78u;
        // 0x150c7c: 0xe4810054  swc1        $f1, 0x54($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150c78) {
            ctx->pc = 0x150CC0u;
            goto label_150cc0;
        }
    }
    ctx->pc = 0x150C80u;
label_150c80:
    // 0x150c80: 0xc4c00150  lwc1        $f0, 0x150($a2)
    ctx->pc = 0x150c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_150c84:
    // 0x150c84: 0xe4800050  swc1        $f0, 0x50($a0)
    ctx->pc = 0x150c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
label_150c88:
    // 0x150c88: 0xc4c00154  lwc1        $f0, 0x154($a2)
    ctx->pc = 0x150c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_150c8c:
    // 0x150c8c: 0xe4800054  swc1        $f0, 0x54($a0)
    ctx->pc = 0x150c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
label_150c90:
    // 0x150c90: 0xc4c00158  lwc1        $f0, 0x158($a2)
    ctx->pc = 0x150c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_150c94:
    // 0x150c94: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x150c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
label_150c98:
    // 0x150c98: 0xc4c0015c  lwc1        $f0, 0x15C($a2)
    ctx->pc = 0x150c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_150c9c:
    // 0x150c9c: 0xe480005c  swc1        $f0, 0x5C($a0)
    ctx->pc = 0x150c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
label_150ca0:
    // 0x150ca0: 0xc4c00150  lwc1        $f0, 0x150($a2)
    ctx->pc = 0x150ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_150ca4:
    // 0x150ca4: 0xe4800150  swc1        $f0, 0x150($a0)
    ctx->pc = 0x150ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 336), bits); }
label_150ca8:
    // 0x150ca8: 0xc4c00154  lwc1        $f0, 0x154($a2)
    ctx->pc = 0x150ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_150cac:
    // 0x150cac: 0xe4800154  swc1        $f0, 0x154($a0)
    ctx->pc = 0x150cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 340), bits); }
label_150cb0:
    // 0x150cb0: 0xc4c00158  lwc1        $f0, 0x158($a2)
    ctx->pc = 0x150cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_150cb4:
    // 0x150cb4: 0xe4800158  swc1        $f0, 0x158($a0)
    ctx->pc = 0x150cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 344), bits); }
label_150cb8:
    // 0x150cb8: 0xc4c0015c  lwc1        $f0, 0x15C($a2)
    ctx->pc = 0x150cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_150cbc:
    // 0x150cbc: 0xe480015c  swc1        $f0, 0x15C($a0)
    ctx->pc = 0x150cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 348), bits); }
label_150cc0:
    // 0x150cc0: 0xa4c0019c  sh          $zero, 0x19C($a2)
    ctx->pc = 0x150cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 412), (uint16_t)GPR_U32(ctx, 0));
label_150cc4:
    // 0x150cc4: 0xa4c0019e  sh          $zero, 0x19E($a2)
    ctx->pc = 0x150cc4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 414), (uint16_t)GPR_U32(ctx, 0));
label_150cc8:
    // 0x150cc8: 0xacc00194  sw          $zero, 0x194($a2)
    ctx->pc = 0x150cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 404), GPR_U32(ctx, 0));
label_150ccc:
    // 0x150ccc: 0xacc00200  sw          $zero, 0x200($a2)
    ctx->pc = 0x150cccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 512), GPR_U32(ctx, 0));
label_150cd0:
    // 0x150cd0: 0xa4c00208  sh          $zero, 0x208($a2)
    ctx->pc = 0x150cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 520), (uint16_t)GPR_U32(ctx, 0));
label_150cd4:
    // 0x150cd4: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x150cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
label_150cd8:
    // 0x150cd8: 0x90c301a2  lbu         $v1, 0x1A2($a2)
    ctx->pc = 0x150cd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 418)));
label_150cdc:
    // 0x150cdc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_150ce0:
    if (ctx->pc == 0x150CE0u) {
        ctx->pc = 0x150CE4u;
        goto label_150ce4;
    }
    ctx->pc = 0x150CDCu;
    {
        const bool branch_taken_0x150cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x150cdc) {
            ctx->pc = 0x150CECu;
            goto label_150cec;
        }
    }
    ctx->pc = 0x150CE4u;
label_150ce4:
    // 0x150ce4: 0xacc0020c  sw          $zero, 0x20C($a2)
    ctx->pc = 0x150ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 524), GPR_U32(ctx, 0));
label_150ce8:
    // 0x150ce8: 0xacc00204  sw          $zero, 0x204($a2)
    ctx->pc = 0x150ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 516), GPR_U32(ctx, 0));
label_150cec:
    // 0x150cec: 0x3e00008  jr          $ra
label_150cf0:
    if (ctx->pc == 0x150CF0u) {
        ctx->pc = 0x150CF4u;
        goto label_150cf4;
    }
    ctx->pc = 0x150CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150CF4u;
label_150cf4:
    // 0x150cf4: 0x0  nop
    ctx->pc = 0x150cf4u;
    // NOP
label_150cf8:
    // 0x150cf8: 0x0  nop
    ctx->pc = 0x150cf8u;
    // NOP
label_150cfc:
    // 0x150cfc: 0x0  nop
    ctx->pc = 0x150cfcu;
    // NOP
label_150d00:
    // 0x150d00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x150d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_150d04:
    // 0x150d04: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x150d04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_150d08:
    // 0x150d08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x150d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_150d0c:
    // 0x150d0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x150d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_150d10:
    // 0x150d10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x150d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_150d14:
    // 0x150d14: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x150d14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_150d18:
    // 0x150d18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x150d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_150d1c:
    // 0x150d1c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x150d1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_150d20:
    // 0x150d20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x150d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_150d24:
    // 0x150d24: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x150d24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_150d28:
    // 0x150d28: 0x8f908128  lw          $s0, -0x7ED8($gp)
    ctx->pc = 0x150d28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934824)));
label_150d2c:
    // 0x150d2c: 0x0  nop
    ctx->pc = 0x150d2cu;
    // NOP
label_150d30:
    // 0x150d30: 0x0  nop
    ctx->pc = 0x150d30u;
    // NOP
label_150d34:
    // 0x150d34: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x150d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_150d38:
    // 0x150d38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_150d3c:
    if (ctx->pc == 0x150D3Cu) {
        ctx->pc = 0x150D40u;
        goto label_150d40;
    }
    ctx->pc = 0x150D38u;
    {
        const bool branch_taken_0x150d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150d38) {
            ctx->pc = 0x150D50u;
            goto label_150d50;
        }
    }
    ctx->pc = 0x150D40u;
label_150d40:
    // 0x150d40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x150d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_150d44:
    // 0x150d44: 0x28620028  slti        $v0, $v1, 0x28
    ctx->pc = 0x150d44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)40) ? 1 : 0);
label_150d48:
    // 0x150d48: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_150d4c:
    if (ctx->pc == 0x150D4Cu) {
        ctx->pc = 0x150D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150D48u;
        // 0x150d4c: 0x26100220  addiu       $s0, $s0, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150D50u;
        goto label_150d50;
    }
    ctx->pc = 0x150D48u;
    {
        const bool branch_taken_0x150d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150D48u;
        // 0x150d4c: 0x26100220  addiu       $s0, $s0, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150d48) {
            ctx->pc = 0x150D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150d30;
        }
    }
    ctx->pc = 0x150D50u;
label_150d50:
    // 0x150d50: 0x28610028  slti        $at, $v1, 0x28
    ctx->pc = 0x150d50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)40) ? 1 : 0);
label_150d54:
    // 0x150d54: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
label_150d58:
    if (ctx->pc == 0x150D58u) {
        ctx->pc = 0x150D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150D54u;
        // 0x150d58: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150D5Cu;
        goto label_150d5c;
    }
    ctx->pc = 0x150D54u;
    {
        const bool branch_taken_0x150d54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x150D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150D54u;
        // 0x150d58: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150d54) {
            ctx->pc = 0x150DFCu;
            goto label_150dfc;
        }
    }
    ctx->pc = 0x150D5Cu;
label_150d5c:
    // 0x150d5c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x150d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_150d60:
    // 0x150d60: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x150d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_150d64:
    // 0x150d64: 0x24420f80  addiu       $v0, $v0, 0xF80
    ctx->pc = 0x150d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3968));
label_150d68:
    // 0x150d68: 0xa604020a  sh          $a0, 0x20A($s0)
    ctx->pc = 0x150d68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 522), (uint16_t)GPR_U32(ctx, 4));
label_150d6c:
    // 0x150d6c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x150d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_150d70:
    // 0x150d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_150d74:
    // 0x150d74: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x150d74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_150d78:
    // 0x150d78: 0xa2020210  sb          $v0, 0x210($s0)
    ctx->pc = 0x150d78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 528), (uint8_t)GPR_U32(ctx, 2));
label_150d7c:
    // 0x150d7c: 0x80620001  lb          $v0, 0x1($v1)
    ctx->pc = 0x150d7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_150d80:
    // 0x150d80: 0xa2020211  sb          $v0, 0x211($s0)
    ctx->pc = 0x150d80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 529), (uint8_t)GPR_U32(ctx, 2));
label_150d84:
    // 0x150d84: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x150d84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_150d88:
    // 0x150d88: 0xa6020212  sh          $v0, 0x212($s0)
    ctx->pc = 0x150d88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 530), (uint16_t)GPR_U32(ctx, 2));
label_150d8c:
    // 0x150d8c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x150d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_150d90:
    // 0x150d90: 0xe6000214  swc1        $f0, 0x214($s0)
    ctx->pc = 0x150d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 532), bits); }
label_150d94:
    // 0x150d94: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x150d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_150d98:
    // 0x150d98: 0xe6000218  swc1        $f0, 0x218($s0)
    ctx->pc = 0x150d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 536), bits); }
label_150d9c:
    // 0x150d9c: 0x8462000c  lh          $v0, 0xC($v1)
    ctx->pc = 0x150d9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_150da0:
    // 0x150da0: 0xa602021c  sh          $v0, 0x21C($s0)
    ctx->pc = 0x150da0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 540), (uint16_t)GPR_U32(ctx, 2));
label_150da4:
    // 0x150da4: 0x8062000e  lb          $v0, 0xE($v1)
    ctx->pc = 0x150da4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 14)));
label_150da8:
    // 0x150da8: 0xa202021e  sb          $v0, 0x21E($s0)
    ctx->pc = 0x150da8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 542), (uint8_t)GPR_U32(ctx, 2));
label_150dac:
    // 0x150dac: 0x8062000f  lb          $v0, 0xF($v1)
    ctx->pc = 0x150dacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
label_150db0:
    // 0x150db0: 0xa202021f  sb          $v0, 0x21F($s0)
    ctx->pc = 0x150db0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 543), (uint8_t)GPR_U32(ctx, 2));
label_150db4:
    // 0x150db4: 0x8062000f  lb          $v0, 0xF($v1)
    ctx->pc = 0x150db4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
label_150db8:
    // 0x150db8: 0xc0457b0  jal         func_115EC0
label_150dbc:
    if (ctx->pc == 0x150DBCu) {
        ctx->pc = 0x150DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150DB8u;
        // 0x150dbc: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150DC0u;
        goto label_150dc0;
    }
    ctx->pc = 0x150DB8u;
    SET_GPR_U32(ctx, 31, 0x150DC0u);
    ctx->pc = 0x150DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150DB8u;
    // 0x150dbc: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115EC0u, 0x150DB8u, 0x150DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150DC0u;
label_150dc0:
    // 0x150dc0: 0x26040160  addiu       $a0, $s0, 0x160
    ctx->pc = 0x150dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
label_150dc4:
    // 0x150dc4: 0xc066e26  jal         func_19B898
label_150dc8:
    if (ctx->pc == 0x150DC8u) {
        ctx->pc = 0x150DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150DC4u;
        // 0x150dc8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150DCCu;
        goto label_150dcc;
    }
    ctx->pc = 0x150DC4u;
    SET_GPR_U32(ctx, 31, 0x150DCCu);
    ctx->pc = 0x150DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150DC4u;
    // 0x150dc8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x150DCCu;
label_150dcc:
    // 0x150dcc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x150dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_150dd0:
    // 0x150dd0: 0xc066e26  jal         func_19B898
label_150dd4:
    if (ctx->pc == 0x150DD4u) {
        ctx->pc = 0x150DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150DD0u;
        // 0x150dd4: 0x26040150  addiu       $a0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150DD8u;
        goto label_150dd8;
    }
    ctx->pc = 0x150DD0u;
    SET_GPR_U32(ctx, 31, 0x150DD8u);
    ctx->pc = 0x150DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150DD0u;
    // 0x150dd4: 0x26040150  addiu       $a0, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x150DD8u;
label_150dd8:
    // 0x150dd8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x150dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_150ddc:
    // 0x150ddc: 0xc066e26  jal         func_19B898
label_150de0:
    if (ctx->pc == 0x150DE0u) {
        ctx->pc = 0x150DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150DDCu;
        // 0x150de0: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150DE4u;
        goto label_150de4;
    }
    ctx->pc = 0x150DDCu;
    SET_GPR_U32(ctx, 31, 0x150DE4u);
    ctx->pc = 0x150DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150DDCu;
    // 0x150de0: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x150DE4u;
label_150de4:
    // 0x150de4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x150de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_150de8:
    // 0x150de8: 0xc066e26  jal         func_19B898
label_150dec:
    if (ctx->pc == 0x150DECu) {
        ctx->pc = 0x150DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150DE8u;
        // 0x150dec: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150DF0u;
        goto label_150df0;
    }
    ctx->pc = 0x150DE8u;
    SET_GPR_U32(ctx, 31, 0x150DF0u);
    ctx->pc = 0x150DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150DE8u;
    // 0x150dec: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x150DF0u;
label_150df0:
    // 0x150df0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x150df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_150df4:
    // 0x150df4: 0xae02020c  sw          $v0, 0x20C($s0)
    ctx->pc = 0x150df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 2));
label_150df8:
    // 0x150df8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x150df8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_150dfc:
    // 0x150dfc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x150dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_150e00:
    // 0x150e00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x150e00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_150e04:
    // 0x150e04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x150e04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_150e08:
    // 0x150e08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x150e08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_150e0c:
    // 0x150e0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x150e0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_150e10:
    // 0x150e10: 0x3e00008  jr          $ra
label_150e14:
    if (ctx->pc == 0x150E14u) {
        ctx->pc = 0x150E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E10u;
        // 0x150e14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150E18u;
        goto label_150e18;
    }
    ctx->pc = 0x150E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E10u;
        // 0x150e14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150E18u;
label_150e18:
    // 0x150e18: 0x0  nop
    ctx->pc = 0x150e18u;
    // NOP
label_150e1c:
    // 0x150e1c: 0x0  nop
    ctx->pc = 0x150e1cu;
    // NOP
label_150e20:
    // 0x150e20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x150e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_150e24:
    // 0x150e24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x150e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_150e28:
    // 0x150e28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x150e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_150e2c:
    // 0x150e2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x150e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_150e30:
    // 0x150e30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x150e30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_150e34:
    // 0x150e34: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x150e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_150e38:
    // 0x150e38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_150e3c:
    if (ctx->pc == 0x150E3Cu) {
        ctx->pc = 0x150E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E38u;
        // 0x150e3c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150E40u;
        goto label_150e40;
    }
    ctx->pc = 0x150E38u;
    {
        const bool branch_taken_0x150e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E38u;
        // 0x150e3c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e38) {
            ctx->pc = 0x150E48u;
            goto label_150e48;
        }
    }
    ctx->pc = 0x150E40u;
label_150e40:
    // 0x150e40: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_150e44:
    if (ctx->pc == 0x150E44u) {
        ctx->pc = 0x150E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E40u;
        // 0x150e44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150E48u;
        goto label_150e48;
    }
    ctx->pc = 0x150E40u;
    {
        const bool branch_taken_0x150e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E40u;
        // 0x150e44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e40) {
            ctx->pc = 0x1510CCu;
            goto label_1510cc;
        }
    }
    ctx->pc = 0x150E48u;
label_150e48:
    // 0x150e48: 0x16000048  bnez        $s0, . + 4 + (0x48 << 2)
label_150e4c:
    if (ctx->pc == 0x150E4Cu) {
        ctx->pc = 0x150E50u;
        goto label_150e50;
    }
    ctx->pc = 0x150E48u;
    {
        const bool branch_taken_0x150e48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x150e48) {
            ctx->pc = 0x150F6Cu;
            goto label_150f6c;
        }
    }
    ctx->pc = 0x150E50u;
label_150e50:
    // 0x150e50: 0x8f868128  lw          $a2, -0x7ED8($gp)
    ctx->pc = 0x150e50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934824)));
label_150e54:
    // 0x150e54: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x150e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_150e58:
    // 0x150e58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x150e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_150e5c:
    // 0x150e5c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x150e5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_150e60:
    // 0x150e60: 0x8c62020c  lw          $v0, 0x20C($v1)
    ctx->pc = 0x150e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
label_150e64:
    // 0x150e64: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_150e68:
    if (ctx->pc == 0x150E68u) {
        ctx->pc = 0x150E6Cu;
        goto label_150e6c;
    }
    ctx->pc = 0x150E64u;
    {
        const bool branch_taken_0x150e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x150e64) {
            ctx->pc = 0x150E70u;
            goto label_150e70;
        }
    }
    ctx->pc = 0x150E6Cu;
label_150e6c:
    // 0x150e6c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x150e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_150e70:
    // 0x150e70: 0x8c620200  lw          $v0, 0x200($v1)
    ctx->pc = 0x150e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 512)));
label_150e74:
    // 0x150e74: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
label_150e78:
    if (ctx->pc == 0x150E78u) {
        ctx->pc = 0x150E7Cu;
        goto label_150e7c;
    }
    ctx->pc = 0x150E74u;
    {
        const bool branch_taken_0x150e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x150e74) {
            ctx->pc = 0x150E84u;
            goto label_150e84;
        }
    }
    ctx->pc = 0x150E7Cu;
label_150e7c:
    // 0x150e7c: 0x1000000a  b           . + 4 + (0xA << 2)
label_150e80:
    if (ctx->pc == 0x150E80u) {
        ctx->pc = 0x150E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E7Cu;
        // 0x150e80: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150E84u;
        goto label_150e84;
    }
    ctx->pc = 0x150E7Cu;
    {
        const bool branch_taken_0x150e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E7Cu;
        // 0x150e80: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e7c) {
            ctx->pc = 0x150EA8u;
            goto label_150ea8;
        }
    }
    ctx->pc = 0x150E84u;
label_150e84:
    // 0x150e84: 0x8c620204  lw          $v0, 0x204($v1)
    ctx->pc = 0x150e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 516)));
label_150e88:
    // 0x150e88: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
label_150e8c:
    if (ctx->pc == 0x150E8Cu) {
        ctx->pc = 0x150E90u;
        goto label_150e90;
    }
    ctx->pc = 0x150E88u;
    {
        const bool branch_taken_0x150e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x150e88) {
            ctx->pc = 0x150E98u;
            goto label_150e98;
        }
    }
    ctx->pc = 0x150E90u;
label_150e90:
    // 0x150e90: 0x10000005  b           . + 4 + (0x5 << 2)
label_150e94:
    if (ctx->pc == 0x150E94u) {
        ctx->pc = 0x150E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E90u;
        // 0x150e94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150E98u;
        goto label_150e98;
    }
    ctx->pc = 0x150E90u;
    {
        const bool branch_taken_0x150e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E90u;
        // 0x150e94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e90) {
            ctx->pc = 0x150EA8u;
            goto label_150ea8;
        }
    }
    ctx->pc = 0x150E98u;
label_150e98:
    // 0x150e98: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x150e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_150e9c:
    // 0x150e9c: 0x28820028  slti        $v0, $a0, 0x28
    ctx->pc = 0x150e9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)40) ? 1 : 0);
label_150ea0:
    // 0x150ea0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_150ea4:
    if (ctx->pc == 0x150EA4u) {
        ctx->pc = 0x150EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150EA0u;
        // 0x150ea4: 0x24630220  addiu       $v1, $v1, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150EA8u;
        goto label_150ea8;
    }
    ctx->pc = 0x150EA0u;
    {
        const bool branch_taken_0x150ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150EA0u;
        // 0x150ea4: 0x24630220  addiu       $v1, $v1, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ea0) {
            ctx->pc = 0x150E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150e60;
        }
    }
    ctx->pc = 0x150EA8u;
label_150ea8:
    // 0x150ea8: 0x28820028  slti        $v0, $a0, 0x28
    ctx->pc = 0x150ea8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)40) ? 1 : 0);
label_150eac:
    // 0x150eac: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
label_150eb0:
    if (ctx->pc == 0x150EB0u) {
        ctx->pc = 0x150EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150EACu;
        // 0x150eb0: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150EB4u;
        goto label_150eb4;
    }
    ctx->pc = 0x150EACu;
    {
        const bool branch_taken_0x150eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150EACu;
        // 0x150eb0: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150eac) {
            ctx->pc = 0x150F7Cu;
            goto label_150f7c;
        }
    }
    ctx->pc = 0x150EB4u;
label_150eb4:
    // 0x150eb4: 0x10a20031  beq         $a1, $v0, . + 4 + (0x31 << 2)
label_150eb8:
    if (ctx->pc == 0x150EB8u) {
        ctx->pc = 0x150EBCu;
        goto label_150ebc;
    }
    ctx->pc = 0x150EB4u;
    {
        const bool branch_taken_0x150eb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x150eb4) {
            ctx->pc = 0x150F7Cu;
            goto label_150f7c;
        }
    }
    ctx->pc = 0x150EBCu;
label_150ebc:
    // 0x150ebc: 0x92230246  lbu         $v1, 0x246($s1)
    ctx->pc = 0x150ebcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 582)));
label_150ec0:
    // 0x150ec0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x150ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_150ec4:
    // 0x150ec4: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x150ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_150ec8:
    // 0x150ec8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x150ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_150ecc:
    // 0x150ecc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x150eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_150ed0:
    // 0x150ed0: 0xc48021  addu        $s0, $a2, $a0
    ctx->pc = 0x150ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_150ed4:
    // 0x150ed4: 0x24420f80  addiu       $v0, $v0, 0xF80
    ctx->pc = 0x150ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3968));
label_150ed8:
    // 0x150ed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_150edc:
    // 0x150edc: 0xa603020a  sh          $v1, 0x20A($s0)
    ctx->pc = 0x150edcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 522), (uint16_t)GPR_U32(ctx, 3));
label_150ee0:
    // 0x150ee0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x150ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_150ee4:
    // 0x150ee4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x150ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_150ee8:
    // 0x150ee8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x150ee8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_150eec:
    // 0x150eec: 0xa2020210  sb          $v0, 0x210($s0)
    ctx->pc = 0x150eecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 528), (uint8_t)GPR_U32(ctx, 2));
label_150ef0:
    // 0x150ef0: 0x80620001  lb          $v0, 0x1($v1)
    ctx->pc = 0x150ef0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_150ef4:
    // 0x150ef4: 0xa2020211  sb          $v0, 0x211($s0)
    ctx->pc = 0x150ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 529), (uint8_t)GPR_U32(ctx, 2));
label_150ef8:
    // 0x150ef8: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x150ef8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_150efc:
    // 0x150efc: 0xa6020212  sh          $v0, 0x212($s0)
    ctx->pc = 0x150efcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 530), (uint16_t)GPR_U32(ctx, 2));
label_150f00:
    // 0x150f00: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x150f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_150f04:
    // 0x150f04: 0xe6000214  swc1        $f0, 0x214($s0)
    ctx->pc = 0x150f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 532), bits); }
label_150f08:
    // 0x150f08: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x150f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_150f0c:
    // 0x150f0c: 0xe6000218  swc1        $f0, 0x218($s0)
    ctx->pc = 0x150f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 536), bits); }
label_150f10:
    // 0x150f10: 0x8462000c  lh          $v0, 0xC($v1)
    ctx->pc = 0x150f10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_150f14:
    // 0x150f14: 0xa602021c  sh          $v0, 0x21C($s0)
    ctx->pc = 0x150f14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 540), (uint16_t)GPR_U32(ctx, 2));
label_150f18:
    // 0x150f18: 0x8062000e  lb          $v0, 0xE($v1)
    ctx->pc = 0x150f18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 14)));
label_150f1c:
    // 0x150f1c: 0xa202021e  sb          $v0, 0x21E($s0)
    ctx->pc = 0x150f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 542), (uint8_t)GPR_U32(ctx, 2));
label_150f20:
    // 0x150f20: 0x8062000f  lb          $v0, 0xF($v1)
    ctx->pc = 0x150f20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
label_150f24:
    // 0x150f24: 0xa202021f  sb          $v0, 0x21F($s0)
    ctx->pc = 0x150f24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 543), (uint8_t)GPR_U32(ctx, 2));
label_150f28:
    // 0x150f28: 0x8062000f  lb          $v0, 0xF($v1)
    ctx->pc = 0x150f28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
label_150f2c:
    // 0x150f2c: 0xc0457b0  jal         func_115EC0
label_150f30:
    if (ctx->pc == 0x150F30u) {
        ctx->pc = 0x150F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F2Cu;
        // 0x150f30: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150F34u;
        goto label_150f34;
    }
    ctx->pc = 0x150F2Cu;
    SET_GPR_U32(ctx, 31, 0x150F34u);
    ctx->pc = 0x150F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150F2Cu;
    // 0x150f30: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115EC0u, 0x150F2Cu, 0x150F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150F34u;
label_150f34:
    // 0x150f34: 0x26040160  addiu       $a0, $s0, 0x160
    ctx->pc = 0x150f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
label_150f38:
    // 0x150f38: 0xc066e26  jal         func_19B898
label_150f3c:
    if (ctx->pc == 0x150F3Cu) {
        ctx->pc = 0x150F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F38u;
        // 0x150f3c: 0x26250150  addiu       $a1, $s1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150F40u;
        goto label_150f40;
    }
    ctx->pc = 0x150F38u;
    SET_GPR_U32(ctx, 31, 0x150F40u);
    ctx->pc = 0x150F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150F38u;
    // 0x150f3c: 0x26250150  addiu       $a1, $s1, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x150F40u;
label_150f40:
    // 0x150f40: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x150f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_150f44:
    // 0x150f44: 0xc066e26  jal         func_19B898
label_150f48:
    if (ctx->pc == 0x150F48u) {
        ctx->pc = 0x150F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F44u;
        // 0x150f48: 0x26250150  addiu       $a1, $s1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150F4Cu;
        goto label_150f4c;
    }
    ctx->pc = 0x150F44u;
    SET_GPR_U32(ctx, 31, 0x150F4Cu);
    ctx->pc = 0x150F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150F44u;
    // 0x150f48: 0x26250150  addiu       $a1, $s1, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x150F4Cu;
label_150f4c:
    // 0x150f4c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x150f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_150f50:
    // 0x150f50: 0xc066e26  jal         func_19B898
label_150f54:
    if (ctx->pc == 0x150F54u) {
        ctx->pc = 0x150F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F50u;
        // 0x150f54: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150F58u;
        goto label_150f58;
    }
    ctx->pc = 0x150F50u;
    SET_GPR_U32(ctx, 31, 0x150F58u);
    ctx->pc = 0x150F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150F50u;
    // 0x150f54: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x150F58u;
label_150f58:
    // 0x150f58: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x150f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_150f5c:
    // 0x150f5c: 0xc066e26  jal         func_19B898
label_150f60:
    if (ctx->pc == 0x150F60u) {
        ctx->pc = 0x150F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F5Cu;
        // 0x150f60: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150F64u;
        goto label_150f64;
    }
    ctx->pc = 0x150F5Cu;
    SET_GPR_U32(ctx, 31, 0x150F64u);
    ctx->pc = 0x150F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150F5Cu;
    // 0x150f60: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x150F64u;
label_150f64:
    // 0x150f64: 0x10000005  b           . + 4 + (0x5 << 2)
label_150f68:
    if (ctx->pc == 0x150F68u) {
        ctx->pc = 0x150F6Cu;
        goto label_150f6c;
    }
    ctx->pc = 0x150F64u;
    {
        const bool branch_taken_0x150f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150f64) {
            ctx->pc = 0x150F7Cu;
            goto label_150f7c;
        }
    }
    ctx->pc = 0x150F6Cu;
label_150f6c:
    // 0x150f6c: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x150f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
label_150f70:
    // 0x150f70: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_150f74:
    if (ctx->pc == 0x150F74u) {
        ctx->pc = 0x150F78u;
        goto label_150f78;
    }
    ctx->pc = 0x150F70u;
    {
        const bool branch_taken_0x150f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150f70) {
            ctx->pc = 0x150F7Cu;
            goto label_150f7c;
        }
    }
    ctx->pc = 0x150F78u;
label_150f78:
    // 0x150f78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x150f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_150f7c:
    // 0x150f7c: 0x12000053  beqz        $s0, . + 4 + (0x53 << 2)
label_150f80:
    if (ctx->pc == 0x150F80u) {
        ctx->pc = 0x150F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F7Cu;
        // 0x150f80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150F84u;
        goto label_150f84;
    }
    ctx->pc = 0x150F7Cu;
    {
        const bool branch_taken_0x150f7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x150F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F7Cu;
        // 0x150f80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150f7c) {
            ctx->pc = 0x1510CCu;
            goto label_1510cc;
        }
    }
    ctx->pc = 0x150F84u;
label_150f84:
    // 0x150f84: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x150f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_150f88:
    // 0x150f88: 0xa2220231  sb          $v0, 0x231($s1)
    ctx->pc = 0x150f88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 561), (uint8_t)GPR_U32(ctx, 2));
label_150f8c:
    // 0x150f8c: 0xae300038  sw          $s0, 0x38($s1)
    ctx->pc = 0x150f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 16));
label_150f90:
    // 0x150f90: 0x922201a2  lbu         $v0, 0x1A2($s1)
    ctx->pc = 0x150f90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 418)));
label_150f94:
    // 0x150f94: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_150f98:
    if (ctx->pc == 0x150F98u) {
        ctx->pc = 0x150F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F94u;
        // 0x150f98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150F9Cu;
        goto label_150f9c;
    }
    ctx->pc = 0x150F94u;
    {
        const bool branch_taken_0x150f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F94u;
        // 0x150f98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150f94) {
            ctx->pc = 0x150FE0u;
            goto label_150fe0;
        }
    }
    ctx->pc = 0x150F9Cu;
label_150f9c:
    // 0x150f9c: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x150f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_150fa0:
    // 0x150fa0: 0x3062000c  andi        $v0, $v1, 0xC
    ctx->pc = 0x150fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
label_150fa4:
    // 0x150fa4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_150fa8:
    if (ctx->pc == 0x150FA8u) {
        ctx->pc = 0x150FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FA4u;
        // 0x150fa8: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x150FACu;
        goto label_150fac;
    }
    ctx->pc = 0x150FA4u;
    {
        const bool branch_taken_0x150fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FA4u;
        // 0x150fa8: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x150fa4) {
            ctx->pc = 0x150FB4u;
            goto label_150fb4;
        }
    }
    ctx->pc = 0x150FACu;
label_150fac:
    // 0x150fac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_150fb0:
    if (ctx->pc == 0x150FB0u) {
        ctx->pc = 0x150FB4u;
        goto label_150fb4;
    }
    ctx->pc = 0x150FACu;
    {
        const bool branch_taken_0x150fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150fac) {
            ctx->pc = 0x150FDCu;
            goto label_150fdc;
        }
    }
    ctx->pc = 0x150FB4u;
label_150fb4:
    // 0x150fb4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x150fb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_150fb8:
    // 0x150fb8: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x150fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_150fbc:
    // 0x150fbc: 0xc050f08  jal         func_143C20
label_150fc0:
    if (ctx->pc == 0x150FC0u) {
        ctx->pc = 0x150FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FBCu;
        // 0x150fc0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150FC4u;
        goto label_150fc4;
    }
    ctx->pc = 0x150FBCu;
    SET_GPR_U32(ctx, 31, 0x150FC4u);
    ctx->pc = 0x150FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150FBCu;
    // 0x150fc0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143C20u, 0x150FBCu, 0x150FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150FC4u;
label_150fc4:
    // 0x150fc4: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x150fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_150fc8:
    // 0x150fc8: 0xc066e26  jal         func_19B898
label_150fcc:
    if (ctx->pc == 0x150FCCu) {
        ctx->pc = 0x150FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FC8u;
        // 0x150fcc: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150FD0u;
        goto label_150fd0;
    }
    ctx->pc = 0x150FC8u;
    SET_GPR_U32(ctx, 31, 0x150FD0u);
    ctx->pc = 0x150FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150FC8u;
    // 0x150fcc: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x150FD0u;
label_150fd0:
    // 0x150fd0: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x150fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_150fd4:
    // 0x150fd4: 0xc066e26  jal         func_19B898
label_150fd8:
    if (ctx->pc == 0x150FD8u) {
        ctx->pc = 0x150FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FD4u;
        // 0x150fd8: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150FDCu;
        goto label_150fdc;
    }
    ctx->pc = 0x150FD4u;
    SET_GPR_U32(ctx, 31, 0x150FDCu);
    ctx->pc = 0x150FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150FD4u;
    // 0x150fd8: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x150FDCu;
label_150fdc:
    // 0x150fdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x150fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_150fe0:
    // 0x150fe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x150fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_150fe4:
    // 0x150fe4: 0xae02020c  sw          $v0, 0x20C($s0)
    ctx->pc = 0x150fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 2));
label_150fe8:
    // 0x150fe8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x150fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_150fec:
    // 0x150fec: 0xc075224  jal         func_1D4890
label_150ff0:
    if (ctx->pc == 0x150FF0u) {
        ctx->pc = 0x150FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FECu;
        // 0x150ff0: 0xae110200  sw          $s1, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150FF4u;
        goto label_150ff4;
    }
    ctx->pc = 0x150FECu;
    SET_GPR_U32(ctx, 31, 0x150FF4u);
    ctx->pc = 0x150FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150FECu;
    // 0x150ff0: 0xae110200  sw          $s1, 0x200($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4890u;
    { ctx->pc = 0x1d4890; return; }
    ctx->pc = 0x150FF4u;
label_150ff4:
    // 0x150ff4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_150ff8:
    if (ctx->pc == 0x150FF8u) {
        ctx->pc = 0x150FFCu;
        goto label_150ffc;
    }
    ctx->pc = 0x150FF4u;
    {
        const bool branch_taken_0x150ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150ff4) {
            ctx->pc = 0x151030u;
            goto label_151030;
        }
    }
    ctx->pc = 0x150FFCu;
label_150ffc:
    // 0x150ffc: 0xae110204  sw          $s1, 0x204($s0)
    ctx->pc = 0x150ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 17));
label_151000:
    // 0x151000: 0x92220232  lbu         $v0, 0x232($s1)
    ctx->pc = 0x151000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 562)));
label_151004:
    // 0x151004: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_151008:
    if (ctx->pc == 0x151008u) {
        ctx->pc = 0x151008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151004u;
        // 0x151008: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15100Cu;
        goto label_15100c;
    }
    ctx->pc = 0x151004u;
    {
        const bool branch_taken_0x151004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151004u;
        // 0x151008: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151004) {
            ctx->pc = 0x151030u;
            goto label_151030;
        }
    }
    ctx->pc = 0x15100Cu;
label_15100c:
    // 0x15100c: 0xc0439cc  jal         func_10E730
label_151010:
    if (ctx->pc == 0x151010u) {
        ctx->pc = 0x151014u;
        goto label_151014;
    }
    ctx->pc = 0x15100Cu;
    SET_GPR_U32(ctx, 31, 0x151014u);
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x15100Cu, 0x151014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151014u;
label_151014:
    // 0x151014: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x151014u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_151018:
    // 0x151018: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x151018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_15101c:
    // 0x15101c: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x15101cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_151020:
    // 0x151020: 0x246303d0  addiu       $v1, $v1, 0x3D0
    ctx->pc = 0x151020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 976));
label_151024:
    // 0x151024: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x151024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_151028:
    // 0x151028: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x151028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15102c:
    // 0x15102c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x15102cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_151030:
    // 0x151030: 0x8603020a  lh          $v1, 0x20A($s0)
    ctx->pc = 0x151030u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 522)));
label_151034:
    // 0x151034: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x151034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_151038:
    // 0x151038: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
label_15103c:
    if (ctx->pc == 0x15103Cu) {
        ctx->pc = 0x15103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151038u;
        // 0x15103c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151040u;
        goto label_151040;
    }
    ctx->pc = 0x151038u;
    {
        const bool branch_taken_0x151038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151038u;
        // 0x15103c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151038) {
            ctx->pc = 0x1510C4u;
            goto label_1510c4;
        }
    }
    ctx->pc = 0x151040u;
label_151040:
    // 0x151040: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x151040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_151044:
    // 0x151044: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x151044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_151048:
    // 0x151048: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x151048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_15104c:
    // 0x15104c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15104cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_151050:
    // 0x151050: 0x0  nop
    ctx->pc = 0x151050u;
    // NOP
label_151054:
    // 0x151054: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x151054u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_151058:
    // 0x151058: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x151058u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15105c:
    // 0x15105c: 0x0  nop
    ctx->pc = 0x15105cu;
    // NOP
label_151060:
    // 0x151060: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_151064:
    if (ctx->pc == 0x151064u) {
        ctx->pc = 0x151064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151060u;
        // 0x151064: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151068u;
        goto label_151068;
    }
    ctx->pc = 0x151060u;
    {
        const bool branch_taken_0x151060 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x151064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151060u;
        // 0x151064: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151060) {
            ctx->pc = 0x15106Cu;
            goto label_15106c;
        }
    }
    ctx->pc = 0x151068u;
label_151068:
    // 0x151068: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x151068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15106c:
    // 0x15106c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_151070:
    if (ctx->pc == 0x151070u) {
        ctx->pc = 0x151074u;
        goto label_151074;
    }
    ctx->pc = 0x15106Cu;
    {
        const bool branch_taken_0x15106c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15106c) {
            ctx->pc = 0x151088u;
            goto label_151088;
        }
    }
    ctx->pc = 0x151074u;
label_151074:
    // 0x151074: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x151074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_151078:
    // 0x151078: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x151078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_15107c:
    // 0x15107c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15107cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_151080:
    // 0x151080: 0x1000000d  b           . + 4 + (0xD << 2)
label_151084:
    if (ctx->pc == 0x151084u) {
        ctx->pc = 0x151084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151080u;
        // 0x151084: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x151088u;
        goto label_151088;
    }
    ctx->pc = 0x151080u;
    {
        const bool branch_taken_0x151080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151080u;
        // 0x151084: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151080) {
            ctx->pc = 0x1510B8u;
            goto label_1510b8;
        }
    }
    ctx->pc = 0x151088u;
label_151088:
    // 0x151088: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x151088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_15108c:
    // 0x15108c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x15108cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_151090:
    // 0x151090: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_151094:
    // 0x151094: 0x0  nop
    ctx->pc = 0x151094u;
    // NOP
label_151098:
    // 0x151098: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x151098u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15109c:
    // 0x15109c: 0x0  nop
    ctx->pc = 0x15109cu;
    // NOP
label_1510a0:
    // 0x1510a0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1510a4:
    if (ctx->pc == 0x1510A4u) {
        ctx->pc = 0x1510A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1510A0u;
        // 0x1510a4: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1510A8u;
        goto label_1510a8;
    }
    ctx->pc = 0x1510A0u;
    {
        const bool branch_taken_0x1510a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1510A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1510A0u;
        // 0x1510a4: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1510a0) {
            ctx->pc = 0x1510B8u;
            goto label_1510b8;
        }
    }
    ctx->pc = 0x1510A8u;
label_1510a8:
    // 0x1510a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1510a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1510ac:
    // 0x1510ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1510acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1510b0:
    // 0x1510b0: 0x10000001  b           . + 4 + (0x1 << 2)
label_1510b4:
    if (ctx->pc == 0x1510B4u) {
        ctx->pc = 0x1510B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1510B0u;
        // 0x1510b4: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1510B8u;
        goto label_1510b8;
    }
    ctx->pc = 0x1510B0u;
    {
        const bool branch_taken_0x1510b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1510B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1510B0u;
        // 0x1510b4: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1510b0) {
            ctx->pc = 0x1510B8u;
            goto label_1510b8;
        }
    }
    ctx->pc = 0x1510B8u;
label_1510b8:
    // 0x1510b8: 0xc08c2ec  jal         func_230BB0
label_1510bc:
    if (ctx->pc == 0x1510BCu) {
        ctx->pc = 0x1510C0u;
        goto label_1510c0;
    }
    ctx->pc = 0x1510B8u;
    SET_GPR_U32(ctx, 31, 0x1510C0u);
    ctx->pc = 0x230BB0u;
    { ctx->pc = 0x230bb0; return; }
    ctx->pc = 0x1510C0u;
label_1510c0:
    // 0x1510c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1510c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1510c4:
    // 0x1510c4: 0x10000001  b           . + 4 + (0x1 << 2)
label_1510c8:
    if (ctx->pc == 0x1510C8u) {
        ctx->pc = 0x1510CCu;
        goto label_1510cc;
    }
    ctx->pc = 0x1510C4u;
    {
        const bool branch_taken_0x1510c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1510c4) {
            ctx->pc = 0x1510CCu;
            goto label_1510cc;
        }
    }
    ctx->pc = 0x1510CCu;
label_1510cc:
    // 0x1510cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1510ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1510d0:
    // 0x1510d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1510d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1510d4:
    // 0x1510d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1510d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1510d8:
    // 0x1510d8: 0x3e00008  jr          $ra
label_1510dc:
    if (ctx->pc == 0x1510DCu) {
        ctx->pc = 0x1510DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1510D8u;
        // 0x1510dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1510E0u;
        goto label_1510e0;
    }
    ctx->pc = 0x1510D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1510DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1510D8u;
        // 0x1510dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1510D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1510E0u;
label_1510e0:
    // 0x1510e0: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x1510e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
label_1510e4:
    // 0x1510e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1510e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1510e8:
    // 0x1510e8: 0x246312a0  addiu       $v1, $v1, 0x12A0
    ctx->pc = 0x1510e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
label_1510ec:
    // 0x1510ec: 0xaf838128  sw          $v1, -0x7ED8($gp)
    ctx->pc = 0x1510ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934824), GPR_U32(ctx, 3));
label_1510f0:
    // 0x1510f0: 0x8f858128  lw          $a1, -0x7ED8($gp)
    ctx->pc = 0x1510f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934824)));
label_1510f4:
    // 0x1510f4: 0x0  nop
    ctx->pc = 0x1510f4u;
    // NOP
label_1510f8:
    // 0x1510f8: 0xaca00200  sw          $zero, 0x200($a1)
    ctx->pc = 0x1510f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 512), GPR_U32(ctx, 0));
label_1510fc:
    // 0x1510fc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1510fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_151100:
    // 0x151100: 0xaca00204  sw          $zero, 0x204($a1)
    ctx->pc = 0x151100u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 516), GPR_U32(ctx, 0));
label_151104:
    // 0x151104: 0x28830028  slti        $v1, $a0, 0x28
    ctx->pc = 0x151104u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)40) ? 1 : 0);
label_151108:
    // 0x151108: 0xaca0020c  sw          $zero, 0x20C($a1)
    ctx->pc = 0x151108u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 0));
label_15110c:
    // 0x15110c: 0xa4a00208  sh          $zero, 0x208($a1)
    ctx->pc = 0x15110cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 520), (uint16_t)GPR_U32(ctx, 0));
label_151110:
    // 0x151110: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_151114:
    if (ctx->pc == 0x151114u) {
        ctx->pc = 0x151114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151110u;
        // 0x151114: 0x24a50220  addiu       $a1, $a1, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151118u;
        goto label_151118;
    }
    ctx->pc = 0x151110u;
    {
        const bool branch_taken_0x151110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x151114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151110u;
        // 0x151114: 0x24a50220  addiu       $a1, $a1, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151110) {
            ctx->pc = 0x1510F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1510f8;
        }
    }
    ctx->pc = 0x151118u;
label_151118:
    // 0x151118: 0x3e00008  jr          $ra
label_15111c:
    if (ctx->pc == 0x15111Cu) {
        ctx->pc = 0x151120u;
        goto label_151120;
    }
    ctx->pc = 0x151118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151120u;
label_151120:
    // 0x151120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x151120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_151124:
    // 0x151124: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x151124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_151128:
    // 0x151128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15112c:
    // 0x15112c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15112cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_151130:
    // 0x151130: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x151130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_151134:
    // 0x151134: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x151134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_151138:
    // 0x151138: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
label_15113c:
    if (ctx->pc == 0x15113Cu) {
        ctx->pc = 0x151140u;
        goto label_151140;
    }
    ctx->pc = 0x151138u;
    {
        const bool branch_taken_0x151138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x151138) {
            ctx->pc = 0x151194u;
            goto label_151194;
        }
    }
    ctx->pc = 0x151140u;
label_151140:
    // 0x151140: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x151140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_151144:
    // 0x151144: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x151144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_151148:
    // 0x151148: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x151148u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_15114c:
    // 0x15114c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_151150:
    if (ctx->pc == 0x151150u) {
        ctx->pc = 0x151154u;
        goto label_151154;
    }
    ctx->pc = 0x15114Cu;
    {
        const bool branch_taken_0x15114c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15114c) {
            ctx->pc = 0x15115Cu;
            goto label_15115c;
        }
    }
    ctx->pc = 0x151154u;
label_151154:
    // 0x151154: 0x10000010  b           . + 4 + (0x10 << 2)
label_151158:
    if (ctx->pc == 0x151158u) {
        ctx->pc = 0x151158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151154u;
        // 0x151158: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15115Cu;
        goto label_15115c;
    }
    ctx->pc = 0x151154u;
    {
        const bool branch_taken_0x151154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151154u;
        // 0x151158: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151154) {
            ctx->pc = 0x151198u;
            goto label_151198;
        }
    }
    ctx->pc = 0x15115Cu;
label_15115c:
    // 0x15115c: 0x3c100032  lui         $s0, 0x32
    ctx->pc = 0x15115cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)50 << 16));
label_151160:
    // 0x151160: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x151160u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_151164:
    // 0x151164: 0x26106ae0  addiu       $s0, $s0, 0x6AE0
    ctx->pc = 0x151164u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27360));
label_151168:
    // 0x151168: 0xc044a6c  jal         func_1129B0
label_15116c:
    if (ctx->pc == 0x15116Cu) {
        ctx->pc = 0x15116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151168u;
        // 0x15116c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151170u;
        goto label_151170;
    }
    ctx->pc = 0x151168u;
    SET_GPR_U32(ctx, 31, 0x151170u);
    ctx->pc = 0x15116Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151168u;
    // 0x15116c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1129B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1129B0u, 0x151168u, 0x151170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151170u;
label_151170:
    // 0x151170: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x151170u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_151174:
    // 0x151174: 0x261000c8  addiu       $s0, $s0, 0xC8
    ctx->pc = 0x151174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
label_151178:
    // 0x151178: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x151178u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_15117c:
    // 0x15117c: 0x0  nop
    ctx->pc = 0x15117cu;
    // NOP
label_151180:
    // 0x151180: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_151184:
    if (ctx->pc == 0x151184u) {
        ctx->pc = 0x151188u;
        goto label_151188;
    }
    ctx->pc = 0x151180u;
    {
        const bool branch_taken_0x151180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x151180) {
            ctx->pc = 0x151168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151168;
        }
    }
    ctx->pc = 0x151188u;
label_151188:
    // 0x151188: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x151188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
label_15118c:
    // 0x15118c: 0xc044a54  jal         func_112950
label_151190:
    if (ctx->pc == 0x151190u) {
        ctx->pc = 0x151190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15118Cu;
        // 0x151190: 0x248467b0  addiu       $a0, $a0, 0x67B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151194u;
        goto label_151194;
    }
    ctx->pc = 0x15118Cu;
    SET_GPR_U32(ctx, 31, 0x151194u);
    ctx->pc = 0x151190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15118Cu;
    // 0x151190: 0x248467b0  addiu       $a0, $a0, 0x67B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112950u, 0x15118Cu, 0x151194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151194u;
label_151194:
    // 0x151194: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x151194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_151198:
    // 0x151198: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15119c:
    // 0x15119c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15119cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1511a0:
    // 0x1511a0: 0x3e00008  jr          $ra
label_1511a4:
    if (ctx->pc == 0x1511A4u) {
        ctx->pc = 0x1511A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1511A0u;
        // 0x1511a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1511A8u;
        goto label_1511a8;
    }
    ctx->pc = 0x1511A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1511A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1511A0u;
        // 0x1511a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1511A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1511A8u;
label_1511a8:
    // 0x1511a8: 0x0  nop
    ctx->pc = 0x1511a8u;
    // NOP
label_1511ac:
    // 0x1511ac: 0x0  nop
    ctx->pc = 0x1511acu;
    // NOP
label_1511b0:
    // 0x1511b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1511b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1511b4:
    // 0x1511b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1511b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1511b8:
    // 0x1511b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1511b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1511bc:
    // 0x1511bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1511bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1511c0:
    // 0x1511c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1511c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1511c4:
    // 0x1511c4: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1511c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1511c8:
    // 0x1511c8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1511c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_1511cc:
    // 0x1511cc: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
label_1511d0:
    if (ctx->pc == 0x1511D0u) {
        ctx->pc = 0x1511D4u;
        goto label_1511d4;
    }
    ctx->pc = 0x1511CCu;
    {
        const bool branch_taken_0x1511cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1511cc) {
            ctx->pc = 0x151268u;
            goto label_151268;
        }
    }
    ctx->pc = 0x1511D4u;
label_1511d4:
    // 0x1511d4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1511d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1511d8:
    // 0x1511d8: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1511d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1511dc:
    // 0x1511dc: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x1511dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1511e0:
    // 0x1511e0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1511e4:
    if (ctx->pc == 0x1511E4u) {
        ctx->pc = 0x1511E8u;
        goto label_1511e8;
    }
    ctx->pc = 0x1511E0u;
    {
        const bool branch_taken_0x1511e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1511e0) {
            ctx->pc = 0x1511F0u;
            goto label_1511f0;
        }
    }
    ctx->pc = 0x1511E8u;
label_1511e8:
    // 0x1511e8: 0x10000020  b           . + 4 + (0x20 << 2)
label_1511ec:
    if (ctx->pc == 0x1511ECu) {
        ctx->pc = 0x1511ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1511E8u;
        // 0x1511ec: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1511F0u;
        goto label_1511f0;
    }
    ctx->pc = 0x1511E8u;
    {
        const bool branch_taken_0x1511e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1511ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1511E8u;
        // 0x1511ec: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1511e8) {
            ctx->pc = 0x15126Cu;
            goto label_15126c;
        }
    }
    ctx->pc = 0x1511F0u;
label_1511f0:
    // 0x1511f0: 0x3c110032  lui         $s1, 0x32
    ctx->pc = 0x1511f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)50 << 16));
label_1511f4:
    // 0x1511f4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1511f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1511f8:
    // 0x1511f8: 0x26316ae0  addiu       $s1, $s1, 0x6AE0
    ctx->pc = 0x1511f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 27360));
label_1511fc:
    // 0x1511fc: 0xc060668  jal         func_1819A0
label_151200:
    if (ctx->pc == 0x151200u) {
        ctx->pc = 0x151200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1511FCu;
        // 0x151200: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151204u;
        goto label_151204;
    }
    ctx->pc = 0x1511FCu;
    SET_GPR_U32(ctx, 31, 0x151204u);
    ctx->pc = 0x151200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1511FCu;
    // 0x151200: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819A0u;
    { ctx->pc = 0x1819a0; return; }
    ctx->pc = 0x151204u;
label_151204:
    // 0x151204: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x151204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_151208:
    // 0x151208: 0xc060678  jal         func_1819E0
label_15120c:
    if (ctx->pc == 0x15120Cu) {
        ctx->pc = 0x15120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151208u;
        // 0x15120c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151210u;
        goto label_151210;
    }
    ctx->pc = 0x151208u;
    SET_GPR_U32(ctx, 31, 0x151210u);
    ctx->pc = 0x15120Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151208u;
    // 0x15120c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819E0u;
    { ctx->pc = 0x1819e0; return; }
    ctx->pc = 0x151210u;
label_151210:
    // 0x151210: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x151210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_151214:
    // 0x151214: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x151214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_151218:
    // 0x151218: 0xc044c8c  jal         func_113230
label_15121c:
    if (ctx->pc == 0x15121Cu) {
        ctx->pc = 0x15121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151218u;
        // 0x15121c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151220u;
        goto label_151220;
    }
    ctx->pc = 0x151218u;
    SET_GPR_U32(ctx, 31, 0x151220u);
    ctx->pc = 0x15121Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151218u;
    // 0x15121c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113230u, 0x151218u, 0x151220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151220u;
label_151220:
    // 0x151220: 0xc044ed8  jal         func_113B60
label_151224:
    if (ctx->pc == 0x151224u) {
        ctx->pc = 0x151224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151220u;
        // 0x151224: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151228u;
        goto label_151228;
    }
    ctx->pc = 0x151220u;
    SET_GPR_U32(ctx, 31, 0x151228u);
    ctx->pc = 0x151224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151220u;
    // 0x151224: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B60u, 0x151220u, 0x151228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151228u;
label_151228:
    // 0x151228: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x151228u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_15122c:
    // 0x15122c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15122cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_151230:
    // 0x151230: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x151230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_151234:
    // 0x151234: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x151234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_151238:
    // 0x151238: 0xae2000c4  sw          $zero, 0xC4($s1)
    ctx->pc = 0x151238u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
label_15123c:
    // 0x15123c: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_151240:
    if (ctx->pc == 0x151240u) {
        ctx->pc = 0x151240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15123Cu;
        // 0x151240: 0x263100c8  addiu       $s1, $s1, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151244u;
        goto label_151244;
    }
    ctx->pc = 0x15123Cu;
    {
        const bool branch_taken_0x15123c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15123Cu;
        // 0x151240: 0x263100c8  addiu       $s1, $s1, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15123c) {
            ctx->pc = 0x1511FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1511fc;
        }
    }
    ctx->pc = 0x151244u;
label_151244:
    // 0x151244: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x151244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
label_151248:
    // 0x151248: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x151248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15124c:
    // 0x15124c: 0x244267b0  addiu       $v0, $v0, 0x67B0
    ctx->pc = 0x15124cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26544));
label_151250:
    // 0x151250: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x151250u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_151254:
    // 0x151254: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x151254u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_151258:
    // 0x151258: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x151258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15125c:
    // 0x15125c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x15125cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_151260:
    // 0x151260: 0xc044b64  jal         func_112D90
label_151264:
    if (ctx->pc == 0x151264u) {
        ctx->pc = 0x151264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151260u;
        // 0x151264: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151268u;
        goto label_151268;
    }
    ctx->pc = 0x151260u;
    SET_GPR_U32(ctx, 31, 0x151268u);
    ctx->pc = 0x151264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151260u;
    // 0x151264: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D90u, 0x151260u, 0x151268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151268u;
label_151268:
    // 0x151268: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x151268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15126c:
    // 0x15126c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15126cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_151270:
    // 0x151270: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_151274:
    // 0x151274: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_151278:
    // 0x151278: 0x3e00008  jr          $ra
label_15127c:
    if (ctx->pc == 0x15127Cu) {
        ctx->pc = 0x15127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151278u;
        // 0x15127c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151280u;
        goto label_151280;
    }
    ctx->pc = 0x151278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151278u;
        // 0x15127c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151280u;
label_151280:
    // 0x151280: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x151280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_151284:
    // 0x151284: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x151284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_151288:
    // 0x151288: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x151288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15128c:
    // 0x15128c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15128cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_151290:
    // 0x151290: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x151290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_151294:
    // 0x151294: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x151294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_151298:
    // 0x151298: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x151298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_15129c:
    // 0x15129c: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
label_1512a0:
    if (ctx->pc == 0x1512A0u) {
        ctx->pc = 0x1512A4u;
        goto label_1512a4;
    }
    ctx->pc = 0x15129Cu;
    {
        const bool branch_taken_0x15129c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15129c) {
            ctx->pc = 0x151388u;
            { ctx->pc = 0x151388; return; }
        }
    }
    ctx->pc = 0x1512A4u;
label_1512a4:
    // 0x1512a4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1512a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1512a8:
    // 0x1512a8: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1512a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1512ac:
    // 0x1512ac: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x1512acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
    ctx->pc = 0x1512b0u;
    return;
}

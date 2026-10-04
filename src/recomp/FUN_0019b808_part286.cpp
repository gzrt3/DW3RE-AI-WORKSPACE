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


void FUN_0019b808_part286(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x226a98u: goto label_226a98;
        case 0x226a9cu: goto label_226a9c;
        case 0x226aa0u: goto label_226aa0;
        case 0x226aa4u: goto label_226aa4;
        case 0x226aa8u: goto label_226aa8;
        case 0x226aacu: goto label_226aac;
        case 0x226ab0u: goto label_226ab0;
        case 0x226ab4u: goto label_226ab4;
        case 0x226ab8u: goto label_226ab8;
        case 0x226abcu: goto label_226abc;
        case 0x226ac0u: goto label_226ac0;
        case 0x226ac4u: goto label_226ac4;
        case 0x226ac8u: goto label_226ac8;
        case 0x226accu: goto label_226acc;
        case 0x226ad0u: goto label_226ad0;
        case 0x226ad4u: goto label_226ad4;
        case 0x226ad8u: goto label_226ad8;
        case 0x226adcu: goto label_226adc;
        case 0x226ae0u: goto label_226ae0;
        case 0x226ae4u: goto label_226ae4;
        case 0x226ae8u: goto label_226ae8;
        case 0x226aecu: goto label_226aec;
        case 0x226af0u: goto label_226af0;
        case 0x226af4u: goto label_226af4;
        case 0x226af8u: goto label_226af8;
        case 0x226afcu: goto label_226afc;
        case 0x226b00u: goto label_226b00;
        case 0x226b04u: goto label_226b04;
        case 0x226b08u: goto label_226b08;
        case 0x226b0cu: goto label_226b0c;
        case 0x226b10u: goto label_226b10;
        case 0x226b14u: goto label_226b14;
        case 0x226b18u: goto label_226b18;
        case 0x226b1cu: goto label_226b1c;
        case 0x226b20u: goto label_226b20;
        case 0x226b24u: goto label_226b24;
        case 0x226b28u: goto label_226b28;
        case 0x226b2cu: goto label_226b2c;
        case 0x226b30u: goto label_226b30;
        case 0x226b34u: goto label_226b34;
        case 0x226b38u: goto label_226b38;
        case 0x226b3cu: goto label_226b3c;
        case 0x226b40u: goto label_226b40;
        case 0x226b44u: goto label_226b44;
        case 0x226b48u: goto label_226b48;
        case 0x226b4cu: goto label_226b4c;
        case 0x226b50u: goto label_226b50;
        case 0x226b54u: goto label_226b54;
        case 0x226b58u: goto label_226b58;
        case 0x226b5cu: goto label_226b5c;
        case 0x226b60u: goto label_226b60;
        case 0x226b64u: goto label_226b64;
        case 0x226b68u: goto label_226b68;
        case 0x226b6cu: goto label_226b6c;
        case 0x226b70u: goto label_226b70;
        case 0x226b74u: goto label_226b74;
        case 0x226b78u: goto label_226b78;
        case 0x226b7cu: goto label_226b7c;
        case 0x226b80u: goto label_226b80;
        case 0x226b84u: goto label_226b84;
        case 0x226b88u: goto label_226b88;
        case 0x226b8cu: goto label_226b8c;
        case 0x226b90u: goto label_226b90;
        case 0x226b94u: goto label_226b94;
        case 0x226b98u: goto label_226b98;
        case 0x226b9cu: goto label_226b9c;
        case 0x226ba0u: goto label_226ba0;
        case 0x226ba4u: goto label_226ba4;
        case 0x226ba8u: goto label_226ba8;
        case 0x226bacu: goto label_226bac;
        case 0x226bb0u: goto label_226bb0;
        case 0x226bb4u: goto label_226bb4;
        case 0x226bb8u: goto label_226bb8;
        case 0x226bbcu: goto label_226bbc;
        case 0x226bc0u: goto label_226bc0;
        case 0x226bc4u: goto label_226bc4;
        case 0x226bc8u: goto label_226bc8;
        case 0x226bccu: goto label_226bcc;
        case 0x226bd0u: goto label_226bd0;
        case 0x226bd4u: goto label_226bd4;
        case 0x226bd8u: goto label_226bd8;
        case 0x226bdcu: goto label_226bdc;
        case 0x226be0u: goto label_226be0;
        case 0x226be4u: goto label_226be4;
        case 0x226be8u: goto label_226be8;
        case 0x226becu: goto label_226bec;
        case 0x226bf0u: goto label_226bf0;
        case 0x226bf4u: goto label_226bf4;
        case 0x226bf8u: goto label_226bf8;
        case 0x226bfcu: goto label_226bfc;
        case 0x226c00u: goto label_226c00;
        case 0x226c04u: goto label_226c04;
        case 0x226c08u: goto label_226c08;
        case 0x226c0cu: goto label_226c0c;
        case 0x226c10u: goto label_226c10;
        case 0x226c14u: goto label_226c14;
        case 0x226c18u: goto label_226c18;
        case 0x226c1cu: goto label_226c1c;
        case 0x226c20u: goto label_226c20;
        case 0x226c24u: goto label_226c24;
        case 0x226c28u: goto label_226c28;
        case 0x226c2cu: goto label_226c2c;
        case 0x226c30u: goto label_226c30;
        case 0x226c34u: goto label_226c34;
        case 0x226c38u: goto label_226c38;
        case 0x226c3cu: goto label_226c3c;
        case 0x226c40u: goto label_226c40;
        case 0x226c44u: goto label_226c44;
        case 0x226c48u: goto label_226c48;
        case 0x226c4cu: goto label_226c4c;
        case 0x226c50u: goto label_226c50;
        case 0x226c54u: goto label_226c54;
        case 0x226c58u: goto label_226c58;
        case 0x226c5cu: goto label_226c5c;
        case 0x226c60u: goto label_226c60;
        case 0x226c64u: goto label_226c64;
        case 0x226c68u: goto label_226c68;
        case 0x226c6cu: goto label_226c6c;
        case 0x226c70u: goto label_226c70;
        case 0x226c74u: goto label_226c74;
        case 0x226c78u: goto label_226c78;
        case 0x226c7cu: goto label_226c7c;
        case 0x226c80u: goto label_226c80;
        case 0x226c84u: goto label_226c84;
        case 0x226c88u: goto label_226c88;
        case 0x226c8cu: goto label_226c8c;
        case 0x226c90u: goto label_226c90;
        case 0x226c94u: goto label_226c94;
        case 0x226c98u: goto label_226c98;
        case 0x226c9cu: goto label_226c9c;
        case 0x226ca0u: goto label_226ca0;
        case 0x226ca4u: goto label_226ca4;
        case 0x226ca8u: goto label_226ca8;
        case 0x226cacu: goto label_226cac;
        case 0x226cb0u: goto label_226cb0;
        case 0x226cb4u: goto label_226cb4;
        case 0x226cb8u: goto label_226cb8;
        case 0x226cbcu: goto label_226cbc;
        case 0x226cc0u: goto label_226cc0;
        case 0x226cc4u: goto label_226cc4;
        case 0x226cc8u: goto label_226cc8;
        case 0x226cccu: goto label_226ccc;
        case 0x226cd0u: goto label_226cd0;
        case 0x226cd4u: goto label_226cd4;
        case 0x226cd8u: goto label_226cd8;
        case 0x226cdcu: goto label_226cdc;
        case 0x226ce0u: goto label_226ce0;
        case 0x226ce4u: goto label_226ce4;
        case 0x226ce8u: goto label_226ce8;
        case 0x226cecu: goto label_226cec;
        case 0x226cf0u: goto label_226cf0;
        case 0x226cf4u: goto label_226cf4;
        case 0x226cf8u: goto label_226cf8;
        case 0x226cfcu: goto label_226cfc;
        case 0x226d00u: goto label_226d00;
        case 0x226d04u: goto label_226d04;
        case 0x226d08u: goto label_226d08;
        case 0x226d0cu: goto label_226d0c;
        case 0x226d10u: goto label_226d10;
        case 0x226d14u: goto label_226d14;
        case 0x226d18u: goto label_226d18;
        case 0x226d1cu: goto label_226d1c;
        case 0x226d20u: goto label_226d20;
        case 0x226d24u: goto label_226d24;
        case 0x226d28u: goto label_226d28;
        case 0x226d2cu: goto label_226d2c;
        case 0x226d30u: goto label_226d30;
        case 0x226d34u: goto label_226d34;
        case 0x226d38u: goto label_226d38;
        case 0x226d3cu: goto label_226d3c;
        case 0x226d40u: goto label_226d40;
        case 0x226d44u: goto label_226d44;
        case 0x226d48u: goto label_226d48;
        case 0x226d4cu: goto label_226d4c;
        case 0x226d50u: goto label_226d50;
        case 0x226d54u: goto label_226d54;
        case 0x226d58u: goto label_226d58;
        case 0x226d5cu: goto label_226d5c;
        case 0x226d60u: goto label_226d60;
        case 0x226d64u: goto label_226d64;
        case 0x226d68u: goto label_226d68;
        case 0x226d6cu: goto label_226d6c;
        case 0x226d70u: goto label_226d70;
        case 0x226d74u: goto label_226d74;
        case 0x226d78u: goto label_226d78;
        case 0x226d7cu: goto label_226d7c;
        case 0x226d80u: goto label_226d80;
        case 0x226d84u: goto label_226d84;
        case 0x226d88u: goto label_226d88;
        case 0x226d8cu: goto label_226d8c;
        case 0x226d90u: goto label_226d90;
        case 0x226d94u: goto label_226d94;
        case 0x226d98u: goto label_226d98;
        case 0x226d9cu: goto label_226d9c;
        case 0x226da0u: goto label_226da0;
        case 0x226da4u: goto label_226da4;
        case 0x226da8u: goto label_226da8;
        case 0x226dacu: goto label_226dac;
        case 0x226db0u: goto label_226db0;
        case 0x226db4u: goto label_226db4;
        case 0x226db8u: goto label_226db8;
        case 0x226dbcu: goto label_226dbc;
        case 0x226dc0u: goto label_226dc0;
        case 0x226dc4u: goto label_226dc4;
        case 0x226dc8u: goto label_226dc8;
        case 0x226dccu: goto label_226dcc;
        case 0x226dd0u: goto label_226dd0;
        case 0x226dd4u: goto label_226dd4;
        case 0x226dd8u: goto label_226dd8;
        case 0x226ddcu: goto label_226ddc;
        case 0x226de0u: goto label_226de0;
        case 0x226de4u: goto label_226de4;
        case 0x226de8u: goto label_226de8;
        case 0x226decu: goto label_226dec;
        case 0x226df0u: goto label_226df0;
        case 0x226df4u: goto label_226df4;
        case 0x226df8u: goto label_226df8;
        case 0x226dfcu: goto label_226dfc;
        case 0x226e00u: goto label_226e00;
        case 0x226e04u: goto label_226e04;
        case 0x226e08u: goto label_226e08;
        case 0x226e0cu: goto label_226e0c;
        case 0x226e10u: goto label_226e10;
        case 0x226e14u: goto label_226e14;
        case 0x226e18u: goto label_226e18;
        case 0x226e1cu: goto label_226e1c;
        case 0x226e20u: goto label_226e20;
        case 0x226e24u: goto label_226e24;
        case 0x226e28u: goto label_226e28;
        case 0x226e2cu: goto label_226e2c;
        case 0x226e30u: goto label_226e30;
        case 0x226e34u: goto label_226e34;
        case 0x226e38u: goto label_226e38;
        case 0x226e3cu: goto label_226e3c;
        case 0x226e40u: goto label_226e40;
        case 0x226e44u: goto label_226e44;
        case 0x226e48u: goto label_226e48;
        case 0x226e4cu: goto label_226e4c;
        case 0x226e50u: goto label_226e50;
        case 0x226e54u: goto label_226e54;
        case 0x226e58u: goto label_226e58;
        case 0x226e5cu: goto label_226e5c;
        case 0x226e60u: goto label_226e60;
        case 0x226e64u: goto label_226e64;
        case 0x226e68u: goto label_226e68;
        case 0x226e6cu: goto label_226e6c;
        case 0x226e70u: goto label_226e70;
        case 0x226e74u: goto label_226e74;
        case 0x226e78u: goto label_226e78;
        case 0x226e7cu: goto label_226e7c;
        case 0x226e80u: goto label_226e80;
        case 0x226e84u: goto label_226e84;
        case 0x226e88u: goto label_226e88;
        case 0x226e8cu: goto label_226e8c;
        case 0x226e90u: goto label_226e90;
        case 0x226e94u: goto label_226e94;
        case 0x226e98u: goto label_226e98;
        case 0x226e9cu: goto label_226e9c;
        case 0x226ea0u: goto label_226ea0;
        case 0x226ea4u: goto label_226ea4;
        case 0x226ea8u: goto label_226ea8;
        case 0x226eacu: goto label_226eac;
        case 0x226eb0u: goto label_226eb0;
        case 0x226eb4u: goto label_226eb4;
        case 0x226eb8u: goto label_226eb8;
        case 0x226ebcu: goto label_226ebc;
        case 0x226ec0u: goto label_226ec0;
        case 0x226ec4u: goto label_226ec4;
        case 0x226ec8u: goto label_226ec8;
        case 0x226eccu: goto label_226ecc;
        case 0x226ed0u: goto label_226ed0;
        case 0x226ed4u: goto label_226ed4;
        case 0x226ed8u: goto label_226ed8;
        case 0x226edcu: goto label_226edc;
        case 0x226ee0u: goto label_226ee0;
        case 0x226ee4u: goto label_226ee4;
        case 0x226ee8u: goto label_226ee8;
        case 0x226eecu: goto label_226eec;
        case 0x226ef0u: goto label_226ef0;
        case 0x226ef4u: goto label_226ef4;
        case 0x226ef8u: goto label_226ef8;
        case 0x226efcu: goto label_226efc;
        case 0x226f00u: goto label_226f00;
        case 0x226f04u: goto label_226f04;
        case 0x226f08u: goto label_226f08;
        case 0x226f0cu: goto label_226f0c;
        case 0x226f10u: goto label_226f10;
        case 0x226f14u: goto label_226f14;
        case 0x226f18u: goto label_226f18;
        case 0x226f1cu: goto label_226f1c;
        case 0x226f20u: goto label_226f20;
        case 0x226f24u: goto label_226f24;
        case 0x226f28u: goto label_226f28;
        case 0x226f2cu: goto label_226f2c;
        case 0x226f30u: goto label_226f30;
        case 0x226f34u: goto label_226f34;
        case 0x226f38u: goto label_226f38;
        case 0x226f3cu: goto label_226f3c;
        case 0x226f40u: goto label_226f40;
        case 0x226f44u: goto label_226f44;
        case 0x226f48u: goto label_226f48;
        case 0x226f4cu: goto label_226f4c;
        case 0x226f50u: goto label_226f50;
        case 0x226f54u: goto label_226f54;
        case 0x226f58u: goto label_226f58;
        case 0x226f5cu: goto label_226f5c;
        case 0x226f60u: goto label_226f60;
        case 0x226f64u: goto label_226f64;
        case 0x226f68u: goto label_226f68;
        case 0x226f6cu: goto label_226f6c;
        case 0x226f70u: goto label_226f70;
        case 0x226f74u: goto label_226f74;
        case 0x226f78u: goto label_226f78;
        case 0x226f7cu: goto label_226f7c;
        case 0x226f80u: goto label_226f80;
        case 0x226f84u: goto label_226f84;
        case 0x226f88u: goto label_226f88;
        case 0x226f8cu: goto label_226f8c;
        case 0x226f90u: goto label_226f90;
        case 0x226f94u: goto label_226f94;
        case 0x226f98u: goto label_226f98;
        case 0x226f9cu: goto label_226f9c;
        case 0x226fa0u: goto label_226fa0;
        case 0x226fa4u: goto label_226fa4;
        case 0x226fa8u: goto label_226fa8;
        case 0x226facu: goto label_226fac;
        case 0x226fb0u: goto label_226fb0;
        case 0x226fb4u: goto label_226fb4;
        case 0x226fb8u: goto label_226fb8;
        case 0x226fbcu: goto label_226fbc;
        case 0x226fc0u: goto label_226fc0;
        case 0x226fc4u: goto label_226fc4;
        case 0x226fc8u: goto label_226fc8;
        case 0x226fccu: goto label_226fcc;
        case 0x226fd0u: goto label_226fd0;
        case 0x226fd4u: goto label_226fd4;
        case 0x226fd8u: goto label_226fd8;
        case 0x226fdcu: goto label_226fdc;
        case 0x226fe0u: goto label_226fe0;
        case 0x226fe4u: goto label_226fe4;
        case 0x226fe8u: goto label_226fe8;
        case 0x226fecu: goto label_226fec;
        case 0x226ff0u: goto label_226ff0;
        case 0x226ff4u: goto label_226ff4;
        case 0x226ff8u: goto label_226ff8;
        case 0x226ffcu: goto label_226ffc;
        case 0x227000u: goto label_227000;
        case 0x227004u: goto label_227004;
        case 0x227008u: goto label_227008;
        case 0x22700cu: goto label_22700c;
        case 0x227010u: goto label_227010;
        case 0x227014u: goto label_227014;
        case 0x227018u: goto label_227018;
        case 0x22701cu: goto label_22701c;
        case 0x227020u: goto label_227020;
        case 0x227024u: goto label_227024;
        case 0x227028u: goto label_227028;
        case 0x22702cu: goto label_22702c;
        case 0x227030u: goto label_227030;
        case 0x227034u: goto label_227034;
        case 0x227038u: goto label_227038;
        case 0x22703cu: goto label_22703c;
        case 0x227040u: goto label_227040;
        case 0x227044u: goto label_227044;
        case 0x227048u: goto label_227048;
        case 0x22704cu: goto label_22704c;
        case 0x227050u: goto label_227050;
        case 0x227054u: goto label_227054;
        case 0x227058u: goto label_227058;
        case 0x22705cu: goto label_22705c;
        case 0x227060u: goto label_227060;
        case 0x227064u: goto label_227064;
        case 0x227068u: goto label_227068;
        case 0x22706cu: goto label_22706c;
        case 0x227070u: goto label_227070;
        case 0x227074u: goto label_227074;
        case 0x227078u: goto label_227078;
        case 0x22707cu: goto label_22707c;
        case 0x227080u: goto label_227080;
        case 0x227084u: goto label_227084;
        case 0x227088u: goto label_227088;
        case 0x22708cu: goto label_22708c;
        case 0x227090u: goto label_227090;
        case 0x227094u: goto label_227094;
        case 0x227098u: goto label_227098;
        case 0x22709cu: goto label_22709c;
        case 0x2270a0u: goto label_2270a0;
        case 0x2270a4u: goto label_2270a4;
        case 0x2270a8u: goto label_2270a8;
        case 0x2270acu: goto label_2270ac;
        case 0x2270b0u: goto label_2270b0;
        case 0x2270b4u: goto label_2270b4;
        case 0x2270b8u: goto label_2270b8;
        case 0x2270bcu: goto label_2270bc;
        case 0x2270c0u: goto label_2270c0;
        case 0x2270c4u: goto label_2270c4;
        case 0x2270c8u: goto label_2270c8;
        case 0x2270ccu: goto label_2270cc;
        case 0x2270d0u: goto label_2270d0;
        case 0x2270d4u: goto label_2270d4;
        case 0x2270d8u: goto label_2270d8;
        case 0x2270dcu: goto label_2270dc;
        case 0x2270e0u: goto label_2270e0;
        case 0x2270e4u: goto label_2270e4;
        case 0x2270e8u: goto label_2270e8;
        case 0x2270ecu: goto label_2270ec;
        case 0x2270f0u: goto label_2270f0;
        case 0x2270f4u: goto label_2270f4;
        case 0x2270f8u: goto label_2270f8;
        case 0x2270fcu: goto label_2270fc;
        case 0x227100u: goto label_227100;
        case 0x227104u: goto label_227104;
        case 0x227108u: goto label_227108;
        case 0x22710cu: goto label_22710c;
        case 0x227110u: goto label_227110;
        case 0x227114u: goto label_227114;
        case 0x227118u: goto label_227118;
        case 0x22711cu: goto label_22711c;
        case 0x227120u: goto label_227120;
        case 0x227124u: goto label_227124;
        case 0x227128u: goto label_227128;
        case 0x22712cu: goto label_22712c;
        case 0x227130u: goto label_227130;
        case 0x227134u: goto label_227134;
        case 0x227138u: goto label_227138;
        case 0x22713cu: goto label_22713c;
        case 0x227140u: goto label_227140;
        case 0x227144u: goto label_227144;
        case 0x227148u: goto label_227148;
        case 0x22714cu: goto label_22714c;
        case 0x227150u: goto label_227150;
        case 0x227154u: goto label_227154;
        case 0x227158u: goto label_227158;
        case 0x22715cu: goto label_22715c;
        case 0x227160u: goto label_227160;
        case 0x227164u: goto label_227164;
        case 0x227168u: goto label_227168;
        case 0x22716cu: goto label_22716c;
        case 0x227170u: goto label_227170;
        case 0x227174u: goto label_227174;
        case 0x227178u: goto label_227178;
        case 0x22717cu: goto label_22717c;
        case 0x227180u: goto label_227180;
        case 0x227184u: goto label_227184;
        case 0x227188u: goto label_227188;
        case 0x22718cu: goto label_22718c;
        case 0x227190u: goto label_227190;
        case 0x227194u: goto label_227194;
        case 0x227198u: goto label_227198;
        case 0x22719cu: goto label_22719c;
        case 0x2271a0u: goto label_2271a0;
        case 0x2271a4u: goto label_2271a4;
        case 0x2271a8u: goto label_2271a8;
        case 0x2271acu: goto label_2271ac;
        case 0x2271b0u: goto label_2271b0;
        case 0x2271b4u: goto label_2271b4;
        case 0x2271b8u: goto label_2271b8;
        case 0x2271bcu: goto label_2271bc;
        case 0x2271c0u: goto label_2271c0;
        case 0x2271c4u: goto label_2271c4;
        case 0x2271c8u: goto label_2271c8;
        case 0x2271ccu: goto label_2271cc;
        case 0x2271d0u: goto label_2271d0;
        case 0x2271d4u: goto label_2271d4;
        case 0x2271d8u: goto label_2271d8;
        case 0x2271dcu: goto label_2271dc;
        case 0x2271e0u: goto label_2271e0;
        case 0x2271e4u: goto label_2271e4;
        case 0x2271e8u: goto label_2271e8;
        case 0x2271ecu: goto label_2271ec;
        case 0x2271f0u: goto label_2271f0;
        case 0x2271f4u: goto label_2271f4;
        case 0x2271f8u: goto label_2271f8;
        case 0x2271fcu: goto label_2271fc;
        case 0x227200u: goto label_227200;
        case 0x227204u: goto label_227204;
        case 0x227208u: goto label_227208;
        case 0x22720cu: goto label_22720c;
        case 0x227210u: goto label_227210;
        case 0x227214u: goto label_227214;
        case 0x227218u: goto label_227218;
        case 0x22721cu: goto label_22721c;
        case 0x227220u: goto label_227220;
        case 0x227224u: goto label_227224;
        case 0x227228u: goto label_227228;
        case 0x22722cu: goto label_22722c;
        case 0x227230u: goto label_227230;
        case 0x227234u: goto label_227234;
        case 0x227238u: goto label_227238;
        case 0x22723cu: goto label_22723c;
        case 0x227240u: goto label_227240;
        case 0x227244u: goto label_227244;
        case 0x227248u: goto label_227248;
        case 0x22724cu: goto label_22724c;
        case 0x227250u: goto label_227250;
        case 0x227254u: goto label_227254;
        case 0x227258u: goto label_227258;
        case 0x22725cu: goto label_22725c;
        case 0x227260u: goto label_227260;
        case 0x227264u: goto label_227264;
        default: return;
    }

label_226a98:
    // 0x226a98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x226a98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226a9c:
    // 0x226a9c: 0x3e00008  jr          $ra
label_226aa0:
    if (ctx->pc == 0x226AA0u) {
        ctx->pc = 0x226AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226A9Cu;
        // 0x226aa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226AA4u;
        goto label_226aa4;
    }
    ctx->pc = 0x226A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226A9Cu;
        // 0x226aa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226AA4u;
label_226aa4:
    // 0x226aa4: 0x0  nop
    ctx->pc = 0x226aa4u;
    // NOP
label_226aa8:
    // 0x226aa8: 0x0  nop
    ctx->pc = 0x226aa8u;
    // NOP
label_226aac:
    // 0x226aac: 0x0  nop
    ctx->pc = 0x226aacu;
    // NOP
label_226ab0:
    // 0x226ab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x226ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_226ab4:
    // 0x226ab4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x226ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_226ab8:
    // 0x226ab8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x226ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_226abc:
    // 0x226abc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x226abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_226ac0:
    // 0x226ac0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x226ac0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_226ac4:
    // 0x226ac4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x226ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_226ac8:
    // 0x226ac8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_226acc:
    if (ctx->pc == 0x226ACCu) {
        ctx->pc = 0x226ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226AC8u;
        // 0x226acc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226AD0u;
        goto label_226ad0;
    }
    ctx->pc = 0x226AC8u;
    {
        const bool branch_taken_0x226ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226AC8u;
        // 0x226acc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226ac8) {
            ctx->pc = 0x226AE8u;
            goto label_226ae8;
        }
    }
    ctx->pc = 0x226AD0u;
label_226ad0:
    // 0x226ad0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x226ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_226ad4:
    // 0x226ad4: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x226ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_226ad8:
    // 0x226ad8: 0xc044934  jal         func_1124D0
label_226adc:
    if (ctx->pc == 0x226ADCu) {
        ctx->pc = 0x226ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226AD8u;
        // 0x226adc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226AE0u;
        goto label_226ae0;
    }
    ctx->pc = 0x226AD8u;
    SET_GPR_U32(ctx, 31, 0x226AE0u);
    ctx->pc = 0x226ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226AD8u;
    // 0x226adc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1124D0u, 0x226AD8u, 0x226AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226AE0u;
label_226ae0:
    // 0x226ae0: 0x1000002a  b           . + 4 + (0x2A << 2)
label_226ae4:
    if (ctx->pc == 0x226AE4u) {
        ctx->pc = 0x226AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226AE0u;
        // 0x226ae4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226AE8u;
        goto label_226ae8;
    }
    ctx->pc = 0x226AE0u;
    {
        const bool branch_taken_0x226ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226AE0u;
        // 0x226ae4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226ae0) {
            ctx->pc = 0x226B8Cu;
            goto label_226b8c;
        }
    }
    ctx->pc = 0x226AE8u;
label_226ae8:
    // 0x226ae8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x226ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_226aec:
    // 0x226aec: 0x14460023  bne         $v0, $a2, . + 4 + (0x23 << 2)
label_226af0:
    if (ctx->pc == 0x226AF0u) {
        ctx->pc = 0x226AF4u;
        goto label_226af4;
    }
    ctx->pc = 0x226AECu;
    {
        const bool branch_taken_0x226aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x226aec) {
            ctx->pc = 0x226B7Cu;
            goto label_226b7c;
        }
    }
    ctx->pc = 0x226AF4u;
label_226af4:
    // 0x226af4: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x226af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_226af8:
    // 0x226af8: 0xc04494c  jal         func_112530
label_226afc:
    if (ctx->pc == 0x226AFCu) {
        ctx->pc = 0x226AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226AF8u;
        // 0x226afc: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226B00u;
        goto label_226b00;
    }
    ctx->pc = 0x226AF8u;
    SET_GPR_U32(ctx, 31, 0x226B00u);
    ctx->pc = 0x226AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226AF8u;
    // 0x226afc: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112530u, 0x226AF8u, 0x226B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B00u;
label_226b00:
    // 0x226b00: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_226b04:
    if (ctx->pc == 0x226B04u) {
        ctx->pc = 0x226B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B00u;
        // 0x226b04: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226B08u;
        goto label_226b08;
    }
    ctx->pc = 0x226B00u;
    {
        const bool branch_taken_0x226b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B00u;
        // 0x226b04: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226b00) {
            ctx->pc = 0x226B0Cu;
            goto label_226b0c;
        }
    }
    ctx->pc = 0x226B08u;
label_226b08:
    // 0x226b08: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x226b08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_226b0c:
    // 0x226b0c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x226b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_226b10:
    // 0x226b10: 0x9023490d  lbu         $v1, 0x490D($at)
    ctx->pc = 0x226b10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_226b14:
    // 0x226b14: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_226b18:
    if (ctx->pc == 0x226B18u) {
        ctx->pc = 0x226B1Cu;
        goto label_226b1c;
    }
    ctx->pc = 0x226B14u;
    {
        const bool branch_taken_0x226b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x226b14) {
            ctx->pc = 0x226B34u;
            goto label_226b34;
        }
    }
    ctx->pc = 0x226B1Cu;
label_226b1c:
    // 0x226b1c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x226b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_226b20:
    // 0x226b20: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x226b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_226b24:
    // 0x226b24: 0xc044934  jal         func_1124D0
label_226b28:
    if (ctx->pc == 0x226B28u) {
        ctx->pc = 0x226B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B24u;
        // 0x226b28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226B2Cu;
        goto label_226b2c;
    }
    ctx->pc = 0x226B24u;
    SET_GPR_U32(ctx, 31, 0x226B2Cu);
    ctx->pc = 0x226B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B24u;
    // 0x226b28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1124D0u, 0x226B24u, 0x226B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B2Cu;
label_226b2c:
    // 0x226b2c: 0x10000017  b           . + 4 + (0x17 << 2)
label_226b30:
    if (ctx->pc == 0x226B30u) {
        ctx->pc = 0x226B34u;
        goto label_226b34;
    }
    ctx->pc = 0x226B2Cu;
    {
        const bool branch_taken_0x226b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226b2c) {
            ctx->pc = 0x226B8Cu;
            goto label_226b8c;
        }
    }
    ctx->pc = 0x226B34u;
label_226b34:
    // 0x226b34: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x226b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_226b38:
    // 0x226b38: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x226b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_226b3c:
    // 0x226b3c: 0xc04494c  jal         func_112530
label_226b40:
    if (ctx->pc == 0x226B40u) {
        ctx->pc = 0x226B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B3Cu;
        // 0x226b40: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226B44u;
        goto label_226b44;
    }
    ctx->pc = 0x226B3Cu;
    SET_GPR_U32(ctx, 31, 0x226B44u);
    ctx->pc = 0x226B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B3Cu;
    // 0x226b40: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112530u, 0x226B3Cu, 0x226B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B44u;
label_226b44:
    // 0x226b44: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_226b48:
    if (ctx->pc == 0x226B48u) {
        ctx->pc = 0x226B4Cu;
        goto label_226b4c;
    }
    ctx->pc = 0x226B44u;
    {
        const bool branch_taken_0x226b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226b44) {
            ctx->pc = 0x226B64u;
            goto label_226b64;
        }
    }
    ctx->pc = 0x226B4Cu;
label_226b4c:
    // 0x226b4c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x226b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_226b50:
    // 0x226b50: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x226b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_226b54:
    // 0x226b54: 0xc044934  jal         func_1124D0
label_226b58:
    if (ctx->pc == 0x226B58u) {
        ctx->pc = 0x226B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B54u;
        // 0x226b58: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226B5Cu;
        goto label_226b5c;
    }
    ctx->pc = 0x226B54u;
    SET_GPR_U32(ctx, 31, 0x226B5Cu);
    ctx->pc = 0x226B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B54u;
    // 0x226b58: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1124D0u, 0x226B54u, 0x226B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B5Cu;
label_226b5c:
    // 0x226b5c: 0x1000000b  b           . + 4 + (0xB << 2)
label_226b60:
    if (ctx->pc == 0x226B60u) {
        ctx->pc = 0x226B64u;
        goto label_226b64;
    }
    ctx->pc = 0x226B5Cu;
    {
        const bool branch_taken_0x226b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226b5c) {
            ctx->pc = 0x226B8Cu;
            goto label_226b8c;
        }
    }
    ctx->pc = 0x226B64u;
label_226b64:
    // 0x226b64: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x226b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_226b68:
    // 0x226b68: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x226b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_226b6c:
    // 0x226b6c: 0xc044934  jal         func_1124D0
label_226b70:
    if (ctx->pc == 0x226B70u) {
        ctx->pc = 0x226B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B6Cu;
        // 0x226b70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226B74u;
        goto label_226b74;
    }
    ctx->pc = 0x226B6Cu;
    SET_GPR_U32(ctx, 31, 0x226B74u);
    ctx->pc = 0x226B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B6Cu;
    // 0x226b70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1124D0u, 0x226B6Cu, 0x226B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B74u;
label_226b74:
    // 0x226b74: 0x10000005  b           . + 4 + (0x5 << 2)
label_226b78:
    if (ctx->pc == 0x226B78u) {
        ctx->pc = 0x226B7Cu;
        goto label_226b7c;
    }
    ctx->pc = 0x226B74u;
    {
        const bool branch_taken_0x226b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226b74) {
            ctx->pc = 0x226B8Cu;
            goto label_226b8c;
        }
    }
    ctx->pc = 0x226B7Cu;
label_226b7c:
    // 0x226b7c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x226b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_226b80:
    // 0x226b80: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x226b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_226b84:
    // 0x226b84: 0xc044934  jal         func_1124D0
label_226b88:
    if (ctx->pc == 0x226B88u) {
        ctx->pc = 0x226B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B84u;
        // 0x226b88: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226B8Cu;
        goto label_226b8c;
    }
    ctx->pc = 0x226B84u;
    SET_GPR_U32(ctx, 31, 0x226B8Cu);
    ctx->pc = 0x226B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B84u;
    // 0x226b88: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1124D0u, 0x226B84u, 0x226B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B8Cu;
label_226b8c:
    // 0x226b8c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_226b90:
    if (ctx->pc == 0x226B90u) {
        ctx->pc = 0x226B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B8Cu;
        // 0x226b90: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226B94u;
        goto label_226b94;
    }
    ctx->pc = 0x226B8Cu;
    {
        const bool branch_taken_0x226b8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x226B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B8Cu;
        // 0x226b90: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226b8c) {
            ctx->pc = 0x226B9Cu;
            goto label_226b9c;
        }
    }
    ctx->pc = 0x226B94u;
label_226b94:
    // 0x226b94: 0xc06e45c  jal         func_1B9170
label_226b98:
    if (ctx->pc == 0x226B98u) {
        ctx->pc = 0x226B9Cu;
        goto label_226b9c;
    }
    ctx->pc = 0x226B94u;
    SET_GPR_U32(ctx, 31, 0x226B9Cu);
    ctx->pc = 0x1B9170u;
    { ctx->pc = 0x1b9170; return; }
    ctx->pc = 0x226B9Cu;
label_226b9c:
    // 0x226b9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x226b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_226ba0:
    // 0x226ba0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x226ba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226ba4:
    // 0x226ba4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x226ba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_226ba8:
    // 0x226ba8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x226ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_226bac:
    // 0x226bac: 0x3e00008  jr          $ra
label_226bb0:
    if (ctx->pc == 0x226BB0u) {
        ctx->pc = 0x226BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226BACu;
        // 0x226bb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226BB4u;
        goto label_226bb4;
    }
    ctx->pc = 0x226BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226BACu;
        // 0x226bb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226BB4u;
label_226bb4:
    // 0x226bb4: 0x0  nop
    ctx->pc = 0x226bb4u;
    // NOP
label_226bb8:
    // 0x226bb8: 0x0  nop
    ctx->pc = 0x226bb8u;
    // NOP
label_226bbc:
    // 0x226bbc: 0x0  nop
    ctx->pc = 0x226bbcu;
    // NOP
label_226bc0:
    // 0x226bc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x226bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_226bc4:
    // 0x226bc4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x226bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_226bc8:
    // 0x226bc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x226bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_226bcc:
    // 0x226bcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x226bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_226bd0:
    // 0x226bd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x226bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_226bd4:
    // 0x226bd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x226bd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_226bd8:
    // 0x226bd8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x226bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_226bdc:
    // 0x226bdc: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x226bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_226be0:
    // 0x226be0: 0xc04494c  jal         func_112530
label_226be4:
    if (ctx->pc == 0x226BE4u) {
        ctx->pc = 0x226BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226BE0u;
        // 0x226be4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226BE8u;
        goto label_226be8;
    }
    ctx->pc = 0x226BE0u;
    SET_GPR_U32(ctx, 31, 0x226BE8u);
    ctx->pc = 0x226BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226BE0u;
    // 0x226be4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112530u, 0x226BE0u, 0x226BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226BE8u;
label_226be8:
    // 0x226be8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_226bec:
    if (ctx->pc == 0x226BECu) {
        ctx->pc = 0x226BF0u;
        goto label_226bf0;
    }
    ctx->pc = 0x226BE8u;
    {
        const bool branch_taken_0x226be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226be8) {
            ctx->pc = 0x226BF4u;
            goto label_226bf4;
        }
    }
    ctx->pc = 0x226BF0u;
label_226bf0:
    // 0x226bf0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x226bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_226bf4:
    // 0x226bf4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x226bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_226bf8:
    // 0x226bf8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x226bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_226bfc:
    // 0x226bfc: 0xc04494c  jal         func_112530
label_226c00:
    if (ctx->pc == 0x226C00u) {
        ctx->pc = 0x226C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226BFCu;
        // 0x226c00: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226C04u;
        goto label_226c04;
    }
    ctx->pc = 0x226BFCu;
    SET_GPR_U32(ctx, 31, 0x226C04u);
    ctx->pc = 0x226C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226BFCu;
    // 0x226c00: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112530u, 0x226BFCu, 0x226C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226C04u;
label_226c04:
    // 0x226c04: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_226c08:
    if (ctx->pc == 0x226C08u) {
        ctx->pc = 0x226C0Cu;
        goto label_226c0c;
    }
    ctx->pc = 0x226C04u;
    {
        const bool branch_taken_0x226c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226c04) {
            ctx->pc = 0x226C24u;
            goto label_226c24;
        }
    }
    ctx->pc = 0x226C0Cu;
label_226c0c:
    // 0x226c0c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x226c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_226c10:
    // 0x226c10: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x226c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_226c14:
    // 0x226c14: 0xc044934  jal         func_1124D0
label_226c18:
    if (ctx->pc == 0x226C18u) {
        ctx->pc = 0x226C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C14u;
        // 0x226c18: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226C1Cu;
        goto label_226c1c;
    }
    ctx->pc = 0x226C14u;
    SET_GPR_U32(ctx, 31, 0x226C1Cu);
    ctx->pc = 0x226C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226C14u;
    // 0x226c18: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1124D0u, 0x226C14u, 0x226C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226C1Cu;
label_226c1c:
    // 0x226c1c: 0x10000005  b           . + 4 + (0x5 << 2)
label_226c20:
    if (ctx->pc == 0x226C20u) {
        ctx->pc = 0x226C24u;
        goto label_226c24;
    }
    ctx->pc = 0x226C1Cu;
    {
        const bool branch_taken_0x226c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226c1c) {
            ctx->pc = 0x226C34u;
            goto label_226c34;
        }
    }
    ctx->pc = 0x226C24u;
label_226c24:
    // 0x226c24: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x226c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_226c28:
    // 0x226c28: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x226c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_226c2c:
    // 0x226c2c: 0xc044934  jal         func_1124D0
label_226c30:
    if (ctx->pc == 0x226C30u) {
        ctx->pc = 0x226C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C2Cu;
        // 0x226c30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226C34u;
        goto label_226c34;
    }
    ctx->pc = 0x226C2Cu;
    SET_GPR_U32(ctx, 31, 0x226C34u);
    ctx->pc = 0x226C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226C2Cu;
    // 0x226c30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1124D0u, 0x226C2Cu, 0x226C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226C34u;
label_226c34:
    // 0x226c34: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_226c38:
    if (ctx->pc == 0x226C38u) {
        ctx->pc = 0x226C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C34u;
        // 0x226c38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226C3Cu;
        goto label_226c3c;
    }
    ctx->pc = 0x226C34u;
    {
        const bool branch_taken_0x226c34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x226C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C34u;
        // 0x226c38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226c34) {
            ctx->pc = 0x226C44u;
            goto label_226c44;
        }
    }
    ctx->pc = 0x226C3Cu;
label_226c3c:
    // 0x226c3c: 0xc06e45c  jal         func_1B9170
label_226c40:
    if (ctx->pc == 0x226C40u) {
        ctx->pc = 0x226C44u;
        goto label_226c44;
    }
    ctx->pc = 0x226C3Cu;
    SET_GPR_U32(ctx, 31, 0x226C44u);
    ctx->pc = 0x1B9170u;
    { ctx->pc = 0x1b9170; return; }
    ctx->pc = 0x226C44u;
label_226c44:
    // 0x226c44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x226c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_226c48:
    // 0x226c48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x226c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226c4c:
    // 0x226c4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x226c4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_226c50:
    // 0x226c50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x226c50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_226c54:
    // 0x226c54: 0x3e00008  jr          $ra
label_226c58:
    if (ctx->pc == 0x226C58u) {
        ctx->pc = 0x226C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C54u;
        // 0x226c58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226C5Cu;
        goto label_226c5c;
    }
    ctx->pc = 0x226C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C54u;
        // 0x226c58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226C5Cu;
label_226c5c:
    // 0x226c5c: 0x0  nop
    ctx->pc = 0x226c5cu;
    // NOP
label_226c60:
    // 0x226c60: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x226c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_226c64:
    // 0x226c64: 0x2402005f  addiu       $v0, $zero, 0x5F
    ctx->pc = 0x226c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_226c68:
    // 0x226c68: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x226c68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_226c6c:
    // 0x226c6c: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
label_226c70:
    if (ctx->pc == 0x226C70u) {
        ctx->pc = 0x226C74u;
        goto label_226c74;
    }
    ctx->pc = 0x226C6Cu;
    {
        const bool branch_taken_0x226c6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x226c6c) {
            ctx->pc = 0x226CE8u;
            goto label_226ce8;
        }
    }
    ctx->pc = 0x226C74u;
label_226c74:
    // 0x226c74: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x226c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_226c78:
    // 0x226c78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x226c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_226c7c:
    // 0x226c7c: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
label_226c80:
    if (ctx->pc == 0x226C80u) {
        ctx->pc = 0x226C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C7Cu;
        // 0x226c80: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226C84u;
        goto label_226c84;
    }
    ctx->pc = 0x226C7Cu;
    {
        const bool branch_taken_0x226c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x226C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C7Cu;
        // 0x226c80: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226c7c) {
            ctx->pc = 0x226CE8u;
            goto label_226ce8;
        }
    }
    ctx->pc = 0x226C84u;
label_226c84:
    // 0x226c84: 0x244250b0  addiu       $v0, $v0, 0x50B0
    ctx->pc = 0x226c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20656));
label_226c88:
    // 0x226c88: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x226c88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_226c8c:
    // 0x226c8c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x226c8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_226c90:
    // 0x226c90: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_226c94:
    if (ctx->pc == 0x226C94u) {
        ctx->pc = 0x226C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C90u;
        // 0x226c94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226C98u;
        goto label_226c98;
    }
    ctx->pc = 0x226C90u;
    {
        const bool branch_taken_0x226c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C90u;
        // 0x226c94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226c90) {
            ctx->pc = 0x226CDCu;
            goto label_226cdc;
        }
    }
    ctx->pc = 0x226C98u;
label_226c98:
    // 0x226c98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x226c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226c9c:
    // 0x226c9c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x226c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_226ca0:
    // 0x226ca0: 0x24634a30  addiu       $v1, $v1, 0x4A30
    ctx->pc = 0x226ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18992));
label_226ca4:
    // 0x226ca4: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x226ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_226ca8:
    // 0x226ca8: 0x90420682  lbu         $v0, 0x682($v0)
    ctx->pc = 0x226ca8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1666)));
label_226cac:
    // 0x226cac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_226cb0:
    if (ctx->pc == 0x226CB0u) {
        ctx->pc = 0x226CB4u;
        goto label_226cb4;
    }
    ctx->pc = 0x226CACu;
    {
        const bool branch_taken_0x226cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226cac) {
            ctx->pc = 0x226CB8u;
            goto label_226cb8;
        }
    }
    ctx->pc = 0x226CB4u;
label_226cb4:
    // 0x226cb4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x226cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_226cb8:
    // 0x226cb8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x226cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_226cbc:
    // 0x226cbc: 0x28c20005  slti        $v0, $a2, 0x5
    ctx->pc = 0x226cbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
label_226cc0:
    // 0x226cc0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_226cc4:
    if (ctx->pc == 0x226CC4u) {
        ctx->pc = 0x226CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226CC0u;
        // 0x226cc4: 0x661021  addu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226CC8u;
        goto label_226cc8;
    }
    ctx->pc = 0x226CC0u;
    {
        const bool branch_taken_0x226cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226CC0u;
        // 0x226cc4: 0x661021  addu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226cc0) {
            ctx->pc = 0x226CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226ca8;
        }
    }
    ctx->pc = 0x226CC8u;
label_226cc8:
    // 0x226cc8: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x226cc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_226ccc:
    // 0x226ccc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_226cd0:
    if (ctx->pc == 0x226CD0u) {
        ctx->pc = 0x226CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226CCCu;
        // 0x226cd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226CD4u;
        goto label_226cd4;
    }
    ctx->pc = 0x226CCCu;
    {
        const bool branch_taken_0x226ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226CCCu;
        // 0x226cd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226ccc) {
            ctx->pc = 0x226CE0u;
            goto label_226ce0;
        }
    }
    ctx->pc = 0x226CD4u;
label_226cd4:
    // 0x226cd4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x226cd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_226cd8:
    // 0x226cd8: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x226cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
label_226cdc:
    // 0x226cdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x226cdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226ce0:
    // 0x226ce0: 0x10000008  b           . + 4 + (0x8 << 2)
label_226ce4:
    if (ctx->pc == 0x226CE4u) {
        ctx->pc = 0x226CE8u;
        goto label_226ce8;
    }
    ctx->pc = 0x226CE0u;
    {
        const bool branch_taken_0x226ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226ce0) {
            ctx->pc = 0x226D04u;
            goto label_226d04;
        }
    }
    ctx->pc = 0x226CE8u;
label_226ce8:
    // 0x226ce8: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x226ce8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_226cec:
    // 0x226cec: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x226cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_226cf0:
    // 0x226cf0: 0x246350b0  addiu       $v1, $v1, 0x50B0
    ctx->pc = 0x226cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20656));
label_226cf4:
    // 0x226cf4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x226cf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226cf8:
    // 0x226cf8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x226cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_226cfc:
    // 0x226cfc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x226cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_226d00:
    // 0x226d00: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x226d00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_226d04:
    // 0x226d04: 0x3e00008  jr          $ra
label_226d08:
    if (ctx->pc == 0x226D08u) {
        ctx->pc = 0x226D0Cu;
        goto label_226d0c;
    }
    ctx->pc = 0x226D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226D0Cu;
label_226d0c:
    // 0x226d0c: 0x0  nop
    ctx->pc = 0x226d0cu;
    // NOP
label_226d10:
    // 0x226d10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_226d14:
    // 0x226d14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_226d18:
    // 0x226d18: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x226d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_226d1c:
    // 0x226d1c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_226d20:
    if (ctx->pc == 0x226D20u) {
        ctx->pc = 0x226D24u;
        goto label_226d24;
    }
    ctx->pc = 0x226D1Cu;
    {
        const bool branch_taken_0x226d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x226d1c) {
            ctx->pc = 0x226D34u;
            goto label_226d34;
        }
    }
    ctx->pc = 0x226D24u;
label_226d24:
    // 0x226d24: 0xc059e78  jal         func_1679E0
label_226d28:
    if (ctx->pc == 0x226D28u) {
        ctx->pc = 0x226D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D24u;
        // 0x226d28: 0x90840004  lbu         $a0, 0x4($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226D2Cu;
        goto label_226d2c;
    }
    ctx->pc = 0x226D24u;
    SET_GPR_U32(ctx, 31, 0x226D2Cu);
    ctx->pc = 0x226D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226D24u;
    // 0x226d28: 0x90840004  lbu         $a0, 0x4($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1679E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1679E0u, 0x226D24u, 0x226D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D2Cu;
label_226d2c:
    // 0x226d2c: 0x10000004  b           . + 4 + (0x4 << 2)
label_226d30:
    if (ctx->pc == 0x226D30u) {
        ctx->pc = 0x226D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D2Cu;
        // 0x226d30: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226D34u;
        goto label_226d34;
    }
    ctx->pc = 0x226D2Cu;
    {
        const bool branch_taken_0x226d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D2Cu;
        // 0x226d30: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226d2c) {
            ctx->pc = 0x226D40u;
            goto label_226d40;
        }
    }
    ctx->pc = 0x226D34u;
label_226d34:
    // 0x226d34: 0xc059eb8  jal         func_167AE0
label_226d38:
    if (ctx->pc == 0x226D38u) {
        ctx->pc = 0x226D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D34u;
        // 0x226d38: 0x90840004  lbu         $a0, 0x4($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226D3Cu;
        goto label_226d3c;
    }
    ctx->pc = 0x226D34u;
    SET_GPR_U32(ctx, 31, 0x226D3Cu);
    ctx->pc = 0x226D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226D34u;
    // 0x226d38: 0x90840004  lbu         $a0, 0x4($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167AE0u, 0x226D34u, 0x226D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D3Cu;
label_226d3c:
    // 0x226d3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_226d40:
    // 0x226d40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x226d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226d44:
    // 0x226d44: 0x3e00008  jr          $ra
label_226d48:
    if (ctx->pc == 0x226D48u) {
        ctx->pc = 0x226D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D44u;
        // 0x226d48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226D4Cu;
        goto label_226d4c;
    }
    ctx->pc = 0x226D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D44u;
        // 0x226d48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226D4Cu;
label_226d4c:
    // 0x226d4c: 0x0  nop
    ctx->pc = 0x226d4cu;
    // NOP
label_226d50:
    // 0x226d50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_226d54:
    // 0x226d54: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x226d54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
label_226d58:
    // 0x226d58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_226d5c:
    // 0x226d5c: 0x24c62570  addiu       $a2, $a2, 0x2570
    ctx->pc = 0x226d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9584));
label_226d60:
    // 0x226d60: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x226d60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_226d64:
    // 0x226d64: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x226d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_226d68:
    // 0x226d68: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x226d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_226d6c:
    // 0x226d6c: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x226d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_226d70:
    // 0x226d70: 0x472023  subu        $a0, $v0, $a3
    ctx->pc = 0x226d70u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_226d74:
    // 0x226d74: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x226d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_226d78:
    // 0x226d78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x226d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_226d7c:
    // 0x226d7c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x226d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_226d80:
    // 0x226d80: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x226d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_226d84:
    // 0x226d84: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x226d84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_226d88:
    // 0x226d88: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x226d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_226d8c:
    // 0x226d8c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x226d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_226d90:
    // 0x226d90: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x226d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_226d94:
    // 0x226d94: 0xc05d518  jal         func_175460
label_226d98:
    if (ctx->pc == 0x226D98u) {
        ctx->pc = 0x226D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D94u;
        // 0x226d98: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226D9Cu;
        goto label_226d9c;
    }
    ctx->pc = 0x226D94u;
    SET_GPR_U32(ctx, 31, 0x226D9Cu);
    ctx->pc = 0x226D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226D94u;
    // 0x226d98: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175460u, 0x226D94u, 0x226D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D9Cu;
label_226d9c:
    // 0x226d9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_226da0:
    // 0x226da0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x226da0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226da4:
    // 0x226da4: 0x3e00008  jr          $ra
label_226da8:
    if (ctx->pc == 0x226DA8u) {
        ctx->pc = 0x226DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226DA4u;
        // 0x226da8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226DACu;
        goto label_226dac;
    }
    ctx->pc = 0x226DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226DA4u;
        // 0x226da8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226DACu;
label_226dac:
    // 0x226dac: 0x0  nop
    ctx->pc = 0x226dacu;
    // NOP
label_226db0:
    // 0x226db0: 0x8c8b0000  lw          $t3, 0x0($a0)
    ctx->pc = 0x226db0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_226db4:
    // 0x226db4: 0x3c08002f  lui         $t0, 0x2F
    ctx->pc = 0x226db4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)47 << 16));
label_226db8:
    // 0x226db8: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x226db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_226dbc:
    // 0x226dbc: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x226dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_226dc0:
    // 0x226dc0: 0x250825ae  addiu       $t0, $t0, 0x25AE
    ctx->pc = 0x226dc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9646));
label_226dc4:
    // 0x226dc4: 0x8c8a0008  lw          $t2, 0x8($a0)
    ctx->pc = 0x226dc4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_226dc8:
    // 0x226dc8: 0x24422570  addiu       $v0, $v0, 0x2570
    ctx->pc = 0x226dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9584));
label_226dcc:
    // 0x226dcc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x226dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_226dd0:
    // 0x226dd0: 0xb2a00  sll         $a1, $t3, 8
    ctx->pc = 0x226dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), 8));
label_226dd4:
    // 0x226dd4: 0xab4823  subu        $t1, $a1, $t3
    ctx->pc = 0x226dd4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
label_226dd8:
    // 0x226dd8: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x226dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_226ddc:
    // 0x226ddc: 0x938c0  sll         $a3, $t1, 3
    ctx->pc = 0x226ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_226de0:
    // 0x226de0: 0x1274821  addu        $t1, $t1, $a3
    ctx->pc = 0x226de0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_226de4:
    // 0x226de4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x226de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_226de8:
    // 0x226de8: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x226de8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_226dec:
    // 0x226dec: 0x538c0  sll         $a3, $a1, 3
    ctx->pc = 0x226decu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_226df0:
    // 0x226df0: 0x1092821  addu        $a1, $t0, $t1
    ctx->pc = 0x226df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_226df4:
    // 0x226df4: 0x24a50000  addiu       $a1, $a1, 0x0
    ctx->pc = 0x226df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
label_226df8:
    // 0x226df8: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x226df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_226dfc:
    // 0x226dfc: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x226dfcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_226e00:
    // 0x226e00: 0x15430004  bne         $t2, $v1, . + 4 + (0x4 << 2)
label_226e04:
    if (ctx->pc == 0x226E04u) {
        ctx->pc = 0x226E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E00u;
        // 0x226e04: 0x491021  addu        $v0, $v0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226E08u;
        goto label_226e08;
    }
    ctx->pc = 0x226E00u;
    {
        const bool branch_taken_0x226e00 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        ctx->pc = 0x226E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E00u;
        // 0x226e04: 0x491021  addu        $v0, $v0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226e00) {
            ctx->pc = 0x226E14u;
            goto label_226e14;
        }
    }
    ctx->pc = 0x226E08u;
label_226e08:
    // 0x226e08: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x226e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_226e0c:
    // 0x226e0c: 0x10000002  b           . + 4 + (0x2 << 2)
label_226e10:
    if (ctx->pc == 0x226E10u) {
        ctx->pc = 0x226E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E0Cu;
        // 0x226e10: 0x9023496c  lbu         $v1, 0x496C($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18796)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226E14u;
        goto label_226e14;
    }
    ctx->pc = 0x226E0Cu;
    {
        const bool branch_taken_0x226e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E0Cu;
        // 0x226e10: 0x9023496c  lbu         $v1, 0x496C($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18796)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226e0c) {
            ctx->pc = 0x226E18u;
            goto label_226e18;
        }
    }
    ctx->pc = 0x226E14u;
label_226e14:
    // 0x226e14: 0x314300ff  andi        $v1, $t2, 0xFF
    ctx->pc = 0x226e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
label_226e18:
    // 0x226e18: 0xb38c0  sll         $a3, $t3, 3
    ctx->pc = 0x226e18u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
label_226e1c:
    // 0x226e1c: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x226e1cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
label_226e20:
    // 0x226e20: 0xeb5021  addu        $t2, $a3, $t3
    ctx->pc = 0x226e20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
label_226e24:
    // 0x226e24: 0x30a800ff  andi        $t0, $a1, 0xFF
    ctx->pc = 0x226e24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_226e28:
    // 0x226e28: 0xa3880  sll         $a3, $t2, 2
    ctx->pc = 0x226e28u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_226e2c:
    // 0x226e2c: 0x25291300  addiu       $t1, $t1, 0x1300
    ctx->pc = 0x226e2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4864));
label_226e30:
    // 0x226e30: 0xea5023  subu        $t2, $a3, $t2
    ctx->pc = 0x226e30u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
label_226e34:
    // 0x226e34: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x226e34u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_226e38:
    // 0x226e38: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x226e38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_226e3c:
    // 0x226e3c: 0xa4200  sll         $t0, $t2, 8
    ctx->pc = 0x226e3cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
label_226e40:
    // 0x226e40: 0x1284821  addu        $t1, $t1, $t0
    ctx->pc = 0x226e40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_226e44:
    // 0x226e44: 0x74180  sll         $t0, $a3, 6
    ctx->pc = 0x226e44u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
label_226e48:
    // 0x226e48: 0x25270000  addiu       $a3, $t1, 0x0
    ctx->pc = 0x226e48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 0));
label_226e4c:
    // 0x226e4c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x226e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_226e50:
    // 0x226e50: 0x90e70220  lbu         $a3, 0x220($a3)
    ctx->pc = 0x226e50u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 544)));
label_226e54:
    // 0x226e54: 0x14c70003  bne         $a2, $a3, . + 4 + (0x3 << 2)
label_226e58:
    if (ctx->pc == 0x226E58u) {
        ctx->pc = 0x226E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E54u;
        // 0x226e58: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x226E5Cu;
        goto label_226e5c;
    }
    ctx->pc = 0x226E54u;
    {
        const bool branch_taken_0x226e54 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x226E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E54u;
        // 0x226e58: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x226e54) {
            ctx->pc = 0x226E64u;
            goto label_226e64;
        }
    }
    ctx->pc = 0x226E5Cu;
label_226e5c:
    // 0x226e5c: 0x10000002  b           . + 4 + (0x2 << 2)
label_226e60:
    if (ctx->pc == 0x226E60u) {
        ctx->pc = 0x226E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E5Cu;
        // 0x226e60: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226E64u;
        goto label_226e64;
    }
    ctx->pc = 0x226E5Cu;
    {
        const bool branch_taken_0x226e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E5Cu;
        // 0x226e60: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226e5c) {
            ctx->pc = 0x226E68u;
            goto label_226e68;
        }
    }
    ctx->pc = 0x226E64u;
label_226e64:
    // 0x226e64: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x226e64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_226e68:
    // 0x226e68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x226e68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226e6c:
    // 0x226e6c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x226e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_226e70:
    // 0x226e70: 0x9046003d  lbu         $a2, 0x3D($v0)
    ctx->pc = 0x226e70u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 61)));
label_226e74:
    // 0x226e74: 0x14c00014  bnez        $a2, . + 4 + (0x14 << 2)
label_226e78:
    if (ctx->pc == 0x226E78u) {
        ctx->pc = 0x226E7Cu;
        goto label_226e7c;
    }
    ctx->pc = 0x226E74u;
    {
        const bool branch_taken_0x226e74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x226e74) {
            ctx->pc = 0x226EC8u;
            goto label_226ec8;
        }
    }
    ctx->pc = 0x226E7Cu;
label_226e7c:
    // 0x226e7c: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x226e7cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_226e80:
    // 0x226e80: 0x91460014  lbu         $a2, 0x14($t2)
    ctx->pc = 0x226e80u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 20)));
label_226e84:
    // 0x226e84: 0x10c70010  beq         $a2, $a3, . + 4 + (0x10 << 2)
label_226e88:
    if (ctx->pc == 0x226E88u) {
        ctx->pc = 0x226E8Cu;
        goto label_226e8c;
    }
    ctx->pc = 0x226E84u;
    {
        const bool branch_taken_0x226e84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x226e84) {
            ctx->pc = 0x226EC8u;
            goto label_226ec8;
        }
    }
    ctx->pc = 0x226E8Cu;
label_226e8c:
    // 0x226e8c: 0x1120000a  beqz        $t1, . + 4 + (0xA << 2)
label_226e90:
    if (ctx->pc == 0x226E90u) {
        ctx->pc = 0x226E94u;
        goto label_226e94;
    }
    ctx->pc = 0x226E8Cu;
    {
        const bool branch_taken_0x226e8c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x226e8c) {
            ctx->pc = 0x226EB8u;
            goto label_226eb8;
        }
    }
    ctx->pc = 0x226E94u;
label_226e94:
    // 0x226e94: 0x91460011  lbu         $a2, 0x11($t2)
    ctx->pc = 0x226e94u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 17)));
label_226e98:
    // 0x226e98: 0x8c8b0004  lw          $t3, 0x4($a0)
    ctx->pc = 0x226e98u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_226e9c:
    // 0x226e9c: 0x10cb0003  beq         $a2, $t3, . + 4 + (0x3 << 2)
label_226ea0:
    if (ctx->pc == 0x226EA0u) {
        ctx->pc = 0x226EA4u;
        goto label_226ea4;
    }
    ctx->pc = 0x226E9Cu;
    {
        const bool branch_taken_0x226e9c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 11));
        if (branch_taken_0x226e9c) {
            ctx->pc = 0x226EACu;
            goto label_226eac;
        }
    }
    ctx->pc = 0x226EA4u;
label_226ea4:
    // 0x226ea4: 0x150b0008  bne         $t0, $t3, . + 4 + (0x8 << 2)
label_226ea8:
    if (ctx->pc == 0x226EA8u) {
        ctx->pc = 0x226EACu;
        goto label_226eac;
    }
    ctx->pc = 0x226EA4u;
    {
        const bool branch_taken_0x226ea4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 11));
        if (branch_taken_0x226ea4) {
            ctx->pc = 0x226EC8u;
            goto label_226ec8;
        }
    }
    ctx->pc = 0x226EACu;
label_226eac:
    // 0x226eac: 0x0  nop
    ctx->pc = 0x226eacu;
    // NOP
label_226eb0:
    // 0x226eb0: 0x10000005  b           . + 4 + (0x5 << 2)
label_226eb4:
    if (ctx->pc == 0x226EB4u) {
        ctx->pc = 0x226EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226EB0u;
        // 0x226eb4: 0xa1430016  sb          $v1, 0x16($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 22), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226EB8u;
        goto label_226eb8;
    }
    ctx->pc = 0x226EB0u;
    {
        const bool branch_taken_0x226eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226EB0u;
        // 0x226eb4: 0xa1430016  sb          $v1, 0x16($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 22), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226eb0) {
            ctx->pc = 0x226EC8u;
            goto label_226ec8;
        }
    }
    ctx->pc = 0x226EB8u;
label_226eb8:
    // 0x226eb8: 0x9046003e  lbu         $a2, 0x3E($v0)
    ctx->pc = 0x226eb8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 62)));
label_226ebc:
    // 0x226ebc: 0x14c50002  bne         $a2, $a1, . + 4 + (0x2 << 2)
label_226ec0:
    if (ctx->pc == 0x226EC0u) {
        ctx->pc = 0x226EC4u;
        goto label_226ec4;
    }
    ctx->pc = 0x226EBCu;
    {
        const bool branch_taken_0x226ebc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x226ebc) {
            ctx->pc = 0x226EC8u;
            goto label_226ec8;
        }
    }
    ctx->pc = 0x226EC4u;
label_226ec4:
    // 0x226ec4: 0xa1430016  sb          $v1, 0x16($t2)
    ctx->pc = 0x226ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 22), (uint8_t)GPR_U32(ctx, 3));
label_226ec8:
    // 0x226ec8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x226ec8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_226ecc:
    // 0x226ecc: 0x290600ff  slti        $a2, $t0, 0xFF
    ctx->pc = 0x226eccu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)255) ? 1 : 0);
label_226ed0:
    // 0x226ed0: 0x14c0ffe7  bnez        $a2, . + 4 + (-0x19 << 2)
label_226ed4:
    if (ctx->pc == 0x226ED4u) {
        ctx->pc = 0x226ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226ED0u;
        // 0x226ed4: 0x24420048  addiu       $v0, $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226ED8u;
        goto label_226ed8;
    }
    ctx->pc = 0x226ED0u;
    {
        const bool branch_taken_0x226ed0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x226ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226ED0u;
        // 0x226ed4: 0x24420048  addiu       $v0, $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226ed0) {
            ctx->pc = 0x226E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226e70;
        }
    }
    ctx->pc = 0x226ED8u;
label_226ed8:
    // 0x226ed8: 0x3e00008  jr          $ra
label_226edc:
    if (ctx->pc == 0x226EDCu) {
        ctx->pc = 0x226EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226ED8u;
        // 0x226edc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226EE0u;
        goto label_226ee0;
    }
    ctx->pc = 0x226ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226ED8u;
        // 0x226edc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226EE0u;
label_226ee0:
    // 0x226ee0: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x226ee0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_226ee4:
    // 0x226ee4: 0x3c08002f  lui         $t0, 0x2F
    ctx->pc = 0x226ee4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)47 << 16));
label_226ee8:
    // 0x226ee8: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x226ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
label_226eec:
    // 0x226eec: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x226eecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_226ef0:
    // 0x226ef0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x226ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_226ef4:
    // 0x226ef4: 0x250825ae  addiu       $t0, $t0, 0x25AE
    ctx->pc = 0x226ef4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9646));
label_226ef8:
    // 0x226ef8: 0x24c62570  addiu       $a2, $a2, 0x2570
    ctx->pc = 0x226ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9584));
label_226efc:
    // 0x226efc: 0x24a51300  addiu       $a1, $a1, 0x1300
    ctx->pc = 0x226efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4864));
label_226f00:
    // 0x226f00: 0x93a00  sll         $a3, $t1, 8
    ctx->pc = 0x226f00u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_226f04:
    // 0x226f04: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x226f04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_226f08:
    // 0x226f08: 0xe95023  subu        $t2, $a3, $t1
    ctx->pc = 0x226f08u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_226f0c:
    // 0x226f0c: 0x493821  addu        $a3, $v0, $t1
    ctx->pc = 0x226f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_226f10:
    // 0x226f10: 0xa48c0  sll         $t1, $t2, 3
    ctx->pc = 0x226f10u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_226f14:
    // 0x226f14: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x226f14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_226f18:
    // 0x226f18: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x226f18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_226f1c:
    // 0x226f1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x226f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_226f20:
    // 0x226f20: 0x950c0  sll         $t2, $t1, 3
    ctx->pc = 0x226f20u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_226f24:
    // 0x226f24: 0x10a4021  addu        $t0, $t0, $t2
    ctx->pc = 0x226f24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
label_226f28:
    // 0x226f28: 0x248c0  sll         $t1, $v0, 3
    ctx->pc = 0x226f28u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_226f2c:
    // 0x226f2c: 0x25080000  addiu       $t0, $t0, 0x0
    ctx->pc = 0x226f2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 0));
label_226f30:
    // 0x226f30: 0xca1021  addu        $v0, $a2, $t2
    ctx->pc = 0x226f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_226f34:
    // 0x226f34: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x226f34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_226f38:
    // 0x226f38: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x226f38u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_226f3c:
    // 0x226f3c: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x226f3cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_226f40:
    // 0x226f40: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x226f40u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_226f44:
    // 0x226f44: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x226f44u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_226f48:
    // 0x226f48: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x226f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_226f4c:
    // 0x226f4c: 0x24a50000  addiu       $a1, $a1, 0x0
    ctx->pc = 0x226f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
label_226f50:
    // 0x226f50: 0x830c0  sll         $a2, $t0, 3
    ctx->pc = 0x226f50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_226f54:
    // 0x226f54: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x226f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_226f58:
    // 0x226f58: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x226f58u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_226f5c:
    // 0x226f5c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x226f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_226f60:
    // 0x226f60: 0x90a50220  lbu         $a1, 0x220($a1)
    ctx->pc = 0x226f60u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 544)));
label_226f64:
    // 0x226f64: 0x14650002  bne         $v1, $a1, . + 4 + (0x2 << 2)
label_226f68:
    if (ctx->pc == 0x226F68u) {
        ctx->pc = 0x226F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F64u;
        // 0x226f68: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226F6Cu;
        goto label_226f6c;
    }
    ctx->pc = 0x226F64u;
    {
        const bool branch_taken_0x226f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x226F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F64u;
        // 0x226f68: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226f64) {
            ctx->pc = 0x226F70u;
            goto label_226f70;
        }
    }
    ctx->pc = 0x226F6Cu;
label_226f6c:
    // 0x226f6c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x226f6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226f70:
    // 0x226f70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x226f70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226f74:
    // 0x226f74: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x226f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_226f78:
    // 0x226f78: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x226f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_226f7c:
    // 0x226f7c: 0x0  nop
    ctx->pc = 0x226f7cu;
    // NOP
label_226f80:
    // 0x226f80: 0x9043003d  lbu         $v1, 0x3D($v0)
    ctx->pc = 0x226f80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 61)));
label_226f84:
    // 0x226f84: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
label_226f88:
    if (ctx->pc == 0x226F88u) {
        ctx->pc = 0x226F8Cu;
        goto label_226f8c;
    }
    ctx->pc = 0x226F84u;
    {
        const bool branch_taken_0x226f84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x226f84) {
            ctx->pc = 0x226FF0u;
            goto label_226ff0;
        }
    }
    ctx->pc = 0x226F8Cu;
label_226f8c:
    // 0x226f8c: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x226f8cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_226f90:
    // 0x226f90: 0x91430014  lbu         $v1, 0x14($t2)
    ctx->pc = 0x226f90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 20)));
label_226f94:
    // 0x226f94: 0x10660016  beq         $v1, $a2, . + 4 + (0x16 << 2)
label_226f98:
    if (ctx->pc == 0x226F98u) {
        ctx->pc = 0x226F9Cu;
        goto label_226f9c;
    }
    ctx->pc = 0x226F94u;
    {
        const bool branch_taken_0x226f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x226f94) {
            ctx->pc = 0x226FF0u;
            goto label_226ff0;
        }
    }
    ctx->pc = 0x226F9Cu;
label_226f9c:
    // 0x226f9c: 0x10650014  beq         $v1, $a1, . + 4 + (0x14 << 2)
label_226fa0:
    if (ctx->pc == 0x226FA0u) {
        ctx->pc = 0x226FA4u;
        goto label_226fa4;
    }
    ctx->pc = 0x226F9Cu;
    {
        const bool branch_taken_0x226f9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x226f9c) {
            ctx->pc = 0x226FF0u;
            goto label_226ff0;
        }
    }
    ctx->pc = 0x226FA4u;
label_226fa4:
    // 0x226fa4: 0x1120000c  beqz        $t1, . + 4 + (0xC << 2)
label_226fa8:
    if (ctx->pc == 0x226FA8u) {
        ctx->pc = 0x226FACu;
        goto label_226fac;
    }
    ctx->pc = 0x226FA4u;
    {
        const bool branch_taken_0x226fa4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x226fa4) {
            ctx->pc = 0x226FD8u;
            goto label_226fd8;
        }
    }
    ctx->pc = 0x226FACu;
label_226fac:
    // 0x226fac: 0x91430011  lbu         $v1, 0x11($t2)
    ctx->pc = 0x226facu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 17)));
label_226fb0:
    // 0x226fb0: 0x8c8b0004  lw          $t3, 0x4($a0)
    ctx->pc = 0x226fb0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_226fb4:
    // 0x226fb4: 0x106b0003  beq         $v1, $t3, . + 4 + (0x3 << 2)
label_226fb8:
    if (ctx->pc == 0x226FB8u) {
        ctx->pc = 0x226FBCu;
        goto label_226fbc;
    }
    ctx->pc = 0x226FB4u;
    {
        const bool branch_taken_0x226fb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 11));
        if (branch_taken_0x226fb4) {
            ctx->pc = 0x226FC4u;
            goto label_226fc4;
        }
    }
    ctx->pc = 0x226FBCu;
label_226fbc:
    // 0x226fbc: 0x14eb000c  bne         $a3, $t3, . + 4 + (0xC << 2)
label_226fc0:
    if (ctx->pc == 0x226FC0u) {
        ctx->pc = 0x226FC4u;
        goto label_226fc4;
    }
    ctx->pc = 0x226FBCu;
    {
        const bool branch_taken_0x226fbc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 11));
        if (branch_taken_0x226fbc) {
            ctx->pc = 0x226FF0u;
            goto label_226ff0;
        }
    }
    ctx->pc = 0x226FC4u;
label_226fc4:
    // 0x226fc4: 0x0  nop
    ctx->pc = 0x226fc4u;
    // NOP
label_226fc8:
    // 0x226fc8: 0x80830008  lb          $v1, 0x8($a0)
    ctx->pc = 0x226fc8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
label_226fcc:
    // 0x226fcc: 0xa1430005  sb          $v1, 0x5($t2)
    ctx->pc = 0x226fccu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 5), (uint8_t)GPR_U32(ctx, 3));
label_226fd0:
    // 0x226fd0: 0x10000007  b           . + 4 + (0x7 << 2)
label_226fd4:
    if (ctx->pc == 0x226FD4u) {
        ctx->pc = 0x226FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226FD0u;
        // 0x226fd4: 0xa0400037  sb          $zero, 0x37($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 55), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226FD8u;
        goto label_226fd8;
    }
    ctx->pc = 0x226FD0u;
    {
        const bool branch_taken_0x226fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226FD0u;
        // 0x226fd4: 0xa0400037  sb          $zero, 0x37($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 55), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226fd0) {
            ctx->pc = 0x226FF0u;
            goto label_226ff0;
        }
    }
    ctx->pc = 0x226FD8u;
label_226fd8:
    // 0x226fd8: 0x9043003e  lbu         $v1, 0x3E($v0)
    ctx->pc = 0x226fd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 62)));
label_226fdc:
    // 0x226fdc: 0x14680004  bne         $v1, $t0, . + 4 + (0x4 << 2)
label_226fe0:
    if (ctx->pc == 0x226FE0u) {
        ctx->pc = 0x226FE4u;
        goto label_226fe4;
    }
    ctx->pc = 0x226FDCu;
    {
        const bool branch_taken_0x226fdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x226fdc) {
            ctx->pc = 0x226FF0u;
            goto label_226ff0;
        }
    }
    ctx->pc = 0x226FE4u;
label_226fe4:
    // 0x226fe4: 0x80830008  lb          $v1, 0x8($a0)
    ctx->pc = 0x226fe4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
label_226fe8:
    // 0x226fe8: 0xa1430005  sb          $v1, 0x5($t2)
    ctx->pc = 0x226fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 5), (uint8_t)GPR_U32(ctx, 3));
label_226fec:
    // 0x226fec: 0xa0400037  sb          $zero, 0x37($v0)
    ctx->pc = 0x226fecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 55), (uint8_t)GPR_U32(ctx, 0));
label_226ff0:
    // 0x226ff0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x226ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_226ff4:
    // 0x226ff4: 0x28e300ff  slti        $v1, $a3, 0xFF
    ctx->pc = 0x226ff4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)255) ? 1 : 0);
label_226ff8:
    // 0x226ff8: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
label_226ffc:
    if (ctx->pc == 0x226FFCu) {
        ctx->pc = 0x226FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226FF8u;
        // 0x226ffc: 0x24420048  addiu       $v0, $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227000u;
        goto label_227000;
    }
    ctx->pc = 0x226FF8u;
    {
        const bool branch_taken_0x226ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x226FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226FF8u;
        // 0x226ffc: 0x24420048  addiu       $v0, $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226ff8) {
            ctx->pc = 0x226F7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226f7c;
        }
    }
    ctx->pc = 0x227000u;
label_227000:
    // 0x227000: 0x3e00008  jr          $ra
label_227004:
    if (ctx->pc == 0x227004u) {
        ctx->pc = 0x227004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227000u;
        // 0x227004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227008u;
        goto label_227008;
    }
    ctx->pc = 0x227000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227000u;
        // 0x227004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227008u;
label_227008:
    // 0x227008: 0x0  nop
    ctx->pc = 0x227008u;
    // NOP
label_22700c:
    // 0x22700c: 0x0  nop
    ctx->pc = 0x22700cu;
    // NOP
label_227010:
    // 0x227010: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x227010u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_227014:
    // 0x227014: 0x3c09002f  lui         $t1, 0x2F
    ctx->pc = 0x227014u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)47 << 16));
label_227018:
    // 0x227018: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x227018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_22701c:
    // 0x22701c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x22701cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_227020:
    // 0x227020: 0x252925ae  addiu       $t1, $t1, 0x25AE
    ctx->pc = 0x227020u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 9646));
label_227024:
    // 0x227024: 0x24a51300  addiu       $a1, $a1, 0x1300
    ctx->pc = 0x227024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4864));
label_227028:
    // 0x227028: 0x73200  sll         $a2, $a3, 8
    ctx->pc = 0x227028u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_22702c:
    // 0x22702c: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x22702cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_227030:
    // 0x227030: 0xc74023  subu        $t0, $a2, $a3
    ctx->pc = 0x227030u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_227034:
    // 0x227034: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x227034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_227038:
    // 0x227038: 0x830c0  sll         $a2, $t0, 3
    ctx->pc = 0x227038u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_22703c:
    // 0x22703c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x22703cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_227040:
    // 0x227040: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x227040u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_227044:
    // 0x227044: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x227044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_227048:
    // 0x227048: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x227048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_22704c:
    // 0x22704c: 0x640c0  sll         $t0, $a2, 3
    ctx->pc = 0x22704cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_227050:
    // 0x227050: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x227050u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_227054:
    // 0x227054: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x227054u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_227058:
    // 0x227058: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x227058u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_22705c:
    // 0x22705c: 0x25270000  addiu       $a3, $t1, 0x0
    ctx->pc = 0x22705cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 0));
label_227060:
    // 0x227060: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x227060u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_227064:
    // 0x227064: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x227064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_227068:
    // 0x227068: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x227068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_22706c:
    // 0x22706c: 0x90e70000  lbu         $a3, 0x0($a3)
    ctx->pc = 0x22706cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_227070:
    // 0x227070: 0x24a50000  addiu       $a1, $a1, 0x0
    ctx->pc = 0x227070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
label_227074:
    // 0x227074: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x227074u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_227078:
    // 0x227078: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x227078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_22707c:
    // 0x22707c: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x22707cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_227080:
    // 0x227080: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x227080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_227084:
    // 0x227084: 0x90a50220  lbu         $a1, 0x220($a1)
    ctx->pc = 0x227084u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 544)));
label_227088:
    // 0x227088: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
label_22708c:
    if (ctx->pc == 0x22708Cu) {
        ctx->pc = 0x22708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227088u;
        // 0x22708c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227090u;
        goto label_227090;
    }
    ctx->pc = 0x227088u;
    {
        const bool branch_taken_0x227088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x22708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227088u;
        // 0x22708c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227088) {
            ctx->pc = 0x227094u;
            goto label_227094;
        }
    }
    ctx->pc = 0x227090u;
label_227090:
    // 0x227090: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x227090u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227094:
    // 0x227094: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x227094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_227098:
    // 0x227098: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x227098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22709c:
    // 0x22709c: 0x24422570  addiu       $v0, $v0, 0x2570
    ctx->pc = 0x22709cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9584));
label_2270a0:
    // 0x2270a0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2270a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2270a4:
    // 0x2270a4: 0x0  nop
    ctx->pc = 0x2270a4u;
    // NOP
label_2270a8:
    // 0x2270a8: 0x90a2003d  lbu         $v0, 0x3D($a1)
    ctx->pc = 0x2270a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 61)));
label_2270ac:
    // 0x2270ac: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_2270b0:
    if (ctx->pc == 0x2270B0u) {
        ctx->pc = 0x2270B4u;
        goto label_2270b4;
    }
    ctx->pc = 0x2270ACu;
    {
        const bool branch_taken_0x2270ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2270ac) {
            ctx->pc = 0x22710Cu;
            goto label_22710c;
        }
    }
    ctx->pc = 0x2270B4u;
label_2270b4:
    // 0x2270b4: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x2270b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2270b8:
    // 0x2270b8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2270b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2270bc:
    // 0x2270bc: 0x91230014  lbu         $v1, 0x14($t1)
    ctx->pc = 0x2270bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 20)));
label_2270c0:
    // 0x2270c0: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_2270c4:
    if (ctx->pc == 0x2270C4u) {
        ctx->pc = 0x2270C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2270C0u;
        // 0x2270c4: 0x252a0014  addiu       $t2, $t1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2270C8u;
        goto label_2270c8;
    }
    ctx->pc = 0x2270C0u;
    {
        const bool branch_taken_0x2270c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2270C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2270C0u;
        // 0x2270c4: 0x252a0014  addiu       $t2, $t1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2270c0) {
            ctx->pc = 0x22710Cu;
            goto label_22710c;
        }
    }
    ctx->pc = 0x2270C8u;
label_2270c8:
    // 0x2270c8: 0x1100000a  beqz        $t0, . + 4 + (0xA << 2)
label_2270cc:
    if (ctx->pc == 0x2270CCu) {
        ctx->pc = 0x2270D0u;
        goto label_2270d0;
    }
    ctx->pc = 0x2270C8u;
    {
        const bool branch_taken_0x2270c8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2270c8) {
            ctx->pc = 0x2270F4u;
            goto label_2270f4;
        }
    }
    ctx->pc = 0x2270D0u;
label_2270d0:
    // 0x2270d0: 0x91220011  lbu         $v0, 0x11($t1)
    ctx->pc = 0x2270d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 17)));
label_2270d4:
    // 0x2270d4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2270d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2270d8:
    // 0x2270d8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_2270dc:
    if (ctx->pc == 0x2270DCu) {
        ctx->pc = 0x2270E0u;
        goto label_2270e0;
    }
    ctx->pc = 0x2270D8u;
    {
        const bool branch_taken_0x2270d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2270d8) {
            ctx->pc = 0x2270E8u;
            goto label_2270e8;
        }
    }
    ctx->pc = 0x2270E0u;
label_2270e0:
    // 0x2270e0: 0x14c3000a  bne         $a2, $v1, . + 4 + (0xA << 2)
label_2270e4:
    if (ctx->pc == 0x2270E4u) {
        ctx->pc = 0x2270E8u;
        goto label_2270e8;
    }
    ctx->pc = 0x2270E0u;
    {
        const bool branch_taken_0x2270e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x2270e0) {
            ctx->pc = 0x22710Cu;
            goto label_22710c;
        }
    }
    ctx->pc = 0x2270E8u;
label_2270e8:
    // 0x2270e8: 0x8082000c  lb          $v0, 0xC($a0)
    ctx->pc = 0x2270e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
label_2270ec:
    // 0x2270ec: 0x10000007  b           . + 4 + (0x7 << 2)
label_2270f0:
    if (ctx->pc == 0x2270F0u) {
        ctx->pc = 0x2270F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2270ECu;
        // 0x2270f0: 0xa1420000  sb          $v0, 0x0($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2270F4u;
        goto label_2270f4;
    }
    ctx->pc = 0x2270ECu;
    {
        const bool branch_taken_0x2270ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2270F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2270ECu;
        // 0x2270f0: 0xa1420000  sb          $v0, 0x0($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2270ec) {
            ctx->pc = 0x22710Cu;
            goto label_22710c;
        }
    }
    ctx->pc = 0x2270F4u;
label_2270f4:
    // 0x2270f4: 0x0  nop
    ctx->pc = 0x2270f4u;
    // NOP
label_2270f8:
    // 0x2270f8: 0x90a2003e  lbu         $v0, 0x3E($a1)
    ctx->pc = 0x2270f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 62)));
label_2270fc:
    // 0x2270fc: 0x14470003  bne         $v0, $a3, . + 4 + (0x3 << 2)
label_227100:
    if (ctx->pc == 0x227100u) {
        ctx->pc = 0x227104u;
        goto label_227104;
    }
    ctx->pc = 0x2270FCu;
    {
        const bool branch_taken_0x2270fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x2270fc) {
            ctx->pc = 0x22710Cu;
            goto label_22710c;
        }
    }
    ctx->pc = 0x227104u;
label_227104:
    // 0x227104: 0x8082000c  lb          $v0, 0xC($a0)
    ctx->pc = 0x227104u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
label_227108:
    // 0x227108: 0xa1420000  sb          $v0, 0x0($t2)
    ctx->pc = 0x227108u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
label_22710c:
    // 0x22710c: 0x0  nop
    ctx->pc = 0x22710cu;
    // NOP
label_227110:
    // 0x227110: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x227110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_227114:
    // 0x227114: 0x28c200ff  slti        $v0, $a2, 0xFF
    ctx->pc = 0x227114u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)255) ? 1 : 0);
label_227118:
    // 0x227118: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_22711c:
    if (ctx->pc == 0x22711Cu) {
        ctx->pc = 0x22711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227118u;
        // 0x22711c: 0x24a50048  addiu       $a1, $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227120u;
        goto label_227120;
    }
    ctx->pc = 0x227118u;
    {
        const bool branch_taken_0x227118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227118u;
        // 0x22711c: 0x24a50048  addiu       $a1, $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227118) {
            ctx->pc = 0x2270A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2270a4;
        }
    }
    ctx->pc = 0x227120u;
label_227120:
    // 0x227120: 0x3e00008  jr          $ra
label_227124:
    if (ctx->pc == 0x227124u) {
        ctx->pc = 0x227124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227120u;
        // 0x227124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227128u;
        goto label_227128;
    }
    ctx->pc = 0x227120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227120u;
        // 0x227124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227128u;
label_227128:
    // 0x227128: 0x0  nop
    ctx->pc = 0x227128u;
    // NOP
label_22712c:
    // 0x22712c: 0x0  nop
    ctx->pc = 0x22712cu;
    // NOP
label_227130:
    // 0x227130: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x227130u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_227134:
    // 0x227134: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x227134u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
label_227138:
    // 0x227138: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x227138u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_22713c:
    // 0x22713c: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x22713cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_227140:
    // 0x227140: 0x24e72570  addiu       $a3, $a3, 0x2570
    ctx->pc = 0x227140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9584));
label_227144:
    // 0x227144: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x227144u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_227148:
    // 0x227148: 0x24a525a7  addiu       $a1, $a1, 0x25A7
    ctx->pc = 0x227148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9639));
label_22714c:
    // 0x22714c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22714cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227150:
    // 0x227150: 0x81a00  sll         $v1, $t0, 8
    ctx->pc = 0x227150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_227154:
    // 0x227154: 0x684023  subu        $t0, $v1, $t0
    ctx->pc = 0x227154u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_227158:
    // 0x227158: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x227158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_22715c:
    // 0x22715c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x22715cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_227160:
    // 0x227160: 0x830c0  sll         $a2, $t0, 3
    ctx->pc = 0x227160u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_227164:
    // 0x227164: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x227164u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_227168:
    // 0x227168: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x227168u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_22716c:
    // 0x22716c: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x22716cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_227170:
    // 0x227170: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x227170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_227174:
    // 0x227174: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x227174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_227178:
    // 0x227178: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x227178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_22717c:
    // 0x22717c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22717cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_227180:
    // 0x227180: 0xa0690015  sb          $t1, 0x15($v1)
    ctx->pc = 0x227180u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 21), (uint8_t)GPR_U32(ctx, 9));
label_227184:
    // 0x227184: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x227184u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_227188:
    // 0x227188: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x227188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_22718c:
    // 0x22718c: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x22718cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_227190:
    // 0x227190: 0x663023  subu        $a2, $v1, $a2
    ctx->pc = 0x227190u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_227194:
    // 0x227194: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x227194u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_227198:
    // 0x227198: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x227198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22719c:
    // 0x22719c: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x22719cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2271a0:
    // 0x2271a0: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x2271a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_2271a4:
    // 0x2271a4: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x2271a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2271a8:
    // 0x2271a8: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2271a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2271ac:
    // 0x2271ac: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2271acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2271b0:
    // 0x2271b0: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x2271b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_2271b4:
    // 0x2271b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2271b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2271b8:
    // 0x2271b8: 0x3e00008  jr          $ra
label_2271bc:
    if (ctx->pc == 0x2271BCu) {
        ctx->pc = 0x2271BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2271B8u;
        // 0x2271bc: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2271C0u;
        goto label_2271c0;
    }
    ctx->pc = 0x2271B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2271BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2271B8u;
        // 0x2271bc: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2271B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2271C0u;
label_2271c0:
    // 0x2271c0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2271c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2271c4:
    // 0x2271c4: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x2271c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_2271c8:
    // 0x2271c8: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2271c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_2271cc:
    // 0x2271cc: 0x24a525ae  addiu       $a1, $a1, 0x25AE
    ctx->pc = 0x2271ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9646));
label_2271d0:
    // 0x2271d0: 0x24422570  addiu       $v0, $v0, 0x2570
    ctx->pc = 0x2271d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9584));
label_2271d4:
    // 0x2271d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2271d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2271d8:
    // 0x2271d8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2271d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2271dc:
    // 0x2271dc: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x2271dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_2271e0:
    // 0x2271e0: 0x663023  subu        $a2, $v1, $a2
    ctx->pc = 0x2271e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2271e4:
    // 0x2271e4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2271e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2271e8:
    // 0x2271e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2271e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2271ec:
    // 0x2271ec: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2271ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2271f0:
    // 0x2271f0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2271f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2271f4:
    // 0x2271f4: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x2271f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_2271f8:
    // 0x2271f8: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x2271f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2271fc:
    // 0x2271fc: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x2271fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_227200:
    // 0x227200: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x227200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_227204:
    // 0x227204: 0x24820000  addiu       $v0, $a0, 0x0
    ctx->pc = 0x227204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_227208:
    // 0x227208: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x227208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22720c:
    // 0x22720c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x22720cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_227210:
    // 0x227210: 0x0  nop
    ctx->pc = 0x227210u;
    // NOP
label_227214:
    // 0x227214: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x227214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_227218:
    // 0x227218: 0x0  nop
    ctx->pc = 0x227218u;
    // NOP
label_22721c:
    // 0x22721c: 0x90a2003d  lbu         $v0, 0x3D($a1)
    ctx->pc = 0x22721cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 61)));
label_227220:
    // 0x227220: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_227224:
    if (ctx->pc == 0x227224u) {
        ctx->pc = 0x227228u;
        goto label_227228;
    }
    ctx->pc = 0x227220u;
    {
        const bool branch_taken_0x227220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x227220) {
            ctx->pc = 0x227238u;
            goto label_227238;
        }
    }
    ctx->pc = 0x227228u;
label_227228:
    // 0x227228: 0x90a2003e  lbu         $v0, 0x3E($a1)
    ctx->pc = 0x227228u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 62)));
label_22722c:
    // 0x22722c: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
label_227230:
    if (ctx->pc == 0x227230u) {
        ctx->pc = 0x227234u;
        goto label_227234;
    }
    ctx->pc = 0x22722Cu;
    {
        const bool branch_taken_0x22722c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x22722c) {
            ctx->pc = 0x227238u;
            goto label_227238;
        }
    }
    ctx->pc = 0x227234u;
label_227234:
    // 0x227234: 0xa0a30036  sb          $v1, 0x36($a1)
    ctx->pc = 0x227234u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 54), (uint8_t)GPR_U32(ctx, 3));
label_227238:
    // 0x227238: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x227238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_22723c:
    // 0x22723c: 0x28e200ff  slti        $v0, $a3, 0xFF
    ctx->pc = 0x22723cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)255) ? 1 : 0);
label_227240:
    // 0x227240: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_227244:
    if (ctx->pc == 0x227244u) {
        ctx->pc = 0x227244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227240u;
        // 0x227244: 0x24a50048  addiu       $a1, $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227248u;
        goto label_227248;
    }
    ctx->pc = 0x227240u;
    {
        const bool branch_taken_0x227240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227240u;
        // 0x227244: 0x24a50048  addiu       $a1, $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227240) {
            ctx->pc = 0x227218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227218;
        }
    }
    ctx->pc = 0x227248u;
label_227248:
    // 0x227248: 0x3e00008  jr          $ra
label_22724c:
    if (ctx->pc == 0x22724Cu) {
        ctx->pc = 0x22724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227248u;
        // 0x22724c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227250u;
        goto label_227250;
    }
    ctx->pc = 0x227248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227248u;
        // 0x22724c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227250u;
label_227250:
    // 0x227250: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x227250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_227254:
    // 0x227254: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x227254u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
label_227258:
    // 0x227258: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x227258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_22725c:
    // 0x22725c: 0x24c625ae  addiu       $a2, $a2, 0x25AE
    ctx->pc = 0x22725cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9646));
label_227260:
    // 0x227260: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x227260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_227264:
    // 0x227264: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x227264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    ctx->pc = 0x227268u;
    return;
}

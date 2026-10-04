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


void FUN_0019b808_part280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x223bb8u: goto label_223bb8;
        case 0x223bbcu: goto label_223bbc;
        case 0x223bc0u: goto label_223bc0;
        case 0x223bc4u: goto label_223bc4;
        case 0x223bc8u: goto label_223bc8;
        case 0x223bccu: goto label_223bcc;
        case 0x223bd0u: goto label_223bd0;
        case 0x223bd4u: goto label_223bd4;
        case 0x223bd8u: goto label_223bd8;
        case 0x223bdcu: goto label_223bdc;
        case 0x223be0u: goto label_223be0;
        case 0x223be4u: goto label_223be4;
        case 0x223be8u: goto label_223be8;
        case 0x223becu: goto label_223bec;
        case 0x223bf0u: goto label_223bf0;
        case 0x223bf4u: goto label_223bf4;
        case 0x223bf8u: goto label_223bf8;
        case 0x223bfcu: goto label_223bfc;
        case 0x223c00u: goto label_223c00;
        case 0x223c04u: goto label_223c04;
        case 0x223c08u: goto label_223c08;
        case 0x223c0cu: goto label_223c0c;
        case 0x223c10u: goto label_223c10;
        case 0x223c14u: goto label_223c14;
        case 0x223c18u: goto label_223c18;
        case 0x223c1cu: goto label_223c1c;
        case 0x223c20u: goto label_223c20;
        case 0x223c24u: goto label_223c24;
        case 0x223c28u: goto label_223c28;
        case 0x223c2cu: goto label_223c2c;
        case 0x223c30u: goto label_223c30;
        case 0x223c34u: goto label_223c34;
        case 0x223c38u: goto label_223c38;
        case 0x223c3cu: goto label_223c3c;
        case 0x223c40u: goto label_223c40;
        case 0x223c44u: goto label_223c44;
        case 0x223c48u: goto label_223c48;
        case 0x223c4cu: goto label_223c4c;
        case 0x223c50u: goto label_223c50;
        case 0x223c54u: goto label_223c54;
        case 0x223c58u: goto label_223c58;
        case 0x223c5cu: goto label_223c5c;
        case 0x223c60u: goto label_223c60;
        case 0x223c64u: goto label_223c64;
        case 0x223c68u: goto label_223c68;
        case 0x223c6cu: goto label_223c6c;
        case 0x223c70u: goto label_223c70;
        case 0x223c74u: goto label_223c74;
        case 0x223c78u: goto label_223c78;
        case 0x223c7cu: goto label_223c7c;
        case 0x223c80u: goto label_223c80;
        case 0x223c84u: goto label_223c84;
        case 0x223c88u: goto label_223c88;
        case 0x223c8cu: goto label_223c8c;
        case 0x223c90u: goto label_223c90;
        case 0x223c94u: goto label_223c94;
        case 0x223c98u: goto label_223c98;
        case 0x223c9cu: goto label_223c9c;
        case 0x223ca0u: goto label_223ca0;
        case 0x223ca4u: goto label_223ca4;
        case 0x223ca8u: goto label_223ca8;
        case 0x223cacu: goto label_223cac;
        case 0x223cb0u: goto label_223cb0;
        case 0x223cb4u: goto label_223cb4;
        case 0x223cb8u: goto label_223cb8;
        case 0x223cbcu: goto label_223cbc;
        case 0x223cc0u: goto label_223cc0;
        case 0x223cc4u: goto label_223cc4;
        case 0x223cc8u: goto label_223cc8;
        case 0x223cccu: goto label_223ccc;
        case 0x223cd0u: goto label_223cd0;
        case 0x223cd4u: goto label_223cd4;
        case 0x223cd8u: goto label_223cd8;
        case 0x223cdcu: goto label_223cdc;
        case 0x223ce0u: goto label_223ce0;
        case 0x223ce4u: goto label_223ce4;
        case 0x223ce8u: goto label_223ce8;
        case 0x223cecu: goto label_223cec;
        case 0x223cf0u: goto label_223cf0;
        case 0x223cf4u: goto label_223cf4;
        case 0x223cf8u: goto label_223cf8;
        case 0x223cfcu: goto label_223cfc;
        case 0x223d00u: goto label_223d00;
        case 0x223d04u: goto label_223d04;
        case 0x223d08u: goto label_223d08;
        case 0x223d0cu: goto label_223d0c;
        case 0x223d10u: goto label_223d10;
        case 0x223d14u: goto label_223d14;
        case 0x223d18u: goto label_223d18;
        case 0x223d1cu: goto label_223d1c;
        case 0x223d20u: goto label_223d20;
        case 0x223d24u: goto label_223d24;
        case 0x223d28u: goto label_223d28;
        case 0x223d2cu: goto label_223d2c;
        case 0x223d30u: goto label_223d30;
        case 0x223d34u: goto label_223d34;
        case 0x223d38u: goto label_223d38;
        case 0x223d3cu: goto label_223d3c;
        case 0x223d40u: goto label_223d40;
        case 0x223d44u: goto label_223d44;
        case 0x223d48u: goto label_223d48;
        case 0x223d4cu: goto label_223d4c;
        case 0x223d50u: goto label_223d50;
        case 0x223d54u: goto label_223d54;
        case 0x223d58u: goto label_223d58;
        case 0x223d5cu: goto label_223d5c;
        case 0x223d60u: goto label_223d60;
        case 0x223d64u: goto label_223d64;
        case 0x223d68u: goto label_223d68;
        case 0x223d6cu: goto label_223d6c;
        case 0x223d70u: goto label_223d70;
        case 0x223d74u: goto label_223d74;
        case 0x223d78u: goto label_223d78;
        case 0x223d7cu: goto label_223d7c;
        case 0x223d80u: goto label_223d80;
        case 0x223d84u: goto label_223d84;
        case 0x223d88u: goto label_223d88;
        case 0x223d8cu: goto label_223d8c;
        case 0x223d90u: goto label_223d90;
        case 0x223d94u: goto label_223d94;
        case 0x223d98u: goto label_223d98;
        case 0x223d9cu: goto label_223d9c;
        case 0x223da0u: goto label_223da0;
        case 0x223da4u: goto label_223da4;
        case 0x223da8u: goto label_223da8;
        case 0x223dacu: goto label_223dac;
        case 0x223db0u: goto label_223db0;
        case 0x223db4u: goto label_223db4;
        case 0x223db8u: goto label_223db8;
        case 0x223dbcu: goto label_223dbc;
        case 0x223dc0u: goto label_223dc0;
        case 0x223dc4u: goto label_223dc4;
        case 0x223dc8u: goto label_223dc8;
        case 0x223dccu: goto label_223dcc;
        case 0x223dd0u: goto label_223dd0;
        case 0x223dd4u: goto label_223dd4;
        case 0x223dd8u: goto label_223dd8;
        case 0x223ddcu: goto label_223ddc;
        case 0x223de0u: goto label_223de0;
        case 0x223de4u: goto label_223de4;
        case 0x223de8u: goto label_223de8;
        case 0x223decu: goto label_223dec;
        case 0x223df0u: goto label_223df0;
        case 0x223df4u: goto label_223df4;
        case 0x223df8u: goto label_223df8;
        case 0x223dfcu: goto label_223dfc;
        case 0x223e00u: goto label_223e00;
        case 0x223e04u: goto label_223e04;
        case 0x223e08u: goto label_223e08;
        case 0x223e0cu: goto label_223e0c;
        case 0x223e10u: goto label_223e10;
        case 0x223e14u: goto label_223e14;
        case 0x223e18u: goto label_223e18;
        case 0x223e1cu: goto label_223e1c;
        case 0x223e20u: goto label_223e20;
        case 0x223e24u: goto label_223e24;
        case 0x223e28u: goto label_223e28;
        case 0x223e2cu: goto label_223e2c;
        case 0x223e30u: goto label_223e30;
        case 0x223e34u: goto label_223e34;
        case 0x223e38u: goto label_223e38;
        case 0x223e3cu: goto label_223e3c;
        case 0x223e40u: goto label_223e40;
        case 0x223e44u: goto label_223e44;
        case 0x223e48u: goto label_223e48;
        case 0x223e4cu: goto label_223e4c;
        case 0x223e50u: goto label_223e50;
        case 0x223e54u: goto label_223e54;
        case 0x223e58u: goto label_223e58;
        case 0x223e5cu: goto label_223e5c;
        case 0x223e60u: goto label_223e60;
        case 0x223e64u: goto label_223e64;
        case 0x223e68u: goto label_223e68;
        case 0x223e6cu: goto label_223e6c;
        case 0x223e70u: goto label_223e70;
        case 0x223e74u: goto label_223e74;
        case 0x223e78u: goto label_223e78;
        case 0x223e7cu: goto label_223e7c;
        case 0x223e80u: goto label_223e80;
        case 0x223e84u: goto label_223e84;
        case 0x223e88u: goto label_223e88;
        case 0x223e8cu: goto label_223e8c;
        case 0x223e90u: goto label_223e90;
        case 0x223e94u: goto label_223e94;
        case 0x223e98u: goto label_223e98;
        case 0x223e9cu: goto label_223e9c;
        case 0x223ea0u: goto label_223ea0;
        case 0x223ea4u: goto label_223ea4;
        case 0x223ea8u: goto label_223ea8;
        case 0x223eacu: goto label_223eac;
        case 0x223eb0u: goto label_223eb0;
        case 0x223eb4u: goto label_223eb4;
        case 0x223eb8u: goto label_223eb8;
        case 0x223ebcu: goto label_223ebc;
        case 0x223ec0u: goto label_223ec0;
        case 0x223ec4u: goto label_223ec4;
        case 0x223ec8u: goto label_223ec8;
        case 0x223eccu: goto label_223ecc;
        case 0x223ed0u: goto label_223ed0;
        case 0x223ed4u: goto label_223ed4;
        case 0x223ed8u: goto label_223ed8;
        case 0x223edcu: goto label_223edc;
        case 0x223ee0u: goto label_223ee0;
        case 0x223ee4u: goto label_223ee4;
        case 0x223ee8u: goto label_223ee8;
        case 0x223eecu: goto label_223eec;
        case 0x223ef0u: goto label_223ef0;
        case 0x223ef4u: goto label_223ef4;
        case 0x223ef8u: goto label_223ef8;
        case 0x223efcu: goto label_223efc;
        case 0x223f00u: goto label_223f00;
        case 0x223f04u: goto label_223f04;
        case 0x223f08u: goto label_223f08;
        case 0x223f0cu: goto label_223f0c;
        case 0x223f10u: goto label_223f10;
        case 0x223f14u: goto label_223f14;
        case 0x223f18u: goto label_223f18;
        case 0x223f1cu: goto label_223f1c;
        case 0x223f20u: goto label_223f20;
        case 0x223f24u: goto label_223f24;
        case 0x223f28u: goto label_223f28;
        case 0x223f2cu: goto label_223f2c;
        case 0x223f30u: goto label_223f30;
        case 0x223f34u: goto label_223f34;
        case 0x223f38u: goto label_223f38;
        case 0x223f3cu: goto label_223f3c;
        case 0x223f40u: goto label_223f40;
        case 0x223f44u: goto label_223f44;
        case 0x223f48u: goto label_223f48;
        case 0x223f4cu: goto label_223f4c;
        case 0x223f50u: goto label_223f50;
        case 0x223f54u: goto label_223f54;
        case 0x223f58u: goto label_223f58;
        case 0x223f5cu: goto label_223f5c;
        case 0x223f60u: goto label_223f60;
        case 0x223f64u: goto label_223f64;
        case 0x223f68u: goto label_223f68;
        case 0x223f6cu: goto label_223f6c;
        case 0x223f70u: goto label_223f70;
        case 0x223f74u: goto label_223f74;
        case 0x223f78u: goto label_223f78;
        case 0x223f7cu: goto label_223f7c;
        case 0x223f80u: goto label_223f80;
        case 0x223f84u: goto label_223f84;
        case 0x223f88u: goto label_223f88;
        case 0x223f8cu: goto label_223f8c;
        case 0x223f90u: goto label_223f90;
        case 0x223f94u: goto label_223f94;
        case 0x223f98u: goto label_223f98;
        case 0x223f9cu: goto label_223f9c;
        case 0x223fa0u: goto label_223fa0;
        case 0x223fa4u: goto label_223fa4;
        case 0x223fa8u: goto label_223fa8;
        case 0x223facu: goto label_223fac;
        case 0x223fb0u: goto label_223fb0;
        case 0x223fb4u: goto label_223fb4;
        case 0x223fb8u: goto label_223fb8;
        case 0x223fbcu: goto label_223fbc;
        case 0x223fc0u: goto label_223fc0;
        case 0x223fc4u: goto label_223fc4;
        case 0x223fc8u: goto label_223fc8;
        case 0x223fccu: goto label_223fcc;
        case 0x223fd0u: goto label_223fd0;
        case 0x223fd4u: goto label_223fd4;
        case 0x223fd8u: goto label_223fd8;
        case 0x223fdcu: goto label_223fdc;
        case 0x223fe0u: goto label_223fe0;
        case 0x223fe4u: goto label_223fe4;
        case 0x223fe8u: goto label_223fe8;
        case 0x223fecu: goto label_223fec;
        case 0x223ff0u: goto label_223ff0;
        case 0x223ff4u: goto label_223ff4;
        case 0x223ff8u: goto label_223ff8;
        case 0x223ffcu: goto label_223ffc;
        case 0x224000u: goto label_224000;
        case 0x224004u: goto label_224004;
        case 0x224008u: goto label_224008;
        case 0x22400cu: goto label_22400c;
        case 0x224010u: goto label_224010;
        case 0x224014u: goto label_224014;
        case 0x224018u: goto label_224018;
        case 0x22401cu: goto label_22401c;
        case 0x224020u: goto label_224020;
        case 0x224024u: goto label_224024;
        case 0x224028u: goto label_224028;
        case 0x22402cu: goto label_22402c;
        case 0x224030u: goto label_224030;
        case 0x224034u: goto label_224034;
        case 0x224038u: goto label_224038;
        case 0x22403cu: goto label_22403c;
        case 0x224040u: goto label_224040;
        case 0x224044u: goto label_224044;
        case 0x224048u: goto label_224048;
        case 0x22404cu: goto label_22404c;
        case 0x224050u: goto label_224050;
        case 0x224054u: goto label_224054;
        case 0x224058u: goto label_224058;
        case 0x22405cu: goto label_22405c;
        case 0x224060u: goto label_224060;
        case 0x224064u: goto label_224064;
        case 0x224068u: goto label_224068;
        case 0x22406cu: goto label_22406c;
        case 0x224070u: goto label_224070;
        case 0x224074u: goto label_224074;
        case 0x224078u: goto label_224078;
        case 0x22407cu: goto label_22407c;
        case 0x224080u: goto label_224080;
        case 0x224084u: goto label_224084;
        case 0x224088u: goto label_224088;
        case 0x22408cu: goto label_22408c;
        case 0x224090u: goto label_224090;
        case 0x224094u: goto label_224094;
        case 0x224098u: goto label_224098;
        case 0x22409cu: goto label_22409c;
        case 0x2240a0u: goto label_2240a0;
        case 0x2240a4u: goto label_2240a4;
        case 0x2240a8u: goto label_2240a8;
        case 0x2240acu: goto label_2240ac;
        case 0x2240b0u: goto label_2240b0;
        case 0x2240b4u: goto label_2240b4;
        case 0x2240b8u: goto label_2240b8;
        case 0x2240bcu: goto label_2240bc;
        case 0x2240c0u: goto label_2240c0;
        case 0x2240c4u: goto label_2240c4;
        case 0x2240c8u: goto label_2240c8;
        case 0x2240ccu: goto label_2240cc;
        case 0x2240d0u: goto label_2240d0;
        case 0x2240d4u: goto label_2240d4;
        case 0x2240d8u: goto label_2240d8;
        case 0x2240dcu: goto label_2240dc;
        case 0x2240e0u: goto label_2240e0;
        case 0x2240e4u: goto label_2240e4;
        case 0x2240e8u: goto label_2240e8;
        case 0x2240ecu: goto label_2240ec;
        case 0x2240f0u: goto label_2240f0;
        case 0x2240f4u: goto label_2240f4;
        case 0x2240f8u: goto label_2240f8;
        case 0x2240fcu: goto label_2240fc;
        case 0x224100u: goto label_224100;
        case 0x224104u: goto label_224104;
        case 0x224108u: goto label_224108;
        case 0x22410cu: goto label_22410c;
        case 0x224110u: goto label_224110;
        case 0x224114u: goto label_224114;
        case 0x224118u: goto label_224118;
        case 0x22411cu: goto label_22411c;
        case 0x224120u: goto label_224120;
        case 0x224124u: goto label_224124;
        case 0x224128u: goto label_224128;
        case 0x22412cu: goto label_22412c;
        case 0x224130u: goto label_224130;
        case 0x224134u: goto label_224134;
        case 0x224138u: goto label_224138;
        case 0x22413cu: goto label_22413c;
        case 0x224140u: goto label_224140;
        case 0x224144u: goto label_224144;
        case 0x224148u: goto label_224148;
        case 0x22414cu: goto label_22414c;
        case 0x224150u: goto label_224150;
        case 0x224154u: goto label_224154;
        case 0x224158u: goto label_224158;
        case 0x22415cu: goto label_22415c;
        case 0x224160u: goto label_224160;
        case 0x224164u: goto label_224164;
        case 0x224168u: goto label_224168;
        case 0x22416cu: goto label_22416c;
        case 0x224170u: goto label_224170;
        case 0x224174u: goto label_224174;
        case 0x224178u: goto label_224178;
        case 0x22417cu: goto label_22417c;
        case 0x224180u: goto label_224180;
        case 0x224184u: goto label_224184;
        case 0x224188u: goto label_224188;
        case 0x22418cu: goto label_22418c;
        case 0x224190u: goto label_224190;
        case 0x224194u: goto label_224194;
        case 0x224198u: goto label_224198;
        case 0x22419cu: goto label_22419c;
        case 0x2241a0u: goto label_2241a0;
        case 0x2241a4u: goto label_2241a4;
        case 0x2241a8u: goto label_2241a8;
        case 0x2241acu: goto label_2241ac;
        case 0x2241b0u: goto label_2241b0;
        case 0x2241b4u: goto label_2241b4;
        case 0x2241b8u: goto label_2241b8;
        case 0x2241bcu: goto label_2241bc;
        case 0x2241c0u: goto label_2241c0;
        case 0x2241c4u: goto label_2241c4;
        case 0x2241c8u: goto label_2241c8;
        case 0x2241ccu: goto label_2241cc;
        case 0x2241d0u: goto label_2241d0;
        case 0x2241d4u: goto label_2241d4;
        case 0x2241d8u: goto label_2241d8;
        case 0x2241dcu: goto label_2241dc;
        case 0x2241e0u: goto label_2241e0;
        case 0x2241e4u: goto label_2241e4;
        case 0x2241e8u: goto label_2241e8;
        case 0x2241ecu: goto label_2241ec;
        case 0x2241f0u: goto label_2241f0;
        case 0x2241f4u: goto label_2241f4;
        case 0x2241f8u: goto label_2241f8;
        case 0x2241fcu: goto label_2241fc;
        case 0x224200u: goto label_224200;
        case 0x224204u: goto label_224204;
        case 0x224208u: goto label_224208;
        case 0x22420cu: goto label_22420c;
        case 0x224210u: goto label_224210;
        case 0x224214u: goto label_224214;
        case 0x224218u: goto label_224218;
        case 0x22421cu: goto label_22421c;
        case 0x224220u: goto label_224220;
        case 0x224224u: goto label_224224;
        case 0x224228u: goto label_224228;
        case 0x22422cu: goto label_22422c;
        case 0x224230u: goto label_224230;
        case 0x224234u: goto label_224234;
        case 0x224238u: goto label_224238;
        case 0x22423cu: goto label_22423c;
        case 0x224240u: goto label_224240;
        case 0x224244u: goto label_224244;
        case 0x224248u: goto label_224248;
        case 0x22424cu: goto label_22424c;
        case 0x224250u: goto label_224250;
        case 0x224254u: goto label_224254;
        case 0x224258u: goto label_224258;
        case 0x22425cu: goto label_22425c;
        case 0x224260u: goto label_224260;
        case 0x224264u: goto label_224264;
        case 0x224268u: goto label_224268;
        case 0x22426cu: goto label_22426c;
        case 0x224270u: goto label_224270;
        case 0x224274u: goto label_224274;
        case 0x224278u: goto label_224278;
        case 0x22427cu: goto label_22427c;
        case 0x224280u: goto label_224280;
        case 0x224284u: goto label_224284;
        case 0x224288u: goto label_224288;
        case 0x22428cu: goto label_22428c;
        case 0x224290u: goto label_224290;
        case 0x224294u: goto label_224294;
        case 0x224298u: goto label_224298;
        case 0x22429cu: goto label_22429c;
        case 0x2242a0u: goto label_2242a0;
        case 0x2242a4u: goto label_2242a4;
        case 0x2242a8u: goto label_2242a8;
        case 0x2242acu: goto label_2242ac;
        case 0x2242b0u: goto label_2242b0;
        case 0x2242b4u: goto label_2242b4;
        case 0x2242b8u: goto label_2242b8;
        case 0x2242bcu: goto label_2242bc;
        case 0x2242c0u: goto label_2242c0;
        case 0x2242c4u: goto label_2242c4;
        case 0x2242c8u: goto label_2242c8;
        case 0x2242ccu: goto label_2242cc;
        case 0x2242d0u: goto label_2242d0;
        case 0x2242d4u: goto label_2242d4;
        case 0x2242d8u: goto label_2242d8;
        case 0x2242dcu: goto label_2242dc;
        case 0x2242e0u: goto label_2242e0;
        case 0x2242e4u: goto label_2242e4;
        case 0x2242e8u: goto label_2242e8;
        case 0x2242ecu: goto label_2242ec;
        case 0x2242f0u: goto label_2242f0;
        case 0x2242f4u: goto label_2242f4;
        case 0x2242f8u: goto label_2242f8;
        case 0x2242fcu: goto label_2242fc;
        case 0x224300u: goto label_224300;
        case 0x224304u: goto label_224304;
        case 0x224308u: goto label_224308;
        case 0x22430cu: goto label_22430c;
        case 0x224310u: goto label_224310;
        case 0x224314u: goto label_224314;
        case 0x224318u: goto label_224318;
        case 0x22431cu: goto label_22431c;
        case 0x224320u: goto label_224320;
        case 0x224324u: goto label_224324;
        case 0x224328u: goto label_224328;
        case 0x22432cu: goto label_22432c;
        case 0x224330u: goto label_224330;
        case 0x224334u: goto label_224334;
        case 0x224338u: goto label_224338;
        case 0x22433cu: goto label_22433c;
        case 0x224340u: goto label_224340;
        case 0x224344u: goto label_224344;
        case 0x224348u: goto label_224348;
        case 0x22434cu: goto label_22434c;
        case 0x224350u: goto label_224350;
        case 0x224354u: goto label_224354;
        case 0x224358u: goto label_224358;
        case 0x22435cu: goto label_22435c;
        case 0x224360u: goto label_224360;
        case 0x224364u: goto label_224364;
        case 0x224368u: goto label_224368;
        case 0x22436cu: goto label_22436c;
        case 0x224370u: goto label_224370;
        case 0x224374u: goto label_224374;
        case 0x224378u: goto label_224378;
        case 0x22437cu: goto label_22437c;
        case 0x224380u: goto label_224380;
        case 0x224384u: goto label_224384;
        default: return;
    }

label_223bb8:
    // 0x223bb8: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_223bbc:
    if (ctx->pc == 0x223BBCu) {
        ctx->pc = 0x223BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223BB8u;
        // 0x223bbc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x223BC0u;
        goto label_223bc0;
    }
    ctx->pc = 0x223BB8u;
    {
        const bool branch_taken_0x223bb8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x223BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223BB8u;
        // 0x223bbc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x223bb8) {
            ctx->pc = 0x223BCCu;
            goto label_223bcc;
        }
    }
    ctx->pc = 0x223BC0u;
label_223bc0:
    // 0x223bc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x223bc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_223bc4:
    // 0x223bc4: 0x10000008  b           . + 4 + (0x8 << 2)
label_223bc8:
    if (ctx->pc == 0x223BC8u) {
        ctx->pc = 0x223BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223BC4u;
        // 0x223bc8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x223BCCu;
        goto label_223bcc;
    }
    ctx->pc = 0x223BC4u;
    {
        const bool branch_taken_0x223bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223BC4u;
        // 0x223bc8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x223bc4) {
            ctx->pc = 0x223BE8u;
            goto label_223be8;
        }
    }
    ctx->pc = 0x223BCCu;
label_223bcc:
    // 0x223bcc: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x223bccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_223bd0:
    // 0x223bd0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x223bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_223bd4:
    // 0x223bd4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x223bd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_223bd8:
    // 0x223bd8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x223bd8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_223bdc:
    // 0x223bdc: 0x0  nop
    ctx->pc = 0x223bdcu;
    // NOP
label_223be0:
    // 0x223be0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x223be0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_223be4:
    // 0x223be4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x223be4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_223be8:
    // 0x223be8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x223be8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_223bec:
    // 0x223bec: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x223becu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_223bf0:
    // 0x223bf0: 0x9263009c  lbu         $v1, 0x9C($s3)
    ctx->pc = 0x223bf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 156)));
label_223bf4:
    // 0x223bf4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x223bf4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_223bf8:
    // 0x223bf8: 0x0  nop
    ctx->pc = 0x223bf8u;
    // NOP
label_223bfc:
    // 0x223bfc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x223bfcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_223c00:
    // 0x223c00: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x223c00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_223c04:
    // 0x223c04: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x223c04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_223c08:
    // 0x223c08: 0x0  nop
    ctx->pc = 0x223c08u;
    // NOP
label_223c0c:
    // 0x223c0c: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x223c0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_223c10:
    // 0x223c10: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x223c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_223c14:
    // 0x223c14: 0xa263009c  sb          $v1, 0x9C($s3)
    ctx->pc = 0x223c14u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 156), (uint8_t)GPR_U32(ctx, 3));
label_223c18:
    // 0x223c18: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x223c18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_223c1c:
    // 0x223c1c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x223c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_223c20:
    // 0x223c20: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_223c24:
    if (ctx->pc == 0x223C24u) {
        ctx->pc = 0x223C28u;
        goto label_223c28;
    }
    ctx->pc = 0x223C20u;
    {
        const bool branch_taken_0x223c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x223c20) {
            ctx->pc = 0x223C34u;
            goto label_223c34;
        }
    }
    ctx->pc = 0x223C28u;
label_223c28:
    // 0x223c28: 0x9263009c  lbu         $v1, 0x9C($s3)
    ctx->pc = 0x223c28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 156)));
label_223c2c:
    // 0x223c2c: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x223c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
label_223c30:
    // 0x223c30: 0xa263009c  sb          $v1, 0x9C($s3)
    ctx->pc = 0x223c30u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 156), (uint8_t)GPR_U32(ctx, 3));
label_223c34:
    // 0x223c34: 0x0  nop
    ctx->pc = 0x223c34u;
    // NOP
label_223c38:
    // 0x223c38: 0x8e730084  lw          $s3, 0x84($s3)
    ctx->pc = 0x223c38u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
label_223c3c:
    // 0x223c3c: 0x1660ffb2  bnez        $s3, . + 4 + (-0x4E << 2)
label_223c40:
    if (ctx->pc == 0x223C40u) {
        ctx->pc = 0x223C44u;
        goto label_223c44;
    }
    ctx->pc = 0x223C3Cu;
    {
        const bool branch_taken_0x223c3c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x223c3c) {
            ctx->pc = 0x223B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x223b08; return; }
        }
    }
    ctx->pc = 0x223C44u;
label_223c44:
    // 0x223c44: 0x0  nop
    ctx->pc = 0x223c44u;
    // NOP
label_223c48:
    // 0x223c48: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x223c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_223c4c:
    // 0x223c4c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x223c4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_223c50:
    // 0x223c50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x223c50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_223c54:
    // 0x223c54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x223c54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_223c58:
    // 0x223c58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x223c58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_223c5c:
    // 0x223c5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x223c5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_223c60:
    // 0x223c60: 0x3e00008  jr          $ra
label_223c64:
    if (ctx->pc == 0x223C64u) {
        ctx->pc = 0x223C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223C60u;
        // 0x223c64: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223C68u;
        goto label_223c68;
    }
    ctx->pc = 0x223C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223C60u;
        // 0x223c64: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223C68u;
label_223c68:
    // 0x223c68: 0x0  nop
    ctx->pc = 0x223c68u;
    // NOP
label_223c6c:
    // 0x223c6c: 0x0  nop
    ctx->pc = 0x223c6cu;
    // NOP
label_223c70:
    // 0x223c70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x223c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_223c74:
    // 0x223c74: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x223c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_223c78:
    // 0x223c78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x223c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_223c7c:
    // 0x223c7c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x223c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_223c80:
    // 0x223c80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x223c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_223c84:
    // 0x223c84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x223c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_223c88:
    // 0x223c88: 0x9030490d  lbu         $s0, 0x490D($at)
    ctx->pc = 0x223c88u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_223c8c:
    // 0x223c8c: 0x1603001c  bne         $s0, $v1, . + 4 + (0x1C << 2)
label_223c90:
    if (ctx->pc == 0x223C90u) {
        ctx->pc = 0x223C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223C8Cu;
        // 0x223c90: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223C94u;
        goto label_223c94;
    }
    ctx->pc = 0x223C8Cu;
    {
        const bool branch_taken_0x223c8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x223C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223C8Cu;
        // 0x223c90: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223c8c) {
            ctx->pc = 0x223D00u;
            goto label_223d00;
        }
    }
    ctx->pc = 0x223C94u;
label_223c94:
    // 0x223c94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x223c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_223c98:
    // 0x223c98: 0x16230019  bne         $s1, $v1, . + 4 + (0x19 << 2)
label_223c9c:
    if (ctx->pc == 0x223C9Cu) {
        ctx->pc = 0x223CA0u;
        goto label_223ca0;
    }
    ctx->pc = 0x223C98u;
    {
        const bool branch_taken_0x223c98 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x223c98) {
            ctx->pc = 0x223D00u;
            goto label_223d00;
        }
    }
    ctx->pc = 0x223CA0u;
label_223ca0:
    // 0x223ca0: 0x8f9085d0  lw          $s0, -0x7A30($gp)
    ctx->pc = 0x223ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_223ca4:
    // 0x223ca4: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_223ca8:
    if (ctx->pc == 0x223CA8u) {
        ctx->pc = 0x223CACu;
        goto label_223cac;
    }
    ctx->pc = 0x223CA4u;
    {
        const bool branch_taken_0x223ca4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x223ca4) {
            ctx->pc = 0x223CF4u;
            goto label_223cf4;
        }
    }
    ctx->pc = 0x223CACu;
label_223cac:
    // 0x223cac: 0x92030096  lbu         $v1, 0x96($s0)
    ctx->pc = 0x223cacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 150)));
label_223cb0:
    // 0x223cb0: 0x1471000c  bne         $v1, $s1, . + 4 + (0xC << 2)
label_223cb4:
    if (ctx->pc == 0x223CB4u) {
        ctx->pc = 0x223CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223CB0u;
        // 0x223cb4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223CB8u;
        goto label_223cb8;
    }
    ctx->pc = 0x223CB0u;
    {
        const bool branch_taken_0x223cb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x223CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223CB0u;
        // 0x223cb4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223cb0) {
            ctx->pc = 0x223CE4u;
            goto label_223ce4;
        }
    }
    ctx->pc = 0x223CB8u;
label_223cb8:
    // 0x223cb8: 0xc0590dc  jal         func_164370
label_223cbc:
    if (ctx->pc == 0x223CBCu) {
        ctx->pc = 0x223CC0u;
        goto label_223cc0;
    }
    ctx->pc = 0x223CB8u;
    SET_GPR_U32(ctx, 31, 0x223CC0u);
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x223CB8u, 0x223CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223CC0u;
label_223cc0:
    // 0x223cc0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_223cc4:
    if (ctx->pc == 0x223CC4u) {
        ctx->pc = 0x223CC8u;
        goto label_223cc8;
    }
    ctx->pc = 0x223CC0u;
    {
        const bool branch_taken_0x223cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223cc0) {
            ctx->pc = 0x223CE4u;
            goto label_223ce4;
        }
    }
    ctx->pc = 0x223CC8u;
label_223cc8:
    // 0x223cc8: 0x9204009c  lbu         $a0, 0x9C($s0)
    ctx->pc = 0x223cc8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 156)));
label_223ccc:
    // 0x223ccc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x223cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_223cd0:
    // 0x223cd0: 0x24633710  addiu       $v1, $v1, 0x3710
    ctx->pc = 0x223cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14096));
label_223cd4:
    // 0x223cd4: 0x34840080  ori         $a0, $a0, 0x80
    ctx->pc = 0x223cd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
label_223cd8:
    // 0x223cd8: 0xa204009c  sb          $a0, 0x9C($s0)
    ctx->pc = 0x223cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 156), (uint8_t)GPR_U32(ctx, 4));
label_223cdc:
    // 0x223cdc: 0xac50005c  sw          $s0, 0x5C($v0)
    ctx->pc = 0x223cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 16));
label_223ce0:
    // 0x223ce0: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x223ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_223ce4:
    // 0x223ce4: 0x0  nop
    ctx->pc = 0x223ce4u;
    // NOP
label_223ce8:
    // 0x223ce8: 0x8e100084  lw          $s0, 0x84($s0)
    ctx->pc = 0x223ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_223cec:
    // 0x223cec: 0x1600ffef  bnez        $s0, . + 4 + (-0x11 << 2)
label_223cf0:
    if (ctx->pc == 0x223CF0u) {
        ctx->pc = 0x223CF4u;
        goto label_223cf4;
    }
    ctx->pc = 0x223CECu;
    {
        const bool branch_taken_0x223cec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x223cec) {
            ctx->pc = 0x223CACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223cac;
        }
    }
    ctx->pc = 0x223CF4u;
label_223cf4:
    // 0x223cf4: 0x0  nop
    ctx->pc = 0x223cf4u;
    // NOP
label_223cf8:
    // 0x223cf8: 0x10000022  b           . + 4 + (0x22 << 2)
label_223cfc:
    if (ctx->pc == 0x223CFCu) {
        ctx->pc = 0x223CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223CF8u;
        // 0x223cfc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223D00u;
        goto label_223d00;
    }
    ctx->pc = 0x223CF8u;
    {
        const bool branch_taken_0x223cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223CF8u;
        // 0x223cfc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223cf8) {
            ctx->pc = 0x223D84u;
            goto label_223d84;
        }
    }
    ctx->pc = 0x223D00u;
label_223d00:
    // 0x223d00: 0x8f8385d0  lw          $v1, -0x7A30($gp)
    ctx->pc = 0x223d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_223d04:
    // 0x223d04: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_223d08:
    if (ctx->pc == 0x223D08u) {
        ctx->pc = 0x223D0Cu;
        goto label_223d0c;
    }
    ctx->pc = 0x223D04u;
    {
        const bool branch_taken_0x223d04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x223d04) {
            ctx->pc = 0x223D44u;
            goto label_223d44;
        }
    }
    ctx->pc = 0x223D0Cu;
label_223d0c:
    // 0x223d0c: 0x90620096  lbu         $v0, 0x96($v1)
    ctx->pc = 0x223d0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 150)));
label_223d10:
    // 0x223d10: 0x14510009  bne         $v0, $s1, . + 4 + (0x9 << 2)
label_223d14:
    if (ctx->pc == 0x223D14u) {
        ctx->pc = 0x223D18u;
        goto label_223d18;
    }
    ctx->pc = 0x223D10u;
    {
        const bool branch_taken_0x223d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x223d10) {
            ctx->pc = 0x223D38u;
            goto label_223d38;
        }
    }
    ctx->pc = 0x223D18u;
label_223d18:
    // 0x223d18: 0x9062009d  lbu         $v0, 0x9D($v1)
    ctx->pc = 0x223d18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 157)));
label_223d1c:
    // 0x223d1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_223d20:
    if (ctx->pc == 0x223D20u) {
        ctx->pc = 0x223D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D1Cu;
        // 0x223d20: 0x28410080  slti        $at, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x223D24u;
        goto label_223d24;
    }
    ctx->pc = 0x223D1Cu;
    {
        const bool branch_taken_0x223d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D1Cu;
        // 0x223d20: 0x28410080  slti        $at, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223d1c) {
            ctx->pc = 0x223D38u;
            goto label_223d38;
        }
    }
    ctx->pc = 0x223D24u;
label_223d24:
    // 0x223d24: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_223d28:
    if (ctx->pc == 0x223D28u) {
        ctx->pc = 0x223D2Cu;
        goto label_223d2c;
    }
    ctx->pc = 0x223D24u;
    {
        const bool branch_taken_0x223d24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x223d24) {
            ctx->pc = 0x223D38u;
            goto label_223d38;
        }
    }
    ctx->pc = 0x223D2Cu;
label_223d2c:
    // 0x223d2c: 0x9062009c  lbu         $v0, 0x9C($v1)
    ctx->pc = 0x223d2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 156)));
label_223d30:
    // 0x223d30: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x223d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_223d34:
    // 0x223d34: 0xa062009c  sb          $v0, 0x9C($v1)
    ctx->pc = 0x223d34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 156), (uint8_t)GPR_U32(ctx, 2));
label_223d38:
    // 0x223d38: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x223d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_223d3c:
    // 0x223d3c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_223d40:
    if (ctx->pc == 0x223D40u) {
        ctx->pc = 0x223D44u;
        goto label_223d44;
    }
    ctx->pc = 0x223D3Cu;
    {
        const bool branch_taken_0x223d3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x223d3c) {
            ctx->pc = 0x223D0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223d0c;
        }
    }
    ctx->pc = 0x223D44u;
label_223d44:
    // 0x223d44: 0x0  nop
    ctx->pc = 0x223d44u;
    // NOP
label_223d48:
    // 0x223d48: 0xc088d14  jal         func_223450
label_223d4c:
    if (ctx->pc == 0x223D4Cu) {
        ctx->pc = 0x223D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D48u;
        // 0x223d4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223D50u;
        goto label_223d50;
    }
    ctx->pc = 0x223D48u;
    SET_GPR_U32(ctx, 31, 0x223D50u);
    ctx->pc = 0x223D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223D48u;
    // 0x223d4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223450u;
    { ctx->pc = 0x223450; return; }
    ctx->pc = 0x223D50u;
label_223d50:
    // 0x223d50: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x223d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_223d54:
    // 0x223d54: 0x1603000a  bne         $s0, $v1, . + 4 + (0xA << 2)
label_223d58:
    if (ctx->pc == 0x223D58u) {
        ctx->pc = 0x223D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D54u;
        // 0x223d58: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223D5Cu;
        goto label_223d5c;
    }
    ctx->pc = 0x223D54u;
    {
        const bool branch_taken_0x223d54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x223D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D54u;
        // 0x223d58: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223d54) {
            ctx->pc = 0x223D80u;
            goto label_223d80;
        }
    }
    ctx->pc = 0x223D5Cu;
label_223d5c:
    // 0x223d5c: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x223d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_223d60:
    // 0x223d60: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x223d60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_223d64:
    // 0x223d64: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_223d68:
    if (ctx->pc == 0x223D68u) {
        ctx->pc = 0x223D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D64u;
        // 0x223d68: 0x2a230003  slti        $v1, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x223D6Cu;
        goto label_223d6c;
    }
    ctx->pc = 0x223D64u;
    {
        const bool branch_taken_0x223d64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x223D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D64u;
        // 0x223d68: 0x2a230003  slti        $v1, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223d64) {
            ctx->pc = 0x223D80u;
            goto label_223d80;
        }
    }
    ctx->pc = 0x223D6Cu;
label_223d6c:
    // 0x223d6c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_223d70:
    if (ctx->pc == 0x223D70u) {
        ctx->pc = 0x223D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D6Cu;
        // 0x223d70: 0x2a210010  slti        $at, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x223D74u;
        goto label_223d74;
    }
    ctx->pc = 0x223D6Cu;
    {
        const bool branch_taken_0x223d6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x223D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D6Cu;
        // 0x223d70: 0x2a210010  slti        $at, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223d6c) {
            ctx->pc = 0x223D80u;
            goto label_223d80;
        }
    }
    ctx->pc = 0x223D74u;
label_223d74:
    // 0x223d74: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_223d78:
    if (ctx->pc == 0x223D78u) {
        ctx->pc = 0x223D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D74u;
        // 0x223d78: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223D7Cu;
        goto label_223d7c;
    }
    ctx->pc = 0x223D74u;
    {
        const bool branch_taken_0x223d74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x223D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D74u;
        // 0x223d78: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223d74) {
            ctx->pc = 0x223D80u;
            goto label_223d80;
        }
    }
    ctx->pc = 0x223D7Cu;
label_223d7c:
    // 0x223d7c: 0xaf8392e0  sw          $v1, -0x6D20($gp)
    ctx->pc = 0x223d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
label_223d80:
    // 0x223d80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x223d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_223d84:
    // 0x223d84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x223d84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_223d88:
    // 0x223d88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x223d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_223d8c:
    // 0x223d8c: 0x3e00008  jr          $ra
label_223d90:
    if (ctx->pc == 0x223D90u) {
        ctx->pc = 0x223D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D8Cu;
        // 0x223d90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223D94u;
        goto label_223d94;
    }
    ctx->pc = 0x223D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D8Cu;
        // 0x223d90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223D94u;
label_223d94:
    // 0x223d94: 0x0  nop
    ctx->pc = 0x223d94u;
    // NOP
label_223d98:
    // 0x223d98: 0x0  nop
    ctx->pc = 0x223d98u;
    // NOP
label_223d9c:
    // 0x223d9c: 0x0  nop
    ctx->pc = 0x223d9cu;
    // NOP
label_223da0:
    // 0x223da0: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x223da0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_223da4:
    // 0x223da4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x223da4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223da8:
    // 0x223da8: 0x24a58fb0  addiu       $a1, $a1, -0x7050
    ctx->pc = 0x223da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938544));
label_223dac:
    // 0x223dac: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x223dacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_223db0:
    // 0x223db0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_223db4:
    if (ctx->pc == 0x223DB4u) {
        ctx->pc = 0x223DB8u;
        goto label_223db8;
    }
    ctx->pc = 0x223DB0u;
    {
        const bool branch_taken_0x223db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x223db0) {
            ctx->pc = 0x223DE8u;
            goto label_223de8;
        }
    }
    ctx->pc = 0x223DB8u;
label_223db8:
    // 0x223db8: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x223db8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_223dbc:
    // 0x223dbc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_223dc0:
    if (ctx->pc == 0x223DC0u) {
        ctx->pc = 0x223DC4u;
        goto label_223dc4;
    }
    ctx->pc = 0x223DBCu;
    {
        const bool branch_taken_0x223dbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x223dbc) {
            ctx->pc = 0x223DCCu;
            goto label_223dcc;
        }
    }
    ctx->pc = 0x223DC4u;
label_223dc4:
    // 0x223dc4: 0x10000008  b           . + 4 + (0x8 << 2)
label_223dc8:
    if (ctx->pc == 0x223DC8u) {
        ctx->pc = 0x223DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223DC4u;
        // 0x223dc8: 0xa0a00001  sb          $zero, 0x1($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223DCCu;
        goto label_223dcc;
    }
    ctx->pc = 0x223DC4u;
    {
        const bool branch_taken_0x223dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223DC4u;
        // 0x223dc8: 0xa0a00001  sb          $zero, 0x1($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223dc4) {
            ctx->pc = 0x223DE8u;
            goto label_223de8;
        }
    }
    ctx->pc = 0x223DCCu;
label_223dcc:
    // 0x223dcc: 0x0  nop
    ctx->pc = 0x223dccu;
    // NOP
label_223dd0:
    // 0x223dd0: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x223dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
label_223dd4:
    // 0x223dd4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x223dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_223dd8:
    // 0x223dd8: 0x9083009c  lbu         $v1, 0x9C($a0)
    ctx->pc = 0x223dd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 156)));
label_223ddc:
    // 0x223ddc: 0x306300bf  andi        $v1, $v1, 0xBF
    ctx->pc = 0x223ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)191);
label_223de0:
    // 0x223de0: 0xa083009c  sb          $v1, 0x9C($a0)
    ctx->pc = 0x223de0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 156), (uint8_t)GPR_U32(ctx, 3));
label_223de4:
    // 0x223de4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x223de4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_223de8:
    // 0x223de8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x223de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_223dec:
    // 0x223dec: 0x28c30040  slti        $v1, $a2, 0x40
    ctx->pc = 0x223decu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)64) ? 1 : 0);
label_223df0:
    // 0x223df0: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
label_223df4:
    if (ctx->pc == 0x223DF4u) {
        ctx->pc = 0x223DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223DF0u;
        // 0x223df4: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223DF8u;
        goto label_223df8;
    }
    ctx->pc = 0x223DF0u;
    {
        const bool branch_taken_0x223df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x223DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223DF0u;
        // 0x223df4: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223df0) {
            ctx->pc = 0x223DACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223dac;
        }
    }
    ctx->pc = 0x223DF8u;
label_223df8:
    // 0x223df8: 0x3e00008  jr          $ra
label_223dfc:
    if (ctx->pc == 0x223DFCu) {
        ctx->pc = 0x223E00u;
        goto label_223e00;
    }
    ctx->pc = 0x223DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223E00u;
label_223e00:
    // 0x223e00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x223e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_223e04:
    // 0x223e04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x223e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223e08:
    // 0x223e08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x223e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_223e0c:
    // 0x223e0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x223e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223e10:
    // 0x223e10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x223e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_223e14:
    // 0x223e14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x223e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_223e18:
    // 0x223e18: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x223e18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_223e1c:
    // 0x223e1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x223e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_223e20:
    // 0x223e20: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x223e20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_223e24:
    // 0x223e24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x223e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_223e28:
    // 0x223e28: 0x24848fb0  addiu       $a0, $a0, -0x7050
    ctx->pc = 0x223e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938544));
label_223e2c:
    // 0x223e2c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x223e2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_223e30:
    // 0x223e30: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_223e34:
    if (ctx->pc == 0x223E34u) {
        ctx->pc = 0x223E38u;
        goto label_223e38;
    }
    ctx->pc = 0x223E30u;
    {
        const bool branch_taken_0x223e30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x223e30) {
            ctx->pc = 0x223E48u;
            goto label_223e48;
        }
    }
    ctx->pc = 0x223E38u;
label_223e38:
    // 0x223e38: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
label_223e3c:
    if (ctx->pc == 0x223E3Cu) {
        ctx->pc = 0x223E40u;
        goto label_223e40;
    }
    ctx->pc = 0x223E38u;
    {
        const bool branch_taken_0x223e38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x223e38) {
            ctx->pc = 0x223E5Cu;
            goto label_223e5c;
        }
    }
    ctx->pc = 0x223E40u;
label_223e40:
    // 0x223e40: 0x10000006  b           . + 4 + (0x6 << 2)
label_223e44:
    if (ctx->pc == 0x223E44u) {
        ctx->pc = 0x223E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E40u;
        // 0x223e44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223E48u;
        goto label_223e48;
    }
    ctx->pc = 0x223E40u;
    {
        const bool branch_taken_0x223e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E40u;
        // 0x223e44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e40) {
            ctx->pc = 0x223E5Cu;
            goto label_223e5c;
        }
    }
    ctx->pc = 0x223E48u;
label_223e48:
    // 0x223e48: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x223e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_223e4c:
    // 0x223e4c: 0x14730003  bne         $v1, $s3, . + 4 + (0x3 << 2)
label_223e50:
    if (ctx->pc == 0x223E50u) {
        ctx->pc = 0x223E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E4Cu;
        // 0x223e50: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223E54u;
        goto label_223e54;
    }
    ctx->pc = 0x223E4Cu;
    {
        const bool branch_taken_0x223e4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x223E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E4Cu;
        // 0x223e50: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e4c) {
            ctx->pc = 0x223E5Cu;
            goto label_223e5c;
        }
    }
    ctx->pc = 0x223E54u;
label_223e54:
    // 0x223e54: 0x10000042  b           . + 4 + (0x42 << 2)
label_223e58:
    if (ctx->pc == 0x223E58u) {
        ctx->pc = 0x223E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E54u;
        // 0x223e58: 0xa0830001  sb          $v1, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223E5Cu;
        goto label_223e5c;
    }
    ctx->pc = 0x223E54u;
    {
        const bool branch_taken_0x223e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E54u;
        // 0x223e58: 0xa0830001  sb          $v1, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e54) {
            ctx->pc = 0x223F60u;
            goto label_223f60;
        }
    }
    ctx->pc = 0x223E5Cu;
label_223e5c:
    // 0x223e5c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x223e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_223e60:
    // 0x223e60: 0x28c30040  slti        $v1, $a2, 0x40
    ctx->pc = 0x223e60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)64) ? 1 : 0);
label_223e64:
    // 0x223e64: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_223e68:
    if (ctx->pc == 0x223E68u) {
        ctx->pc = 0x223E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E64u;
        // 0x223e68: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223E6Cu;
        goto label_223e6c;
    }
    ctx->pc = 0x223E64u;
    {
        const bool branch_taken_0x223e64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x223E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E64u;
        // 0x223e68: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e64) {
            ctx->pc = 0x223E2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223e2c;
        }
    }
    ctx->pc = 0x223E6Cu;
label_223e6c:
    // 0x223e6c: 0x10a0003c  beqz        $a1, . + 4 + (0x3C << 2)
label_223e70:
    if (ctx->pc == 0x223E70u) {
        ctx->pc = 0x223E74u;
        goto label_223e74;
    }
    ctx->pc = 0x223E6Cu;
    {
        const bool branch_taken_0x223e6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x223e6c) {
            ctx->pc = 0x223F60u;
            goto label_223f60;
        }
    }
    ctx->pc = 0x223E74u;
label_223e74:
    // 0x223e74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x223e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_223e78:
    // 0x223e78: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x223e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_223e7c:
    // 0x223e7c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x223e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_223e80:
    // 0x223e80: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x223e80u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_223e84:
    // 0x223e84: 0xacb30004  sw          $s3, 0x4($a1)
    ctx->pc = 0x223e84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 19));
label_223e88:
    // 0x223e88: 0x9262009c  lbu         $v0, 0x9C($s3)
    ctx->pc = 0x223e88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 156)));
label_223e8c:
    // 0x223e8c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x223e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_223e90:
    // 0x223e90: 0xc066e44  jal         func_19B910
label_223e94:
    if (ctx->pc == 0x223E94u) {
        ctx->pc = 0x223E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E90u;
        // 0x223e94: 0xa262009c  sb          $v0, 0x9C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 156), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223E98u;
        goto label_223e98;
    }
    ctx->pc = 0x223E90u;
    SET_GPR_U32(ctx, 31, 0x223E98u);
    ctx->pc = 0x223E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223E90u;
    // 0x223e94: 0xa262009c  sb          $v0, 0x9C($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 156), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x223E98u;
label_223e98:
    // 0x223e98: 0xc66c0054  lwc1        $f12, 0x54($s3)
    ctx->pc = 0x223e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_223e9c:
    // 0x223e9c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x223e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_223ea0:
    // 0x223ea0: 0xc066ec0  jal         func_19BB00
label_223ea4:
    if (ctx->pc == 0x223EA4u) {
        ctx->pc = 0x223EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223EA0u;
        // 0x223ea4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223EA8u;
        goto label_223ea8;
    }
    ctx->pc = 0x223EA0u;
    SET_GPR_U32(ctx, 31, 0x223EA8u);
    ctx->pc = 0x223EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223EA0u;
    // 0x223ea4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x223EA8u;
label_223ea8:
    // 0x223ea8: 0x9265009d  lbu         $a1, 0x9D($s3)
    ctx->pc = 0x223ea8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 157)));
label_223eac:
    // 0x223eac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x223eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223eb0:
    // 0x223eb0: 0x8f8492dc  lw          $a0, -0x6D24($gp)
    ctx->pc = 0x223eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939356)));
label_223eb4:
    // 0x223eb4: 0x9263009c  lbu         $v1, 0x9C($s3)
    ctx->pc = 0x223eb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 156)));
label_223eb8:
    // 0x223eb8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x223eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_223ebc:
    // 0x223ebc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x223ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_223ec0:
    // 0x223ec0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x223ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_223ec4:
    // 0x223ec4: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x223ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_223ec8:
    // 0x223ec8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x223ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_223ecc:
    // 0x223ecc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x223eccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_223ed0:
    // 0x223ed0: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x223ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_223ed4:
    // 0x223ed4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x223ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_223ed8:
    // 0x223ed8: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x223ed8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_223edc:
    // 0x223edc: 0x1000001b  b           . + 4 + (0x1B << 2)
label_223ee0:
    if (ctx->pc == 0x223EE0u) {
        ctx->pc = 0x223EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223EDCu;
        // 0x223ee0: 0x26510004  addiu       $s1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223EE4u;
        goto label_223ee4;
    }
    ctx->pc = 0x223EDCu;
    {
        const bool branch_taken_0x223edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223EDCu;
        // 0x223ee0: 0x26510004  addiu       $s1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223edc) {
            ctx->pc = 0x223F4Cu;
            goto label_223f4c;
        }
    }
    ctx->pc = 0x223EE4u;
label_223ee4:
    // 0x223ee4: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x223ee4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_223ee8:
    // 0x223ee8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x223ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_223eec:
    // 0x223eec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x223eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_223ef0:
    // 0x223ef0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x223ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_223ef4:
    // 0x223ef4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x223ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_223ef8:
    // 0x223ef8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x223ef8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_223efc:
    // 0x223efc: 0x0  nop
    ctx->pc = 0x223efcu;
    // NOP
label_223f00:
    // 0x223f00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x223f00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_223f04:
    // 0x223f04: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x223f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_223f08:
    // 0x223f08: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x223f08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_223f0c:
    // 0x223f0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x223f0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_223f10:
    // 0x223f10: 0x0  nop
    ctx->pc = 0x223f10u;
    // NOP
label_223f14:
    // 0x223f14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x223f14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_223f18:
    // 0x223f18: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x223f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_223f1c:
    // 0x223f1c: 0x86230004  lh          $v1, 0x4($s1)
    ctx->pc = 0x223f1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_223f20:
    // 0x223f20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x223f20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_223f24:
    // 0x223f24: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x223f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_223f28:
    // 0x223f28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x223f28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_223f2c:
    // 0x223f2c: 0xc066d7a  jal         func_19B5E8
label_223f30:
    if (ctx->pc == 0x223F30u) {
        ctx->pc = 0x223F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223F2Cu;
        // 0x223f30: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x223F34u;
        goto label_223f34;
    }
    ctx->pc = 0x223F2Cu;
    SET_GPR_U32(ctx, 31, 0x223F34u);
    ctx->pc = 0x223F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223F2Cu;
    // 0x223f30: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x223F2Cu, 0x223F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223F34u;
label_223f34:
    // 0x223f34: 0x96260006  lhu         $a2, 0x6($s1)
    ctx->pc = 0x223f34u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_223f38:
    // 0x223f38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x223f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_223f3c:
    // 0x223f3c: 0xc088fe0  jal         func_223F80
label_223f40:
    if (ctx->pc == 0x223F40u) {
        ctx->pc = 0x223F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223F3Cu;
        // 0x223f40: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223F44u;
        goto label_223f44;
    }
    ctx->pc = 0x223F3Cu;
    SET_GPR_U32(ctx, 31, 0x223F44u);
    ctx->pc = 0x223F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223F3Cu;
    // 0x223f40: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223F80u;
    goto label_223f80;
    ctx->pc = 0x223F44u;
label_223f44:
    // 0x223f44: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x223f44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_223f48:
    // 0x223f48: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x223f48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_223f4c:
    // 0x223f4c: 0x0  nop
    ctx->pc = 0x223f4cu;
    // NOP
label_223f50:
    // 0x223f50: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x223f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_223f54:
    // 0x223f54: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x223f54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_223f58:
    // 0x223f58: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
label_223f5c:
    if (ctx->pc == 0x223F5Cu) {
        ctx->pc = 0x223F60u;
        goto label_223f60;
    }
    ctx->pc = 0x223F58u;
    {
        const bool branch_taken_0x223f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x223f58) {
            ctx->pc = 0x223EE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223ee4;
        }
    }
    ctx->pc = 0x223F60u;
label_223f60:
    // 0x223f60: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x223f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_223f64:
    // 0x223f64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x223f64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_223f68:
    // 0x223f68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x223f68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_223f6c:
    // 0x223f6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x223f6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_223f70:
    // 0x223f70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x223f70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_223f74:
    // 0x223f74: 0x3e00008  jr          $ra
label_223f78:
    if (ctx->pc == 0x223F78u) {
        ctx->pc = 0x223F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223F74u;
        // 0x223f78: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223F7Cu;
        goto label_223f7c;
    }
    ctx->pc = 0x223F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223F74u;
        // 0x223f78: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223F7Cu;
label_223f7c:
    // 0x223f7c: 0x0  nop
    ctx->pc = 0x223f7cu;
    // NOP
label_223f80:
    // 0x223f80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x223f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_223f84:
    // 0x223f84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x223f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_223f88:
    // 0x223f88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x223f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_223f8c:
    // 0x223f8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x223f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_223f90:
    // 0x223f90: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x223f90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_223f94:
    // 0x223f94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x223f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_223f98:
    // 0x223f98: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x223f98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_223f9c:
    // 0x223f9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x223f9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_223fa0:
    // 0x223fa0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x223fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_223fa4:
    // 0x223fa4: 0x26450040  addiu       $a1, $s2, 0x40
    ctx->pc = 0x223fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_223fa8:
    // 0x223fa8: 0xc066e02  jal         func_19B808
label_223fac:
    if (ctx->pc == 0x223FACu) {
        ctx->pc = 0x223FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223FA8u;
        // 0x223fac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223FB0u;
        goto label_223fb0;
    }
    ctx->pc = 0x223FA8u;
    SET_GPR_U32(ctx, 31, 0x223FB0u);
    ctx->pc = 0x223FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223FA8u;
    // 0x223fac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x223FB0u;
label_223fb0:
    // 0x223fb0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x223fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_223fb4:
    // 0x223fb4: 0x2e210007  sltiu       $at, $s1, 0x7
    ctx->pc = 0x223fb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_223fb8:
    // 0x223fb8: 0x102000db  beqz        $at, . + 4 + (0xDB << 2)
label_223fbc:
    if (ctx->pc == 0x223FBCu) {
        ctx->pc = 0x223FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223FB8u;
        // 0x223fbc: 0xafa3004c  sw          $v1, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223FC0u;
        goto label_223fc0;
    }
    ctx->pc = 0x223FB8u;
    {
        const bool branch_taken_0x223fb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x223FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223FB8u;
        // 0x223fbc: 0xafa3004c  sw          $v1, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223fb8) {
            ctx->pc = 0x224328u;
            goto label_224328;
        }
    }
    ctx->pc = 0x223FC0u;
label_223fc0:
    // 0x223fc0: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x223fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_223fc4:
    // 0x223fc4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x223fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_223fc8:
    // 0x223fc8: 0x2484e180  addiu       $a0, $a0, -0x1E80
    ctx->pc = 0x223fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959488));
label_223fcc:
    // 0x223fcc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x223fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_223fd0:
    // 0x223fd0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x223fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_223fd4:
    // 0x223fd4: 0x600008  jr          $v1
label_223fd8:
    if (ctx->pc == 0x223FD8u) {
        ctx->pc = 0x223FDCu;
        goto label_223fdc;
    }
    ctx->pc = 0x223FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x223FDCu: goto label_223fdc;
            case 0x224054u: goto label_224054;
            case 0x2240CCu: goto label_2240cc;
            case 0x2240E8u: goto label_2240e8;
            case 0x224104u: goto label_224104;
            case 0x2242A4u: goto label_2242a4;
            case 0x2242B8u: goto label_2242b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223FD4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x223FDCu;
label_223fdc:
    // 0x223fdc: 0xc08f0cc  jal         func_23C330
label_223fe0:
    if (ctx->pc == 0x223FE0u) {
        ctx->pc = 0x223FE4u;
        goto label_223fe4;
    }
    ctx->pc = 0x223FDCu;
    SET_GPR_U32(ctx, 31, 0x223FE4u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x223FE4u;
label_223fe4:
    // 0x223fe4: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x223fe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_223fe8:
    // 0x223fe8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x223fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_223fec:
    // 0x223fec: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x223fecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_223ff0:
    // 0x223ff0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x223ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_223ff4:
    // 0x223ff4: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x223ff4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_223ff8:
    // 0x223ff8: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x223ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_223ffc:
    // 0x223ffc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x223ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_224000:
    // 0x224000: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x224000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_224004:
    // 0x224004: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x224004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_224008:
    // 0x224008: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x224008u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_22400c:
    // 0x22400c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x22400cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_224010:
    // 0x224010: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x224010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_224014:
    // 0x224014: 0x460320c3  div.s       $f3, $f4, $f3
    ctx->pc = 0x224014u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[3] = ctx->f[4] / ctx->f[3];
label_224018:
    // 0x224018: 0x3c03c248  lui         $v1, 0xC248
    ctx->pc = 0x224018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49736 << 16));
label_22401c:
    // 0x22401c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x22401cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_224020:
    // 0x224020: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x224020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
label_224024:
    // 0x224024: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x224024u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_224028:
    // 0x224028: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x224028u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22402c:
    // 0x22402c: 0x0  nop
    ctx->pc = 0x22402cu;
    // NOP
label_224030:
    // 0x224030: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x224030u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_224034:
    // 0x224034: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_224038:
    // 0x224038: 0x0  nop
    ctx->pc = 0x224038u;
    // NOP
label_22403c:
    // 0x22403c: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x22403cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_224040:
    // 0x224040: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x224040u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_224044:
    // 0x224044: 0xc073504  jal         func_1CD410
label_224048:
    if (ctx->pc == 0x224048u) {
        ctx->pc = 0x224048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224044u;
        // 0x224048: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22404Cu;
        goto label_22404c;
    }
    ctx->pc = 0x224044u;
    SET_GPR_U32(ctx, 31, 0x22404Cu);
    ctx->pc = 0x224048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224044u;
    // 0x224048: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD410u;
    { ctx->pc = 0x1cd410; return; }
    ctx->pc = 0x22404Cu;
label_22404c:
    // 0x22404c: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_224050:
    if (ctx->pc == 0x224050u) {
        ctx->pc = 0x224050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22404Cu;
        // 0x224050: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224054u;
        goto label_224054;
    }
    ctx->pc = 0x22404Cu;
    {
        const bool branch_taken_0x22404c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22404Cu;
        // 0x224050: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22404c) {
            ctx->pc = 0x22432Cu;
            goto label_22432c;
        }
    }
    ctx->pc = 0x224054u;
label_224054:
    // 0x224054: 0xc08f0cc  jal         func_23C330
label_224058:
    if (ctx->pc == 0x224058u) {
        ctx->pc = 0x22405Cu;
        goto label_22405c;
    }
    ctx->pc = 0x224054u;
    SET_GPR_U32(ctx, 31, 0x22405Cu);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22405Cu;
label_22405c:
    // 0x22405c: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x22405cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_224060:
    // 0x224060: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x224060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_224064:
    // 0x224064: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x224064u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_224068:
    // 0x224068: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x224068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22406c:
    // 0x22406c: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x22406cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_224070:
    // 0x224070: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x224070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_224074:
    // 0x224074: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x224074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_224078:
    // 0x224078: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x224078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_22407c:
    // 0x22407c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x22407cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_224080:
    // 0x224080: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x224080u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_224084:
    // 0x224084: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x224084u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_224088:
    // 0x224088: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x224088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22408c:
    // 0x22408c: 0x460320c3  div.s       $f3, $f4, $f3
    ctx->pc = 0x22408cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[3] = ctx->f[4] / ctx->f[3];
label_224090:
    // 0x224090: 0x3c03c2c8  lui         $v1, 0xC2C8
    ctx->pc = 0x224090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49864 << 16));
label_224094:
    // 0x224094: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x224094u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_224098:
    // 0x224098: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x224098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
label_22409c:
    // 0x22409c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x22409cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_2240a0:
    // 0x2240a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2240a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2240a4:
    // 0x2240a4: 0x0  nop
    ctx->pc = 0x2240a4u;
    // NOP
label_2240a8:
    // 0x2240a8: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x2240a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2240ac:
    // 0x2240ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2240acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2240b0:
    // 0x2240b0: 0x0  nop
    ctx->pc = 0x2240b0u;
    // NOP
label_2240b4:
    // 0x2240b4: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2240b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_2240b8:
    // 0x2240b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2240b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2240bc:
    // 0x2240bc: 0xc073504  jal         func_1CD410
label_2240c0:
    if (ctx->pc == 0x2240C0u) {
        ctx->pc = 0x2240C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2240BCu;
        // 0x2240c0: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2240C4u;
        goto label_2240c4;
    }
    ctx->pc = 0x2240BCu;
    SET_GPR_U32(ctx, 31, 0x2240C4u);
    ctx->pc = 0x2240C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2240BCu;
    // 0x2240c0: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD410u;
    { ctx->pc = 0x1cd410; return; }
    ctx->pc = 0x2240C4u;
label_2240c4:
    // 0x2240c4: 0x10000098  b           . + 4 + (0x98 << 2)
label_2240c8:
    if (ctx->pc == 0x2240C8u) {
        ctx->pc = 0x2240CCu;
        goto label_2240cc;
    }
    ctx->pc = 0x2240C4u;
    {
        const bool branch_taken_0x2240c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2240c4) {
            ctx->pc = 0x224328u;
            goto label_224328;
        }
    }
    ctx->pc = 0x2240CCu;
label_2240cc:
    // 0x2240cc: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2240ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_2240d0:
    // 0x2240d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2240d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2240d4:
    // 0x2240d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2240d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2240d8:
    // 0x2240d8: 0xc073504  jal         func_1CD410
label_2240dc:
    if (ctx->pc == 0x2240DCu) {
        ctx->pc = 0x2240DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2240D8u;
        // 0x2240dc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2240E0u;
        goto label_2240e0;
    }
    ctx->pc = 0x2240D8u;
    SET_GPR_U32(ctx, 31, 0x2240E0u);
    ctx->pc = 0x2240DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2240D8u;
    // 0x2240dc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD410u;
    { ctx->pc = 0x1cd410; return; }
    ctx->pc = 0x2240E0u;
label_2240e0:
    // 0x2240e0: 0x10000091  b           . + 4 + (0x91 << 2)
label_2240e4:
    if (ctx->pc == 0x2240E4u) {
        ctx->pc = 0x2240E8u;
        goto label_2240e8;
    }
    ctx->pc = 0x2240E0u;
    {
        const bool branch_taken_0x2240e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2240e0) {
            ctx->pc = 0x224328u;
            goto label_224328;
        }
    }
    ctx->pc = 0x2240E8u;
label_2240e8:
    // 0x2240e8: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2240e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_2240ec:
    // 0x2240ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2240ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2240f0:
    // 0x2240f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2240f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2240f4:
    // 0x2240f4: 0xc073504  jal         func_1CD410
label_2240f8:
    if (ctx->pc == 0x2240F8u) {
        ctx->pc = 0x2240F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2240F4u;
        // 0x2240f8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2240FCu;
        goto label_2240fc;
    }
    ctx->pc = 0x2240F4u;
    SET_GPR_U32(ctx, 31, 0x2240FCu);
    ctx->pc = 0x2240F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2240F4u;
    // 0x2240f8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD410u;
    { ctx->pc = 0x1cd410; return; }
    ctx->pc = 0x2240FCu;
label_2240fc:
    // 0x2240fc: 0x1000008a  b           . + 4 + (0x8A << 2)
label_224100:
    if (ctx->pc == 0x224100u) {
        ctx->pc = 0x224104u;
        goto label_224104;
    }
    ctx->pc = 0x2240FCu;
    {
        const bool branch_taken_0x2240fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2240fc) {
            ctx->pc = 0x224328u;
            goto label_224328;
        }
    }
    ctx->pc = 0x224104u;
label_224104:
    // 0x224104: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x224104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_224108:
    // 0x224108: 0xc066e26  jal         func_19B898
label_22410c:
    if (ctx->pc == 0x22410Cu) {
        ctx->pc = 0x22410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224108u;
        // 0x22410c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224110u;
        goto label_224110;
    }
    ctx->pc = 0x224108u;
    SET_GPR_U32(ctx, 31, 0x224110u);
    ctx->pc = 0x22410Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224108u;
    // 0x22410c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x224110u;
label_224110:
    // 0x224110: 0x27b00054  addiu       $s0, $sp, 0x54
    ctx->pc = 0x224110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_224114:
    // 0x224114: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x224114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_224118:
    // 0x224118: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x224118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22411c:
    // 0x22411c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22411cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_224120:
    // 0x224120: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x224120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_224124:
    // 0x224124: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x224124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_224128:
    // 0x224128: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x224128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_22412c:
    // 0x22412c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22412cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_224130:
    // 0x224130: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x224130u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_224134:
    // 0x224134: 0xc073504  jal         func_1CD410
label_224138:
    if (ctx->pc == 0x224138u) {
        ctx->pc = 0x224138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224134u;
        // 0x224138: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22413Cu;
        goto label_22413c;
    }
    ctx->pc = 0x224134u;
    SET_GPR_U32(ctx, 31, 0x22413Cu);
    ctx->pc = 0x224138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224134u;
    // 0x224138: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD410u;
    { ctx->pc = 0x1cd410; return; }
    ctx->pc = 0x22413Cu;
label_22413c:
    // 0x22413c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22413cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_224140:
    // 0x224140: 0xc066e26  jal         func_19B898
label_224144:
    if (ctx->pc == 0x224144u) {
        ctx->pc = 0x224144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224140u;
        // 0x224144: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224148u;
        goto label_224148;
    }
    ctx->pc = 0x224140u;
    SET_GPR_U32(ctx, 31, 0x224148u);
    ctx->pc = 0x224144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224140u;
    // 0x224144: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x224148u;
label_224148:
    // 0x224148: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x224148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22414c:
    // 0x22414c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x22414cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_224150:
    // 0x224150: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x224150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_224154:
    // 0x224154: 0x27b10058  addiu       $s1, $sp, 0x58
    ctx->pc = 0x224154u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_224158:
    // 0x224158: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x224158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_22415c:
    // 0x22415c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22415cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_224160:
    // 0x224160: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x224160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_224164:
    // 0x224164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_224168:
    // 0x224168: 0x0  nop
    ctx->pc = 0x224168u;
    // NOP
label_22416c:
    // 0x22416c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x22416cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_224170:
    // 0x224170: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x224170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_224174:
    // 0x224174: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x224174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_224178:
    // 0x224178: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x224178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22417c:
    // 0x22417c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22417cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_224180:
    // 0x224180: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x224180u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_224184:
    // 0x224184: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x224184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_224188:
    // 0x224188: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x224188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22418c:
    // 0x22418c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x22418cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_224190:
    // 0x224190: 0xc073504  jal         func_1CD410
label_224194:
    if (ctx->pc == 0x224194u) {
        ctx->pc = 0x224194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224190u;
        // 0x224194: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x224198u;
        goto label_224198;
    }
    ctx->pc = 0x224190u;
    SET_GPR_U32(ctx, 31, 0x224198u);
    ctx->pc = 0x224194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224190u;
    // 0x224194: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD410u;
    { ctx->pc = 0x1cd410; return; }
    ctx->pc = 0x224198u;
label_224198:
    // 0x224198: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x224198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_22419c:
    // 0x22419c: 0xc066e26  jal         func_19B898
label_2241a0:
    if (ctx->pc == 0x2241A0u) {
        ctx->pc = 0x2241A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22419Cu;
        // 0x2241a0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2241A4u;
        goto label_2241a4;
    }
    ctx->pc = 0x22419Cu;
    SET_GPR_U32(ctx, 31, 0x2241A4u);
    ctx->pc = 0x2241A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22419Cu;
    // 0x2241a0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x2241A4u;
label_2241a4:
    // 0x2241a4: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x2241a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2241a8:
    // 0x2241a8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2241a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_2241ac:
    // 0x2241ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2241acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2241b0:
    // 0x2241b0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2241b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2241b4:
    // 0x2241b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2241b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2241b8:
    // 0x2241b8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2241b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_2241bc:
    // 0x2241bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2241bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2241c0:
    // 0x2241c0: 0x0  nop
    ctx->pc = 0x2241c0u;
    // NOP
label_2241c4:
    // 0x2241c4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2241c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2241c8:
    // 0x2241c8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2241c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2241cc:
    // 0x2241cc: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2241ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_2241d0:
    // 0x2241d0: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2241d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2241d4:
    // 0x2241d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2241d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2241d8:
    // 0x2241d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2241d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2241dc:
    // 0x2241dc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2241dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_2241e0:
    // 0x2241e0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2241e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2241e4:
    // 0x2241e4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2241e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_2241e8:
    // 0x2241e8: 0xc073504  jal         func_1CD410
label_2241ec:
    if (ctx->pc == 0x2241ECu) {
        ctx->pc = 0x2241ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2241E8u;
        // 0x2241ec: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2241F0u;
        goto label_2241f0;
    }
    ctx->pc = 0x2241E8u;
    SET_GPR_U32(ctx, 31, 0x2241F0u);
    ctx->pc = 0x2241ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2241E8u;
    // 0x2241ec: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD410u;
    { ctx->pc = 0x1cd410; return; }
    ctx->pc = 0x2241F0u;
label_2241f0:
    // 0x2241f0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2241f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2241f4:
    // 0x2241f4: 0xc066e26  jal         func_19B898
label_2241f8:
    if (ctx->pc == 0x2241F8u) {
        ctx->pc = 0x2241F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2241F4u;
        // 0x2241f8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2241FCu;
        goto label_2241fc;
    }
    ctx->pc = 0x2241F4u;
    SET_GPR_U32(ctx, 31, 0x2241FCu);
    ctx->pc = 0x2241F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2241F4u;
    // 0x2241f8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x2241FCu;
label_2241fc:
    // 0x2241fc: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x2241fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_224200:
    // 0x224200: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x224200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_224204:
    // 0x224204: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x224204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_224208:
    // 0x224208: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x224208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_22420c:
    // 0x22420c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22420cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_224210:
    // 0x224210: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x224210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_224214:
    // 0x224214: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_224218:
    // 0x224218: 0x0  nop
    ctx->pc = 0x224218u;
    // NOP
label_22421c:
    // 0x22421c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x22421cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_224220:
    // 0x224220: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x224220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_224224:
    // 0x224224: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x224224u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_224228:
    // 0x224228: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x224228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22422c:
    // 0x22422c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22422cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_224230:
    // 0x224230: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x224230u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_224234:
    // 0x224234: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x224234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_224238:
    // 0x224238: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x224238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22423c:
    // 0x22423c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x22423cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_224240:
    // 0x224240: 0xc073504  jal         func_1CD410
label_224244:
    if (ctx->pc == 0x224244u) {
        ctx->pc = 0x224244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224240u;
        // 0x224244: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x224248u;
        goto label_224248;
    }
    ctx->pc = 0x224240u;
    SET_GPR_U32(ctx, 31, 0x224248u);
    ctx->pc = 0x224244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224240u;
    // 0x224244: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD410u;
    { ctx->pc = 0x1cd410; return; }
    ctx->pc = 0x224248u;
label_224248:
    // 0x224248: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x224248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_22424c:
    // 0x22424c: 0xc066e26  jal         func_19B898
label_224250:
    if (ctx->pc == 0x224250u) {
        ctx->pc = 0x224250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22424Cu;
        // 0x224250: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224254u;
        goto label_224254;
    }
    ctx->pc = 0x22424Cu;
    SET_GPR_U32(ctx, 31, 0x224254u);
    ctx->pc = 0x224250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22424Cu;
    // 0x224250: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x224254u;
label_224254:
    // 0x224254: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x224254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_224258:
    // 0x224258: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x224258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_22425c:
    // 0x22425c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22425cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_224260:
    // 0x224260: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x224260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_224264:
    // 0x224264: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x224264u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_224268:
    // 0x224268: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x224268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22426c:
    // 0x22426c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x22426cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_224270:
    // 0x224270: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x224270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_224274:
    // 0x224274: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x224274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_224278:
    // 0x224278: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x224278u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_22427c:
    // 0x22427c: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x22427cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_224280:
    // 0x224280: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x224280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_224284:
    // 0x224284: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x224284u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_224288:
    // 0x224288: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x224288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_22428c:
    // 0x22428c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x22428cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_224290:
    // 0x224290: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x224290u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_224294:
    // 0x224294: 0xc073504  jal         func_1CD410
label_224298:
    if (ctx->pc == 0x224298u) {
        ctx->pc = 0x224298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224294u;
        // 0x224298: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22429Cu;
        goto label_22429c;
    }
    ctx->pc = 0x224294u;
    SET_GPR_U32(ctx, 31, 0x22429Cu);
    ctx->pc = 0x224298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224294u;
    // 0x224298: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD410u;
    { ctx->pc = 0x1cd410; return; }
    ctx->pc = 0x22429Cu;
label_22429c:
    // 0x22429c: 0x10000022  b           . + 4 + (0x22 << 2)
label_2242a0:
    if (ctx->pc == 0x2242A0u) {
        ctx->pc = 0x2242A4u;
        goto label_2242a4;
    }
    ctx->pc = 0x22429Cu;
    {
        const bool branch_taken_0x22429c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22429c) {
            ctx->pc = 0x224328u;
            goto label_224328;
        }
    }
    ctx->pc = 0x2242A4u;
label_2242a4:
    // 0x2242a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2242a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2242a8:
    // 0x2242a8: 0xc045bc4  jal         func_116F10
label_2242ac:
    if (ctx->pc == 0x2242ACu) {
        ctx->pc = 0x2242ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2242A8u;
        // 0x2242ac: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2242B0u;
        goto label_2242b0;
    }
    ctx->pc = 0x2242A8u;
    SET_GPR_U32(ctx, 31, 0x2242B0u);
    ctx->pc = 0x2242ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2242A8u;
    // 0x2242ac: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116F10u, 0x2242A8u, 0x2242B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2242B0u;
label_2242b0:
    // 0x2242b0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2242b4:
    if (ctx->pc == 0x2242B4u) {
        ctx->pc = 0x2242B8u;
        goto label_2242b8;
    }
    ctx->pc = 0x2242B0u;
    {
        const bool branch_taken_0x2242b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2242b0) {
            ctx->pc = 0x224328u;
            goto label_224328;
        }
    }
    ctx->pc = 0x2242B8u;
label_2242b8:
    // 0x2242b8: 0xc08f0cc  jal         func_23C330
label_2242bc:
    if (ctx->pc == 0x2242BCu) {
        ctx->pc = 0x2242C0u;
        goto label_2242c0;
    }
    ctx->pc = 0x2242B8u;
    SET_GPR_U32(ctx, 31, 0x2242C0u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x2242C0u;
label_2242c0:
    // 0x2242c0: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x2242c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_2242c4:
    // 0x2242c4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2242c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_2242c8:
    // 0x2242c8: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x2242c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2242cc:
    // 0x2242cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2242ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2242d0:
    // 0x2242d0: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x2242d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_2242d4:
    // 0x2242d4: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2242d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_2242d8:
    // 0x2242d8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2242d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_2242dc:
    // 0x2242dc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2242dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_2242e0:
    // 0x2242e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2242e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2242e4:
    // 0x2242e4: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x2242e4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_2242e8:
    // 0x2242e8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2242e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2242ec:
    // 0x2242ec: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2242ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2242f0:
    // 0x2242f0: 0x460320c3  div.s       $f3, $f4, $f3
    ctx->pc = 0x2242f0u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[3] = ctx->f[4] / ctx->f[3];
label_2242f4:
    // 0x2242f4: 0x3c03c248  lui         $v1, 0xC248
    ctx->pc = 0x2242f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49736 << 16));
label_2242f8:
    // 0x2242f8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2242f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2242fc:
    // 0x2242fc: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2242fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
label_224300:
    // 0x224300: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x224300u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_224304:
    // 0x224304: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x224304u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_224308:
    // 0x224308: 0x0  nop
    ctx->pc = 0x224308u;
    // NOP
label_22430c:
    // 0x22430c: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x22430cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_224310:
    // 0x224310: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_224314:
    // 0x224314: 0x0  nop
    ctx->pc = 0x224314u;
    // NOP
label_224318:
    // 0x224318: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x224318u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_22431c:
    // 0x22431c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22431cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_224320:
    // 0x224320: 0xc04a670  jal         func_1299C0
label_224324:
    if (ctx->pc == 0x224324u) {
        ctx->pc = 0x224324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224320u;
        // 0x224324: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x224328u;
        goto label_224328;
    }
    ctx->pc = 0x224320u;
    SET_GPR_U32(ctx, 31, 0x224328u);
    ctx->pc = 0x224324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224320u;
    // 0x224324: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299C0u, 0x224320u, 0x224328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224328u;
label_224328:
    // 0x224328: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x224328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22432c:
    // 0x22432c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22432cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_224330:
    // 0x224330: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x224330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_224334:
    // 0x224334: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x224334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_224338:
    // 0x224338: 0x3e00008  jr          $ra
label_22433c:
    if (ctx->pc == 0x22433Cu) {
        ctx->pc = 0x22433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224338u;
        // 0x22433c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224340u;
        goto label_224340;
    }
    ctx->pc = 0x224338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224338u;
        // 0x22433c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224340u;
label_224340:
    // 0x224340: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x224340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_224344:
    // 0x224344: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x224344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_224348:
    // 0x224348: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x224348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_22434c:
    // 0x22434c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22434cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_224350:
    // 0x224350: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x224350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_224354:
    // 0x224354: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x224354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_224358:
    // 0x224358: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x224358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22435c:
    // 0x22435c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22435cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_224360:
    // 0x224360: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x224360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_224364:
    // 0x224364: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x224364u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_224368:
    // 0x224368: 0x10430509  beq         $v0, $v1, . + 4 + (0x509 << 2)
label_22436c:
    if (ctx->pc == 0x22436Cu) {
        ctx->pc = 0x22436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224368u;
        // 0x22436c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224370u;
        goto label_224370;
    }
    ctx->pc = 0x224368u;
    {
        const bool branch_taken_0x224368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x22436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224368u;
        // 0x22436c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224368) {
            ctx->pc = 0x225790u;
            { ctx->pc = 0x225790; return; }
        }
    }
    ctx->pc = 0x224370u;
label_224370:
    // 0x224370: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x224370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_224374:
    // 0x224374: 0x104304f8  beq         $v0, $v1, . + 4 + (0x4F8 << 2)
label_224378:
    if (ctx->pc == 0x224378u) {
        ctx->pc = 0x224378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224374u;
        // 0x224378: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22437Cu;
        goto label_22437c;
    }
    ctx->pc = 0x224374u;
    {
        const bool branch_taken_0x224374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x224378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224374u;
        // 0x224378: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224374) {
            ctx->pc = 0x225758u;
            { ctx->pc = 0x225758; return; }
        }
    }
    ctx->pc = 0x22437Cu;
label_22437c:
    // 0x22437c: 0x104304e1  beq         $v0, $v1, . + 4 + (0x4E1 << 2)
label_224380:
    if (ctx->pc == 0x224380u) {
        ctx->pc = 0x224380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22437Cu;
        // 0x224380: 0x3c12002f  lui         $s2, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224384u;
        goto label_224384;
    }
    ctx->pc = 0x22437Cu;
    {
        const bool branch_taken_0x22437c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x224380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22437Cu;
        // 0x224380: 0x3c12002f  lui         $s2, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22437c) {
            ctx->pc = 0x225704u;
            { ctx->pc = 0x225704; return; }
        }
    }
    ctx->pc = 0x224384u;
label_224384:
    // 0x224384: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x224384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->pc = 0x224388u;
    return;
}

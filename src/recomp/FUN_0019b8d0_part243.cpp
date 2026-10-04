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

// Function: FUN_0019b8d0
// Address: 0x19b8d0 - 0x29b8d8
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b8d0_part243(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x211b70u: goto label_211b70;
        case 0x211b74u: goto label_211b74;
        case 0x211b78u: goto label_211b78;
        case 0x211b7cu: goto label_211b7c;
        case 0x211b80u: goto label_211b80;
        case 0x211b84u: goto label_211b84;
        case 0x211b88u: goto label_211b88;
        case 0x211b8cu: goto label_211b8c;
        case 0x211b90u: goto label_211b90;
        case 0x211b94u: goto label_211b94;
        case 0x211b98u: goto label_211b98;
        case 0x211b9cu: goto label_211b9c;
        case 0x211ba0u: goto label_211ba0;
        case 0x211ba4u: goto label_211ba4;
        case 0x211ba8u: goto label_211ba8;
        case 0x211bacu: goto label_211bac;
        case 0x211bb0u: goto label_211bb0;
        case 0x211bb4u: goto label_211bb4;
        case 0x211bb8u: goto label_211bb8;
        case 0x211bbcu: goto label_211bbc;
        case 0x211bc0u: goto label_211bc0;
        case 0x211bc4u: goto label_211bc4;
        case 0x211bc8u: goto label_211bc8;
        case 0x211bccu: goto label_211bcc;
        case 0x211bd0u: goto label_211bd0;
        case 0x211bd4u: goto label_211bd4;
        case 0x211bd8u: goto label_211bd8;
        case 0x211bdcu: goto label_211bdc;
        case 0x211be0u: goto label_211be0;
        case 0x211be4u: goto label_211be4;
        case 0x211be8u: goto label_211be8;
        case 0x211becu: goto label_211bec;
        case 0x211bf0u: goto label_211bf0;
        case 0x211bf4u: goto label_211bf4;
        case 0x211bf8u: goto label_211bf8;
        case 0x211bfcu: goto label_211bfc;
        case 0x211c00u: goto label_211c00;
        case 0x211c04u: goto label_211c04;
        case 0x211c08u: goto label_211c08;
        case 0x211c0cu: goto label_211c0c;
        case 0x211c10u: goto label_211c10;
        case 0x211c14u: goto label_211c14;
        case 0x211c18u: goto label_211c18;
        case 0x211c1cu: goto label_211c1c;
        case 0x211c20u: goto label_211c20;
        case 0x211c24u: goto label_211c24;
        case 0x211c28u: goto label_211c28;
        case 0x211c2cu: goto label_211c2c;
        case 0x211c30u: goto label_211c30;
        case 0x211c34u: goto label_211c34;
        case 0x211c38u: goto label_211c38;
        case 0x211c3cu: goto label_211c3c;
        case 0x211c40u: goto label_211c40;
        case 0x211c44u: goto label_211c44;
        case 0x211c48u: goto label_211c48;
        case 0x211c4cu: goto label_211c4c;
        case 0x211c50u: goto label_211c50;
        case 0x211c54u: goto label_211c54;
        case 0x211c58u: goto label_211c58;
        case 0x211c5cu: goto label_211c5c;
        case 0x211c60u: goto label_211c60;
        case 0x211c64u: goto label_211c64;
        case 0x211c68u: goto label_211c68;
        case 0x211c6cu: goto label_211c6c;
        case 0x211c70u: goto label_211c70;
        case 0x211c74u: goto label_211c74;
        case 0x211c78u: goto label_211c78;
        case 0x211c7cu: goto label_211c7c;
        case 0x211c80u: goto label_211c80;
        case 0x211c84u: goto label_211c84;
        case 0x211c88u: goto label_211c88;
        case 0x211c8cu: goto label_211c8c;
        case 0x211c90u: goto label_211c90;
        case 0x211c94u: goto label_211c94;
        case 0x211c98u: goto label_211c98;
        case 0x211c9cu: goto label_211c9c;
        case 0x211ca0u: goto label_211ca0;
        case 0x211ca4u: goto label_211ca4;
        case 0x211ca8u: goto label_211ca8;
        case 0x211cacu: goto label_211cac;
        case 0x211cb0u: goto label_211cb0;
        case 0x211cb4u: goto label_211cb4;
        case 0x211cb8u: goto label_211cb8;
        case 0x211cbcu: goto label_211cbc;
        case 0x211cc0u: goto label_211cc0;
        case 0x211cc4u: goto label_211cc4;
        case 0x211cc8u: goto label_211cc8;
        case 0x211cccu: goto label_211ccc;
        case 0x211cd0u: goto label_211cd0;
        case 0x211cd4u: goto label_211cd4;
        case 0x211cd8u: goto label_211cd8;
        case 0x211cdcu: goto label_211cdc;
        case 0x211ce0u: goto label_211ce0;
        case 0x211ce4u: goto label_211ce4;
        case 0x211ce8u: goto label_211ce8;
        case 0x211cecu: goto label_211cec;
        case 0x211cf0u: goto label_211cf0;
        case 0x211cf4u: goto label_211cf4;
        case 0x211cf8u: goto label_211cf8;
        case 0x211cfcu: goto label_211cfc;
        case 0x211d00u: goto label_211d00;
        case 0x211d04u: goto label_211d04;
        case 0x211d08u: goto label_211d08;
        case 0x211d0cu: goto label_211d0c;
        case 0x211d10u: goto label_211d10;
        case 0x211d14u: goto label_211d14;
        case 0x211d18u: goto label_211d18;
        case 0x211d1cu: goto label_211d1c;
        case 0x211d20u: goto label_211d20;
        case 0x211d24u: goto label_211d24;
        case 0x211d28u: goto label_211d28;
        case 0x211d2cu: goto label_211d2c;
        case 0x211d30u: goto label_211d30;
        case 0x211d34u: goto label_211d34;
        case 0x211d38u: goto label_211d38;
        case 0x211d3cu: goto label_211d3c;
        case 0x211d40u: goto label_211d40;
        case 0x211d44u: goto label_211d44;
        case 0x211d48u: goto label_211d48;
        case 0x211d4cu: goto label_211d4c;
        case 0x211d50u: goto label_211d50;
        case 0x211d54u: goto label_211d54;
        case 0x211d58u: goto label_211d58;
        case 0x211d5cu: goto label_211d5c;
        case 0x211d60u: goto label_211d60;
        case 0x211d64u: goto label_211d64;
        case 0x211d68u: goto label_211d68;
        case 0x211d6cu: goto label_211d6c;
        case 0x211d70u: goto label_211d70;
        case 0x211d74u: goto label_211d74;
        case 0x211d78u: goto label_211d78;
        case 0x211d7cu: goto label_211d7c;
        case 0x211d80u: goto label_211d80;
        case 0x211d84u: goto label_211d84;
        case 0x211d88u: goto label_211d88;
        case 0x211d8cu: goto label_211d8c;
        case 0x211d90u: goto label_211d90;
        case 0x211d94u: goto label_211d94;
        case 0x211d98u: goto label_211d98;
        case 0x211d9cu: goto label_211d9c;
        case 0x211da0u: goto label_211da0;
        case 0x211da4u: goto label_211da4;
        case 0x211da8u: goto label_211da8;
        case 0x211dacu: goto label_211dac;
        case 0x211db0u: goto label_211db0;
        case 0x211db4u: goto label_211db4;
        case 0x211db8u: goto label_211db8;
        case 0x211dbcu: goto label_211dbc;
        case 0x211dc0u: goto label_211dc0;
        case 0x211dc4u: goto label_211dc4;
        case 0x211dc8u: goto label_211dc8;
        case 0x211dccu: goto label_211dcc;
        case 0x211dd0u: goto label_211dd0;
        case 0x211dd4u: goto label_211dd4;
        case 0x211dd8u: goto label_211dd8;
        case 0x211ddcu: goto label_211ddc;
        case 0x211de0u: goto label_211de0;
        case 0x211de4u: goto label_211de4;
        case 0x211de8u: goto label_211de8;
        case 0x211decu: goto label_211dec;
        case 0x211df0u: goto label_211df0;
        case 0x211df4u: goto label_211df4;
        case 0x211df8u: goto label_211df8;
        case 0x211dfcu: goto label_211dfc;
        case 0x211e00u: goto label_211e00;
        case 0x211e04u: goto label_211e04;
        case 0x211e08u: goto label_211e08;
        case 0x211e0cu: goto label_211e0c;
        case 0x211e10u: goto label_211e10;
        case 0x211e14u: goto label_211e14;
        case 0x211e18u: goto label_211e18;
        case 0x211e1cu: goto label_211e1c;
        case 0x211e20u: goto label_211e20;
        case 0x211e24u: goto label_211e24;
        case 0x211e28u: goto label_211e28;
        case 0x211e2cu: goto label_211e2c;
        case 0x211e30u: goto label_211e30;
        case 0x211e34u: goto label_211e34;
        case 0x211e38u: goto label_211e38;
        case 0x211e3cu: goto label_211e3c;
        case 0x211e40u: goto label_211e40;
        case 0x211e44u: goto label_211e44;
        case 0x211e48u: goto label_211e48;
        case 0x211e4cu: goto label_211e4c;
        case 0x211e50u: goto label_211e50;
        case 0x211e54u: goto label_211e54;
        case 0x211e58u: goto label_211e58;
        case 0x211e5cu: goto label_211e5c;
        case 0x211e60u: goto label_211e60;
        case 0x211e64u: goto label_211e64;
        case 0x211e68u: goto label_211e68;
        case 0x211e6cu: goto label_211e6c;
        case 0x211e70u: goto label_211e70;
        case 0x211e74u: goto label_211e74;
        case 0x211e78u: goto label_211e78;
        case 0x211e7cu: goto label_211e7c;
        case 0x211e80u: goto label_211e80;
        case 0x211e84u: goto label_211e84;
        case 0x211e88u: goto label_211e88;
        case 0x211e8cu: goto label_211e8c;
        case 0x211e90u: goto label_211e90;
        case 0x211e94u: goto label_211e94;
        case 0x211e98u: goto label_211e98;
        case 0x211e9cu: goto label_211e9c;
        case 0x211ea0u: goto label_211ea0;
        case 0x211ea4u: goto label_211ea4;
        case 0x211ea8u: goto label_211ea8;
        case 0x211eacu: goto label_211eac;
        case 0x211eb0u: goto label_211eb0;
        case 0x211eb4u: goto label_211eb4;
        case 0x211eb8u: goto label_211eb8;
        case 0x211ebcu: goto label_211ebc;
        case 0x211ec0u: goto label_211ec0;
        case 0x211ec4u: goto label_211ec4;
        case 0x211ec8u: goto label_211ec8;
        case 0x211eccu: goto label_211ecc;
        case 0x211ed0u: goto label_211ed0;
        case 0x211ed4u: goto label_211ed4;
        case 0x211ed8u: goto label_211ed8;
        case 0x211edcu: goto label_211edc;
        case 0x211ee0u: goto label_211ee0;
        case 0x211ee4u: goto label_211ee4;
        case 0x211ee8u: goto label_211ee8;
        case 0x211eecu: goto label_211eec;
        case 0x211ef0u: goto label_211ef0;
        case 0x211ef4u: goto label_211ef4;
        case 0x211ef8u: goto label_211ef8;
        case 0x211efcu: goto label_211efc;
        case 0x211f00u: goto label_211f00;
        case 0x211f04u: goto label_211f04;
        case 0x211f08u: goto label_211f08;
        case 0x211f0cu: goto label_211f0c;
        case 0x211f10u: goto label_211f10;
        case 0x211f14u: goto label_211f14;
        case 0x211f18u: goto label_211f18;
        case 0x211f1cu: goto label_211f1c;
        case 0x211f20u: goto label_211f20;
        case 0x211f24u: goto label_211f24;
        case 0x211f28u: goto label_211f28;
        case 0x211f2cu: goto label_211f2c;
        case 0x211f30u: goto label_211f30;
        case 0x211f34u: goto label_211f34;
        case 0x211f38u: goto label_211f38;
        case 0x211f3cu: goto label_211f3c;
        case 0x211f40u: goto label_211f40;
        case 0x211f44u: goto label_211f44;
        case 0x211f48u: goto label_211f48;
        case 0x211f4cu: goto label_211f4c;
        case 0x211f50u: goto label_211f50;
        case 0x211f54u: goto label_211f54;
        case 0x211f58u: goto label_211f58;
        case 0x211f5cu: goto label_211f5c;
        case 0x211f60u: goto label_211f60;
        case 0x211f64u: goto label_211f64;
        case 0x211f68u: goto label_211f68;
        case 0x211f6cu: goto label_211f6c;
        case 0x211f70u: goto label_211f70;
        case 0x211f74u: goto label_211f74;
        case 0x211f78u: goto label_211f78;
        case 0x211f7cu: goto label_211f7c;
        case 0x211f80u: goto label_211f80;
        case 0x211f84u: goto label_211f84;
        case 0x211f88u: goto label_211f88;
        case 0x211f8cu: goto label_211f8c;
        case 0x211f90u: goto label_211f90;
        case 0x211f94u: goto label_211f94;
        case 0x211f98u: goto label_211f98;
        case 0x211f9cu: goto label_211f9c;
        case 0x211fa0u: goto label_211fa0;
        case 0x211fa4u: goto label_211fa4;
        case 0x211fa8u: goto label_211fa8;
        case 0x211facu: goto label_211fac;
        case 0x211fb0u: goto label_211fb0;
        case 0x211fb4u: goto label_211fb4;
        case 0x211fb8u: goto label_211fb8;
        case 0x211fbcu: goto label_211fbc;
        case 0x211fc0u: goto label_211fc0;
        case 0x211fc4u: goto label_211fc4;
        case 0x211fc8u: goto label_211fc8;
        case 0x211fccu: goto label_211fcc;
        case 0x211fd0u: goto label_211fd0;
        case 0x211fd4u: goto label_211fd4;
        case 0x211fd8u: goto label_211fd8;
        case 0x211fdcu: goto label_211fdc;
        case 0x211fe0u: goto label_211fe0;
        case 0x211fe4u: goto label_211fe4;
        case 0x211fe8u: goto label_211fe8;
        case 0x211fecu: goto label_211fec;
        case 0x211ff0u: goto label_211ff0;
        case 0x211ff4u: goto label_211ff4;
        case 0x211ff8u: goto label_211ff8;
        case 0x211ffcu: goto label_211ffc;
        case 0x212000u: goto label_212000;
        case 0x212004u: goto label_212004;
        case 0x212008u: goto label_212008;
        case 0x21200cu: goto label_21200c;
        case 0x212010u: goto label_212010;
        case 0x212014u: goto label_212014;
        case 0x212018u: goto label_212018;
        case 0x21201cu: goto label_21201c;
        case 0x212020u: goto label_212020;
        case 0x212024u: goto label_212024;
        case 0x212028u: goto label_212028;
        case 0x21202cu: goto label_21202c;
        case 0x212030u: goto label_212030;
        case 0x212034u: goto label_212034;
        case 0x212038u: goto label_212038;
        case 0x21203cu: goto label_21203c;
        case 0x212040u: goto label_212040;
        case 0x212044u: goto label_212044;
        case 0x212048u: goto label_212048;
        case 0x21204cu: goto label_21204c;
        case 0x212050u: goto label_212050;
        case 0x212054u: goto label_212054;
        case 0x212058u: goto label_212058;
        case 0x21205cu: goto label_21205c;
        case 0x212060u: goto label_212060;
        case 0x212064u: goto label_212064;
        case 0x212068u: goto label_212068;
        case 0x21206cu: goto label_21206c;
        case 0x212070u: goto label_212070;
        case 0x212074u: goto label_212074;
        case 0x212078u: goto label_212078;
        case 0x21207cu: goto label_21207c;
        case 0x212080u: goto label_212080;
        case 0x212084u: goto label_212084;
        case 0x212088u: goto label_212088;
        case 0x21208cu: goto label_21208c;
        case 0x212090u: goto label_212090;
        case 0x212094u: goto label_212094;
        case 0x212098u: goto label_212098;
        case 0x21209cu: goto label_21209c;
        case 0x2120a0u: goto label_2120a0;
        case 0x2120a4u: goto label_2120a4;
        case 0x2120a8u: goto label_2120a8;
        case 0x2120acu: goto label_2120ac;
        case 0x2120b0u: goto label_2120b0;
        case 0x2120b4u: goto label_2120b4;
        case 0x2120b8u: goto label_2120b8;
        case 0x2120bcu: goto label_2120bc;
        case 0x2120c0u: goto label_2120c0;
        case 0x2120c4u: goto label_2120c4;
        case 0x2120c8u: goto label_2120c8;
        case 0x2120ccu: goto label_2120cc;
        case 0x2120d0u: goto label_2120d0;
        case 0x2120d4u: goto label_2120d4;
        case 0x2120d8u: goto label_2120d8;
        case 0x2120dcu: goto label_2120dc;
        case 0x2120e0u: goto label_2120e0;
        case 0x2120e4u: goto label_2120e4;
        case 0x2120e8u: goto label_2120e8;
        case 0x2120ecu: goto label_2120ec;
        case 0x2120f0u: goto label_2120f0;
        case 0x2120f4u: goto label_2120f4;
        case 0x2120f8u: goto label_2120f8;
        case 0x2120fcu: goto label_2120fc;
        case 0x212100u: goto label_212100;
        case 0x212104u: goto label_212104;
        case 0x212108u: goto label_212108;
        case 0x21210cu: goto label_21210c;
        case 0x212110u: goto label_212110;
        case 0x212114u: goto label_212114;
        case 0x212118u: goto label_212118;
        case 0x21211cu: goto label_21211c;
        case 0x212120u: goto label_212120;
        case 0x212124u: goto label_212124;
        case 0x212128u: goto label_212128;
        case 0x21212cu: goto label_21212c;
        case 0x212130u: goto label_212130;
        case 0x212134u: goto label_212134;
        case 0x212138u: goto label_212138;
        case 0x21213cu: goto label_21213c;
        case 0x212140u: goto label_212140;
        case 0x212144u: goto label_212144;
        case 0x212148u: goto label_212148;
        case 0x21214cu: goto label_21214c;
        case 0x212150u: goto label_212150;
        case 0x212154u: goto label_212154;
        case 0x212158u: goto label_212158;
        case 0x21215cu: goto label_21215c;
        case 0x212160u: goto label_212160;
        case 0x212164u: goto label_212164;
        case 0x212168u: goto label_212168;
        case 0x21216cu: goto label_21216c;
        case 0x212170u: goto label_212170;
        case 0x212174u: goto label_212174;
        case 0x212178u: goto label_212178;
        case 0x21217cu: goto label_21217c;
        case 0x212180u: goto label_212180;
        case 0x212184u: goto label_212184;
        case 0x212188u: goto label_212188;
        case 0x21218cu: goto label_21218c;
        case 0x212190u: goto label_212190;
        case 0x212194u: goto label_212194;
        case 0x212198u: goto label_212198;
        case 0x21219cu: goto label_21219c;
        case 0x2121a0u: goto label_2121a0;
        case 0x2121a4u: goto label_2121a4;
        case 0x2121a8u: goto label_2121a8;
        case 0x2121acu: goto label_2121ac;
        case 0x2121b0u: goto label_2121b0;
        case 0x2121b4u: goto label_2121b4;
        case 0x2121b8u: goto label_2121b8;
        case 0x2121bcu: goto label_2121bc;
        case 0x2121c0u: goto label_2121c0;
        case 0x2121c4u: goto label_2121c4;
        case 0x2121c8u: goto label_2121c8;
        case 0x2121ccu: goto label_2121cc;
        case 0x2121d0u: goto label_2121d0;
        case 0x2121d4u: goto label_2121d4;
        case 0x2121d8u: goto label_2121d8;
        case 0x2121dcu: goto label_2121dc;
        case 0x2121e0u: goto label_2121e0;
        case 0x2121e4u: goto label_2121e4;
        case 0x2121e8u: goto label_2121e8;
        case 0x2121ecu: goto label_2121ec;
        case 0x2121f0u: goto label_2121f0;
        case 0x2121f4u: goto label_2121f4;
        case 0x2121f8u: goto label_2121f8;
        case 0x2121fcu: goto label_2121fc;
        case 0x212200u: goto label_212200;
        case 0x212204u: goto label_212204;
        case 0x212208u: goto label_212208;
        case 0x21220cu: goto label_21220c;
        case 0x212210u: goto label_212210;
        case 0x212214u: goto label_212214;
        case 0x212218u: goto label_212218;
        case 0x21221cu: goto label_21221c;
        case 0x212220u: goto label_212220;
        case 0x212224u: goto label_212224;
        case 0x212228u: goto label_212228;
        case 0x21222cu: goto label_21222c;
        case 0x212230u: goto label_212230;
        case 0x212234u: goto label_212234;
        case 0x212238u: goto label_212238;
        case 0x21223cu: goto label_21223c;
        case 0x212240u: goto label_212240;
        case 0x212244u: goto label_212244;
        case 0x212248u: goto label_212248;
        case 0x21224cu: goto label_21224c;
        case 0x212250u: goto label_212250;
        case 0x212254u: goto label_212254;
        case 0x212258u: goto label_212258;
        case 0x21225cu: goto label_21225c;
        case 0x212260u: goto label_212260;
        case 0x212264u: goto label_212264;
        case 0x212268u: goto label_212268;
        case 0x21226cu: goto label_21226c;
        case 0x212270u: goto label_212270;
        case 0x212274u: goto label_212274;
        case 0x212278u: goto label_212278;
        case 0x21227cu: goto label_21227c;
        case 0x212280u: goto label_212280;
        case 0x212284u: goto label_212284;
        case 0x212288u: goto label_212288;
        case 0x21228cu: goto label_21228c;
        case 0x212290u: goto label_212290;
        case 0x212294u: goto label_212294;
        case 0x212298u: goto label_212298;
        case 0x21229cu: goto label_21229c;
        case 0x2122a0u: goto label_2122a0;
        case 0x2122a4u: goto label_2122a4;
        case 0x2122a8u: goto label_2122a8;
        case 0x2122acu: goto label_2122ac;
        case 0x2122b0u: goto label_2122b0;
        case 0x2122b4u: goto label_2122b4;
        case 0x2122b8u: goto label_2122b8;
        case 0x2122bcu: goto label_2122bc;
        case 0x2122c0u: goto label_2122c0;
        case 0x2122c4u: goto label_2122c4;
        case 0x2122c8u: goto label_2122c8;
        case 0x2122ccu: goto label_2122cc;
        case 0x2122d0u: goto label_2122d0;
        case 0x2122d4u: goto label_2122d4;
        case 0x2122d8u: goto label_2122d8;
        case 0x2122dcu: goto label_2122dc;
        case 0x2122e0u: goto label_2122e0;
        case 0x2122e4u: goto label_2122e4;
        case 0x2122e8u: goto label_2122e8;
        case 0x2122ecu: goto label_2122ec;
        case 0x2122f0u: goto label_2122f0;
        case 0x2122f4u: goto label_2122f4;
        case 0x2122f8u: goto label_2122f8;
        case 0x2122fcu: goto label_2122fc;
        case 0x212300u: goto label_212300;
        case 0x212304u: goto label_212304;
        case 0x212308u: goto label_212308;
        case 0x21230cu: goto label_21230c;
        case 0x212310u: goto label_212310;
        case 0x212314u: goto label_212314;
        case 0x212318u: goto label_212318;
        case 0x21231cu: goto label_21231c;
        case 0x212320u: goto label_212320;
        case 0x212324u: goto label_212324;
        case 0x212328u: goto label_212328;
        case 0x21232cu: goto label_21232c;
        case 0x212330u: goto label_212330;
        case 0x212334u: goto label_212334;
        case 0x212338u: goto label_212338;
        case 0x21233cu: goto label_21233c;
        default: return;
    }

label_211b70:
    // 0x211b70: 0x260f809  jalr        $s3
label_211b74:
    if (ctx->pc == 0x211B74u) {
        ctx->pc = 0x211B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211B70u;
        // 0x211b74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211B78u;
        goto label_211b78;
    }
    ctx->pc = 0x211B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211B78u);
        ctx->pc = 0x211B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211B70u;
        // 0x211b74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211B70u, 0x211B78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211B78u;
label_211b78:
    // 0x211b78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211b7c:
    // 0x211b7c: 0x26050071  addiu       $a1, $s0, 0x71
    ctx->pc = 0x211b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 113));
label_211b80:
    // 0x211b80: 0x260f809  jalr        $s3
label_211b84:
    if (ctx->pc == 0x211B84u) {
        ctx->pc = 0x211B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211B80u;
        // 0x211b84: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211B88u;
        goto label_211b88;
    }
    ctx->pc = 0x211B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211B88u);
        ctx->pc = 0x211B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211B80u;
        // 0x211b84: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211B80u, 0x211B88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211B88u;
label_211b88:
    // 0x211b88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211b8c:
    // 0x211b8c: 0x26050072  addiu       $a1, $s0, 0x72
    ctx->pc = 0x211b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 114));
label_211b90:
    // 0x211b90: 0x260f809  jalr        $s3
label_211b94:
    if (ctx->pc == 0x211B94u) {
        ctx->pc = 0x211B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211B90u;
        // 0x211b94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211B98u;
        goto label_211b98;
    }
    ctx->pc = 0x211B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211B98u);
        ctx->pc = 0x211B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211B90u;
        // 0x211b94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211B90u, 0x211B98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211B98u;
label_211b98:
    // 0x211b98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211b9c:
    // 0x211b9c: 0x26050073  addiu       $a1, $s0, 0x73
    ctx->pc = 0x211b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 115));
label_211ba0:
    // 0x211ba0: 0x260f809  jalr        $s3
label_211ba4:
    if (ctx->pc == 0x211BA4u) {
        ctx->pc = 0x211BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211BA0u;
        // 0x211ba4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211BA8u;
        goto label_211ba8;
    }
    ctx->pc = 0x211BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211BA8u);
        ctx->pc = 0x211BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211BA0u;
        // 0x211ba4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211BA0u, 0x211BA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211BA8u;
label_211ba8:
    // 0x211ba8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211bac:
    // 0x211bac: 0x26050074  addiu       $a1, $s0, 0x74
    ctx->pc = 0x211bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
label_211bb0:
    // 0x211bb0: 0x260f809  jalr        $s3
label_211bb4:
    if (ctx->pc == 0x211BB4u) {
        ctx->pc = 0x211BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211BB0u;
        // 0x211bb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211BB8u;
        goto label_211bb8;
    }
    ctx->pc = 0x211BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211BB8u);
        ctx->pc = 0x211BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211BB0u;
        // 0x211bb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211BB0u, 0x211BB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211BB8u;
label_211bb8:
    // 0x211bb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211bbc:
    // 0x211bbc: 0x26050075  addiu       $a1, $s0, 0x75
    ctx->pc = 0x211bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 117));
label_211bc0:
    // 0x211bc0: 0x260f809  jalr        $s3
label_211bc4:
    if (ctx->pc == 0x211BC4u) {
        ctx->pc = 0x211BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211BC0u;
        // 0x211bc4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211BC8u;
        goto label_211bc8;
    }
    ctx->pc = 0x211BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211BC8u);
        ctx->pc = 0x211BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211BC0u;
        // 0x211bc4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211BC0u, 0x211BC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211BC8u;
label_211bc8:
    // 0x211bc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211bcc:
    // 0x211bcc: 0x26050076  addiu       $a1, $s0, 0x76
    ctx->pc = 0x211bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 118));
label_211bd0:
    // 0x211bd0: 0x260f809  jalr        $s3
label_211bd4:
    if (ctx->pc == 0x211BD4u) {
        ctx->pc = 0x211BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211BD0u;
        // 0x211bd4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211BD8u;
        goto label_211bd8;
    }
    ctx->pc = 0x211BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211BD8u);
        ctx->pc = 0x211BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211BD0u;
        // 0x211bd4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211BD0u, 0x211BD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211BD8u;
label_211bd8:
    // 0x211bd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211bdc:
    // 0x211bdc: 0x26050077  addiu       $a1, $s0, 0x77
    ctx->pc = 0x211bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 119));
label_211be0:
    // 0x211be0: 0x260f809  jalr        $s3
label_211be4:
    if (ctx->pc == 0x211BE4u) {
        ctx->pc = 0x211BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211BE0u;
        // 0x211be4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211BE8u;
        goto label_211be8;
    }
    ctx->pc = 0x211BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211BE8u);
        ctx->pc = 0x211BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211BE0u;
        // 0x211be4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211BE0u, 0x211BE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211BE8u;
label_211be8:
    // 0x211be8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211bec:
    // 0x211bec: 0x26050078  addiu       $a1, $s0, 0x78
    ctx->pc = 0x211becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_211bf0:
    // 0x211bf0: 0x260f809  jalr        $s3
label_211bf4:
    if (ctx->pc == 0x211BF4u) {
        ctx->pc = 0x211BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211BF0u;
        // 0x211bf4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211BF8u;
        goto label_211bf8;
    }
    ctx->pc = 0x211BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211BF8u);
        ctx->pc = 0x211BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211BF0u;
        // 0x211bf4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211BF0u, 0x211BF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211BF8u;
label_211bf8:
    // 0x211bf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211bfc:
    // 0x211bfc: 0x26050079  addiu       $a1, $s0, 0x79
    ctx->pc = 0x211bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 121));
label_211c00:
    // 0x211c00: 0x260f809  jalr        $s3
label_211c04:
    if (ctx->pc == 0x211C04u) {
        ctx->pc = 0x211C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C00u;
        // 0x211c04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211C08u;
        goto label_211c08;
    }
    ctx->pc = 0x211C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211C08u);
        ctx->pc = 0x211C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C00u;
        // 0x211c04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211C00u, 0x211C08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211C08u;
label_211c08:
    // 0x211c08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211c0c:
    // 0x211c0c: 0x2605007a  addiu       $a1, $s0, 0x7A
    ctx->pc = 0x211c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 122));
label_211c10:
    // 0x211c10: 0x260f809  jalr        $s3
label_211c14:
    if (ctx->pc == 0x211C14u) {
        ctx->pc = 0x211C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C10u;
        // 0x211c14: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211C18u;
        goto label_211c18;
    }
    ctx->pc = 0x211C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211C18u);
        ctx->pc = 0x211C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C10u;
        // 0x211c14: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211C10u, 0x211C18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211C18u;
label_211c18:
    // 0x211c18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211c1c:
    // 0x211c1c: 0x26050084  addiu       $a1, $s0, 0x84
    ctx->pc = 0x211c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_211c20:
    // 0x211c20: 0x260f809  jalr        $s3
label_211c24:
    if (ctx->pc == 0x211C24u) {
        ctx->pc = 0x211C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C20u;
        // 0x211c24: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211C28u;
        goto label_211c28;
    }
    ctx->pc = 0x211C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211C28u);
        ctx->pc = 0x211C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C20u;
        // 0x211c24: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211C20u, 0x211C28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211C28u;
label_211c28:
    // 0x211c28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211c2c:
    // 0x211c2c: 0x26050082  addiu       $a1, $s0, 0x82
    ctx->pc = 0x211c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 130));
label_211c30:
    // 0x211c30: 0x260f809  jalr        $s3
label_211c34:
    if (ctx->pc == 0x211C34u) {
        ctx->pc = 0x211C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C30u;
        // 0x211c34: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211C38u;
        goto label_211c38;
    }
    ctx->pc = 0x211C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211C38u);
        ctx->pc = 0x211C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C30u;
        // 0x211c34: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211C30u, 0x211C38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211C38u;
label_211c38:
    // 0x211c38: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x211c38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_211c3c:
    // 0x211c3c: 0x2aa30002  slti        $v1, $s5, 0x2
    ctx->pc = 0x211c3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
label_211c40:
    // 0x211c40: 0x1460feee  bnez        $v1, . + 4 + (-0x112 << 2)
label_211c44:
    if (ctx->pc == 0x211C44u) {
        ctx->pc = 0x211C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C40u;
        // 0x211c44: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211C48u;
        goto label_211c48;
    }
    ctx->pc = 0x211C40u;
    {
        const bool branch_taken_0x211c40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C40u;
        // 0x211c44: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211c40) {
            ctx->pc = 0x2117FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x2117fc; return; }
        }
    }
    ctx->pc = 0x211C48u;
label_211c48:
    // 0x211c48: 0x26f03740  addiu       $s0, $s7, 0x3740
    ctx->pc = 0x211c48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 14144));
label_211c4c:
    // 0x211c4c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x211c4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211c50:
    // 0x211c50: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x211c50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_211c54:
    // 0x211c54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211c58:
    // 0x211c58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x211c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_211c5c:
    // 0x211c5c: 0x260f809  jalr        $s3
label_211c60:
    if (ctx->pc == 0x211C60u) {
        ctx->pc = 0x211C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C5Cu;
        // 0x211c60: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211C64u;
        goto label_211c64;
    }
    ctx->pc = 0x211C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211C64u);
        ctx->pc = 0x211C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C5Cu;
        // 0x211c60: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211C5Cu, 0x211C64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211C64u;
label_211c64:
    // 0x211c64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211c68:
    // 0x211c68: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x211c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_211c6c:
    // 0x211c6c: 0x260f809  jalr        $s3
label_211c70:
    if (ctx->pc == 0x211C70u) {
        ctx->pc = 0x211C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C6Cu;
        // 0x211c70: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211C74u;
        goto label_211c74;
    }
    ctx->pc = 0x211C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211C74u);
        ctx->pc = 0x211C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C6Cu;
        // 0x211c70: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211C6Cu, 0x211C74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211C74u;
label_211c74:
    // 0x211c74: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x211c74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_211c78:
    // 0x211c78: 0x2a230006  slti        $v1, $s1, 0x6
    ctx->pc = 0x211c78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_211c7c:
    // 0x211c7c: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_211c80:
    if (ctx->pc == 0x211C80u) {
        ctx->pc = 0x211C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C7Cu;
        // 0x211c80: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211C84u;
        goto label_211c84;
    }
    ctx->pc = 0x211C7Cu;
    {
        const bool branch_taken_0x211c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C7Cu;
        // 0x211c80: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211c7c) {
            ctx->pc = 0x211C54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211c54;
        }
    }
    ctx->pc = 0x211C84u;
label_211c84:
    // 0x211c84: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x211c84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_211c88:
    // 0x211c88: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x211c88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211c8c:
    // 0x211c8c: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x211c8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_211c90:
    // 0x211c90: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x211c90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211c94:
    // 0x211c94: 0x0  nop
    ctx->pc = 0x211c94u;
    // NOP
label_211c98:
    // 0x211c98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211c9c:
    // 0x211c9c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x211c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_211ca0:
    // 0x211ca0: 0x260f809  jalr        $s3
label_211ca4:
    if (ctx->pc == 0x211CA4u) {
        ctx->pc = 0x211CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211CA0u;
        // 0x211ca4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211CA8u;
        goto label_211ca8;
    }
    ctx->pc = 0x211CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211CA8u);
        ctx->pc = 0x211CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211CA0u;
        // 0x211ca4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211CA0u, 0x211CA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211CA8u;
label_211ca8:
    // 0x211ca8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211cac:
    // 0x211cac: 0x26a50001  addiu       $a1, $s5, 0x1
    ctx->pc = 0x211cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_211cb0:
    // 0x211cb0: 0x260f809  jalr        $s3
label_211cb4:
    if (ctx->pc == 0x211CB4u) {
        ctx->pc = 0x211CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211CB0u;
        // 0x211cb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211CB8u;
        goto label_211cb8;
    }
    ctx->pc = 0x211CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211CB8u);
        ctx->pc = 0x211CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211CB0u;
        // 0x211cb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211CB0u, 0x211CB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211CB8u;
label_211cb8:
    // 0x211cb8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x211cb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_211cbc:
    // 0x211cbc: 0x2a830005  slti        $v1, $s4, 0x5
    ctx->pc = 0x211cbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
label_211cc0:
    // 0x211cc0: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_211cc4:
    if (ctx->pc == 0x211CC4u) {
        ctx->pc = 0x211CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211CC0u;
        // 0x211cc4: 0x26b50002  addiu       $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211CC8u;
        goto label_211cc8;
    }
    ctx->pc = 0x211CC0u;
    {
        const bool branch_taken_0x211cc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211CC0u;
        // 0x211cc4: 0x26b50002  addiu       $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211cc0) {
            ctx->pc = 0x211C94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211c94;
        }
    }
    ctx->pc = 0x211CC8u;
label_211cc8:
    // 0x211cc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211ccc:
    // 0x211ccc: 0x2645000a  addiu       $a1, $s2, 0xA
    ctx->pc = 0x211cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
label_211cd0:
    // 0x211cd0: 0x260f809  jalr        $s3
label_211cd4:
    if (ctx->pc == 0x211CD4u) {
        ctx->pc = 0x211CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211CD0u;
        // 0x211cd4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211CD8u;
        goto label_211cd8;
    }
    ctx->pc = 0x211CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211CD8u);
        ctx->pc = 0x211CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211CD0u;
        // 0x211cd4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211CD0u, 0x211CD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211CD8u;
label_211cd8:
    // 0x211cd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211cdc:
    // 0x211cdc: 0x2645000b  addiu       $a1, $s2, 0xB
    ctx->pc = 0x211cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 11));
label_211ce0:
    // 0x211ce0: 0x260f809  jalr        $s3
label_211ce4:
    if (ctx->pc == 0x211CE4u) {
        ctx->pc = 0x211CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211CE0u;
        // 0x211ce4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211CE8u;
        goto label_211ce8;
    }
    ctx->pc = 0x211CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211CE8u);
        ctx->pc = 0x211CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211CE0u;
        // 0x211ce4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211CE0u, 0x211CE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211CE8u;
label_211ce8:
    // 0x211ce8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211cec:
    // 0x211cec: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x211cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_211cf0:
    // 0x211cf0: 0x260f809  jalr        $s3
label_211cf4:
    if (ctx->pc == 0x211CF4u) {
        ctx->pc = 0x211CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211CF0u;
        // 0x211cf4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211CF8u;
        goto label_211cf8;
    }
    ctx->pc = 0x211CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211CF8u);
        ctx->pc = 0x211CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211CF0u;
        // 0x211cf4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211CF0u, 0x211CF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211CF8u;
label_211cf8:
    // 0x211cf8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x211cf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_211cfc:
    // 0x211cfc: 0x2a230006  slti        $v1, $s1, 0x6
    ctx->pc = 0x211cfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_211d00:
    // 0x211d00: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
label_211d04:
    if (ctx->pc == 0x211D04u) {
        ctx->pc = 0x211D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D00u;
        // 0x211d04: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211D08u;
        goto label_211d08;
    }
    ctx->pc = 0x211D00u;
    {
        const bool branch_taken_0x211d00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D00u;
        // 0x211d04: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211d00) {
            ctx->pc = 0x211C8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211c8c;
        }
    }
    ctx->pc = 0x211D08u;
label_211d08:
    // 0x211d08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211d0c:
    // 0x211d0c: 0x260500a0  addiu       $a1, $s0, 0xA0
    ctx->pc = 0x211d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_211d10:
    // 0x211d10: 0x260f809  jalr        $s3
label_211d14:
    if (ctx->pc == 0x211D14u) {
        ctx->pc = 0x211D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D10u;
        // 0x211d14: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211D18u;
        goto label_211d18;
    }
    ctx->pc = 0x211D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211D18u);
        ctx->pc = 0x211D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D10u;
        // 0x211d14: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211D10u, 0x211D18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211D18u;
label_211d18:
    // 0x211d18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211d1c:
    // 0x211d1c: 0x260500a2  addiu       $a1, $s0, 0xA2
    ctx->pc = 0x211d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 162));
label_211d20:
    // 0x211d20: 0x260f809  jalr        $s3
label_211d24:
    if (ctx->pc == 0x211D24u) {
        ctx->pc = 0x211D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D20u;
        // 0x211d24: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211D28u;
        goto label_211d28;
    }
    ctx->pc = 0x211D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211D28u);
        ctx->pc = 0x211D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D20u;
        // 0x211d24: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211D20u, 0x211D28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211D28u;
label_211d28:
    // 0x211d28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211d2c:
    // 0x211d2c: 0x260500a4  addiu       $a1, $s0, 0xA4
    ctx->pc = 0x211d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
label_211d30:
    // 0x211d30: 0x260f809  jalr        $s3
label_211d34:
    if (ctx->pc == 0x211D34u) {
        ctx->pc = 0x211D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D30u;
        // 0x211d34: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211D38u;
        goto label_211d38;
    }
    ctx->pc = 0x211D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211D38u);
        ctx->pc = 0x211D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D30u;
        // 0x211d34: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211D30u, 0x211D38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211D38u;
label_211d38:
    // 0x211d38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211d3c:
    // 0x211d3c: 0x260500a6  addiu       $a1, $s0, 0xA6
    ctx->pc = 0x211d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 166));
label_211d40:
    // 0x211d40: 0x260f809  jalr        $s3
label_211d44:
    if (ctx->pc == 0x211D44u) {
        ctx->pc = 0x211D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D40u;
        // 0x211d44: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211D48u;
        goto label_211d48;
    }
    ctx->pc = 0x211D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211D48u);
        ctx->pc = 0x211D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D40u;
        // 0x211d44: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211D40u, 0x211D48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211D48u;
label_211d48:
    // 0x211d48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211d4c:
    // 0x211d4c: 0x260500a8  addiu       $a1, $s0, 0xA8
    ctx->pc = 0x211d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
label_211d50:
    // 0x211d50: 0x260f809  jalr        $s3
label_211d54:
    if (ctx->pc == 0x211D54u) {
        ctx->pc = 0x211D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D50u;
        // 0x211d54: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211D58u;
        goto label_211d58;
    }
    ctx->pc = 0x211D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211D58u);
        ctx->pc = 0x211D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D50u;
        // 0x211d54: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211D50u, 0x211D58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211D58u;
label_211d58:
    // 0x211d58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211d5c:
    // 0x211d5c: 0x260500aa  addiu       $a1, $s0, 0xAA
    ctx->pc = 0x211d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 170));
label_211d60:
    // 0x211d60: 0x260f809  jalr        $s3
label_211d64:
    if (ctx->pc == 0x211D64u) {
        ctx->pc = 0x211D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D60u;
        // 0x211d64: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211D68u;
        goto label_211d68;
    }
    ctx->pc = 0x211D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211D68u);
        ctx->pc = 0x211D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D60u;
        // 0x211d64: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211D60u, 0x211D68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211D68u;
label_211d68:
    // 0x211d68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211d6c:
    // 0x211d6c: 0x260500ac  addiu       $a1, $s0, 0xAC
    ctx->pc = 0x211d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
label_211d70:
    // 0x211d70: 0x260f809  jalr        $s3
label_211d74:
    if (ctx->pc == 0x211D74u) {
        ctx->pc = 0x211D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D70u;
        // 0x211d74: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211D78u;
        goto label_211d78;
    }
    ctx->pc = 0x211D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211D78u);
        ctx->pc = 0x211D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D70u;
        // 0x211d74: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211D70u, 0x211D78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211D78u;
label_211d78:
    // 0x211d78: 0x260500ae  addiu       $a1, $s0, 0xAE
    ctx->pc = 0x211d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 174));
label_211d7c:
    // 0x211d7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211d80:
    // 0x211d80: 0x260f809  jalr        $s3
label_211d84:
    if (ctx->pc == 0x211D84u) {
        ctx->pc = 0x211D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D80u;
        // 0x211d84: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211D88u;
        goto label_211d88;
    }
    ctx->pc = 0x211D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211D88u);
        ctx->pc = 0x211D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D80u;
        // 0x211d84: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211D80u, 0x211D88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211D88u;
label_211d88:
    // 0x211d88: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x211d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_211d8c:
    // 0x211d8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x211d8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211d90:
    // 0x211d90: 0x34210810  ori         $at, $at, 0x810
    ctx->pc = 0x211d90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2064);
label_211d94:
    // 0x211d94: 0x2c18021  addu        $s0, $s6, $at
    ctx->pc = 0x211d94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 1)));
label_211d98:
    // 0x211d98: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x211d98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_211d9c:
    // 0x211d9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211da0:
    // 0x211da0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x211da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_211da4:
    // 0x211da4: 0x260f809  jalr        $s3
label_211da8:
    if (ctx->pc == 0x211DA8u) {
        ctx->pc = 0x211DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DA4u;
        // 0x211da8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211DACu;
        goto label_211dac;
    }
    ctx->pc = 0x211DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211DACu);
        ctx->pc = 0x211DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DA4u;
        // 0x211da8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211DA4u, 0x211DACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211DACu;
label_211dac:
    // 0x211dac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211db0:
    // 0x211db0: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x211db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_211db4:
    // 0x211db4: 0x260f809  jalr        $s3
label_211db8:
    if (ctx->pc == 0x211DB8u) {
        ctx->pc = 0x211DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DB4u;
        // 0x211db8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211DBCu;
        goto label_211dbc;
    }
    ctx->pc = 0x211DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211DBCu);
        ctx->pc = 0x211DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DB4u;
        // 0x211db8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211DB4u, 0x211DBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211DBCu;
label_211dbc:
    // 0x211dbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211dc0:
    // 0x211dc0: 0x26450002  addiu       $a1, $s2, 0x2
    ctx->pc = 0x211dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_211dc4:
    // 0x211dc4: 0x260f809  jalr        $s3
label_211dc8:
    if (ctx->pc == 0x211DC8u) {
        ctx->pc = 0x211DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DC4u;
        // 0x211dc8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211DCCu;
        goto label_211dcc;
    }
    ctx->pc = 0x211DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211DCCu);
        ctx->pc = 0x211DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DC4u;
        // 0x211dc8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211DC4u, 0x211DCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211DCCu;
label_211dcc:
    // 0x211dcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211dd0:
    // 0x211dd0: 0x26450003  addiu       $a1, $s2, 0x3
    ctx->pc = 0x211dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
label_211dd4:
    // 0x211dd4: 0x260f809  jalr        $s3
label_211dd8:
    if (ctx->pc == 0x211DD8u) {
        ctx->pc = 0x211DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DD4u;
        // 0x211dd8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211DDCu;
        goto label_211ddc;
    }
    ctx->pc = 0x211DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211DDCu);
        ctx->pc = 0x211DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DD4u;
        // 0x211dd8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211DD4u, 0x211DDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211DDCu;
label_211ddc:
    // 0x211ddc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x211ddcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_211de0:
    // 0x211de0: 0x2a23000c  slti        $v1, $s1, 0xC
    ctx->pc = 0x211de0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)12) ? 1 : 0);
label_211de4:
    // 0x211de4: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_211de8:
    if (ctx->pc == 0x211DE8u) {
        ctx->pc = 0x211DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DE4u;
        // 0x211de8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211DECu;
        goto label_211dec;
    }
    ctx->pc = 0x211DE4u;
    {
        const bool branch_taken_0x211de4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DE4u;
        // 0x211de8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211de4) {
            ctx->pc = 0x211D9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211d9c;
        }
    }
    ctx->pc = 0x211DECu;
label_211dec:
    // 0x211dec: 0x26120030  addiu       $s2, $s0, 0x30
    ctx->pc = 0x211decu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_211df0:
    // 0x211df0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x211df0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211df4:
    // 0x211df4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211df8:
    // 0x211df8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x211df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_211dfc:
    // 0x211dfc: 0x260f809  jalr        $s3
label_211e00:
    if (ctx->pc == 0x211E00u) {
        ctx->pc = 0x211E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DFCu;
        // 0x211e00: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211E04u;
        goto label_211e04;
    }
    ctx->pc = 0x211DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211E04u);
        ctx->pc = 0x211E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DFCu;
        // 0x211e00: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211DFCu, 0x211E04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211E04u;
label_211e04:
    // 0x211e04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211e08:
    // 0x211e08: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x211e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_211e0c:
    // 0x211e0c: 0x260f809  jalr        $s3
label_211e10:
    if (ctx->pc == 0x211E10u) {
        ctx->pc = 0x211E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E0Cu;
        // 0x211e10: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211E14u;
        goto label_211e14;
    }
    ctx->pc = 0x211E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211E14u);
        ctx->pc = 0x211E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E0Cu;
        // 0x211e10: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211E0Cu, 0x211E14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211E14u;
label_211e14:
    // 0x211e14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211e18:
    // 0x211e18: 0x26450002  addiu       $a1, $s2, 0x2
    ctx->pc = 0x211e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_211e1c:
    // 0x211e1c: 0x260f809  jalr        $s3
label_211e20:
    if (ctx->pc == 0x211E20u) {
        ctx->pc = 0x211E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E1Cu;
        // 0x211e20: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211E24u;
        goto label_211e24;
    }
    ctx->pc = 0x211E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211E24u);
        ctx->pc = 0x211E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E1Cu;
        // 0x211e20: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211E1Cu, 0x211E24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211E24u;
label_211e24:
    // 0x211e24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211e28:
    // 0x211e28: 0x26450003  addiu       $a1, $s2, 0x3
    ctx->pc = 0x211e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
label_211e2c:
    // 0x211e2c: 0x260f809  jalr        $s3
label_211e30:
    if (ctx->pc == 0x211E30u) {
        ctx->pc = 0x211E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E2Cu;
        // 0x211e30: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211E34u;
        goto label_211e34;
    }
    ctx->pc = 0x211E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211E34u);
        ctx->pc = 0x211E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E2Cu;
        // 0x211e30: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211E2Cu, 0x211E34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211E34u;
label_211e34:
    // 0x211e34: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x211e34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_211e38:
    // 0x211e38: 0x2a23000c  slti        $v1, $s1, 0xC
    ctx->pc = 0x211e38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)12) ? 1 : 0);
label_211e3c:
    // 0x211e3c: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_211e40:
    if (ctx->pc == 0x211E40u) {
        ctx->pc = 0x211E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E3Cu;
        // 0x211e40: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211E44u;
        goto label_211e44;
    }
    ctx->pc = 0x211E3Cu;
    {
        const bool branch_taken_0x211e3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E3Cu;
        // 0x211e40: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211e3c) {
            ctx->pc = 0x211DF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211df4;
        }
    }
    ctx->pc = 0x211E44u;
label_211e44:
    // 0x211e44: 0x26120660  addiu       $s2, $s0, 0x660
    ctx->pc = 0x211e44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1632));
label_211e48:
    // 0x211e48: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x211e48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211e4c:
    // 0x211e4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211e50:
    // 0x211e50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x211e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_211e54:
    // 0x211e54: 0x260f809  jalr        $s3
label_211e58:
    if (ctx->pc == 0x211E58u) {
        ctx->pc = 0x211E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E54u;
        // 0x211e58: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211E5Cu;
        goto label_211e5c;
    }
    ctx->pc = 0x211E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211E5Cu);
        ctx->pc = 0x211E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E54u;
        // 0x211e58: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211E54u, 0x211E5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211E5Cu;
label_211e5c:
    // 0x211e5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211e60:
    // 0x211e60: 0x26450002  addiu       $a1, $s2, 0x2
    ctx->pc = 0x211e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_211e64:
    // 0x211e64: 0x260f809  jalr        $s3
label_211e68:
    if (ctx->pc == 0x211E68u) {
        ctx->pc = 0x211E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E64u;
        // 0x211e68: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211E6Cu;
        goto label_211e6c;
    }
    ctx->pc = 0x211E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211E6Cu);
        ctx->pc = 0x211E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E64u;
        // 0x211e68: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211E64u, 0x211E6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211E6Cu;
label_211e6c:
    // 0x211e6c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x211e6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_211e70:
    // 0x211e70: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x211e70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
label_211e74:
    // 0x211e74: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_211e78:
    if (ctx->pc == 0x211E78u) {
        ctx->pc = 0x211E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E74u;
        // 0x211e78: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211E7Cu;
        goto label_211e7c;
    }
    ctx->pc = 0x211E74u;
    {
        const bool branch_taken_0x211e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E74u;
        // 0x211e78: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211e74) {
            ctx->pc = 0x211E4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211e4c;
        }
    }
    ctx->pc = 0x211E7Cu;
label_211e7c:
    // 0x211e7c: 0x261207c4  addiu       $s2, $s0, 0x7C4
    ctx->pc = 0x211e7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1988));
label_211e80:
    // 0x211e80: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x211e80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211e84:
    // 0x211e84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211e88:
    // 0x211e88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x211e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_211e8c:
    // 0x211e8c: 0x260f809  jalr        $s3
label_211e90:
    if (ctx->pc == 0x211E90u) {
        ctx->pc = 0x211E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E8Cu;
        // 0x211e90: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211E94u;
        goto label_211e94;
    }
    ctx->pc = 0x211E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211E94u);
        ctx->pc = 0x211E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E8Cu;
        // 0x211e90: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211E8Cu, 0x211E94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211E94u;
label_211e94:
    // 0x211e94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211e98:
    // 0x211e98: 0x26450002  addiu       $a1, $s2, 0x2
    ctx->pc = 0x211e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_211e9c:
    // 0x211e9c: 0x260f809  jalr        $s3
label_211ea0:
    if (ctx->pc == 0x211EA0u) {
        ctx->pc = 0x211EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E9Cu;
        // 0x211ea0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211EA4u;
        goto label_211ea4;
    }
    ctx->pc = 0x211E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211EA4u);
        ctx->pc = 0x211EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E9Cu;
        // 0x211ea0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211E9Cu, 0x211EA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211EA4u;
label_211ea4:
    // 0x211ea4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x211ea4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_211ea8:
    // 0x211ea8: 0x1a20fff6  blez        $s1, . + 4 + (-0xA << 2)
label_211eac:
    if (ctx->pc == 0x211EACu) {
        ctx->pc = 0x211EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211EA8u;
        // 0x211eac: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211EB0u;
        goto label_211eb0;
    }
    ctx->pc = 0x211EA8u;
    {
        const bool branch_taken_0x211ea8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x211EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211EA8u;
        // 0x211eac: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211ea8) {
            ctx->pc = 0x211E84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211e84;
        }
    }
    ctx->pc = 0x211EB0u;
label_211eb0:
    // 0x211eb0: 0x26110060  addiu       $s1, $s0, 0x60
    ctx->pc = 0x211eb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_211eb4:
    // 0x211eb4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x211eb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211eb8:
    // 0x211eb8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x211eb8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211ebc:
    // 0x211ebc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x211ebcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211ec0:
    // 0x211ec0: 0x2322821  addu        $a1, $s1, $s2
    ctx->pc = 0x211ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_211ec4:
    // 0x211ec4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211ec8:
    // 0x211ec8: 0x260f809  jalr        $s3
label_211ecc:
    if (ctx->pc == 0x211ECCu) {
        ctx->pc = 0x211ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211EC8u;
        // 0x211ecc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211ED0u;
        goto label_211ed0;
    }
    ctx->pc = 0x211EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211ED0u);
        ctx->pc = 0x211ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211EC8u;
        // 0x211ecc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211EC8u, 0x211ED0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211ED0u;
label_211ed0:
    // 0x211ed0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x211ed0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_211ed4:
    // 0x211ed4: 0x2aa30005  slti        $v1, $s5, 0x5
    ctx->pc = 0x211ed4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
label_211ed8:
    // 0x211ed8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_211edc:
    if (ctx->pc == 0x211EDCu) {
        ctx->pc = 0x211EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211ED8u;
        // 0x211edc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211EE0u;
        goto label_211ee0;
    }
    ctx->pc = 0x211ED8u;
    {
        const bool branch_taken_0x211ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211ED8u;
        // 0x211edc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211ed8) {
            ctx->pc = 0x211EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211ec0;
        }
    }
    ctx->pc = 0x211EE0u;
label_211ee0:
    // 0x211ee0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211ee4:
    // 0x211ee4: 0x26250014  addiu       $a1, $s1, 0x14
    ctx->pc = 0x211ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_211ee8:
    // 0x211ee8: 0x260f809  jalr        $s3
label_211eec:
    if (ctx->pc == 0x211EECu) {
        ctx->pc = 0x211EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211EE8u;
        // 0x211eec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211EF0u;
        goto label_211ef0;
    }
    ctx->pc = 0x211EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211EF0u);
        ctx->pc = 0x211EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211EE8u;
        // 0x211eec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211EE8u, 0x211EF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211EF0u;
label_211ef0:
    // 0x211ef0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x211ef0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_211ef4:
    // 0x211ef4: 0x2a830040  slti        $v1, $s4, 0x40
    ctx->pc = 0x211ef4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)64) ? 1 : 0);
label_211ef8:
    // 0x211ef8: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_211efc:
    if (ctx->pc == 0x211EFCu) {
        ctx->pc = 0x211EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211EF8u;
        // 0x211efc: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211F00u;
        goto label_211f00;
    }
    ctx->pc = 0x211EF8u;
    {
        const bool branch_taken_0x211ef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211EF8u;
        // 0x211efc: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211ef8) {
            ctx->pc = 0x211EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211eb8;
        }
    }
    ctx->pc = 0x211F00u;
label_211f00:
    // 0x211f00: 0x261106bc  addiu       $s1, $s0, 0x6BC
    ctx->pc = 0x211f00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1724));
label_211f04:
    // 0x211f04: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x211f04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211f08:
    // 0x211f08: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x211f08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_211f0c:
    // 0x211f0c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x211f0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211f10:
    // 0x211f10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211f14:
    // 0x211f14: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x211f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_211f18:
    // 0x211f18: 0x260f809  jalr        $s3
label_211f1c:
    if (ctx->pc == 0x211F1Cu) {
        ctx->pc = 0x211F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F18u;
        // 0x211f1c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211F20u;
        goto label_211f20;
    }
    ctx->pc = 0x211F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211F20u);
        ctx->pc = 0x211F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F18u;
        // 0x211f1c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211F18u, 0x211F20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211F20u;
label_211f20:
    // 0x211f20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211f24:
    // 0x211f24: 0x26a50002  addiu       $a1, $s5, 0x2
    ctx->pc = 0x211f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
label_211f28:
    // 0x211f28: 0x260f809  jalr        $s3
label_211f2c:
    if (ctx->pc == 0x211F2Cu) {
        ctx->pc = 0x211F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F28u;
        // 0x211f2c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211F30u;
        goto label_211f30;
    }
    ctx->pc = 0x211F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211F30u);
        ctx->pc = 0x211F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F28u;
        // 0x211f2c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211F28u, 0x211F30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211F30u;
label_211f30:
    // 0x211f30: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x211f30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_211f34:
    // 0x211f34: 0x1a40fff6  blez        $s2, . + 4 + (-0xA << 2)
label_211f38:
    if (ctx->pc == 0x211F38u) {
        ctx->pc = 0x211F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F34u;
        // 0x211f38: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211F3Cu;
        goto label_211f3c;
    }
    ctx->pc = 0x211F34u;
    {
        const bool branch_taken_0x211f34 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x211F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F34u;
        // 0x211f38: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211f34) {
            ctx->pc = 0x211F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211f10;
        }
    }
    ctx->pc = 0x211F3Cu;
label_211f3c:
    // 0x211f3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211f40:
    // 0x211f40: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x211f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_211f44:
    // 0x211f44: 0x260f809  jalr        $s3
label_211f48:
    if (ctx->pc == 0x211F48u) {
        ctx->pc = 0x211F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F44u;
        // 0x211f48: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211F4Cu;
        goto label_211f4c;
    }
    ctx->pc = 0x211F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211F4Cu);
        ctx->pc = 0x211F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F44u;
        // 0x211f48: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211F44u, 0x211F4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211F4Cu;
label_211f4c:
    // 0x211f4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211f50:
    // 0x211f50: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x211f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_211f54:
    // 0x211f54: 0x260f809  jalr        $s3
label_211f58:
    if (ctx->pc == 0x211F58u) {
        ctx->pc = 0x211F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F54u;
        // 0x211f58: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211F5Cu;
        goto label_211f5c;
    }
    ctx->pc = 0x211F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211F5Cu);
        ctx->pc = 0x211F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F54u;
        // 0x211f58: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211F54u, 0x211F5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211F5Cu;
label_211f5c:
    // 0x211f5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211f60:
    // 0x211f60: 0x2625000a  addiu       $a1, $s1, 0xA
    ctx->pc = 0x211f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
label_211f64:
    // 0x211f64: 0x260f809  jalr        $s3
label_211f68:
    if (ctx->pc == 0x211F68u) {
        ctx->pc = 0x211F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F64u;
        // 0x211f68: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211F6Cu;
        goto label_211f6c;
    }
    ctx->pc = 0x211F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211F6Cu);
        ctx->pc = 0x211F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F64u;
        // 0x211f68: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211F64u, 0x211F6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211F6Cu;
label_211f6c:
    // 0x211f6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211f70:
    // 0x211f70: 0x2625000b  addiu       $a1, $s1, 0xB
    ctx->pc = 0x211f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 11));
label_211f74:
    // 0x211f74: 0x260f809  jalr        $s3
label_211f78:
    if (ctx->pc == 0x211F78u) {
        ctx->pc = 0x211F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F74u;
        // 0x211f78: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211F7Cu;
        goto label_211f7c;
    }
    ctx->pc = 0x211F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211F7Cu);
        ctx->pc = 0x211F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F74u;
        // 0x211f78: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211F74u, 0x211F7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211F7Cu;
label_211f7c:
    // 0x211f7c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x211f7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211f80:
    // 0x211f80: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x211f80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211f84:
    // 0x211f84: 0x0  nop
    ctx->pc = 0x211f84u;
    // NOP
label_211f88:
    // 0x211f88: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x211f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_211f8c:
    // 0x211f8c: 0x2465000c  addiu       $a1, $v1, 0xC
    ctx->pc = 0x211f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_211f90:
    // 0x211f90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211f94:
    // 0x211f94: 0x260f809  jalr        $s3
label_211f98:
    if (ctx->pc == 0x211F98u) {
        ctx->pc = 0x211F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F94u;
        // 0x211f98: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211F9Cu;
        goto label_211f9c;
    }
    ctx->pc = 0x211F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211F9Cu);
        ctx->pc = 0x211F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F94u;
        // 0x211f98: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211F94u, 0x211F9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211F9Cu;
label_211f9c:
    // 0x211f9c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x211f9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_211fa0:
    // 0x211fa0: 0x2aa30002  slti        $v1, $s5, 0x2
    ctx->pc = 0x211fa0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
label_211fa4:
    // 0x211fa4: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_211fa8:
    if (ctx->pc == 0x211FA8u) {
        ctx->pc = 0x211FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211FA4u;
        // 0x211fa8: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211FACu;
        goto label_211fac;
    }
    ctx->pc = 0x211FA4u;
    {
        const bool branch_taken_0x211fa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211FA4u;
        // 0x211fa8: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211fa4) {
            ctx->pc = 0x211F84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211f84;
        }
    }
    ctx->pc = 0x211FACu;
label_211fac:
    // 0x211fac: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x211facu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_211fb0:
    // 0x211fb0: 0x2a830010  slti        $v1, $s4, 0x10
    ctx->pc = 0x211fb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)16) ? 1 : 0);
label_211fb4:
    // 0x211fb4: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
label_211fb8:
    if (ctx->pc == 0x211FB8u) {
        ctx->pc = 0x211FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211FB4u;
        // 0x211fb8: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211FBCu;
        goto label_211fbc;
    }
    ctx->pc = 0x211FB4u;
    {
        const bool branch_taken_0x211fb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211FB4u;
        // 0x211fb8: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211fb4) {
            ctx->pc = 0x211F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211f08;
        }
    }
    ctx->pc = 0x211FBCu;
label_211fbc:
    // 0x211fbc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x211fbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211fc0:
    // 0x211fc0: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x211fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_211fc4:
    // 0x211fc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211fc8:
    // 0x211fc8: 0x24650680  addiu       $a1, $v1, 0x680
    ctx->pc = 0x211fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1664));
label_211fcc:
    // 0x211fcc: 0x260f809  jalr        $s3
label_211fd0:
    if (ctx->pc == 0x211FD0u) {
        ctx->pc = 0x211FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211FCCu;
        // 0x211fd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211FD4u;
        goto label_211fd4;
    }
    ctx->pc = 0x211FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211FD4u);
        ctx->pc = 0x211FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211FCCu;
        // 0x211fd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211FCCu, 0x211FD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211FD4u;
label_211fd4:
    // 0x211fd4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x211fd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_211fd8:
    // 0x211fd8: 0x2a230030  slti        $v1, $s1, 0x30
    ctx->pc = 0x211fd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)48) ? 1 : 0);
label_211fdc:
    // 0x211fdc: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_211fe0:
    if (ctx->pc == 0x211FE0u) {
        ctx->pc = 0x211FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211FDCu;
        // 0x211fe0: 0x2111821  addu        $v1, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211FE4u;
        goto label_211fe4;
    }
    ctx->pc = 0x211FDCu;
    {
        const bool branch_taken_0x211fdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211FDCu;
        // 0x211fe0: 0x2111821  addu        $v1, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211fdc) {
            ctx->pc = 0x211FC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211fc4;
        }
    }
    ctx->pc = 0x211FE4u;
label_211fe4:
    // 0x211fe4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x211fe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211fe8:
    // 0x211fe8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x211fe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211fec:
    // 0x211fec: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x211fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_211ff0:
    // 0x211ff0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211ff4:
    // 0x211ff4: 0x246506b0  addiu       $a1, $v1, 0x6B0
    ctx->pc = 0x211ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1712));
label_211ff8:
    // 0x211ff8: 0x260f809  jalr        $s3
label_211ffc:
    if (ctx->pc == 0x211FFCu) {
        ctx->pc = 0x211FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211FF8u;
        // 0x211ffc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212000u;
        goto label_212000;
    }
    ctx->pc = 0x211FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x212000u);
        ctx->pc = 0x211FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211FF8u;
        // 0x211ffc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211FF8u, 0x212000u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x212000u;
label_212000:
    // 0x212000: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x212000u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_212004:
    // 0x212004: 0x2a430003  slti        $v1, $s2, 0x3
    ctx->pc = 0x212004u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
label_212008:
    // 0x212008: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_21200c:
    if (ctx->pc == 0x21200Cu) {
        ctx->pc = 0x21200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212008u;
        // 0x21200c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212010u;
        goto label_212010;
    }
    ctx->pc = 0x212008u;
    {
        const bool branch_taken_0x212008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212008u;
        // 0x21200c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212008) {
            ctx->pc = 0x211FECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211fec;
        }
    }
    ctx->pc = 0x212010u;
label_212010:
    // 0x212010: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x212010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_212014:
    // 0x212014: 0x260507bc  addiu       $a1, $s0, 0x7BC
    ctx->pc = 0x212014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1980));
label_212018:
    // 0x212018: 0x260f809  jalr        $s3
label_21201c:
    if (ctx->pc == 0x21201Cu) {
        ctx->pc = 0x21201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212018u;
        // 0x21201c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212020u;
        goto label_212020;
    }
    ctx->pc = 0x212018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x212020u);
        ctx->pc = 0x21201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212018u;
        // 0x21201c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212018u, 0x212020u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x212020u;
label_212020:
    // 0x212020: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x212020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_212024:
    // 0x212024: 0x260507bd  addiu       $a1, $s0, 0x7BD
    ctx->pc = 0x212024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1981));
label_212028:
    // 0x212028: 0x260f809  jalr        $s3
label_21202c:
    if (ctx->pc == 0x21202Cu) {
        ctx->pc = 0x21202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212028u;
        // 0x21202c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212030u;
        goto label_212030;
    }
    ctx->pc = 0x212028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x212030u);
        ctx->pc = 0x21202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212028u;
        // 0x21202c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212028u, 0x212030u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x212030u;
label_212030:
    // 0x212030: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x212030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_212034:
    // 0x212034: 0x260507be  addiu       $a1, $s0, 0x7BE
    ctx->pc = 0x212034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1982));
label_212038:
    // 0x212038: 0x260f809  jalr        $s3
label_21203c:
    if (ctx->pc == 0x21203Cu) {
        ctx->pc = 0x21203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212038u;
        // 0x21203c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212040u;
        goto label_212040;
    }
    ctx->pc = 0x212038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x212040u);
        ctx->pc = 0x21203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212038u;
        // 0x21203c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212038u, 0x212040u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x212040u;
label_212040:
    // 0x212040: 0x260507c0  addiu       $a1, $s0, 0x7C0
    ctx->pc = 0x212040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1984));
label_212044:
    // 0x212044: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x212044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_212048:
    // 0x212048: 0x260f809  jalr        $s3
label_21204c:
    if (ctx->pc == 0x21204Cu) {
        ctx->pc = 0x21204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212048u;
        // 0x21204c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212050u;
        goto label_212050;
    }
    ctx->pc = 0x212048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x212050u);
        ctx->pc = 0x21204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212048u;
        // 0x21204c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212048u, 0x212050u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x212050u;
label_212050:
    // 0x212050: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x212050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_212054:
    // 0x212054: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x212054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_212058:
    // 0x212058: 0x34210fe0  ori         $at, $at, 0xFE0
    ctx->pc = 0x212058u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4064);
label_21205c:
    // 0x21205c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x21205cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_212060:
    // 0x212060: 0x2c12821  addu        $a1, $s6, $at
    ctx->pc = 0x212060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 1)));
label_212064:
    // 0x212064: 0xc084878  jal         func_2121E0
label_212068:
    if (ctx->pc == 0x212068u) {
        ctx->pc = 0x212068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212064u;
        // 0x212068: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21206Cu;
        goto label_21206c;
    }
    ctx->pc = 0x212064u;
    SET_GPR_U32(ctx, 31, 0x21206Cu);
    ctx->pc = 0x212068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212064u;
    // 0x212068: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2121E0u;
    goto label_2121e0;
    ctx->pc = 0x21206Cu;
label_21206c:
    // 0x21206c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x21206cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_212070:
    // 0x212070: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x212070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212074:
    // 0x212074: 0x342115d0  ori         $at, $at, 0x15D0
    ctx->pc = 0x212074u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5584);
label_212078:
    // 0x212078: 0x2c18821  addu        $s1, $s6, $at
    ctx->pc = 0x212078u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 1)));
label_21207c:
    // 0x21207c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x21207cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212080:
    // 0x212080: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x212080u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212084:
    // 0x212084: 0x0  nop
    ctx->pc = 0x212084u;
    // NOP
label_212088:
    // 0x212088: 0x2322821  addu        $a1, $s1, $s2
    ctx->pc = 0x212088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_21208c:
    // 0x21208c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21208cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_212090:
    // 0x212090: 0x260f809  jalr        $s3
label_212094:
    if (ctx->pc == 0x212094u) {
        ctx->pc = 0x212094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212090u;
        // 0x212094: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212098u;
        goto label_212098;
    }
    ctx->pc = 0x212090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x212098u);
        ctx->pc = 0x212094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212090u;
        // 0x212094: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212090u, 0x212098u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x212098u;
label_212098:
    // 0x212098: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x212098u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_21209c:
    // 0x21209c: 0x2a830009  slti        $v1, $s4, 0x9
    ctx->pc = 0x21209cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
label_2120a0:
    // 0x2120a0: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_2120a4:
    if (ctx->pc == 0x2120A4u) {
        ctx->pc = 0x2120A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2120A0u;
        // 0x2120a4: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2120A8u;
        goto label_2120a8;
    }
    ctx->pc = 0x2120A0u;
    {
        const bool branch_taken_0x2120a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2120A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2120A0u;
        // 0x2120a4: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2120a0) {
            ctx->pc = 0x212084u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212084;
        }
    }
    ctx->pc = 0x2120A8u;
label_2120a8:
    // 0x2120a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2120a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2120ac:
    // 0x2120ac: 0x26250012  addiu       $a1, $s1, 0x12
    ctx->pc = 0x2120acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 18));
label_2120b0:
    // 0x2120b0: 0x260f809  jalr        $s3
label_2120b4:
    if (ctx->pc == 0x2120B4u) {
        ctx->pc = 0x2120B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2120B0u;
        // 0x2120b4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2120B8u;
        goto label_2120b8;
    }
    ctx->pc = 0x2120B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2120B8u);
        ctx->pc = 0x2120B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2120B0u;
        // 0x2120b4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2120B0u, 0x2120B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2120B8u;
label_2120b8:
    // 0x2120b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2120b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2120bc:
    // 0x2120bc: 0x26250014  addiu       $a1, $s1, 0x14
    ctx->pc = 0x2120bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_2120c0:
    // 0x2120c0: 0x260f809  jalr        $s3
label_2120c4:
    if (ctx->pc == 0x2120C4u) {
        ctx->pc = 0x2120C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2120C0u;
        // 0x2120c4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2120C8u;
        goto label_2120c8;
    }
    ctx->pc = 0x2120C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2120C8u);
        ctx->pc = 0x2120C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2120C0u;
        // 0x2120c4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2120C0u, 0x2120C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2120C8u;
label_2120c8:
    // 0x2120c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2120c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2120cc:
    // 0x2120cc: 0x26250016  addiu       $a1, $s1, 0x16
    ctx->pc = 0x2120ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 22));
label_2120d0:
    // 0x2120d0: 0x260f809  jalr        $s3
label_2120d4:
    if (ctx->pc == 0x2120D4u) {
        ctx->pc = 0x2120D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2120D0u;
        // 0x2120d4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2120D8u;
        goto label_2120d8;
    }
    ctx->pc = 0x2120D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2120D8u);
        ctx->pc = 0x2120D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2120D0u;
        // 0x2120d4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2120D0u, 0x2120D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2120D8u;
label_2120d8:
    // 0x2120d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2120d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2120dc:
    // 0x2120dc: 0x2625001a  addiu       $a1, $s1, 0x1A
    ctx->pc = 0x2120dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 26));
label_2120e0:
    // 0x2120e0: 0x260f809  jalr        $s3
label_2120e4:
    if (ctx->pc == 0x2120E4u) {
        ctx->pc = 0x2120E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2120E0u;
        // 0x2120e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2120E8u;
        goto label_2120e8;
    }
    ctx->pc = 0x2120E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2120E8u);
        ctx->pc = 0x2120E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2120E0u;
        // 0x2120e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2120E0u, 0x2120E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2120E8u;
label_2120e8:
    // 0x2120e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2120e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2120ec:
    // 0x2120ec: 0x2625001b  addiu       $a1, $s1, 0x1B
    ctx->pc = 0x2120ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 27));
label_2120f0:
    // 0x2120f0: 0x260f809  jalr        $s3
label_2120f4:
    if (ctx->pc == 0x2120F4u) {
        ctx->pc = 0x2120F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2120F0u;
        // 0x2120f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2120F8u;
        goto label_2120f8;
    }
    ctx->pc = 0x2120F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2120F8u);
        ctx->pc = 0x2120F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2120F0u;
        // 0x2120f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2120F0u, 0x2120F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2120F8u;
label_2120f8:
    // 0x2120f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2120f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2120fc:
    // 0x2120fc: 0x2625001c  addiu       $a1, $s1, 0x1C
    ctx->pc = 0x2120fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_212100:
    // 0x212100: 0x260f809  jalr        $s3
label_212104:
    if (ctx->pc == 0x212104u) {
        ctx->pc = 0x212104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212100u;
        // 0x212104: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212108u;
        goto label_212108;
    }
    ctx->pc = 0x212100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x212108u);
        ctx->pc = 0x212104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212100u;
        // 0x212104: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212100u, 0x212108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x212108u;
label_212108:
    // 0x212108: 0x26320020  addiu       $s2, $s1, 0x20
    ctx->pc = 0x212108u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_21210c:
    // 0x21210c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21210cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_212110:
    // 0x212110: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x212110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_212114:
    // 0x212114: 0x260f809  jalr        $s3
label_212118:
    if (ctx->pc == 0x212118u) {
        ctx->pc = 0x212118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212114u;
        // 0x212118: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21211Cu;
        goto label_21211c;
    }
    ctx->pc = 0x212114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x21211Cu);
        ctx->pc = 0x212118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212114u;
        // 0x212118: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212114u, 0x21211Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21211Cu;
label_21211c:
    // 0x21211c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21211cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_212120:
    // 0x212120: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x212120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_212124:
    // 0x212124: 0x260f809  jalr        $s3
label_212128:
    if (ctx->pc == 0x212128u) {
        ctx->pc = 0x212128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212124u;
        // 0x212128: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21212Cu;
        goto label_21212c;
    }
    ctx->pc = 0x212124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x21212Cu);
        ctx->pc = 0x212128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212124u;
        // 0x212128: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212124u, 0x21212Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21212Cu;
label_21212c:
    // 0x21212c: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x21212cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_212130:
    // 0x212130: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x212130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_212134:
    // 0x212134: 0x260f809  jalr        $s3
label_212138:
    if (ctx->pc == 0x212138u) {
        ctx->pc = 0x212138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212134u;
        // 0x212138: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21213Cu;
        goto label_21213c;
    }
    ctx->pc = 0x212134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x21213Cu);
        ctx->pc = 0x212138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212134u;
        // 0x212138: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212134u, 0x21213Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21213Cu;
label_21213c:
    // 0x21213c: 0x26320050  addiu       $s2, $s1, 0x50
    ctx->pc = 0x21213cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_212140:
    // 0x212140: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x212140u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212144:
    // 0x212144: 0x0  nop
    ctx->pc = 0x212144u;
    // NOP
label_212148:
    // 0x212148: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x212148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21214c:
    // 0x21214c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21214cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_212150:
    // 0x212150: 0x260f809  jalr        $s3
label_212154:
    if (ctx->pc == 0x212154u) {
        ctx->pc = 0x212154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212150u;
        // 0x212154: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212158u;
        goto label_212158;
    }
    ctx->pc = 0x212150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x212158u);
        ctx->pc = 0x212154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212150u;
        // 0x212154: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212150u, 0x212158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x212158u;
label_212158:
    // 0x212158: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x212158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21215c:
    // 0x21215c: 0x26450002  addiu       $a1, $s2, 0x2
    ctx->pc = 0x21215cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_212160:
    // 0x212160: 0x260f809  jalr        $s3
label_212164:
    if (ctx->pc == 0x212164u) {
        ctx->pc = 0x212164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212160u;
        // 0x212164: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212168u;
        goto label_212168;
    }
    ctx->pc = 0x212160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x212168u);
        ctx->pc = 0x212164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212160u;
        // 0x212164: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212160u, 0x212168u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x212168u;
label_212168:
    // 0x212168: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x212168u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_21216c:
    // 0x21216c: 0x2a830003  slti        $v1, $s4, 0x3
    ctx->pc = 0x21216cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
label_212170:
    // 0x212170: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_212174:
    if (ctx->pc == 0x212174u) {
        ctx->pc = 0x212174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212170u;
        // 0x212174: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212178u;
        goto label_212178;
    }
    ctx->pc = 0x212170u;
    {
        const bool branch_taken_0x212170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x212174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212170u;
        // 0x212174: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212170) {
            ctx->pc = 0x212144u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212144;
        }
    }
    ctx->pc = 0x212178u;
label_212178:
    // 0x212178: 0x26320064  addiu       $s2, $s1, 0x64
    ctx->pc = 0x212178u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_21217c:
    // 0x21217c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21217cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_212180:
    // 0x212180: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x212180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_212184:
    // 0x212184: 0x260f809  jalr        $s3
label_212188:
    if (ctx->pc == 0x212188u) {
        ctx->pc = 0x212188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212184u;
        // 0x212188: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21218Cu;
        goto label_21218c;
    }
    ctx->pc = 0x212184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x21218Cu);
        ctx->pc = 0x212188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212184u;
        // 0x212188: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212184u, 0x21218Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21218Cu;
label_21218c:
    // 0x21218c: 0x26450002  addiu       $a1, $s2, 0x2
    ctx->pc = 0x21218cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_212190:
    // 0x212190: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x212190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_212194:
    // 0x212194: 0x260f809  jalr        $s3
label_212198:
    if (ctx->pc == 0x212198u) {
        ctx->pc = 0x212198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212194u;
        // 0x212198: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21219Cu;
        goto label_21219c;
    }
    ctx->pc = 0x212194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x21219Cu);
        ctx->pc = 0x212198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212194u;
        // 0x212198: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212194u, 0x21219Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21219Cu;
label_21219c:
    // 0x21219c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21219cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2121a0:
    // 0x2121a0: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x2121a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_2121a4:
    // 0x2121a4: 0x1460ffb5  bnez        $v1, . + 4 + (-0x4B << 2)
label_2121a8:
    if (ctx->pc == 0x2121A8u) {
        ctx->pc = 0x2121A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2121A4u;
        // 0x2121a8: 0x26310070  addiu       $s1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2121ACu;
        goto label_2121ac;
    }
    ctx->pc = 0x2121A4u;
    {
        const bool branch_taken_0x2121a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2121A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2121A4u;
        // 0x2121a8: 0x26310070  addiu       $s1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2121a4) {
            ctx->pc = 0x21207Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21207c;
        }
    }
    ctx->pc = 0x2121ACu;
label_2121ac:
    // 0x2121ac: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2121acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2121b0:
    // 0x2121b0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2121b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2121b4:
    // 0x2121b4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2121b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2121b8:
    // 0x2121b8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2121b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2121bc:
    // 0x2121bc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2121bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2121c0:
    // 0x2121c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2121c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2121c4:
    // 0x2121c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2121c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2121c8:
    // 0x2121c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2121c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2121cc:
    // 0x2121cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2121ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2121d0:
    // 0x2121d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2121d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2121d4:
    // 0x2121d4: 0x3e00008  jr          $ra
label_2121d8:
    if (ctx->pc == 0x2121D8u) {
        ctx->pc = 0x2121D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2121D4u;
        // 0x2121d8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2121DCu;
        goto label_2121dc;
    }
    ctx->pc = 0x2121D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2121D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2121D4u;
        // 0x2121d8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2121D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2121DCu;
label_2121dc:
    // 0x2121dc: 0x0  nop
    ctx->pc = 0x2121dcu;
    // NOP
label_2121e0:
    // 0x2121e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2121e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2121e4:
    // 0x2121e4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2121e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2121e8:
    // 0x2121e8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2121e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2121ec:
    // 0x2121ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2121ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2121f0:
    // 0x2121f0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2121f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2121f4:
    // 0x2121f4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2121f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2121f8:
    // 0x2121f8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2121f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2121fc:
    // 0x2121fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2121fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_212200:
    // 0x212200: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x212200u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_212204:
    // 0x212204: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x212204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_212208:
    // 0x212208: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x212208u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_21220c:
    // 0x21220c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21220cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_212210:
    // 0x212210: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x212210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_212214:
    // 0x212214: 0x10200049  beqz        $at, . + 4 + (0x49 << 2)
label_212218:
    if (ctx->pc == 0x212218u) {
        ctx->pc = 0x212218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212214u;
        // 0x212218: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21221Cu;
        goto label_21221c;
    }
    ctx->pc = 0x212214u;
    {
        const bool branch_taken_0x212214 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x212218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212214u;
        // 0x212218: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212214) {
            ctx->pc = 0x21233Cu;
            goto label_21233c;
        }
    }
    ctx->pc = 0x21221Cu;
label_21221c:
    // 0x21221c: 0x26c501a0  addiu       $a1, $s6, 0x1A0
    ctx->pc = 0x21221cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 416));
label_212220:
    // 0x212220: 0x2a0f809  jalr        $s5
label_212224:
    if (ctx->pc == 0x212224u) {
        ctx->pc = 0x212224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212220u;
        // 0x212224: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212228u;
        goto label_212228;
    }
    ctx->pc = 0x212220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x212228u);
        ctx->pc = 0x212224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212220u;
        // 0x212224: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212220u, 0x212228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x212228u;
label_212228:
    // 0x212228: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x212228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21222c:
    // 0x21222c: 0x26d30058  addiu       $s3, $s6, 0x58
    ctx->pc = 0x21222cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 88));
label_212230:
    // 0x212230: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x212230u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212234:
    // 0x212234: 0x0  nop
    ctx->pc = 0x212234u;
    // NOP
label_212238:
    // 0x212238: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x212238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21223c:
    // 0x21223c: 0x0  nop
    ctx->pc = 0x21223cu;
    // NOP
label_212240:
    // 0x212240: 0x2712821  addu        $a1, $s3, $s1
    ctx->pc = 0x212240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_212244:
    // 0x212244: 0x2a0f809  jalr        $s5
label_212248:
    if (ctx->pc == 0x212248u) {
        ctx->pc = 0x212248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212244u;
        // 0x212248: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21224Cu;
        goto label_21224c;
    }
    ctx->pc = 0x212244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x21224Cu);
        ctx->pc = 0x212248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212244u;
        // 0x212248: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212244u, 0x21224Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21224Cu;
label_21224c:
    // 0x21224c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21224cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_212250:
    // 0x212250: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x212250u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_212254:
    // 0x212254: 0x2a220014  slti        $v0, $s1, 0x14
    ctx->pc = 0x212254u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
label_212258:
    // 0x212258: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_21225c:
    if (ctx->pc == 0x21225Cu) {
        ctx->pc = 0x21225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212258u;
        // 0x21225c: 0x26650014  addiu       $a1, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212260u;
        goto label_212260;
    }
    ctx->pc = 0x212258u;
    {
        const bool branch_taken_0x212258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212258u;
        // 0x21225c: 0x26650014  addiu       $a1, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212258) {
            ctx->pc = 0x21223Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21223c;
        }
    }
    ctx->pc = 0x212260u;
label_212260:
    // 0x212260: 0x2a0f809  jalr        $s5
label_212264:
    if (ctx->pc == 0x212264u) {
        ctx->pc = 0x212264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212260u;
        // 0x212264: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212268u;
        goto label_212268;
    }
    ctx->pc = 0x212260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x212268u);
        ctx->pc = 0x212264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212260u;
        // 0x212264: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212260u, 0x212268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x212268u;
label_212268:
    // 0x212268: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x212268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21226c:
    // 0x21226c: 0x26650018  addiu       $a1, $s3, 0x18
    ctx->pc = 0x21226cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_212270:
    // 0x212270: 0x2a0f809  jalr        $s5
label_212274:
    if (ctx->pc == 0x212274u) {
        ctx->pc = 0x212274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212270u;
        // 0x212274: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212278u;
        goto label_212278;
    }
    ctx->pc = 0x212270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x212278u);
        ctx->pc = 0x212274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212270u;
        // 0x212274: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212270u, 0x212278u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x212278u;
label_212278:
    // 0x212278: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x212278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21227c:
    // 0x21227c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x21227cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_212280:
    // 0x212280: 0x2a42000a  slti        $v0, $s2, 0xA
    ctx->pc = 0x212280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
label_212284:
    // 0x212284: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_212288:
    if (ctx->pc == 0x212288u) {
        ctx->pc = 0x212288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212284u;
        // 0x212288: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21228Cu;
        goto label_21228c;
    }
    ctx->pc = 0x212284u;
    {
        const bool branch_taken_0x212284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212284u;
        // 0x212288: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212284) {
            ctx->pc = 0x212234u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212234;
        }
    }
    ctx->pc = 0x21228Cu;
label_21228c:
    // 0x21228c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21228cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212290:
    // 0x212290: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x212290u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212294:
    // 0x212294: 0x0  nop
    ctx->pc = 0x212294u;
    // NOP
label_212298:
    // 0x212298: 0x2d29821  addu        $s3, $s6, $s2
    ctx->pc = 0x212298u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_21229c:
    // 0x21229c: 0x26650008  addiu       $a1, $s3, 0x8
    ctx->pc = 0x21229cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_2122a0:
    // 0x2122a0: 0x2a0f809  jalr        $s5
label_2122a4:
    if (ctx->pc == 0x2122A4u) {
        ctx->pc = 0x2122A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122A0u;
        // 0x2122a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2122A8u;
        goto label_2122a8;
    }
    ctx->pc = 0x2122A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x2122A8u);
        ctx->pc = 0x2122A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122A0u;
        // 0x2122a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2122A0u, 0x2122A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2122A8u;
label_2122a8:
    // 0x2122a8: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x2122a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_2122ac:
    // 0x2122ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2122acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2122b0:
    // 0x2122b0: 0x2a0f809  jalr        $s5
label_2122b4:
    if (ctx->pc == 0x2122B4u) {
        ctx->pc = 0x2122B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122B0u;
        // 0x2122b4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2122B8u;
        goto label_2122b8;
    }
    ctx->pc = 0x2122B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x2122B8u);
        ctx->pc = 0x2122B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122B0u;
        // 0x2122b4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2122B0u, 0x2122B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2122B8u;
label_2122b8:
    // 0x2122b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2122b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2122bc:
    // 0x2122bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2122bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2122c0:
    // 0x2122c0: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x2122c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
label_2122c4:
    // 0x2122c4: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_2122c8:
    if (ctx->pc == 0x2122C8u) {
        ctx->pc = 0x2122C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122C4u;
        // 0x2122c8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2122CCu;
        goto label_2122cc;
    }
    ctx->pc = 0x2122C4u;
    {
        const bool branch_taken_0x2122c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2122C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122C4u;
        // 0x2122c8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2122c4) {
            ctx->pc = 0x212294u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212294;
        }
    }
    ctx->pc = 0x2122CCu;
label_2122cc:
    // 0x2122cc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2122ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2122d0:
    // 0x2122d0: 0x2a0f809  jalr        $s5
label_2122d4:
    if (ctx->pc == 0x2122D4u) {
        ctx->pc = 0x2122D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122D0u;
        // 0x2122d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2122D8u;
        goto label_2122d8;
    }
    ctx->pc = 0x2122D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x2122D8u);
        ctx->pc = 0x2122D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122D0u;
        // 0x2122d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2122D0u, 0x2122D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2122D8u;
label_2122d8:
    // 0x2122d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2122d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2122dc:
    // 0x2122dc: 0x26c50001  addiu       $a1, $s6, 0x1
    ctx->pc = 0x2122dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2122e0:
    // 0x2122e0: 0x2a0f809  jalr        $s5
label_2122e4:
    if (ctx->pc == 0x2122E4u) {
        ctx->pc = 0x2122E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122E0u;
        // 0x2122e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2122E8u;
        goto label_2122e8;
    }
    ctx->pc = 0x2122E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x2122E8u);
        ctx->pc = 0x2122E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122E0u;
        // 0x2122e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2122E0u, 0x2122E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2122E8u;
label_2122e8:
    // 0x2122e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2122e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2122ec:
    // 0x2122ec: 0x26c50004  addiu       $a1, $s6, 0x4
    ctx->pc = 0x2122ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_2122f0:
    // 0x2122f0: 0x2a0f809  jalr        $s5
label_2122f4:
    if (ctx->pc == 0x2122F4u) {
        ctx->pc = 0x2122F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122F0u;
        // 0x2122f4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2122F8u;
        goto label_2122f8;
    }
    ctx->pc = 0x2122F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x2122F8u);
        ctx->pc = 0x2122F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122F0u;
        // 0x2122f4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2122F0u, 0x2122F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2122F8u;
label_2122f8:
    // 0x2122f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2122f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2122fc:
    // 0x2122fc: 0x26c50198  addiu       $a1, $s6, 0x198
    ctx->pc = 0x2122fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 408));
label_212300:
    // 0x212300: 0x2a0f809  jalr        $s5
label_212304:
    if (ctx->pc == 0x212304u) {
        ctx->pc = 0x212304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212300u;
        // 0x212304: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212308u;
        goto label_212308;
    }
    ctx->pc = 0x212300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x212308u);
        ctx->pc = 0x212304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212300u;
        // 0x212304: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212300u, 0x212308u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x212308u;
label_212308:
    // 0x212308: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x212308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21230c:
    // 0x21230c: 0x26c501a1  addiu       $a1, $s6, 0x1A1
    ctx->pc = 0x21230cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 417));
label_212310:
    // 0x212310: 0x2a0f809  jalr        $s5
label_212314:
    if (ctx->pc == 0x212314u) {
        ctx->pc = 0x212314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212310u;
        // 0x212314: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212318u;
        goto label_212318;
    }
    ctx->pc = 0x212310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x212318u);
        ctx->pc = 0x212314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212310u;
        // 0x212314: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212310u, 0x212318u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x212318u;
label_212318:
    // 0x212318: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x212318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21231c:
    // 0x21231c: 0x26c501a2  addiu       $a1, $s6, 0x1A2
    ctx->pc = 0x21231cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 418));
label_212320:
    // 0x212320: 0x2a0f809  jalr        $s5
label_212324:
    if (ctx->pc == 0x212324u) {
        ctx->pc = 0x212324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212320u;
        // 0x212324: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212328u;
        goto label_212328;
    }
    ctx->pc = 0x212320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x212328u);
        ctx->pc = 0x212324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212320u;
        // 0x212324: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212320u, 0x212328u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x212328u;
label_212328:
    // 0x212328: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x212328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21232c:
    // 0x21232c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21232cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_212330:
    // 0x212330: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x212330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_212334:
    // 0x212334: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
label_212338:
    if (ctx->pc == 0x212338u) {
        ctx->pc = 0x212338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212334u;
        // 0x212338: 0x26d601a8  addiu       $s6, $s6, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21233Cu;
        goto label_21233c;
    }
    ctx->pc = 0x212334u;
    {
        const bool branch_taken_0x212334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212334u;
        // 0x212338: 0x26d601a8  addiu       $s6, $s6, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212334) {
            ctx->pc = 0x21221Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21221c;
        }
    }
    ctx->pc = 0x21233Cu;
label_21233c:
    // 0x21233c: 0x0  nop
    ctx->pc = 0x21233cu;
    // NOP
    ctx->pc = 0x212340u;
    return;
}

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

// Function: FUN_0019b6a8
// Address: 0x19b6a8 - 0x29b6b0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b6a8_part479(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x284d08u: goto label_284d08;
        case 0x284d0cu: goto label_284d0c;
        case 0x284d10u: goto label_284d10;
        case 0x284d14u: goto label_284d14;
        case 0x284d18u: goto label_284d18;
        case 0x284d1cu: goto label_284d1c;
        case 0x284d20u: goto label_284d20;
        case 0x284d24u: goto label_284d24;
        case 0x284d28u: goto label_284d28;
        case 0x284d2cu: goto label_284d2c;
        case 0x284d30u: goto label_284d30;
        case 0x284d34u: goto label_284d34;
        case 0x284d38u: goto label_284d38;
        case 0x284d3cu: goto label_284d3c;
        case 0x284d40u: goto label_284d40;
        case 0x284d44u: goto label_284d44;
        case 0x284d48u: goto label_284d48;
        case 0x284d4cu: goto label_284d4c;
        case 0x284d50u: goto label_284d50;
        case 0x284d54u: goto label_284d54;
        case 0x284d58u: goto label_284d58;
        case 0x284d5cu: goto label_284d5c;
        case 0x284d60u: goto label_284d60;
        case 0x284d64u: goto label_284d64;
        case 0x284d68u: goto label_284d68;
        case 0x284d6cu: goto label_284d6c;
        case 0x284d70u: goto label_284d70;
        case 0x284d74u: goto label_284d74;
        case 0x284d78u: goto label_284d78;
        case 0x284d7cu: goto label_284d7c;
        case 0x284d80u: goto label_284d80;
        case 0x284d84u: goto label_284d84;
        case 0x284d88u: goto label_284d88;
        case 0x284d8cu: goto label_284d8c;
        case 0x284d90u: goto label_284d90;
        case 0x284d94u: goto label_284d94;
        case 0x284d98u: goto label_284d98;
        case 0x284d9cu: goto label_284d9c;
        case 0x284da0u: goto label_284da0;
        case 0x284da4u: goto label_284da4;
        case 0x284da8u: goto label_284da8;
        case 0x284dacu: goto label_284dac;
        case 0x284db0u: goto label_284db0;
        case 0x284db4u: goto label_284db4;
        case 0x284db8u: goto label_284db8;
        case 0x284dbcu: goto label_284dbc;
        case 0x284dc0u: goto label_284dc0;
        case 0x284dc4u: goto label_284dc4;
        case 0x284dc8u: goto label_284dc8;
        case 0x284dccu: goto label_284dcc;
        case 0x284dd0u: goto label_284dd0;
        case 0x284dd4u: goto label_284dd4;
        case 0x284dd8u: goto label_284dd8;
        case 0x284ddcu: goto label_284ddc;
        case 0x284de0u: goto label_284de0;
        case 0x284de4u: goto label_284de4;
        case 0x284de8u: goto label_284de8;
        case 0x284decu: goto label_284dec;
        case 0x284df0u: goto label_284df0;
        case 0x284df4u: goto label_284df4;
        case 0x284df8u: goto label_284df8;
        case 0x284dfcu: goto label_284dfc;
        case 0x284e00u: goto label_284e00;
        case 0x284e04u: goto label_284e04;
        case 0x284e08u: goto label_284e08;
        case 0x284e0cu: goto label_284e0c;
        case 0x284e10u: goto label_284e10;
        case 0x284e14u: goto label_284e14;
        case 0x284e18u: goto label_284e18;
        case 0x284e1cu: goto label_284e1c;
        case 0x284e20u: goto label_284e20;
        case 0x284e24u: goto label_284e24;
        case 0x284e28u: goto label_284e28;
        case 0x284e2cu: goto label_284e2c;
        case 0x284e30u: goto label_284e30;
        case 0x284e34u: goto label_284e34;
        case 0x284e38u: goto label_284e38;
        case 0x284e3cu: goto label_284e3c;
        case 0x284e40u: goto label_284e40;
        case 0x284e44u: goto label_284e44;
        case 0x284e48u: goto label_284e48;
        case 0x284e4cu: goto label_284e4c;
        case 0x284e50u: goto label_284e50;
        case 0x284e54u: goto label_284e54;
        case 0x284e58u: goto label_284e58;
        case 0x284e5cu: goto label_284e5c;
        case 0x284e60u: goto label_284e60;
        case 0x284e64u: goto label_284e64;
        case 0x284e68u: goto label_284e68;
        case 0x284e6cu: goto label_284e6c;
        case 0x284e70u: goto label_284e70;
        case 0x284e74u: goto label_284e74;
        case 0x284e78u: goto label_284e78;
        case 0x284e7cu: goto label_284e7c;
        case 0x284e80u: goto label_284e80;
        case 0x284e84u: goto label_284e84;
        case 0x284e88u: goto label_284e88;
        case 0x284e8cu: goto label_284e8c;
        case 0x284e90u: goto label_284e90;
        case 0x284e94u: goto label_284e94;
        case 0x284e98u: goto label_284e98;
        case 0x284e9cu: goto label_284e9c;
        case 0x284ea0u: goto label_284ea0;
        case 0x284ea4u: goto label_284ea4;
        case 0x284ea8u: goto label_284ea8;
        case 0x284eacu: goto label_284eac;
        case 0x284eb0u: goto label_284eb0;
        case 0x284eb4u: goto label_284eb4;
        case 0x284eb8u: goto label_284eb8;
        case 0x284ebcu: goto label_284ebc;
        case 0x284ec0u: goto label_284ec0;
        case 0x284ec4u: goto label_284ec4;
        case 0x284ec8u: goto label_284ec8;
        case 0x284eccu: goto label_284ecc;
        case 0x284ed0u: goto label_284ed0;
        case 0x284ed4u: goto label_284ed4;
        case 0x284ed8u: goto label_284ed8;
        case 0x284edcu: goto label_284edc;
        case 0x284ee0u: goto label_284ee0;
        case 0x284ee4u: goto label_284ee4;
        case 0x284ee8u: goto label_284ee8;
        case 0x284eecu: goto label_284eec;
        case 0x284ef0u: goto label_284ef0;
        case 0x284ef4u: goto label_284ef4;
        case 0x284ef8u: goto label_284ef8;
        case 0x284efcu: goto label_284efc;
        case 0x284f00u: goto label_284f00;
        case 0x284f04u: goto label_284f04;
        case 0x284f08u: goto label_284f08;
        case 0x284f0cu: goto label_284f0c;
        case 0x284f10u: goto label_284f10;
        case 0x284f14u: goto label_284f14;
        case 0x284f18u: goto label_284f18;
        case 0x284f1cu: goto label_284f1c;
        case 0x284f20u: goto label_284f20;
        case 0x284f24u: goto label_284f24;
        case 0x284f28u: goto label_284f28;
        case 0x284f2cu: goto label_284f2c;
        case 0x284f30u: goto label_284f30;
        case 0x284f34u: goto label_284f34;
        case 0x284f38u: goto label_284f38;
        case 0x284f3cu: goto label_284f3c;
        case 0x284f40u: goto label_284f40;
        case 0x284f44u: goto label_284f44;
        case 0x284f48u: goto label_284f48;
        case 0x284f4cu: goto label_284f4c;
        case 0x284f50u: goto label_284f50;
        case 0x284f54u: goto label_284f54;
        case 0x284f58u: goto label_284f58;
        case 0x284f5cu: goto label_284f5c;
        case 0x284f60u: goto label_284f60;
        case 0x284f64u: goto label_284f64;
        case 0x284f68u: goto label_284f68;
        case 0x284f6cu: goto label_284f6c;
        case 0x284f70u: goto label_284f70;
        case 0x284f74u: goto label_284f74;
        case 0x284f78u: goto label_284f78;
        case 0x284f7cu: goto label_284f7c;
        case 0x284f80u: goto label_284f80;
        case 0x284f84u: goto label_284f84;
        case 0x284f88u: goto label_284f88;
        case 0x284f8cu: goto label_284f8c;
        case 0x284f90u: goto label_284f90;
        case 0x284f94u: goto label_284f94;
        case 0x284f98u: goto label_284f98;
        case 0x284f9cu: goto label_284f9c;
        case 0x284fa0u: goto label_284fa0;
        case 0x284fa4u: goto label_284fa4;
        case 0x284fa8u: goto label_284fa8;
        case 0x284facu: goto label_284fac;
        case 0x284fb0u: goto label_284fb0;
        case 0x284fb4u: goto label_284fb4;
        case 0x284fb8u: goto label_284fb8;
        case 0x284fbcu: goto label_284fbc;
        case 0x284fc0u: goto label_284fc0;
        case 0x284fc4u: goto label_284fc4;
        case 0x284fc8u: goto label_284fc8;
        case 0x284fccu: goto label_284fcc;
        case 0x284fd0u: goto label_284fd0;
        case 0x284fd4u: goto label_284fd4;
        case 0x284fd8u: goto label_284fd8;
        case 0x284fdcu: goto label_284fdc;
        case 0x284fe0u: goto label_284fe0;
        case 0x284fe4u: goto label_284fe4;
        case 0x284fe8u: goto label_284fe8;
        case 0x284fecu: goto label_284fec;
        case 0x284ff0u: goto label_284ff0;
        case 0x284ff4u: goto label_284ff4;
        case 0x284ff8u: goto label_284ff8;
        case 0x284ffcu: goto label_284ffc;
        case 0x285000u: goto label_285000;
        case 0x285004u: goto label_285004;
        case 0x285008u: goto label_285008;
        case 0x28500cu: goto label_28500c;
        case 0x285010u: goto label_285010;
        case 0x285014u: goto label_285014;
        case 0x285018u: goto label_285018;
        case 0x28501cu: goto label_28501c;
        case 0x285020u: goto label_285020;
        case 0x285024u: goto label_285024;
        case 0x285028u: goto label_285028;
        case 0x28502cu: goto label_28502c;
        case 0x285030u: goto label_285030;
        case 0x285034u: goto label_285034;
        case 0x285038u: goto label_285038;
        case 0x28503cu: goto label_28503c;
        case 0x285040u: goto label_285040;
        case 0x285044u: goto label_285044;
        case 0x285048u: goto label_285048;
        case 0x28504cu: goto label_28504c;
        case 0x285050u: goto label_285050;
        case 0x285054u: goto label_285054;
        case 0x285058u: goto label_285058;
        case 0x28505cu: goto label_28505c;
        case 0x285060u: goto label_285060;
        case 0x285064u: goto label_285064;
        case 0x285068u: goto label_285068;
        case 0x28506cu: goto label_28506c;
        case 0x285070u: goto label_285070;
        case 0x285074u: goto label_285074;
        case 0x285078u: goto label_285078;
        case 0x28507cu: goto label_28507c;
        case 0x285080u: goto label_285080;
        case 0x285084u: goto label_285084;
        case 0x285088u: goto label_285088;
        case 0x28508cu: goto label_28508c;
        case 0x285090u: goto label_285090;
        case 0x285094u: goto label_285094;
        case 0x285098u: goto label_285098;
        case 0x28509cu: goto label_28509c;
        case 0x2850a0u: goto label_2850a0;
        case 0x2850a4u: goto label_2850a4;
        case 0x2850a8u: goto label_2850a8;
        case 0x2850acu: goto label_2850ac;
        case 0x2850b0u: goto label_2850b0;
        case 0x2850b4u: goto label_2850b4;
        case 0x2850b8u: goto label_2850b8;
        case 0x2850bcu: goto label_2850bc;
        case 0x2850c0u: goto label_2850c0;
        case 0x2850c4u: goto label_2850c4;
        case 0x2850c8u: goto label_2850c8;
        case 0x2850ccu: goto label_2850cc;
        case 0x2850d0u: goto label_2850d0;
        case 0x2850d4u: goto label_2850d4;
        case 0x2850d8u: goto label_2850d8;
        case 0x2850dcu: goto label_2850dc;
        case 0x2850e0u: goto label_2850e0;
        case 0x2850e4u: goto label_2850e4;
        case 0x2850e8u: goto label_2850e8;
        case 0x2850ecu: goto label_2850ec;
        case 0x2850f0u: goto label_2850f0;
        case 0x2850f4u: goto label_2850f4;
        case 0x2850f8u: goto label_2850f8;
        case 0x2850fcu: goto label_2850fc;
        case 0x285100u: goto label_285100;
        case 0x285104u: goto label_285104;
        case 0x285108u: goto label_285108;
        case 0x28510cu: goto label_28510c;
        case 0x285110u: goto label_285110;
        case 0x285114u: goto label_285114;
        case 0x285118u: goto label_285118;
        case 0x28511cu: goto label_28511c;
        case 0x285120u: goto label_285120;
        case 0x285124u: goto label_285124;
        case 0x285128u: goto label_285128;
        case 0x28512cu: goto label_28512c;
        case 0x285130u: goto label_285130;
        case 0x285134u: goto label_285134;
        case 0x285138u: goto label_285138;
        case 0x28513cu: goto label_28513c;
        case 0x285140u: goto label_285140;
        case 0x285144u: goto label_285144;
        case 0x285148u: goto label_285148;
        case 0x28514cu: goto label_28514c;
        case 0x285150u: goto label_285150;
        case 0x285154u: goto label_285154;
        case 0x285158u: goto label_285158;
        case 0x28515cu: goto label_28515c;
        case 0x285160u: goto label_285160;
        case 0x285164u: goto label_285164;
        case 0x285168u: goto label_285168;
        case 0x28516cu: goto label_28516c;
        case 0x285170u: goto label_285170;
        case 0x285174u: goto label_285174;
        case 0x285178u: goto label_285178;
        case 0x28517cu: goto label_28517c;
        case 0x285180u: goto label_285180;
        case 0x285184u: goto label_285184;
        case 0x285188u: goto label_285188;
        case 0x28518cu: goto label_28518c;
        case 0x285190u: goto label_285190;
        case 0x285194u: goto label_285194;
        case 0x285198u: goto label_285198;
        case 0x28519cu: goto label_28519c;
        case 0x2851a0u: goto label_2851a0;
        case 0x2851a4u: goto label_2851a4;
        case 0x2851a8u: goto label_2851a8;
        case 0x2851acu: goto label_2851ac;
        case 0x2851b0u: goto label_2851b0;
        case 0x2851b4u: goto label_2851b4;
        case 0x2851b8u: goto label_2851b8;
        case 0x2851bcu: goto label_2851bc;
        case 0x2851c0u: goto label_2851c0;
        case 0x2851c4u: goto label_2851c4;
        case 0x2851c8u: goto label_2851c8;
        case 0x2851ccu: goto label_2851cc;
        case 0x2851d0u: goto label_2851d0;
        case 0x2851d4u: goto label_2851d4;
        case 0x2851d8u: goto label_2851d8;
        case 0x2851dcu: goto label_2851dc;
        case 0x2851e0u: goto label_2851e0;
        case 0x2851e4u: goto label_2851e4;
        case 0x2851e8u: goto label_2851e8;
        case 0x2851ecu: goto label_2851ec;
        case 0x2851f0u: goto label_2851f0;
        case 0x2851f4u: goto label_2851f4;
        case 0x2851f8u: goto label_2851f8;
        case 0x2851fcu: goto label_2851fc;
        case 0x285200u: goto label_285200;
        case 0x285204u: goto label_285204;
        case 0x285208u: goto label_285208;
        case 0x28520cu: goto label_28520c;
        case 0x285210u: goto label_285210;
        case 0x285214u: goto label_285214;
        case 0x285218u: goto label_285218;
        case 0x28521cu: goto label_28521c;
        case 0x285220u: goto label_285220;
        case 0x285224u: goto label_285224;
        case 0x285228u: goto label_285228;
        case 0x28522cu: goto label_28522c;
        case 0x285230u: goto label_285230;
        case 0x285234u: goto label_285234;
        case 0x285238u: goto label_285238;
        case 0x28523cu: goto label_28523c;
        case 0x285240u: goto label_285240;
        case 0x285244u: goto label_285244;
        case 0x285248u: goto label_285248;
        case 0x28524cu: goto label_28524c;
        case 0x285250u: goto label_285250;
        case 0x285254u: goto label_285254;
        case 0x285258u: goto label_285258;
        case 0x28525cu: goto label_28525c;
        case 0x285260u: goto label_285260;
        case 0x285264u: goto label_285264;
        case 0x285268u: goto label_285268;
        case 0x28526cu: goto label_28526c;
        case 0x285270u: goto label_285270;
        case 0x285274u: goto label_285274;
        case 0x285278u: goto label_285278;
        case 0x28527cu: goto label_28527c;
        case 0x285280u: goto label_285280;
        case 0x285284u: goto label_285284;
        case 0x285288u: goto label_285288;
        case 0x28528cu: goto label_28528c;
        case 0x285290u: goto label_285290;
        case 0x285294u: goto label_285294;
        case 0x285298u: goto label_285298;
        case 0x28529cu: goto label_28529c;
        case 0x2852a0u: goto label_2852a0;
        case 0x2852a4u: goto label_2852a4;
        case 0x2852a8u: goto label_2852a8;
        case 0x2852acu: goto label_2852ac;
        case 0x2852b0u: goto label_2852b0;
        case 0x2852b4u: goto label_2852b4;
        case 0x2852b8u: goto label_2852b8;
        case 0x2852bcu: goto label_2852bc;
        case 0x2852c0u: goto label_2852c0;
        case 0x2852c4u: goto label_2852c4;
        case 0x2852c8u: goto label_2852c8;
        case 0x2852ccu: goto label_2852cc;
        case 0x2852d0u: goto label_2852d0;
        case 0x2852d4u: goto label_2852d4;
        case 0x2852d8u: goto label_2852d8;
        case 0x2852dcu: goto label_2852dc;
        case 0x2852e0u: goto label_2852e0;
        case 0x2852e4u: goto label_2852e4;
        case 0x2852e8u: goto label_2852e8;
        case 0x2852ecu: goto label_2852ec;
        case 0x2852f0u: goto label_2852f0;
        case 0x2852f4u: goto label_2852f4;
        case 0x2852f8u: goto label_2852f8;
        case 0x2852fcu: goto label_2852fc;
        case 0x285300u: goto label_285300;
        case 0x285304u: goto label_285304;
        case 0x285308u: goto label_285308;
        case 0x28530cu: goto label_28530c;
        case 0x285310u: goto label_285310;
        case 0x285314u: goto label_285314;
        case 0x285318u: goto label_285318;
        case 0x28531cu: goto label_28531c;
        case 0x285320u: goto label_285320;
        case 0x285324u: goto label_285324;
        case 0x285328u: goto label_285328;
        case 0x28532cu: goto label_28532c;
        case 0x285330u: goto label_285330;
        case 0x285334u: goto label_285334;
        case 0x285338u: goto label_285338;
        case 0x28533cu: goto label_28533c;
        case 0x285340u: goto label_285340;
        case 0x285344u: goto label_285344;
        case 0x285348u: goto label_285348;
        case 0x28534cu: goto label_28534c;
        case 0x285350u: goto label_285350;
        case 0x285354u: goto label_285354;
        case 0x285358u: goto label_285358;
        case 0x28535cu: goto label_28535c;
        case 0x285360u: goto label_285360;
        case 0x285364u: goto label_285364;
        case 0x285368u: goto label_285368;
        case 0x28536cu: goto label_28536c;
        case 0x285370u: goto label_285370;
        case 0x285374u: goto label_285374;
        case 0x285378u: goto label_285378;
        case 0x28537cu: goto label_28537c;
        case 0x285380u: goto label_285380;
        case 0x285384u: goto label_285384;
        case 0x285388u: goto label_285388;
        case 0x28538cu: goto label_28538c;
        case 0x285390u: goto label_285390;
        case 0x285394u: goto label_285394;
        case 0x285398u: goto label_285398;
        case 0x28539cu: goto label_28539c;
        case 0x2853a0u: goto label_2853a0;
        case 0x2853a4u: goto label_2853a4;
        case 0x2853a8u: goto label_2853a8;
        case 0x2853acu: goto label_2853ac;
        case 0x2853b0u: goto label_2853b0;
        case 0x2853b4u: goto label_2853b4;
        case 0x2853b8u: goto label_2853b8;
        case 0x2853bcu: goto label_2853bc;
        case 0x2853c0u: goto label_2853c0;
        case 0x2853c4u: goto label_2853c4;
        case 0x2853c8u: goto label_2853c8;
        case 0x2853ccu: goto label_2853cc;
        case 0x2853d0u: goto label_2853d0;
        case 0x2853d4u: goto label_2853d4;
        case 0x2853d8u: goto label_2853d8;
        case 0x2853dcu: goto label_2853dc;
        case 0x2853e0u: goto label_2853e0;
        case 0x2853e4u: goto label_2853e4;
        case 0x2853e8u: goto label_2853e8;
        case 0x2853ecu: goto label_2853ec;
        case 0x2853f0u: goto label_2853f0;
        case 0x2853f4u: goto label_2853f4;
        case 0x2853f8u: goto label_2853f8;
        case 0x2853fcu: goto label_2853fc;
        case 0x285400u: goto label_285400;
        case 0x285404u: goto label_285404;
        case 0x285408u: goto label_285408;
        case 0x28540cu: goto label_28540c;
        case 0x285410u: goto label_285410;
        case 0x285414u: goto label_285414;
        case 0x285418u: goto label_285418;
        case 0x28541cu: goto label_28541c;
        case 0x285420u: goto label_285420;
        case 0x285424u: goto label_285424;
        case 0x285428u: goto label_285428;
        case 0x28542cu: goto label_28542c;
        case 0x285430u: goto label_285430;
        case 0x285434u: goto label_285434;
        case 0x285438u: goto label_285438;
        case 0x28543cu: goto label_28543c;
        case 0x285440u: goto label_285440;
        case 0x285444u: goto label_285444;
        case 0x285448u: goto label_285448;
        case 0x28544cu: goto label_28544c;
        case 0x285450u: goto label_285450;
        case 0x285454u: goto label_285454;
        case 0x285458u: goto label_285458;
        case 0x28545cu: goto label_28545c;
        case 0x285460u: goto label_285460;
        case 0x285464u: goto label_285464;
        case 0x285468u: goto label_285468;
        case 0x28546cu: goto label_28546c;
        case 0x285470u: goto label_285470;
        case 0x285474u: goto label_285474;
        case 0x285478u: goto label_285478;
        case 0x28547cu: goto label_28547c;
        case 0x285480u: goto label_285480;
        case 0x285484u: goto label_285484;
        case 0x285488u: goto label_285488;
        case 0x28548cu: goto label_28548c;
        case 0x285490u: goto label_285490;
        case 0x285494u: goto label_285494;
        case 0x285498u: goto label_285498;
        case 0x28549cu: goto label_28549c;
        case 0x2854a0u: goto label_2854a0;
        case 0x2854a4u: goto label_2854a4;
        case 0x2854a8u: goto label_2854a8;
        case 0x2854acu: goto label_2854ac;
        case 0x2854b0u: goto label_2854b0;
        case 0x2854b4u: goto label_2854b4;
        case 0x2854b8u: goto label_2854b8;
        case 0x2854bcu: goto label_2854bc;
        case 0x2854c0u: goto label_2854c0;
        case 0x2854c4u: goto label_2854c4;
        case 0x2854c8u: goto label_2854c8;
        case 0x2854ccu: goto label_2854cc;
        case 0x2854d0u: goto label_2854d0;
        case 0x2854d4u: goto label_2854d4;
        default: return;
    }

label_284d08:
    // 0x284d08: 0xc1700000  ll          $s0, 0x0($t3)
    ctx->pc = 0x284d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284d0c:
    // 0x284d0c: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x284d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284d10:
    // 0x284d10: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284d14:
    // 0x284d14: 0x431d0000  .word       0x431D0000                   # INVALID     $t8, $sp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284d14u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x284D14 raw=0x431D0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284d18:
    // 0x284d18: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x284d18u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x284D18 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284d1c:
    // 0x284d1c: 0x41c00000  .word       0x41C00000                   # INVALID     $t6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284d1cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x284D1C raw=0x41C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284d20:
    // 0x284d20: 0x0  nop
    ctx->pc = 0x284d20u;
    // NOP
label_284d24:
    // 0x284d24: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284d24u;
    
label_284d28:
    // 0x284d28: 0x29000071  slti        $zero, $t0, 0x71
    ctx->pc = 0x284d28u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)113) ? 1 : 0);
label_284d2c:
    // 0x284d2c: 0x0  nop
    ctx->pc = 0x284d2cu;
    // NOP
label_284d30:
    // 0x284d30: 0xc1880000  ll          $t0, 0x0($t4)
    ctx->pc = 0x284d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284d34:
    // 0x284d34: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284d38:
    // 0x284d38: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x284d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284d3c:
    // 0x284d3c: 0x43310000  .word       0x43310000                   # INVALID     $t9, $s1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284d3cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x284D3C raw=0x43310000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284d40:
    // 0x284d40: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284d40u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284d44:
    // 0x284d44: 0x41b00000  .word       0x41B00000                   # INVALID     $t5, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284d44u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x284D44 raw=0x41B00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284d48:
    // 0x284d48: 0xc1700000  ll          $s0, 0x0($t3)
    ctx->pc = 0x284d48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284d4c:
    // 0x284d4c: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x284d4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284d50:
    // 0x284d50: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284d50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284d54:
    // 0x284d54: 0x431d0000  .word       0x431D0000                   # INVALID     $t8, $sp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284d54u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x284D54 raw=0x431D0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284d58:
    // 0x284d58: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x284d58u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x284D58 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284d5c:
    // 0x284d5c: 0x41c00000  .word       0x41C00000                   # INVALID     $t6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284d5cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x284D5C raw=0x41C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284d60:
    // 0x284d60: 0x0  nop
    ctx->pc = 0x284d60u;
    // NOP
label_284d64:
    // 0x284d64: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284d64u;
    
label_284d68:
    // 0x284d68: 0x2c000072  sltiu       $zero, $zero, 0x72
    ctx->pc = 0x284d68u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)(int64_t)(int32_t)114) ? 1 : 0);
label_284d6c:
    // 0x284d6c: 0x0  nop
    ctx->pc = 0x284d6cu;
    // NOP
label_284d70:
    // 0x284d70: 0x42aa0000  .word       0x42AA0000                   # INVALID     $s5, $t2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284d70u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x284D70 raw=0x42AA0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284d74:
    // 0x284d74: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x284d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284d78:
    // 0x284d78: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284d7c:
    // 0x284d7c: 0x43200000  .word       0x43200000                   # INVALID     $t9, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284d7cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x284D7C raw=0x43200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284d80:
    // 0x284d80: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284d80u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x284D80 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284d84:
    // 0x284d84: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284d84u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284d88:
    // 0x284d88: 0xc20c0000  ll          $t4, 0x0($s0)
    ctx->pc = 0x284d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284d8c:
    // 0x284d8c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284d90:
    // 0x284d90: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284d94:
    // 0x284d94: 0x42f00000  .word       0x42F00000                   # INVALID     $s7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284d94u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x284D94 raw=0x42F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284d98:
    // 0x284d98: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284d98u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284d9c:
    // 0x284d9c: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284d9cu;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284da0:
    // 0x284da0: 0x0  nop
    ctx->pc = 0x284da0u;
    // NOP
label_284da4:
    // 0x284da4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284da4u;
    
label_284da8:
    // 0x284da8: 0x2a020073  slti        $v0, $s0, 0x73
    ctx->pc = 0x284da8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)115) ? 1 : 0);
label_284dac:
    // 0x284dac: 0x0  nop
    ctx->pc = 0x284dacu;
    // NOP
label_284db0:
    // 0x284db0: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284db4:
    // 0x284db4: 0xc0e00000  ll          $zero, 0x0($a3)
    ctx->pc = 0x284db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284db8:
    // 0x284db8: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284dbc:
    // 0x284dbc: 0x43210000  .word       0x43210000                   # INVALID     $t9, $at, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284dbcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x284DBC raw=0x43210000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284dc0:
    // 0x284dc0: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284dc0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x284DC0 raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284dc4:
    // 0x284dc4: 0x42180000  .word       0x42180000                   # INVALID     $s0, $t8, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x284dc4u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x284DC4 raw=0x42180000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284dc8:
    // 0x284dc8: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284dcc:
    // 0x284dcc: 0xc0e00000  ll          $zero, 0x0($a3)
    ctx->pc = 0x284dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284dd0:
    // 0x284dd0: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284dd4:
    // 0x284dd4: 0x43210000  .word       0x43210000                   # INVALID     $t9, $at, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284dd4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x284DD4 raw=0x43210000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284dd8:
    // 0x284dd8: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284dd8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x284DD8 raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284ddc:
    // 0x284ddc: 0x42180000  .word       0x42180000                   # INVALID     $s0, $t8, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x284ddcu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x284DDC raw=0x42180000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284de0:
    // 0x284de0: 0x0  nop
    ctx->pc = 0x284de0u;
    // NOP
label_284de4:
    // 0x284de4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284de4u;
    
label_284de8:
    // 0x284de8: 0x2c000074  sltiu       $zero, $zero, 0x74
    ctx->pc = 0x284de8u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)(int64_t)(int32_t)116) ? 1 : 0);
label_284dec:
    // 0x284dec: 0x0  nop
    ctx->pc = 0x284decu;
    // NOP
label_284df0:
    // 0x284df0: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284df4:
    // 0x284df4: 0xc0e00000  ll          $zero, 0x0($a3)
    ctx->pc = 0x284df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284df8:
    // 0x284df8: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284dfc:
    // 0x284dfc: 0x43210000  .word       0x43210000                   # INVALID     $t9, $at, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284dfcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x284DFC raw=0x43210000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284e00:
    // 0x284e00: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284e00u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x284E00 raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284e04:
    // 0x284e04: 0x42180000  .word       0x42180000                   # INVALID     $s0, $t8, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x284e04u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x284E04 raw=0x42180000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284e08:
    // 0x284e08: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284e0c:
    // 0x284e0c: 0xc0e00000  ll          $zero, 0x0($a3)
    ctx->pc = 0x284e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284e10:
    // 0x284e10: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284e14:
    // 0x284e14: 0x43210000  .word       0x43210000                   # INVALID     $t9, $at, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284e14u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x284E14 raw=0x43210000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284e18:
    // 0x284e18: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284e18u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x284E18 raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284e1c:
    // 0x284e1c: 0x42180000  .word       0x42180000                   # INVALID     $s0, $t8, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x284e1cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x284E1C raw=0x42180000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284e20:
    // 0x284e20: 0x0  nop
    ctx->pc = 0x284e20u;
    // NOP
label_284e24:
    // 0x284e24: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284e24u;
    
label_284e28:
    // 0x284e28: 0x2d000075  sltiu       $zero, $t0, 0x75
    ctx->pc = 0x284e28u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)117) ? 1 : 0);
label_284e2c:
    // 0x284e2c: 0x0  nop
    ctx->pc = 0x284e2cu;
    // NOP
label_284e30:
    // 0x284e30: 0x428c0000  .word       0x428C0000                   # INVALID     $s4, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284e30u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x284E30 raw=0x428C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284e34:
    // 0x284e34: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284e38:
    // 0x284e38: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x284e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284e3c:
    // 0x284e3c: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284e3cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x284E3C raw=0x43480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284e40:
    // 0x284e40: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284e40u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284e44:
    // 0x284e44: 0x41d00000  .word       0x41D00000                   # INVALID     $t6, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284e44u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x284E44 raw=0x41D00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284e48:
    // 0x284e48: 0xc2400000  ll          $zero, 0x0($s2)
    ctx->pc = 0x284e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284e4c:
    // 0x284e4c: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x284e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284e50:
    // 0x284e50: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284e54:
    // 0x284e54: 0x42ec0000  .word       0x42EC0000                   # INVALID     $s7, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284e54u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x284E54 raw=0x42EC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284e58:
    // 0x284e58: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x284e58u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x284E58 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284e5c:
    // 0x284e5c: 0x40a00000  dmtc0       $zero, Index
    ctx->pc = 0x284e5cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x284E5C raw=0x40A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284e60:
    // 0x284e60: 0x0  nop
    ctx->pc = 0x284e60u;
    // NOP
label_284e64:
    // 0x284e64: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284e64u;
    
label_284e68:
    // 0x284e68: 0x30020076  andi        $v0, $zero, 0x76
    ctx->pc = 0x284e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)118);
label_284e6c:
    // 0x284e6c: 0x0  nop
    ctx->pc = 0x284e6cu;
    // NOP
label_284e70:
    // 0x284e70: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x284e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284e74:
    // 0x284e74: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284e78:
    // 0x284e78: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x284e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284e7c:
    // 0x284e7c: 0x42a00000  .word       0x42A00000                   # INVALID     $s5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284e7cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x284E7C raw=0x42A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284e80:
    // 0x284e80: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284e80u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284e84:
    // 0x284e84: 0x42680000  .word       0x42680000                   # INVALID     $s3, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284e84u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x284E84 raw=0x42680000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284e88:
    // 0x284e88: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x284e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284e8c:
    // 0x284e8c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284e90:
    // 0x284e90: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x284e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284e94:
    // 0x284e94: 0x42a00000  .word       0x42A00000                   # INVALID     $s5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284e94u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x284E94 raw=0x42A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284e98:
    // 0x284e98: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284e98u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284e9c:
    // 0x284e9c: 0x42680000  .word       0x42680000                   # INVALID     $s3, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284e9cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x284E9C raw=0x42680000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284ea0:
    // 0x284ea0: 0x0  nop
    ctx->pc = 0x284ea0u;
    // NOP
label_284ea4:
    // 0x284ea4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284ea4u;
    
label_284ea8:
    // 0x284ea8: 0x28000077  slti        $zero, $zero, 0x77
    ctx->pc = 0x284ea8u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)119) ? 1 : 0);
label_284eac:
    // 0x284eac: 0x0  nop
    ctx->pc = 0x284eacu;
    // NOP
label_284eb0:
    // 0x284eb0: 0x428c0000  .word       0x428C0000                   # INVALID     $s4, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284eb0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x284EB0 raw=0x428C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284eb4:
    // 0x284eb4: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284eb8:
    // 0x284eb8: 0xc2280000  ll          $t0, 0x0($s1)
    ctx->pc = 0x284eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284ebc:
    // 0x284ebc: 0x433b0000  .word       0x433B0000                   # INVALID     $t9, $k1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284ebcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x284EBC raw=0x433B0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284ec0:
    // 0x284ec0: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284ec0u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284ec4:
    // 0x284ec4: 0x423c0000  .word       0x423C0000                   # INVALID     $s1, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284ec4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x284EC4 raw=0x423C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284ec8:
    // 0x284ec8: 0xc1a00000  ll          $zero, 0x0($t5)
    ctx->pc = 0x284ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284ecc:
    // 0x284ecc: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x284eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284ed0:
    // 0x284ed0: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284ed4:
    // 0x284ed4: 0x42b40000  .word       0x42B40000                   # INVALID     $s5, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284ed4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x284ED4 raw=0x42B40000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284ed8:
    // 0x284ed8: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x284ed8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x284ED8 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284edc:
    // 0x284edc: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284edcu;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284ee0:
    // 0x284ee0: 0x0  nop
    ctx->pc = 0x284ee0u;
    // NOP
label_284ee4:
    // 0x284ee4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284ee4u;
    
label_284ee8:
    // 0x284ee8: 0x2d020078  sltiu       $v0, $t0, 0x78
    ctx->pc = 0x284ee8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)120) ? 1 : 0);
label_284eec:
    // 0x284eec: 0x0  nop
    ctx->pc = 0x284eecu;
    // NOP
label_284ef0:
    // 0x284ef0: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284ef4:
    // 0x284ef4: 0xc0e00000  ll          $zero, 0x0($a3)
    ctx->pc = 0x284ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284ef8:
    // 0x284ef8: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284ef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284efc:
    // 0x284efc: 0x43210000  .word       0x43210000                   # INVALID     $t9, $at, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284efcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x284EFC raw=0x43210000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284f00:
    // 0x284f00: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284f00u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x284F00 raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284f04:
    // 0x284f04: 0x42180000  .word       0x42180000                   # INVALID     $s0, $t8, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x284f04u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x284F04 raw=0x42180000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284f08:
    // 0x284f08: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284f0c:
    // 0x284f0c: 0xc0e00000  ll          $zero, 0x0($a3)
    ctx->pc = 0x284f0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284f10:
    // 0x284f10: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284f10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284f14:
    // 0x284f14: 0x43210000  .word       0x43210000                   # INVALID     $t9, $at, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284f14u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x284F14 raw=0x43210000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284f18:
    // 0x284f18: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284f18u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x284F18 raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284f1c:
    // 0x284f1c: 0x42180000  .word       0x42180000                   # INVALID     $s0, $t8, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x284f1cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x284F1C raw=0x42180000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284f20:
    // 0x284f20: 0x0  nop
    ctx->pc = 0x284f20u;
    // NOP
label_284f24:
    // 0x284f24: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284f24u;
    
label_284f28:
    // 0x284f28: 0x2e000079  sltiu       $zero, $s0, 0x79
    ctx->pc = 0x284f28u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)121) ? 1 : 0);
label_284f2c:
    // 0x284f2c: 0x0  nop
    ctx->pc = 0x284f2cu;
    // NOP
label_284f30:
    // 0x284f30: 0x42aa0000  .word       0x42AA0000                   # INVALID     $s5, $t2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284f30u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x284F30 raw=0x42AA0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284f34:
    // 0x284f34: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x284f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284f38:
    // 0x284f38: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284f3c:
    // 0x284f3c: 0x43200000  .word       0x43200000                   # INVALID     $t9, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284f3cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x284F3C raw=0x43200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284f40:
    // 0x284f40: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284f40u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x284F40 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284f44:
    // 0x284f44: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284f44u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284f48:
    // 0x284f48: 0xc20c0000  ll          $t4, 0x0($s0)
    ctx->pc = 0x284f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284f4c:
    // 0x284f4c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284f50:
    // 0x284f50: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284f54:
    // 0x284f54: 0x42f00000  .word       0x42F00000                   # INVALID     $s7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284f54u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x284F54 raw=0x42F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284f58:
    // 0x284f58: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284f58u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284f5c:
    // 0x284f5c: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284f5cu;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284f60:
    // 0x284f60: 0x0  nop
    ctx->pc = 0x284f60u;
    // NOP
label_284f64:
    // 0x284f64: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284f64u;
    
label_284f68:
    // 0x284f68: 0x2902007a  slti        $v0, $t0, 0x7A
    ctx->pc = 0x284f68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)122) ? 1 : 0);
label_284f6c:
    // 0x284f6c: 0x0  nop
    ctx->pc = 0x284f6cu;
    // NOP
label_284f70:
    // 0x284f70: 0xc2a60000  ll          $a2, 0x0($s5)
    ctx->pc = 0x284f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); SET_GPR_S32(ctx, 6, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284f74:
    // 0x284f74: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284f78:
    // 0x284f78: 0xc1980000  ll          $t8, 0x0($t4)
    ctx->pc = 0x284f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284f7c:
    // 0x284f7c: 0x43280000  .word       0x43280000                   # INVALID     $t9, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284f7cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x284F7C raw=0x43280000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284f80:
    // 0x284f80: 0x41b80000  .word       0x41B80000                   # INVALID     $t5, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284f80u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x284F80 raw=0x41B80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284f84:
    // 0x284f84: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x284f84u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x284F84 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284f88:
    // 0x284f88: 0xc1e00000  ll          $zero, 0x0($t7)
    ctx->pc = 0x284f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284f8c:
    // 0x284f8c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x284f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284f90:
    // 0x284f90: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x284f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284f94:
    // 0x284f94: 0x433a0000  .word       0x433A0000                   # INVALID     $t9, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284f94u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x284F94 raw=0x433A0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284f98:
    // 0x284f98: 0x41d00000  .word       0x41D00000                   # INVALID     $t6, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284f98u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x284F98 raw=0x41D00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284f9c:
    // 0x284f9c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x284f9cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x284F9C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284fa0:
    // 0x284fa0: 0x0  nop
    ctx->pc = 0x284fa0u;
    // NOP
label_284fa4:
    // 0x284fa4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284fa4u;
    
label_284fa8:
    // 0x284fa8: 0x2500007b  addiu       $zero, $t0, 0x7B
    ctx->pc = 0x284fa8u;
    // NOP (addiu $zero, ...)
label_284fac:
    // 0x284fac: 0x0  nop
    ctx->pc = 0x284facu;
    // NOP
label_284fb0:
    // 0x284fb0: 0x42700000  .word       0x42700000                   # INVALID     $s3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284fb0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x284FB0 raw=0x42700000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284fb4:
    // 0x284fb4: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x284fb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284fb8:
    // 0x284fb8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x284fb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284fbc:
    // 0x284fbc: 0x43140000  .word       0x43140000                   # INVALID     $t8, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284fbcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x284FBC raw=0x43140000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284fc0:
    // 0x284fc0: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x284fc0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x284FC0 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284fc4:
    // 0x284fc4: 0x42500000  .word       0x42500000                   # INVALID     $s2, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284fc4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x284FC4 raw=0x42500000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284fc8:
    // 0x284fc8: 0xc1f00000  ll          $s0, 0x0($t7)
    ctx->pc = 0x284fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284fcc:
    // 0x284fcc: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284fccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284fd0:
    // 0x284fd0: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284fd4:
    // 0x284fd4: 0x42b40000  .word       0x42B40000                   # INVALID     $s5, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284fd4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x284FD4 raw=0x42B40000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284fd8:
    // 0x284fd8: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284fd8u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284fdc:
    // 0x284fdc: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284fdcu;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284fe0:
    // 0x284fe0: 0x0  nop
    ctx->pc = 0x284fe0u;
    // NOP
label_284fe4:
    // 0x284fe4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284fe4u;
    
label_284fe8:
    // 0x284fe8: 0x2e02007c  sltiu       $v0, $s0, 0x7C
    ctx->pc = 0x284fe8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)124) ? 1 : 0);
label_284fec:
    // 0x284fec: 0x0  nop
    ctx->pc = 0x284fecu;
    // NOP
label_284ff0:
    // 0x284ff0: 0xc2280000  ll          $t0, 0x0($s1)
    ctx->pc = 0x284ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284ff4:
    // 0x284ff4: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284ff8:
    // 0x284ff8: 0xc1300000  ll          $s0, 0x0($t1)
    ctx->pc = 0x284ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284ffc:
    // 0x284ffc: 0x42ee0000  .word       0x42EE0000                   # INVALID     $s7, $t6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284ffcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x284FFC raw=0x42EE0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285000:
    // 0x285000: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285000u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x285000 raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285004:
    // 0x285004: 0x41b00000  .word       0x41B00000                   # INVALID     $t5, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285004u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x285004 raw=0x41B00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285008:
    // 0x285008: 0xc2280000  ll          $t0, 0x0($s1)
    ctx->pc = 0x285008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28500c:
    // 0x28500c: 0x0  nop
    ctx->pc = 0x28500cu;
    // NOP
label_285010:
    // 0x285010: 0xc1300000  ll          $s0, 0x0($t1)
    ctx->pc = 0x285010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285014:
    // 0x285014: 0x42f20000  .word       0x42F20000                   # INVALID     $s7, $s2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285014u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x285014 raw=0x42F20000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285018:
    // 0x285018: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285018u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x285018 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28501c:
    // 0x28501c: 0x41b00000  .word       0x41B00000                   # INVALID     $t5, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28501cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x28501C raw=0x41B00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285020:
    // 0x285020: 0x0  nop
    ctx->pc = 0x285020u;
    // NOP
label_285024:
    // 0x285024: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x285024u;
    
label_285028:
    // 0x285028: 0x2b03007d  slti        $v1, $t8, 0x7D
    ctx->pc = 0x285028u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)125) ? 1 : 0);
label_28502c:
    // 0x28502c: 0x0  nop
    ctx->pc = 0x28502cu;
    // NOP
label_285030:
    // 0x285030: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x285030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285034:
    // 0x285034: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x285034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285038:
    // 0x285038: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x285038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28503c:
    // 0x28503c: 0x42c00000  .word       0x42C00000                   # INVALID     $s6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28503cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x28503C raw=0x42C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285040:
    // 0x285040: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_285044:
    if (ctx->pc == 0x285044u) {
        ctx->pc = 0x285044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285040u;
        // 0x285044: 0x40e00000  .word       0x40E00000                   # INVALID     $a3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x7 at 0x285044 raw=0x40E00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x285048u;
        goto label_285048;
    }
    ctx->pc = 0x285040u;
    {
        const bool branch_taken_0x285040 = (false);
        ctx->pc = 0x285044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285040u;
        // 0x285044: 0x40e00000  .word       0x40E00000                   # INVALID     $a3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x7 at 0x285044 raw=0x40E00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x285040) {
            ctx->pc = 0x285044u;
            goto label_285044;
        }
    }
    ctx->pc = 0x285048u;
label_285048:
    // 0x285048: 0xc1880000  ll          $t0, 0x0($t4)
    ctx->pc = 0x285048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28504c:
    // 0x28504c: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x28504cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285050:
    // 0x285050: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x285050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285054:
    // 0x285054: 0x42b60000  .word       0x42B60000                   # INVALID     $s5, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285054u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x285054 raw=0x42B60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285058:
    // 0x285058: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_28505c:
    if (ctx->pc == 0x28505Cu) {
        ctx->pc = 0x28505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285058u;
        // 0x28505c: 0x41000000  bc0f        . + 4 + (0x0 << 2) (Delay Slot)
        // BC0 (Condition: 0x0) - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x285060u;
        goto label_285060;
    }
    ctx->pc = 0x285058u;
    {
        const bool branch_taken_0x285058 = (false);
        ctx->pc = 0x28505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285058u;
        // 0x28505c: 0x41000000  bc0f        . + 4 + (0x0 << 2) (Delay Slot)
        // BC0 (Condition: 0x0) - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x285058) {
            ctx->pc = 0x28505Cu;
            goto label_28505c;
        }
    }
    ctx->pc = 0x285060u;
label_285060:
    // 0x285060: 0x0  nop
    ctx->pc = 0x285060u;
    // NOP
label_285064:
    // 0x285064: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x285064u;
    
label_285068:
    // 0x285068: 0x2500007e  addiu       $zero, $t0, 0x7E
    ctx->pc = 0x285068u;
    // NOP (addiu $zero, ...)
label_28506c:
    // 0x28506c: 0x0  nop
    ctx->pc = 0x28506cu;
    // NOP
label_285070:
    // 0x285070: 0xc1880000  ll          $t0, 0x0($t4)
    ctx->pc = 0x285070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285074:
    // 0x285074: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x285074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285078:
    // 0x285078: 0xc1300000  ll          $s0, 0x0($t1)
    ctx->pc = 0x285078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28507c:
    // 0x28507c: 0x43260000  .word       0x43260000                   # INVALID     $t9, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28507cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x28507C raw=0x43260000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285080:
    // 0x285080: 0x41b80000  .word       0x41B80000                   # INVALID     $t5, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285080u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x285080 raw=0x41B80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285084:
    // 0x285084: 0x41b80000  .word       0x41B80000                   # INVALID     $t5, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285084u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x285084 raw=0x41B80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285088:
    // 0x285088: 0xc1980000  ll          $t8, 0x0($t4)
    ctx->pc = 0x285088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28508c:
    // 0x28508c: 0xc1c00000  ll          $zero, 0x0($t6)
    ctx->pc = 0x28508cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285090:
    // 0x285090: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x285090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285094:
    // 0x285094: 0x421c0000  .word       0x421C0000                   # INVALID     $s0, $gp, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x285094u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x285094 raw=0x421C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285098:
    // 0x285098: 0xc1f80000  ll          $t8, 0x0($t7)
    ctx->pc = 0x285098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28509c:
    // 0x28509c: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28509cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x28509C raw=0x41F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2850a0:
    // 0x2850a0: 0x0  nop
    ctx->pc = 0x2850a0u;
    // NOP
label_2850a4:
    // 0x2850a4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x2850a4u;
    
label_2850a8:
    // 0x2850a8: 0x2c04007f  sltiu       $a0, $zero, 0x7F
    ctx->pc = 0x2850a8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_2850ac:
    // 0x2850ac: 0x0  nop
    ctx->pc = 0x2850acu;
    // NOP
label_2850b0:
    // 0x2850b0: 0x42540000  .word       0x42540000                   # INVALID     $s2, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2850b0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x2850B0 raw=0x42540000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2850b4:
    // 0x2850b4: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x2850b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2850b8:
    // 0x2850b8: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x2850b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2850bc:
    // 0x2850bc: 0xc30f0000  ll          $t7, 0x0($t8)
    ctx->pc = 0x2850bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 0); SET_GPR_S32(ctx, 15, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2850c0:
    // 0x2850c0: 0x41700000  .word       0x41700000                   # INVALID     $t3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2850c0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x2850C0 raw=0x41700000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2850c4:
    // 0x2850c4: 0xc1880000  ll          $t0, 0x0($t4)
    ctx->pc = 0x2850c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2850c8:
    // 0x2850c8: 0xc2a00000  ll          $zero, 0x0($s5)
    ctx->pc = 0x2850c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2850cc:
    // 0x2850cc: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x2850ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2850d0:
    // 0x2850d0: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x2850d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2850d4:
    // 0x2850d4: 0x42fa0000  .word       0x42FA0000                   # INVALID     $s7, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2850d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x2850D4 raw=0x42FA0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2850d8:
    // 0x2850d8: 0x41700000  .word       0x41700000                   # INVALID     $t3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2850d8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x2850D8 raw=0x41700000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2850dc:
    // 0x2850dc: 0x42180000  .word       0x42180000                   # INVALID     $s0, $t8, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2850dcu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x2850DC raw=0x42180000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2850e0:
    // 0x2850e0: 0x0  nop
    ctx->pc = 0x2850e0u;
    // NOP
label_2850e4:
    // 0x2850e4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x2850e4u;
    
label_2850e8:
    // 0x2850e8: 0x2a030080  slti        $v1, $s0, 0x80
    ctx->pc = 0x2850e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)128) ? 1 : 0);
label_2850ec:
    // 0x2850ec: 0x0  nop
    ctx->pc = 0x2850ecu;
    // NOP
label_2850f0:
    // 0x2850f0: 0x42280000  .word       0x42280000                   # INVALID     $s1, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2850f0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x2850F0 raw=0x42280000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2850f4:
    // 0x2850f4: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x2850f4u;
    // CACHE instruction (ignored)
label_2850f8:
    // 0x2850f8: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x2850f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2850fc:
    // 0x2850fc: 0x431a0000  .word       0x431A0000                   # INVALID     $t8, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2850fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x2850FC raw=0x431A0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285100:
    // 0x285100: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x285100u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_285104:
    // 0x285104: 0x41b00000  .word       0x41B00000                   # INVALID     $t5, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285104u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x285104 raw=0x41B00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285108:
    // 0x285108: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x285108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28510c:
    // 0x28510c: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x28510cu;
    // CACHE instruction (ignored)
label_285110:
    // 0x285110: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x285110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285114:
    // 0x285114: 0x431a0000  .word       0x431A0000                   # INVALID     $t8, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285114u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x285114 raw=0x431A0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285118:
    // 0x285118: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x285118u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_28511c:
    // 0x28511c: 0x41b00000  .word       0x41B00000                   # INVALID     $t5, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28511cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x28511C raw=0x41B00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285120:
    // 0x285120: 0x0  nop
    ctx->pc = 0x285120u;
    // NOP
label_285124:
    // 0x285124: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x285124u;
    
label_285128:
    // 0x285128: 0x2e020081  sltiu       $v0, $s0, 0x81
    ctx->pc = 0x285128u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
label_28512c:
    // 0x28512c: 0x0  nop
    ctx->pc = 0x28512cu;
    // NOP
label_285130:
    // 0x285130: 0xc2b80000  ll          $t8, 0x0($s5)
    ctx->pc = 0x285130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285134:
    // 0x285134: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x285134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285138:
    // 0x285138: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x285138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28513c:
    // 0x28513c: 0x43230000  .word       0x43230000                   # INVALID     $t9, $v1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28513cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x28513C raw=0x43230000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285140:
    // 0x285140: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285140u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x285140 raw=0x41F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285144:
    // 0x285144: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x285144u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x285144 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285148:
    // 0x285148: 0xc1d00000  ll          $s0, 0x0($t6)
    ctx->pc = 0x285148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28514c:
    // 0x28514c: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x28514cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285150:
    // 0x285150: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x285150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285154:
    // 0x285154: 0x42880000  .word       0x42880000                   # INVALID     $s4, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285154u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x285154 raw=0x42880000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285158:
    // 0x285158: 0x40a00000  dmtc0       $zero, Index
    ctx->pc = 0x285158u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x285158 raw=0x40A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28515c:
    // 0x28515c: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x28515cu;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_285160:
    // 0x285160: 0x0  nop
    ctx->pc = 0x285160u;
    // NOP
label_285164:
    // 0x285164: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x285164u;
    
label_285168:
    // 0x285168: 0x26000082  addiu       $zero, $s0, 0x82
    ctx->pc = 0x285168u;
    // NOP (addiu $zero, ...)
label_28516c:
    // 0x28516c: 0x0  nop
    ctx->pc = 0x28516cu;
    // NOP
label_285170:
    // 0x285170: 0xc21c0000  ll          $gp, 0x0($s0)
    ctx->pc = 0x285170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); SET_GPR_S32(ctx, 28, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285174:
    // 0x285174: 0xc1e00000  ll          $zero, 0x0($t7)
    ctx->pc = 0x285174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285178:
    // 0x285178: 0xc2200000  ll          $zero, 0x0($s1)
    ctx->pc = 0x285178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28517c:
    // 0x28517c: 0x42e80000  .word       0x42E80000                   # INVALID     $s7, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28517cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x28517C raw=0x42E80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285180:
    // 0x285180: 0x42680000  .word       0x42680000                   # INVALID     $s3, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285180u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x285180 raw=0x42680000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285184:
    // 0x285184: 0x429c0000  .word       0x429C0000                   # INVALID     $s4, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285184u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x285184 raw=0x429C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285188:
    // 0x285188: 0xc2200000  ll          $zero, 0x0($s1)
    ctx->pc = 0x285188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28518c:
    // 0x28518c: 0xc2180000  ll          $t8, 0x0($s0)
    ctx->pc = 0x28518cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285190:
    // 0x285190: 0xc1e00000  ll          $zero, 0x0($t7)
    ctx->pc = 0x285190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285194:
    // 0x285194: 0x42b80000  .word       0x42B80000                   # INVALID     $s5, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285194u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x285194 raw=0x42B80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285198:
    // 0x285198: 0x42280000  .word       0x42280000                   # INVALID     $s1, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285198u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x285198 raw=0x42280000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28519c:
    // 0x28519c: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28519cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x28519C raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2851a0:
    // 0x2851a0: 0x0  nop
    ctx->pc = 0x2851a0u;
    // NOP
label_2851a4:
    // 0x2851a4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x2851a4u;
    
label_2851a8:
    // 0x2851a8: 0x30030083  andi        $v1, $zero, 0x83
    ctx->pc = 0x2851a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)131);
label_2851ac:
    // 0x2851ac: 0x0  nop
    ctx->pc = 0x2851acu;
    // NOP
label_2851b0:
    // 0x2851b0: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x2851b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2851b4:
    // 0x2851b4: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x2851b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2851b8:
    // 0x2851b8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x2851b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2851bc:
    // 0x2851bc: 0x43020000  .word       0x43020000                   # INVALID     $t8, $v0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2851bcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x2851BC raw=0x43020000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2851c0:
    // 0x2851c0: 0x41d00000  .word       0x41D00000                   # INVALID     $t6, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2851c0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x2851C0 raw=0x41D00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2851c4:
    // 0x2851c4: 0x42e00000  .word       0x42E00000                   # INVALID     $s7, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2851c4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x2851C4 raw=0x42E00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2851c8:
    // 0x2851c8: 0xc1f80000  ll          $t8, 0x0($t7)
    ctx->pc = 0x2851c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2851cc:
    // 0x2851cc: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x2851ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2851d0:
    // 0x2851d0: 0xc0e00000  ll          $zero, 0x0($a3)
    ctx->pc = 0x2851d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2851d4:
    // 0x2851d4: 0x430b0000  .word       0x430B0000                   # INVALID     $t8, $t3, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2851d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x2851D4 raw=0x430B0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2851d8:
    // 0x2851d8: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x2851d8u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_2851dc:
    // 0x2851dc: 0x42040000  .word       0x42040000                   # INVALID     $s0, $a0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2851dcu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x2851DC raw=0x42040000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2851e0:
    // 0x2851e0: 0x0  nop
    ctx->pc = 0x2851e0u;
    // NOP
label_2851e4:
    // 0x2851e4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x2851e4u;
    
label_2851e8:
    // 0x2851e8: 0x2a020084  slti        $v0, $s0, 0x84
    ctx->pc = 0x2851e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)132) ? 1 : 0);
label_2851ec:
    // 0x2851ec: 0x0  nop
    ctx->pc = 0x2851ecu;
    // NOP
label_2851f0:
    // 0x2851f0: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x2851f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2851f4:
    // 0x2851f4: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x2851f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2851f8:
    // 0x2851f8: 0xc28e0000  ll          $t6, 0x0($s4)
    ctx->pc = 0x2851f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); SET_GPR_S32(ctx, 14, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2851fc:
    // 0x2851fc: 0x42880000  .word       0x42880000                   # INVALID     $s4, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2851fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x2851FC raw=0x42880000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285200:
    // 0x285200: 0x40a00000  dmtc0       $zero, Index
    ctx->pc = 0x285200u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x285200 raw=0x40A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285204:
    // 0x285204: 0x430f0000  .word       0x430F0000                   # INVALID     $t8, $t7, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285204u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x285204 raw=0x430F0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285208:
    // 0x285208: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x285208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28520c:
    // 0x28520c: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x28520cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285210:
    // 0x285210: 0xc28e0000  ll          $t6, 0x0($s4)
    ctx->pc = 0x285210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); SET_GPR_S32(ctx, 14, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285214:
    // 0x285214: 0x42880000  .word       0x42880000                   # INVALID     $s4, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285214u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x285214 raw=0x42880000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285218:
    // 0x285218: 0x40a00000  dmtc0       $zero, Index
    ctx->pc = 0x285218u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x285218 raw=0x40A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28521c:
    // 0x28521c: 0x430f0000  .word       0x430F0000                   # INVALID     $t8, $t7, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28521cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x28521C raw=0x430F0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285220:
    // 0x285220: 0x0  nop
    ctx->pc = 0x285220u;
    // NOP
label_285224:
    // 0x285224: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x285224u;
    
label_285228:
    // 0x285228: 0x25030085  addiu       $v1, $t0, 0x85
    ctx->pc = 0x285228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 133));
label_28522c:
    // 0x28522c: 0x0  nop
    ctx->pc = 0x28522cu;
    // NOP
label_285230:
    // 0x285230: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x285230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285234:
    // 0x285234: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x285234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285238:
    // 0x285238: 0xc28e0000  ll          $t6, 0x0($s4)
    ctx->pc = 0x285238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); SET_GPR_S32(ctx, 14, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28523c:
    // 0x28523c: 0x42880000  .word       0x42880000                   # INVALID     $s4, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28523cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x28523C raw=0x42880000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285240:
    // 0x285240: 0x40a00000  dmtc0       $zero, Index
    ctx->pc = 0x285240u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x285240 raw=0x40A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285244:
    // 0x285244: 0x430f0000  .word       0x430F0000                   # INVALID     $t8, $t7, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285244u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x285244 raw=0x430F0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285248:
    // 0x285248: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x285248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28524c:
    // 0x28524c: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x28524cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285250:
    // 0x285250: 0xc28e0000  ll          $t6, 0x0($s4)
    ctx->pc = 0x285250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); SET_GPR_S32(ctx, 14, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285254:
    // 0x285254: 0x42880000  .word       0x42880000                   # INVALID     $s4, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285254u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x285254 raw=0x42880000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285258:
    // 0x285258: 0x40a00000  dmtc0       $zero, Index
    ctx->pc = 0x285258u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x285258 raw=0x40A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28525c:
    // 0x28525c: 0x430f0000  .word       0x430F0000                   # INVALID     $t8, $t7, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28525cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x28525C raw=0x430F0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285260:
    // 0x285260: 0x0  nop
    ctx->pc = 0x285260u;
    // NOP
label_285264:
    // 0x285264: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x285264u;
    
label_285268:
    // 0x285268: 0x26030086  addiu       $v1, $s0, 0x86
    ctx->pc = 0x285268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 134));
label_28526c:
    // 0x28526c: 0x0  nop
    ctx->pc = 0x28526cu;
    // NOP
label_285270:
    // 0x285270: 0xc1f00000  ll          $s0, 0x0($t7)
    ctx->pc = 0x285270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285274:
    // 0x285274: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x285274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285278:
    // 0x285278: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x285278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28527c:
    // 0x28527c: 0x434b0000  .word       0x434B0000                   # INVALID     $k0, $t3, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28527cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x28527C raw=0x434B0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285280:
    // 0x285280: 0x41800000  .word       0x41800000                   # INVALID     $t4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285280u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x285280 raw=0x41800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285284:
    // 0x285284: 0x42280000  .word       0x42280000                   # INVALID     $s1, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285284u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x285284 raw=0x42280000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285288:
    // 0x285288: 0xc1f00000  ll          $s0, 0x0($t7)
    ctx->pc = 0x285288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28528c:
    // 0x28528c: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x28528cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285290:
    // 0x285290: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x285290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285294:
    // 0x285294: 0x434b0000  .word       0x434B0000                   # INVALID     $k0, $t3, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285294u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x285294 raw=0x434B0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285298:
    // 0x285298: 0x41800000  .word       0x41800000                   # INVALID     $t4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285298u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x285298 raw=0x41800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28529c:
    // 0x28529c: 0x42280000  .word       0x42280000                   # INVALID     $s1, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28529cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x28529C raw=0x42280000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2852a0:
    // 0x2852a0: 0x0  nop
    ctx->pc = 0x2852a0u;
    // NOP
label_2852a4:
    // 0x2852a4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x2852a4u;
    
label_2852a8:
    // 0x2852a8: 0x2e020087  sltiu       $v0, $s0, 0x87
    ctx->pc = 0x2852a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)135) ? 1 : 0);
label_2852ac:
    // 0x2852ac: 0x0  nop
    ctx->pc = 0x2852acu;
    // NOP
label_2852b0:
    // 0x2852b0: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x2852b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2852b4:
    // 0x2852b4: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x2852b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2852b8:
    // 0x2852b8: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x2852b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2852bc:
    // 0x2852bc: 0x431a0000  .word       0x431A0000                   # INVALID     $t8, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2852bcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x2852BC raw=0x431A0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2852c0:
    // 0x2852c0: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x2852c0u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_2852c4:
    // 0x2852c4: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x2852c4u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_2852c8:
    // 0x2852c8: 0xc1980000  ll          $t8, 0x0($t4)
    ctx->pc = 0x2852c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2852cc:
    // 0x2852cc: 0xc1c00000  ll          $zero, 0x0($t6)
    ctx->pc = 0x2852ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2852d0:
    // 0x2852d0: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x2852d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2852d4:
    // 0x2852d4: 0x421c0000  .word       0x421C0000                   # INVALID     $s0, $gp, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2852d4u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x2852D4 raw=0x421C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2852d8:
    // 0x2852d8: 0xc1f80000  ll          $t8, 0x0($t7)
    ctx->pc = 0x2852d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2852dc:
    // 0x2852dc: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2852dcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x2852DC raw=0x41F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2852e0:
    // 0x2852e0: 0x0  nop
    ctx->pc = 0x2852e0u;
    // NOP
label_2852e4:
    // 0x2852e4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x2852e4u;
    
label_2852e8:
    // 0x2852e8: 0x27040088  addiu       $a0, $t8, 0x88
    ctx->pc = 0x2852e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), 136));
label_2852ec:
    // 0x2852ec: 0x0  nop
    ctx->pc = 0x2852ecu;
    // NOP
label_2852f0:
    // 0x2852f0: 0xc1d80000  ll          $t8, 0x0($t6)
    ctx->pc = 0x2852f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2852f4:
    // 0x2852f4: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x2852f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2852f8:
    // 0x2852f8: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x2852f8u;
    // CACHE instruction (ignored)
label_2852fc:
    // 0x2852fc: 0x42500000  .word       0x42500000                   # INVALID     $s2, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2852fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x2852FC raw=0x42500000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285300:
    // 0x285300: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285300u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x285300 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285304:
    // 0x285304: 0x42580000  .word       0x42580000                   # INVALID     $s2, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285304u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x285304 raw=0x42580000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285308:
    // 0x285308: 0xc1d80000  ll          $t8, 0x0($t6)
    ctx->pc = 0x285308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28530c:
    // 0x28530c: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x28530cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285310:
    // 0x285310: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x285310u;
    // CACHE instruction (ignored)
label_285314:
    // 0x285314: 0x42500000  .word       0x42500000                   # INVALID     $s2, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285314u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x285314 raw=0x42500000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285318:
    // 0x285318: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285318u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x285318 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28531c:
    // 0x28531c: 0x42580000  .word       0x42580000                   # INVALID     $s2, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28531cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x28531C raw=0x42580000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285320:
    // 0x285320: 0x0  nop
    ctx->pc = 0x285320u;
    // NOP
label_285324:
    // 0x285324: 0x0  nop
    ctx->pc = 0x285324u;
    // NOP
label_285328:
    // 0x285328: 0x10053  .word       0x00010053                   # mtlo        $zero # 00010040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285328u;
    ctx->lo = GPR_U64(ctx, 0);
label_28532c:
    // 0x28532c: 0x0  nop
    ctx->pc = 0x28532cu;
    // NOP
label_285330:
    // 0x285330: 0xc1d80000  ll          $t8, 0x0($t6)
    ctx->pc = 0x285330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285334:
    // 0x285334: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x285334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285338:
    // 0x285338: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x285338u;
    // CACHE instruction (ignored)
label_28533c:
    // 0x28533c: 0x42500000  .word       0x42500000                   # INVALID     $s2, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28533cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x28533C raw=0x42500000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285340:
    // 0x285340: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285340u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x285340 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285344:
    // 0x285344: 0x42580000  .word       0x42580000                   # INVALID     $s2, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285344u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x285344 raw=0x42580000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285348:
    // 0x285348: 0xc1d80000  ll          $t8, 0x0($t6)
    ctx->pc = 0x285348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28534c:
    // 0x28534c: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x28534cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285350:
    // 0x285350: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x285350u;
    // CACHE instruction (ignored)
label_285354:
    // 0x285354: 0x42500000  .word       0x42500000                   # INVALID     $s2, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285354u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x285354 raw=0x42500000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285358:
    // 0x285358: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285358u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x285358 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28535c:
    // 0x28535c: 0x42580000  .word       0x42580000                   # INVALID     $s2, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28535cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x28535C raw=0x42580000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285360:
    // 0x285360: 0x0  nop
    ctx->pc = 0x285360u;
    // NOP
label_285364:
    // 0x285364: 0x0  nop
    ctx->pc = 0x285364u;
    // NOP
label_285368:
    // 0x285368: 0x10054  .word       0x00010054                   # dsllv       $zero, $at, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285368u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_28536c:
    // 0x28536c: 0x0  nop
    ctx->pc = 0x28536cu;
    // NOP
label_285370:
    // 0x285370: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x285370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285374:
    // 0x285374: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x285374u;
    // CACHE instruction (ignored)
label_285378:
    // 0x285378: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x285378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28537c:
    // 0x28537c: 0x42de0000  .word       0x42DE0000                   # INVALID     $s6, $fp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28537cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x28537C raw=0x42DE0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285380:
    // 0x285380: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x285380u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_285384:
    // 0x285384: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x285384u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x285384 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285388:
    // 0x285388: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x285388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28538c:
    // 0x28538c: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x28538cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285390:
    // 0x285390: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x285390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285394:
    // 0x285394: 0x42de0000  .word       0x42DE0000                   # INVALID     $s6, $fp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285394u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x285394 raw=0x42DE0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285398:
    // 0x285398: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x285398u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_28539c:
    // 0x28539c: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x28539cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x28539C raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2853a0:
    // 0x2853a0: 0x0  nop
    ctx->pc = 0x2853a0u;
    // NOP
label_2853a4:
    // 0x2853a4: 0x0  nop
    ctx->pc = 0x2853a4u;
    // NOP
label_2853a8:
    // 0x2853a8: 0x8000000  j           func_000000
label_2853ac:
    if (ctx->pc == 0x2853ACu) {
        ctx->pc = 0x2853B0u;
        goto label_2853b0;
    }
    ctx->pc = 0x2853A8u;
    ctx->pc = 0x0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x0u, 0x2853A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2853B0u;
label_2853b0:
    // 0x2853b0: 0xc1700000  ll          $s0, 0x0($t3)
    ctx->pc = 0x2853b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2853b4:
    // 0x2853b4: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x2853b4u;
    // CACHE instruction (ignored)
label_2853b8:
    // 0x2853b8: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x2853b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2853bc:
    // 0x2853bc: 0x43130000  .word       0x43130000                   # INVALID     $t8, $s3, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2853bcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x2853BC raw=0x43130000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2853c0:
    // 0x2853c0: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x2853c0u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2853c4:
    // 0x2853c4: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2853c4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x2853C4 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2853c8:
    // 0x2853c8: 0xc1880000  ll          $t0, 0x0($t4)
    ctx->pc = 0x2853c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2853cc:
    // 0x2853cc: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x2853ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2853d0:
    // 0x2853d0: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x2853d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2853d4:
    // 0x2853d4: 0x43150000  .word       0x43150000                   # INVALID     $t8, $s5, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2853d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x2853D4 raw=0x43150000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2853d8:
    // 0x2853d8: 0x40400000  cfc0        $zero, Index
    ctx->pc = 0x2853d8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x2853D8 raw=0x40400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2853dc:
    // 0x2853dc: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x2853dcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x2853DC raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2853e0:
    // 0x2853e0: 0x0  nop
    ctx->pc = 0x2853e0u;
    // NOP
label_2853e4:
    // 0x2853e4: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x2853e4u;
    
label_2853e8:
    // 0x2853e8: 0xf000003  jal         func_C00000C
label_2853ec:
    if (ctx->pc == 0x2853ECu) {
        ctx->pc = 0x2853F0u;
        goto label_2853f0;
    }
    ctx->pc = 0x2853E8u;
    SET_GPR_U32(ctx, 31, 0x2853F0u);
    ctx->pc = 0xC00000Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC00000Cu, 0x2853E8u, 0x2853F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2853F0u;
label_2853f0:
    // 0x2853f0: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x2853f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2853f4:
    // 0x2853f4: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x2853f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2853f8:
    // 0x2853f8: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x2853f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2853fc:
    // 0x2853fc: 0x43240000  .word       0x43240000                   # INVALID     $t9, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2853fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2853FC raw=0x43240000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285400:
    // 0x285400: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x285400u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_285404:
    // 0x285404: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285404u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x285404 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285408:
    // 0x285408: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x285408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28540c:
    // 0x28540c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x28540cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285410:
    // 0x285410: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x285410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285414:
    // 0x285414: 0x43240000  .word       0x43240000                   # INVALID     $t9, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285414u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x285414 raw=0x43240000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285418:
    // 0x285418: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x285418u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_28541c:
    // 0x28541c: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28541cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x28541C raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285420:
    // 0x285420: 0x0  nop
    ctx->pc = 0x285420u;
    // NOP
label_285424:
    // 0x285424: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x285424u;
    
label_285428:
    // 0x285428: 0x14000038  bnez        $zero, . + 4 + (0x38 << 2)
label_28542c:
    if (ctx->pc == 0x28542Cu) {
        ctx->pc = 0x285430u;
        goto label_285430;
    }
    ctx->pc = 0x285428u;
    {
        const bool branch_taken_0x285428 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 0));
        if (branch_taken_0x285428) {
            ctx->pc = 0x28550Cu;
            { ctx->pc = 0x28550c; return; }
        }
    }
    ctx->pc = 0x285430u;
label_285430:
    // 0x285430: 0x42ae0000  .word       0x42AE0000                   # INVALID     $s5, $t6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285430u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x285430 raw=0x42AE0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285434:
    // 0x285434: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x285434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285438:
    // 0x285438: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x285438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28543c:
    // 0x28543c: 0x43040000  .word       0x43040000                   # INVALID     $t8, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28543cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x28543C raw=0x43040000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285440:
    // 0x285440: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x285440u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x285440 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285444:
    // 0x285444: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x285444u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_285448:
    // 0x285448: 0xc1f80000  ll          $t8, 0x0($t7)
    ctx->pc = 0x285448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28544c:
    // 0x28544c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x28544cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285450:
    // 0x285450: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x285450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285454:
    // 0x285454: 0x42ec0000  .word       0x42EC0000                   # INVALID     $s7, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285454u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x285454 raw=0x42EC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285458:
    // 0x285458: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x285458u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_28545c:
    // 0x28545c: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x28545cu;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_285460:
    // 0x285460: 0x0  nop
    ctx->pc = 0x285460u;
    // NOP
label_285464:
    // 0x285464: 0x0  nop
    ctx->pc = 0x285464u;
    // NOP
label_285468:
    // 0x285468: 0x7020006  bltzl       $t8, . + 4 + (0x6 << 2)
label_28546c:
    if (ctx->pc == 0x28546Cu) {
        ctx->pc = 0x285470u;
        goto label_285470;
    }
    ctx->pc = 0x285468u;
    {
        const bool branch_taken_0x285468 = (GPR_S32(ctx, 24) < 0);
        if (branch_taken_0x285468) {
            ctx->pc = 0x285484u;
            goto label_285484;
        }
    }
    ctx->pc = 0x285470u;
label_285470:
    // 0x285470: 0x42ba0000  .word       0x42BA0000                   # INVALID     $s5, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285470u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x285470 raw=0x42BA0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285474:
    // 0x285474: 0xc0e00000  ll          $zero, 0x0($a3)
    ctx->pc = 0x285474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285478:
    // 0x285478: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x285478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28547c:
    // 0x28547c: 0x432e0000  .word       0x432E0000                   # INVALID     $t9, $t6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28547cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x28547C raw=0x432E0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285480:
    // 0x285480: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285480u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x285480 raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285484:
    // 0x285484: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x285484u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_285488:
    // 0x285488: 0xc22c0000  ll          $t4, 0x0($s1)
    ctx->pc = 0x285488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28548c:
    // 0x28548c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x28548cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285490:
    // 0x285490: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x285490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285494:
    // 0x285494: 0x43080000  .word       0x43080000                   # INVALID     $t8, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285494u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x285494 raw=0x43080000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285498:
    // 0x285498: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x285498u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_28549c:
    // 0x28549c: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x28549cu;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_2854a0:
    // 0x2854a0: 0x0  nop
    ctx->pc = 0x2854a0u;
    // NOP
label_2854a4:
    // 0x2854a4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x2854a4u;
    
label_2854a8:
    // 0x2854a8: 0xf020032  jal         func_C0800C8
label_2854ac:
    if (ctx->pc == 0x2854ACu) {
        ctx->pc = 0x2854B0u;
        goto label_2854b0;
    }
    ctx->pc = 0x2854A8u;
    SET_GPR_U32(ctx, 31, 0x2854B0u);
    ctx->pc = 0xC0800C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC0800C8u, 0x2854A8u, 0x2854B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2854B0u;
label_2854b0:
    // 0x2854b0: 0x428c0000  .word       0x428C0000                   # INVALID     $s4, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2854b0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x2854B0 raw=0x428C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2854b4:
    // 0x2854b4: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x2854b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2854b8:
    // 0x2854b8: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x2854b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2854bc:
    // 0x2854bc: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2854bcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x2854BC raw=0x43480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2854c0:
    // 0x2854c0: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x2854c0u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_2854c4:
    // 0x2854c4: 0x41d00000  .word       0x41D00000                   # INVALID     $t6, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2854c4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x2854C4 raw=0x41D00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2854c8:
    // 0x2854c8: 0xc2400000  ll          $zero, 0x0($s2)
    ctx->pc = 0x2854c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2854cc:
    // 0x2854cc: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x2854ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2854d0:
    // 0x2854d0: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x2854d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2854d4:
    // 0x2854d4: 0x42ec0000  .word       0x42EC0000                   # INVALID     $s7, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2854d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x2854D4 raw=0x42EC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->pc = 0x2854d8u;
    return;
}

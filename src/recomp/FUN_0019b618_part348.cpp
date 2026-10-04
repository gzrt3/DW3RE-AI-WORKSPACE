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

// Function: FUN_0019b618
// Address: 0x19b618 - 0x29b620
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b618_part348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x244d08u: goto label_244d08;
        case 0x244d0cu: goto label_244d0c;
        case 0x244d10u: goto label_244d10;
        case 0x244d14u: goto label_244d14;
        case 0x244d18u: goto label_244d18;
        case 0x244d1cu: goto label_244d1c;
        case 0x244d20u: goto label_244d20;
        case 0x244d24u: goto label_244d24;
        case 0x244d28u: goto label_244d28;
        case 0x244d2cu: goto label_244d2c;
        case 0x244d30u: goto label_244d30;
        case 0x244d34u: goto label_244d34;
        case 0x244d38u: goto label_244d38;
        case 0x244d3cu: goto label_244d3c;
        case 0x244d40u: goto label_244d40;
        case 0x244d44u: goto label_244d44;
        case 0x244d48u: goto label_244d48;
        case 0x244d4cu: goto label_244d4c;
        case 0x244d50u: goto label_244d50;
        case 0x244d54u: goto label_244d54;
        case 0x244d58u: goto label_244d58;
        case 0x244d5cu: goto label_244d5c;
        case 0x244d60u: goto label_244d60;
        case 0x244d64u: goto label_244d64;
        case 0x244d68u: goto label_244d68;
        case 0x244d6cu: goto label_244d6c;
        case 0x244d70u: goto label_244d70;
        case 0x244d74u: goto label_244d74;
        case 0x244d78u: goto label_244d78;
        case 0x244d7cu: goto label_244d7c;
        case 0x244d80u: goto label_244d80;
        case 0x244d84u: goto label_244d84;
        case 0x244d88u: goto label_244d88;
        case 0x244d8cu: goto label_244d8c;
        case 0x244d90u: goto label_244d90;
        case 0x244d94u: goto label_244d94;
        case 0x244d98u: goto label_244d98;
        case 0x244d9cu: goto label_244d9c;
        case 0x244da0u: goto label_244da0;
        case 0x244da4u: goto label_244da4;
        case 0x244da8u: goto label_244da8;
        case 0x244dacu: goto label_244dac;
        case 0x244db0u: goto label_244db0;
        case 0x244db4u: goto label_244db4;
        case 0x244db8u: goto label_244db8;
        case 0x244dbcu: goto label_244dbc;
        case 0x244dc0u: goto label_244dc0;
        case 0x244dc4u: goto label_244dc4;
        case 0x244dc8u: goto label_244dc8;
        case 0x244dccu: goto label_244dcc;
        case 0x244dd0u: goto label_244dd0;
        case 0x244dd4u: goto label_244dd4;
        case 0x244dd8u: goto label_244dd8;
        case 0x244ddcu: goto label_244ddc;
        case 0x244de0u: goto label_244de0;
        case 0x244de4u: goto label_244de4;
        case 0x244de8u: goto label_244de8;
        case 0x244decu: goto label_244dec;
        case 0x244df0u: goto label_244df0;
        case 0x244df4u: goto label_244df4;
        case 0x244df8u: goto label_244df8;
        case 0x244dfcu: goto label_244dfc;
        case 0x244e00u: goto label_244e00;
        case 0x244e04u: goto label_244e04;
        case 0x244e08u: goto label_244e08;
        case 0x244e0cu: goto label_244e0c;
        case 0x244e10u: goto label_244e10;
        case 0x244e14u: goto label_244e14;
        case 0x244e18u: goto label_244e18;
        case 0x244e1cu: goto label_244e1c;
        case 0x244e20u: goto label_244e20;
        case 0x244e24u: goto label_244e24;
        case 0x244e28u: goto label_244e28;
        case 0x244e2cu: goto label_244e2c;
        case 0x244e30u: goto label_244e30;
        case 0x244e34u: goto label_244e34;
        case 0x244e38u: goto label_244e38;
        case 0x244e3cu: goto label_244e3c;
        case 0x244e40u: goto label_244e40;
        case 0x244e44u: goto label_244e44;
        case 0x244e48u: goto label_244e48;
        case 0x244e4cu: goto label_244e4c;
        case 0x244e50u: goto label_244e50;
        case 0x244e54u: goto label_244e54;
        case 0x244e58u: goto label_244e58;
        case 0x244e5cu: goto label_244e5c;
        case 0x244e60u: goto label_244e60;
        case 0x244e64u: goto label_244e64;
        case 0x244e68u: goto label_244e68;
        case 0x244e6cu: goto label_244e6c;
        case 0x244e70u: goto label_244e70;
        case 0x244e74u: goto label_244e74;
        case 0x244e78u: goto label_244e78;
        case 0x244e7cu: goto label_244e7c;
        case 0x244e80u: goto label_244e80;
        case 0x244e84u: goto label_244e84;
        case 0x244e88u: goto label_244e88;
        case 0x244e8cu: goto label_244e8c;
        case 0x244e90u: goto label_244e90;
        case 0x244e94u: goto label_244e94;
        case 0x244e98u: goto label_244e98;
        case 0x244e9cu: goto label_244e9c;
        case 0x244ea0u: goto label_244ea0;
        case 0x244ea4u: goto label_244ea4;
        case 0x244ea8u: goto label_244ea8;
        case 0x244eacu: goto label_244eac;
        case 0x244eb0u: goto label_244eb0;
        case 0x244eb4u: goto label_244eb4;
        case 0x244eb8u: goto label_244eb8;
        case 0x244ebcu: goto label_244ebc;
        case 0x244ec0u: goto label_244ec0;
        case 0x244ec4u: goto label_244ec4;
        case 0x244ec8u: goto label_244ec8;
        case 0x244eccu: goto label_244ecc;
        case 0x244ed0u: goto label_244ed0;
        case 0x244ed4u: goto label_244ed4;
        case 0x244ed8u: goto label_244ed8;
        case 0x244edcu: goto label_244edc;
        case 0x244ee0u: goto label_244ee0;
        case 0x244ee4u: goto label_244ee4;
        case 0x244ee8u: goto label_244ee8;
        case 0x244eecu: goto label_244eec;
        case 0x244ef0u: goto label_244ef0;
        case 0x244ef4u: goto label_244ef4;
        case 0x244ef8u: goto label_244ef8;
        case 0x244efcu: goto label_244efc;
        case 0x244f00u: goto label_244f00;
        case 0x244f04u: goto label_244f04;
        case 0x244f08u: goto label_244f08;
        case 0x244f0cu: goto label_244f0c;
        case 0x244f10u: goto label_244f10;
        case 0x244f14u: goto label_244f14;
        case 0x244f18u: goto label_244f18;
        case 0x244f1cu: goto label_244f1c;
        case 0x244f20u: goto label_244f20;
        case 0x244f24u: goto label_244f24;
        case 0x244f28u: goto label_244f28;
        case 0x244f2cu: goto label_244f2c;
        case 0x244f30u: goto label_244f30;
        case 0x244f34u: goto label_244f34;
        case 0x244f38u: goto label_244f38;
        case 0x244f3cu: goto label_244f3c;
        case 0x244f40u: goto label_244f40;
        case 0x244f44u: goto label_244f44;
        case 0x244f48u: goto label_244f48;
        case 0x244f4cu: goto label_244f4c;
        case 0x244f50u: goto label_244f50;
        case 0x244f54u: goto label_244f54;
        case 0x244f58u: goto label_244f58;
        case 0x244f5cu: goto label_244f5c;
        case 0x244f60u: goto label_244f60;
        case 0x244f64u: goto label_244f64;
        case 0x244f68u: goto label_244f68;
        case 0x244f6cu: goto label_244f6c;
        case 0x244f70u: goto label_244f70;
        case 0x244f74u: goto label_244f74;
        case 0x244f78u: goto label_244f78;
        case 0x244f7cu: goto label_244f7c;
        case 0x244f80u: goto label_244f80;
        case 0x244f84u: goto label_244f84;
        case 0x244f88u: goto label_244f88;
        case 0x244f8cu: goto label_244f8c;
        case 0x244f90u: goto label_244f90;
        case 0x244f94u: goto label_244f94;
        case 0x244f98u: goto label_244f98;
        case 0x244f9cu: goto label_244f9c;
        case 0x244fa0u: goto label_244fa0;
        case 0x244fa4u: goto label_244fa4;
        case 0x244fa8u: goto label_244fa8;
        case 0x244facu: goto label_244fac;
        case 0x244fb0u: goto label_244fb0;
        case 0x244fb4u: goto label_244fb4;
        case 0x244fb8u: goto label_244fb8;
        case 0x244fbcu: goto label_244fbc;
        case 0x244fc0u: goto label_244fc0;
        case 0x244fc4u: goto label_244fc4;
        case 0x244fc8u: goto label_244fc8;
        case 0x244fccu: goto label_244fcc;
        case 0x244fd0u: goto label_244fd0;
        case 0x244fd4u: goto label_244fd4;
        case 0x244fd8u: goto label_244fd8;
        case 0x244fdcu: goto label_244fdc;
        case 0x244fe0u: goto label_244fe0;
        case 0x244fe4u: goto label_244fe4;
        case 0x244fe8u: goto label_244fe8;
        case 0x244fecu: goto label_244fec;
        case 0x244ff0u: goto label_244ff0;
        case 0x244ff4u: goto label_244ff4;
        case 0x244ff8u: goto label_244ff8;
        case 0x244ffcu: goto label_244ffc;
        case 0x245000u: goto label_245000;
        case 0x245004u: goto label_245004;
        case 0x245008u: goto label_245008;
        case 0x24500cu: goto label_24500c;
        case 0x245010u: goto label_245010;
        case 0x245014u: goto label_245014;
        case 0x245018u: goto label_245018;
        case 0x24501cu: goto label_24501c;
        case 0x245020u: goto label_245020;
        case 0x245024u: goto label_245024;
        case 0x245028u: goto label_245028;
        case 0x24502cu: goto label_24502c;
        case 0x245030u: goto label_245030;
        case 0x245034u: goto label_245034;
        case 0x245038u: goto label_245038;
        case 0x24503cu: goto label_24503c;
        case 0x245040u: goto label_245040;
        case 0x245044u: goto label_245044;
        case 0x245048u: goto label_245048;
        case 0x24504cu: goto label_24504c;
        case 0x245050u: goto label_245050;
        case 0x245054u: goto label_245054;
        case 0x245058u: goto label_245058;
        case 0x24505cu: goto label_24505c;
        case 0x245060u: goto label_245060;
        case 0x245064u: goto label_245064;
        case 0x245068u: goto label_245068;
        case 0x24506cu: goto label_24506c;
        case 0x245070u: goto label_245070;
        case 0x245074u: goto label_245074;
        case 0x245078u: goto label_245078;
        case 0x24507cu: goto label_24507c;
        case 0x245080u: goto label_245080;
        case 0x245084u: goto label_245084;
        case 0x245088u: goto label_245088;
        case 0x24508cu: goto label_24508c;
        case 0x245090u: goto label_245090;
        case 0x245094u: goto label_245094;
        case 0x245098u: goto label_245098;
        case 0x24509cu: goto label_24509c;
        case 0x2450a0u: goto label_2450a0;
        case 0x2450a4u: goto label_2450a4;
        case 0x2450a8u: goto label_2450a8;
        case 0x2450acu: goto label_2450ac;
        case 0x2450b0u: goto label_2450b0;
        case 0x2450b4u: goto label_2450b4;
        case 0x2450b8u: goto label_2450b8;
        case 0x2450bcu: goto label_2450bc;
        case 0x2450c0u: goto label_2450c0;
        case 0x2450c4u: goto label_2450c4;
        case 0x2450c8u: goto label_2450c8;
        case 0x2450ccu: goto label_2450cc;
        case 0x2450d0u: goto label_2450d0;
        case 0x2450d4u: goto label_2450d4;
        case 0x2450d8u: goto label_2450d8;
        case 0x2450dcu: goto label_2450dc;
        case 0x2450e0u: goto label_2450e0;
        case 0x2450e4u: goto label_2450e4;
        case 0x2450e8u: goto label_2450e8;
        case 0x2450ecu: goto label_2450ec;
        case 0x2450f0u: goto label_2450f0;
        case 0x2450f4u: goto label_2450f4;
        case 0x2450f8u: goto label_2450f8;
        case 0x2450fcu: goto label_2450fc;
        case 0x245100u: goto label_245100;
        case 0x245104u: goto label_245104;
        case 0x245108u: goto label_245108;
        case 0x24510cu: goto label_24510c;
        case 0x245110u: goto label_245110;
        case 0x245114u: goto label_245114;
        case 0x245118u: goto label_245118;
        case 0x24511cu: goto label_24511c;
        case 0x245120u: goto label_245120;
        case 0x245124u: goto label_245124;
        case 0x245128u: goto label_245128;
        case 0x24512cu: goto label_24512c;
        case 0x245130u: goto label_245130;
        case 0x245134u: goto label_245134;
        case 0x245138u: goto label_245138;
        case 0x24513cu: goto label_24513c;
        case 0x245140u: goto label_245140;
        case 0x245144u: goto label_245144;
        case 0x245148u: goto label_245148;
        case 0x24514cu: goto label_24514c;
        case 0x245150u: goto label_245150;
        case 0x245154u: goto label_245154;
        case 0x245158u: goto label_245158;
        case 0x24515cu: goto label_24515c;
        case 0x245160u: goto label_245160;
        case 0x245164u: goto label_245164;
        case 0x245168u: goto label_245168;
        case 0x24516cu: goto label_24516c;
        case 0x245170u: goto label_245170;
        case 0x245174u: goto label_245174;
        case 0x245178u: goto label_245178;
        case 0x24517cu: goto label_24517c;
        case 0x245180u: goto label_245180;
        case 0x245184u: goto label_245184;
        case 0x245188u: goto label_245188;
        case 0x24518cu: goto label_24518c;
        case 0x245190u: goto label_245190;
        case 0x245194u: goto label_245194;
        case 0x245198u: goto label_245198;
        case 0x24519cu: goto label_24519c;
        case 0x2451a0u: goto label_2451a0;
        case 0x2451a4u: goto label_2451a4;
        case 0x2451a8u: goto label_2451a8;
        case 0x2451acu: goto label_2451ac;
        case 0x2451b0u: goto label_2451b0;
        case 0x2451b4u: goto label_2451b4;
        case 0x2451b8u: goto label_2451b8;
        case 0x2451bcu: goto label_2451bc;
        case 0x2451c0u: goto label_2451c0;
        case 0x2451c4u: goto label_2451c4;
        case 0x2451c8u: goto label_2451c8;
        case 0x2451ccu: goto label_2451cc;
        case 0x2451d0u: goto label_2451d0;
        case 0x2451d4u: goto label_2451d4;
        case 0x2451d8u: goto label_2451d8;
        case 0x2451dcu: goto label_2451dc;
        case 0x2451e0u: goto label_2451e0;
        case 0x2451e4u: goto label_2451e4;
        case 0x2451e8u: goto label_2451e8;
        case 0x2451ecu: goto label_2451ec;
        case 0x2451f0u: goto label_2451f0;
        case 0x2451f4u: goto label_2451f4;
        case 0x2451f8u: goto label_2451f8;
        case 0x2451fcu: goto label_2451fc;
        case 0x245200u: goto label_245200;
        case 0x245204u: goto label_245204;
        case 0x245208u: goto label_245208;
        case 0x24520cu: goto label_24520c;
        case 0x245210u: goto label_245210;
        case 0x245214u: goto label_245214;
        case 0x245218u: goto label_245218;
        case 0x24521cu: goto label_24521c;
        case 0x245220u: goto label_245220;
        case 0x245224u: goto label_245224;
        case 0x245228u: goto label_245228;
        case 0x24522cu: goto label_24522c;
        case 0x245230u: goto label_245230;
        case 0x245234u: goto label_245234;
        case 0x245238u: goto label_245238;
        case 0x24523cu: goto label_24523c;
        case 0x245240u: goto label_245240;
        case 0x245244u: goto label_245244;
        case 0x245248u: goto label_245248;
        case 0x24524cu: goto label_24524c;
        case 0x245250u: goto label_245250;
        case 0x245254u: goto label_245254;
        case 0x245258u: goto label_245258;
        case 0x24525cu: goto label_24525c;
        case 0x245260u: goto label_245260;
        case 0x245264u: goto label_245264;
        case 0x245268u: goto label_245268;
        case 0x24526cu: goto label_24526c;
        case 0x245270u: goto label_245270;
        case 0x245274u: goto label_245274;
        case 0x245278u: goto label_245278;
        case 0x24527cu: goto label_24527c;
        case 0x245280u: goto label_245280;
        case 0x245284u: goto label_245284;
        case 0x245288u: goto label_245288;
        case 0x24528cu: goto label_24528c;
        case 0x245290u: goto label_245290;
        case 0x245294u: goto label_245294;
        case 0x245298u: goto label_245298;
        case 0x24529cu: goto label_24529c;
        case 0x2452a0u: goto label_2452a0;
        case 0x2452a4u: goto label_2452a4;
        case 0x2452a8u: goto label_2452a8;
        case 0x2452acu: goto label_2452ac;
        case 0x2452b0u: goto label_2452b0;
        case 0x2452b4u: goto label_2452b4;
        case 0x2452b8u: goto label_2452b8;
        case 0x2452bcu: goto label_2452bc;
        case 0x2452c0u: goto label_2452c0;
        case 0x2452c4u: goto label_2452c4;
        case 0x2452c8u: goto label_2452c8;
        case 0x2452ccu: goto label_2452cc;
        case 0x2452d0u: goto label_2452d0;
        case 0x2452d4u: goto label_2452d4;
        case 0x2452d8u: goto label_2452d8;
        case 0x2452dcu: goto label_2452dc;
        case 0x2452e0u: goto label_2452e0;
        case 0x2452e4u: goto label_2452e4;
        case 0x2452e8u: goto label_2452e8;
        case 0x2452ecu: goto label_2452ec;
        case 0x2452f0u: goto label_2452f0;
        case 0x2452f4u: goto label_2452f4;
        case 0x2452f8u: goto label_2452f8;
        case 0x2452fcu: goto label_2452fc;
        case 0x245300u: goto label_245300;
        case 0x245304u: goto label_245304;
        case 0x245308u: goto label_245308;
        case 0x24530cu: goto label_24530c;
        case 0x245310u: goto label_245310;
        case 0x245314u: goto label_245314;
        case 0x245318u: goto label_245318;
        case 0x24531cu: goto label_24531c;
        case 0x245320u: goto label_245320;
        case 0x245324u: goto label_245324;
        case 0x245328u: goto label_245328;
        case 0x24532cu: goto label_24532c;
        case 0x245330u: goto label_245330;
        case 0x245334u: goto label_245334;
        case 0x245338u: goto label_245338;
        case 0x24533cu: goto label_24533c;
        case 0x245340u: goto label_245340;
        case 0x245344u: goto label_245344;
        case 0x245348u: goto label_245348;
        case 0x24534cu: goto label_24534c;
        case 0x245350u: goto label_245350;
        case 0x245354u: goto label_245354;
        case 0x245358u: goto label_245358;
        case 0x24535cu: goto label_24535c;
        case 0x245360u: goto label_245360;
        case 0x245364u: goto label_245364;
        case 0x245368u: goto label_245368;
        case 0x24536cu: goto label_24536c;
        case 0x245370u: goto label_245370;
        case 0x245374u: goto label_245374;
        case 0x245378u: goto label_245378;
        case 0x24537cu: goto label_24537c;
        case 0x245380u: goto label_245380;
        case 0x245384u: goto label_245384;
        case 0x245388u: goto label_245388;
        case 0x24538cu: goto label_24538c;
        case 0x245390u: goto label_245390;
        case 0x245394u: goto label_245394;
        case 0x245398u: goto label_245398;
        case 0x24539cu: goto label_24539c;
        case 0x2453a0u: goto label_2453a0;
        case 0x2453a4u: goto label_2453a4;
        case 0x2453a8u: goto label_2453a8;
        case 0x2453acu: goto label_2453ac;
        case 0x2453b0u: goto label_2453b0;
        case 0x2453b4u: goto label_2453b4;
        case 0x2453b8u: goto label_2453b8;
        case 0x2453bcu: goto label_2453bc;
        case 0x2453c0u: goto label_2453c0;
        case 0x2453c4u: goto label_2453c4;
        case 0x2453c8u: goto label_2453c8;
        case 0x2453ccu: goto label_2453cc;
        case 0x2453d0u: goto label_2453d0;
        case 0x2453d4u: goto label_2453d4;
        case 0x2453d8u: goto label_2453d8;
        case 0x2453dcu: goto label_2453dc;
        case 0x2453e0u: goto label_2453e0;
        case 0x2453e4u: goto label_2453e4;
        case 0x2453e8u: goto label_2453e8;
        case 0x2453ecu: goto label_2453ec;
        case 0x2453f0u: goto label_2453f0;
        case 0x2453f4u: goto label_2453f4;
        case 0x2453f8u: goto label_2453f8;
        case 0x2453fcu: goto label_2453fc;
        case 0x245400u: goto label_245400;
        case 0x245404u: goto label_245404;
        case 0x245408u: goto label_245408;
        case 0x24540cu: goto label_24540c;
        case 0x245410u: goto label_245410;
        case 0x245414u: goto label_245414;
        case 0x245418u: goto label_245418;
        case 0x24541cu: goto label_24541c;
        case 0x245420u: goto label_245420;
        case 0x245424u: goto label_245424;
        case 0x245428u: goto label_245428;
        case 0x24542cu: goto label_24542c;
        case 0x245430u: goto label_245430;
        case 0x245434u: goto label_245434;
        case 0x245438u: goto label_245438;
        case 0x24543cu: goto label_24543c;
        case 0x245440u: goto label_245440;
        case 0x245444u: goto label_245444;
        case 0x245448u: goto label_245448;
        case 0x24544cu: goto label_24544c;
        case 0x245450u: goto label_245450;
        case 0x245454u: goto label_245454;
        case 0x245458u: goto label_245458;
        case 0x24545cu: goto label_24545c;
        case 0x245460u: goto label_245460;
        case 0x245464u: goto label_245464;
        case 0x245468u: goto label_245468;
        case 0x24546cu: goto label_24546c;
        case 0x245470u: goto label_245470;
        case 0x245474u: goto label_245474;
        case 0x245478u: goto label_245478;
        case 0x24547cu: goto label_24547c;
        case 0x245480u: goto label_245480;
        case 0x245484u: goto label_245484;
        case 0x245488u: goto label_245488;
        case 0x24548cu: goto label_24548c;
        case 0x245490u: goto label_245490;
        case 0x245494u: goto label_245494;
        case 0x245498u: goto label_245498;
        case 0x24549cu: goto label_24549c;
        case 0x2454a0u: goto label_2454a0;
        case 0x2454a4u: goto label_2454a4;
        case 0x2454a8u: goto label_2454a8;
        case 0x2454acu: goto label_2454ac;
        case 0x2454b0u: goto label_2454b0;
        case 0x2454b4u: goto label_2454b4;
        case 0x2454b8u: goto label_2454b8;
        case 0x2454bcu: goto label_2454bc;
        case 0x2454c0u: goto label_2454c0;
        case 0x2454c4u: goto label_2454c4;
        case 0x2454c8u: goto label_2454c8;
        case 0x2454ccu: goto label_2454cc;
        case 0x2454d0u: goto label_2454d0;
        case 0x2454d4u: goto label_2454d4;
        default: return;
    }

label_244d08:
    if (ctx->pc == 0x244D08u) {
        ctx->pc = 0x244D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D04u;
        // 0x244d08: 0xe81823  subu        $v1, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D0Cu;
        goto label_244d0c;
    }
    ctx->pc = 0x244D04u;
    {
        const bool branch_taken_0x244d04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x244D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D04u;
        // 0x244d08: 0xe81823  subu        $v1, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244d04) {
            ctx->pc = 0x244D80u;
            goto label_244d80;
        }
    }
    ctx->pc = 0x244D0Cu;
label_244d0c:
    // 0x244d0c: 0x1474818  mult        $t1, $t2, $a3
    ctx->pc = 0x244d0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_244d10:
    // 0x244d10: 0x128001a  div         $zero, $t1, $t0
    ctx->pc = 0x244d10u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_244d14:
    // 0x244d14: 0x0  nop
    ctx->pc = 0x244d14u;
    // NOP
label_244d18:
    // 0x244d18: 0x0  nop
    ctx->pc = 0x244d18u;
    // NOP
label_244d1c:
    // 0x244d1c: 0x5812  mflo        $t3
    ctx->pc = 0x244d1cu;
    SET_GPR_U64(ctx, 11, ctx->lo);
label_244d20:
    // 0x244d20: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_244d24:
    if (ctx->pc == 0x244D24u) {
        ctx->pc = 0x244D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D20u;
        // 0x244d24: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D28u;
        goto label_244d28;
    }
    ctx->pc = 0x244D20u;
    {
        const bool branch_taken_0x244d20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x244D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D20u;
        // 0x244d24: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244d20) {
            ctx->pc = 0x244D54u;
            goto label_244d54;
        }
    }
    ctx->pc = 0x244D28u;
label_244d28:
    // 0x244d28: 0x448c0  sll         $t1, $a0, 3
    ctx->pc = 0x244d28u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_244d2c:
    // 0x244d2c: 0xb2843  sra         $a1, $t3, 1
    ctx->pc = 0x244d2cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 11), 1));
label_244d30:
    // 0x244d30: 0x1242023  subu        $a0, $t1, $a0
    ctx->pc = 0x244d30u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_244d34:
    // 0x244d34: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x244d34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_244d38:
    // 0x244d38: 0x5610003  bgez        $t3, . + 4 + (0x3 << 2)
label_244d3c:
    if (ctx->pc == 0x244D3Cu) {
        ctx->pc = 0x244D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D38u;
        // 0x244d3c: 0x248a0078  addiu       $t2, $a0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D40u;
        goto label_244d40;
    }
    ctx->pc = 0x244D38u;
    {
        const bool branch_taken_0x244d38 = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x244D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D38u;
        // 0x244d3c: 0x248a0078  addiu       $t2, $a0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244d38) {
            ctx->pc = 0x244D48u;
            goto label_244d48;
        }
    }
    ctx->pc = 0x244D40u;
label_244d40:
    // 0x244d40: 0x25640001  addiu       $a0, $t3, 0x1
    ctx->pc = 0x244d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_244d44:
    // 0x244d44: 0x42843  sra         $a1, $a0, 1
    ctx->pc = 0x244d44u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 1));
label_244d48:
    // 0x244d48: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x244d48u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_244d4c:
    // 0x244d4c: 0x10000003  b           . + 4 + (0x3 << 2)
label_244d50:
    if (ctx->pc == 0x244D50u) {
        ctx->pc = 0x244D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D4Cu;
        // 0x244d50: 0x240c0010  addiu       $t4, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D54u;
        goto label_244d54;
    }
    ctx->pc = 0x244D4Cu;
    {
        const bool branch_taken_0x244d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D4Cu;
        // 0x244d50: 0x240c0010  addiu       $t4, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244d4c) {
            ctx->pc = 0x244D5Cu;
            goto label_244d5c;
        }
    }
    ctx->pc = 0x244D54u;
label_244d54:
    // 0x244d54: 0x240a00b4  addiu       $t2, $zero, 0xB4
    ctx->pc = 0x244d54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_244d58:
    // 0x244d58: 0x240c0018  addiu       $t4, $zero, 0x18
    ctx->pc = 0x244d58u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_244d5c:
    // 0x244d5c: 0x1072023  subu        $a0, $t0, $a3
    ctx->pc = 0x244d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_244d60:
    // 0x244d60: 0x64090080  daddiu      $t1, $zero, 0x80
    ctx->pc = 0x244d60u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
label_244d64:
    // 0x244d64: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x244d64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_244d68:
    // 0x244d68: 0x88001a  div         $zero, $a0, $t0
    ctx->pc = 0x244d68u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_244d6c:
    // 0x244d6c: 0x0  nop
    ctx->pc = 0x244d6cu;
    // NOP
label_244d70:
    // 0x244d70: 0x0  nop
    ctx->pc = 0x244d70u;
    // NOP
label_244d74:
    // 0x244d74: 0x2012  mflo        $a0
    ctx->pc = 0x244d74u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_244d78:
    // 0x244d78: 0x10000020  b           . + 4 + (0x20 << 2)
label_244d7c:
    if (ctx->pc == 0x244D7Cu) {
        ctx->pc = 0x244D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D78u;
        // 0x244d7c: 0x308800ff  andi        $t0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D80u;
        goto label_244d80;
    }
    ctx->pc = 0x244D78u;
    {
        const bool branch_taken_0x244d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D78u;
        // 0x244d7c: 0x308800ff  andi        $t0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x244d78) {
            ctx->pc = 0x244DFCu;
            goto label_244dfc;
        }
    }
    ctx->pc = 0x244D80u;
label_244d80:
    // 0x244d80: 0x1286823  subu        $t5, $t1, $t0
    ctx->pc = 0x244d80u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_244d84:
    // 0x244d84: 0x1431818  mult        $v1, $t2, $v1
    ctx->pc = 0x244d84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_244d88:
    // 0x244d88: 0x6d001a  div         $zero, $v1, $t5
    ctx->pc = 0x244d88u;
    { int32_t divisor = GPR_S32(ctx, 13);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_244d8c:
    // 0x244d8c: 0x0  nop
    ctx->pc = 0x244d8cu;
    // NOP
label_244d90:
    // 0x244d90: 0x0  nop
    ctx->pc = 0x244d90u;
    // NOP
label_244d94:
    // 0x244d94: 0x1812  mflo        $v1
    ctx->pc = 0x244d94u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_244d98:
    // 0x244d98: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x244d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_244d9c:
    // 0x244d9c: 0x2468ffec  addiu       $t0, $v1, -0x14
    ctx->pc = 0x244d9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
label_244da0:
    // 0x244da0: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_244da4:
    if (ctx->pc == 0x244DA4u) {
        ctx->pc = 0x244DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244DA0u;
        // 0x244da4: 0x1485823  subu        $t3, $t2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244DA8u;
        goto label_244da8;
    }
    ctx->pc = 0x244DA0u;
    {
        const bool branch_taken_0x244da0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x244DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244DA0u;
        // 0x244da4: 0x1485823  subu        $t3, $t2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244da0) {
            ctx->pc = 0x244DD4u;
            goto label_244dd4;
        }
    }
    ctx->pc = 0x244DA8u;
label_244da8:
    // 0x244da8: 0x440c0  sll         $t0, $a0, 3
    ctx->pc = 0x244da8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_244dac:
    // 0x244dac: 0xb2843  sra         $a1, $t3, 1
    ctx->pc = 0x244dacu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 11), 1));
label_244db0:
    // 0x244db0: 0x1042023  subu        $a0, $t0, $a0
    ctx->pc = 0x244db0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_244db4:
    // 0x244db4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x244db4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_244db8:
    // 0x244db8: 0x5610003  bgez        $t3, . + 4 + (0x3 << 2)
label_244dbc:
    if (ctx->pc == 0x244DBCu) {
        ctx->pc = 0x244DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244DB8u;
        // 0x244dbc: 0x248a0078  addiu       $t2, $a0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244DC0u;
        goto label_244dc0;
    }
    ctx->pc = 0x244DB8u;
    {
        const bool branch_taken_0x244db8 = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x244DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244DB8u;
        // 0x244dbc: 0x248a0078  addiu       $t2, $a0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244db8) {
            ctx->pc = 0x244DC8u;
            goto label_244dc8;
        }
    }
    ctx->pc = 0x244DC0u;
label_244dc0:
    // 0x244dc0: 0x25640001  addiu       $a0, $t3, 0x1
    ctx->pc = 0x244dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_244dc4:
    // 0x244dc4: 0x42843  sra         $a1, $a0, 1
    ctx->pc = 0x244dc4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 1));
label_244dc8:
    // 0x244dc8: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x244dc8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_244dcc:
    // 0x244dcc: 0x10000003  b           . + 4 + (0x3 << 2)
label_244dd0:
    if (ctx->pc == 0x244DD0u) {
        ctx->pc = 0x244DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244DCCu;
        // 0x244dd0: 0x240c0010  addiu       $t4, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244DD4u;
        goto label_244dd4;
    }
    ctx->pc = 0x244DCCu;
    {
        const bool branch_taken_0x244dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244DCCu;
        // 0x244dd0: 0x240c0010  addiu       $t4, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244dcc) {
            ctx->pc = 0x244DDCu;
            goto label_244ddc;
        }
    }
    ctx->pc = 0x244DD4u;
label_244dd4:
    // 0x244dd4: 0x240a00b4  addiu       $t2, $zero, 0xB4
    ctx->pc = 0x244dd4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_244dd8:
    // 0x244dd8: 0x240c0018  addiu       $t4, $zero, 0x18
    ctx->pc = 0x244dd8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_244ddc:
    // 0x244ddc: 0x1272023  subu        $a0, $t1, $a3
    ctx->pc = 0x244ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_244de0:
    // 0x244de0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x244de0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244de4:
    // 0x244de4: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x244de4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_244de8:
    // 0x244de8: 0x8d001a  div         $zero, $a0, $t5
    ctx->pc = 0x244de8u;
    { int32_t divisor = GPR_S32(ctx, 13);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_244dec:
    // 0x244dec: 0x0  nop
    ctx->pc = 0x244decu;
    // NOP
label_244df0:
    // 0x244df0: 0x0  nop
    ctx->pc = 0x244df0u;
    // NOP
label_244df4:
    // 0x244df4: 0x2012  mflo        $a0
    ctx->pc = 0x244df4u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_244df8:
    // 0x244df8: 0x308900ff  andi        $t1, $a0, 0xFF
    ctx->pc = 0x244df8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_244dfc:
    // 0x244dfc: 0x6b2021  addu        $a0, $v1, $t3
    ctx->pc = 0x244dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_244e00:
    // 0x244e00: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x244e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_244e04:
    // 0x244e04: 0x24676c00  addiu       $a3, $v1, 0x6C00
    ctx->pc = 0x244e04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_244e08:
    // 0x244e08: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x244e08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_244e0c:
    // 0x244e0c: 0xa4c700b0  sh          $a3, 0xB0($a2)
    ctx->pc = 0x244e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 176), (uint16_t)GPR_U32(ctx, 7));
label_244e10:
    // 0x244e10: 0x24656c00  addiu       $a1, $v1, 0x6C00
    ctx->pc = 0x244e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_244e14:
    // 0x244e14: 0xa4c70080  sh          $a3, 0x80($a2)
    ctx->pc = 0x244e14u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 128), (uint16_t)GPR_U32(ctx, 7));
label_244e18:
    // 0x244e18: 0xa20c0  sll         $a0, $t2, 3
    ctx->pc = 0x244e18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_244e1c:
    // 0x244e1c: 0xa4c500c8  sh          $a1, 0xC8($a2)
    ctx->pc = 0x244e1cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 200), (uint16_t)GPR_U32(ctx, 5));
label_244e20:
    // 0x244e20: 0x14c1821  addu        $v1, $t2, $t4
    ctx->pc = 0x244e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
label_244e24:
    // 0x244e24: 0x24847900  addiu       $a0, $a0, 0x7900
    ctx->pc = 0x244e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
label_244e28:
    // 0x244e28: 0xa4c50098  sh          $a1, 0x98($a2)
    ctx->pc = 0x244e28u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 152), (uint16_t)GPR_U32(ctx, 5));
label_244e2c:
    // 0x244e2c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x244e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_244e30:
    // 0x244e30: 0xa4c4009a  sh          $a0, 0x9A($a2)
    ctx->pc = 0x244e30u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 154), (uint16_t)GPR_U32(ctx, 4));
label_244e34:
    // 0x244e34: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x244e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_244e38:
    // 0x244e38: 0xa4c40082  sh          $a0, 0x82($a2)
    ctx->pc = 0x244e38u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 130), (uint16_t)GPR_U32(ctx, 4));
label_244e3c:
    // 0x244e3c: 0xa4c300ca  sh          $v1, 0xCA($a2)
    ctx->pc = 0x244e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 202), (uint16_t)GPR_U32(ctx, 3));
label_244e40:
    // 0x244e40: 0x10000003  b           . + 4 + (0x3 << 2)
label_244e44:
    if (ctx->pc == 0x244E44u) {
        ctx->pc = 0x244E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E40u;
        // 0x244e44: 0xa4c300b2  sh          $v1, 0xB2($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 178), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244E48u;
        goto label_244e48;
    }
    ctx->pc = 0x244E40u;
    {
        const bool branch_taken_0x244e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E40u;
        // 0x244e44: 0xa4c300b2  sh          $v1, 0xB2($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 178), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244e40) {
            ctx->pc = 0x244E50u;
            goto label_244e50;
        }
    }
    ctx->pc = 0x244E48u;
label_244e48:
    // 0x244e48: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x244e48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244e4c:
    // 0x244e4c: 0x300800ff  andi        $t0, $zero, 0xFF
    ctx->pc = 0x244e4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
label_244e50:
    // 0x244e50: 0xa0c800a3  sb          $t0, 0xA3($a2)
    ctx->pc = 0x244e50u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 163), (uint8_t)GPR_U32(ctx, 8));
label_244e54:
    // 0x244e54: 0xa0c80073  sb          $t0, 0x73($a2)
    ctx->pc = 0x244e54u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 115), (uint8_t)GPR_U32(ctx, 8));
label_244e58:
    // 0x244e58: 0xa0c900bb  sb          $t1, 0xBB($a2)
    ctx->pc = 0x244e58u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 187), (uint8_t)GPR_U32(ctx, 9));
label_244e5c:
    // 0x244e5c: 0x3e00008  jr          $ra
label_244e60:
    if (ctx->pc == 0x244E60u) {
        ctx->pc = 0x244E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E5Cu;
        // 0x244e60: 0xa0c9008b  sb          $t1, 0x8B($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 139), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244E64u;
        goto label_244e64;
    }
    ctx->pc = 0x244E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E5Cu;
        // 0x244e60: 0xa0c9008b  sb          $t1, 0x8B($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 139), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244E64u;
label_244e64:
    // 0x244e64: 0x0  nop
    ctx->pc = 0x244e64u;
    // NOP
label_244e68:
    // 0x244e68: 0x0  nop
    ctx->pc = 0x244e68u;
    // NOP
label_244e6c:
    // 0x244e6c: 0x0  nop
    ctx->pc = 0x244e6cu;
    // NOP
label_244e70:
    // 0x244e70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x244e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_244e74:
    // 0x244e74: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x244e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_244e78:
    // 0x244e78: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x244e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_244e7c:
    // 0x244e7c: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x244e7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_244e80:
    // 0x244e80: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x244e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_244e84:
    // 0x244e84: 0x125180a  movz        $v1, $t1, $a1
    ctx->pc = 0x244e84u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 9));
label_244e88:
    // 0x244e88: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x244e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_244e8c:
    // 0x244e8c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x244e8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244e90:
    // 0x244e90: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x244e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_244e94:
    // 0x244e94: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x244e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_244e98:
    // 0x244e98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x244e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_244e9c:
    // 0x244e9c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x244e9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244ea0:
    // 0x244ea0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x244ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_244ea4:
    // 0x244ea4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x244ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_244ea8:
    // 0x244ea8: 0x450c0  sll         $t2, $a0, 3
    ctx->pc = 0x244ea8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_244eac:
    // 0x244eac: 0x3c19002b  lui         $t9, 0x2B
    ctx->pc = 0x244eacu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)43 << 16));
label_244eb0:
    // 0x244eb0: 0x1442023  subu        $a0, $t2, $a0
    ctx->pc = 0x244eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_244eb4:
    // 0x244eb4: 0x3c18002b  lui         $t8, 0x2B
    ctx->pc = 0x244eb4u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)43 << 16));
label_244eb8:
    // 0x244eb8: 0x48140  sll         $s0, $a0, 5
    ctx->pc = 0x244eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_244ebc:
    // 0x244ebc: 0x3c12002b  lui         $s2, 0x2B
    ctx->pc = 0x244ebcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)43 << 16));
label_244ec0:
    // 0x244ec0: 0x240401fc  addiu       $a0, $zero, 0x1FC
    ctx->pc = 0x244ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 508));
label_244ec4:
    // 0x244ec4: 0x3c11002b  lui         $s1, 0x2B
    ctx->pc = 0x244ec4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)43 << 16));
label_244ec8:
    // 0x244ec8: 0x4503c  dsll32      $t2, $a0, 0
    ctx->pc = 0x244ec8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) << (32 + 0));
label_244ecc:
    // 0x244ecc: 0x27391cb0  addiu       $t9, $t9, 0x1CB0
    ctx->pc = 0x244eccu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 7344));
label_244ed0:
    // 0x244ed0: 0x3c045800  lui         $a0, 0x5800
    ctx->pc = 0x244ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22528 << 16));
label_244ed4:
    // 0x244ed4: 0x27181cd0  addiu       $t8, $t8, 0x1CD0
    ctx->pc = 0x244ed4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 7376));
label_244ed8:
    // 0x244ed8: 0x26521cf0  addiu       $s2, $s2, 0x1CF0
    ctx->pc = 0x244ed8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 7408));
label_244edc:
    // 0x244edc: 0x26311d10  addiu       $s1, $s1, 0x1D10
    ctx->pc = 0x244edcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7440));
label_244ee0:
    // 0x244ee0: 0x250ffffc  addiu       $t7, $t0, -0x4
    ctx->pc = 0x244ee0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
label_244ee4:
    // 0x244ee4: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x244ee4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_244ee8:
    // 0x244ee8: 0x240c0588  addiu       $t4, $zero, 0x588
    ctx->pc = 0x244ee8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1416));
label_244eec:
    // 0x244eec: 0x240b0808  addiu       $t3, $zero, 0x808
    ctx->pc = 0x244eecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
label_244ef0:
    // 0x244ef0: 0x8a2025  or          $a0, $a0, $t2
    ctx->pc = 0x244ef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 10));
label_244ef4:
    // 0x244ef4: 0xe9a023  subu        $s4, $a3, $t1
    ctx->pc = 0x244ef4u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_244ef8:
    // 0x244ef8: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
label_244efc:
    if (ctx->pc == 0x244EFCu) {
        ctx->pc = 0x244F00u;
        goto label_244f00;
    }
    ctx->pc = 0x244EF8u;
    {
        const bool branch_taken_0x244ef8 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x244ef8) {
            ctx->pc = 0x244F08u;
            goto label_244f08;
        }
    }
    ctx->pc = 0x244F00u;
label_244f00:
    // 0x244f00: 0x10000038  b           . + 4 + (0x38 << 2)
label_244f04:
    if (ctx->pc == 0x244F04u) {
        ctx->pc = 0x244F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F00u;
        // 0x244f04: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244F08u;
        goto label_244f08;
    }
    ctx->pc = 0x244F00u;
    {
        const bool branch_taken_0x244f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F00u;
        // 0x244f04: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244f00) {
            ctx->pc = 0x244FE4u;
            goto label_244fe4;
        }
    }
    ctx->pc = 0x244F08u;
label_244f08:
    // 0x244f08: 0x2a810004  slti        $at, $s4, 0x4
    ctx->pc = 0x244f08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
label_244f0c:
    // 0x244f0c: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
label_244f10:
    if (ctx->pc == 0x244F10u) {
        ctx->pc = 0x244F14u;
        goto label_244f14;
    }
    ctx->pc = 0x244F0Cu;
    {
        const bool branch_taken_0x244f0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x244f0c) {
            ctx->pc = 0x244FB4u;
            goto label_244fb4;
        }
    }
    ctx->pc = 0x244F14u;
label_244f14:
    // 0x244f14: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_244f18:
    if (ctx->pc == 0x244F18u) {
        ctx->pc = 0x244F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F14u;
        // 0x244f18: 0x2296821  addu        $t5, $s1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244F1Cu;
        goto label_244f1c;
    }
    ctx->pc = 0x244F14u;
    {
        const bool branch_taken_0x244f14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x244F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F14u;
        // 0x244f18: 0x2296821  addu        $t5, $s1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244f14) {
            ctx->pc = 0x244F30u;
            goto label_244f30;
        }
    }
    ctx->pc = 0x244F1Cu;
label_244f1c:
    // 0x244f1c: 0x2495021  addu        $t2, $s2, $t1
    ctx->pc = 0x244f1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
label_244f20:
    // 0x244f20: 0x8dad0000  lw          $t5, 0x0($t5)
    ctx->pc = 0x244f20u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_244f24:
    // 0x244f24: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x244f24u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_244f28:
    // 0x244f28: 0x10000006  b           . + 4 + (0x6 << 2)
label_244f2c:
    if (ctx->pc == 0x244F2Cu) {
        ctx->pc = 0x244F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F28u;
        // 0x244f2c: 0x1b06821  addu        $t5, $t5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244F30u;
        goto label_244f30;
    }
    ctx->pc = 0x244F28u;
    {
        const bool branch_taken_0x244f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F28u;
        // 0x244f2c: 0x1b06821  addu        $t5, $t5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244f28) {
            ctx->pc = 0x244F44u;
            goto label_244f44;
        }
    }
    ctx->pc = 0x244F30u;
label_244f30:
    // 0x244f30: 0x3295021  addu        $t2, $t9, $t1
    ctx->pc = 0x244f30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
label_244f34:
    // 0x244f34: 0x3096821  addu        $t5, $t8, $t1
    ctx->pc = 0x244f34u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 9)));
label_244f38:
    // 0x244f38: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x244f38u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_244f3c:
    // 0x244f3c: 0x8dad0000  lw          $t5, 0x0($t5)
    ctx->pc = 0x244f3cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_244f40:
    // 0x244f40: 0x0  nop
    ctx->pc = 0x244f40u;
    // NOP
label_244f44:
    // 0x244f44: 0x0  nop
    ctx->pc = 0x244f44u;
    // NOP
label_244f48:
    // 0x244f48: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x244f48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_244f4c:
    // 0x244f4c: 0x74a018  mult        $s4, $v1, $s4
    ctx->pc = 0x244f4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
label_244f50:
    // 0x244f50: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
label_244f54:
    if (ctx->pc == 0x244F54u) {
        ctx->pc = 0x244F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F50u;
        // 0x244f54: 0x14b083  sra         $s6, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244F58u;
        goto label_244f58;
    }
    ctx->pc = 0x244F50u;
    {
        const bool branch_taken_0x244f50 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x244F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F50u;
        // 0x244f54: 0x14b083  sra         $s6, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244f50) {
            ctx->pc = 0x244F60u;
            goto label_244f60;
        }
    }
    ctx->pc = 0x244F58u;
label_244f58:
    // 0x244f58: 0x26940003  addiu       $s4, $s4, 0x3
    ctx->pc = 0x244f58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3));
label_244f5c:
    // 0x244f5c: 0x14b083  sra         $s6, $s4, 2
    ctx->pc = 0x244f5cu;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 20), 2));
label_244f60:
    // 0x244f60: 0x6c10003  bgez        $s6, . + 4 + (0x3 << 2)
label_244f64:
    if (ctx->pc == 0x244F64u) {
        ctx->pc = 0x244F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F60u;
        // 0x244f64: 0x16a043  sra         $s4, $s6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244F68u;
        goto label_244f68;
    }
    ctx->pc = 0x244F60u;
    {
        const bool branch_taken_0x244f60 = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x244F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F60u;
        // 0x244f64: 0x16a043  sra         $s4, $s6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244f60) {
            ctx->pc = 0x244F70u;
            goto label_244f70;
        }
    }
    ctx->pc = 0x244F68u;
label_244f68:
    // 0x244f68: 0x26d40001  addiu       $s4, $s6, 0x1
    ctx->pc = 0x244f68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_244f6c:
    // 0x244f6c: 0x14a043  sra         $s4, $s4, 1
    ctx->pc = 0x244f6cu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 20), 1));
label_244f70:
    // 0x244f70: 0x154b023  subu        $s6, $t2, $s4
    ctx->pc = 0x244f70u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 20)));
label_244f74:
    // 0x244f74: 0x1545021  addu        $t2, $t2, $s4
    ctx->pc = 0x244f74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 20)));
label_244f78:
    // 0x244f78: 0x16b100  sll         $s6, $s6, 4
    ctx->pc = 0x244f78u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
label_244f7c:
    // 0x244f7c: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x244f7cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_244f80:
    // 0x244f80: 0x26d66c00  addiu       $s6, $s6, 0x6C00
    ctx->pc = 0x244f80u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 27648));
label_244f84:
    // 0x244f84: 0x25576c00  addiu       $s7, $t2, 0x6C00
    ctx->pc = 0x244f84u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 10), 27648));
label_244f88:
    // 0x244f88: 0xa4d60080  sh          $s6, 0x80($a2)
    ctx->pc = 0x244f88u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 128), (uint16_t)GPR_U32(ctx, 22));
label_244f8c:
    // 0x244f8c: 0x1b45021  addu        $t2, $t5, $s4
    ctx->pc = 0x244f8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 20)));
label_244f90:
    // 0x244f90: 0x1b4b023  subu        $s6, $t5, $s4
    ctx->pc = 0x244f90u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 20)));
label_244f94:
    // 0x244f94: 0x1668c0  sll         $t5, $s6, 3
    ctx->pc = 0x244f94u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
label_244f98:
    // 0x244f98: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x244f98u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_244f9c:
    // 0x244f9c: 0xa4d70090  sh          $s7, 0x90($a2)
    ctx->pc = 0x244f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 144), (uint16_t)GPR_U32(ctx, 23));
label_244fa0:
    // 0x244fa0: 0x25ad7900  addiu       $t5, $t5, 0x7900
    ctx->pc = 0x244fa0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 30976));
label_244fa4:
    // 0x244fa4: 0x254a7900  addiu       $t2, $t2, 0x7900
    ctx->pc = 0x244fa4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 30976));
label_244fa8:
    // 0x244fa8: 0xa4cd0082  sh          $t5, 0x82($a2)
    ctx->pc = 0x244fa8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 130), (uint16_t)GPR_U32(ctx, 13));
label_244fac:
    // 0x244fac: 0x1000000d  b           . + 4 + (0xD << 2)
label_244fb0:
    if (ctx->pc == 0x244FB0u) {
        ctx->pc = 0x244FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244FACu;
        // 0x244fb0: 0xa4ca0092  sh          $t2, 0x92($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 146), (uint16_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244FB4u;
        goto label_244fb4;
    }
    ctx->pc = 0x244FACu;
    {
        const bool branch_taken_0x244fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244FACu;
        // 0x244fb0: 0xa4ca0092  sh          $t2, 0x92($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 146), (uint16_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244fac) {
            ctx->pc = 0x244FE4u;
            goto label_244fe4;
        }
    }
    ctx->pc = 0x244FB4u;
label_244fb4:
    // 0x244fb4: 0x0  nop
    ctx->pc = 0x244fb4u;
    // NOP
label_244fb8:
    // 0x244fb8: 0x288082a  slt         $at, $s4, $t0
    ctx->pc = 0x244fb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_244fbc:
    // 0x244fbc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_244fc0:
    if (ctx->pc == 0x244FC0u) {
        ctx->pc = 0x244FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244FBCu;
        // 0x244fc0: 0x1145023  subu        $t2, $t0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244FC4u;
        goto label_244fc4;
    }
    ctx->pc = 0x244FBCu;
    {
        const bool branch_taken_0x244fbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x244FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244FBCu;
        // 0x244fc0: 0x1145023  subu        $t2, $t0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244fbc) {
            ctx->pc = 0x244FE0u;
            goto label_244fe0;
        }
    }
    ctx->pc = 0x244FC4u;
label_244fc4:
    // 0x244fc4: 0xa51c0  sll         $t2, $t2, 7
    ctx->pc = 0x244fc4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 7));
label_244fc8:
    // 0x244fc8: 0x14f001a  div         $zero, $t2, $t7
    ctx->pc = 0x244fc8u;
    { int32_t divisor = GPR_S32(ctx, 15);    int32_t dividend = GPR_S32(ctx, 10);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_244fcc:
    // 0x244fcc: 0x0  nop
    ctx->pc = 0x244fccu;
    // NOP
label_244fd0:
    // 0x244fd0: 0x0  nop
    ctx->pc = 0x244fd0u;
    // NOP
label_244fd4:
    // 0x244fd4: 0x5012  mflo        $t2
    ctx->pc = 0x244fd4u;
    SET_GPR_U64(ctx, 10, ctx->lo);
label_244fd8:
    // 0x244fd8: 0x10000002  b           . + 4 + (0x2 << 2)
label_244fdc:
    if (ctx->pc == 0x244FDCu) {
        ctx->pc = 0x244FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244FD8u;
        // 0x244fdc: 0x315500ff  andi        $s5, $t2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x244FE0u;
        goto label_244fe0;
    }
    ctx->pc = 0x244FD8u;
    {
        const bool branch_taken_0x244fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244FD8u;
        // 0x244fdc: 0x315500ff  andi        $s5, $t2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x244fd8) {
            ctx->pc = 0x244FE4u;
            goto label_244fe4;
        }
    }
    ctx->pc = 0x244FE0u;
label_244fe0:
    // 0x244fe0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x244fe0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244fe4:
    // 0x244fe4: 0x0  nop
    ctx->pc = 0x244fe4u;
    // NOP
label_244fe8:
    // 0x244fe8: 0xf36821  addu        $t5, $a3, $s3
    ctx->pc = 0x244fe8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
label_244fec:
    // 0x244fec: 0xa0d50073  sb          $s5, 0x73($a2)
    ctx->pc = 0x244fecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 115), (uint8_t)GPR_U32(ctx, 21));
label_244ff0:
    // 0x244ff0: 0x5a10003  bgez        $t5, . + 4 + (0x3 << 2)
label_244ff4:
    if (ctx->pc == 0x244FF4u) {
        ctx->pc = 0x244FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244FF0u;
        // 0x244ff4: 0xd5083  sra         $t2, $t5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 13), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244FF8u;
        goto label_244ff8;
    }
    ctx->pc = 0x244FF0u;
    {
        const bool branch_taken_0x244ff0 = (GPR_S32(ctx, 13) >= 0);
        ctx->pc = 0x244FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244FF0u;
        // 0x244ff4: 0xd5083  sra         $t2, $t5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 13), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244ff0) {
            ctx->pc = 0x245000u;
            goto label_245000;
        }
    }
    ctx->pc = 0x244FF8u;
label_244ff8:
    // 0x244ff8: 0x25aa0003  addiu       $t2, $t5, 0x3
    ctx->pc = 0x244ff8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
label_244ffc:
    // 0x244ffc: 0xa5083  sra         $t2, $t2, 2
    ctx->pc = 0x244ffcu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 2));
label_245000:
    // 0x245000: 0x14e001a  div         $zero, $t2, $t6
    ctx->pc = 0x245000u;
    { int32_t divisor = GPR_S32(ctx, 14);    int32_t dividend = GPR_S32(ctx, 10);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_245004:
    // 0x245004: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x245004u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_245008:
    // 0x245008: 0x2a740005  slti        $s4, $s3, 0x5
    ctx->pc = 0x245008u;
    SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
label_24500c:
    // 0x24500c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x24500cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_245010:
    // 0x245010: 0x6810  mfhi        $t5
    ctx->pc = 0x245010u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_245014:
    // 0x245014: 0xd50c0  sll         $t2, $t5, 3
    ctx->pc = 0x245014u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
label_245018:
    // 0x245018: 0x14d6823  subu        $t5, $t2, $t5
    ctx->pc = 0x245018u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
label_24501c:
    // 0x24501c: 0xd5080  sll         $t2, $t5, 2
    ctx->pc = 0x24501cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
label_245020:
    // 0x245020: 0x14d5023  subu        $t2, $t2, $t5
    ctx->pc = 0x245020u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
label_245024:
    // 0x245024: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x245024u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_245028:
    // 0x245028: 0x254a0080  addiu       $t2, $t2, 0x80
    ctx->pc = 0x245028u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 128));
label_24502c:
    // 0x24502c: 0x314dffff  andi        $t5, $t2, 0xFFFF
    ctx->pc = 0x24502cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
label_245030:
    // 0x245030: 0xdb100  sll         $s6, $t5, 4
    ctx->pc = 0x245030u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
label_245034:
    // 0x245034: 0x25aa002a  addiu       $t2, $t5, 0x2A
    ctx->pc = 0x245034u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 42));
label_245038:
    // 0x245038: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x245038u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_24503c:
    // 0x24503c: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x24503cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_245040:
    // 0x245040: 0xa4d60078  sh          $s6, 0x78($a2)
    ctx->pc = 0x245040u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 120), (uint16_t)GPR_U32(ctx, 22));
label_245044:
    // 0x245044: 0x25560008  addiu       $s6, $t2, 0x8
    ctx->pc = 0x245044u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_245048:
    // 0x245048: 0xa4cc007a  sh          $t4, 0x7A($a2)
    ctx->pc = 0x245048u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 122), (uint16_t)GPR_U32(ctx, 12));
label_24504c:
    // 0x24504c: 0xd5138  dsll        $t2, $t5, 4
    ctx->pc = 0x24504cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 13) << 4);
label_245050:
    // 0x245050: 0xa4d60088  sh          $s6, 0x88($a2)
    ctx->pc = 0x245050u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 136), (uint16_t)GPR_U32(ctx, 22));
label_245054:
    // 0x245054: 0x25ad0029  addiu       $t5, $t5, 0x29
    ctx->pc = 0x245054u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 41));
label_245058:
    // 0x245058: 0x354a000a  ori         $t2, $t2, 0xA
    ctx->pc = 0x245058u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)10);
label_24505c:
    // 0x24505c: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x24505cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
label_245060:
    // 0x245060: 0xa4cb008a  sh          $t3, 0x8A($a2)
    ctx->pc = 0x245060u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 138), (uint16_t)GPR_U32(ctx, 11));
label_245064:
    // 0x245064: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x245064u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
label_245068:
    // 0x245068: 0xd6bb8  dsll        $t5, $t5, 14
    ctx->pc = 0x245068u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 14);
label_24506c:
    // 0x24506c: 0x14d5025  or          $t2, $t2, $t5
    ctx->pc = 0x24506cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 13));
label_245070:
    // 0x245070: 0x1445025  or          $t2, $t2, $a0
    ctx->pc = 0x245070u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 4));
label_245074:
    // 0x245074: 0xfcca0040  sd          $t2, 0x40($a2)
    ctx->pc = 0x245074u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 64), GPR_U64(ctx, 10));
label_245078:
    // 0x245078: 0x1680ff9e  bnez        $s4, . + 4 + (-0x62 << 2)
label_24507c:
    if (ctx->pc == 0x24507Cu) {
        ctx->pc = 0x24507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245078u;
        // 0x24507c: 0x24c600a0  addiu       $a2, $a2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245080u;
        goto label_245080;
    }
    ctx->pc = 0x245078u;
    {
        const bool branch_taken_0x245078 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x24507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245078u;
        // 0x24507c: 0x24c600a0  addiu       $a2, $a2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245078) {
            ctx->pc = 0x244EF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244ef4;
        }
    }
    ctx->pc = 0x245080u;
label_245080:
    // 0x245080: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x245080u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_245084:
    // 0x245084: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x245084u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_245088:
    // 0x245088: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x245088u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_24508c:
    // 0x24508c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24508cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_245090:
    // 0x245090: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x245090u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_245094:
    // 0x245094: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x245094u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_245098:
    // 0x245098: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x245098u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24509c:
    // 0x24509c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24509cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2450a0:
    // 0x2450a0: 0x3e00008  jr          $ra
label_2450a4:
    if (ctx->pc == 0x2450A4u) {
        ctx->pc = 0x2450A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450A0u;
        // 0x2450a4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2450A8u;
        goto label_2450a8;
    }
    ctx->pc = 0x2450A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2450A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450A0u;
        // 0x2450a4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2450A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2450A8u;
label_2450a8:
    // 0x2450a8: 0x0  nop
    ctx->pc = 0x2450a8u;
    // NOP
label_2450ac:
    // 0x2450ac: 0x0  nop
    ctx->pc = 0x2450acu;
    // NOP
label_2450b0:
    // 0x2450b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2450b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2450b4:
    // 0x2450b4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2450b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2450b8:
    // 0x2450b8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2450b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2450bc:
    // 0x2450bc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2450bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2450c0:
    // 0x2450c0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2450c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2450c4:
    // 0x2450c4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2450c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2450c8:
    // 0x2450c8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2450c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2450cc:
    // 0x2450cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2450ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2450d0:
    // 0x2450d0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2450d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2450d4:
    // 0x2450d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2450d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2450d8:
    // 0x2450d8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2450d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2450dc:
    // 0x2450dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2450dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2450e0:
    // 0x2450e0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2450e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2450e4:
    // 0x2450e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2450e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2450e8:
    // 0x2450e8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2450e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2450ec:
    // 0x2450ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2450ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2450f0:
    // 0x2450f0: 0x1280001b  beqz        $s4, . + 4 + (0x1B << 2)
label_2450f4:
    if (ctx->pc == 0x2450F4u) {
        ctx->pc = 0x2450F8u;
        goto label_2450f8;
    }
    ctx->pc = 0x2450F0u;
    {
        const bool branch_taken_0x2450f0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2450f0) {
            ctx->pc = 0x245160u;
            goto label_245160;
        }
    }
    ctx->pc = 0x2450F8u;
label_2450f8:
    // 0x2450f8: 0xc08f0cc  jal         func_23C330
label_2450fc:
    if (ctx->pc == 0x2450FCu) {
        ctx->pc = 0x245100u;
        goto label_245100;
    }
    ctx->pc = 0x2450F8u;
    SET_GPR_U32(ctx, 31, 0x245100u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x245100u;
label_245100:
    // 0x245100: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x245100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_245104:
    // 0x245104: 0x240400c4  addiu       $a0, $zero, 0xC4
    ctx->pc = 0x245104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
label_245108:
    // 0x245108: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x245108u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_24510c:
    // 0x24510c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x24510cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_245110:
    // 0x245110: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x245110u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_245114:
    // 0x245114: 0x3010  mfhi        $a2
    ctx->pc = 0x245114u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_245118:
    // 0x245118: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x245118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_24511c:
    // 0x24511c: 0x16c00008  bnez        $s6, . + 4 + (0x8 << 2)
label_245120:
    if (ctx->pc == 0x245120u) {
        ctx->pc = 0x245120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24511Cu;
        // 0x245120: 0xa63023  subu        $a2, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245124u;
        goto label_245124;
    }
    ctx->pc = 0x24511Cu;
    {
        const bool branch_taken_0x24511c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x245120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24511Cu;
        // 0x245120: 0xa63023  subu        $a2, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24511c) {
            ctx->pc = 0x245140u;
            goto label_245140;
        }
    }
    ctx->pc = 0x245124u;
label_245124:
    // 0x245124: 0x24c5006c  addiu       $a1, $a2, 0x6C
    ctx->pc = 0x245124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 108));
label_245128:
    // 0x245128: 0x1530c0  sll         $a2, $s5, 3
    ctx->pc = 0x245128u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_24512c:
    // 0x24512c: 0xd53023  subu        $a2, $a2, $s5
    ctx->pc = 0x24512cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
label_245130:
    // 0x245130: 0x63940  sll         $a3, $a2, 5
    ctx->pc = 0x245130u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_245134:
    // 0x245134: 0xa73021  addu        $a2, $a1, $a3
    ctx->pc = 0x245134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_245138:
    // 0x245138: 0x10000019  b           . + 4 + (0x19 << 2)
label_24513c:
    if (ctx->pc == 0x24513Cu) {
        ctx->pc = 0x24513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245138u;
        // 0x24513c: 0x24e5006c  addiu       $a1, $a3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245140u;
        goto label_245140;
    }
    ctx->pc = 0x245138u;
    {
        const bool branch_taken_0x245138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245138u;
        // 0x24513c: 0x24e5006c  addiu       $a1, $a3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245138) {
            ctx->pc = 0x2451A0u;
            goto label_2451a0;
        }
    }
    ctx->pc = 0x245140u;
label_245140:
    // 0x245140: 0x24050094  addiu       $a1, $zero, 0x94
    ctx->pc = 0x245140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
label_245144:
    // 0x245144: 0xa63023  subu        $a2, $a1, $a2
    ctx->pc = 0x245144u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_245148:
    // 0x245148: 0x1528c0  sll         $a1, $s5, 3
    ctx->pc = 0x245148u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_24514c:
    // 0x24514c: 0xb52823  subu        $a1, $a1, $s5
    ctx->pc = 0x24514cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
label_245150:
    // 0x245150: 0x53940  sll         $a3, $a1, 5
    ctx->pc = 0x245150u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_245154:
    // 0x245154: 0xc72821  addu        $a1, $a2, $a3
    ctx->pc = 0x245154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_245158:
    // 0x245158: 0x10000011  b           . + 4 + (0x11 << 2)
label_24515c:
    if (ctx->pc == 0x24515Cu) {
        ctx->pc = 0x24515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245158u;
        // 0x24515c: 0x24e60094  addiu       $a2, $a3, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 148));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245160u;
        goto label_245160;
    }
    ctx->pc = 0x245158u;
    {
        const bool branch_taken_0x245158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245158u;
        // 0x24515c: 0x24e60094  addiu       $a2, $a3, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245158) {
            ctx->pc = 0x2451A0u;
            goto label_2451a0;
        }
    }
    ctx->pc = 0x245160u;
label_245160:
    // 0x245160: 0xc08f0cc  jal         func_23C330
label_245164:
    if (ctx->pc == 0x245164u) {
        ctx->pc = 0x245168u;
        goto label_245168;
    }
    ctx->pc = 0x245160u;
    SET_GPR_U32(ctx, 31, 0x245168u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x245168u;
label_245168:
    // 0x245168: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x245168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_24516c:
    // 0x24516c: 0x24040118  addiu       $a0, $zero, 0x118
    ctx->pc = 0x24516cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
label_245170:
    // 0x245170: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x245170u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_245174:
    // 0x245174: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x245174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_245178:
    // 0x245178: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x245178u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_24517c:
    // 0x24517c: 0x3010  mfhi        $a2
    ctx->pc = 0x24517cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_245180:
    // 0x245180: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x245180u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_245184:
    // 0x245184: 0x16c00004  bnez        $s6, . + 4 + (0x4 << 2)
label_245188:
    if (ctx->pc == 0x245188u) {
        ctx->pc = 0x245188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245184u;
        // 0x245188: 0xa62823  subu        $a1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24518Cu;
        goto label_24518c;
    }
    ctx->pc = 0x245184u;
    {
        const bool branch_taken_0x245184 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x245188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245184u;
        // 0x245188: 0xa62823  subu        $a1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245184) {
            ctx->pc = 0x245198u;
            goto label_245198;
        }
    }
    ctx->pc = 0x24518Cu;
label_24518c:
    // 0x24518c: 0x24a6009c  addiu       $a2, $a1, 0x9C
    ctx->pc = 0x24518cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 156));
label_245190:
    // 0x245190: 0x10000003  b           . + 4 + (0x3 << 2)
label_245194:
    if (ctx->pc == 0x245194u) {
        ctx->pc = 0x245194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245190u;
        // 0x245194: 0x2405009c  addiu       $a1, $zero, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245198u;
        goto label_245198;
    }
    ctx->pc = 0x245190u;
    {
        const bool branch_taken_0x245190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245190u;
        // 0x245194: 0x2405009c  addiu       $a1, $zero, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245190) {
            ctx->pc = 0x2451A0u;
            goto label_2451a0;
        }
    }
    ctx->pc = 0x245198u;
label_245198:
    // 0x245198: 0x240600e4  addiu       $a2, $zero, 0xE4
    ctx->pc = 0x245198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
label_24519c:
    // 0x24519c: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x24519cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2451a0:
    // 0x2451a0: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
label_2451a4:
    if (ctx->pc == 0x2451A4u) {
        ctx->pc = 0x2451A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2451A0u;
        // 0x2451a4: 0x114083  sra         $t0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2451A8u;
        goto label_2451a8;
    }
    ctx->pc = 0x2451A0u;
    {
        const bool branch_taken_0x2451a0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2451A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2451A0u;
        // 0x2451a4: 0x114083  sra         $t0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2451a0) {
            ctx->pc = 0x2451B0u;
            goto label_2451b0;
        }
    }
    ctx->pc = 0x2451A8u;
label_2451a8:
    // 0x2451a8: 0x26270003  addiu       $a3, $s1, 0x3
    ctx->pc = 0x2451a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
label_2451ac:
    // 0x2451ac: 0x74083  sra         $t0, $a3, 2
    ctx->pc = 0x2451acu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 7), 2));
label_2451b0:
    // 0x2451b0: 0x248082a  slt         $at, $s2, $t0
    ctx->pc = 0x2451b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_2451b4:
    // 0x2451b4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_2451b8:
    if (ctx->pc == 0x2451B8u) {
        ctx->pc = 0x2451B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2451B4u;
        // 0x2451b8: 0x113840  sll         $a3, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2451BCu;
        goto label_2451bc;
    }
    ctx->pc = 0x2451B4u;
    {
        const bool branch_taken_0x2451b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2451B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2451B4u;
        // 0x2451b8: 0x113840  sll         $a3, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2451b4) {
            ctx->pc = 0x2451E0u;
            goto label_2451e0;
        }
    }
    ctx->pc = 0x2451BCu;
label_2451bc:
    // 0x2451bc: 0x123880  sll         $a3, $s2, 2
    ctx->pc = 0x2451bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2451c0:
    // 0x2451c0: 0xf23821  addu        $a3, $a3, $s2
    ctx->pc = 0x2451c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
label_2451c4:
    // 0x2451c4: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x2451c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_2451c8:
    // 0x2451c8: 0xe8001a  div         $zero, $a3, $t0
    ctx->pc = 0x2451c8u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2451cc:
    // 0x2451cc: 0x0  nop
    ctx->pc = 0x2451ccu;
    // NOP
label_2451d0:
    // 0x2451d0: 0x0  nop
    ctx->pc = 0x2451d0u;
    // NOP
label_2451d4:
    // 0x2451d4: 0x3812  mflo        $a3
    ctx->pc = 0x2451d4u;
    SET_GPR_U64(ctx, 7, ctx->lo);
label_2451d8:
    // 0x2451d8: 0x1000000f  b           . + 4 + (0xF << 2)
label_2451dc:
    if (ctx->pc == 0x2451DCu) {
        ctx->pc = 0x2451DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2451D8u;
        // 0x2451dc: 0x30e900ff  andi        $t1, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2451E0u;
        goto label_2451e0;
    }
    ctx->pc = 0x2451D8u;
    {
        const bool branch_taken_0x2451d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2451DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2451D8u;
        // 0x2451dc: 0x30e900ff  andi        $t1, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2451d8) {
            ctx->pc = 0x245218u;
            goto label_245218;
        }
    }
    ctx->pc = 0x2451E0u;
label_2451e0:
    // 0x2451e0: 0x2324823  subu        $t1, $s1, $s2
    ctx->pc = 0x2451e0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_2451e4:
    // 0x2451e4: 0xf14021  addu        $t0, $a3, $s1
    ctx->pc = 0x2451e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
label_2451e8:
    // 0x2451e8: 0x93880  sll         $a3, $t1, 2
    ctx->pc = 0x2451e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_2451ec:
    // 0x2451ec: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x2451ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_2451f0:
    // 0x2451f0: 0x83883  sra         $a3, $t0, 2
    ctx->pc = 0x2451f0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 2));
label_2451f4:
    // 0x2451f4: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
label_2451f8:
    if (ctx->pc == 0x2451F8u) {
        ctx->pc = 0x2451F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2451F4u;
        // 0x2451f8: 0x94900  sll         $t1, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2451FCu;
        goto label_2451fc;
    }
    ctx->pc = 0x2451F4u;
    {
        const bool branch_taken_0x2451f4 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x2451F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2451F4u;
        // 0x2451f8: 0x94900  sll         $t1, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2451f4) {
            ctx->pc = 0x245204u;
            goto label_245204;
        }
    }
    ctx->pc = 0x2451FCu;
label_2451fc:
    // 0x2451fc: 0x25070003  addiu       $a3, $t0, 0x3
    ctx->pc = 0x2451fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_245200:
    // 0x245200: 0x73883  sra         $a3, $a3, 2
    ctx->pc = 0x245200u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 2));
label_245204:
    // 0x245204: 0x127001a  div         $zero, $t1, $a3
    ctx->pc = 0x245204u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_245208:
    // 0x245208: 0x0  nop
    ctx->pc = 0x245208u;
    // NOP
label_24520c:
    // 0x24520c: 0x0  nop
    ctx->pc = 0x24520cu;
    // NOP
label_245210:
    // 0x245210: 0x3812  mflo        $a3
    ctx->pc = 0x245210u;
    SET_GPR_U64(ctx, 7, ctx->lo);
label_245214:
    // 0x245214: 0x30e900ff  andi        $t1, $a3, 0xFF
    ctx->pc = 0x245214u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_245218:
    // 0x245218: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x245218u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_24521c:
    // 0x24521c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x24521cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_245220:
    // 0x245220: 0x24e86c00  addiu       $t0, $a3, 0x6C00
    ctx->pc = 0x245220u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 27648));
label_245224:
    // 0x245224: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x245224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_245228:
    // 0x245228: 0xa66800b0  sh          $t0, 0xB0($s3)
    ctx->pc = 0x245228u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 176), (uint16_t)GPR_U32(ctx, 8));
label_24522c:
    // 0x24522c: 0x24676c00  addiu       $a3, $v1, 0x6C00
    ctx->pc = 0x24522cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_245230:
    // 0x245230: 0xa6680080  sh          $t0, 0x80($s3)
    ctx->pc = 0x245230u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 128), (uint16_t)GPR_U32(ctx, 8));
label_245234:
    // 0x245234: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x245234u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_245238:
    // 0x245238: 0xa66700c8  sh          $a3, 0xC8($s3)
    ctx->pc = 0x245238u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 200), (uint16_t)GPR_U32(ctx, 7));
label_24523c:
    // 0x24523c: 0x24857900  addiu       $a1, $a0, 0x7900
    ctx->pc = 0x24523cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
label_245240:
    // 0x245240: 0xa6670098  sh          $a3, 0x98($s3)
    ctx->pc = 0x245240u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 152), (uint16_t)GPR_U32(ctx, 7));
label_245244:
    // 0x245244: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x245244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_245248:
    // 0x245248: 0xa665009a  sh          $a1, 0x9A($s3)
    ctx->pc = 0x245248u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 154), (uint16_t)GPR_U32(ctx, 5));
label_24524c:
    // 0x24524c: 0x24647900  addiu       $a0, $v1, 0x7900
    ctx->pc = 0x24524cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_245250:
    // 0x245250: 0xa6650082  sh          $a1, 0x82($s3)
    ctx->pc = 0x245250u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 130), (uint16_t)GPR_U32(ctx, 5));
label_245254:
    // 0x245254: 0x2ac30002  slti        $v1, $s6, 0x2
    ctx->pc = 0x245254u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
label_245258:
    // 0x245258: 0xa66400ca  sh          $a0, 0xCA($s3)
    ctx->pc = 0x245258u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 202), (uint16_t)GPR_U32(ctx, 4));
label_24525c:
    // 0x24525c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x24525cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_245260:
    // 0x245260: 0xa66400b2  sh          $a0, 0xB2($s3)
    ctx->pc = 0x245260u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 178), (uint16_t)GPR_U32(ctx, 4));
label_245264:
    // 0x245264: 0xa26900bb  sb          $t1, 0xBB($s3)
    ctx->pc = 0x245264u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 187), (uint8_t)GPR_U32(ctx, 9));
label_245268:
    // 0x245268: 0xa26900a3  sb          $t1, 0xA3($s3)
    ctx->pc = 0x245268u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 163), (uint8_t)GPR_U32(ctx, 9));
label_24526c:
    // 0x24526c: 0xa269008b  sb          $t1, 0x8B($s3)
    ctx->pc = 0x24526cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 139), (uint8_t)GPR_U32(ctx, 9));
label_245270:
    // 0x245270: 0xa2690073  sb          $t1, 0x73($s3)
    ctx->pc = 0x245270u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 115), (uint8_t)GPR_U32(ctx, 9));
label_245274:
    // 0x245274: 0x1460ff9e  bnez        $v1, . + 4 + (-0x62 << 2)
label_245278:
    if (ctx->pc == 0x245278u) {
        ctx->pc = 0x245278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245274u;
        // 0x245278: 0x267300d0  addiu       $s3, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24527Cu;
        goto label_24527c;
    }
    ctx->pc = 0x245274u;
    {
        const bool branch_taken_0x245274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x245278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245274u;
        // 0x245278: 0x267300d0  addiu       $s3, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245274) {
            ctx->pc = 0x2450F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2450f0;
        }
    }
    ctx->pc = 0x24527Cu;
label_24527c:
    // 0x24527c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x24527cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_245280:
    // 0x245280: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x245280u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_245284:
    // 0x245284: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x245284u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_245288:
    // 0x245288: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x245288u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24528c:
    // 0x24528c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24528cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_245290:
    // 0x245290: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x245290u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_245294:
    // 0x245294: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x245294u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_245298:
    // 0x245298: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x245298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24529c:
    // 0x24529c: 0x3e00008  jr          $ra
label_2452a0:
    if (ctx->pc == 0x2452A0u) {
        ctx->pc = 0x2452A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24529Cu;
        // 0x2452a0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2452A4u;
        goto label_2452a4;
    }
    ctx->pc = 0x24529Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2452A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24529Cu;
        // 0x2452a0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24529Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2452A4u;
label_2452a4:
    // 0x2452a4: 0x0  nop
    ctx->pc = 0x2452a4u;
    // NOP
label_2452a8:
    // 0x2452a8: 0x0  nop
    ctx->pc = 0x2452a8u;
    // NOP
label_2452ac:
    // 0x2452ac: 0x0  nop
    ctx->pc = 0x2452acu;
    // NOP
label_2452b0:
    // 0x2452b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2452b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2452b4:
    // 0x2452b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2452b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2452b8:
    // 0x2452b8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2452b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2452bc:
    // 0x2452bc: 0x29010013  slti        $at, $t0, 0x13
    ctx->pc = 0x2452bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)19) ? 1 : 0);
label_2452c0:
    // 0x2452c0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2452c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2452c4:
    // 0x2452c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2452c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2452c8:
    // 0x2452c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2452c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2452cc:
    // 0x2452cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2452ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2452d0:
    // 0x2452d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2452d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2452d4:
    // 0x2452d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2452d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2452d8:
    // 0x2452d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2452d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2452dc:
    // 0x2452dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2452dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2452e0:
    // 0x2452e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2452e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2452e4:
    // 0x2452e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2452e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2452e8:
    // 0x2452e8: 0x84a3000e  lh          $v1, 0xE($a1)
    ctx->pc = 0x2452e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
label_2452ec:
    // 0x2452ec: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_2452f0:
    if (ctx->pc == 0x2452F0u) {
        ctx->pc = 0x2452F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2452ECu;
        // 0x2452f0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2452F4u;
        goto label_2452f4;
    }
    ctx->pc = 0x2452ECu;
    {
        const bool branch_taken_0x2452ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2452F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2452ECu;
        // 0x2452f0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2452ec) {
            ctx->pc = 0x245330u;
            goto label_245330;
        }
    }
    ctx->pc = 0x2452F4u;
label_2452f4:
    // 0x2452f4: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x2452f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2452f8:
    // 0x2452f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2452f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2452fc:
    // 0x2452fc: 0x1062004  sllv        $a0, $a2, $t0
    ctx->pc = 0x2452fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 8) & 0x1F));
label_245300:
    // 0x245300: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x245300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_245304:
    // 0x245304: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_245308:
    if (ctx->pc == 0x245308u) {
        ctx->pc = 0x24530Cu;
        goto label_24530c;
    }
    ctx->pc = 0x245304u;
    {
        const bool branch_taken_0x245304 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x245304) {
            ctx->pc = 0x24531Cu;
            goto label_24531c;
        }
    }
    ctx->pc = 0x24530Cu;
label_24530c:
    // 0x24530c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x24530cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_245310:
    // 0x245310: 0x28e1000c  slti        $at, $a3, 0xC
    ctx->pc = 0x245310u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)12) ? 1 : 0);
label_245314:
    // 0x245314: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_245318:
    if (ctx->pc == 0x245318u) {
        ctx->pc = 0x24531Cu;
        goto label_24531c;
    }
    ctx->pc = 0x245314u;
    {
        const bool branch_taken_0x245314 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x245314) {
            ctx->pc = 0x245330u;
            goto label_245330;
        }
    }
    ctx->pc = 0x24531Cu;
label_24531c:
    // 0x24531c: 0x0  nop
    ctx->pc = 0x24531cu;
    // NOP
label_245320:
    // 0x245320: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x245320u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_245324:
    // 0x245324: 0x29040013  slti        $a0, $t0, 0x13
    ctx->pc = 0x245324u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)19) ? 1 : 0);
label_245328:
    // 0x245328: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
label_24532c:
    if (ctx->pc == 0x24532Cu) {
        ctx->pc = 0x24532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245328u;
        // 0x24532c: 0x1062004  sllv        $a0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 8) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245330u;
        goto label_245330;
    }
    ctx->pc = 0x245328u;
    {
        const bool branch_taken_0x245328 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245328u;
        // 0x24532c: 0x1062004  sllv        $a0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 8) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245328) {
            ctx->pc = 0x245300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_245300;
        }
    }
    ctx->pc = 0x245330u;
label_245330:
    // 0x245330: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x245330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_245334:
    // 0x245334: 0x2484eb08  addiu       $a0, $a0, -0x14F8
    ctx->pc = 0x245334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961928));
label_245338:
    // 0x245338: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x245338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_24533c:
    // 0x24533c: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x24533cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_245340:
    // 0x245340: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x245340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_245344:
    // 0x245344: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x245344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_245348:
    // 0x245348: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x245348u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_24534c:
    // 0x24534c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_245350:
    if (ctx->pc == 0x245350u) {
        ctx->pc = 0x245354u;
        goto label_245354;
    }
    ctx->pc = 0x24534Cu;
    {
        const bool branch_taken_0x24534c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24534c) {
            ctx->pc = 0x24535Cu;
            goto label_24535c;
        }
    }
    ctx->pc = 0x245354u;
label_245354:
    // 0x245354: 0x10000062  b           . + 4 + (0x62 << 2)
label_245358:
    if (ctx->pc == 0x245358u) {
        ctx->pc = 0x245358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245354u;
        // 0x245358: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24535Cu;
        goto label_24535c;
    }
    ctx->pc = 0x245354u;
    {
        const bool branch_taken_0x245354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245354u;
        // 0x245358: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245354) {
            ctx->pc = 0x2454E0u;
            { ctx->pc = 0x2454e0; return; }
        }
    }
    ctx->pc = 0x24535Cu;
label_24535c:
    // 0x24535c: 0x92250008  lbu         $a1, 0x8($s1)
    ctx->pc = 0x24535cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_245360:
    // 0x245360: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x245360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_245364:
    // 0x245364: 0x5200a  movz        $a0, $zero, $a1
    ctx->pc = 0x245364u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_245368:
    // 0x245368: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x245368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_24536c:
    // 0x24536c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x24536cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_245370:
    // 0x245370: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x245370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_245374:
    // 0x245374: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x245374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_245378:
    // 0x245378: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x245378u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_24537c:
    // 0x24537c: 0x28640064  slti        $a0, $v1, 0x64
    ctx->pc = 0x24537cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
label_245380:
    // 0x245380: 0x1480001e  bnez        $a0, . + 4 + (0x1E << 2)
label_245384:
    if (ctx->pc == 0x245384u) {
        ctx->pc = 0x245384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245380u;
        // 0x245384: 0x28640050  slti        $a0, $v1, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)80) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x245388u;
        goto label_245388;
    }
    ctx->pc = 0x245380u;
    {
        const bool branch_taken_0x245380 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x245384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245380u;
        // 0x245384: 0x28640050  slti        $a0, $v1, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)80) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x245380) {
            ctx->pc = 0x2453FCu;
            goto label_2453fc;
        }
    }
    ctx->pc = 0x245388u;
label_245388:
    // 0x245388: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x245388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_24538c:
    // 0x24538c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x24538cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_245390:
    // 0x245390: 0x1480004c  bnez        $a0, . + 4 + (0x4C << 2)
label_245394:
    if (ctx->pc == 0x245394u) {
        ctx->pc = 0x245394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245390u;
        // 0x245394: 0x28610064  slti        $at, $v1, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x245398u;
        goto label_245398;
    }
    ctx->pc = 0x245390u;
    {
        const bool branch_taken_0x245390 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x245394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245390u;
        // 0x245394: 0x28610064  slti        $at, $v1, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x245390) {
            ctx->pc = 0x2454C4u;
            goto label_2454c4;
        }
    }
    ctx->pc = 0x245398u;
label_245398:
    // 0x245398: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x245398u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_24539c:
    // 0x24539c: 0x1228c0  sll         $a1, $s2, 3
    ctx->pc = 0x24539cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_2453a0:
    // 0x2453a0: 0x8e280010  lw          $t0, 0x10($s1)
    ctx->pc = 0x2453a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2453a4:
    // 0x2453a4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x2453a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_2453a8:
    // 0x2453a8: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x2453a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_2453ac:
    // 0x2453ac: 0x248449a4  addiu       $a0, $a0, 0x49A4
    ctx->pc = 0x2453acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18852));
label_2453b0:
    // 0x2453b0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2453b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2453b4:
    // 0x2453b4: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x2453b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2453b8:
    // 0x2453b8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2453b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2453bc:
    // 0x2453bc: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x2453bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_2453c0:
    // 0x2453c0: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x2453c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2453c4:
    // 0x2453c4: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x2453c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
label_2453c8:
    // 0x2453c8: 0xa2270002  sb          $a3, 0x2($s1)
    ctx->pc = 0x2453c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 7));
label_2453cc:
    // 0x2453cc: 0xa2260004  sb          $a2, 0x4($s1)
    ctx->pc = 0x2453ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 6));
label_2453d0:
    // 0x2453d0: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x2453d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2453d4:
    // 0x2453d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2453d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2453d8:
    // 0x2453d8: 0x28810064  slti        $at, $a0, 0x64
    ctx->pc = 0x2453d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
label_2453dc:
    // 0x2453dc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2453e0:
    if (ctx->pc == 0x2453E0u) {
        ctx->pc = 0x2453E4u;
        goto label_2453e4;
    }
    ctx->pc = 0x2453DCu;
    {
        const bool branch_taken_0x2453dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2453dc) {
            ctx->pc = 0x2453ECu;
            goto label_2453ec;
        }
    }
    ctx->pc = 0x2453E4u;
label_2453e4:
    // 0x2453e4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2453e8:
    if (ctx->pc == 0x2453E8u) {
        ctx->pc = 0x2453E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2453E4u;
        // 0x2453e8: 0xa0a40000  sb          $a0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2453ECu;
        goto label_2453ec;
    }
    ctx->pc = 0x2453E4u;
    {
        const bool branch_taken_0x2453e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2453E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2453E4u;
        // 0x2453e8: 0xa0a40000  sb          $a0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2453e4) {
            ctx->pc = 0x2453F4u;
            goto label_2453f4;
        }
    }
    ctx->pc = 0x2453ECu;
label_2453ec:
    // 0x2453ec: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x2453ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2453f0:
    // 0x2453f0: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x2453f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
label_2453f4:
    // 0x2453f4: 0x10000032  b           . + 4 + (0x32 << 2)
label_2453f8:
    if (ctx->pc == 0x2453F8u) {
        ctx->pc = 0x2453FCu;
        goto label_2453fc;
    }
    ctx->pc = 0x2453F4u;
    {
        const bool branch_taken_0x2453f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2453f4) {
            ctx->pc = 0x2454C0u;
            goto label_2454c0;
        }
    }
    ctx->pc = 0x2453FCu;
label_2453fc:
    // 0x2453fc: 0x14800019  bnez        $a0, . + 4 + (0x19 << 2)
label_245400:
    if (ctx->pc == 0x245400u) {
        ctx->pc = 0x245404u;
        goto label_245404;
    }
    ctx->pc = 0x2453FCu;
    {
        const bool branch_taken_0x2453fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2453fc) {
            ctx->pc = 0x245464u;
            goto label_245464;
        }
    }
    ctx->pc = 0x245404u;
label_245404:
    // 0x245404: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x245404u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_245408:
    // 0x245408: 0x1480002d  bnez        $a0, . + 4 + (0x2D << 2)
label_24540c:
    if (ctx->pc == 0x24540Cu) {
        ctx->pc = 0x24540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245408u;
        // 0x24540c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245410u;
        goto label_245410;
    }
    ctx->pc = 0x245408u;
    {
        const bool branch_taken_0x245408 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245408u;
        // 0x24540c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245408) {
            ctx->pc = 0x2454C0u;
            goto label_2454c0;
        }
    }
    ctx->pc = 0x245410u;
label_245410:
    // 0x245410: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x245410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_245414:
    // 0x245414: 0xa2240001  sb          $a0, 0x1($s1)
    ctx->pc = 0x245414u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 4));
label_245418:
    // 0x245418: 0x1220c0  sll         $a0, $s2, 3
    ctx->pc = 0x245418u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_24541c:
    // 0x24541c: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x24541cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
label_245420:
    // 0x245420: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x245420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_245424:
    // 0x245424: 0xa2250004  sb          $a1, 0x4($s1)
    ctx->pc = 0x245424u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 5));
label_245428:
    // 0x245428: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x245428u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_24542c:
    // 0x24542c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x24542cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_245430:
    // 0x245430: 0x248449a5  addiu       $a0, $a0, 0x49A5
    ctx->pc = 0x245430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18853));
label_245434:
    // 0x245434: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x245434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_245438:
    // 0x245438: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x245438u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_24543c:
    // 0x24543c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x24543cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_245440:
    // 0x245440: 0x28810096  slti        $at, $a0, 0x96
    ctx->pc = 0x245440u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)150) ? 1 : 0);
label_245444:
    // 0x245444: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_245448:
    if (ctx->pc == 0x245448u) {
        ctx->pc = 0x24544Cu;
        goto label_24544c;
    }
    ctx->pc = 0x245444u;
    {
        const bool branch_taken_0x245444 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x245444) {
            ctx->pc = 0x245454u;
            goto label_245454;
        }
    }
    ctx->pc = 0x24544Cu;
label_24544c:
    // 0x24544c: 0x10000003  b           . + 4 + (0x3 << 2)
label_245450:
    if (ctx->pc == 0x245450u) {
        ctx->pc = 0x245450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24544Cu;
        // 0x245450: 0xa0a40000  sb          $a0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245454u;
        goto label_245454;
    }
    ctx->pc = 0x24544Cu;
    {
        const bool branch_taken_0x24544c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24544Cu;
        // 0x245450: 0xa0a40000  sb          $a0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24544c) {
            ctx->pc = 0x24545Cu;
            goto label_24545c;
        }
    }
    ctx->pc = 0x245454u;
label_245454:
    // 0x245454: 0x24040096  addiu       $a0, $zero, 0x96
    ctx->pc = 0x245454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_245458:
    // 0x245458: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x245458u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
label_24545c:
    // 0x24545c: 0x10000018  b           . + 4 + (0x18 << 2)
label_245460:
    if (ctx->pc == 0x245460u) {
        ctx->pc = 0x245464u;
        goto label_245464;
    }
    ctx->pc = 0x24545Cu;
    {
        const bool branch_taken_0x24545c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24545c) {
            ctx->pc = 0x2454C0u;
            goto label_2454c0;
        }
    }
    ctx->pc = 0x245464u;
label_245464:
    // 0x245464: 0x28640032  slti        $a0, $v1, 0x32
    ctx->pc = 0x245464u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
label_245468:
    // 0x245468: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
label_24546c:
    if (ctx->pc == 0x24546Cu) {
        ctx->pc = 0x245470u;
        goto label_245470;
    }
    ctx->pc = 0x245468u;
    {
        const bool branch_taken_0x245468 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x245468) {
            ctx->pc = 0x2454C0u;
            goto label_2454c0;
        }
    }
    ctx->pc = 0x245470u;
label_245470:
    // 0x245470: 0x92240003  lbu         $a0, 0x3($s1)
    ctx->pc = 0x245470u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_245474:
    // 0x245474: 0x14800012  bnez        $a0, . + 4 + (0x12 << 2)
label_245478:
    if (ctx->pc == 0x245478u) {
        ctx->pc = 0x245478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245474u;
        // 0x245478: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24547Cu;
        goto label_24547c;
    }
    ctx->pc = 0x245474u;
    {
        const bool branch_taken_0x245474 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x245478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245474u;
        // 0x245478: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245474) {
            ctx->pc = 0x2454C0u;
            goto label_2454c0;
        }
    }
    ctx->pc = 0x24547Cu;
label_24547c:
    // 0x24547c: 0x1220c0  sll         $a0, $s2, 3
    ctx->pc = 0x24547cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_245480:
    // 0x245480: 0xa2250003  sb          $a1, 0x3($s1)
    ctx->pc = 0x245480u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 5));
label_245484:
    // 0x245484: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x245484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_245488:
    // 0x245488: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x245488u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_24548c:
    // 0x24548c: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x24548cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
label_245490:
    // 0x245490: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x245490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_245494:
    // 0x245494: 0x248449a6  addiu       $a0, $a0, 0x49A6
    ctx->pc = 0x245494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18854));
label_245498:
    // 0x245498: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x245498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_24549c:
    // 0x24549c: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x24549cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2454a0:
    // 0x2454a0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2454a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2454a4:
    // 0x2454a4: 0x288100c8  slti        $at, $a0, 0xC8
    ctx->pc = 0x2454a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)200) ? 1 : 0);
label_2454a8:
    // 0x2454a8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2454ac:
    if (ctx->pc == 0x2454ACu) {
        ctx->pc = 0x2454B0u;
        goto label_2454b0;
    }
    ctx->pc = 0x2454A8u;
    {
        const bool branch_taken_0x2454a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2454a8) {
            ctx->pc = 0x2454B8u;
            goto label_2454b8;
        }
    }
    ctx->pc = 0x2454B0u;
label_2454b0:
    // 0x2454b0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2454b4:
    if (ctx->pc == 0x2454B4u) {
        ctx->pc = 0x2454B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2454B0u;
        // 0x2454b4: 0xa0a40000  sb          $a0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2454B8u;
        goto label_2454b8;
    }
    ctx->pc = 0x2454B0u;
    {
        const bool branch_taken_0x2454b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2454B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2454B0u;
        // 0x2454b4: 0xa0a40000  sb          $a0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2454b0) {
            ctx->pc = 0x2454C0u;
            goto label_2454c0;
        }
    }
    ctx->pc = 0x2454B8u;
label_2454b8:
    // 0x2454b8: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x2454b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_2454bc:
    // 0x2454bc: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x2454bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
label_2454c0:
    // 0x2454c0: 0x28610064  slti        $at, $v1, 0x64
    ctx->pc = 0x2454c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
label_2454c4:
    // 0x2454c4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2454c8:
    if (ctx->pc == 0x2454C8u) {
        ctx->pc = 0x2454CCu;
        goto label_2454cc;
    }
    ctx->pc = 0x2454C4u;
    {
        const bool branch_taken_0x2454c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2454c4) {
            ctx->pc = 0x2454D4u;
            goto label_2454d4;
        }
    }
    ctx->pc = 0x2454CCu;
label_2454cc:
    // 0x2454cc: 0x10000003  b           . + 4 + (0x3 << 2)
label_2454d0:
    if (ctx->pc == 0x2454D0u) {
        ctx->pc = 0x2454D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2454CCu;
        // 0x2454d0: 0x31c3c  dsll32      $v1, $v1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2454D4u;
        goto label_2454d4;
    }
    ctx->pc = 0x2454CCu;
    {
        const bool branch_taken_0x2454cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2454D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2454CCu;
        // 0x2454d0: 0x31c3c  dsll32      $v1, $v1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2454cc) {
            ctx->pc = 0x2454DCu;
            { ctx->pc = 0x2454dc; return; }
        }
    }
    ctx->pc = 0x2454D4u;
label_2454d4:
    // 0x2454d4: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2454d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->pc = 0x2454d8u;
    return;
}

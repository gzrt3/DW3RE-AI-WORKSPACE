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


void FUN_0019b6a8_part356(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x248c18u: goto label_248c18;
        case 0x248c1cu: goto label_248c1c;
        case 0x248c20u: goto label_248c20;
        case 0x248c24u: goto label_248c24;
        case 0x248c28u: goto label_248c28;
        case 0x248c2cu: goto label_248c2c;
        case 0x248c30u: goto label_248c30;
        case 0x248c34u: goto label_248c34;
        case 0x248c38u: goto label_248c38;
        case 0x248c3cu: goto label_248c3c;
        case 0x248c40u: goto label_248c40;
        case 0x248c44u: goto label_248c44;
        case 0x248c48u: goto label_248c48;
        case 0x248c4cu: goto label_248c4c;
        case 0x248c50u: goto label_248c50;
        case 0x248c54u: goto label_248c54;
        case 0x248c58u: goto label_248c58;
        case 0x248c5cu: goto label_248c5c;
        case 0x248c60u: goto label_248c60;
        case 0x248c64u: goto label_248c64;
        case 0x248c68u: goto label_248c68;
        case 0x248c6cu: goto label_248c6c;
        case 0x248c70u: goto label_248c70;
        case 0x248c74u: goto label_248c74;
        case 0x248c78u: goto label_248c78;
        case 0x248c7cu: goto label_248c7c;
        case 0x248c80u: goto label_248c80;
        case 0x248c84u: goto label_248c84;
        case 0x248c88u: goto label_248c88;
        case 0x248c8cu: goto label_248c8c;
        case 0x248c90u: goto label_248c90;
        case 0x248c94u: goto label_248c94;
        case 0x248c98u: goto label_248c98;
        case 0x248c9cu: goto label_248c9c;
        case 0x248ca0u: goto label_248ca0;
        case 0x248ca4u: goto label_248ca4;
        case 0x248ca8u: goto label_248ca8;
        case 0x248cacu: goto label_248cac;
        case 0x248cb0u: goto label_248cb0;
        case 0x248cb4u: goto label_248cb4;
        case 0x248cb8u: goto label_248cb8;
        case 0x248cbcu: goto label_248cbc;
        case 0x248cc0u: goto label_248cc0;
        case 0x248cc4u: goto label_248cc4;
        case 0x248cc8u: goto label_248cc8;
        case 0x248cccu: goto label_248ccc;
        case 0x248cd0u: goto label_248cd0;
        case 0x248cd4u: goto label_248cd4;
        case 0x248cd8u: goto label_248cd8;
        case 0x248cdcu: goto label_248cdc;
        case 0x248ce0u: goto label_248ce0;
        case 0x248ce4u: goto label_248ce4;
        case 0x248ce8u: goto label_248ce8;
        case 0x248cecu: goto label_248cec;
        case 0x248cf0u: goto label_248cf0;
        case 0x248cf4u: goto label_248cf4;
        case 0x248cf8u: goto label_248cf8;
        case 0x248cfcu: goto label_248cfc;
        case 0x248d00u: goto label_248d00;
        case 0x248d04u: goto label_248d04;
        case 0x248d08u: goto label_248d08;
        case 0x248d0cu: goto label_248d0c;
        case 0x248d10u: goto label_248d10;
        case 0x248d14u: goto label_248d14;
        case 0x248d18u: goto label_248d18;
        case 0x248d1cu: goto label_248d1c;
        case 0x248d20u: goto label_248d20;
        case 0x248d24u: goto label_248d24;
        case 0x248d28u: goto label_248d28;
        case 0x248d2cu: goto label_248d2c;
        case 0x248d30u: goto label_248d30;
        case 0x248d34u: goto label_248d34;
        case 0x248d38u: goto label_248d38;
        case 0x248d3cu: goto label_248d3c;
        case 0x248d40u: goto label_248d40;
        case 0x248d44u: goto label_248d44;
        case 0x248d48u: goto label_248d48;
        case 0x248d4cu: goto label_248d4c;
        case 0x248d50u: goto label_248d50;
        case 0x248d54u: goto label_248d54;
        case 0x248d58u: goto label_248d58;
        case 0x248d5cu: goto label_248d5c;
        case 0x248d60u: goto label_248d60;
        case 0x248d64u: goto label_248d64;
        case 0x248d68u: goto label_248d68;
        case 0x248d6cu: goto label_248d6c;
        case 0x248d70u: goto label_248d70;
        case 0x248d74u: goto label_248d74;
        case 0x248d78u: goto label_248d78;
        case 0x248d7cu: goto label_248d7c;
        case 0x248d80u: goto label_248d80;
        case 0x248d84u: goto label_248d84;
        case 0x248d88u: goto label_248d88;
        case 0x248d8cu: goto label_248d8c;
        case 0x248d90u: goto label_248d90;
        case 0x248d94u: goto label_248d94;
        case 0x248d98u: goto label_248d98;
        case 0x248d9cu: goto label_248d9c;
        case 0x248da0u: goto label_248da0;
        case 0x248da4u: goto label_248da4;
        case 0x248da8u: goto label_248da8;
        case 0x248dacu: goto label_248dac;
        case 0x248db0u: goto label_248db0;
        case 0x248db4u: goto label_248db4;
        case 0x248db8u: goto label_248db8;
        case 0x248dbcu: goto label_248dbc;
        case 0x248dc0u: goto label_248dc0;
        case 0x248dc4u: goto label_248dc4;
        case 0x248dc8u: goto label_248dc8;
        case 0x248dccu: goto label_248dcc;
        case 0x248dd0u: goto label_248dd0;
        case 0x248dd4u: goto label_248dd4;
        case 0x248dd8u: goto label_248dd8;
        case 0x248ddcu: goto label_248ddc;
        case 0x248de0u: goto label_248de0;
        case 0x248de4u: goto label_248de4;
        case 0x248de8u: goto label_248de8;
        case 0x248decu: goto label_248dec;
        case 0x248df0u: goto label_248df0;
        case 0x248df4u: goto label_248df4;
        case 0x248df8u: goto label_248df8;
        case 0x248dfcu: goto label_248dfc;
        case 0x248e00u: goto label_248e00;
        case 0x248e04u: goto label_248e04;
        case 0x248e08u: goto label_248e08;
        case 0x248e0cu: goto label_248e0c;
        case 0x248e10u: goto label_248e10;
        case 0x248e14u: goto label_248e14;
        case 0x248e18u: goto label_248e18;
        case 0x248e1cu: goto label_248e1c;
        case 0x248e20u: goto label_248e20;
        case 0x248e24u: goto label_248e24;
        case 0x248e28u: goto label_248e28;
        case 0x248e2cu: goto label_248e2c;
        case 0x248e30u: goto label_248e30;
        case 0x248e34u: goto label_248e34;
        case 0x248e38u: goto label_248e38;
        case 0x248e3cu: goto label_248e3c;
        case 0x248e40u: goto label_248e40;
        case 0x248e44u: goto label_248e44;
        case 0x248e48u: goto label_248e48;
        case 0x248e4cu: goto label_248e4c;
        case 0x248e50u: goto label_248e50;
        case 0x248e54u: goto label_248e54;
        case 0x248e58u: goto label_248e58;
        case 0x248e5cu: goto label_248e5c;
        case 0x248e60u: goto label_248e60;
        case 0x248e64u: goto label_248e64;
        case 0x248e68u: goto label_248e68;
        case 0x248e6cu: goto label_248e6c;
        case 0x248e70u: goto label_248e70;
        case 0x248e74u: goto label_248e74;
        case 0x248e78u: goto label_248e78;
        case 0x248e7cu: goto label_248e7c;
        case 0x248e80u: goto label_248e80;
        case 0x248e84u: goto label_248e84;
        case 0x248e88u: goto label_248e88;
        case 0x248e8cu: goto label_248e8c;
        case 0x248e90u: goto label_248e90;
        case 0x248e94u: goto label_248e94;
        case 0x248e98u: goto label_248e98;
        case 0x248e9cu: goto label_248e9c;
        case 0x248ea0u: goto label_248ea0;
        case 0x248ea4u: goto label_248ea4;
        case 0x248ea8u: goto label_248ea8;
        case 0x248eacu: goto label_248eac;
        case 0x248eb0u: goto label_248eb0;
        case 0x248eb4u: goto label_248eb4;
        case 0x248eb8u: goto label_248eb8;
        case 0x248ebcu: goto label_248ebc;
        case 0x248ec0u: goto label_248ec0;
        case 0x248ec4u: goto label_248ec4;
        case 0x248ec8u: goto label_248ec8;
        case 0x248eccu: goto label_248ecc;
        case 0x248ed0u: goto label_248ed0;
        case 0x248ed4u: goto label_248ed4;
        case 0x248ed8u: goto label_248ed8;
        case 0x248edcu: goto label_248edc;
        case 0x248ee0u: goto label_248ee0;
        case 0x248ee4u: goto label_248ee4;
        case 0x248ee8u: goto label_248ee8;
        case 0x248eecu: goto label_248eec;
        case 0x248ef0u: goto label_248ef0;
        case 0x248ef4u: goto label_248ef4;
        case 0x248ef8u: goto label_248ef8;
        case 0x248efcu: goto label_248efc;
        case 0x248f00u: goto label_248f00;
        case 0x248f04u: goto label_248f04;
        case 0x248f08u: goto label_248f08;
        case 0x248f0cu: goto label_248f0c;
        case 0x248f10u: goto label_248f10;
        case 0x248f14u: goto label_248f14;
        case 0x248f18u: goto label_248f18;
        case 0x248f1cu: goto label_248f1c;
        case 0x248f20u: goto label_248f20;
        case 0x248f24u: goto label_248f24;
        case 0x248f28u: goto label_248f28;
        case 0x248f2cu: goto label_248f2c;
        case 0x248f30u: goto label_248f30;
        case 0x248f34u: goto label_248f34;
        case 0x248f38u: goto label_248f38;
        case 0x248f3cu: goto label_248f3c;
        case 0x248f40u: goto label_248f40;
        case 0x248f44u: goto label_248f44;
        case 0x248f48u: goto label_248f48;
        case 0x248f4cu: goto label_248f4c;
        case 0x248f50u: goto label_248f50;
        case 0x248f54u: goto label_248f54;
        case 0x248f58u: goto label_248f58;
        case 0x248f5cu: goto label_248f5c;
        case 0x248f60u: goto label_248f60;
        case 0x248f64u: goto label_248f64;
        case 0x248f68u: goto label_248f68;
        case 0x248f6cu: goto label_248f6c;
        case 0x248f70u: goto label_248f70;
        case 0x248f74u: goto label_248f74;
        case 0x248f78u: goto label_248f78;
        case 0x248f7cu: goto label_248f7c;
        case 0x248f80u: goto label_248f80;
        case 0x248f84u: goto label_248f84;
        case 0x248f88u: goto label_248f88;
        case 0x248f8cu: goto label_248f8c;
        case 0x248f90u: goto label_248f90;
        case 0x248f94u: goto label_248f94;
        case 0x248f98u: goto label_248f98;
        case 0x248f9cu: goto label_248f9c;
        case 0x248fa0u: goto label_248fa0;
        case 0x248fa4u: goto label_248fa4;
        case 0x248fa8u: goto label_248fa8;
        case 0x248facu: goto label_248fac;
        case 0x248fb0u: goto label_248fb0;
        case 0x248fb4u: goto label_248fb4;
        case 0x248fb8u: goto label_248fb8;
        case 0x248fbcu: goto label_248fbc;
        case 0x248fc0u: goto label_248fc0;
        case 0x248fc4u: goto label_248fc4;
        case 0x248fc8u: goto label_248fc8;
        case 0x248fccu: goto label_248fcc;
        case 0x248fd0u: goto label_248fd0;
        case 0x248fd4u: goto label_248fd4;
        case 0x248fd8u: goto label_248fd8;
        case 0x248fdcu: goto label_248fdc;
        case 0x248fe0u: goto label_248fe0;
        case 0x248fe4u: goto label_248fe4;
        case 0x248fe8u: goto label_248fe8;
        case 0x248fecu: goto label_248fec;
        case 0x248ff0u: goto label_248ff0;
        case 0x248ff4u: goto label_248ff4;
        case 0x248ff8u: goto label_248ff8;
        case 0x248ffcu: goto label_248ffc;
        case 0x249000u: goto label_249000;
        case 0x249004u: goto label_249004;
        case 0x249008u: goto label_249008;
        case 0x24900cu: goto label_24900c;
        case 0x249010u: goto label_249010;
        case 0x249014u: goto label_249014;
        case 0x249018u: goto label_249018;
        case 0x24901cu: goto label_24901c;
        case 0x249020u: goto label_249020;
        case 0x249024u: goto label_249024;
        case 0x249028u: goto label_249028;
        case 0x24902cu: goto label_24902c;
        case 0x249030u: goto label_249030;
        case 0x249034u: goto label_249034;
        case 0x249038u: goto label_249038;
        case 0x24903cu: goto label_24903c;
        case 0x249040u: goto label_249040;
        case 0x249044u: goto label_249044;
        case 0x249048u: goto label_249048;
        case 0x24904cu: goto label_24904c;
        case 0x249050u: goto label_249050;
        case 0x249054u: goto label_249054;
        case 0x249058u: goto label_249058;
        case 0x24905cu: goto label_24905c;
        case 0x249060u: goto label_249060;
        case 0x249064u: goto label_249064;
        case 0x249068u: goto label_249068;
        case 0x24906cu: goto label_24906c;
        case 0x249070u: goto label_249070;
        case 0x249074u: goto label_249074;
        case 0x249078u: goto label_249078;
        case 0x24907cu: goto label_24907c;
        case 0x249080u: goto label_249080;
        case 0x249084u: goto label_249084;
        case 0x249088u: goto label_249088;
        case 0x24908cu: goto label_24908c;
        case 0x249090u: goto label_249090;
        case 0x249094u: goto label_249094;
        case 0x249098u: goto label_249098;
        case 0x24909cu: goto label_24909c;
        case 0x2490a0u: goto label_2490a0;
        case 0x2490a4u: goto label_2490a4;
        case 0x2490a8u: goto label_2490a8;
        case 0x2490acu: goto label_2490ac;
        case 0x2490b0u: goto label_2490b0;
        case 0x2490b4u: goto label_2490b4;
        case 0x2490b8u: goto label_2490b8;
        case 0x2490bcu: goto label_2490bc;
        case 0x2490c0u: goto label_2490c0;
        case 0x2490c4u: goto label_2490c4;
        case 0x2490c8u: goto label_2490c8;
        case 0x2490ccu: goto label_2490cc;
        case 0x2490d0u: goto label_2490d0;
        case 0x2490d4u: goto label_2490d4;
        case 0x2490d8u: goto label_2490d8;
        case 0x2490dcu: goto label_2490dc;
        case 0x2490e0u: goto label_2490e0;
        case 0x2490e4u: goto label_2490e4;
        case 0x2490e8u: goto label_2490e8;
        case 0x2490ecu: goto label_2490ec;
        case 0x2490f0u: goto label_2490f0;
        case 0x2490f4u: goto label_2490f4;
        case 0x2490f8u: goto label_2490f8;
        case 0x2490fcu: goto label_2490fc;
        case 0x249100u: goto label_249100;
        case 0x249104u: goto label_249104;
        case 0x249108u: goto label_249108;
        case 0x24910cu: goto label_24910c;
        case 0x249110u: goto label_249110;
        case 0x249114u: goto label_249114;
        case 0x249118u: goto label_249118;
        case 0x24911cu: goto label_24911c;
        case 0x249120u: goto label_249120;
        case 0x249124u: goto label_249124;
        case 0x249128u: goto label_249128;
        case 0x24912cu: goto label_24912c;
        case 0x249130u: goto label_249130;
        case 0x249134u: goto label_249134;
        case 0x249138u: goto label_249138;
        case 0x24913cu: goto label_24913c;
        case 0x249140u: goto label_249140;
        case 0x249144u: goto label_249144;
        case 0x249148u: goto label_249148;
        case 0x24914cu: goto label_24914c;
        case 0x249150u: goto label_249150;
        case 0x249154u: goto label_249154;
        case 0x249158u: goto label_249158;
        case 0x24915cu: goto label_24915c;
        case 0x249160u: goto label_249160;
        case 0x249164u: goto label_249164;
        case 0x249168u: goto label_249168;
        case 0x24916cu: goto label_24916c;
        case 0x249170u: goto label_249170;
        case 0x249174u: goto label_249174;
        case 0x249178u: goto label_249178;
        case 0x24917cu: goto label_24917c;
        case 0x249180u: goto label_249180;
        case 0x249184u: goto label_249184;
        case 0x249188u: goto label_249188;
        case 0x24918cu: goto label_24918c;
        case 0x249190u: goto label_249190;
        case 0x249194u: goto label_249194;
        case 0x249198u: goto label_249198;
        case 0x24919cu: goto label_24919c;
        case 0x2491a0u: goto label_2491a0;
        case 0x2491a4u: goto label_2491a4;
        case 0x2491a8u: goto label_2491a8;
        case 0x2491acu: goto label_2491ac;
        case 0x2491b0u: goto label_2491b0;
        case 0x2491b4u: goto label_2491b4;
        case 0x2491b8u: goto label_2491b8;
        case 0x2491bcu: goto label_2491bc;
        case 0x2491c0u: goto label_2491c0;
        case 0x2491c4u: goto label_2491c4;
        case 0x2491c8u: goto label_2491c8;
        case 0x2491ccu: goto label_2491cc;
        case 0x2491d0u: goto label_2491d0;
        case 0x2491d4u: goto label_2491d4;
        case 0x2491d8u: goto label_2491d8;
        case 0x2491dcu: goto label_2491dc;
        case 0x2491e0u: goto label_2491e0;
        case 0x2491e4u: goto label_2491e4;
        case 0x2491e8u: goto label_2491e8;
        case 0x2491ecu: goto label_2491ec;
        case 0x2491f0u: goto label_2491f0;
        case 0x2491f4u: goto label_2491f4;
        case 0x2491f8u: goto label_2491f8;
        case 0x2491fcu: goto label_2491fc;
        case 0x249200u: goto label_249200;
        case 0x249204u: goto label_249204;
        case 0x249208u: goto label_249208;
        case 0x24920cu: goto label_24920c;
        case 0x249210u: goto label_249210;
        case 0x249214u: goto label_249214;
        case 0x249218u: goto label_249218;
        case 0x24921cu: goto label_24921c;
        case 0x249220u: goto label_249220;
        case 0x249224u: goto label_249224;
        case 0x249228u: goto label_249228;
        case 0x24922cu: goto label_24922c;
        case 0x249230u: goto label_249230;
        case 0x249234u: goto label_249234;
        case 0x249238u: goto label_249238;
        case 0x24923cu: goto label_24923c;
        case 0x249240u: goto label_249240;
        case 0x249244u: goto label_249244;
        case 0x249248u: goto label_249248;
        case 0x24924cu: goto label_24924c;
        case 0x249250u: goto label_249250;
        case 0x249254u: goto label_249254;
        case 0x249258u: goto label_249258;
        case 0x24925cu: goto label_24925c;
        case 0x249260u: goto label_249260;
        case 0x249264u: goto label_249264;
        case 0x249268u: goto label_249268;
        case 0x24926cu: goto label_24926c;
        case 0x249270u: goto label_249270;
        case 0x249274u: goto label_249274;
        case 0x249278u: goto label_249278;
        case 0x24927cu: goto label_24927c;
        case 0x249280u: goto label_249280;
        case 0x249284u: goto label_249284;
        case 0x249288u: goto label_249288;
        case 0x24928cu: goto label_24928c;
        case 0x249290u: goto label_249290;
        case 0x249294u: goto label_249294;
        case 0x249298u: goto label_249298;
        case 0x24929cu: goto label_24929c;
        case 0x2492a0u: goto label_2492a0;
        case 0x2492a4u: goto label_2492a4;
        case 0x2492a8u: goto label_2492a8;
        case 0x2492acu: goto label_2492ac;
        case 0x2492b0u: goto label_2492b0;
        case 0x2492b4u: goto label_2492b4;
        case 0x2492b8u: goto label_2492b8;
        case 0x2492bcu: goto label_2492bc;
        case 0x2492c0u: goto label_2492c0;
        case 0x2492c4u: goto label_2492c4;
        case 0x2492c8u: goto label_2492c8;
        case 0x2492ccu: goto label_2492cc;
        case 0x2492d0u: goto label_2492d0;
        case 0x2492d4u: goto label_2492d4;
        case 0x2492d8u: goto label_2492d8;
        case 0x2492dcu: goto label_2492dc;
        case 0x2492e0u: goto label_2492e0;
        case 0x2492e4u: goto label_2492e4;
        case 0x2492e8u: goto label_2492e8;
        case 0x2492ecu: goto label_2492ec;
        case 0x2492f0u: goto label_2492f0;
        case 0x2492f4u: goto label_2492f4;
        case 0x2492f8u: goto label_2492f8;
        case 0x2492fcu: goto label_2492fc;
        case 0x249300u: goto label_249300;
        case 0x249304u: goto label_249304;
        case 0x249308u: goto label_249308;
        case 0x24930cu: goto label_24930c;
        case 0x249310u: goto label_249310;
        case 0x249314u: goto label_249314;
        case 0x249318u: goto label_249318;
        case 0x24931cu: goto label_24931c;
        case 0x249320u: goto label_249320;
        case 0x249324u: goto label_249324;
        case 0x249328u: goto label_249328;
        case 0x24932cu: goto label_24932c;
        case 0x249330u: goto label_249330;
        case 0x249334u: goto label_249334;
        case 0x249338u: goto label_249338;
        case 0x24933cu: goto label_24933c;
        case 0x249340u: goto label_249340;
        case 0x249344u: goto label_249344;
        case 0x249348u: goto label_249348;
        case 0x24934cu: goto label_24934c;
        case 0x249350u: goto label_249350;
        case 0x249354u: goto label_249354;
        case 0x249358u: goto label_249358;
        case 0x24935cu: goto label_24935c;
        case 0x249360u: goto label_249360;
        case 0x249364u: goto label_249364;
        case 0x249368u: goto label_249368;
        case 0x24936cu: goto label_24936c;
        case 0x249370u: goto label_249370;
        case 0x249374u: goto label_249374;
        case 0x249378u: goto label_249378;
        case 0x24937cu: goto label_24937c;
        case 0x249380u: goto label_249380;
        case 0x249384u: goto label_249384;
        case 0x249388u: goto label_249388;
        case 0x24938cu: goto label_24938c;
        case 0x249390u: goto label_249390;
        case 0x249394u: goto label_249394;
        case 0x249398u: goto label_249398;
        case 0x24939cu: goto label_24939c;
        case 0x2493a0u: goto label_2493a0;
        case 0x2493a4u: goto label_2493a4;
        case 0x2493a8u: goto label_2493a8;
        case 0x2493acu: goto label_2493ac;
        case 0x2493b0u: goto label_2493b0;
        case 0x2493b4u: goto label_2493b4;
        case 0x2493b8u: goto label_2493b8;
        case 0x2493bcu: goto label_2493bc;
        case 0x2493c0u: goto label_2493c0;
        case 0x2493c4u: goto label_2493c4;
        case 0x2493c8u: goto label_2493c8;
        case 0x2493ccu: goto label_2493cc;
        case 0x2493d0u: goto label_2493d0;
        case 0x2493d4u: goto label_2493d4;
        case 0x2493d8u: goto label_2493d8;
        case 0x2493dcu: goto label_2493dc;
        case 0x2493e0u: goto label_2493e0;
        case 0x2493e4u: goto label_2493e4;
        default: return;
    }

label_248c18:
    // 0x248c18: 0x91e40000  lbu         $a0, 0x0($t7)
    ctx->pc = 0x248c18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_248c1c:
    // 0x248c1c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x248c1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_248c20:
    // 0x248c20: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x248c20u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
label_248c24:
    // 0x248c24: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x248c24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_248c28:
    // 0x248c28: 0x1000fff2  b           . + 4 + (-0xE << 2)
label_248c2c:
    if (ctx->pc == 0x248C2Cu) {
        ctx->pc = 0x248C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C28u;
        // 0x248c2c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248C30u;
        goto label_248c30;
    }
    ctx->pc = 0x248C28u;
    {
        const bool branch_taken_0x248c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C28u;
        // 0x248c2c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248c28) {
            ctx->pc = 0x248BF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x248bf4; return; }
        }
    }
    ctx->pc = 0x248C30u;
label_248c30:
    // 0x248c30: 0x95b80000  lhu         $t8, 0x0($t5)
    ctx->pc = 0x248c30u;
    SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
label_248c34:
    // 0x248c34: 0x330c0fff  andi        $t4, $t8, 0xFFF
    ctx->pc = 0x248c34u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)4095);
label_248c38:
    // 0x248c38: 0x11800018  beqz        $t4, . + 4 + (0x18 << 2)
label_248c3c:
    if (ctx->pc == 0x248C3Cu) {
        ctx->pc = 0x248C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C38u;
        // 0x248c3c: 0x1673024  and         $a2, $t3, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248C40u;
        goto label_248c40;
    }
    ctx->pc = 0x248C38u;
    {
        const bool branch_taken_0x248c38 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x248C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C38u;
        // 0x248c3c: 0x1673024  and         $a2, $t3, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248c38) {
            ctx->pc = 0x248C9Cu;
            goto label_248c9c;
        }
    }
    ctx->pc = 0x248C40u;
label_248c40:
    // 0x248c40: 0x31640fff  andi        $a0, $t3, 0xFFF
    ctx->pc = 0x248c40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)4095);
label_248c44:
    // 0x248c44: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x248c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
label_248c48:
    // 0x248c48: 0x8c082a  slt         $at, $a0, $t4
    ctx->pc = 0x248c48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
label_248c4c:
    // 0x248c4c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x248c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_248c50:
    // 0x248c50: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_248c54:
    if (ctx->pc == 0x248C54u) {
        ctx->pc = 0x248C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C50u;
        // 0x248c54: 0x667021  addu        $t6, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248C58u;
        goto label_248c58;
    }
    ctx->pc = 0x248C50u;
    {
        const bool branch_taken_0x248c50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x248C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C50u;
        // 0x248c54: 0x667021  addu        $t6, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248c50) {
            ctx->pc = 0x248C5Cu;
            goto label_248c5c;
        }
    }
    ctx->pc = 0x248C58u;
label_248c58:
    // 0x248c58: 0x25cef000  addiu       $t6, $t6, -0x1000
    ctx->pc = 0x248c58u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294963200));
label_248c5c:
    // 0x248c5c: 0x0  nop
    ctx->pc = 0x248c5cu;
    // NOP
label_248c60:
    // 0x248c60: 0x182303  sra         $a0, $t8, 12
    ctx->pc = 0x248c60u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 24), 12));
label_248c64:
    // 0x248c64: 0x24860003  addiu       $a2, $a0, 0x3
    ctx->pc = 0x248c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
label_248c68:
    // 0x248c68: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x248c68u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
label_248c6c:
    // 0x248c6c: 0x10c0ffe1  beqz        $a2, . + 4 + (-0x1F << 2)
label_248c70:
    if (ctx->pc == 0x248C70u) {
        ctx->pc = 0x248C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C6Cu;
        // 0x248c70: 0x1665821  addu        $t3, $t3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248C74u;
        goto label_248c74;
    }
    ctx->pc = 0x248C6Cu;
    {
        const bool branch_taken_0x248c6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x248C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C6Cu;
        // 0x248c70: 0x1665821  addu        $t3, $t3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248c6c) {
            ctx->pc = 0x248BF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x248bf4; return; }
        }
    }
    ctx->pc = 0x248C74u;
label_248c74:
    // 0x248c74: 0x0  nop
    ctx->pc = 0x248c74u;
    // NOP
label_248c78:
    // 0x248c78: 0x91c40000  lbu         $a0, 0x0($t6)
    ctx->pc = 0x248c78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
label_248c7c:
    // 0x248c7c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x248c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_248c80:
    // 0x248c80: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x248c80u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
label_248c84:
    // 0x248c84: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x248c84u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_248c88:
    // 0x248c88: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x248c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_248c8c:
    // 0x248c8c: 0x14c0fff9  bnez        $a2, . + 4 + (-0x7 << 2)
label_248c90:
    if (ctx->pc == 0x248C90u) {
        ctx->pc = 0x248C94u;
        goto label_248c94;
    }
    ctx->pc = 0x248C8Cu;
    {
        const bool branch_taken_0x248c8c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x248c8c) {
            ctx->pc = 0x248C74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248c74;
        }
    }
    ctx->pc = 0x248C94u;
label_248c94:
    // 0x248c94: 0x1000ffd8  b           . + 4 + (-0x28 << 2)
label_248c98:
    if (ctx->pc == 0x248C98u) {
        ctx->pc = 0x248C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C94u;
        // 0x248c98: 0x9487a  dsrl        $t1, $t1, 1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x248C9Cu;
        goto label_248c9c;
    }
    ctx->pc = 0x248C94u;
    {
        const bool branch_taken_0x248c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C94u;
        // 0x248c98: 0x9487a  dsrl        $t1, $t1, 1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x248c94) {
            ctx->pc = 0x248BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x248bf8; return; }
        }
    }
    ctx->pc = 0x248C9Cu;
label_248c9c:
    // 0x248c9c: 0x0  nop
    ctx->pc = 0x248c9cu;
    // NOP
label_248ca0:
    // 0x248ca0: 0x3e00008  jr          $ra
label_248ca4:
    if (ctx->pc == 0x248CA4u) {
        ctx->pc = 0x248CA8u;
        goto label_248ca8;
    }
    ctx->pc = 0x248CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248CA8u;
label_248ca8:
    // 0x248ca8: 0x0  nop
    ctx->pc = 0x248ca8u;
    // NOP
label_248cac:
    // 0x248cac: 0x0  nop
    ctx->pc = 0x248cacu;
    // NOP
label_248cb0:
    // 0x248cb0: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x248cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_248cb4:
    // 0x248cb4: 0x2408fffc  addiu       $t0, $zero, -0x4
    ctx->pc = 0x248cb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_248cb8:
    // 0x248cb8: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x248cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_248cbc:
    // 0x248cbc: 0x248a0008  addiu       $t2, $a0, 0x8
    ctx->pc = 0x248cbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_248cc0:
    // 0x248cc0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x248cc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248cc4:
    // 0x248cc4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x248cc4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248cc8:
    // 0x248cc8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x248cc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_248ccc:
    // 0x248ccc: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x248cccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
label_248cd0:
    // 0x248cd0: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x248cd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
label_248cd4:
    // 0x248cd4: 0x876821  addu        $t5, $a0, $a3
    ctx->pc = 0x248cd4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_248cd8:
    // 0x248cd8: 0x867821  addu        $t7, $a0, $a2
    ctx->pc = 0x248cd8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_248cdc:
    // 0x248cdc: 0x2407f800  addiu       $a3, $zero, -0x800
    ctx->pc = 0x248cdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
label_248ce0:
    // 0x248ce0: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x248ce0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
label_248ce4:
    // 0x248ce4: 0x9487a  dsrl        $t1, $t1, 1
    ctx->pc = 0x248ce4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 1);
label_248ce8:
    // 0x248ce8: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
label_248cec:
    if (ctx->pc == 0x248CECu) {
        ctx->pc = 0x248CF0u;
        goto label_248cf0;
    }
    ctx->pc = 0x248CE8u;
    {
        const bool branch_taken_0x248ce8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x248ce8) {
            ctx->pc = 0x248CF8u;
            goto label_248cf8;
        }
    }
    ctx->pc = 0x248CF0u;
label_248cf0:
    // 0x248cf0: 0x8483c  dsll32      $t1, $t0, 0
    ctx->pc = 0x248cf0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 0));
label_248cf4:
    // 0x248cf4: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x248cf4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_248cf8:
    // 0x248cf8: 0xdd440000  ld          $a0, 0x0($t2)
    ctx->pc = 0x248cf8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 10), 0)));
label_248cfc:
    // 0x248cfc: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x248cfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
label_248d00:
    // 0x248d00: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_248d04:
    if (ctx->pc == 0x248D04u) {
        ctx->pc = 0x248D08u;
        goto label_248d08;
    }
    ctx->pc = 0x248D00u;
    {
        const bool branch_taken_0x248d00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x248d00) {
            ctx->pc = 0x248D20u;
            goto label_248d20;
        }
    }
    ctx->pc = 0x248D08u;
label_248d08:
    // 0x248d08: 0x91e40000  lbu         $a0, 0x0($t7)
    ctx->pc = 0x248d08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_248d0c:
    // 0x248d0c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x248d0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_248d10:
    // 0x248d10: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x248d10u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
label_248d14:
    // 0x248d14: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x248d14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_248d18:
    // 0x248d18: 0x1000fff2  b           . + 4 + (-0xE << 2)
label_248d1c:
    if (ctx->pc == 0x248D1Cu) {
        ctx->pc = 0x248D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D18u;
        // 0x248d1c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248D20u;
        goto label_248d20;
    }
    ctx->pc = 0x248D18u;
    {
        const bool branch_taken_0x248d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D18u;
        // 0x248d1c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d18) {
            ctx->pc = 0x248CE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248ce4;
        }
    }
    ctx->pc = 0x248D20u;
label_248d20:
    // 0x248d20: 0x95b80000  lhu         $t8, 0x0($t5)
    ctx->pc = 0x248d20u;
    SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
label_248d24:
    // 0x248d24: 0x330c07ff  andi        $t4, $t8, 0x7FF
    ctx->pc = 0x248d24u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)2047);
label_248d28:
    // 0x248d28: 0x11800018  beqz        $t4, . + 4 + (0x18 << 2)
label_248d2c:
    if (ctx->pc == 0x248D2Cu) {
        ctx->pc = 0x248D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D28u;
        // 0x248d2c: 0x1673024  and         $a2, $t3, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248D30u;
        goto label_248d30;
    }
    ctx->pc = 0x248D28u;
    {
        const bool branch_taken_0x248d28 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x248D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D28u;
        // 0x248d2c: 0x1673024  and         $a2, $t3, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d28) {
            ctx->pc = 0x248D8Cu;
            goto label_248d8c;
        }
    }
    ctx->pc = 0x248D30u;
label_248d30:
    // 0x248d30: 0x316407ff  andi        $a0, $t3, 0x7FF
    ctx->pc = 0x248d30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)2047);
label_248d34:
    // 0x248d34: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x248d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
label_248d38:
    // 0x248d38: 0x8c082a  slt         $at, $a0, $t4
    ctx->pc = 0x248d38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
label_248d3c:
    // 0x248d3c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x248d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_248d40:
    // 0x248d40: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_248d44:
    if (ctx->pc == 0x248D44u) {
        ctx->pc = 0x248D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D40u;
        // 0x248d44: 0x667021  addu        $t6, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248D48u;
        goto label_248d48;
    }
    ctx->pc = 0x248D40u;
    {
        const bool branch_taken_0x248d40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x248D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D40u;
        // 0x248d44: 0x667021  addu        $t6, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d40) {
            ctx->pc = 0x248D4Cu;
            goto label_248d4c;
        }
    }
    ctx->pc = 0x248D48u;
label_248d48:
    // 0x248d48: 0x25cef800  addiu       $t6, $t6, -0x800
    ctx->pc = 0x248d48u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294965248));
label_248d4c:
    // 0x248d4c: 0x0  nop
    ctx->pc = 0x248d4cu;
    // NOP
label_248d50:
    // 0x248d50: 0x1822c3  sra         $a0, $t8, 11
    ctx->pc = 0x248d50u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 24), 11));
label_248d54:
    // 0x248d54: 0x24860003  addiu       $a2, $a0, 0x3
    ctx->pc = 0x248d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
label_248d58:
    // 0x248d58: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x248d58u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
label_248d5c:
    // 0x248d5c: 0x10c0ffe1  beqz        $a2, . + 4 + (-0x1F << 2)
label_248d60:
    if (ctx->pc == 0x248D60u) {
        ctx->pc = 0x248D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D5Cu;
        // 0x248d60: 0x1665821  addu        $t3, $t3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248D64u;
        goto label_248d64;
    }
    ctx->pc = 0x248D5Cu;
    {
        const bool branch_taken_0x248d5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x248D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D5Cu;
        // 0x248d60: 0x1665821  addu        $t3, $t3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d5c) {
            ctx->pc = 0x248CE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248ce4;
        }
    }
    ctx->pc = 0x248D64u;
label_248d64:
    // 0x248d64: 0x0  nop
    ctx->pc = 0x248d64u;
    // NOP
label_248d68:
    // 0x248d68: 0x91c40000  lbu         $a0, 0x0($t6)
    ctx->pc = 0x248d68u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
label_248d6c:
    // 0x248d6c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x248d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_248d70:
    // 0x248d70: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x248d70u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
label_248d74:
    // 0x248d74: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x248d74u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_248d78:
    // 0x248d78: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x248d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_248d7c:
    // 0x248d7c: 0x14c0fff9  bnez        $a2, . + 4 + (-0x7 << 2)
label_248d80:
    if (ctx->pc == 0x248D80u) {
        ctx->pc = 0x248D84u;
        goto label_248d84;
    }
    ctx->pc = 0x248D7Cu;
    {
        const bool branch_taken_0x248d7c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x248d7c) {
            ctx->pc = 0x248D64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248d64;
        }
    }
    ctx->pc = 0x248D84u;
label_248d84:
    // 0x248d84: 0x1000ffd8  b           . + 4 + (-0x28 << 2)
label_248d88:
    if (ctx->pc == 0x248D88u) {
        ctx->pc = 0x248D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D84u;
        // 0x248d88: 0x9487a  dsrl        $t1, $t1, 1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x248D8Cu;
        goto label_248d8c;
    }
    ctx->pc = 0x248D84u;
    {
        const bool branch_taken_0x248d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D84u;
        // 0x248d88: 0x9487a  dsrl        $t1, $t1, 1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d84) {
            ctx->pc = 0x248CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248ce8;
        }
    }
    ctx->pc = 0x248D8Cu;
label_248d8c:
    // 0x248d8c: 0x0  nop
    ctx->pc = 0x248d8cu;
    // NOP
label_248d90:
    // 0x248d90: 0x3e00008  jr          $ra
label_248d94:
    if (ctx->pc == 0x248D94u) {
        ctx->pc = 0x248D98u;
        goto label_248d98;
    }
    ctx->pc = 0x248D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248D98u;
label_248d98:
    // 0x248d98: 0x0  nop
    ctx->pc = 0x248d98u;
    // NOP
label_248d9c:
    // 0x248d9c: 0x0  nop
    ctx->pc = 0x248d9cu;
    // NOP
label_248da0:
    // 0x248da0: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x248da0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_248da4:
    // 0x248da4: 0x2408fffc  addiu       $t0, $zero, -0x4
    ctx->pc = 0x248da4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_248da8:
    // 0x248da8: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x248da8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_248dac:
    // 0x248dac: 0x248a0008  addiu       $t2, $a0, 0x8
    ctx->pc = 0x248dacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_248db0:
    // 0x248db0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x248db0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248db4:
    // 0x248db4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x248db4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248db8:
    // 0x248db8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x248db8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_248dbc:
    // 0x248dbc: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x248dbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
label_248dc0:
    // 0x248dc0: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x248dc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
label_248dc4:
    // 0x248dc4: 0x876821  addu        $t5, $a0, $a3
    ctx->pc = 0x248dc4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_248dc8:
    // 0x248dc8: 0x867821  addu        $t7, $a0, $a2
    ctx->pc = 0x248dc8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_248dcc:
    // 0x248dcc: 0x2407fc00  addiu       $a3, $zero, -0x400
    ctx->pc = 0x248dccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966272));
label_248dd0:
    // 0x248dd0: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x248dd0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
label_248dd4:
    // 0x248dd4: 0x9487a  dsrl        $t1, $t1, 1
    ctx->pc = 0x248dd4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 1);
label_248dd8:
    // 0x248dd8: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
label_248ddc:
    if (ctx->pc == 0x248DDCu) {
        ctx->pc = 0x248DE0u;
        goto label_248de0;
    }
    ctx->pc = 0x248DD8u;
    {
        const bool branch_taken_0x248dd8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x248dd8) {
            ctx->pc = 0x248DE8u;
            goto label_248de8;
        }
    }
    ctx->pc = 0x248DE0u;
label_248de0:
    // 0x248de0: 0x8483c  dsll32      $t1, $t0, 0
    ctx->pc = 0x248de0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 0));
label_248de4:
    // 0x248de4: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x248de4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_248de8:
    // 0x248de8: 0xdd440000  ld          $a0, 0x0($t2)
    ctx->pc = 0x248de8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 10), 0)));
label_248dec:
    // 0x248dec: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x248decu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
label_248df0:
    // 0x248df0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_248df4:
    if (ctx->pc == 0x248DF4u) {
        ctx->pc = 0x248DF8u;
        goto label_248df8;
    }
    ctx->pc = 0x248DF0u;
    {
        const bool branch_taken_0x248df0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x248df0) {
            ctx->pc = 0x248E10u;
            goto label_248e10;
        }
    }
    ctx->pc = 0x248DF8u;
label_248df8:
    // 0x248df8: 0x91e40000  lbu         $a0, 0x0($t7)
    ctx->pc = 0x248df8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_248dfc:
    // 0x248dfc: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x248dfcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_248e00:
    // 0x248e00: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x248e00u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
label_248e04:
    // 0x248e04: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x248e04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_248e08:
    // 0x248e08: 0x1000fff2  b           . + 4 + (-0xE << 2)
label_248e0c:
    if (ctx->pc == 0x248E0Cu) {
        ctx->pc = 0x248E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E08u;
        // 0x248e0c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248E10u;
        goto label_248e10;
    }
    ctx->pc = 0x248E08u;
    {
        const bool branch_taken_0x248e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E08u;
        // 0x248e0c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e08) {
            ctx->pc = 0x248DD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248dd4;
        }
    }
    ctx->pc = 0x248E10u;
label_248e10:
    // 0x248e10: 0x95b80000  lhu         $t8, 0x0($t5)
    ctx->pc = 0x248e10u;
    SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
label_248e14:
    // 0x248e14: 0x330c03ff  andi        $t4, $t8, 0x3FF
    ctx->pc = 0x248e14u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)1023);
label_248e18:
    // 0x248e18: 0x11800018  beqz        $t4, . + 4 + (0x18 << 2)
label_248e1c:
    if (ctx->pc == 0x248E1Cu) {
        ctx->pc = 0x248E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E18u;
        // 0x248e1c: 0x1673024  and         $a2, $t3, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248E20u;
        goto label_248e20;
    }
    ctx->pc = 0x248E18u;
    {
        const bool branch_taken_0x248e18 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x248E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E18u;
        // 0x248e1c: 0x1673024  and         $a2, $t3, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e18) {
            ctx->pc = 0x248E7Cu;
            goto label_248e7c;
        }
    }
    ctx->pc = 0x248E20u;
label_248e20:
    // 0x248e20: 0x316403ff  andi        $a0, $t3, 0x3FF
    ctx->pc = 0x248e20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1023);
label_248e24:
    // 0x248e24: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x248e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
label_248e28:
    // 0x248e28: 0x8c082a  slt         $at, $a0, $t4
    ctx->pc = 0x248e28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
label_248e2c:
    // 0x248e2c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x248e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_248e30:
    // 0x248e30: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_248e34:
    if (ctx->pc == 0x248E34u) {
        ctx->pc = 0x248E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E30u;
        // 0x248e34: 0x667021  addu        $t6, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248E38u;
        goto label_248e38;
    }
    ctx->pc = 0x248E30u;
    {
        const bool branch_taken_0x248e30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x248E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E30u;
        // 0x248e34: 0x667021  addu        $t6, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e30) {
            ctx->pc = 0x248E3Cu;
            goto label_248e3c;
        }
    }
    ctx->pc = 0x248E38u;
label_248e38:
    // 0x248e38: 0x25cefc00  addiu       $t6, $t6, -0x400
    ctx->pc = 0x248e38u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294966272));
label_248e3c:
    // 0x248e3c: 0x0  nop
    ctx->pc = 0x248e3cu;
    // NOP
label_248e40:
    // 0x248e40: 0x182283  sra         $a0, $t8, 10
    ctx->pc = 0x248e40u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 24), 10));
label_248e44:
    // 0x248e44: 0x24860003  addiu       $a2, $a0, 0x3
    ctx->pc = 0x248e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
label_248e48:
    // 0x248e48: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x248e48u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
label_248e4c:
    // 0x248e4c: 0x10c0ffe1  beqz        $a2, . + 4 + (-0x1F << 2)
label_248e50:
    if (ctx->pc == 0x248E50u) {
        ctx->pc = 0x248E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E4Cu;
        // 0x248e50: 0x1665821  addu        $t3, $t3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248E54u;
        goto label_248e54;
    }
    ctx->pc = 0x248E4Cu;
    {
        const bool branch_taken_0x248e4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x248E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E4Cu;
        // 0x248e50: 0x1665821  addu        $t3, $t3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e4c) {
            ctx->pc = 0x248DD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248dd4;
        }
    }
    ctx->pc = 0x248E54u;
label_248e54:
    // 0x248e54: 0x0  nop
    ctx->pc = 0x248e54u;
    // NOP
label_248e58:
    // 0x248e58: 0x91c40000  lbu         $a0, 0x0($t6)
    ctx->pc = 0x248e58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
label_248e5c:
    // 0x248e5c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x248e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_248e60:
    // 0x248e60: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x248e60u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
label_248e64:
    // 0x248e64: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x248e64u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_248e68:
    // 0x248e68: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x248e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_248e6c:
    // 0x248e6c: 0x14c0fff9  bnez        $a2, . + 4 + (-0x7 << 2)
label_248e70:
    if (ctx->pc == 0x248E70u) {
        ctx->pc = 0x248E74u;
        goto label_248e74;
    }
    ctx->pc = 0x248E6Cu;
    {
        const bool branch_taken_0x248e6c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x248e6c) {
            ctx->pc = 0x248E54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248e54;
        }
    }
    ctx->pc = 0x248E74u;
label_248e74:
    // 0x248e74: 0x1000ffd8  b           . + 4 + (-0x28 << 2)
label_248e78:
    if (ctx->pc == 0x248E78u) {
        ctx->pc = 0x248E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E74u;
        // 0x248e78: 0x9487a  dsrl        $t1, $t1, 1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x248E7Cu;
        goto label_248e7c;
    }
    ctx->pc = 0x248E74u;
    {
        const bool branch_taken_0x248e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E74u;
        // 0x248e78: 0x9487a  dsrl        $t1, $t1, 1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e74) {
            ctx->pc = 0x248DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248dd8;
        }
    }
    ctx->pc = 0x248E7Cu;
label_248e7c:
    // 0x248e7c: 0x0  nop
    ctx->pc = 0x248e7cu;
    // NOP
label_248e80:
    // 0x248e80: 0x3e00008  jr          $ra
label_248e84:
    if (ctx->pc == 0x248E84u) {
        ctx->pc = 0x248E88u;
        goto label_248e88;
    }
    ctx->pc = 0x248E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248E88u;
label_248e88:
    // 0x248e88: 0x0  nop
    ctx->pc = 0x248e88u;
    // NOP
label_248e8c:
    // 0x248e8c: 0x0  nop
    ctx->pc = 0x248e8cu;
    // NOP
label_248e90:
    // 0x248e90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x248e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_248e94:
    // 0x248e94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x248e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_248e98:
    // 0x248e98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x248e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_248e9c:
    // 0x248e9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x248e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_248ea0:
    // 0x248ea0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x248ea0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248ea4:
    // 0x248ea4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x248ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_248ea8:
    // 0x248ea8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x248ea8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_248eac:
    // 0x248eac: 0x10000007  b           . + 4 + (0x7 << 2)
label_248eb0:
    if (ctx->pc == 0x248EB0u) {
        ctx->pc = 0x248EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248EACu;
        // 0x248eb0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248EB4u;
        goto label_248eb4;
    }
    ctx->pc = 0x248EACu;
    {
        const bool branch_taken_0x248eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248EACu;
        // 0x248eb0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248eac) {
            ctx->pc = 0x248ECCu;
            goto label_248ecc;
        }
    }
    ctx->pc = 0x248EB4u;
label_248eb4:
    // 0x248eb4: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x248eb4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_248eb8:
    // 0x248eb8: 0x27a20048  addiu       $v0, $sp, 0x48
    ctx->pc = 0x248eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_248ebc:
    // 0x248ebc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x248ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_248ec0:
    // 0x248ec0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x248ec0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_248ec4:
    // 0x248ec4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x248ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_248ec8:
    // 0x248ec8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x248ec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_248ecc:
    // 0x248ecc: 0x0  nop
    ctx->pc = 0x248eccu;
    // NOP
label_248ed0:
    // 0x248ed0: 0xc08e510  jal         func_239440
label_248ed4:
    if (ctx->pc == 0x248ED4u) {
        ctx->pc = 0x248ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248ED0u;
        // 0x248ed4: 0x82040000  lb          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248ED8u;
        goto label_248ed8;
    }
    ctx->pc = 0x248ED0u;
    SET_GPR_U32(ctx, 31, 0x248ED8u);
    ctx->pc = 0x248ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248ED0u;
    // 0x248ed4: 0x82040000  lb          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239440u;
    { ctx->pc = 0x239440; return; }
    ctx->pc = 0x248ED8u;
label_248ed8:
    // 0x248ed8: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
label_248edc:
    if (ctx->pc == 0x248EDCu) {
        ctx->pc = 0x248EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248ED8u;
        // 0x248edc: 0x27a40048  addiu       $a0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248EE0u;
        goto label_248ee0;
    }
    ctx->pc = 0x248ED8u;
    {
        const bool branch_taken_0x248ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248ED8u;
        // 0x248edc: 0x27a40048  addiu       $a0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248ed8) {
            ctx->pc = 0x248EB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248eb4;
        }
    }
    ctx->pc = 0x248EE0u;
label_248ee0:
    // 0x248ee0: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x248ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_248ee4:
    // 0x248ee4: 0xc08dc4c  jal         func_237130
label_248ee8:
    if (ctx->pc == 0x248EE8u) {
        ctx->pc = 0x248EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248EE4u;
        // 0x248ee8: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248EECu;
        goto label_248eec;
    }
    ctx->pc = 0x248EE4u;
    SET_GPR_U32(ctx, 31, 0x248EECu);
    ctx->pc = 0x248EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248EE4u;
    // 0x248ee8: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237130u;
    { ctx->pc = 0x237130; return; }
    ctx->pc = 0x248EECu;
label_248eec:
    // 0x248eec: 0x10000002  b           . + 4 + (0x2 << 2)
label_248ef0:
    if (ctx->pc == 0x248EF0u) {
        ctx->pc = 0x248EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248EECu;
        // 0x248ef0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248EF4u;
        goto label_248ef4;
    }
    ctx->pc = 0x248EECu;
    {
        const bool branch_taken_0x248eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248EECu;
        // 0x248ef0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248eec) {
            ctx->pc = 0x248EF8u;
            goto label_248ef8;
        }
    }
    ctx->pc = 0x248EF4u;
label_248ef4:
    // 0x248ef4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x248ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_248ef8:
    // 0x248ef8: 0xc08e510  jal         func_239440
label_248efc:
    if (ctx->pc == 0x248EFCu) {
        ctx->pc = 0x248EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248EF8u;
        // 0x248efc: 0x82040000  lb          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248F00u;
        goto label_248f00;
    }
    ctx->pc = 0x248EF8u;
    SET_GPR_U32(ctx, 31, 0x248F00u);
    ctx->pc = 0x248EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248EF8u;
    // 0x248efc: 0x82040000  lb          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239440u;
    { ctx->pc = 0x239440; return; }
    ctx->pc = 0x248F00u;
label_248f00:
    // 0x248f00: 0x0  nop
    ctx->pc = 0x248f00u;
    // NOP
label_248f04:
    // 0x248f04: 0x0  nop
    ctx->pc = 0x248f04u;
    // NOP
label_248f08:
    // 0x248f08: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_248f0c:
    if (ctx->pc == 0x248F0Cu) {
        ctx->pc = 0x248F10u;
        goto label_248f10;
    }
    ctx->pc = 0x248F08u;
    {
        const bool branch_taken_0x248f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x248f08) {
            ctx->pc = 0x248EF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248ef4;
        }
    }
    ctx->pc = 0x248F10u;
label_248f10:
    // 0x248f10: 0x10000007  b           . + 4 + (0x7 << 2)
label_248f14:
    if (ctx->pc == 0x248F14u) {
        ctx->pc = 0x248F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F10u;
        // 0x248f14: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248F18u;
        goto label_248f18;
    }
    ctx->pc = 0x248F10u;
    {
        const bool branch_taken_0x248f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F10u;
        // 0x248f14: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248f10) {
            ctx->pc = 0x248F30u;
            goto label_248f30;
        }
    }
    ctx->pc = 0x248F18u;
label_248f18:
    // 0x248f18: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x248f18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_248f1c:
    // 0x248f1c: 0x27a20048  addiu       $v0, $sp, 0x48
    ctx->pc = 0x248f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_248f20:
    // 0x248f20: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x248f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_248f24:
    // 0x248f24: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x248f24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_248f28:
    // 0x248f28: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x248f28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_248f2c:
    // 0x248f2c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x248f2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_248f30:
    // 0x248f30: 0xc08e510  jal         func_239440
label_248f34:
    if (ctx->pc == 0x248F34u) {
        ctx->pc = 0x248F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F30u;
        // 0x248f34: 0x82040000  lb          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248F38u;
        goto label_248f38;
    }
    ctx->pc = 0x248F30u;
    SET_GPR_U32(ctx, 31, 0x248F38u);
    ctx->pc = 0x248F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248F30u;
    // 0x248f34: 0x82040000  lb          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239440u;
    { ctx->pc = 0x239440; return; }
    ctx->pc = 0x248F38u;
label_248f38:
    // 0x248f38: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
label_248f3c:
    if (ctx->pc == 0x248F3Cu) {
        ctx->pc = 0x248F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F38u;
        // 0x248f3c: 0x27a40048  addiu       $a0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248F40u;
        goto label_248f40;
    }
    ctx->pc = 0x248F38u;
    {
        const bool branch_taken_0x248f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F38u;
        // 0x248f3c: 0x27a40048  addiu       $a0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248f38) {
            ctx->pc = 0x248F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248f18;
        }
    }
    ctx->pc = 0x248F40u;
label_248f40:
    // 0x248f40: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x248f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_248f44:
    // 0x248f44: 0xc08dc4c  jal         func_237130
label_248f48:
    if (ctx->pc == 0x248F48u) {
        ctx->pc = 0x248F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F44u;
        // 0x248f48: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248F4Cu;
        goto label_248f4c;
    }
    ctx->pc = 0x248F44u;
    SET_GPR_U32(ctx, 31, 0x248F4Cu);
    ctx->pc = 0x248F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248F44u;
    // 0x248f48: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237130u;
    { ctx->pc = 0x237130; return; }
    ctx->pc = 0x248F4Cu;
label_248f4c:
    // 0x248f4c: 0x10000002  b           . + 4 + (0x2 << 2)
label_248f50:
    if (ctx->pc == 0x248F50u) {
        ctx->pc = 0x248F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F4Cu;
        // 0x248f50: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248F54u;
        goto label_248f54;
    }
    ctx->pc = 0x248F4Cu;
    {
        const bool branch_taken_0x248f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F4Cu;
        // 0x248f50: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248f4c) {
            ctx->pc = 0x248F58u;
            goto label_248f58;
        }
    }
    ctx->pc = 0x248F54u;
label_248f54:
    // 0x248f54: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x248f54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_248f58:
    // 0x248f58: 0xc08e510  jal         func_239440
label_248f5c:
    if (ctx->pc == 0x248F5Cu) {
        ctx->pc = 0x248F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F58u;
        // 0x248f5c: 0x82040000  lb          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248F60u;
        goto label_248f60;
    }
    ctx->pc = 0x248F58u;
    SET_GPR_U32(ctx, 31, 0x248F60u);
    ctx->pc = 0x248F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248F58u;
    // 0x248f5c: 0x82040000  lb          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239440u;
    { ctx->pc = 0x239440; return; }
    ctx->pc = 0x248F60u;
label_248f60:
    // 0x248f60: 0x0  nop
    ctx->pc = 0x248f60u;
    // NOP
label_248f64:
    // 0x248f64: 0x0  nop
    ctx->pc = 0x248f64u;
    // NOP
label_248f68:
    // 0x248f68: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_248f6c:
    if (ctx->pc == 0x248F6Cu) {
        ctx->pc = 0x248F70u;
        goto label_248f70;
    }
    ctx->pc = 0x248F68u;
    {
        const bool branch_taken_0x248f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x248f68) {
            ctx->pc = 0x248F54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248f54;
        }
    }
    ctx->pc = 0x248F70u;
label_248f70:
    // 0x248f70: 0xc08f3d6  jal         func_23CF58
label_248f74:
    if (ctx->pc == 0x248F74u) {
        ctx->pc = 0x248F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F70u;
        // 0x248f74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248F78u;
        goto label_248f78;
    }
    ctx->pc = 0x248F70u;
    SET_GPR_U32(ctx, 31, 0x248F78u);
    ctx->pc = 0x248F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248F70u;
    // 0x248f74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF58u;
    { ctx->pc = 0x23cf58; return; }
    ctx->pc = 0x248F78u;
label_248f78:
    // 0x248f78: 0xc0700b4  jal         func_1C02D0
label_248f7c:
    if (ctx->pc == 0x248F7Cu) {
        ctx->pc = 0x248F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F78u;
        // 0x248f7c: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248F80u;
        goto label_248f80;
    }
    ctx->pc = 0x248F78u;
    SET_GPR_U32(ctx, 31, 0x248F80u);
    ctx->pc = 0x248F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248F78u;
    // 0x248f7c: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C02D0u;
    { ctx->pc = 0x1c02d0; return; }
    ctx->pc = 0x248F80u;
label_248f80:
    // 0x248f80: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x248f80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_248f84:
    // 0x248f84: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x248f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_248f88:
    // 0x248f88: 0xc08f390  jal         func_23CE40
label_248f8c:
    if (ctx->pc == 0x248F8Cu) {
        ctx->pc = 0x248F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F88u;
        // 0x248f8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248F90u;
        goto label_248f90;
    }
    ctx->pc = 0x248F88u;
    SET_GPR_U32(ctx, 31, 0x248F90u);
    ctx->pc = 0x248F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248F88u;
    // 0x248f8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    { ctx->pc = 0x23ce40; return; }
    ctx->pc = 0x248F90u;
label_248f90:
    // 0x248f90: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x248f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_248f94:
    // 0x248f94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x248f94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_248f98:
    // 0x248f98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x248f98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_248f9c:
    // 0x248f9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x248f9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_248fa0:
    // 0x248fa0: 0x3e00008  jr          $ra
label_248fa4:
    if (ctx->pc == 0x248FA4u) {
        ctx->pc = 0x248FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248FA0u;
        // 0x248fa4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248FA8u;
        goto label_248fa8;
    }
    ctx->pc = 0x248FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248FA0u;
        // 0x248fa4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248FA8u;
label_248fa8:
    // 0x248fa8: 0x0  nop
    ctx->pc = 0x248fa8u;
    // NOP
label_248fac:
    // 0x248fac: 0x0  nop
    ctx->pc = 0x248facu;
    // NOP
label_248fb0:
    // 0x248fb0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x248fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_248fb4:
    // 0x248fb4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x248fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_248fb8:
    // 0x248fb8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x248fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_248fbc:
    // 0x248fbc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x248fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_248fc0:
    // 0x248fc0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x248fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_248fc4:
    // 0x248fc4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x248fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_248fc8:
    // 0x248fc8: 0x2b080  sll         $s6, $v0, 2
    ctx->pc = 0x248fc8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_248fcc:
    // 0x248fcc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x248fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_248fd0:
    // 0x248fd0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x248fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_248fd4:
    // 0x248fd4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x248fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_248fd8:
    // 0x248fd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x248fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_248fdc:
    // 0x248fdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x248fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_248fe0:
    // 0x248fe0: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x248fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_248fe4:
    // 0x248fe4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x248fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_248fe8:
    // 0x248fe8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x248fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_248fec:
    // 0x248fec: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x248fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_248ff0:
    // 0x248ff0: 0xc08f3d6  jal         func_23CF58
label_248ff4:
    if (ctx->pc == 0x248FF4u) {
        ctx->pc = 0x248FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248FF0u;
        // 0x248ff4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248FF8u;
        goto label_248ff8;
    }
    ctx->pc = 0x248FF0u;
    SET_GPR_U32(ctx, 31, 0x248FF8u);
    ctx->pc = 0x248FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248FF0u;
    // 0x248ff4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF58u;
    { ctx->pc = 0x23cf58; return; }
    ctx->pc = 0x248FF8u;
label_248ff8:
    // 0x248ff8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x248ff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248ffc:
    // 0x248ffc: 0x24050260  addiu       $a1, $zero, 0x260
    ctx->pc = 0x248ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
label_249000:
    // 0x249000: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x249000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249004:
    // 0x249004: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x249004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_249008:
    // 0x249008: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x249008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_24900c:
    // 0x24900c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24900cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_249010:
    // 0x249010: 0xc0550d0  jal         func_154340
label_249014:
    if (ctx->pc == 0x249014u) {
        ctx->pc = 0x249014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249010u;
        // 0x249014: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249018u;
        goto label_249018;
    }
    ctx->pc = 0x249010u;
    SET_GPR_U32(ctx, 31, 0x249018u);
    ctx->pc = 0x249014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249010u;
    // 0x249014: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154340u, 0x249010u, 0x249018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249018u;
label_249018:
    // 0x249018: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x249018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24901c:
    // 0x24901c: 0x24040280  addiu       $a0, $zero, 0x280
    ctx->pc = 0x24901cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_249020:
    // 0x249020: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x249020u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_249024:
    // 0x249024: 0x24050260  addiu       $a1, $zero, 0x260
    ctx->pc = 0x249024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
label_249028:
    // 0x249028: 0x29043  sra         $s2, $v0, 1
    ctx->pc = 0x249028u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 1));
label_24902c:
    // 0x24902c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x24902cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_249030:
    // 0x249030: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x249030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_249034:
    // 0x249034: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x249034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_249038:
    // 0x249038: 0xc055148  jal         func_154520
label_24903c:
    if (ctx->pc == 0x24903Cu) {
        ctx->pc = 0x24903Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249038u;
        // 0x24903c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249040u;
        goto label_249040;
    }
    ctx->pc = 0x249038u;
    SET_GPR_U32(ctx, 31, 0x249040u);
    ctx->pc = 0x24903Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249038u;
    // 0x24903c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154520u, 0x249038u, 0x249040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249040u;
label_249040:
    // 0x249040: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x249040u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_249044:
    // 0x249044: 0x24060186  addiu       $a2, $zero, 0x186
    ctx->pc = 0x249044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 390));
label_249048:
    // 0x249048: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x249048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24904c:
    // 0x24904c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x24904cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_249050:
    // 0x249050: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x249050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_249054:
    // 0x249054: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x249054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_249058:
    // 0x249058: 0xc29823  subu        $s3, $a2, $v0
    ctx->pc = 0x249058u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_24905c:
    // 0x24905c: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x24905cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_249060:
    // 0x249060: 0x24060260  addiu       $a2, $zero, 0x260
    ctx->pc = 0x249060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
label_249064:
    // 0x249064: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x249064u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_249068:
    // 0x249068: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x249068u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24906c:
    // 0x24906c: 0xc054e5c  jal         func_153970
label_249070:
    if (ctx->pc == 0x249070u) {
        ctx->pc = 0x249070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24906Cu;
        // 0x249070: 0x240a0064  addiu       $t2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249074u;
        goto label_249074;
    }
    ctx->pc = 0x24906Cu;
    SET_GPR_U32(ctx, 31, 0x249074u);
    ctx->pc = 0x249070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24906Cu;
    // 0x249070: 0x240a0064  addiu       $t2, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x24906Cu, 0x249074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249074u;
label_249074:
    // 0x249074: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x249074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249078:
    // 0x249078: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x249078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_24907c:
    // 0x24907c: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x24907cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
label_249080:
    // 0x249080: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x249080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_249084:
    // 0x249084: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x249084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_249088:
    // 0x249088: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x249088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_24908c:
    // 0x24908c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x24908cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_249090:
    // 0x249090: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x249090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_249094:
    // 0x249094: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x249094u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_249098:
    // 0x249098: 0xc054e74  jal         func_1539D0
label_24909c:
    if (ctx->pc == 0x24909Cu) {
        ctx->pc = 0x24909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249098u;
        // 0x24909c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2490A0u;
        goto label_2490a0;
    }
    ctx->pc = 0x249098u;
    SET_GPR_U32(ctx, 31, 0x2490A0u);
    ctx->pc = 0x24909Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249098u;
    // 0x24909c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x249098u, 0x2490A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2490A0u;
label_2490a0:
    // 0x2490a0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2490a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2490a4:
    // 0x2490a4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2490a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2490a8:
    // 0x2490a8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2490a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2490ac:
    // 0x2490ac: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x2490acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_2490b0:
    // 0x2490b0: 0x3421a010  ori         $at, $at, 0xA010
    ctx->pc = 0x2490b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40976);
label_2490b4:
    // 0x2490b4: 0x3446000d  ori         $a2, $v0, 0xD
    ctx->pc = 0x2490b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
label_2490b8:
    // 0x2490b8: 0x2011821  addu        $v1, $s0, $at
    ctx->pc = 0x2490b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_2490bc:
    // 0x2490bc: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x2490bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_2490c0:
    // 0x2490c0: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x2490c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_2490c4:
    // 0x2490c4: 0xc05e210  jal         func_178840
label_2490c8:
    if (ctx->pc == 0x2490C8u) {
        ctx->pc = 0x2490C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2490C4u;
        // 0x2490c8: 0x24640020  addiu       $a0, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2490CCu;
        goto label_2490cc;
    }
    ctx->pc = 0x2490C4u;
    SET_GPR_U32(ctx, 31, 0x2490CCu);
    ctx->pc = 0x2490C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2490C4u;
    // 0x2490c8: 0x24640020  addiu       $a0, $v1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178840u, 0x2490C4u, 0x2490CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2490CCu;
label_2490cc:
    // 0x2490cc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2490ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2490d0:
    // 0x2490d0: 0x2151021  addu        $v0, $s0, $s5
    ctx->pc = 0x2490d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_2490d4:
    // 0x2490d4: 0x3421a092  ori         $at, $at, 0xA092
    ctx->pc = 0x2490d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41106);
label_2490d8:
    // 0x2490d8: 0x412821  addu        $a1, $v0, $at
    ctx->pc = 0x2490d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2490dc:
    // 0x2490dc: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x2490dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_2490e0:
    // 0x2490e0: 0x24648700  addiu       $a0, $v1, -0x7900
    ctx->pc = 0x2490e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936320));
label_2490e4:
    // 0x2490e4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_2490e8:
    if (ctx->pc == 0x2490E8u) {
        ctx->pc = 0x2490E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2490E4u;
        // 0x2490e8: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2490ECu;
        goto label_2490ec;
    }
    ctx->pc = 0x2490E4u;
    {
        const bool branch_taken_0x2490e4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2490E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2490E4u;
        // 0x2490e8: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2490e4) {
            ctx->pc = 0x2490F4u;
            goto label_2490f4;
        }
    }
    ctx->pc = 0x2490ECu;
label_2490ec:
    // 0x2490ec: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x2490ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
label_2490f0:
    // 0x2490f0: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x2490f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_2490f4:
    // 0x2490f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2490f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2490f8:
    // 0x2490f8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2490f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2490fc:
    // 0x2490fc: 0x3421a0aa  ori         $at, $at, 0xA0AA
    ctx->pc = 0x2490fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41130);
label_249100:
    // 0x249100: 0x24637200  addiu       $v1, $v1, 0x7200
    ctx->pc = 0x249100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29184));
label_249104:
    // 0x249104: 0x413021  addu        $a2, $v0, $at
    ctx->pc = 0x249104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_249108:
    // 0x249108: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x249108u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_24910c:
    // 0x24910c: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x24910cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_249110:
    // 0x249110: 0x24648700  addiu       $a0, $v1, -0x7900
    ctx->pc = 0x249110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936320));
label_249114:
    // 0x249114: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_249118:
    if (ctx->pc == 0x249118u) {
        ctx->pc = 0x249118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249114u;
        // 0x249118: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24911Cu;
        goto label_24911c;
    }
    ctx->pc = 0x249114u;
    {
        const bool branch_taken_0x249114 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x249118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249114u;
        // 0x249118: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249114) {
            ctx->pc = 0x249124u;
            goto label_249124;
        }
    }
    ctx->pc = 0x24911Cu;
label_24911c:
    // 0x24911c: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x24911cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
label_249120:
    // 0x249120: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x249120u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_249124:
    // 0x249124: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x249124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_249128:
    // 0x249128: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24912c:
    // 0x24912c: 0x3421a0c2  ori         $at, $at, 0xA0C2
    ctx->pc = 0x24912cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41154);
label_249130:
    // 0x249130: 0x24637200  addiu       $v1, $v1, 0x7200
    ctx->pc = 0x249130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29184));
label_249134:
    // 0x249134: 0x412821  addu        $a1, $v0, $at
    ctx->pc = 0x249134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_249138:
    // 0x249138: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x249138u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_24913c:
    // 0x24913c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x24913cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_249140:
    // 0x249140: 0x24648700  addiu       $a0, $v1, -0x7900
    ctx->pc = 0x249140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936320));
label_249144:
    // 0x249144: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_249148:
    if (ctx->pc == 0x249148u) {
        ctx->pc = 0x249148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249144u;
        // 0x249148: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24914Cu;
        goto label_24914c;
    }
    ctx->pc = 0x249144u;
    {
        const bool branch_taken_0x249144 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x249148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249144u;
        // 0x249148: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249144) {
            ctx->pc = 0x249154u;
            goto label_249154;
        }
    }
    ctx->pc = 0x24914Cu;
label_24914c:
    // 0x24914c: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x24914cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
label_249150:
    // 0x249150: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x249150u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_249154:
    // 0x249154: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249158:
    // 0x249158: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x249158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_24915c:
    // 0x24915c: 0x3421a0da  ori         $at, $at, 0xA0DA
    ctx->pc = 0x24915cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41178);
label_249160:
    // 0x249160: 0x412021  addu        $a0, $v0, $at
    ctx->pc = 0x249160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_249164:
    // 0x249164: 0x24627200  addiu       $v0, $v1, 0x7200
    ctx->pc = 0x249164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 29184));
label_249168:
    // 0x249168: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x249168u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_24916c:
    // 0x24916c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x24916cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_249170:
    // 0x249170: 0x24438700  addiu       $v1, $v0, -0x7900
    ctx->pc = 0x249170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936320));
label_249174:
    // 0x249174: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_249178:
    if (ctx->pc == 0x249178u) {
        ctx->pc = 0x249178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249174u;
        // 0x249178: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24917Cu;
        goto label_24917c;
    }
    ctx->pc = 0x249174u;
    {
        const bool branch_taken_0x249174 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x249178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249174u;
        // 0x249178: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249174) {
            ctx->pc = 0x249184u;
            goto label_249184;
        }
    }
    ctx->pc = 0x24917Cu;
label_24917c:
    // 0x24917c: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x24917cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_249180:
    // 0x249180: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x249180u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_249184:
    // 0x249184: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x249184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_249188:
    // 0x249188: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x249188u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_24918c:
    // 0x24918c: 0x24427200  addiu       $v0, $v0, 0x7200
    ctx->pc = 0x24918cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29184));
label_249190:
    // 0x249190: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x249190u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_249194:
    // 0x249194: 0x2e820080  sltiu       $v0, $s4, 0x80
    ctx->pc = 0x249194u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_249198:
    // 0x249198: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
label_24919c:
    if (ctx->pc == 0x24919Cu) {
        ctx->pc = 0x24919Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249198u;
        // 0x24919c: 0x26b500d0  addiu       $s5, $s5, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2491A0u;
        goto label_2491a0;
    }
    ctx->pc = 0x249198u;
    {
        const bool branch_taken_0x249198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24919Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249198u;
        // 0x24919c: 0x26b500d0  addiu       $s5, $s5, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249198) {
            ctx->pc = 0x2490A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2490a8;
        }
    }
    ctx->pc = 0x2491A0u;
label_2491a0:
    // 0x2491a0: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x2491a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2491a4:
    // 0x2491a4: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
label_2491a8:
    if (ctx->pc == 0x2491A8u) {
        ctx->pc = 0x2491A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2491A4u;
        // 0x2491a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2491ACu;
        goto label_2491ac;
    }
    ctx->pc = 0x2491A4u;
    {
        const bool branch_taken_0x2491a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2491A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2491A4u;
        // 0x2491a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2491a4) {
            ctx->pc = 0x249210u;
            goto label_249210;
        }
    }
    ctx->pc = 0x2491ACu;
label_2491ac:
    // 0x2491ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2491acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2491b0:
    // 0x2491b0: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x2491b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_2491b4:
    // 0x2491b4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2491b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2491b8:
    // 0x2491b8: 0x2053021  addu        $a2, $s0, $a1
    ctx->pc = 0x2491b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_2491bc:
    // 0x2491bc: 0x3421a010  ori         $at, $at, 0xA010
    ctx->pc = 0x2491bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40976);
label_2491c0:
    // 0x2491c0: 0xc11021  addu        $v0, $a2, $at
    ctx->pc = 0x2491c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_2491c4:
    // 0x2491c4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2491c8:
    if (ctx->pc == 0x2491C8u) {
        ctx->pc = 0x2491C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2491C4u;
        // 0x2491c8: 0x9063001c  lbu         $v1, 0x1C($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2491CCu;
        goto label_2491cc;
    }
    ctx->pc = 0x2491C4u;
    {
        const bool branch_taken_0x2491c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2491C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2491C4u;
        // 0x2491c8: 0x9063001c  lbu         $v1, 0x1C($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2491c4) {
            ctx->pc = 0x2491FCu;
            goto label_2491fc;
        }
    }
    ctx->pc = 0x2491CCu;
label_2491cc:
    // 0x2491cc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2491ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2491d0:
    // 0x2491d0: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x2491d0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_2491d4:
    // 0x2491d4: 0xa023a083  sb          $v1, -0x5F7D($at)
    ctx->pc = 0x2491d4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942851), (uint8_t)GPR_U32(ctx, 3));
label_2491d8:
    // 0x2491d8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2491d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2491dc:
    // 0x2491dc: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x2491dcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_2491e0:
    // 0x2491e0: 0xa023a09b  sb          $v1, -0x5F65($at)
    ctx->pc = 0x2491e0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942875), (uint8_t)GPR_U32(ctx, 3));
label_2491e4:
    // 0x2491e4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2491e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2491e8:
    // 0x2491e8: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x2491e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_2491ec:
    // 0x2491ec: 0xa023a0b3  sb          $v1, -0x5F4D($at)
    ctx->pc = 0x2491ecu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942899), (uint8_t)GPR_U32(ctx, 3));
label_2491f0:
    // 0x2491f0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2491f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2491f4:
    // 0x2491f4: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x2491f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_2491f8:
    // 0x2491f8: 0xa023a0cb  sb          $v1, -0x5F35($at)
    ctx->pc = 0x2491f8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942923), (uint8_t)GPR_U32(ctx, 3));
label_2491fc:
    // 0x2491fc: 0x0  nop
    ctx->pc = 0x2491fcu;
    // NOP
label_249200:
    // 0x249200: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x249200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_249204:
    // 0x249204: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x249204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_249208:
    // 0x249208: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_24920c:
    if (ctx->pc == 0x24920Cu) {
        ctx->pc = 0x24920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249208u;
        // 0x24920c: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249210u;
        goto label_249210;
    }
    ctx->pc = 0x249208u;
    {
        const bool branch_taken_0x249208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249208u;
        // 0x24920c: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249208) {
            ctx->pc = 0x2491B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2491b0;
        }
    }
    ctx->pc = 0x249210u;
label_249210:
    // 0x249210: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x249210u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_249214:
    // 0x249214: 0x1020004e  beqz        $at, . + 4 + (0x4E << 2)
label_249218:
    if (ctx->pc == 0x249218u) {
        ctx->pc = 0x249218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249214u;
        // 0x249218: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24921Cu;
        goto label_24921c;
    }
    ctx->pc = 0x249214u;
    {
        const bool branch_taken_0x249214 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x249218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249214u;
        // 0x249218: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249214) {
            ctx->pc = 0x249350u;
            goto label_249350;
        }
    }
    ctx->pc = 0x24921Cu;
label_24921c:
    // 0x24921c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24921cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249220:
    // 0x249220: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x249220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_249224:
    // 0x249224: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x249224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_249228:
    // 0x249228: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x249228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_24922c:
    // 0x24922c: 0x2074021  addu        $t0, $s0, $a3
    ctx->pc = 0x24922cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_249230:
    // 0x249230: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_249234:
    // 0x249234: 0x1010821  addu        $at, $t0, $at
    ctx->pc = 0x249234u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 1)));
label_249238:
    // 0x249238: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x249238u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_24923c:
    // 0x24923c: 0xa026a080  sb          $a2, -0x5F80($at)
    ctx->pc = 0x24923cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942848), (uint8_t)GPR_U32(ctx, 6));
label_249240:
    // 0x249240: 0x131102a  slt         $v0, $t1, $s1
    ctx->pc = 0x249240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_249244:
    // 0x249244: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_249248:
    // 0x249248: 0x24e700d0  addiu       $a3, $a3, 0xD0
    ctx->pc = 0x249248u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 208));
label_24924c:
    // 0x24924c: 0x1010821  addu        $at, $t0, $at
    ctx->pc = 0x24924cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 1)));
label_249250:
    // 0x249250: 0xa026a081  sb          $a2, -0x5F7F($at)
    ctx->pc = 0x249250u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942849), (uint8_t)GPR_U32(ctx, 6));
label_249254:
    // 0x249254: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_249258:
    // 0x249258: 0x1010821  addu        $at, $t0, $at
    ctx->pc = 0x249258u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 1)));
label_24925c:
    // 0x24925c: 0xa025a082  sb          $a1, -0x5F7E($at)
    ctx->pc = 0x24925cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942850), (uint8_t)GPR_U32(ctx, 5));
label_249260:
    // 0x249260: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x249260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249264:
    // 0x249264: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_249268:
    // 0x249268: 0x1010821  addu        $at, $t0, $at
    ctx->pc = 0x249268u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 1)));
label_24926c:
    // 0x24926c: 0x9063001c  lbu         $v1, 0x1C($v1)
    ctx->pc = 0x24926cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_249270:
    // 0x249270: 0xa023a083  sb          $v1, -0x5F7D($at)
    ctx->pc = 0x249270u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942851), (uint8_t)GPR_U32(ctx, 3));
label_249274:
    // 0x249274: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_249278:
    // 0x249278: 0x1010821  addu        $at, $t0, $at
    ctx->pc = 0x249278u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 1)));
label_24927c:
    // 0x24927c: 0xac24a084  sw          $a0, -0x5F7C($at)
    ctx->pc = 0x24927cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942852), GPR_U32(ctx, 4));
label_249280:
    // 0x249280: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_249284:
    // 0x249284: 0x1010821  addu        $at, $t0, $at
    ctx->pc = 0x249284u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 1)));
label_249288:
    // 0x249288: 0xa026a098  sb          $a2, -0x5F68($at)
    ctx->pc = 0x249288u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942872), (uint8_t)GPR_U32(ctx, 6));
label_24928c:
    // 0x24928c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24928cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_249290:
    // 0x249290: 0x1010821  addu        $at, $t0, $at
    ctx->pc = 0x249290u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 1)));
label_249294:
    // 0x249294: 0xa026a099  sb          $a2, -0x5F67($at)
    ctx->pc = 0x249294u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942873), (uint8_t)GPR_U32(ctx, 6));
label_249298:
    // 0x249298: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_24929c:
    // 0x24929c: 0x1010821  addu        $at, $t0, $at
    ctx->pc = 0x24929cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 1)));
label_2492a0:
    // 0x2492a0: 0xa025a09a  sb          $a1, -0x5F66($at)
    ctx->pc = 0x2492a0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942874), (uint8_t)GPR_U32(ctx, 5));
label_2492a4:
    // 0x2492a4: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x2492a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_2492a8:
    // 0x2492a8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2492a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2492ac:
    // 0x2492ac: 0x1010821  addu        $at, $t0, $at
    ctx->pc = 0x2492acu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 1)));
label_2492b0:
    // 0x2492b0: 0x9063001c  lbu         $v1, 0x1C($v1)
    ctx->pc = 0x2492b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_2492b4:
    // 0x2492b4: 0xa023a09b  sb          $v1, -0x5F65($at)
    ctx->pc = 0x2492b4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942875), (uint8_t)GPR_U32(ctx, 3));
label_2492b8:
    // 0x2492b8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2492b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2492bc:
    // 0x2492bc: 0x1010821  addu        $at, $t0, $at
    ctx->pc = 0x2492bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 1)));
label_2492c0:
    // 0x2492c0: 0xac24a09c  sw          $a0, -0x5F64($at)
    ctx->pc = 0x2492c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942876), GPR_U32(ctx, 4));
label_2492c4:
    // 0x2492c4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2492c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2492c8:
    // 0x2492c8: 0x1010821  addu        $at, $t0, $at
    ctx->pc = 0x2492c8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 1)));
label_2492cc:
    // 0x2492cc: 0xa026a0b0  sb          $a2, -0x5F50($at)
    ctx->pc = 0x2492ccu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942896), (uint8_t)GPR_U32(ctx, 6));
label_2492d0:
    // 0x2492d0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2492d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2492d4:
    // 0x2492d4: 0x1010821  addu        $at, $t0, $at
    ctx->pc = 0x2492d4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 1)));
label_2492d8:
    // 0x2492d8: 0xa026a0b1  sb          $a2, -0x5F4F($at)
    ctx->pc = 0x2492d8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942897), (uint8_t)GPR_U32(ctx, 6));
label_2492dc:
    // 0x2492dc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2492dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2492e0:
    // 0x2492e0: 0x1010821  addu        $at, $t0, $at
    ctx->pc = 0x2492e0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 1)));
label_2492e4:
    // 0x2492e4: 0xa025a0b2  sb          $a1, -0x5F4E($at)
    ctx->pc = 0x2492e4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942898), (uint8_t)GPR_U32(ctx, 5));
label_2492e8:
    // 0x2492e8: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x2492e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_2492ec:
    // 0x2492ec: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2492ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2492f0:
    // 0x2492f0: 0x1010821  addu        $at, $t0, $at
    ctx->pc = 0x2492f0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 1)));
label_2492f4:
    // 0x2492f4: 0x9063001c  lbu         $v1, 0x1C($v1)
    ctx->pc = 0x2492f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_2492f8:
    // 0x2492f8: 0xa023a0b3  sb          $v1, -0x5F4D($at)
    ctx->pc = 0x2492f8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942899), (uint8_t)GPR_U32(ctx, 3));
label_2492fc:
    // 0x2492fc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2492fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_249300:
    // 0x249300: 0x1010821  addu        $at, $t0, $at
    ctx->pc = 0x249300u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 1)));
label_249304:
    // 0x249304: 0xac24a0b4  sw          $a0, -0x5F4C($at)
    ctx->pc = 0x249304u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942900), GPR_U32(ctx, 4));
label_249308:
    // 0x249308: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_24930c:
    // 0x24930c: 0x1010821  addu        $at, $t0, $at
    ctx->pc = 0x24930cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 1)));
label_249310:
    // 0x249310: 0xa026a0c8  sb          $a2, -0x5F38($at)
    ctx->pc = 0x249310u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942920), (uint8_t)GPR_U32(ctx, 6));
label_249314:
    // 0x249314: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_249318:
    // 0x249318: 0x1010821  addu        $at, $t0, $at
    ctx->pc = 0x249318u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 1)));
label_24931c:
    // 0x24931c: 0xa026a0c9  sb          $a2, -0x5F37($at)
    ctx->pc = 0x24931cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942921), (uint8_t)GPR_U32(ctx, 6));
label_249320:
    // 0x249320: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_249324:
    // 0x249324: 0x1010821  addu        $at, $t0, $at
    ctx->pc = 0x249324u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 1)));
label_249328:
    // 0x249328: 0xa025a0ca  sb          $a1, -0x5F36($at)
    ctx->pc = 0x249328u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942922), (uint8_t)GPR_U32(ctx, 5));
label_24932c:
    // 0x24932c: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x24932cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249330:
    // 0x249330: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_249334:
    // 0x249334: 0x1010821  addu        $at, $t0, $at
    ctx->pc = 0x249334u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 1)));
label_249338:
    // 0x249338: 0x9063001c  lbu         $v1, 0x1C($v1)
    ctx->pc = 0x249338u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_24933c:
    // 0x24933c: 0xa023a0cb  sb          $v1, -0x5F35($at)
    ctx->pc = 0x24933cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942923), (uint8_t)GPR_U32(ctx, 3));
label_249340:
    // 0x249340: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_249344:
    // 0x249344: 0x1010821  addu        $at, $t0, $at
    ctx->pc = 0x249344u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 1)));
label_249348:
    // 0x249348: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
label_24934c:
    if (ctx->pc == 0x24934Cu) {
        ctx->pc = 0x24934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249348u;
        // 0x24934c: 0xac24a0cc  sw          $a0, -0x5F34($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294942924), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249350u;
        goto label_249350;
    }
    ctx->pc = 0x249348u;
    {
        const bool branch_taken_0x249348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249348u;
        // 0x24934c: 0xac24a0cc  sw          $a0, -0x5F34($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294942924), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249348) {
            ctx->pc = 0x24922Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24922c;
        }
    }
    ctx->pc = 0x249350u;
label_249350:
    // 0x249350: 0x26480002  addiu       $t0, $s2, 0x2
    ctx->pc = 0x249350u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_249354:
    // 0x249354: 0x26690002  addiu       $t1, $s3, 0x2
    ctx->pc = 0x249354u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_249358:
    // 0x249358: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x249358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_24935c:
    // 0x24935c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x24935cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_249360:
    // 0x249360: 0x24060260  addiu       $a2, $zero, 0x260
    ctx->pc = 0x249360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
label_249364:
    // 0x249364: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x249364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_249368:
    // 0x249368: 0xc054e5c  jal         func_153970
label_24936c:
    if (ctx->pc == 0x24936Cu) {
        ctx->pc = 0x24936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249368u;
        // 0x24936c: 0x240a0064  addiu       $t2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249370u;
        goto label_249370;
    }
    ctx->pc = 0x249368u;
    SET_GPR_U32(ctx, 31, 0x249370u);
    ctx->pc = 0x24936Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249368u;
    // 0x24936c: 0x240a0064  addiu       $t2, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x249368u, 0x249370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249370u;
label_249370:
    // 0x249370: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x249370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249374:
    // 0x249374: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x249374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_249378:
    // 0x249378: 0x26046810  addiu       $a0, $s0, 0x6810
    ctx->pc = 0x249378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 26640));
label_24937c:
    // 0x24937c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x24937cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_249380:
    // 0x249380: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x249380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_249384:
    // 0x249384: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x249384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_249388:
    // 0x249388: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x249388u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24938c:
    // 0x24938c: 0xc054e74  jal         func_1539D0
label_249390:
    if (ctx->pc == 0x249390u) {
        ctx->pc = 0x249390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24938Cu;
        // 0x249390: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249394u;
        goto label_249394;
    }
    ctx->pc = 0x24938Cu;
    SET_GPR_U32(ctx, 31, 0x249394u);
    ctx->pc = 0x249390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24938Cu;
    // 0x249390: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x24938Cu, 0x249394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249394u;
label_249394:
    // 0x249394: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x249394u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249398:
    // 0x249398: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x249398u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24939c:
    // 0x24939c: 0x26026810  addiu       $v0, $s0, 0x6810
    ctx->pc = 0x24939cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 26640));
label_2493a0:
    // 0x2493a0: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x2493a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_2493a4:
    // 0x2493a4: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x2493a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2493a8:
    // 0x2493a8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x2493a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_2493ac:
    // 0x2493ac: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x2493acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_2493b0:
    // 0x2493b0: 0xc05e210  jal         func_178840
label_2493b4:
    if (ctx->pc == 0x2493B4u) {
        ctx->pc = 0x2493B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2493B0u;
        // 0x2493b4: 0x3446000d  ori         $a2, $v0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2493B8u;
        goto label_2493b8;
    }
    ctx->pc = 0x2493B0u;
    SET_GPR_U32(ctx, 31, 0x2493B8u);
    ctx->pc = 0x2493B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2493B0u;
    // 0x2493b4: 0x3446000d  ori         $a2, $v0, 0xD (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    ctx->in_delay_slot = false;
    ctx->pc = 0x178840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178840u, 0x2493B0u, 0x2493B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2493B8u;
label_2493b8:
    // 0x2493b8: 0x2151021  addu        $v0, $s0, $s5
    ctx->pc = 0x2493b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_2493bc:
    // 0x2493bc: 0x94436892  lhu         $v1, 0x6892($v0)
    ctx->pc = 0x2493bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 26770)));
label_2493c0:
    // 0x2493c0: 0x24456892  addiu       $a1, $v0, 0x6892
    ctx->pc = 0x2493c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 26770));
label_2493c4:
    // 0x2493c4: 0x24648700  addiu       $a0, $v1, -0x7900
    ctx->pc = 0x2493c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936320));
label_2493c8:
    // 0x2493c8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_2493cc:
    if (ctx->pc == 0x2493CCu) {
        ctx->pc = 0x2493CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2493C8u;
        // 0x2493cc: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2493D0u;
        goto label_2493d0;
    }
    ctx->pc = 0x2493C8u;
    {
        const bool branch_taken_0x2493c8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2493CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2493C8u;
        // 0x2493cc: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2493c8) {
            ctx->pc = 0x2493D8u;
            goto label_2493d8;
        }
    }
    ctx->pc = 0x2493D0u;
label_2493d0:
    // 0x2493d0: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x2493d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
label_2493d4:
    // 0x2493d4: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x2493d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_2493d8:
    // 0x2493d8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2493d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2493dc:
    // 0x2493dc: 0x244668aa  addiu       $a2, $v0, 0x68AA
    ctx->pc = 0x2493dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 26794));
label_2493e0:
    // 0x2493e0: 0x24637200  addiu       $v1, $v1, 0x7200
    ctx->pc = 0x2493e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29184));
label_2493e4:
    // 0x2493e4: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x2493e4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2493e8u;
    return;
}

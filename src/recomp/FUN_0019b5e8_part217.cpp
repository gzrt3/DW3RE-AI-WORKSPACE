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


void FUN_0019b5e8_part217(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x204d68u: goto label_204d68;
        case 0x204d6cu: goto label_204d6c;
        case 0x204d70u: goto label_204d70;
        case 0x204d74u: goto label_204d74;
        case 0x204d78u: goto label_204d78;
        case 0x204d7cu: goto label_204d7c;
        case 0x204d80u: goto label_204d80;
        case 0x204d84u: goto label_204d84;
        case 0x204d88u: goto label_204d88;
        case 0x204d8cu: goto label_204d8c;
        case 0x204d90u: goto label_204d90;
        case 0x204d94u: goto label_204d94;
        case 0x204d98u: goto label_204d98;
        case 0x204d9cu: goto label_204d9c;
        case 0x204da0u: goto label_204da0;
        case 0x204da4u: goto label_204da4;
        case 0x204da8u: goto label_204da8;
        case 0x204dacu: goto label_204dac;
        case 0x204db0u: goto label_204db0;
        case 0x204db4u: goto label_204db4;
        case 0x204db8u: goto label_204db8;
        case 0x204dbcu: goto label_204dbc;
        case 0x204dc0u: goto label_204dc0;
        case 0x204dc4u: goto label_204dc4;
        case 0x204dc8u: goto label_204dc8;
        case 0x204dccu: goto label_204dcc;
        case 0x204dd0u: goto label_204dd0;
        case 0x204dd4u: goto label_204dd4;
        case 0x204dd8u: goto label_204dd8;
        case 0x204ddcu: goto label_204ddc;
        case 0x204de0u: goto label_204de0;
        case 0x204de4u: goto label_204de4;
        case 0x204de8u: goto label_204de8;
        case 0x204decu: goto label_204dec;
        case 0x204df0u: goto label_204df0;
        case 0x204df4u: goto label_204df4;
        case 0x204df8u: goto label_204df8;
        case 0x204dfcu: goto label_204dfc;
        case 0x204e00u: goto label_204e00;
        case 0x204e04u: goto label_204e04;
        case 0x204e08u: goto label_204e08;
        case 0x204e0cu: goto label_204e0c;
        case 0x204e10u: goto label_204e10;
        case 0x204e14u: goto label_204e14;
        case 0x204e18u: goto label_204e18;
        case 0x204e1cu: goto label_204e1c;
        case 0x204e20u: goto label_204e20;
        case 0x204e24u: goto label_204e24;
        case 0x204e28u: goto label_204e28;
        case 0x204e2cu: goto label_204e2c;
        case 0x204e30u: goto label_204e30;
        case 0x204e34u: goto label_204e34;
        case 0x204e38u: goto label_204e38;
        case 0x204e3cu: goto label_204e3c;
        case 0x204e40u: goto label_204e40;
        case 0x204e44u: goto label_204e44;
        case 0x204e48u: goto label_204e48;
        case 0x204e4cu: goto label_204e4c;
        case 0x204e50u: goto label_204e50;
        case 0x204e54u: goto label_204e54;
        case 0x204e58u: goto label_204e58;
        case 0x204e5cu: goto label_204e5c;
        case 0x204e60u: goto label_204e60;
        case 0x204e64u: goto label_204e64;
        case 0x204e68u: goto label_204e68;
        case 0x204e6cu: goto label_204e6c;
        case 0x204e70u: goto label_204e70;
        case 0x204e74u: goto label_204e74;
        case 0x204e78u: goto label_204e78;
        case 0x204e7cu: goto label_204e7c;
        case 0x204e80u: goto label_204e80;
        case 0x204e84u: goto label_204e84;
        case 0x204e88u: goto label_204e88;
        case 0x204e8cu: goto label_204e8c;
        case 0x204e90u: goto label_204e90;
        case 0x204e94u: goto label_204e94;
        case 0x204e98u: goto label_204e98;
        case 0x204e9cu: goto label_204e9c;
        case 0x204ea0u: goto label_204ea0;
        case 0x204ea4u: goto label_204ea4;
        case 0x204ea8u: goto label_204ea8;
        case 0x204eacu: goto label_204eac;
        case 0x204eb0u: goto label_204eb0;
        case 0x204eb4u: goto label_204eb4;
        case 0x204eb8u: goto label_204eb8;
        case 0x204ebcu: goto label_204ebc;
        case 0x204ec0u: goto label_204ec0;
        case 0x204ec4u: goto label_204ec4;
        case 0x204ec8u: goto label_204ec8;
        case 0x204eccu: goto label_204ecc;
        case 0x204ed0u: goto label_204ed0;
        case 0x204ed4u: goto label_204ed4;
        case 0x204ed8u: goto label_204ed8;
        case 0x204edcu: goto label_204edc;
        case 0x204ee0u: goto label_204ee0;
        case 0x204ee4u: goto label_204ee4;
        case 0x204ee8u: goto label_204ee8;
        case 0x204eecu: goto label_204eec;
        case 0x204ef0u: goto label_204ef0;
        case 0x204ef4u: goto label_204ef4;
        case 0x204ef8u: goto label_204ef8;
        case 0x204efcu: goto label_204efc;
        case 0x204f00u: goto label_204f00;
        case 0x204f04u: goto label_204f04;
        case 0x204f08u: goto label_204f08;
        case 0x204f0cu: goto label_204f0c;
        case 0x204f10u: goto label_204f10;
        case 0x204f14u: goto label_204f14;
        case 0x204f18u: goto label_204f18;
        case 0x204f1cu: goto label_204f1c;
        case 0x204f20u: goto label_204f20;
        case 0x204f24u: goto label_204f24;
        case 0x204f28u: goto label_204f28;
        case 0x204f2cu: goto label_204f2c;
        case 0x204f30u: goto label_204f30;
        case 0x204f34u: goto label_204f34;
        case 0x204f38u: goto label_204f38;
        case 0x204f3cu: goto label_204f3c;
        case 0x204f40u: goto label_204f40;
        case 0x204f44u: goto label_204f44;
        case 0x204f48u: goto label_204f48;
        case 0x204f4cu: goto label_204f4c;
        case 0x204f50u: goto label_204f50;
        case 0x204f54u: goto label_204f54;
        case 0x204f58u: goto label_204f58;
        case 0x204f5cu: goto label_204f5c;
        case 0x204f60u: goto label_204f60;
        case 0x204f64u: goto label_204f64;
        case 0x204f68u: goto label_204f68;
        case 0x204f6cu: goto label_204f6c;
        case 0x204f70u: goto label_204f70;
        case 0x204f74u: goto label_204f74;
        case 0x204f78u: goto label_204f78;
        case 0x204f7cu: goto label_204f7c;
        case 0x204f80u: goto label_204f80;
        case 0x204f84u: goto label_204f84;
        case 0x204f88u: goto label_204f88;
        case 0x204f8cu: goto label_204f8c;
        case 0x204f90u: goto label_204f90;
        case 0x204f94u: goto label_204f94;
        case 0x204f98u: goto label_204f98;
        case 0x204f9cu: goto label_204f9c;
        case 0x204fa0u: goto label_204fa0;
        case 0x204fa4u: goto label_204fa4;
        case 0x204fa8u: goto label_204fa8;
        case 0x204facu: goto label_204fac;
        case 0x204fb0u: goto label_204fb0;
        case 0x204fb4u: goto label_204fb4;
        case 0x204fb8u: goto label_204fb8;
        case 0x204fbcu: goto label_204fbc;
        case 0x204fc0u: goto label_204fc0;
        case 0x204fc4u: goto label_204fc4;
        case 0x204fc8u: goto label_204fc8;
        case 0x204fccu: goto label_204fcc;
        case 0x204fd0u: goto label_204fd0;
        case 0x204fd4u: goto label_204fd4;
        case 0x204fd8u: goto label_204fd8;
        case 0x204fdcu: goto label_204fdc;
        case 0x204fe0u: goto label_204fe0;
        case 0x204fe4u: goto label_204fe4;
        case 0x204fe8u: goto label_204fe8;
        case 0x204fecu: goto label_204fec;
        case 0x204ff0u: goto label_204ff0;
        case 0x204ff4u: goto label_204ff4;
        case 0x204ff8u: goto label_204ff8;
        case 0x204ffcu: goto label_204ffc;
        case 0x205000u: goto label_205000;
        case 0x205004u: goto label_205004;
        case 0x205008u: goto label_205008;
        case 0x20500cu: goto label_20500c;
        case 0x205010u: goto label_205010;
        case 0x205014u: goto label_205014;
        case 0x205018u: goto label_205018;
        case 0x20501cu: goto label_20501c;
        case 0x205020u: goto label_205020;
        case 0x205024u: goto label_205024;
        case 0x205028u: goto label_205028;
        case 0x20502cu: goto label_20502c;
        case 0x205030u: goto label_205030;
        case 0x205034u: goto label_205034;
        case 0x205038u: goto label_205038;
        case 0x20503cu: goto label_20503c;
        case 0x205040u: goto label_205040;
        case 0x205044u: goto label_205044;
        case 0x205048u: goto label_205048;
        case 0x20504cu: goto label_20504c;
        case 0x205050u: goto label_205050;
        case 0x205054u: goto label_205054;
        case 0x205058u: goto label_205058;
        case 0x20505cu: goto label_20505c;
        case 0x205060u: goto label_205060;
        case 0x205064u: goto label_205064;
        case 0x205068u: goto label_205068;
        case 0x20506cu: goto label_20506c;
        case 0x205070u: goto label_205070;
        case 0x205074u: goto label_205074;
        case 0x205078u: goto label_205078;
        case 0x20507cu: goto label_20507c;
        case 0x205080u: goto label_205080;
        case 0x205084u: goto label_205084;
        case 0x205088u: goto label_205088;
        case 0x20508cu: goto label_20508c;
        case 0x205090u: goto label_205090;
        case 0x205094u: goto label_205094;
        case 0x205098u: goto label_205098;
        case 0x20509cu: goto label_20509c;
        case 0x2050a0u: goto label_2050a0;
        case 0x2050a4u: goto label_2050a4;
        case 0x2050a8u: goto label_2050a8;
        case 0x2050acu: goto label_2050ac;
        case 0x2050b0u: goto label_2050b0;
        case 0x2050b4u: goto label_2050b4;
        case 0x2050b8u: goto label_2050b8;
        case 0x2050bcu: goto label_2050bc;
        case 0x2050c0u: goto label_2050c0;
        case 0x2050c4u: goto label_2050c4;
        case 0x2050c8u: goto label_2050c8;
        case 0x2050ccu: goto label_2050cc;
        case 0x2050d0u: goto label_2050d0;
        case 0x2050d4u: goto label_2050d4;
        case 0x2050d8u: goto label_2050d8;
        case 0x2050dcu: goto label_2050dc;
        case 0x2050e0u: goto label_2050e0;
        case 0x2050e4u: goto label_2050e4;
        case 0x2050e8u: goto label_2050e8;
        case 0x2050ecu: goto label_2050ec;
        case 0x2050f0u: goto label_2050f0;
        case 0x2050f4u: goto label_2050f4;
        case 0x2050f8u: goto label_2050f8;
        case 0x2050fcu: goto label_2050fc;
        case 0x205100u: goto label_205100;
        case 0x205104u: goto label_205104;
        case 0x205108u: goto label_205108;
        case 0x20510cu: goto label_20510c;
        case 0x205110u: goto label_205110;
        case 0x205114u: goto label_205114;
        case 0x205118u: goto label_205118;
        case 0x20511cu: goto label_20511c;
        case 0x205120u: goto label_205120;
        case 0x205124u: goto label_205124;
        case 0x205128u: goto label_205128;
        case 0x20512cu: goto label_20512c;
        case 0x205130u: goto label_205130;
        case 0x205134u: goto label_205134;
        case 0x205138u: goto label_205138;
        case 0x20513cu: goto label_20513c;
        case 0x205140u: goto label_205140;
        case 0x205144u: goto label_205144;
        case 0x205148u: goto label_205148;
        case 0x20514cu: goto label_20514c;
        case 0x205150u: goto label_205150;
        case 0x205154u: goto label_205154;
        case 0x205158u: goto label_205158;
        case 0x20515cu: goto label_20515c;
        case 0x205160u: goto label_205160;
        case 0x205164u: goto label_205164;
        case 0x205168u: goto label_205168;
        case 0x20516cu: goto label_20516c;
        case 0x205170u: goto label_205170;
        case 0x205174u: goto label_205174;
        case 0x205178u: goto label_205178;
        case 0x20517cu: goto label_20517c;
        case 0x205180u: goto label_205180;
        case 0x205184u: goto label_205184;
        case 0x205188u: goto label_205188;
        case 0x20518cu: goto label_20518c;
        case 0x205190u: goto label_205190;
        case 0x205194u: goto label_205194;
        case 0x205198u: goto label_205198;
        case 0x20519cu: goto label_20519c;
        case 0x2051a0u: goto label_2051a0;
        case 0x2051a4u: goto label_2051a4;
        case 0x2051a8u: goto label_2051a8;
        case 0x2051acu: goto label_2051ac;
        case 0x2051b0u: goto label_2051b0;
        case 0x2051b4u: goto label_2051b4;
        case 0x2051b8u: goto label_2051b8;
        case 0x2051bcu: goto label_2051bc;
        case 0x2051c0u: goto label_2051c0;
        case 0x2051c4u: goto label_2051c4;
        case 0x2051c8u: goto label_2051c8;
        case 0x2051ccu: goto label_2051cc;
        case 0x2051d0u: goto label_2051d0;
        case 0x2051d4u: goto label_2051d4;
        case 0x2051d8u: goto label_2051d8;
        case 0x2051dcu: goto label_2051dc;
        case 0x2051e0u: goto label_2051e0;
        case 0x2051e4u: goto label_2051e4;
        case 0x2051e8u: goto label_2051e8;
        case 0x2051ecu: goto label_2051ec;
        case 0x2051f0u: goto label_2051f0;
        case 0x2051f4u: goto label_2051f4;
        case 0x2051f8u: goto label_2051f8;
        case 0x2051fcu: goto label_2051fc;
        case 0x205200u: goto label_205200;
        case 0x205204u: goto label_205204;
        case 0x205208u: goto label_205208;
        case 0x20520cu: goto label_20520c;
        case 0x205210u: goto label_205210;
        case 0x205214u: goto label_205214;
        case 0x205218u: goto label_205218;
        case 0x20521cu: goto label_20521c;
        case 0x205220u: goto label_205220;
        case 0x205224u: goto label_205224;
        case 0x205228u: goto label_205228;
        case 0x20522cu: goto label_20522c;
        case 0x205230u: goto label_205230;
        case 0x205234u: goto label_205234;
        case 0x205238u: goto label_205238;
        case 0x20523cu: goto label_20523c;
        case 0x205240u: goto label_205240;
        case 0x205244u: goto label_205244;
        case 0x205248u: goto label_205248;
        case 0x20524cu: goto label_20524c;
        case 0x205250u: goto label_205250;
        case 0x205254u: goto label_205254;
        case 0x205258u: goto label_205258;
        case 0x20525cu: goto label_20525c;
        case 0x205260u: goto label_205260;
        case 0x205264u: goto label_205264;
        case 0x205268u: goto label_205268;
        case 0x20526cu: goto label_20526c;
        case 0x205270u: goto label_205270;
        case 0x205274u: goto label_205274;
        case 0x205278u: goto label_205278;
        case 0x20527cu: goto label_20527c;
        case 0x205280u: goto label_205280;
        case 0x205284u: goto label_205284;
        case 0x205288u: goto label_205288;
        case 0x20528cu: goto label_20528c;
        case 0x205290u: goto label_205290;
        case 0x205294u: goto label_205294;
        case 0x205298u: goto label_205298;
        case 0x20529cu: goto label_20529c;
        case 0x2052a0u: goto label_2052a0;
        case 0x2052a4u: goto label_2052a4;
        case 0x2052a8u: goto label_2052a8;
        case 0x2052acu: goto label_2052ac;
        case 0x2052b0u: goto label_2052b0;
        case 0x2052b4u: goto label_2052b4;
        case 0x2052b8u: goto label_2052b8;
        case 0x2052bcu: goto label_2052bc;
        case 0x2052c0u: goto label_2052c0;
        case 0x2052c4u: goto label_2052c4;
        case 0x2052c8u: goto label_2052c8;
        case 0x2052ccu: goto label_2052cc;
        case 0x2052d0u: goto label_2052d0;
        case 0x2052d4u: goto label_2052d4;
        case 0x2052d8u: goto label_2052d8;
        case 0x2052dcu: goto label_2052dc;
        case 0x2052e0u: goto label_2052e0;
        case 0x2052e4u: goto label_2052e4;
        case 0x2052e8u: goto label_2052e8;
        case 0x2052ecu: goto label_2052ec;
        case 0x2052f0u: goto label_2052f0;
        case 0x2052f4u: goto label_2052f4;
        case 0x2052f8u: goto label_2052f8;
        case 0x2052fcu: goto label_2052fc;
        case 0x205300u: goto label_205300;
        case 0x205304u: goto label_205304;
        case 0x205308u: goto label_205308;
        case 0x20530cu: goto label_20530c;
        case 0x205310u: goto label_205310;
        case 0x205314u: goto label_205314;
        case 0x205318u: goto label_205318;
        case 0x20531cu: goto label_20531c;
        case 0x205320u: goto label_205320;
        case 0x205324u: goto label_205324;
        case 0x205328u: goto label_205328;
        case 0x20532cu: goto label_20532c;
        case 0x205330u: goto label_205330;
        case 0x205334u: goto label_205334;
        case 0x205338u: goto label_205338;
        case 0x20533cu: goto label_20533c;
        case 0x205340u: goto label_205340;
        case 0x205344u: goto label_205344;
        case 0x205348u: goto label_205348;
        case 0x20534cu: goto label_20534c;
        case 0x205350u: goto label_205350;
        case 0x205354u: goto label_205354;
        case 0x205358u: goto label_205358;
        case 0x20535cu: goto label_20535c;
        case 0x205360u: goto label_205360;
        case 0x205364u: goto label_205364;
        case 0x205368u: goto label_205368;
        case 0x20536cu: goto label_20536c;
        case 0x205370u: goto label_205370;
        case 0x205374u: goto label_205374;
        case 0x205378u: goto label_205378;
        case 0x20537cu: goto label_20537c;
        case 0x205380u: goto label_205380;
        case 0x205384u: goto label_205384;
        case 0x205388u: goto label_205388;
        case 0x20538cu: goto label_20538c;
        case 0x205390u: goto label_205390;
        case 0x205394u: goto label_205394;
        case 0x205398u: goto label_205398;
        case 0x20539cu: goto label_20539c;
        case 0x2053a0u: goto label_2053a0;
        case 0x2053a4u: goto label_2053a4;
        case 0x2053a8u: goto label_2053a8;
        case 0x2053acu: goto label_2053ac;
        case 0x2053b0u: goto label_2053b0;
        case 0x2053b4u: goto label_2053b4;
        case 0x2053b8u: goto label_2053b8;
        case 0x2053bcu: goto label_2053bc;
        case 0x2053c0u: goto label_2053c0;
        case 0x2053c4u: goto label_2053c4;
        case 0x2053c8u: goto label_2053c8;
        case 0x2053ccu: goto label_2053cc;
        case 0x2053d0u: goto label_2053d0;
        case 0x2053d4u: goto label_2053d4;
        case 0x2053d8u: goto label_2053d8;
        case 0x2053dcu: goto label_2053dc;
        case 0x2053e0u: goto label_2053e0;
        case 0x2053e4u: goto label_2053e4;
        case 0x2053e8u: goto label_2053e8;
        case 0x2053ecu: goto label_2053ec;
        case 0x2053f0u: goto label_2053f0;
        case 0x2053f4u: goto label_2053f4;
        case 0x2053f8u: goto label_2053f8;
        case 0x2053fcu: goto label_2053fc;
        case 0x205400u: goto label_205400;
        case 0x205404u: goto label_205404;
        case 0x205408u: goto label_205408;
        case 0x20540cu: goto label_20540c;
        case 0x205410u: goto label_205410;
        case 0x205414u: goto label_205414;
        case 0x205418u: goto label_205418;
        case 0x20541cu: goto label_20541c;
        case 0x205420u: goto label_205420;
        case 0x205424u: goto label_205424;
        case 0x205428u: goto label_205428;
        case 0x20542cu: goto label_20542c;
        case 0x205430u: goto label_205430;
        case 0x205434u: goto label_205434;
        case 0x205438u: goto label_205438;
        case 0x20543cu: goto label_20543c;
        case 0x205440u: goto label_205440;
        case 0x205444u: goto label_205444;
        case 0x205448u: goto label_205448;
        case 0x20544cu: goto label_20544c;
        case 0x205450u: goto label_205450;
        case 0x205454u: goto label_205454;
        case 0x205458u: goto label_205458;
        case 0x20545cu: goto label_20545c;
        case 0x205460u: goto label_205460;
        case 0x205464u: goto label_205464;
        case 0x205468u: goto label_205468;
        case 0x20546cu: goto label_20546c;
        case 0x205470u: goto label_205470;
        case 0x205474u: goto label_205474;
        case 0x205478u: goto label_205478;
        case 0x20547cu: goto label_20547c;
        case 0x205480u: goto label_205480;
        case 0x205484u: goto label_205484;
        case 0x205488u: goto label_205488;
        case 0x20548cu: goto label_20548c;
        case 0x205490u: goto label_205490;
        case 0x205494u: goto label_205494;
        case 0x205498u: goto label_205498;
        case 0x20549cu: goto label_20549c;
        case 0x2054a0u: goto label_2054a0;
        case 0x2054a4u: goto label_2054a4;
        case 0x2054a8u: goto label_2054a8;
        case 0x2054acu: goto label_2054ac;
        case 0x2054b0u: goto label_2054b0;
        case 0x2054b4u: goto label_2054b4;
        case 0x2054b8u: goto label_2054b8;
        case 0x2054bcu: goto label_2054bc;
        case 0x2054c0u: goto label_2054c0;
        case 0x2054c4u: goto label_2054c4;
        case 0x2054c8u: goto label_2054c8;
        case 0x2054ccu: goto label_2054cc;
        case 0x2054d0u: goto label_2054d0;
        case 0x2054d4u: goto label_2054d4;
        case 0x2054d8u: goto label_2054d8;
        case 0x2054dcu: goto label_2054dc;
        case 0x2054e0u: goto label_2054e0;
        case 0x2054e4u: goto label_2054e4;
        case 0x2054e8u: goto label_2054e8;
        case 0x2054ecu: goto label_2054ec;
        case 0x2054f0u: goto label_2054f0;
        case 0x2054f4u: goto label_2054f4;
        case 0x2054f8u: goto label_2054f8;
        case 0x2054fcu: goto label_2054fc;
        case 0x205500u: goto label_205500;
        case 0x205504u: goto label_205504;
        case 0x205508u: goto label_205508;
        case 0x20550cu: goto label_20550c;
        case 0x205510u: goto label_205510;
        case 0x205514u: goto label_205514;
        case 0x205518u: goto label_205518;
        case 0x20551cu: goto label_20551c;
        case 0x205520u: goto label_205520;
        case 0x205524u: goto label_205524;
        case 0x205528u: goto label_205528;
        case 0x20552cu: goto label_20552c;
        case 0x205530u: goto label_205530;
        case 0x205534u: goto label_205534;
        default: return;
    }

label_204d68:
    // 0x204d68: 0x10200091  beqz        $at, . + 4 + (0x91 << 2)
label_204d6c:
    if (ctx->pc == 0x204D6Cu) {
        ctx->pc = 0x204D70u;
        goto label_204d70;
    }
    ctx->pc = 0x204D68u;
    {
        const bool branch_taken_0x204d68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x204d68) {
            ctx->pc = 0x204FB0u;
            goto label_204fb0;
        }
    }
    ctx->pc = 0x204D70u;
label_204d70:
    // 0x204d70: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x204d70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_204d74:
    // 0x204d74: 0x2a010004  slti        $at, $s0, 0x4
    ctx->pc = 0x204d74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_204d78:
    // 0x204d78: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_204d7c:
    if (ctx->pc == 0x204D7Cu) {
        ctx->pc = 0x204D80u;
        goto label_204d80;
    }
    ctx->pc = 0x204D78u;
    {
        const bool branch_taken_0x204d78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x204d78) {
            ctx->pc = 0x204D84u;
            goto label_204d84;
        }
    }
    ctx->pc = 0x204D80u;
label_204d80:
    // 0x204d80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x204d80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_204d84:
    // 0x204d84: 0x0  nop
    ctx->pc = 0x204d84u;
    // NOP
label_204d88:
    // 0x204d88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x204d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_204d8c:
    // 0x204d8c: 0xc05b420  jal         func_16D080
label_204d90:
    if (ctx->pc == 0x204D90u) {
        ctx->pc = 0x204D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D8Cu;
        // 0x204d90: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204D94u;
        goto label_204d94;
    }
    ctx->pc = 0x204D8Cu;
    SET_GPR_U32(ctx, 31, 0x204D94u);
    ctx->pc = 0x204D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204D8Cu;
    // 0x204d90: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x204D8Cu, 0x204D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204D94u;
label_204d94:
    // 0x204d94: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x204d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_204d98:
    // 0x204d98: 0x2a010005  slti        $at, $s0, 0x5
    ctx->pc = 0x204d98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
label_204d9c:
    // 0x204d9c: 0x241200ab  addiu       $s2, $zero, 0xAB
    ctx->pc = 0x204d9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_204da0:
    // 0x204da0: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_204da4:
    if (ctx->pc == 0x204DA4u) {
        ctx->pc = 0x204DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204DA0u;
        // 0x204da4: 0xac502490  sw          $s0, 0x2490($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 9360), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204DA8u;
        goto label_204da8;
    }
    ctx->pc = 0x204DA0u;
    {
        const bool branch_taken_0x204da0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x204DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204DA0u;
        // 0x204da4: 0xac502490  sw          $s0, 0x2490($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 9360), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204da0) {
            ctx->pc = 0x204DBCu;
            goto label_204dbc;
        }
    }
    ctx->pc = 0x204DA8u;
label_204da8:
    // 0x204da8: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x204da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_204dac:
    // 0x204dac: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x204dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_204db0:
    // 0x204db0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x204db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_204db4:
    // 0x204db4: 0x8c522498  lw          $s2, 0x2498($v0)
    ctx->pc = 0x204db4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9368)));
label_204db8:
    // 0x204db8: 0x0  nop
    ctx->pc = 0x204db8u;
    // NOP
label_204dbc:
    // 0x204dbc: 0x0  nop
    ctx->pc = 0x204dbcu;
    // NOP
label_204dc0:
    // 0x204dc0: 0x2a4100ab  slti        $at, $s2, 0xAB
    ctx->pc = 0x204dc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)171) ? 1 : 0);
label_204dc4:
    // 0x204dc4: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_204dc8:
    if (ctx->pc == 0x204DC8u) {
        ctx->pc = 0x204DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204DC4u;
        // 0x204dc8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204DCCu;
        goto label_204dcc;
    }
    ctx->pc = 0x204DC4u;
    {
        const bool branch_taken_0x204dc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x204DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204DC4u;
        // 0x204dc8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204dc4) {
            ctx->pc = 0x204E10u;
            goto label_204e10;
        }
    }
    ctx->pc = 0x204DCCu;
label_204dcc:
    // 0x204dcc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x204dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_204dd0:
    // 0x204dd0: 0x240601a0  addiu       $a2, $zero, 0x1A0
    ctx->pc = 0x204dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
label_204dd4:
    // 0x204dd4: 0x24070038  addiu       $a3, $zero, 0x38
    ctx->pc = 0x204dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_204dd8:
    // 0x204dd8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x204dd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204ddc:
    // 0x204ddc: 0xc07fadc  jal         func_1FEB70
label_204de0:
    if (ctx->pc == 0x204DE0u) {
        ctx->pc = 0x204DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204DDCu;
        // 0x204de0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204DE4u;
        goto label_204de4;
    }
    ctx->pc = 0x204DDCu;
    SET_GPR_U32(ctx, 31, 0x204DE4u);
    ctx->pc = 0x204DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204DDCu;
    // 0x204de0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB70u;
    { ctx->pc = 0x1feb70; return; }
    ctx->pc = 0x204DE4u;
label_204de4:
    // 0x204de4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x204de4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_204de8:
    // 0x204de8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x204de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_204dec:
    // 0x204dec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x204decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204df0:
    // 0x204df0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x204df0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_204df4:
    // 0x204df4: 0x24080028  addiu       $t0, $zero, 0x28
    ctx->pc = 0x204df4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_204df8:
    // 0x204df8: 0x240900c8  addiu       $t1, $zero, 0xC8
    ctx->pc = 0x204df8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_204dfc:
    // 0x204dfc: 0x240a0088  addiu       $t2, $zero, 0x88
    ctx->pc = 0x204dfcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_204e00:
    // 0x204e00: 0xc07f47c  jal         func_1FD1F0
label_204e04:
    if (ctx->pc == 0x204E04u) {
        ctx->pc = 0x204E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E00u;
        // 0x204e04: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204E08u;
        goto label_204e08;
    }
    ctx->pc = 0x204E00u;
    SET_GPR_U32(ctx, 31, 0x204E08u);
    ctx->pc = 0x204E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204E00u;
    // 0x204e04: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD1F0u;
    { ctx->pc = 0x1fd1f0; return; }
    ctx->pc = 0x204E08u;
label_204e08:
    // 0x204e08: 0x10000069  b           . + 4 + (0x69 << 2)
label_204e0c:
    if (ctx->pc == 0x204E0Cu) {
        ctx->pc = 0x204E10u;
        goto label_204e10;
    }
    ctx->pc = 0x204E08u;
    {
        const bool branch_taken_0x204e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204e08) {
            ctx->pc = 0x204FB0u;
            goto label_204fb0;
        }
    }
    ctx->pc = 0x204E10u;
label_204e10:
    // 0x204e10: 0xc07fa38  jal         func_1FE8E0
label_204e14:
    if (ctx->pc == 0x204E14u) {
        ctx->pc = 0x204E18u;
        goto label_204e18;
    }
    ctx->pc = 0x204E10u;
    SET_GPR_U32(ctx, 31, 0x204E18u);
    ctx->pc = 0x1FE8E0u;
    { ctx->pc = 0x1fe8e0; return; }
    ctx->pc = 0x204E18u;
label_204e18:
    // 0x204e18: 0xc07f468  jal         func_1FD1A0
label_204e1c:
    if (ctx->pc == 0x204E1Cu) {
        ctx->pc = 0x204E20u;
        goto label_204e20;
    }
    ctx->pc = 0x204E18u;
    SET_GPR_U32(ctx, 31, 0x204E20u);
    ctx->pc = 0x1FD1A0u;
    { ctx->pc = 0x1fd1a0; return; }
    ctx->pc = 0x204E20u;
label_204e20:
    // 0x204e20: 0x10000063  b           . + 4 + (0x63 << 2)
label_204e24:
    if (ctx->pc == 0x204E24u) {
        ctx->pc = 0x204E28u;
        goto label_204e28;
    }
    ctx->pc = 0x204E20u;
    {
        const bool branch_taken_0x204e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204e20) {
            ctx->pc = 0x204FB0u;
            goto label_204fb0;
        }
    }
    ctx->pc = 0x204E28u;
label_204e28:
    // 0x204e28: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x204e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_204e2c:
    // 0x204e2c: 0x432004  sllv        $a0, $v1, $v0
    ctx->pc = 0x204e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_204e30:
    // 0x204e30: 0xdf8387c0  ld          $v1, -0x7840($gp)
    ctx->pc = 0x204e30u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_204e34:
    // 0x204e34: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x204e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_204e38:
    // 0x204e38: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
label_204e3c:
    if (ctx->pc == 0x204E3Cu) {
        ctx->pc = 0x204E40u;
        goto label_204e40;
    }
    ctx->pc = 0x204E38u;
    {
        const bool branch_taken_0x204e38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x204e38) {
            ctx->pc = 0x204EF0u;
            goto label_204ef0;
        }
    }
    ctx->pc = 0x204E40u;
label_204e40:
    // 0x204e40: 0x1200005b  beqz        $s0, . + 4 + (0x5B << 2)
label_204e44:
    if (ctx->pc == 0x204E44u) {
        ctx->pc = 0x204E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E40u;
        // 0x204e44: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204E48u;
        goto label_204e48;
    }
    ctx->pc = 0x204E40u;
    {
        const bool branch_taken_0x204e40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x204E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E40u;
        // 0x204e44: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e40) {
            ctx->pc = 0x204FB0u;
            goto label_204fb0;
        }
    }
    ctx->pc = 0x204E48u;
label_204e48:
    // 0x204e48: 0x12020059  beq         $s0, $v0, . + 4 + (0x59 << 2)
label_204e4c:
    if (ctx->pc == 0x204E4Cu) {
        ctx->pc = 0x204E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E48u;
        // 0x204e4c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204E50u;
        goto label_204e50;
    }
    ctx->pc = 0x204E48u;
    {
        const bool branch_taken_0x204e48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x204E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E48u;
        // 0x204e4c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e48) {
            ctx->pc = 0x204FB0u;
            goto label_204fb0;
        }
    }
    ctx->pc = 0x204E50u;
label_204e50:
    // 0x204e50: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x204e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_204e54:
    // 0x204e54: 0xc05b420  jal         func_16D080
label_204e58:
    if (ctx->pc == 0x204E58u) {
        ctx->pc = 0x204E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E54u;
        // 0x204e58: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204E5Cu;
        goto label_204e5c;
    }
    ctx->pc = 0x204E54u;
    SET_GPR_U32(ctx, 31, 0x204E5Cu);
    ctx->pc = 0x204E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204E54u;
    // 0x204e58: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x204E54u, 0x204E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204E5Cu;
label_204e5c:
    // 0x204e5c: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x204e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_204e60:
    // 0x204e60: 0x2a010005  slti        $at, $s0, 0x5
    ctx->pc = 0x204e60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
label_204e64:
    // 0x204e64: 0x241200ab  addiu       $s2, $zero, 0xAB
    ctx->pc = 0x204e64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_204e68:
    // 0x204e68: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_204e6c:
    if (ctx->pc == 0x204E6Cu) {
        ctx->pc = 0x204E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E68u;
        // 0x204e6c: 0xac502490  sw          $s0, 0x2490($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 9360), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204E70u;
        goto label_204e70;
    }
    ctx->pc = 0x204E68u;
    {
        const bool branch_taken_0x204e68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x204E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E68u;
        // 0x204e6c: 0xac502490  sw          $s0, 0x2490($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 9360), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e68) {
            ctx->pc = 0x204E84u;
            goto label_204e84;
        }
    }
    ctx->pc = 0x204E70u;
label_204e70:
    // 0x204e70: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x204e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_204e74:
    // 0x204e74: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x204e74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_204e78:
    // 0x204e78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x204e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_204e7c:
    // 0x204e7c: 0x8c522498  lw          $s2, 0x2498($v0)
    ctx->pc = 0x204e7cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9368)));
label_204e80:
    // 0x204e80: 0x0  nop
    ctx->pc = 0x204e80u;
    // NOP
label_204e84:
    // 0x204e84: 0x0  nop
    ctx->pc = 0x204e84u;
    // NOP
label_204e88:
    // 0x204e88: 0x2a4100ab  slti        $at, $s2, 0xAB
    ctx->pc = 0x204e88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)171) ? 1 : 0);
label_204e8c:
    // 0x204e8c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_204e90:
    if (ctx->pc == 0x204E90u) {
        ctx->pc = 0x204E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E8Cu;
        // 0x204e90: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204E94u;
        goto label_204e94;
    }
    ctx->pc = 0x204E8Cu;
    {
        const bool branch_taken_0x204e8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x204E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E8Cu;
        // 0x204e90: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e8c) {
            ctx->pc = 0x204ED8u;
            goto label_204ed8;
        }
    }
    ctx->pc = 0x204E94u;
label_204e94:
    // 0x204e94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x204e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_204e98:
    // 0x204e98: 0x240601a0  addiu       $a2, $zero, 0x1A0
    ctx->pc = 0x204e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
label_204e9c:
    // 0x204e9c: 0x24070038  addiu       $a3, $zero, 0x38
    ctx->pc = 0x204e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_204ea0:
    // 0x204ea0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x204ea0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204ea4:
    // 0x204ea4: 0xc07fadc  jal         func_1FEB70
label_204ea8:
    if (ctx->pc == 0x204EA8u) {
        ctx->pc = 0x204EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204EA4u;
        // 0x204ea8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204EACu;
        goto label_204eac;
    }
    ctx->pc = 0x204EA4u;
    SET_GPR_U32(ctx, 31, 0x204EACu);
    ctx->pc = 0x204EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204EA4u;
    // 0x204ea8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB70u;
    { ctx->pc = 0x1feb70; return; }
    ctx->pc = 0x204EACu;
label_204eac:
    // 0x204eac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x204eacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_204eb0:
    // 0x204eb0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x204eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_204eb4:
    // 0x204eb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x204eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204eb8:
    // 0x204eb8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x204eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_204ebc:
    // 0x204ebc: 0x24080028  addiu       $t0, $zero, 0x28
    ctx->pc = 0x204ebcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_204ec0:
    // 0x204ec0: 0x240900c8  addiu       $t1, $zero, 0xC8
    ctx->pc = 0x204ec0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_204ec4:
    // 0x204ec4: 0x240a0088  addiu       $t2, $zero, 0x88
    ctx->pc = 0x204ec4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_204ec8:
    // 0x204ec8: 0xc07f47c  jal         func_1FD1F0
label_204ecc:
    if (ctx->pc == 0x204ECCu) {
        ctx->pc = 0x204ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204EC8u;
        // 0x204ecc: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204ED0u;
        goto label_204ed0;
    }
    ctx->pc = 0x204EC8u;
    SET_GPR_U32(ctx, 31, 0x204ED0u);
    ctx->pc = 0x204ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204EC8u;
    // 0x204ecc: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD1F0u;
    { ctx->pc = 0x1fd1f0; return; }
    ctx->pc = 0x204ED0u;
label_204ed0:
    // 0x204ed0: 0x10000037  b           . + 4 + (0x37 << 2)
label_204ed4:
    if (ctx->pc == 0x204ED4u) {
        ctx->pc = 0x204ED8u;
        goto label_204ed8;
    }
    ctx->pc = 0x204ED0u;
    {
        const bool branch_taken_0x204ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204ed0) {
            ctx->pc = 0x204FB0u;
            goto label_204fb0;
        }
    }
    ctx->pc = 0x204ED8u;
label_204ed8:
    // 0x204ed8: 0xc07fa38  jal         func_1FE8E0
label_204edc:
    if (ctx->pc == 0x204EDCu) {
        ctx->pc = 0x204EE0u;
        goto label_204ee0;
    }
    ctx->pc = 0x204ED8u;
    SET_GPR_U32(ctx, 31, 0x204EE0u);
    ctx->pc = 0x1FE8E0u;
    { ctx->pc = 0x1fe8e0; return; }
    ctx->pc = 0x204EE0u;
label_204ee0:
    // 0x204ee0: 0xc07f468  jal         func_1FD1A0
label_204ee4:
    if (ctx->pc == 0x204EE4u) {
        ctx->pc = 0x204EE8u;
        goto label_204ee8;
    }
    ctx->pc = 0x204EE0u;
    SET_GPR_U32(ctx, 31, 0x204EE8u);
    ctx->pc = 0x1FD1A0u;
    { ctx->pc = 0x1fd1a0; return; }
    ctx->pc = 0x204EE8u;
label_204ee8:
    // 0x204ee8: 0x10000031  b           . + 4 + (0x31 << 2)
label_204eec:
    if (ctx->pc == 0x204EECu) {
        ctx->pc = 0x204EF0u;
        goto label_204ef0;
    }
    ctx->pc = 0x204EE8u;
    {
        const bool branch_taken_0x204ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204ee8) {
            ctx->pc = 0x204FB0u;
            goto label_204fb0;
        }
    }
    ctx->pc = 0x204EF0u;
label_204ef0:
    // 0x204ef0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x204ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_204ef4:
    // 0x204ef4: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x204ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_204ef8:
    // 0x204ef8: 0xdf8287c0  ld          $v0, -0x7840($gp)
    ctx->pc = 0x204ef8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_204efc:
    // 0x204efc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x204efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_204f00:
    // 0x204f00: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_204f04:
    if (ctx->pc == 0x204F04u) {
        ctx->pc = 0x204F08u;
        goto label_204f08;
    }
    ctx->pc = 0x204F00u;
    {
        const bool branch_taken_0x204f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x204f00) {
            ctx->pc = 0x204FB0u;
            goto label_204fb0;
        }
    }
    ctx->pc = 0x204F08u;
label_204f08:
    // 0x204f08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x204f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_204f0c:
    // 0x204f0c: 0x12020028  beq         $s0, $v0, . + 4 + (0x28 << 2)
label_204f10:
    if (ctx->pc == 0x204F10u) {
        ctx->pc = 0x204F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F0Cu;
        // 0x204f10: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204F14u;
        goto label_204f14;
    }
    ctx->pc = 0x204F0Cu;
    {
        const bool branch_taken_0x204f0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x204F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F0Cu;
        // 0x204f10: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204f0c) {
            ctx->pc = 0x204FB0u;
            goto label_204fb0;
        }
    }
    ctx->pc = 0x204F14u;
label_204f14:
    // 0x204f14: 0x12020026  beq         $s0, $v0, . + 4 + (0x26 << 2)
label_204f18:
    if (ctx->pc == 0x204F18u) {
        ctx->pc = 0x204F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F14u;
        // 0x204f18: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204F1Cu;
        goto label_204f1c;
    }
    ctx->pc = 0x204F14u;
    {
        const bool branch_taken_0x204f14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x204F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F14u;
        // 0x204f18: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204f14) {
            ctx->pc = 0x204FB0u;
            goto label_204fb0;
        }
    }
    ctx->pc = 0x204F1Cu;
label_204f1c:
    // 0x204f1c: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x204f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_204f20:
    // 0x204f20: 0xc05b420  jal         func_16D080
label_204f24:
    if (ctx->pc == 0x204F24u) {
        ctx->pc = 0x204F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F20u;
        // 0x204f24: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204F28u;
        goto label_204f28;
    }
    ctx->pc = 0x204F20u;
    SET_GPR_U32(ctx, 31, 0x204F28u);
    ctx->pc = 0x204F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204F20u;
    // 0x204f24: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x204F20u, 0x204F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F28u;
label_204f28:
    // 0x204f28: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x204f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_204f2c:
    // 0x204f2c: 0x2a010005  slti        $at, $s0, 0x5
    ctx->pc = 0x204f2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
label_204f30:
    // 0x204f30: 0x241200ab  addiu       $s2, $zero, 0xAB
    ctx->pc = 0x204f30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_204f34:
    // 0x204f34: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_204f38:
    if (ctx->pc == 0x204F38u) {
        ctx->pc = 0x204F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F34u;
        // 0x204f38: 0xac502490  sw          $s0, 0x2490($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 9360), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204F3Cu;
        goto label_204f3c;
    }
    ctx->pc = 0x204F34u;
    {
        const bool branch_taken_0x204f34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x204F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F34u;
        // 0x204f38: 0xac502490  sw          $s0, 0x2490($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 9360), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204f34) {
            ctx->pc = 0x204F50u;
            goto label_204f50;
        }
    }
    ctx->pc = 0x204F3Cu;
label_204f3c:
    // 0x204f3c: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x204f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_204f40:
    // 0x204f40: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x204f40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_204f44:
    // 0x204f44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x204f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_204f48:
    // 0x204f48: 0x8c522498  lw          $s2, 0x2498($v0)
    ctx->pc = 0x204f48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9368)));
label_204f4c:
    // 0x204f4c: 0x0  nop
    ctx->pc = 0x204f4cu;
    // NOP
label_204f50:
    // 0x204f50: 0x2a4100ab  slti        $at, $s2, 0xAB
    ctx->pc = 0x204f50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)171) ? 1 : 0);
label_204f54:
    // 0x204f54: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_204f58:
    if (ctx->pc == 0x204F58u) {
        ctx->pc = 0x204F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F54u;
        // 0x204f58: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204F5Cu;
        goto label_204f5c;
    }
    ctx->pc = 0x204F54u;
    {
        const bool branch_taken_0x204f54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x204F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F54u;
        // 0x204f58: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204f54) {
            ctx->pc = 0x204FA0u;
            goto label_204fa0;
        }
    }
    ctx->pc = 0x204F5Cu;
label_204f5c:
    // 0x204f5c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x204f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_204f60:
    // 0x204f60: 0x240601a0  addiu       $a2, $zero, 0x1A0
    ctx->pc = 0x204f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
label_204f64:
    // 0x204f64: 0x24070038  addiu       $a3, $zero, 0x38
    ctx->pc = 0x204f64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_204f68:
    // 0x204f68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x204f68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204f6c:
    // 0x204f6c: 0xc07fadc  jal         func_1FEB70
label_204f70:
    if (ctx->pc == 0x204F70u) {
        ctx->pc = 0x204F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F6Cu;
        // 0x204f70: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204F74u;
        goto label_204f74;
    }
    ctx->pc = 0x204F6Cu;
    SET_GPR_U32(ctx, 31, 0x204F74u);
    ctx->pc = 0x204F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204F6Cu;
    // 0x204f70: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB70u;
    { ctx->pc = 0x1feb70; return; }
    ctx->pc = 0x204F74u;
label_204f74:
    // 0x204f74: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x204f74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_204f78:
    // 0x204f78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x204f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_204f7c:
    // 0x204f7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x204f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204f80:
    // 0x204f80: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x204f80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_204f84:
    // 0x204f84: 0x24080028  addiu       $t0, $zero, 0x28
    ctx->pc = 0x204f84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_204f88:
    // 0x204f88: 0x240900c8  addiu       $t1, $zero, 0xC8
    ctx->pc = 0x204f88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_204f8c:
    // 0x204f8c: 0x240a0088  addiu       $t2, $zero, 0x88
    ctx->pc = 0x204f8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_204f90:
    // 0x204f90: 0xc07f47c  jal         func_1FD1F0
label_204f94:
    if (ctx->pc == 0x204F94u) {
        ctx->pc = 0x204F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F90u;
        // 0x204f94: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204F98u;
        goto label_204f98;
    }
    ctx->pc = 0x204F90u;
    SET_GPR_U32(ctx, 31, 0x204F98u);
    ctx->pc = 0x204F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204F90u;
    // 0x204f94: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD1F0u;
    { ctx->pc = 0x1fd1f0; return; }
    ctx->pc = 0x204F98u;
label_204f98:
    // 0x204f98: 0x10000005  b           . + 4 + (0x5 << 2)
label_204f9c:
    if (ctx->pc == 0x204F9Cu) {
        ctx->pc = 0x204FA0u;
        goto label_204fa0;
    }
    ctx->pc = 0x204F98u;
    {
        const bool branch_taken_0x204f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204f98) {
            ctx->pc = 0x204FB0u;
            goto label_204fb0;
        }
    }
    ctx->pc = 0x204FA0u;
label_204fa0:
    // 0x204fa0: 0xc07fa38  jal         func_1FE8E0
label_204fa4:
    if (ctx->pc == 0x204FA4u) {
        ctx->pc = 0x204FA8u;
        goto label_204fa8;
    }
    ctx->pc = 0x204FA0u;
    SET_GPR_U32(ctx, 31, 0x204FA8u);
    ctx->pc = 0x1FE8E0u;
    { ctx->pc = 0x1fe8e0; return; }
    ctx->pc = 0x204FA8u;
label_204fa8:
    // 0x204fa8: 0xc07f468  jal         func_1FD1A0
label_204fac:
    if (ctx->pc == 0x204FACu) {
        ctx->pc = 0x204FB0u;
        goto label_204fb0;
    }
    ctx->pc = 0x204FA8u;
    SET_GPR_U32(ctx, 31, 0x204FB0u);
    ctx->pc = 0x1FD1A0u;
    { ctx->pc = 0x1fd1a0; return; }
    ctx->pc = 0x204FB0u;
label_204fb0:
    // 0x204fb0: 0xc07b48c  jal         func_1ED230
label_204fb4:
    if (ctx->pc == 0x204FB4u) {
        ctx->pc = 0x204FB8u;
        goto label_204fb8;
    }
    ctx->pc = 0x204FB0u;
    SET_GPR_U32(ctx, 31, 0x204FB8u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x204FB8u;
label_204fb8:
    // 0x204fb8: 0x1000fef5  b           . + 4 + (-0x10B << 2)
label_204fbc:
    if (ctx->pc == 0x204FBCu) {
        ctx->pc = 0x204FC0u;
        goto label_204fc0;
    }
    ctx->pc = 0x204FB8u;
    {
        const bool branch_taken_0x204fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204fb8) {
            ctx->pc = 0x204B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x204b90; return; }
        }
    }
    ctx->pc = 0x204FC0u;
label_204fc0:
    // 0x204fc0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x204fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_204fc4:
    // 0x204fc4: 0x1622000c  bne         $s1, $v0, . + 4 + (0xC << 2)
label_204fc8:
    if (ctx->pc == 0x204FC8u) {
        ctx->pc = 0x204FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204FC4u;
        // 0x204fc8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204FCCu;
        goto label_204fcc;
    }
    ctx->pc = 0x204FC4u;
    {
        const bool branch_taken_0x204fc4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x204FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204FC4u;
        // 0x204fc8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204fc4) {
            ctx->pc = 0x204FF8u;
            goto label_204ff8;
        }
    }
    ctx->pc = 0x204FCCu;
label_204fcc:
    // 0x204fcc: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x204fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_204fd0:
    // 0x204fd0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x204fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_204fd4:
    // 0x204fd4: 0xc07fa38  jal         func_1FE8E0
label_204fd8:
    if (ctx->pc == 0x204FD8u) {
        ctx->pc = 0x204FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204FD4u;
        // 0x204fd8: 0xac432490  sw          $v1, 0x2490($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 9360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204FDCu;
        goto label_204fdc;
    }
    ctx->pc = 0x204FD4u;
    SET_GPR_U32(ctx, 31, 0x204FDCu);
    ctx->pc = 0x204FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204FD4u;
    // 0x204fd8: 0xac432490  sw          $v1, 0x2490($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 9360), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8E0u;
    { ctx->pc = 0x1fe8e0; return; }
    ctx->pc = 0x204FDCu;
label_204fdc:
    // 0x204fdc: 0xc07f468  jal         func_1FD1A0
label_204fe0:
    if (ctx->pc == 0x204FE0u) {
        ctx->pc = 0x204FE4u;
        goto label_204fe4;
    }
    ctx->pc = 0x204FDCu;
    SET_GPR_U32(ctx, 31, 0x204FE4u);
    ctx->pc = 0x1FD1A0u;
    { ctx->pc = 0x1fd1a0; return; }
    ctx->pc = 0x204FE4u;
label_204fe4:
    // 0x204fe4: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x204fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_204fe8:
    // 0x204fe8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x204fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_204fec:
    // 0x204fec: 0xc078078  jal         func_1E01E0
label_204ff0:
    if (ctx->pc == 0x204FF0u) {
        ctx->pc = 0x204FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204FECu;
        // 0x204ff0: 0xac432480  sw          $v1, 0x2480($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 9344), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204FF4u;
        goto label_204ff4;
    }
    ctx->pc = 0x204FECu;
    SET_GPR_U32(ctx, 31, 0x204FF4u);
    ctx->pc = 0x204FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204FECu;
    // 0x204ff0: 0xac432480  sw          $v1, 0x2480($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 9344), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E01E0u;
    { ctx->pc = 0x1e01e0; return; }
    ctx->pc = 0x204FF4u;
label_204ff4:
    // 0x204ff4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x204ff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_204ff8:
    // 0x204ff8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x204ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_204ffc:
    // 0x204ffc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x204ffcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_205000:
    // 0x205000: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x205000u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_205004:
    // 0x205004: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x205004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_205008:
    // 0x205008: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x205008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20500c:
    // 0x20500c: 0x3e00008  jr          $ra
label_205010:
    if (ctx->pc == 0x205010u) {
        ctx->pc = 0x205010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20500Cu;
        // 0x205010: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205014u;
        goto label_205014;
    }
    ctx->pc = 0x20500Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20500Cu;
        // 0x205010: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20500Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205014u;
label_205014:
    // 0x205014: 0x0  nop
    ctx->pc = 0x205014u;
    // NOP
label_205018:
    // 0x205018: 0x0  nop
    ctx->pc = 0x205018u;
    // NOP
label_20501c:
    // 0x20501c: 0x0  nop
    ctx->pc = 0x20501cu;
    // NOP
label_205020:
    // 0x205020: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x205020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_205024:
    // 0x205024: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x205024u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_205028:
    // 0x205028: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x205028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_20502c:
    // 0x20502c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20502cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_205030:
    // 0x205030: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x205030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_205034:
    // 0x205034: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x205034u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_205038:
    // 0x205038: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x205038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20503c:
    // 0x20503c: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x20503cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_205040:
    // 0x205040: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x205040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_205044:
    // 0x205044: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x205044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_205048:
    // 0x205048: 0x8c683670  lw          $t0, 0x3670($v1)
    ctx->pc = 0x205048u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13936)));
label_20504c:
    // 0x20504c: 0x24423b82  addiu       $v0, $v0, 0x3B82
    ctx->pc = 0x20504cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15234));
label_205050:
    // 0x205050: 0x9067367d  lbu         $a3, 0x367D($v1)
    ctx->pc = 0x205050u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13949)));
label_205054:
    // 0x205054: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x205054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_205058:
    // 0x205058: 0x8f8590f8  lw          $a1, -0x6F08($gp)
    ctx->pc = 0x205058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_20505c:
    // 0x20505c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20505cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205060:
    // 0x205060: 0x81900  sll         $v1, $t0, 4
    ctx->pc = 0x205060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_205064:
    // 0x205064: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x205064u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_205068:
    // 0x205068: 0xaca72494  sw          $a3, 0x2494($a1)
    ctx->pc = 0x205068u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 9364), GPR_U32(ctx, 7));
label_20506c:
    // 0x20506c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20506cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_205070:
    // 0x205070: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x205070u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_205074:
    // 0x205074: 0xc0651dc  jal         func_194770
label_205078:
    if (ctx->pc == 0x205078u) {
        ctx->pc = 0x205078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205074u;
        // 0x205078: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20507Cu;
        goto label_20507c;
    }
    ctx->pc = 0x205074u;
    SET_GPR_U32(ctx, 31, 0x20507Cu);
    ctx->pc = 0x205078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205074u;
    // 0x205078: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194770u, 0x205074u, 0x20507Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20507Cu;
label_20507c:
    // 0x20507c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20507cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205080:
    // 0x205080: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x205080u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205084:
    // 0x205084: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x205084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_205088:
    // 0x205088: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x205088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_20508c:
    // 0x20508c: 0x24a5c990  addiu       $a1, $a1, -0x3670
    ctx->pc = 0x20508cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953360));
label_205090:
    // 0x205090: 0x240400ab  addiu       $a0, $zero, 0xAB
    ctx->pc = 0x205090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_205094:
    // 0x205094: 0xc74821  addu        $t1, $a2, $a3
    ctx->pc = 0x205094u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_205098:
    // 0x205098: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x205098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_20509c:
    // 0x20509c: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x20509cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_2050a0:
    // 0x2050a0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2050a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2050a4:
    // 0x2050a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2050a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2050a8:
    // 0x2050a8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2050a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2050ac:
    // 0x2050ac: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2050acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2050b0:
    // 0x2050b0: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2050b0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2050b4:
    // 0x2050b4: 0x90223a1b  lbu         $v0, 0x3A1B($at)
    ctx->pc = 0x2050b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 14875)));
label_2050b8:
    // 0x2050b8: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
label_2050bc:
    if (ctx->pc == 0x2050BCu) {
        ctx->pc = 0x2050C0u;
        goto label_2050c0;
    }
    ctx->pc = 0x2050B8u;
    {
        const bool branch_taken_0x2050b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2050b8) {
            ctx->pc = 0x2050D0u;
            goto label_2050d0;
        }
    }
    ctx->pc = 0x2050C0u;
label_2050c0:
    // 0x2050c0: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x2050c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_2050c4:
    // 0x2050c4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2050c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_2050c8:
    // 0x2050c8: 0x1000000b  b           . + 4 + (0xB << 2)
label_2050cc:
    if (ctx->pc == 0x2050CCu) {
        ctx->pc = 0x2050CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2050C8u;
        // 0x2050cc: 0xac442498  sw          $a0, 0x2498($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 9368), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2050D0u;
        goto label_2050d0;
    }
    ctx->pc = 0x2050C8u;
    {
        const bool branch_taken_0x2050c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2050CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2050C8u;
        // 0x2050cc: 0xac442498  sw          $a0, 0x2498($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 9368), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2050c8) {
            ctx->pc = 0x2050F8u;
            goto label_2050f8;
        }
    }
    ctx->pc = 0x2050D0u;
label_2050d0:
    // 0x2050d0: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x2050d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_2050d4:
    // 0x2050d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2050d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2050d8:
    // 0x2050d8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2050d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_2050dc:
    // 0x2050dc: 0xac432498  sw          $v1, 0x2498($v0)
    ctx->pc = 0x2050dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9368), GPR_U32(ctx, 3));
label_2050e0:
    // 0x2050e0: 0x8f8390f8  lw          $v1, -0x6F08($gp)
    ctx->pc = 0x2050e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_2050e4:
    // 0x2050e4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x2050e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_2050e8:
    // 0x2050e8: 0x8c632494  lw          $v1, 0x2494($v1)
    ctx->pc = 0x2050e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9364)));
label_2050ec:
    // 0x2050ec: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2050f0:
    if (ctx->pc == 0x2050F0u) {
        ctx->pc = 0x2050F4u;
        goto label_2050f4;
    }
    ctx->pc = 0x2050ECu;
    {
        const bool branch_taken_0x2050ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2050ec) {
            ctx->pc = 0x2050F8u;
            goto label_2050f8;
        }
    }
    ctx->pc = 0x2050F4u;
label_2050f4:
    // 0x2050f4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2050f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2050f8:
    // 0x2050f8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2050f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2050fc:
    // 0x2050fc: 0x28e20005  slti        $v0, $a3, 0x5
    ctx->pc = 0x2050fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)5) ? 1 : 0);
label_205100:
    // 0x205100: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_205104:
    if (ctx->pc == 0x205104u) {
        ctx->pc = 0x205104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205100u;
        // 0x205104: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205108u;
        goto label_205108;
    }
    ctx->pc = 0x205100u;
    {
        const bool branch_taken_0x205100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205100u;
        // 0x205104: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205100) {
            ctx->pc = 0x205094u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205094;
        }
    }
    ctx->pc = 0x205108u;
label_205108:
    // 0x205108: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x205108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20510c:
    // 0x20510c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20510cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_205110:
    // 0x205110: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x205110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_205114:
    // 0x205114: 0x3e00008  jr          $ra
label_205118:
    if (ctx->pc == 0x205118u) {
        ctx->pc = 0x205118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205114u;
        // 0x205118: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20511Cu;
        goto label_20511c;
    }
    ctx->pc = 0x205114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205114u;
        // 0x205118: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20511Cu;
label_20511c:
    // 0x20511c: 0x0  nop
    ctx->pc = 0x20511cu;
    // NOP
label_205120:
    // 0x205120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_205124:
    // 0x205124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x205124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_205128:
    // 0x205128: 0x8f8490f8  lw          $a0, -0x6F08($gp)
    ctx->pc = 0x205128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_20512c:
    // 0x20512c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_205130:
    if (ctx->pc == 0x205130u) {
        ctx->pc = 0x205134u;
        goto label_205134;
    }
    ctx->pc = 0x20512Cu;
    {
        const bool branch_taken_0x20512c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20512c) {
            ctx->pc = 0x205140u;
            goto label_205140;
        }
    }
    ctx->pc = 0x205134u;
label_205134:
    // 0x205134: 0xc070038  jal         func_1C00E0
label_205138:
    if (ctx->pc == 0x205138u) {
        ctx->pc = 0x20513Cu;
        goto label_20513c;
    }
    ctx->pc = 0x205134u;
    SET_GPR_U32(ctx, 31, 0x20513Cu);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x20513Cu;
label_20513c:
    // 0x20513c: 0xaf8090f8  sw          $zero, -0x6F08($gp)
    ctx->pc = 0x20513cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938872), GPR_U32(ctx, 0));
label_205140:
    // 0x205140: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_205144:
    // 0x205144: 0x3e00008  jr          $ra
label_205148:
    if (ctx->pc == 0x205148u) {
        ctx->pc = 0x205148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205144u;
        // 0x205148: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20514Cu;
        goto label_20514c;
    }
    ctx->pc = 0x205144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205144u;
        // 0x205148: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20514Cu;
label_20514c:
    // 0x20514c: 0x0  nop
    ctx->pc = 0x20514cu;
    // NOP
label_205150:
    // 0x205150: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x205150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_205154:
    // 0x205154: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x205154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_205158:
    // 0x205158: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x205158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_20515c:
    // 0x20515c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x20515cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_205160:
    // 0x205160: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x205160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_205164:
    // 0x205164: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x205164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_205168:
    // 0x205168: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x205168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_20516c:
    // 0x20516c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x20516cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_205170:
    // 0x205170: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x205170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_205174:
    // 0x205174: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x205174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_205178:
    // 0x205178: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_20517c:
    if (ctx->pc == 0x20517Cu) {
        ctx->pc = 0x20517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205178u;
        // 0x20517c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205180u;
        goto label_205180;
    }
    ctx->pc = 0x205178u;
    {
        const bool branch_taken_0x205178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205178u;
        // 0x20517c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205178) {
            ctx->pc = 0x20518Cu;
            goto label_20518c;
        }
    }
    ctx->pc = 0x205180u;
label_205180:
    // 0x205180: 0xc070080  jal         func_1C0200
label_205184:
    if (ctx->pc == 0x205184u) {
        ctx->pc = 0x205184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205180u;
        // 0x205184: 0x240524b0  addiu       $a1, $zero, 0x24B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205188u;
        goto label_205188;
    }
    ctx->pc = 0x205180u;
    SET_GPR_U32(ctx, 31, 0x205188u);
    ctx->pc = 0x205184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205180u;
    // 0x205184: 0x240524b0  addiu       $a1, $zero, 0x24B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x205188u;
label_205188:
    // 0x205188: 0xaf8290f8  sw          $v0, -0x6F08($gp)
    ctx->pc = 0x205188u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938872), GPR_U32(ctx, 2));
label_20518c:
    // 0x20518c: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x20518cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_205190:
    // 0x205190: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x205190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_205194:
    // 0x205194: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x205194u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205198:
    // 0x205198: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x205198u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20519c:
    // 0x20519c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x20519cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2051a0:
    // 0x2051a0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2051a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2051a4:
    // 0x2051a4: 0xac402480  sw          $zero, 0x2480($v0)
    ctx->pc = 0x2051a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9344), GPR_U32(ctx, 0));
label_2051a8:
    // 0x2051a8: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x2051a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_2051ac:
    // 0x2051ac: 0xac402484  sw          $zero, 0x2484($v0)
    ctx->pc = 0x2051acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9348), GPR_U32(ctx, 0));
label_2051b0:
    // 0x2051b0: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x2051b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_2051b4:
    // 0x2051b4: 0xac402488  sw          $zero, 0x2488($v0)
    ctx->pc = 0x2051b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9352), GPR_U32(ctx, 0));
label_2051b8:
    // 0x2051b8: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x2051b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_2051bc:
    // 0x2051bc: 0xac40248c  sw          $zero, 0x248C($v0)
    ctx->pc = 0x2051bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9356), GPR_U32(ctx, 0));
label_2051c0:
    // 0x2051c0: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x2051c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_2051c4:
    // 0x2051c4: 0xac402494  sw          $zero, 0x2494($v0)
    ctx->pc = 0x2051c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9364), GPR_U32(ctx, 0));
label_2051c8:
    // 0x2051c8: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x2051c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_2051cc:
    // 0x2051cc: 0xac402498  sw          $zero, 0x2498($v0)
    ctx->pc = 0x2051ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9368), GPR_U32(ctx, 0));
label_2051d0:
    // 0x2051d0: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x2051d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_2051d4:
    // 0x2051d4: 0xac40249c  sw          $zero, 0x249C($v0)
    ctx->pc = 0x2051d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9372), GPR_U32(ctx, 0));
label_2051d8:
    // 0x2051d8: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x2051d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_2051dc:
    // 0x2051dc: 0xac4024a0  sw          $zero, 0x24A0($v0)
    ctx->pc = 0x2051dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9376), GPR_U32(ctx, 0));
label_2051e0:
    // 0x2051e0: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x2051e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_2051e4:
    // 0x2051e4: 0xac4024a4  sw          $zero, 0x24A4($v0)
    ctx->pc = 0x2051e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9380), GPR_U32(ctx, 0));
label_2051e8:
    // 0x2051e8: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x2051e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_2051ec:
    // 0x2051ec: 0xac4024a8  sw          $zero, 0x24A8($v0)
    ctx->pc = 0x2051ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9384), GPR_U32(ctx, 0));
label_2051f0:
    // 0x2051f0: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x2051f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_2051f4:
    // 0x2051f4: 0xac432490  sw          $v1, 0x2490($v0)
    ctx->pc = 0x2051f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9360), GPR_U32(ctx, 3));
label_2051f8:
    // 0x2051f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2051f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2051fc:
    // 0x2051fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2051fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205200:
    // 0x205200: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x205200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_205204:
    // 0x205204: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x205204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_205208:
    // 0x205208: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x205208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_20520c:
    // 0x20520c: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x20520cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_205210:
    // 0x205210: 0xc05e234  jal         func_1788D0
label_205214:
    if (ctx->pc == 0x205214u) {
        ctx->pc = 0x205214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205210u;
        // 0x205214: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205218u;
        goto label_205218;
    }
    ctx->pc = 0x205210u;
    SET_GPR_U32(ctx, 31, 0x205218u);
    ctx->pc = 0x205214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205210u;
    // 0x205214: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x205210u, 0x205218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205218u;
label_205218:
    // 0x205218: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x205218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_20521c:
    // 0x20521c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x20521cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_205220:
    // 0x205220: 0xc07091c  jal         func_1C2470
label_205224:
    if (ctx->pc == 0x205224u) {
        ctx->pc = 0x205224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205220u;
        // 0x205224: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205228u;
        goto label_205228;
    }
    ctx->pc = 0x205220u;
    SET_GPR_U32(ctx, 31, 0x205228u);
    ctx->pc = 0x205224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205220u;
    // 0x205224: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x205228u;
label_205228:
    // 0x205228: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x205228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20522c:
    // 0x20522c: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x20522cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_205230:
    // 0x205230: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x205230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_205234:
    // 0x205234: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x205234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_205238:
    // 0x205238: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x205238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_20523c:
    // 0x20523c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x20523cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_205240:
    // 0x205240: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x205240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_205244:
    // 0x205244: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x205244u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_205248:
    // 0x205248: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x205248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_20524c:
    // 0x20524c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20524cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205250:
    // 0x205250: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x205250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205254:
    // 0x205254: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x205254u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205258:
    // 0x205258: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x205258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_20525c:
    // 0x20525c: 0x240b00c0  addiu       $t3, $zero, 0xC0
    ctx->pc = 0x20525cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_205260:
    // 0x205260: 0xc05de30  jal         func_1778C0
label_205264:
    if (ctx->pc == 0x205264u) {
        ctx->pc = 0x205264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205260u;
        // 0x205264: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205268u;
        goto label_205268;
    }
    ctx->pc = 0x205260u;
    SET_GPR_U32(ctx, 31, 0x205268u);
    ctx->pc = 0x205264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205260u;
    // 0x205264: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x205260u, 0x205268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205268u;
label_205268:
    // 0x205268: 0xc070834  jal         func_1C20D0
label_20526c:
    if (ctx->pc == 0x20526Cu) {
        ctx->pc = 0x20526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205268u;
        // 0x20526c: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205270u;
        goto label_205270;
    }
    ctx->pc = 0x205268u;
    SET_GPR_U32(ctx, 31, 0x205270u);
    ctx->pc = 0x20526Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205268u;
    // 0x20526c: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x205270u;
label_205270:
    // 0x205270: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x205270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205274:
    // 0x205274: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x205274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_205278:
    // 0x205278: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x205278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20527c:
    // 0x20527c: 0x262400b0  addiu       $a0, $s1, 0xB0
    ctx->pc = 0x20527cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
label_205280:
    // 0x205280: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x205280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_205284:
    // 0x205284: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x205284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_205288:
    // 0x205288: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x205288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20528c:
    // 0x20528c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x20528cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_205290:
    // 0x205290: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x205290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_205294:
    // 0x205294: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x205294u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_205298:
    // 0x205298: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x205298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_20529c:
    // 0x20529c: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x20529cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_2052a0:
    // 0x2052a0: 0x24090158  addiu       $t1, $zero, 0x158
    ctx->pc = 0x2052a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
label_2052a4:
    // 0x2052a4: 0x240a00b0  addiu       $t2, $zero, 0xB0
    ctx->pc = 0x2052a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_2052a8:
    // 0x2052a8: 0xc05de30  jal         func_1778C0
label_2052ac:
    if (ctx->pc == 0x2052ACu) {
        ctx->pc = 0x2052ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052A8u;
        // 0x2052ac: 0x240b0050  addiu       $t3, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2052B0u;
        goto label_2052b0;
    }
    ctx->pc = 0x2052A8u;
    SET_GPR_U32(ctx, 31, 0x2052B0u);
    ctx->pc = 0x2052ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2052A8u;
    // 0x2052ac: 0x240b0050  addiu       $t3, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x2052A8u, 0x2052B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2052B0u;
label_2052b0:
    // 0x2052b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2052b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2052b4:
    // 0x2052b4: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x2052b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
label_2052b8:
    // 0x2052b8: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
label_2052bc:
    if (ctx->pc == 0x2052BCu) {
        ctx->pc = 0x2052BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052B8u;
        // 0x2052bc: 0x265202a0  addiu       $s2, $s2, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2052C0u;
        goto label_2052c0;
    }
    ctx->pc = 0x2052B8u;
    {
        const bool branch_taken_0x2052b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2052BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052B8u;
        // 0x2052bc: 0x265202a0  addiu       $s2, $s2, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2052b8) {
            ctx->pc = 0x205200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205200;
        }
    }
    ctx->pc = 0x2052C0u;
label_2052c0:
    // 0x2052c0: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x2052c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_2052c4:
    // 0x2052c4: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x2052c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_2052c8:
    // 0x2052c8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2052c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2052cc:
    // 0x2052cc: 0x24500fc0  addiu       $s0, $v0, 0xFC0
    ctx->pc = 0x2052ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4032));
label_2052d0:
    // 0x2052d0: 0xc05e234  jal         func_1788D0
label_2052d4:
    if (ctx->pc == 0x2052D4u) {
        ctx->pc = 0x2052D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052D0u;
        // 0x2052d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2052D8u;
        goto label_2052d8;
    }
    ctx->pc = 0x2052D0u;
    SET_GPR_U32(ctx, 31, 0x2052D8u);
    ctx->pc = 0x2052D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2052D0u;
    // 0x2052d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x2052D0u, 0x2052D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2052D8u;
label_2052d8:
    // 0x2052d8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2052d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2052dc:
    // 0x2052dc: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x2052dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2052e0:
    // 0x2052e0: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x2052e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_2052e4:
    // 0x2052e4: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x2052e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_2052e8:
    // 0x2052e8: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x2052e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_2052ec:
    // 0x2052ec: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x2052ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_2052f0:
    // 0x2052f0: 0xc07c1f4  jal         func_1F07D0
label_2052f4:
    if (ctx->pc == 0x2052F4u) {
        ctx->pc = 0x2052F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052F0u;
        // 0x2052f4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2052F8u;
        goto label_2052f8;
    }
    ctx->pc = 0x2052F0u;
    SET_GPR_U32(ctx, 31, 0x2052F8u);
    ctx->pc = 0x2052F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2052F0u;
    // 0x2052f4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F07D0u;
    { ctx->pc = 0x1f07d0; return; }
    ctx->pc = 0x2052F8u;
label_2052f8:
    // 0x2052f8: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x2052f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_2052fc:
    // 0x2052fc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2052fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_205300:
    // 0x205300: 0xc07091c  jal         func_1C2470
label_205304:
    if (ctx->pc == 0x205304u) {
        ctx->pc = 0x205304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205300u;
        // 0x205304: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205308u;
        goto label_205308;
    }
    ctx->pc = 0x205300u;
    SET_GPR_U32(ctx, 31, 0x205308u);
    ctx->pc = 0x205304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205300u;
    // 0x205304: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x205308u;
label_205308:
    // 0x205308: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x205308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20530c:
    // 0x20530c: 0x260405b0  addiu       $a0, $s0, 0x5B0
    ctx->pc = 0x20530cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1456));
label_205310:
    // 0x205310: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x205310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_205314:
    // 0x205314: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x205314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_205318:
    // 0x205318: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x205318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_20531c:
    // 0x20531c: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x20531cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_205320:
    // 0x205320: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x205320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_205324:
    // 0x205324: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x205324u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_205328:
    // 0x205328: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x205328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_20532c:
    // 0x20532c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20532cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205330:
    // 0x205330: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x205330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205334:
    // 0x205334: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x205334u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205338:
    // 0x205338: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x205338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_20533c:
    // 0x20533c: 0x240b00c0  addiu       $t3, $zero, 0xC0
    ctx->pc = 0x20533cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_205340:
    // 0x205340: 0xc05de30  jal         func_1778C0
label_205344:
    if (ctx->pc == 0x205344u) {
        ctx->pc = 0x205344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205340u;
        // 0x205344: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205348u;
        goto label_205348;
    }
    ctx->pc = 0x205340u;
    SET_GPR_U32(ctx, 31, 0x205348u);
    ctx->pc = 0x205344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205340u;
    // 0x205344: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x205340u, 0x205348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205348u;
label_205348:
    // 0x205348: 0xc070834  jal         func_1C20D0
label_20534c:
    if (ctx->pc == 0x20534Cu) {
        ctx->pc = 0x20534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205348u;
        // 0x20534c: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205350u;
        goto label_205350;
    }
    ctx->pc = 0x205348u;
    SET_GPR_U32(ctx, 31, 0x205350u);
    ctx->pc = 0x20534Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205348u;
    // 0x20534c: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x205350u;
label_205350:
    // 0x205350: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x205350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205354:
    // 0x205354: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x205354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
label_205358:
    // 0x205358: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x205358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20535c:
    // 0x20535c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x20535cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_205360:
    // 0x205360: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x205360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_205364:
    // 0x205364: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x205364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_205368:
    // 0x205368: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x205368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20536c:
    // 0x20536c: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x20536cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_205370:
    // 0x205370: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x205370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_205374:
    // 0x205374: 0x24090158  addiu       $t1, $zero, 0x158
    ctx->pc = 0x205374u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
label_205378:
    // 0x205378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x205378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20537c:
    // 0x20537c: 0x240a00b0  addiu       $t2, $zero, 0xB0
    ctx->pc = 0x20537cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_205380:
    // 0x205380: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x205380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_205384:
    // 0x205384: 0x240b0050  addiu       $t3, $zero, 0x50
    ctx->pc = 0x205384u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_205388:
    // 0x205388: 0xc05de30  jal         func_1778C0
label_20538c:
    if (ctx->pc == 0x20538Cu) {
        ctx->pc = 0x20538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205388u;
        // 0x20538c: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205390u;
        goto label_205390;
    }
    ctx->pc = 0x205388u;
    SET_GPR_U32(ctx, 31, 0x205390u);
    ctx->pc = 0x20538Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205388u;
    // 0x20538c: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x205388u, 0x205390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205390u;
label_205390:
    // 0x205390: 0xc07082c  jal         func_1C20B0
label_205394:
    if (ctx->pc == 0x205394u) {
        ctx->pc = 0x205394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205390u;
        // 0x205394: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205398u;
        goto label_205398;
    }
    ctx->pc = 0x205390u;
    SET_GPR_U32(ctx, 31, 0x205398u);
    ctx->pc = 0x205394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205390u;
    // 0x205394: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    { ctx->pc = 0x1c20b0; return; }
    ctx->pc = 0x205398u;
label_205398:
    // 0x205398: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x205398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20539c:
    // 0x20539c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20539cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2053a0:
    // 0x2053a0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2053a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2053a4:
    // 0x2053a4: 0x260406f0  addiu       $a0, $s0, 0x6F0
    ctx->pc = 0x2053a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1776));
label_2053a8:
    // 0x2053a8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2053a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_2053ac:
    // 0x2053ac: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x2053acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2053b0:
    // 0x2053b0: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x2053b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_2053b4:
    // 0x2053b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2053b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2053b8:
    // 0x2053b8: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x2053b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_2053bc:
    // 0x2053bc: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x2053bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_2053c0:
    // 0x2053c0: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x2053c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_2053c4:
    // 0x2053c4: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x2053c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_2053c8:
    // 0x2053c8: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x2053c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2053cc:
    // 0x2053cc: 0x240a0168  addiu       $t2, $zero, 0x168
    ctx->pc = 0x2053ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_2053d0:
    // 0x2053d0: 0xc05de30  jal         func_1778C0
label_2053d4:
    if (ctx->pc == 0x2053D4u) {
        ctx->pc = 0x2053D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053D0u;
        // 0x2053d4: 0x240b0070  addiu       $t3, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2053D8u;
        goto label_2053d8;
    }
    ctx->pc = 0x2053D0u;
    SET_GPR_U32(ctx, 31, 0x2053D8u);
    ctx->pc = 0x2053D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2053D0u;
    // 0x2053d4: 0x240b0070  addiu       $t3, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x2053D0u, 0x2053D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2053D8u;
label_2053d8:
    // 0x2053d8: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x2053d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_2053dc:
    // 0x2053dc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2053dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2053e0:
    // 0x2053e0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2053e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2053e4:
    // 0x2053e4: 0x24500d20  addiu       $s0, $v0, 0xD20
    ctx->pc = 0x2053e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3360));
label_2053e8:
    // 0x2053e8: 0xc05e234  jal         func_1788D0
label_2053ec:
    if (ctx->pc == 0x2053ECu) {
        ctx->pc = 0x2053ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053E8u;
        // 0x2053ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2053F0u;
        goto label_2053f0;
    }
    ctx->pc = 0x2053E8u;
    SET_GPR_U32(ctx, 31, 0x2053F0u);
    ctx->pc = 0x2053ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2053E8u;
    // 0x2053ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x2053E8u, 0x2053F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2053F0u;
label_2053f0:
    // 0x2053f0: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x2053f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_2053f4:
    // 0x2053f4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2053f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2053f8:
    // 0x2053f8: 0xc07091c  jal         func_1C2470
label_2053fc:
    if (ctx->pc == 0x2053FCu) {
        ctx->pc = 0x2053FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053F8u;
        // 0x2053fc: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205400u;
        goto label_205400;
    }
    ctx->pc = 0x2053F8u;
    SET_GPR_U32(ctx, 31, 0x205400u);
    ctx->pc = 0x2053FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2053F8u;
    // 0x2053fc: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x205400u;
label_205400:
    // 0x205400: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x205400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205404:
    // 0x205404: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x205404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_205408:
    // 0x205408: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x205408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20540c:
    // 0x20540c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x20540cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_205410:
    // 0x205410: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x205410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_205414:
    // 0x205414: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x205414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_205418:
    // 0x205418: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x205418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20541c:
    // 0x20541c: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x20541cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_205420:
    // 0x205420: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x205420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_205424:
    // 0x205424: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x205424u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205428:
    // 0x205428: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x205428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20542c:
    // 0x20542c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20542cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205430:
    // 0x205430: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x205430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_205434:
    // 0x205434: 0x240b00c0  addiu       $t3, $zero, 0xC0
    ctx->pc = 0x205434u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_205438:
    // 0x205438: 0xc05de30  jal         func_1778C0
label_20543c:
    if (ctx->pc == 0x20543Cu) {
        ctx->pc = 0x20543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205438u;
        // 0x20543c: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205440u;
        goto label_205440;
    }
    ctx->pc = 0x205438u;
    SET_GPR_U32(ctx, 31, 0x205440u);
    ctx->pc = 0x20543Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205438u;
    // 0x20543c: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x205438u, 0x205440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205440u;
label_205440:
    // 0x205440: 0xc070834  jal         func_1C20D0
label_205444:
    if (ctx->pc == 0x205444u) {
        ctx->pc = 0x205444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205440u;
        // 0x205444: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205448u;
        goto label_205448;
    }
    ctx->pc = 0x205440u;
    SET_GPR_U32(ctx, 31, 0x205448u);
    ctx->pc = 0x205444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205440u;
    // 0x205444: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x205448u;
label_205448:
    // 0x205448: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x205448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20544c:
    // 0x20544c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20544cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_205450:
    // 0x205450: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x205450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_205454:
    // 0x205454: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x205454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_205458:
    // 0x205458: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x205458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_20545c:
    // 0x20545c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x20545cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_205460:
    // 0x205460: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x205460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205464:
    // 0x205464: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x205464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_205468:
    // 0x205468: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x205468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_20546c:
    // 0x20546c: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x20546cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_205470:
    // 0x205470: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x205470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_205474:
    // 0x205474: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x205474u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_205478:
    // 0x205478: 0x24090158  addiu       $t1, $zero, 0x158
    ctx->pc = 0x205478u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
label_20547c:
    // 0x20547c: 0x240a00b0  addiu       $t2, $zero, 0xB0
    ctx->pc = 0x20547cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_205480:
    // 0x205480: 0xc05de30  jal         func_1778C0
label_205484:
    if (ctx->pc == 0x205484u) {
        ctx->pc = 0x205484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205480u;
        // 0x205484: 0x240b0050  addiu       $t3, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205488u;
        goto label_205488;
    }
    ctx->pc = 0x205480u;
    SET_GPR_U32(ctx, 31, 0x205488u);
    ctx->pc = 0x205484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205480u;
    // 0x205484: 0x240b0050  addiu       $t3, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x205480u, 0x205488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205488u;
label_205488:
    // 0x205488: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x205488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_20548c:
    // 0x20548c: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x20548cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_205490:
    // 0x205490: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x205490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_205494:
    // 0x205494: 0x24501ee0  addiu       $s0, $v0, 0x1EE0
    ctx->pc = 0x205494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7904));
label_205498:
    // 0x205498: 0xc05e234  jal         func_1788D0
label_20549c:
    if (ctx->pc == 0x20549Cu) {
        ctx->pc = 0x20549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205498u;
        // 0x20549c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2054A0u;
        goto label_2054a0;
    }
    ctx->pc = 0x205498u;
    SET_GPR_U32(ctx, 31, 0x2054A0u);
    ctx->pc = 0x20549Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205498u;
    // 0x20549c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x205498u, 0x2054A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2054A0u;
label_2054a0:
    // 0x2054a0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2054a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2054a4:
    // 0x2054a4: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x2054a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2054a8:
    // 0x2054a8: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x2054a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_2054ac:
    // 0x2054ac: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x2054acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_2054b0:
    // 0x2054b0: 0x24080078  addiu       $t0, $zero, 0x78
    ctx->pc = 0x2054b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_2054b4:
    // 0x2054b4: 0x24090050  addiu       $t1, $zero, 0x50
    ctx->pc = 0x2054b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2054b8:
    // 0x2054b8: 0xc07c084  jal         func_1F0210
label_2054bc:
    if (ctx->pc == 0x2054BCu) {
        ctx->pc = 0x2054BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054B8u;
        // 0x2054bc: 0x240a000c  addiu       $t2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2054C0u;
        goto label_2054c0;
    }
    ctx->pc = 0x2054B8u;
    SET_GPR_U32(ctx, 31, 0x2054C0u);
    ctx->pc = 0x2054BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2054B8u;
    // 0x2054bc: 0x240a000c  addiu       $t2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0210u;
    { ctx->pc = 0x1f0210; return; }
    ctx->pc = 0x2054C0u;
label_2054c0:
    // 0x2054c0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2054c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2054c4:
    // 0x2054c4: 0x26730150  addiu       $s3, $s3, 0x150
    ctx->pc = 0x2054c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 336));
label_2054c8:
    // 0x2054c8: 0x2ac30002  slti        $v1, $s6, 0x2
    ctx->pc = 0x2054c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
label_2054cc:
    // 0x2054cc: 0x26b50790  addiu       $s5, $s5, 0x790
    ctx->pc = 0x2054ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1936));
label_2054d0:
    // 0x2054d0: 0x1460ff49  bnez        $v1, . + 4 + (-0xB7 << 2)
label_2054d4:
    if (ctx->pc == 0x2054D4u) {
        ctx->pc = 0x2054D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054D0u;
        // 0x2054d4: 0x269402d0  addiu       $s4, $s4, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2054D8u;
        goto label_2054d8;
    }
    ctx->pc = 0x2054D0u;
    {
        const bool branch_taken_0x2054d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2054D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054D0u;
        // 0x2054d4: 0x269402d0  addiu       $s4, $s4, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2054d0) {
            ctx->pc = 0x2051F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2051f8;
        }
    }
    ctx->pc = 0x2054D8u;
label_2054d8:
    // 0x2054d8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2054d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2054dc:
    // 0x2054dc: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x2054dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2054e0:
    // 0x2054e0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2054e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2054e4:
    // 0x2054e4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2054e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2054e8:
    // 0x2054e8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2054e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2054ec:
    // 0x2054ec: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2054ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2054f0:
    // 0x2054f0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2054f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2054f4:
    // 0x2054f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2054f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2054f8:
    // 0x2054f8: 0x3e00008  jr          $ra
label_2054fc:
    if (ctx->pc == 0x2054FCu) {
        ctx->pc = 0x2054FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054F8u;
        // 0x2054fc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205500u;
        goto label_205500;
    }
    ctx->pc = 0x2054F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2054FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054F8u;
        // 0x2054fc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2054F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205500u;
label_205500:
    // 0x205500: 0x8f8490f8  lw          $a0, -0x6F08($gp)
    ctx->pc = 0x205500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_205504:
    // 0x205504: 0x1080003a  beqz        $a0, . + 4 + (0x3A << 2)
label_205508:
    if (ctx->pc == 0x205508u) {
        ctx->pc = 0x20550Cu;
        goto label_20550c;
    }
    ctx->pc = 0x205504u;
    {
        const bool branch_taken_0x205504 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x205504) {
            ctx->pc = 0x2055F0u;
            { ctx->pc = 0x2055f0; return; }
        }
    }
    ctx->pc = 0x20550Cu;
label_20550c:
    // 0x20550c: 0x8c832484  lw          $v1, 0x2484($a0)
    ctx->pc = 0x20550cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 9348)));
label_205510:
    // 0x205510: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_205514:
    if (ctx->pc == 0x205514u) {
        ctx->pc = 0x205518u;
        goto label_205518;
    }
    ctx->pc = 0x205510u;
    {
        const bool branch_taken_0x205510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x205510) {
            ctx->pc = 0x20553Cu;
            { ctx->pc = 0x20553c; return; }
        }
    }
    ctx->pc = 0x205518u;
label_205518:
    // 0x205518: 0x8c83248c  lw          $v1, 0x248C($a0)
    ctx->pc = 0x205518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 9356)));
label_20551c:
    // 0x20551c: 0x2485248c  addiu       $a1, $a0, 0x248C
    ctx->pc = 0x20551cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 9356));
label_205520:
    // 0x205520: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x205520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_205524:
    // 0x205524: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
label_205528:
    if (ctx->pc == 0x205528u) {
        ctx->pc = 0x205528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205524u;
        // 0x205528: 0x3083003f  andi        $v1, $a0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20552Cu;
        goto label_20552c;
    }
    ctx->pc = 0x205524u;
    {
        const bool branch_taken_0x205524 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x205528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205524u;
        // 0x205528: 0x3083003f  andi        $v1, $a0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205524) {
            ctx->pc = 0x205538u;
            { ctx->pc = 0x205538; return; }
        }
    }
    ctx->pc = 0x20552Cu;
label_20552c:
    // 0x20552c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_205530:
    if (ctx->pc == 0x205530u) {
        ctx->pc = 0x205534u;
        goto label_205534;
    }
    ctx->pc = 0x20552Cu;
    {
        const bool branch_taken_0x20552c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20552c) {
            ctx->pc = 0x205538u;
            { ctx->pc = 0x205538; return; }
        }
    }
    ctx->pc = 0x205534u;
label_205534:
    // 0x205534: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x205534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
    ctx->pc = 0x205538u;
    return;
}

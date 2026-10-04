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


void FUN_0019b8d0_part274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x220da0u: goto label_220da0;
        case 0x220da4u: goto label_220da4;
        case 0x220da8u: goto label_220da8;
        case 0x220dacu: goto label_220dac;
        case 0x220db0u: goto label_220db0;
        case 0x220db4u: goto label_220db4;
        case 0x220db8u: goto label_220db8;
        case 0x220dbcu: goto label_220dbc;
        case 0x220dc0u: goto label_220dc0;
        case 0x220dc4u: goto label_220dc4;
        case 0x220dc8u: goto label_220dc8;
        case 0x220dccu: goto label_220dcc;
        case 0x220dd0u: goto label_220dd0;
        case 0x220dd4u: goto label_220dd4;
        case 0x220dd8u: goto label_220dd8;
        case 0x220ddcu: goto label_220ddc;
        case 0x220de0u: goto label_220de0;
        case 0x220de4u: goto label_220de4;
        case 0x220de8u: goto label_220de8;
        case 0x220decu: goto label_220dec;
        case 0x220df0u: goto label_220df0;
        case 0x220df4u: goto label_220df4;
        case 0x220df8u: goto label_220df8;
        case 0x220dfcu: goto label_220dfc;
        case 0x220e00u: goto label_220e00;
        case 0x220e04u: goto label_220e04;
        case 0x220e08u: goto label_220e08;
        case 0x220e0cu: goto label_220e0c;
        case 0x220e10u: goto label_220e10;
        case 0x220e14u: goto label_220e14;
        case 0x220e18u: goto label_220e18;
        case 0x220e1cu: goto label_220e1c;
        case 0x220e20u: goto label_220e20;
        case 0x220e24u: goto label_220e24;
        case 0x220e28u: goto label_220e28;
        case 0x220e2cu: goto label_220e2c;
        case 0x220e30u: goto label_220e30;
        case 0x220e34u: goto label_220e34;
        case 0x220e38u: goto label_220e38;
        case 0x220e3cu: goto label_220e3c;
        case 0x220e40u: goto label_220e40;
        case 0x220e44u: goto label_220e44;
        case 0x220e48u: goto label_220e48;
        case 0x220e4cu: goto label_220e4c;
        case 0x220e50u: goto label_220e50;
        case 0x220e54u: goto label_220e54;
        case 0x220e58u: goto label_220e58;
        case 0x220e5cu: goto label_220e5c;
        case 0x220e60u: goto label_220e60;
        case 0x220e64u: goto label_220e64;
        case 0x220e68u: goto label_220e68;
        case 0x220e6cu: goto label_220e6c;
        case 0x220e70u: goto label_220e70;
        case 0x220e74u: goto label_220e74;
        case 0x220e78u: goto label_220e78;
        case 0x220e7cu: goto label_220e7c;
        case 0x220e80u: goto label_220e80;
        case 0x220e84u: goto label_220e84;
        case 0x220e88u: goto label_220e88;
        case 0x220e8cu: goto label_220e8c;
        case 0x220e90u: goto label_220e90;
        case 0x220e94u: goto label_220e94;
        case 0x220e98u: goto label_220e98;
        case 0x220e9cu: goto label_220e9c;
        case 0x220ea0u: goto label_220ea0;
        case 0x220ea4u: goto label_220ea4;
        case 0x220ea8u: goto label_220ea8;
        case 0x220eacu: goto label_220eac;
        case 0x220eb0u: goto label_220eb0;
        case 0x220eb4u: goto label_220eb4;
        case 0x220eb8u: goto label_220eb8;
        case 0x220ebcu: goto label_220ebc;
        case 0x220ec0u: goto label_220ec0;
        case 0x220ec4u: goto label_220ec4;
        case 0x220ec8u: goto label_220ec8;
        case 0x220eccu: goto label_220ecc;
        case 0x220ed0u: goto label_220ed0;
        case 0x220ed4u: goto label_220ed4;
        case 0x220ed8u: goto label_220ed8;
        case 0x220edcu: goto label_220edc;
        case 0x220ee0u: goto label_220ee0;
        case 0x220ee4u: goto label_220ee4;
        case 0x220ee8u: goto label_220ee8;
        case 0x220eecu: goto label_220eec;
        case 0x220ef0u: goto label_220ef0;
        case 0x220ef4u: goto label_220ef4;
        case 0x220ef8u: goto label_220ef8;
        case 0x220efcu: goto label_220efc;
        case 0x220f00u: goto label_220f00;
        case 0x220f04u: goto label_220f04;
        case 0x220f08u: goto label_220f08;
        case 0x220f0cu: goto label_220f0c;
        case 0x220f10u: goto label_220f10;
        case 0x220f14u: goto label_220f14;
        case 0x220f18u: goto label_220f18;
        case 0x220f1cu: goto label_220f1c;
        case 0x220f20u: goto label_220f20;
        case 0x220f24u: goto label_220f24;
        case 0x220f28u: goto label_220f28;
        case 0x220f2cu: goto label_220f2c;
        case 0x220f30u: goto label_220f30;
        case 0x220f34u: goto label_220f34;
        case 0x220f38u: goto label_220f38;
        case 0x220f3cu: goto label_220f3c;
        case 0x220f40u: goto label_220f40;
        case 0x220f44u: goto label_220f44;
        case 0x220f48u: goto label_220f48;
        case 0x220f4cu: goto label_220f4c;
        case 0x220f50u: goto label_220f50;
        case 0x220f54u: goto label_220f54;
        case 0x220f58u: goto label_220f58;
        case 0x220f5cu: goto label_220f5c;
        case 0x220f60u: goto label_220f60;
        case 0x220f64u: goto label_220f64;
        case 0x220f68u: goto label_220f68;
        case 0x220f6cu: goto label_220f6c;
        case 0x220f70u: goto label_220f70;
        case 0x220f74u: goto label_220f74;
        case 0x220f78u: goto label_220f78;
        case 0x220f7cu: goto label_220f7c;
        case 0x220f80u: goto label_220f80;
        case 0x220f84u: goto label_220f84;
        case 0x220f88u: goto label_220f88;
        case 0x220f8cu: goto label_220f8c;
        case 0x220f90u: goto label_220f90;
        case 0x220f94u: goto label_220f94;
        case 0x220f98u: goto label_220f98;
        case 0x220f9cu: goto label_220f9c;
        case 0x220fa0u: goto label_220fa0;
        case 0x220fa4u: goto label_220fa4;
        case 0x220fa8u: goto label_220fa8;
        case 0x220facu: goto label_220fac;
        case 0x220fb0u: goto label_220fb0;
        case 0x220fb4u: goto label_220fb4;
        case 0x220fb8u: goto label_220fb8;
        case 0x220fbcu: goto label_220fbc;
        case 0x220fc0u: goto label_220fc0;
        case 0x220fc4u: goto label_220fc4;
        case 0x220fc8u: goto label_220fc8;
        case 0x220fccu: goto label_220fcc;
        case 0x220fd0u: goto label_220fd0;
        case 0x220fd4u: goto label_220fd4;
        case 0x220fd8u: goto label_220fd8;
        case 0x220fdcu: goto label_220fdc;
        case 0x220fe0u: goto label_220fe0;
        case 0x220fe4u: goto label_220fe4;
        case 0x220fe8u: goto label_220fe8;
        case 0x220fecu: goto label_220fec;
        case 0x220ff0u: goto label_220ff0;
        case 0x220ff4u: goto label_220ff4;
        case 0x220ff8u: goto label_220ff8;
        case 0x220ffcu: goto label_220ffc;
        case 0x221000u: goto label_221000;
        case 0x221004u: goto label_221004;
        case 0x221008u: goto label_221008;
        case 0x22100cu: goto label_22100c;
        case 0x221010u: goto label_221010;
        case 0x221014u: goto label_221014;
        case 0x221018u: goto label_221018;
        case 0x22101cu: goto label_22101c;
        case 0x221020u: goto label_221020;
        case 0x221024u: goto label_221024;
        case 0x221028u: goto label_221028;
        case 0x22102cu: goto label_22102c;
        case 0x221030u: goto label_221030;
        case 0x221034u: goto label_221034;
        case 0x221038u: goto label_221038;
        case 0x22103cu: goto label_22103c;
        case 0x221040u: goto label_221040;
        case 0x221044u: goto label_221044;
        case 0x221048u: goto label_221048;
        case 0x22104cu: goto label_22104c;
        case 0x221050u: goto label_221050;
        case 0x221054u: goto label_221054;
        case 0x221058u: goto label_221058;
        case 0x22105cu: goto label_22105c;
        case 0x221060u: goto label_221060;
        case 0x221064u: goto label_221064;
        case 0x221068u: goto label_221068;
        case 0x22106cu: goto label_22106c;
        case 0x221070u: goto label_221070;
        case 0x221074u: goto label_221074;
        case 0x221078u: goto label_221078;
        case 0x22107cu: goto label_22107c;
        case 0x221080u: goto label_221080;
        case 0x221084u: goto label_221084;
        case 0x221088u: goto label_221088;
        case 0x22108cu: goto label_22108c;
        case 0x221090u: goto label_221090;
        case 0x221094u: goto label_221094;
        case 0x221098u: goto label_221098;
        case 0x22109cu: goto label_22109c;
        case 0x2210a0u: goto label_2210a0;
        case 0x2210a4u: goto label_2210a4;
        case 0x2210a8u: goto label_2210a8;
        case 0x2210acu: goto label_2210ac;
        case 0x2210b0u: goto label_2210b0;
        case 0x2210b4u: goto label_2210b4;
        case 0x2210b8u: goto label_2210b8;
        case 0x2210bcu: goto label_2210bc;
        case 0x2210c0u: goto label_2210c0;
        case 0x2210c4u: goto label_2210c4;
        case 0x2210c8u: goto label_2210c8;
        case 0x2210ccu: goto label_2210cc;
        case 0x2210d0u: goto label_2210d0;
        case 0x2210d4u: goto label_2210d4;
        case 0x2210d8u: goto label_2210d8;
        case 0x2210dcu: goto label_2210dc;
        case 0x2210e0u: goto label_2210e0;
        case 0x2210e4u: goto label_2210e4;
        case 0x2210e8u: goto label_2210e8;
        case 0x2210ecu: goto label_2210ec;
        case 0x2210f0u: goto label_2210f0;
        case 0x2210f4u: goto label_2210f4;
        case 0x2210f8u: goto label_2210f8;
        case 0x2210fcu: goto label_2210fc;
        case 0x221100u: goto label_221100;
        case 0x221104u: goto label_221104;
        case 0x221108u: goto label_221108;
        case 0x22110cu: goto label_22110c;
        case 0x221110u: goto label_221110;
        case 0x221114u: goto label_221114;
        case 0x221118u: goto label_221118;
        case 0x22111cu: goto label_22111c;
        case 0x221120u: goto label_221120;
        case 0x221124u: goto label_221124;
        case 0x221128u: goto label_221128;
        case 0x22112cu: goto label_22112c;
        case 0x221130u: goto label_221130;
        case 0x221134u: goto label_221134;
        case 0x221138u: goto label_221138;
        case 0x22113cu: goto label_22113c;
        case 0x221140u: goto label_221140;
        case 0x221144u: goto label_221144;
        case 0x221148u: goto label_221148;
        case 0x22114cu: goto label_22114c;
        case 0x221150u: goto label_221150;
        case 0x221154u: goto label_221154;
        case 0x221158u: goto label_221158;
        case 0x22115cu: goto label_22115c;
        case 0x221160u: goto label_221160;
        case 0x221164u: goto label_221164;
        case 0x221168u: goto label_221168;
        case 0x22116cu: goto label_22116c;
        case 0x221170u: goto label_221170;
        case 0x221174u: goto label_221174;
        case 0x221178u: goto label_221178;
        case 0x22117cu: goto label_22117c;
        case 0x221180u: goto label_221180;
        case 0x221184u: goto label_221184;
        case 0x221188u: goto label_221188;
        case 0x22118cu: goto label_22118c;
        case 0x221190u: goto label_221190;
        case 0x221194u: goto label_221194;
        case 0x221198u: goto label_221198;
        case 0x22119cu: goto label_22119c;
        case 0x2211a0u: goto label_2211a0;
        case 0x2211a4u: goto label_2211a4;
        case 0x2211a8u: goto label_2211a8;
        case 0x2211acu: goto label_2211ac;
        case 0x2211b0u: goto label_2211b0;
        case 0x2211b4u: goto label_2211b4;
        case 0x2211b8u: goto label_2211b8;
        case 0x2211bcu: goto label_2211bc;
        case 0x2211c0u: goto label_2211c0;
        case 0x2211c4u: goto label_2211c4;
        case 0x2211c8u: goto label_2211c8;
        case 0x2211ccu: goto label_2211cc;
        case 0x2211d0u: goto label_2211d0;
        case 0x2211d4u: goto label_2211d4;
        case 0x2211d8u: goto label_2211d8;
        case 0x2211dcu: goto label_2211dc;
        case 0x2211e0u: goto label_2211e0;
        case 0x2211e4u: goto label_2211e4;
        case 0x2211e8u: goto label_2211e8;
        case 0x2211ecu: goto label_2211ec;
        case 0x2211f0u: goto label_2211f0;
        case 0x2211f4u: goto label_2211f4;
        case 0x2211f8u: goto label_2211f8;
        case 0x2211fcu: goto label_2211fc;
        case 0x221200u: goto label_221200;
        case 0x221204u: goto label_221204;
        case 0x221208u: goto label_221208;
        case 0x22120cu: goto label_22120c;
        case 0x221210u: goto label_221210;
        case 0x221214u: goto label_221214;
        case 0x221218u: goto label_221218;
        case 0x22121cu: goto label_22121c;
        case 0x221220u: goto label_221220;
        case 0x221224u: goto label_221224;
        case 0x221228u: goto label_221228;
        case 0x22122cu: goto label_22122c;
        case 0x221230u: goto label_221230;
        case 0x221234u: goto label_221234;
        case 0x221238u: goto label_221238;
        case 0x22123cu: goto label_22123c;
        case 0x221240u: goto label_221240;
        case 0x221244u: goto label_221244;
        case 0x221248u: goto label_221248;
        case 0x22124cu: goto label_22124c;
        case 0x221250u: goto label_221250;
        case 0x221254u: goto label_221254;
        case 0x221258u: goto label_221258;
        case 0x22125cu: goto label_22125c;
        case 0x221260u: goto label_221260;
        case 0x221264u: goto label_221264;
        case 0x221268u: goto label_221268;
        case 0x22126cu: goto label_22126c;
        case 0x221270u: goto label_221270;
        case 0x221274u: goto label_221274;
        case 0x221278u: goto label_221278;
        case 0x22127cu: goto label_22127c;
        case 0x221280u: goto label_221280;
        case 0x221284u: goto label_221284;
        case 0x221288u: goto label_221288;
        case 0x22128cu: goto label_22128c;
        case 0x221290u: goto label_221290;
        case 0x221294u: goto label_221294;
        case 0x221298u: goto label_221298;
        case 0x22129cu: goto label_22129c;
        case 0x2212a0u: goto label_2212a0;
        case 0x2212a4u: goto label_2212a4;
        case 0x2212a8u: goto label_2212a8;
        case 0x2212acu: goto label_2212ac;
        case 0x2212b0u: goto label_2212b0;
        case 0x2212b4u: goto label_2212b4;
        case 0x2212b8u: goto label_2212b8;
        case 0x2212bcu: goto label_2212bc;
        case 0x2212c0u: goto label_2212c0;
        case 0x2212c4u: goto label_2212c4;
        case 0x2212c8u: goto label_2212c8;
        case 0x2212ccu: goto label_2212cc;
        case 0x2212d0u: goto label_2212d0;
        case 0x2212d4u: goto label_2212d4;
        case 0x2212d8u: goto label_2212d8;
        case 0x2212dcu: goto label_2212dc;
        case 0x2212e0u: goto label_2212e0;
        case 0x2212e4u: goto label_2212e4;
        case 0x2212e8u: goto label_2212e8;
        case 0x2212ecu: goto label_2212ec;
        case 0x2212f0u: goto label_2212f0;
        case 0x2212f4u: goto label_2212f4;
        case 0x2212f8u: goto label_2212f8;
        case 0x2212fcu: goto label_2212fc;
        case 0x221300u: goto label_221300;
        case 0x221304u: goto label_221304;
        case 0x221308u: goto label_221308;
        case 0x22130cu: goto label_22130c;
        case 0x221310u: goto label_221310;
        case 0x221314u: goto label_221314;
        case 0x221318u: goto label_221318;
        case 0x22131cu: goto label_22131c;
        case 0x221320u: goto label_221320;
        case 0x221324u: goto label_221324;
        case 0x221328u: goto label_221328;
        case 0x22132cu: goto label_22132c;
        case 0x221330u: goto label_221330;
        case 0x221334u: goto label_221334;
        case 0x221338u: goto label_221338;
        case 0x22133cu: goto label_22133c;
        case 0x221340u: goto label_221340;
        case 0x221344u: goto label_221344;
        case 0x221348u: goto label_221348;
        case 0x22134cu: goto label_22134c;
        case 0x221350u: goto label_221350;
        case 0x221354u: goto label_221354;
        case 0x221358u: goto label_221358;
        case 0x22135cu: goto label_22135c;
        case 0x221360u: goto label_221360;
        case 0x221364u: goto label_221364;
        case 0x221368u: goto label_221368;
        case 0x22136cu: goto label_22136c;
        case 0x221370u: goto label_221370;
        case 0x221374u: goto label_221374;
        case 0x221378u: goto label_221378;
        case 0x22137cu: goto label_22137c;
        case 0x221380u: goto label_221380;
        case 0x221384u: goto label_221384;
        case 0x221388u: goto label_221388;
        case 0x22138cu: goto label_22138c;
        case 0x221390u: goto label_221390;
        case 0x221394u: goto label_221394;
        case 0x221398u: goto label_221398;
        case 0x22139cu: goto label_22139c;
        case 0x2213a0u: goto label_2213a0;
        case 0x2213a4u: goto label_2213a4;
        case 0x2213a8u: goto label_2213a8;
        case 0x2213acu: goto label_2213ac;
        case 0x2213b0u: goto label_2213b0;
        case 0x2213b4u: goto label_2213b4;
        case 0x2213b8u: goto label_2213b8;
        case 0x2213bcu: goto label_2213bc;
        case 0x2213c0u: goto label_2213c0;
        case 0x2213c4u: goto label_2213c4;
        case 0x2213c8u: goto label_2213c8;
        case 0x2213ccu: goto label_2213cc;
        case 0x2213d0u: goto label_2213d0;
        case 0x2213d4u: goto label_2213d4;
        case 0x2213d8u: goto label_2213d8;
        case 0x2213dcu: goto label_2213dc;
        case 0x2213e0u: goto label_2213e0;
        case 0x2213e4u: goto label_2213e4;
        case 0x2213e8u: goto label_2213e8;
        case 0x2213ecu: goto label_2213ec;
        case 0x2213f0u: goto label_2213f0;
        case 0x2213f4u: goto label_2213f4;
        case 0x2213f8u: goto label_2213f8;
        case 0x2213fcu: goto label_2213fc;
        case 0x221400u: goto label_221400;
        case 0x221404u: goto label_221404;
        case 0x221408u: goto label_221408;
        case 0x22140cu: goto label_22140c;
        case 0x221410u: goto label_221410;
        case 0x221414u: goto label_221414;
        case 0x221418u: goto label_221418;
        case 0x22141cu: goto label_22141c;
        case 0x221420u: goto label_221420;
        case 0x221424u: goto label_221424;
        case 0x221428u: goto label_221428;
        case 0x22142cu: goto label_22142c;
        case 0x221430u: goto label_221430;
        case 0x221434u: goto label_221434;
        case 0x221438u: goto label_221438;
        case 0x22143cu: goto label_22143c;
        case 0x221440u: goto label_221440;
        case 0x221444u: goto label_221444;
        case 0x221448u: goto label_221448;
        case 0x22144cu: goto label_22144c;
        case 0x221450u: goto label_221450;
        case 0x221454u: goto label_221454;
        case 0x221458u: goto label_221458;
        case 0x22145cu: goto label_22145c;
        case 0x221460u: goto label_221460;
        case 0x221464u: goto label_221464;
        case 0x221468u: goto label_221468;
        case 0x22146cu: goto label_22146c;
        case 0x221470u: goto label_221470;
        case 0x221474u: goto label_221474;
        case 0x221478u: goto label_221478;
        case 0x22147cu: goto label_22147c;
        case 0x221480u: goto label_221480;
        case 0x221484u: goto label_221484;
        case 0x221488u: goto label_221488;
        case 0x22148cu: goto label_22148c;
        case 0x221490u: goto label_221490;
        case 0x221494u: goto label_221494;
        case 0x221498u: goto label_221498;
        case 0x22149cu: goto label_22149c;
        case 0x2214a0u: goto label_2214a0;
        case 0x2214a4u: goto label_2214a4;
        case 0x2214a8u: goto label_2214a8;
        case 0x2214acu: goto label_2214ac;
        case 0x2214b0u: goto label_2214b0;
        case 0x2214b4u: goto label_2214b4;
        case 0x2214b8u: goto label_2214b8;
        case 0x2214bcu: goto label_2214bc;
        case 0x2214c0u: goto label_2214c0;
        case 0x2214c4u: goto label_2214c4;
        case 0x2214c8u: goto label_2214c8;
        case 0x2214ccu: goto label_2214cc;
        case 0x2214d0u: goto label_2214d0;
        case 0x2214d4u: goto label_2214d4;
        case 0x2214d8u: goto label_2214d8;
        case 0x2214dcu: goto label_2214dc;
        case 0x2214e0u: goto label_2214e0;
        case 0x2214e4u: goto label_2214e4;
        case 0x2214e8u: goto label_2214e8;
        case 0x2214ecu: goto label_2214ec;
        case 0x2214f0u: goto label_2214f0;
        case 0x2214f4u: goto label_2214f4;
        case 0x2214f8u: goto label_2214f8;
        case 0x2214fcu: goto label_2214fc;
        case 0x221500u: goto label_221500;
        case 0x221504u: goto label_221504;
        case 0x221508u: goto label_221508;
        case 0x22150cu: goto label_22150c;
        case 0x221510u: goto label_221510;
        case 0x221514u: goto label_221514;
        case 0x221518u: goto label_221518;
        case 0x22151cu: goto label_22151c;
        case 0x221520u: goto label_221520;
        case 0x221524u: goto label_221524;
        case 0x221528u: goto label_221528;
        case 0x22152cu: goto label_22152c;
        case 0x221530u: goto label_221530;
        case 0x221534u: goto label_221534;
        case 0x221538u: goto label_221538;
        case 0x22153cu: goto label_22153c;
        case 0x221540u: goto label_221540;
        case 0x221544u: goto label_221544;
        case 0x221548u: goto label_221548;
        case 0x22154cu: goto label_22154c;
        case 0x221550u: goto label_221550;
        case 0x221554u: goto label_221554;
        case 0x221558u: goto label_221558;
        case 0x22155cu: goto label_22155c;
        case 0x221560u: goto label_221560;
        case 0x221564u: goto label_221564;
        case 0x221568u: goto label_221568;
        case 0x22156cu: goto label_22156c;
        default: return;
    }

label_220da0:
    // 0x220da0: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x220da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_220da4:
    // 0x220da4: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x220da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_220da8:
    // 0x220da8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x220da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_220dac:
    // 0x220dac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220dacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220db0:
    // 0x220db0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x220db0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220db4:
    // 0x220db4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x220db4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220db8:
    // 0x220db8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x220db8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_220dbc:
    // 0x220dbc: 0xa18c0  sll         $v1, $t2, 3
    ctx->pc = 0x220dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_220dc0:
    // 0x220dc0: 0x6a5021  addu        $t2, $v1, $t2
    ctx->pc = 0x220dc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_220dc4:
    // 0x220dc4: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x220dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_220dc8:
    // 0x220dc8: 0x6a1823  subu        $v1, $v1, $t2
    ctx->pc = 0x220dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_220dcc:
    // 0x220dcc: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x220dccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_220dd0:
    // 0x220dd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x220dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_220dd4:
    // 0x220dd4: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x220dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_220dd8:
    // 0x220dd8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x220dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_220ddc:
    // 0x220ddc: 0xc05d3e4  jal         func_174F90
label_220de0:
    if (ctx->pc == 0x220DE0u) {
        ctx->pc = 0x220DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220DDCu;
        // 0x220de0: 0xac4b18ac  sw          $t3, 0x18AC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 6316), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220DE4u;
        goto label_220de4;
    }
    ctx->pc = 0x220DDCu;
    SET_GPR_U32(ctx, 31, 0x220DE4u);
    ctx->pc = 0x220DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220DDCu;
    // 0x220de0: 0xac4b18ac  sw          $t3, 0x18AC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 6316), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x220DDCu, 0x220DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220DE4u;
label_220de4:
    // 0x220de4: 0x0  nop
    ctx->pc = 0x220de4u;
    // NOP
label_220de8:
    // 0x220de8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x220de8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_220dec:
    // 0x220dec: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x220decu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_220df0:
    // 0x220df0: 0x26520090  addiu       $s2, $s2, 0x90
    ctx->pc = 0x220df0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_220df4:
    // 0x220df4: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
label_220df8:
    if (ctx->pc == 0x220DF8u) {
        ctx->pc = 0x220DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220DF4u;
        // 0x220df8: 0x26730240  addiu       $s3, $s3, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220DFCu;
        goto label_220dfc;
    }
    ctx->pc = 0x220DF4u;
    {
        const bool branch_taken_0x220df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220DF4u;
        // 0x220df8: 0x26730240  addiu       $s3, $s3, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220df4) {
            ctx->pc = 0x220D24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x220d24; return; }
        }
    }
    ctx->pc = 0x220DFCu;
label_220dfc:
    // 0x220dfc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x220dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_220e00:
    // 0x220e00: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x220e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_220e04:
    // 0x220e04: 0x8c254900  lw          $a1, 0x4900($at)
    ctx->pc = 0x220e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_220e08:
    // 0x220e08: 0x246339b0  addiu       $v1, $v1, 0x39B0
    ctx->pc = 0x220e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14768));
label_220e0c:
    // 0x220e0c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x220e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_220e10:
    // 0x220e10: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x220e10u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_220e14:
    // 0x220e14: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x220e14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_220e18:
    // 0x220e18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x220e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_220e1c:
    // 0x220e1c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x220e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_220e20:
    // 0x220e20: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x220e20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_220e24:
    // 0x220e24: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_220e28:
    if (ctx->pc == 0x220E28u) {
        ctx->pc = 0x220E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220E24u;
        // 0x220e28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220E2Cu;
        goto label_220e2c;
    }
    ctx->pc = 0x220E24u;
    {
        const bool branch_taken_0x220e24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220E24u;
        // 0x220e28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220e24) {
            ctx->pc = 0x220E50u;
            goto label_220e50;
        }
    }
    ctx->pc = 0x220E2Cu;
label_220e2c:
    // 0x220e2c: 0xc05d970  jal         func_1765C0
label_220e30:
    if (ctx->pc == 0x220E30u) {
        ctx->pc = 0x220E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220E2Cu;
        // 0x220e30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220E34u;
        goto label_220e34;
    }
    ctx->pc = 0x220E2Cu;
    SET_GPR_U32(ctx, 31, 0x220E34u);
    ctx->pc = 0x220E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220E2Cu;
    // 0x220e30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1765C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1765C0u, 0x220E2Cu, 0x220E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220E34u;
label_220e34:
    // 0x220e34: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x220e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_220e38:
    // 0x220e38: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x220e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_220e3c:
    // 0x220e3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220e3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220e40:
    // 0x220e40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x220e40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220e44:
    // 0x220e44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x220e44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220e48:
    // 0x220e48: 0xc05d3e4  jal         func_174F90
label_220e4c:
    if (ctx->pc == 0x220E4Cu) {
        ctx->pc = 0x220E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220E48u;
        // 0x220e4c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220E50u;
        goto label_220e50;
    }
    ctx->pc = 0x220E48u;
    SET_GPR_U32(ctx, 31, 0x220E50u);
    ctx->pc = 0x220E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220E48u;
    // 0x220e4c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x220E48u, 0x220E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220E50u;
label_220e50:
    // 0x220e50: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x220e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_220e54:
    // 0x220e54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x220e54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_220e58:
    // 0x220e58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x220e58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_220e5c:
    // 0x220e5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x220e5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_220e60:
    // 0x220e60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x220e60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_220e64:
    // 0x220e64: 0x3e00008  jr          $ra
label_220e68:
    if (ctx->pc == 0x220E68u) {
        ctx->pc = 0x220E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220E64u;
        // 0x220e68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220E6Cu;
        goto label_220e6c;
    }
    ctx->pc = 0x220E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220E64u;
        // 0x220e68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220E6Cu;
label_220e6c:
    // 0x220e6c: 0x0  nop
    ctx->pc = 0x220e6cu;
    // NOP
label_220e70:
    // 0x220e70: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x220e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_220e74:
    // 0x220e74: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x220e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_220e78:
    // 0x220e78: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x220e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_220e7c:
    // 0x220e7c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x220e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_220e80:
    // 0x220e80: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x220e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_220e84:
    // 0x220e84: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x220e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_220e88:
    // 0x220e88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x220e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_220e8c:
    // 0x220e8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x220e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_220e90:
    // 0x220e90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x220e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_220e94:
    // 0x220e94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x220e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_220e98:
    // 0x220e98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x220e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_220e9c:
    // 0x220e9c: 0x8f83863c  lw          $v1, -0x79C4($gp)
    ctx->pc = 0x220e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_220ea0:
    // 0x220ea0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_220ea4:
    if (ctx->pc == 0x220EA4u) {
        ctx->pc = 0x220EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220EA0u;
        // 0x220ea4: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220EA8u;
        goto label_220ea8;
    }
    ctx->pc = 0x220EA0u;
    {
        const bool branch_taken_0x220ea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x220EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220EA0u;
        // 0x220ea4: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ea0) {
            ctx->pc = 0x220EACu;
            goto label_220eac;
        }
    }
    ctx->pc = 0x220EA8u;
label_220ea8:
    // 0x220ea8: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x220ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_220eac:
    // 0x220eac: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x220eacu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220eb0:
    // 0x220eb0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x220eb0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220eb4:
    // 0x220eb4: 0x0  nop
    ctx->pc = 0x220eb4u;
    // NOP
label_220eb8:
    // 0x220eb8: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x220eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_220ebc:
    // 0x220ebc: 0x24634a30  addiu       $v1, $v1, 0x4A30
    ctx->pc = 0x220ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18992));
label_220ec0:
    // 0x220ec0: 0x779021  addu        $s2, $v1, $s7
    ctx->pc = 0x220ec0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_220ec4:
    // 0x220ec4: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x220ec4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_220ec8:
    // 0x220ec8: 0x1460011d  bnez        $v1, . + 4 + (0x11D << 2)
label_220ecc:
    if (ctx->pc == 0x220ECCu) {
        ctx->pc = 0x220ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220EC8u;
        // 0x220ecc: 0x26550003  addiu       $s5, $s2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220ED0u;
        goto label_220ed0;
    }
    ctx->pc = 0x220EC8u;
    {
        const bool branch_taken_0x220ec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220EC8u;
        // 0x220ecc: 0x26550003  addiu       $s5, $s2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ec8) {
            ctx->pc = 0x221340u;
            goto label_221340;
        }
    }
    ctx->pc = 0x220ED0u;
label_220ed0:
    // 0x220ed0: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x220ed0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_220ed4:
    // 0x220ed4: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x220ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_220ed8:
    // 0x220ed8: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x220ed8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_220edc:
    // 0x220edc: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x220edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_220ee0:
    // 0x220ee0: 0x51200  sll         $v0, $a1, 8
    ctx->pc = 0x220ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_220ee4:
    // 0x220ee4: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x220ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_220ee8:
    // 0x220ee8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x220ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_220eec:
    // 0x220eec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x220eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_220ef0:
    // 0x220ef0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x220ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_220ef4:
    // 0x220ef4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x220ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_220ef8:
    // 0x220ef8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x220ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_220efc:
    // 0x220efc: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x220efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_220f00:
    // 0x220f00: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x220f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_220f04:
    // 0x220f04: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x220f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_220f08:
    // 0x220f08: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x220f08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_220f0c:
    // 0x220f0c: 0xc044894  jal         func_112250
label_220f10:
    if (ctx->pc == 0x220F10u) {
        ctx->pc = 0x220F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220F0Cu;
        // 0x220f10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220F14u;
        goto label_220f14;
    }
    ctx->pc = 0x220F0Cu;
    SET_GPR_U32(ctx, 31, 0x220F14u);
    ctx->pc = 0x220F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220F0Cu;
    // 0x220f10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112250u, 0x220F0Cu, 0x220F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220F14u;
label_220f14:
    // 0x220f14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_220f18:
    if (ctx->pc == 0x220F18u) {
        ctx->pc = 0x220F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220F14u;
        // 0x220f18: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220F1Cu;
        goto label_220f1c;
    }
    ctx->pc = 0x220F14u;
    {
        const bool branch_taken_0x220f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220F14u;
        // 0x220f18: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220f14) {
            ctx->pc = 0x220F24u;
            goto label_220f24;
        }
    }
    ctx->pc = 0x220F1Cu;
label_220f1c:
    // 0x220f1c: 0x10000108  b           . + 4 + (0x108 << 2)
label_220f20:
    if (ctx->pc == 0x220F20u) {
        ctx->pc = 0x220F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220F1Cu;
        // 0x220f20: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220F24u;
        goto label_220f24;
    }
    ctx->pc = 0x220F1Cu;
    {
        const bool branch_taken_0x220f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220F1Cu;
        // 0x220f20: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220f1c) {
            ctx->pc = 0x221340u;
            goto label_221340;
        }
    }
    ctx->pc = 0x220F24u;
label_220f24:
    // 0x220f24: 0x0  nop
    ctx->pc = 0x220f24u;
    // NOP
label_220f28:
    // 0x220f28: 0x8f83863c  lw          $v1, -0x79C4($gp)
    ctx->pc = 0x220f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_220f2c:
    // 0x220f2c: 0x10600061  beqz        $v1, . + 4 + (0x61 << 2)
label_220f30:
    if (ctx->pc == 0x220F30u) {
        ctx->pc = 0x220F34u;
        goto label_220f34;
    }
    ctx->pc = 0x220F2Cu;
    {
        const bool branch_taken_0x220f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x220f2c) {
            ctx->pc = 0x2210B4u;
            goto label_2210b4;
        }
    }
    ctx->pc = 0x220F34u;
label_220f34:
    // 0x220f34: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x220f34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220f38:
    // 0x220f38: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x220f38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220f3c:
    // 0x220f3c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x220f3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220f40:
    // 0x220f40: 0x0  nop
    ctx->pc = 0x220f40u;
    // NOP
label_220f44:
    // 0x220f44: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x220f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_220f48:
    // 0x220f48: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x220f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_220f4c:
    // 0x220f4c: 0x742821  addu        $a1, $v1, $s4
    ctx->pc = 0x220f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_220f50:
    // 0x220f50: 0x90a3367c  lbu         $v1, 0x367C($a1)
    ctx->pc = 0x220f50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 13948)));
label_220f54:
    // 0x220f54: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_220f58:
    if (ctx->pc == 0x220F58u) {
        ctx->pc = 0x220F5Cu;
        goto label_220f5c;
    }
    ctx->pc = 0x220F54u;
    {
        const bool branch_taken_0x220f54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x220f54) {
            ctx->pc = 0x220FA4u;
            goto label_220fa4;
        }
    }
    ctx->pc = 0x220F5Cu;
label_220f5c:
    // 0x220f5c: 0x92240034  lbu         $a0, 0x34($s1)
    ctx->pc = 0x220f5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
label_220f60:
    // 0x220f60: 0x8ca33674  lw          $v1, 0x3674($a1)
    ctx->pc = 0x220f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 13940)));
label_220f64:
    // 0x220f64: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
label_220f68:
    if (ctx->pc == 0x220F68u) {
        ctx->pc = 0x220F6Cu;
        goto label_220f6c;
    }
    ctx->pc = 0x220F64u;
    {
        const bool branch_taken_0x220f64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x220f64) {
            ctx->pc = 0x220FA4u;
            goto label_220fa4;
        }
    }
    ctx->pc = 0x220F6Cu;
label_220f6c:
    // 0x220f6c: 0x92230039  lbu         $v1, 0x39($s1)
    ctx->pc = 0x220f6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
label_220f70:
    // 0x220f70: 0x2861004a  slti        $at, $v1, 0x4A
    ctx->pc = 0x220f70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)74) ? 1 : 0);
label_220f74:
    // 0x220f74: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_220f78:
    if (ctx->pc == 0x220F78u) {
        ctx->pc = 0x220F7Cu;
        goto label_220f7c;
    }
    ctx->pc = 0x220F74u;
    {
        const bool branch_taken_0x220f74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x220f74) {
            ctx->pc = 0x220FA4u;
            goto label_220fa4;
        }
    }
    ctx->pc = 0x220F7Cu;
label_220f7c:
    // 0x220f7c: 0x8ca5366c  lw          $a1, 0x366C($a1)
    ctx->pc = 0x220f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 13932)));
label_220f80:
    // 0x220f80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_220f84:
    // 0x220f84: 0xc05257c  jal         func_1495F0
label_220f88:
    if (ctx->pc == 0x220F88u) {
        ctx->pc = 0x220F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220F84u;
        // 0x220f88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220F8Cu;
        goto label_220f8c;
    }
    ctx->pc = 0x220F84u;
    SET_GPR_U32(ctx, 31, 0x220F8Cu);
    ctx->pc = 0x220F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220F84u;
    // 0x220f88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1495F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1495F0u, 0x220F84u, 0x220F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220F8Cu;
label_220f8c:
    // 0x220f8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_220f90:
    if (ctx->pc == 0x220F90u) {
        ctx->pc = 0x220F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220F8Cu;
        // 0x220f90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220F94u;
        goto label_220f94;
    }
    ctx->pc = 0x220F8Cu;
    {
        const bool branch_taken_0x220f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220F8Cu;
        // 0x220f90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220f8c) {
            ctx->pc = 0x220FA4u;
            goto label_220fa4;
        }
    }
    ctx->pc = 0x220F94u;
label_220f94:
    // 0x220f94: 0xc089738  jal         func_225CE0
label_220f98:
    if (ctx->pc == 0x220F98u) {
        ctx->pc = 0x220F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220F94u;
        // 0x220f98: 0xaf9392d8  sw          $s3, -0x6D28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939352), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220F9Cu;
        goto label_220f9c;
    }
    ctx->pc = 0x220F94u;
    SET_GPR_U32(ctx, 31, 0x220F9Cu);
    ctx->pc = 0x220F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220F94u;
    // 0x220f98: 0xaf9392d8  sw          $s3, -0x6D28($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939352), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225CE0u;
    { ctx->pc = 0x225ce0; return; }
    ctx->pc = 0x220F9Cu;
label_220f9c:
    // 0x220f9c: 0x10000006  b           . + 4 + (0x6 << 2)
label_220fa0:
    if (ctx->pc == 0x220FA0u) {
        ctx->pc = 0x220FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220F9Cu;
        // 0x220fa0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220FA4u;
        goto label_220fa4;
    }
    ctx->pc = 0x220F9Cu;
    {
        const bool branch_taken_0x220f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220F9Cu;
        // 0x220fa0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220f9c) {
            ctx->pc = 0x220FB8u;
            goto label_220fb8;
        }
    }
    ctx->pc = 0x220FA4u;
label_220fa4:
    // 0x220fa4: 0x0  nop
    ctx->pc = 0x220fa4u;
    // NOP
label_220fa8:
    // 0x220fa8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x220fa8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_220fac:
    // 0x220fac: 0x2a630002  slti        $v1, $s3, 0x2
    ctx->pc = 0x220facu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_220fb0:
    // 0x220fb0: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
label_220fb4:
    if (ctx->pc == 0x220FB4u) {
        ctx->pc = 0x220FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220FB0u;
        // 0x220fb4: 0x26940090  addiu       $s4, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220FB8u;
        goto label_220fb8;
    }
    ctx->pc = 0x220FB0u;
    {
        const bool branch_taken_0x220fb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220FB0u;
        // 0x220fb4: 0x26940090  addiu       $s4, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220fb0) {
            ctx->pc = 0x220F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220f40;
        }
    }
    ctx->pc = 0x220FB8u;
label_220fb8:
    // 0x220fb8: 0x124000e1  beqz        $s2, . + 4 + (0xE1 << 2)
label_220fbc:
    if (ctx->pc == 0x220FBCu) {
        ctx->pc = 0x220FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220FB8u;
        // 0x220fbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220FC0u;
        goto label_220fc0;
    }
    ctx->pc = 0x220FB8u;
    {
        const bool branch_taken_0x220fb8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x220FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220FB8u;
        // 0x220fbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220fb8) {
            ctx->pc = 0x221340u;
            goto label_221340;
        }
    }
    ctx->pc = 0x220FC0u;
label_220fc0:
    // 0x220fc0: 0xc0885fc  jal         func_2217F0
label_220fc4:
    if (ctx->pc == 0x220FC4u) {
        ctx->pc = 0x220FC8u;
        goto label_220fc8;
    }
    ctx->pc = 0x220FC0u;
    SET_GPR_U32(ctx, 31, 0x220FC8u);
    ctx->pc = 0x2217F0u;
    { ctx->pc = 0x2217f0; return; }
    ctx->pc = 0x220FC8u;
label_220fc8:
    // 0x220fc8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x220fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_220fcc:
    // 0x220fcc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x220fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_220fd0:
    // 0x220fd0: 0x90840012  lbu         $a0, 0x12($a0)
    ctx->pc = 0x220fd0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
label_220fd4:
    // 0x220fd4: 0x14830033  bne         $a0, $v1, . + 4 + (0x33 << 2)
label_220fd8:
    if (ctx->pc == 0x220FD8u) {
        ctx->pc = 0x220FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220FD4u;
        // 0x220fd8: 0x3c05002f  lui         $a1, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220FDCu;
        goto label_220fdc;
    }
    ctx->pc = 0x220FD4u;
    {
        const bool branch_taken_0x220fd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x220FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220FD4u;
        // 0x220fd8: 0x3c05002f  lui         $a1, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220fd4) {
            ctx->pc = 0x2210A4u;
            goto label_2210a4;
        }
    }
    ctx->pc = 0x220FDCu;
label_220fdc:
    // 0x220fdc: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x220fdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_220fe0:
    // 0x220fe0: 0x24a56d28  addiu       $a1, $a1, 0x6D28
    ctx->pc = 0x220fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27944));
label_220fe4:
    // 0x220fe4: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
label_220fe8:
    if (ctx->pc == 0x220FE8u) {
        ctx->pc = 0x220FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220FE4u;
        // 0x220fe8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220FECu;
        goto label_220fec;
    }
    ctx->pc = 0x220FE4u;
    {
        const bool branch_taken_0x220fe4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x220FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220FE4u;
        // 0x220fe8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220fe4) {
            ctx->pc = 0x221090u;
            goto label_221090;
        }
    }
    ctx->pc = 0x220FECu;
label_220fec:
    // 0x220fec: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x220fecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
label_220ff0:
    // 0x220ff0: 0x3c090025  lui         $t1, 0x25
    ctx->pc = 0x220ff0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)37 << 16));
label_220ff4:
    // 0x220ff4: 0x24e74a30  addiu       $a3, $a3, 0x4A30
    ctx->pc = 0x220ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18992));
label_220ff8:
    // 0x220ff8: 0x25293b80  addiu       $t1, $t1, 0x3B80
    ctx->pc = 0x220ff8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15232));
label_220ffc:
    // 0x220ffc: 0x0  nop
    ctx->pc = 0x220ffcu;
    // NOP
label_221000:
    // 0x221000: 0x1225001f  beq         $s1, $a1, . + 4 + (0x1F << 2)
label_221004:
    if (ctx->pc == 0x221004u) {
        ctx->pc = 0x221008u;
        goto label_221008;
    }
    ctx->pc = 0x221000u;
    {
        const bool branch_taken_0x221000 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        if (branch_taken_0x221000) {
            ctx->pc = 0x221080u;
            goto label_221080;
        }
    }
    ctx->pc = 0x221008u;
label_221008:
    // 0x221008: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x221008u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_22100c:
    // 0x22100c: 0x91060012  lbu         $a2, 0x12($t0)
    ctx->pc = 0x22100cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 18)));
label_221010:
    // 0x221010: 0x14c3001b  bne         $a2, $v1, . + 4 + (0x1B << 2)
label_221014:
    if (ctx->pc == 0x221014u) {
        ctx->pc = 0x221018u;
        goto label_221018;
    }
    ctx->pc = 0x221010u;
    {
        const bool branch_taken_0x221010 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x221010) {
            ctx->pc = 0x221080u;
            goto label_221080;
        }
    }
    ctx->pc = 0x221018u;
label_221018:
    // 0x221018: 0x9508000a  lhu         $t0, 0xA($t0)
    ctx->pc = 0x221018u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 10)));
label_22101c:
    // 0x22101c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x22101cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221020:
    // 0x221020: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x221020u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221024:
    // 0x221024: 0x83100  sll         $a2, $t0, 4
    ctx->pc = 0x221024u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_221028:
    // 0x221028: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x221028u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_22102c:
    // 0x22102c: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x22102cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_221030:
    // 0x221030: 0x90c60002  lbu         $a2, 0x2($a2)
    ctx->pc = 0x221030u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_221034:
    // 0x221034: 0x0  nop
    ctx->pc = 0x221034u;
    // NOP
label_221038:
    // 0x221038: 0x30c800ff  andi        $t0, $a2, 0xFF
    ctx->pc = 0x221038u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_22103c:
    // 0x22103c: 0x0  nop
    ctx->pc = 0x22103cu;
    // NOP
label_221040:
    // 0x221040: 0xeb3021  addu        $a2, $a3, $t3
    ctx->pc = 0x221040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
label_221044:
    // 0x221044: 0x90c60002  lbu         $a2, 0x2($a2)
    ctx->pc = 0x221044u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_221048:
    // 0x221048: 0x15060004  bne         $t0, $a2, . + 4 + (0x4 << 2)
label_22104c:
    if (ctx->pc == 0x22104Cu) {
        ctx->pc = 0x22104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221048u;
        // 0x22104c: 0xa3080  sll         $a2, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221050u;
        goto label_221050;
    }
    ctx->pc = 0x221048u;
    {
        const bool branch_taken_0x221048 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        ctx->pc = 0x22104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221048u;
        // 0x22104c: 0xa3080  sll         $a2, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221048) {
            ctx->pc = 0x22105Cu;
            goto label_22105c;
        }
    }
    ctx->pc = 0x221050u;
label_221050:
    // 0x221050: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x221050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_221054:
    // 0x221054: 0x10000007  b           . + 4 + (0x7 << 2)
label_221058:
    if (ctx->pc == 0x221058u) {
        ctx->pc = 0x221058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221054u;
        // 0x221058: 0x90c60003  lbu         $a2, 0x3($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22105Cu;
        goto label_22105c;
    }
    ctx->pc = 0x221054u;
    {
        const bool branch_taken_0x221054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221054u;
        // 0x221058: 0x90c60003  lbu         $a2, 0x3($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221054) {
            ctx->pc = 0x221074u;
            goto label_221074;
        }
    }
    ctx->pc = 0x22105Cu;
label_22105c:
    // 0x22105c: 0x0  nop
    ctx->pc = 0x22105cu;
    // NOP
label_221060:
    // 0x221060: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x221060u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_221064:
    // 0x221064: 0x2946000c  slti        $a2, $t2, 0xC
    ctx->pc = 0x221064u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)12) ? 1 : 0);
label_221068:
    // 0x221068: 0x14c0fff4  bnez        $a2, . + 4 + (-0xC << 2)
label_22106c:
    if (ctx->pc == 0x22106Cu) {
        ctx->pc = 0x22106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221068u;
        // 0x22106c: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221070u;
        goto label_221070;
    }
    ctx->pc = 0x221068u;
    {
        const bool branch_taken_0x221068 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x22106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221068u;
        // 0x22106c: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221068) {
            ctx->pc = 0x22103Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22103c;
        }
    }
    ctx->pc = 0x221070u;
label_221070:
    // 0x221070: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x221070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_221074:
    // 0x221074: 0x0  nop
    ctx->pc = 0x221074u;
    // NOP
label_221078:
    // 0x221078: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
label_22107c:
    if (ctx->pc == 0x22107Cu) {
        ctx->pc = 0x221080u;
        goto label_221080;
    }
    ctx->pc = 0x221078u;
    {
        const bool branch_taken_0x221078 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x221078) {
            ctx->pc = 0x221090u;
            goto label_221090;
        }
    }
    ctx->pc = 0x221080u;
label_221080:
    // 0x221080: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x221080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_221084:
    // 0x221084: 0x90302a  slt         $a2, $a0, $s0
    ctx->pc = 0x221084u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_221088:
    // 0x221088: 0x14c0ffdc  bnez        $a2, . + 4 + (-0x24 << 2)
label_22108c:
    if (ctx->pc == 0x22108Cu) {
        ctx->pc = 0x22108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221088u;
        // 0x22108c: 0x24a50048  addiu       $a1, $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221090u;
        goto label_221090;
    }
    ctx->pc = 0x221088u;
    {
        const bool branch_taken_0x221088 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x22108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221088u;
        // 0x22108c: 0x24a50048  addiu       $a1, $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221088) {
            ctx->pc = 0x220FFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220ffc;
        }
    }
    ctx->pc = 0x221090u;
label_221090:
    // 0x221090: 0x14900004  bne         $a0, $s0, . + 4 + (0x4 << 2)
label_221094:
    if (ctx->pc == 0x221094u) {
        ctx->pc = 0x221098u;
        goto label_221098;
    }
    ctx->pc = 0x221090u;
    {
        const bool branch_taken_0x221090 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        if (branch_taken_0x221090) {
            ctx->pc = 0x2210A4u;
            goto label_2210a4;
        }
    }
    ctx->pc = 0x221098u;
label_221098:
    // 0x221098: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22109c:
    // 0x22109c: 0xc05d518  jal         func_175460
label_2210a0:
    if (ctx->pc == 0x2210A0u) {
        ctx->pc = 0x2210A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22109Cu;
        // 0x2210a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2210A4u;
        goto label_2210a4;
    }
    ctx->pc = 0x22109Cu;
    SET_GPR_U32(ctx, 31, 0x2210A4u);
    ctx->pc = 0x2210A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22109Cu;
    // 0x2210a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175460u, 0x22109Cu, 0x2210A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2210A4u;
label_2210a4:
    // 0x2210a4: 0x0  nop
    ctx->pc = 0x2210a4u;
    // NOP
label_2210a8:
    // 0x2210a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2210a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2210ac:
    // 0x2210ac: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_2210b0:
    if (ctx->pc == 0x2210B0u) {
        ctx->pc = 0x2210B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2210ACu;
        // 0x2210b0: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2210B4u;
        goto label_2210b4;
    }
    ctx->pc = 0x2210ACu;
    {
        const bool branch_taken_0x2210ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2210B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2210ACu;
        // 0x2210b0: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2210ac) {
            ctx->pc = 0x221340u;
            goto label_221340;
        }
    }
    ctx->pc = 0x2210B4u;
label_2210b4:
    // 0x2210b4: 0x0  nop
    ctx->pc = 0x2210b4u;
    // NOP
label_2210b8:
    // 0x2210b8: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x2210b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_2210bc:
    // 0x2210bc: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x2210bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_2210c0:
    // 0x2210c0: 0x14830037  bne         $a0, $v1, . + 4 + (0x37 << 2)
label_2210c4:
    if (ctx->pc == 0x2210C4u) {
        ctx->pc = 0x2210C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2210C0u;
        // 0x2210c4: 0x3c14002f  lui         $s4, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2210C8u;
        goto label_2210c8;
    }
    ctx->pc = 0x2210C0u;
    {
        const bool branch_taken_0x2210c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2210C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2210C0u;
        // 0x2210c4: 0x3c14002f  lui         $s4, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2210c0) {
            ctx->pc = 0x2211A0u;
            goto label_2211a0;
        }
    }
    ctx->pc = 0x2210C8u;
label_2210c8:
    // 0x2210c8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2210c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2210cc:
    // 0x2210cc: 0x26946d28  addiu       $s4, $s4, 0x6D28
    ctx->pc = 0x2210ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 27944));
label_2210d0:
    // 0x2210d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2210d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2210d4:
    // 0x2210d4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2210d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2210d8:
    // 0x2210d8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2210d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2210dc:
    // 0x2210dc: 0x0  nop
    ctx->pc = 0x2210dcu;
    // NOP
label_2210e0:
    // 0x2210e0: 0x0  nop
    ctx->pc = 0x2210e0u;
    // NOP
label_2210e4:
    // 0x2210e4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2210e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_2210e8:
    // 0x2210e8: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x2210e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_2210ec:
    // 0x2210ec: 0x732821  addu        $a1, $v1, $s3
    ctx->pc = 0x2210ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_2210f0:
    // 0x2210f0: 0x90a3367c  lbu         $v1, 0x367C($a1)
    ctx->pc = 0x2210f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 13948)));
label_2210f4:
    // 0x2210f4: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_2210f8:
    if (ctx->pc == 0x2210F8u) {
        ctx->pc = 0x2210FCu;
        goto label_2210fc;
    }
    ctx->pc = 0x2210F4u;
    {
        const bool branch_taken_0x2210f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2210f4) {
            ctx->pc = 0x221144u;
            goto label_221144;
        }
    }
    ctx->pc = 0x2210FCu;
label_2210fc:
    // 0x2210fc: 0x92840034  lbu         $a0, 0x34($s4)
    ctx->pc = 0x2210fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 52)));
label_221100:
    // 0x221100: 0x8ca33674  lw          $v1, 0x3674($a1)
    ctx->pc = 0x221100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 13940)));
label_221104:
    // 0x221104: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
label_221108:
    if (ctx->pc == 0x221108u) {
        ctx->pc = 0x22110Cu;
        goto label_22110c;
    }
    ctx->pc = 0x221104u;
    {
        const bool branch_taken_0x221104 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x221104) {
            ctx->pc = 0x221144u;
            goto label_221144;
        }
    }
    ctx->pc = 0x22110Cu;
label_22110c:
    // 0x22110c: 0x92830039  lbu         $v1, 0x39($s4)
    ctx->pc = 0x22110cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 57)));
label_221110:
    // 0x221110: 0x2861004a  slti        $at, $v1, 0x4A
    ctx->pc = 0x221110u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)74) ? 1 : 0);
label_221114:
    // 0x221114: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_221118:
    if (ctx->pc == 0x221118u) {
        ctx->pc = 0x22111Cu;
        goto label_22111c;
    }
    ctx->pc = 0x221114u;
    {
        const bool branch_taken_0x221114 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x221114) {
            ctx->pc = 0x221144u;
            goto label_221144;
        }
    }
    ctx->pc = 0x22111Cu;
label_22111c:
    // 0x22111c: 0x8ca5366c  lw          $a1, 0x366C($a1)
    ctx->pc = 0x22111cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 13932)));
label_221120:
    // 0x221120: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x221120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_221124:
    // 0x221124: 0xc05257c  jal         func_1495F0
label_221128:
    if (ctx->pc == 0x221128u) {
        ctx->pc = 0x221128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221124u;
        // 0x221128: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22112Cu;
        goto label_22112c;
    }
    ctx->pc = 0x221124u;
    SET_GPR_U32(ctx, 31, 0x22112Cu);
    ctx->pc = 0x221128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221124u;
    // 0x221128: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1495F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1495F0u, 0x221124u, 0x22112Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22112Cu;
label_22112c:
    // 0x22112c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_221130:
    if (ctx->pc == 0x221130u) {
        ctx->pc = 0x221130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22112Cu;
        // 0x221130: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221134u;
        goto label_221134;
    }
    ctx->pc = 0x22112Cu;
    {
        const bool branch_taken_0x22112c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22112Cu;
        // 0x221130: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22112c) {
            ctx->pc = 0x221144u;
            goto label_221144;
        }
    }
    ctx->pc = 0x221134u;
label_221134:
    // 0x221134: 0xc089738  jal         func_225CE0
label_221138:
    if (ctx->pc == 0x221138u) {
        ctx->pc = 0x221138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221134u;
        // 0x221138: 0xaf9292d8  sw          $s2, -0x6D28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939352), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22113Cu;
        goto label_22113c;
    }
    ctx->pc = 0x221134u;
    SET_GPR_U32(ctx, 31, 0x22113Cu);
    ctx->pc = 0x221138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221134u;
    // 0x221138: 0xaf9292d8  sw          $s2, -0x6D28($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939352), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225CE0u;
    { ctx->pc = 0x225ce0; return; }
    ctx->pc = 0x22113Cu;
label_22113c:
    // 0x22113c: 0x10000006  b           . + 4 + (0x6 << 2)
label_221140:
    if (ctx->pc == 0x221140u) {
        ctx->pc = 0x221140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22113Cu;
        // 0x221140: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221144u;
        goto label_221144;
    }
    ctx->pc = 0x22113Cu;
    {
        const bool branch_taken_0x22113c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22113Cu;
        // 0x221140: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22113c) {
            ctx->pc = 0x221158u;
            goto label_221158;
        }
    }
    ctx->pc = 0x221144u;
label_221144:
    // 0x221144: 0x0  nop
    ctx->pc = 0x221144u;
    // NOP
label_221148:
    // 0x221148: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x221148u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_22114c:
    // 0x22114c: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x22114cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_221150:
    // 0x221150: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
label_221154:
    if (ctx->pc == 0x221154u) {
        ctx->pc = 0x221154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221150u;
        // 0x221154: 0x26730090  addiu       $s3, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221158u;
        goto label_221158;
    }
    ctx->pc = 0x221150u;
    {
        const bool branch_taken_0x221150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x221154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221150u;
        // 0x221154: 0x26730090  addiu       $s3, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221150) {
            ctx->pc = 0x2210DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2210dc;
        }
    }
    ctx->pc = 0x221158u;
label_221158:
    // 0x221158: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_22115c:
    if (ctx->pc == 0x22115Cu) {
        ctx->pc = 0x22115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221158u;
        // 0x22115c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221160u;
        goto label_221160;
    }
    ctx->pc = 0x221158u;
    {
        const bool branch_taken_0x221158 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221158u;
        // 0x22115c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221158) {
            ctx->pc = 0x221184u;
            goto label_221184;
        }
    }
    ctx->pc = 0x221160u;
label_221160:
    // 0x221160: 0xc0885fc  jal         func_2217F0
label_221164:
    if (ctx->pc == 0x221164u) {
        ctx->pc = 0x221168u;
        goto label_221168;
    }
    ctx->pc = 0x221160u;
    SET_GPR_U32(ctx, 31, 0x221168u);
    ctx->pc = 0x2217F0u;
    { ctx->pc = 0x2217f0; return; }
    ctx->pc = 0x221168u;
label_221168:
    // 0x221168: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x221168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_22116c:
    // 0x22116c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22116cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221170:
    // 0x221170: 0xc05d518  jal         func_175460
label_221174:
    if (ctx->pc == 0x221174u) {
        ctx->pc = 0x221174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221170u;
        // 0x221174: 0x24846d28  addiu       $a0, $a0, 0x6D28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221178u;
        goto label_221178;
    }
    ctx->pc = 0x221170u;
    SET_GPR_U32(ctx, 31, 0x221178u);
    ctx->pc = 0x221174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221170u;
    // 0x221174: 0x24846d28  addiu       $a0, $a0, 0x6D28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175460u, 0x221170u, 0x221178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221178u;
label_221178:
    // 0x221178: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x221178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22117c:
    // 0x22117c: 0x10000070  b           . + 4 + (0x70 << 2)
label_221180:
    if (ctx->pc == 0x221180u) {
        ctx->pc = 0x221180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22117Cu;
        // 0x221180: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221184u;
        goto label_221184;
    }
    ctx->pc = 0x22117Cu;
    {
        const bool branch_taken_0x22117c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22117Cu;
        // 0x221180: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22117c) {
            ctx->pc = 0x221340u;
            goto label_221340;
        }
    }
    ctx->pc = 0x221184u;
label_221184:
    // 0x221184: 0x0  nop
    ctx->pc = 0x221184u;
    // NOP
label_221188:
    // 0x221188: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x221188u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_22118c:
    // 0x22118c: 0x2ac30007  slti        $v1, $s6, 0x7
    ctx->pc = 0x22118cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)7) ? 1 : 0);
label_221190:
    // 0x221190: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
label_221194:
    if (ctx->pc == 0x221194u) {
        ctx->pc = 0x221194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221190u;
        // 0x221194: 0x26940048  addiu       $s4, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221198u;
        goto label_221198;
    }
    ctx->pc = 0x221190u;
    {
        const bool branch_taken_0x221190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x221194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221190u;
        // 0x221194: 0x26940048  addiu       $s4, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221190) {
            ctx->pc = 0x2210D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2210d0;
        }
    }
    ctx->pc = 0x221198u;
label_221198:
    // 0x221198: 0x10000069  b           . + 4 + (0x69 << 2)
label_22119c:
    if (ctx->pc == 0x22119Cu) {
        ctx->pc = 0x2211A0u;
        goto label_2211a0;
    }
    ctx->pc = 0x221198u;
    {
        const bool branch_taken_0x221198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221198) {
            ctx->pc = 0x221340u;
            goto label_221340;
        }
    }
    ctx->pc = 0x2211A0u;
label_2211a0:
    // 0x2211a0: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x2211a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_2211a4:
    // 0x2211a4: 0x14830038  bne         $a0, $v1, . + 4 + (0x38 << 2)
label_2211a8:
    if (ctx->pc == 0x2211A8u) {
        ctx->pc = 0x2211A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2211A4u;
        // 0x2211a8: 0x3c14002f  lui         $s4, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2211ACu;
        goto label_2211ac;
    }
    ctx->pc = 0x2211A4u;
    {
        const bool branch_taken_0x2211a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2211A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2211A4u;
        // 0x2211a8: 0x3c14002f  lui         $s4, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2211a4) {
            ctx->pc = 0x221288u;
            goto label_221288;
        }
    }
    ctx->pc = 0x2211ACu;
label_2211ac:
    // 0x2211ac: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2211acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2211b0:
    // 0x2211b0: 0x26946d28  addiu       $s4, $s4, 0x6D28
    ctx->pc = 0x2211b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 27944));
label_2211b4:
    // 0x2211b4: 0x0  nop
    ctx->pc = 0x2211b4u;
    // NOP
label_2211b8:
    // 0x2211b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2211b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2211bc:
    // 0x2211bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2211bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2211c0:
    // 0x2211c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2211c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2211c4:
    // 0x2211c4: 0x0  nop
    ctx->pc = 0x2211c4u;
    // NOP
label_2211c8:
    // 0x2211c8: 0x0  nop
    ctx->pc = 0x2211c8u;
    // NOP
label_2211cc:
    // 0x2211cc: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2211ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_2211d0:
    // 0x2211d0: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x2211d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_2211d4:
    // 0x2211d4: 0x732821  addu        $a1, $v1, $s3
    ctx->pc = 0x2211d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_2211d8:
    // 0x2211d8: 0x90a3367c  lbu         $v1, 0x367C($a1)
    ctx->pc = 0x2211d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 13948)));
label_2211dc:
    // 0x2211dc: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_2211e0:
    if (ctx->pc == 0x2211E0u) {
        ctx->pc = 0x2211E4u;
        goto label_2211e4;
    }
    ctx->pc = 0x2211DCu;
    {
        const bool branch_taken_0x2211dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2211dc) {
            ctx->pc = 0x22122Cu;
            goto label_22122c;
        }
    }
    ctx->pc = 0x2211E4u;
label_2211e4:
    // 0x2211e4: 0x92840034  lbu         $a0, 0x34($s4)
    ctx->pc = 0x2211e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 52)));
label_2211e8:
    // 0x2211e8: 0x8ca33674  lw          $v1, 0x3674($a1)
    ctx->pc = 0x2211e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 13940)));
label_2211ec:
    // 0x2211ec: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
label_2211f0:
    if (ctx->pc == 0x2211F0u) {
        ctx->pc = 0x2211F4u;
        goto label_2211f4;
    }
    ctx->pc = 0x2211ECu;
    {
        const bool branch_taken_0x2211ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2211ec) {
            ctx->pc = 0x22122Cu;
            goto label_22122c;
        }
    }
    ctx->pc = 0x2211F4u;
label_2211f4:
    // 0x2211f4: 0x92830039  lbu         $v1, 0x39($s4)
    ctx->pc = 0x2211f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 57)));
label_2211f8:
    // 0x2211f8: 0x2861004a  slti        $at, $v1, 0x4A
    ctx->pc = 0x2211f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)74) ? 1 : 0);
label_2211fc:
    // 0x2211fc: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_221200:
    if (ctx->pc == 0x221200u) {
        ctx->pc = 0x221204u;
        goto label_221204;
    }
    ctx->pc = 0x2211FCu;
    {
        const bool branch_taken_0x2211fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2211fc) {
            ctx->pc = 0x22122Cu;
            goto label_22122c;
        }
    }
    ctx->pc = 0x221204u;
label_221204:
    // 0x221204: 0x8ca5366c  lw          $a1, 0x366C($a1)
    ctx->pc = 0x221204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 13932)));
label_221208:
    // 0x221208: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x221208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_22120c:
    // 0x22120c: 0xc05257c  jal         func_1495F0
label_221210:
    if (ctx->pc == 0x221210u) {
        ctx->pc = 0x221210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22120Cu;
        // 0x221210: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221214u;
        goto label_221214;
    }
    ctx->pc = 0x22120Cu;
    SET_GPR_U32(ctx, 31, 0x221214u);
    ctx->pc = 0x221210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22120Cu;
    // 0x221210: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1495F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1495F0u, 0x22120Cu, 0x221214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221214u;
label_221214:
    // 0x221214: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_221218:
    if (ctx->pc == 0x221218u) {
        ctx->pc = 0x221218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221214u;
        // 0x221218: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22121Cu;
        goto label_22121c;
    }
    ctx->pc = 0x221214u;
    {
        const bool branch_taken_0x221214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221214u;
        // 0x221218: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221214) {
            ctx->pc = 0x22122Cu;
            goto label_22122c;
        }
    }
    ctx->pc = 0x22121Cu;
label_22121c:
    // 0x22121c: 0xc089738  jal         func_225CE0
label_221220:
    if (ctx->pc == 0x221220u) {
        ctx->pc = 0x221220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22121Cu;
        // 0x221220: 0xaf9292d8  sw          $s2, -0x6D28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939352), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221224u;
        goto label_221224;
    }
    ctx->pc = 0x22121Cu;
    SET_GPR_U32(ctx, 31, 0x221224u);
    ctx->pc = 0x221220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22121Cu;
    // 0x221220: 0xaf9292d8  sw          $s2, -0x6D28($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939352), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225CE0u;
    { ctx->pc = 0x225ce0; return; }
    ctx->pc = 0x221224u;
label_221224:
    // 0x221224: 0x10000006  b           . + 4 + (0x6 << 2)
label_221228:
    if (ctx->pc == 0x221228u) {
        ctx->pc = 0x221228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221224u;
        // 0x221228: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22122Cu;
        goto label_22122c;
    }
    ctx->pc = 0x221224u;
    {
        const bool branch_taken_0x221224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221224u;
        // 0x221228: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221224) {
            ctx->pc = 0x221240u;
            goto label_221240;
        }
    }
    ctx->pc = 0x22122Cu;
label_22122c:
    // 0x22122c: 0x0  nop
    ctx->pc = 0x22122cu;
    // NOP
label_221230:
    // 0x221230: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x221230u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_221234:
    // 0x221234: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x221234u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_221238:
    // 0x221238: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
label_22123c:
    if (ctx->pc == 0x22123Cu) {
        ctx->pc = 0x22123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221238u;
        // 0x22123c: 0x26730090  addiu       $s3, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221240u;
        goto label_221240;
    }
    ctx->pc = 0x221238u;
    {
        const bool branch_taken_0x221238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221238u;
        // 0x22123c: 0x26730090  addiu       $s3, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221238) {
            ctx->pc = 0x2211C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2211c4;
        }
    }
    ctx->pc = 0x221240u;
label_221240:
    // 0x221240: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_221244:
    if (ctx->pc == 0x221244u) {
        ctx->pc = 0x221244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221240u;
        // 0x221244: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221248u;
        goto label_221248;
    }
    ctx->pc = 0x221240u;
    {
        const bool branch_taken_0x221240 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x221244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221240u;
        // 0x221244: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221240) {
            ctx->pc = 0x22126Cu;
            goto label_22126c;
        }
    }
    ctx->pc = 0x221248u;
label_221248:
    // 0x221248: 0xc0885fc  jal         func_2217F0
label_22124c:
    if (ctx->pc == 0x22124Cu) {
        ctx->pc = 0x221250u;
        goto label_221250;
    }
    ctx->pc = 0x221248u;
    SET_GPR_U32(ctx, 31, 0x221250u);
    ctx->pc = 0x2217F0u;
    { ctx->pc = 0x2217f0; return; }
    ctx->pc = 0x221250u;
label_221250:
    // 0x221250: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x221250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_221254:
    // 0x221254: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x221254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221258:
    // 0x221258: 0xc05d518  jal         func_175460
label_22125c:
    if (ctx->pc == 0x22125Cu) {
        ctx->pc = 0x22125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221258u;
        // 0x22125c: 0x24846d28  addiu       $a0, $a0, 0x6D28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221260u;
        goto label_221260;
    }
    ctx->pc = 0x221258u;
    SET_GPR_U32(ctx, 31, 0x221260u);
    ctx->pc = 0x22125Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221258u;
    // 0x22125c: 0x24846d28  addiu       $a0, $a0, 0x6D28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175460u, 0x221258u, 0x221260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221260u;
label_221260:
    // 0x221260: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x221260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_221264:
    // 0x221264: 0x10000036  b           . + 4 + (0x36 << 2)
label_221268:
    if (ctx->pc == 0x221268u) {
        ctx->pc = 0x221268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221264u;
        // 0x221268: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22126Cu;
        goto label_22126c;
    }
    ctx->pc = 0x221264u;
    {
        const bool branch_taken_0x221264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221264u;
        // 0x221268: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221264) {
            ctx->pc = 0x221340u;
            goto label_221340;
        }
    }
    ctx->pc = 0x22126Cu;
label_22126c:
    // 0x22126c: 0x0  nop
    ctx->pc = 0x22126cu;
    // NOP
label_221270:
    // 0x221270: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x221270u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_221274:
    // 0x221274: 0x2ac30005  slti        $v1, $s6, 0x5
    ctx->pc = 0x221274u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)5) ? 1 : 0);
label_221278:
    // 0x221278: 0x1460ffce  bnez        $v1, . + 4 + (-0x32 << 2)
label_22127c:
    if (ctx->pc == 0x22127Cu) {
        ctx->pc = 0x22127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221278u;
        // 0x22127c: 0x26940048  addiu       $s4, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221280u;
        goto label_221280;
    }
    ctx->pc = 0x221278u;
    {
        const bool branch_taken_0x221278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221278u;
        // 0x22127c: 0x26940048  addiu       $s4, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221278) {
            ctx->pc = 0x2211B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2211b4;
        }
    }
    ctx->pc = 0x221280u;
label_221280:
    // 0x221280: 0x1000002f  b           . + 4 + (0x2F << 2)
label_221284:
    if (ctx->pc == 0x221284u) {
        ctx->pc = 0x221288u;
        goto label_221288;
    }
    ctx->pc = 0x221280u;
    {
        const bool branch_taken_0x221280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221280) {
            ctx->pc = 0x221340u;
            goto label_221340;
        }
    }
    ctx->pc = 0x221288u;
label_221288:
    // 0x221288: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x221288u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22128c:
    // 0x22128c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22128cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221290:
    // 0x221290: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x221290u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221294:
    // 0x221294: 0x0  nop
    ctx->pc = 0x221294u;
    // NOP
label_221298:
    // 0x221298: 0x0  nop
    ctx->pc = 0x221298u;
    // NOP
label_22129c:
    // 0x22129c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x22129cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_2212a0:
    // 0x2212a0: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x2212a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_2212a4:
    // 0x2212a4: 0x742821  addu        $a1, $v1, $s4
    ctx->pc = 0x2212a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2212a8:
    // 0x2212a8: 0x90a3367c  lbu         $v1, 0x367C($a1)
    ctx->pc = 0x2212a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 13948)));
label_2212ac:
    // 0x2212ac: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_2212b0:
    if (ctx->pc == 0x2212B0u) {
        ctx->pc = 0x2212B4u;
        goto label_2212b4;
    }
    ctx->pc = 0x2212ACu;
    {
        const bool branch_taken_0x2212ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2212ac) {
            ctx->pc = 0x2212FCu;
            goto label_2212fc;
        }
    }
    ctx->pc = 0x2212B4u;
label_2212b4:
    // 0x2212b4: 0x92240034  lbu         $a0, 0x34($s1)
    ctx->pc = 0x2212b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
label_2212b8:
    // 0x2212b8: 0x8ca33674  lw          $v1, 0x3674($a1)
    ctx->pc = 0x2212b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 13940)));
label_2212bc:
    // 0x2212bc: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
label_2212c0:
    if (ctx->pc == 0x2212C0u) {
        ctx->pc = 0x2212C4u;
        goto label_2212c4;
    }
    ctx->pc = 0x2212BCu;
    {
        const bool branch_taken_0x2212bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2212bc) {
            ctx->pc = 0x2212FCu;
            goto label_2212fc;
        }
    }
    ctx->pc = 0x2212C4u;
label_2212c4:
    // 0x2212c4: 0x92230039  lbu         $v1, 0x39($s1)
    ctx->pc = 0x2212c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
label_2212c8:
    // 0x2212c8: 0x2861004a  slti        $at, $v1, 0x4A
    ctx->pc = 0x2212c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)74) ? 1 : 0);
label_2212cc:
    // 0x2212cc: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_2212d0:
    if (ctx->pc == 0x2212D0u) {
        ctx->pc = 0x2212D4u;
        goto label_2212d4;
    }
    ctx->pc = 0x2212CCu;
    {
        const bool branch_taken_0x2212cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2212cc) {
            ctx->pc = 0x2212FCu;
            goto label_2212fc;
        }
    }
    ctx->pc = 0x2212D4u;
label_2212d4:
    // 0x2212d4: 0x8ca5366c  lw          $a1, 0x366C($a1)
    ctx->pc = 0x2212d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 13932)));
label_2212d8:
    // 0x2212d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2212d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2212dc:
    // 0x2212dc: 0xc05257c  jal         func_1495F0
label_2212e0:
    if (ctx->pc == 0x2212E0u) {
        ctx->pc = 0x2212E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2212DCu;
        // 0x2212e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2212E4u;
        goto label_2212e4;
    }
    ctx->pc = 0x2212DCu;
    SET_GPR_U32(ctx, 31, 0x2212E4u);
    ctx->pc = 0x2212E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2212DCu;
    // 0x2212e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1495F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1495F0u, 0x2212DCu, 0x2212E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2212E4u;
label_2212e4:
    // 0x2212e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2212e8:
    if (ctx->pc == 0x2212E8u) {
        ctx->pc = 0x2212E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2212E4u;
        // 0x2212e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2212ECu;
        goto label_2212ec;
    }
    ctx->pc = 0x2212E4u;
    {
        const bool branch_taken_0x2212e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2212E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2212E4u;
        // 0x2212e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2212e4) {
            ctx->pc = 0x2212FCu;
            goto label_2212fc;
        }
    }
    ctx->pc = 0x2212ECu;
label_2212ec:
    // 0x2212ec: 0xc089738  jal         func_225CE0
label_2212f0:
    if (ctx->pc == 0x2212F0u) {
        ctx->pc = 0x2212F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2212ECu;
        // 0x2212f0: 0xaf9392d8  sw          $s3, -0x6D28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939352), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2212F4u;
        goto label_2212f4;
    }
    ctx->pc = 0x2212ECu;
    SET_GPR_U32(ctx, 31, 0x2212F4u);
    ctx->pc = 0x2212F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2212ECu;
    // 0x2212f0: 0xaf9392d8  sw          $s3, -0x6D28($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939352), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225CE0u;
    { ctx->pc = 0x225ce0; return; }
    ctx->pc = 0x2212F4u;
label_2212f4:
    // 0x2212f4: 0x10000006  b           . + 4 + (0x6 << 2)
label_2212f8:
    if (ctx->pc == 0x2212F8u) {
        ctx->pc = 0x2212F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2212F4u;
        // 0x2212f8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2212FCu;
        goto label_2212fc;
    }
    ctx->pc = 0x2212F4u;
    {
        const bool branch_taken_0x2212f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2212F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2212F4u;
        // 0x2212f8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2212f4) {
            ctx->pc = 0x221310u;
            goto label_221310;
        }
    }
    ctx->pc = 0x2212FCu;
label_2212fc:
    // 0x2212fc: 0x0  nop
    ctx->pc = 0x2212fcu;
    // NOP
label_221300:
    // 0x221300: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x221300u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_221304:
    // 0x221304: 0x2a630002  slti        $v1, $s3, 0x2
    ctx->pc = 0x221304u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_221308:
    // 0x221308: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
label_22130c:
    if (ctx->pc == 0x22130Cu) {
        ctx->pc = 0x22130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221308u;
        // 0x22130c: 0x26940090  addiu       $s4, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221310u;
        goto label_221310;
    }
    ctx->pc = 0x221308u;
    {
        const bool branch_taken_0x221308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221308u;
        // 0x22130c: 0x26940090  addiu       $s4, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221308) {
            ctx->pc = 0x221294u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221294;
        }
    }
    ctx->pc = 0x221310u;
label_221310:
    // 0x221310: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
label_221314:
    if (ctx->pc == 0x221314u) {
        ctx->pc = 0x221314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221310u;
        // 0x221314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221318u;
        goto label_221318;
    }
    ctx->pc = 0x221310u;
    {
        const bool branch_taken_0x221310 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x221314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221310u;
        // 0x221314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221310) {
            ctx->pc = 0x221340u;
            goto label_221340;
        }
    }
    ctx->pc = 0x221318u;
label_221318:
    // 0x221318: 0xc0885fc  jal         func_2217F0
label_22131c:
    if (ctx->pc == 0x22131Cu) {
        ctx->pc = 0x221320u;
        goto label_221320;
    }
    ctx->pc = 0x221318u;
    SET_GPR_U32(ctx, 31, 0x221320u);
    ctx->pc = 0x2217F0u;
    { ctx->pc = 0x2217f0; return; }
    ctx->pc = 0x221320u;
label_221320:
    // 0x221320: 0x92230035  lbu         $v1, 0x35($s1)
    ctx->pc = 0x221320u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
label_221324:
    // 0x221324: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_221328:
    if (ctx->pc == 0x221328u) {
        ctx->pc = 0x221328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221324u;
        // 0x221328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22132Cu;
        goto label_22132c;
    }
    ctx->pc = 0x221324u;
    {
        const bool branch_taken_0x221324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x221328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221324u;
        // 0x221328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221324) {
            ctx->pc = 0x221334u;
            goto label_221334;
        }
    }
    ctx->pc = 0x22132Cu;
label_22132c:
    // 0x22132c: 0xc05d518  jal         func_175460
label_221330:
    if (ctx->pc == 0x221330u) {
        ctx->pc = 0x221330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22132Cu;
        // 0x221330: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221334u;
        goto label_221334;
    }
    ctx->pc = 0x22132Cu;
    SET_GPR_U32(ctx, 31, 0x221334u);
    ctx->pc = 0x221330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22132Cu;
    // 0x221330: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175460u, 0x22132Cu, 0x221334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221334u;
label_221334:
    // 0x221334: 0x0  nop
    ctx->pc = 0x221334u;
    // NOP
label_221338:
    // 0x221338: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x221338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22133c:
    // 0x22133c: 0xa2a30000  sb          $v1, 0x0($s5)
    ctx->pc = 0x22133cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
label_221340:
    // 0x221340: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x221340u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_221344:
    // 0x221344: 0x2bc3000c  slti        $v1, $fp, 0xC
    ctx->pc = 0x221344u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)12) ? 1 : 0);
label_221348:
    // 0x221348: 0x1460feda  bnez        $v1, . + 4 + (-0x126 << 2)
label_22134c:
    if (ctx->pc == 0x22134Cu) {
        ctx->pc = 0x22134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221348u;
        // 0x22134c: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221350u;
        goto label_221350;
    }
    ctx->pc = 0x221348u;
    {
        const bool branch_taken_0x221348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221348u;
        // 0x22134c: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221348) {
            ctx->pc = 0x220EB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220eb4;
        }
    }
    ctx->pc = 0x221350u;
label_221350:
    // 0x221350: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x221350u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221354:
    // 0x221354: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x221354u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221358:
    // 0x221358: 0x0  nop
    ctx->pc = 0x221358u;
    // NOP
label_22135c:
    // 0x22135c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x22135cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_221360:
    // 0x221360: 0x24634a30  addiu       $v1, $v1, 0x4A30
    ctx->pc = 0x221360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18992));
label_221364:
    // 0x221364: 0x762021  addu        $a0, $v1, $s6
    ctx->pc = 0x221364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_221368:
    // 0x221368: 0x90830033  lbu         $v1, 0x33($a0)
    ctx->pc = 0x221368u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 51)));
label_22136c:
    // 0x22136c: 0x1460010e  bnez        $v1, . + 4 + (0x10E << 2)
label_221370:
    if (ctx->pc == 0x221370u) {
        ctx->pc = 0x221370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22136Cu;
        // 0x221370: 0x24910033  addiu       $s1, $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 51));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221374u;
        goto label_221374;
    }
    ctx->pc = 0x22136Cu;
    {
        const bool branch_taken_0x22136c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x221370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22136Cu;
        // 0x221370: 0x24910033  addiu       $s1, $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22136c) {
            ctx->pc = 0x2217A8u;
            { ctx->pc = 0x2217a8; return; }
        }
    }
    ctx->pc = 0x221374u;
label_221374:
    // 0x221374: 0x90860030  lbu         $a2, 0x30($a0)
    ctx->pc = 0x221374u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
label_221378:
    // 0x221378: 0x3c13002f  lui         $s3, 0x2F
    ctx->pc = 0x221378u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)47 << 16));
label_22137c:
    // 0x22137c: 0x90850031  lbu         $a1, 0x31($a0)
    ctx->pc = 0x22137cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
label_221380:
    // 0x221380: 0x26732570  addiu       $s3, $s3, 0x2570
    ctx->pc = 0x221380u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 9584));
label_221384:
    // 0x221384: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x221384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_221388:
    // 0x221388: 0x62200  sll         $a0, $a2, 8
    ctx->pc = 0x221388u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_22138c:
    // 0x22138c: 0x863023  subu        $a2, $a0, $a2
    ctx->pc = 0x22138cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_221390:
    // 0x221390: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x221390u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_221394:
    // 0x221394: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x221394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_221398:
    // 0x221398: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x221398u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_22139c:
    // 0x22139c: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x22139cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2213a0:
    // 0x2213a0: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x2213a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2213a4:
    // 0x2213a4: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2213a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2213a8:
    // 0x2213a8: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x2213a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_2213ac:
    // 0x2213ac: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x2213acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_2213b0:
    // 0x2213b0: 0x859021  addu        $s2, $a0, $a1
    ctx->pc = 0x2213b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2213b4:
    // 0x2213b4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2213b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2213b8:
    // 0x2213b8: 0x90840012  lbu         $a0, 0x12($a0)
    ctx->pc = 0x2213b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
label_2213bc:
    // 0x2213bc: 0x148300c3  bne         $a0, $v1, . + 4 + (0xC3 << 2)
label_2213c0:
    if (ctx->pc == 0x2213C0u) {
        ctx->pc = 0x2213C4u;
        goto label_2213c4;
    }
    ctx->pc = 0x2213BCu;
    {
        const bool branch_taken_0x2213bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2213bc) {
            ctx->pc = 0x2216CCu;
            { ctx->pc = 0x2216cc; return; }
        }
    }
    ctx->pc = 0x2213C4u;
label_2213c4:
    // 0x2213c4: 0x92430034  lbu         $v1, 0x34($s2)
    ctx->pc = 0x2213c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
label_2213c8:
    // 0x2213c8: 0x14600045  bnez        $v1, . + 4 + (0x45 << 2)
label_2213cc:
    if (ctx->pc == 0x2213CCu) {
        ctx->pc = 0x2213CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2213C8u;
        // 0x2213cc: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2213D0u;
        goto label_2213d0;
    }
    ctx->pc = 0x2213C8u;
    {
        const bool branch_taken_0x2213c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2213CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2213C8u;
        // 0x2213cc: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2213c8) {
            ctx->pc = 0x2214E0u;
            goto label_2214e0;
        }
    }
    ctx->pc = 0x2213D0u;
label_2213d0:
    // 0x2213d0: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_2213d4:
    if (ctx->pc == 0x2213D4u) {
        ctx->pc = 0x2213D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2213D0u;
        // 0x2213d4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2213D8u;
        goto label_2213d8;
    }
    ctx->pc = 0x2213D0u;
    {
        const bool branch_taken_0x2213d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2213D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2213D0u;
        // 0x2213d4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2213d0) {
            ctx->pc = 0x221410u;
            goto label_221410;
        }
    }
    ctx->pc = 0x2213D8u;
label_2213d8:
    // 0x2213d8: 0xc044894  jal         func_112250
label_2213dc:
    if (ctx->pc == 0x2213DCu) {
        ctx->pc = 0x2213DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2213D8u;
        // 0x2213dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2213E0u;
        goto label_2213e0;
    }
    ctx->pc = 0x2213D8u;
    SET_GPR_U32(ctx, 31, 0x2213E0u);
    ctx->pc = 0x2213DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2213D8u;
    // 0x2213dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112250u, 0x2213D8u, 0x2213E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2213E0u;
label_2213e0:
    // 0x2213e0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2213e4:
    if (ctx->pc == 0x2213E4u) {
        ctx->pc = 0x2213E8u;
        goto label_2213e8;
    }
    ctx->pc = 0x2213E0u;
    {
        const bool branch_taken_0x2213e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2213e0) {
            ctx->pc = 0x2213FCu;
            goto label_2213fc;
        }
    }
    ctx->pc = 0x2213E8u;
label_2213e8:
    // 0x2213e8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2213e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2213ec:
    // 0x2213ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2213ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2213f0:
    // 0x2213f0: 0x90840012  lbu         $a0, 0x12($a0)
    ctx->pc = 0x2213f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
label_2213f4:
    // 0x2213f4: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_2213f8:
    if (ctx->pc == 0x2213F8u) {
        ctx->pc = 0x2213FCu;
        goto label_2213fc;
    }
    ctx->pc = 0x2213F4u;
    {
        const bool branch_taken_0x2213f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2213f4) {
            ctx->pc = 0x221410u;
            goto label_221410;
        }
    }
    ctx->pc = 0x2213FCu;
label_2213fc:
    // 0x2213fc: 0x0  nop
    ctx->pc = 0x2213fcu;
    // NOP
label_221400:
    // 0x221400: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x221400u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_221404:
    // 0x221404: 0x290182a  slt         $v1, $s4, $s0
    ctx->pc = 0x221404u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_221408:
    // 0x221408: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_22140c:
    if (ctx->pc == 0x22140Cu) {
        ctx->pc = 0x22140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221408u;
        // 0x22140c: 0x26730048  addiu       $s3, $s3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221410u;
        goto label_221410;
    }
    ctx->pc = 0x221408u;
    {
        const bool branch_taken_0x221408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221408u;
        // 0x22140c: 0x26730048  addiu       $s3, $s3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221408) {
            ctx->pc = 0x2213D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2213d8;
        }
    }
    ctx->pc = 0x221410u;
label_221410:
    // 0x221410: 0x169000e5  bne         $s4, $s0, . + 4 + (0xE5 << 2)
label_221414:
    if (ctx->pc == 0x221414u) {
        ctx->pc = 0x221414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221410u;
        // 0x221414: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221418u;
        goto label_221418;
    }
    ctx->pc = 0x221410u;
    {
        const bool branch_taken_0x221410 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 16));
        ctx->pc = 0x221414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221410u;
        // 0x221414: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221410) {
            ctx->pc = 0x2217A8u;
            { ctx->pc = 0x2217a8; return; }
        }
    }
    ctx->pc = 0x221418u;
label_221418:
    // 0x221418: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x221418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22141c:
    // 0x22141c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22141cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221420:
    // 0x221420: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x221420u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221424:
    // 0x221424: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x221424u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221428:
    // 0x221428: 0xc05d3e4  jal         func_174F90
label_22142c:
    if (ctx->pc == 0x22142Cu) {
        ctx->pc = 0x22142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221428u;
        // 0x22142c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221430u;
        goto label_221430;
    }
    ctx->pc = 0x221428u;
    SET_GPR_U32(ctx, 31, 0x221430u);
    ctx->pc = 0x22142Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221428u;
    // 0x22142c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x221428u, 0x221430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221430u;
label_221430:
    // 0x221430: 0x92430045  lbu         $v1, 0x45($s2)
    ctx->pc = 0x221430u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 69)));
label_221434:
    // 0x221434: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x221434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_221438:
    // 0x221438: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_22143c:
    if (ctx->pc == 0x22143Cu) {
        ctx->pc = 0x221440u;
        goto label_221440;
    }
    ctx->pc = 0x221438u;
    {
        const bool branch_taken_0x221438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x221438) {
            ctx->pc = 0x22144Cu;
            goto label_22144c;
        }
    }
    ctx->pc = 0x221440u;
label_221440:
    // 0x221440: 0xaf8392d8  sw          $v1, -0x6D28($gp)
    ctx->pc = 0x221440u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939352), GPR_U32(ctx, 3));
label_221444:
    // 0x221444: 0xc089738  jal         func_225CE0
label_221448:
    if (ctx->pc == 0x221448u) {
        ctx->pc = 0x221448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221444u;
        // 0x221448: 0x92440045  lbu         $a0, 0x45($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 69)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22144Cu;
        goto label_22144c;
    }
    ctx->pc = 0x221444u;
    SET_GPR_U32(ctx, 31, 0x22144Cu);
    ctx->pc = 0x221448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221444u;
    // 0x221448: 0x92440045  lbu         $a0, 0x45($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 69)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225CE0u;
    { ctx->pc = 0x225ce0; return; }
    ctx->pc = 0x22144Cu;
label_22144c:
    // 0x22144c: 0x0  nop
    ctx->pc = 0x22144cu;
    // NOP
label_221450:
    // 0x221450: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x221450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_221454:
    // 0x221454: 0xc088864  jal         func_222190
label_221458:
    if (ctx->pc == 0x221458u) {
        ctx->pc = 0x221458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221454u;
        // 0x221458: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22145Cu;
        goto label_22145c;
    }
    ctx->pc = 0x221454u;
    SET_GPR_U32(ctx, 31, 0x22145Cu);
    ctx->pc = 0x221458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221454u;
    // 0x221458: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222190u;
    { ctx->pc = 0x222190; return; }
    ctx->pc = 0x22145Cu;
label_22145c:
    // 0x22145c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_221460:
    if (ctx->pc == 0x221460u) {
        ctx->pc = 0x221460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22145Cu;
        // 0x221460: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221464u;
        goto label_221464;
    }
    ctx->pc = 0x22145Cu;
    {
        const bool branch_taken_0x22145c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22145Cu;
        // 0x221460: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22145c) {
            ctx->pc = 0x22146Cu;
            goto label_22146c;
        }
    }
    ctx->pc = 0x221464u;
label_221464:
    // 0x221464: 0x1000000d  b           . + 4 + (0xD << 2)
label_221468:
    if (ctx->pc == 0x221468u) {
        ctx->pc = 0x22146Cu;
        goto label_22146c;
    }
    ctx->pc = 0x221464u;
    {
        const bool branch_taken_0x221464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221464) {
            ctx->pc = 0x22149Cu;
            goto label_22149c;
        }
    }
    ctx->pc = 0x22146Cu;
label_22146c:
    // 0x22146c: 0x0  nop
    ctx->pc = 0x22146cu;
    // NOP
label_221470:
    // 0x221470: 0xc08894c  jal         func_222530
label_221474:
    if (ctx->pc == 0x221474u) {
        ctx->pc = 0x221474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221470u;
        // 0x221474: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221478u;
        goto label_221478;
    }
    ctx->pc = 0x221470u;
    SET_GPR_U32(ctx, 31, 0x221478u);
    ctx->pc = 0x221474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221470u;
    // 0x221474: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222530u;
    { ctx->pc = 0x222530; return; }
    ctx->pc = 0x221478u;
label_221478:
    // 0x221478: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_22147c:
    if (ctx->pc == 0x22147Cu) {
        ctx->pc = 0x221480u;
        goto label_221480;
    }
    ctx->pc = 0x221478u;
    {
        const bool branch_taken_0x221478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221478) {
            ctx->pc = 0x221490u;
            goto label_221490;
        }
    }
    ctx->pc = 0x221480u;
label_221480:
    // 0x221480: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x221480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_221484:
    // 0x221484: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x221484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_221488:
    // 0x221488: 0x10000004  b           . + 4 + (0x4 << 2)
label_22148c:
    if (ctx->pc == 0x22148Cu) {
        ctx->pc = 0x22148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221488u;
        // 0x22148c: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221490u;
        goto label_221490;
    }
    ctx->pc = 0x221488u;
    {
        const bool branch_taken_0x221488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221488u;
        // 0x22148c: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221488) {
            ctx->pc = 0x22149Cu;
            goto label_22149c;
        }
    }
    ctx->pc = 0x221490u;
label_221490:
    // 0x221490: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x221490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_221494:
    // 0x221494: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x221494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_221498:
    // 0x221498: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x221498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_22149c:
    // 0x22149c: 0x0  nop
    ctx->pc = 0x22149cu;
    // NOP
label_2214a0:
    // 0x2214a0: 0x92460034  lbu         $a2, 0x34($s2)
    ctx->pc = 0x2214a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
label_2214a4:
    // 0x2214a4: 0x92470035  lbu         $a3, 0x35($s2)
    ctx->pc = 0x2214a4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 53)));
label_2214a8:
    // 0x2214a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2214a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2214ac:
    // 0x2214ac: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2214acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2214b0:
    // 0x2214b0: 0xc05d3e4  jal         func_174F90
label_2214b4:
    if (ctx->pc == 0x2214B4u) {
        ctx->pc = 0x2214B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2214B0u;
        // 0x2214b4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2214B8u;
        goto label_2214b8;
    }
    ctx->pc = 0x2214B0u;
    SET_GPR_U32(ctx, 31, 0x2214B8u);
    ctx->pc = 0x2214B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2214B0u;
    // 0x2214b4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x2214B0u, 0x2214B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2214B8u;
label_2214b8:
    // 0x2214b8: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x2214b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_2214bc:
    // 0x2214bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2214bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2214c0:
    // 0x2214c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2214c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2214c4:
    // 0x2214c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2214c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2214c8:
    // 0x2214c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2214c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2214cc:
    // 0x2214cc: 0xc05d3e4  jal         func_174F90
label_2214d0:
    if (ctx->pc == 0x2214D0u) {
        ctx->pc = 0x2214D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2214CCu;
        // 0x2214d0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2214D4u;
        goto label_2214d4;
    }
    ctx->pc = 0x2214CCu;
    SET_GPR_U32(ctx, 31, 0x2214D4u);
    ctx->pc = 0x2214D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2214CCu;
    // 0x2214d0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x2214CCu, 0x2214D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2214D4u;
label_2214d4:
    // 0x2214d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2214d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2214d8:
    // 0x2214d8: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_2214dc:
    if (ctx->pc == 0x2214DCu) {
        ctx->pc = 0x2214DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2214D8u;
        // 0x2214dc: 0xa2230000  sb          $v1, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2214E0u;
        goto label_2214e0;
    }
    ctx->pc = 0x2214D8u;
    {
        const bool branch_taken_0x2214d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2214DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2214D8u;
        // 0x2214dc: 0xa2230000  sb          $v1, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2214d8) {
            ctx->pc = 0x2217A8u;
            { ctx->pc = 0x2217a8; return; }
        }
    }
    ctx->pc = 0x2214E0u;
label_2214e0:
    // 0x2214e0: 0x3c13002f  lui         $s3, 0x2F
    ctx->pc = 0x2214e0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)47 << 16));
label_2214e4:
    // 0x2214e4: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x2214e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2214e8:
    // 0x2214e8: 0x26736d28  addiu       $s3, $s3, 0x6D28
    ctx->pc = 0x2214e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 27944));
label_2214ec:
    // 0x2214ec: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_2214f0:
    if (ctx->pc == 0x2214F0u) {
        ctx->pc = 0x2214F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2214ECu;
        // 0x2214f0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2214F4u;
        goto label_2214f4;
    }
    ctx->pc = 0x2214ECu;
    {
        const bool branch_taken_0x2214ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2214F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2214ECu;
        // 0x2214f0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2214ec) {
            ctx->pc = 0x221530u;
            goto label_221530;
        }
    }
    ctx->pc = 0x2214F4u;
label_2214f4:
    // 0x2214f4: 0x0  nop
    ctx->pc = 0x2214f4u;
    // NOP
label_2214f8:
    // 0x2214f8: 0xc044894  jal         func_112250
label_2214fc:
    if (ctx->pc == 0x2214FCu) {
        ctx->pc = 0x2214FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2214F8u;
        // 0x2214fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221500u;
        goto label_221500;
    }
    ctx->pc = 0x2214F8u;
    SET_GPR_U32(ctx, 31, 0x221500u);
    ctx->pc = 0x2214FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2214F8u;
    // 0x2214fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112250u, 0x2214F8u, 0x221500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221500u;
label_221500:
    // 0x221500: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_221504:
    if (ctx->pc == 0x221504u) {
        ctx->pc = 0x221508u;
        goto label_221508;
    }
    ctx->pc = 0x221500u;
    {
        const bool branch_taken_0x221500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x221500) {
            ctx->pc = 0x22151Cu;
            goto label_22151c;
        }
    }
    ctx->pc = 0x221508u;
label_221508:
    // 0x221508: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x221508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_22150c:
    // 0x22150c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22150cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_221510:
    // 0x221510: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x221510u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_221514:
    // 0x221514: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_221518:
    if (ctx->pc == 0x221518u) {
        ctx->pc = 0x22151Cu;
        goto label_22151c;
    }
    ctx->pc = 0x221514u;
    {
        const bool branch_taken_0x221514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x221514) {
            ctx->pc = 0x221530u;
            goto label_221530;
        }
    }
    ctx->pc = 0x22151Cu;
label_22151c:
    // 0x22151c: 0x0  nop
    ctx->pc = 0x22151cu;
    // NOP
label_221520:
    // 0x221520: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x221520u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_221524:
    // 0x221524: 0x290102a  slt         $v0, $s4, $s0
    ctx->pc = 0x221524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_221528:
    // 0x221528: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_22152c:
    if (ctx->pc == 0x22152Cu) {
        ctx->pc = 0x22152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221528u;
        // 0x22152c: 0x26730048  addiu       $s3, $s3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221530u;
        goto label_221530;
    }
    ctx->pc = 0x221528u;
    {
        const bool branch_taken_0x221528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221528u;
        // 0x22152c: 0x26730048  addiu       $s3, $s3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221528) {
            ctx->pc = 0x2214F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2214f4;
        }
    }
    ctx->pc = 0x221530u;
label_221530:
    // 0x221530: 0x16900033  bne         $s4, $s0, . + 4 + (0x33 << 2)
label_221534:
    if (ctx->pc == 0x221534u) {
        ctx->pc = 0x221534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221530u;
        // 0x221534: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221538u;
        goto label_221538;
    }
    ctx->pc = 0x221530u;
    {
        const bool branch_taken_0x221530 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 16));
        ctx->pc = 0x221534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221530u;
        // 0x221534: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221530) {
            ctx->pc = 0x221600u;
            { ctx->pc = 0x221600; return; }
        }
    }
    ctx->pc = 0x221538u;
label_221538:
    // 0x221538: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x221538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22153c:
    // 0x22153c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22153cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221540:
    // 0x221540: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x221540u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221544:
    // 0x221544: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x221544u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221548:
    // 0x221548: 0xc05d3e4  jal         func_174F90
label_22154c:
    if (ctx->pc == 0x22154Cu) {
        ctx->pc = 0x22154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221548u;
        // 0x22154c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221550u;
        goto label_221550;
    }
    ctx->pc = 0x221548u;
    SET_GPR_U32(ctx, 31, 0x221550u);
    ctx->pc = 0x22154Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221548u;
    // 0x22154c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x221548u, 0x221550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221550u;
label_221550:
    // 0x221550: 0x92430045  lbu         $v1, 0x45($s2)
    ctx->pc = 0x221550u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 69)));
label_221554:
    // 0x221554: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x221554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_221558:
    // 0x221558: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_22155c:
    if (ctx->pc == 0x22155Cu) {
        ctx->pc = 0x221560u;
        goto label_221560;
    }
    ctx->pc = 0x221558u;
    {
        const bool branch_taken_0x221558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x221558) {
            ctx->pc = 0x22156Cu;
            goto label_22156c;
        }
    }
    ctx->pc = 0x221560u;
label_221560:
    // 0x221560: 0xaf8392d8  sw          $v1, -0x6D28($gp)
    ctx->pc = 0x221560u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939352), GPR_U32(ctx, 3));
label_221564:
    // 0x221564: 0xc089738  jal         func_225CE0
label_221568:
    if (ctx->pc == 0x221568u) {
        ctx->pc = 0x221568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221564u;
        // 0x221568: 0x92440045  lbu         $a0, 0x45($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 69)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22156Cu;
        goto label_22156c;
    }
    ctx->pc = 0x221564u;
    SET_GPR_U32(ctx, 31, 0x22156Cu);
    ctx->pc = 0x221568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221564u;
    // 0x221568: 0x92440045  lbu         $a0, 0x45($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 69)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225CE0u;
    { ctx->pc = 0x225ce0; return; }
    ctx->pc = 0x22156Cu;
label_22156c:
    // 0x22156c: 0x0  nop
    ctx->pc = 0x22156cu;
    // NOP
    ctx->pc = 0x221570u;
    return;
}

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

// Function: FUN_0019b850
// Address: 0x19b850 - 0x29b858
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b850_part444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x273d40u: goto label_273d40;
        case 0x273d44u: goto label_273d44;
        case 0x273d48u: goto label_273d48;
        case 0x273d4cu: goto label_273d4c;
        case 0x273d50u: goto label_273d50;
        case 0x273d54u: goto label_273d54;
        case 0x273d58u: goto label_273d58;
        case 0x273d5cu: goto label_273d5c;
        case 0x273d60u: goto label_273d60;
        case 0x273d64u: goto label_273d64;
        case 0x273d68u: goto label_273d68;
        case 0x273d6cu: goto label_273d6c;
        case 0x273d70u: goto label_273d70;
        case 0x273d74u: goto label_273d74;
        case 0x273d78u: goto label_273d78;
        case 0x273d7cu: goto label_273d7c;
        case 0x273d80u: goto label_273d80;
        case 0x273d84u: goto label_273d84;
        case 0x273d88u: goto label_273d88;
        case 0x273d8cu: goto label_273d8c;
        case 0x273d90u: goto label_273d90;
        case 0x273d94u: goto label_273d94;
        case 0x273d98u: goto label_273d98;
        case 0x273d9cu: goto label_273d9c;
        case 0x273da0u: goto label_273da0;
        case 0x273da4u: goto label_273da4;
        case 0x273da8u: goto label_273da8;
        case 0x273dacu: goto label_273dac;
        case 0x273db0u: goto label_273db0;
        case 0x273db4u: goto label_273db4;
        case 0x273db8u: goto label_273db8;
        case 0x273dbcu: goto label_273dbc;
        case 0x273dc0u: goto label_273dc0;
        case 0x273dc4u: goto label_273dc4;
        case 0x273dc8u: goto label_273dc8;
        case 0x273dccu: goto label_273dcc;
        case 0x273dd0u: goto label_273dd0;
        case 0x273dd4u: goto label_273dd4;
        case 0x273dd8u: goto label_273dd8;
        case 0x273ddcu: goto label_273ddc;
        case 0x273de0u: goto label_273de0;
        case 0x273de4u: goto label_273de4;
        case 0x273de8u: goto label_273de8;
        case 0x273decu: goto label_273dec;
        case 0x273df0u: goto label_273df0;
        case 0x273df4u: goto label_273df4;
        case 0x273df8u: goto label_273df8;
        case 0x273dfcu: goto label_273dfc;
        case 0x273e00u: goto label_273e00;
        case 0x273e04u: goto label_273e04;
        case 0x273e08u: goto label_273e08;
        case 0x273e0cu: goto label_273e0c;
        case 0x273e10u: goto label_273e10;
        case 0x273e14u: goto label_273e14;
        case 0x273e18u: goto label_273e18;
        case 0x273e1cu: goto label_273e1c;
        case 0x273e20u: goto label_273e20;
        case 0x273e24u: goto label_273e24;
        case 0x273e28u: goto label_273e28;
        case 0x273e2cu: goto label_273e2c;
        case 0x273e30u: goto label_273e30;
        case 0x273e34u: goto label_273e34;
        case 0x273e38u: goto label_273e38;
        case 0x273e3cu: goto label_273e3c;
        case 0x273e40u: goto label_273e40;
        case 0x273e44u: goto label_273e44;
        case 0x273e48u: goto label_273e48;
        case 0x273e4cu: goto label_273e4c;
        case 0x273e50u: goto label_273e50;
        case 0x273e54u: goto label_273e54;
        case 0x273e58u: goto label_273e58;
        case 0x273e5cu: goto label_273e5c;
        case 0x273e60u: goto label_273e60;
        case 0x273e64u: goto label_273e64;
        case 0x273e68u: goto label_273e68;
        case 0x273e6cu: goto label_273e6c;
        case 0x273e70u: goto label_273e70;
        case 0x273e74u: goto label_273e74;
        case 0x273e78u: goto label_273e78;
        case 0x273e7cu: goto label_273e7c;
        case 0x273e80u: goto label_273e80;
        case 0x273e84u: goto label_273e84;
        case 0x273e88u: goto label_273e88;
        case 0x273e8cu: goto label_273e8c;
        case 0x273e90u: goto label_273e90;
        case 0x273e94u: goto label_273e94;
        case 0x273e98u: goto label_273e98;
        case 0x273e9cu: goto label_273e9c;
        case 0x273ea0u: goto label_273ea0;
        case 0x273ea4u: goto label_273ea4;
        case 0x273ea8u: goto label_273ea8;
        case 0x273eacu: goto label_273eac;
        case 0x273eb0u: goto label_273eb0;
        case 0x273eb4u: goto label_273eb4;
        case 0x273eb8u: goto label_273eb8;
        case 0x273ebcu: goto label_273ebc;
        case 0x273ec0u: goto label_273ec0;
        case 0x273ec4u: goto label_273ec4;
        case 0x273ec8u: goto label_273ec8;
        case 0x273eccu: goto label_273ecc;
        case 0x273ed0u: goto label_273ed0;
        case 0x273ed4u: goto label_273ed4;
        case 0x273ed8u: goto label_273ed8;
        case 0x273edcu: goto label_273edc;
        case 0x273ee0u: goto label_273ee0;
        case 0x273ee4u: goto label_273ee4;
        case 0x273ee8u: goto label_273ee8;
        case 0x273eecu: goto label_273eec;
        case 0x273ef0u: goto label_273ef0;
        case 0x273ef4u: goto label_273ef4;
        case 0x273ef8u: goto label_273ef8;
        case 0x273efcu: goto label_273efc;
        case 0x273f00u: goto label_273f00;
        case 0x273f04u: goto label_273f04;
        case 0x273f08u: goto label_273f08;
        case 0x273f0cu: goto label_273f0c;
        case 0x273f10u: goto label_273f10;
        case 0x273f14u: goto label_273f14;
        case 0x273f18u: goto label_273f18;
        case 0x273f1cu: goto label_273f1c;
        case 0x273f20u: goto label_273f20;
        case 0x273f24u: goto label_273f24;
        case 0x273f28u: goto label_273f28;
        case 0x273f2cu: goto label_273f2c;
        case 0x273f30u: goto label_273f30;
        case 0x273f34u: goto label_273f34;
        case 0x273f38u: goto label_273f38;
        case 0x273f3cu: goto label_273f3c;
        case 0x273f40u: goto label_273f40;
        case 0x273f44u: goto label_273f44;
        case 0x273f48u: goto label_273f48;
        case 0x273f4cu: goto label_273f4c;
        case 0x273f50u: goto label_273f50;
        case 0x273f54u: goto label_273f54;
        case 0x273f58u: goto label_273f58;
        case 0x273f5cu: goto label_273f5c;
        case 0x273f60u: goto label_273f60;
        case 0x273f64u: goto label_273f64;
        case 0x273f68u: goto label_273f68;
        case 0x273f6cu: goto label_273f6c;
        case 0x273f70u: goto label_273f70;
        case 0x273f74u: goto label_273f74;
        case 0x273f78u: goto label_273f78;
        case 0x273f7cu: goto label_273f7c;
        case 0x273f80u: goto label_273f80;
        case 0x273f84u: goto label_273f84;
        case 0x273f88u: goto label_273f88;
        case 0x273f8cu: goto label_273f8c;
        case 0x273f90u: goto label_273f90;
        case 0x273f94u: goto label_273f94;
        case 0x273f98u: goto label_273f98;
        case 0x273f9cu: goto label_273f9c;
        case 0x273fa0u: goto label_273fa0;
        case 0x273fa4u: goto label_273fa4;
        case 0x273fa8u: goto label_273fa8;
        case 0x273facu: goto label_273fac;
        case 0x273fb0u: goto label_273fb0;
        case 0x273fb4u: goto label_273fb4;
        case 0x273fb8u: goto label_273fb8;
        case 0x273fbcu: goto label_273fbc;
        case 0x273fc0u: goto label_273fc0;
        case 0x273fc4u: goto label_273fc4;
        case 0x273fc8u: goto label_273fc8;
        case 0x273fccu: goto label_273fcc;
        case 0x273fd0u: goto label_273fd0;
        case 0x273fd4u: goto label_273fd4;
        case 0x273fd8u: goto label_273fd8;
        case 0x273fdcu: goto label_273fdc;
        case 0x273fe0u: goto label_273fe0;
        case 0x273fe4u: goto label_273fe4;
        case 0x273fe8u: goto label_273fe8;
        case 0x273fecu: goto label_273fec;
        case 0x273ff0u: goto label_273ff0;
        case 0x273ff4u: goto label_273ff4;
        case 0x273ff8u: goto label_273ff8;
        case 0x273ffcu: goto label_273ffc;
        case 0x274000u: goto label_274000;
        case 0x274004u: goto label_274004;
        case 0x274008u: goto label_274008;
        case 0x27400cu: goto label_27400c;
        case 0x274010u: goto label_274010;
        case 0x274014u: goto label_274014;
        case 0x274018u: goto label_274018;
        case 0x27401cu: goto label_27401c;
        case 0x274020u: goto label_274020;
        case 0x274024u: goto label_274024;
        case 0x274028u: goto label_274028;
        case 0x27402cu: goto label_27402c;
        case 0x274030u: goto label_274030;
        case 0x274034u: goto label_274034;
        case 0x274038u: goto label_274038;
        case 0x27403cu: goto label_27403c;
        case 0x274040u: goto label_274040;
        case 0x274044u: goto label_274044;
        case 0x274048u: goto label_274048;
        case 0x27404cu: goto label_27404c;
        case 0x274050u: goto label_274050;
        case 0x274054u: goto label_274054;
        case 0x274058u: goto label_274058;
        case 0x27405cu: goto label_27405c;
        case 0x274060u: goto label_274060;
        case 0x274064u: goto label_274064;
        case 0x274068u: goto label_274068;
        case 0x27406cu: goto label_27406c;
        case 0x274070u: goto label_274070;
        case 0x274074u: goto label_274074;
        case 0x274078u: goto label_274078;
        case 0x27407cu: goto label_27407c;
        case 0x274080u: goto label_274080;
        case 0x274084u: goto label_274084;
        case 0x274088u: goto label_274088;
        case 0x27408cu: goto label_27408c;
        case 0x274090u: goto label_274090;
        case 0x274094u: goto label_274094;
        case 0x274098u: goto label_274098;
        case 0x27409cu: goto label_27409c;
        case 0x2740a0u: goto label_2740a0;
        case 0x2740a4u: goto label_2740a4;
        case 0x2740a8u: goto label_2740a8;
        case 0x2740acu: goto label_2740ac;
        case 0x2740b0u: goto label_2740b0;
        case 0x2740b4u: goto label_2740b4;
        case 0x2740b8u: goto label_2740b8;
        case 0x2740bcu: goto label_2740bc;
        case 0x2740c0u: goto label_2740c0;
        case 0x2740c4u: goto label_2740c4;
        case 0x2740c8u: goto label_2740c8;
        case 0x2740ccu: goto label_2740cc;
        case 0x2740d0u: goto label_2740d0;
        case 0x2740d4u: goto label_2740d4;
        case 0x2740d8u: goto label_2740d8;
        case 0x2740dcu: goto label_2740dc;
        case 0x2740e0u: goto label_2740e0;
        case 0x2740e4u: goto label_2740e4;
        case 0x2740e8u: goto label_2740e8;
        case 0x2740ecu: goto label_2740ec;
        case 0x2740f0u: goto label_2740f0;
        case 0x2740f4u: goto label_2740f4;
        case 0x2740f8u: goto label_2740f8;
        case 0x2740fcu: goto label_2740fc;
        case 0x274100u: goto label_274100;
        case 0x274104u: goto label_274104;
        case 0x274108u: goto label_274108;
        case 0x27410cu: goto label_27410c;
        case 0x274110u: goto label_274110;
        case 0x274114u: goto label_274114;
        case 0x274118u: goto label_274118;
        case 0x27411cu: goto label_27411c;
        case 0x274120u: goto label_274120;
        case 0x274124u: goto label_274124;
        case 0x274128u: goto label_274128;
        case 0x27412cu: goto label_27412c;
        case 0x274130u: goto label_274130;
        case 0x274134u: goto label_274134;
        case 0x274138u: goto label_274138;
        case 0x27413cu: goto label_27413c;
        case 0x274140u: goto label_274140;
        case 0x274144u: goto label_274144;
        case 0x274148u: goto label_274148;
        case 0x27414cu: goto label_27414c;
        case 0x274150u: goto label_274150;
        case 0x274154u: goto label_274154;
        case 0x274158u: goto label_274158;
        case 0x27415cu: goto label_27415c;
        case 0x274160u: goto label_274160;
        case 0x274164u: goto label_274164;
        case 0x274168u: goto label_274168;
        case 0x27416cu: goto label_27416c;
        case 0x274170u: goto label_274170;
        case 0x274174u: goto label_274174;
        case 0x274178u: goto label_274178;
        case 0x27417cu: goto label_27417c;
        case 0x274180u: goto label_274180;
        case 0x274184u: goto label_274184;
        case 0x274188u: goto label_274188;
        case 0x27418cu: goto label_27418c;
        case 0x274190u: goto label_274190;
        case 0x274194u: goto label_274194;
        case 0x274198u: goto label_274198;
        case 0x27419cu: goto label_27419c;
        case 0x2741a0u: goto label_2741a0;
        case 0x2741a4u: goto label_2741a4;
        case 0x2741a8u: goto label_2741a8;
        case 0x2741acu: goto label_2741ac;
        case 0x2741b0u: goto label_2741b0;
        case 0x2741b4u: goto label_2741b4;
        case 0x2741b8u: goto label_2741b8;
        case 0x2741bcu: goto label_2741bc;
        case 0x2741c0u: goto label_2741c0;
        case 0x2741c4u: goto label_2741c4;
        case 0x2741c8u: goto label_2741c8;
        case 0x2741ccu: goto label_2741cc;
        case 0x2741d0u: goto label_2741d0;
        case 0x2741d4u: goto label_2741d4;
        case 0x2741d8u: goto label_2741d8;
        case 0x2741dcu: goto label_2741dc;
        case 0x2741e0u: goto label_2741e0;
        case 0x2741e4u: goto label_2741e4;
        case 0x2741e8u: goto label_2741e8;
        case 0x2741ecu: goto label_2741ec;
        case 0x2741f0u: goto label_2741f0;
        case 0x2741f4u: goto label_2741f4;
        case 0x2741f8u: goto label_2741f8;
        case 0x2741fcu: goto label_2741fc;
        case 0x274200u: goto label_274200;
        case 0x274204u: goto label_274204;
        case 0x274208u: goto label_274208;
        case 0x27420cu: goto label_27420c;
        case 0x274210u: goto label_274210;
        case 0x274214u: goto label_274214;
        case 0x274218u: goto label_274218;
        case 0x27421cu: goto label_27421c;
        case 0x274220u: goto label_274220;
        case 0x274224u: goto label_274224;
        case 0x274228u: goto label_274228;
        case 0x27422cu: goto label_27422c;
        case 0x274230u: goto label_274230;
        case 0x274234u: goto label_274234;
        case 0x274238u: goto label_274238;
        case 0x27423cu: goto label_27423c;
        case 0x274240u: goto label_274240;
        case 0x274244u: goto label_274244;
        case 0x274248u: goto label_274248;
        case 0x27424cu: goto label_27424c;
        case 0x274250u: goto label_274250;
        case 0x274254u: goto label_274254;
        case 0x274258u: goto label_274258;
        case 0x27425cu: goto label_27425c;
        case 0x274260u: goto label_274260;
        case 0x274264u: goto label_274264;
        case 0x274268u: goto label_274268;
        case 0x27426cu: goto label_27426c;
        case 0x274270u: goto label_274270;
        case 0x274274u: goto label_274274;
        case 0x274278u: goto label_274278;
        case 0x27427cu: goto label_27427c;
        case 0x274280u: goto label_274280;
        case 0x274284u: goto label_274284;
        case 0x274288u: goto label_274288;
        case 0x27428cu: goto label_27428c;
        case 0x274290u: goto label_274290;
        case 0x274294u: goto label_274294;
        case 0x274298u: goto label_274298;
        case 0x27429cu: goto label_27429c;
        case 0x2742a0u: goto label_2742a0;
        case 0x2742a4u: goto label_2742a4;
        case 0x2742a8u: goto label_2742a8;
        case 0x2742acu: goto label_2742ac;
        case 0x2742b0u: goto label_2742b0;
        case 0x2742b4u: goto label_2742b4;
        case 0x2742b8u: goto label_2742b8;
        case 0x2742bcu: goto label_2742bc;
        case 0x2742c0u: goto label_2742c0;
        case 0x2742c4u: goto label_2742c4;
        case 0x2742c8u: goto label_2742c8;
        case 0x2742ccu: goto label_2742cc;
        case 0x2742d0u: goto label_2742d0;
        case 0x2742d4u: goto label_2742d4;
        case 0x2742d8u: goto label_2742d8;
        case 0x2742dcu: goto label_2742dc;
        case 0x2742e0u: goto label_2742e0;
        case 0x2742e4u: goto label_2742e4;
        case 0x2742e8u: goto label_2742e8;
        case 0x2742ecu: goto label_2742ec;
        case 0x2742f0u: goto label_2742f0;
        case 0x2742f4u: goto label_2742f4;
        case 0x2742f8u: goto label_2742f8;
        case 0x2742fcu: goto label_2742fc;
        case 0x274300u: goto label_274300;
        case 0x274304u: goto label_274304;
        case 0x274308u: goto label_274308;
        case 0x27430cu: goto label_27430c;
        case 0x274310u: goto label_274310;
        case 0x274314u: goto label_274314;
        case 0x274318u: goto label_274318;
        case 0x27431cu: goto label_27431c;
        case 0x274320u: goto label_274320;
        case 0x274324u: goto label_274324;
        case 0x274328u: goto label_274328;
        case 0x27432cu: goto label_27432c;
        case 0x274330u: goto label_274330;
        case 0x274334u: goto label_274334;
        case 0x274338u: goto label_274338;
        case 0x27433cu: goto label_27433c;
        case 0x274340u: goto label_274340;
        case 0x274344u: goto label_274344;
        case 0x274348u: goto label_274348;
        case 0x27434cu: goto label_27434c;
        case 0x274350u: goto label_274350;
        case 0x274354u: goto label_274354;
        case 0x274358u: goto label_274358;
        case 0x27435cu: goto label_27435c;
        case 0x274360u: goto label_274360;
        case 0x274364u: goto label_274364;
        case 0x274368u: goto label_274368;
        case 0x27436cu: goto label_27436c;
        case 0x274370u: goto label_274370;
        case 0x274374u: goto label_274374;
        case 0x274378u: goto label_274378;
        case 0x27437cu: goto label_27437c;
        case 0x274380u: goto label_274380;
        case 0x274384u: goto label_274384;
        case 0x274388u: goto label_274388;
        case 0x27438cu: goto label_27438c;
        case 0x274390u: goto label_274390;
        case 0x274394u: goto label_274394;
        case 0x274398u: goto label_274398;
        case 0x27439cu: goto label_27439c;
        case 0x2743a0u: goto label_2743a0;
        case 0x2743a4u: goto label_2743a4;
        case 0x2743a8u: goto label_2743a8;
        case 0x2743acu: goto label_2743ac;
        case 0x2743b0u: goto label_2743b0;
        case 0x2743b4u: goto label_2743b4;
        case 0x2743b8u: goto label_2743b8;
        case 0x2743bcu: goto label_2743bc;
        case 0x2743c0u: goto label_2743c0;
        case 0x2743c4u: goto label_2743c4;
        case 0x2743c8u: goto label_2743c8;
        case 0x2743ccu: goto label_2743cc;
        case 0x2743d0u: goto label_2743d0;
        case 0x2743d4u: goto label_2743d4;
        case 0x2743d8u: goto label_2743d8;
        case 0x2743dcu: goto label_2743dc;
        case 0x2743e0u: goto label_2743e0;
        case 0x2743e4u: goto label_2743e4;
        case 0x2743e8u: goto label_2743e8;
        case 0x2743ecu: goto label_2743ec;
        case 0x2743f0u: goto label_2743f0;
        case 0x2743f4u: goto label_2743f4;
        case 0x2743f8u: goto label_2743f8;
        case 0x2743fcu: goto label_2743fc;
        case 0x274400u: goto label_274400;
        case 0x274404u: goto label_274404;
        case 0x274408u: goto label_274408;
        case 0x27440cu: goto label_27440c;
        case 0x274410u: goto label_274410;
        case 0x274414u: goto label_274414;
        case 0x274418u: goto label_274418;
        case 0x27441cu: goto label_27441c;
        case 0x274420u: goto label_274420;
        case 0x274424u: goto label_274424;
        case 0x274428u: goto label_274428;
        case 0x27442cu: goto label_27442c;
        case 0x274430u: goto label_274430;
        case 0x274434u: goto label_274434;
        case 0x274438u: goto label_274438;
        case 0x27443cu: goto label_27443c;
        case 0x274440u: goto label_274440;
        case 0x274444u: goto label_274444;
        case 0x274448u: goto label_274448;
        case 0x27444cu: goto label_27444c;
        case 0x274450u: goto label_274450;
        case 0x274454u: goto label_274454;
        case 0x274458u: goto label_274458;
        case 0x27445cu: goto label_27445c;
        case 0x274460u: goto label_274460;
        case 0x274464u: goto label_274464;
        case 0x274468u: goto label_274468;
        case 0x27446cu: goto label_27446c;
        case 0x274470u: goto label_274470;
        case 0x274474u: goto label_274474;
        case 0x274478u: goto label_274478;
        case 0x27447cu: goto label_27447c;
        case 0x274480u: goto label_274480;
        case 0x274484u: goto label_274484;
        case 0x274488u: goto label_274488;
        case 0x27448cu: goto label_27448c;
        case 0x274490u: goto label_274490;
        case 0x274494u: goto label_274494;
        case 0x274498u: goto label_274498;
        case 0x27449cu: goto label_27449c;
        case 0x2744a0u: goto label_2744a0;
        case 0x2744a4u: goto label_2744a4;
        case 0x2744a8u: goto label_2744a8;
        case 0x2744acu: goto label_2744ac;
        case 0x2744b0u: goto label_2744b0;
        case 0x2744b4u: goto label_2744b4;
        case 0x2744b8u: goto label_2744b8;
        case 0x2744bcu: goto label_2744bc;
        case 0x2744c0u: goto label_2744c0;
        case 0x2744c4u: goto label_2744c4;
        case 0x2744c8u: goto label_2744c8;
        case 0x2744ccu: goto label_2744cc;
        case 0x2744d0u: goto label_2744d0;
        case 0x2744d4u: goto label_2744d4;
        case 0x2744d8u: goto label_2744d8;
        case 0x2744dcu: goto label_2744dc;
        case 0x2744e0u: goto label_2744e0;
        case 0x2744e4u: goto label_2744e4;
        case 0x2744e8u: goto label_2744e8;
        case 0x2744ecu: goto label_2744ec;
        case 0x2744f0u: goto label_2744f0;
        case 0x2744f4u: goto label_2744f4;
        case 0x2744f8u: goto label_2744f8;
        case 0x2744fcu: goto label_2744fc;
        case 0x274500u: goto label_274500;
        case 0x274504u: goto label_274504;
        case 0x274508u: goto label_274508;
        case 0x27450cu: goto label_27450c;
        default: return;
    }

label_273d40:
    // 0x273d40: 0xa98a  .word       0x0000A98A                   # movz        $s5, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d40u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_273d44:
    // 0x273d44: 0x16080  sll         $t4, $at, 2
    ctx->pc = 0x273d44u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 1), 2));
label_273d48:
    // 0x273d48: 0x0  nop
    ctx->pc = 0x273d48u;
    // NOP
label_273d4c:
    // 0x273d4c: 0x0  nop
    ctx->pc = 0x273d4cu;
    // NOP
label_273d50:
    // 0x273d50: 0xa9b7  .word       0x0000A9B7                   # INVALID     $zero, $zero, -0x5649 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x273D50 raw=0x0000A9B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273d54:
    // 0x273d54: 0xfff0  tge         $zero, $zero, 1023
    ctx->pc = 0x273d54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273d58:
    // 0x273d58: 0x0  nop
    ctx->pc = 0x273d58u;
    // NOP
label_273d5c:
    // 0x273d5c: 0x0  nop
    ctx->pc = 0x273d5cu;
    // NOP
label_273d60:
    // 0x273d60: 0xa9d7  .word       0x0000A9D7                   # dsrav       $s5, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d60u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_273d64:
    // 0x273d64: 0xc4c0  sll         $t8, $zero, 19
    ctx->pc = 0x273d64u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_273d68:
    // 0x273d68: 0x0  nop
    ctx->pc = 0x273d68u;
    // NOP
label_273d6c:
    // 0x273d6c: 0x0  nop
    ctx->pc = 0x273d6cu;
    // NOP
label_273d70:
    // 0x273d70: 0xa9f0  tge         $zero, $zero, 679
    ctx->pc = 0x273d70u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273d74:
    // 0x273d74: 0xee60  .word       0x0000EE60                   # add         $sp, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_273d78:
    // 0x273d78: 0x0  nop
    ctx->pc = 0x273d78u;
    // NOP
label_273d7c:
    // 0x273d7c: 0x0  nop
    ctx->pc = 0x273d7cu;
    // NOP
label_273d80:
    // 0x273d80: 0xaa0e  .word       0x0000AA0E                   # INVALID     $zero, $zero, -0x55F2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x273D80 raw=0x0000AA0E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273d84:
    // 0x273d84: 0xab90  .word       0x0000AB90                   # mfhi        $s5 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d84u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_273d88:
    // 0x273d88: 0x0  nop
    ctx->pc = 0x273d88u;
    // NOP
label_273d8c:
    // 0x273d8c: 0x0  nop
    ctx->pc = 0x273d8cu;
    // NOP
label_273d90:
    // 0x273d90: 0xaa24  .word       0x0000AA24                   # and         $s5, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d90u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_273d94:
    // 0x273d94: 0xb510  .word       0x0000B510                   # mfhi        $s6 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d94u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_273d98:
    // 0x273d98: 0x0  nop
    ctx->pc = 0x273d98u;
    // NOP
label_273d9c:
    // 0x273d9c: 0x0  nop
    ctx->pc = 0x273d9cu;
    // NOP
label_273da0:
    // 0x273da0: 0xaa3b  dsra        $s5, $zero, 8
    ctx->pc = 0x273da0u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 0) >> 8);
label_273da4:
    // 0x273da4: 0x6490  .word       0x00006490                   # mfhi        $t4 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273da4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_273da8:
    // 0x273da8: 0x0  nop
    ctx->pc = 0x273da8u;
    // NOP
label_273dac:
    // 0x273dac: 0x0  nop
    ctx->pc = 0x273dacu;
    // NOP
label_273db0:
    // 0x273db0: 0xaa48  .word       0x0000AA48                   # jr          $zero # 0000AA40 <InstrIdType: CPU_SPECIAL>
label_273db4:
    if (ctx->pc == 0x273DB4u) {
        ctx->pc = 0x273DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DB0u;
        // 0x273db4: 0xddf0  tge         $zero, $zero, 887 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x273DB8u;
        goto label_273db8;
    }
    ctx->pc = 0x273DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x273DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DB0u;
        // 0x273db4: 0xddf0  tge         $zero, $zero, 887 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273DB0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x273DB8u;
label_273db8:
    // 0x273db8: 0x0  nop
    ctx->pc = 0x273db8u;
    // NOP
label_273dbc:
    // 0x273dbc: 0x0  nop
    ctx->pc = 0x273dbcu;
    // NOP
label_273dc0:
    // 0x273dc0: 0xaa64  .word       0x0000AA64                   # and         $s5, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273dc0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_273dc4:
    // 0x273dc4: 0xbf50  .word       0x0000BF50                   # mfhi        $s7 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273dc4u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_273dc8:
    // 0x273dc8: 0x0  nop
    ctx->pc = 0x273dc8u;
    // NOP
label_273dcc:
    // 0x273dcc: 0x0  nop
    ctx->pc = 0x273dccu;
    // NOP
label_273dd0:
    // 0x273dd0: 0xaa7c  dsll32      $s5, $zero, 9
    ctx->pc = 0x273dd0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) << (32 + 9));
label_273dd4:
    // 0x273dd4: 0xe6e0  .word       0x0000E6E0                   # add         $gp, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273dd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_273dd8:
    // 0x273dd8: 0x0  nop
    ctx->pc = 0x273dd8u;
    // NOP
label_273ddc:
    // 0x273ddc: 0x0  nop
    ctx->pc = 0x273ddcu;
    // NOP
label_273de0:
    // 0x273de0: 0xaa99  .word       0x0000AA99                   # multu       $zero, $zero # 0000AA80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273de0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_273de4:
    // 0x273de4: 0xe610  .word       0x0000E610                   # mfhi        $gp # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273de4u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_273de8:
    // 0x273de8: 0x0  nop
    ctx->pc = 0x273de8u;
    // NOP
label_273dec:
    // 0x273dec: 0x0  nop
    ctx->pc = 0x273decu;
    // NOP
label_273df0:
    // 0x273df0: 0xaab6  tne         $zero, $zero, 682
    ctx->pc = 0x273df0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273df4:
    // 0x273df4: 0x7e30  tge         $zero, $zero, 504
    ctx->pc = 0x273df4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273df8:
    // 0x273df8: 0x0  nop
    ctx->pc = 0x273df8u;
    // NOP
label_273dfc:
    // 0x273dfc: 0x0  nop
    ctx->pc = 0x273dfcu;
    // NOP
label_273e00:
    // 0x273e00: 0xaac6  .word       0x0000AAC6                   # srlv        $s5, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e00u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_273e04:
    // 0x273e04: 0xee20  .word       0x0000EE20                   # add         $sp, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_273e08:
    // 0x273e08: 0x0  nop
    ctx->pc = 0x273e08u;
    // NOP
label_273e0c:
    // 0x273e0c: 0x0  nop
    ctx->pc = 0x273e0cu;
    // NOP
label_273e10:
    // 0x273e10: 0xaae4  .word       0x0000AAE4                   # and         $s5, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e10u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_273e14:
    // 0x273e14: 0xfbe0  .word       0x0000FBE0                   # add         $ra, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_273e18:
    // 0x273e18: 0x0  nop
    ctx->pc = 0x273e18u;
    // NOP
label_273e1c:
    // 0x273e1c: 0x0  nop
    ctx->pc = 0x273e1cu;
    // NOP
label_273e20:
    // 0x273e20: 0xab04  .word       0x0000AB04                   # sllv        $s5, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e20u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_273e24:
    // 0x273e24: 0xf470  tge         $zero, $zero, 977
    ctx->pc = 0x273e24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273e28:
    // 0x273e28: 0x0  nop
    ctx->pc = 0x273e28u;
    // NOP
label_273e2c:
    // 0x273e2c: 0x0  nop
    ctx->pc = 0x273e2cu;
    // NOP
label_273e30:
    // 0x273e30: 0xab23  .word       0x0000AB23                   # negu        $s5, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e30u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_273e34:
    // 0x273e34: 0xaf00  sll         $s5, $zero, 28
    ctx->pc = 0x273e34u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_273e38:
    // 0x273e38: 0x0  nop
    ctx->pc = 0x273e38u;
    // NOP
label_273e3c:
    // 0x273e3c: 0x0  nop
    ctx->pc = 0x273e3cu;
    // NOP
label_273e40:
    // 0x273e40: 0xab39  .word       0x0000AB39                   # INVALID     $zero, $zero, -0x54C7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x273E40 raw=0x0000AB39"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273e44:
    // 0x273e44: 0x86f0  tge         $zero, $zero, 539
    ctx->pc = 0x273e44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273e48:
    // 0x273e48: 0x0  nop
    ctx->pc = 0x273e48u;
    // NOP
label_273e4c:
    // 0x273e4c: 0x0  nop
    ctx->pc = 0x273e4cu;
    // NOP
label_273e50:
    // 0x273e50: 0xab4a  .word       0x0000AB4A                   # movz        $s5, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e50u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_273e54:
    // 0x273e54: 0xaba0  .word       0x0000ABA0                   # add         $s5, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_273e58:
    // 0x273e58: 0x0  nop
    ctx->pc = 0x273e58u;
    // NOP
label_273e5c:
    // 0x273e5c: 0x0  nop
    ctx->pc = 0x273e5cu;
    // NOP
label_273e60:
    // 0x273e60: 0xab60  .word       0x0000AB60                   # add         $s5, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e60u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_273e64:
    // 0x273e64: 0xa590  .word       0x0000A590                   # mfhi        $s4 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e64u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_273e68:
    // 0x273e68: 0x0  nop
    ctx->pc = 0x273e68u;
    // NOP
label_273e6c:
    // 0x273e6c: 0x0  nop
    ctx->pc = 0x273e6cu;
    // NOP
label_273e70:
    // 0x273e70: 0xab75  .word       0x0000AB75                   # INVALID     $zero, $zero, -0x548B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x273E70 raw=0x0000AB75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273e74:
    // 0x273e74: 0xa960  .word       0x0000A960                   # add         $s5, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_273e78:
    // 0x273e78: 0x0  nop
    ctx->pc = 0x273e78u;
    // NOP
label_273e7c:
    // 0x273e7c: 0x0  nop
    ctx->pc = 0x273e7cu;
    // NOP
label_273e80:
    // 0x273e80: 0xab8b  .word       0x0000AB8B                   # movn        $s5, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e80u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_273e84:
    // 0x273e84: 0xcac0  sll         $t9, $zero, 11
    ctx->pc = 0x273e84u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_273e88:
    // 0x273e88: 0x0  nop
    ctx->pc = 0x273e88u;
    // NOP
label_273e8c:
    // 0x273e8c: 0x0  nop
    ctx->pc = 0x273e8cu;
    // NOP
label_273e90:
    // 0x273e90: 0xaba5  .word       0x0000ABA5                   # move        $s5, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e90u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_273e94:
    // 0x273e94: 0xbd60  .word       0x0000BD60                   # add         $s7, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_273e98:
    // 0x273e98: 0x0  nop
    ctx->pc = 0x273e98u;
    // NOP
label_273e9c:
    // 0x273e9c: 0x0  nop
    ctx->pc = 0x273e9cu;
    // NOP
label_273ea0:
    // 0x273ea0: 0xabbd  .word       0x0000ABBD                   # INVALID     $zero, $zero, -0x5443 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ea0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x273EA0 raw=0x0000ABBD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273ea4:
    // 0x273ea4: 0x9ed0  .word       0x00009ED0                   # mfhi        $s3 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ea4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_273ea8:
    // 0x273ea8: 0x0  nop
    ctx->pc = 0x273ea8u;
    // NOP
label_273eac:
    // 0x273eac: 0x0  nop
    ctx->pc = 0x273eacu;
    // NOP
label_273eb0:
    // 0x273eb0: 0xabd1  .word       0x0000ABD1                   # mthi        $zero # 0000ABC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273eb0u;
    ctx->hi = GPR_U64(ctx, 0);
label_273eb4:
    // 0x273eb4: 0xe4d0  .word       0x0000E4D0                   # mfhi        $gp # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273eb4u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_273eb8:
    // 0x273eb8: 0x0  nop
    ctx->pc = 0x273eb8u;
    // NOP
label_273ebc:
    // 0x273ebc: 0x0  nop
    ctx->pc = 0x273ebcu;
    // NOP
label_273ec0:
    // 0x273ec0: 0xabee  .word       0x0000ABEE                   # dsub        $s5, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ec0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
label_273ec4:
    // 0x273ec4: 0xc8c0  sll         $t9, $zero, 3
    ctx->pc = 0x273ec4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_273ec8:
    // 0x273ec8: 0x0  nop
    ctx->pc = 0x273ec8u;
    // NOP
label_273ecc:
    // 0x273ecc: 0x0  nop
    ctx->pc = 0x273eccu;
    // NOP
label_273ed0:
    // 0x273ed0: 0xac08  .word       0x0000AC08                   # jr          $zero # 0000AC00 <InstrIdType: CPU_SPECIAL>
label_273ed4:
    if (ctx->pc == 0x273ED4u) {
        ctx->pc = 0x273ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273ED0u;
        // 0x273ed4: 0xba30  tge         $zero, $zero, 744 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x273ED8u;
        goto label_273ed8;
    }
    ctx->pc = 0x273ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x273ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273ED0u;
        // 0x273ed4: 0xba30  tge         $zero, $zero, 744 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273ED0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x273ED8u;
label_273ed8:
    // 0x273ed8: 0x0  nop
    ctx->pc = 0x273ed8u;
    // NOP
label_273edc:
    // 0x273edc: 0x0  nop
    ctx->pc = 0x273edcu;
    // NOP
label_273ee0:
    // 0x273ee0: 0xac20  .word       0x0000AC20                   # add         $s5, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ee0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_273ee4:
    // 0x273ee4: 0x92c0  sll         $s2, $zero, 11
    ctx->pc = 0x273ee4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_273ee8:
    // 0x273ee8: 0x0  nop
    ctx->pc = 0x273ee8u;
    // NOP
label_273eec:
    // 0x273eec: 0x0  nop
    ctx->pc = 0x273eecu;
    // NOP
label_273ef0:
    // 0x273ef0: 0xac33  tltu        $zero, $zero, 688
    ctx->pc = 0x273ef0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273ef4:
    // 0x273ef4: 0xb7b0  tge         $zero, $zero, 734
    ctx->pc = 0x273ef4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273ef8:
    // 0x273ef8: 0x0  nop
    ctx->pc = 0x273ef8u;
    // NOP
label_273efc:
    // 0x273efc: 0x0  nop
    ctx->pc = 0x273efcu;
    // NOP
label_273f00:
    // 0x273f00: 0xac4a  .word       0x0000AC4A                   # movz        $s5, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273f00u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_273f04:
    // 0x273f04: 0xd2e0  .word       0x0000D2E0                   # add         $k0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273f04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_273f08:
    // 0x273f08: 0x0  nop
    ctx->pc = 0x273f08u;
    // NOP
label_273f0c:
    // 0x273f0c: 0x0  nop
    ctx->pc = 0x273f0cu;
    // NOP
label_273f10:
    // 0x273f10: 0xac65  .word       0x0000AC65                   # move        $s5, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273f10u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_273f14:
    // 0x273f14: 0x9370  tge         $zero, $zero, 589
    ctx->pc = 0x273f14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273f18:
    // 0x273f18: 0x0  nop
    ctx->pc = 0x273f18u;
    // NOP
label_273f1c:
    // 0x273f1c: 0x0  nop
    ctx->pc = 0x273f1cu;
    // NOP
label_273f20:
    // 0x273f20: 0xac78  dsll        $s5, $zero, 17
    ctx->pc = 0x273f20u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) << 17);
label_273f24:
    // 0x273f24: 0xd6a0  .word       0x0000D6A0                   # add         $k0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273f24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_273f28:
    // 0x273f28: 0x0  nop
    ctx->pc = 0x273f28u;
    // NOP
label_273f2c:
    // 0x273f2c: 0x0  nop
    ctx->pc = 0x273f2cu;
    // NOP
label_273f30:
    // 0x273f30: 0xac93  .word       0x0000AC93                   # mtlo        $zero # 0000AC80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273f30u;
    ctx->lo = GPR_U64(ctx, 0);
label_273f34:
    // 0x273f34: 0x15350  .word       0x00015350                   # mfhi        $t2 # 00010340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273f34u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_273f38:
    // 0x273f38: 0x0  nop
    ctx->pc = 0x273f38u;
    // NOP
label_273f3c:
    // 0x273f3c: 0x0  nop
    ctx->pc = 0x273f3cu;
    // NOP
label_273f40:
    // 0x273f40: 0xacbe  dsrl32      $s5, $zero, 18
    ctx->pc = 0x273f40u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) >> (32 + 18));
label_273f44:
    // 0x273f44: 0xdbe0  .word       0x0000DBE0                   # add         $k1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273f44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_273f48:
    // 0x273f48: 0x0  nop
    ctx->pc = 0x273f48u;
    // NOP
label_273f4c:
    // 0x273f4c: 0x0  nop
    ctx->pc = 0x273f4cu;
    // NOP
label_273f50:
    // 0x273f50: 0xacda  .word       0x0000ACDA                   # div         $s5, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273f50u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_273f54:
    // 0x273f54: 0xee20  .word       0x0000EE20                   # add         $sp, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273f54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_273f58:
    // 0x273f58: 0x0  nop
    ctx->pc = 0x273f58u;
    // NOP
label_273f5c:
    // 0x273f5c: 0x0  nop
    ctx->pc = 0x273f5cu;
    // NOP
label_273f60:
    // 0x273f60: 0xacf8  dsll        $s5, $zero, 19
    ctx->pc = 0x273f60u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) << 19);
label_273f64:
    // 0x273f64: 0x13f70  tge         $zero, $at, 253
    ctx->pc = 0x273f64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_273f68:
    // 0x273f68: 0x0  nop
    ctx->pc = 0x273f68u;
    // NOP
label_273f6c:
    // 0x273f6c: 0x0  nop
    ctx->pc = 0x273f6cu;
    // NOP
label_273f70:
    // 0x273f70: 0xad20  .word       0x0000AD20                   # add         $s5, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273f70u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_273f74:
    // 0x273f74: 0xa430  tge         $zero, $zero, 656
    ctx->pc = 0x273f74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273f78:
    // 0x273f78: 0x0  nop
    ctx->pc = 0x273f78u;
    // NOP
label_273f7c:
    // 0x273f7c: 0x0  nop
    ctx->pc = 0x273f7cu;
    // NOP
label_273f80:
    // 0x273f80: 0xad35  .word       0x0000AD35                   # INVALID     $zero, $zero, -0x52CB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273f80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x273F80 raw=0x0000AD35"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273f84:
    // 0x273f84: 0x94d0  .word       0x000094D0                   # mfhi        $s2 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273f84u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_273f88:
    // 0x273f88: 0x0  nop
    ctx->pc = 0x273f88u;
    // NOP
label_273f8c:
    // 0x273f8c: 0x0  nop
    ctx->pc = 0x273f8cu;
    // NOP
label_273f90:
    // 0x273f90: 0xad48  .word       0x0000AD48                   # jr          $zero # 0000AD40 <InstrIdType: CPU_SPECIAL>
label_273f94:
    if (ctx->pc == 0x273F94u) {
        ctx->pc = 0x273F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F90u;
        // 0x273f94: 0x7790  .word       0x00007790                   # mfhi        $t6 # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x273F98u;
        goto label_273f98;
    }
    ctx->pc = 0x273F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x273F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F90u;
        // 0x273f94: 0x7790  .word       0x00007790                   # mfhi        $t6 # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273F90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x273F98u;
label_273f98:
    // 0x273f98: 0x0  nop
    ctx->pc = 0x273f98u;
    // NOP
label_273f9c:
    // 0x273f9c: 0x0  nop
    ctx->pc = 0x273f9cu;
    // NOP
label_273fa0:
    // 0x273fa0: 0xad57  .word       0x0000AD57                   # dsrav       $s5, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273fa0u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_273fa4:
    // 0x273fa4: 0xb430  tge         $zero, $zero, 720
    ctx->pc = 0x273fa4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273fa8:
    // 0x273fa8: 0x0  nop
    ctx->pc = 0x273fa8u;
    // NOP
label_273fac:
    // 0x273fac: 0x0  nop
    ctx->pc = 0x273facu;
    // NOP
label_273fb0:
    // 0x273fb0: 0xad6e  .word       0x0000AD6E                   # dsub        $s5, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273fb0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
label_273fb4:
    // 0x273fb4: 0x126c0  sll         $a0, $at, 27
    ctx->pc = 0x273fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 27));
label_273fb8:
    // 0x273fb8: 0x0  nop
    ctx->pc = 0x273fb8u;
    // NOP
label_273fbc:
    // 0x273fbc: 0x0  nop
    ctx->pc = 0x273fbcu;
    // NOP
label_273fc0:
    // 0x273fc0: 0xad93  .word       0x0000AD93                   # mtlo        $zero # 0000AD80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273fc0u;
    ctx->lo = GPR_U64(ctx, 0);
label_273fc4:
    // 0x273fc4: 0xd170  tge         $zero, $zero, 837
    ctx->pc = 0x273fc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273fc8:
    // 0x273fc8: 0x0  nop
    ctx->pc = 0x273fc8u;
    // NOP
label_273fcc:
    // 0x273fcc: 0x0  nop
    ctx->pc = 0x273fccu;
    // NOP
label_273fd0:
    // 0x273fd0: 0xadae  .word       0x0000ADAE                   # dsub        $s5, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273fd0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
label_273fd4:
    // 0x273fd4: 0x8b40  sll         $s1, $zero, 13
    ctx->pc = 0x273fd4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_273fd8:
    // 0x273fd8: 0x0  nop
    ctx->pc = 0x273fd8u;
    // NOP
label_273fdc:
    // 0x273fdc: 0x0  nop
    ctx->pc = 0x273fdcu;
    // NOP
label_273fe0:
    // 0x273fe0: 0xadc0  sll         $s5, $zero, 23
    ctx->pc = 0x273fe0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_273fe4:
    // 0x273fe4: 0xecd0  .word       0x0000ECD0                   # mfhi        $sp # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273fe4u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_273fe8:
    // 0x273fe8: 0x0  nop
    ctx->pc = 0x273fe8u;
    // NOP
label_273fec:
    // 0x273fec: 0x0  nop
    ctx->pc = 0x273fecu;
    // NOP
label_273ff0:
    // 0x273ff0: 0xadde  .word       0x0000ADDE                   # ddiv        $s5, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ff0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x273FF0 raw=0x0000ADDE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273ff4:
    // 0x273ff4: 0x9100  sll         $s2, $zero, 4
    ctx->pc = 0x273ff4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_273ff8:
    // 0x273ff8: 0x0  nop
    ctx->pc = 0x273ff8u;
    // NOP
label_273ffc:
    // 0x273ffc: 0x0  nop
    ctx->pc = 0x273ffcu;
    // NOP
label_274000:
    // 0x274000: 0xadf1  tgeu        $zero, $zero, 695
    ctx->pc = 0x274000u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274004:
    // 0x274004: 0xc170  tge         $zero, $zero, 773
    ctx->pc = 0x274004u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274008:
    // 0x274008: 0x0  nop
    ctx->pc = 0x274008u;
    // NOP
label_27400c:
    // 0x27400c: 0x0  nop
    ctx->pc = 0x27400cu;
    // NOP
label_274010:
    // 0x274010: 0xae0a  .word       0x0000AE0A                   # movz        $s5, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274010u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_274014:
    // 0x274014: 0xbb50  .word       0x0000BB50                   # mfhi        $s7 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274014u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_274018:
    // 0x274018: 0x0  nop
    ctx->pc = 0x274018u;
    // NOP
label_27401c:
    // 0x27401c: 0x0  nop
    ctx->pc = 0x27401cu;
    // NOP
label_274020:
    // 0x274020: 0xae22  .word       0x0000AE22                   # neg         $s5, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274020u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_274024:
    // 0x274024: 0xede0  .word       0x0000EDE0                   # add         $sp, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274024u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_274028:
    // 0x274028: 0x0  nop
    ctx->pc = 0x274028u;
    // NOP
label_27402c:
    // 0x27402c: 0x0  nop
    ctx->pc = 0x27402cu;
    // NOP
label_274030:
    // 0x274030: 0xae40  sll         $s5, $zero, 25
    ctx->pc = 0x274030u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_274034:
    // 0x274034: 0x4fc0  sll         $t1, $zero, 31
    ctx->pc = 0x274034u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_274038:
    // 0x274038: 0x0  nop
    ctx->pc = 0x274038u;
    // NOP
label_27403c:
    // 0x27403c: 0x0  nop
    ctx->pc = 0x27403cu;
    // NOP
label_274040:
    // 0x274040: 0xae4a  .word       0x0000AE4A                   # movz        $s5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274040u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_274044:
    // 0x274044: 0x168d0  .word       0x000168D0                   # mfhi        $t5 # 000100C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274044u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_274048:
    // 0x274048: 0x0  nop
    ctx->pc = 0x274048u;
    // NOP
label_27404c:
    // 0x27404c: 0x0  nop
    ctx->pc = 0x27404cu;
    // NOP
label_274050:
    // 0x274050: 0xae78  dsll        $s5, $zero, 25
    ctx->pc = 0x274050u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) << 25);
label_274054:
    // 0x274054: 0xa150  .word       0x0000A150                   # mfhi        $s4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274054u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_274058:
    // 0x274058: 0x0  nop
    ctx->pc = 0x274058u;
    // NOP
label_27405c:
    // 0x27405c: 0x0  nop
    ctx->pc = 0x27405cu;
    // NOP
label_274060:
    // 0x274060: 0xae8d  break       0, 698
    ctx->pc = 0x274060u;
    runtime->handleBreak(rdram, ctx);
label_274064:
    // 0x274064: 0x57e0  .word       0x000057E0                   # add         $t2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274064u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_274068:
    // 0x274068: 0x0  nop
    ctx->pc = 0x274068u;
    // NOP
label_27406c:
    // 0x27406c: 0x0  nop
    ctx->pc = 0x27406cu;
    // NOP
label_274070:
    // 0x274070: 0xae98  .word       0x0000AE98                   # mult        $s5, $zero, $zero # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x274070u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_274074:
    // 0x274074: 0x71f0  tge         $zero, $zero, 455
    ctx->pc = 0x274074u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274078:
    // 0x274078: 0x0  nop
    ctx->pc = 0x274078u;
    // NOP
label_27407c:
    // 0x27407c: 0x0  nop
    ctx->pc = 0x27407cu;
    // NOP
label_274080:
    // 0x274080: 0xaea7  .word       0x0000AEA7                   # not         $s5, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274080u;
    SET_GPR_U64(ctx, 21, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_274084:
    // 0x274084: 0xbcd0  .word       0x0000BCD0                   # mfhi        $s7 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274084u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_274088:
    // 0x274088: 0x0  nop
    ctx->pc = 0x274088u;
    // NOP
label_27408c:
    // 0x27408c: 0x0  nop
    ctx->pc = 0x27408cu;
    // NOP
label_274090:
    // 0x274090: 0xaebf  dsra32      $s5, $zero, 26
    ctx->pc = 0x274090u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 0) >> (32 + 26));
label_274094:
    // 0x274094: 0xe1e0  .word       0x0000E1E0                   # add         $gp, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274094u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_274098:
    // 0x274098: 0x0  nop
    ctx->pc = 0x274098u;
    // NOP
label_27409c:
    // 0x27409c: 0x0  nop
    ctx->pc = 0x27409cu;
    // NOP
label_2740a0:
    // 0x2740a0: 0xaedc  .word       0x0000AEDC                   # dmult       $zero, $zero # 0000AEC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2740a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2740A0 raw=0x0000AEDC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2740a4:
    // 0x2740a4: 0xe480  sll         $gp, $zero, 18
    ctx->pc = 0x2740a4u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_2740a8:
    // 0x2740a8: 0x0  nop
    ctx->pc = 0x2740a8u;
    // NOP
label_2740ac:
    // 0x2740ac: 0x0  nop
    ctx->pc = 0x2740acu;
    // NOP
label_2740b0:
    // 0x2740b0: 0xaef9  .word       0x0000AEF9                   # INVALID     $zero, $zero, -0x5107 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2740b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2740B0 raw=0x0000AEF9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2740b4:
    // 0x2740b4: 0x5030  tge         $zero, $zero, 320
    ctx->pc = 0x2740b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2740b8:
    // 0x2740b8: 0x0  nop
    ctx->pc = 0x2740b8u;
    // NOP
label_2740bc:
    // 0x2740bc: 0x0  nop
    ctx->pc = 0x2740bcu;
    // NOP
label_2740c0:
    // 0x2740c0: 0xaf04  .word       0x0000AF04                   # sllv        $s5, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2740c0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2740c4:
    // 0x2740c4: 0xaff0  tge         $zero, $zero, 703
    ctx->pc = 0x2740c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2740c8:
    // 0x2740c8: 0x0  nop
    ctx->pc = 0x2740c8u;
    // NOP
label_2740cc:
    // 0x2740cc: 0x0  nop
    ctx->pc = 0x2740ccu;
    // NOP
label_2740d0:
    // 0x2740d0: 0xaf1a  .word       0x0000AF1A                   # div         $s5, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2740d0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2740d4:
    // 0x2740d4: 0xa3f0  tge         $zero, $zero, 655
    ctx->pc = 0x2740d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2740d8:
    // 0x2740d8: 0x0  nop
    ctx->pc = 0x2740d8u;
    // NOP
label_2740dc:
    // 0x2740dc: 0x0  nop
    ctx->pc = 0x2740dcu;
    // NOP
label_2740e0:
    // 0x2740e0: 0xaf2f  .word       0x0000AF2F                   # dsubu       $s5, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2740e0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2740e4:
    // 0x2740e4: 0x8100  sll         $s0, $zero, 4
    ctx->pc = 0x2740e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_2740e8:
    // 0x2740e8: 0x0  nop
    ctx->pc = 0x2740e8u;
    // NOP
label_2740ec:
    // 0x2740ec: 0x0  nop
    ctx->pc = 0x2740ecu;
    // NOP
label_2740f0:
    // 0x2740f0: 0xaf40  sll         $s5, $zero, 29
    ctx->pc = 0x2740f0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_2740f4:
    // 0x2740f4: 0x8070  tge         $zero, $zero, 513
    ctx->pc = 0x2740f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2740f8:
    // 0x2740f8: 0x0  nop
    ctx->pc = 0x2740f8u;
    // NOP
label_2740fc:
    // 0x2740fc: 0x0  nop
    ctx->pc = 0x2740fcu;
    // NOP
label_274100:
    // 0x274100: 0xaf51  .word       0x0000AF51                   # mthi        $zero # 0000AF40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274100u;
    ctx->hi = GPR_U64(ctx, 0);
label_274104:
    // 0x274104: 0xfc80  sll         $ra, $zero, 18
    ctx->pc = 0x274104u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_274108:
    // 0x274108: 0x0  nop
    ctx->pc = 0x274108u;
    // NOP
label_27410c:
    // 0x27410c: 0x0  nop
    ctx->pc = 0x27410cu;
    // NOP
label_274110:
    // 0x274110: 0xaf71  tgeu        $zero, $zero, 701
    ctx->pc = 0x274110u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274114:
    // 0x274114: 0x10a10  .word       0x00010A10                   # mfhi        $at # 00010200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274114u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_274118:
    // 0x274118: 0x0  nop
    ctx->pc = 0x274118u;
    // NOP
label_27411c:
    // 0x27411c: 0x0  nop
    ctx->pc = 0x27411cu;
    // NOP
label_274120:
    // 0x274120: 0xaf93  .word       0x0000AF93                   # mtlo        $zero # 0000AF80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274120u;
    ctx->lo = GPR_U64(ctx, 0);
label_274124:
    // 0x274124: 0x4e30  tge         $zero, $zero, 312
    ctx->pc = 0x274124u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274128:
    // 0x274128: 0x0  nop
    ctx->pc = 0x274128u;
    // NOP
label_27412c:
    // 0x27412c: 0x0  nop
    ctx->pc = 0x27412cu;
    // NOP
label_274130:
    // 0x274130: 0xaf9d  .word       0x0000AF9D                   # dmultu      $zero, $zero # 0000AF80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274130u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x274130 raw=0x0000AF9D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274134:
    // 0x274134: 0xd160  .word       0x0000D160                   # add         $k0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274134u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_274138:
    // 0x274138: 0x0  nop
    ctx->pc = 0x274138u;
    // NOP
label_27413c:
    // 0x27413c: 0x0  nop
    ctx->pc = 0x27413cu;
    // NOP
label_274140:
    // 0x274140: 0xafb8  dsll        $s5, $zero, 30
    ctx->pc = 0x274140u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) << 30);
label_274144:
    // 0x274144: 0x11a00  sll         $v1, $at, 8
    ctx->pc = 0x274144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 8));
label_274148:
    // 0x274148: 0x0  nop
    ctx->pc = 0x274148u;
    // NOP
label_27414c:
    // 0x27414c: 0x0  nop
    ctx->pc = 0x27414cu;
    // NOP
label_274150:
    // 0x274150: 0xafdc  .word       0x0000AFDC                   # dmult       $zero, $zero # 0000AFC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274150u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x274150 raw=0x0000AFDC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274154:
    // 0x274154: 0x11f90  .word       0x00011F90                   # mfhi        $v1 # 00010780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274154u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_274158:
    // 0x274158: 0x0  nop
    ctx->pc = 0x274158u;
    // NOP
label_27415c:
    // 0x27415c: 0x0  nop
    ctx->pc = 0x27415cu;
    // NOP
label_274160:
    // 0x274160: 0xb000  sll         $s6, $zero, 0
    ctx->pc = 0x274160u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_274164:
    // 0x274164: 0x1b870  tge         $zero, $at, 737
    ctx->pc = 0x274164u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_274168:
    // 0x274168: 0x0  nop
    ctx->pc = 0x274168u;
    // NOP
label_27416c:
    // 0x27416c: 0x0  nop
    ctx->pc = 0x27416cu;
    // NOP
label_274170:
    // 0x274170: 0xb038  dsll        $s6, $zero, 0
    ctx->pc = 0x274170u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << 0);
label_274174:
    // 0x274174: 0xd8c0  sll         $k1, $zero, 3
    ctx->pc = 0x274174u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_274178:
    // 0x274178: 0x0  nop
    ctx->pc = 0x274178u;
    // NOP
label_27417c:
    // 0x27417c: 0x0  nop
    ctx->pc = 0x27417cu;
    // NOP
label_274180:
    // 0x274180: 0xb054  .word       0x0000B054                   # dsllv       $s6, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274180u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_274184:
    // 0x274184: 0xf970  tge         $zero, $zero, 997
    ctx->pc = 0x274184u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274188:
    // 0x274188: 0x0  nop
    ctx->pc = 0x274188u;
    // NOP
label_27418c:
    // 0x27418c: 0x0  nop
    ctx->pc = 0x27418cu;
    // NOP
label_274190:
    // 0x274190: 0xb074  teq         $zero, $zero, 705
    ctx->pc = 0x274190u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274194:
    // 0x274194: 0x11f60  .word       0x00011F60                   # add         $v1, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274194u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_274198:
    // 0x274198: 0x0  nop
    ctx->pc = 0x274198u;
    // NOP
label_27419c:
    // 0x27419c: 0x0  nop
    ctx->pc = 0x27419cu;
    // NOP
label_2741a0:
    // 0x2741a0: 0xb098  .word       0x0000B098                   # mult        $s6, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2741a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_2741a4:
    // 0x2741a4: 0x9c40  sll         $s3, $zero, 17
    ctx->pc = 0x2741a4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2741a8:
    // 0x2741a8: 0x0  nop
    ctx->pc = 0x2741a8u;
    // NOP
label_2741ac:
    // 0x2741ac: 0x0  nop
    ctx->pc = 0x2741acu;
    // NOP
label_2741b0:
    // 0x2741b0: 0xb0ac  .word       0x0000B0AC                   # dadd        $s6, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2741b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, r); }
label_2741b4:
    // 0x2741b4: 0xde30  tge         $zero, $zero, 888
    ctx->pc = 0x2741b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2741b8:
    // 0x2741b8: 0x0  nop
    ctx->pc = 0x2741b8u;
    // NOP
label_2741bc:
    // 0x2741bc: 0x0  nop
    ctx->pc = 0x2741bcu;
    // NOP
label_2741c0:
    // 0x2741c0: 0xb0c8  .word       0x0000B0C8                   # jr          $zero # 0000B0C0 <InstrIdType: CPU_SPECIAL>
label_2741c4:
    if (ctx->pc == 0x2741C4u) {
        ctx->pc = 0x2741C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2741C0u;
        // 0x2741c4: 0x10f10  .word       0x00010F10                   # mfhi        $at # 00010700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 1, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2741C8u;
        goto label_2741c8;
    }
    ctx->pc = 0x2741C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2741C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2741C0u;
        // 0x2741c4: 0x10f10  .word       0x00010F10                   # mfhi        $at # 00010700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 1, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2741C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2741C8u;
label_2741c8:
    // 0x2741c8: 0x0  nop
    ctx->pc = 0x2741c8u;
    // NOP
label_2741cc:
    // 0x2741cc: 0x0  nop
    ctx->pc = 0x2741ccu;
    // NOP
label_2741d0:
    // 0x2741d0: 0xb0ea  .word       0x0000B0EA                   # slt         $s6, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2741d0u;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2741d4:
    // 0x2741d4: 0x11cd0  .word       0x00011CD0                   # mfhi        $v1 # 000104C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2741d4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2741d8:
    // 0x2741d8: 0x0  nop
    ctx->pc = 0x2741d8u;
    // NOP
label_2741dc:
    // 0x2741dc: 0x0  nop
    ctx->pc = 0x2741dcu;
    // NOP
label_2741e0:
    // 0x2741e0: 0xb10e  .word       0x0000B10E                   # INVALID     $zero, $zero, -0x4EF2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2741e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2741E0 raw=0x0000B10E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2741e4:
    // 0x2741e4: 0x100e0  .word       0x000100E0                   # add         $zero, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2741e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2741e8:
    // 0x2741e8: 0x0  nop
    ctx->pc = 0x2741e8u;
    // NOP
label_2741ec:
    // 0x2741ec: 0x0  nop
    ctx->pc = 0x2741ecu;
    // NOP
label_2741f0:
    // 0x2741f0: 0xb12f  .word       0x0000B12F                   # dsubu       $s6, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2741f0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2741f4:
    // 0x2741f4: 0x13d20  .word       0x00013D20                   # add         $a3, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2741f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_2741f8:
    // 0x2741f8: 0x0  nop
    ctx->pc = 0x2741f8u;
    // NOP
label_2741fc:
    // 0x2741fc: 0x0  nop
    ctx->pc = 0x2741fcu;
    // NOP
label_274200:
    // 0x274200: 0xb157  .word       0x0000B157                   # dsrav       $s6, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274200u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_274204:
    // 0x274204: 0xe0d0  .word       0x0000E0D0                   # mfhi        $gp # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274204u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_274208:
    // 0x274208: 0x0  nop
    ctx->pc = 0x274208u;
    // NOP
label_27420c:
    // 0x27420c: 0x0  nop
    ctx->pc = 0x27420cu;
    // NOP
label_274210:
    // 0x274210: 0xb174  teq         $zero, $zero, 709
    ctx->pc = 0x274210u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274214:
    // 0x274214: 0x12c40  sll         $a1, $at, 17
    ctx->pc = 0x274214u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_274218:
    // 0x274218: 0x0  nop
    ctx->pc = 0x274218u;
    // NOP
label_27421c:
    // 0x27421c: 0x0  nop
    ctx->pc = 0x27421cu;
    // NOP
label_274220:
    // 0x274220: 0xb19a  .word       0x0000B19A                   # div         $s6, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274220u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_274224:
    // 0x274224: 0xee80  sll         $sp, $zero, 26
    ctx->pc = 0x274224u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_274228:
    // 0x274228: 0x0  nop
    ctx->pc = 0x274228u;
    // NOP
label_27422c:
    // 0x27422c: 0x0  nop
    ctx->pc = 0x27422cu;
    // NOP
label_274230:
    // 0x274230: 0xb1b8  dsll        $s6, $zero, 6
    ctx->pc = 0x274230u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << 6);
label_274234:
    // 0x274234: 0x162c0  sll         $t4, $at, 11
    ctx->pc = 0x274234u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 1), 11));
label_274238:
    // 0x274238: 0x0  nop
    ctx->pc = 0x274238u;
    // NOP
label_27423c:
    // 0x27423c: 0x0  nop
    ctx->pc = 0x27423cu;
    // NOP
label_274240:
    // 0x274240: 0xb1e5  .word       0x0000B1E5                   # move        $s6, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274240u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_274244:
    // 0x274244: 0x13610  .word       0x00013610                   # mfhi        $a2 # 00010600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274244u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_274248:
    // 0x274248: 0x0  nop
    ctx->pc = 0x274248u;
    // NOP
label_27424c:
    // 0x27424c: 0x0  nop
    ctx->pc = 0x27424cu;
    // NOP
label_274250:
    // 0x274250: 0xb20c  syscall     712
    ctx->pc = 0x274250u;
    ctx->pc = 0x274254u;
runtime->handleSyscall(rdram, ctx, 0x2C8u);
label_274254:
    // 0x274254: 0x67c0  sll         $t4, $zero, 31
    ctx->pc = 0x274254u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_274258:
    // 0x274258: 0x0  nop
    ctx->pc = 0x274258u;
    // NOP
label_27425c:
    // 0x27425c: 0x0  nop
    ctx->pc = 0x27425cu;
    // NOP
label_274260:
    // 0x274260: 0xb219  .word       0x0000B219                   # multu       $zero, $zero # 0000B200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274260u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_274264:
    // 0x274264: 0x17510  .word       0x00017510                   # mfhi        $t6 # 00010500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274264u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_274268:
    // 0x274268: 0x0  nop
    ctx->pc = 0x274268u;
    // NOP
label_27426c:
    // 0x27426c: 0x0  nop
    ctx->pc = 0x27426cu;
    // NOP
label_274270:
    // 0x274270: 0xb248  .word       0x0000B248                   # jr          $zero # 0000B240 <InstrIdType: CPU_SPECIAL>
label_274274:
    if (ctx->pc == 0x274274u) {
        ctx->pc = 0x274274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274270u;
        // 0x274274: 0x156e0  .word       0x000156E0                   # add         $t2, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x274278u;
        goto label_274278;
    }
    ctx->pc = 0x274270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x274274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274270u;
        // 0x274274: 0x156e0  .word       0x000156E0                   # add         $t2, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274270u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x274278u;
label_274278:
    // 0x274278: 0x0  nop
    ctx->pc = 0x274278u;
    // NOP
label_27427c:
    // 0x27427c: 0x0  nop
    ctx->pc = 0x27427cu;
    // NOP
label_274280:
    // 0x274280: 0xb273  tltu        $zero, $zero, 713
    ctx->pc = 0x274280u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274284:
    // 0x274284: 0xde70  tge         $zero, $zero, 889
    ctx->pc = 0x274284u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274288:
    // 0x274288: 0x0  nop
    ctx->pc = 0x274288u;
    // NOP
label_27428c:
    // 0x27428c: 0x0  nop
    ctx->pc = 0x27428cu;
    // NOP
label_274290:
    // 0x274290: 0xb28f  .word       0x0000B28F                   # sync # 0000B000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274290u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_274294:
    // 0x274294: 0xf960  .word       0x0000F960                   # add         $ra, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274294u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_274298:
    // 0x274298: 0x0  nop
    ctx->pc = 0x274298u;
    // NOP
label_27429c:
    // 0x27429c: 0x0  nop
    ctx->pc = 0x27429cu;
    // NOP
label_2742a0:
    // 0x2742a0: 0xb2af  .word       0x0000B2AF                   # dsubu       $s6, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2742a0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2742a4:
    // 0x2742a4: 0xc820  add         $t9, $zero, $zero
    ctx->pc = 0x2742a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_2742a8:
    // 0x2742a8: 0x0  nop
    ctx->pc = 0x2742a8u;
    // NOP
label_2742ac:
    // 0x2742ac: 0x0  nop
    ctx->pc = 0x2742acu;
    // NOP
label_2742b0:
    // 0x2742b0: 0xb2c9  .word       0x0000B2C9                   # jalr        $s6, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
label_2742b4:
    if (ctx->pc == 0x2742B4u) {
        ctx->pc = 0x2742B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2742B0u;
        // 0x2742b4: 0xefa0  .word       0x0000EFA0                   # add         $sp, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2742B8u;
        goto label_2742b8;
    }
    ctx->pc = 0x2742B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 22, 0x2742B8u);
        ctx->pc = 0x2742B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2742B0u;
        // 0x2742b4: 0xefa0  .word       0x0000EFA0                   # add         $sp, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2742B0u, 0x2742B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2742B8u;
label_2742b8:
    // 0x2742b8: 0x0  nop
    ctx->pc = 0x2742b8u;
    // NOP
label_2742bc:
    // 0x2742bc: 0x0  nop
    ctx->pc = 0x2742bcu;
    // NOP
label_2742c0:
    // 0x2742c0: 0xb2e7  .word       0x0000B2E7                   # not         $s6, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2742c0u;
    SET_GPR_U64(ctx, 22, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2742c4:
    // 0x2742c4: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x2742c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2742c8:
    // 0x2742c8: 0x0  nop
    ctx->pc = 0x2742c8u;
    // NOP
label_2742cc:
    // 0x2742cc: 0x0  nop
    ctx->pc = 0x2742ccu;
    // NOP
label_2742d0:
    // 0x2742d0: 0xb2f8  dsll        $s6, $zero, 11
    ctx->pc = 0x2742d0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << 11);
label_2742d4:
    // 0x2742d4: 0x11770  tge         $zero, $at, 93
    ctx->pc = 0x2742d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2742d8:
    // 0x2742d8: 0x0  nop
    ctx->pc = 0x2742d8u;
    // NOP
label_2742dc:
    // 0x2742dc: 0x0  nop
    ctx->pc = 0x2742dcu;
    // NOP
label_2742e0:
    // 0x2742e0: 0xb31b  .word       0x0000B31B                   # divu        $s6, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2742e0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2742e4:
    // 0x2742e4: 0x16950  .word       0x00016950                   # mfhi        $t5 # 00010140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2742e4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2742e8:
    // 0x2742e8: 0x0  nop
    ctx->pc = 0x2742e8u;
    // NOP
label_2742ec:
    // 0x2742ec: 0x0  nop
    ctx->pc = 0x2742ecu;
    // NOP
label_2742f0:
    // 0x2742f0: 0xb349  .word       0x0000B349                   # jalr        $s6, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
label_2742f4:
    if (ctx->pc == 0x2742F4u) {
        ctx->pc = 0x2742F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2742F0u;
        // 0x2742f4: 0xe310  .word       0x0000E310                   # mfhi        $gp # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 28, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2742F8u;
        goto label_2742f8;
    }
    ctx->pc = 0x2742F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 22, 0x2742F8u);
        ctx->pc = 0x2742F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2742F0u;
        // 0x2742f4: 0xe310  .word       0x0000E310                   # mfhi        $gp # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 28, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2742F0u, 0x2742F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2742F8u;
label_2742f8:
    // 0x2742f8: 0x0  nop
    ctx->pc = 0x2742f8u;
    // NOP
label_2742fc:
    // 0x2742fc: 0x0  nop
    ctx->pc = 0x2742fcu;
    // NOP
label_274300:
    // 0x274300: 0xb366  .word       0x0000B366                   # xor         $s6, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274300u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_274304:
    // 0x274304: 0xe060  .word       0x0000E060                   # add         $gp, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274304u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_274308:
    // 0x274308: 0x0  nop
    ctx->pc = 0x274308u;
    // NOP
label_27430c:
    // 0x27430c: 0x0  nop
    ctx->pc = 0x27430cu;
    // NOP
label_274310:
    // 0x274310: 0xb383  sra         $s6, $zero, 14
    ctx->pc = 0x274310u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 0), 14));
label_274314:
    // 0x274314: 0xb3f0  tge         $zero, $zero, 719
    ctx->pc = 0x274314u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274318:
    // 0x274318: 0x0  nop
    ctx->pc = 0x274318u;
    // NOP
label_27431c:
    // 0x27431c: 0x0  nop
    ctx->pc = 0x27431cu;
    // NOP
label_274320:
    // 0x274320: 0xb39a  .word       0x0000B39A                   # div         $s6, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274320u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_274324:
    // 0x274324: 0xbe30  tge         $zero, $zero, 760
    ctx->pc = 0x274324u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274328:
    // 0x274328: 0x0  nop
    ctx->pc = 0x274328u;
    // NOP
label_27432c:
    // 0x27432c: 0x0  nop
    ctx->pc = 0x27432cu;
    // NOP
label_274330:
    // 0x274330: 0xb3b2  tlt         $zero, $zero, 718
    ctx->pc = 0x274330u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274334:
    // 0x274334: 0xb1e0  .word       0x0000B1E0                   # add         $s6, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274334u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_274338:
    // 0x274338: 0x0  nop
    ctx->pc = 0x274338u;
    // NOP
label_27433c:
    // 0x27433c: 0x0  nop
    ctx->pc = 0x27433cu;
    // NOP
label_274340:
    // 0x274340: 0xb3c9  .word       0x0000B3C9                   # jalr        $s6, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
label_274344:
    if (ctx->pc == 0x274344u) {
        ctx->pc = 0x274344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274340u;
        // 0x274344: 0x2a70  tge         $zero, $zero, 169 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x274348u;
        goto label_274348;
    }
    ctx->pc = 0x274340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 22, 0x274348u);
        ctx->pc = 0x274344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274340u;
        // 0x274344: 0x2a70  tge         $zero, $zero, 169 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274340u, 0x274348u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x274348u;
label_274348:
    // 0x274348: 0x0  nop
    ctx->pc = 0x274348u;
    // NOP
label_27434c:
    // 0x27434c: 0x0  nop
    ctx->pc = 0x27434cu;
    // NOP
label_274350:
    // 0x274350: 0xb3cf  .word       0x0000B3CF                   # sync # 0000B000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274350u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_274354:
    // 0x274354: 0x2500  sll         $a0, $zero, 20
    ctx->pc = 0x274354u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_274358:
    // 0x274358: 0x0  nop
    ctx->pc = 0x274358u;
    // NOP
label_27435c:
    // 0x27435c: 0x0  nop
    ctx->pc = 0x27435cu;
    // NOP
label_274360:
    // 0x274360: 0xb3d4  .word       0x0000B3D4                   # dsllv       $s6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274360u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_274364:
    // 0x274364: 0x3ad0  .word       0x00003AD0                   # mfhi        $a3 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274364u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_274368:
    // 0x274368: 0x0  nop
    ctx->pc = 0x274368u;
    // NOP
label_27436c:
    // 0x27436c: 0x0  nop
    ctx->pc = 0x27436cu;
    // NOP
label_274370:
    // 0x274370: 0xb3dc  .word       0x0000B3DC                   # dmult       $zero, $zero # 0000B3C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274370u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x274370 raw=0x0000B3DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274374:
    // 0x274374: 0x3880  sll         $a3, $zero, 2
    ctx->pc = 0x274374u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_274378:
    // 0x274378: 0x0  nop
    ctx->pc = 0x274378u;
    // NOP
label_27437c:
    // 0x27437c: 0x0  nop
    ctx->pc = 0x27437cu;
    // NOP
label_274380:
    // 0x274380: 0xb3e4  .word       0x0000B3E4                   # and         $s6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274380u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_274384:
    // 0x274384: 0x5360  .word       0x00005360                   # add         $t2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274384u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_274388:
    // 0x274388: 0x0  nop
    ctx->pc = 0x274388u;
    // NOP
label_27438c:
    // 0x27438c: 0x0  nop
    ctx->pc = 0x27438cu;
    // NOP
label_274390:
    // 0x274390: 0xb3ef  .word       0x0000B3EF                   # dsubu       $s6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274390u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_274394:
    // 0x274394: 0x4be0  .word       0x00004BE0                   # add         $t1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274394u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_274398:
    // 0x274398: 0x0  nop
    ctx->pc = 0x274398u;
    // NOP
label_27439c:
    // 0x27439c: 0x0  nop
    ctx->pc = 0x27439cu;
    // NOP
label_2743a0:
    // 0x2743a0: 0xb3f9  .word       0x0000B3F9                   # INVALID     $zero, $zero, -0x4C07 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2743a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2743A0 raw=0x0000B3F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2743a4:
    // 0x2743a4: 0x4a40  sll         $t1, $zero, 9
    ctx->pc = 0x2743a4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_2743a8:
    // 0x2743a8: 0x0  nop
    ctx->pc = 0x2743a8u;
    // NOP
label_2743ac:
    // 0x2743ac: 0x0  nop
    ctx->pc = 0x2743acu;
    // NOP
label_2743b0:
    // 0x2743b0: 0xb403  sra         $s6, $zero, 16
    ctx->pc = 0x2743b0u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 0), 16));
label_2743b4:
    // 0x2743b4: 0x5b00  sll         $t3, $zero, 12
    ctx->pc = 0x2743b4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_2743b8:
    // 0x2743b8: 0x0  nop
    ctx->pc = 0x2743b8u;
    // NOP
label_2743bc:
    // 0x2743bc: 0x0  nop
    ctx->pc = 0x2743bcu;
    // NOP
label_2743c0:
    // 0x2743c0: 0xb40f  .word       0x0000B40F                   # sync.p # 0000B000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2743c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2743c4:
    // 0x2743c4: 0x3520  .word       0x00003520                   # add         $a2, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2743c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_2743c8:
    // 0x2743c8: 0x0  nop
    ctx->pc = 0x2743c8u;
    // NOP
label_2743cc:
    // 0x2743cc: 0x0  nop
    ctx->pc = 0x2743ccu;
    // NOP
label_2743d0:
    // 0x2743d0: 0xb416  .word       0x0000B416                   # dsrlv       $s6, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2743d0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2743d4:
    // 0x2743d4: 0x23e0  .word       0x000023E0                   # add         $a0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2743d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_2743d8:
    // 0x2743d8: 0x0  nop
    ctx->pc = 0x2743d8u;
    // NOP
label_2743dc:
    // 0x2743dc: 0x0  nop
    ctx->pc = 0x2743dcu;
    // NOP
label_2743e0:
    // 0x2743e0: 0xb41b  .word       0x0000B41B                   # divu        $s6, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2743e0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2743e4:
    // 0x2743e4: 0x41e0  .word       0x000041E0                   # add         $t0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2743e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2743e8:
    // 0x2743e8: 0x0  nop
    ctx->pc = 0x2743e8u;
    // NOP
label_2743ec:
    // 0x2743ec: 0x0  nop
    ctx->pc = 0x2743ecu;
    // NOP
label_2743f0:
    // 0x2743f0: 0xb424  .word       0x0000B424                   # and         $s6, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2743f0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2743f4:
    // 0x2743f4: 0x7190  .word       0x00007190                   # mfhi        $t6 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2743f4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2743f8:
    // 0x2743f8: 0x0  nop
    ctx->pc = 0x2743f8u;
    // NOP
label_2743fc:
    // 0x2743fc: 0x0  nop
    ctx->pc = 0x2743fcu;
    // NOP
label_274400:
    // 0x274400: 0xb433  tltu        $zero, $zero, 720
    ctx->pc = 0x274400u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274404:
    // 0x274404: 0x4480  sll         $t0, $zero, 18
    ctx->pc = 0x274404u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_274408:
    // 0x274408: 0x0  nop
    ctx->pc = 0x274408u;
    // NOP
label_27440c:
    // 0x27440c: 0x0  nop
    ctx->pc = 0x27440cu;
    // NOP
label_274410:
    // 0x274410: 0xb43c  dsll32      $s6, $zero, 16
    ctx->pc = 0x274410u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << (32 + 16));
label_274414:
    // 0x274414: 0x29b0  tge         $zero, $zero, 166
    ctx->pc = 0x274414u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274418:
    // 0x274418: 0x0  nop
    ctx->pc = 0x274418u;
    // NOP
label_27441c:
    // 0x27441c: 0x0  nop
    ctx->pc = 0x27441cu;
    // NOP
label_274420:
    // 0x274420: 0xb442  srl         $s6, $zero, 17
    ctx->pc = 0x274420u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 0), 17));
label_274424:
    // 0x274424: 0x2840  sll         $a1, $zero, 1
    ctx->pc = 0x274424u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_274428:
    // 0x274428: 0x0  nop
    ctx->pc = 0x274428u;
    // NOP
label_27442c:
    // 0x27442c: 0x0  nop
    ctx->pc = 0x27442cu;
    // NOP
label_274430:
    // 0x274430: 0xb448  .word       0x0000B448                   # jr          $zero # 0000B440 <InstrIdType: CPU_SPECIAL>
label_274434:
    if (ctx->pc == 0x274434u) {
        ctx->pc = 0x274434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274430u;
        // 0x274434: 0x3310  .word       0x00003310                   # mfhi        $a2 # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 6, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x274438u;
        goto label_274438;
    }
    ctx->pc = 0x274430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x274434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274430u;
        // 0x274434: 0x3310  .word       0x00003310                   # mfhi        $a2 # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 6, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274430u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x274438u;
label_274438:
    // 0x274438: 0x0  nop
    ctx->pc = 0x274438u;
    // NOP
label_27443c:
    // 0x27443c: 0x0  nop
    ctx->pc = 0x27443cu;
    // NOP
label_274440:
    // 0x274440: 0xb44f  .word       0x0000B44F                   # sync.p # 0000B000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274440u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_274444:
    // 0x274444: 0x39f0  tge         $zero, $zero, 231
    ctx->pc = 0x274444u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274448:
    // 0x274448: 0x0  nop
    ctx->pc = 0x274448u;
    // NOP
label_27444c:
    // 0x27444c: 0x0  nop
    ctx->pc = 0x27444cu;
    // NOP
label_274450:
    // 0x274450: 0xb457  .word       0x0000B457                   # dsrav       $s6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274450u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_274454:
    // 0x274454: 0xc3c0  sll         $t8, $zero, 15
    ctx->pc = 0x274454u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_274458:
    // 0x274458: 0x0  nop
    ctx->pc = 0x274458u;
    // NOP
label_27445c:
    // 0x27445c: 0x0  nop
    ctx->pc = 0x27445cu;
    // NOP
label_274460:
    // 0x274460: 0xb470  tge         $zero, $zero, 721
    ctx->pc = 0x274460u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274464:
    // 0x274464: 0x6280  sll         $t4, $zero, 10
    ctx->pc = 0x274464u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_274468:
    // 0x274468: 0x0  nop
    ctx->pc = 0x274468u;
    // NOP
label_27446c:
    // 0x27446c: 0x0  nop
    ctx->pc = 0x27446cu;
    // NOP
label_274470:
    // 0x274470: 0xb47d  .word       0x0000B47D                   # INVALID     $zero, $zero, -0x4B83 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274470u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x274470 raw=0x0000B47D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274474:
    // 0x274474: 0x4420  .word       0x00004420                   # add         $t0, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274474u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_274478:
    // 0x274478: 0x0  nop
    ctx->pc = 0x274478u;
    // NOP
label_27447c:
    // 0x27447c: 0x0  nop
    ctx->pc = 0x27447cu;
    // NOP
label_274480:
    // 0x274480: 0xb486  .word       0x0000B486                   # srlv        $s6, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274480u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_274484:
    // 0x274484: 0x65e0  .word       0x000065E0                   # add         $t4, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274484u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_274488:
    // 0x274488: 0x0  nop
    ctx->pc = 0x274488u;
    // NOP
label_27448c:
    // 0x27448c: 0x0  nop
    ctx->pc = 0x27448cu;
    // NOP
label_274490:
    // 0x274490: 0xb493  .word       0x0000B493                   # mtlo        $zero # 0000B480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274490u;
    ctx->lo = GPR_U64(ctx, 0);
label_274494:
    // 0x274494: 0x2240  sll         $a0, $zero, 9
    ctx->pc = 0x274494u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_274498:
    // 0x274498: 0x0  nop
    ctx->pc = 0x274498u;
    // NOP
label_27449c:
    // 0x27449c: 0x0  nop
    ctx->pc = 0x27449cu;
    // NOP
label_2744a0:
    // 0x2744a0: 0xb498  .word       0x0000B498                   # mult        $s6, $zero, $zero # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2744a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_2744a4:
    // 0x2744a4: 0x20d0  .word       0x000020D0                   # mfhi        $a0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2744a4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2744a8:
    // 0x2744a8: 0x0  nop
    ctx->pc = 0x2744a8u;
    // NOP
label_2744ac:
    // 0x2744ac: 0x0  nop
    ctx->pc = 0x2744acu;
    // NOP
label_2744b0:
    // 0x2744b0: 0xb49d  .word       0x0000B49D                   # dmultu      $zero, $zero # 0000B480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2744b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2744B0 raw=0x0000B49D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2744b4:
    // 0x2744b4: 0x73e0  .word       0x000073E0                   # add         $t6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2744b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2744b8:
    // 0x2744b8: 0x0  nop
    ctx->pc = 0x2744b8u;
    // NOP
label_2744bc:
    // 0x2744bc: 0x0  nop
    ctx->pc = 0x2744bcu;
    // NOP
label_2744c0:
    // 0x2744c0: 0xb4ac  .word       0x0000B4AC                   # dadd        $s6, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2744c0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, r); }
label_2744c4:
    // 0x2744c4: 0x31a0  .word       0x000031A0                   # add         $a2, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2744c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_2744c8:
    // 0x2744c8: 0x0  nop
    ctx->pc = 0x2744c8u;
    // NOP
label_2744cc:
    // 0x2744cc: 0x0  nop
    ctx->pc = 0x2744ccu;
    // NOP
label_2744d0:
    // 0x2744d0: 0xb4b3  tltu        $zero, $zero, 722
    ctx->pc = 0x2744d0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2744d4:
    // 0x2744d4: 0x4c60  .word       0x00004C60                   # add         $t1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2744d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2744d8:
    // 0x2744d8: 0x0  nop
    ctx->pc = 0x2744d8u;
    // NOP
label_2744dc:
    // 0x2744dc: 0x0  nop
    ctx->pc = 0x2744dcu;
    // NOP
label_2744e0:
    // 0x2744e0: 0xb4bd  .word       0x0000B4BD                   # INVALID     $zero, $zero, -0x4B43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2744e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2744E0 raw=0x0000B4BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2744e4:
    // 0x2744e4: 0x3580  sll         $a2, $zero, 22
    ctx->pc = 0x2744e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_2744e8:
    // 0x2744e8: 0x0  nop
    ctx->pc = 0x2744e8u;
    // NOP
label_2744ec:
    // 0x2744ec: 0x0  nop
    ctx->pc = 0x2744ecu;
    // NOP
label_2744f0:
    // 0x2744f0: 0xb4c4  .word       0x0000B4C4                   # sllv        $s6, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2744f0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2744f4:
    // 0x2744f4: 0x5070  tge         $zero, $zero, 321
    ctx->pc = 0x2744f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2744f8:
    // 0x2744f8: 0x0  nop
    ctx->pc = 0x2744f8u;
    // NOP
label_2744fc:
    // 0x2744fc: 0x0  nop
    ctx->pc = 0x2744fcu;
    // NOP
label_274500:
    // 0x274500: 0xb4cf  .word       0x0000B4CF                   # sync.p # 0000B000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274500u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_274504:
    // 0x274504: 0x63c0  sll         $t4, $zero, 15
    ctx->pc = 0x274504u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_274508:
    // 0x274508: 0x0  nop
    ctx->pc = 0x274508u;
    // NOP
label_27450c:
    // 0x27450c: 0x0  nop
    ctx->pc = 0x27450cu;
    // NOP
    ctx->pc = 0x274510u;
    return;
}

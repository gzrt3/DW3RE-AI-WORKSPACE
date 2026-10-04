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


void FUN_0019b618_part518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x297d28u: goto label_297d28;
        case 0x297d2cu: goto label_297d2c;
        case 0x297d30u: goto label_297d30;
        case 0x297d34u: goto label_297d34;
        case 0x297d38u: goto label_297d38;
        case 0x297d3cu: goto label_297d3c;
        case 0x297d40u: goto label_297d40;
        case 0x297d44u: goto label_297d44;
        case 0x297d48u: goto label_297d48;
        case 0x297d4cu: goto label_297d4c;
        case 0x297d50u: goto label_297d50;
        case 0x297d54u: goto label_297d54;
        case 0x297d58u: goto label_297d58;
        case 0x297d5cu: goto label_297d5c;
        case 0x297d60u: goto label_297d60;
        case 0x297d64u: goto label_297d64;
        case 0x297d68u: goto label_297d68;
        case 0x297d6cu: goto label_297d6c;
        case 0x297d70u: goto label_297d70;
        case 0x297d74u: goto label_297d74;
        case 0x297d78u: goto label_297d78;
        case 0x297d7cu: goto label_297d7c;
        case 0x297d80u: goto label_297d80;
        case 0x297d84u: goto label_297d84;
        case 0x297d88u: goto label_297d88;
        case 0x297d8cu: goto label_297d8c;
        case 0x297d90u: goto label_297d90;
        case 0x297d94u: goto label_297d94;
        case 0x297d98u: goto label_297d98;
        case 0x297d9cu: goto label_297d9c;
        case 0x297da0u: goto label_297da0;
        case 0x297da4u: goto label_297da4;
        case 0x297da8u: goto label_297da8;
        case 0x297dacu: goto label_297dac;
        case 0x297db0u: goto label_297db0;
        case 0x297db4u: goto label_297db4;
        case 0x297db8u: goto label_297db8;
        case 0x297dbcu: goto label_297dbc;
        case 0x297dc0u: goto label_297dc0;
        case 0x297dc4u: goto label_297dc4;
        case 0x297dc8u: goto label_297dc8;
        case 0x297dccu: goto label_297dcc;
        case 0x297dd0u: goto label_297dd0;
        case 0x297dd4u: goto label_297dd4;
        case 0x297dd8u: goto label_297dd8;
        case 0x297ddcu: goto label_297ddc;
        case 0x297de0u: goto label_297de0;
        case 0x297de4u: goto label_297de4;
        case 0x297de8u: goto label_297de8;
        case 0x297decu: goto label_297dec;
        case 0x297df0u: goto label_297df0;
        case 0x297df4u: goto label_297df4;
        case 0x297df8u: goto label_297df8;
        case 0x297dfcu: goto label_297dfc;
        case 0x297e00u: goto label_297e00;
        case 0x297e04u: goto label_297e04;
        case 0x297e08u: goto label_297e08;
        case 0x297e0cu: goto label_297e0c;
        case 0x297e10u: goto label_297e10;
        case 0x297e14u: goto label_297e14;
        case 0x297e18u: goto label_297e18;
        case 0x297e1cu: goto label_297e1c;
        case 0x297e20u: goto label_297e20;
        case 0x297e24u: goto label_297e24;
        case 0x297e28u: goto label_297e28;
        case 0x297e2cu: goto label_297e2c;
        case 0x297e30u: goto label_297e30;
        case 0x297e34u: goto label_297e34;
        case 0x297e38u: goto label_297e38;
        case 0x297e3cu: goto label_297e3c;
        case 0x297e40u: goto label_297e40;
        case 0x297e44u: goto label_297e44;
        case 0x297e48u: goto label_297e48;
        case 0x297e4cu: goto label_297e4c;
        case 0x297e50u: goto label_297e50;
        case 0x297e54u: goto label_297e54;
        case 0x297e58u: goto label_297e58;
        case 0x297e5cu: goto label_297e5c;
        case 0x297e60u: goto label_297e60;
        case 0x297e64u: goto label_297e64;
        case 0x297e68u: goto label_297e68;
        case 0x297e6cu: goto label_297e6c;
        case 0x297e70u: goto label_297e70;
        case 0x297e74u: goto label_297e74;
        case 0x297e78u: goto label_297e78;
        case 0x297e7cu: goto label_297e7c;
        case 0x297e80u: goto label_297e80;
        case 0x297e84u: goto label_297e84;
        case 0x297e88u: goto label_297e88;
        case 0x297e8cu: goto label_297e8c;
        case 0x297e90u: goto label_297e90;
        case 0x297e94u: goto label_297e94;
        case 0x297e98u: goto label_297e98;
        case 0x297e9cu: goto label_297e9c;
        case 0x297ea0u: goto label_297ea0;
        case 0x297ea4u: goto label_297ea4;
        case 0x297ea8u: goto label_297ea8;
        case 0x297eacu: goto label_297eac;
        case 0x297eb0u: goto label_297eb0;
        case 0x297eb4u: goto label_297eb4;
        case 0x297eb8u: goto label_297eb8;
        case 0x297ebcu: goto label_297ebc;
        case 0x297ec0u: goto label_297ec0;
        case 0x297ec4u: goto label_297ec4;
        case 0x297ec8u: goto label_297ec8;
        case 0x297eccu: goto label_297ecc;
        case 0x297ed0u: goto label_297ed0;
        case 0x297ed4u: goto label_297ed4;
        case 0x297ed8u: goto label_297ed8;
        case 0x297edcu: goto label_297edc;
        case 0x297ee0u: goto label_297ee0;
        case 0x297ee4u: goto label_297ee4;
        case 0x297ee8u: goto label_297ee8;
        case 0x297eecu: goto label_297eec;
        case 0x297ef0u: goto label_297ef0;
        case 0x297ef4u: goto label_297ef4;
        case 0x297ef8u: goto label_297ef8;
        case 0x297efcu: goto label_297efc;
        case 0x297f00u: goto label_297f00;
        case 0x297f04u: goto label_297f04;
        case 0x297f08u: goto label_297f08;
        case 0x297f0cu: goto label_297f0c;
        case 0x297f10u: goto label_297f10;
        case 0x297f14u: goto label_297f14;
        case 0x297f18u: goto label_297f18;
        case 0x297f1cu: goto label_297f1c;
        case 0x297f20u: goto label_297f20;
        case 0x297f24u: goto label_297f24;
        case 0x297f28u: goto label_297f28;
        case 0x297f2cu: goto label_297f2c;
        case 0x297f30u: goto label_297f30;
        case 0x297f34u: goto label_297f34;
        case 0x297f38u: goto label_297f38;
        case 0x297f3cu: goto label_297f3c;
        case 0x297f40u: goto label_297f40;
        case 0x297f44u: goto label_297f44;
        case 0x297f48u: goto label_297f48;
        case 0x297f4cu: goto label_297f4c;
        case 0x297f50u: goto label_297f50;
        case 0x297f54u: goto label_297f54;
        case 0x297f58u: goto label_297f58;
        case 0x297f5cu: goto label_297f5c;
        case 0x297f60u: goto label_297f60;
        case 0x297f64u: goto label_297f64;
        case 0x297f68u: goto label_297f68;
        case 0x297f6cu: goto label_297f6c;
        case 0x297f70u: goto label_297f70;
        case 0x297f74u: goto label_297f74;
        case 0x297f78u: goto label_297f78;
        case 0x297f7cu: goto label_297f7c;
        case 0x297f80u: goto label_297f80;
        case 0x297f84u: goto label_297f84;
        case 0x297f88u: goto label_297f88;
        case 0x297f8cu: goto label_297f8c;
        case 0x297f90u: goto label_297f90;
        case 0x297f94u: goto label_297f94;
        case 0x297f98u: goto label_297f98;
        case 0x297f9cu: goto label_297f9c;
        case 0x297fa0u: goto label_297fa0;
        case 0x297fa4u: goto label_297fa4;
        case 0x297fa8u: goto label_297fa8;
        case 0x297facu: goto label_297fac;
        case 0x297fb0u: goto label_297fb0;
        case 0x297fb4u: goto label_297fb4;
        case 0x297fb8u: goto label_297fb8;
        case 0x297fbcu: goto label_297fbc;
        case 0x297fc0u: goto label_297fc0;
        case 0x297fc4u: goto label_297fc4;
        case 0x297fc8u: goto label_297fc8;
        case 0x297fccu: goto label_297fcc;
        case 0x297fd0u: goto label_297fd0;
        case 0x297fd4u: goto label_297fd4;
        case 0x297fd8u: goto label_297fd8;
        case 0x297fdcu: goto label_297fdc;
        case 0x297fe0u: goto label_297fe0;
        case 0x297fe4u: goto label_297fe4;
        case 0x297fe8u: goto label_297fe8;
        case 0x297fecu: goto label_297fec;
        case 0x297ff0u: goto label_297ff0;
        case 0x297ff4u: goto label_297ff4;
        case 0x297ff8u: goto label_297ff8;
        case 0x297ffcu: goto label_297ffc;
        case 0x298000u: goto label_298000;
        case 0x298004u: goto label_298004;
        case 0x298008u: goto label_298008;
        case 0x29800cu: goto label_29800c;
        case 0x298010u: goto label_298010;
        case 0x298014u: goto label_298014;
        case 0x298018u: goto label_298018;
        case 0x29801cu: goto label_29801c;
        case 0x298020u: goto label_298020;
        case 0x298024u: goto label_298024;
        case 0x298028u: goto label_298028;
        case 0x29802cu: goto label_29802c;
        case 0x298030u: goto label_298030;
        case 0x298034u: goto label_298034;
        case 0x298038u: goto label_298038;
        case 0x29803cu: goto label_29803c;
        case 0x298040u: goto label_298040;
        case 0x298044u: goto label_298044;
        case 0x298048u: goto label_298048;
        case 0x29804cu: goto label_29804c;
        case 0x298050u: goto label_298050;
        case 0x298054u: goto label_298054;
        case 0x298058u: goto label_298058;
        case 0x29805cu: goto label_29805c;
        case 0x298060u: goto label_298060;
        case 0x298064u: goto label_298064;
        case 0x298068u: goto label_298068;
        case 0x29806cu: goto label_29806c;
        case 0x298070u: goto label_298070;
        case 0x298074u: goto label_298074;
        case 0x298078u: goto label_298078;
        case 0x29807cu: goto label_29807c;
        case 0x298080u: goto label_298080;
        case 0x298084u: goto label_298084;
        case 0x298088u: goto label_298088;
        case 0x29808cu: goto label_29808c;
        case 0x298090u: goto label_298090;
        case 0x298094u: goto label_298094;
        case 0x298098u: goto label_298098;
        case 0x29809cu: goto label_29809c;
        case 0x2980a0u: goto label_2980a0;
        case 0x2980a4u: goto label_2980a4;
        case 0x2980a8u: goto label_2980a8;
        case 0x2980acu: goto label_2980ac;
        case 0x2980b0u: goto label_2980b0;
        case 0x2980b4u: goto label_2980b4;
        case 0x2980b8u: goto label_2980b8;
        case 0x2980bcu: goto label_2980bc;
        case 0x2980c0u: goto label_2980c0;
        case 0x2980c4u: goto label_2980c4;
        case 0x2980c8u: goto label_2980c8;
        case 0x2980ccu: goto label_2980cc;
        case 0x2980d0u: goto label_2980d0;
        case 0x2980d4u: goto label_2980d4;
        case 0x2980d8u: goto label_2980d8;
        case 0x2980dcu: goto label_2980dc;
        case 0x2980e0u: goto label_2980e0;
        case 0x2980e4u: goto label_2980e4;
        case 0x2980e8u: goto label_2980e8;
        case 0x2980ecu: goto label_2980ec;
        case 0x2980f0u: goto label_2980f0;
        case 0x2980f4u: goto label_2980f4;
        case 0x2980f8u: goto label_2980f8;
        case 0x2980fcu: goto label_2980fc;
        case 0x298100u: goto label_298100;
        case 0x298104u: goto label_298104;
        case 0x298108u: goto label_298108;
        case 0x29810cu: goto label_29810c;
        case 0x298110u: goto label_298110;
        case 0x298114u: goto label_298114;
        case 0x298118u: goto label_298118;
        case 0x29811cu: goto label_29811c;
        case 0x298120u: goto label_298120;
        case 0x298124u: goto label_298124;
        case 0x298128u: goto label_298128;
        case 0x29812cu: goto label_29812c;
        case 0x298130u: goto label_298130;
        case 0x298134u: goto label_298134;
        case 0x298138u: goto label_298138;
        case 0x29813cu: goto label_29813c;
        case 0x298140u: goto label_298140;
        case 0x298144u: goto label_298144;
        case 0x298148u: goto label_298148;
        case 0x29814cu: goto label_29814c;
        case 0x298150u: goto label_298150;
        case 0x298154u: goto label_298154;
        case 0x298158u: goto label_298158;
        case 0x29815cu: goto label_29815c;
        case 0x298160u: goto label_298160;
        case 0x298164u: goto label_298164;
        case 0x298168u: goto label_298168;
        case 0x29816cu: goto label_29816c;
        case 0x298170u: goto label_298170;
        case 0x298174u: goto label_298174;
        case 0x298178u: goto label_298178;
        case 0x29817cu: goto label_29817c;
        case 0x298180u: goto label_298180;
        case 0x298184u: goto label_298184;
        case 0x298188u: goto label_298188;
        case 0x29818cu: goto label_29818c;
        case 0x298190u: goto label_298190;
        case 0x298194u: goto label_298194;
        case 0x298198u: goto label_298198;
        case 0x29819cu: goto label_29819c;
        case 0x2981a0u: goto label_2981a0;
        case 0x2981a4u: goto label_2981a4;
        case 0x2981a8u: goto label_2981a8;
        case 0x2981acu: goto label_2981ac;
        case 0x2981b0u: goto label_2981b0;
        case 0x2981b4u: goto label_2981b4;
        case 0x2981b8u: goto label_2981b8;
        case 0x2981bcu: goto label_2981bc;
        case 0x2981c0u: goto label_2981c0;
        case 0x2981c4u: goto label_2981c4;
        case 0x2981c8u: goto label_2981c8;
        case 0x2981ccu: goto label_2981cc;
        case 0x2981d0u: goto label_2981d0;
        case 0x2981d4u: goto label_2981d4;
        case 0x2981d8u: goto label_2981d8;
        case 0x2981dcu: goto label_2981dc;
        case 0x2981e0u: goto label_2981e0;
        case 0x2981e4u: goto label_2981e4;
        case 0x2981e8u: goto label_2981e8;
        case 0x2981ecu: goto label_2981ec;
        case 0x2981f0u: goto label_2981f0;
        case 0x2981f4u: goto label_2981f4;
        case 0x2981f8u: goto label_2981f8;
        case 0x2981fcu: goto label_2981fc;
        case 0x298200u: goto label_298200;
        case 0x298204u: goto label_298204;
        case 0x298208u: goto label_298208;
        case 0x29820cu: goto label_29820c;
        case 0x298210u: goto label_298210;
        case 0x298214u: goto label_298214;
        case 0x298218u: goto label_298218;
        case 0x29821cu: goto label_29821c;
        case 0x298220u: goto label_298220;
        case 0x298224u: goto label_298224;
        case 0x298228u: goto label_298228;
        case 0x29822cu: goto label_29822c;
        case 0x298230u: goto label_298230;
        case 0x298234u: goto label_298234;
        case 0x298238u: goto label_298238;
        case 0x29823cu: goto label_29823c;
        case 0x298240u: goto label_298240;
        case 0x298244u: goto label_298244;
        case 0x298248u: goto label_298248;
        case 0x29824cu: goto label_29824c;
        case 0x298250u: goto label_298250;
        case 0x298254u: goto label_298254;
        case 0x298258u: goto label_298258;
        case 0x29825cu: goto label_29825c;
        case 0x298260u: goto label_298260;
        case 0x298264u: goto label_298264;
        case 0x298268u: goto label_298268;
        case 0x29826cu: goto label_29826c;
        case 0x298270u: goto label_298270;
        case 0x298274u: goto label_298274;
        case 0x298278u: goto label_298278;
        case 0x29827cu: goto label_29827c;
        case 0x298280u: goto label_298280;
        case 0x298284u: goto label_298284;
        case 0x298288u: goto label_298288;
        case 0x29828cu: goto label_29828c;
        case 0x298290u: goto label_298290;
        case 0x298294u: goto label_298294;
        case 0x298298u: goto label_298298;
        case 0x29829cu: goto label_29829c;
        case 0x2982a0u: goto label_2982a0;
        case 0x2982a4u: goto label_2982a4;
        case 0x2982a8u: goto label_2982a8;
        case 0x2982acu: goto label_2982ac;
        case 0x2982b0u: goto label_2982b0;
        case 0x2982b4u: goto label_2982b4;
        case 0x2982b8u: goto label_2982b8;
        case 0x2982bcu: goto label_2982bc;
        case 0x2982c0u: goto label_2982c0;
        case 0x2982c4u: goto label_2982c4;
        case 0x2982c8u: goto label_2982c8;
        case 0x2982ccu: goto label_2982cc;
        case 0x2982d0u: goto label_2982d0;
        case 0x2982d4u: goto label_2982d4;
        case 0x2982d8u: goto label_2982d8;
        case 0x2982dcu: goto label_2982dc;
        case 0x2982e0u: goto label_2982e0;
        case 0x2982e4u: goto label_2982e4;
        case 0x2982e8u: goto label_2982e8;
        case 0x2982ecu: goto label_2982ec;
        case 0x2982f0u: goto label_2982f0;
        case 0x2982f4u: goto label_2982f4;
        case 0x2982f8u: goto label_2982f8;
        case 0x2982fcu: goto label_2982fc;
        case 0x298300u: goto label_298300;
        case 0x298304u: goto label_298304;
        case 0x298308u: goto label_298308;
        case 0x29830cu: goto label_29830c;
        case 0x298310u: goto label_298310;
        case 0x298314u: goto label_298314;
        case 0x298318u: goto label_298318;
        case 0x29831cu: goto label_29831c;
        case 0x298320u: goto label_298320;
        case 0x298324u: goto label_298324;
        case 0x298328u: goto label_298328;
        case 0x29832cu: goto label_29832c;
        case 0x298330u: goto label_298330;
        case 0x298334u: goto label_298334;
        case 0x298338u: goto label_298338;
        case 0x29833cu: goto label_29833c;
        case 0x298340u: goto label_298340;
        case 0x298344u: goto label_298344;
        case 0x298348u: goto label_298348;
        case 0x29834cu: goto label_29834c;
        case 0x298350u: goto label_298350;
        case 0x298354u: goto label_298354;
        case 0x298358u: goto label_298358;
        case 0x29835cu: goto label_29835c;
        case 0x298360u: goto label_298360;
        case 0x298364u: goto label_298364;
        case 0x298368u: goto label_298368;
        case 0x29836cu: goto label_29836c;
        case 0x298370u: goto label_298370;
        case 0x298374u: goto label_298374;
        case 0x298378u: goto label_298378;
        case 0x29837cu: goto label_29837c;
        case 0x298380u: goto label_298380;
        case 0x298384u: goto label_298384;
        case 0x298388u: goto label_298388;
        case 0x29838cu: goto label_29838c;
        case 0x298390u: goto label_298390;
        case 0x298394u: goto label_298394;
        case 0x298398u: goto label_298398;
        case 0x29839cu: goto label_29839c;
        case 0x2983a0u: goto label_2983a0;
        case 0x2983a4u: goto label_2983a4;
        case 0x2983a8u: goto label_2983a8;
        case 0x2983acu: goto label_2983ac;
        case 0x2983b0u: goto label_2983b0;
        case 0x2983b4u: goto label_2983b4;
        case 0x2983b8u: goto label_2983b8;
        case 0x2983bcu: goto label_2983bc;
        case 0x2983c0u: goto label_2983c0;
        case 0x2983c4u: goto label_2983c4;
        case 0x2983c8u: goto label_2983c8;
        case 0x2983ccu: goto label_2983cc;
        case 0x2983d0u: goto label_2983d0;
        case 0x2983d4u: goto label_2983d4;
        case 0x2983d8u: goto label_2983d8;
        case 0x2983dcu: goto label_2983dc;
        case 0x2983e0u: goto label_2983e0;
        case 0x2983e4u: goto label_2983e4;
        case 0x2983e8u: goto label_2983e8;
        case 0x2983ecu: goto label_2983ec;
        case 0x2983f0u: goto label_2983f0;
        case 0x2983f4u: goto label_2983f4;
        case 0x2983f8u: goto label_2983f8;
        case 0x2983fcu: goto label_2983fc;
        case 0x298400u: goto label_298400;
        case 0x298404u: goto label_298404;
        case 0x298408u: goto label_298408;
        case 0x29840cu: goto label_29840c;
        case 0x298410u: goto label_298410;
        case 0x298414u: goto label_298414;
        case 0x298418u: goto label_298418;
        case 0x29841cu: goto label_29841c;
        case 0x298420u: goto label_298420;
        case 0x298424u: goto label_298424;
        case 0x298428u: goto label_298428;
        case 0x29842cu: goto label_29842c;
        case 0x298430u: goto label_298430;
        case 0x298434u: goto label_298434;
        case 0x298438u: goto label_298438;
        case 0x29843cu: goto label_29843c;
        case 0x298440u: goto label_298440;
        case 0x298444u: goto label_298444;
        case 0x298448u: goto label_298448;
        case 0x29844cu: goto label_29844c;
        case 0x298450u: goto label_298450;
        case 0x298454u: goto label_298454;
        case 0x298458u: goto label_298458;
        case 0x29845cu: goto label_29845c;
        case 0x298460u: goto label_298460;
        case 0x298464u: goto label_298464;
        case 0x298468u: goto label_298468;
        case 0x29846cu: goto label_29846c;
        case 0x298470u: goto label_298470;
        case 0x298474u: goto label_298474;
        case 0x298478u: goto label_298478;
        case 0x29847cu: goto label_29847c;
        case 0x298480u: goto label_298480;
        case 0x298484u: goto label_298484;
        case 0x298488u: goto label_298488;
        case 0x29848cu: goto label_29848c;
        case 0x298490u: goto label_298490;
        case 0x298494u: goto label_298494;
        case 0x298498u: goto label_298498;
        case 0x29849cu: goto label_29849c;
        case 0x2984a0u: goto label_2984a0;
        case 0x2984a4u: goto label_2984a4;
        case 0x2984a8u: goto label_2984a8;
        case 0x2984acu: goto label_2984ac;
        case 0x2984b0u: goto label_2984b0;
        case 0x2984b4u: goto label_2984b4;
        case 0x2984b8u: goto label_2984b8;
        case 0x2984bcu: goto label_2984bc;
        case 0x2984c0u: goto label_2984c0;
        case 0x2984c4u: goto label_2984c4;
        case 0x2984c8u: goto label_2984c8;
        case 0x2984ccu: goto label_2984cc;
        case 0x2984d0u: goto label_2984d0;
        case 0x2984d4u: goto label_2984d4;
        case 0x2984d8u: goto label_2984d8;
        case 0x2984dcu: goto label_2984dc;
        case 0x2984e0u: goto label_2984e0;
        case 0x2984e4u: goto label_2984e4;
        case 0x2984e8u: goto label_2984e8;
        case 0x2984ecu: goto label_2984ec;
        case 0x2984f0u: goto label_2984f0;
        case 0x2984f4u: goto label_2984f4;
        default: return;
    }

label_297d28:
    // 0x297d28: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297d28u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297d2c:
    // 0x297d2c: 0x0  nop
    ctx->pc = 0x297d2cu;
    // NOP
label_297d30:
    // 0x297d30: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x297d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
label_297d34:
    // 0x297d34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297d34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297D34 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297d38:
    // 0x297d38: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297d38u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297d3c:
    // 0x297d3c: 0x0  nop
    ctx->pc = 0x297d3cu;
    // NOP
label_297d40:
    // 0x297d40: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x297d40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
label_297d44:
    // 0x297d44: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297d44u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297d48:
    // 0x297d48: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297d48u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297d4c:
    // 0x297d4c: 0x0  nop
    ctx->pc = 0x297d4cu;
    // NOP
label_297d50:
    // 0x297d50: 0x21387  .word       0x00021387                   # srav        $v0, $v0, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297d50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_297d54:
    // 0x297d54: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297d54u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297d58:
    // 0x297d58: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297d58u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297d5c:
    // 0x297d5c: 0x0  nop
    ctx->pc = 0x297d5cu;
    // NOP
label_297d60:
    // 0x297d60: 0x2138b  .word       0x0002138B                   # movn        $v0, $zero, $v0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297d60u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_297d64:
    // 0x297d64: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297d64u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297D64 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297d68:
    // 0x297d68: 0x680  sll         $zero, $zero, 26
    ctx->pc = 0x297d68u;
    
label_297d6c:
    // 0x297d6c: 0x0  nop
    ctx->pc = 0x297d6cu;
    // NOP
label_297d70:
    // 0x297d70: 0x2138c  .word       0x0002138C                   # syscall     78 # 00020000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297d70u;
    ctx->pc = 0x297D74u;
runtime->handleSyscall(rdram, ctx, 0x84Eu);
label_297d74:
    // 0x297d74: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297d74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297D74 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297d78:
    // 0x297d78: 0x680  sll         $zero, $zero, 26
    ctx->pc = 0x297d78u;
    
label_297d7c:
    // 0x297d7c: 0x0  nop
    ctx->pc = 0x297d7cu;
    // NOP
label_297d80:
    // 0x297d80: 0x2138d  break       2, 78
    ctx->pc = 0x297d80u;
    runtime->handleBreak(rdram, ctx);
label_297d84:
    // 0x297d84: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297d84u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297d88:
    // 0x297d88: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297d88u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297d8c:
    // 0x297d8c: 0x0  nop
    ctx->pc = 0x297d8cu;
    // NOP
label_297d90:
    // 0x297d90: 0x21391  .word       0x00021391                   # mthi        $zero # 00021380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297d90u;
    ctx->hi = GPR_U64(ctx, 0);
label_297d94:
    // 0x297d94: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297d94u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297d98:
    // 0x297d98: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297d98u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297d9c:
    // 0x297d9c: 0x0  nop
    ctx->pc = 0x297d9cu;
    // NOP
label_297da0:
    // 0x297da0: 0x21395  .word       0x00021395                   # INVALID     $zero, $v0, 0x1395 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297da0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x297DA0 raw=0x00021395"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297da4:
    // 0x297da4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297da4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297DA4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297da8:
    // 0x297da8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297da8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297dac:
    // 0x297dac: 0x0  nop
    ctx->pc = 0x297dacu;
    // NOP
label_297db0:
    // 0x297db0: 0x21396  .word       0x00021396                   # dsrlv       $v0, $v0, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_297db4:
    // 0x297db4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297db4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297DB4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297db8:
    // 0x297db8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297db8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297dbc:
    // 0x297dbc: 0x0  nop
    ctx->pc = 0x297dbcu;
    // NOP
label_297dc0:
    // 0x297dc0: 0x21397  .word       0x00021397                   # dsrav       $v0, $v0, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297dc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_297dc4:
    // 0x297dc4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297dc4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297dc8:
    // 0x297dc8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297dc8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297dcc:
    // 0x297dcc: 0x0  nop
    ctx->pc = 0x297dccu;
    // NOP
label_297dd0:
    // 0x297dd0: 0x2139b  .word       0x0002139B                   # divu        $v0, $zero, $v0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297dd0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_297dd4:
    // 0x297dd4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297dd4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297dd8:
    // 0x297dd8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297dd8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297ddc:
    // 0x297ddc: 0x0  nop
    ctx->pc = 0x297ddcu;
    // NOP
label_297de0:
    // 0x297de0: 0x2139f  .word       0x0002139F                   # ddivu       $v0, $zero, $v0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297de0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x297DE0 raw=0x0002139F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297de4:
    // 0x297de4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297de4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297DE4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297de8:
    // 0x297de8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297de8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297dec:
    // 0x297dec: 0x0  nop
    ctx->pc = 0x297decu;
    // NOP
label_297df0:
    // 0x297df0: 0x213a0  .word       0x000213A0                   # add         $v0, $zero, $v0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297df0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_297df4:
    // 0x297df4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297df4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297DF4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297df8:
    // 0x297df8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297df8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297dfc:
    // 0x297dfc: 0x0  nop
    ctx->pc = 0x297dfcu;
    // NOP
label_297e00:
    // 0x297e00: 0x213a1  .word       0x000213A1                   # addu        $v0, $zero, $v0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_297e04:
    // 0x297e04: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297e04u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297e08:
    // 0x297e08: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297e08u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297e0c:
    // 0x297e0c: 0x0  nop
    ctx->pc = 0x297e0cu;
    // NOP
label_297e10:
    // 0x297e10: 0x213a5  .word       0x000213A5                   # or          $v0, $zero, $v0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | GPR_U64(ctx, 2));
label_297e14:
    // 0x297e14: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297e14u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297e18:
    // 0x297e18: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297e18u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297e1c:
    // 0x297e1c: 0x0  nop
    ctx->pc = 0x297e1cu;
    // NOP
label_297e20:
    // 0x297e20: 0x213a9  .word       0x000213A9                   # mtsa        $zero # 00021380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x297e20u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_297e24:
    // 0x297e24: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297e24u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297E24 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297e28:
    // 0x297e28: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297e28u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297e2c:
    // 0x297e2c: 0x0  nop
    ctx->pc = 0x297e2cu;
    // NOP
label_297e30:
    // 0x297e30: 0x213aa  .word       0x000213AA                   # slt         $v0, $zero, $v0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297e30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_297e34:
    // 0x297e34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297e34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297E34 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297e38:
    // 0x297e38: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297e38u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297e3c:
    // 0x297e3c: 0x0  nop
    ctx->pc = 0x297e3cu;
    // NOP
label_297e40:
    // 0x297e40: 0x213ab  .word       0x000213AB                   # sltu        $v0, $zero, $v0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297e40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_297e44:
    // 0x297e44: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297e44u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297e48:
    // 0x297e48: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297e48u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297e4c:
    // 0x297e4c: 0x0  nop
    ctx->pc = 0x297e4cu;
    // NOP
label_297e50:
    // 0x297e50: 0x213af  .word       0x000213AF                   # dsubu       $v0, $zero, $v0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
label_297e54:
    // 0x297e54: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297e54u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297e58:
    // 0x297e58: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297e58u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297e5c:
    // 0x297e5c: 0x0  nop
    ctx->pc = 0x297e5cu;
    // NOP
label_297e60:
    // 0x297e60: 0x213b3  tltu        $zero, $v0, 78
    ctx->pc = 0x297e60u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_297e64:
    // 0x297e64: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297e64u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297E64 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297e68:
    // 0x297e68: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297e68u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297e6c:
    // 0x297e6c: 0x0  nop
    ctx->pc = 0x297e6cu;
    // NOP
label_297e70:
    // 0x297e70: 0x213b4  teq         $zero, $v0, 78
    ctx->pc = 0x297e70u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_297e74:
    // 0x297e74: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297e74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297E74 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297e78:
    // 0x297e78: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297e78u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297e7c:
    // 0x297e7c: 0x0  nop
    ctx->pc = 0x297e7cu;
    // NOP
label_297e80:
    // 0x297e80: 0x213b5  .word       0x000213B5                   # INVALID     $zero, $v0, 0x13B5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297e80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x297E80 raw=0x000213B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297e84:
    // 0x297e84: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297e84u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297e88:
    // 0x297e88: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297e88u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297e8c:
    // 0x297e8c: 0x0  nop
    ctx->pc = 0x297e8cu;
    // NOP
label_297e90:
    // 0x297e90: 0x213b9  .word       0x000213B9                   # INVALID     $zero, $v0, 0x13B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297e90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x297E90 raw=0x000213B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297e94:
    // 0x297e94: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297e94u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297e98:
    // 0x297e98: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297e98u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297e9c:
    // 0x297e9c: 0x0  nop
    ctx->pc = 0x297e9cu;
    // NOP
label_297ea0:
    // 0x297ea0: 0x213bd  .word       0x000213BD                   # INVALID     $zero, $v0, 0x13BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297ea0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x297EA0 raw=0x000213BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297ea4:
    // 0x297ea4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297ea4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297EA4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297ea8:
    // 0x297ea8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297eac:
    // 0x297eac: 0x0  nop
    ctx->pc = 0x297eacu;
    // NOP
label_297eb0:
    // 0x297eb0: 0x213be  dsrl32      $v0, $v0, 14
    ctx->pc = 0x297eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 14));
label_297eb4:
    // 0x297eb4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297eb4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297EB4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297eb8:
    // 0x297eb8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297ebc:
    // 0x297ebc: 0x0  nop
    ctx->pc = 0x297ebcu;
    // NOP
label_297ec0:
    // 0x297ec0: 0x213bf  dsra32      $v0, $v0, 14
    ctx->pc = 0x297ec0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 14));
label_297ec4:
    // 0x297ec4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297ec4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297ec8:
    // 0x297ec8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297ec8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297ecc:
    // 0x297ecc: 0x0  nop
    ctx->pc = 0x297eccu;
    // NOP
label_297ed0:
    // 0x297ed0: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x297ed0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
label_297ed4:
    // 0x297ed4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297ed4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297ed8:
    // 0x297ed8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297ed8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297edc:
    // 0x297edc: 0x0  nop
    ctx->pc = 0x297edcu;
    // NOP
label_297ee0:
    // 0x297ee0: 0x213c7  .word       0x000213C7                   # srav        $v0, $v0, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297ee0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_297ee4:
    // 0x297ee4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297ee4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297EE4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297ee8:
    // 0x297ee8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297eec:
    // 0x297eec: 0x0  nop
    ctx->pc = 0x297eecu;
    // NOP
label_297ef0:
    // 0x297ef0: 0x213c8  .word       0x000213C8                   # jr          $zero # 000213C0 <InstrIdType: CPU_SPECIAL>
label_297ef4:
    if (ctx->pc == 0x297EF4u) {
        ctx->pc = 0x297EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297EF0u;
        // 0x297ef4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297EF4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x297EF8u;
        goto label_297ef8;
    }
    ctx->pc = 0x297EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x297EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297EF0u;
        // 0x297ef4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297EF4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297EF0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x297EF8u;
label_297ef8:
    // 0x297ef8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297efc:
    // 0x297efc: 0x0  nop
    ctx->pc = 0x297efcu;
    // NOP
label_297f00:
    // 0x297f00: 0x213c9  .word       0x000213C9                   # jalr        $v0, $zero # 000203C0 <InstrIdType: CPU_SPECIAL>
label_297f04:
    if (ctx->pc == 0x297F04u) {
        ctx->pc = 0x297F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297F00u;
        // 0x297f04: 0x4  sllv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297F08u;
        goto label_297f08;
    }
    ctx->pc = 0x297F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 2, 0x297F08u);
        ctx->pc = 0x297F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297F00u;
        // 0x297f04: 0x4  sllv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297F00u, 0x297F08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x297F08u;
label_297f08:
    // 0x297f08: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297f08u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297f0c:
    // 0x297f0c: 0x0  nop
    ctx->pc = 0x297f0cu;
    // NOP
label_297f10:
    // 0x297f10: 0x213cd  break       2, 79
    ctx->pc = 0x297f10u;
    runtime->handleBreak(rdram, ctx);
label_297f14:
    // 0x297f14: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297f14u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297f18:
    // 0x297f18: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297f18u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297f1c:
    // 0x297f1c: 0x0  nop
    ctx->pc = 0x297f1cu;
    // NOP
label_297f20:
    // 0x297f20: 0x213d1  .word       0x000213D1                   # mthi        $zero # 000213C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297f20u;
    ctx->hi = GPR_U64(ctx, 0);
label_297f24:
    // 0x297f24: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297f24u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297F24 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297f28:
    // 0x297f28: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297f28u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297f2c:
    // 0x297f2c: 0x0  nop
    ctx->pc = 0x297f2cu;
    // NOP
label_297f30:
    // 0x297f30: 0x213d2  .word       0x000213D2                   # mflo        $v0 # 000203C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297f30u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_297f34:
    // 0x297f34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297f34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297F34 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297f38:
    // 0x297f38: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297f38u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297f3c:
    // 0x297f3c: 0x0  nop
    ctx->pc = 0x297f3cu;
    // NOP
label_297f40:
    // 0x297f40: 0x213d3  .word       0x000213D3                   # mtlo        $zero # 000213C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297f40u;
    ctx->lo = GPR_U64(ctx, 0);
label_297f44:
    // 0x297f44: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297f44u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297f48:
    // 0x297f48: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297f48u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297f4c:
    // 0x297f4c: 0x0  nop
    ctx->pc = 0x297f4cu;
    // NOP
label_297f50:
    // 0x297f50: 0x213d7  .word       0x000213D7                   # dsrav       $v0, $v0, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297f50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_297f54:
    // 0x297f54: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297f54u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297f58:
    // 0x297f58: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297f58u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297f5c:
    // 0x297f5c: 0x0  nop
    ctx->pc = 0x297f5cu;
    // NOP
label_297f60:
    // 0x297f60: 0x213db  .word       0x000213DB                   # divu        $v0, $zero, $v0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297f60u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_297f64:
    // 0x297f64: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297f64u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297F64 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297f68:
    // 0x297f68: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297f68u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297f6c:
    // 0x297f6c: 0x0  nop
    ctx->pc = 0x297f6cu;
    // NOP
label_297f70:
    // 0x297f70: 0x213dc  .word       0x000213DC                   # dmult       $zero, $v0 # 000013C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297f70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x297F70 raw=0x000213DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297f74:
    // 0x297f74: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297f74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297F74 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297f78:
    // 0x297f78: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297f78u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297f7c:
    // 0x297f7c: 0x0  nop
    ctx->pc = 0x297f7cu;
    // NOP
label_297f80:
    // 0x297f80: 0x213dd  .word       0x000213DD                   # dmultu      $zero, $v0 # 000013C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297f80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x297F80 raw=0x000213DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297f84:
    // 0x297f84: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297f84u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297f88:
    // 0x297f88: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297f88u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297f8c:
    // 0x297f8c: 0x0  nop
    ctx->pc = 0x297f8cu;
    // NOP
label_297f90:
    // 0x297f90: 0x213e1  .word       0x000213E1                   # addu        $v0, $zero, $v0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_297f94:
    // 0x297f94: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297f94u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297f98:
    // 0x297f98: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297f98u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297f9c:
    // 0x297f9c: 0x0  nop
    ctx->pc = 0x297f9cu;
    // NOP
label_297fa0:
    // 0x297fa0: 0x213e5  .word       0x000213E5                   # or          $v0, $zero, $v0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | GPR_U64(ctx, 2));
label_297fa4:
    // 0x297fa4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297fa4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297FA4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297fa8:
    // 0x297fa8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297fac:
    // 0x297fac: 0x0  nop
    ctx->pc = 0x297facu;
    // NOP
label_297fb0:
    // 0x297fb0: 0x213e6  .word       0x000213E6                   # xor         $v0, $zero, $v0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 2));
label_297fb4:
    // 0x297fb4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297fb4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297FB4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297fb8:
    // 0x297fb8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297fbc:
    // 0x297fbc: 0x0  nop
    ctx->pc = 0x297fbcu;
    // NOP
label_297fc0:
    // 0x297fc0: 0x213e7  .word       0x000213E7                   # nor         $v0, $zero, $v0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297fc0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_297fc4:
    // 0x297fc4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297fc4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297fc8:
    // 0x297fc8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297fc8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297fcc:
    // 0x297fcc: 0x0  nop
    ctx->pc = 0x297fccu;
    // NOP
label_297fd0:
    // 0x297fd0: 0x213eb  .word       0x000213EB                   # sltu        $v0, $zero, $v0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297fd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_297fd4:
    // 0x297fd4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x297fd4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297fd8:
    // 0x297fd8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297fd8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_297fdc:
    // 0x297fdc: 0x0  nop
    ctx->pc = 0x297fdcu;
    // NOP
label_297fe0:
    // 0x297fe0: 0x213ef  .word       0x000213EF                   # dsubu       $v0, $zero, $v0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
label_297fe4:
    // 0x297fe4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297fe4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297FE4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297fe8:
    // 0x297fe8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297fec:
    // 0x297fec: 0x0  nop
    ctx->pc = 0x297fecu;
    // NOP
label_297ff0:
    // 0x297ff0: 0x213f0  tge         $zero, $v0, 79
    ctx->pc = 0x297ff0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_297ff4:
    // 0x297ff4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297ff4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297FF4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297ff8:
    // 0x297ff8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x297ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_297ffc:
    // 0x297ffc: 0x0  nop
    ctx->pc = 0x297ffcu;
    // NOP
label_298000:
    // 0x298000: 0x213f1  tgeu        $zero, $v0, 79
    ctx->pc = 0x298000u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_298004:
    // 0x298004: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298004u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298008:
    // 0x298008: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298008u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29800c:
    // 0x29800c: 0x0  nop
    ctx->pc = 0x29800cu;
    // NOP
label_298010:
    // 0x298010: 0x213f5  .word       0x000213F5                   # INVALID     $zero, $v0, 0x13F5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298010u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x298010 raw=0x000213F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298014:
    // 0x298014: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298014u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298018:
    // 0x298018: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298018u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29801c:
    // 0x29801c: 0x0  nop
    ctx->pc = 0x29801cu;
    // NOP
label_298020:
    // 0x298020: 0x213f9  .word       0x000213F9                   # INVALID     $zero, $v0, 0x13F9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298020u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x298020 raw=0x000213F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298024:
    // 0x298024: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298024u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298024 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298028:
    // 0x298028: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x298028u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29802c:
    // 0x29802c: 0x0  nop
    ctx->pc = 0x29802cu;
    // NOP
label_298030:
    // 0x298030: 0x213fa  dsrl        $v0, $v0, 15
    ctx->pc = 0x298030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 15);
label_298034:
    // 0x298034: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298034u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298034 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298038:
    // 0x298038: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x298038u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29803c:
    // 0x29803c: 0x0  nop
    ctx->pc = 0x29803cu;
    // NOP
label_298040:
    // 0x298040: 0x213fb  dsra        $v0, $v0, 15
    ctx->pc = 0x298040u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 15);
label_298044:
    // 0x298044: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298044u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298048:
    // 0x298048: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298048u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29804c:
    // 0x29804c: 0x0  nop
    ctx->pc = 0x29804cu;
    // NOP
label_298050:
    // 0x298050: 0x213ff  dsra32      $v0, $v0, 15
    ctx->pc = 0x298050u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 15));
label_298054:
    // 0x298054: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298054u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298058:
    // 0x298058: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298058u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29805c:
    // 0x29805c: 0x0  nop
    ctx->pc = 0x29805cu;
    // NOP
label_298060:
    // 0x298060: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x298060u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_298064:
    // 0x298064: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298064u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298064 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298068:
    // 0x298068: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x298068u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29806c:
    // 0x29806c: 0x0  nop
    ctx->pc = 0x29806cu;
    // NOP
label_298070:
    // 0x298070: 0x21404  .word       0x00021404                   # sllv        $v0, $v0, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_298074:
    // 0x298074: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298074u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298074 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298078:
    // 0x298078: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x298078u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29807c:
    // 0x29807c: 0x0  nop
    ctx->pc = 0x29807cu;
    // NOP
label_298080:
    // 0x298080: 0x21405  .word       0x00021405                   # INVALID     $zero, $v0, 0x1405 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298080u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x298080 raw=0x00021405"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298084:
    // 0x298084: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298084u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298088:
    // 0x298088: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298088u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29808c:
    // 0x29808c: 0x0  nop
    ctx->pc = 0x29808cu;
    // NOP
label_298090:
    // 0x298090: 0x21409  .word       0x00021409                   # jalr        $v0, $zero # 00020400 <InstrIdType: CPU_SPECIAL>
label_298094:
    if (ctx->pc == 0x298094u) {
        ctx->pc = 0x298094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298090u;
        // 0x298094: 0x4  sllv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298098u;
        goto label_298098;
    }
    ctx->pc = 0x298090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 2, 0x298098u);
        ctx->pc = 0x298094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298090u;
        // 0x298094: 0x4  sllv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298090u, 0x298098u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298098u;
label_298098:
    // 0x298098: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298098u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29809c:
    // 0x29809c: 0x0  nop
    ctx->pc = 0x29809cu;
    // NOP
label_2980a0:
    // 0x2980a0: 0x2140d  break       2, 80
    ctx->pc = 0x2980a0u;
    runtime->handleBreak(rdram, ctx);
label_2980a4:
    // 0x2980a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2980a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2980A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2980a8:
    // 0x2980a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2980a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2980ac:
    // 0x2980ac: 0x0  nop
    ctx->pc = 0x2980acu;
    // NOP
label_2980b0:
    // 0x2980b0: 0x2140e  .word       0x0002140E                   # INVALID     $zero, $v0, 0x140E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2980b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2980B0 raw=0x0002140E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2980b4:
    // 0x2980b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2980b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2980B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2980b8:
    // 0x2980b8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2980b8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2980bc:
    // 0x2980bc: 0x0  nop
    ctx->pc = 0x2980bcu;
    // NOP
label_2980c0:
    // 0x2980c0: 0x2140f  .word       0x0002140F                   # sync.p # 00021000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2980c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2980c4:
    // 0x2980c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2980c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2980c8:
    // 0x2980c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2980c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2980cc:
    // 0x2980cc: 0x0  nop
    ctx->pc = 0x2980ccu;
    // NOP
label_2980d0:
    // 0x2980d0: 0x21413  .word       0x00021413                   # mtlo        $zero # 00021400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2980d0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2980d4:
    // 0x2980d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2980d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2980d8:
    // 0x2980d8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2980d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2980dc:
    // 0x2980dc: 0x0  nop
    ctx->pc = 0x2980dcu;
    // NOP
label_2980e0:
    // 0x2980e0: 0x21417  .word       0x00021417                   # dsrav       $v0, $v0, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2980e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_2980e4:
    // 0x2980e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2980e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2980E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2980e8:
    // 0x2980e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2980e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2980ec:
    // 0x2980ec: 0x0  nop
    ctx->pc = 0x2980ecu;
    // NOP
label_2980f0:
    // 0x2980f0: 0x21418  .word       0x00021418                   # mult        $v0, $zero, $v0 # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2980f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2980f4:
    // 0x2980f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2980f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2980F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2980f8:
    // 0x2980f8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2980f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2980fc:
    // 0x2980fc: 0x0  nop
    ctx->pc = 0x2980fcu;
    // NOP
label_298100:
    // 0x298100: 0x21419  .word       0x00021419                   # multu       $zero, $v0 # 00001400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298100u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_298104:
    // 0x298104: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298104u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298108:
    // 0x298108: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298108u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29810c:
    // 0x29810c: 0x0  nop
    ctx->pc = 0x29810cu;
    // NOP
label_298110:
    // 0x298110: 0x2141d  .word       0x0002141D                   # dmultu      $zero, $v0 # 00001400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298110u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x298110 raw=0x0002141D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298114:
    // 0x298114: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298114u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298118:
    // 0x298118: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298118u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29811c:
    // 0x29811c: 0x0  nop
    ctx->pc = 0x29811cu;
    // NOP
label_298120:
    // 0x298120: 0x21421  .word       0x00021421                   # addu        $v0, $zero, $v0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_298124:
    // 0x298124: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298124u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298124 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298128:
    // 0x298128: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x298128u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29812c:
    // 0x29812c: 0x0  nop
    ctx->pc = 0x29812cu;
    // NOP
label_298130:
    // 0x298130: 0x21422  .word       0x00021422                   # neg         $v0, $v0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298130u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 2), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
label_298134:
    // 0x298134: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298134u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298134 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298138:
    // 0x298138: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x298138u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29813c:
    // 0x29813c: 0x0  nop
    ctx->pc = 0x29813cu;
    // NOP
label_298140:
    // 0x298140: 0x21423  .word       0x00021423                   # negu        $v0, $v0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298140u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_298144:
    // 0x298144: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298144u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298148:
    // 0x298148: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298148u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29814c:
    // 0x29814c: 0x0  nop
    ctx->pc = 0x29814cu;
    // NOP
label_298150:
    // 0x298150: 0x21427  .word       0x00021427                   # nor         $v0, $zero, $v0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298150u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_298154:
    // 0x298154: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298154u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298158:
    // 0x298158: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298158u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29815c:
    // 0x29815c: 0x0  nop
    ctx->pc = 0x29815cu;
    // NOP
label_298160:
    // 0x298160: 0x2142b  .word       0x0002142B                   # sltu        $v0, $zero, $v0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298160u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_298164:
    // 0x298164: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298164u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298164 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298168:
    // 0x298168: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x298168u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29816c:
    // 0x29816c: 0x0  nop
    ctx->pc = 0x29816cu;
    // NOP
label_298170:
    // 0x298170: 0x2142c  .word       0x0002142C                   # dadd        $v0, $zero, $v0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298170u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_298174:
    // 0x298174: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298174u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298174 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298178:
    // 0x298178: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x298178u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29817c:
    // 0x29817c: 0x0  nop
    ctx->pc = 0x29817cu;
    // NOP
label_298180:
    // 0x298180: 0x2142d  .word       0x0002142D                   # daddu       $v0, $zero, $v0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 2));
label_298184:
    // 0x298184: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298184u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298188:
    // 0x298188: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298188u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29818c:
    // 0x29818c: 0x0  nop
    ctx->pc = 0x29818cu;
    // NOP
label_298190:
    // 0x298190: 0x21431  tgeu        $zero, $v0, 80
    ctx->pc = 0x298190u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_298194:
    // 0x298194: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298194u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298198:
    // 0x298198: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298198u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29819c:
    // 0x29819c: 0x0  nop
    ctx->pc = 0x29819cu;
    // NOP
label_2981a0:
    // 0x2981a0: 0x21435  .word       0x00021435                   # INVALID     $zero, $v0, 0x1435 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2981a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2981A0 raw=0x00021435"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2981a4:
    // 0x2981a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2981a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2981A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2981a8:
    // 0x2981a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2981a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2981ac:
    // 0x2981ac: 0x0  nop
    ctx->pc = 0x2981acu;
    // NOP
label_2981b0:
    // 0x2981b0: 0x21436  tne         $zero, $v0, 80
    ctx->pc = 0x2981b0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_2981b4:
    // 0x2981b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2981b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2981B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2981b8:
    // 0x2981b8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2981b8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2981bc:
    // 0x2981bc: 0x0  nop
    ctx->pc = 0x2981bcu;
    // NOP
label_2981c0:
    // 0x2981c0: 0x21437  .word       0x00021437                   # INVALID     $zero, $v0, 0x1437 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2981c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2981C0 raw=0x00021437"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2981c4:
    // 0x2981c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2981c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2981c8:
    // 0x2981c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2981c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2981cc:
    // 0x2981cc: 0x0  nop
    ctx->pc = 0x2981ccu;
    // NOP
label_2981d0:
    // 0x2981d0: 0x2143b  dsra        $v0, $v0, 16
    ctx->pc = 0x2981d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 16);
label_2981d4:
    // 0x2981d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2981d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2981d8:
    // 0x2981d8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2981d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2981dc:
    // 0x2981dc: 0x0  nop
    ctx->pc = 0x2981dcu;
    // NOP
label_2981e0:
    // 0x2981e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2981e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2981e4:
    // 0x2981e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2981e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2981E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2981e8:
    // 0x2981e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2981e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2981ec:
    // 0x2981ec: 0x0  nop
    ctx->pc = 0x2981ecu;
    // NOP
label_2981f0:
    // 0x2981f0: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x2981f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
label_2981f4:
    // 0x2981f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2981f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2981F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2981f8:
    // 0x2981f8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2981f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2981fc:
    // 0x2981fc: 0x0  nop
    ctx->pc = 0x2981fcu;
    // NOP
label_298200:
    // 0x298200: 0x21441  .word       0x00021441                   # INVALID     $zero, $v0, 0x1441 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298200u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298200 raw=0x00021441"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298204:
    // 0x298204: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298204u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298208:
    // 0x298208: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298208u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29820c:
    // 0x29820c: 0x0  nop
    ctx->pc = 0x29820cu;
    // NOP
label_298210:
    // 0x298210: 0x21445  .word       0x00021445                   # INVALID     $zero, $v0, 0x1445 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298210u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x298210 raw=0x00021445"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298214:
    // 0x298214: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298214u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298218:
    // 0x298218: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298218u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29821c:
    // 0x29821c: 0x0  nop
    ctx->pc = 0x29821cu;
    // NOP
label_298220:
    // 0x298220: 0x21449  .word       0x00021449                   # jalr        $v0, $zero # 00020440 <InstrIdType: CPU_SPECIAL>
label_298224:
    if (ctx->pc == 0x298224u) {
        ctx->pc = 0x298224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298220u;
        // 0x298224: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298224 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x298228u;
        goto label_298228;
    }
    ctx->pc = 0x298220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 2, 0x298228u);
        ctx->pc = 0x298224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298220u;
        // 0x298224: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298224 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298220u, 0x298228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298228u;
label_298228:
    // 0x298228: 0x7f0  tge         $zero, $zero, 31
    ctx->pc = 0x298228u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29822c:
    // 0x29822c: 0x0  nop
    ctx->pc = 0x29822cu;
    // NOP
label_298230:
    // 0x298230: 0x2144a  .word       0x0002144A                   # movz        $v0, $zero, $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298230u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_298234:
    // 0x298234: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298234u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298234 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298238:
    // 0x298238: 0x7f0  tge         $zero, $zero, 31
    ctx->pc = 0x298238u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29823c:
    // 0x29823c: 0x0  nop
    ctx->pc = 0x29823cu;
    // NOP
label_298240:
    // 0x298240: 0x2144b  .word       0x0002144B                   # movn        $v0, $zero, $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298240u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_298244:
    // 0x298244: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298244u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298248:
    // 0x298248: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298248u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29824c:
    // 0x29824c: 0x0  nop
    ctx->pc = 0x29824cu;
    // NOP
label_298250:
    // 0x298250: 0x2144f  .word       0x0002144F                   # sync.p # 00021000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298250u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_298254:
    // 0x298254: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298254u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298258:
    // 0x298258: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298258u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29825c:
    // 0x29825c: 0x0  nop
    ctx->pc = 0x29825cu;
    // NOP
label_298260:
    // 0x298260: 0x21453  .word       0x00021453                   # mtlo        $zero # 00021440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298260u;
    ctx->lo = GPR_U64(ctx, 0);
label_298264:
    // 0x298264: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298264u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298264 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298268:
    // 0x298268: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x298268u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29826c:
    // 0x29826c: 0x0  nop
    ctx->pc = 0x29826cu;
    // NOP
label_298270:
    // 0x298270: 0x21454  .word       0x00021454                   # dsllv       $v0, $v0, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 0) & 0x3F));
label_298274:
    // 0x298274: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298274u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298274 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298278:
    // 0x298278: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x298278u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29827c:
    // 0x29827c: 0x0  nop
    ctx->pc = 0x29827cu;
    // NOP
label_298280:
    // 0x298280: 0x21455  .word       0x00021455                   # INVALID     $zero, $v0, 0x1455 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298280u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x298280 raw=0x00021455"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298284:
    // 0x298284: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298284u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298288:
    // 0x298288: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298288u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29828c:
    // 0x29828c: 0x0  nop
    ctx->pc = 0x29828cu;
    // NOP
label_298290:
    // 0x298290: 0x21459  .word       0x00021459                   # multu       $zero, $v0 # 00001440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298290u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_298294:
    // 0x298294: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298294u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298298:
    // 0x298298: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298298u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29829c:
    // 0x29829c: 0x0  nop
    ctx->pc = 0x29829cu;
    // NOP
label_2982a0:
    // 0x2982a0: 0x2145d  .word       0x0002145D                   # dmultu      $zero, $v0 # 00001440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2982a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2982A0 raw=0x0002145D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2982a4:
    // 0x2982a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2982a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2982A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2982a8:
    // 0x2982a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2982a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2982ac:
    // 0x2982ac: 0x0  nop
    ctx->pc = 0x2982acu;
    // NOP
label_2982b0:
    // 0x2982b0: 0x2145e  .word       0x0002145E                   # ddiv        $v0, $zero, $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2982b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2982B0 raw=0x0002145E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2982b4:
    // 0x2982b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2982b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2982B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2982b8:
    // 0x2982b8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2982b8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2982bc:
    // 0x2982bc: 0x0  nop
    ctx->pc = 0x2982bcu;
    // NOP
label_2982c0:
    // 0x2982c0: 0x2145f  .word       0x0002145F                   # ddivu       $v0, $zero, $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2982c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2982C0 raw=0x0002145F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2982c4:
    // 0x2982c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2982c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2982c8:
    // 0x2982c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2982c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2982cc:
    // 0x2982cc: 0x0  nop
    ctx->pc = 0x2982ccu;
    // NOP
label_2982d0:
    // 0x2982d0: 0x21463  .word       0x00021463                   # negu        $v0, $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2982d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2982d4:
    // 0x2982d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2982d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2982d8:
    // 0x2982d8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2982d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2982dc:
    // 0x2982dc: 0x0  nop
    ctx->pc = 0x2982dcu;
    // NOP
label_2982e0:
    // 0x2982e0: 0x21467  .word       0x00021467                   # nor         $v0, $zero, $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2982e0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2982e4:
    // 0x2982e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2982e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2982E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2982e8:
    // 0x2982e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2982e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2982ec:
    // 0x2982ec: 0x0  nop
    ctx->pc = 0x2982ecu;
    // NOP
label_2982f0:
    // 0x2982f0: 0x21468  .word       0x00021468                   # mfsa        $v0 # 00020440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2982f0u;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_2982f4:
    // 0x2982f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2982f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2982F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2982f8:
    // 0x2982f8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2982f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2982fc:
    // 0x2982fc: 0x0  nop
    ctx->pc = 0x2982fcu;
    // NOP
label_298300:
    // 0x298300: 0x21469  .word       0x00021469                   # mtsa        $zero # 00021440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x298300u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_298304:
    // 0x298304: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298304u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298308:
    // 0x298308: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298308u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29830c:
    // 0x29830c: 0x0  nop
    ctx->pc = 0x29830cu;
    // NOP
label_298310:
    // 0x298310: 0x2146d  .word       0x0002146D                   # daddu       $v0, $zero, $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 2));
label_298314:
    // 0x298314: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298314u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298318:
    // 0x298318: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298318u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29831c:
    // 0x29831c: 0x0  nop
    ctx->pc = 0x29831cu;
    // NOP
label_298320:
    // 0x298320: 0x21471  tgeu        $zero, $v0, 81
    ctx->pc = 0x298320u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_298324:
    // 0x298324: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298324u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298324 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298328:
    // 0x298328: 0x7f0  tge         $zero, $zero, 31
    ctx->pc = 0x298328u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29832c:
    // 0x29832c: 0x0  nop
    ctx->pc = 0x29832cu;
    // NOP
label_298330:
    // 0x298330: 0x21472  tlt         $zero, $v0, 81
    ctx->pc = 0x298330u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_298334:
    // 0x298334: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298334u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298334 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298338:
    // 0x298338: 0x7f0  tge         $zero, $zero, 31
    ctx->pc = 0x298338u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29833c:
    // 0x29833c: 0x0  nop
    ctx->pc = 0x29833cu;
    // NOP
label_298340:
    // 0x298340: 0x21473  tltu        $zero, $v0, 81
    ctx->pc = 0x298340u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_298344:
    // 0x298344: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298344u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298348:
    // 0x298348: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298348u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29834c:
    // 0x29834c: 0x0  nop
    ctx->pc = 0x29834cu;
    // NOP
label_298350:
    // 0x298350: 0x21477  .word       0x00021477                   # INVALID     $zero, $v0, 0x1477 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298350u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x298350 raw=0x00021477"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298354:
    // 0x298354: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298354u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298358:
    // 0x298358: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298358u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29835c:
    // 0x29835c: 0x0  nop
    ctx->pc = 0x29835cu;
    // NOP
label_298360:
    // 0x298360: 0x2147b  dsra        $v0, $v0, 17
    ctx->pc = 0x298360u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 17);
label_298364:
    // 0x298364: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298364u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298364 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298368:
    // 0x298368: 0x7f0  tge         $zero, $zero, 31
    ctx->pc = 0x298368u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29836c:
    // 0x29836c: 0x0  nop
    ctx->pc = 0x29836cu;
    // NOP
label_298370:
    // 0x298370: 0x2147c  dsll32      $v0, $v0, 17
    ctx->pc = 0x298370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 17));
label_298374:
    // 0x298374: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298374u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298374 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298378:
    // 0x298378: 0x7f0  tge         $zero, $zero, 31
    ctx->pc = 0x298378u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29837c:
    // 0x29837c: 0x0  nop
    ctx->pc = 0x29837cu;
    // NOP
label_298380:
    // 0x298380: 0x2147d  .word       0x0002147D                   # INVALID     $zero, $v0, 0x147D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298380u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x298380 raw=0x0002147D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298384:
    // 0x298384: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298384u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298388:
    // 0x298388: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298388u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29838c:
    // 0x29838c: 0x0  nop
    ctx->pc = 0x29838cu;
    // NOP
label_298390:
    // 0x298390: 0x21481  .word       0x00021481                   # INVALID     $zero, $v0, 0x1481 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298390u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298390 raw=0x00021481"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298394:
    // 0x298394: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298394u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298398:
    // 0x298398: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298398u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29839c:
    // 0x29839c: 0x0  nop
    ctx->pc = 0x29839cu;
    // NOP
label_2983a0:
    // 0x2983a0: 0x21485  .word       0x00021485                   # INVALID     $zero, $v0, 0x1485 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2983a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2983A0 raw=0x00021485"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2983a4:
    // 0x2983a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2983a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2983A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2983a8:
    // 0x2983a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2983a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2983ac:
    // 0x2983ac: 0x0  nop
    ctx->pc = 0x2983acu;
    // NOP
label_2983b0:
    // 0x2983b0: 0x21486  .word       0x00021486                   # srlv        $v0, $v0, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2983b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_2983b4:
    // 0x2983b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2983b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2983B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2983b8:
    // 0x2983b8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2983b8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2983bc:
    // 0x2983bc: 0x0  nop
    ctx->pc = 0x2983bcu;
    // NOP
label_2983c0:
    // 0x2983c0: 0x21487  .word       0x00021487                   # srav        $v0, $v0, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2983c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_2983c4:
    // 0x2983c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2983c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2983c8:
    // 0x2983c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2983c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2983cc:
    // 0x2983cc: 0x0  nop
    ctx->pc = 0x2983ccu;
    // NOP
label_2983d0:
    // 0x2983d0: 0x2148b  .word       0x0002148B                   # movn        $v0, $zero, $v0 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2983d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_2983d4:
    // 0x2983d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2983d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2983d8:
    // 0x2983d8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2983d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2983dc:
    // 0x2983dc: 0x0  nop
    ctx->pc = 0x2983dcu;
    // NOP
label_2983e0:
    // 0x2983e0: 0x2148f  .word       0x0002148F                   # sync.p # 00021000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2983e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2983e4:
    // 0x2983e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2983e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2983E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2983e8:
    // 0x2983e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2983e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2983ec:
    // 0x2983ec: 0x0  nop
    ctx->pc = 0x2983ecu;
    // NOP
label_2983f0:
    // 0x2983f0: 0x21490  .word       0x00021490                   # mfhi        $v0 # 00020480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2983f0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2983f4:
    // 0x2983f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2983f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2983F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2983f8:
    // 0x2983f8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2983f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2983fc:
    // 0x2983fc: 0x0  nop
    ctx->pc = 0x2983fcu;
    // NOP
label_298400:
    // 0x298400: 0x21491  .word       0x00021491                   # mthi        $zero # 00021480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298400u;
    ctx->hi = GPR_U64(ctx, 0);
label_298404:
    // 0x298404: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298404u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298408:
    // 0x298408: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298408u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29840c:
    // 0x29840c: 0x0  nop
    ctx->pc = 0x29840cu;
    // NOP
label_298410:
    // 0x298410: 0x21495  .word       0x00021495                   # INVALID     $zero, $v0, 0x1495 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298410u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x298410 raw=0x00021495"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298414:
    // 0x298414: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298414u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298418:
    // 0x298418: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298418u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29841c:
    // 0x29841c: 0x0  nop
    ctx->pc = 0x29841cu;
    // NOP
label_298420:
    // 0x298420: 0x21499  .word       0x00021499                   # multu       $zero, $v0 # 00001480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298420u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_298424:
    // 0x298424: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298424u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298424 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298428:
    // 0x298428: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x298428u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29842c:
    // 0x29842c: 0x0  nop
    ctx->pc = 0x29842cu;
    // NOP
label_298430:
    // 0x298430: 0x2149a  .word       0x0002149A                   # div         $v0, $zero, $v0 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298430u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_298434:
    // 0x298434: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298434u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298434 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298438:
    // 0x298438: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x298438u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29843c:
    // 0x29843c: 0x0  nop
    ctx->pc = 0x29843cu;
    // NOP
label_298440:
    // 0x298440: 0x2149b  .word       0x0002149B                   # divu        $v0, $zero, $v0 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298440u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_298444:
    // 0x298444: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298444u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298448:
    // 0x298448: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298448u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29844c:
    // 0x29844c: 0x0  nop
    ctx->pc = 0x29844cu;
    // NOP
label_298450:
    // 0x298450: 0x2149f  .word       0x0002149F                   # ddivu       $v0, $zero, $v0 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298450u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x298450 raw=0x0002149F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298454:
    // 0x298454: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298454u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298458:
    // 0x298458: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298458u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29845c:
    // 0x29845c: 0x0  nop
    ctx->pc = 0x29845cu;
    // NOP
label_298460:
    // 0x298460: 0x214a3  .word       0x000214A3                   # negu        $v0, $v0 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298460u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_298464:
    // 0x298464: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298464u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298464 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298468:
    // 0x298468: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x298468u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29846c:
    // 0x29846c: 0x0  nop
    ctx->pc = 0x29846cu;
    // NOP
label_298470:
    // 0x298470: 0x214a4  .word       0x000214A4                   # and         $v0, $zero, $v0 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & GPR_U64(ctx, 2));
label_298474:
    // 0x298474: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298474u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298474 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_298478:
    // 0x298478: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x298478u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29847c:
    // 0x29847c: 0x0  nop
    ctx->pc = 0x29847cu;
    // NOP
label_298480:
    // 0x298480: 0x214a5  .word       0x000214A5                   # or          $v0, $zero, $v0 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | GPR_U64(ctx, 2));
label_298484:
    // 0x298484: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298484u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298488:
    // 0x298488: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298488u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29848c:
    // 0x29848c: 0x0  nop
    ctx->pc = 0x29848cu;
    // NOP
label_298490:
    // 0x298490: 0x214a9  .word       0x000214A9                   # mtsa        $zero # 00021480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x298490u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_298494:
    // 0x298494: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298494u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298498:
    // 0x298498: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298498u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29849c:
    // 0x29849c: 0x0  nop
    ctx->pc = 0x29849cu;
    // NOP
label_2984a0:
    // 0x2984a0: 0x214ad  .word       0x000214AD                   # daddu       $v0, $zero, $v0 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2984a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 2));
label_2984a4:
    // 0x2984a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2984a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2984A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2984a8:
    // 0x2984a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2984a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2984ac:
    // 0x2984ac: 0x0  nop
    ctx->pc = 0x2984acu;
    // NOP
label_2984b0:
    // 0x2984b0: 0x214ae  .word       0x000214AE                   # dsub        $v0, $zero, $v0 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2984b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_2984b4:
    // 0x2984b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2984b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2984B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2984b8:
    // 0x2984b8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2984b8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2984bc:
    // 0x2984bc: 0x0  nop
    ctx->pc = 0x2984bcu;
    // NOP
label_2984c0:
    // 0x2984c0: 0x214af  .word       0x000214AF                   # dsubu       $v0, $zero, $v0 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2984c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
label_2984c4:
    // 0x2984c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2984c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2984c8:
    // 0x2984c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2984c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2984cc:
    // 0x2984cc: 0x0  nop
    ctx->pc = 0x2984ccu;
    // NOP
label_2984d0:
    // 0x2984d0: 0x214b3  tltu        $zero, $v0, 82
    ctx->pc = 0x2984d0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_2984d4:
    // 0x2984d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2984d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2984d8:
    // 0x2984d8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2984d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2984dc:
    // 0x2984dc: 0x0  nop
    ctx->pc = 0x2984dcu;
    // NOP
label_2984e0:
    // 0x2984e0: 0x214b7  .word       0x000214B7                   # INVALID     $zero, $v0, 0x14B7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2984e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2984E0 raw=0x000214B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2984e4:
    // 0x2984e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2984e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2984E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2984e8:
    // 0x2984e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2984e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2984ec:
    // 0x2984ec: 0x0  nop
    ctx->pc = 0x2984ecu;
    // NOP
label_2984f0:
    // 0x2984f0: 0x214b8  dsll        $v0, $v0, 18
    ctx->pc = 0x2984f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 18);
label_2984f4:
    // 0x2984f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2984f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2984F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->pc = 0x2984f8u;
    return;
}

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


void FUN_0019b5e8_part516(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x296d58u: goto label_296d58;
        case 0x296d5cu: goto label_296d5c;
        case 0x296d60u: goto label_296d60;
        case 0x296d64u: goto label_296d64;
        case 0x296d68u: goto label_296d68;
        case 0x296d6cu: goto label_296d6c;
        case 0x296d70u: goto label_296d70;
        case 0x296d74u: goto label_296d74;
        case 0x296d78u: goto label_296d78;
        case 0x296d7cu: goto label_296d7c;
        case 0x296d80u: goto label_296d80;
        case 0x296d84u: goto label_296d84;
        case 0x296d88u: goto label_296d88;
        case 0x296d8cu: goto label_296d8c;
        case 0x296d90u: goto label_296d90;
        case 0x296d94u: goto label_296d94;
        case 0x296d98u: goto label_296d98;
        case 0x296d9cu: goto label_296d9c;
        case 0x296da0u: goto label_296da0;
        case 0x296da4u: goto label_296da4;
        case 0x296da8u: goto label_296da8;
        case 0x296dacu: goto label_296dac;
        case 0x296db0u: goto label_296db0;
        case 0x296db4u: goto label_296db4;
        case 0x296db8u: goto label_296db8;
        case 0x296dbcu: goto label_296dbc;
        case 0x296dc0u: goto label_296dc0;
        case 0x296dc4u: goto label_296dc4;
        case 0x296dc8u: goto label_296dc8;
        case 0x296dccu: goto label_296dcc;
        case 0x296dd0u: goto label_296dd0;
        case 0x296dd4u: goto label_296dd4;
        case 0x296dd8u: goto label_296dd8;
        case 0x296ddcu: goto label_296ddc;
        case 0x296de0u: goto label_296de0;
        case 0x296de4u: goto label_296de4;
        case 0x296de8u: goto label_296de8;
        case 0x296decu: goto label_296dec;
        case 0x296df0u: goto label_296df0;
        case 0x296df4u: goto label_296df4;
        case 0x296df8u: goto label_296df8;
        case 0x296dfcu: goto label_296dfc;
        case 0x296e00u: goto label_296e00;
        case 0x296e04u: goto label_296e04;
        case 0x296e08u: goto label_296e08;
        case 0x296e0cu: goto label_296e0c;
        case 0x296e10u: goto label_296e10;
        case 0x296e14u: goto label_296e14;
        case 0x296e18u: goto label_296e18;
        case 0x296e1cu: goto label_296e1c;
        case 0x296e20u: goto label_296e20;
        case 0x296e24u: goto label_296e24;
        case 0x296e28u: goto label_296e28;
        case 0x296e2cu: goto label_296e2c;
        case 0x296e30u: goto label_296e30;
        case 0x296e34u: goto label_296e34;
        case 0x296e38u: goto label_296e38;
        case 0x296e3cu: goto label_296e3c;
        case 0x296e40u: goto label_296e40;
        case 0x296e44u: goto label_296e44;
        case 0x296e48u: goto label_296e48;
        case 0x296e4cu: goto label_296e4c;
        case 0x296e50u: goto label_296e50;
        case 0x296e54u: goto label_296e54;
        case 0x296e58u: goto label_296e58;
        case 0x296e5cu: goto label_296e5c;
        case 0x296e60u: goto label_296e60;
        case 0x296e64u: goto label_296e64;
        case 0x296e68u: goto label_296e68;
        case 0x296e6cu: goto label_296e6c;
        case 0x296e70u: goto label_296e70;
        case 0x296e74u: goto label_296e74;
        case 0x296e78u: goto label_296e78;
        case 0x296e7cu: goto label_296e7c;
        case 0x296e80u: goto label_296e80;
        case 0x296e84u: goto label_296e84;
        case 0x296e88u: goto label_296e88;
        case 0x296e8cu: goto label_296e8c;
        case 0x296e90u: goto label_296e90;
        case 0x296e94u: goto label_296e94;
        case 0x296e98u: goto label_296e98;
        case 0x296e9cu: goto label_296e9c;
        case 0x296ea0u: goto label_296ea0;
        case 0x296ea4u: goto label_296ea4;
        case 0x296ea8u: goto label_296ea8;
        case 0x296eacu: goto label_296eac;
        case 0x296eb0u: goto label_296eb0;
        case 0x296eb4u: goto label_296eb4;
        case 0x296eb8u: goto label_296eb8;
        case 0x296ebcu: goto label_296ebc;
        case 0x296ec0u: goto label_296ec0;
        case 0x296ec4u: goto label_296ec4;
        case 0x296ec8u: goto label_296ec8;
        case 0x296eccu: goto label_296ecc;
        case 0x296ed0u: goto label_296ed0;
        case 0x296ed4u: goto label_296ed4;
        case 0x296ed8u: goto label_296ed8;
        case 0x296edcu: goto label_296edc;
        case 0x296ee0u: goto label_296ee0;
        case 0x296ee4u: goto label_296ee4;
        case 0x296ee8u: goto label_296ee8;
        case 0x296eecu: goto label_296eec;
        case 0x296ef0u: goto label_296ef0;
        case 0x296ef4u: goto label_296ef4;
        case 0x296ef8u: goto label_296ef8;
        case 0x296efcu: goto label_296efc;
        case 0x296f00u: goto label_296f00;
        case 0x296f04u: goto label_296f04;
        case 0x296f08u: goto label_296f08;
        case 0x296f0cu: goto label_296f0c;
        case 0x296f10u: goto label_296f10;
        case 0x296f14u: goto label_296f14;
        case 0x296f18u: goto label_296f18;
        case 0x296f1cu: goto label_296f1c;
        case 0x296f20u: goto label_296f20;
        case 0x296f24u: goto label_296f24;
        case 0x296f28u: goto label_296f28;
        case 0x296f2cu: goto label_296f2c;
        case 0x296f30u: goto label_296f30;
        case 0x296f34u: goto label_296f34;
        case 0x296f38u: goto label_296f38;
        case 0x296f3cu: goto label_296f3c;
        case 0x296f40u: goto label_296f40;
        case 0x296f44u: goto label_296f44;
        case 0x296f48u: goto label_296f48;
        case 0x296f4cu: goto label_296f4c;
        case 0x296f50u: goto label_296f50;
        case 0x296f54u: goto label_296f54;
        case 0x296f58u: goto label_296f58;
        case 0x296f5cu: goto label_296f5c;
        case 0x296f60u: goto label_296f60;
        case 0x296f64u: goto label_296f64;
        case 0x296f68u: goto label_296f68;
        case 0x296f6cu: goto label_296f6c;
        case 0x296f70u: goto label_296f70;
        case 0x296f74u: goto label_296f74;
        case 0x296f78u: goto label_296f78;
        case 0x296f7cu: goto label_296f7c;
        case 0x296f80u: goto label_296f80;
        case 0x296f84u: goto label_296f84;
        case 0x296f88u: goto label_296f88;
        case 0x296f8cu: goto label_296f8c;
        case 0x296f90u: goto label_296f90;
        case 0x296f94u: goto label_296f94;
        case 0x296f98u: goto label_296f98;
        case 0x296f9cu: goto label_296f9c;
        case 0x296fa0u: goto label_296fa0;
        case 0x296fa4u: goto label_296fa4;
        case 0x296fa8u: goto label_296fa8;
        case 0x296facu: goto label_296fac;
        case 0x296fb0u: goto label_296fb0;
        case 0x296fb4u: goto label_296fb4;
        case 0x296fb8u: goto label_296fb8;
        case 0x296fbcu: goto label_296fbc;
        case 0x296fc0u: goto label_296fc0;
        case 0x296fc4u: goto label_296fc4;
        case 0x296fc8u: goto label_296fc8;
        case 0x296fccu: goto label_296fcc;
        case 0x296fd0u: goto label_296fd0;
        case 0x296fd4u: goto label_296fd4;
        case 0x296fd8u: goto label_296fd8;
        case 0x296fdcu: goto label_296fdc;
        case 0x296fe0u: goto label_296fe0;
        case 0x296fe4u: goto label_296fe4;
        case 0x296fe8u: goto label_296fe8;
        case 0x296fecu: goto label_296fec;
        case 0x296ff0u: goto label_296ff0;
        case 0x296ff4u: goto label_296ff4;
        case 0x296ff8u: goto label_296ff8;
        case 0x296ffcu: goto label_296ffc;
        case 0x297000u: goto label_297000;
        case 0x297004u: goto label_297004;
        case 0x297008u: goto label_297008;
        case 0x29700cu: goto label_29700c;
        case 0x297010u: goto label_297010;
        case 0x297014u: goto label_297014;
        case 0x297018u: goto label_297018;
        case 0x29701cu: goto label_29701c;
        case 0x297020u: goto label_297020;
        case 0x297024u: goto label_297024;
        case 0x297028u: goto label_297028;
        case 0x29702cu: goto label_29702c;
        case 0x297030u: goto label_297030;
        case 0x297034u: goto label_297034;
        case 0x297038u: goto label_297038;
        case 0x29703cu: goto label_29703c;
        case 0x297040u: goto label_297040;
        case 0x297044u: goto label_297044;
        case 0x297048u: goto label_297048;
        case 0x29704cu: goto label_29704c;
        case 0x297050u: goto label_297050;
        case 0x297054u: goto label_297054;
        case 0x297058u: goto label_297058;
        case 0x29705cu: goto label_29705c;
        case 0x297060u: goto label_297060;
        case 0x297064u: goto label_297064;
        case 0x297068u: goto label_297068;
        case 0x29706cu: goto label_29706c;
        case 0x297070u: goto label_297070;
        case 0x297074u: goto label_297074;
        case 0x297078u: goto label_297078;
        case 0x29707cu: goto label_29707c;
        case 0x297080u: goto label_297080;
        case 0x297084u: goto label_297084;
        case 0x297088u: goto label_297088;
        case 0x29708cu: goto label_29708c;
        case 0x297090u: goto label_297090;
        case 0x297094u: goto label_297094;
        case 0x297098u: goto label_297098;
        case 0x29709cu: goto label_29709c;
        case 0x2970a0u: goto label_2970a0;
        case 0x2970a4u: goto label_2970a4;
        case 0x2970a8u: goto label_2970a8;
        case 0x2970acu: goto label_2970ac;
        case 0x2970b0u: goto label_2970b0;
        case 0x2970b4u: goto label_2970b4;
        case 0x2970b8u: goto label_2970b8;
        case 0x2970bcu: goto label_2970bc;
        case 0x2970c0u: goto label_2970c0;
        case 0x2970c4u: goto label_2970c4;
        case 0x2970c8u: goto label_2970c8;
        case 0x2970ccu: goto label_2970cc;
        case 0x2970d0u: goto label_2970d0;
        case 0x2970d4u: goto label_2970d4;
        case 0x2970d8u: goto label_2970d8;
        case 0x2970dcu: goto label_2970dc;
        case 0x2970e0u: goto label_2970e0;
        case 0x2970e4u: goto label_2970e4;
        case 0x2970e8u: goto label_2970e8;
        case 0x2970ecu: goto label_2970ec;
        case 0x2970f0u: goto label_2970f0;
        case 0x2970f4u: goto label_2970f4;
        case 0x2970f8u: goto label_2970f8;
        case 0x2970fcu: goto label_2970fc;
        case 0x297100u: goto label_297100;
        case 0x297104u: goto label_297104;
        case 0x297108u: goto label_297108;
        case 0x29710cu: goto label_29710c;
        case 0x297110u: goto label_297110;
        case 0x297114u: goto label_297114;
        case 0x297118u: goto label_297118;
        case 0x29711cu: goto label_29711c;
        case 0x297120u: goto label_297120;
        case 0x297124u: goto label_297124;
        case 0x297128u: goto label_297128;
        case 0x29712cu: goto label_29712c;
        case 0x297130u: goto label_297130;
        case 0x297134u: goto label_297134;
        case 0x297138u: goto label_297138;
        case 0x29713cu: goto label_29713c;
        case 0x297140u: goto label_297140;
        case 0x297144u: goto label_297144;
        case 0x297148u: goto label_297148;
        case 0x29714cu: goto label_29714c;
        case 0x297150u: goto label_297150;
        case 0x297154u: goto label_297154;
        case 0x297158u: goto label_297158;
        case 0x29715cu: goto label_29715c;
        case 0x297160u: goto label_297160;
        case 0x297164u: goto label_297164;
        case 0x297168u: goto label_297168;
        case 0x29716cu: goto label_29716c;
        case 0x297170u: goto label_297170;
        case 0x297174u: goto label_297174;
        case 0x297178u: goto label_297178;
        case 0x29717cu: goto label_29717c;
        case 0x297180u: goto label_297180;
        case 0x297184u: goto label_297184;
        case 0x297188u: goto label_297188;
        case 0x29718cu: goto label_29718c;
        case 0x297190u: goto label_297190;
        case 0x297194u: goto label_297194;
        case 0x297198u: goto label_297198;
        case 0x29719cu: goto label_29719c;
        case 0x2971a0u: goto label_2971a0;
        case 0x2971a4u: goto label_2971a4;
        case 0x2971a8u: goto label_2971a8;
        case 0x2971acu: goto label_2971ac;
        case 0x2971b0u: goto label_2971b0;
        case 0x2971b4u: goto label_2971b4;
        case 0x2971b8u: goto label_2971b8;
        case 0x2971bcu: goto label_2971bc;
        case 0x2971c0u: goto label_2971c0;
        case 0x2971c4u: goto label_2971c4;
        case 0x2971c8u: goto label_2971c8;
        case 0x2971ccu: goto label_2971cc;
        case 0x2971d0u: goto label_2971d0;
        case 0x2971d4u: goto label_2971d4;
        case 0x2971d8u: goto label_2971d8;
        case 0x2971dcu: goto label_2971dc;
        case 0x2971e0u: goto label_2971e0;
        case 0x2971e4u: goto label_2971e4;
        case 0x2971e8u: goto label_2971e8;
        case 0x2971ecu: goto label_2971ec;
        case 0x2971f0u: goto label_2971f0;
        case 0x2971f4u: goto label_2971f4;
        case 0x2971f8u: goto label_2971f8;
        case 0x2971fcu: goto label_2971fc;
        case 0x297200u: goto label_297200;
        case 0x297204u: goto label_297204;
        case 0x297208u: goto label_297208;
        case 0x29720cu: goto label_29720c;
        case 0x297210u: goto label_297210;
        case 0x297214u: goto label_297214;
        case 0x297218u: goto label_297218;
        case 0x29721cu: goto label_29721c;
        case 0x297220u: goto label_297220;
        case 0x297224u: goto label_297224;
        case 0x297228u: goto label_297228;
        case 0x29722cu: goto label_29722c;
        case 0x297230u: goto label_297230;
        case 0x297234u: goto label_297234;
        case 0x297238u: goto label_297238;
        case 0x29723cu: goto label_29723c;
        case 0x297240u: goto label_297240;
        case 0x297244u: goto label_297244;
        case 0x297248u: goto label_297248;
        case 0x29724cu: goto label_29724c;
        case 0x297250u: goto label_297250;
        case 0x297254u: goto label_297254;
        case 0x297258u: goto label_297258;
        case 0x29725cu: goto label_29725c;
        case 0x297260u: goto label_297260;
        case 0x297264u: goto label_297264;
        case 0x297268u: goto label_297268;
        case 0x29726cu: goto label_29726c;
        case 0x297270u: goto label_297270;
        case 0x297274u: goto label_297274;
        case 0x297278u: goto label_297278;
        case 0x29727cu: goto label_29727c;
        case 0x297280u: goto label_297280;
        case 0x297284u: goto label_297284;
        case 0x297288u: goto label_297288;
        case 0x29728cu: goto label_29728c;
        case 0x297290u: goto label_297290;
        case 0x297294u: goto label_297294;
        case 0x297298u: goto label_297298;
        case 0x29729cu: goto label_29729c;
        case 0x2972a0u: goto label_2972a0;
        case 0x2972a4u: goto label_2972a4;
        case 0x2972a8u: goto label_2972a8;
        case 0x2972acu: goto label_2972ac;
        case 0x2972b0u: goto label_2972b0;
        case 0x2972b4u: goto label_2972b4;
        case 0x2972b8u: goto label_2972b8;
        case 0x2972bcu: goto label_2972bc;
        case 0x2972c0u: goto label_2972c0;
        case 0x2972c4u: goto label_2972c4;
        case 0x2972c8u: goto label_2972c8;
        case 0x2972ccu: goto label_2972cc;
        case 0x2972d0u: goto label_2972d0;
        case 0x2972d4u: goto label_2972d4;
        case 0x2972d8u: goto label_2972d8;
        case 0x2972dcu: goto label_2972dc;
        case 0x2972e0u: goto label_2972e0;
        case 0x2972e4u: goto label_2972e4;
        case 0x2972e8u: goto label_2972e8;
        case 0x2972ecu: goto label_2972ec;
        case 0x2972f0u: goto label_2972f0;
        case 0x2972f4u: goto label_2972f4;
        case 0x2972f8u: goto label_2972f8;
        case 0x2972fcu: goto label_2972fc;
        case 0x297300u: goto label_297300;
        case 0x297304u: goto label_297304;
        case 0x297308u: goto label_297308;
        case 0x29730cu: goto label_29730c;
        case 0x297310u: goto label_297310;
        case 0x297314u: goto label_297314;
        case 0x297318u: goto label_297318;
        case 0x29731cu: goto label_29731c;
        case 0x297320u: goto label_297320;
        case 0x297324u: goto label_297324;
        case 0x297328u: goto label_297328;
        case 0x29732cu: goto label_29732c;
        case 0x297330u: goto label_297330;
        case 0x297334u: goto label_297334;
        case 0x297338u: goto label_297338;
        case 0x29733cu: goto label_29733c;
        case 0x297340u: goto label_297340;
        case 0x297344u: goto label_297344;
        case 0x297348u: goto label_297348;
        case 0x29734cu: goto label_29734c;
        case 0x297350u: goto label_297350;
        case 0x297354u: goto label_297354;
        case 0x297358u: goto label_297358;
        case 0x29735cu: goto label_29735c;
        case 0x297360u: goto label_297360;
        case 0x297364u: goto label_297364;
        case 0x297368u: goto label_297368;
        case 0x29736cu: goto label_29736c;
        case 0x297370u: goto label_297370;
        case 0x297374u: goto label_297374;
        case 0x297378u: goto label_297378;
        case 0x29737cu: goto label_29737c;
        case 0x297380u: goto label_297380;
        case 0x297384u: goto label_297384;
        case 0x297388u: goto label_297388;
        case 0x29738cu: goto label_29738c;
        case 0x297390u: goto label_297390;
        case 0x297394u: goto label_297394;
        case 0x297398u: goto label_297398;
        case 0x29739cu: goto label_29739c;
        case 0x2973a0u: goto label_2973a0;
        case 0x2973a4u: goto label_2973a4;
        case 0x2973a8u: goto label_2973a8;
        case 0x2973acu: goto label_2973ac;
        case 0x2973b0u: goto label_2973b0;
        case 0x2973b4u: goto label_2973b4;
        case 0x2973b8u: goto label_2973b8;
        case 0x2973bcu: goto label_2973bc;
        case 0x2973c0u: goto label_2973c0;
        case 0x2973c4u: goto label_2973c4;
        case 0x2973c8u: goto label_2973c8;
        case 0x2973ccu: goto label_2973cc;
        case 0x2973d0u: goto label_2973d0;
        case 0x2973d4u: goto label_2973d4;
        case 0x2973d8u: goto label_2973d8;
        case 0x2973dcu: goto label_2973dc;
        case 0x2973e0u: goto label_2973e0;
        case 0x2973e4u: goto label_2973e4;
        case 0x2973e8u: goto label_2973e8;
        case 0x2973ecu: goto label_2973ec;
        case 0x2973f0u: goto label_2973f0;
        case 0x2973f4u: goto label_2973f4;
        case 0x2973f8u: goto label_2973f8;
        case 0x2973fcu: goto label_2973fc;
        case 0x297400u: goto label_297400;
        case 0x297404u: goto label_297404;
        case 0x297408u: goto label_297408;
        case 0x29740cu: goto label_29740c;
        case 0x297410u: goto label_297410;
        case 0x297414u: goto label_297414;
        case 0x297418u: goto label_297418;
        case 0x29741cu: goto label_29741c;
        case 0x297420u: goto label_297420;
        case 0x297424u: goto label_297424;
        case 0x297428u: goto label_297428;
        case 0x29742cu: goto label_29742c;
        case 0x297430u: goto label_297430;
        case 0x297434u: goto label_297434;
        case 0x297438u: goto label_297438;
        case 0x29743cu: goto label_29743c;
        case 0x297440u: goto label_297440;
        case 0x297444u: goto label_297444;
        case 0x297448u: goto label_297448;
        case 0x29744cu: goto label_29744c;
        case 0x297450u: goto label_297450;
        case 0x297454u: goto label_297454;
        case 0x297458u: goto label_297458;
        case 0x29745cu: goto label_29745c;
        case 0x297460u: goto label_297460;
        case 0x297464u: goto label_297464;
        case 0x297468u: goto label_297468;
        case 0x29746cu: goto label_29746c;
        case 0x297470u: goto label_297470;
        case 0x297474u: goto label_297474;
        case 0x297478u: goto label_297478;
        case 0x29747cu: goto label_29747c;
        case 0x297480u: goto label_297480;
        case 0x297484u: goto label_297484;
        case 0x297488u: goto label_297488;
        case 0x29748cu: goto label_29748c;
        case 0x297490u: goto label_297490;
        case 0x297494u: goto label_297494;
        case 0x297498u: goto label_297498;
        case 0x29749cu: goto label_29749c;
        case 0x2974a0u: goto label_2974a0;
        case 0x2974a4u: goto label_2974a4;
        case 0x2974a8u: goto label_2974a8;
        case 0x2974acu: goto label_2974ac;
        case 0x2974b0u: goto label_2974b0;
        case 0x2974b4u: goto label_2974b4;
        case 0x2974b8u: goto label_2974b8;
        case 0x2974bcu: goto label_2974bc;
        case 0x2974c0u: goto label_2974c0;
        case 0x2974c4u: goto label_2974c4;
        case 0x2974c8u: goto label_2974c8;
        case 0x2974ccu: goto label_2974cc;
        case 0x2974d0u: goto label_2974d0;
        case 0x2974d4u: goto label_2974d4;
        case 0x2974d8u: goto label_2974d8;
        case 0x2974dcu: goto label_2974dc;
        case 0x2974e0u: goto label_2974e0;
        case 0x2974e4u: goto label_2974e4;
        case 0x2974e8u: goto label_2974e8;
        case 0x2974ecu: goto label_2974ec;
        case 0x2974f0u: goto label_2974f0;
        case 0x2974f4u: goto label_2974f4;
        case 0x2974f8u: goto label_2974f8;
        case 0x2974fcu: goto label_2974fc;
        case 0x297500u: goto label_297500;
        case 0x297504u: goto label_297504;
        case 0x297508u: goto label_297508;
        case 0x29750cu: goto label_29750c;
        case 0x297510u: goto label_297510;
        case 0x297514u: goto label_297514;
        case 0x297518u: goto label_297518;
        case 0x29751cu: goto label_29751c;
        case 0x297520u: goto label_297520;
        case 0x297524u: goto label_297524;
        default: return;
    }

label_296d58:
    // 0x296d58: 0x14f4c  .word       0x00014F4C                   # syscall     317 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296d58u;
    ctx->pc = 0x296D5Cu;
runtime->handleSyscall(rdram, ctx, 0x53Du);
label_296d5c:
    // 0x296d5c: 0x0  nop
    ctx->pc = 0x296d5cu;
    // NOP
label_296d60:
    // 0x296d60: 0x1e0bf  dsra32      $gp, $at, 2
    ctx->pc = 0x296d60u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 1) >> (32 + 2));
label_296d64:
    // 0x296d64: 0x2a  slt         $zero, $zero, $zero
    ctx->pc = 0x296d64u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_296d68:
    // 0x296d68: 0x14808  .word       0x00014808                   # jr          $zero # 00014800 <InstrIdType: CPU_SPECIAL>
label_296d6c:
    if (ctx->pc == 0x296D6Cu) {
        ctx->pc = 0x296D70u;
        goto label_296d70;
    }
    ctx->pc = 0x296D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296D68u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x296D70u;
label_296d70:
    // 0x296d70: 0x1e0e9  .word       0x0001E0E9                   # mtsa        $zero # 0001E0C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x296d70u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_296d74:
    // 0x296d74: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296d74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x296D74 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296d78:
    // 0x296d78: 0x2030  tge         $zero, $zero, 128
    ctx->pc = 0x296d78u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_296d7c:
    // 0x296d7c: 0x0  nop
    ctx->pc = 0x296d7cu;
    // NOP
label_296d80:
    // 0x296d80: 0x1e0ee  .word       0x0001E0EE                   # dsub        $gp, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296d80u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, r); }
label_296d84:
    // 0x296d84: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296d84u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x296D84 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296d88:
    // 0x296d88: 0x2030  tge         $zero, $zero, 128
    ctx->pc = 0x296d88u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_296d8c:
    // 0x296d8c: 0x0  nop
    ctx->pc = 0x296d8cu;
    // NOP
label_296d90:
    // 0x296d90: 0x1e0f3  tltu        $zero, $at, 899
    ctx->pc = 0x296d90u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_296d94:
    // 0x296d94: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x296d94u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_296d98:
    // 0x296d98: 0xa83c  dsll32      $s5, $zero, 0
    ctx->pc = 0x296d98u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) << (32 + 0));
label_296d9c:
    // 0x296d9c: 0x0  nop
    ctx->pc = 0x296d9cu;
    // NOP
label_296da0:
    // 0x296da0: 0x1e109  .word       0x0001E109                   # jalr        $gp, $zero # 00010100 <InstrIdType: CPU_SPECIAL>
label_296da4:
    if (ctx->pc == 0x296DA4u) {
        ctx->pc = 0x296DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296DA0u;
        // 0x296da4: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x296DA4 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x296DA8u;
        goto label_296da8;
    }
    ctx->pc = 0x296DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 28, 0x296DA8u);
        ctx->pc = 0x296DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296DA0u;
        // 0x296da4: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x296DA4 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296DA0u, 0x296DA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296DA8u;
label_296da8:
    // 0x296da8: 0xa7f4  teq         $zero, $zero, 671
    ctx->pc = 0x296da8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_296dac:
    // 0x296dac: 0x0  nop
    ctx->pc = 0x296dacu;
    // NOP
label_296db0:
    // 0x296db0: 0x1e11e  .word       0x0001E11E                   # ddiv        $gp, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296db0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x296DB0 raw=0x0001E11E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296db4:
    // 0x296db4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296db4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296DB4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296db8:
    // 0x296db8: 0x1f0  tge         $zero, $zero, 7
    ctx->pc = 0x296db8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_296dbc:
    // 0x296dbc: 0x0  nop
    ctx->pc = 0x296dbcu;
    // NOP
label_296dc0:
    // 0x296dc0: 0x1e11f  .word       0x0001E11F                   # ddivu       $gp, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296dc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x296DC0 raw=0x0001E11F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296dc4:
    // 0x296dc4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296dc4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296DC4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296dc8:
    // 0x296dc8: 0x1f0  tge         $zero, $zero, 7
    ctx->pc = 0x296dc8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_296dcc:
    // 0x296dcc: 0x0  nop
    ctx->pc = 0x296dccu;
    // NOP
label_296dd0:
    // 0x296dd0: 0x1e120  .word       0x0001E120                   # add         $gp, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296dd0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_296dd4:
    // 0x296dd4: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x296dd4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_296dd8:
    // 0x296dd8: 0x12dd4  .word       0x00012DD4                   # dsllv       $a1, $at, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296dd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_296ddc:
    // 0x296ddc: 0x0  nop
    ctx->pc = 0x296ddcu;
    // NOP
label_296de0:
    // 0x296de0: 0x1e146  .word       0x0001E146                   # srlv        $gp, $at, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296de0u;
    SET_GPR_S32(ctx, 28, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_296de4:
    // 0x296de4: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x296de4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_296de8:
    // 0x296de8: 0x12ca4  .word       0x00012CA4                   # and         $a1, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296de8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_296dec:
    // 0x296dec: 0x0  nop
    ctx->pc = 0x296decu;
    // NOP
label_296df0:
    // 0x296df0: 0x1e16c  .word       0x0001E16C                   # dadd        $gp, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296df0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, r); }
label_296df4:
    // 0x296df4: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x296df4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_296df8:
    // 0x296df8: 0x55a8  .word       0x000055A8                   # mfsa        $t2 # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x296df8u;
    SET_GPR_U32(ctx, 10, ctx->sa);
label_296dfc:
    // 0x296dfc: 0x0  nop
    ctx->pc = 0x296dfcu;
    // NOP
label_296e00:
    // 0x296e00: 0x1e177  .word       0x0001E177                   # INVALID     $zero, $at, -0x1E89 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296e00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x296E00 raw=0x0001E177"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296e04:
    // 0x296e04: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x296e04u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_296e08:
    // 0x296e08: 0x5424  .word       0x00005424                   # and         $t2, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296e08u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_296e0c:
    // 0x296e0c: 0x0  nop
    ctx->pc = 0x296e0cu;
    // NOP
label_296e10:
    // 0x296e10: 0x1e182  srl         $gp, $at, 6
    ctx->pc = 0x296e10u;
    SET_GPR_S32(ctx, 28, (int32_t)SRL32(GPR_U32(ctx, 1), 6));
label_296e14:
    // 0x296e14: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x296e14u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_296e18:
    // 0x296e18: 0x12bfc  dsll32      $a1, $at, 15
    ctx->pc = 0x296e18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) << (32 + 15));
label_296e1c:
    // 0x296e1c: 0x0  nop
    ctx->pc = 0x296e1cu;
    // NOP
label_296e20:
    // 0x296e20: 0x1e1a8  .word       0x0001E1A8                   # mfsa        $gp # 00010180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x296e20u;
    SET_GPR_U32(ctx, 28, ctx->sa);
label_296e24:
    // 0x296e24: 0x25  move        $zero, $zero
    ctx->pc = 0x296e24u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_296e28:
    // 0x296e28: 0x12798  .word       0x00012798                   # mult        $a0, $zero, $at # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x296e28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_296e2c:
    // 0x296e2c: 0x0  nop
    ctx->pc = 0x296e2cu;
    // NOP
label_296e30:
    // 0x296e30: 0x1e1cd  break       1, 903
    ctx->pc = 0x296e30u;
    runtime->handleBreak(rdram, ctx);
label_296e34:
    // 0x296e34: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x296e34u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_296e38:
    // 0x296e38: 0x523c  dsll32      $t2, $zero, 8
    ctx->pc = 0x296e38u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) << (32 + 8));
label_296e3c:
    // 0x296e3c: 0x0  nop
    ctx->pc = 0x296e3cu;
    // NOP
label_296e40:
    // 0x296e40: 0x1e1d8  .word       0x0001E1D8                   # mult        $gp, $zero, $at # 000001C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x296e40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 28, (int32_t)result); }
label_296e44:
    // 0x296e44: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x296e44u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_296e48:
    // 0x296e48: 0x523c  dsll32      $t2, $zero, 8
    ctx->pc = 0x296e48u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) << (32 + 8));
label_296e4c:
    // 0x296e4c: 0x0  nop
    ctx->pc = 0x296e4cu;
    // NOP
label_296e50:
    // 0x296e50: 0x1e1e3  .word       0x0001E1E3                   # negu        $gp, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296e50u;
    SET_GPR_S32(ctx, 28, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_296e54:
    // 0x296e54: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x296e54u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_296e58:
    // 0x296e58: 0x4b10  .word       0x00004B10                   # mfhi        $t1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296e58u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_296e5c:
    // 0x296e5c: 0x0  nop
    ctx->pc = 0x296e5cu;
    // NOP
label_296e60:
    // 0x296e60: 0x1e1ed  .word       0x0001E1ED                   # daddu       $gp, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296e60u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_296e64:
    // 0x296e64: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x296e64u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_296e68:
    // 0x296e68: 0x4ad8  .word       0x00004AD8                   # mult        $t1, $zero, $zero # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x296e68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_296e6c:
    // 0x296e6c: 0x0  nop
    ctx->pc = 0x296e6cu;
    // NOP
label_296e70:
    // 0x296e70: 0x1e1f7  .word       0x0001E1F7                   # INVALID     $zero, $at, -0x1E09 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296e70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x296E70 raw=0x0001E1F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296e74:
    // 0x296e74: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x296e74u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_296e78:
    // 0x296e78: 0x11a8  .word       0x000011A8                   # mfsa        $v0 # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x296e78u;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_296e7c:
    // 0x296e7c: 0x0  nop
    ctx->pc = 0x296e7cu;
    // NOP
label_296e80:
    // 0x296e80: 0x1e1fa  dsrl        $gp, $at, 7
    ctx->pc = 0x296e80u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 1) >> 7);
label_296e84:
    // 0x296e84: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x296e84u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_296e88:
    // 0x296e88: 0x11a8  .word       0x000011A8                   # mfsa        $v0 # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x296e88u;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_296e8c:
    // 0x296e8c: 0x0  nop
    ctx->pc = 0x296e8cu;
    // NOP
label_296e90:
    // 0x296e90: 0x1e1fd  .word       0x0001E1FD                   # INVALID     $zero, $at, -0x1E03 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296e90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x296E90 raw=0x0001E1FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296e94:
    // 0x296e94: 0x25  move        $zero, $zero
    ctx->pc = 0x296e94u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_296e98:
    // 0x296e98: 0x12594  .word       0x00012594                   # dsllv       $a0, $at, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296e98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_296e9c:
    // 0x296e9c: 0x0  nop
    ctx->pc = 0x296e9cu;
    // NOP
label_296ea0:
    // 0x296ea0: 0x1e222  .word       0x0001E222                   # neg         $gp, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296ea0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 28, (int32_t)tmp); }
label_296ea4:
    // 0x296ea4: 0x25  move        $zero, $zero
    ctx->pc = 0x296ea4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_296ea8:
    // 0x296ea8: 0x12578  dsll        $a0, $at, 21
    ctx->pc = 0x296ea8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) << 21);
label_296eac:
    // 0x296eac: 0x0  nop
    ctx->pc = 0x296eacu;
    // NOP
label_296eb0:
    // 0x296eb0: 0x1e247  .word       0x0001E247                   # srav        $gp, $at, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296eb0u;
    SET_GPR_S32(ctx, 28, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_296eb4:
    // 0x296eb4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296eb4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296EB4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296eb8:
    // 0x296eb8: 0x1f0  tge         $zero, $zero, 7
    ctx->pc = 0x296eb8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_296ebc:
    // 0x296ebc: 0x0  nop
    ctx->pc = 0x296ebcu;
    // NOP
label_296ec0:
    // 0x296ec0: 0x1e248  .word       0x0001E248                   # jr          $zero # 0001E240 <InstrIdType: CPU_SPECIAL>
label_296ec4:
    if (ctx->pc == 0x296EC4u) {
        ctx->pc = 0x296EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296EC0u;
        // 0x296ec4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296EC4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x296EC8u;
        goto label_296ec8;
    }
    ctx->pc = 0x296EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x296EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296EC0u;
        // 0x296ec4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296EC4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296EC0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x296EC8u;
label_296ec8:
    // 0x296ec8: 0x1f0  tge         $zero, $zero, 7
    ctx->pc = 0x296ec8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_296ecc:
    // 0x296ecc: 0x0  nop
    ctx->pc = 0x296eccu;
    // NOP
label_296ed0:
    // 0x296ed0: 0x1e249  .word       0x0001E249                   # jalr        $gp, $zero # 00010240 <InstrIdType: CPU_SPECIAL>
label_296ed4:
    if (ctx->pc == 0x296ED4u) {
        ctx->pc = 0x296ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296ED0u;
        // 0x296ed4: 0x30  tge         $zero, $zero, 0 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x296ED8u;
        goto label_296ed8;
    }
    ctx->pc = 0x296ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 28, 0x296ED8u);
        ctx->pc = 0x296ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296ED0u;
        // 0x296ed4: 0x30  tge         $zero, $zero, 0 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296ED0u, 0x296ED8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296ED8u;
label_296ed8:
    // 0x296ed8: 0x17c84  .word       0x00017C84                   # sllv        $t7, $at, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296ed8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_296edc:
    // 0x296edc: 0x0  nop
    ctx->pc = 0x296edcu;
    // NOP
label_296ee0:
    // 0x296ee0: 0x1e279  .word       0x0001E279                   # INVALID     $zero, $at, -0x1D87 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296ee0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x296EE0 raw=0x0001E279"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296ee4:
    // 0x296ee4: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x296ee4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_296ee8:
    // 0x296ee8: 0x17b7c  dsll32      $t7, $at, 13
    ctx->pc = 0x296ee8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 1) << (32 + 13));
label_296eec:
    // 0x296eec: 0x0  nop
    ctx->pc = 0x296eecu;
    // NOP
label_296ef0:
    // 0x296ef0: 0x1e2a9  .word       0x0001E2A9                   # mtsa        $zero # 0001E280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x296ef0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_296ef4:
    // 0x296ef4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x296ef4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296ef8:
    // 0x296ef8: 0x1ff8  dsll        $v1, $zero, 31
    ctx->pc = 0x296ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) << 31);
label_296efc:
    // 0x296efc: 0x0  nop
    ctx->pc = 0x296efcu;
    // NOP
label_296f00:
    // 0x296f00: 0x1e2ad  .word       0x0001E2AD                   # daddu       $gp, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296f00u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_296f04:
    // 0x296f04: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x296f04u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296f08:
    // 0x296f08: 0x1ff8  dsll        $v1, $zero, 31
    ctx->pc = 0x296f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) << 31);
label_296f0c:
    // 0x296f0c: 0x0  nop
    ctx->pc = 0x296f0cu;
    // NOP
label_296f10:
    // 0x296f10: 0x1e2b1  tgeu        $zero, $at, 906
    ctx->pc = 0x296f10u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_296f14:
    // 0x296f14: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x296f14u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_296f18:
    // 0x296f18: 0x119a4  .word       0x000119A4                   # and         $v1, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_296f1c:
    // 0x296f1c: 0x0  nop
    ctx->pc = 0x296f1cu;
    // NOP
label_296f20:
    // 0x296f20: 0x1e2d5  .word       0x0001E2D5                   # INVALID     $zero, $at, -0x1D2B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296f20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x296F20 raw=0x0001E2D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296f24:
    // 0x296f24: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x296f24u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_296f28:
    // 0x296f28: 0x118a8  .word       0x000118A8                   # mfsa        $v1 # 00010080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x296f28u;
    SET_GPR_U32(ctx, 3, ctx->sa);
label_296f2c:
    // 0x296f2c: 0x0  nop
    ctx->pc = 0x296f2cu;
    // NOP
label_296f30:
    // 0x296f30: 0x1e2f9  .word       0x0001E2F9                   # INVALID     $zero, $at, -0x1D07 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296f30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x296F30 raw=0x0001E2F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296f34:
    // 0x296f34: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x296f34u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296f38:
    // 0x296f38: 0x1b54  .word       0x00001B54                   # dsllv       $v1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_296f3c:
    // 0x296f3c: 0x0  nop
    ctx->pc = 0x296f3cu;
    // NOP
label_296f40:
    // 0x296f40: 0x1e2fd  .word       0x0001E2FD                   # INVALID     $zero, $at, -0x1D03 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296f40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x296F40 raw=0x0001E2FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296f44:
    // 0x296f44: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x296f44u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296f48:
    // 0x296f48: 0x1b54  .word       0x00001B54                   # dsllv       $v1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_296f4c:
    // 0x296f4c: 0x0  nop
    ctx->pc = 0x296f4cu;
    // NOP
label_296f50:
    // 0x296f50: 0x1e301  .word       0x0001E301                   # INVALID     $zero, $at, -0x1CFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296f50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296F50 raw=0x0001E301"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296f54:
    // 0x296f54: 0x13  mtlo        $zero
    ctx->pc = 0x296f54u;
    ctx->lo = GPR_U64(ctx, 0);
label_296f58:
    // 0x296f58: 0x93ec  .word       0x000093EC                   # dadd        $s2, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296f58u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_296f5c:
    // 0x296f5c: 0x0  nop
    ctx->pc = 0x296f5cu;
    // NOP
label_296f60:
    // 0x296f60: 0x1e314  .word       0x0001E314                   # dsllv       $gp, $at, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296f60u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_296f64:
    // 0x296f64: 0x13  mtlo        $zero
    ctx->pc = 0x296f64u;
    ctx->lo = GPR_U64(ctx, 0);
label_296f68:
    // 0x296f68: 0x9378  dsll        $s2, $zero, 13
    ctx->pc = 0x296f68u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) << 13);
label_296f6c:
    // 0x296f6c: 0x0  nop
    ctx->pc = 0x296f6cu;
    // NOP
label_296f70:
    // 0x296f70: 0x1e327  .word       0x0001E327                   # nor         $gp, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296f70u;
    SET_GPR_U64(ctx, 28, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_296f74:
    // 0x296f74: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296f74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296F74 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296f78:
    // 0x296f78: 0x1f0  tge         $zero, $zero, 7
    ctx->pc = 0x296f78u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_296f7c:
    // 0x296f7c: 0x0  nop
    ctx->pc = 0x296f7cu;
    // NOP
label_296f80:
    // 0x296f80: 0x1e328  .word       0x0001E328                   # mfsa        $gp # 00010300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x296f80u;
    SET_GPR_U32(ctx, 28, ctx->sa);
label_296f84:
    // 0x296f84: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296f84u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296F84 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296f88:
    // 0x296f88: 0x1f0  tge         $zero, $zero, 7
    ctx->pc = 0x296f88u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_296f8c:
    // 0x296f8c: 0x0  nop
    ctx->pc = 0x296f8cu;
    // NOP
label_296f90:
    // 0x296f90: 0x1e329  .word       0x0001E329                   # mtsa        $zero # 0001E300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x296f90u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_296f94:
    // 0x296f94: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x296f94u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_296f98:
    // 0x296f98: 0xacbc  dsll32      $s5, $zero, 18
    ctx->pc = 0x296f98u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) << (32 + 18));
label_296f9c:
    // 0x296f9c: 0x0  nop
    ctx->pc = 0x296f9cu;
    // NOP
label_296fa0:
    // 0x296fa0: 0x1e33f  dsra32      $gp, $at, 12
    ctx->pc = 0x296fa0u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 1) >> (32 + 12));
label_296fa4:
    // 0x296fa4: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x296fa4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_296fa8:
    // 0x296fa8: 0xabec  .word       0x0000ABEC                   # dadd        $s5, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296fa8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
label_296fac:
    // 0x296fac: 0x0  nop
    ctx->pc = 0x296facu;
    // NOP
label_296fb0:
    // 0x296fb0: 0x1e355  .word       0x0001E355                   # INVALID     $zero, $at, -0x1CAB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296fb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x296FB0 raw=0x0001E355"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296fb4:
    // 0x296fb4: 0x9  jalr        $zero, $zero
label_296fb8:
    if (ctx->pc == 0x296FB8u) {
        ctx->pc = 0x296FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296FB4u;
        // 0x296fb8: 0x437c  dsll32      $t0, $zero, 13 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << (32 + 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296FBCu;
        goto label_296fbc;
    }
    ctx->pc = 0x296FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x296FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296FB4u;
        // 0x296fb8: 0x437c  dsll32      $t0, $zero, 13 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << (32 + 13));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296FB4u, 0x296FBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296FBCu;
label_296fbc:
    // 0x296fbc: 0x0  nop
    ctx->pc = 0x296fbcu;
    // NOP
label_296fc0:
    // 0x296fc0: 0x1e35e  .word       0x0001E35E                   # ddiv        $gp, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296fc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x296FC0 raw=0x0001E35E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296fc4:
    // 0x296fc4: 0x9  jalr        $zero, $zero
label_296fc8:
    if (ctx->pc == 0x296FC8u) {
        ctx->pc = 0x296FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296FC4u;
        // 0x296fc8: 0x437c  dsll32      $t0, $zero, 13 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << (32 + 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296FCCu;
        goto label_296fcc;
    }
    ctx->pc = 0x296FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x296FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296FC4u;
        // 0x296fc8: 0x437c  dsll32      $t0, $zero, 13 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << (32 + 13));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296FC4u, 0x296FCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296FCCu;
label_296fcc:
    // 0x296fcc: 0x0  nop
    ctx->pc = 0x296fccu;
    // NOP
label_296fd0:
    // 0x296fd0: 0x1e367  .word       0x0001E367                   # nor         $gp, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296fd0u;
    SET_GPR_U64(ctx, 28, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_296fd4:
    // 0x296fd4: 0x39  .word       0x00000039                   # INVALID     $zero, $zero, 0x39 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296fd4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x296FD4 raw=0x00000039"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296fd8:
    // 0x296fd8: 0x1c064  .word       0x0001C064                   # and         $t8, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296fd8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_296fdc:
    // 0x296fdc: 0x0  nop
    ctx->pc = 0x296fdcu;
    // NOP
label_296fe0:
    // 0x296fe0: 0x1e3a0  .word       0x0001E3A0                   # add         $gp, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296fe0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_296fe4:
    // 0x296fe4: 0x39  .word       0x00000039                   # INVALID     $zero, $zero, 0x39 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296fe4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x296FE4 raw=0x00000039"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_296fe8:
    // 0x296fe8: 0x1c130  tge         $zero, $at, 772
    ctx->pc = 0x296fe8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_296fec:
    // 0x296fec: 0x0  nop
    ctx->pc = 0x296fecu;
    // NOP
label_296ff0:
    // 0x296ff0: 0x1e3d9  .word       0x0001E3D9                   # multu       $zero, $at # 0000E3C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296ff0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 28, (int32_t)result); }
label_296ff4:
    // 0x296ff4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x296ff4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_296ff8:
    // 0x296ff8: 0x1290  .word       0x00001290                   # mfhi        $v0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296ff8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_296ffc:
    // 0x296ffc: 0x0  nop
    ctx->pc = 0x296ffcu;
    // NOP
label_297000:
    // 0x297000: 0x1e3dc  .word       0x0001E3DC                   # dmult       $zero, $at # 0000E3C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297000u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x297000 raw=0x0001E3DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297004:
    // 0x297004: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x297004u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_297008:
    // 0x297008: 0x1290  .word       0x00001290                   # mfhi        $v0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297008u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_29700c:
    // 0x29700c: 0x0  nop
    ctx->pc = 0x29700cu;
    // NOP
label_297010:
    // 0x297010: 0x1e3df  .word       0x0001E3DF                   # ddivu       $gp, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297010u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x297010 raw=0x0001E3DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297014:
    // 0x297014: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x297014u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x297014 raw=0x0000001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297018:
    // 0x297018: 0xeb88  .word       0x0000EB88                   # jr          $zero # 0000EB80 <InstrIdType: CPU_SPECIAL>
label_29701c:
    if (ctx->pc == 0x29701Cu) {
        ctx->pc = 0x297020u;
        goto label_297020;
    }
    ctx->pc = 0x297018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297018u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x297020u;
label_297020:
    // 0x297020: 0x1e3fd  .word       0x0001E3FD                   # INVALID     $zero, $at, -0x1C03 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297020u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x297020 raw=0x0001E3FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297024:
    // 0x297024: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x297024u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x297024 raw=0x0000001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297028:
    // 0x297028: 0xeaf8  dsll        $sp, $zero, 11
    ctx->pc = 0x297028u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) << 11);
label_29702c:
    // 0x29702c: 0x0  nop
    ctx->pc = 0x29702cu;
    // NOP
label_297030:
    // 0x297030: 0x1e41b  .word       0x0001E41B                   # divu        $gp, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297030u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_297034:
    // 0x297034: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297034u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297034 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297038:
    // 0x297038: 0x1f0  tge         $zero, $zero, 7
    ctx->pc = 0x297038u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29703c:
    // 0x29703c: 0x0  nop
    ctx->pc = 0x29703cu;
    // NOP
label_297040:
    // 0x297040: 0x1e41c  .word       0x0001E41C                   # dmult       $zero, $at # 0000E400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297040u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x297040 raw=0x0001E41C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297044:
    // 0x297044: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297044u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297044 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297048:
    // 0x297048: 0x1f0  tge         $zero, $zero, 7
    ctx->pc = 0x297048u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29704c:
    // 0x29704c: 0x0  nop
    ctx->pc = 0x29704cu;
    // NOP
label_297050:
    // 0x297050: 0x1e41d  .word       0x0001E41D                   # dmultu      $zero, $at # 0000E400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297050u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x297050 raw=0x0001E41D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297054:
    // 0x297054: 0x2b  sltu        $zero, $zero, $zero
    ctx->pc = 0x297054u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_297058:
    // 0x297058: 0x151c8  .word       0x000151C8                   # jr          $zero # 000151C0 <InstrIdType: CPU_SPECIAL>
label_29705c:
    if (ctx->pc == 0x29705Cu) {
        ctx->pc = 0x297060u;
        goto label_297060;
    }
    ctx->pc = 0x297058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297058u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x297060u;
label_297060:
    // 0x297060: 0x1e448  .word       0x0001E448                   # jr          $zero # 0001E440 <InstrIdType: CPU_SPECIAL>
label_297064:
    if (ctx->pc == 0x297064u) {
        ctx->pc = 0x297064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297060u;
        // 0x297064: 0x2a  slt         $zero, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x297068u;
        goto label_297068;
    }
    ctx->pc = 0x297060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x297064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297060u;
        // 0x297064: 0x2a  slt         $zero, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297060u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x297068u;
label_297068:
    // 0x297068: 0x14cdc  .word       0x00014CDC                   # dmult       $zero, $at # 00004CC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297068u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x297068 raw=0x00014CDC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29706c:
    // 0x29706c: 0x0  nop
    ctx->pc = 0x29706cu;
    // NOP
label_297070:
    // 0x297070: 0x1e472  tlt         $zero, $at, 913
    ctx->pc = 0x297070u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_297074:
    // 0x297074: 0xd  break       0
    ctx->pc = 0x297074u;
    runtime->handleBreak(rdram, ctx);
label_297078:
    // 0x297078: 0x67f8  dsll        $t4, $zero, 31
    ctx->pc = 0x297078u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) << 31);
label_29707c:
    // 0x29707c: 0x0  nop
    ctx->pc = 0x29707cu;
    // NOP
label_297080:
    // 0x297080: 0x1e47f  dsra32      $gp, $at, 17
    ctx->pc = 0x297080u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 1) >> (32 + 17));
label_297084:
    // 0x297084: 0xd  break       0
    ctx->pc = 0x297084u;
    runtime->handleBreak(rdram, ctx);
label_297088:
    // 0x297088: 0x67e8  .word       0x000067E8                   # mfsa        $t4 # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x297088u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_29708c:
    // 0x29708c: 0x0  nop
    ctx->pc = 0x29708cu;
    // NOP
label_297090:
    // 0x297090: 0x1e48c  .word       0x0001E48C                   # syscall     914 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297090u;
    ctx->pc = 0x297094u;
runtime->handleSyscall(rdram, ctx, 0x792u);
label_297094:
    // 0x297094: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x297094u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_297098:
    // 0x297098: 0x17fa8  .word       0x00017FA8                   # mfsa        $t7 # 00010780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x297098u;
    SET_GPR_U32(ctx, 15, ctx->sa);
label_29709c:
    // 0x29709c: 0x0  nop
    ctx->pc = 0x29709cu;
    // NOP
label_2970a0:
    // 0x2970a0: 0x1e4bc  dsll32      $gp, $at, 18
    ctx->pc = 0x2970a0u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 1) << (32 + 18));
label_2970a4:
    // 0x2970a4: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x2970a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2970a8:
    // 0x2970a8: 0x17f3c  dsll32      $t7, $at, 28
    ctx->pc = 0x2970a8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 1) << (32 + 28));
label_2970ac:
    // 0x2970ac: 0x0  nop
    ctx->pc = 0x2970acu;
    // NOP
label_2970b0:
    // 0x2970b0: 0x1e4ec  .word       0x0001E4EC                   # dadd        $gp, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2970b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, r); }
label_2970b4:
    // 0x2970b4: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2970b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2970B4 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2970b8:
    // 0x2970b8: 0x2114  .word       0x00002114                   # dsllv       $a0, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2970b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2970bc:
    // 0x2970bc: 0x0  nop
    ctx->pc = 0x2970bcu;
    // NOP
label_2970c0:
    // 0x2970c0: 0x1e4f1  tgeu        $zero, $at, 915
    ctx->pc = 0x2970c0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2970c4:
    // 0x2970c4: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2970c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2970C4 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2970c8:
    // 0x2970c8: 0x209c  .word       0x0000209C                   # dmult       $zero, $zero # 00002080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2970c8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2970C8 raw=0x0000209C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2970cc:
    // 0x2970cc: 0x0  nop
    ctx->pc = 0x2970ccu;
    // NOP
label_2970d0:
    // 0x2970d0: 0x1e4f6  tne         $zero, $at, 915
    ctx->pc = 0x2970d0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2970d4:
    // 0x2970d4: 0x29  mtsa        $zero
    ctx->pc = 0x2970d4u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2970d8:
    // 0x2970d8: 0x144ac  .word       0x000144AC                   # dadd        $t0, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2970d8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_2970dc:
    // 0x2970dc: 0x0  nop
    ctx->pc = 0x2970dcu;
    // NOP
label_2970e0:
    // 0x2970e0: 0x1e51f  .word       0x0001E51F                   # ddivu       $gp, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2970e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2970E0 raw=0x0001E51F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2970e4:
    // 0x2970e4: 0x27  not         $zero, $zero
    ctx->pc = 0x2970e4u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2970e8:
    // 0x2970e8: 0x13420  .word       0x00013420                   # add         $a2, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2970e8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_2970ec:
    // 0x2970ec: 0x0  nop
    ctx->pc = 0x2970ecu;
    // NOP
label_2970f0:
    // 0x2970f0: 0x1e546  .word       0x0001E546                   # srlv        $gp, $at, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2970f0u;
    SET_GPR_S32(ctx, 28, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2970f4:
    // 0x2970f4: 0xf  sync
    ctx->pc = 0x2970f4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2970f8:
    // 0x2970f8: 0x7448  .word       0x00007448                   # jr          $zero # 00007440 <InstrIdType: CPU_SPECIAL>
label_2970fc:
    if (ctx->pc == 0x2970FCu) {
        ctx->pc = 0x297100u;
        goto label_297100;
    }
    ctx->pc = 0x2970F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2970F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x297100u;
label_297100:
    // 0x297100: 0x1e555  .word       0x0001E555                   # INVALID     $zero, $at, -0x1AAB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297100u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x297100 raw=0x0001E555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297104:
    // 0x297104: 0xf  sync
    ctx->pc = 0x297104u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_297108:
    // 0x297108: 0x7448  .word       0x00007448                   # jr          $zero # 00007440 <InstrIdType: CPU_SPECIAL>
label_29710c:
    if (ctx->pc == 0x29710Cu) {
        ctx->pc = 0x297110u;
        goto label_297110;
    }
    ctx->pc = 0x297108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297108u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x297110u;
label_297110:
    // 0x297110: 0x1e564  .word       0x0001E564                   # and         $gp, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297110u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_297114:
    // 0x297114: 0x9  jalr        $zero, $zero
label_297118:
    if (ctx->pc == 0x297118u) {
        ctx->pc = 0x297118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297114u;
        // 0x297118: 0x4058  .word       0x00004058                   # mult        $t0, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29711Cu;
        goto label_29711c;
    }
    ctx->pc = 0x297114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x297118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297114u;
        // 0x297118: 0x4058  .word       0x00004058                   # mult        $t0, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297114u, 0x29711Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29711Cu;
label_29711c:
    // 0x29711c: 0x0  nop
    ctx->pc = 0x29711cu;
    // NOP
label_297120:
    // 0x297120: 0x1e56d  .word       0x0001E56D                   # daddu       $gp, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297120u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_297124:
    // 0x297124: 0x9  jalr        $zero, $zero
label_297128:
    if (ctx->pc == 0x297128u) {
        ctx->pc = 0x297128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297124u;
        // 0x297128: 0x4044  .word       0x00004044                   # sllv        $t0, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29712Cu;
        goto label_29712c;
    }
    ctx->pc = 0x297124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x297128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297124u;
        // 0x297128: 0x4044  .word       0x00004044                   # sllv        $t0, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297124u, 0x29712Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29712Cu;
label_29712c:
    // 0x29712c: 0x0  nop
    ctx->pc = 0x29712cu;
    // NOP
label_297130:
    // 0x297130: 0x1e576  tne         $zero, $at, 917
    ctx->pc = 0x297130u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_297134:
    // 0x297134: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x297134u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_297138:
    // 0x297138: 0x4b20  .word       0x00004B20                   # add         $t1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297138u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_29713c:
    // 0x29713c: 0x0  nop
    ctx->pc = 0x29713cu;
    // NOP
label_297140:
    // 0x297140: 0x1e580  sll         $gp, $at, 22
    ctx->pc = 0x297140u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 22));
label_297144:
    // 0x297144: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x297144u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_297148:
    // 0x297148: 0x4b20  .word       0x00004B20                   # add         $t1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297148u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_29714c:
    // 0x29714c: 0x0  nop
    ctx->pc = 0x29714cu;
    // NOP
label_297150:
    // 0x297150: 0x1e58a  .word       0x0001E58A                   # movz        $gp, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297150u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 0));
label_297154:
    // 0x297154: 0x10  mfhi        $zero
    ctx->pc = 0x297154u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_297158:
    // 0x297158: 0x78c0  sll         $t7, $zero, 3
    ctx->pc = 0x297158u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_29715c:
    // 0x29715c: 0x0  nop
    ctx->pc = 0x29715cu;
    // NOP
label_297160:
    // 0x297160: 0x1e59a  .word       0x0001E59A                   # div         $gp, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297160u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_297164:
    // 0x297164: 0x10  mfhi        $zero
    ctx->pc = 0x297164u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_297168:
    // 0x297168: 0x78b0  tge         $zero, $zero, 482
    ctx->pc = 0x297168u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29716c:
    // 0x29716c: 0x0  nop
    ctx->pc = 0x29716cu;
    // NOP
label_297170:
    // 0x297170: 0x1e5aa  .word       0x0001E5AA                   # slt         $gp, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297170u;
    SET_GPR_U64(ctx, 28, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_297174:
    // 0x297174: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x297174u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297178:
    // 0x297178: 0x375c  .word       0x0000375C                   # dmult       $zero, $zero # 00003740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297178u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x297178 raw=0x0000375C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29717c:
    // 0x29717c: 0x0  nop
    ctx->pc = 0x29717cu;
    // NOP
label_297180:
    // 0x297180: 0x1e5b1  tgeu        $zero, $at, 918
    ctx->pc = 0x297180u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_297184:
    // 0x297184: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x297184u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297188:
    // 0x297188: 0x375c  .word       0x0000375C                   # dmult       $zero, $zero # 00003740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297188u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x297188 raw=0x0000375C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29718c:
    // 0x29718c: 0x0  nop
    ctx->pc = 0x29718cu;
    // NOP
label_297190:
    // 0x297190: 0x1e5b8  dsll        $gp, $at, 22
    ctx->pc = 0x297190u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 1) << 22);
label_297194:
    // 0x297194: 0xc  syscall     0
    ctx->pc = 0x297194u;
    ctx->pc = 0x297198u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_297198:
    // 0x297198: 0x5f44  .word       0x00005F44                   # sllv        $t3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297198u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29719c:
    // 0x29719c: 0x0  nop
    ctx->pc = 0x29719cu;
    // NOP
label_2971a0:
    // 0x2971a0: 0x1e5c4  .word       0x0001E5C4                   # sllv        $gp, $at, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2971a0u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2971a4:
    // 0x2971a4: 0xc  syscall     0
    ctx->pc = 0x2971a4u;
    ctx->pc = 0x2971A8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2971a8:
    // 0x2971a8: 0x5c34  teq         $zero, $zero, 368
    ctx->pc = 0x2971a8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2971ac:
    // 0x2971ac: 0x0  nop
    ctx->pc = 0x2971acu;
    // NOP
label_2971b0:
    // 0x2971b0: 0x1e5d0  .word       0x0001E5D0                   # mfhi        $gp # 000105C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2971b0u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_2971b4:
    // 0x2971b4: 0x9  jalr        $zero, $zero
label_2971b8:
    if (ctx->pc == 0x2971B8u) {
        ctx->pc = 0x2971B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2971B4u;
        // 0x2971b8: 0x40bc  dsll32      $t0, $zero, 2 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << (32 + 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2971BCu;
        goto label_2971bc;
    }
    ctx->pc = 0x2971B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2971B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2971B4u;
        // 0x2971b8: 0x40bc  dsll32      $t0, $zero, 2 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << (32 + 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2971B4u, 0x2971BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2971BCu;
label_2971bc:
    // 0x2971bc: 0x0  nop
    ctx->pc = 0x2971bcu;
    // NOP
label_2971c0:
    // 0x2971c0: 0x1e5d9  .word       0x0001E5D9                   # multu       $zero, $at # 0000E5C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2971c0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 28, (int32_t)result); }
label_2971c4:
    // 0x2971c4: 0x9  jalr        $zero, $zero
label_2971c8:
    if (ctx->pc == 0x2971C8u) {
        ctx->pc = 0x2971C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2971C4u;
        // 0x2971c8: 0x40bc  dsll32      $t0, $zero, 2 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << (32 + 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2971CCu;
        goto label_2971cc;
    }
    ctx->pc = 0x2971C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2971C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2971C4u;
        // 0x2971c8: 0x40bc  dsll32      $t0, $zero, 2 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << (32 + 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2971C4u, 0x2971CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2971CCu;
label_2971cc:
    // 0x2971cc: 0x0  nop
    ctx->pc = 0x2971ccu;
    // NOP
label_2971d0:
    // 0x2971d0: 0x1e5e2  .word       0x0001E5E2                   # neg         $gp, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2971d0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 28, (int32_t)tmp); }
label_2971d4:
    // 0x2971d4: 0xa4  .word       0x000000A4                   # and         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2971d4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2971d8:
    // 0x2971d8: 0x51a00  sll         $v1, $a1, 8
    ctx->pc = 0x2971d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_2971dc:
    // 0x2971dc: 0x0  nop
    ctx->pc = 0x2971dcu;
    // NOP
label_2971e0:
    // 0x2971e0: 0x1e686  .word       0x0001E686                   # srlv        $gp, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2971e0u;
    SET_GPR_S32(ctx, 28, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2971e4:
    // 0x2971e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2971e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2971E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2971e8:
    // 0x2971e8: 0x6b0  tge         $zero, $zero, 26
    ctx->pc = 0x2971e8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2971ec:
    // 0x2971ec: 0x0  nop
    ctx->pc = 0x2971ecu;
    // NOP
label_2971f0:
    // 0x2971f0: 0x1e687  .word       0x0001E687                   # srav        $gp, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2971f0u;
    SET_GPR_S32(ctx, 28, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2971f4:
    // 0x2971f4: 0xd9  .word       0x000000D9                   # multu       $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2971f4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2971f8:
    // 0x2971f8: 0x6c4c0  sll         $t8, $a2, 19
    ctx->pc = 0x2971f8u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 6), 19));
label_2971fc:
    // 0x2971fc: 0x0  nop
    ctx->pc = 0x2971fcu;
    // NOP
label_297200:
    // 0x297200: 0x1e760  .word       0x0001E760                   # add         $gp, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297200u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_297204:
    // 0x297204: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297204u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297204 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297208:
    // 0x297208: 0x650  .word       0x00000650                   # mfhi        $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297208u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29720c:
    // 0x29720c: 0x0  nop
    ctx->pc = 0x29720cu;
    // NOP
label_297210:
    // 0x297210: 0x1e761  .word       0x0001E761                   # addu        $gp, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297210u;
    SET_GPR_S32(ctx, 28, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_297214:
    // 0x297214: 0x162  .word       0x00000162                   # neg         $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297214u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_297218:
    // 0x297218: 0xb0d70  tge         $zero, $t3, 53
    ctx->pc = 0x297218u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_29721c:
    // 0x29721c: 0x0  nop
    ctx->pc = 0x29721cu;
    // NOP
label_297220:
    // 0x297220: 0x1e8c3  sra         $sp, $at, 3
    ctx->pc = 0x297220u;
    SET_GPR_S32(ctx, 29, SRA32(GPR_S32(ctx, 1), 3));
label_297224:
    // 0x297224: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297224u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297224 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297228:
    // 0x297228: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297228u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29722c:
    // 0x29722c: 0x0  nop
    ctx->pc = 0x29722cu;
    // NOP
label_297230:
    // 0x297230: 0x1e8c4  .word       0x0001E8C4                   # sllv        $sp, $at, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297230u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_297234:
    // 0x297234: 0x169  .word       0x00000169                   # mtsa        $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x297234u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_297238:
    // 0x297238: 0xb4560  .word       0x000B4560                   # add         $t0, $zero, $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297238u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_29723c:
    // 0x29723c: 0x0  nop
    ctx->pc = 0x29723cu;
    // NOP
label_297240:
    // 0x297240: 0x1ea2d  .word       0x0001EA2D                   # daddu       $sp, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297240u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_297244:
    // 0x297244: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297244u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297244 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297248:
    // 0x297248: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297248u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29724c:
    // 0x29724c: 0x0  nop
    ctx->pc = 0x29724cu;
    // NOP
label_297250:
    // 0x297250: 0x1ea2e  .word       0x0001EA2E                   # dsub        $sp, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297250u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 29, r); }
label_297254:
    // 0x297254: 0x52  .word       0x00000052                   # mflo        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297254u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_297258:
    // 0x297258: 0x28e40  sll         $s1, $v0, 25
    ctx->pc = 0x297258u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 25));
label_29725c:
    // 0x29725c: 0x0  nop
    ctx->pc = 0x29725cu;
    // NOP
label_297260:
    // 0x297260: 0x1ea80  sll         $sp, $at, 10
    ctx->pc = 0x297260u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 1), 10));
label_297264:
    // 0x297264: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297264u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297264 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297268:
    // 0x297268: 0x650  .word       0x00000650                   # mfhi        $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297268u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29726c:
    // 0x29726c: 0x0  nop
    ctx->pc = 0x29726cu;
    // NOP
label_297270:
    // 0x297270: 0x1ea81  .word       0x0001EA81                   # INVALID     $zero, $at, -0x157F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297270u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297270 raw=0x0001EA81"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297274:
    // 0x297274: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297274u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_297278:
    // 0x297278: 0x36850  .word       0x00036850                   # mfhi        $t5 # 00030040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297278u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_29727c:
    // 0x29727c: 0x0  nop
    ctx->pc = 0x29727cu;
    // NOP
label_297280:
    // 0x297280: 0x1eaef  .word       0x0001EAEF                   # dsubu       $sp, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297280u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_297284:
    // 0x297284: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297284u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297284 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297288:
    // 0x297288: 0x6f0  tge         $zero, $zero, 27
    ctx->pc = 0x297288u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29728c:
    // 0x29728c: 0x0  nop
    ctx->pc = 0x29728cu;
    // NOP
label_297290:
    // 0x297290: 0x1eaf0  tge         $zero, $at, 939
    ctx->pc = 0x297290u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_297294:
    // 0x297294: 0x97  .word       0x00000097                   # dsrav       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297294u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_297298:
    // 0x297298: 0x4b7d0  .word       0x0004B7D0                   # mfhi        $s6 # 000407C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297298u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_29729c:
    // 0x29729c: 0x0  nop
    ctx->pc = 0x29729cu;
    // NOP
label_2972a0:
    // 0x2972a0: 0x1eb87  .word       0x0001EB87                   # srav        $sp, $at, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2972a0u;
    SET_GPR_S32(ctx, 29, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2972a4:
    // 0x2972a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2972a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2972A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2972a8:
    // 0x2972a8: 0x5d0  .word       0x000005D0                   # mfhi        $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2972a8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2972ac:
    // 0x2972ac: 0x0  nop
    ctx->pc = 0x2972acu;
    // NOP
label_2972b0:
    // 0x2972b0: 0x1eb88  .word       0x0001EB88                   # jr          $zero # 0001EB80 <InstrIdType: CPU_SPECIAL>
label_2972b4:
    if (ctx->pc == 0x2972B4u) {
        ctx->pc = 0x2972B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2972B0u;
        // 0x2972b4: 0xd4  .word       0x000000D4                   # dsllv       $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2972B8u;
        goto label_2972b8;
    }
    ctx->pc = 0x2972B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2972B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2972B0u;
        // 0x2972b4: 0xd4  .word       0x000000D4                   # dsllv       $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2972B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2972B8u;
label_2972b8:
    // 0x2972b8: 0x69e00  sll         $s3, $a2, 24
    ctx->pc = 0x2972b8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
label_2972bc:
    // 0x2972bc: 0x0  nop
    ctx->pc = 0x2972bcu;
    // NOP
label_2972c0:
    // 0x2972c0: 0x1ec5c  .word       0x0001EC5C                   # dmult       $zero, $at # 0000EC40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2972c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2972C0 raw=0x0001EC5C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2972c4:
    // 0x2972c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2972c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2972C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2972c8:
    // 0x2972c8: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2972c8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2972cc:
    // 0x2972cc: 0x0  nop
    ctx->pc = 0x2972ccu;
    // NOP
label_2972d0:
    // 0x2972d0: 0x1ec5d  .word       0x0001EC5D                   # dmultu      $zero, $at # 0000EC40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2972d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2972D0 raw=0x0001EC5D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2972d4:
    // 0x2972d4: 0xd2  .word       0x000000D2                   # mflo        $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2972d4u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2972d8:
    // 0x2972d8: 0x68ae0  .word       0x00068AE0                   # add         $s1, $zero, $a2 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2972d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2972dc:
    // 0x2972dc: 0x0  nop
    ctx->pc = 0x2972dcu;
    // NOP
label_2972e0:
    // 0x2972e0: 0x1ed2f  .word       0x0001ED2F                   # dsubu       $sp, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2972e0u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_2972e4:
    // 0x2972e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2972e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2972E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2972e8:
    // 0x2972e8: 0x670  tge         $zero, $zero, 25
    ctx->pc = 0x2972e8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2972ec:
    // 0x2972ec: 0x0  nop
    ctx->pc = 0x2972ecu;
    // NOP
label_2972f0:
    // 0x2972f0: 0x1ed30  tge         $zero, $at, 948
    ctx->pc = 0x2972f0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2972f4:
    // 0x2972f4: 0xcf  sync
    ctx->pc = 0x2972f4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2972f8:
    // 0x2972f8: 0x677f0  tge         $zero, $a2, 479
    ctx->pc = 0x2972f8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_2972fc:
    // 0x2972fc: 0x0  nop
    ctx->pc = 0x2972fcu;
    // NOP
label_297300:
    // 0x297300: 0x1edff  dsra32      $sp, $at, 23
    ctx->pc = 0x297300u;
    SET_GPR_S64(ctx, 29, GPR_S64(ctx, 1) >> (32 + 23));
label_297304:
    // 0x297304: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297304u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297304 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297308:
    // 0x297308: 0x6f0  tge         $zero, $zero, 27
    ctx->pc = 0x297308u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29730c:
    // 0x29730c: 0x0  nop
    ctx->pc = 0x29730cu;
    // NOP
label_297310:
    // 0x297310: 0x1ee00  sll         $sp, $at, 24
    ctx->pc = 0x297310u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 1), 24));
label_297314:
    // 0x297314: 0x11b  .word       0x0000011B                   # divu        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297314u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_297318:
    // 0x297318: 0x8d650  .word       0x0008D650                   # mfhi        $k0 # 00080640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297318u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29731c:
    // 0x29731c: 0x0  nop
    ctx->pc = 0x29731cu;
    // NOP
label_297320:
    // 0x297320: 0x1ef1b  .word       0x0001EF1B                   # divu        $sp, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297320u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_297324:
    // 0x297324: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297324u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297324 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297328:
    // 0x297328: 0x6d0  .word       0x000006D0                   # mfhi        $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297328u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29732c:
    // 0x29732c: 0x0  nop
    ctx->pc = 0x29732cu;
    // NOP
label_297330:
    // 0x297330: 0x1ef1c  .word       0x0001EF1C                   # dmult       $zero, $at # 0000EF00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297330u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x297330 raw=0x0001EF1C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297334:
    // 0x297334: 0x114  .word       0x00000114                   # dsllv       $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297334u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_297338:
    // 0x297338: 0x89ef0  tge         $zero, $t0, 635
    ctx->pc = 0x297338u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_29733c:
    // 0x29733c: 0x0  nop
    ctx->pc = 0x29733cu;
    // NOP
label_297340:
    // 0x297340: 0x1f030  tge         $zero, $at, 960
    ctx->pc = 0x297340u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_297344:
    // 0x297344: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297344u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297344 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297348:
    // 0x297348: 0x650  .word       0x00000650                   # mfhi        $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297348u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29734c:
    // 0x29734c: 0x0  nop
    ctx->pc = 0x29734cu;
    // NOP
label_297350:
    // 0x297350: 0x1f031  tgeu        $zero, $at, 960
    ctx->pc = 0x297350u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_297354:
    // 0x297354: 0x151  .word       0x00000151                   # mthi        $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297354u;
    ctx->hi = GPR_U64(ctx, 0);
label_297358:
    // 0x297358: 0xa8140  sll         $s0, $t2, 5
    ctx->pc = 0x297358u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_29735c:
    // 0x29735c: 0x0  nop
    ctx->pc = 0x29735cu;
    // NOP
label_297360:
    // 0x297360: 0x1f182  srl         $fp, $at, 6
    ctx->pc = 0x297360u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 1), 6));
label_297364:
    // 0x297364: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297364u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297364 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297368:
    // 0x297368: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297368u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29736c:
    // 0x29736c: 0x0  nop
    ctx->pc = 0x29736cu;
    // NOP
label_297370:
    // 0x297370: 0x1f183  sra         $fp, $at, 6
    ctx->pc = 0x297370u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 1), 6));
label_297374:
    // 0x297374: 0x107  .word       0x00000107                   # srav        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297374u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297378:
    // 0x297378: 0x830b0  tge         $zero, $t0, 194
    ctx->pc = 0x297378u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_29737c:
    // 0x29737c: 0x0  nop
    ctx->pc = 0x29737cu;
    // NOP
label_297380:
    // 0x297380: 0x1f28a  .word       0x0001F28A                   # movz        $fp, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297380u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 0));
label_297384:
    // 0x297384: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297384u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297384 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297388:
    // 0x297388: 0x5d0  .word       0x000005D0                   # mfhi        $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297388u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29738c:
    // 0x29738c: 0x0  nop
    ctx->pc = 0x29738cu;
    // NOP
label_297390:
    // 0x297390: 0x1f28b  .word       0x0001F28B                   # movn        $fp, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297390u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 0));
label_297394:
    // 0x297394: 0x155  .word       0x00000155                   # INVALID     $zero, $zero, 0x155 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297394u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x297394 raw=0x00000155"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297398:
    // 0x297398: 0xaa320  .word       0x000AA320                   # add         $s4, $zero, $t2 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297398u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 10);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_29739c:
    // 0x29739c: 0x0  nop
    ctx->pc = 0x29739cu;
    // NOP
label_2973a0:
    // 0x2973a0: 0x1f3e0  .word       0x0001F3E0                   # add         $fp, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2973a0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_2973a4:
    // 0x2973a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2973a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2973A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2973a8:
    // 0x2973a8: 0x6d0  .word       0x000006D0                   # mfhi        $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2973a8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2973ac:
    // 0x2973ac: 0x0  nop
    ctx->pc = 0x2973acu;
    // NOP
label_2973b0:
    // 0x2973b0: 0x1f3e1  .word       0x0001F3E1                   # addu        $fp, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2973b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2973b4:
    // 0x2973b4: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x2973b4u;
    
label_2973b8:
    // 0x2973b8: 0x9fd30  tge         $zero, $t1, 1012
    ctx->pc = 0x2973b8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_2973bc:
    // 0x2973bc: 0x0  nop
    ctx->pc = 0x2973bcu;
    // NOP
label_2973c0:
    // 0x2973c0: 0x1f521  .word       0x0001F521                   # addu        $fp, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2973c0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2973c4:
    // 0x2973c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2973c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2973C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2973c8:
    // 0x2973c8: 0x6b0  tge         $zero, $zero, 26
    ctx->pc = 0x2973c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2973cc:
    // 0x2973cc: 0x0  nop
    ctx->pc = 0x2973ccu;
    // NOP
label_2973d0:
    // 0x2973d0: 0x1f522  .word       0x0001F522                   # neg         $fp, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2973d0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
label_2973d4:
    // 0x2973d4: 0xbf  dsra32      $zero, $zero, 2
    ctx->pc = 0x2973d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 2));
label_2973d8:
    // 0x2973d8: 0x5f070  tge         $zero, $a1, 961
    ctx->pc = 0x2973d8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
label_2973dc:
    // 0x2973dc: 0x0  nop
    ctx->pc = 0x2973dcu;
    // NOP
label_2973e0:
    // 0x2973e0: 0x1f5e1  .word       0x0001F5E1                   # addu        $fp, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2973e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2973e4:
    // 0x2973e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2973e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2973E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2973e8:
    // 0x2973e8: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2973e8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2973ec:
    // 0x2973ec: 0x0  nop
    ctx->pc = 0x2973ecu;
    // NOP
label_2973f0:
    // 0x2973f0: 0x1f5e2  .word       0x0001F5E2                   # neg         $fp, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2973f0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
label_2973f4:
    // 0x2973f4: 0xb4  teq         $zero, $zero, 2
    ctx->pc = 0x2973f4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2973f8:
    // 0x2973f8: 0x59cf0  tge         $zero, $a1, 627
    ctx->pc = 0x2973f8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
label_2973fc:
    // 0x2973fc: 0x0  nop
    ctx->pc = 0x2973fcu;
    // NOP
label_297400:
    // 0x297400: 0x1f696  .word       0x0001F696                   # dsrlv       $fp, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297400u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_297404:
    // 0x297404: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297404u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297404 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297408:
    // 0x297408: 0x6f0  tge         $zero, $zero, 27
    ctx->pc = 0x297408u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29740c:
    // 0x29740c: 0x0  nop
    ctx->pc = 0x29740cu;
    // NOP
label_297410:
    // 0x297410: 0x1f697  .word       0x0001F697                   # dsrav       $fp, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297410u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_297414:
    // 0x297414: 0xca  .word       0x000000CA                   # movz        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297414u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_297418:
    // 0x297418: 0x64990  .word       0x00064990                   # mfhi        $t1 # 00060180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297418u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_29741c:
    // 0x29741c: 0x0  nop
    ctx->pc = 0x29741cu;
    // NOP
label_297420:
    // 0x297420: 0x1f761  .word       0x0001F761                   # addu        $fp, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297420u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_297424:
    // 0x297424: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297424u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297424 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297428:
    // 0x297428: 0x6d0  .word       0x000006D0                   # mfhi        $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297428u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29742c:
    // 0x29742c: 0x0  nop
    ctx->pc = 0x29742cu;
    // NOP
label_297430:
    // 0x297430: 0x1f762  .word       0x0001F762                   # neg         $fp, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297430u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
label_297434:
    // 0x297434: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297434u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_297438:
    // 0x297438: 0x31970  tge         $zero, $v1, 101
    ctx->pc = 0x297438u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29743c:
    // 0x29743c: 0x0  nop
    ctx->pc = 0x29743cu;
    // NOP
label_297440:
    // 0x297440: 0x1f7c6  .word       0x0001F7C6                   # srlv        $fp, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297440u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_297444:
    // 0x297444: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297444u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297444 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297448:
    // 0x297448: 0x650  .word       0x00000650                   # mfhi        $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297448u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29744c:
    // 0x29744c: 0x0  nop
    ctx->pc = 0x29744cu;
    // NOP
label_297450:
    // 0x297450: 0x1f7c7  .word       0x0001F7C7                   # srav        $fp, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297450u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_297454:
    // 0x297454: 0x7b  dsra        $zero, $zero, 1
    ctx->pc = 0x297454u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 1);
label_297458:
    // 0x297458: 0x3d5e0  .word       0x0003D5E0                   # add         $k0, $zero, $v1 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297458u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_29745c:
    // 0x29745c: 0x0  nop
    ctx->pc = 0x29745cu;
    // NOP
label_297460:
    // 0x297460: 0x1f842  srl         $ra, $at, 1
    ctx->pc = 0x297460u;
    SET_GPR_S32(ctx, 31, (int32_t)SRL32(GPR_U32(ctx, 1), 1));
label_297464:
    // 0x297464: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297464u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297464 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297468:
    // 0x297468: 0x6b0  tge         $zero, $zero, 26
    ctx->pc = 0x297468u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29746c:
    // 0x29746c: 0x0  nop
    ctx->pc = 0x29746cu;
    // NOP
label_297470:
    // 0x297470: 0x1f843  sra         $ra, $at, 1
    ctx->pc = 0x297470u;
    SET_GPR_S32(ctx, 31, SRA32(GPR_S32(ctx, 1), 1));
label_297474:
    // 0x297474: 0x128  .word       0x00000128                   # mfsa        $zero # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x297474u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_297478:
    // 0x297478: 0x93ab0  tge         $zero, $t1, 234
    ctx->pc = 0x297478u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_29747c:
    // 0x29747c: 0x0  nop
    ctx->pc = 0x29747cu;
    // NOP
label_297480:
    // 0x297480: 0x1f96b  .word       0x0001F96B                   # sltu        $ra, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297480u;
    SET_GPR_U64(ctx, 31, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_297484:
    // 0x297484: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297484u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297484 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297488:
    // 0x297488: 0x650  .word       0x00000650                   # mfhi        $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297488u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29748c:
    // 0x29748c: 0x0  nop
    ctx->pc = 0x29748cu;
    // NOP
label_297490:
    // 0x297490: 0x1f96c  .word       0x0001F96C                   # dadd        $ra, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297490u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_297494:
    // 0x297494: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x297494u;
    
label_297498:
    // 0x297498: 0x7f940  sll         $ra, $a3, 5
    ctx->pc = 0x297498u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_29749c:
    // 0x29749c: 0x0  nop
    ctx->pc = 0x29749cu;
    // NOP
label_2974a0:
    // 0x2974a0: 0x1fa6c  .word       0x0001FA6C                   # dadd        $ra, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2974a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_2974a4:
    // 0x2974a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2974a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2974A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2974a8:
    // 0x2974a8: 0x5b0  tge         $zero, $zero, 22
    ctx->pc = 0x2974a8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2974ac:
    // 0x2974ac: 0x0  nop
    ctx->pc = 0x2974acu;
    // NOP
label_2974b0:
    // 0x2974b0: 0x1fa6d  .word       0x0001FA6D                   # daddu       $ra, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2974b0u;
    SET_GPR_U64(ctx, 31, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_2974b4:
    // 0x2974b4: 0x126  .word       0x00000126                   # xor         $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2974b4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2974b8:
    // 0x2974b8: 0x92f40  sll         $a1, $t1, 29
    ctx->pc = 0x2974b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 29));
label_2974bc:
    // 0x2974bc: 0x0  nop
    ctx->pc = 0x2974bcu;
    // NOP
label_2974c0:
    // 0x2974c0: 0x1fb93  .word       0x0001FB93                   # mtlo        $zero # 0001FB80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2974c0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2974c4:
    // 0x2974c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2974c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2974C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2974c8:
    // 0x2974c8: 0x6f0  tge         $zero, $zero, 27
    ctx->pc = 0x2974c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2974cc:
    // 0x2974cc: 0x0  nop
    ctx->pc = 0x2974ccu;
    // NOP
label_2974d0:
    // 0x2974d0: 0x1fb94  .word       0x0001FB94                   # dsllv       $ra, $at, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2974d0u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_2974d4:
    // 0x2974d4: 0x130  tge         $zero, $zero, 4
    ctx->pc = 0x2974d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2974d8:
    // 0x2974d8: 0x97a00  sll         $t7, $t1, 8
    ctx->pc = 0x2974d8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_2974dc:
    // 0x2974dc: 0x0  nop
    ctx->pc = 0x2974dcu;
    // NOP
label_2974e0:
    // 0x2974e0: 0x1fcc4  .word       0x0001FCC4                   # sllv        $ra, $at, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2974e0u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2974e4:
    // 0x2974e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2974e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2974E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2974e8:
    // 0x2974e8: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2974e8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2974ec:
    // 0x2974ec: 0x0  nop
    ctx->pc = 0x2974ecu;
    // NOP
label_2974f0:
    // 0x2974f0: 0x1fcc5  .word       0x0001FCC5                   # INVALID     $zero, $at, -0x33B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2974f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2974F0 raw=0x0001FCC5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2974f4:
    // 0x2974f4: 0x137  .word       0x00000137                   # INVALID     $zero, $zero, 0x137 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2974f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2974F4 raw=0x00000137"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2974f8:
    // 0x2974f8: 0x9b250  .word       0x0009B250                   # mfhi        $s6 # 00090240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2974f8u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_2974fc:
    // 0x2974fc: 0x0  nop
    ctx->pc = 0x2974fcu;
    // NOP
label_297500:
    // 0x297500: 0x1fdfc  dsll32      $ra, $at, 23
    ctx->pc = 0x297500u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 1) << (32 + 23));
label_297504:
    // 0x297504: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297504u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297504 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297508:
    // 0x297508: 0x6f0  tge         $zero, $zero, 27
    ctx->pc = 0x297508u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29750c:
    // 0x29750c: 0x0  nop
    ctx->pc = 0x29750cu;
    // NOP
label_297510:
    // 0x297510: 0x1fdfd  .word       0x0001FDFD                   # INVALID     $zero, $at, -0x203 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297510u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x297510 raw=0x0001FDFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297514:
    // 0x297514: 0x10c  syscall     4
    ctx->pc = 0x297514u;
    ctx->pc = 0x297518u;
runtime->handleSyscall(rdram, ctx, 0x4u);
label_297518:
    // 0x297518: 0x85db0  tge         $zero, $t0, 374
    ctx->pc = 0x297518u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_29751c:
    // 0x29751c: 0x0  nop
    ctx->pc = 0x29751cu;
    // NOP
label_297520:
    // 0x297520: 0x1ff09  .word       0x0001FF09                   # jalr        $zero # 00010700 <InstrIdType: CPU_SPECIAL>
label_297524:
    if (ctx->pc == 0x297524u) {
        ctx->pc = 0x297524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297520u;
        // 0x297524: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297524 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x297528u;
        { ctx->pc = 0x297528; return; }
    }
    ctx->pc = 0x297520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 31, 0x297528u);
        ctx->pc = 0x297524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297520u;
        // 0x297524: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297524 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297520u, 0x297528u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x297528u;
    ctx->pc = 0x297528u;
    return;
}

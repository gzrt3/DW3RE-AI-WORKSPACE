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

// Function: entry_00254d38
// Address: 0x254d38 - 0x27d478
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_00254d38_part42(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x268d88u: goto label_268d88;
        case 0x268d8cu: goto label_268d8c;
        case 0x268d90u: goto label_268d90;
        case 0x268d94u: goto label_268d94;
        case 0x268d98u: goto label_268d98;
        case 0x268d9cu: goto label_268d9c;
        case 0x268da0u: goto label_268da0;
        case 0x268da4u: goto label_268da4;
        case 0x268da8u: goto label_268da8;
        case 0x268dacu: goto label_268dac;
        case 0x268db0u: goto label_268db0;
        case 0x268db4u: goto label_268db4;
        case 0x268db8u: goto label_268db8;
        case 0x268dbcu: goto label_268dbc;
        case 0x268dc0u: goto label_268dc0;
        case 0x268dc4u: goto label_268dc4;
        case 0x268dc8u: goto label_268dc8;
        case 0x268dccu: goto label_268dcc;
        case 0x268dd0u: goto label_268dd0;
        case 0x268dd4u: goto label_268dd4;
        case 0x268dd8u: goto label_268dd8;
        case 0x268ddcu: goto label_268ddc;
        case 0x268de0u: goto label_268de0;
        case 0x268de4u: goto label_268de4;
        case 0x268de8u: goto label_268de8;
        case 0x268decu: goto label_268dec;
        case 0x268df0u: goto label_268df0;
        case 0x268df4u: goto label_268df4;
        case 0x268df8u: goto label_268df8;
        case 0x268dfcu: goto label_268dfc;
        case 0x268e00u: goto label_268e00;
        case 0x268e04u: goto label_268e04;
        case 0x268e08u: goto label_268e08;
        case 0x268e0cu: goto label_268e0c;
        case 0x268e10u: goto label_268e10;
        case 0x268e14u: goto label_268e14;
        case 0x268e18u: goto label_268e18;
        case 0x268e1cu: goto label_268e1c;
        case 0x268e20u: goto label_268e20;
        case 0x268e24u: goto label_268e24;
        case 0x268e28u: goto label_268e28;
        case 0x268e2cu: goto label_268e2c;
        case 0x268e30u: goto label_268e30;
        case 0x268e34u: goto label_268e34;
        case 0x268e38u: goto label_268e38;
        case 0x268e3cu: goto label_268e3c;
        case 0x268e40u: goto label_268e40;
        case 0x268e44u: goto label_268e44;
        case 0x268e48u: goto label_268e48;
        case 0x268e4cu: goto label_268e4c;
        case 0x268e50u: goto label_268e50;
        case 0x268e54u: goto label_268e54;
        case 0x268e58u: goto label_268e58;
        case 0x268e5cu: goto label_268e5c;
        case 0x268e60u: goto label_268e60;
        case 0x268e64u: goto label_268e64;
        case 0x268e68u: goto label_268e68;
        case 0x268e6cu: goto label_268e6c;
        case 0x268e70u: goto label_268e70;
        case 0x268e74u: goto label_268e74;
        case 0x268e78u: goto label_268e78;
        case 0x268e7cu: goto label_268e7c;
        case 0x268e80u: goto label_268e80;
        case 0x268e84u: goto label_268e84;
        case 0x268e88u: goto label_268e88;
        case 0x268e8cu: goto label_268e8c;
        case 0x268e90u: goto label_268e90;
        case 0x268e94u: goto label_268e94;
        case 0x268e98u: goto label_268e98;
        case 0x268e9cu: goto label_268e9c;
        case 0x268ea0u: goto label_268ea0;
        case 0x268ea4u: goto label_268ea4;
        case 0x268ea8u: goto label_268ea8;
        case 0x268eacu: goto label_268eac;
        case 0x268eb0u: goto label_268eb0;
        case 0x268eb4u: goto label_268eb4;
        case 0x268eb8u: goto label_268eb8;
        case 0x268ebcu: goto label_268ebc;
        case 0x268ec0u: goto label_268ec0;
        case 0x268ec4u: goto label_268ec4;
        case 0x268ec8u: goto label_268ec8;
        case 0x268eccu: goto label_268ecc;
        case 0x268ed0u: goto label_268ed0;
        case 0x268ed4u: goto label_268ed4;
        case 0x268ed8u: goto label_268ed8;
        case 0x268edcu: goto label_268edc;
        case 0x268ee0u: goto label_268ee0;
        case 0x268ee4u: goto label_268ee4;
        case 0x268ee8u: goto label_268ee8;
        case 0x268eecu: goto label_268eec;
        case 0x268ef0u: goto label_268ef0;
        case 0x268ef4u: goto label_268ef4;
        case 0x268ef8u: goto label_268ef8;
        case 0x268efcu: goto label_268efc;
        case 0x268f00u: goto label_268f00;
        case 0x268f04u: goto label_268f04;
        case 0x268f08u: goto label_268f08;
        case 0x268f0cu: goto label_268f0c;
        case 0x268f10u: goto label_268f10;
        case 0x268f14u: goto label_268f14;
        case 0x268f18u: goto label_268f18;
        case 0x268f1cu: goto label_268f1c;
        case 0x268f20u: goto label_268f20;
        case 0x268f24u: goto label_268f24;
        case 0x268f28u: goto label_268f28;
        case 0x268f2cu: goto label_268f2c;
        case 0x268f30u: goto label_268f30;
        case 0x268f34u: goto label_268f34;
        case 0x268f38u: goto label_268f38;
        case 0x268f3cu: goto label_268f3c;
        case 0x268f40u: goto label_268f40;
        case 0x268f44u: goto label_268f44;
        case 0x268f48u: goto label_268f48;
        case 0x268f4cu: goto label_268f4c;
        case 0x268f50u: goto label_268f50;
        case 0x268f54u: goto label_268f54;
        case 0x268f58u: goto label_268f58;
        case 0x268f5cu: goto label_268f5c;
        case 0x268f60u: goto label_268f60;
        case 0x268f64u: goto label_268f64;
        case 0x268f68u: goto label_268f68;
        case 0x268f6cu: goto label_268f6c;
        case 0x268f70u: goto label_268f70;
        case 0x268f74u: goto label_268f74;
        case 0x268f78u: goto label_268f78;
        case 0x268f7cu: goto label_268f7c;
        case 0x268f80u: goto label_268f80;
        case 0x268f84u: goto label_268f84;
        case 0x268f88u: goto label_268f88;
        case 0x268f8cu: goto label_268f8c;
        case 0x268f90u: goto label_268f90;
        case 0x268f94u: goto label_268f94;
        case 0x268f98u: goto label_268f98;
        case 0x268f9cu: goto label_268f9c;
        case 0x268fa0u: goto label_268fa0;
        case 0x268fa4u: goto label_268fa4;
        case 0x268fa8u: goto label_268fa8;
        case 0x268facu: goto label_268fac;
        case 0x268fb0u: goto label_268fb0;
        case 0x268fb4u: goto label_268fb4;
        case 0x268fb8u: goto label_268fb8;
        case 0x268fbcu: goto label_268fbc;
        case 0x268fc0u: goto label_268fc0;
        case 0x268fc4u: goto label_268fc4;
        case 0x268fc8u: goto label_268fc8;
        case 0x268fccu: goto label_268fcc;
        case 0x268fd0u: goto label_268fd0;
        case 0x268fd4u: goto label_268fd4;
        case 0x268fd8u: goto label_268fd8;
        case 0x268fdcu: goto label_268fdc;
        case 0x268fe0u: goto label_268fe0;
        case 0x268fe4u: goto label_268fe4;
        case 0x268fe8u: goto label_268fe8;
        case 0x268fecu: goto label_268fec;
        case 0x268ff0u: goto label_268ff0;
        case 0x268ff4u: goto label_268ff4;
        case 0x268ff8u: goto label_268ff8;
        case 0x268ffcu: goto label_268ffc;
        case 0x269000u: goto label_269000;
        case 0x269004u: goto label_269004;
        case 0x269008u: goto label_269008;
        case 0x26900cu: goto label_26900c;
        case 0x269010u: goto label_269010;
        case 0x269014u: goto label_269014;
        case 0x269018u: goto label_269018;
        case 0x26901cu: goto label_26901c;
        case 0x269020u: goto label_269020;
        case 0x269024u: goto label_269024;
        case 0x269028u: goto label_269028;
        case 0x26902cu: goto label_26902c;
        case 0x269030u: goto label_269030;
        case 0x269034u: goto label_269034;
        case 0x269038u: goto label_269038;
        case 0x26903cu: goto label_26903c;
        case 0x269040u: goto label_269040;
        case 0x269044u: goto label_269044;
        case 0x269048u: goto label_269048;
        case 0x26904cu: goto label_26904c;
        case 0x269050u: goto label_269050;
        case 0x269054u: goto label_269054;
        case 0x269058u: goto label_269058;
        case 0x26905cu: goto label_26905c;
        case 0x269060u: goto label_269060;
        case 0x269064u: goto label_269064;
        case 0x269068u: goto label_269068;
        case 0x26906cu: goto label_26906c;
        case 0x269070u: goto label_269070;
        case 0x269074u: goto label_269074;
        case 0x269078u: goto label_269078;
        case 0x26907cu: goto label_26907c;
        case 0x269080u: goto label_269080;
        case 0x269084u: goto label_269084;
        case 0x269088u: goto label_269088;
        case 0x26908cu: goto label_26908c;
        case 0x269090u: goto label_269090;
        case 0x269094u: goto label_269094;
        case 0x269098u: goto label_269098;
        case 0x26909cu: goto label_26909c;
        case 0x2690a0u: goto label_2690a0;
        case 0x2690a4u: goto label_2690a4;
        case 0x2690a8u: goto label_2690a8;
        case 0x2690acu: goto label_2690ac;
        case 0x2690b0u: goto label_2690b0;
        case 0x2690b4u: goto label_2690b4;
        case 0x2690b8u: goto label_2690b8;
        case 0x2690bcu: goto label_2690bc;
        case 0x2690c0u: goto label_2690c0;
        case 0x2690c4u: goto label_2690c4;
        case 0x2690c8u: goto label_2690c8;
        case 0x2690ccu: goto label_2690cc;
        case 0x2690d0u: goto label_2690d0;
        case 0x2690d4u: goto label_2690d4;
        case 0x2690d8u: goto label_2690d8;
        case 0x2690dcu: goto label_2690dc;
        case 0x2690e0u: goto label_2690e0;
        case 0x2690e4u: goto label_2690e4;
        case 0x2690e8u: goto label_2690e8;
        case 0x2690ecu: goto label_2690ec;
        case 0x2690f0u: goto label_2690f0;
        case 0x2690f4u: goto label_2690f4;
        case 0x2690f8u: goto label_2690f8;
        case 0x2690fcu: goto label_2690fc;
        case 0x269100u: goto label_269100;
        case 0x269104u: goto label_269104;
        case 0x269108u: goto label_269108;
        case 0x26910cu: goto label_26910c;
        case 0x269110u: goto label_269110;
        case 0x269114u: goto label_269114;
        case 0x269118u: goto label_269118;
        case 0x26911cu: goto label_26911c;
        case 0x269120u: goto label_269120;
        case 0x269124u: goto label_269124;
        case 0x269128u: goto label_269128;
        case 0x26912cu: goto label_26912c;
        case 0x269130u: goto label_269130;
        case 0x269134u: goto label_269134;
        case 0x269138u: goto label_269138;
        case 0x26913cu: goto label_26913c;
        case 0x269140u: goto label_269140;
        case 0x269144u: goto label_269144;
        case 0x269148u: goto label_269148;
        case 0x26914cu: goto label_26914c;
        case 0x269150u: goto label_269150;
        case 0x269154u: goto label_269154;
        case 0x269158u: goto label_269158;
        case 0x26915cu: goto label_26915c;
        case 0x269160u: goto label_269160;
        case 0x269164u: goto label_269164;
        case 0x269168u: goto label_269168;
        case 0x26916cu: goto label_26916c;
        case 0x269170u: goto label_269170;
        case 0x269174u: goto label_269174;
        case 0x269178u: goto label_269178;
        case 0x26917cu: goto label_26917c;
        case 0x269180u: goto label_269180;
        case 0x269184u: goto label_269184;
        case 0x269188u: goto label_269188;
        case 0x26918cu: goto label_26918c;
        case 0x269190u: goto label_269190;
        case 0x269194u: goto label_269194;
        case 0x269198u: goto label_269198;
        case 0x26919cu: goto label_26919c;
        case 0x2691a0u: goto label_2691a0;
        case 0x2691a4u: goto label_2691a4;
        case 0x2691a8u: goto label_2691a8;
        case 0x2691acu: goto label_2691ac;
        case 0x2691b0u: goto label_2691b0;
        case 0x2691b4u: goto label_2691b4;
        case 0x2691b8u: goto label_2691b8;
        case 0x2691bcu: goto label_2691bc;
        case 0x2691c0u: goto label_2691c0;
        case 0x2691c4u: goto label_2691c4;
        case 0x2691c8u: goto label_2691c8;
        case 0x2691ccu: goto label_2691cc;
        case 0x2691d0u: goto label_2691d0;
        case 0x2691d4u: goto label_2691d4;
        case 0x2691d8u: goto label_2691d8;
        case 0x2691dcu: goto label_2691dc;
        case 0x2691e0u: goto label_2691e0;
        case 0x2691e4u: goto label_2691e4;
        case 0x2691e8u: goto label_2691e8;
        case 0x2691ecu: goto label_2691ec;
        case 0x2691f0u: goto label_2691f0;
        case 0x2691f4u: goto label_2691f4;
        case 0x2691f8u: goto label_2691f8;
        case 0x2691fcu: goto label_2691fc;
        case 0x269200u: goto label_269200;
        case 0x269204u: goto label_269204;
        case 0x269208u: goto label_269208;
        case 0x26920cu: goto label_26920c;
        case 0x269210u: goto label_269210;
        case 0x269214u: goto label_269214;
        case 0x269218u: goto label_269218;
        case 0x26921cu: goto label_26921c;
        case 0x269220u: goto label_269220;
        case 0x269224u: goto label_269224;
        case 0x269228u: goto label_269228;
        case 0x26922cu: goto label_26922c;
        case 0x269230u: goto label_269230;
        case 0x269234u: goto label_269234;
        case 0x269238u: goto label_269238;
        case 0x26923cu: goto label_26923c;
        case 0x269240u: goto label_269240;
        case 0x269244u: goto label_269244;
        case 0x269248u: goto label_269248;
        case 0x26924cu: goto label_26924c;
        case 0x269250u: goto label_269250;
        case 0x269254u: goto label_269254;
        case 0x269258u: goto label_269258;
        case 0x26925cu: goto label_26925c;
        case 0x269260u: goto label_269260;
        case 0x269264u: goto label_269264;
        case 0x269268u: goto label_269268;
        case 0x26926cu: goto label_26926c;
        case 0x269270u: goto label_269270;
        case 0x269274u: goto label_269274;
        case 0x269278u: goto label_269278;
        case 0x26927cu: goto label_26927c;
        case 0x269280u: goto label_269280;
        case 0x269284u: goto label_269284;
        case 0x269288u: goto label_269288;
        case 0x26928cu: goto label_26928c;
        case 0x269290u: goto label_269290;
        case 0x269294u: goto label_269294;
        case 0x269298u: goto label_269298;
        case 0x26929cu: goto label_26929c;
        case 0x2692a0u: goto label_2692a0;
        case 0x2692a4u: goto label_2692a4;
        case 0x2692a8u: goto label_2692a8;
        case 0x2692acu: goto label_2692ac;
        case 0x2692b0u: goto label_2692b0;
        case 0x2692b4u: goto label_2692b4;
        case 0x2692b8u: goto label_2692b8;
        case 0x2692bcu: goto label_2692bc;
        case 0x2692c0u: goto label_2692c0;
        case 0x2692c4u: goto label_2692c4;
        case 0x2692c8u: goto label_2692c8;
        case 0x2692ccu: goto label_2692cc;
        case 0x2692d0u: goto label_2692d0;
        case 0x2692d4u: goto label_2692d4;
        case 0x2692d8u: goto label_2692d8;
        case 0x2692dcu: goto label_2692dc;
        case 0x2692e0u: goto label_2692e0;
        case 0x2692e4u: goto label_2692e4;
        case 0x2692e8u: goto label_2692e8;
        case 0x2692ecu: goto label_2692ec;
        case 0x2692f0u: goto label_2692f0;
        case 0x2692f4u: goto label_2692f4;
        case 0x2692f8u: goto label_2692f8;
        case 0x2692fcu: goto label_2692fc;
        case 0x269300u: goto label_269300;
        case 0x269304u: goto label_269304;
        case 0x269308u: goto label_269308;
        case 0x26930cu: goto label_26930c;
        case 0x269310u: goto label_269310;
        case 0x269314u: goto label_269314;
        case 0x269318u: goto label_269318;
        case 0x26931cu: goto label_26931c;
        case 0x269320u: goto label_269320;
        case 0x269324u: goto label_269324;
        case 0x269328u: goto label_269328;
        case 0x26932cu: goto label_26932c;
        case 0x269330u: goto label_269330;
        case 0x269334u: goto label_269334;
        case 0x269338u: goto label_269338;
        case 0x26933cu: goto label_26933c;
        case 0x269340u: goto label_269340;
        case 0x269344u: goto label_269344;
        case 0x269348u: goto label_269348;
        case 0x26934cu: goto label_26934c;
        case 0x269350u: goto label_269350;
        case 0x269354u: goto label_269354;
        case 0x269358u: goto label_269358;
        case 0x26935cu: goto label_26935c;
        case 0x269360u: goto label_269360;
        case 0x269364u: goto label_269364;
        case 0x269368u: goto label_269368;
        case 0x26936cu: goto label_26936c;
        case 0x269370u: goto label_269370;
        case 0x269374u: goto label_269374;
        case 0x269378u: goto label_269378;
        case 0x26937cu: goto label_26937c;
        case 0x269380u: goto label_269380;
        case 0x269384u: goto label_269384;
        case 0x269388u: goto label_269388;
        case 0x26938cu: goto label_26938c;
        case 0x269390u: goto label_269390;
        case 0x269394u: goto label_269394;
        case 0x269398u: goto label_269398;
        case 0x26939cu: goto label_26939c;
        case 0x2693a0u: goto label_2693a0;
        case 0x2693a4u: goto label_2693a4;
        case 0x2693a8u: goto label_2693a8;
        case 0x2693acu: goto label_2693ac;
        case 0x2693b0u: goto label_2693b0;
        case 0x2693b4u: goto label_2693b4;
        case 0x2693b8u: goto label_2693b8;
        case 0x2693bcu: goto label_2693bc;
        case 0x2693c0u: goto label_2693c0;
        case 0x2693c4u: goto label_2693c4;
        case 0x2693c8u: goto label_2693c8;
        case 0x2693ccu: goto label_2693cc;
        case 0x2693d0u: goto label_2693d0;
        case 0x2693d4u: goto label_2693d4;
        case 0x2693d8u: goto label_2693d8;
        case 0x2693dcu: goto label_2693dc;
        case 0x2693e0u: goto label_2693e0;
        case 0x2693e4u: goto label_2693e4;
        case 0x2693e8u: goto label_2693e8;
        case 0x2693ecu: goto label_2693ec;
        case 0x2693f0u: goto label_2693f0;
        case 0x2693f4u: goto label_2693f4;
        case 0x2693f8u: goto label_2693f8;
        case 0x2693fcu: goto label_2693fc;
        case 0x269400u: goto label_269400;
        case 0x269404u: goto label_269404;
        case 0x269408u: goto label_269408;
        case 0x26940cu: goto label_26940c;
        case 0x269410u: goto label_269410;
        case 0x269414u: goto label_269414;
        case 0x269418u: goto label_269418;
        case 0x26941cu: goto label_26941c;
        case 0x269420u: goto label_269420;
        case 0x269424u: goto label_269424;
        case 0x269428u: goto label_269428;
        case 0x26942cu: goto label_26942c;
        case 0x269430u: goto label_269430;
        case 0x269434u: goto label_269434;
        case 0x269438u: goto label_269438;
        case 0x26943cu: goto label_26943c;
        case 0x269440u: goto label_269440;
        case 0x269444u: goto label_269444;
        case 0x269448u: goto label_269448;
        case 0x26944cu: goto label_26944c;
        case 0x269450u: goto label_269450;
        case 0x269454u: goto label_269454;
        case 0x269458u: goto label_269458;
        case 0x26945cu: goto label_26945c;
        case 0x269460u: goto label_269460;
        case 0x269464u: goto label_269464;
        case 0x269468u: goto label_269468;
        case 0x26946cu: goto label_26946c;
        case 0x269470u: goto label_269470;
        case 0x269474u: goto label_269474;
        case 0x269478u: goto label_269478;
        case 0x26947cu: goto label_26947c;
        case 0x269480u: goto label_269480;
        case 0x269484u: goto label_269484;
        case 0x269488u: goto label_269488;
        case 0x26948cu: goto label_26948c;
        case 0x269490u: goto label_269490;
        case 0x269494u: goto label_269494;
        case 0x269498u: goto label_269498;
        case 0x26949cu: goto label_26949c;
        case 0x2694a0u: goto label_2694a0;
        case 0x2694a4u: goto label_2694a4;
        case 0x2694a8u: goto label_2694a8;
        case 0x2694acu: goto label_2694ac;
        case 0x2694b0u: goto label_2694b0;
        case 0x2694b4u: goto label_2694b4;
        case 0x2694b8u: goto label_2694b8;
        case 0x2694bcu: goto label_2694bc;
        case 0x2694c0u: goto label_2694c0;
        case 0x2694c4u: goto label_2694c4;
        case 0x2694c8u: goto label_2694c8;
        case 0x2694ccu: goto label_2694cc;
        case 0x2694d0u: goto label_2694d0;
        case 0x2694d4u: goto label_2694d4;
        case 0x2694d8u: goto label_2694d8;
        case 0x2694dcu: goto label_2694dc;
        case 0x2694e0u: goto label_2694e0;
        case 0x2694e4u: goto label_2694e4;
        case 0x2694e8u: goto label_2694e8;
        case 0x2694ecu: goto label_2694ec;
        case 0x2694f0u: goto label_2694f0;
        case 0x2694f4u: goto label_2694f4;
        case 0x2694f8u: goto label_2694f8;
        case 0x2694fcu: goto label_2694fc;
        case 0x269500u: goto label_269500;
        case 0x269504u: goto label_269504;
        case 0x269508u: goto label_269508;
        case 0x26950cu: goto label_26950c;
        case 0x269510u: goto label_269510;
        case 0x269514u: goto label_269514;
        case 0x269518u: goto label_269518;
        case 0x26951cu: goto label_26951c;
        case 0x269520u: goto label_269520;
        case 0x269524u: goto label_269524;
        case 0x269528u: goto label_269528;
        case 0x26952cu: goto label_26952c;
        case 0x269530u: goto label_269530;
        case 0x269534u: goto label_269534;
        case 0x269538u: goto label_269538;
        case 0x26953cu: goto label_26953c;
        case 0x269540u: goto label_269540;
        case 0x269544u: goto label_269544;
        case 0x269548u: goto label_269548;
        case 0x26954cu: goto label_26954c;
        case 0x269550u: goto label_269550;
        case 0x269554u: goto label_269554;
        default: return;
    }

label_268d88:
    // 0x268d88: 0x0  nop
    ctx->pc = 0x268d88u;
    // NOP
label_268d8c:
    // 0x268d8c: 0x0  nop
    ctx->pc = 0x268d8cu;
    // NOP
label_268d90:
    // 0x268d90: 0x13057  .word       0x00013057                   # dsrav       $a2, $at, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268d90u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_268d94:
    // 0x268d94: 0xb720  .word       0x0000B720                   # add         $s6, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268d94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_268d98:
    // 0x268d98: 0x0  nop
    ctx->pc = 0x268d98u;
    // NOP
label_268d9c:
    // 0x268d9c: 0x0  nop
    ctx->pc = 0x268d9cu;
    // NOP
label_268da0:
    // 0x268da0: 0x1306e  .word       0x0001306E                   # dsub        $a2, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268da0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, r); }
label_268da4:
    // 0x268da4: 0xd6e0  .word       0x0000D6E0                   # add         $k0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268da4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_268da8:
    // 0x268da8: 0x0  nop
    ctx->pc = 0x268da8u;
    // NOP
label_268dac:
    // 0x268dac: 0x0  nop
    ctx->pc = 0x268dacu;
    // NOP
label_268db0:
    // 0x268db0: 0x13089  .word       0x00013089                   # jalr        $a2, $zero # 00010080 <InstrIdType: CPU_SPECIAL>
label_268db4:
    if (ctx->pc == 0x268DB4u) {
        ctx->pc = 0x268DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DB0u;
        // 0x268db4: 0x9b90  .word       0x00009B90                   # mfhi        $s3 # 00000380 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x268DB8u;
        goto label_268db8;
    }
    ctx->pc = 0x268DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 6, 0x268DB8u);
        ctx->pc = 0x268DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DB0u;
        // 0x268db4: 0x9b90  .word       0x00009B90                   # mfhi        $s3 # 00000380 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268DB0u, 0x268DB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x268DB8u;
label_268db8:
    // 0x268db8: 0x0  nop
    ctx->pc = 0x268db8u;
    // NOP
label_268dbc:
    // 0x268dbc: 0x0  nop
    ctx->pc = 0x268dbcu;
    // NOP
label_268dc0:
    // 0x268dc0: 0x1309d  .word       0x0001309D                   # dmultu      $zero, $at # 00003080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268dc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x268DC0 raw=0x0001309D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268dc4:
    // 0x268dc4: 0x4770  tge         $zero, $zero, 285
    ctx->pc = 0x268dc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268dc8:
    // 0x268dc8: 0x0  nop
    ctx->pc = 0x268dc8u;
    // NOP
label_268dcc:
    // 0x268dcc: 0x0  nop
    ctx->pc = 0x268dccu;
    // NOP
label_268dd0:
    // 0x268dd0: 0x130a6  .word       0x000130A6                   # xor         $a2, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268dd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_268dd4:
    // 0x268dd4: 0xb110  .word       0x0000B110                   # mfhi        $s6 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268dd4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_268dd8:
    // 0x268dd8: 0x0  nop
    ctx->pc = 0x268dd8u;
    // NOP
label_268ddc:
    // 0x268ddc: 0x0  nop
    ctx->pc = 0x268ddcu;
    // NOP
label_268de0:
    // 0x268de0: 0x130bd  .word       0x000130BD                   # INVALID     $zero, $at, 0x30BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268de0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x268DE0 raw=0x000130BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268de4:
    // 0x268de4: 0x8d30  tge         $zero, $zero, 564
    ctx->pc = 0x268de4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268de8:
    // 0x268de8: 0x0  nop
    ctx->pc = 0x268de8u;
    // NOP
label_268dec:
    // 0x268dec: 0x0  nop
    ctx->pc = 0x268decu;
    // NOP
label_268df0:
    // 0x268df0: 0x130cf  .word       0x000130CF                   # sync # 00013000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268df0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_268df4:
    // 0x268df4: 0xd7f0  tge         $zero, $zero, 863
    ctx->pc = 0x268df4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268df8:
    // 0x268df8: 0x0  nop
    ctx->pc = 0x268df8u;
    // NOP
label_268dfc:
    // 0x268dfc: 0x0  nop
    ctx->pc = 0x268dfcu;
    // NOP
label_268e00:
    // 0x268e00: 0x130ea  .word       0x000130EA                   # slt         $a2, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268e00u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_268e04:
    // 0x268e04: 0x8820  add         $s1, $zero, $zero
    ctx->pc = 0x268e04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_268e08:
    // 0x268e08: 0x0  nop
    ctx->pc = 0x268e08u;
    // NOP
label_268e0c:
    // 0x268e0c: 0x0  nop
    ctx->pc = 0x268e0cu;
    // NOP
label_268e10:
    // 0x268e10: 0x130fc  dsll32      $a2, $at, 3
    ctx->pc = 0x268e10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) << (32 + 3));
label_268e14:
    // 0x268e14: 0xc200  sll         $t8, $zero, 8
    ctx->pc = 0x268e14u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_268e18:
    // 0x268e18: 0x0  nop
    ctx->pc = 0x268e18u;
    // NOP
label_268e1c:
    // 0x268e1c: 0x0  nop
    ctx->pc = 0x268e1cu;
    // NOP
label_268e20:
    // 0x268e20: 0x13115  .word       0x00013115                   # INVALID     $zero, $at, 0x3115 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268e20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x268E20 raw=0x00013115"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268e24:
    // 0x268e24: 0x9dc0  sll         $s3, $zero, 23
    ctx->pc = 0x268e24u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_268e28:
    // 0x268e28: 0x0  nop
    ctx->pc = 0x268e28u;
    // NOP
label_268e2c:
    // 0x268e2c: 0x0  nop
    ctx->pc = 0x268e2cu;
    // NOP
label_268e30:
    // 0x268e30: 0x13129  .word       0x00013129                   # mtsa        $zero # 00013100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x268e30u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_268e34:
    // 0x268e34: 0x83a0  .word       0x000083A0                   # add         $s0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268e34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_268e38:
    // 0x268e38: 0x0  nop
    ctx->pc = 0x268e38u;
    // NOP
label_268e3c:
    // 0x268e3c: 0x0  nop
    ctx->pc = 0x268e3cu;
    // NOP
label_268e40:
    // 0x268e40: 0x1313a  dsrl        $a2, $at, 4
    ctx->pc = 0x268e40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) >> 4);
label_268e44:
    // 0x268e44: 0x8da0  .word       0x00008DA0                   # add         $s1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268e44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_268e48:
    // 0x268e48: 0x0  nop
    ctx->pc = 0x268e48u;
    // NOP
label_268e4c:
    // 0x268e4c: 0x0  nop
    ctx->pc = 0x268e4cu;
    // NOP
label_268e50:
    // 0x268e50: 0x1314c  .word       0x0001314C                   # syscall     197 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268e50u;
    ctx->pc = 0x268E54u;
runtime->handleSyscall(rdram, ctx, 0x4C5u);
label_268e54:
    // 0x268e54: 0x9c50  .word       0x00009C50                   # mfhi        $s3 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268e54u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_268e58:
    // 0x268e58: 0x0  nop
    ctx->pc = 0x268e58u;
    // NOP
label_268e5c:
    // 0x268e5c: 0x0  nop
    ctx->pc = 0x268e5cu;
    // NOP
label_268e60:
    // 0x268e60: 0x13160  .word       0x00013160                   # add         $a2, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268e60u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_268e64:
    // 0x268e64: 0x6df0  tge         $zero, $zero, 439
    ctx->pc = 0x268e64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268e68:
    // 0x268e68: 0x0  nop
    ctx->pc = 0x268e68u;
    // NOP
label_268e6c:
    // 0x268e6c: 0x0  nop
    ctx->pc = 0x268e6cu;
    // NOP
label_268e70:
    // 0x268e70: 0x1316e  .word       0x0001316E                   # dsub        $a2, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268e70u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, r); }
label_268e74:
    // 0x268e74: 0x8d50  .word       0x00008D50                   # mfhi        $s1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268e74u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_268e78:
    // 0x268e78: 0x0  nop
    ctx->pc = 0x268e78u;
    // NOP
label_268e7c:
    // 0x268e7c: 0x0  nop
    ctx->pc = 0x268e7cu;
    // NOP
label_268e80:
    // 0x268e80: 0x13180  sll         $a2, $at, 6
    ctx->pc = 0x268e80u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 6));
label_268e84:
    // 0x268e84: 0x56c0  sll         $t2, $zero, 27
    ctx->pc = 0x268e84u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_268e88:
    // 0x268e88: 0x0  nop
    ctx->pc = 0x268e88u;
    // NOP
label_268e8c:
    // 0x268e8c: 0x0  nop
    ctx->pc = 0x268e8cu;
    // NOP
label_268e90:
    // 0x268e90: 0x1318b  .word       0x0001318B                   # movn        $a2, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268e90u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_268e94:
    // 0x268e94: 0x7590  .word       0x00007590                   # mfhi        $t6 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268e94u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_268e98:
    // 0x268e98: 0x0  nop
    ctx->pc = 0x268e98u;
    // NOP
label_268e9c:
    // 0x268e9c: 0x0  nop
    ctx->pc = 0x268e9cu;
    // NOP
label_268ea0:
    // 0x268ea0: 0x1319a  .word       0x0001319A                   # div         $a2, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268ea0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_268ea4:
    // 0x268ea4: 0x8180  sll         $s0, $zero, 6
    ctx->pc = 0x268ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_268ea8:
    // 0x268ea8: 0x0  nop
    ctx->pc = 0x268ea8u;
    // NOP
label_268eac:
    // 0x268eac: 0x0  nop
    ctx->pc = 0x268eacu;
    // NOP
label_268eb0:
    // 0x268eb0: 0x131ab  .word       0x000131AB                   # sltu        $a2, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268eb0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_268eb4:
    // 0x268eb4: 0xe120  .word       0x0000E120                   # add         $gp, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268eb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_268eb8:
    // 0x268eb8: 0x0  nop
    ctx->pc = 0x268eb8u;
    // NOP
label_268ebc:
    // 0x268ebc: 0x0  nop
    ctx->pc = 0x268ebcu;
    // NOP
label_268ec0:
    // 0x268ec0: 0x131c8  .word       0x000131C8                   # jr          $zero # 000131C0 <InstrIdType: CPU_SPECIAL>
label_268ec4:
    if (ctx->pc == 0x268EC4u) {
        ctx->pc = 0x268EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268EC0u;
        // 0x268ec4: 0x89a0  .word       0x000089A0                   # add         $s1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x268EC8u;
        goto label_268ec8;
    }
    ctx->pc = 0x268EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x268EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268EC0u;
        // 0x268ec4: 0x89a0  .word       0x000089A0                   # add         $s1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268EC0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x268EC8u;
label_268ec8:
    // 0x268ec8: 0x0  nop
    ctx->pc = 0x268ec8u;
    // NOP
label_268ecc:
    // 0x268ecc: 0x0  nop
    ctx->pc = 0x268eccu;
    // NOP
label_268ed0:
    // 0x268ed0: 0x131da  .word       0x000131DA                   # div         $a2, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268ed0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_268ed4:
    // 0x268ed4: 0x7d20  .word       0x00007D20                   # add         $t7, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268ed4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_268ed8:
    // 0x268ed8: 0x0  nop
    ctx->pc = 0x268ed8u;
    // NOP
label_268edc:
    // 0x268edc: 0x0  nop
    ctx->pc = 0x268edcu;
    // NOP
label_268ee0:
    // 0x268ee0: 0x131ea  .word       0x000131EA                   # slt         $a2, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268ee0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_268ee4:
    // 0x268ee4: 0x47e0  .word       0x000047E0                   # add         $t0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268ee4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_268ee8:
    // 0x268ee8: 0x0  nop
    ctx->pc = 0x268ee8u;
    // NOP
label_268eec:
    // 0x268eec: 0x0  nop
    ctx->pc = 0x268eecu;
    // NOP
label_268ef0:
    // 0x268ef0: 0x131f3  tltu        $zero, $at, 199
    ctx->pc = 0x268ef0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_268ef4:
    // 0x268ef4: 0x7610  .word       0x00007610                   # mfhi        $t6 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268ef4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_268ef8:
    // 0x268ef8: 0x0  nop
    ctx->pc = 0x268ef8u;
    // NOP
label_268efc:
    // 0x268efc: 0x0  nop
    ctx->pc = 0x268efcu;
    // NOP
label_268f00:
    // 0x268f00: 0x13202  srl         $a2, $at, 8
    ctx->pc = 0x268f00u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 1), 8));
label_268f04:
    // 0x268f04: 0x5940  sll         $t3, $zero, 5
    ctx->pc = 0x268f04u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_268f08:
    // 0x268f08: 0x0  nop
    ctx->pc = 0x268f08u;
    // NOP
label_268f0c:
    // 0x268f0c: 0x0  nop
    ctx->pc = 0x268f0cu;
    // NOP
label_268f10:
    // 0x268f10: 0x1320e  .word       0x0001320E                   # INVALID     $zero, $at, 0x320E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268f10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x268F10 raw=0x0001320E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268f14:
    // 0x268f14: 0x9d80  sll         $s3, $zero, 22
    ctx->pc = 0x268f14u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_268f18:
    // 0x268f18: 0x0  nop
    ctx->pc = 0x268f18u;
    // NOP
label_268f1c:
    // 0x268f1c: 0x0  nop
    ctx->pc = 0x268f1cu;
    // NOP
label_268f20:
    // 0x268f20: 0x13222  .word       0x00013222                   # neg         $a2, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268f20u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_268f24:
    // 0x268f24: 0xb550  .word       0x0000B550                   # mfhi        $s6 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268f24u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_268f28:
    // 0x268f28: 0x0  nop
    ctx->pc = 0x268f28u;
    // NOP
label_268f2c:
    // 0x268f2c: 0x0  nop
    ctx->pc = 0x268f2cu;
    // NOP
label_268f30:
    // 0x268f30: 0x13239  .word       0x00013239                   # INVALID     $zero, $at, 0x3239 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268f30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x268F30 raw=0x00013239"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268f34:
    // 0x268f34: 0x49c0  sll         $t1, $zero, 7
    ctx->pc = 0x268f34u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_268f38:
    // 0x268f38: 0x0  nop
    ctx->pc = 0x268f38u;
    // NOP
label_268f3c:
    // 0x268f3c: 0x0  nop
    ctx->pc = 0x268f3cu;
    // NOP
label_268f40:
    // 0x268f40: 0x13243  sra         $a2, $at, 9
    ctx->pc = 0x268f40u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 1), 9));
label_268f44:
    // 0x268f44: 0xd7e0  .word       0x0000D7E0                   # add         $k0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268f44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_268f48:
    // 0x268f48: 0x0  nop
    ctx->pc = 0x268f48u;
    // NOP
label_268f4c:
    // 0x268f4c: 0x0  nop
    ctx->pc = 0x268f4cu;
    // NOP
label_268f50:
    // 0x268f50: 0x1325e  .word       0x0001325E                   # ddiv        $a2, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268f50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x268F50 raw=0x0001325E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268f54:
    // 0x268f54: 0x8a40  sll         $s1, $zero, 9
    ctx->pc = 0x268f54u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_268f58:
    // 0x268f58: 0x0  nop
    ctx->pc = 0x268f58u;
    // NOP
label_268f5c:
    // 0x268f5c: 0x0  nop
    ctx->pc = 0x268f5cu;
    // NOP
label_268f60:
    // 0x268f60: 0x13270  tge         $zero, $at, 201
    ctx->pc = 0x268f60u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_268f64:
    // 0x268f64: 0xb1e0  .word       0x0000B1E0                   # add         $s6, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268f64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_268f68:
    // 0x268f68: 0x0  nop
    ctx->pc = 0x268f68u;
    // NOP
label_268f6c:
    // 0x268f6c: 0x0  nop
    ctx->pc = 0x268f6cu;
    // NOP
label_268f70:
    // 0x268f70: 0x13287  .word       0x00013287                   # srav        $a2, $at, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268f70u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_268f74:
    // 0x268f74: 0x7a50  .word       0x00007A50                   # mfhi        $t7 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268f74u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_268f78:
    // 0x268f78: 0x0  nop
    ctx->pc = 0x268f78u;
    // NOP
label_268f7c:
    // 0x268f7c: 0x0  nop
    ctx->pc = 0x268f7cu;
    // NOP
label_268f80:
    // 0x268f80: 0x13297  .word       0x00013297                   # dsrav       $a2, $at, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268f80u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_268f84:
    // 0x268f84: 0x8c10  .word       0x00008C10                   # mfhi        $s1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268f84u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_268f88:
    // 0x268f88: 0x0  nop
    ctx->pc = 0x268f88u;
    // NOP
label_268f8c:
    // 0x268f8c: 0x0  nop
    ctx->pc = 0x268f8cu;
    // NOP
label_268f90:
    // 0x268f90: 0x132a9  .word       0x000132A9                   # mtsa        $zero # 00013280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x268f90u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_268f94:
    // 0x268f94: 0xb680  sll         $s6, $zero, 26
    ctx->pc = 0x268f94u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_268f98:
    // 0x268f98: 0x0  nop
    ctx->pc = 0x268f98u;
    // NOP
label_268f9c:
    // 0x268f9c: 0x0  nop
    ctx->pc = 0x268f9cu;
    // NOP
label_268fa0:
    // 0x268fa0: 0x132c0  sll         $a2, $at, 11
    ctx->pc = 0x268fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 11));
label_268fa4:
    // 0x268fa4: 0x90c0  sll         $s2, $zero, 3
    ctx->pc = 0x268fa4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_268fa8:
    // 0x268fa8: 0x0  nop
    ctx->pc = 0x268fa8u;
    // NOP
label_268fac:
    // 0x268fac: 0x0  nop
    ctx->pc = 0x268facu;
    // NOP
label_268fb0:
    // 0x268fb0: 0x132d3  .word       0x000132D3                   # mtlo        $zero # 000132C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268fb0u;
    ctx->lo = GPR_U64(ctx, 0);
label_268fb4:
    // 0x268fb4: 0x9d30  tge         $zero, $zero, 628
    ctx->pc = 0x268fb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268fb8:
    // 0x268fb8: 0x0  nop
    ctx->pc = 0x268fb8u;
    // NOP
label_268fbc:
    // 0x268fbc: 0x0  nop
    ctx->pc = 0x268fbcu;
    // NOP
label_268fc0:
    // 0x268fc0: 0x132e7  .word       0x000132E7                   # nor         $a2, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268fc0u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_268fc4:
    // 0x268fc4: 0xaac0  sll         $s5, $zero, 11
    ctx->pc = 0x268fc4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_268fc8:
    // 0x268fc8: 0x0  nop
    ctx->pc = 0x268fc8u;
    // NOP
label_268fcc:
    // 0x268fcc: 0x0  nop
    ctx->pc = 0x268fccu;
    // NOP
label_268fd0:
    // 0x268fd0: 0x132fd  .word       0x000132FD                   # INVALID     $zero, $at, 0x32FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268fd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x268FD0 raw=0x000132FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268fd4:
    // 0x268fd4: 0x6390  .word       0x00006390                   # mfhi        $t4 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268fd4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_268fd8:
    // 0x268fd8: 0x0  nop
    ctx->pc = 0x268fd8u;
    // NOP
label_268fdc:
    // 0x268fdc: 0x0  nop
    ctx->pc = 0x268fdcu;
    // NOP
label_268fe0:
    // 0x268fe0: 0x1330a  .word       0x0001330A                   # movz        $a2, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268fe0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_268fe4:
    // 0x268fe4: 0x3a30  tge         $zero, $zero, 232
    ctx->pc = 0x268fe4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268fe8:
    // 0x268fe8: 0x0  nop
    ctx->pc = 0x268fe8u;
    // NOP
label_268fec:
    // 0x268fec: 0x0  nop
    ctx->pc = 0x268fecu;
    // NOP
label_268ff0:
    // 0x268ff0: 0x13312  .word       0x00013312                   # mflo        $a2 # 00010300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268ff0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_268ff4:
    // 0x268ff4: 0x54f0  tge         $zero, $zero, 339
    ctx->pc = 0x268ff4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268ff8:
    // 0x268ff8: 0x0  nop
    ctx->pc = 0x268ff8u;
    // NOP
label_268ffc:
    // 0x268ffc: 0x0  nop
    ctx->pc = 0x268ffcu;
    // NOP
label_269000:
    // 0x269000: 0x1331d  .word       0x0001331D                   # dmultu      $zero, $at # 00003300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269000u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x269000 raw=0x0001331D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269004:
    // 0x269004: 0x65f0  tge         $zero, $zero, 407
    ctx->pc = 0x269004u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269008:
    // 0x269008: 0x0  nop
    ctx->pc = 0x269008u;
    // NOP
label_26900c:
    // 0x26900c: 0x0  nop
    ctx->pc = 0x26900cu;
    // NOP
label_269010:
    // 0x269010: 0x1332a  .word       0x0001332A                   # slt         $a2, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269010u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_269014:
    // 0x269014: 0xc560  .word       0x0000C560                   # add         $t8, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269014u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_269018:
    // 0x269018: 0x0  nop
    ctx->pc = 0x269018u;
    // NOP
label_26901c:
    // 0x26901c: 0x0  nop
    ctx->pc = 0x26901cu;
    // NOP
label_269020:
    // 0x269020: 0x13343  sra         $a2, $at, 13
    ctx->pc = 0x269020u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 1), 13));
label_269024:
    // 0x269024: 0x7dd0  .word       0x00007DD0                   # mfhi        $t7 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269024u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_269028:
    // 0x269028: 0x0  nop
    ctx->pc = 0x269028u;
    // NOP
label_26902c:
    // 0x26902c: 0x0  nop
    ctx->pc = 0x26902cu;
    // NOP
label_269030:
    // 0x269030: 0x13353  .word       0x00013353                   # mtlo        $zero # 00013340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269030u;
    ctx->lo = GPR_U64(ctx, 0);
label_269034:
    // 0x269034: 0x7650  .word       0x00007650                   # mfhi        $t6 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269034u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_269038:
    // 0x269038: 0x0  nop
    ctx->pc = 0x269038u;
    // NOP
label_26903c:
    // 0x26903c: 0x0  nop
    ctx->pc = 0x26903cu;
    // NOP
label_269040:
    // 0x269040: 0x13362  .word       0x00013362                   # neg         $a2, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269040u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_269044:
    // 0x269044: 0xf030  tge         $zero, $zero, 960
    ctx->pc = 0x269044u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269048:
    // 0x269048: 0x0  nop
    ctx->pc = 0x269048u;
    // NOP
label_26904c:
    // 0x26904c: 0x0  nop
    ctx->pc = 0x26904cu;
    // NOP
label_269050:
    // 0x269050: 0x13381  .word       0x00013381                   # INVALID     $zero, $at, 0x3381 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269050u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x269050 raw=0x00013381"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269054:
    // 0x269054: 0xc050  .word       0x0000C050                   # mfhi        $t8 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269054u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_269058:
    // 0x269058: 0x0  nop
    ctx->pc = 0x269058u;
    // NOP
label_26905c:
    // 0x26905c: 0x0  nop
    ctx->pc = 0x26905cu;
    // NOP
label_269060:
    // 0x269060: 0x1339a  .word       0x0001339A                   # div         $a2, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269060u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_269064:
    // 0x269064: 0x9e50  .word       0x00009E50                   # mfhi        $s3 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269064u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_269068:
    // 0x269068: 0x0  nop
    ctx->pc = 0x269068u;
    // NOP
label_26906c:
    // 0x26906c: 0x0  nop
    ctx->pc = 0x26906cu;
    // NOP
label_269070:
    // 0x269070: 0x133ae  .word       0x000133AE                   # dsub        $a2, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269070u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, r); }
label_269074:
    // 0x269074: 0x9ae0  .word       0x00009AE0                   # add         $s3, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269074u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_269078:
    // 0x269078: 0x0  nop
    ctx->pc = 0x269078u;
    // NOP
label_26907c:
    // 0x26907c: 0x0  nop
    ctx->pc = 0x26907cu;
    // NOP
label_269080:
    // 0x269080: 0x133c2  srl         $a2, $at, 15
    ctx->pc = 0x269080u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 1), 15));
label_269084:
    // 0x269084: 0xc4b0  tge         $zero, $zero, 786
    ctx->pc = 0x269084u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269088:
    // 0x269088: 0x0  nop
    ctx->pc = 0x269088u;
    // NOP
label_26908c:
    // 0x26908c: 0x0  nop
    ctx->pc = 0x26908cu;
    // NOP
label_269090:
    // 0x269090: 0x133db  .word       0x000133DB                   # divu        $a2, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269090u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_269094:
    // 0x269094: 0xfb90  .word       0x0000FB90                   # mfhi        $ra # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269094u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_269098:
    // 0x269098: 0x0  nop
    ctx->pc = 0x269098u;
    // NOP
label_26909c:
    // 0x26909c: 0x0  nop
    ctx->pc = 0x26909cu;
    // NOP
label_2690a0:
    // 0x2690a0: 0x133fb  dsra        $a2, $at, 15
    ctx->pc = 0x2690a0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 1) >> 15);
label_2690a4:
    // 0x2690a4: 0xe600  sll         $gp, $zero, 24
    ctx->pc = 0x2690a4u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_2690a8:
    // 0x2690a8: 0x0  nop
    ctx->pc = 0x2690a8u;
    // NOP
label_2690ac:
    // 0x2690ac: 0x0  nop
    ctx->pc = 0x2690acu;
    // NOP
label_2690b0:
    // 0x2690b0: 0x13418  .word       0x00013418                   # mult        $a2, $zero, $at # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2690b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_2690b4:
    // 0x2690b4: 0xac70  tge         $zero, $zero, 689
    ctx->pc = 0x2690b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2690b8:
    // 0x2690b8: 0x0  nop
    ctx->pc = 0x2690b8u;
    // NOP
label_2690bc:
    // 0x2690bc: 0x0  nop
    ctx->pc = 0x2690bcu;
    // NOP
label_2690c0:
    // 0x2690c0: 0x1342e  .word       0x0001342E                   # dsub        $a2, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2690c0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, r); }
label_2690c4:
    // 0x2690c4: 0x7470  tge         $zero, $zero, 465
    ctx->pc = 0x2690c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2690c8:
    // 0x2690c8: 0x0  nop
    ctx->pc = 0x2690c8u;
    // NOP
label_2690cc:
    // 0x2690cc: 0x0  nop
    ctx->pc = 0x2690ccu;
    // NOP
label_2690d0:
    // 0x2690d0: 0x1343d  .word       0x0001343D                   # INVALID     $zero, $at, 0x343D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2690d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2690D0 raw=0x0001343D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2690d4:
    // 0x2690d4: 0x5080  sll         $t2, $zero, 2
    ctx->pc = 0x2690d4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_2690d8:
    // 0x2690d8: 0x0  nop
    ctx->pc = 0x2690d8u;
    // NOP
label_2690dc:
    // 0x2690dc: 0x0  nop
    ctx->pc = 0x2690dcu;
    // NOP
label_2690e0:
    // 0x2690e0: 0x13448  .word       0x00013448                   # jr          $zero # 00013440 <InstrIdType: CPU_SPECIAL>
label_2690e4:
    if (ctx->pc == 0x2690E4u) {
        ctx->pc = 0x2690E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690E0u;
        // 0x2690e4: 0xa810  mfhi        $s5 (Delay Slot)
        SET_GPR_U64(ctx, 21, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2690E8u;
        goto label_2690e8;
    }
    ctx->pc = 0x2690E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2690E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690E0u;
        // 0x2690e4: 0xa810  mfhi        $s5 (Delay Slot)
        SET_GPR_U64(ctx, 21, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2690E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2690E8u;
label_2690e8:
    // 0x2690e8: 0x0  nop
    ctx->pc = 0x2690e8u;
    // NOP
label_2690ec:
    // 0x2690ec: 0x0  nop
    ctx->pc = 0x2690ecu;
    // NOP
label_2690f0:
    // 0x2690f0: 0x1345e  .word       0x0001345E                   # ddiv        $a2, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2690f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2690F0 raw=0x0001345E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2690f4:
    // 0x2690f4: 0x8770  tge         $zero, $zero, 541
    ctx->pc = 0x2690f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2690f8:
    // 0x2690f8: 0x0  nop
    ctx->pc = 0x2690f8u;
    // NOP
label_2690fc:
    // 0x2690fc: 0x0  nop
    ctx->pc = 0x2690fcu;
    // NOP
label_269100:
    // 0x269100: 0x1346f  .word       0x0001346F                   # dsubu       $a2, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269100u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_269104:
    // 0x269104: 0x9020  add         $s2, $zero, $zero
    ctx->pc = 0x269104u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_269108:
    // 0x269108: 0x0  nop
    ctx->pc = 0x269108u;
    // NOP
label_26910c:
    // 0x26910c: 0x0  nop
    ctx->pc = 0x26910cu;
    // NOP
label_269110:
    // 0x269110: 0x13482  srl         $a2, $at, 18
    ctx->pc = 0x269110u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 1), 18));
label_269114:
    // 0x269114: 0xcad0  .word       0x0000CAD0                   # mfhi        $t9 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269114u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_269118:
    // 0x269118: 0x0  nop
    ctx->pc = 0x269118u;
    // NOP
label_26911c:
    // 0x26911c: 0x0  nop
    ctx->pc = 0x26911cu;
    // NOP
label_269120:
    // 0x269120: 0x1349c  .word       0x0001349C                   # dmult       $zero, $at # 00003480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269120u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x269120 raw=0x0001349C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269124:
    // 0x269124: 0xaac0  sll         $s5, $zero, 11
    ctx->pc = 0x269124u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_269128:
    // 0x269128: 0x0  nop
    ctx->pc = 0x269128u;
    // NOP
label_26912c:
    // 0x26912c: 0x0  nop
    ctx->pc = 0x26912cu;
    // NOP
label_269130:
    // 0x269130: 0x134b2  tlt         $zero, $at, 210
    ctx->pc = 0x269130u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_269134:
    // 0x269134: 0x8290  .word       0x00008290                   # mfhi        $s0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269134u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_269138:
    // 0x269138: 0x0  nop
    ctx->pc = 0x269138u;
    // NOP
label_26913c:
    // 0x26913c: 0x0  nop
    ctx->pc = 0x26913cu;
    // NOP
label_269140:
    // 0x269140: 0x134c3  sra         $a2, $at, 19
    ctx->pc = 0x269140u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 1), 19));
label_269144:
    // 0x269144: 0x73e0  .word       0x000073E0                   # add         $t6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269144u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_269148:
    // 0x269148: 0x0  nop
    ctx->pc = 0x269148u;
    // NOP
label_26914c:
    // 0x26914c: 0x0  nop
    ctx->pc = 0x26914cu;
    // NOP
label_269150:
    // 0x269150: 0x134d2  .word       0x000134D2                   # mflo        $a2 # 000104C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269150u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_269154:
    // 0x269154: 0x9e40  sll         $s3, $zero, 25
    ctx->pc = 0x269154u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_269158:
    // 0x269158: 0x0  nop
    ctx->pc = 0x269158u;
    // NOP
label_26915c:
    // 0x26915c: 0x0  nop
    ctx->pc = 0x26915cu;
    // NOP
label_269160:
    // 0x269160: 0x134e6  .word       0x000134E6                   # xor         $a2, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269160u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_269164:
    // 0x269164: 0x9730  tge         $zero, $zero, 604
    ctx->pc = 0x269164u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269168:
    // 0x269168: 0x0  nop
    ctx->pc = 0x269168u;
    // NOP
label_26916c:
    // 0x26916c: 0x0  nop
    ctx->pc = 0x26916cu;
    // NOP
label_269170:
    // 0x269170: 0x134f9  .word       0x000134F9                   # INVALID     $zero, $at, 0x34F9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269170u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x269170 raw=0x000134F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269174:
    // 0x269174: 0x5cd0  .word       0x00005CD0                   # mfhi        $t3 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269174u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_269178:
    // 0x269178: 0x0  nop
    ctx->pc = 0x269178u;
    // NOP
label_26917c:
    // 0x26917c: 0x0  nop
    ctx->pc = 0x26917cu;
    // NOP
label_269180:
    // 0x269180: 0x13505  .word       0x00013505                   # INVALID     $zero, $at, 0x3505 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269180u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x269180 raw=0x00013505"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269184:
    // 0x269184: 0x7800  sll         $t7, $zero, 0
    ctx->pc = 0x269184u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_269188:
    // 0x269188: 0x0  nop
    ctx->pc = 0x269188u;
    // NOP
label_26918c:
    // 0x26918c: 0x0  nop
    ctx->pc = 0x26918cu;
    // NOP
label_269190:
    // 0x269190: 0x13514  .word       0x00013514                   # dsllv       $a2, $at, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269190u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_269194:
    // 0x269194: 0x6f30  tge         $zero, $zero, 444
    ctx->pc = 0x269194u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269198:
    // 0x269198: 0x0  nop
    ctx->pc = 0x269198u;
    // NOP
label_26919c:
    // 0x26919c: 0x0  nop
    ctx->pc = 0x26919cu;
    // NOP
label_2691a0:
    // 0x2691a0: 0x13522  .word       0x00013522                   # neg         $a2, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2691a0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_2691a4:
    // 0x2691a4: 0xbee0  .word       0x0000BEE0                   # add         $s7, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2691a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_2691a8:
    // 0x2691a8: 0x0  nop
    ctx->pc = 0x2691a8u;
    // NOP
label_2691ac:
    // 0x2691ac: 0x0  nop
    ctx->pc = 0x2691acu;
    // NOP
label_2691b0:
    // 0x2691b0: 0x1353a  dsrl        $a2, $at, 20
    ctx->pc = 0x2691b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) >> 20);
label_2691b4:
    // 0x2691b4: 0x51b0  tge         $zero, $zero, 326
    ctx->pc = 0x2691b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2691b8:
    // 0x2691b8: 0x0  nop
    ctx->pc = 0x2691b8u;
    // NOP
label_2691bc:
    // 0x2691bc: 0x0  nop
    ctx->pc = 0x2691bcu;
    // NOP
label_2691c0:
    // 0x2691c0: 0x13545  .word       0x00013545                   # INVALID     $zero, $at, 0x3545 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2691c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2691C0 raw=0x00013545"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2691c4:
    // 0x2691c4: 0xc190  .word       0x0000C190                   # mfhi        $t8 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2691c4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_2691c8:
    // 0x2691c8: 0x0  nop
    ctx->pc = 0x2691c8u;
    // NOP
label_2691cc:
    // 0x2691cc: 0x0  nop
    ctx->pc = 0x2691ccu;
    // NOP
label_2691d0:
    // 0x2691d0: 0x1355e  .word       0x0001355E                   # ddiv        $a2, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2691d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2691D0 raw=0x0001355E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2691d4:
    // 0x2691d4: 0x9c60  .word       0x00009C60                   # add         $s3, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2691d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_2691d8:
    // 0x2691d8: 0x0  nop
    ctx->pc = 0x2691d8u;
    // NOP
label_2691dc:
    // 0x2691dc: 0x0  nop
    ctx->pc = 0x2691dcu;
    // NOP
label_2691e0:
    // 0x2691e0: 0x13572  tlt         $zero, $at, 213
    ctx->pc = 0x2691e0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2691e4:
    // 0x2691e4: 0x8be0  .word       0x00008BE0                   # add         $s1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2691e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2691e8:
    // 0x2691e8: 0x0  nop
    ctx->pc = 0x2691e8u;
    // NOP
label_2691ec:
    // 0x2691ec: 0x0  nop
    ctx->pc = 0x2691ecu;
    // NOP
label_2691f0:
    // 0x2691f0: 0x13584  .word       0x00013584                   # sllv        $a2, $at, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2691f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2691f4:
    // 0x2691f4: 0xa9f0  tge         $zero, $zero, 679
    ctx->pc = 0x2691f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2691f8:
    // 0x2691f8: 0x0  nop
    ctx->pc = 0x2691f8u;
    // NOP
label_2691fc:
    // 0x2691fc: 0x0  nop
    ctx->pc = 0x2691fcu;
    // NOP
label_269200:
    // 0x269200: 0x1359a  .word       0x0001359A                   # div         $a2, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269200u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_269204:
    // 0x269204: 0x5040  sll         $t2, $zero, 1
    ctx->pc = 0x269204u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_269208:
    // 0x269208: 0x0  nop
    ctx->pc = 0x269208u;
    // NOP
label_26920c:
    // 0x26920c: 0x0  nop
    ctx->pc = 0x26920cu;
    // NOP
label_269210:
    // 0x269210: 0x135a5  .word       0x000135A5                   # or          $a2, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269210u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_269214:
    // 0x269214: 0xcb60  .word       0x0000CB60                   # add         $t9, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269214u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_269218:
    // 0x269218: 0x0  nop
    ctx->pc = 0x269218u;
    // NOP
label_26921c:
    // 0x26921c: 0x0  nop
    ctx->pc = 0x26921cu;
    // NOP
label_269220:
    // 0x269220: 0x135bf  dsra32      $a2, $at, 22
    ctx->pc = 0x269220u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 1) >> (32 + 22));
label_269224:
    // 0x269224: 0xc120  .word       0x0000C120                   # add         $t8, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269224u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_269228:
    // 0x269228: 0x0  nop
    ctx->pc = 0x269228u;
    // NOP
label_26922c:
    // 0x26922c: 0x0  nop
    ctx->pc = 0x26922cu;
    // NOP
label_269230:
    // 0x269230: 0x135d8  .word       0x000135D8                   # mult        $a2, $zero, $at # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x269230u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_269234:
    // 0x269234: 0xee70  tge         $zero, $zero, 953
    ctx->pc = 0x269234u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269238:
    // 0x269238: 0x0  nop
    ctx->pc = 0x269238u;
    // NOP
label_26923c:
    // 0x26923c: 0x0  nop
    ctx->pc = 0x26923cu;
    // NOP
label_269240:
    // 0x269240: 0x135f6  tne         $zero, $at, 215
    ctx->pc = 0x269240u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_269244:
    // 0x269244: 0xaf10  .word       0x0000AF10                   # mfhi        $s5 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269244u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_269248:
    // 0x269248: 0x0  nop
    ctx->pc = 0x269248u;
    // NOP
label_26924c:
    // 0x26924c: 0x0  nop
    ctx->pc = 0x26924cu;
    // NOP
label_269250:
    // 0x269250: 0x1360c  .word       0x0001360C                   # syscall     216 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269250u;
    ctx->pc = 0x269254u;
runtime->handleSyscall(rdram, ctx, 0x4D8u);
label_269254:
    // 0x269254: 0xa810  mfhi        $s5
    ctx->pc = 0x269254u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_269258:
    // 0x269258: 0x0  nop
    ctx->pc = 0x269258u;
    // NOP
label_26925c:
    // 0x26925c: 0x0  nop
    ctx->pc = 0x26925cu;
    // NOP
label_269260:
    // 0x269260: 0x13622  .word       0x00013622                   # neg         $a2, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269260u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_269264:
    // 0x269264: 0x74e0  .word       0x000074E0                   # add         $t6, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269264u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_269268:
    // 0x269268: 0x0  nop
    ctx->pc = 0x269268u;
    // NOP
label_26926c:
    // 0x26926c: 0x0  nop
    ctx->pc = 0x26926cu;
    // NOP
label_269270:
    // 0x269270: 0x13631  tgeu        $zero, $at, 216
    ctx->pc = 0x269270u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_269274:
    // 0x269274: 0xd9a0  .word       0x0000D9A0                   # add         $k1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269274u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_269278:
    // 0x269278: 0x0  nop
    ctx->pc = 0x269278u;
    // NOP
label_26927c:
    // 0x26927c: 0x0  nop
    ctx->pc = 0x26927cu;
    // NOP
label_269280:
    // 0x269280: 0x1364d  break       1, 217
    ctx->pc = 0x269280u;
    runtime->handleBreak(rdram, ctx);
label_269284:
    // 0x269284: 0x61c0  sll         $t4, $zero, 7
    ctx->pc = 0x269284u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_269288:
    // 0x269288: 0x0  nop
    ctx->pc = 0x269288u;
    // NOP
label_26928c:
    // 0x26928c: 0x0  nop
    ctx->pc = 0x26928cu;
    // NOP
label_269290:
    // 0x269290: 0x1365a  .word       0x0001365A                   # div         $a2, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269290u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_269294:
    // 0x269294: 0x8410  .word       0x00008410                   # mfhi        $s0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269294u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_269298:
    // 0x269298: 0x0  nop
    ctx->pc = 0x269298u;
    // NOP
label_26929c:
    // 0x26929c: 0x0  nop
    ctx->pc = 0x26929cu;
    // NOP
label_2692a0:
    // 0x2692a0: 0x1366b  .word       0x0001366B                   # sltu        $a2, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2692a0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_2692a4:
    // 0x2692a4: 0x7ba0  .word       0x00007BA0                   # add         $t7, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2692a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2692a8:
    // 0x2692a8: 0x0  nop
    ctx->pc = 0x2692a8u;
    // NOP
label_2692ac:
    // 0x2692ac: 0x0  nop
    ctx->pc = 0x2692acu;
    // NOP
label_2692b0:
    // 0x2692b0: 0x1367b  dsra        $a2, $at, 25
    ctx->pc = 0x2692b0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 1) >> 25);
label_2692b4:
    // 0x2692b4: 0x8da0  .word       0x00008DA0                   # add         $s1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2692b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2692b8:
    // 0x2692b8: 0x0  nop
    ctx->pc = 0x2692b8u;
    // NOP
label_2692bc:
    // 0x2692bc: 0x0  nop
    ctx->pc = 0x2692bcu;
    // NOP
label_2692c0:
    // 0x2692c0: 0x1368d  break       1, 218
    ctx->pc = 0x2692c0u;
    runtime->handleBreak(rdram, ctx);
label_2692c4:
    // 0x2692c4: 0x9dc0  sll         $s3, $zero, 23
    ctx->pc = 0x2692c4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_2692c8:
    // 0x2692c8: 0x0  nop
    ctx->pc = 0x2692c8u;
    // NOP
label_2692cc:
    // 0x2692cc: 0x0  nop
    ctx->pc = 0x2692ccu;
    // NOP
label_2692d0:
    // 0x2692d0: 0x136a1  .word       0x000136A1                   # addu        $a2, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2692d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2692d4:
    // 0x2692d4: 0xfe30  tge         $zero, $zero, 1016
    ctx->pc = 0x2692d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2692d8:
    // 0x2692d8: 0x0  nop
    ctx->pc = 0x2692d8u;
    // NOP
label_2692dc:
    // 0x2692dc: 0x0  nop
    ctx->pc = 0x2692dcu;
    // NOP
label_2692e0:
    // 0x2692e0: 0x136c1  .word       0x000136C1                   # INVALID     $zero, $at, 0x36C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2692e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2692E0 raw=0x000136C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2692e4:
    // 0x2692e4: 0x7150  .word       0x00007150                   # mfhi        $t6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2692e4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2692e8:
    // 0x2692e8: 0x0  nop
    ctx->pc = 0x2692e8u;
    // NOP
label_2692ec:
    // 0x2692ec: 0x0  nop
    ctx->pc = 0x2692ecu;
    // NOP
label_2692f0:
    // 0x2692f0: 0x136d0  .word       0x000136D0                   # mfhi        $a2 # 000106C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2692f0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_2692f4:
    // 0x2692f4: 0x9b00  sll         $s3, $zero, 12
    ctx->pc = 0x2692f4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_2692f8:
    // 0x2692f8: 0x0  nop
    ctx->pc = 0x2692f8u;
    // NOP
label_2692fc:
    // 0x2692fc: 0x0  nop
    ctx->pc = 0x2692fcu;
    // NOP
label_269300:
    // 0x269300: 0x136e4  .word       0x000136E4                   # and         $a2, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269300u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_269304:
    // 0x269304: 0x7330  tge         $zero, $zero, 460
    ctx->pc = 0x269304u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269308:
    // 0x269308: 0x0  nop
    ctx->pc = 0x269308u;
    // NOP
label_26930c:
    // 0x26930c: 0x0  nop
    ctx->pc = 0x26930cu;
    // NOP
label_269310:
    // 0x269310: 0x136f3  tltu        $zero, $at, 219
    ctx->pc = 0x269310u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_269314:
    // 0x269314: 0x8fa0  .word       0x00008FA0                   # add         $s1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269314u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_269318:
    // 0x269318: 0x0  nop
    ctx->pc = 0x269318u;
    // NOP
label_26931c:
    // 0x26931c: 0x0  nop
    ctx->pc = 0x26931cu;
    // NOP
label_269320:
    // 0x269320: 0x13705  .word       0x00013705                   # INVALID     $zero, $at, 0x3705 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269320u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x269320 raw=0x00013705"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269324:
    // 0x269324: 0x9970  tge         $zero, $zero, 613
    ctx->pc = 0x269324u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269328:
    // 0x269328: 0x0  nop
    ctx->pc = 0x269328u;
    // NOP
label_26932c:
    // 0x26932c: 0x0  nop
    ctx->pc = 0x26932cu;
    // NOP
label_269330:
    // 0x269330: 0x13719  .word       0x00013719                   # multu       $zero, $at # 00003700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269330u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_269334:
    // 0x269334: 0xa2e0  .word       0x0000A2E0                   # add         $s4, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269334u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_269338:
    // 0x269338: 0x0  nop
    ctx->pc = 0x269338u;
    // NOP
label_26933c:
    // 0x26933c: 0x0  nop
    ctx->pc = 0x26933cu;
    // NOP
label_269340:
    // 0x269340: 0x1372e  .word       0x0001372E                   # dsub        $a2, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269340u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, r); }
label_269344:
    // 0x269344: 0x7d40  sll         $t7, $zero, 21
    ctx->pc = 0x269344u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_269348:
    // 0x269348: 0x0  nop
    ctx->pc = 0x269348u;
    // NOP
label_26934c:
    // 0x26934c: 0x0  nop
    ctx->pc = 0x26934cu;
    // NOP
label_269350:
    // 0x269350: 0x1373e  dsrl32      $a2, $at, 28
    ctx->pc = 0x269350u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) >> (32 + 28));
label_269354:
    // 0x269354: 0xc250  .word       0x0000C250                   # mfhi        $t8 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269354u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_269358:
    // 0x269358: 0x0  nop
    ctx->pc = 0x269358u;
    // NOP
label_26935c:
    // 0x26935c: 0x0  nop
    ctx->pc = 0x26935cu;
    // NOP
label_269360:
    // 0x269360: 0x13757  .word       0x00013757                   # dsrav       $a2, $at, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269360u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_269364:
    // 0x269364: 0xa440  sll         $s4, $zero, 17
    ctx->pc = 0x269364u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_269368:
    // 0x269368: 0x0  nop
    ctx->pc = 0x269368u;
    // NOP
label_26936c:
    // 0x26936c: 0x0  nop
    ctx->pc = 0x26936cu;
    // NOP
label_269370:
    // 0x269370: 0x1376c  .word       0x0001376C                   # dadd        $a2, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269370u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, r); }
label_269374:
    // 0x269374: 0x5470  tge         $zero, $zero, 337
    ctx->pc = 0x269374u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269378:
    // 0x269378: 0x0  nop
    ctx->pc = 0x269378u;
    // NOP
label_26937c:
    // 0x26937c: 0x0  nop
    ctx->pc = 0x26937cu;
    // NOP
label_269380:
    // 0x269380: 0x13777  .word       0x00013777                   # INVALID     $zero, $at, 0x3777 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269380u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x269380 raw=0x00013777"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269384:
    // 0x269384: 0xa3a0  .word       0x0000A3A0                   # add         $s4, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269384u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_269388:
    // 0x269388: 0x0  nop
    ctx->pc = 0x269388u;
    // NOP
label_26938c:
    // 0x26938c: 0x0  nop
    ctx->pc = 0x26938cu;
    // NOP
label_269390:
    // 0x269390: 0x1378c  .word       0x0001378C                   # syscall     222 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269390u;
    ctx->pc = 0x269394u;
runtime->handleSyscall(rdram, ctx, 0x4DEu);
label_269394:
    // 0x269394: 0x8030  tge         $zero, $zero, 512
    ctx->pc = 0x269394u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269398:
    // 0x269398: 0x0  nop
    ctx->pc = 0x269398u;
    // NOP
label_26939c:
    // 0x26939c: 0x0  nop
    ctx->pc = 0x26939cu;
    // NOP
label_2693a0:
    // 0x2693a0: 0x1379d  .word       0x0001379D                   # dmultu      $zero, $at # 00003780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2693a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2693A0 raw=0x0001379D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2693a4:
    // 0x2693a4: 0xd640  sll         $k0, $zero, 25
    ctx->pc = 0x2693a4u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_2693a8:
    // 0x2693a8: 0x0  nop
    ctx->pc = 0x2693a8u;
    // NOP
label_2693ac:
    // 0x2693ac: 0x0  nop
    ctx->pc = 0x2693acu;
    // NOP
label_2693b0:
    // 0x2693b0: 0x137b8  dsll        $a2, $at, 30
    ctx->pc = 0x2693b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) << 30);
label_2693b4:
    // 0x2693b4: 0xb490  .word       0x0000B490                   # mfhi        $s6 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2693b4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_2693b8:
    // 0x2693b8: 0x0  nop
    ctx->pc = 0x2693b8u;
    // NOP
label_2693bc:
    // 0x2693bc: 0x0  nop
    ctx->pc = 0x2693bcu;
    // NOP
label_2693c0:
    // 0x2693c0: 0x137cf  .word       0x000137CF                   # sync.p # 00013000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2693c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2693c4:
    // 0x2693c4: 0x8000  sll         $s0, $zero, 0
    ctx->pc = 0x2693c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2693c8:
    // 0x2693c8: 0x0  nop
    ctx->pc = 0x2693c8u;
    // NOP
label_2693cc:
    // 0x2693cc: 0x0  nop
    ctx->pc = 0x2693ccu;
    // NOP
label_2693d0:
    // 0x2693d0: 0x137df  .word       0x000137DF                   # ddivu       $a2, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2693d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2693D0 raw=0x000137DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2693d4:
    // 0x2693d4: 0xb0c0  sll         $s6, $zero, 3
    ctx->pc = 0x2693d4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_2693d8:
    // 0x2693d8: 0x0  nop
    ctx->pc = 0x2693d8u;
    // NOP
label_2693dc:
    // 0x2693dc: 0x0  nop
    ctx->pc = 0x2693dcu;
    // NOP
label_2693e0:
    // 0x2693e0: 0x137f6  tne         $zero, $at, 223
    ctx->pc = 0x2693e0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2693e4:
    // 0x2693e4: 0xe0f0  tge         $zero, $zero, 899
    ctx->pc = 0x2693e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2693e8:
    // 0x2693e8: 0x0  nop
    ctx->pc = 0x2693e8u;
    // NOP
label_2693ec:
    // 0x2693ec: 0x0  nop
    ctx->pc = 0x2693ecu;
    // NOP
label_2693f0:
    // 0x2693f0: 0x13813  .word       0x00013813                   # mtlo        $zero # 00013800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2693f0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2693f4:
    // 0x2693f4: 0xd380  sll         $k0, $zero, 14
    ctx->pc = 0x2693f4u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_2693f8:
    // 0x2693f8: 0x0  nop
    ctx->pc = 0x2693f8u;
    // NOP
label_2693fc:
    // 0x2693fc: 0x0  nop
    ctx->pc = 0x2693fcu;
    // NOP
label_269400:
    // 0x269400: 0x1382e  dsub        $a3, $zero, $at
    ctx->pc = 0x269400u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, r); }
label_269404:
    // 0x269404: 0x8e80  sll         $s1, $zero, 26
    ctx->pc = 0x269404u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_269408:
    // 0x269408: 0x0  nop
    ctx->pc = 0x269408u;
    // NOP
label_26940c:
    // 0x26940c: 0x0  nop
    ctx->pc = 0x26940cu;
    // NOP
label_269410:
    // 0x269410: 0x13840  sll         $a3, $at, 1
    ctx->pc = 0x269410u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_269414:
    // 0x269414: 0xb5d0  .word       0x0000B5D0                   # mfhi        $s6 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269414u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_269418:
    // 0x269418: 0x0  nop
    ctx->pc = 0x269418u;
    // NOP
label_26941c:
    // 0x26941c: 0x0  nop
    ctx->pc = 0x26941cu;
    // NOP
label_269420:
    // 0x269420: 0x13857  .word       0x00013857                   # dsrav       $a3, $at, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269420u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_269424:
    // 0x269424: 0x9990  .word       0x00009990                   # mfhi        $s3 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269424u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_269428:
    // 0x269428: 0x0  nop
    ctx->pc = 0x269428u;
    // NOP
label_26942c:
    // 0x26942c: 0x0  nop
    ctx->pc = 0x26942cu;
    // NOP
label_269430:
    // 0x269430: 0x1386b  .word       0x0001386B                   # sltu        $a3, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269430u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_269434:
    // 0x269434: 0x14820  add         $t1, $zero, $at
    ctx->pc = 0x269434u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_269438:
    // 0x269438: 0x0  nop
    ctx->pc = 0x269438u;
    // NOP
label_26943c:
    // 0x26943c: 0x0  nop
    ctx->pc = 0x26943cu;
    // NOP
label_269440:
    // 0x269440: 0x13895  .word       0x00013895                   # INVALID     $zero, $at, 0x3895 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269440u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x269440 raw=0x00013895"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269444:
    // 0x269444: 0x7130  tge         $zero, $zero, 452
    ctx->pc = 0x269444u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269448:
    // 0x269448: 0x0  nop
    ctx->pc = 0x269448u;
    // NOP
label_26944c:
    // 0x26944c: 0x0  nop
    ctx->pc = 0x26944cu;
    // NOP
label_269450:
    // 0x269450: 0x138a4  .word       0x000138A4                   # and         $a3, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269450u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_269454:
    // 0x269454: 0x66e0  .word       0x000066E0                   # add         $t4, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269454u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_269458:
    // 0x269458: 0x0  nop
    ctx->pc = 0x269458u;
    // NOP
label_26945c:
    // 0x26945c: 0x0  nop
    ctx->pc = 0x26945cu;
    // NOP
label_269460:
    // 0x269460: 0x138b1  tgeu        $zero, $at, 226
    ctx->pc = 0x269460u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_269464:
    // 0x269464: 0x8660  .word       0x00008660                   # add         $s0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269464u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_269468:
    // 0x269468: 0x0  nop
    ctx->pc = 0x269468u;
    // NOP
label_26946c:
    // 0x26946c: 0x0  nop
    ctx->pc = 0x26946cu;
    // NOP
label_269470:
    // 0x269470: 0x138c2  srl         $a3, $at, 3
    ctx->pc = 0x269470u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 1), 3));
label_269474:
    // 0x269474: 0x7d00  sll         $t7, $zero, 20
    ctx->pc = 0x269474u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_269478:
    // 0x269478: 0x0  nop
    ctx->pc = 0x269478u;
    // NOP
label_26947c:
    // 0x26947c: 0x0  nop
    ctx->pc = 0x26947cu;
    // NOP
label_269480:
    // 0x269480: 0x138d2  .word       0x000138D2                   # mflo        $a3 # 000100C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269480u;
    SET_GPR_U64(ctx, 7, ctx->lo);
label_269484:
    // 0x269484: 0xcef0  tge         $zero, $zero, 827
    ctx->pc = 0x269484u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269488:
    // 0x269488: 0x0  nop
    ctx->pc = 0x269488u;
    // NOP
label_26948c:
    // 0x26948c: 0x0  nop
    ctx->pc = 0x26948cu;
    // NOP
label_269490:
    // 0x269490: 0x138ec  .word       0x000138EC                   # dadd        $a3, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269490u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, r); }
label_269494:
    // 0x269494: 0x9d80  sll         $s3, $zero, 22
    ctx->pc = 0x269494u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_269498:
    // 0x269498: 0x0  nop
    ctx->pc = 0x269498u;
    // NOP
label_26949c:
    // 0x26949c: 0x0  nop
    ctx->pc = 0x26949cu;
    // NOP
label_2694a0:
    // 0x2694a0: 0x13900  sll         $a3, $at, 4
    ctx->pc = 0x2694a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 4));
label_2694a4:
    // 0x2694a4: 0x8890  .word       0x00008890                   # mfhi        $s1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2694a4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2694a8:
    // 0x2694a8: 0x0  nop
    ctx->pc = 0x2694a8u;
    // NOP
label_2694ac:
    // 0x2694ac: 0x0  nop
    ctx->pc = 0x2694acu;
    // NOP
label_2694b0:
    // 0x2694b0: 0x13912  .word       0x00013912                   # mflo        $a3 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2694b0u;
    SET_GPR_U64(ctx, 7, ctx->lo);
label_2694b4:
    // 0x2694b4: 0x8d70  tge         $zero, $zero, 565
    ctx->pc = 0x2694b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2694b8:
    // 0x2694b8: 0x0  nop
    ctx->pc = 0x2694b8u;
    // NOP
label_2694bc:
    // 0x2694bc: 0x0  nop
    ctx->pc = 0x2694bcu;
    // NOP
label_2694c0:
    // 0x2694c0: 0x13924  .word       0x00013924                   # and         $a3, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2694c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_2694c4:
    // 0x2694c4: 0x6360  .word       0x00006360                   # add         $t4, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2694c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2694c8:
    // 0x2694c8: 0x0  nop
    ctx->pc = 0x2694c8u;
    // NOP
label_2694cc:
    // 0x2694cc: 0x0  nop
    ctx->pc = 0x2694ccu;
    // NOP
label_2694d0:
    // 0x2694d0: 0x13931  tgeu        $zero, $at, 228
    ctx->pc = 0x2694d0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2694d4:
    // 0x2694d4: 0xaf30  tge         $zero, $zero, 700
    ctx->pc = 0x2694d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2694d8:
    // 0x2694d8: 0x0  nop
    ctx->pc = 0x2694d8u;
    // NOP
label_2694dc:
    // 0x2694dc: 0x0  nop
    ctx->pc = 0x2694dcu;
    // NOP
label_2694e0:
    // 0x2694e0: 0x13947  .word       0x00013947                   # srav        $a3, $at, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2694e0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2694e4:
    // 0x2694e4: 0xb170  tge         $zero, $zero, 709
    ctx->pc = 0x2694e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2694e8:
    // 0x2694e8: 0x0  nop
    ctx->pc = 0x2694e8u;
    // NOP
label_2694ec:
    // 0x2694ec: 0x0  nop
    ctx->pc = 0x2694ecu;
    // NOP
label_2694f0:
    // 0x2694f0: 0x1395e  .word       0x0001395E                   # ddiv        $a3, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2694f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2694F0 raw=0x0001395E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2694f4:
    // 0x2694f4: 0x8330  tge         $zero, $zero, 524
    ctx->pc = 0x2694f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2694f8:
    // 0x2694f8: 0x0  nop
    ctx->pc = 0x2694f8u;
    // NOP
label_2694fc:
    // 0x2694fc: 0x0  nop
    ctx->pc = 0x2694fcu;
    // NOP
label_269500:
    // 0x269500: 0x1396f  .word       0x0001396F                   # dsubu       $a3, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269500u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_269504:
    // 0x269504: 0x6df0  tge         $zero, $zero, 439
    ctx->pc = 0x269504u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269508:
    // 0x269508: 0x0  nop
    ctx->pc = 0x269508u;
    // NOP
label_26950c:
    // 0x26950c: 0x0  nop
    ctx->pc = 0x26950cu;
    // NOP
label_269510:
    // 0x269510: 0x1397d  .word       0x0001397D                   # INVALID     $zero, $at, 0x397D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269510u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x269510 raw=0x0001397D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269514:
    // 0x269514: 0x3da0  .word       0x00003DA0                   # add         $a3, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269514u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_269518:
    // 0x269518: 0x0  nop
    ctx->pc = 0x269518u;
    // NOP
label_26951c:
    // 0x26951c: 0x0  nop
    ctx->pc = 0x26951cu;
    // NOP
label_269520:
    // 0x269520: 0x13985  .word       0x00013985                   # INVALID     $zero, $at, 0x3985 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269520u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x269520 raw=0x00013985"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269524:
    // 0x269524: 0xaa60  .word       0x0000AA60                   # add         $s5, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269524u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_269528:
    // 0x269528: 0x0  nop
    ctx->pc = 0x269528u;
    // NOP
label_26952c:
    // 0x26952c: 0x0  nop
    ctx->pc = 0x26952cu;
    // NOP
label_269530:
    // 0x269530: 0x1399b  .word       0x0001399B                   # divu        $a3, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269530u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_269534:
    // 0x269534: 0x9880  sll         $s3, $zero, 2
    ctx->pc = 0x269534u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_269538:
    // 0x269538: 0x0  nop
    ctx->pc = 0x269538u;
    // NOP
label_26953c:
    // 0x26953c: 0x0  nop
    ctx->pc = 0x26953cu;
    // NOP
label_269540:
    // 0x269540: 0x139af  .word       0x000139AF                   # dsubu       $a3, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269540u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_269544:
    // 0x269544: 0x7c70  tge         $zero, $zero, 497
    ctx->pc = 0x269544u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269548:
    // 0x269548: 0x0  nop
    ctx->pc = 0x269548u;
    // NOP
label_26954c:
    // 0x26954c: 0x0  nop
    ctx->pc = 0x26954cu;
    // NOP
label_269550:
    // 0x269550: 0x139bf  dsra32      $a3, $at, 6
    ctx->pc = 0x269550u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 1) >> (32 + 6));
label_269554:
    // 0x269554: 0xd5a0  .word       0x0000D5A0                   # add         $k0, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269554u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
    ctx->pc = 0x269558u;
    return;
}

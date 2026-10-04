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


void FUN_0019b6a8_part340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x240f18u: goto label_240f18;
        case 0x240f1cu: goto label_240f1c;
        case 0x240f20u: goto label_240f20;
        case 0x240f24u: goto label_240f24;
        case 0x240f28u: goto label_240f28;
        case 0x240f2cu: goto label_240f2c;
        case 0x240f30u: goto label_240f30;
        case 0x240f34u: goto label_240f34;
        case 0x240f38u: goto label_240f38;
        case 0x240f3cu: goto label_240f3c;
        case 0x240f40u: goto label_240f40;
        case 0x240f44u: goto label_240f44;
        case 0x240f48u: goto label_240f48;
        case 0x240f4cu: goto label_240f4c;
        case 0x240f50u: goto label_240f50;
        case 0x240f54u: goto label_240f54;
        case 0x240f58u: goto label_240f58;
        case 0x240f5cu: goto label_240f5c;
        case 0x240f60u: goto label_240f60;
        case 0x240f64u: goto label_240f64;
        case 0x240f68u: goto label_240f68;
        case 0x240f6cu: goto label_240f6c;
        case 0x240f70u: goto label_240f70;
        case 0x240f74u: goto label_240f74;
        case 0x240f78u: goto label_240f78;
        case 0x240f7cu: goto label_240f7c;
        case 0x240f80u: goto label_240f80;
        case 0x240f84u: goto label_240f84;
        case 0x240f88u: goto label_240f88;
        case 0x240f8cu: goto label_240f8c;
        case 0x240f90u: goto label_240f90;
        case 0x240f94u: goto label_240f94;
        case 0x240f98u: goto label_240f98;
        case 0x240f9cu: goto label_240f9c;
        case 0x240fa0u: goto label_240fa0;
        case 0x240fa4u: goto label_240fa4;
        case 0x240fa8u: goto label_240fa8;
        case 0x240facu: goto label_240fac;
        case 0x240fb0u: goto label_240fb0;
        case 0x240fb4u: goto label_240fb4;
        case 0x240fb8u: goto label_240fb8;
        case 0x240fbcu: goto label_240fbc;
        case 0x240fc0u: goto label_240fc0;
        case 0x240fc4u: goto label_240fc4;
        case 0x240fc8u: goto label_240fc8;
        case 0x240fccu: goto label_240fcc;
        case 0x240fd0u: goto label_240fd0;
        case 0x240fd4u: goto label_240fd4;
        case 0x240fd8u: goto label_240fd8;
        case 0x240fdcu: goto label_240fdc;
        case 0x240fe0u: goto label_240fe0;
        case 0x240fe4u: goto label_240fe4;
        case 0x240fe8u: goto label_240fe8;
        case 0x240fecu: goto label_240fec;
        case 0x240ff0u: goto label_240ff0;
        case 0x240ff4u: goto label_240ff4;
        case 0x240ff8u: goto label_240ff8;
        case 0x240ffcu: goto label_240ffc;
        case 0x241000u: goto label_241000;
        case 0x241004u: goto label_241004;
        case 0x241008u: goto label_241008;
        case 0x24100cu: goto label_24100c;
        case 0x241010u: goto label_241010;
        case 0x241014u: goto label_241014;
        case 0x241018u: goto label_241018;
        case 0x24101cu: goto label_24101c;
        case 0x241020u: goto label_241020;
        case 0x241024u: goto label_241024;
        case 0x241028u: goto label_241028;
        case 0x24102cu: goto label_24102c;
        case 0x241030u: goto label_241030;
        case 0x241034u: goto label_241034;
        case 0x241038u: goto label_241038;
        case 0x24103cu: goto label_24103c;
        case 0x241040u: goto label_241040;
        case 0x241044u: goto label_241044;
        case 0x241048u: goto label_241048;
        case 0x24104cu: goto label_24104c;
        case 0x241050u: goto label_241050;
        case 0x241054u: goto label_241054;
        case 0x241058u: goto label_241058;
        case 0x24105cu: goto label_24105c;
        case 0x241060u: goto label_241060;
        case 0x241064u: goto label_241064;
        case 0x241068u: goto label_241068;
        case 0x24106cu: goto label_24106c;
        case 0x241070u: goto label_241070;
        case 0x241074u: goto label_241074;
        case 0x241078u: goto label_241078;
        case 0x24107cu: goto label_24107c;
        case 0x241080u: goto label_241080;
        case 0x241084u: goto label_241084;
        case 0x241088u: goto label_241088;
        case 0x24108cu: goto label_24108c;
        case 0x241090u: goto label_241090;
        case 0x241094u: goto label_241094;
        case 0x241098u: goto label_241098;
        case 0x24109cu: goto label_24109c;
        case 0x2410a0u: goto label_2410a0;
        case 0x2410a4u: goto label_2410a4;
        case 0x2410a8u: goto label_2410a8;
        case 0x2410acu: goto label_2410ac;
        case 0x2410b0u: goto label_2410b0;
        case 0x2410b4u: goto label_2410b4;
        case 0x2410b8u: goto label_2410b8;
        case 0x2410bcu: goto label_2410bc;
        case 0x2410c0u: goto label_2410c0;
        case 0x2410c4u: goto label_2410c4;
        case 0x2410c8u: goto label_2410c8;
        case 0x2410ccu: goto label_2410cc;
        case 0x2410d0u: goto label_2410d0;
        case 0x2410d4u: goto label_2410d4;
        case 0x2410d8u: goto label_2410d8;
        case 0x2410dcu: goto label_2410dc;
        case 0x2410e0u: goto label_2410e0;
        case 0x2410e4u: goto label_2410e4;
        case 0x2410e8u: goto label_2410e8;
        case 0x2410ecu: goto label_2410ec;
        case 0x2410f0u: goto label_2410f0;
        case 0x2410f4u: goto label_2410f4;
        case 0x2410f8u: goto label_2410f8;
        case 0x2410fcu: goto label_2410fc;
        case 0x241100u: goto label_241100;
        case 0x241104u: goto label_241104;
        case 0x241108u: goto label_241108;
        case 0x24110cu: goto label_24110c;
        case 0x241110u: goto label_241110;
        case 0x241114u: goto label_241114;
        case 0x241118u: goto label_241118;
        case 0x24111cu: goto label_24111c;
        case 0x241120u: goto label_241120;
        case 0x241124u: goto label_241124;
        case 0x241128u: goto label_241128;
        case 0x24112cu: goto label_24112c;
        case 0x241130u: goto label_241130;
        case 0x241134u: goto label_241134;
        case 0x241138u: goto label_241138;
        case 0x24113cu: goto label_24113c;
        case 0x241140u: goto label_241140;
        case 0x241144u: goto label_241144;
        case 0x241148u: goto label_241148;
        case 0x24114cu: goto label_24114c;
        case 0x241150u: goto label_241150;
        case 0x241154u: goto label_241154;
        case 0x241158u: goto label_241158;
        case 0x24115cu: goto label_24115c;
        case 0x241160u: goto label_241160;
        case 0x241164u: goto label_241164;
        case 0x241168u: goto label_241168;
        case 0x24116cu: goto label_24116c;
        case 0x241170u: goto label_241170;
        case 0x241174u: goto label_241174;
        case 0x241178u: goto label_241178;
        case 0x24117cu: goto label_24117c;
        case 0x241180u: goto label_241180;
        case 0x241184u: goto label_241184;
        case 0x241188u: goto label_241188;
        case 0x24118cu: goto label_24118c;
        case 0x241190u: goto label_241190;
        case 0x241194u: goto label_241194;
        case 0x241198u: goto label_241198;
        case 0x24119cu: goto label_24119c;
        case 0x2411a0u: goto label_2411a0;
        case 0x2411a4u: goto label_2411a4;
        case 0x2411a8u: goto label_2411a8;
        case 0x2411acu: goto label_2411ac;
        case 0x2411b0u: goto label_2411b0;
        case 0x2411b4u: goto label_2411b4;
        case 0x2411b8u: goto label_2411b8;
        case 0x2411bcu: goto label_2411bc;
        case 0x2411c0u: goto label_2411c0;
        case 0x2411c4u: goto label_2411c4;
        case 0x2411c8u: goto label_2411c8;
        case 0x2411ccu: goto label_2411cc;
        case 0x2411d0u: goto label_2411d0;
        case 0x2411d4u: goto label_2411d4;
        case 0x2411d8u: goto label_2411d8;
        case 0x2411dcu: goto label_2411dc;
        case 0x2411e0u: goto label_2411e0;
        case 0x2411e4u: goto label_2411e4;
        case 0x2411e8u: goto label_2411e8;
        case 0x2411ecu: goto label_2411ec;
        case 0x2411f0u: goto label_2411f0;
        case 0x2411f4u: goto label_2411f4;
        case 0x2411f8u: goto label_2411f8;
        case 0x2411fcu: goto label_2411fc;
        case 0x241200u: goto label_241200;
        case 0x241204u: goto label_241204;
        case 0x241208u: goto label_241208;
        case 0x24120cu: goto label_24120c;
        case 0x241210u: goto label_241210;
        case 0x241214u: goto label_241214;
        case 0x241218u: goto label_241218;
        case 0x24121cu: goto label_24121c;
        case 0x241220u: goto label_241220;
        case 0x241224u: goto label_241224;
        case 0x241228u: goto label_241228;
        case 0x24122cu: goto label_24122c;
        case 0x241230u: goto label_241230;
        case 0x241234u: goto label_241234;
        case 0x241238u: goto label_241238;
        case 0x24123cu: goto label_24123c;
        case 0x241240u: goto label_241240;
        case 0x241244u: goto label_241244;
        case 0x241248u: goto label_241248;
        case 0x24124cu: goto label_24124c;
        case 0x241250u: goto label_241250;
        case 0x241254u: goto label_241254;
        case 0x241258u: goto label_241258;
        case 0x24125cu: goto label_24125c;
        case 0x241260u: goto label_241260;
        case 0x241264u: goto label_241264;
        case 0x241268u: goto label_241268;
        case 0x24126cu: goto label_24126c;
        case 0x241270u: goto label_241270;
        case 0x241274u: goto label_241274;
        case 0x241278u: goto label_241278;
        case 0x24127cu: goto label_24127c;
        case 0x241280u: goto label_241280;
        case 0x241284u: goto label_241284;
        case 0x241288u: goto label_241288;
        case 0x24128cu: goto label_24128c;
        case 0x241290u: goto label_241290;
        case 0x241294u: goto label_241294;
        case 0x241298u: goto label_241298;
        case 0x24129cu: goto label_24129c;
        case 0x2412a0u: goto label_2412a0;
        case 0x2412a4u: goto label_2412a4;
        case 0x2412a8u: goto label_2412a8;
        case 0x2412acu: goto label_2412ac;
        case 0x2412b0u: goto label_2412b0;
        case 0x2412b4u: goto label_2412b4;
        case 0x2412b8u: goto label_2412b8;
        case 0x2412bcu: goto label_2412bc;
        case 0x2412c0u: goto label_2412c0;
        case 0x2412c4u: goto label_2412c4;
        case 0x2412c8u: goto label_2412c8;
        case 0x2412ccu: goto label_2412cc;
        case 0x2412d0u: goto label_2412d0;
        case 0x2412d4u: goto label_2412d4;
        case 0x2412d8u: goto label_2412d8;
        case 0x2412dcu: goto label_2412dc;
        case 0x2412e0u: goto label_2412e0;
        case 0x2412e4u: goto label_2412e4;
        case 0x2412e8u: goto label_2412e8;
        case 0x2412ecu: goto label_2412ec;
        case 0x2412f0u: goto label_2412f0;
        case 0x2412f4u: goto label_2412f4;
        case 0x2412f8u: goto label_2412f8;
        case 0x2412fcu: goto label_2412fc;
        case 0x241300u: goto label_241300;
        case 0x241304u: goto label_241304;
        case 0x241308u: goto label_241308;
        case 0x24130cu: goto label_24130c;
        case 0x241310u: goto label_241310;
        case 0x241314u: goto label_241314;
        case 0x241318u: goto label_241318;
        case 0x24131cu: goto label_24131c;
        case 0x241320u: goto label_241320;
        case 0x241324u: goto label_241324;
        case 0x241328u: goto label_241328;
        case 0x24132cu: goto label_24132c;
        case 0x241330u: goto label_241330;
        case 0x241334u: goto label_241334;
        case 0x241338u: goto label_241338;
        case 0x24133cu: goto label_24133c;
        case 0x241340u: goto label_241340;
        case 0x241344u: goto label_241344;
        case 0x241348u: goto label_241348;
        case 0x24134cu: goto label_24134c;
        case 0x241350u: goto label_241350;
        case 0x241354u: goto label_241354;
        case 0x241358u: goto label_241358;
        case 0x24135cu: goto label_24135c;
        case 0x241360u: goto label_241360;
        case 0x241364u: goto label_241364;
        case 0x241368u: goto label_241368;
        case 0x24136cu: goto label_24136c;
        case 0x241370u: goto label_241370;
        case 0x241374u: goto label_241374;
        case 0x241378u: goto label_241378;
        case 0x24137cu: goto label_24137c;
        case 0x241380u: goto label_241380;
        case 0x241384u: goto label_241384;
        case 0x241388u: goto label_241388;
        case 0x24138cu: goto label_24138c;
        case 0x241390u: goto label_241390;
        case 0x241394u: goto label_241394;
        case 0x241398u: goto label_241398;
        case 0x24139cu: goto label_24139c;
        case 0x2413a0u: goto label_2413a0;
        case 0x2413a4u: goto label_2413a4;
        case 0x2413a8u: goto label_2413a8;
        case 0x2413acu: goto label_2413ac;
        case 0x2413b0u: goto label_2413b0;
        case 0x2413b4u: goto label_2413b4;
        case 0x2413b8u: goto label_2413b8;
        case 0x2413bcu: goto label_2413bc;
        case 0x2413c0u: goto label_2413c0;
        case 0x2413c4u: goto label_2413c4;
        case 0x2413c8u: goto label_2413c8;
        case 0x2413ccu: goto label_2413cc;
        case 0x2413d0u: goto label_2413d0;
        case 0x2413d4u: goto label_2413d4;
        case 0x2413d8u: goto label_2413d8;
        case 0x2413dcu: goto label_2413dc;
        case 0x2413e0u: goto label_2413e0;
        case 0x2413e4u: goto label_2413e4;
        case 0x2413e8u: goto label_2413e8;
        case 0x2413ecu: goto label_2413ec;
        case 0x2413f0u: goto label_2413f0;
        case 0x2413f4u: goto label_2413f4;
        case 0x2413f8u: goto label_2413f8;
        case 0x2413fcu: goto label_2413fc;
        case 0x241400u: goto label_241400;
        case 0x241404u: goto label_241404;
        case 0x241408u: goto label_241408;
        case 0x24140cu: goto label_24140c;
        case 0x241410u: goto label_241410;
        case 0x241414u: goto label_241414;
        case 0x241418u: goto label_241418;
        case 0x24141cu: goto label_24141c;
        case 0x241420u: goto label_241420;
        case 0x241424u: goto label_241424;
        case 0x241428u: goto label_241428;
        case 0x24142cu: goto label_24142c;
        case 0x241430u: goto label_241430;
        case 0x241434u: goto label_241434;
        case 0x241438u: goto label_241438;
        case 0x24143cu: goto label_24143c;
        case 0x241440u: goto label_241440;
        case 0x241444u: goto label_241444;
        case 0x241448u: goto label_241448;
        case 0x24144cu: goto label_24144c;
        case 0x241450u: goto label_241450;
        case 0x241454u: goto label_241454;
        case 0x241458u: goto label_241458;
        case 0x24145cu: goto label_24145c;
        case 0x241460u: goto label_241460;
        case 0x241464u: goto label_241464;
        case 0x241468u: goto label_241468;
        case 0x24146cu: goto label_24146c;
        case 0x241470u: goto label_241470;
        case 0x241474u: goto label_241474;
        case 0x241478u: goto label_241478;
        case 0x24147cu: goto label_24147c;
        case 0x241480u: goto label_241480;
        case 0x241484u: goto label_241484;
        case 0x241488u: goto label_241488;
        case 0x24148cu: goto label_24148c;
        case 0x241490u: goto label_241490;
        case 0x241494u: goto label_241494;
        case 0x241498u: goto label_241498;
        case 0x24149cu: goto label_24149c;
        case 0x2414a0u: goto label_2414a0;
        case 0x2414a4u: goto label_2414a4;
        case 0x2414a8u: goto label_2414a8;
        case 0x2414acu: goto label_2414ac;
        case 0x2414b0u: goto label_2414b0;
        case 0x2414b4u: goto label_2414b4;
        case 0x2414b8u: goto label_2414b8;
        case 0x2414bcu: goto label_2414bc;
        case 0x2414c0u: goto label_2414c0;
        case 0x2414c4u: goto label_2414c4;
        case 0x2414c8u: goto label_2414c8;
        case 0x2414ccu: goto label_2414cc;
        case 0x2414d0u: goto label_2414d0;
        case 0x2414d4u: goto label_2414d4;
        case 0x2414d8u: goto label_2414d8;
        case 0x2414dcu: goto label_2414dc;
        case 0x2414e0u: goto label_2414e0;
        case 0x2414e4u: goto label_2414e4;
        case 0x2414e8u: goto label_2414e8;
        case 0x2414ecu: goto label_2414ec;
        case 0x2414f0u: goto label_2414f0;
        case 0x2414f4u: goto label_2414f4;
        case 0x2414f8u: goto label_2414f8;
        case 0x2414fcu: goto label_2414fc;
        case 0x241500u: goto label_241500;
        case 0x241504u: goto label_241504;
        case 0x241508u: goto label_241508;
        case 0x24150cu: goto label_24150c;
        case 0x241510u: goto label_241510;
        case 0x241514u: goto label_241514;
        case 0x241518u: goto label_241518;
        case 0x24151cu: goto label_24151c;
        case 0x241520u: goto label_241520;
        case 0x241524u: goto label_241524;
        case 0x241528u: goto label_241528;
        case 0x24152cu: goto label_24152c;
        case 0x241530u: goto label_241530;
        case 0x241534u: goto label_241534;
        case 0x241538u: goto label_241538;
        case 0x24153cu: goto label_24153c;
        case 0x241540u: goto label_241540;
        case 0x241544u: goto label_241544;
        case 0x241548u: goto label_241548;
        case 0x24154cu: goto label_24154c;
        case 0x241550u: goto label_241550;
        case 0x241554u: goto label_241554;
        case 0x241558u: goto label_241558;
        case 0x24155cu: goto label_24155c;
        case 0x241560u: goto label_241560;
        case 0x241564u: goto label_241564;
        case 0x241568u: goto label_241568;
        case 0x24156cu: goto label_24156c;
        case 0x241570u: goto label_241570;
        case 0x241574u: goto label_241574;
        case 0x241578u: goto label_241578;
        case 0x24157cu: goto label_24157c;
        case 0x241580u: goto label_241580;
        case 0x241584u: goto label_241584;
        case 0x241588u: goto label_241588;
        case 0x24158cu: goto label_24158c;
        case 0x241590u: goto label_241590;
        case 0x241594u: goto label_241594;
        case 0x241598u: goto label_241598;
        case 0x24159cu: goto label_24159c;
        case 0x2415a0u: goto label_2415a0;
        case 0x2415a4u: goto label_2415a4;
        case 0x2415a8u: goto label_2415a8;
        case 0x2415acu: goto label_2415ac;
        case 0x2415b0u: goto label_2415b0;
        case 0x2415b4u: goto label_2415b4;
        case 0x2415b8u: goto label_2415b8;
        case 0x2415bcu: goto label_2415bc;
        case 0x2415c0u: goto label_2415c0;
        case 0x2415c4u: goto label_2415c4;
        case 0x2415c8u: goto label_2415c8;
        case 0x2415ccu: goto label_2415cc;
        case 0x2415d0u: goto label_2415d0;
        case 0x2415d4u: goto label_2415d4;
        case 0x2415d8u: goto label_2415d8;
        case 0x2415dcu: goto label_2415dc;
        case 0x2415e0u: goto label_2415e0;
        case 0x2415e4u: goto label_2415e4;
        case 0x2415e8u: goto label_2415e8;
        case 0x2415ecu: goto label_2415ec;
        case 0x2415f0u: goto label_2415f0;
        case 0x2415f4u: goto label_2415f4;
        case 0x2415f8u: goto label_2415f8;
        case 0x2415fcu: goto label_2415fc;
        case 0x241600u: goto label_241600;
        case 0x241604u: goto label_241604;
        case 0x241608u: goto label_241608;
        case 0x24160cu: goto label_24160c;
        case 0x241610u: goto label_241610;
        case 0x241614u: goto label_241614;
        case 0x241618u: goto label_241618;
        case 0x24161cu: goto label_24161c;
        case 0x241620u: goto label_241620;
        case 0x241624u: goto label_241624;
        case 0x241628u: goto label_241628;
        case 0x24162cu: goto label_24162c;
        case 0x241630u: goto label_241630;
        case 0x241634u: goto label_241634;
        case 0x241638u: goto label_241638;
        case 0x24163cu: goto label_24163c;
        case 0x241640u: goto label_241640;
        case 0x241644u: goto label_241644;
        case 0x241648u: goto label_241648;
        case 0x24164cu: goto label_24164c;
        case 0x241650u: goto label_241650;
        case 0x241654u: goto label_241654;
        case 0x241658u: goto label_241658;
        case 0x24165cu: goto label_24165c;
        case 0x241660u: goto label_241660;
        case 0x241664u: goto label_241664;
        case 0x241668u: goto label_241668;
        case 0x24166cu: goto label_24166c;
        case 0x241670u: goto label_241670;
        case 0x241674u: goto label_241674;
        case 0x241678u: goto label_241678;
        case 0x24167cu: goto label_24167c;
        case 0x241680u: goto label_241680;
        case 0x241684u: goto label_241684;
        case 0x241688u: goto label_241688;
        case 0x24168cu: goto label_24168c;
        case 0x241690u: goto label_241690;
        case 0x241694u: goto label_241694;
        case 0x241698u: goto label_241698;
        case 0x24169cu: goto label_24169c;
        case 0x2416a0u: goto label_2416a0;
        case 0x2416a4u: goto label_2416a4;
        case 0x2416a8u: goto label_2416a8;
        case 0x2416acu: goto label_2416ac;
        case 0x2416b0u: goto label_2416b0;
        case 0x2416b4u: goto label_2416b4;
        case 0x2416b8u: goto label_2416b8;
        case 0x2416bcu: goto label_2416bc;
        case 0x2416c0u: goto label_2416c0;
        case 0x2416c4u: goto label_2416c4;
        case 0x2416c8u: goto label_2416c8;
        case 0x2416ccu: goto label_2416cc;
        case 0x2416d0u: goto label_2416d0;
        case 0x2416d4u: goto label_2416d4;
        case 0x2416d8u: goto label_2416d8;
        case 0x2416dcu: goto label_2416dc;
        case 0x2416e0u: goto label_2416e0;
        case 0x2416e4u: goto label_2416e4;
        default: return;
    }

label_240f18:
    // 0x240f18: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x240f18u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_240f1c:
    // 0x240f1c: 0xac202390  sw          $zero, 0x2390($at)
    ctx->pc = 0x240f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9104), GPR_U32(ctx, 0));
label_240f20:
    // 0x240f20: 0x8f8392f8  lw          $v1, -0x6D08($gp)
    ctx->pc = 0x240f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_240f24:
    // 0x240f24: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240f28:
    // 0x240f28: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x240f28u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_240f2c:
    // 0x240f2c: 0x8c222394  lw          $v0, 0x2394($at)
    ctx->pc = 0x240f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9108)));
label_240f30:
    // 0x240f30: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_240f34:
    if (ctx->pc == 0x240F34u) {
        ctx->pc = 0x240F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F30u;
        // 0x240f34: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240F38u;
        goto label_240f38;
    }
    ctx->pc = 0x240F30u;
    {
        const bool branch_taken_0x240f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F30u;
        // 0x240f34: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240f30) {
            ctx->pc = 0x240F68u;
            goto label_240f68;
        }
    }
    ctx->pc = 0x240F38u;
label_240f38:
    // 0x240f38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_240f3c:
    // 0x240f3c: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x240f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_240f40:
    // 0x240f40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x240f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240f44:
    // 0x240f44: 0x8c2623a0  lw          $a2, 0x23A0($at)
    ctx->pc = 0x240f44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9120)));
label_240f48:
    // 0x240f48: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x240f48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240f4c:
    // 0x240f4c: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x240f4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_240f50:
    // 0x240f50: 0x2409019a  addiu       $t1, $zero, 0x19A
    ctx->pc = 0x240f50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 410));
label_240f54:
    // 0x240f54: 0x240a0034  addiu       $t2, $zero, 0x34
    ctx->pc = 0x240f54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_240f58:
    // 0x240f58: 0xc07f47c  jal         func_1FD1F0
label_240f5c:
    if (ctx->pc == 0x240F5Cu) {
        ctx->pc = 0x240F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F58u;
        // 0x240f5c: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240F60u;
        goto label_240f60;
    }
    ctx->pc = 0x240F58u;
    SET_GPR_U32(ctx, 31, 0x240F60u);
    ctx->pc = 0x240F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240F58u;
    // 0x240f5c: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD1F0u;
    { ctx->pc = 0x1fd1f0; return; }
    ctx->pc = 0x240F60u;
label_240f60:
    // 0x240f60: 0x100001a9  b           . + 4 + (0x1A9 << 2)
label_240f64:
    if (ctx->pc == 0x240F64u) {
        ctx->pc = 0x240F68u;
        goto label_240f68;
    }
    ctx->pc = 0x240F60u;
    {
        const bool branch_taken_0x240f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240f60) {
            ctx->pc = 0x241608u;
            goto label_241608;
        }
    }
    ctx->pc = 0x240F68u;
label_240f68:
    // 0x240f68: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240f6c:
    // 0x240f6c: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x240f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_240f70:
    // 0x240f70: 0x8c28239c  lw          $t0, 0x239C($at)
    ctx->pc = 0x240f70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9116)));
label_240f74:
    // 0x240f74: 0x2901000a  slti        $at, $t0, 0xA
    ctx->pc = 0x240f74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)10) ? 1 : 0);
label_240f78:
    // 0x240f78: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_240f7c:
    if (ctx->pc == 0x240F7Cu) {
        ctx->pc = 0x240F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F78u;
        // 0x240f7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240F80u;
        goto label_240f80;
    }
    ctx->pc = 0x240F78u;
    {
        const bool branch_taken_0x240f78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x240F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F78u;
        // 0x240f7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240f78) {
            ctx->pc = 0x240FA4u;
            goto label_240fa4;
        }
    }
    ctx->pc = 0x240F80u;
label_240f80:
    // 0x240f80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x240f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240f84:
    // 0x240f84: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x240f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_240f88:
    // 0x240f88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x240f88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240f8c:
    // 0x240f8c: 0x2409019a  addiu       $t1, $zero, 0x19A
    ctx->pc = 0x240f8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 410));
label_240f90:
    // 0x240f90: 0x240a0034  addiu       $t2, $zero, 0x34
    ctx->pc = 0x240f90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_240f94:
    // 0x240f94: 0xc07f47c  jal         func_1FD1F0
label_240f98:
    if (ctx->pc == 0x240F98u) {
        ctx->pc = 0x240F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F94u;
        // 0x240f98: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240F9Cu;
        goto label_240f9c;
    }
    ctx->pc = 0x240F94u;
    SET_GPR_U32(ctx, 31, 0x240F9Cu);
    ctx->pc = 0x240F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240F94u;
    // 0x240f98: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD1F0u;
    { ctx->pc = 0x1fd1f0; return; }
    ctx->pc = 0x240F9Cu;
label_240f9c:
    // 0x240f9c: 0x1000019a  b           . + 4 + (0x19A << 2)
label_240fa0:
    if (ctx->pc == 0x240FA0u) {
        ctx->pc = 0x240FA4u;
        goto label_240fa4;
    }
    ctx->pc = 0x240F9Cu;
    {
        const bool branch_taken_0x240f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240f9c) {
            ctx->pc = 0x241608u;
            goto label_241608;
        }
    }
    ctx->pc = 0x240FA4u;
label_240fa4:
    // 0x240fa4: 0x0  nop
    ctx->pc = 0x240fa4u;
    // NOP
label_240fa8:
    // 0x240fa8: 0xc07f468  jal         func_1FD1A0
label_240fac:
    if (ctx->pc == 0x240FACu) {
        ctx->pc = 0x240FB0u;
        goto label_240fb0;
    }
    ctx->pc = 0x240FA8u;
    SET_GPR_U32(ctx, 31, 0x240FB0u);
    ctx->pc = 0x1FD1A0u;
    { ctx->pc = 0x1fd1a0; return; }
    ctx->pc = 0x240FB0u;
label_240fb0:
    // 0x240fb0: 0x10000195  b           . + 4 + (0x195 << 2)
label_240fb4:
    if (ctx->pc == 0x240FB4u) {
        ctx->pc = 0x240FB8u;
        goto label_240fb8;
    }
    ctx->pc = 0x240FB0u;
    {
        const bool branch_taken_0x240fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240fb0) {
            ctx->pc = 0x241608u;
            goto label_241608;
        }
    }
    ctx->pc = 0x240FB8u;
label_240fb8:
    // 0x240fb8: 0xdf8487c8  ld          $a0, -0x7838($gp)
    ctx->pc = 0x240fb8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_240fbc:
    // 0x240fbc: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x240fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_240fc0:
    // 0x240fc0: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x240fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_240fc4:
    // 0x240fc4: 0x652804  sllv        $a1, $a1, $v1
    ctx->pc = 0x240fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
label_240fc8:
    // 0x240fc8: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x240fc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_240fcc:
    // 0x240fcc: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
label_240fd0:
    if (ctx->pc == 0x240FD0u) {
        ctx->pc = 0x240FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FCCu;
        // 0x240fd0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240FD4u;
        goto label_240fd4;
    }
    ctx->pc = 0x240FCCu;
    {
        const bool branch_taken_0x240fcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x240FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FCCu;
        // 0x240fd0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240fcc) {
            ctx->pc = 0x241030u;
            goto label_241030;
        }
    }
    ctx->pc = 0x240FD4u;
label_240fd4:
    // 0x240fd4: 0xc05b420  jal         func_16D080
label_240fd8:
    if (ctx->pc == 0x240FD8u) {
        ctx->pc = 0x240FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FD4u;
        // 0x240fd8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240FDCu;
        goto label_240fdc;
    }
    ctx->pc = 0x240FD4u;
    SET_GPR_U32(ctx, 31, 0x240FDCu);
    ctx->pc = 0x240FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240FD4u;
    // 0x240fd8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x240FD4u, 0x240FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240FDCu;
label_240fdc:
    // 0x240fdc: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x240fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_240fe0:
    // 0x240fe0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240fe4:
    // 0x240fe4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_240fe8:
    // 0x240fe8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x240fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_240fec:
    // 0x240fec: 0xc0905a8  jal         func_2416A0
label_240ff0:
    if (ctx->pc == 0x240FF0u) {
        ctx->pc = 0x240FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FECu;
        // 0x240ff0: 0xac202398  sw          $zero, 0x2398($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240FF4u;
        goto label_240ff4;
    }
    ctx->pc = 0x240FECu;
    SET_GPR_U32(ctx, 31, 0x240FF4u);
    ctx->pc = 0x240FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240FECu;
    // 0x240ff0: 0xac202398  sw          $zero, 0x2398($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 9112), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2416A0u;
    goto label_2416a0;
    ctx->pc = 0x240FF4u;
label_240ff4:
    // 0x240ff4: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x240ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_240ff8:
    // 0x240ff8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240ffc:
    // 0x240ffc: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x240ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_241000:
    // 0x241000: 0x8c222394  lw          $v0, 0x2394($at)
    ctx->pc = 0x241000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9108)));
label_241004:
    // 0x241004: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_241008:
    if (ctx->pc == 0x241008u) {
        ctx->pc = 0x241008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241004u;
        // 0x241008: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24100Cu;
        goto label_24100c;
    }
    ctx->pc = 0x241004u;
    {
        const bool branch_taken_0x241004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241004u;
        // 0x241008: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241004) {
            ctx->pc = 0x24101Cu;
            goto label_24101c;
        }
    }
    ctx->pc = 0x24100Cu;
label_24100c:
    // 0x24100c: 0xc078050  jal         func_1E0140
label_241010:
    if (ctx->pc == 0x241010u) {
        ctx->pc = 0x241014u;
        goto label_241014;
    }
    ctx->pc = 0x24100Cu;
    SET_GPR_U32(ctx, 31, 0x241014u);
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x241014u;
label_241014:
    // 0x241014: 0x10000142  b           . + 4 + (0x142 << 2)
label_241018:
    if (ctx->pc == 0x241018u) {
        ctx->pc = 0x24101Cu;
        goto label_24101c;
    }
    ctx->pc = 0x241014u;
    {
        const bool branch_taken_0x241014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241014) {
            ctx->pc = 0x241520u;
            goto label_241520;
        }
    }
    ctx->pc = 0x24101Cu;
label_24101c:
    // 0x24101c: 0x0  nop
    ctx->pc = 0x24101cu;
    // NOP
label_241020:
    // 0x241020: 0xc078050  jal         func_1E0140
label_241024:
    if (ctx->pc == 0x241024u) {
        ctx->pc = 0x241024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241020u;
        // 0x241024: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241028u;
        goto label_241028;
    }
    ctx->pc = 0x241020u;
    SET_GPR_U32(ctx, 31, 0x241028u);
    ctx->pc = 0x241024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241020u;
    // 0x241024: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x241028u;
label_241028:
    // 0x241028: 0x1000013d  b           . + 4 + (0x13D << 2)
label_24102c:
    if (ctx->pc == 0x24102Cu) {
        ctx->pc = 0x241030u;
        goto label_241030;
    }
    ctx->pc = 0x241028u;
    {
        const bool branch_taken_0x241028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241028) {
            ctx->pc = 0x241520u;
            goto label_241520;
        }
    }
    ctx->pc = 0x241030u;
label_241030:
    // 0x241030: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x241030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_241034:
    // 0x241034: 0x642804  sllv        $a1, $a0, $v1
    ctx->pc = 0x241034u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_241038:
    // 0x241038: 0xdf8487c8  ld          $a0, -0x7838($gp)
    ctx->pc = 0x241038u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_24103c:
    // 0x24103c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x24103cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_241040:
    // 0x241040: 0x10800078  beqz        $a0, . + 4 + (0x78 << 2)
label_241044:
    if (ctx->pc == 0x241044u) {
        ctx->pc = 0x241044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241040u;
        // 0x241044: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241048u;
        goto label_241048;
    }
    ctx->pc = 0x241040u;
    {
        const bool branch_taken_0x241040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x241044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241040u;
        // 0x241044: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241040) {
            ctx->pc = 0x241224u;
            goto label_241224;
        }
    }
    ctx->pc = 0x241048u;
label_241048:
    // 0x241048: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x241048u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_24104c:
    // 0x24104c: 0x8c232394  lw          $v1, 0x2394($at)
    ctx->pc = 0x24104cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9108)));
label_241050:
    // 0x241050: 0x14600040  bnez        $v1, . + 4 + (0x40 << 2)
label_241054:
    if (ctx->pc == 0x241054u) {
        ctx->pc = 0x241058u;
        goto label_241058;
    }
    ctx->pc = 0x241050u;
    {
        const bool branch_taken_0x241050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x241050) {
            ctx->pc = 0x241154u;
            goto label_241154;
        }
    }
    ctx->pc = 0x241058u;
label_241058:
    // 0x241058: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24105c:
    // 0x24105c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x24105cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_241060:
    // 0x241060: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x241060u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_241064:
    // 0x241064: 0x2463c990  addiu       $v1, $v1, -0x3670
    ctx->pc = 0x241064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953360));
label_241068:
    // 0x241068: 0x8c25238c  lw          $a1, 0x238C($at)
    ctx->pc = 0x241068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9100)));
label_24106c:
    // 0x24106c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x24106cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_241070:
    // 0x241070: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_241074:
    // 0x241074: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x241074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_241078:
    // 0x241078: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x241078u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_24107c:
    // 0x24107c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24107cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_241080:
    // 0x241080: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x241080u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_241084:
    // 0x241084: 0x90314a3b  lbu         $s1, 0x4A3B($at)
    ctx->pc = 0x241084u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19003)));
label_241088:
    // 0x241088: 0x2a21000f  slti        $at, $s1, 0xF
    ctx->pc = 0x241088u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)15) ? 1 : 0);
label_24108c:
    // 0x24108c: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
label_241090:
    if (ctx->pc == 0x241090u) {
        ctx->pc = 0x241090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24108Cu;
        // 0x241090: 0x3c035555  lui         $v1, 0x5555 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241094u;
        goto label_241094;
    }
    ctx->pc = 0x24108Cu;
    {
        const bool branch_taken_0x24108c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x241090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24108Cu;
        // 0x241090: 0x3c035555  lui         $v1, 0x5555 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24108c) {
            ctx->pc = 0x24113Cu;
            goto label_24113c;
        }
    }
    ctx->pc = 0x241094u;
label_241094:
    // 0x241094: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_241098:
    // 0x241098: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x241098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
label_24109c:
    // 0x24109c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x24109cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2410a0:
    // 0x2410a0: 0x710018  mult        $zero, $v1, $s1
    ctx->pc = 0x2410a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2410a4:
    // 0x2410a4: 0x8c2223a4  lw          $v0, 0x23A4($at)
    ctx->pc = 0x2410a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9124)));
label_2410a8:
    // 0x2410a8: 0x112fc2  srl         $a1, $s1, 31
    ctx->pc = 0x2410a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
label_2410ac:
    // 0x2410ac: 0x1810  mfhi        $v1
    ctx->pc = 0x2410acu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2410b0:
    // 0x2410b0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2410b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2410b4:
    // 0x2410b4: 0x14620021  bne         $v1, $v0, . + 4 + (0x21 << 2)
label_2410b8:
    if (ctx->pc == 0x2410B8u) {
        ctx->pc = 0x2410B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2410B4u;
        // 0x2410b8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2410BCu;
        goto label_2410bc;
    }
    ctx->pc = 0x2410B4u;
    {
        const bool branch_taken_0x2410b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2410B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2410B4u;
        // 0x2410b8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2410b4) {
            ctx->pc = 0x24113Cu;
            goto label_24113c;
        }
    }
    ctx->pc = 0x2410BCu;
label_2410bc:
    // 0x2410bc: 0xc05b420  jal         func_16D080
label_2410c0:
    if (ctx->pc == 0x2410C0u) {
        ctx->pc = 0x2410C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2410BCu;
        // 0x2410c0: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2410C4u;
        goto label_2410c4;
    }
    ctx->pc = 0x2410BCu;
    SET_GPR_U32(ctx, 31, 0x2410C4u);
    ctx->pc = 0x2410C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2410BCu;
    // 0x2410c0: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x2410BCu, 0x2410C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2410C4u;
label_2410c4:
    // 0x2410c4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2410c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2410c8:
    // 0x2410c8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2410c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2410cc:
    // 0x2410cc: 0x344423a8  ori         $a0, $v0, 0x23A8
    ctx->pc = 0x2410ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9128);
label_2410d0:
    // 0x2410d0: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x2410d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_2410d4:
    // 0x2410d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2410d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2410d8:
    // 0x2410d8: 0x1000000b  b           . + 4 + (0xB << 2)
label_2410dc:
    if (ctx->pc == 0x2410DCu) {
        ctx->pc = 0x2410DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2410D8u;
        // 0x2410dc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2410E0u;
        goto label_2410e0;
    }
    ctx->pc = 0x2410D8u;
    {
        const bool branch_taken_0x2410d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2410DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2410D8u;
        // 0x2410dc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2410d8) {
            ctx->pc = 0x241108u;
            goto label_241108;
        }
    }
    ctx->pc = 0x2410E0u;
label_2410e0:
    // 0x2410e0: 0xc07b48c  jal         func_1ED230
label_2410e4:
    if (ctx->pc == 0x2410E4u) {
        ctx->pc = 0x2410E8u;
        goto label_2410e8;
    }
    ctx->pc = 0x2410E0u;
    SET_GPR_U32(ctx, 31, 0x2410E8u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x2410E8u;
label_2410e8:
    // 0x2410e8: 0x8f8392f8  lw          $v1, -0x6D08($gp)
    ctx->pc = 0x2410e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_2410ec:
    // 0x2410ec: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2410ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2410f0:
    // 0x2410f0: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2410f0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_2410f4:
    // 0x2410f4: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x2410f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
label_2410f8:
    // 0x2410f8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2410f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2410fc:
    // 0x2410fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2410fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_241100:
    // 0x241100: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x241100u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_241104:
    // 0x241104: 0xac2223a8  sw          $v0, 0x23A8($at)
    ctx->pc = 0x241104u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9128), GPR_U32(ctx, 2));
label_241108:
    // 0x241108: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x241108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_24110c:
    // 0x24110c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24110cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_241110:
    // 0x241110: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x241110u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_241114:
    // 0x241114: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x241114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
label_241118:
    // 0x241118: 0x1c40fff1  bgtz        $v0, . + 4 + (-0xF << 2)
label_24111c:
    if (ctx->pc == 0x24111Cu) {
        ctx->pc = 0x24111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241118u;
        // 0x24111c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241120u;
        goto label_241120;
    }
    ctx->pc = 0x241118u;
    {
        const bool branch_taken_0x241118 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x24111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241118u;
        // 0x24111c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241118) {
            ctx->pc = 0x2410E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2410e0;
        }
    }
    ctx->pc = 0x241120u;
label_241120:
    // 0x241120: 0xc056948  jal         func_15A520
label_241124:
    if (ctx->pc == 0x241124u) {
        ctx->pc = 0x241124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241120u;
        // 0x241124: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241128u;
        goto label_241128;
    }
    ctx->pc = 0x241120u;
    SET_GPR_U32(ctx, 31, 0x241128u);
    ctx->pc = 0x241124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241120u;
    // 0x241124: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A520u, 0x241120u, 0x241128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241128u;
label_241128:
    // 0x241128: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x241128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_24112c:
    // 0x24112c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24112cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_241130:
    // 0x241130: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x241130u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_241134:
    // 0x241134: 0x100000fa  b           . + 4 + (0xFA << 2)
label_241138:
    if (ctx->pc == 0x241138u) {
        ctx->pc = 0x241138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241134u;
        // 0x241138: 0xac3123a0  sw          $s1, 0x23A0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9120), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24113Cu;
        goto label_24113c;
    }
    ctx->pc = 0x241134u;
    {
        const bool branch_taken_0x241134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241134u;
        // 0x241138: 0xac3123a0  sw          $s1, 0x23A0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9120), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241134) {
            ctx->pc = 0x241520u;
            goto label_241520;
        }
    }
    ctx->pc = 0x24113Cu;
label_24113c:
    // 0x24113c: 0x0  nop
    ctx->pc = 0x24113cu;
    // NOP
label_241140:
    // 0x241140: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x241140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_241144:
    // 0x241144: 0xc05b420  jal         func_16D080
label_241148:
    if (ctx->pc == 0x241148u) {
        ctx->pc = 0x241148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241144u;
        // 0x241148: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24114Cu;
        goto label_24114c;
    }
    ctx->pc = 0x241144u;
    SET_GPR_U32(ctx, 31, 0x24114Cu);
    ctx->pc = 0x241148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241144u;
    // 0x241148: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x241144u, 0x24114Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24114Cu;
label_24114c:
    // 0x24114c: 0x100000f4  b           . + 4 + (0xF4 << 2)
label_241150:
    if (ctx->pc == 0x241150u) {
        ctx->pc = 0x241154u;
        goto label_241154;
    }
    ctx->pc = 0x24114Cu;
    {
        const bool branch_taken_0x24114c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24114c) {
            ctx->pc = 0x241520u;
            goto label_241520;
        }
    }
    ctx->pc = 0x241154u;
label_241154:
    // 0x241154: 0x0  nop
    ctx->pc = 0x241154u;
    // NOP
label_241158:
    // 0x241158: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24115c:
    // 0x24115c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x24115cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_241160:
    // 0x241160: 0x8c232390  lw          $v1, 0x2390($at)
    ctx->pc = 0x241160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9104)));
label_241164:
    // 0x241164: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x241164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_241168:
    // 0x241168: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x241168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
label_24116c:
    // 0x24116c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x24116cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_241170:
    // 0x241170: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_241174:
    // 0x241174: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x241174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_241178:
    // 0x241178: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x241178u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_24117c:
    // 0x24117c: 0x90314a18  lbu         $s1, 0x4A18($at)
    ctx->pc = 0x24117cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18968)));
label_241180:
    // 0x241180: 0x2a21000a  slti        $at, $s1, 0xA
    ctx->pc = 0x241180u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
label_241184:
    // 0x241184: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
label_241188:
    if (ctx->pc == 0x241188u) {
        ctx->pc = 0x241188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241184u;
        // 0x241188: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24118Cu;
        goto label_24118c;
    }
    ctx->pc = 0x241184u;
    {
        const bool branch_taken_0x241184 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x241188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241184u;
        // 0x241188: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241184) {
            ctx->pc = 0x24120Cu;
            goto label_24120c;
        }
    }
    ctx->pc = 0x24118Cu;
label_24118c:
    // 0x24118c: 0xc05b420  jal         func_16D080
label_241190:
    if (ctx->pc == 0x241190u) {
        ctx->pc = 0x241190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24118Cu;
        // 0x241190: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241194u;
        goto label_241194;
    }
    ctx->pc = 0x24118Cu;
    SET_GPR_U32(ctx, 31, 0x241194u);
    ctx->pc = 0x241190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24118Cu;
    // 0x241190: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x24118Cu, 0x241194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241194u;
label_241194:
    // 0x241194: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x241194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_241198:
    // 0x241198: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x241198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_24119c:
    // 0x24119c: 0x344423a8  ori         $a0, $v0, 0x23A8
    ctx->pc = 0x24119cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9128);
label_2411a0:
    // 0x2411a0: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x2411a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_2411a4:
    // 0x2411a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2411a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2411a8:
    // 0x2411a8: 0x1000000b  b           . + 4 + (0xB << 2)
label_2411ac:
    if (ctx->pc == 0x2411ACu) {
        ctx->pc = 0x2411ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2411A8u;
        // 0x2411ac: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2411B0u;
        goto label_2411b0;
    }
    ctx->pc = 0x2411A8u;
    {
        const bool branch_taken_0x2411a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2411ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2411A8u;
        // 0x2411ac: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2411a8) {
            ctx->pc = 0x2411D8u;
            goto label_2411d8;
        }
    }
    ctx->pc = 0x2411B0u;
label_2411b0:
    // 0x2411b0: 0xc07b48c  jal         func_1ED230
label_2411b4:
    if (ctx->pc == 0x2411B4u) {
        ctx->pc = 0x2411B8u;
        goto label_2411b8;
    }
    ctx->pc = 0x2411B0u;
    SET_GPR_U32(ctx, 31, 0x2411B8u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x2411B8u;
label_2411b8:
    // 0x2411b8: 0x8f8392f8  lw          $v1, -0x6D08($gp)
    ctx->pc = 0x2411b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_2411bc:
    // 0x2411bc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2411bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2411c0:
    // 0x2411c0: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2411c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_2411c4:
    // 0x2411c4: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x2411c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
label_2411c8:
    // 0x2411c8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2411c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2411cc:
    // 0x2411cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2411ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2411d0:
    // 0x2411d0: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2411d0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_2411d4:
    // 0x2411d4: 0xac2223a8  sw          $v0, 0x23A8($at)
    ctx->pc = 0x2411d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9128), GPR_U32(ctx, 2));
label_2411d8:
    // 0x2411d8: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x2411d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_2411dc:
    // 0x2411dc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2411dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2411e0:
    // 0x2411e0: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2411e0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2411e4:
    // 0x2411e4: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x2411e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
label_2411e8:
    // 0x2411e8: 0x1c40fff1  bgtz        $v0, . + 4 + (-0xF << 2)
label_2411ec:
    if (ctx->pc == 0x2411ECu) {
        ctx->pc = 0x2411ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2411E8u;
        // 0x2411ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2411F0u;
        goto label_2411f0;
    }
    ctx->pc = 0x2411E8u;
    {
        const bool branch_taken_0x2411e8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2411ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2411E8u;
        // 0x2411ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2411e8) {
            ctx->pc = 0x2411B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2411b0;
        }
    }
    ctx->pc = 0x2411F0u;
label_2411f0:
    // 0x2411f0: 0xc056940  jal         func_15A500
label_2411f4:
    if (ctx->pc == 0x2411F4u) {
        ctx->pc = 0x2411F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2411F0u;
        // 0x2411f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2411F8u;
        goto label_2411f8;
    }
    ctx->pc = 0x2411F0u;
    SET_GPR_U32(ctx, 31, 0x2411F8u);
    ctx->pc = 0x2411F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2411F0u;
    // 0x2411f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A500u, 0x2411F0u, 0x2411F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2411F8u;
label_2411f8:
    // 0x2411f8: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x2411f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_2411fc:
    // 0x2411fc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2411fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_241200:
    // 0x241200: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x241200u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_241204:
    // 0x241204: 0x100000c6  b           . + 4 + (0xC6 << 2)
label_241208:
    if (ctx->pc == 0x241208u) {
        ctx->pc = 0x241208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241204u;
        // 0x241208: 0xac31239c  sw          $s1, 0x239C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9116), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24120Cu;
        goto label_24120c;
    }
    ctx->pc = 0x241204u;
    {
        const bool branch_taken_0x241204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241204u;
        // 0x241208: 0xac31239c  sw          $s1, 0x239C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9116), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241204) {
            ctx->pc = 0x241520u;
            goto label_241520;
        }
    }
    ctx->pc = 0x24120Cu;
label_24120c:
    // 0x24120c: 0x0  nop
    ctx->pc = 0x24120cu;
    // NOP
label_241210:
    // 0x241210: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x241210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_241214:
    // 0x241214: 0xc05b420  jal         func_16D080
label_241218:
    if (ctx->pc == 0x241218u) {
        ctx->pc = 0x241218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241214u;
        // 0x241218: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24121Cu;
        goto label_24121c;
    }
    ctx->pc = 0x241214u;
    SET_GPR_U32(ctx, 31, 0x24121Cu);
    ctx->pc = 0x241218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241214u;
    // 0x241218: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x241214u, 0x24121Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24121Cu;
label_24121c:
    // 0x24121c: 0x100000c0  b           . + 4 + (0xC0 << 2)
label_241220:
    if (ctx->pc == 0x241220u) {
        ctx->pc = 0x241224u;
        goto label_241224;
    }
    ctx->pc = 0x24121Cu;
    {
        const bool branch_taken_0x24121c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24121c) {
            ctx->pc = 0x241520u;
            goto label_241520;
        }
    }
    ctx->pc = 0x241224u;
label_241224:
    // 0x241224: 0x0  nop
    ctx->pc = 0x241224u;
    // NOP
label_241228:
    // 0x241228: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24122c:
    // 0x24122c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x24122cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_241230:
    // 0x241230: 0x8c222394  lw          $v0, 0x2394($at)
    ctx->pc = 0x241230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9108)));
label_241234:
    // 0x241234: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
label_241238:
    if (ctx->pc == 0x241238u) {
        ctx->pc = 0x24123Cu;
        goto label_24123c;
    }
    ctx->pc = 0x241234u;
    {
        const bool branch_taken_0x241234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241234) {
            ctx->pc = 0x24133Cu;
            goto label_24133c;
        }
    }
    ctx->pc = 0x24123Cu;
label_24123c:
    // 0x24123c: 0xdf8287c0  ld          $v0, -0x7840($gp)
    ctx->pc = 0x24123cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_241240:
    // 0x241240: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x241240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_241244:
    // 0x241244: 0x642004  sllv        $a0, $a0, $v1
    ctx->pc = 0x241244u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_241248:
    // 0x241248: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x241248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_24124c:
    // 0x24124c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_241250:
    if (ctx->pc == 0x241250u) {
        ctx->pc = 0x241250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24124Cu;
        // 0x241250: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241254u;
        goto label_241254;
    }
    ctx->pc = 0x24124Cu;
    {
        const bool branch_taken_0x24124c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24124Cu;
        // 0x241250: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24124c) {
            ctx->pc = 0x2412BCu;
            goto label_2412bc;
        }
    }
    ctx->pc = 0x241254u;
label_241254:
    // 0x241254: 0xc05b420  jal         func_16D080
label_241258:
    if (ctx->pc == 0x241258u) {
        ctx->pc = 0x241258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241254u;
        // 0x241258: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24125Cu;
        goto label_24125c;
    }
    ctx->pc = 0x241254u;
    SET_GPR_U32(ctx, 31, 0x24125Cu);
    ctx->pc = 0x241258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241254u;
    // 0x241258: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x241254u, 0x24125Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24125Cu;
label_24125c:
    // 0x24125c: 0x8f8492f8  lw          $a0, -0x6D08($gp)
    ctx->pc = 0x24125cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_241260:
    // 0x241260: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x241260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_241264:
    // 0x241264: 0x3445238c  ori         $a1, $v0, 0x238C
    ctx->pc = 0x241264u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9100);
label_241268:
    // 0x241268: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x241268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24126c:
    // 0x24126c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24126cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_241270:
    // 0x241270: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x241270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_241274:
    // 0x241274: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x241274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_241278:
    // 0x241278: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x241278u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_24127c:
    // 0x24127c: 0x0  nop
    ctx->pc = 0x24127cu;
    // NOP
label_241280:
    // 0x241280: 0x0  nop
    ctx->pc = 0x241280u;
    // NOP
label_241284:
    // 0x241284: 0x1810  mfhi        $v1
    ctx->pc = 0x241284u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_241288:
    // 0x241288: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_24128c:
    if (ctx->pc == 0x24128Cu) {
        ctx->pc = 0x24128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241288u;
        // 0x24128c: 0x2482fffd  addiu       $v0, $a0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241290u;
        goto label_241290;
    }
    ctx->pc = 0x241288u;
    {
        const bool branch_taken_0x241288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241288u;
        // 0x24128c: 0x2482fffd  addiu       $v0, $a0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241288) {
            ctx->pc = 0x241294u;
            goto label_241294;
        }
    }
    ctx->pc = 0x241290u;
label_241290:
    // 0x241290: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x241290u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_241294:
    // 0x241294: 0x0  nop
    ctx->pc = 0x241294u;
    // NOP
label_241298:
    // 0x241298: 0x8f8392f8  lw          $v1, -0x6D08($gp)
    ctx->pc = 0x241298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_24129c:
    // 0x24129c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24129cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2412a0:
    // 0x2412a0: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2412a0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_2412a4:
    // 0x2412a4: 0x8c22238c  lw          $v0, 0x238C($at)
    ctx->pc = 0x2412a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9100)));
label_2412a8:
    // 0x2412a8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2412a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2412ac:
    // 0x2412ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2412acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2412b0:
    // 0x2412b0: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2412b0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_2412b4:
    // 0x2412b4: 0x1000009a  b           . + 4 + (0x9A << 2)
label_2412b8:
    if (ctx->pc == 0x2412B8u) {
        ctx->pc = 0x2412B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412B4u;
        // 0x2412b8: 0xac22238c  sw          $v0, 0x238C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2412BCu;
        goto label_2412bc;
    }
    ctx->pc = 0x2412B4u;
    {
        const bool branch_taken_0x2412b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2412B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412B4u;
        // 0x2412b8: 0xac22238c  sw          $v0, 0x238C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2412b4) {
            ctx->pc = 0x241520u;
            goto label_241520;
        }
    }
    ctx->pc = 0x2412BCu;
label_2412bc:
    // 0x2412bc: 0x0  nop
    ctx->pc = 0x2412bcu;
    // NOP
label_2412c0:
    // 0x2412c0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2412c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2412c4:
    // 0x2412c4: 0x621804  sllv        $v1, $v0, $v1
    ctx->pc = 0x2412c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_2412c8:
    // 0x2412c8: 0xdf8287c0  ld          $v0, -0x7840($gp)
    ctx->pc = 0x2412c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_2412cc:
    // 0x2412cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2412ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2412d0:
    // 0x2412d0: 0x10400093  beqz        $v0, . + 4 + (0x93 << 2)
label_2412d4:
    if (ctx->pc == 0x2412D4u) {
        ctx->pc = 0x2412D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412D0u;
        // 0x2412d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2412D8u;
        goto label_2412d8;
    }
    ctx->pc = 0x2412D0u;
    {
        const bool branch_taken_0x2412d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2412D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412D0u;
        // 0x2412d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2412d0) {
            ctx->pc = 0x241520u;
            goto label_241520;
        }
    }
    ctx->pc = 0x2412D8u;
label_2412d8:
    // 0x2412d8: 0xc05b420  jal         func_16D080
label_2412dc:
    if (ctx->pc == 0x2412DCu) {
        ctx->pc = 0x2412DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412D8u;
        // 0x2412dc: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2412E0u;
        goto label_2412e0;
    }
    ctx->pc = 0x2412D8u;
    SET_GPR_U32(ctx, 31, 0x2412E0u);
    ctx->pc = 0x2412DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2412D8u;
    // 0x2412dc: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x2412D8u, 0x2412E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2412E0u;
label_2412e0:
    // 0x2412e0: 0x8f8392f8  lw          $v1, -0x6D08($gp)
    ctx->pc = 0x2412e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_2412e4:
    // 0x2412e4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2412e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2412e8:
    // 0x2412e8: 0x3444238c  ori         $a0, $v0, 0x238C
    ctx->pc = 0x2412e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9100);
label_2412ec:
    // 0x2412ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2412ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2412f0:
    // 0x2412f0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2412f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2412f4:
    // 0x2412f4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2412f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2412f8:
    // 0x2412f8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2412f8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2412fc:
    // 0x2412fc: 0x0  nop
    ctx->pc = 0x2412fcu;
    // NOP
label_241300:
    // 0x241300: 0x0  nop
    ctx->pc = 0x241300u;
    // NOP
label_241304:
    // 0x241304: 0x1010  mfhi        $v0
    ctx->pc = 0x241304u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_241308:
    // 0x241308: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_24130c:
    if (ctx->pc == 0x24130Cu) {
        ctx->pc = 0x24130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241308u;
        // 0x24130c: 0x24620003  addiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241310u;
        goto label_241310;
    }
    ctx->pc = 0x241308u;
    {
        const bool branch_taken_0x241308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241308u;
        // 0x24130c: 0x24620003  addiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241308) {
            ctx->pc = 0x241314u;
            goto label_241314;
        }
    }
    ctx->pc = 0x241310u;
label_241310:
    // 0x241310: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x241310u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_241314:
    // 0x241314: 0x0  nop
    ctx->pc = 0x241314u;
    // NOP
label_241318:
    // 0x241318: 0x8f8392f8  lw          $v1, -0x6D08($gp)
    ctx->pc = 0x241318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_24131c:
    // 0x24131c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24131cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_241320:
    // 0x241320: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x241320u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_241324:
    // 0x241324: 0x8c22238c  lw          $v0, 0x238C($at)
    ctx->pc = 0x241324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9100)));
label_241328:
    // 0x241328: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24132c:
    // 0x24132c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24132cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_241330:
    // 0x241330: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x241330u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_241334:
    // 0x241334: 0x1000007a  b           . + 4 + (0x7A << 2)
label_241338:
    if (ctx->pc == 0x241338u) {
        ctx->pc = 0x241338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241334u;
        // 0x241338: 0xac22238c  sw          $v0, 0x238C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24133Cu;
        goto label_24133c;
    }
    ctx->pc = 0x241334u;
    {
        const bool branch_taken_0x241334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241334u;
        // 0x241338: 0xac22238c  sw          $v0, 0x238C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241334) {
            ctx->pc = 0x241520u;
            goto label_241520;
        }
    }
    ctx->pc = 0x24133Cu;
label_24133c:
    // 0x24133c: 0x0  nop
    ctx->pc = 0x24133cu;
    // NOP
label_241340:
    // 0x241340: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x241340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_241344:
    // 0x241344: 0x622004  sllv        $a0, $v0, $v1
    ctx->pc = 0x241344u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_241348:
    // 0x241348: 0xdf8287c0  ld          $v0, -0x7840($gp)
    ctx->pc = 0x241348u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_24134c:
    // 0x24134c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x24134cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_241350:
    // 0x241350: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_241354:
    if (ctx->pc == 0x241354u) {
        ctx->pc = 0x241354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241350u;
        // 0x241354: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241358u;
        goto label_241358;
    }
    ctx->pc = 0x241350u;
    {
        const bool branch_taken_0x241350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241350u;
        // 0x241354: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241350) {
            ctx->pc = 0x2413A8u;
            goto label_2413a8;
        }
    }
    ctx->pc = 0x241358u;
label_241358:
    // 0x241358: 0xc05b420  jal         func_16D080
label_24135c:
    if (ctx->pc == 0x24135Cu) {
        ctx->pc = 0x24135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241358u;
        // 0x24135c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241360u;
        goto label_241360;
    }
    ctx->pc = 0x241358u;
    SET_GPR_U32(ctx, 31, 0x241360u);
    ctx->pc = 0x24135Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241358u;
    // 0x24135c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x241358u, 0x241360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241360u;
label_241360:
    // 0x241360: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x241360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_241364:
    // 0x241364: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x241364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_241368:
    // 0x241368: 0x34632390  ori         $v1, $v1, 0x2390
    ctx->pc = 0x241368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9104);
label_24136c:
    // 0x24136c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x24136cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_241370:
    // 0x241370: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x241370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_241374:
    // 0x241374: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x241374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_241378:
    // 0x241378: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x241378u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_24137c:
    // 0x24137c: 0x10200068  beqz        $at, . + 4 + (0x68 << 2)
label_241380:
    if (ctx->pc == 0x241380u) {
        ctx->pc = 0x241380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24137Cu;
        // 0x241380: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241384u;
        goto label_241384;
    }
    ctx->pc = 0x24137Cu;
    {
        const bool branch_taken_0x24137c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x241380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24137Cu;
        // 0x241380: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24137c) {
            ctx->pc = 0x241520u;
            goto label_241520;
        }
    }
    ctx->pc = 0x241384u;
label_241384:
    // 0x241384: 0x8f8392f8  lw          $v1, -0x6D08($gp)
    ctx->pc = 0x241384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_241388:
    // 0x241388: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24138c:
    // 0x24138c: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x24138cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_241390:
    // 0x241390: 0x8c222390  lw          $v0, 0x2390($at)
    ctx->pc = 0x241390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9104)));
label_241394:
    // 0x241394: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_241398:
    // 0x241398: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x241398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
label_24139c:
    // 0x24139c: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x24139cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_2413a0:
    // 0x2413a0: 0x1000005f  b           . + 4 + (0x5F << 2)
label_2413a4:
    if (ctx->pc == 0x2413A4u) {
        ctx->pc = 0x2413A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2413A0u;
        // 0x2413a4: 0xac222390  sw          $v0, 0x2390($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2413A8u;
        goto label_2413a8;
    }
    ctx->pc = 0x2413A0u;
    {
        const bool branch_taken_0x2413a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2413A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2413A0u;
        // 0x2413a4: 0xac222390  sw          $v0, 0x2390($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2413a0) {
            ctx->pc = 0x241520u;
            goto label_241520;
        }
    }
    ctx->pc = 0x2413A8u;
label_2413a8:
    // 0x2413a8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2413a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2413ac:
    // 0x2413ac: 0x622004  sllv        $a0, $v0, $v1
    ctx->pc = 0x2413acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_2413b0:
    // 0x2413b0: 0xdf8287c0  ld          $v0, -0x7840($gp)
    ctx->pc = 0x2413b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_2413b4:
    // 0x2413b4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2413b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2413b8:
    // 0x2413b8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2413bc:
    if (ctx->pc == 0x2413BCu) {
        ctx->pc = 0x2413BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2413B8u;
        // 0x2413bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2413C0u;
        goto label_2413c0;
    }
    ctx->pc = 0x2413B8u;
    {
        const bool branch_taken_0x2413b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2413BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2413B8u;
        // 0x2413bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2413b8) {
            ctx->pc = 0x241414u;
            goto label_241414;
        }
    }
    ctx->pc = 0x2413C0u;
label_2413c0:
    // 0x2413c0: 0xc05b420  jal         func_16D080
label_2413c4:
    if (ctx->pc == 0x2413C4u) {
        ctx->pc = 0x2413C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2413C0u;
        // 0x2413c4: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2413C8u;
        goto label_2413c8;
    }
    ctx->pc = 0x2413C0u;
    SET_GPR_U32(ctx, 31, 0x2413C8u);
    ctx->pc = 0x2413C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2413C0u;
    // 0x2413c4: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x2413C0u, 0x2413C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2413C8u;
label_2413c8:
    // 0x2413c8: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x2413c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_2413cc:
    // 0x2413cc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2413ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_2413d0:
    // 0x2413d0: 0x34632390  ori         $v1, $v1, 0x2390
    ctx->pc = 0x2413d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9104);
label_2413d4:
    // 0x2413d4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2413d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2413d8:
    // 0x2413d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2413d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2413dc:
    // 0x2413dc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2413dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_2413e0:
    // 0x2413e0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2413e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2413e4:
    // 0x2413e4: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x2413e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
label_2413e8:
    // 0x2413e8: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
label_2413ec:
    if (ctx->pc == 0x2413ECu) {
        ctx->pc = 0x2413F0u;
        goto label_2413f0;
    }
    ctx->pc = 0x2413E8u;
    {
        const bool branch_taken_0x2413e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2413e8) {
            ctx->pc = 0x241520u;
            goto label_241520;
        }
    }
    ctx->pc = 0x2413F0u;
label_2413f0:
    // 0x2413f0: 0x8f8392f8  lw          $v1, -0x6D08($gp)
    ctx->pc = 0x2413f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_2413f4:
    // 0x2413f4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2413f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2413f8:
    // 0x2413f8: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2413f8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_2413fc:
    // 0x2413fc: 0x8c222390  lw          $v0, 0x2390($at)
    ctx->pc = 0x2413fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9104)));
label_241400:
    // 0x241400: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_241404:
    // 0x241404: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x241404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
label_241408:
    // 0x241408: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x241408u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_24140c:
    // 0x24140c: 0x10000044  b           . + 4 + (0x44 << 2)
label_241410:
    if (ctx->pc == 0x241410u) {
        ctx->pc = 0x241410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24140Cu;
        // 0x241410: 0xac222390  sw          $v0, 0x2390($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241414u;
        goto label_241414;
    }
    ctx->pc = 0x24140Cu;
    {
        const bool branch_taken_0x24140c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24140Cu;
        // 0x241410: 0xac222390  sw          $v0, 0x2390($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24140c) {
            ctx->pc = 0x241520u;
            goto label_241520;
        }
    }
    ctx->pc = 0x241414u;
label_241414:
    // 0x241414: 0x0  nop
    ctx->pc = 0x241414u;
    // NOP
label_241418:
    // 0x241418: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x241418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_24141c:
    // 0x24141c: 0x622004  sllv        $a0, $v0, $v1
    ctx->pc = 0x24141cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_241420:
    // 0x241420: 0xdf8287c0  ld          $v0, -0x7840($gp)
    ctx->pc = 0x241420u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_241424:
    // 0x241424: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x241424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_241428:
    // 0x241428: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_24142c:
    if (ctx->pc == 0x24142Cu) {
        ctx->pc = 0x24142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241428u;
        // 0x24142c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241430u;
        goto label_241430;
    }
    ctx->pc = 0x241428u;
    {
        const bool branch_taken_0x241428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241428u;
        // 0x24142c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241428) {
            ctx->pc = 0x24149Cu;
            goto label_24149c;
        }
    }
    ctx->pc = 0x241430u;
label_241430:
    // 0x241430: 0xc05b420  jal         func_16D080
label_241434:
    if (ctx->pc == 0x241434u) {
        ctx->pc = 0x241434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241430u;
        // 0x241434: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241438u;
        goto label_241438;
    }
    ctx->pc = 0x241430u;
    SET_GPR_U32(ctx, 31, 0x241438u);
    ctx->pc = 0x241434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241430u;
    // 0x241434: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x241430u, 0x241438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241438u;
label_241438:
    // 0x241438: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x241438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_24143c:
    // 0x24143c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x24143cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_241440:
    // 0x241440: 0x34632390  ori         $v1, $v1, 0x2390
    ctx->pc = 0x241440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9104);
label_241444:
    // 0x241444: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x241444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_241448:
    // 0x241448: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x241448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24144c:
    // 0x24144c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_241450:
    if (ctx->pc == 0x241450u) {
        ctx->pc = 0x241450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24144Cu;
        // 0x241450: 0x30430001  andi        $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x241454u;
        goto label_241454;
    }
    ctx->pc = 0x24144Cu;
    {
        const bool branch_taken_0x24144c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x241450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24144Cu;
        // 0x241450: 0x30430001  andi        $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24144c) {
            ctx->pc = 0x241460u;
            goto label_241460;
        }
    }
    ctx->pc = 0x241454u;
label_241454:
    // 0x241454: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_241458:
    if (ctx->pc == 0x241458u) {
        ctx->pc = 0x241458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241454u;
        // 0x241458: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24145Cu;
        goto label_24145c;
    }
    ctx->pc = 0x241454u;
    {
        const bool branch_taken_0x241454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x241458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241454u;
        // 0x241458: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241454) {
            ctx->pc = 0x241464u;
            goto label_241464;
        }
    }
    ctx->pc = 0x24145Cu;
label_24145c:
    // 0x24145c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x24145cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_241460:
    // 0x241460: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241464:
    // 0x241464: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_241468:
    if (ctx->pc == 0x241468u) {
        ctx->pc = 0x24146Cu;
        goto label_24146c;
    }
    ctx->pc = 0x241464u;
    {
        const bool branch_taken_0x241464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x241464) {
            ctx->pc = 0x241478u;
            goto label_241478;
        }
    }
    ctx->pc = 0x24146Cu;
label_24146c:
    // 0x24146c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x24146cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_241470:
    // 0x241470: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x241470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_241474:
    // 0x241474: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x241474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_241478:
    // 0x241478: 0x8f8392f8  lw          $v1, -0x6D08($gp)
    ctx->pc = 0x241478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_24147c:
    // 0x24147c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24147cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_241480:
    // 0x241480: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x241480u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_241484:
    // 0x241484: 0x8c222390  lw          $v0, 0x2390($at)
    ctx->pc = 0x241484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9104)));
label_241488:
    // 0x241488: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24148c:
    // 0x24148c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24148cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_241490:
    // 0x241490: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x241490u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_241494:
    // 0x241494: 0x10000022  b           . + 4 + (0x22 << 2)
label_241498:
    if (ctx->pc == 0x241498u) {
        ctx->pc = 0x241498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241494u;
        // 0x241498: 0xac222390  sw          $v0, 0x2390($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24149Cu;
        goto label_24149c;
    }
    ctx->pc = 0x241494u;
    {
        const bool branch_taken_0x241494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241494u;
        // 0x241498: 0xac222390  sw          $v0, 0x2390($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241494) {
            ctx->pc = 0x241520u;
            goto label_241520;
        }
    }
    ctx->pc = 0x24149Cu;
label_24149c:
    // 0x24149c: 0x0  nop
    ctx->pc = 0x24149cu;
    // NOP
label_2414a0:
    // 0x2414a0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2414a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2414a4:
    // 0x2414a4: 0x621804  sllv        $v1, $v0, $v1
    ctx->pc = 0x2414a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_2414a8:
    // 0x2414a8: 0xdf8287c0  ld          $v0, -0x7840($gp)
    ctx->pc = 0x2414a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_2414ac:
    // 0x2414ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2414acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2414b0:
    // 0x2414b0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2414b4:
    if (ctx->pc == 0x2414B4u) {
        ctx->pc = 0x2414B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2414B0u;
        // 0x2414b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2414B8u;
        goto label_2414b8;
    }
    ctx->pc = 0x2414B0u;
    {
        const bool branch_taken_0x2414b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2414B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2414B0u;
        // 0x2414b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2414b0) {
            ctx->pc = 0x241520u;
            goto label_241520;
        }
    }
    ctx->pc = 0x2414B8u;
label_2414b8:
    // 0x2414b8: 0xc05b420  jal         func_16D080
label_2414bc:
    if (ctx->pc == 0x2414BCu) {
        ctx->pc = 0x2414BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2414B8u;
        // 0x2414bc: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2414C0u;
        goto label_2414c0;
    }
    ctx->pc = 0x2414B8u;
    SET_GPR_U32(ctx, 31, 0x2414C0u);
    ctx->pc = 0x2414BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2414B8u;
    // 0x2414bc: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x2414B8u, 0x2414C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2414C0u;
label_2414c0:
    // 0x2414c0: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x2414c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_2414c4:
    // 0x2414c4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2414c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_2414c8:
    // 0x2414c8: 0x34632390  ori         $v1, $v1, 0x2390
    ctx->pc = 0x2414c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9104);
label_2414cc:
    // 0x2414cc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2414ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2414d0:
    // 0x2414d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2414d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2414d4:
    // 0x2414d4: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_2414d8:
    if (ctx->pc == 0x2414D8u) {
        ctx->pc = 0x2414D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2414D4u;
        // 0x2414d8: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2414DCu;
        goto label_2414dc;
    }
    ctx->pc = 0x2414D4u;
    {
        const bool branch_taken_0x2414d4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2414D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2414D4u;
        // 0x2414d8: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2414d4) {
            ctx->pc = 0x2414E8u;
            goto label_2414e8;
        }
    }
    ctx->pc = 0x2414DCu;
label_2414dc:
    // 0x2414dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2414e0:
    if (ctx->pc == 0x2414E0u) {
        ctx->pc = 0x2414E4u;
        goto label_2414e4;
    }
    ctx->pc = 0x2414DCu;
    {
        const bool branch_taken_0x2414dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2414dc) {
            ctx->pc = 0x2414E8u;
            goto label_2414e8;
        }
    }
    ctx->pc = 0x2414E4u;
label_2414e4:
    // 0x2414e4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2414e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_2414e8:
    // 0x2414e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2414ec:
    if (ctx->pc == 0x2414ECu) {
        ctx->pc = 0x2414F0u;
        goto label_2414f0;
    }
    ctx->pc = 0x2414E8u;
    {
        const bool branch_taken_0x2414e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2414e8) {
            ctx->pc = 0x2414FCu;
            goto label_2414fc;
        }
    }
    ctx->pc = 0x2414F0u;
label_2414f0:
    // 0x2414f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2414f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2414f4:
    // 0x2414f4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2414f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_2414f8:
    // 0x2414f8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2414f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2414fc:
    // 0x2414fc: 0x0  nop
    ctx->pc = 0x2414fcu;
    // NOP
label_241500:
    // 0x241500: 0x8f8392f8  lw          $v1, -0x6D08($gp)
    ctx->pc = 0x241500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_241504:
    // 0x241504: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_241508:
    // 0x241508: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x241508u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_24150c:
    // 0x24150c: 0x8c222390  lw          $v0, 0x2390($at)
    ctx->pc = 0x24150cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9104)));
label_241510:
    // 0x241510: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_241514:
    // 0x241514: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x241514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_241518:
    // 0x241518: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x241518u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_24151c:
    // 0x24151c: 0xac222390  sw          $v0, 0x2390($at)
    ctx->pc = 0x24151cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9104), GPR_U32(ctx, 2));
label_241520:
    // 0x241520: 0x8f8392f8  lw          $v1, -0x6D08($gp)
    ctx->pc = 0x241520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_241524:
    // 0x241524: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_241528:
    // 0x241528: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x241528u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_24152c:
    // 0x24152c: 0x8c222394  lw          $v0, 0x2394($at)
    ctx->pc = 0x24152cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9108)));
label_241530:
    // 0x241530: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_241534:
    if (ctx->pc == 0x241534u) {
        ctx->pc = 0x241534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241530u;
        // 0x241534: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241538u;
        goto label_241538;
    }
    ctx->pc = 0x241530u;
    {
        const bool branch_taken_0x241530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241530u;
        // 0x241534: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241530) {
            ctx->pc = 0x2415A8u;
            goto label_2415a8;
        }
    }
    ctx->pc = 0x241538u;
label_241538:
    // 0x241538: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x241538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_24153c:
    // 0x24153c: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x24153cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_241540:
    // 0x241540: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x241540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
label_241544:
    // 0x241544: 0x8c24238c  lw          $a0, 0x238C($at)
    ctx->pc = 0x241544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9100)));
label_241548:
    // 0x241548: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x241548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_24154c:
    // 0x24154c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24154cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_241550:
    // 0x241550: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x241550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_241554:
    // 0x241554: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x241554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_241558:
    // 0x241558: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x241558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24155c:
    // 0x24155c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x24155cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_241560:
    // 0x241560: 0x90264a3b  lbu         $a2, 0x4A3B($at)
    ctx->pc = 0x241560u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19003)));
label_241564:
    // 0x241564: 0x28c1000f  slti        $at, $a2, 0xF
    ctx->pc = 0x241564u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)15) ? 1 : 0);
label_241568:
    // 0x241568: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_24156c:
    if (ctx->pc == 0x24156Cu) {
        ctx->pc = 0x24156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241568u;
        // 0x24156c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241570u;
        goto label_241570;
    }
    ctx->pc = 0x241568u;
    {
        const bool branch_taken_0x241568 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241568u;
        // 0x24156c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241568) {
            ctx->pc = 0x241594u;
            goto label_241594;
        }
    }
    ctx->pc = 0x241570u;
label_241570:
    // 0x241570: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x241570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241574:
    // 0x241574: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x241574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241578:
    // 0x241578: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x241578u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_24157c:
    // 0x24157c: 0x2409019a  addiu       $t1, $zero, 0x19A
    ctx->pc = 0x24157cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 410));
label_241580:
    // 0x241580: 0x240a0034  addiu       $t2, $zero, 0x34
    ctx->pc = 0x241580u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_241584:
    // 0x241584: 0xc07f47c  jal         func_1FD1F0
label_241588:
    if (ctx->pc == 0x241588u) {
        ctx->pc = 0x241588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241584u;
        // 0x241588: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24158Cu;
        goto label_24158c;
    }
    ctx->pc = 0x241584u;
    SET_GPR_U32(ctx, 31, 0x24158Cu);
    ctx->pc = 0x241588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241584u;
    // 0x241588: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD1F0u;
    { ctx->pc = 0x1fd1f0; return; }
    ctx->pc = 0x24158Cu;
label_24158c:
    // 0x24158c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_241590:
    if (ctx->pc == 0x241590u) {
        ctx->pc = 0x241594u;
        goto label_241594;
    }
    ctx->pc = 0x24158Cu;
    {
        const bool branch_taken_0x24158c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24158c) {
            ctx->pc = 0x241608u;
            goto label_241608;
        }
    }
    ctx->pc = 0x241594u;
label_241594:
    // 0x241594: 0x0  nop
    ctx->pc = 0x241594u;
    // NOP
label_241598:
    // 0x241598: 0xc07f468  jal         func_1FD1A0
label_24159c:
    if (ctx->pc == 0x24159Cu) {
        ctx->pc = 0x2415A0u;
        goto label_2415a0;
    }
    ctx->pc = 0x241598u;
    SET_GPR_U32(ctx, 31, 0x2415A0u);
    ctx->pc = 0x1FD1A0u;
    { ctx->pc = 0x1fd1a0; return; }
    ctx->pc = 0x2415A0u;
label_2415a0:
    // 0x2415a0: 0x10000019  b           . + 4 + (0x19 << 2)
label_2415a4:
    if (ctx->pc == 0x2415A4u) {
        ctx->pc = 0x2415A8u;
        goto label_2415a8;
    }
    ctx->pc = 0x2415A0u;
    {
        const bool branch_taken_0x2415a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2415a0) {
            ctx->pc = 0x241608u;
            goto label_241608;
        }
    }
    ctx->pc = 0x2415A8u;
label_2415a8:
    // 0x2415a8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2415a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2415ac:
    // 0x2415ac: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2415acu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_2415b0:
    // 0x2415b0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2415b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_2415b4:
    // 0x2415b4: 0x8c232390  lw          $v1, 0x2390($at)
    ctx->pc = 0x2415b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9104)));
label_2415b8:
    // 0x2415b8: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x2415b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
label_2415bc:
    // 0x2415bc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2415bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2415c0:
    // 0x2415c0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2415c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2415c4:
    // 0x2415c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2415c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2415c8:
    // 0x2415c8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2415c8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2415cc:
    // 0x2415cc: 0x90284a18  lbu         $t0, 0x4A18($at)
    ctx->pc = 0x2415ccu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18968)));
label_2415d0:
    // 0x2415d0: 0x2901000a  slti        $at, $t0, 0xA
    ctx->pc = 0x2415d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)10) ? 1 : 0);
label_2415d4:
    // 0x2415d4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_2415d8:
    if (ctx->pc == 0x2415D8u) {
        ctx->pc = 0x2415D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2415D4u;
        // 0x2415d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2415DCu;
        goto label_2415dc;
    }
    ctx->pc = 0x2415D4u;
    {
        const bool branch_taken_0x2415d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2415D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2415D4u;
        // 0x2415d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2415d4) {
            ctx->pc = 0x241600u;
            goto label_241600;
        }
    }
    ctx->pc = 0x2415DCu;
label_2415dc:
    // 0x2415dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2415dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2415e0:
    // 0x2415e0: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x2415e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2415e4:
    // 0x2415e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2415e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2415e8:
    // 0x2415e8: 0x2409019a  addiu       $t1, $zero, 0x19A
    ctx->pc = 0x2415e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 410));
label_2415ec:
    // 0x2415ec: 0x240a0034  addiu       $t2, $zero, 0x34
    ctx->pc = 0x2415ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_2415f0:
    // 0x2415f0: 0xc07f47c  jal         func_1FD1F0
label_2415f4:
    if (ctx->pc == 0x2415F4u) {
        ctx->pc = 0x2415F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2415F0u;
        // 0x2415f4: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2415F8u;
        goto label_2415f8;
    }
    ctx->pc = 0x2415F0u;
    SET_GPR_U32(ctx, 31, 0x2415F8u);
    ctx->pc = 0x2415F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2415F0u;
    // 0x2415f4: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD1F0u;
    { ctx->pc = 0x1fd1f0; return; }
    ctx->pc = 0x2415F8u;
label_2415f8:
    // 0x2415f8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2415fc:
    if (ctx->pc == 0x2415FCu) {
        ctx->pc = 0x241600u;
        goto label_241600;
    }
    ctx->pc = 0x2415F8u;
    {
        const bool branch_taken_0x2415f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2415f8) {
            ctx->pc = 0x241608u;
            goto label_241608;
        }
    }
    ctx->pc = 0x241600u;
label_241600:
    // 0x241600: 0xc07f468  jal         func_1FD1A0
label_241604:
    if (ctx->pc == 0x241604u) {
        ctx->pc = 0x241608u;
        goto label_241608;
    }
    ctx->pc = 0x241600u;
    SET_GPR_U32(ctx, 31, 0x241608u);
    ctx->pc = 0x1FD1A0u;
    { ctx->pc = 0x1fd1a0; return; }
    ctx->pc = 0x241608u;
label_241608:
    // 0x241608: 0xc07b48c  jal         func_1ED230
label_24160c:
    if (ctx->pc == 0x24160Cu) {
        ctx->pc = 0x241610u;
        goto label_241610;
    }
    ctx->pc = 0x241608u;
    SET_GPR_U32(ctx, 31, 0x241610u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x241610u;
label_241610:
    // 0x241610: 0x1000fdaf  b           . + 4 + (-0x251 << 2)
label_241614:
    if (ctx->pc == 0x241614u) {
        ctx->pc = 0x241618u;
        goto label_241618;
    }
    ctx->pc = 0x241610u;
    {
        const bool branch_taken_0x241610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241610) {
            ctx->pc = 0x240CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x240cd0; return; }
        }
    }
    ctx->pc = 0x241618u;
label_241618:
    // 0x241618: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x241618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_24161c:
    // 0x24161c: 0x16020016  bne         $s0, $v0, . + 4 + (0x16 << 2)
label_241620:
    if (ctx->pc == 0x241620u) {
        ctx->pc = 0x241624u;
        goto label_241624;
    }
    ctx->pc = 0x24161Cu;
    {
        const bool branch_taken_0x24161c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x24161c) {
            ctx->pc = 0x241678u;
            goto label_241678;
        }
    }
    ctx->pc = 0x241624u;
label_241624:
    // 0x241624: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x241624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_241628:
    // 0x241628: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24162c:
    // 0x24162c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x24162cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_241630:
    // 0x241630: 0xc078078  jal         func_1E01E0
label_241634:
    if (ctx->pc == 0x241634u) {
        ctx->pc = 0x241634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241630u;
        // 0x241634: 0xac202394  sw          $zero, 0x2394($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241638u;
        goto label_241638;
    }
    ctx->pc = 0x241630u;
    SET_GPR_U32(ctx, 31, 0x241638u);
    ctx->pc = 0x241634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241630u;
    // 0x241634: 0xac202394  sw          $zero, 0x2394($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 9108), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E01E0u;
    { ctx->pc = 0x1e01e0; return; }
    ctx->pc = 0x241638u;
label_241638:
    // 0x241638: 0xc07f468  jal         func_1FD1A0
label_24163c:
    if (ctx->pc == 0x24163Cu) {
        ctx->pc = 0x241640u;
        goto label_241640;
    }
    ctx->pc = 0x241638u;
    SET_GPR_U32(ctx, 31, 0x241640u);
    ctx->pc = 0x1FD1A0u;
    { ctx->pc = 0x1fd1a0; return; }
    ctx->pc = 0x241640u;
label_241640:
    // 0x241640: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x241640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_241644:
    // 0x241644: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_241648:
    // 0x241648: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x241648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24164c:
    // 0x24164c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x24164cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_241650:
    // 0x241650: 0x10000003  b           . + 4 + (0x3 << 2)
label_241654:
    if (ctx->pc == 0x241654u) {
        ctx->pc = 0x241654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241650u;
        // 0x241654: 0xac232380  sw          $v1, 0x2380($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9088), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241658u;
        goto label_241658;
    }
    ctx->pc = 0x241650u;
    {
        const bool branch_taken_0x241650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241650u;
        // 0x241654: 0xac232380  sw          $v1, 0x2380($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9088), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241650) {
            ctx->pc = 0x241660u;
            goto label_241660;
        }
    }
    ctx->pc = 0x241658u;
label_241658:
    // 0x241658: 0xc07b48c  jal         func_1ED230
label_24165c:
    if (ctx->pc == 0x24165Cu) {
        ctx->pc = 0x241660u;
        goto label_241660;
    }
    ctx->pc = 0x241658u;
    SET_GPR_U32(ctx, 31, 0x241660u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x241660u;
label_241660:
    // 0x241660: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x241660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_241664:
    // 0x241664: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_241668:
    // 0x241668: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x241668u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_24166c:
    // 0x24166c: 0x8c222380  lw          $v0, 0x2380($at)
    ctx->pc = 0x24166cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9088)));
label_241670:
    // 0x241670: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_241674:
    if (ctx->pc == 0x241674u) {
        ctx->pc = 0x241678u;
        goto label_241678;
    }
    ctx->pc = 0x241670u;
    {
        const bool branch_taken_0x241670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241670) {
            ctx->pc = 0x241658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241658;
        }
    }
    ctx->pc = 0x241678u;
label_241678:
    // 0x241678: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x241678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24167c:
    // 0x24167c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24167cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_241680:
    // 0x241680: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x241680u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_241684:
    // 0x241684: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x241684u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_241688:
    // 0x241688: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x241688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24168c:
    // 0x24168c: 0x3e00008  jr          $ra
label_241690:
    if (ctx->pc == 0x241690u) {
        ctx->pc = 0x241690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24168Cu;
        // 0x241690: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241694u;
        goto label_241694;
    }
    ctx->pc = 0x24168Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24168Cu;
        // 0x241690: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24168Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241694u;
label_241694:
    // 0x241694: 0x0  nop
    ctx->pc = 0x241694u;
    // NOP
label_241698:
    // 0x241698: 0x0  nop
    ctx->pc = 0x241698u;
    // NOP
label_24169c:
    // 0x24169c: 0x0  nop
    ctx->pc = 0x24169cu;
    // NOP
label_2416a0:
    // 0x2416a0: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x2416a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_2416a4:
    // 0x2416a4: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
label_2416a8:
    if (ctx->pc == 0x2416A8u) {
        ctx->pc = 0x2416A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2416A4u;
        // 0x2416a8: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2416ACu;
        goto label_2416ac;
    }
    ctx->pc = 0x2416A4u;
    {
        const bool branch_taken_0x2416a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2416A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2416A4u;
        // 0x2416a8: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2416a4) {
            ctx->pc = 0x241780u;
            { ctx->pc = 0x241780; return; }
        }
    }
    ctx->pc = 0x2416ACu;
label_2416ac:
    // 0x2416ac: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x2416acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_2416b0:
    // 0x2416b0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2416b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2416b4:
    // 0x2416b4: 0x24a51300  addiu       $a1, $a1, 0x1300
    ctx->pc = 0x2416b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4864));
label_2416b8:
    // 0x2416b8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2416b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_2416bc:
    // 0x2416bc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2416bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2416c0:
    // 0x2416c0: 0x3467239c  ori         $a3, $v1, 0x239C
    ctx->pc = 0x2416c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9116);
label_2416c4:
    // 0x2416c4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2416c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2416c8:
    // 0x2416c8: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x2416c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2416cc:
    // 0x2416cc: 0x8f8492f8  lw          $a0, -0x6D08($gp)
    ctx->pc = 0x2416ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_2416d0:
    // 0x2416d0: 0x24663620  addiu       $a2, $v1, 0x3620
    ctx->pc = 0x2416d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 13856));
label_2416d4:
    // 0x2416d4: 0x90653695  lbu         $a1, 0x3695($v1)
    ctx->pc = 0x2416d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13973)));
label_2416d8:
    // 0x2416d8: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2416d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_2416dc:
    // 0x2416dc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2416dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_2416e0:
    // 0x2416e0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2416e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2416e4:
    // 0x2416e4: 0x8f8492f8  lw          $a0, -0x6D08($gp)
    ctx->pc = 0x2416e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
    ctx->pc = 0x2416e8u;
    return;
}

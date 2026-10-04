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


void entry_00254d38_part40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x267de8u: goto label_267de8;
        case 0x267decu: goto label_267dec;
        case 0x267df0u: goto label_267df0;
        case 0x267df4u: goto label_267df4;
        case 0x267df8u: goto label_267df8;
        case 0x267dfcu: goto label_267dfc;
        case 0x267e00u: goto label_267e00;
        case 0x267e04u: goto label_267e04;
        case 0x267e08u: goto label_267e08;
        case 0x267e0cu: goto label_267e0c;
        case 0x267e10u: goto label_267e10;
        case 0x267e14u: goto label_267e14;
        case 0x267e18u: goto label_267e18;
        case 0x267e1cu: goto label_267e1c;
        case 0x267e20u: goto label_267e20;
        case 0x267e24u: goto label_267e24;
        case 0x267e28u: goto label_267e28;
        case 0x267e2cu: goto label_267e2c;
        case 0x267e30u: goto label_267e30;
        case 0x267e34u: goto label_267e34;
        case 0x267e38u: goto label_267e38;
        case 0x267e3cu: goto label_267e3c;
        case 0x267e40u: goto label_267e40;
        case 0x267e44u: goto label_267e44;
        case 0x267e48u: goto label_267e48;
        case 0x267e4cu: goto label_267e4c;
        case 0x267e50u: goto label_267e50;
        case 0x267e54u: goto label_267e54;
        case 0x267e58u: goto label_267e58;
        case 0x267e5cu: goto label_267e5c;
        case 0x267e60u: goto label_267e60;
        case 0x267e64u: goto label_267e64;
        case 0x267e68u: goto label_267e68;
        case 0x267e6cu: goto label_267e6c;
        case 0x267e70u: goto label_267e70;
        case 0x267e74u: goto label_267e74;
        case 0x267e78u: goto label_267e78;
        case 0x267e7cu: goto label_267e7c;
        case 0x267e80u: goto label_267e80;
        case 0x267e84u: goto label_267e84;
        case 0x267e88u: goto label_267e88;
        case 0x267e8cu: goto label_267e8c;
        case 0x267e90u: goto label_267e90;
        case 0x267e94u: goto label_267e94;
        case 0x267e98u: goto label_267e98;
        case 0x267e9cu: goto label_267e9c;
        case 0x267ea0u: goto label_267ea0;
        case 0x267ea4u: goto label_267ea4;
        case 0x267ea8u: goto label_267ea8;
        case 0x267eacu: goto label_267eac;
        case 0x267eb0u: goto label_267eb0;
        case 0x267eb4u: goto label_267eb4;
        case 0x267eb8u: goto label_267eb8;
        case 0x267ebcu: goto label_267ebc;
        case 0x267ec0u: goto label_267ec0;
        case 0x267ec4u: goto label_267ec4;
        case 0x267ec8u: goto label_267ec8;
        case 0x267eccu: goto label_267ecc;
        case 0x267ed0u: goto label_267ed0;
        case 0x267ed4u: goto label_267ed4;
        case 0x267ed8u: goto label_267ed8;
        case 0x267edcu: goto label_267edc;
        case 0x267ee0u: goto label_267ee0;
        case 0x267ee4u: goto label_267ee4;
        case 0x267ee8u: goto label_267ee8;
        case 0x267eecu: goto label_267eec;
        case 0x267ef0u: goto label_267ef0;
        case 0x267ef4u: goto label_267ef4;
        case 0x267ef8u: goto label_267ef8;
        case 0x267efcu: goto label_267efc;
        case 0x267f00u: goto label_267f00;
        case 0x267f04u: goto label_267f04;
        case 0x267f08u: goto label_267f08;
        case 0x267f0cu: goto label_267f0c;
        case 0x267f10u: goto label_267f10;
        case 0x267f14u: goto label_267f14;
        case 0x267f18u: goto label_267f18;
        case 0x267f1cu: goto label_267f1c;
        case 0x267f20u: goto label_267f20;
        case 0x267f24u: goto label_267f24;
        case 0x267f28u: goto label_267f28;
        case 0x267f2cu: goto label_267f2c;
        case 0x267f30u: goto label_267f30;
        case 0x267f34u: goto label_267f34;
        case 0x267f38u: goto label_267f38;
        case 0x267f3cu: goto label_267f3c;
        case 0x267f40u: goto label_267f40;
        case 0x267f44u: goto label_267f44;
        case 0x267f48u: goto label_267f48;
        case 0x267f4cu: goto label_267f4c;
        case 0x267f50u: goto label_267f50;
        case 0x267f54u: goto label_267f54;
        case 0x267f58u: goto label_267f58;
        case 0x267f5cu: goto label_267f5c;
        case 0x267f60u: goto label_267f60;
        case 0x267f64u: goto label_267f64;
        case 0x267f68u: goto label_267f68;
        case 0x267f6cu: goto label_267f6c;
        case 0x267f70u: goto label_267f70;
        case 0x267f74u: goto label_267f74;
        case 0x267f78u: goto label_267f78;
        case 0x267f7cu: goto label_267f7c;
        case 0x267f80u: goto label_267f80;
        case 0x267f84u: goto label_267f84;
        case 0x267f88u: goto label_267f88;
        case 0x267f8cu: goto label_267f8c;
        case 0x267f90u: goto label_267f90;
        case 0x267f94u: goto label_267f94;
        case 0x267f98u: goto label_267f98;
        case 0x267f9cu: goto label_267f9c;
        case 0x267fa0u: goto label_267fa0;
        case 0x267fa4u: goto label_267fa4;
        case 0x267fa8u: goto label_267fa8;
        case 0x267facu: goto label_267fac;
        case 0x267fb0u: goto label_267fb0;
        case 0x267fb4u: goto label_267fb4;
        case 0x267fb8u: goto label_267fb8;
        case 0x267fbcu: goto label_267fbc;
        case 0x267fc0u: goto label_267fc0;
        case 0x267fc4u: goto label_267fc4;
        case 0x267fc8u: goto label_267fc8;
        case 0x267fccu: goto label_267fcc;
        case 0x267fd0u: goto label_267fd0;
        case 0x267fd4u: goto label_267fd4;
        case 0x267fd8u: goto label_267fd8;
        case 0x267fdcu: goto label_267fdc;
        case 0x267fe0u: goto label_267fe0;
        case 0x267fe4u: goto label_267fe4;
        case 0x267fe8u: goto label_267fe8;
        case 0x267fecu: goto label_267fec;
        case 0x267ff0u: goto label_267ff0;
        case 0x267ff4u: goto label_267ff4;
        case 0x267ff8u: goto label_267ff8;
        case 0x267ffcu: goto label_267ffc;
        case 0x268000u: goto label_268000;
        case 0x268004u: goto label_268004;
        case 0x268008u: goto label_268008;
        case 0x26800cu: goto label_26800c;
        case 0x268010u: goto label_268010;
        case 0x268014u: goto label_268014;
        case 0x268018u: goto label_268018;
        case 0x26801cu: goto label_26801c;
        case 0x268020u: goto label_268020;
        case 0x268024u: goto label_268024;
        case 0x268028u: goto label_268028;
        case 0x26802cu: goto label_26802c;
        case 0x268030u: goto label_268030;
        case 0x268034u: goto label_268034;
        case 0x268038u: goto label_268038;
        case 0x26803cu: goto label_26803c;
        case 0x268040u: goto label_268040;
        case 0x268044u: goto label_268044;
        case 0x268048u: goto label_268048;
        case 0x26804cu: goto label_26804c;
        case 0x268050u: goto label_268050;
        case 0x268054u: goto label_268054;
        case 0x268058u: goto label_268058;
        case 0x26805cu: goto label_26805c;
        case 0x268060u: goto label_268060;
        case 0x268064u: goto label_268064;
        case 0x268068u: goto label_268068;
        case 0x26806cu: goto label_26806c;
        case 0x268070u: goto label_268070;
        case 0x268074u: goto label_268074;
        case 0x268078u: goto label_268078;
        case 0x26807cu: goto label_26807c;
        case 0x268080u: goto label_268080;
        case 0x268084u: goto label_268084;
        case 0x268088u: goto label_268088;
        case 0x26808cu: goto label_26808c;
        case 0x268090u: goto label_268090;
        case 0x268094u: goto label_268094;
        case 0x268098u: goto label_268098;
        case 0x26809cu: goto label_26809c;
        case 0x2680a0u: goto label_2680a0;
        case 0x2680a4u: goto label_2680a4;
        case 0x2680a8u: goto label_2680a8;
        case 0x2680acu: goto label_2680ac;
        case 0x2680b0u: goto label_2680b0;
        case 0x2680b4u: goto label_2680b4;
        case 0x2680b8u: goto label_2680b8;
        case 0x2680bcu: goto label_2680bc;
        case 0x2680c0u: goto label_2680c0;
        case 0x2680c4u: goto label_2680c4;
        case 0x2680c8u: goto label_2680c8;
        case 0x2680ccu: goto label_2680cc;
        case 0x2680d0u: goto label_2680d0;
        case 0x2680d4u: goto label_2680d4;
        case 0x2680d8u: goto label_2680d8;
        case 0x2680dcu: goto label_2680dc;
        case 0x2680e0u: goto label_2680e0;
        case 0x2680e4u: goto label_2680e4;
        case 0x2680e8u: goto label_2680e8;
        case 0x2680ecu: goto label_2680ec;
        case 0x2680f0u: goto label_2680f0;
        case 0x2680f4u: goto label_2680f4;
        case 0x2680f8u: goto label_2680f8;
        case 0x2680fcu: goto label_2680fc;
        case 0x268100u: goto label_268100;
        case 0x268104u: goto label_268104;
        case 0x268108u: goto label_268108;
        case 0x26810cu: goto label_26810c;
        case 0x268110u: goto label_268110;
        case 0x268114u: goto label_268114;
        case 0x268118u: goto label_268118;
        case 0x26811cu: goto label_26811c;
        case 0x268120u: goto label_268120;
        case 0x268124u: goto label_268124;
        case 0x268128u: goto label_268128;
        case 0x26812cu: goto label_26812c;
        case 0x268130u: goto label_268130;
        case 0x268134u: goto label_268134;
        case 0x268138u: goto label_268138;
        case 0x26813cu: goto label_26813c;
        case 0x268140u: goto label_268140;
        case 0x268144u: goto label_268144;
        case 0x268148u: goto label_268148;
        case 0x26814cu: goto label_26814c;
        case 0x268150u: goto label_268150;
        case 0x268154u: goto label_268154;
        case 0x268158u: goto label_268158;
        case 0x26815cu: goto label_26815c;
        case 0x268160u: goto label_268160;
        case 0x268164u: goto label_268164;
        case 0x268168u: goto label_268168;
        case 0x26816cu: goto label_26816c;
        case 0x268170u: goto label_268170;
        case 0x268174u: goto label_268174;
        case 0x268178u: goto label_268178;
        case 0x26817cu: goto label_26817c;
        case 0x268180u: goto label_268180;
        case 0x268184u: goto label_268184;
        case 0x268188u: goto label_268188;
        case 0x26818cu: goto label_26818c;
        case 0x268190u: goto label_268190;
        case 0x268194u: goto label_268194;
        case 0x268198u: goto label_268198;
        case 0x26819cu: goto label_26819c;
        case 0x2681a0u: goto label_2681a0;
        case 0x2681a4u: goto label_2681a4;
        case 0x2681a8u: goto label_2681a8;
        case 0x2681acu: goto label_2681ac;
        case 0x2681b0u: goto label_2681b0;
        case 0x2681b4u: goto label_2681b4;
        case 0x2681b8u: goto label_2681b8;
        case 0x2681bcu: goto label_2681bc;
        case 0x2681c0u: goto label_2681c0;
        case 0x2681c4u: goto label_2681c4;
        case 0x2681c8u: goto label_2681c8;
        case 0x2681ccu: goto label_2681cc;
        case 0x2681d0u: goto label_2681d0;
        case 0x2681d4u: goto label_2681d4;
        case 0x2681d8u: goto label_2681d8;
        case 0x2681dcu: goto label_2681dc;
        case 0x2681e0u: goto label_2681e0;
        case 0x2681e4u: goto label_2681e4;
        case 0x2681e8u: goto label_2681e8;
        case 0x2681ecu: goto label_2681ec;
        case 0x2681f0u: goto label_2681f0;
        case 0x2681f4u: goto label_2681f4;
        case 0x2681f8u: goto label_2681f8;
        case 0x2681fcu: goto label_2681fc;
        case 0x268200u: goto label_268200;
        case 0x268204u: goto label_268204;
        case 0x268208u: goto label_268208;
        case 0x26820cu: goto label_26820c;
        case 0x268210u: goto label_268210;
        case 0x268214u: goto label_268214;
        case 0x268218u: goto label_268218;
        case 0x26821cu: goto label_26821c;
        case 0x268220u: goto label_268220;
        case 0x268224u: goto label_268224;
        case 0x268228u: goto label_268228;
        case 0x26822cu: goto label_26822c;
        case 0x268230u: goto label_268230;
        case 0x268234u: goto label_268234;
        case 0x268238u: goto label_268238;
        case 0x26823cu: goto label_26823c;
        case 0x268240u: goto label_268240;
        case 0x268244u: goto label_268244;
        case 0x268248u: goto label_268248;
        case 0x26824cu: goto label_26824c;
        case 0x268250u: goto label_268250;
        case 0x268254u: goto label_268254;
        case 0x268258u: goto label_268258;
        case 0x26825cu: goto label_26825c;
        case 0x268260u: goto label_268260;
        case 0x268264u: goto label_268264;
        case 0x268268u: goto label_268268;
        case 0x26826cu: goto label_26826c;
        case 0x268270u: goto label_268270;
        case 0x268274u: goto label_268274;
        case 0x268278u: goto label_268278;
        case 0x26827cu: goto label_26827c;
        case 0x268280u: goto label_268280;
        case 0x268284u: goto label_268284;
        case 0x268288u: goto label_268288;
        case 0x26828cu: goto label_26828c;
        case 0x268290u: goto label_268290;
        case 0x268294u: goto label_268294;
        case 0x268298u: goto label_268298;
        case 0x26829cu: goto label_26829c;
        case 0x2682a0u: goto label_2682a0;
        case 0x2682a4u: goto label_2682a4;
        case 0x2682a8u: goto label_2682a8;
        case 0x2682acu: goto label_2682ac;
        case 0x2682b0u: goto label_2682b0;
        case 0x2682b4u: goto label_2682b4;
        case 0x2682b8u: goto label_2682b8;
        case 0x2682bcu: goto label_2682bc;
        case 0x2682c0u: goto label_2682c0;
        case 0x2682c4u: goto label_2682c4;
        case 0x2682c8u: goto label_2682c8;
        case 0x2682ccu: goto label_2682cc;
        case 0x2682d0u: goto label_2682d0;
        case 0x2682d4u: goto label_2682d4;
        case 0x2682d8u: goto label_2682d8;
        case 0x2682dcu: goto label_2682dc;
        case 0x2682e0u: goto label_2682e0;
        case 0x2682e4u: goto label_2682e4;
        case 0x2682e8u: goto label_2682e8;
        case 0x2682ecu: goto label_2682ec;
        case 0x2682f0u: goto label_2682f0;
        case 0x2682f4u: goto label_2682f4;
        case 0x2682f8u: goto label_2682f8;
        case 0x2682fcu: goto label_2682fc;
        case 0x268300u: goto label_268300;
        case 0x268304u: goto label_268304;
        case 0x268308u: goto label_268308;
        case 0x26830cu: goto label_26830c;
        case 0x268310u: goto label_268310;
        case 0x268314u: goto label_268314;
        case 0x268318u: goto label_268318;
        case 0x26831cu: goto label_26831c;
        case 0x268320u: goto label_268320;
        case 0x268324u: goto label_268324;
        case 0x268328u: goto label_268328;
        case 0x26832cu: goto label_26832c;
        case 0x268330u: goto label_268330;
        case 0x268334u: goto label_268334;
        case 0x268338u: goto label_268338;
        case 0x26833cu: goto label_26833c;
        case 0x268340u: goto label_268340;
        case 0x268344u: goto label_268344;
        case 0x268348u: goto label_268348;
        case 0x26834cu: goto label_26834c;
        case 0x268350u: goto label_268350;
        case 0x268354u: goto label_268354;
        case 0x268358u: goto label_268358;
        case 0x26835cu: goto label_26835c;
        case 0x268360u: goto label_268360;
        case 0x268364u: goto label_268364;
        case 0x268368u: goto label_268368;
        case 0x26836cu: goto label_26836c;
        case 0x268370u: goto label_268370;
        case 0x268374u: goto label_268374;
        case 0x268378u: goto label_268378;
        case 0x26837cu: goto label_26837c;
        case 0x268380u: goto label_268380;
        case 0x268384u: goto label_268384;
        case 0x268388u: goto label_268388;
        case 0x26838cu: goto label_26838c;
        case 0x268390u: goto label_268390;
        case 0x268394u: goto label_268394;
        case 0x268398u: goto label_268398;
        case 0x26839cu: goto label_26839c;
        case 0x2683a0u: goto label_2683a0;
        case 0x2683a4u: goto label_2683a4;
        case 0x2683a8u: goto label_2683a8;
        case 0x2683acu: goto label_2683ac;
        case 0x2683b0u: goto label_2683b0;
        case 0x2683b4u: goto label_2683b4;
        case 0x2683b8u: goto label_2683b8;
        case 0x2683bcu: goto label_2683bc;
        case 0x2683c0u: goto label_2683c0;
        case 0x2683c4u: goto label_2683c4;
        case 0x2683c8u: goto label_2683c8;
        case 0x2683ccu: goto label_2683cc;
        case 0x2683d0u: goto label_2683d0;
        case 0x2683d4u: goto label_2683d4;
        case 0x2683d8u: goto label_2683d8;
        case 0x2683dcu: goto label_2683dc;
        case 0x2683e0u: goto label_2683e0;
        case 0x2683e4u: goto label_2683e4;
        case 0x2683e8u: goto label_2683e8;
        case 0x2683ecu: goto label_2683ec;
        case 0x2683f0u: goto label_2683f0;
        case 0x2683f4u: goto label_2683f4;
        case 0x2683f8u: goto label_2683f8;
        case 0x2683fcu: goto label_2683fc;
        case 0x268400u: goto label_268400;
        case 0x268404u: goto label_268404;
        case 0x268408u: goto label_268408;
        case 0x26840cu: goto label_26840c;
        case 0x268410u: goto label_268410;
        case 0x268414u: goto label_268414;
        case 0x268418u: goto label_268418;
        case 0x26841cu: goto label_26841c;
        case 0x268420u: goto label_268420;
        case 0x268424u: goto label_268424;
        case 0x268428u: goto label_268428;
        case 0x26842cu: goto label_26842c;
        case 0x268430u: goto label_268430;
        case 0x268434u: goto label_268434;
        case 0x268438u: goto label_268438;
        case 0x26843cu: goto label_26843c;
        case 0x268440u: goto label_268440;
        case 0x268444u: goto label_268444;
        case 0x268448u: goto label_268448;
        case 0x26844cu: goto label_26844c;
        case 0x268450u: goto label_268450;
        case 0x268454u: goto label_268454;
        case 0x268458u: goto label_268458;
        case 0x26845cu: goto label_26845c;
        case 0x268460u: goto label_268460;
        case 0x268464u: goto label_268464;
        case 0x268468u: goto label_268468;
        case 0x26846cu: goto label_26846c;
        case 0x268470u: goto label_268470;
        case 0x268474u: goto label_268474;
        case 0x268478u: goto label_268478;
        case 0x26847cu: goto label_26847c;
        case 0x268480u: goto label_268480;
        case 0x268484u: goto label_268484;
        case 0x268488u: goto label_268488;
        case 0x26848cu: goto label_26848c;
        case 0x268490u: goto label_268490;
        case 0x268494u: goto label_268494;
        case 0x268498u: goto label_268498;
        case 0x26849cu: goto label_26849c;
        case 0x2684a0u: goto label_2684a0;
        case 0x2684a4u: goto label_2684a4;
        case 0x2684a8u: goto label_2684a8;
        case 0x2684acu: goto label_2684ac;
        case 0x2684b0u: goto label_2684b0;
        case 0x2684b4u: goto label_2684b4;
        case 0x2684b8u: goto label_2684b8;
        case 0x2684bcu: goto label_2684bc;
        case 0x2684c0u: goto label_2684c0;
        case 0x2684c4u: goto label_2684c4;
        case 0x2684c8u: goto label_2684c8;
        case 0x2684ccu: goto label_2684cc;
        case 0x2684d0u: goto label_2684d0;
        case 0x2684d4u: goto label_2684d4;
        case 0x2684d8u: goto label_2684d8;
        case 0x2684dcu: goto label_2684dc;
        case 0x2684e0u: goto label_2684e0;
        case 0x2684e4u: goto label_2684e4;
        case 0x2684e8u: goto label_2684e8;
        case 0x2684ecu: goto label_2684ec;
        case 0x2684f0u: goto label_2684f0;
        case 0x2684f4u: goto label_2684f4;
        case 0x2684f8u: goto label_2684f8;
        case 0x2684fcu: goto label_2684fc;
        case 0x268500u: goto label_268500;
        case 0x268504u: goto label_268504;
        case 0x268508u: goto label_268508;
        case 0x26850cu: goto label_26850c;
        case 0x268510u: goto label_268510;
        case 0x268514u: goto label_268514;
        case 0x268518u: goto label_268518;
        case 0x26851cu: goto label_26851c;
        case 0x268520u: goto label_268520;
        case 0x268524u: goto label_268524;
        case 0x268528u: goto label_268528;
        case 0x26852cu: goto label_26852c;
        case 0x268530u: goto label_268530;
        case 0x268534u: goto label_268534;
        case 0x268538u: goto label_268538;
        case 0x26853cu: goto label_26853c;
        case 0x268540u: goto label_268540;
        case 0x268544u: goto label_268544;
        case 0x268548u: goto label_268548;
        case 0x26854cu: goto label_26854c;
        case 0x268550u: goto label_268550;
        case 0x268554u: goto label_268554;
        case 0x268558u: goto label_268558;
        case 0x26855cu: goto label_26855c;
        case 0x268560u: goto label_268560;
        case 0x268564u: goto label_268564;
        case 0x268568u: goto label_268568;
        case 0x26856cu: goto label_26856c;
        case 0x268570u: goto label_268570;
        case 0x268574u: goto label_268574;
        case 0x268578u: goto label_268578;
        case 0x26857cu: goto label_26857c;
        case 0x268580u: goto label_268580;
        case 0x268584u: goto label_268584;
        case 0x268588u: goto label_268588;
        case 0x26858cu: goto label_26858c;
        case 0x268590u: goto label_268590;
        case 0x268594u: goto label_268594;
        case 0x268598u: goto label_268598;
        case 0x26859cu: goto label_26859c;
        case 0x2685a0u: goto label_2685a0;
        case 0x2685a4u: goto label_2685a4;
        case 0x2685a8u: goto label_2685a8;
        case 0x2685acu: goto label_2685ac;
        case 0x2685b0u: goto label_2685b0;
        case 0x2685b4u: goto label_2685b4;
        default: return;
    }

label_267de8:
    // 0x267de8: 0x0  nop
    ctx->pc = 0x267de8u;
    // NOP
label_267dec:
    // 0x267dec: 0x0  nop
    ctx->pc = 0x267decu;
    // NOP
label_267df0:
    // 0x267df0: 0x11eda  .word       0x00011EDA                   # div         $v1, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267df0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_267df4:
    // 0x267df4: 0x7cc0  sll         $t7, $zero, 19
    ctx->pc = 0x267df4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_267df8:
    // 0x267df8: 0x0  nop
    ctx->pc = 0x267df8u;
    // NOP
label_267dfc:
    // 0x267dfc: 0x0  nop
    ctx->pc = 0x267dfcu;
    // NOP
label_267e00:
    // 0x267e00: 0x11eea  .word       0x00011EEA                   # slt         $v1, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267e00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_267e04:
    // 0x267e04: 0x8d50  .word       0x00008D50                   # mfhi        $s1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267e04u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_267e08:
    // 0x267e08: 0x0  nop
    ctx->pc = 0x267e08u;
    // NOP
label_267e0c:
    // 0x267e0c: 0x0  nop
    ctx->pc = 0x267e0cu;
    // NOP
label_267e10:
    // 0x267e10: 0x11efc  dsll32      $v1, $at, 27
    ctx->pc = 0x267e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) << (32 + 27));
label_267e14:
    // 0x267e14: 0x56c0  sll         $t2, $zero, 27
    ctx->pc = 0x267e14u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_267e18:
    // 0x267e18: 0x0  nop
    ctx->pc = 0x267e18u;
    // NOP
label_267e1c:
    // 0x267e1c: 0x0  nop
    ctx->pc = 0x267e1cu;
    // NOP
label_267e20:
    // 0x267e20: 0x11f07  .word       0x00011F07                   # srav        $v1, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267e20u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_267e24:
    // 0x267e24: 0x77c0  sll         $t6, $zero, 31
    ctx->pc = 0x267e24u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_267e28:
    // 0x267e28: 0x0  nop
    ctx->pc = 0x267e28u;
    // NOP
label_267e2c:
    // 0x267e2c: 0x0  nop
    ctx->pc = 0x267e2cu;
    // NOP
label_267e30:
    // 0x267e30: 0x11f16  .word       0x00011F16                   # dsrlv       $v1, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_267e34:
    // 0x267e34: 0x71e0  .word       0x000071E0                   # add         $t6, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267e34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_267e38:
    // 0x267e38: 0x0  nop
    ctx->pc = 0x267e38u;
    // NOP
label_267e3c:
    // 0x267e3c: 0x0  nop
    ctx->pc = 0x267e3cu;
    // NOP
label_267e40:
    // 0x267e40: 0x11f25  .word       0x00011F25                   # or          $v1, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_267e44:
    // 0x267e44: 0x81b0  tge         $zero, $zero, 518
    ctx->pc = 0x267e44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267e48:
    // 0x267e48: 0x0  nop
    ctx->pc = 0x267e48u;
    // NOP
label_267e4c:
    // 0x267e4c: 0x0  nop
    ctx->pc = 0x267e4cu;
    // NOP
label_267e50:
    // 0x267e50: 0x11f36  tne         $zero, $at, 124
    ctx->pc = 0x267e50u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267e54:
    // 0x267e54: 0xc190  .word       0x0000C190                   # mfhi        $t8 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267e54u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_267e58:
    // 0x267e58: 0x0  nop
    ctx->pc = 0x267e58u;
    // NOP
label_267e5c:
    // 0x267e5c: 0x0  nop
    ctx->pc = 0x267e5cu;
    // NOP
label_267e60:
    // 0x267e60: 0x11f4f  .word       0x00011F4F                   # sync.p # 00011800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267e60u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_267e64:
    // 0x267e64: 0x6660  .word       0x00006660                   # add         $t4, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267e64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_267e68:
    // 0x267e68: 0x0  nop
    ctx->pc = 0x267e68u;
    // NOP
label_267e6c:
    // 0x267e6c: 0x0  nop
    ctx->pc = 0x267e6cu;
    // NOP
label_267e70:
    // 0x267e70: 0x11f5c  .word       0x00011F5C                   # dmult       $zero, $at # 00001F40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267e70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x267E70 raw=0x00011F5C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267e74:
    // 0x267e74: 0x70f0  tge         $zero, $zero, 451
    ctx->pc = 0x267e74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267e78:
    // 0x267e78: 0x0  nop
    ctx->pc = 0x267e78u;
    // NOP
label_267e7c:
    // 0x267e7c: 0x0  nop
    ctx->pc = 0x267e7cu;
    // NOP
label_267e80:
    // 0x267e80: 0x11f6b  .word       0x00011F6B                   # sltu        $v1, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267e80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_267e84:
    // 0x267e84: 0x5cd0  .word       0x00005CD0                   # mfhi        $t3 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267e84u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_267e88:
    // 0x267e88: 0x0  nop
    ctx->pc = 0x267e88u;
    // NOP
label_267e8c:
    // 0x267e8c: 0x0  nop
    ctx->pc = 0x267e8cu;
    // NOP
label_267e90:
    // 0x267e90: 0x11f77  .word       0x00011F77                   # INVALID     $zero, $at, 0x1F77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267e90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x267E90 raw=0x00011F77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267e94:
    // 0x267e94: 0x7800  sll         $t7, $zero, 0
    ctx->pc = 0x267e94u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_267e98:
    // 0x267e98: 0x0  nop
    ctx->pc = 0x267e98u;
    // NOP
label_267e9c:
    // 0x267e9c: 0x0  nop
    ctx->pc = 0x267e9cu;
    // NOP
label_267ea0:
    // 0x267ea0: 0x11f86  .word       0x00011F86                   # srlv        $v1, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_267ea4:
    // 0x267ea4: 0x6f30  tge         $zero, $zero, 444
    ctx->pc = 0x267ea4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267ea8:
    // 0x267ea8: 0x0  nop
    ctx->pc = 0x267ea8u;
    // NOP
label_267eac:
    // 0x267eac: 0x0  nop
    ctx->pc = 0x267eacu;
    // NOP
label_267eb0:
    // 0x267eb0: 0x11f94  .word       0x00011F94                   # dsllv       $v1, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_267eb4:
    // 0x267eb4: 0xbee0  .word       0x0000BEE0                   # add         $s7, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267eb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_267eb8:
    // 0x267eb8: 0x0  nop
    ctx->pc = 0x267eb8u;
    // NOP
label_267ebc:
    // 0x267ebc: 0x0  nop
    ctx->pc = 0x267ebcu;
    // NOP
label_267ec0:
    // 0x267ec0: 0x11fac  .word       0x00011FAC                   # dadd        $v1, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267ec0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_267ec4:
    // 0x267ec4: 0x9b00  sll         $s3, $zero, 12
    ctx->pc = 0x267ec4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_267ec8:
    // 0x267ec8: 0x0  nop
    ctx->pc = 0x267ec8u;
    // NOP
label_267ecc:
    // 0x267ecc: 0x0  nop
    ctx->pc = 0x267eccu;
    // NOP
label_267ed0:
    // 0x267ed0: 0x11fc0  sll         $v1, $at, 31
    ctx->pc = 0x267ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 31));
label_267ed4:
    // 0x267ed4: 0x6cc0  sll         $t5, $zero, 19
    ctx->pc = 0x267ed4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_267ed8:
    // 0x267ed8: 0x0  nop
    ctx->pc = 0x267ed8u;
    // NOP
label_267edc:
    // 0x267edc: 0x0  nop
    ctx->pc = 0x267edcu;
    // NOP
label_267ee0:
    // 0x267ee0: 0x11fce  .word       0x00011FCE                   # INVALID     $zero, $at, 0x1FCE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267ee0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x267EE0 raw=0x00011FCE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267ee4:
    // 0x267ee4: 0x6a00  sll         $t5, $zero, 8
    ctx->pc = 0x267ee4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_267ee8:
    // 0x267ee8: 0x0  nop
    ctx->pc = 0x267ee8u;
    // NOP
label_267eec:
    // 0x267eec: 0x0  nop
    ctx->pc = 0x267eecu;
    // NOP
label_267ef0:
    // 0x267ef0: 0x11fdc  .word       0x00011FDC                   # dmult       $zero, $at # 00001FC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267ef0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x267EF0 raw=0x00011FDC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267ef4:
    // 0x267ef4: 0x4860  .word       0x00004860                   # add         $t1, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267ef4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_267ef8:
    // 0x267ef8: 0x0  nop
    ctx->pc = 0x267ef8u;
    // NOP
label_267efc:
    // 0x267efc: 0x0  nop
    ctx->pc = 0x267efcu;
    // NOP
label_267f00:
    // 0x267f00: 0x11fe6  .word       0x00011FE6                   # xor         $v1, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_267f04:
    // 0x267f04: 0x7df0  tge         $zero, $zero, 503
    ctx->pc = 0x267f04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267f08:
    // 0x267f08: 0x0  nop
    ctx->pc = 0x267f08u;
    // NOP
label_267f0c:
    // 0x267f0c: 0x0  nop
    ctx->pc = 0x267f0cu;
    // NOP
label_267f10:
    // 0x267f10: 0x11ff6  tne         $zero, $at, 127
    ctx->pc = 0x267f10u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267f14:
    // 0x267f14: 0x79c0  sll         $t7, $zero, 7
    ctx->pc = 0x267f14u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_267f18:
    // 0x267f18: 0x0  nop
    ctx->pc = 0x267f18u;
    // NOP
label_267f1c:
    // 0x267f1c: 0x0  nop
    ctx->pc = 0x267f1cu;
    // NOP
label_267f20:
    // 0x267f20: 0x12006  srlv        $a0, $at, $zero
    ctx->pc = 0x267f20u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_267f24:
    // 0x267f24: 0x6ef0  tge         $zero, $zero, 443
    ctx->pc = 0x267f24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267f28:
    // 0x267f28: 0x0  nop
    ctx->pc = 0x267f28u;
    // NOP
label_267f2c:
    // 0x267f2c: 0x0  nop
    ctx->pc = 0x267f2cu;
    // NOP
label_267f30:
    // 0x267f30: 0x12014  dsllv       $a0, $at, $zero
    ctx->pc = 0x267f30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_267f34:
    // 0x267f34: 0x4610  .word       0x00004610                   # mfhi        $t0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267f34u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_267f38:
    // 0x267f38: 0x0  nop
    ctx->pc = 0x267f38u;
    // NOP
label_267f3c:
    // 0x267f3c: 0x0  nop
    ctx->pc = 0x267f3cu;
    // NOP
label_267f40:
    // 0x267f40: 0x1201d  .word       0x0001201D                   # dmultu      $zero, $at # 00002000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267f40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x267F40 raw=0x0001201D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267f44:
    // 0x267f44: 0x9510  .word       0x00009510                   # mfhi        $s2 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267f44u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_267f48:
    // 0x267f48: 0x0  nop
    ctx->pc = 0x267f48u;
    // NOP
label_267f4c:
    // 0x267f4c: 0x0  nop
    ctx->pc = 0x267f4cu;
    // NOP
label_267f50:
    // 0x267f50: 0x12030  tge         $zero, $at, 128
    ctx->pc = 0x267f50u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267f54:
    // 0x267f54: 0x6690  .word       0x00006690                   # mfhi        $t4 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267f54u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_267f58:
    // 0x267f58: 0x0  nop
    ctx->pc = 0x267f58u;
    // NOP
label_267f5c:
    // 0x267f5c: 0x0  nop
    ctx->pc = 0x267f5cu;
    // NOP
label_267f60:
    // 0x267f60: 0x1203d  .word       0x0001203D                   # INVALID     $zero, $at, 0x203D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267f60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x267F60 raw=0x0001203D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267f64:
    // 0x267f64: 0x7780  sll         $t6, $zero, 30
    ctx->pc = 0x267f64u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_267f68:
    // 0x267f68: 0x0  nop
    ctx->pc = 0x267f68u;
    // NOP
label_267f6c:
    // 0x267f6c: 0x0  nop
    ctx->pc = 0x267f6cu;
    // NOP
label_267f70:
    // 0x267f70: 0x1204c  .word       0x0001204C                   # syscall     129 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267f70u;
    ctx->pc = 0x267F74u;
runtime->handleSyscall(rdram, ctx, 0x481u);
label_267f74:
    // 0x267f74: 0xa0f0  tge         $zero, $zero, 643
    ctx->pc = 0x267f74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267f78:
    // 0x267f78: 0x0  nop
    ctx->pc = 0x267f78u;
    // NOP
label_267f7c:
    // 0x267f7c: 0x0  nop
    ctx->pc = 0x267f7cu;
    // NOP
label_267f80:
    // 0x267f80: 0x12061  .word       0x00012061                   # addu        $a0, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_267f84:
    // 0x267f84: 0xc020  add         $t8, $zero, $zero
    ctx->pc = 0x267f84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_267f88:
    // 0x267f88: 0x0  nop
    ctx->pc = 0x267f88u;
    // NOP
label_267f8c:
    // 0x267f8c: 0x0  nop
    ctx->pc = 0x267f8cu;
    // NOP
label_267f90:
    // 0x267f90: 0x1207a  dsrl        $a0, $at, 1
    ctx->pc = 0x267f90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) >> 1);
label_267f94:
    // 0x267f94: 0xa000  sll         $s4, $zero, 0
    ctx->pc = 0x267f94u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_267f98:
    // 0x267f98: 0x0  nop
    ctx->pc = 0x267f98u;
    // NOP
label_267f9c:
    // 0x267f9c: 0x0  nop
    ctx->pc = 0x267f9cu;
    // NOP
label_267fa0:
    // 0x267fa0: 0x1208e  .word       0x0001208E                   # INVALID     $zero, $at, 0x208E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267fa0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x267FA0 raw=0x0001208E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267fa4:
    // 0x267fa4: 0xb2b0  tge         $zero, $zero, 714
    ctx->pc = 0x267fa4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267fa8:
    // 0x267fa8: 0x0  nop
    ctx->pc = 0x267fa8u;
    // NOP
label_267fac:
    // 0x267fac: 0x0  nop
    ctx->pc = 0x267facu;
    // NOP
label_267fb0:
    // 0x267fb0: 0x120a5  .word       0x000120A5                   # or          $a0, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267fb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_267fb4:
    // 0x267fb4: 0x3f60  .word       0x00003F60                   # add         $a3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267fb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_267fb8:
    // 0x267fb8: 0x0  nop
    ctx->pc = 0x267fb8u;
    // NOP
label_267fbc:
    // 0x267fbc: 0x0  nop
    ctx->pc = 0x267fbcu;
    // NOP
label_267fc0:
    // 0x267fc0: 0x120ad  .word       0x000120AD                   # daddu       $a0, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_267fc4:
    // 0x267fc4: 0x80d0  .word       0x000080D0                   # mfhi        $s0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267fc4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_267fc8:
    // 0x267fc8: 0x0  nop
    ctx->pc = 0x267fc8u;
    // NOP
label_267fcc:
    // 0x267fcc: 0x0  nop
    ctx->pc = 0x267fccu;
    // NOP
label_267fd0:
    // 0x267fd0: 0x120be  dsrl32      $a0, $at, 2
    ctx->pc = 0x267fd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) >> (32 + 2));
label_267fd4:
    // 0x267fd4: 0x4680  sll         $t0, $zero, 26
    ctx->pc = 0x267fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_267fd8:
    // 0x267fd8: 0x0  nop
    ctx->pc = 0x267fd8u;
    // NOP
label_267fdc:
    // 0x267fdc: 0x0  nop
    ctx->pc = 0x267fdcu;
    // NOP
label_267fe0:
    // 0x267fe0: 0x120c7  .word       0x000120C7                   # srav        $a0, $at, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267fe0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_267fe4:
    // 0x267fe4: 0xd250  .word       0x0000D250                   # mfhi        $k0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267fe4u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_267fe8:
    // 0x267fe8: 0x0  nop
    ctx->pc = 0x267fe8u;
    // NOP
label_267fec:
    // 0x267fec: 0x0  nop
    ctx->pc = 0x267fecu;
    // NOP
label_267ff0:
    // 0x267ff0: 0x120e2  .word       0x000120E2                   # neg         $a0, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267ff0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_267ff4:
    // 0x267ff4: 0x8920  .word       0x00008920                   # add         $s1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267ff4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_267ff8:
    // 0x267ff8: 0x0  nop
    ctx->pc = 0x267ff8u;
    // NOP
label_267ffc:
    // 0x267ffc: 0x0  nop
    ctx->pc = 0x267ffcu;
    // NOP
label_268000:
    // 0x268000: 0x120f4  teq         $zero, $at, 131
    ctx->pc = 0x268000u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_268004:
    // 0x268004: 0x7420  .word       0x00007420                   # add         $t6, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268004u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_268008:
    // 0x268008: 0x0  nop
    ctx->pc = 0x268008u;
    // NOP
label_26800c:
    // 0x26800c: 0x0  nop
    ctx->pc = 0x26800cu;
    // NOP
label_268010:
    // 0x268010: 0x12103  sra         $a0, $at, 4
    ctx->pc = 0x268010u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 1), 4));
label_268014:
    // 0x268014: 0x69e0  .word       0x000069E0                   # add         $t5, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268014u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_268018:
    // 0x268018: 0x0  nop
    ctx->pc = 0x268018u;
    // NOP
label_26801c:
    // 0x26801c: 0x0  nop
    ctx->pc = 0x26801cu;
    // NOP
label_268020:
    // 0x268020: 0x12111  .word       0x00012111                   # mthi        $zero # 00012100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268020u;
    ctx->hi = GPR_U64(ctx, 0);
label_268024:
    // 0x268024: 0x9df0  tge         $zero, $zero, 631
    ctx->pc = 0x268024u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268028:
    // 0x268028: 0x0  nop
    ctx->pc = 0x268028u;
    // NOP
label_26802c:
    // 0x26802c: 0x0  nop
    ctx->pc = 0x26802cu;
    // NOP
label_268030:
    // 0x268030: 0x12125  .word       0x00012125                   # or          $a0, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268030u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_268034:
    // 0x268034: 0x6b50  .word       0x00006B50                   # mfhi        $t5 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268034u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_268038:
    // 0x268038: 0x0  nop
    ctx->pc = 0x268038u;
    // NOP
label_26803c:
    // 0x26803c: 0x0  nop
    ctx->pc = 0x26803cu;
    // NOP
label_268040:
    // 0x268040: 0x12133  tltu        $zero, $at, 132
    ctx->pc = 0x268040u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_268044:
    // 0x268044: 0x8620  .word       0x00008620                   # add         $s0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268044u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_268048:
    // 0x268048: 0x0  nop
    ctx->pc = 0x268048u;
    // NOP
label_26804c:
    // 0x26804c: 0x0  nop
    ctx->pc = 0x26804cu;
    // NOP
label_268050:
    // 0x268050: 0x12144  .word       0x00012144                   # sllv        $a0, $at, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268050u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_268054:
    // 0x268054: 0x80f0  tge         $zero, $zero, 515
    ctx->pc = 0x268054u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268058:
    // 0x268058: 0x0  nop
    ctx->pc = 0x268058u;
    // NOP
label_26805c:
    // 0x26805c: 0x0  nop
    ctx->pc = 0x26805cu;
    // NOP
label_268060:
    // 0x268060: 0x12155  .word       0x00012155                   # INVALID     $zero, $at, 0x2155 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268060u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x268060 raw=0x00012155"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268064:
    // 0x268064: 0x7570  tge         $zero, $zero, 469
    ctx->pc = 0x268064u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268068:
    // 0x268068: 0x0  nop
    ctx->pc = 0x268068u;
    // NOP
label_26806c:
    // 0x26806c: 0x0  nop
    ctx->pc = 0x26806cu;
    // NOP
label_268070:
    // 0x268070: 0x12164  .word       0x00012164                   # and         $a0, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_268074:
    // 0x268074: 0xda90  .word       0x0000DA90                   # mfhi        $k1 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268074u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_268078:
    // 0x268078: 0x0  nop
    ctx->pc = 0x268078u;
    // NOP
label_26807c:
    // 0x26807c: 0x0  nop
    ctx->pc = 0x26807cu;
    // NOP
label_268080:
    // 0x268080: 0x12180  sll         $a0, $at, 6
    ctx->pc = 0x268080u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 6));
label_268084:
    // 0x268084: 0x9d20  .word       0x00009D20                   # add         $s3, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268084u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_268088:
    // 0x268088: 0x0  nop
    ctx->pc = 0x268088u;
    // NOP
label_26808c:
    // 0x26808c: 0x0  nop
    ctx->pc = 0x26808cu;
    // NOP
label_268090:
    // 0x268090: 0x12194  .word       0x00012194                   # dsllv       $a0, $at, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_268094:
    // 0x268094: 0x6e90  .word       0x00006E90                   # mfhi        $t5 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268094u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_268098:
    // 0x268098: 0x0  nop
    ctx->pc = 0x268098u;
    // NOP
label_26809c:
    // 0x26809c: 0x0  nop
    ctx->pc = 0x26809cu;
    // NOP
label_2680a0:
    // 0x2680a0: 0x121a2  .word       0x000121A2                   # neg         $a0, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2680a0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2680a4:
    // 0x2680a4: 0x4d50  .word       0x00004D50                   # mfhi        $t1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2680a4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_2680a8:
    // 0x2680a8: 0x0  nop
    ctx->pc = 0x2680a8u;
    // NOP
label_2680ac:
    // 0x2680ac: 0x0  nop
    ctx->pc = 0x2680acu;
    // NOP
label_2680b0:
    // 0x2680b0: 0x121ac  .word       0x000121AC                   # dadd        $a0, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2680b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_2680b4:
    // 0x2680b4: 0x4fe0  .word       0x00004FE0                   # add         $t1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2680b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2680b8:
    // 0x2680b8: 0x0  nop
    ctx->pc = 0x2680b8u;
    // NOP
label_2680bc:
    // 0x2680bc: 0x0  nop
    ctx->pc = 0x2680bcu;
    // NOP
label_2680c0:
    // 0x2680c0: 0x121b6  tne         $zero, $at, 134
    ctx->pc = 0x2680c0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2680c4:
    // 0x2680c4: 0x7790  .word       0x00007790                   # mfhi        $t6 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2680c4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2680c8:
    // 0x2680c8: 0x0  nop
    ctx->pc = 0x2680c8u;
    // NOP
label_2680cc:
    // 0x2680cc: 0x0  nop
    ctx->pc = 0x2680ccu;
    // NOP
label_2680d0:
    // 0x2680d0: 0x121c5  .word       0x000121C5                   # INVALID     $zero, $at, 0x21C5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2680d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2680D0 raw=0x000121C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2680d4:
    // 0x2680d4: 0x8a50  .word       0x00008A50                   # mfhi        $s1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2680d4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2680d8:
    // 0x2680d8: 0x0  nop
    ctx->pc = 0x2680d8u;
    // NOP
label_2680dc:
    // 0x2680dc: 0x0  nop
    ctx->pc = 0x2680dcu;
    // NOP
label_2680e0:
    // 0x2680e0: 0x121d7  .word       0x000121D7                   # dsrav       $a0, $at, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2680e0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_2680e4:
    // 0x2680e4: 0x73b0  tge         $zero, $zero, 462
    ctx->pc = 0x2680e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2680e8:
    // 0x2680e8: 0x0  nop
    ctx->pc = 0x2680e8u;
    // NOP
label_2680ec:
    // 0x2680ec: 0x0  nop
    ctx->pc = 0x2680ecu;
    // NOP
label_2680f0:
    // 0x2680f0: 0x121e6  .word       0x000121E6                   # xor         $a0, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2680f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_2680f4:
    // 0x2680f4: 0x44c0  sll         $t0, $zero, 19
    ctx->pc = 0x2680f4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_2680f8:
    // 0x2680f8: 0x0  nop
    ctx->pc = 0x2680f8u;
    // NOP
label_2680fc:
    // 0x2680fc: 0x0  nop
    ctx->pc = 0x2680fcu;
    // NOP
label_268100:
    // 0x268100: 0x121ef  .word       0x000121EF                   # dsubu       $a0, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_268104:
    // 0x268104: 0x9df0  tge         $zero, $zero, 631
    ctx->pc = 0x268104u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268108:
    // 0x268108: 0x0  nop
    ctx->pc = 0x268108u;
    // NOP
label_26810c:
    // 0x26810c: 0x0  nop
    ctx->pc = 0x26810cu;
    // NOP
label_268110:
    // 0x268110: 0x12203  sra         $a0, $at, 8
    ctx->pc = 0x268110u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 1), 8));
label_268114:
    // 0x268114: 0xba90  .word       0x0000BA90                   # mfhi        $s7 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268114u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_268118:
    // 0x268118: 0x0  nop
    ctx->pc = 0x268118u;
    // NOP
label_26811c:
    // 0x26811c: 0x0  nop
    ctx->pc = 0x26811cu;
    // NOP
label_268120:
    // 0x268120: 0x1221b  .word       0x0001221B                   # divu        $a0, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268120u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_268124:
    // 0x268124: 0xce30  tge         $zero, $zero, 824
    ctx->pc = 0x268124u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268128:
    // 0x268128: 0x0  nop
    ctx->pc = 0x268128u;
    // NOP
label_26812c:
    // 0x26812c: 0x0  nop
    ctx->pc = 0x26812cu;
    // NOP
label_268130:
    // 0x268130: 0x12235  .word       0x00012235                   # INVALID     $zero, $at, 0x2235 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268130u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x268130 raw=0x00012235"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268134:
    // 0x268134: 0xc9e0  .word       0x0000C9E0                   # add         $t9, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268134u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_268138:
    // 0x268138: 0x0  nop
    ctx->pc = 0x268138u;
    // NOP
label_26813c:
    // 0x26813c: 0x0  nop
    ctx->pc = 0x26813cu;
    // NOP
label_268140:
    // 0x268140: 0x1224f  .word       0x0001224F                   # sync # 00012000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268140u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_268144:
    // 0x268144: 0x4990  .word       0x00004990                   # mfhi        $t1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268144u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_268148:
    // 0x268148: 0x0  nop
    ctx->pc = 0x268148u;
    // NOP
label_26814c:
    // 0x26814c: 0x0  nop
    ctx->pc = 0x26814cu;
    // NOP
label_268150:
    // 0x268150: 0x12259  .word       0x00012259                   # multu       $zero, $at # 00002240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268150u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_268154:
    // 0x268154: 0x7220  .word       0x00007220                   # add         $t6, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268154u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_268158:
    // 0x268158: 0x0  nop
    ctx->pc = 0x268158u;
    // NOP
label_26815c:
    // 0x26815c: 0x0  nop
    ctx->pc = 0x26815cu;
    // NOP
label_268160:
    // 0x268160: 0x12268  .word       0x00012268                   # mfsa        $a0 # 00010240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x268160u;
    SET_GPR_U32(ctx, 4, ctx->sa);
label_268164:
    // 0x268164: 0x3350  .word       0x00003350                   # mfhi        $a2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268164u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_268168:
    // 0x268168: 0x0  nop
    ctx->pc = 0x268168u;
    // NOP
label_26816c:
    // 0x26816c: 0x0  nop
    ctx->pc = 0x26816cu;
    // NOP
label_268170:
    // 0x268170: 0x1226f  .word       0x0001226F                   # dsubu       $a0, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_268174:
    // 0x268174: 0x4d50  .word       0x00004D50                   # mfhi        $t1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268174u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_268178:
    // 0x268178: 0x0  nop
    ctx->pc = 0x268178u;
    // NOP
label_26817c:
    // 0x26817c: 0x0  nop
    ctx->pc = 0x26817cu;
    // NOP
label_268180:
    // 0x268180: 0x12279  .word       0x00012279                   # INVALID     $zero, $at, 0x2279 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268180u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x268180 raw=0x00012279"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268184:
    // 0x268184: 0x9cc0  sll         $s3, $zero, 19
    ctx->pc = 0x268184u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_268188:
    // 0x268188: 0x0  nop
    ctx->pc = 0x268188u;
    // NOP
label_26818c:
    // 0x26818c: 0x0  nop
    ctx->pc = 0x26818cu;
    // NOP
label_268190:
    // 0x268190: 0x1228d  break       1, 138
    ctx->pc = 0x268190u;
    runtime->handleBreak(rdram, ctx);
label_268194:
    // 0x268194: 0x6350  .word       0x00006350                   # mfhi        $t4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268194u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_268198:
    // 0x268198: 0x0  nop
    ctx->pc = 0x268198u;
    // NOP
label_26819c:
    // 0x26819c: 0x0  nop
    ctx->pc = 0x26819cu;
    // NOP
label_2681a0:
    // 0x2681a0: 0x1229a  .word       0x0001229A                   # div         $a0, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2681a0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2681a4:
    // 0x2681a4: 0x7590  .word       0x00007590                   # mfhi        $t6 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2681a4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2681a8:
    // 0x2681a8: 0x0  nop
    ctx->pc = 0x2681a8u;
    // NOP
label_2681ac:
    // 0x2681ac: 0x0  nop
    ctx->pc = 0x2681acu;
    // NOP
label_2681b0:
    // 0x2681b0: 0x122a9  .word       0x000122A9                   # mtsa        $zero # 00012280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2681b0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2681b4:
    // 0x2681b4: 0x6590  .word       0x00006590                   # mfhi        $t4 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2681b4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_2681b8:
    // 0x2681b8: 0x0  nop
    ctx->pc = 0x2681b8u;
    // NOP
label_2681bc:
    // 0x2681bc: 0x0  nop
    ctx->pc = 0x2681bcu;
    // NOP
label_2681c0:
    // 0x2681c0: 0x122b6  tne         $zero, $at, 138
    ctx->pc = 0x2681c0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2681c4:
    // 0x2681c4: 0xe550  .word       0x0000E550                   # mfhi        $gp # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2681c4u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_2681c8:
    // 0x2681c8: 0x0  nop
    ctx->pc = 0x2681c8u;
    // NOP
label_2681cc:
    // 0x2681cc: 0x0  nop
    ctx->pc = 0x2681ccu;
    // NOP
label_2681d0:
    // 0x2681d0: 0x122d3  .word       0x000122D3                   # mtlo        $zero # 000122C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2681d0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2681d4:
    // 0x2681d4: 0x6c60  .word       0x00006C60                   # add         $t5, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2681d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2681d8:
    // 0x2681d8: 0x0  nop
    ctx->pc = 0x2681d8u;
    // NOP
label_2681dc:
    // 0x2681dc: 0x0  nop
    ctx->pc = 0x2681dcu;
    // NOP
label_2681e0:
    // 0x2681e0: 0x122e1  .word       0x000122E1                   # addu        $a0, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2681e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2681e4:
    // 0x2681e4: 0x98d0  .word       0x000098D0                   # mfhi        $s3 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2681e4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_2681e8:
    // 0x2681e8: 0x0  nop
    ctx->pc = 0x2681e8u;
    // NOP
label_2681ec:
    // 0x2681ec: 0x0  nop
    ctx->pc = 0x2681ecu;
    // NOP
label_2681f0:
    // 0x2681f0: 0x122f5  .word       0x000122F5                   # INVALID     $zero, $at, 0x22F5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2681f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2681F0 raw=0x000122F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2681f4:
    // 0x2681f4: 0x7d80  sll         $t7, $zero, 22
    ctx->pc = 0x2681f4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_2681f8:
    // 0x2681f8: 0x0  nop
    ctx->pc = 0x2681f8u;
    // NOP
label_2681fc:
    // 0x2681fc: 0x0  nop
    ctx->pc = 0x2681fcu;
    // NOP
label_268200:
    // 0x268200: 0x12305  .word       0x00012305                   # INVALID     $zero, $at, 0x2305 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268200u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x268200 raw=0x00012305"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268204:
    // 0x268204: 0x61d0  .word       0x000061D0                   # mfhi        $t4 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268204u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_268208:
    // 0x268208: 0x0  nop
    ctx->pc = 0x268208u;
    // NOP
label_26820c:
    // 0x26820c: 0x0  nop
    ctx->pc = 0x26820cu;
    // NOP
label_268210:
    // 0x268210: 0x12312  .word       0x00012312                   # mflo        $a0 # 00010300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268210u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_268214:
    // 0x268214: 0xcac0  sll         $t9, $zero, 11
    ctx->pc = 0x268214u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_268218:
    // 0x268218: 0x0  nop
    ctx->pc = 0x268218u;
    // NOP
label_26821c:
    // 0x26821c: 0x0  nop
    ctx->pc = 0x26821cu;
    // NOP
label_268220:
    // 0x268220: 0x1232c  .word       0x0001232C                   # dadd        $a0, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268220u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_268224:
    // 0x268224: 0x83f0  tge         $zero, $zero, 527
    ctx->pc = 0x268224u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268228:
    // 0x268228: 0x0  nop
    ctx->pc = 0x268228u;
    // NOP
label_26822c:
    // 0x26822c: 0x0  nop
    ctx->pc = 0x26822cu;
    // NOP
label_268230:
    // 0x268230: 0x1233d  .word       0x0001233D                   # INVALID     $zero, $at, 0x233D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268230u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x268230 raw=0x0001233D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268234:
    // 0x268234: 0x5f70  tge         $zero, $zero, 381
    ctx->pc = 0x268234u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268238:
    // 0x268238: 0x0  nop
    ctx->pc = 0x268238u;
    // NOP
label_26823c:
    // 0x26823c: 0x0  nop
    ctx->pc = 0x26823cu;
    // NOP
label_268240:
    // 0x268240: 0x12349  .word       0x00012349                   # jalr        $a0, $zero # 00010340 <InstrIdType: CPU_SPECIAL>
label_268244:
    if (ctx->pc == 0x268244u) {
        ctx->pc = 0x268244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268240u;
        // 0x268244: 0x9aa0  .word       0x00009AA0                   # add         $s3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x268248u;
        goto label_268248;
    }
    ctx->pc = 0x268240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 4, 0x268248u);
        ctx->pc = 0x268244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268240u;
        // 0x268244: 0x9aa0  .word       0x00009AA0                   # add         $s3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268240u, 0x268248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x268248u;
label_268248:
    // 0x268248: 0x0  nop
    ctx->pc = 0x268248u;
    // NOP
label_26824c:
    // 0x26824c: 0x0  nop
    ctx->pc = 0x26824cu;
    // NOP
label_268250:
    // 0x268250: 0x1235d  .word       0x0001235D                   # dmultu      $zero, $at # 00002340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268250u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x268250 raw=0x0001235D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268254:
    // 0x268254: 0x7c60  .word       0x00007C60                   # add         $t7, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268254u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_268258:
    // 0x268258: 0x0  nop
    ctx->pc = 0x268258u;
    // NOP
label_26825c:
    // 0x26825c: 0x0  nop
    ctx->pc = 0x26825cu;
    // NOP
label_268260:
    // 0x268260: 0x1236d  .word       0x0001236D                   # daddu       $a0, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_268264:
    // 0x268264: 0xf310  .word       0x0000F310                   # mfhi        $fp # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268264u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_268268:
    // 0x268268: 0x0  nop
    ctx->pc = 0x268268u;
    // NOP
label_26826c:
    // 0x26826c: 0x0  nop
    ctx->pc = 0x26826cu;
    // NOP
label_268270:
    // 0x268270: 0x1238c  .word       0x0001238C                   # syscall     142 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268270u;
    ctx->pc = 0x268274u;
runtime->handleSyscall(rdram, ctx, 0x48Eu);
label_268274:
    // 0x268274: 0xcd40  sll         $t9, $zero, 21
    ctx->pc = 0x268274u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_268278:
    // 0x268278: 0x0  nop
    ctx->pc = 0x268278u;
    // NOP
label_26827c:
    // 0x26827c: 0x0  nop
    ctx->pc = 0x26827cu;
    // NOP
label_268280:
    // 0x268280: 0x123a6  .word       0x000123A6                   # xor         $a0, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268280u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_268284:
    // 0x268284: 0xc0f0  tge         $zero, $zero, 771
    ctx->pc = 0x268284u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268288:
    // 0x268288: 0x0  nop
    ctx->pc = 0x268288u;
    // NOP
label_26828c:
    // 0x26828c: 0x0  nop
    ctx->pc = 0x26828cu;
    // NOP
label_268290:
    // 0x268290: 0x123bf  dsra32      $a0, $at, 14
    ctx->pc = 0x268290u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 1) >> (32 + 14));
label_268294:
    // 0x268294: 0x9bb0  tge         $zero, $zero, 622
    ctx->pc = 0x268294u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268298:
    // 0x268298: 0x0  nop
    ctx->pc = 0x268298u;
    // NOP
label_26829c:
    // 0x26829c: 0x0  nop
    ctx->pc = 0x26829cu;
    // NOP
label_2682a0:
    // 0x2682a0: 0x123d3  .word       0x000123D3                   # mtlo        $zero # 000123C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2682a0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2682a4:
    // 0x2682a4: 0xb580  sll         $s6, $zero, 22
    ctx->pc = 0x2682a4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_2682a8:
    // 0x2682a8: 0x0  nop
    ctx->pc = 0x2682a8u;
    // NOP
label_2682ac:
    // 0x2682ac: 0x0  nop
    ctx->pc = 0x2682acu;
    // NOP
label_2682b0:
    // 0x2682b0: 0x123ea  .word       0x000123EA                   # slt         $a0, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2682b0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_2682b4:
    // 0x2682b4: 0x7c40  sll         $t7, $zero, 17
    ctx->pc = 0x2682b4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2682b8:
    // 0x2682b8: 0x0  nop
    ctx->pc = 0x2682b8u;
    // NOP
label_2682bc:
    // 0x2682bc: 0x0  nop
    ctx->pc = 0x2682bcu;
    // NOP
label_2682c0:
    // 0x2682c0: 0x123fa  dsrl        $a0, $at, 15
    ctx->pc = 0x2682c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) >> 15);
label_2682c4:
    // 0x2682c4: 0x8a90  .word       0x00008A90                   # mfhi        $s1 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2682c4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2682c8:
    // 0x2682c8: 0x0  nop
    ctx->pc = 0x2682c8u;
    // NOP
label_2682cc:
    // 0x2682cc: 0x0  nop
    ctx->pc = 0x2682ccu;
    // NOP
label_2682d0:
    // 0x2682d0: 0x1240c  .word       0x0001240C                   # syscall     144 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2682d0u;
    ctx->pc = 0x2682D4u;
runtime->handleSyscall(rdram, ctx, 0x490u);
label_2682d4:
    // 0x2682d4: 0x88f0  tge         $zero, $zero, 547
    ctx->pc = 0x2682d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2682d8:
    // 0x2682d8: 0x0  nop
    ctx->pc = 0x2682d8u;
    // NOP
label_2682dc:
    // 0x2682dc: 0x0  nop
    ctx->pc = 0x2682dcu;
    // NOP
label_2682e0:
    // 0x2682e0: 0x1241e  .word       0x0001241E                   # ddiv        $a0, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2682e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2682E0 raw=0x0001241E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2682e4:
    // 0x2682e4: 0x57a0  .word       0x000057A0                   # add         $t2, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2682e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_2682e8:
    // 0x2682e8: 0x0  nop
    ctx->pc = 0x2682e8u;
    // NOP
label_2682ec:
    // 0x2682ec: 0x0  nop
    ctx->pc = 0x2682ecu;
    // NOP
label_2682f0:
    // 0x2682f0: 0x12429  .word       0x00012429                   # mtsa        $zero # 00012400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2682f0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2682f4:
    // 0x2682f4: 0xe470  tge         $zero, $zero, 913
    ctx->pc = 0x2682f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2682f8:
    // 0x2682f8: 0x0  nop
    ctx->pc = 0x2682f8u;
    // NOP
label_2682fc:
    // 0x2682fc: 0x0  nop
    ctx->pc = 0x2682fcu;
    // NOP
label_268300:
    // 0x268300: 0x12446  .word       0x00012446                   # srlv        $a0, $at, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268300u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_268304:
    // 0x268304: 0x7f50  .word       0x00007F50                   # mfhi        $t7 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268304u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_268308:
    // 0x268308: 0x0  nop
    ctx->pc = 0x268308u;
    // NOP
label_26830c:
    // 0x26830c: 0x0  nop
    ctx->pc = 0x26830cu;
    // NOP
label_268310:
    // 0x268310: 0x12456  .word       0x00012456                   # dsrlv       $a0, $at, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268310u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_268314:
    // 0x268314: 0xca20  .word       0x0000CA20                   # add         $t9, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268314u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_268318:
    // 0x268318: 0x0  nop
    ctx->pc = 0x268318u;
    // NOP
label_26831c:
    // 0x26831c: 0x0  nop
    ctx->pc = 0x26831cu;
    // NOP
label_268320:
    // 0x268320: 0x12470  tge         $zero, $at, 145
    ctx->pc = 0x268320u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_268324:
    // 0x268324: 0x9590  .word       0x00009590                   # mfhi        $s2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268324u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_268328:
    // 0x268328: 0x0  nop
    ctx->pc = 0x268328u;
    // NOP
label_26832c:
    // 0x26832c: 0x0  nop
    ctx->pc = 0x26832cu;
    // NOP
label_268330:
    // 0x268330: 0x12483  sra         $a0, $at, 18
    ctx->pc = 0x268330u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 1), 18));
label_268334:
    // 0x268334: 0x7f50  .word       0x00007F50                   # mfhi        $t7 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268334u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_268338:
    // 0x268338: 0x0  nop
    ctx->pc = 0x268338u;
    // NOP
label_26833c:
    // 0x26833c: 0x0  nop
    ctx->pc = 0x26833cu;
    // NOP
label_268340:
    // 0x268340: 0x12493  .word       0x00012493                   # mtlo        $zero # 00012480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268340u;
    ctx->lo = GPR_U64(ctx, 0);
label_268344:
    // 0x268344: 0x8e70  tge         $zero, $zero, 569
    ctx->pc = 0x268344u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268348:
    // 0x268348: 0x0  nop
    ctx->pc = 0x268348u;
    // NOP
label_26834c:
    // 0x26834c: 0x0  nop
    ctx->pc = 0x26834cu;
    // NOP
label_268350:
    // 0x268350: 0x124a5  .word       0x000124A5                   # or          $a0, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_268354:
    // 0x268354: 0x98c0  sll         $s3, $zero, 3
    ctx->pc = 0x268354u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_268358:
    // 0x268358: 0x0  nop
    ctx->pc = 0x268358u;
    // NOP
label_26835c:
    // 0x26835c: 0x0  nop
    ctx->pc = 0x26835cu;
    // NOP
label_268360:
    // 0x268360: 0x124b9  .word       0x000124B9                   # INVALID     $zero, $at, 0x24B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268360u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x268360 raw=0x000124B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268364:
    // 0x268364: 0x62f0  tge         $zero, $zero, 395
    ctx->pc = 0x268364u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268368:
    // 0x268368: 0x0  nop
    ctx->pc = 0x268368u;
    // NOP
label_26836c:
    // 0x26836c: 0x0  nop
    ctx->pc = 0x26836cu;
    // NOP
label_268370:
    // 0x268370: 0x124c6  .word       0x000124C6                   # srlv        $a0, $at, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268370u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_268374:
    // 0x268374: 0x9620  .word       0x00009620                   # add         $s2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268374u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_268378:
    // 0x268378: 0x0  nop
    ctx->pc = 0x268378u;
    // NOP
label_26837c:
    // 0x26837c: 0x0  nop
    ctx->pc = 0x26837cu;
    // NOP
label_268380:
    // 0x268380: 0x124d9  .word       0x000124D9                   # multu       $zero, $at # 000024C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268380u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_268384:
    // 0x268384: 0x50e0  .word       0x000050E0                   # add         $t2, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268384u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_268388:
    // 0x268388: 0x0  nop
    ctx->pc = 0x268388u;
    // NOP
label_26838c:
    // 0x26838c: 0x0  nop
    ctx->pc = 0x26838cu;
    // NOP
label_268390:
    // 0x268390: 0x124e4  .word       0x000124E4                   # and         $a0, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_268394:
    // 0x268394: 0x5340  sll         $t2, $zero, 13
    ctx->pc = 0x268394u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_268398:
    // 0x268398: 0x0  nop
    ctx->pc = 0x268398u;
    // NOP
label_26839c:
    // 0x26839c: 0x0  nop
    ctx->pc = 0x26839cu;
    // NOP
label_2683a0:
    // 0x2683a0: 0x124ef  .word       0x000124EF                   # dsubu       $a0, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2683a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_2683a4:
    // 0x2683a4: 0x9820  add         $s3, $zero, $zero
    ctx->pc = 0x2683a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_2683a8:
    // 0x2683a8: 0x0  nop
    ctx->pc = 0x2683a8u;
    // NOP
label_2683ac:
    // 0x2683ac: 0x0  nop
    ctx->pc = 0x2683acu;
    // NOP
label_2683b0:
    // 0x2683b0: 0x12503  sra         $a0, $at, 20
    ctx->pc = 0x2683b0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 1), 20));
label_2683b4:
    // 0x2683b4: 0x9dd0  .word       0x00009DD0                   # mfhi        $s3 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2683b4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_2683b8:
    // 0x2683b8: 0x0  nop
    ctx->pc = 0x2683b8u;
    // NOP
label_2683bc:
    // 0x2683bc: 0x0  nop
    ctx->pc = 0x2683bcu;
    // NOP
label_2683c0:
    // 0x2683c0: 0x12517  .word       0x00012517                   # dsrav       $a0, $at, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2683c0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_2683c4:
    // 0x2683c4: 0xa700  sll         $s4, $zero, 28
    ctx->pc = 0x2683c4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_2683c8:
    // 0x2683c8: 0x0  nop
    ctx->pc = 0x2683c8u;
    // NOP
label_2683cc:
    // 0x2683cc: 0x0  nop
    ctx->pc = 0x2683ccu;
    // NOP
label_2683d0:
    // 0x2683d0: 0x1252c  .word       0x0001252C                   # dadd        $a0, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2683d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_2683d4:
    // 0x2683d4: 0xa0c0  sll         $s4, $zero, 3
    ctx->pc = 0x2683d4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_2683d8:
    // 0x2683d8: 0x0  nop
    ctx->pc = 0x2683d8u;
    // NOP
label_2683dc:
    // 0x2683dc: 0x0  nop
    ctx->pc = 0x2683dcu;
    // NOP
label_2683e0:
    // 0x2683e0: 0x12541  .word       0x00012541                   # INVALID     $zero, $at, 0x2541 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2683e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2683E0 raw=0x00012541"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2683e4:
    // 0x2683e4: 0xbee0  .word       0x0000BEE0                   # add         $s7, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2683e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_2683e8:
    // 0x2683e8: 0x0  nop
    ctx->pc = 0x2683e8u;
    // NOP
label_2683ec:
    // 0x2683ec: 0x0  nop
    ctx->pc = 0x2683ecu;
    // NOP
label_2683f0:
    // 0x2683f0: 0x12559  .word       0x00012559                   # multu       $zero, $at # 00002540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2683f0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2683f4:
    // 0x2683f4: 0x6b50  .word       0x00006B50                   # mfhi        $t5 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2683f4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2683f8:
    // 0x2683f8: 0x0  nop
    ctx->pc = 0x2683f8u;
    // NOP
label_2683fc:
    // 0x2683fc: 0x0  nop
    ctx->pc = 0x2683fcu;
    // NOP
label_268400:
    // 0x268400: 0x12567  .word       0x00012567                   # nor         $a0, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268400u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_268404:
    // 0x268404: 0x7070  tge         $zero, $zero, 449
    ctx->pc = 0x268404u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268408:
    // 0x268408: 0x0  nop
    ctx->pc = 0x268408u;
    // NOP
label_26840c:
    // 0x26840c: 0x0  nop
    ctx->pc = 0x26840cu;
    // NOP
label_268410:
    // 0x268410: 0x12576  tne         $zero, $at, 149
    ctx->pc = 0x268410u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_268414:
    // 0x268414: 0x7f10  .word       0x00007F10                   # mfhi        $t7 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268414u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_268418:
    // 0x268418: 0x0  nop
    ctx->pc = 0x268418u;
    // NOP
label_26841c:
    // 0x26841c: 0x0  nop
    ctx->pc = 0x26841cu;
    // NOP
label_268420:
    // 0x268420: 0x12586  .word       0x00012586                   # srlv        $a0, $at, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268420u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_268424:
    // 0x268424: 0xa870  tge         $zero, $zero, 673
    ctx->pc = 0x268424u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268428:
    // 0x268428: 0x0  nop
    ctx->pc = 0x268428u;
    // NOP
label_26842c:
    // 0x26842c: 0x0  nop
    ctx->pc = 0x26842cu;
    // NOP
label_268430:
    // 0x268430: 0x1259c  .word       0x0001259C                   # dmult       $zero, $at # 00002580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268430u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x268430 raw=0x0001259C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268434:
    // 0x268434: 0x58e0  .word       0x000058E0                   # add         $t3, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268434u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_268438:
    // 0x268438: 0x0  nop
    ctx->pc = 0x268438u;
    // NOP
label_26843c:
    // 0x26843c: 0x0  nop
    ctx->pc = 0x26843cu;
    // NOP
label_268440:
    // 0x268440: 0x125a8  .word       0x000125A8                   # mfsa        $a0 # 00010580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x268440u;
    SET_GPR_U32(ctx, 4, ctx->sa);
label_268444:
    // 0x268444: 0x6ef0  tge         $zero, $zero, 443
    ctx->pc = 0x268444u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268448:
    // 0x268448: 0x0  nop
    ctx->pc = 0x268448u;
    // NOP
label_26844c:
    // 0x26844c: 0x0  nop
    ctx->pc = 0x26844cu;
    // NOP
label_268450:
    // 0x268450: 0x125b6  tne         $zero, $at, 150
    ctx->pc = 0x268450u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_268454:
    // 0x268454: 0x9270  tge         $zero, $zero, 585
    ctx->pc = 0x268454u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268458:
    // 0x268458: 0x0  nop
    ctx->pc = 0x268458u;
    // NOP
label_26845c:
    // 0x26845c: 0x0  nop
    ctx->pc = 0x26845cu;
    // NOP
label_268460:
    // 0x268460: 0x125c9  .word       0x000125C9                   # jalr        $a0, $zero # 000105C0 <InstrIdType: CPU_SPECIAL>
label_268464:
    if (ctx->pc == 0x268464u) {
        ctx->pc = 0x268464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268460u;
        // 0x268464: 0x9aa0  .word       0x00009AA0                   # add         $s3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x268468u;
        goto label_268468;
    }
    ctx->pc = 0x268460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 4, 0x268468u);
        ctx->pc = 0x268464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268460u;
        // 0x268464: 0x9aa0  .word       0x00009AA0                   # add         $s3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268460u, 0x268468u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x268468u;
label_268468:
    // 0x268468: 0x0  nop
    ctx->pc = 0x268468u;
    // NOP
label_26846c:
    // 0x26846c: 0x0  nop
    ctx->pc = 0x26846cu;
    // NOP
label_268470:
    // 0x268470: 0x125dd  .word       0x000125DD                   # dmultu      $zero, $at # 000025C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268470u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x268470 raw=0x000125DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268474:
    // 0x268474: 0xbff0  tge         $zero, $zero, 767
    ctx->pc = 0x268474u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268478:
    // 0x268478: 0x0  nop
    ctx->pc = 0x268478u;
    // NOP
label_26847c:
    // 0x26847c: 0x0  nop
    ctx->pc = 0x26847cu;
    // NOP
label_268480:
    // 0x268480: 0x125f5  .word       0x000125F5                   # INVALID     $zero, $at, 0x25F5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268480u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x268480 raw=0x000125F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268484:
    // 0x268484: 0x5060  .word       0x00005060                   # add         $t2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268484u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_268488:
    // 0x268488: 0x0  nop
    ctx->pc = 0x268488u;
    // NOP
label_26848c:
    // 0x26848c: 0x0  nop
    ctx->pc = 0x26848cu;
    // NOP
label_268490:
    // 0x268490: 0x12600  sll         $a0, $at, 24
    ctx->pc = 0x268490u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 24));
label_268494:
    // 0x268494: 0x5fb0  tge         $zero, $zero, 382
    ctx->pc = 0x268494u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268498:
    // 0x268498: 0x0  nop
    ctx->pc = 0x268498u;
    // NOP
label_26849c:
    // 0x26849c: 0x0  nop
    ctx->pc = 0x26849cu;
    // NOP
label_2684a0:
    // 0x2684a0: 0x1260c  .word       0x0001260C                   # syscall     152 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2684a0u;
    ctx->pc = 0x2684A4u;
runtime->handleSyscall(rdram, ctx, 0x498u);
label_2684a4:
    // 0x2684a4: 0xa5d0  .word       0x0000A5D0                   # mfhi        $s4 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2684a4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_2684a8:
    // 0x2684a8: 0x0  nop
    ctx->pc = 0x2684a8u;
    // NOP
label_2684ac:
    // 0x2684ac: 0x0  nop
    ctx->pc = 0x2684acu;
    // NOP
label_2684b0:
    // 0x2684b0: 0x12621  .word       0x00012621                   # addu        $a0, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2684b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2684b4:
    // 0x2684b4: 0xc800  sll         $t9, $zero, 0
    ctx->pc = 0x2684b4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2684b8:
    // 0x2684b8: 0x0  nop
    ctx->pc = 0x2684b8u;
    // NOP
label_2684bc:
    // 0x2684bc: 0x0  nop
    ctx->pc = 0x2684bcu;
    // NOP
label_2684c0:
    // 0x2684c0: 0x1263a  dsrl        $a0, $at, 24
    ctx->pc = 0x2684c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) >> 24);
label_2684c4:
    // 0x2684c4: 0xac40  sll         $s5, $zero, 17
    ctx->pc = 0x2684c4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2684c8:
    // 0x2684c8: 0x0  nop
    ctx->pc = 0x2684c8u;
    // NOP
label_2684cc:
    // 0x2684cc: 0x0  nop
    ctx->pc = 0x2684ccu;
    // NOP
label_2684d0:
    // 0x2684d0: 0x12650  .word       0x00012650                   # mfhi        $a0 # 00010640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2684d0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2684d4:
    // 0x2684d4: 0xaaa0  .word       0x0000AAA0                   # add         $s5, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2684d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_2684d8:
    // 0x2684d8: 0x0  nop
    ctx->pc = 0x2684d8u;
    // NOP
label_2684dc:
    // 0x2684dc: 0x0  nop
    ctx->pc = 0x2684dcu;
    // NOP
label_2684e0:
    // 0x2684e0: 0x12666  .word       0x00012666                   # xor         $a0, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2684e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_2684e4:
    // 0x2684e4: 0x7d30  tge         $zero, $zero, 500
    ctx->pc = 0x2684e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2684e8:
    // 0x2684e8: 0x0  nop
    ctx->pc = 0x2684e8u;
    // NOP
label_2684ec:
    // 0x2684ec: 0x0  nop
    ctx->pc = 0x2684ecu;
    // NOP
label_2684f0:
    // 0x2684f0: 0x12676  tne         $zero, $at, 153
    ctx->pc = 0x2684f0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2684f4:
    // 0x2684f4: 0xbb80  sll         $s7, $zero, 14
    ctx->pc = 0x2684f4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_2684f8:
    // 0x2684f8: 0x0  nop
    ctx->pc = 0x2684f8u;
    // NOP
label_2684fc:
    // 0x2684fc: 0x0  nop
    ctx->pc = 0x2684fcu;
    // NOP
label_268500:
    // 0x268500: 0x1268e  .word       0x0001268E                   # INVALID     $zero, $at, 0x268E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268500u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x268500 raw=0x0001268E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268504:
    // 0x268504: 0x8ab0  tge         $zero, $zero, 554
    ctx->pc = 0x268504u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268508:
    // 0x268508: 0x0  nop
    ctx->pc = 0x268508u;
    // NOP
label_26850c:
    // 0x26850c: 0x0  nop
    ctx->pc = 0x26850cu;
    // NOP
label_268510:
    // 0x268510: 0x126a0  .word       0x000126A0                   # add         $a0, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268510u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_268514:
    // 0x268514: 0xb1a0  .word       0x0000B1A0                   # add         $s6, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268514u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_268518:
    // 0x268518: 0x0  nop
    ctx->pc = 0x268518u;
    // NOP
label_26851c:
    // 0x26851c: 0x0  nop
    ctx->pc = 0x26851cu;
    // NOP
label_268520:
    // 0x268520: 0x126b7  .word       0x000126B7                   # INVALID     $zero, $at, 0x26B7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268520u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x268520 raw=0x000126B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268524:
    // 0x268524: 0xb100  sll         $s6, $zero, 4
    ctx->pc = 0x268524u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_268528:
    // 0x268528: 0x0  nop
    ctx->pc = 0x268528u;
    // NOP
label_26852c:
    // 0x26852c: 0x0  nop
    ctx->pc = 0x26852cu;
    // NOP
label_268530:
    // 0x268530: 0x126ce  .word       0x000126CE                   # INVALID     $zero, $at, 0x26CE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268530u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x268530 raw=0x000126CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268534:
    // 0x268534: 0xcfe0  .word       0x0000CFE0                   # add         $t9, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268534u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_268538:
    // 0x268538: 0x0  nop
    ctx->pc = 0x268538u;
    // NOP
label_26853c:
    // 0x26853c: 0x0  nop
    ctx->pc = 0x26853cu;
    // NOP
label_268540:
    // 0x268540: 0x126e8  .word       0x000126E8                   # mfsa        $a0 # 000106C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x268540u;
    SET_GPR_U32(ctx, 4, ctx->sa);
label_268544:
    // 0x268544: 0x9f50  .word       0x00009F50                   # mfhi        $s3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268544u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_268548:
    // 0x268548: 0x0  nop
    ctx->pc = 0x268548u;
    // NOP
label_26854c:
    // 0x26854c: 0x0  nop
    ctx->pc = 0x26854cu;
    // NOP
label_268550:
    // 0x268550: 0x126fc  dsll32      $a0, $at, 27
    ctx->pc = 0x268550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) << (32 + 27));
label_268554:
    // 0x268554: 0xcb70  tge         $zero, $zero, 813
    ctx->pc = 0x268554u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268558:
    // 0x268558: 0x0  nop
    ctx->pc = 0x268558u;
    // NOP
label_26855c:
    // 0x26855c: 0x0  nop
    ctx->pc = 0x26855cu;
    // NOP
label_268560:
    // 0x268560: 0x12716  .word       0x00012716                   # dsrlv       $a0, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_268564:
    // 0x268564: 0x7da0  .word       0x00007DA0                   # add         $t7, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268564u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_268568:
    // 0x268568: 0x0  nop
    ctx->pc = 0x268568u;
    // NOP
label_26856c:
    // 0x26856c: 0x0  nop
    ctx->pc = 0x26856cu;
    // NOP
label_268570:
    // 0x268570: 0x12726  .word       0x00012726                   # xor         $a0, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_268574:
    // 0x268574: 0x81c0  sll         $s0, $zero, 7
    ctx->pc = 0x268574u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_268578:
    // 0x268578: 0x0  nop
    ctx->pc = 0x268578u;
    // NOP
label_26857c:
    // 0x26857c: 0x0  nop
    ctx->pc = 0x26857cu;
    // NOP
label_268580:
    // 0x268580: 0x12737  .word       0x00012737                   # INVALID     $zero, $at, 0x2737 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268580u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x268580 raw=0x00012737"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268584:
    // 0x268584: 0x50c0  sll         $t2, $zero, 3
    ctx->pc = 0x268584u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_268588:
    // 0x268588: 0x0  nop
    ctx->pc = 0x268588u;
    // NOP
label_26858c:
    // 0x26858c: 0x0  nop
    ctx->pc = 0x26858cu;
    // NOP
label_268590:
    // 0x268590: 0x12742  srl         $a0, $at, 29
    ctx->pc = 0x268590u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 1), 29));
label_268594:
    // 0x268594: 0x7cf0  tge         $zero, $zero, 499
    ctx->pc = 0x268594u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268598:
    // 0x268598: 0x0  nop
    ctx->pc = 0x268598u;
    // NOP
label_26859c:
    // 0x26859c: 0x0  nop
    ctx->pc = 0x26859cu;
    // NOP
label_2685a0:
    // 0x2685a0: 0x12752  .word       0x00012752                   # mflo        $a0 # 00010740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2685a0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_2685a4:
    // 0x2685a4: 0x7860  .word       0x00007860                   # add         $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2685a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2685a8:
    // 0x2685a8: 0x0  nop
    ctx->pc = 0x2685a8u;
    // NOP
label_2685ac:
    // 0x2685ac: 0x0  nop
    ctx->pc = 0x2685acu;
    // NOP
label_2685b0:
    // 0x2685b0: 0x12762  .word       0x00012762                   # neg         $a0, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2685b0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2685b4:
    // 0x2685b4: 0x7a00  sll         $t7, $zero, 8
    ctx->pc = 0x2685b4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x2685b8u;
    return;
}

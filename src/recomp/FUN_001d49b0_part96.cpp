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

// Function: FUN_001d49b0
// Address: 0x1d49b0 - 0x254d4c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_001d49b0_part96(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x202fe0u: goto label_202fe0;
        case 0x202fe4u: goto label_202fe4;
        case 0x202fe8u: goto label_202fe8;
        case 0x202fecu: goto label_202fec;
        case 0x202ff0u: goto label_202ff0;
        case 0x202ff4u: goto label_202ff4;
        case 0x202ff8u: goto label_202ff8;
        case 0x202ffcu: goto label_202ffc;
        case 0x203000u: goto label_203000;
        case 0x203004u: goto label_203004;
        case 0x203008u: goto label_203008;
        case 0x20300cu: goto label_20300c;
        case 0x203010u: goto label_203010;
        case 0x203014u: goto label_203014;
        case 0x203018u: goto label_203018;
        case 0x20301cu: goto label_20301c;
        case 0x203020u: goto label_203020;
        case 0x203024u: goto label_203024;
        case 0x203028u: goto label_203028;
        case 0x20302cu: goto label_20302c;
        case 0x203030u: goto label_203030;
        case 0x203034u: goto label_203034;
        case 0x203038u: goto label_203038;
        case 0x20303cu: goto label_20303c;
        case 0x203040u: goto label_203040;
        case 0x203044u: goto label_203044;
        case 0x203048u: goto label_203048;
        case 0x20304cu: goto label_20304c;
        case 0x203050u: goto label_203050;
        case 0x203054u: goto label_203054;
        case 0x203058u: goto label_203058;
        case 0x20305cu: goto label_20305c;
        case 0x203060u: goto label_203060;
        case 0x203064u: goto label_203064;
        case 0x203068u: goto label_203068;
        case 0x20306cu: goto label_20306c;
        case 0x203070u: goto label_203070;
        case 0x203074u: goto label_203074;
        case 0x203078u: goto label_203078;
        case 0x20307cu: goto label_20307c;
        case 0x203080u: goto label_203080;
        case 0x203084u: goto label_203084;
        case 0x203088u: goto label_203088;
        case 0x20308cu: goto label_20308c;
        case 0x203090u: goto label_203090;
        case 0x203094u: goto label_203094;
        case 0x203098u: goto label_203098;
        case 0x20309cu: goto label_20309c;
        case 0x2030a0u: goto label_2030a0;
        case 0x2030a4u: goto label_2030a4;
        case 0x2030a8u: goto label_2030a8;
        case 0x2030acu: goto label_2030ac;
        case 0x2030b0u: goto label_2030b0;
        case 0x2030b4u: goto label_2030b4;
        case 0x2030b8u: goto label_2030b8;
        case 0x2030bcu: goto label_2030bc;
        case 0x2030c0u: goto label_2030c0;
        case 0x2030c4u: goto label_2030c4;
        case 0x2030c8u: goto label_2030c8;
        case 0x2030ccu: goto label_2030cc;
        case 0x2030d0u: goto label_2030d0;
        case 0x2030d4u: goto label_2030d4;
        case 0x2030d8u: goto label_2030d8;
        case 0x2030dcu: goto label_2030dc;
        case 0x2030e0u: goto label_2030e0;
        case 0x2030e4u: goto label_2030e4;
        case 0x2030e8u: goto label_2030e8;
        case 0x2030ecu: goto label_2030ec;
        case 0x2030f0u: goto label_2030f0;
        case 0x2030f4u: goto label_2030f4;
        case 0x2030f8u: goto label_2030f8;
        case 0x2030fcu: goto label_2030fc;
        case 0x203100u: goto label_203100;
        case 0x203104u: goto label_203104;
        case 0x203108u: goto label_203108;
        case 0x20310cu: goto label_20310c;
        case 0x203110u: goto label_203110;
        case 0x203114u: goto label_203114;
        case 0x203118u: goto label_203118;
        case 0x20311cu: goto label_20311c;
        case 0x203120u: goto label_203120;
        case 0x203124u: goto label_203124;
        case 0x203128u: goto label_203128;
        case 0x20312cu: goto label_20312c;
        case 0x203130u: goto label_203130;
        case 0x203134u: goto label_203134;
        case 0x203138u: goto label_203138;
        case 0x20313cu: goto label_20313c;
        case 0x203140u: goto label_203140;
        case 0x203144u: goto label_203144;
        case 0x203148u: goto label_203148;
        case 0x20314cu: goto label_20314c;
        case 0x203150u: goto label_203150;
        case 0x203154u: goto label_203154;
        case 0x203158u: goto label_203158;
        case 0x20315cu: goto label_20315c;
        case 0x203160u: goto label_203160;
        case 0x203164u: goto label_203164;
        case 0x203168u: goto label_203168;
        case 0x20316cu: goto label_20316c;
        case 0x203170u: goto label_203170;
        case 0x203174u: goto label_203174;
        case 0x203178u: goto label_203178;
        case 0x20317cu: goto label_20317c;
        case 0x203180u: goto label_203180;
        case 0x203184u: goto label_203184;
        case 0x203188u: goto label_203188;
        case 0x20318cu: goto label_20318c;
        case 0x203190u: goto label_203190;
        case 0x203194u: goto label_203194;
        case 0x203198u: goto label_203198;
        case 0x20319cu: goto label_20319c;
        case 0x2031a0u: goto label_2031a0;
        case 0x2031a4u: goto label_2031a4;
        case 0x2031a8u: goto label_2031a8;
        case 0x2031acu: goto label_2031ac;
        case 0x2031b0u: goto label_2031b0;
        case 0x2031b4u: goto label_2031b4;
        case 0x2031b8u: goto label_2031b8;
        case 0x2031bcu: goto label_2031bc;
        case 0x2031c0u: goto label_2031c0;
        case 0x2031c4u: goto label_2031c4;
        case 0x2031c8u: goto label_2031c8;
        case 0x2031ccu: goto label_2031cc;
        case 0x2031d0u: goto label_2031d0;
        case 0x2031d4u: goto label_2031d4;
        case 0x2031d8u: goto label_2031d8;
        case 0x2031dcu: goto label_2031dc;
        case 0x2031e0u: goto label_2031e0;
        case 0x2031e4u: goto label_2031e4;
        case 0x2031e8u: goto label_2031e8;
        case 0x2031ecu: goto label_2031ec;
        case 0x2031f0u: goto label_2031f0;
        case 0x2031f4u: goto label_2031f4;
        case 0x2031f8u: goto label_2031f8;
        case 0x2031fcu: goto label_2031fc;
        case 0x203200u: goto label_203200;
        case 0x203204u: goto label_203204;
        case 0x203208u: goto label_203208;
        case 0x20320cu: goto label_20320c;
        case 0x203210u: goto label_203210;
        case 0x203214u: goto label_203214;
        case 0x203218u: goto label_203218;
        case 0x20321cu: goto label_20321c;
        case 0x203220u: goto label_203220;
        case 0x203224u: goto label_203224;
        case 0x203228u: goto label_203228;
        case 0x20322cu: goto label_20322c;
        case 0x203230u: goto label_203230;
        case 0x203234u: goto label_203234;
        case 0x203238u: goto label_203238;
        case 0x20323cu: goto label_20323c;
        case 0x203240u: goto label_203240;
        case 0x203244u: goto label_203244;
        case 0x203248u: goto label_203248;
        case 0x20324cu: goto label_20324c;
        case 0x203250u: goto label_203250;
        case 0x203254u: goto label_203254;
        case 0x203258u: goto label_203258;
        case 0x20325cu: goto label_20325c;
        case 0x203260u: goto label_203260;
        case 0x203264u: goto label_203264;
        case 0x203268u: goto label_203268;
        case 0x20326cu: goto label_20326c;
        case 0x203270u: goto label_203270;
        case 0x203274u: goto label_203274;
        case 0x203278u: goto label_203278;
        case 0x20327cu: goto label_20327c;
        case 0x203280u: goto label_203280;
        case 0x203284u: goto label_203284;
        case 0x203288u: goto label_203288;
        case 0x20328cu: goto label_20328c;
        case 0x203290u: goto label_203290;
        case 0x203294u: goto label_203294;
        case 0x203298u: goto label_203298;
        case 0x20329cu: goto label_20329c;
        case 0x2032a0u: goto label_2032a0;
        case 0x2032a4u: goto label_2032a4;
        case 0x2032a8u: goto label_2032a8;
        case 0x2032acu: goto label_2032ac;
        case 0x2032b0u: goto label_2032b0;
        case 0x2032b4u: goto label_2032b4;
        case 0x2032b8u: goto label_2032b8;
        case 0x2032bcu: goto label_2032bc;
        case 0x2032c0u: goto label_2032c0;
        case 0x2032c4u: goto label_2032c4;
        case 0x2032c8u: goto label_2032c8;
        case 0x2032ccu: goto label_2032cc;
        case 0x2032d0u: goto label_2032d0;
        case 0x2032d4u: goto label_2032d4;
        case 0x2032d8u: goto label_2032d8;
        case 0x2032dcu: goto label_2032dc;
        case 0x2032e0u: goto label_2032e0;
        case 0x2032e4u: goto label_2032e4;
        case 0x2032e8u: goto label_2032e8;
        case 0x2032ecu: goto label_2032ec;
        case 0x2032f0u: goto label_2032f0;
        case 0x2032f4u: goto label_2032f4;
        case 0x2032f8u: goto label_2032f8;
        case 0x2032fcu: goto label_2032fc;
        case 0x203300u: goto label_203300;
        case 0x203304u: goto label_203304;
        case 0x203308u: goto label_203308;
        case 0x20330cu: goto label_20330c;
        case 0x203310u: goto label_203310;
        case 0x203314u: goto label_203314;
        case 0x203318u: goto label_203318;
        case 0x20331cu: goto label_20331c;
        case 0x203320u: goto label_203320;
        case 0x203324u: goto label_203324;
        case 0x203328u: goto label_203328;
        case 0x20332cu: goto label_20332c;
        case 0x203330u: goto label_203330;
        case 0x203334u: goto label_203334;
        case 0x203338u: goto label_203338;
        case 0x20333cu: goto label_20333c;
        case 0x203340u: goto label_203340;
        case 0x203344u: goto label_203344;
        case 0x203348u: goto label_203348;
        case 0x20334cu: goto label_20334c;
        case 0x203350u: goto label_203350;
        case 0x203354u: goto label_203354;
        case 0x203358u: goto label_203358;
        case 0x20335cu: goto label_20335c;
        case 0x203360u: goto label_203360;
        case 0x203364u: goto label_203364;
        case 0x203368u: goto label_203368;
        case 0x20336cu: goto label_20336c;
        case 0x203370u: goto label_203370;
        case 0x203374u: goto label_203374;
        case 0x203378u: goto label_203378;
        case 0x20337cu: goto label_20337c;
        case 0x203380u: goto label_203380;
        case 0x203384u: goto label_203384;
        case 0x203388u: goto label_203388;
        case 0x20338cu: goto label_20338c;
        case 0x203390u: goto label_203390;
        case 0x203394u: goto label_203394;
        case 0x203398u: goto label_203398;
        case 0x20339cu: goto label_20339c;
        case 0x2033a0u: goto label_2033a0;
        case 0x2033a4u: goto label_2033a4;
        case 0x2033a8u: goto label_2033a8;
        case 0x2033acu: goto label_2033ac;
        case 0x2033b0u: goto label_2033b0;
        case 0x2033b4u: goto label_2033b4;
        case 0x2033b8u: goto label_2033b8;
        case 0x2033bcu: goto label_2033bc;
        case 0x2033c0u: goto label_2033c0;
        case 0x2033c4u: goto label_2033c4;
        case 0x2033c8u: goto label_2033c8;
        case 0x2033ccu: goto label_2033cc;
        case 0x2033d0u: goto label_2033d0;
        case 0x2033d4u: goto label_2033d4;
        case 0x2033d8u: goto label_2033d8;
        case 0x2033dcu: goto label_2033dc;
        case 0x2033e0u: goto label_2033e0;
        case 0x2033e4u: goto label_2033e4;
        case 0x2033e8u: goto label_2033e8;
        case 0x2033ecu: goto label_2033ec;
        case 0x2033f0u: goto label_2033f0;
        case 0x2033f4u: goto label_2033f4;
        case 0x2033f8u: goto label_2033f8;
        case 0x2033fcu: goto label_2033fc;
        case 0x203400u: goto label_203400;
        case 0x203404u: goto label_203404;
        case 0x203408u: goto label_203408;
        case 0x20340cu: goto label_20340c;
        case 0x203410u: goto label_203410;
        case 0x203414u: goto label_203414;
        case 0x203418u: goto label_203418;
        case 0x20341cu: goto label_20341c;
        case 0x203420u: goto label_203420;
        case 0x203424u: goto label_203424;
        case 0x203428u: goto label_203428;
        case 0x20342cu: goto label_20342c;
        case 0x203430u: goto label_203430;
        case 0x203434u: goto label_203434;
        case 0x203438u: goto label_203438;
        case 0x20343cu: goto label_20343c;
        case 0x203440u: goto label_203440;
        case 0x203444u: goto label_203444;
        case 0x203448u: goto label_203448;
        case 0x20344cu: goto label_20344c;
        case 0x203450u: goto label_203450;
        case 0x203454u: goto label_203454;
        case 0x203458u: goto label_203458;
        case 0x20345cu: goto label_20345c;
        case 0x203460u: goto label_203460;
        case 0x203464u: goto label_203464;
        case 0x203468u: goto label_203468;
        case 0x20346cu: goto label_20346c;
        case 0x203470u: goto label_203470;
        case 0x203474u: goto label_203474;
        case 0x203478u: goto label_203478;
        case 0x20347cu: goto label_20347c;
        case 0x203480u: goto label_203480;
        case 0x203484u: goto label_203484;
        case 0x203488u: goto label_203488;
        case 0x20348cu: goto label_20348c;
        case 0x203490u: goto label_203490;
        case 0x203494u: goto label_203494;
        case 0x203498u: goto label_203498;
        case 0x20349cu: goto label_20349c;
        case 0x2034a0u: goto label_2034a0;
        case 0x2034a4u: goto label_2034a4;
        case 0x2034a8u: goto label_2034a8;
        case 0x2034acu: goto label_2034ac;
        case 0x2034b0u: goto label_2034b0;
        case 0x2034b4u: goto label_2034b4;
        case 0x2034b8u: goto label_2034b8;
        case 0x2034bcu: goto label_2034bc;
        case 0x2034c0u: goto label_2034c0;
        case 0x2034c4u: goto label_2034c4;
        case 0x2034c8u: goto label_2034c8;
        case 0x2034ccu: goto label_2034cc;
        case 0x2034d0u: goto label_2034d0;
        case 0x2034d4u: goto label_2034d4;
        case 0x2034d8u: goto label_2034d8;
        case 0x2034dcu: goto label_2034dc;
        case 0x2034e0u: goto label_2034e0;
        case 0x2034e4u: goto label_2034e4;
        case 0x2034e8u: goto label_2034e8;
        case 0x2034ecu: goto label_2034ec;
        case 0x2034f0u: goto label_2034f0;
        case 0x2034f4u: goto label_2034f4;
        case 0x2034f8u: goto label_2034f8;
        case 0x2034fcu: goto label_2034fc;
        case 0x203500u: goto label_203500;
        case 0x203504u: goto label_203504;
        case 0x203508u: goto label_203508;
        case 0x20350cu: goto label_20350c;
        case 0x203510u: goto label_203510;
        case 0x203514u: goto label_203514;
        case 0x203518u: goto label_203518;
        case 0x20351cu: goto label_20351c;
        case 0x203520u: goto label_203520;
        case 0x203524u: goto label_203524;
        case 0x203528u: goto label_203528;
        case 0x20352cu: goto label_20352c;
        case 0x203530u: goto label_203530;
        case 0x203534u: goto label_203534;
        case 0x203538u: goto label_203538;
        case 0x20353cu: goto label_20353c;
        case 0x203540u: goto label_203540;
        case 0x203544u: goto label_203544;
        case 0x203548u: goto label_203548;
        case 0x20354cu: goto label_20354c;
        case 0x203550u: goto label_203550;
        case 0x203554u: goto label_203554;
        case 0x203558u: goto label_203558;
        case 0x20355cu: goto label_20355c;
        case 0x203560u: goto label_203560;
        case 0x203564u: goto label_203564;
        case 0x203568u: goto label_203568;
        case 0x20356cu: goto label_20356c;
        case 0x203570u: goto label_203570;
        case 0x203574u: goto label_203574;
        case 0x203578u: goto label_203578;
        case 0x20357cu: goto label_20357c;
        case 0x203580u: goto label_203580;
        case 0x203584u: goto label_203584;
        case 0x203588u: goto label_203588;
        case 0x20358cu: goto label_20358c;
        case 0x203590u: goto label_203590;
        case 0x203594u: goto label_203594;
        case 0x203598u: goto label_203598;
        case 0x20359cu: goto label_20359c;
        case 0x2035a0u: goto label_2035a0;
        case 0x2035a4u: goto label_2035a4;
        case 0x2035a8u: goto label_2035a8;
        case 0x2035acu: goto label_2035ac;
        case 0x2035b0u: goto label_2035b0;
        case 0x2035b4u: goto label_2035b4;
        case 0x2035b8u: goto label_2035b8;
        case 0x2035bcu: goto label_2035bc;
        case 0x2035c0u: goto label_2035c0;
        case 0x2035c4u: goto label_2035c4;
        case 0x2035c8u: goto label_2035c8;
        case 0x2035ccu: goto label_2035cc;
        case 0x2035d0u: goto label_2035d0;
        case 0x2035d4u: goto label_2035d4;
        case 0x2035d8u: goto label_2035d8;
        case 0x2035dcu: goto label_2035dc;
        case 0x2035e0u: goto label_2035e0;
        case 0x2035e4u: goto label_2035e4;
        case 0x2035e8u: goto label_2035e8;
        case 0x2035ecu: goto label_2035ec;
        case 0x2035f0u: goto label_2035f0;
        case 0x2035f4u: goto label_2035f4;
        case 0x2035f8u: goto label_2035f8;
        case 0x2035fcu: goto label_2035fc;
        case 0x203600u: goto label_203600;
        case 0x203604u: goto label_203604;
        case 0x203608u: goto label_203608;
        case 0x20360cu: goto label_20360c;
        case 0x203610u: goto label_203610;
        case 0x203614u: goto label_203614;
        case 0x203618u: goto label_203618;
        case 0x20361cu: goto label_20361c;
        case 0x203620u: goto label_203620;
        case 0x203624u: goto label_203624;
        case 0x203628u: goto label_203628;
        case 0x20362cu: goto label_20362c;
        case 0x203630u: goto label_203630;
        case 0x203634u: goto label_203634;
        case 0x203638u: goto label_203638;
        case 0x20363cu: goto label_20363c;
        case 0x203640u: goto label_203640;
        case 0x203644u: goto label_203644;
        case 0x203648u: goto label_203648;
        case 0x20364cu: goto label_20364c;
        case 0x203650u: goto label_203650;
        case 0x203654u: goto label_203654;
        case 0x203658u: goto label_203658;
        case 0x20365cu: goto label_20365c;
        case 0x203660u: goto label_203660;
        case 0x203664u: goto label_203664;
        case 0x203668u: goto label_203668;
        case 0x20366cu: goto label_20366c;
        case 0x203670u: goto label_203670;
        case 0x203674u: goto label_203674;
        case 0x203678u: goto label_203678;
        case 0x20367cu: goto label_20367c;
        case 0x203680u: goto label_203680;
        case 0x203684u: goto label_203684;
        case 0x203688u: goto label_203688;
        case 0x20368cu: goto label_20368c;
        case 0x203690u: goto label_203690;
        case 0x203694u: goto label_203694;
        case 0x203698u: goto label_203698;
        case 0x20369cu: goto label_20369c;
        case 0x2036a0u: goto label_2036a0;
        case 0x2036a4u: goto label_2036a4;
        case 0x2036a8u: goto label_2036a8;
        case 0x2036acu: goto label_2036ac;
        case 0x2036b0u: goto label_2036b0;
        case 0x2036b4u: goto label_2036b4;
        case 0x2036b8u: goto label_2036b8;
        case 0x2036bcu: goto label_2036bc;
        case 0x2036c0u: goto label_2036c0;
        case 0x2036c4u: goto label_2036c4;
        case 0x2036c8u: goto label_2036c8;
        case 0x2036ccu: goto label_2036cc;
        case 0x2036d0u: goto label_2036d0;
        case 0x2036d4u: goto label_2036d4;
        case 0x2036d8u: goto label_2036d8;
        case 0x2036dcu: goto label_2036dc;
        case 0x2036e0u: goto label_2036e0;
        case 0x2036e4u: goto label_2036e4;
        case 0x2036e8u: goto label_2036e8;
        case 0x2036ecu: goto label_2036ec;
        case 0x2036f0u: goto label_2036f0;
        case 0x2036f4u: goto label_2036f4;
        case 0x2036f8u: goto label_2036f8;
        case 0x2036fcu: goto label_2036fc;
        case 0x203700u: goto label_203700;
        case 0x203704u: goto label_203704;
        case 0x203708u: goto label_203708;
        case 0x20370cu: goto label_20370c;
        case 0x203710u: goto label_203710;
        case 0x203714u: goto label_203714;
        case 0x203718u: goto label_203718;
        case 0x20371cu: goto label_20371c;
        case 0x203720u: goto label_203720;
        case 0x203724u: goto label_203724;
        case 0x203728u: goto label_203728;
        case 0x20372cu: goto label_20372c;
        case 0x203730u: goto label_203730;
        case 0x203734u: goto label_203734;
        case 0x203738u: goto label_203738;
        case 0x20373cu: goto label_20373c;
        case 0x203740u: goto label_203740;
        case 0x203744u: goto label_203744;
        case 0x203748u: goto label_203748;
        case 0x20374cu: goto label_20374c;
        case 0x203750u: goto label_203750;
        case 0x203754u: goto label_203754;
        case 0x203758u: goto label_203758;
        case 0x20375cu: goto label_20375c;
        case 0x203760u: goto label_203760;
        case 0x203764u: goto label_203764;
        case 0x203768u: goto label_203768;
        case 0x20376cu: goto label_20376c;
        case 0x203770u: goto label_203770;
        case 0x203774u: goto label_203774;
        case 0x203778u: goto label_203778;
        case 0x20377cu: goto label_20377c;
        case 0x203780u: goto label_203780;
        case 0x203784u: goto label_203784;
        case 0x203788u: goto label_203788;
        case 0x20378cu: goto label_20378c;
        case 0x203790u: goto label_203790;
        case 0x203794u: goto label_203794;
        case 0x203798u: goto label_203798;
        case 0x20379cu: goto label_20379c;
        case 0x2037a0u: goto label_2037a0;
        case 0x2037a4u: goto label_2037a4;
        case 0x2037a8u: goto label_2037a8;
        case 0x2037acu: goto label_2037ac;
        default: return;
    }

label_202fe0:
    // 0x202fe0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x202fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_202fe4:
    // 0x202fe4: 0xac20f474  sw          $zero, -0xB8C($at)
    ctx->pc = 0x202fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 0));
label_202fe8:
    // 0x202fe8: 0x100000cd  b           . + 4 + (0xCD << 2)
label_202fec:
    if (ctx->pc == 0x202FECu) {
        ctx->pc = 0x202FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202FE8u;
        // 0x202fec: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202FF0u;
        goto label_202ff0;
    }
    ctx->pc = 0x202FE8u;
    {
        const bool branch_taken_0x202fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202FE8u;
        // 0x202fec: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202fe8) {
            ctx->pc = 0x203320u;
            goto label_203320;
        }
    }
    ctx->pc = 0x202FF0u;
label_202ff0:
    // 0x202ff0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x202ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_202ff4:
    // 0x202ff4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x202ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_202ff8:
    // 0x202ff8: 0x8c26f468  lw          $a2, -0xB98($at)
    ctx->pc = 0x202ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
label_202ffc:
    // 0x202ffc: 0x2484f500  addiu       $a0, $a0, -0xB00
    ctx->pc = 0x202ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964480));
label_203000:
    // 0x203000: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x203000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_203004:
    // 0x203004: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x203004u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_203008:
    // 0x203008: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_20300c:
    // 0x20300c: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x20300cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_203010:
    // 0x203010: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x203010u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_203014:
    // 0x203014: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x203014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_203018:
    // 0x203018: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x203018u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_20301c:
    // 0x20301c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20301cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_203020:
    // 0x203020: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x203020u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_203024:
    // 0x203024: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x203024u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_203028:
    // 0x203028: 0xac20f474  sw          $zero, -0xB8C($at)
    ctx->pc = 0x203028u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 0));
label_20302c:
    // 0x20302c: 0x100000bc  b           . + 4 + (0xBC << 2)
label_203030:
    if (ctx->pc == 0x203030u) {
        ctx->pc = 0x203030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20302Cu;
        // 0x203030: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203034u;
        goto label_203034;
    }
    ctx->pc = 0x20302Cu;
    {
        const bool branch_taken_0x20302c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20302Cu;
        // 0x203030: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20302c) {
            ctx->pc = 0x203320u;
            goto label_203320;
        }
    }
    ctx->pc = 0x203034u;
label_203034:
    // 0x203034: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_203038:
    // 0x203038: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x203038u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_20303c:
    // 0x20303c: 0x8c28f468  lw          $t0, -0xB98($at)
    ctx->pc = 0x20303cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
label_203040:
    // 0x203040: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x203040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
label_203044:
    // 0x203044: 0x24c6f500  addiu       $a2, $a2, -0xB00
    ctx->pc = 0x203044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964480));
label_203048:
    // 0x203048: 0x24a5cf40  addiu       $a1, $a1, -0x30C0
    ctx->pc = 0x203048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954816));
label_20304c:
    // 0x20304c: 0x240403c4  addiu       $a0, $zero, 0x3C4
    ctx->pc = 0x20304cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
label_203050:
    // 0x203050: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x203050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_203054:
    // 0x203054: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x203054u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_203058:
    // 0x203058: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_20305c:
    // 0x20305c: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x20305cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_203060:
    // 0x203060: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x203060u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_203064:
    // 0x203064: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x203064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_203068:
    // 0x203068: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x203068u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_20306c:
    // 0x20306c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x20306cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_203070:
    // 0x203070: 0xacc50014  sw          $a1, 0x14($a2)
    ctx->pc = 0x203070u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
label_203074:
    // 0x203074: 0xacc40010  sw          $a0, 0x10($a2)
    ctx->pc = 0x203074u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
label_203078:
    // 0x203078: 0xac20f474  sw          $zero, -0xB8C($at)
    ctx->pc = 0x203078u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 0));
label_20307c:
    // 0x20307c: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_203080:
    if (ctx->pc == 0x203080u) {
        ctx->pc = 0x203080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20307Cu;
        // 0x203080: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203084u;
        goto label_203084;
    }
    ctx->pc = 0x20307Cu;
    {
        const bool branch_taken_0x20307c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20307Cu;
        // 0x203080: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20307c) {
            ctx->pc = 0x203320u;
            goto label_203320;
        }
    }
    ctx->pc = 0x203084u;
label_203084:
    // 0x203084: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x203084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_203088:
    // 0x203088: 0xc080fe4  jal         func_203F90
label_20308c:
    if (ctx->pc == 0x20308Cu) {
        ctx->pc = 0x20308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203088u;
        // 0x20308c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203090u;
        goto label_203090;
    }
    ctx->pc = 0x203088u;
    SET_GPR_U32(ctx, 31, 0x203090u);
    ctx->pc = 0x20308Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203088u;
    // 0x20308c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F90u;
    { ctx->pc = 0x203f90; return; }
    ctx->pc = 0x203090u;
label_203090:
    // 0x203090: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_203094:
    // 0x203094: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x203094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_203098:
    // 0x203098: 0x8c26f468  lw          $a2, -0xB98($at)
    ctx->pc = 0x203098u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
label_20309c:
    // 0x20309c: 0x2463f500  addiu       $v1, $v1, -0xB00
    ctx->pc = 0x20309cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964480));
label_2030a0:
    // 0x2030a0: 0x24020202  addiu       $v0, $zero, 0x202
    ctx->pc = 0x2030a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
label_2030a4:
    // 0x2030a4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2030a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2030a8:
    // 0x2030a8: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2030a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2030ac:
    // 0x2030ac: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x2030acu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2030b0:
    // 0x2030b0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2030b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2030b4:
    // 0x2030b4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2030b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2030b8:
    // 0x2030b8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2030b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2030bc:
    // 0x2030bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2030bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2030c0:
    // 0x2030c0: 0xac620098  sw          $v0, 0x98($v1)
    ctx->pc = 0x2030c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 152), GPR_U32(ctx, 2));
label_2030c4:
    // 0x2030c4: 0x24620098  addiu       $v0, $v1, 0x98
    ctx->pc = 0x2030c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 152));
label_2030c8:
    // 0x2030c8: 0xc08f390  jal         func_23CE40
label_2030cc:
    if (ctx->pc == 0x2030CCu) {
        ctx->pc = 0x2030CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2030C8u;
        // 0x2030cc: 0x24440018  addiu       $a0, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2030D0u;
        goto label_2030d0;
    }
    ctx->pc = 0x2030C8u;
    SET_GPR_U32(ctx, 31, 0x2030D0u);
    ctx->pc = 0x2030CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2030C8u;
    // 0x2030cc: 0x24440018  addiu       $a0, $v0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    { ctx->pc = 0x23ce40; return; }
    ctx->pc = 0x2030D0u;
label_2030d0:
    // 0x2030d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2030d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2030d4:
    // 0x2030d4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2030d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2030d8:
    // 0x2030d8: 0xac23f474  sw          $v1, -0xB8C($at)
    ctx->pc = 0x2030d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 3));
label_2030dc:
    // 0x2030dc: 0x10000090  b           . + 4 + (0x90 << 2)
label_2030e0:
    if (ctx->pc == 0x2030E0u) {
        ctx->pc = 0x2030E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2030DCu;
        // 0x2030e0: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2030E4u;
        goto label_2030e4;
    }
    ctx->pc = 0x2030DCu;
    {
        const bool branch_taken_0x2030dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2030E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2030DCu;
        // 0x2030e0: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2030dc) {
            ctx->pc = 0x203320u;
            goto label_203320;
        }
    }
    ctx->pc = 0x2030E4u;
label_2030e4:
    // 0x2030e4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2030e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2030e8:
    // 0x2030e8: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x2030e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_2030ec:
    // 0x2030ec: 0x8c27f468  lw          $a3, -0xB98($at)
    ctx->pc = 0x2030ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
label_2030f0:
    // 0x2030f0: 0x24a5f500  addiu       $a1, $a1, -0xB00
    ctx->pc = 0x2030f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964480));
label_2030f4:
    // 0x2030f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2030f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2030f8:
    // 0x2030f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2030f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2030fc:
    // 0x2030fc: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x2030fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_203100:
    // 0x203100: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_203104:
    // 0x203104: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x203104u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_203108:
    // 0x203108: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x203108u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_20310c:
    // 0x20310c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x20310cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_203110:
    // 0x203110: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x203110u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_203114:
    // 0x203114: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x203114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_203118:
    // 0x203118: 0xaca0009c  sw          $zero, 0x9C($a1)
    ctx->pc = 0x203118u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 156), GPR_U32(ctx, 0));
label_20311c:
    // 0x20311c: 0xaca000a4  sw          $zero, 0xA4($a1)
    ctx->pc = 0x20311cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 164), GPR_U32(ctx, 0));
label_203120:
    // 0x203120: 0xac24f474  sw          $a0, -0xB8C($at)
    ctx->pc = 0x203120u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 4));
label_203124:
    // 0x203124: 0x1000007e  b           . + 4 + (0x7E << 2)
label_203128:
    if (ctx->pc == 0x203128u) {
        ctx->pc = 0x203128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203124u;
        // 0x203128: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20312Cu;
        goto label_20312c;
    }
    ctx->pc = 0x203124u;
    {
        const bool branch_taken_0x203124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203124u;
        // 0x203128: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203124) {
            ctx->pc = 0x203320u;
            goto label_203320;
        }
    }
    ctx->pc = 0x20312Cu;
label_20312c:
    // 0x20312c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x20312cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_203130:
    // 0x203130: 0x3c070058  lui         $a3, 0x58
    ctx->pc = 0x203130u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
label_203134:
    // 0x203134: 0x8c29f468  lw          $t1, -0xB98($at)
    ctx->pc = 0x203134u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
label_203138:
    // 0x203138: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x203138u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_20313c:
    // 0x20313c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x20313cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_203140:
    // 0x203140: 0x24e7f500  addiu       $a3, $a3, -0xB00
    ctx->pc = 0x203140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964480));
label_203144:
    // 0x203144: 0x3465acb8  ori         $a1, $v1, 0xACB8
    ctx->pc = 0x203144u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)44216);
label_203148:
    // 0x203148: 0x24c64440  addiu       $a2, $a2, 0x4440
    ctx->pc = 0x203148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17472));
label_20314c:
    // 0x20314c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20314cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203150:
    // 0x203150: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x203150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_203154:
    // 0x203154: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x203154u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_203158:
    // 0x203158: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_20315c:
    // 0x20315c: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x20315cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_203160:
    // 0x203160: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x203160u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_203164:
    // 0x203164: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x203164u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_203168:
    // 0x203168: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x203168u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_20316c:
    // 0x20316c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x20316cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_203170:
    // 0x203170: 0xace600ac  sw          $a2, 0xAC($a3)
    ctx->pc = 0x203170u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 172), GPR_U32(ctx, 6));
label_203174:
    // 0x203174: 0xace500a8  sw          $a1, 0xA8($a3)
    ctx->pc = 0x203174u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 168), GPR_U32(ctx, 5));
label_203178:
    // 0x203178: 0xac24f474  sw          $a0, -0xB8C($at)
    ctx->pc = 0x203178u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 4));
label_20317c:
    // 0x20317c: 0x10000068  b           . + 4 + (0x68 << 2)
label_203180:
    if (ctx->pc == 0x203180u) {
        ctx->pc = 0x203180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20317Cu;
        // 0x203180: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203184u;
        goto label_203184;
    }
    ctx->pc = 0x20317Cu;
    {
        const bool branch_taken_0x20317c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20317Cu;
        // 0x203180: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20317c) {
            ctx->pc = 0x203320u;
            goto label_203320;
        }
    }
    ctx->pc = 0x203184u;
label_203184:
    // 0x203184: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x203184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_203188:
    // 0x203188: 0xc080fe4  jal         func_203F90
label_20318c:
    if (ctx->pc == 0x20318Cu) {
        ctx->pc = 0x20318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203188u;
        // 0x20318c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203190u;
        goto label_203190;
    }
    ctx->pc = 0x203188u;
    SET_GPR_U32(ctx, 31, 0x203190u);
    ctx->pc = 0x20318Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203188u;
    // 0x20318c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F90u;
    { ctx->pc = 0x203f90; return; }
    ctx->pc = 0x203190u;
label_203190:
    // 0x203190: 0x8e02048c  lw          $v0, 0x48C($s0)
    ctx->pc = 0x203190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1164)));
label_203194:
    // 0x203194: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_203198:
    if (ctx->pc == 0x203198u) {
        ctx->pc = 0x203198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203194u;
        // 0x203198: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20319Cu;
        goto label_20319c;
    }
    ctx->pc = 0x203194u;
    {
        const bool branch_taken_0x203194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203194u;
        // 0x203198: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203194) {
            ctx->pc = 0x2031ECu;
            goto label_2031ec;
        }
    }
    ctx->pc = 0x20319Cu;
label_20319c:
    // 0x20319c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x20319cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2031a0:
    // 0x2031a0: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x2031a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_2031a4:
    // 0x2031a4: 0x8c26f468  lw          $a2, -0xB98($at)
    ctx->pc = 0x2031a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
label_2031a8:
    // 0x2031a8: 0x2463f500  addiu       $v1, $v1, -0xB00
    ctx->pc = 0x2031a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964480));
label_2031ac:
    // 0x2031ac: 0x24020202  addiu       $v0, $zero, 0x202
    ctx->pc = 0x2031acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
label_2031b0:
    // 0x2031b0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2031b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2031b4:
    // 0x2031b4: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2031b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2031b8:
    // 0x2031b8: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x2031b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2031bc:
    // 0x2031bc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2031bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2031c0:
    // 0x2031c0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2031c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2031c4:
    // 0x2031c4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2031c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2031c8:
    // 0x2031c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2031c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2031cc:
    // 0x2031cc: 0xac620130  sw          $v0, 0x130($v1)
    ctx->pc = 0x2031ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 304), GPR_U32(ctx, 2));
label_2031d0:
    // 0x2031d0: 0x24620130  addiu       $v0, $v1, 0x130
    ctx->pc = 0x2031d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
label_2031d4:
    // 0x2031d4: 0xc08f390  jal         func_23CE40
label_2031d8:
    if (ctx->pc == 0x2031D8u) {
        ctx->pc = 0x2031D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2031D4u;
        // 0x2031d8: 0x24440018  addiu       $a0, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2031DCu;
        goto label_2031dc;
    }
    ctx->pc = 0x2031D4u;
    SET_GPR_U32(ctx, 31, 0x2031DCu);
    ctx->pc = 0x2031D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2031D4u;
    // 0x2031d8: 0x24440018  addiu       $a0, $v0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    { ctx->pc = 0x23ce40; return; }
    ctx->pc = 0x2031DCu;
label_2031dc:
    // 0x2031dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2031dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2031e0:
    // 0x2031e0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2031e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2031e4:
    // 0x2031e4: 0x10000013  b           . + 4 + (0x13 << 2)
label_2031e8:
    if (ctx->pc == 0x2031E8u) {
        ctx->pc = 0x2031E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2031E4u;
        // 0x2031e8: 0xac22f474  sw          $v0, -0xB8C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2031ECu;
        goto label_2031ec;
    }
    ctx->pc = 0x2031E4u;
    {
        const bool branch_taken_0x2031e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2031E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2031E4u;
        // 0x2031e8: 0xac22f474  sw          $v0, -0xB8C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2031e4) {
            ctx->pc = 0x203234u;
            goto label_203234;
        }
    }
    ctx->pc = 0x2031ECu;
label_2031ec:
    // 0x2031ec: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x2031ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_2031f0:
    // 0x2031f0: 0x8c26f468  lw          $a2, -0xB98($at)
    ctx->pc = 0x2031f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
label_2031f4:
    // 0x2031f4: 0x2463f500  addiu       $v1, $v1, -0xB00
    ctx->pc = 0x2031f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964480));
label_2031f8:
    // 0x2031f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2031f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2031fc:
    // 0x2031fc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2031fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_203200:
    // 0x203200: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x203200u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_203204:
    // 0x203204: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x203204u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_203208:
    // 0x203208: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x203208u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_20320c:
    // 0x20320c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x20320cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_203210:
    // 0x203210: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x203210u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_203214:
    // 0x203214: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x203214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_203218:
    // 0x203218: 0xac620130  sw          $v0, 0x130($v1)
    ctx->pc = 0x203218u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 304), GPR_U32(ctx, 2));
label_20321c:
    // 0x20321c: 0x24620130  addiu       $v0, $v1, 0x130
    ctx->pc = 0x20321cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
label_203220:
    // 0x203220: 0xc08f390  jal         func_23CE40
label_203224:
    if (ctx->pc == 0x203224u) {
        ctx->pc = 0x203224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203220u;
        // 0x203224: 0x24440018  addiu       $a0, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203228u;
        goto label_203228;
    }
    ctx->pc = 0x203220u;
    SET_GPR_U32(ctx, 31, 0x203228u);
    ctx->pc = 0x203224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203220u;
    // 0x203224: 0x24440018  addiu       $a0, $v0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    { ctx->pc = 0x23ce40; return; }
    ctx->pc = 0x203228u;
label_203228:
    // 0x203228: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x203228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20322c:
    // 0x20322c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x20322cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_203230:
    // 0x203230: 0xac22f474  sw          $v0, -0xB8C($at)
    ctx->pc = 0x203230u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 2));
label_203234:
    // 0x203234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x203234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_203238:
    // 0x203238: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x203238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_20323c:
    // 0x20323c: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x20323cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_203240:
    // 0x203240: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203240u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203244:
    // 0x203244: 0xc08104c  jal         func_204130
label_203248:
    if (ctx->pc == 0x203248u) {
        ctx->pc = 0x203248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203244u;
        // 0x203248: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20324Cu;
        goto label_20324c;
    }
    ctx->pc = 0x203244u;
    SET_GPR_U32(ctx, 31, 0x20324Cu);
    ctx->pc = 0x203248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203244u;
    // 0x203248: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x20324Cu;
label_20324c:
    // 0x20324c: 0xc07aaa8  jal         func_1EAAA0
label_203250:
    if (ctx->pc == 0x203250u) {
        ctx->pc = 0x203250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20324Cu;
        // 0x203250: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203254u;
        goto label_203254;
    }
    ctx->pc = 0x20324Cu;
    SET_GPR_U32(ctx, 31, 0x203254u);
    ctx->pc = 0x203250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20324Cu;
    // 0x203250: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x203254u;
label_203254:
    // 0x203254: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203258:
    // 0x203258: 0x10000031  b           . + 4 + (0x31 << 2)
label_20325c:
    if (ctx->pc == 0x20325Cu) {
        ctx->pc = 0x20325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203258u;
        // 0x20325c: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203260u;
        goto label_203260;
    }
    ctx->pc = 0x203258u;
    {
        const bool branch_taken_0x203258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203258u;
        // 0x20325c: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203258) {
            ctx->pc = 0x203320u;
            goto label_203320;
        }
    }
    ctx->pc = 0x203260u;
label_203260:
    // 0x203260: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_203264:
    // 0x203264: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x203264u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_203268:
    // 0x203268: 0x8c27f468  lw          $a3, -0xB98($at)
    ctx->pc = 0x203268u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
label_20326c:
    // 0x20326c: 0x24a5f500  addiu       $a1, $a1, -0xB00
    ctx->pc = 0x20326cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964480));
label_203270:
    // 0x203270: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x203270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_203274:
    // 0x203274: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x203274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_203278:
    // 0x203278: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x203278u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_20327c:
    // 0x20327c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x20327cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_203280:
    // 0x203280: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x203280u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_203284:
    // 0x203284: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x203284u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_203288:
    // 0x203288: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x203288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_20328c:
    // 0x20328c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x20328cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_203290:
    // 0x203290: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x203290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_203294:
    // 0x203294: 0xaca00134  sw          $zero, 0x134($a1)
    ctx->pc = 0x203294u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 308), GPR_U32(ctx, 0));
label_203298:
    // 0x203298: 0xaca0013c  sw          $zero, 0x13C($a1)
    ctx->pc = 0x203298u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 316), GPR_U32(ctx, 0));
label_20329c:
    // 0x20329c: 0xac24f474  sw          $a0, -0xB8C($at)
    ctx->pc = 0x20329cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 4));
label_2032a0:
    // 0x2032a0: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2032a4:
    if (ctx->pc == 0x2032A4u) {
        ctx->pc = 0x2032A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032A0u;
        // 0x2032a4: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2032A8u;
        goto label_2032a8;
    }
    ctx->pc = 0x2032A0u;
    {
        const bool branch_taken_0x2032a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2032A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032A0u;
        // 0x2032a4: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032a0) {
            ctx->pc = 0x203320u;
            goto label_203320;
        }
    }
    ctx->pc = 0x2032A8u;
label_2032a8:
    // 0x2032a8: 0x8f8490f0  lw          $a0, -0x6F10($gp)
    ctx->pc = 0x2032a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
label_2032ac:
    // 0x2032ac: 0x8f8590f4  lw          $a1, -0x6F0C($gp)
    ctx->pc = 0x2032acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938868)));
label_2032b0:
    // 0x2032b0: 0xc083ce8  jal         func_20F3A0
label_2032b4:
    if (ctx->pc == 0x2032B4u) {
        ctx->pc = 0x2032B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032B0u;
        // 0x2032b4: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2032B8u;
        goto label_2032b8;
    }
    ctx->pc = 0x2032B0u;
    SET_GPR_U32(ctx, 31, 0x2032B8u);
    ctx->pc = 0x2032B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2032B0u;
    // 0x2032b4: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F3A0u;
    { ctx->pc = 0x20f3a0; return; }
    ctx->pc = 0x2032B8u;
label_2032b8:
    // 0x2032b8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2032b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2032bc:
    // 0x2032bc: 0x3c070058  lui         $a3, 0x58
    ctx->pc = 0x2032bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
label_2032c0:
    // 0x2032c0: 0x8c29f468  lw          $t1, -0xB98($at)
    ctx->pc = 0x2032c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
label_2032c4:
    // 0x2032c4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2032c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_2032c8:
    // 0x2032c8: 0x34655400  ori         $a1, $v1, 0x5400
    ctx->pc = 0x2032c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21504);
label_2032cc:
    // 0x2032cc: 0x8f8690f0  lw          $a2, -0x6F10($gp)
    ctx->pc = 0x2032ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
label_2032d0:
    // 0x2032d0: 0x24e7f500  addiu       $a3, $a3, -0xB00
    ctx->pc = 0x2032d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964480));
label_2032d4:
    // 0x2032d4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2032d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2032d8:
    // 0x2032d8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2032d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2032dc:
    // 0x2032dc: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x2032dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_2032e0:
    // 0x2032e0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2032e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2032e4:
    // 0x2032e4: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x2032e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_2032e8:
    // 0x2032e8: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x2032e8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_2032ec:
    // 0x2032ec: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x2032ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_2032f0:
    // 0x2032f0: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x2032f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_2032f4:
    // 0x2032f4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2032f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2032f8:
    // 0x2032f8: 0xace60144  sw          $a2, 0x144($a3)
    ctx->pc = 0x2032f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 324), GPR_U32(ctx, 6));
label_2032fc:
    // 0x2032fc: 0xace50140  sw          $a1, 0x140($a3)
    ctx->pc = 0x2032fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 320), GPR_U32(ctx, 5));
label_203300:
    // 0x203300: 0xac24f474  sw          $a0, -0xB8C($at)
    ctx->pc = 0x203300u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 4));
label_203304:
    // 0x203304: 0x10000006  b           . + 4 + (0x6 << 2)
label_203308:
    if (ctx->pc == 0x203308u) {
        ctx->pc = 0x203308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203304u;
        // 0x203308: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20330Cu;
        goto label_20330c;
    }
    ctx->pc = 0x203304u;
    {
        const bool branch_taken_0x203304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203304u;
        // 0x203308: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203304) {
            ctx->pc = 0x203320u;
            goto label_203320;
        }
    }
    ctx->pc = 0x20330Cu;
label_20330c:
    // 0x20330c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x20330cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_203310:
    // 0x203310: 0x10000003  b           . + 4 + (0x3 << 2)
label_203314:
    if (ctx->pc == 0x203314u) {
        ctx->pc = 0x203314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203310u;
        // 0x203314: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203318u;
        goto label_203318;
    }
    ctx->pc = 0x203310u;
    {
        const bool branch_taken_0x203310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203310u;
        // 0x203314: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203310) {
            ctx->pc = 0x203320u;
            goto label_203320;
        }
    }
    ctx->pc = 0x203318u;
label_203318:
    // 0x203318: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x203318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20331c:
    // 0x20331c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x20331cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_203320:
    // 0x203320: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x203320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_203324:
    // 0x203324: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x203324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_203328:
    // 0x203328: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x203328u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20332c:
    // 0x20332c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20332cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_203330:
    // 0x203330: 0x3e00008  jr          $ra
label_203334:
    if (ctx->pc == 0x203334u) {
        ctx->pc = 0x203334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203330u;
        // 0x203334: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203338u;
        goto label_203338;
    }
    ctx->pc = 0x203330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203330u;
        // 0x203334: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203338u;
label_203338:
    // 0x203338: 0x0  nop
    ctx->pc = 0x203338u;
    // NOP
label_20333c:
    // 0x20333c: 0x0  nop
    ctx->pc = 0x20333cu;
    // NOP
label_203340:
    // 0x203340: 0x27bdf9d0  addiu       $sp, $sp, -0x630
    ctx->pc = 0x203340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965712));
label_203344:
    // 0x203344: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x203344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_203348:
    // 0x203348: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x203348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_20334c:
    // 0x20334c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20334cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_203350:
    // 0x203350: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x203350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_203354:
    // 0x203354: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x203354u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_203358:
    // 0x203358: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x203358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20335c:
    // 0x20335c: 0x2c610013  sltiu       $at, $v1, 0x13
    ctx->pc = 0x20335cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_203360:
    // 0x203360: 0x102000a3  beqz        $at, . + 4 + (0xA3 << 2)
label_203364:
    if (ctx->pc == 0x203364u) {
        ctx->pc = 0x203364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203360u;
        // 0x203364: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203368u;
        goto label_203368;
    }
    ctx->pc = 0x203360u;
    {
        const bool branch_taken_0x203360 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x203364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203360u;
        // 0x203364: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203360) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x203368u;
label_203368:
    // 0x203368: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x203368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_20336c:
    // 0x20336c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20336cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_203370:
    // 0x203370: 0x2484def0  addiu       $a0, $a0, -0x2110
    ctx->pc = 0x203370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958832));
label_203374:
    // 0x203374: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x203374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_203378:
    // 0x203378: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x203378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20337c:
    // 0x20337c: 0x600008  jr          $v1
label_203380:
    if (ctx->pc == 0x203380u) {
        ctx->pc = 0x203384u;
        goto label_203384;
    }
    ctx->pc = 0x20337Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203384u: goto label_203384;
            case 0x203438u: goto label_203438;
            case 0x20352Cu: goto label_20352c;
            case 0x203534u: goto label_203534;
            case 0x20353Cu: goto label_20353c;
            case 0x203544u: goto label_203544;
            case 0x20354Cu: goto label_20354c;
            case 0x203554u: goto label_203554;
            case 0x20355Cu: goto label_20355c;
            case 0x203564u: goto label_203564;
            case 0x20356Cu: goto label_20356c;
            case 0x203574u: goto label_203574;
            case 0x20357Cu: goto label_20357c;
            case 0x203584u: goto label_203584;
            case 0x20358Cu: goto label_20358c;
            case 0x203594u: goto label_203594;
            case 0x20359Cu: goto label_20359c;
            case 0x2035A4u: goto label_2035a4;
            case 0x2035ACu: goto label_2035ac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20337Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x203384u;
label_203384:
    // 0x203384: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x203384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_203388:
    // 0x203388: 0x14e20002  bne         $a3, $v0, . + 4 + (0x2 << 2)
label_20338c:
    if (ctx->pc == 0x20338Cu) {
        ctx->pc = 0x20338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203388u;
        // 0x20338c: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203390u;
        goto label_203390;
    }
    ctx->pc = 0x203388u;
    {
        const bool branch_taken_0x203388 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x20338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203388u;
        // 0x20338c: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203388) {
            ctx->pc = 0x203394u;
            goto label_203394;
        }
    }
    ctx->pc = 0x203390u;
label_203390:
    // 0x203390: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x203390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_203394:
    // 0x203394: 0x8cc40480  lw          $a0, 0x480($a2)
    ctx->pc = 0x203394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1152)));
label_203398:
    // 0x203398: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x203398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_20339c:
    // 0x20339c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x20339cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_2033a0:
    // 0x2033a0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2033a4:
    if (ctx->pc == 0x2033A4u) {
        ctx->pc = 0x2033A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033A0u;
        // 0x2033a4: 0x30820400  andi        $v0, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2033A8u;
        goto label_2033a8;
    }
    ctx->pc = 0x2033A0u;
    {
        const bool branch_taken_0x2033a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2033A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033A0u;
        // 0x2033a4: 0x30820400  andi        $v0, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2033a0) {
            ctx->pc = 0x2033E0u;
            goto label_2033e0;
        }
    }
    ctx->pc = 0x2033A8u;
label_2033a8:
    // 0x2033a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2033a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2033ac:
    // 0x2033ac: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2033acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2033b0:
    // 0x2033b0: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2033b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_2033b4:
    // 0x2033b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2033b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2033b8:
    // 0x2033b8: 0xc08104c  jal         func_204130
label_2033bc:
    if (ctx->pc == 0x2033BCu) {
        ctx->pc = 0x2033BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033B8u;
        // 0x2033bc: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2033C0u;
        goto label_2033c0;
    }
    ctx->pc = 0x2033B8u;
    SET_GPR_U32(ctx, 31, 0x2033C0u);
    ctx->pc = 0x2033BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2033B8u;
    // 0x2033bc: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x2033C0u;
label_2033c0:
    // 0x2033c0: 0xc07aaa8  jal         func_1EAAA0
label_2033c4:
    if (ctx->pc == 0x2033C4u) {
        ctx->pc = 0x2033C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033C0u;
        // 0x2033c4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2033C8u;
        goto label_2033c8;
    }
    ctx->pc = 0x2033C0u;
    SET_GPR_U32(ctx, 31, 0x2033C8u);
    ctx->pc = 0x2033C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2033C0u;
    // 0x2033c4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x2033C8u;
label_2033c8:
    // 0x2033c8: 0xc07aa84  jal         func_1EAA10
label_2033cc:
    if (ctx->pc == 0x2033CCu) {
        ctx->pc = 0x2033CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033C8u;
        // 0x2033cc: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2033D0u;
        goto label_2033d0;
    }
    ctx->pc = 0x2033C8u;
    SET_GPR_U32(ctx, 31, 0x2033D0u);
    ctx->pc = 0x2033CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2033C8u;
    // 0x2033cc: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x2033D0u;
label_2033d0:
    // 0x2033d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2033d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2033d4:
    // 0x2033d4: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x2033d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_2033d8:
    // 0x2033d8: 0x10000085  b           . + 4 + (0x85 << 2)
label_2033dc:
    if (ctx->pc == 0x2033DCu) {
        ctx->pc = 0x2033DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033D8u;
        // 0x2033dc: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2033E0u;
        goto label_2033e0;
    }
    ctx->pc = 0x2033D8u;
    {
        const bool branch_taken_0x2033d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2033DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033D8u;
        // 0x2033dc: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2033d8) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x2033E0u;
label_2033e0:
    // 0x2033e0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2033e4:
    if (ctx->pc == 0x2033E4u) {
        ctx->pc = 0x2033E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033E0u;
        // 0x2033e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2033E8u;
        goto label_2033e8;
    }
    ctx->pc = 0x2033E0u;
    {
        const bool branch_taken_0x2033e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2033E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033E0u;
        // 0x2033e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2033e0) {
            ctx->pc = 0x203430u;
            goto label_203430;
        }
    }
    ctx->pc = 0x2033E8u;
label_2033e8:
    // 0x2033e8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2033e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2033ec:
    // 0x2033ec: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x2033ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_2033f0:
    // 0x2033f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2033f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2033f4:
    // 0x2033f4: 0xc08104c  jal         func_204130
label_2033f8:
    if (ctx->pc == 0x2033F8u) {
        ctx->pc = 0x2033F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033F4u;
        // 0x2033f8: 0x27a80130  addiu       $t0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2033FCu;
        goto label_2033fc;
    }
    ctx->pc = 0x2033F4u;
    SET_GPR_U32(ctx, 31, 0x2033FCu);
    ctx->pc = 0x2033F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2033F4u;
    // 0x2033f8: 0x27a80130  addiu       $t0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x2033FCu;
label_2033fc:
    // 0x2033fc: 0xc07aaa8  jal         func_1EAAA0
label_203400:
    if (ctx->pc == 0x203400u) {
        ctx->pc = 0x203400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033FCu;
        // 0x203400: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203404u;
        goto label_203404;
    }
    ctx->pc = 0x2033FCu;
    SET_GPR_U32(ctx, 31, 0x203404u);
    ctx->pc = 0x203400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2033FCu;
    // 0x203400: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x203404u;
label_203404:
    // 0x203404: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x203404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_203408:
    // 0x203408: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x203408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20340c:
    // 0x20340c: 0xc07aa94  jal         func_1EAA50
label_203410:
    if (ctx->pc == 0x203410u) {
        ctx->pc = 0x203410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20340Cu;
        // 0x203410: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203414u;
        goto label_203414;
    }
    ctx->pc = 0x20340Cu;
    SET_GPR_U32(ctx, 31, 0x203414u);
    ctx->pc = 0x203410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20340Cu;
    // 0x203410: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA50u;
    { ctx->pc = 0x1eaa50; return; }
    ctx->pc = 0x203414u;
label_203414:
    // 0x203414: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x203414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_203418:
    // 0x203418: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x203418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_20341c:
    // 0x20341c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x20341cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_203420:
    // 0x203420: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x203420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_203424:
    // 0x203424: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x203424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_203428:
    // 0x203428: 0x10000071  b           . + 4 + (0x71 << 2)
label_20342c:
    if (ctx->pc == 0x20342Cu) {
        ctx->pc = 0x20342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203428u;
        // 0x20342c: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203430u;
        goto label_203430;
    }
    ctx->pc = 0x203428u;
    {
        const bool branch_taken_0x203428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203428u;
        // 0x20342c: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203428) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x203430u;
label_203430:
    // 0x203430: 0x1000006f  b           . + 4 + (0x6F << 2)
label_203434:
    if (ctx->pc == 0x203434u) {
        ctx->pc = 0x203434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203430u;
        // 0x203434: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203438u;
        goto label_203438;
    }
    ctx->pc = 0x203430u;
    {
        const bool branch_taken_0x203430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203430u;
        // 0x203434: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203430) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x203438u;
label_203438:
    // 0x203438: 0x8cc2048c  lw          $v0, 0x48C($a2)
    ctx->pc = 0x203438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1164)));
label_20343c:
    // 0x20343c: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
label_203440:
    if (ctx->pc == 0x203440u) {
        ctx->pc = 0x203440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20343Cu;
        // 0x203440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203444u;
        goto label_203444;
    }
    ctx->pc = 0x20343Cu;
    {
        const bool branch_taken_0x20343c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x203440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20343Cu;
        // 0x203440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20343c) {
            ctx->pc = 0x20348Cu;
            goto label_20348c;
        }
    }
    ctx->pc = 0x203444u;
label_203444:
    // 0x203444: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x203444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_203448:
    // 0x203448: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x203448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_20344c:
    // 0x20344c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20344cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203450:
    // 0x203450: 0xc08104c  jal         func_204130
label_203454:
    if (ctx->pc == 0x203454u) {
        ctx->pc = 0x203454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203450u;
        // 0x203454: 0x27a80230  addiu       $t0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203458u;
        goto label_203458;
    }
    ctx->pc = 0x203450u;
    SET_GPR_U32(ctx, 31, 0x203458u);
    ctx->pc = 0x203454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203450u;
    // 0x203454: 0x27a80230  addiu       $t0, $sp, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203458u;
label_203458:
    // 0x203458: 0xc07aaa8  jal         func_1EAAA0
label_20345c:
    if (ctx->pc == 0x20345Cu) {
        ctx->pc = 0x20345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203458u;
        // 0x20345c: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203460u;
        goto label_203460;
    }
    ctx->pc = 0x203458u;
    SET_GPR_U32(ctx, 31, 0x203460u);
    ctx->pc = 0x20345Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203458u;
    // 0x20345c: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x203460u;
label_203460:
    // 0x203460: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x203460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_203464:
    // 0x203464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x203464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203468:
    // 0x203468: 0xc07aa94  jal         func_1EAA50
label_20346c:
    if (ctx->pc == 0x20346Cu) {
        ctx->pc = 0x20346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203468u;
        // 0x20346c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203470u;
        goto label_203470;
    }
    ctx->pc = 0x203468u;
    SET_GPR_U32(ctx, 31, 0x203470u);
    ctx->pc = 0x20346Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203468u;
    // 0x20346c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA50u;
    { ctx->pc = 0x1eaa50; return; }
    ctx->pc = 0x203470u;
label_203470:
    // 0x203470: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x203470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_203474:
    // 0x203474: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x203474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_203478:
    // 0x203478: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x203478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_20347c:
    // 0x20347c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x20347cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_203480:
    // 0x203480: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x203480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_203484:
    // 0x203484: 0x1000005a  b           . + 4 + (0x5A << 2)
label_203488:
    if (ctx->pc == 0x203488u) {
        ctx->pc = 0x203488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203484u;
        // 0x203488: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20348Cu;
        goto label_20348c;
    }
    ctx->pc = 0x203484u;
    {
        const bool branch_taken_0x203484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203484u;
        // 0x203488: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203484) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x20348Cu;
label_20348c:
    // 0x20348c: 0x8cc20488  lw          $v0, 0x488($a2)
    ctx->pc = 0x20348cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1160)));
label_203490:
    // 0x203490: 0x284200c6  slti        $v0, $v0, 0xC6
    ctx->pc = 0x203490u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)198) ? 1 : 0);
label_203494:
    // 0x203494: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_203498:
    if (ctx->pc == 0x203498u) {
        ctx->pc = 0x203498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203494u;
        // 0x203498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20349Cu;
        goto label_20349c;
    }
    ctx->pc = 0x203494u;
    {
        const bool branch_taken_0x203494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203494u;
        // 0x203498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203494) {
            ctx->pc = 0x2034F8u;
            goto label_2034f8;
        }
    }
    ctx->pc = 0x20349Cu;
label_20349c:
    // 0x20349c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x20349cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2034a0:
    // 0x2034a0: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
label_2034a4:
    if (ctx->pc == 0x2034A4u) {
        ctx->pc = 0x2034A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034A0u;
        // 0x2034a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2034A8u;
        goto label_2034a8;
    }
    ctx->pc = 0x2034A0u;
    {
        const bool branch_taken_0x2034a0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x2034A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034A0u;
        // 0x2034a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2034a0) {
            ctx->pc = 0x2034B0u;
            goto label_2034b0;
        }
    }
    ctx->pc = 0x2034A8u;
label_2034a8:
    // 0x2034a8: 0x10000051  b           . + 4 + (0x51 << 2)
label_2034ac:
    if (ctx->pc == 0x2034ACu) {
        ctx->pc = 0x2034ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034A8u;
        // 0x2034ac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2034B0u;
        goto label_2034b0;
    }
    ctx->pc = 0x2034A8u;
    {
        const bool branch_taken_0x2034a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2034ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034A8u;
        // 0x2034ac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2034a8) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x2034B0u;
label_2034b0:
    // 0x2034b0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2034b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2034b4:
    // 0x2034b4: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x2034b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_2034b8:
    // 0x2034b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2034b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2034bc:
    // 0x2034bc: 0xc08104c  jal         func_204130
label_2034c0:
    if (ctx->pc == 0x2034C0u) {
        ctx->pc = 0x2034C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034BCu;
        // 0x2034c0: 0x27a80330  addiu       $t0, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2034C4u;
        goto label_2034c4;
    }
    ctx->pc = 0x2034BCu;
    SET_GPR_U32(ctx, 31, 0x2034C4u);
    ctx->pc = 0x2034C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2034BCu;
    // 0x2034c0: 0x27a80330  addiu       $t0, $sp, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x2034C4u;
label_2034c4:
    // 0x2034c4: 0xc07aaa8  jal         func_1EAAA0
label_2034c8:
    if (ctx->pc == 0x2034C8u) {
        ctx->pc = 0x2034C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034C4u;
        // 0x2034c8: 0x27a40330  addiu       $a0, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2034CCu;
        goto label_2034cc;
    }
    ctx->pc = 0x2034C4u;
    SET_GPR_U32(ctx, 31, 0x2034CCu);
    ctx->pc = 0x2034C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2034C4u;
    // 0x2034c8: 0x27a40330  addiu       $a0, $sp, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x2034CCu;
label_2034cc:
    // 0x2034cc: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2034ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2034d0:
    // 0x2034d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2034d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2034d4:
    // 0x2034d4: 0xc07aa94  jal         func_1EAA50
label_2034d8:
    if (ctx->pc == 0x2034D8u) {
        ctx->pc = 0x2034D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034D4u;
        // 0x2034d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2034DCu;
        goto label_2034dc;
    }
    ctx->pc = 0x2034D4u;
    SET_GPR_U32(ctx, 31, 0x2034DCu);
    ctx->pc = 0x2034D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2034D4u;
    // 0x2034d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA50u;
    { ctx->pc = 0x1eaa50; return; }
    ctx->pc = 0x2034DCu;
label_2034dc:
    // 0x2034dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2034dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2034e0:
    // 0x2034e0: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x2034e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2034e4:
    // 0x2034e4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2034e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2034e8:
    // 0x2034e8: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2034e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_2034ec:
    // 0x2034ec: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x2034ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_2034f0:
    // 0x2034f0: 0x1000003f  b           . + 4 + (0x3F << 2)
label_2034f4:
    if (ctx->pc == 0x2034F4u) {
        ctx->pc = 0x2034F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034F0u;
        // 0x2034f4: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2034F8u;
        goto label_2034f8;
    }
    ctx->pc = 0x2034F0u;
    {
        const bool branch_taken_0x2034f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2034F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034F0u;
        // 0x2034f4: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2034f0) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x2034F8u;
label_2034f8:
    // 0x2034f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2034f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2034fc:
    // 0x2034fc: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x2034fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_203500:
    // 0x203500: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203500u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203504:
    // 0x203504: 0xc08104c  jal         func_204130
label_203508:
    if (ctx->pc == 0x203508u) {
        ctx->pc = 0x203508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203504u;
        // 0x203508: 0x27a80430  addiu       $t0, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20350Cu;
        goto label_20350c;
    }
    ctx->pc = 0x203504u;
    SET_GPR_U32(ctx, 31, 0x20350Cu);
    ctx->pc = 0x203508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203504u;
    // 0x203508: 0x27a80430  addiu       $t0, $sp, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x20350Cu;
label_20350c:
    // 0x20350c: 0xc07aaa8  jal         func_1EAAA0
label_203510:
    if (ctx->pc == 0x203510u) {
        ctx->pc = 0x203510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20350Cu;
        // 0x203510: 0x27a40430  addiu       $a0, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203514u;
        goto label_203514;
    }
    ctx->pc = 0x20350Cu;
    SET_GPR_U32(ctx, 31, 0x203514u);
    ctx->pc = 0x203510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20350Cu;
    // 0x203510: 0x27a40430  addiu       $a0, $sp, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x203514u;
label_203514:
    // 0x203514: 0xc07aa84  jal         func_1EAA10
label_203518:
    if (ctx->pc == 0x203518u) {
        ctx->pc = 0x203518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203514u;
        // 0x203518: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20351Cu;
        goto label_20351c;
    }
    ctx->pc = 0x203514u;
    SET_GPR_U32(ctx, 31, 0x20351Cu);
    ctx->pc = 0x203518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203514u;
    // 0x203518: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x20351Cu;
label_20351c:
    // 0x20351c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20351cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203520:
    // 0x203520: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x203520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_203524:
    // 0x203524: 0x10000032  b           . + 4 + (0x32 << 2)
label_203528:
    if (ctx->pc == 0x203528u) {
        ctx->pc = 0x203528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203524u;
        // 0x203528: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20352Cu;
        goto label_20352c;
    }
    ctx->pc = 0x203524u;
    {
        const bool branch_taken_0x203524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203524u;
        // 0x203528: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203524) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x20352Cu;
label_20352c:
    // 0x20352c: 0x10000030  b           . + 4 + (0x30 << 2)
label_203530:
    if (ctx->pc == 0x203530u) {
        ctx->pc = 0x203530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20352Cu;
        // 0x203530: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203534u;
        goto label_203534;
    }
    ctx->pc = 0x20352Cu;
    {
        const bool branch_taken_0x20352c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20352Cu;
        // 0x203530: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20352c) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x203534u;
label_203534:
    // 0x203534: 0x1000002e  b           . + 4 + (0x2E << 2)
label_203538:
    if (ctx->pc == 0x203538u) {
        ctx->pc = 0x203538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203534u;
        // 0x203538: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20353Cu;
        goto label_20353c;
    }
    ctx->pc = 0x203534u;
    {
        const bool branch_taken_0x203534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203534u;
        // 0x203538: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203534) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x20353Cu;
label_20353c:
    // 0x20353c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_203540:
    if (ctx->pc == 0x203540u) {
        ctx->pc = 0x203540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20353Cu;
        // 0x203540: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203544u;
        goto label_203544;
    }
    ctx->pc = 0x20353Cu;
    {
        const bool branch_taken_0x20353c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20353Cu;
        // 0x203540: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20353c) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x203544u;
label_203544:
    // 0x203544: 0x1000002a  b           . + 4 + (0x2A << 2)
label_203548:
    if (ctx->pc == 0x203548u) {
        ctx->pc = 0x203548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203544u;
        // 0x203548: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20354Cu;
        goto label_20354c;
    }
    ctx->pc = 0x203544u;
    {
        const bool branch_taken_0x203544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203544u;
        // 0x203548: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203544) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x20354Cu;
label_20354c:
    // 0x20354c: 0x10000028  b           . + 4 + (0x28 << 2)
label_203550:
    if (ctx->pc == 0x203550u) {
        ctx->pc = 0x203550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20354Cu;
        // 0x203550: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203554u;
        goto label_203554;
    }
    ctx->pc = 0x20354Cu;
    {
        const bool branch_taken_0x20354c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20354Cu;
        // 0x203550: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20354c) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x203554u;
label_203554:
    // 0x203554: 0x10000026  b           . + 4 + (0x26 << 2)
label_203558:
    if (ctx->pc == 0x203558u) {
        ctx->pc = 0x203558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203554u;
        // 0x203558: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20355Cu;
        goto label_20355c;
    }
    ctx->pc = 0x203554u;
    {
        const bool branch_taken_0x203554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203554u;
        // 0x203558: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203554) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x20355Cu;
label_20355c:
    // 0x20355c: 0x10000024  b           . + 4 + (0x24 << 2)
label_203560:
    if (ctx->pc == 0x203560u) {
        ctx->pc = 0x203560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20355Cu;
        // 0x203560: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203564u;
        goto label_203564;
    }
    ctx->pc = 0x20355Cu;
    {
        const bool branch_taken_0x20355c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20355Cu;
        // 0x203560: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20355c) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x203564u;
label_203564:
    // 0x203564: 0x10000022  b           . + 4 + (0x22 << 2)
label_203568:
    if (ctx->pc == 0x203568u) {
        ctx->pc = 0x203568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203564u;
        // 0x203568: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20356Cu;
        goto label_20356c;
    }
    ctx->pc = 0x203564u;
    {
        const bool branch_taken_0x203564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203564u;
        // 0x203568: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203564) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x20356Cu;
label_20356c:
    // 0x20356c: 0x10000020  b           . + 4 + (0x20 << 2)
label_203570:
    if (ctx->pc == 0x203570u) {
        ctx->pc = 0x203570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20356Cu;
        // 0x203570: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203574u;
        goto label_203574;
    }
    ctx->pc = 0x20356Cu;
    {
        const bool branch_taken_0x20356c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20356Cu;
        // 0x203570: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20356c) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x203574u;
label_203574:
    // 0x203574: 0x1000001e  b           . + 4 + (0x1E << 2)
label_203578:
    if (ctx->pc == 0x203578u) {
        ctx->pc = 0x203578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203574u;
        // 0x203578: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20357Cu;
        goto label_20357c;
    }
    ctx->pc = 0x203574u;
    {
        const bool branch_taken_0x203574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203574u;
        // 0x203578: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203574) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x20357Cu;
label_20357c:
    // 0x20357c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_203580:
    if (ctx->pc == 0x203580u) {
        ctx->pc = 0x203580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20357Cu;
        // 0x203580: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203584u;
        goto label_203584;
    }
    ctx->pc = 0x20357Cu;
    {
        const bool branch_taken_0x20357c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20357Cu;
        // 0x203580: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20357c) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x203584u;
label_203584:
    // 0x203584: 0x1000001a  b           . + 4 + (0x1A << 2)
label_203588:
    if (ctx->pc == 0x203588u) {
        ctx->pc = 0x203588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203584u;
        // 0x203588: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20358Cu;
        goto label_20358c;
    }
    ctx->pc = 0x203584u;
    {
        const bool branch_taken_0x203584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203584u;
        // 0x203588: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203584) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x20358Cu;
label_20358c:
    // 0x20358c: 0x10000018  b           . + 4 + (0x18 << 2)
label_203590:
    if (ctx->pc == 0x203590u) {
        ctx->pc = 0x203590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20358Cu;
        // 0x203590: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203594u;
        goto label_203594;
    }
    ctx->pc = 0x20358Cu;
    {
        const bool branch_taken_0x20358c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20358Cu;
        // 0x203590: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20358c) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x203594u;
label_203594:
    // 0x203594: 0x10000016  b           . + 4 + (0x16 << 2)
label_203598:
    if (ctx->pc == 0x203598u) {
        ctx->pc = 0x203598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203594u;
        // 0x203598: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20359Cu;
        goto label_20359c;
    }
    ctx->pc = 0x203594u;
    {
        const bool branch_taken_0x203594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203594u;
        // 0x203598: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203594) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x20359Cu;
label_20359c:
    // 0x20359c: 0x10000014  b           . + 4 + (0x14 << 2)
label_2035a0:
    if (ctx->pc == 0x2035A0u) {
        ctx->pc = 0x2035A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20359Cu;
        // 0x2035a0: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2035A4u;
        goto label_2035a4;
    }
    ctx->pc = 0x20359Cu;
    {
        const bool branch_taken_0x20359c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2035A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20359Cu;
        // 0x2035a0: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20359c) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x2035A4u;
label_2035a4:
    // 0x2035a4: 0x10000012  b           . + 4 + (0x12 << 2)
label_2035a8:
    if (ctx->pc == 0x2035A8u) {
        ctx->pc = 0x2035A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035A4u;
        // 0x2035a8: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2035ACu;
        goto label_2035ac;
    }
    ctx->pc = 0x2035A4u;
    {
        const bool branch_taken_0x2035a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2035A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035A4u;
        // 0x2035a8: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2035a4) {
            ctx->pc = 0x2035F0u;
            goto label_2035f0;
        }
    }
    ctx->pc = 0x2035ACu;
label_2035ac:
    // 0x2035ac: 0x8f8490f0  lw          $a0, -0x6F10($gp)
    ctx->pc = 0x2035acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
label_2035b0:
    // 0x2035b0: 0xc083cc8  jal         func_20F320
label_2035b4:
    if (ctx->pc == 0x2035B4u) {
        ctx->pc = 0x2035B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035B0u;
        // 0x2035b4: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2035B8u;
        goto label_2035b8;
    }
    ctx->pc = 0x2035B0u;
    SET_GPR_U32(ctx, 31, 0x2035B8u);
    ctx->pc = 0x2035B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2035B0u;
    // 0x2035b4: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F320u;
    { ctx->pc = 0x20f320; return; }
    ctx->pc = 0x2035B8u;
label_2035b8:
    // 0x2035b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2035b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2035bc:
    // 0x2035bc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2035bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2035c0:
    // 0x2035c0: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x2035c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_2035c4:
    // 0x2035c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2035c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2035c8:
    // 0x2035c8: 0xc08104c  jal         func_204130
label_2035cc:
    if (ctx->pc == 0x2035CCu) {
        ctx->pc = 0x2035CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035C8u;
        // 0x2035cc: 0x27a80530  addiu       $t0, $sp, 0x530 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2035D0u;
        goto label_2035d0;
    }
    ctx->pc = 0x2035C8u;
    SET_GPR_U32(ctx, 31, 0x2035D0u);
    ctx->pc = 0x2035CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2035C8u;
    // 0x2035cc: 0x27a80530  addiu       $t0, $sp, 0x530 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x2035D0u;
label_2035d0:
    // 0x2035d0: 0xc07aaa8  jal         func_1EAAA0
label_2035d4:
    if (ctx->pc == 0x2035D4u) {
        ctx->pc = 0x2035D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035D0u;
        // 0x2035d4: 0x27a40530  addiu       $a0, $sp, 0x530 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2035D8u;
        goto label_2035d8;
    }
    ctx->pc = 0x2035D0u;
    SET_GPR_U32(ctx, 31, 0x2035D8u);
    ctx->pc = 0x2035D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2035D0u;
    // 0x2035d4: 0x27a40530  addiu       $a0, $sp, 0x530 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x2035D8u;
label_2035d8:
    // 0x2035d8: 0xc07aa84  jal         func_1EAA10
label_2035dc:
    if (ctx->pc == 0x2035DCu) {
        ctx->pc = 0x2035DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035D8u;
        // 0x2035dc: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2035E0u;
        goto label_2035e0;
    }
    ctx->pc = 0x2035D8u;
    SET_GPR_U32(ctx, 31, 0x2035E0u);
    ctx->pc = 0x2035DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2035D8u;
    // 0x2035dc: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x2035E0u;
label_2035e0:
    // 0x2035e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2035e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2035e4:
    // 0x2035e4: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x2035e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_2035e8:
    // 0x2035e8: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x2035e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_2035ec:
    // 0x2035ec: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x2035ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_2035f0:
    // 0x2035f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2035f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2035f4:
    // 0x2035f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2035f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2035f8:
    // 0x2035f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2035f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2035fc:
    // 0x2035fc: 0x3e00008  jr          $ra
label_203600:
    if (ctx->pc == 0x203600u) {
        ctx->pc = 0x203600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035FCu;
        // 0x203600: 0x27bd0630  addiu       $sp, $sp, 0x630 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203604u;
        goto label_203604;
    }
    ctx->pc = 0x2035FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035FCu;
        // 0x203600: 0x27bd0630  addiu       $sp, $sp, 0x630 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2035FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203604u;
label_203604:
    // 0x203604: 0x0  nop
    ctx->pc = 0x203604u;
    // NOP
label_203608:
    // 0x203608: 0x0  nop
    ctx->pc = 0x203608u;
    // NOP
label_20360c:
    // 0x20360c: 0x0  nop
    ctx->pc = 0x20360cu;
    // NOP
label_203610:
    // 0x203610: 0x27bdf8e0  addiu       $sp, $sp, -0x720
    ctx->pc = 0x203610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965472));
label_203614:
    // 0x203614: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x203614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_203618:
    // 0x203618: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x203618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20361c:
    // 0x20361c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20361cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_203620:
    // 0x203620: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x203620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_203624:
    // 0x203624: 0x1062005f  beq         $v1, $v0, . + 4 + (0x5F << 2)
label_203628:
    if (ctx->pc == 0x203628u) {
        ctx->pc = 0x203628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203624u;
        // 0x203628: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20362Cu;
        goto label_20362c;
    }
    ctx->pc = 0x203624u;
    {
        const bool branch_taken_0x203624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x203628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203624u;
        // 0x203628: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203624) {
            ctx->pc = 0x2037A4u;
            goto label_2037a4;
        }
    }
    ctx->pc = 0x20362Cu;
label_20362c:
    // 0x20362c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x20362cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_203630:
    // 0x203630: 0x1062005d  beq         $v1, $v0, . + 4 + (0x5D << 2)
label_203634:
    if (ctx->pc == 0x203634u) {
        ctx->pc = 0x203634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203630u;
        // 0x203634: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203638u;
        goto label_203638;
    }
    ctx->pc = 0x203630u;
    {
        const bool branch_taken_0x203630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x203634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203630u;
        // 0x203634: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203630) {
            ctx->pc = 0x2037A8u;
            goto label_2037a8;
        }
    }
    ctx->pc = 0x203638u;
label_203638:
    // 0x203638: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x203638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20363c:
    // 0x20363c: 0x10620059  beq         $v1, $v0, . + 4 + (0x59 << 2)
label_203640:
    if (ctx->pc == 0x203640u) {
        ctx->pc = 0x203640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20363Cu;
        // 0x203640: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203644u;
        goto label_203644;
    }
    ctx->pc = 0x20363Cu;
    {
        const bool branch_taken_0x20363c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x203640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20363Cu;
        // 0x203640: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20363c) {
            ctx->pc = 0x2037A4u;
            goto label_2037a4;
        }
    }
    ctx->pc = 0x203644u;
label_203644:
    // 0x203644: 0x1062004b  beq         $v1, $v0, . + 4 + (0x4B << 2)
label_203648:
    if (ctx->pc == 0x203648u) {
        ctx->pc = 0x203648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203644u;
        // 0x203648: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20364Cu;
        goto label_20364c;
    }
    ctx->pc = 0x203644u;
    {
        const bool branch_taken_0x203644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x203648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203644u;
        // 0x203648: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203644) {
            ctx->pc = 0x203774u;
            goto label_203774;
        }
    }
    ctx->pc = 0x20364Cu;
label_20364c:
    // 0x20364c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_203650:
    if (ctx->pc == 0x203650u) {
        ctx->pc = 0x203650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20364Cu;
        // 0x203650: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203654u;
        goto label_203654;
    }
    ctx->pc = 0x20364Cu;
    {
        const bool branch_taken_0x20364c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x203650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20364Cu;
        // 0x203650: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20364c) {
            ctx->pc = 0x20365Cu;
            goto label_20365c;
        }
    }
    ctx->pc = 0x203654u;
label_203654:
    // 0x203654: 0x10000060  b           . + 4 + (0x60 << 2)
label_203658:
    if (ctx->pc == 0x203658u) {
        ctx->pc = 0x203658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203654u;
        // 0x203658: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20365Cu;
        goto label_20365c;
    }
    ctx->pc = 0x203654u;
    {
        const bool branch_taken_0x203654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203654u;
        // 0x203658: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203654) {
            ctx->pc = 0x2037D8u;
            { ctx->pc = 0x2037d8; return; }
        }
    }
    ctx->pc = 0x20365Cu;
label_20365c:
    // 0x20365c: 0x14e20002  bne         $a3, $v0, . + 4 + (0x2 << 2)
label_203660:
    if (ctx->pc == 0x203660u) {
        ctx->pc = 0x203660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20365Cu;
        // 0x203660: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203664u;
        goto label_203664;
    }
    ctx->pc = 0x20365Cu;
    {
        const bool branch_taken_0x20365c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x203660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20365Cu;
        // 0x203660: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20365c) {
            ctx->pc = 0x203668u;
            goto label_203668;
        }
    }
    ctx->pc = 0x203664u;
label_203664:
    // 0x203664: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x203664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_203668:
    // 0x203668: 0x8cc40480  lw          $a0, 0x480($a2)
    ctx->pc = 0x203668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1152)));
label_20366c:
    // 0x20366c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x20366cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_203670:
    // 0x203670: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x203670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_203674:
    // 0x203674: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_203678:
    if (ctx->pc == 0x203678u) {
        ctx->pc = 0x203678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203674u;
        // 0x203678: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20367Cu;
        goto label_20367c;
    }
    ctx->pc = 0x203674u;
    {
        const bool branch_taken_0x203674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203674u;
        // 0x203678: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203674) {
            ctx->pc = 0x2036B0u;
            goto label_2036b0;
        }
    }
    ctx->pc = 0x20367Cu;
label_20367c:
    // 0x20367c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20367cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_203680:
    // 0x203680: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x203680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_203684:
    // 0x203684: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x203684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_203688:
    // 0x203688: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203688u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20368c:
    // 0x20368c: 0xc08104c  jal         func_204130
label_203690:
    if (ctx->pc == 0x203690u) {
        ctx->pc = 0x203690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20368Cu;
        // 0x203690: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203694u;
        goto label_203694;
    }
    ctx->pc = 0x20368Cu;
    SET_GPR_U32(ctx, 31, 0x203694u);
    ctx->pc = 0x203690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20368Cu;
    // 0x203690: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203694u;
label_203694:
    // 0x203694: 0xc07aaa8  jal         func_1EAAA0
label_203698:
    if (ctx->pc == 0x203698u) {
        ctx->pc = 0x203698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203694u;
        // 0x203698: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20369Cu;
        goto label_20369c;
    }
    ctx->pc = 0x203694u;
    SET_GPR_U32(ctx, 31, 0x20369Cu);
    ctx->pc = 0x203698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203694u;
    // 0x203698: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x20369Cu;
label_20369c:
    // 0x20369c: 0xc07aa84  jal         func_1EAA10
label_2036a0:
    if (ctx->pc == 0x2036A0u) {
        ctx->pc = 0x2036A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20369Cu;
        // 0x2036a0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2036A4u;
        goto label_2036a4;
    }
    ctx->pc = 0x20369Cu;
    SET_GPR_U32(ctx, 31, 0x2036A4u);
    ctx->pc = 0x2036A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20369Cu;
    // 0x2036a0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x2036A4u;
label_2036a4:
    // 0x2036a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2036a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2036a8:
    // 0x2036a8: 0x10000056  b           . + 4 + (0x56 << 2)
label_2036ac:
    if (ctx->pc == 0x2036ACu) {
        ctx->pc = 0x2036ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036A8u;
        // 0x2036ac: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2036B0u;
        goto label_2036b0;
    }
    ctx->pc = 0x2036A8u;
    {
        const bool branch_taken_0x2036a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2036ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036A8u;
        // 0x2036ac: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2036a8) {
            ctx->pc = 0x203804u;
            { ctx->pc = 0x203804; return; }
        }
    }
    ctx->pc = 0x2036B0u;
label_2036b0:
    // 0x2036b0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2036b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_2036b4:
    // 0x2036b4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2036b8:
    if (ctx->pc == 0x2036B8u) {
        ctx->pc = 0x2036BCu;
        goto label_2036bc;
    }
    ctx->pc = 0x2036B4u;
    {
        const bool branch_taken_0x2036b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2036b4) {
            ctx->pc = 0x203700u;
            goto label_203700;
        }
    }
    ctx->pc = 0x2036BCu;
label_2036bc:
    // 0x2036bc: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x2036bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_2036c0:
    // 0x2036c0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2036c4:
    if (ctx->pc == 0x2036C4u) {
        ctx->pc = 0x2036C8u;
        goto label_2036c8;
    }
    ctx->pc = 0x2036C0u;
    {
        const bool branch_taken_0x2036c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2036c0) {
            ctx->pc = 0x2036CCu;
            goto label_2036cc;
        }
    }
    ctx->pc = 0x2036C8u;
label_2036c8:
    // 0x2036c8: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x2036c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_2036cc:
    // 0x2036cc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2036ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2036d0:
    // 0x2036d0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2036d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2036d4:
    // 0x2036d4: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x2036d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2036d8:
    // 0x2036d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2036d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2036dc:
    // 0x2036dc: 0xc08104c  jal         func_204130
label_2036e0:
    if (ctx->pc == 0x2036E0u) {
        ctx->pc = 0x2036E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036DCu;
        // 0x2036e0: 0x27a80120  addiu       $t0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2036E4u;
        goto label_2036e4;
    }
    ctx->pc = 0x2036DCu;
    SET_GPR_U32(ctx, 31, 0x2036E4u);
    ctx->pc = 0x2036E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2036DCu;
    // 0x2036e0: 0x27a80120  addiu       $t0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x2036E4u;
label_2036e4:
    // 0x2036e4: 0xc07aaa8  jal         func_1EAAA0
label_2036e8:
    if (ctx->pc == 0x2036E8u) {
        ctx->pc = 0x2036E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036E4u;
        // 0x2036e8: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2036ECu;
        goto label_2036ec;
    }
    ctx->pc = 0x2036E4u;
    SET_GPR_U32(ctx, 31, 0x2036ECu);
    ctx->pc = 0x2036E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2036E4u;
    // 0x2036e8: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x2036ECu;
label_2036ec:
    // 0x2036ec: 0xc07aa84  jal         func_1EAA10
label_2036f0:
    if (ctx->pc == 0x2036F0u) {
        ctx->pc = 0x2036F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036ECu;
        // 0x2036f0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2036F4u;
        goto label_2036f4;
    }
    ctx->pc = 0x2036ECu;
    SET_GPR_U32(ctx, 31, 0x2036F4u);
    ctx->pc = 0x2036F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2036ECu;
    // 0x2036f0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x2036F4u;
label_2036f4:
    // 0x2036f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2036f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2036f8:
    // 0x2036f8: 0x10000042  b           . + 4 + (0x42 << 2)
label_2036fc:
    if (ctx->pc == 0x2036FCu) {
        ctx->pc = 0x2036FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036F8u;
        // 0x2036fc: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203700u;
        goto label_203700;
    }
    ctx->pc = 0x2036F8u;
    {
        const bool branch_taken_0x2036f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2036FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036F8u;
        // 0x2036fc: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2036f8) {
            ctx->pc = 0x203804u;
            { ctx->pc = 0x203804; return; }
        }
    }
    ctx->pc = 0x203700u;
label_203700:
    // 0x203700: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x203700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_203704:
    // 0x203704: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_203708:
    if (ctx->pc == 0x203708u) {
        ctx->pc = 0x20370Cu;
        goto label_20370c;
    }
    ctx->pc = 0x203704u;
    {
        const bool branch_taken_0x203704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203704) {
            ctx->pc = 0x203740u;
            goto label_203740;
        }
    }
    ctx->pc = 0x20370Cu;
label_20370c:
    // 0x20370c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20370cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_203710:
    // 0x203710: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x203710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_203714:
    // 0x203714: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x203714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_203718:
    // 0x203718: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203718u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20371c:
    // 0x20371c: 0xc08104c  jal         func_204130
label_203720:
    if (ctx->pc == 0x203720u) {
        ctx->pc = 0x203720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20371Cu;
        // 0x203720: 0x27a80220  addiu       $t0, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203724u;
        goto label_203724;
    }
    ctx->pc = 0x20371Cu;
    SET_GPR_U32(ctx, 31, 0x203724u);
    ctx->pc = 0x203720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20371Cu;
    // 0x203720: 0x27a80220  addiu       $t0, $sp, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203724u;
label_203724:
    // 0x203724: 0xc07aaa8  jal         func_1EAAA0
label_203728:
    if (ctx->pc == 0x203728u) {
        ctx->pc = 0x203728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203724u;
        // 0x203728: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20372Cu;
        goto label_20372c;
    }
    ctx->pc = 0x203724u;
    SET_GPR_U32(ctx, 31, 0x20372Cu);
    ctx->pc = 0x203728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203724u;
    // 0x203728: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x20372Cu;
label_20372c:
    // 0x20372c: 0xc07aa84  jal         func_1EAA10
label_203730:
    if (ctx->pc == 0x203730u) {
        ctx->pc = 0x203730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20372Cu;
        // 0x203730: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203734u;
        goto label_203734;
    }
    ctx->pc = 0x20372Cu;
    SET_GPR_U32(ctx, 31, 0x203734u);
    ctx->pc = 0x203730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20372Cu;
    // 0x203730: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x203734u;
label_203734:
    // 0x203734: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203738:
    // 0x203738: 0x10000032  b           . + 4 + (0x32 << 2)
label_20373c:
    if (ctx->pc == 0x20373Cu) {
        ctx->pc = 0x20373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203738u;
        // 0x20373c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203740u;
        goto label_203740;
    }
    ctx->pc = 0x203738u;
    {
        const bool branch_taken_0x203738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203738u;
        // 0x20373c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203738) {
            ctx->pc = 0x203804u;
            { ctx->pc = 0x203804; return; }
        }
    }
    ctx->pc = 0x203740u;
label_203740:
    // 0x203740: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x203740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_203744:
    // 0x203744: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x203744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_203748:
    // 0x203748: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x203748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20374c:
    // 0x20374c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20374cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203750:
    // 0x203750: 0xc08104c  jal         func_204130
label_203754:
    if (ctx->pc == 0x203754u) {
        ctx->pc = 0x203754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203750u;
        // 0x203754: 0x27a80320  addiu       $t0, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203758u;
        goto label_203758;
    }
    ctx->pc = 0x203750u;
    SET_GPR_U32(ctx, 31, 0x203758u);
    ctx->pc = 0x203754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203750u;
    // 0x203754: 0x27a80320  addiu       $t0, $sp, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203758u;
label_203758:
    // 0x203758: 0xc07aaa8  jal         func_1EAAA0
label_20375c:
    if (ctx->pc == 0x20375Cu) {
        ctx->pc = 0x20375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203758u;
        // 0x20375c: 0x27a40320  addiu       $a0, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203760u;
        goto label_203760;
    }
    ctx->pc = 0x203758u;
    SET_GPR_U32(ctx, 31, 0x203760u);
    ctx->pc = 0x20375Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203758u;
    // 0x20375c: 0x27a40320  addiu       $a0, $sp, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x203760u;
label_203760:
    // 0x203760: 0xc07aa84  jal         func_1EAA10
label_203764:
    if (ctx->pc == 0x203764u) {
        ctx->pc = 0x203764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203760u;
        // 0x203764: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203768u;
        goto label_203768;
    }
    ctx->pc = 0x203760u;
    SET_GPR_U32(ctx, 31, 0x203768u);
    ctx->pc = 0x203764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203760u;
    // 0x203764: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x203768u;
label_203768:
    // 0x203768: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20376c:
    // 0x20376c: 0x10000025  b           . + 4 + (0x25 << 2)
label_203770:
    if (ctx->pc == 0x203770u) {
        ctx->pc = 0x203770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20376Cu;
        // 0x203770: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203774u;
        goto label_203774;
    }
    ctx->pc = 0x20376Cu;
    {
        const bool branch_taken_0x20376c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20376Cu;
        // 0x203770: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20376c) {
            ctx->pc = 0x203804u;
            { ctx->pc = 0x203804; return; }
        }
    }
    ctx->pc = 0x203774u;
label_203774:
    // 0x203774: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x203774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_203778:
    // 0x203778: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x203778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20377c:
    // 0x20377c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20377cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203780:
    // 0x203780: 0xc08104c  jal         func_204130
label_203784:
    if (ctx->pc == 0x203784u) {
        ctx->pc = 0x203784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203780u;
        // 0x203784: 0x27a80420  addiu       $t0, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203788u;
        goto label_203788;
    }
    ctx->pc = 0x203780u;
    SET_GPR_U32(ctx, 31, 0x203788u);
    ctx->pc = 0x203784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203780u;
    // 0x203784: 0x27a80420  addiu       $t0, $sp, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203788u;
label_203788:
    // 0x203788: 0xc07aaa8  jal         func_1EAAA0
label_20378c:
    if (ctx->pc == 0x20378Cu) {
        ctx->pc = 0x20378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203788u;
        // 0x20378c: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203790u;
        goto label_203790;
    }
    ctx->pc = 0x203788u;
    SET_GPR_U32(ctx, 31, 0x203790u);
    ctx->pc = 0x20378Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203788u;
    // 0x20378c: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x203790u;
label_203790:
    // 0x203790: 0xc07aa84  jal         func_1EAA10
label_203794:
    if (ctx->pc == 0x203794u) {
        ctx->pc = 0x203794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203790u;
        // 0x203794: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203798u;
        goto label_203798;
    }
    ctx->pc = 0x203790u;
    SET_GPR_U32(ctx, 31, 0x203798u);
    ctx->pc = 0x203794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203790u;
    // 0x203794: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x203798u;
label_203798:
    // 0x203798: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20379c:
    // 0x20379c: 0x10000019  b           . + 4 + (0x19 << 2)
label_2037a0:
    if (ctx->pc == 0x2037A0u) {
        ctx->pc = 0x2037A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20379Cu;
        // 0x2037a0: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2037A4u;
        goto label_2037a4;
    }
    ctx->pc = 0x20379Cu;
    {
        const bool branch_taken_0x20379c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2037A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20379Cu;
        // 0x2037a0: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20379c) {
            ctx->pc = 0x203804u;
            { ctx->pc = 0x203804; return; }
        }
    }
    ctx->pc = 0x2037A4u;
label_2037a4:
    // 0x2037a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2037a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2037a8:
    // 0x2037a8: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x2037a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_2037ac:
    // 0x2037ac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2037acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x2037b0u;
    return;
}

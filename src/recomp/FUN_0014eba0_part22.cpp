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

// Function: FUN_0014eba0
// Address: 0x14eba0 - 0x2ced24
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0014eba0_part22(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x158fb0u: goto label_158fb0;
        case 0x158fb4u: goto label_158fb4;
        case 0x158fb8u: goto label_158fb8;
        case 0x158fbcu: goto label_158fbc;
        case 0x158fc0u: goto label_158fc0;
        case 0x158fc4u: goto label_158fc4;
        case 0x158fc8u: goto label_158fc8;
        case 0x158fccu: goto label_158fcc;
        case 0x158fd0u: goto label_158fd0;
        case 0x158fd4u: goto label_158fd4;
        case 0x158fd8u: goto label_158fd8;
        case 0x158fdcu: goto label_158fdc;
        case 0x158fe0u: goto label_158fe0;
        case 0x158fe4u: goto label_158fe4;
        case 0x158fe8u: goto label_158fe8;
        case 0x158fecu: goto label_158fec;
        case 0x158ff0u: goto label_158ff0;
        case 0x158ff4u: goto label_158ff4;
        case 0x158ff8u: goto label_158ff8;
        case 0x158ffcu: goto label_158ffc;
        case 0x159000u: goto label_159000;
        case 0x159004u: goto label_159004;
        case 0x159008u: goto label_159008;
        case 0x15900cu: goto label_15900c;
        case 0x159010u: goto label_159010;
        case 0x159014u: goto label_159014;
        case 0x159018u: goto label_159018;
        case 0x15901cu: goto label_15901c;
        case 0x159020u: goto label_159020;
        case 0x159024u: goto label_159024;
        case 0x159028u: goto label_159028;
        case 0x15902cu: goto label_15902c;
        case 0x159030u: goto label_159030;
        case 0x159034u: goto label_159034;
        case 0x159038u: goto label_159038;
        case 0x15903cu: goto label_15903c;
        case 0x159040u: goto label_159040;
        case 0x159044u: goto label_159044;
        case 0x159048u: goto label_159048;
        case 0x15904cu: goto label_15904c;
        case 0x159050u: goto label_159050;
        case 0x159054u: goto label_159054;
        case 0x159058u: goto label_159058;
        case 0x15905cu: goto label_15905c;
        case 0x159060u: goto label_159060;
        case 0x159064u: goto label_159064;
        case 0x159068u: goto label_159068;
        case 0x15906cu: goto label_15906c;
        case 0x159070u: goto label_159070;
        case 0x159074u: goto label_159074;
        case 0x159078u: goto label_159078;
        case 0x15907cu: goto label_15907c;
        case 0x159080u: goto label_159080;
        case 0x159084u: goto label_159084;
        case 0x159088u: goto label_159088;
        case 0x15908cu: goto label_15908c;
        case 0x159090u: goto label_159090;
        case 0x159094u: goto label_159094;
        case 0x159098u: goto label_159098;
        case 0x15909cu: goto label_15909c;
        case 0x1590a0u: goto label_1590a0;
        case 0x1590a4u: goto label_1590a4;
        case 0x1590a8u: goto label_1590a8;
        case 0x1590acu: goto label_1590ac;
        case 0x1590b0u: goto label_1590b0;
        case 0x1590b4u: goto label_1590b4;
        case 0x1590b8u: goto label_1590b8;
        case 0x1590bcu: goto label_1590bc;
        case 0x1590c0u: goto label_1590c0;
        case 0x1590c4u: goto label_1590c4;
        case 0x1590c8u: goto label_1590c8;
        case 0x1590ccu: goto label_1590cc;
        case 0x1590d0u: goto label_1590d0;
        case 0x1590d4u: goto label_1590d4;
        case 0x1590d8u: goto label_1590d8;
        case 0x1590dcu: goto label_1590dc;
        case 0x1590e0u: goto label_1590e0;
        case 0x1590e4u: goto label_1590e4;
        case 0x1590e8u: goto label_1590e8;
        case 0x1590ecu: goto label_1590ec;
        case 0x1590f0u: goto label_1590f0;
        case 0x1590f4u: goto label_1590f4;
        case 0x1590f8u: goto label_1590f8;
        case 0x1590fcu: goto label_1590fc;
        case 0x159100u: goto label_159100;
        case 0x159104u: goto label_159104;
        case 0x159108u: goto label_159108;
        case 0x15910cu: goto label_15910c;
        case 0x159110u: goto label_159110;
        case 0x159114u: goto label_159114;
        case 0x159118u: goto label_159118;
        case 0x15911cu: goto label_15911c;
        case 0x159120u: goto label_159120;
        case 0x159124u: goto label_159124;
        case 0x159128u: goto label_159128;
        case 0x15912cu: goto label_15912c;
        case 0x159130u: goto label_159130;
        case 0x159134u: goto label_159134;
        case 0x159138u: goto label_159138;
        case 0x15913cu: goto label_15913c;
        case 0x159140u: goto label_159140;
        case 0x159144u: goto label_159144;
        case 0x159148u: goto label_159148;
        case 0x15914cu: goto label_15914c;
        case 0x159150u: goto label_159150;
        case 0x159154u: goto label_159154;
        case 0x159158u: goto label_159158;
        case 0x15915cu: goto label_15915c;
        case 0x159160u: goto label_159160;
        case 0x159164u: goto label_159164;
        case 0x159168u: goto label_159168;
        case 0x15916cu: goto label_15916c;
        case 0x159170u: goto label_159170;
        case 0x159174u: goto label_159174;
        case 0x159178u: goto label_159178;
        case 0x15917cu: goto label_15917c;
        case 0x159180u: goto label_159180;
        case 0x159184u: goto label_159184;
        case 0x159188u: goto label_159188;
        case 0x15918cu: goto label_15918c;
        case 0x159190u: goto label_159190;
        case 0x159194u: goto label_159194;
        case 0x159198u: goto label_159198;
        case 0x15919cu: goto label_15919c;
        case 0x1591a0u: goto label_1591a0;
        case 0x1591a4u: goto label_1591a4;
        case 0x1591a8u: goto label_1591a8;
        case 0x1591acu: goto label_1591ac;
        case 0x1591b0u: goto label_1591b0;
        case 0x1591b4u: goto label_1591b4;
        case 0x1591b8u: goto label_1591b8;
        case 0x1591bcu: goto label_1591bc;
        case 0x1591c0u: goto label_1591c0;
        case 0x1591c4u: goto label_1591c4;
        case 0x1591c8u: goto label_1591c8;
        case 0x1591ccu: goto label_1591cc;
        case 0x1591d0u: goto label_1591d0;
        case 0x1591d4u: goto label_1591d4;
        case 0x1591d8u: goto label_1591d8;
        case 0x1591dcu: goto label_1591dc;
        case 0x1591e0u: goto label_1591e0;
        case 0x1591e4u: goto label_1591e4;
        case 0x1591e8u: goto label_1591e8;
        case 0x1591ecu: goto label_1591ec;
        case 0x1591f0u: goto label_1591f0;
        case 0x1591f4u: goto label_1591f4;
        case 0x1591f8u: goto label_1591f8;
        case 0x1591fcu: goto label_1591fc;
        case 0x159200u: goto label_159200;
        case 0x159204u: goto label_159204;
        case 0x159208u: goto label_159208;
        case 0x15920cu: goto label_15920c;
        case 0x159210u: goto label_159210;
        case 0x159214u: goto label_159214;
        case 0x159218u: goto label_159218;
        case 0x15921cu: goto label_15921c;
        case 0x159220u: goto label_159220;
        case 0x159224u: goto label_159224;
        case 0x159228u: goto label_159228;
        case 0x15922cu: goto label_15922c;
        case 0x159230u: goto label_159230;
        case 0x159234u: goto label_159234;
        case 0x159238u: goto label_159238;
        case 0x15923cu: goto label_15923c;
        case 0x159240u: goto label_159240;
        case 0x159244u: goto label_159244;
        case 0x159248u: goto label_159248;
        case 0x15924cu: goto label_15924c;
        case 0x159250u: goto label_159250;
        case 0x159254u: goto label_159254;
        case 0x159258u: goto label_159258;
        case 0x15925cu: goto label_15925c;
        case 0x159260u: goto label_159260;
        case 0x159264u: goto label_159264;
        case 0x159268u: goto label_159268;
        case 0x15926cu: goto label_15926c;
        case 0x159270u: goto label_159270;
        case 0x159274u: goto label_159274;
        case 0x159278u: goto label_159278;
        case 0x15927cu: goto label_15927c;
        case 0x159280u: goto label_159280;
        case 0x159284u: goto label_159284;
        case 0x159288u: goto label_159288;
        case 0x15928cu: goto label_15928c;
        case 0x159290u: goto label_159290;
        case 0x159294u: goto label_159294;
        case 0x159298u: goto label_159298;
        case 0x15929cu: goto label_15929c;
        case 0x1592a0u: goto label_1592a0;
        case 0x1592a4u: goto label_1592a4;
        case 0x1592a8u: goto label_1592a8;
        case 0x1592acu: goto label_1592ac;
        case 0x1592b0u: goto label_1592b0;
        case 0x1592b4u: goto label_1592b4;
        case 0x1592b8u: goto label_1592b8;
        case 0x1592bcu: goto label_1592bc;
        case 0x1592c0u: goto label_1592c0;
        case 0x1592c4u: goto label_1592c4;
        case 0x1592c8u: goto label_1592c8;
        case 0x1592ccu: goto label_1592cc;
        case 0x1592d0u: goto label_1592d0;
        case 0x1592d4u: goto label_1592d4;
        case 0x1592d8u: goto label_1592d8;
        case 0x1592dcu: goto label_1592dc;
        case 0x1592e0u: goto label_1592e0;
        case 0x1592e4u: goto label_1592e4;
        case 0x1592e8u: goto label_1592e8;
        case 0x1592ecu: goto label_1592ec;
        case 0x1592f0u: goto label_1592f0;
        case 0x1592f4u: goto label_1592f4;
        case 0x1592f8u: goto label_1592f8;
        case 0x1592fcu: goto label_1592fc;
        case 0x159300u: goto label_159300;
        case 0x159304u: goto label_159304;
        case 0x159308u: goto label_159308;
        case 0x15930cu: goto label_15930c;
        case 0x159310u: goto label_159310;
        case 0x159314u: goto label_159314;
        case 0x159318u: goto label_159318;
        case 0x15931cu: goto label_15931c;
        case 0x159320u: goto label_159320;
        case 0x159324u: goto label_159324;
        case 0x159328u: goto label_159328;
        case 0x15932cu: goto label_15932c;
        case 0x159330u: goto label_159330;
        case 0x159334u: goto label_159334;
        case 0x159338u: goto label_159338;
        case 0x15933cu: goto label_15933c;
        case 0x159340u: goto label_159340;
        case 0x159344u: goto label_159344;
        case 0x159348u: goto label_159348;
        case 0x15934cu: goto label_15934c;
        case 0x159350u: goto label_159350;
        case 0x159354u: goto label_159354;
        case 0x159358u: goto label_159358;
        case 0x15935cu: goto label_15935c;
        case 0x159360u: goto label_159360;
        case 0x159364u: goto label_159364;
        case 0x159368u: goto label_159368;
        case 0x15936cu: goto label_15936c;
        case 0x159370u: goto label_159370;
        case 0x159374u: goto label_159374;
        case 0x159378u: goto label_159378;
        case 0x15937cu: goto label_15937c;
        case 0x159380u: goto label_159380;
        case 0x159384u: goto label_159384;
        case 0x159388u: goto label_159388;
        case 0x15938cu: goto label_15938c;
        case 0x159390u: goto label_159390;
        case 0x159394u: goto label_159394;
        case 0x159398u: goto label_159398;
        case 0x15939cu: goto label_15939c;
        case 0x1593a0u: goto label_1593a0;
        case 0x1593a4u: goto label_1593a4;
        case 0x1593a8u: goto label_1593a8;
        case 0x1593acu: goto label_1593ac;
        case 0x1593b0u: goto label_1593b0;
        case 0x1593b4u: goto label_1593b4;
        case 0x1593b8u: goto label_1593b8;
        case 0x1593bcu: goto label_1593bc;
        case 0x1593c0u: goto label_1593c0;
        case 0x1593c4u: goto label_1593c4;
        case 0x1593c8u: goto label_1593c8;
        case 0x1593ccu: goto label_1593cc;
        case 0x1593d0u: goto label_1593d0;
        case 0x1593d4u: goto label_1593d4;
        case 0x1593d8u: goto label_1593d8;
        case 0x1593dcu: goto label_1593dc;
        case 0x1593e0u: goto label_1593e0;
        case 0x1593e4u: goto label_1593e4;
        case 0x1593e8u: goto label_1593e8;
        case 0x1593ecu: goto label_1593ec;
        case 0x1593f0u: goto label_1593f0;
        case 0x1593f4u: goto label_1593f4;
        case 0x1593f8u: goto label_1593f8;
        case 0x1593fcu: goto label_1593fc;
        case 0x159400u: goto label_159400;
        case 0x159404u: goto label_159404;
        case 0x159408u: goto label_159408;
        case 0x15940cu: goto label_15940c;
        case 0x159410u: goto label_159410;
        case 0x159414u: goto label_159414;
        case 0x159418u: goto label_159418;
        case 0x15941cu: goto label_15941c;
        case 0x159420u: goto label_159420;
        case 0x159424u: goto label_159424;
        case 0x159428u: goto label_159428;
        case 0x15942cu: goto label_15942c;
        case 0x159430u: goto label_159430;
        case 0x159434u: goto label_159434;
        case 0x159438u: goto label_159438;
        case 0x15943cu: goto label_15943c;
        case 0x159440u: goto label_159440;
        case 0x159444u: goto label_159444;
        case 0x159448u: goto label_159448;
        case 0x15944cu: goto label_15944c;
        case 0x159450u: goto label_159450;
        case 0x159454u: goto label_159454;
        case 0x159458u: goto label_159458;
        case 0x15945cu: goto label_15945c;
        case 0x159460u: goto label_159460;
        case 0x159464u: goto label_159464;
        case 0x159468u: goto label_159468;
        case 0x15946cu: goto label_15946c;
        case 0x159470u: goto label_159470;
        case 0x159474u: goto label_159474;
        case 0x159478u: goto label_159478;
        case 0x15947cu: goto label_15947c;
        case 0x159480u: goto label_159480;
        case 0x159484u: goto label_159484;
        case 0x159488u: goto label_159488;
        case 0x15948cu: goto label_15948c;
        case 0x159490u: goto label_159490;
        case 0x159494u: goto label_159494;
        case 0x159498u: goto label_159498;
        case 0x15949cu: goto label_15949c;
        case 0x1594a0u: goto label_1594a0;
        case 0x1594a4u: goto label_1594a4;
        case 0x1594a8u: goto label_1594a8;
        case 0x1594acu: goto label_1594ac;
        case 0x1594b0u: goto label_1594b0;
        case 0x1594b4u: goto label_1594b4;
        case 0x1594b8u: goto label_1594b8;
        case 0x1594bcu: goto label_1594bc;
        case 0x1594c0u: goto label_1594c0;
        case 0x1594c4u: goto label_1594c4;
        case 0x1594c8u: goto label_1594c8;
        case 0x1594ccu: goto label_1594cc;
        case 0x1594d0u: goto label_1594d0;
        case 0x1594d4u: goto label_1594d4;
        case 0x1594d8u: goto label_1594d8;
        case 0x1594dcu: goto label_1594dc;
        case 0x1594e0u: goto label_1594e0;
        case 0x1594e4u: goto label_1594e4;
        case 0x1594e8u: goto label_1594e8;
        case 0x1594ecu: goto label_1594ec;
        case 0x1594f0u: goto label_1594f0;
        case 0x1594f4u: goto label_1594f4;
        case 0x1594f8u: goto label_1594f8;
        case 0x1594fcu: goto label_1594fc;
        case 0x159500u: goto label_159500;
        case 0x159504u: goto label_159504;
        case 0x159508u: goto label_159508;
        case 0x15950cu: goto label_15950c;
        case 0x159510u: goto label_159510;
        case 0x159514u: goto label_159514;
        case 0x159518u: goto label_159518;
        case 0x15951cu: goto label_15951c;
        case 0x159520u: goto label_159520;
        case 0x159524u: goto label_159524;
        case 0x159528u: goto label_159528;
        case 0x15952cu: goto label_15952c;
        case 0x159530u: goto label_159530;
        case 0x159534u: goto label_159534;
        case 0x159538u: goto label_159538;
        case 0x15953cu: goto label_15953c;
        case 0x159540u: goto label_159540;
        case 0x159544u: goto label_159544;
        case 0x159548u: goto label_159548;
        case 0x15954cu: goto label_15954c;
        case 0x159550u: goto label_159550;
        case 0x159554u: goto label_159554;
        case 0x159558u: goto label_159558;
        case 0x15955cu: goto label_15955c;
        case 0x159560u: goto label_159560;
        case 0x159564u: goto label_159564;
        case 0x159568u: goto label_159568;
        case 0x15956cu: goto label_15956c;
        case 0x159570u: goto label_159570;
        case 0x159574u: goto label_159574;
        case 0x159578u: goto label_159578;
        case 0x15957cu: goto label_15957c;
        case 0x159580u: goto label_159580;
        case 0x159584u: goto label_159584;
        case 0x159588u: goto label_159588;
        case 0x15958cu: goto label_15958c;
        case 0x159590u: goto label_159590;
        case 0x159594u: goto label_159594;
        case 0x159598u: goto label_159598;
        case 0x15959cu: goto label_15959c;
        case 0x1595a0u: goto label_1595a0;
        case 0x1595a4u: goto label_1595a4;
        case 0x1595a8u: goto label_1595a8;
        case 0x1595acu: goto label_1595ac;
        case 0x1595b0u: goto label_1595b0;
        case 0x1595b4u: goto label_1595b4;
        case 0x1595b8u: goto label_1595b8;
        case 0x1595bcu: goto label_1595bc;
        case 0x1595c0u: goto label_1595c0;
        case 0x1595c4u: goto label_1595c4;
        case 0x1595c8u: goto label_1595c8;
        case 0x1595ccu: goto label_1595cc;
        case 0x1595d0u: goto label_1595d0;
        case 0x1595d4u: goto label_1595d4;
        case 0x1595d8u: goto label_1595d8;
        case 0x1595dcu: goto label_1595dc;
        case 0x1595e0u: goto label_1595e0;
        case 0x1595e4u: goto label_1595e4;
        case 0x1595e8u: goto label_1595e8;
        case 0x1595ecu: goto label_1595ec;
        case 0x1595f0u: goto label_1595f0;
        case 0x1595f4u: goto label_1595f4;
        case 0x1595f8u: goto label_1595f8;
        case 0x1595fcu: goto label_1595fc;
        case 0x159600u: goto label_159600;
        case 0x159604u: goto label_159604;
        case 0x159608u: goto label_159608;
        case 0x15960cu: goto label_15960c;
        case 0x159610u: goto label_159610;
        case 0x159614u: goto label_159614;
        case 0x159618u: goto label_159618;
        case 0x15961cu: goto label_15961c;
        case 0x159620u: goto label_159620;
        case 0x159624u: goto label_159624;
        case 0x159628u: goto label_159628;
        case 0x15962cu: goto label_15962c;
        case 0x159630u: goto label_159630;
        case 0x159634u: goto label_159634;
        case 0x159638u: goto label_159638;
        case 0x15963cu: goto label_15963c;
        case 0x159640u: goto label_159640;
        case 0x159644u: goto label_159644;
        case 0x159648u: goto label_159648;
        case 0x15964cu: goto label_15964c;
        case 0x159650u: goto label_159650;
        case 0x159654u: goto label_159654;
        case 0x159658u: goto label_159658;
        case 0x15965cu: goto label_15965c;
        case 0x159660u: goto label_159660;
        case 0x159664u: goto label_159664;
        case 0x159668u: goto label_159668;
        case 0x15966cu: goto label_15966c;
        case 0x159670u: goto label_159670;
        case 0x159674u: goto label_159674;
        case 0x159678u: goto label_159678;
        case 0x15967cu: goto label_15967c;
        case 0x159680u: goto label_159680;
        case 0x159684u: goto label_159684;
        case 0x159688u: goto label_159688;
        case 0x15968cu: goto label_15968c;
        case 0x159690u: goto label_159690;
        case 0x159694u: goto label_159694;
        case 0x159698u: goto label_159698;
        case 0x15969cu: goto label_15969c;
        case 0x1596a0u: goto label_1596a0;
        case 0x1596a4u: goto label_1596a4;
        case 0x1596a8u: goto label_1596a8;
        case 0x1596acu: goto label_1596ac;
        case 0x1596b0u: goto label_1596b0;
        case 0x1596b4u: goto label_1596b4;
        case 0x1596b8u: goto label_1596b8;
        case 0x1596bcu: goto label_1596bc;
        case 0x1596c0u: goto label_1596c0;
        case 0x1596c4u: goto label_1596c4;
        case 0x1596c8u: goto label_1596c8;
        case 0x1596ccu: goto label_1596cc;
        case 0x1596d0u: goto label_1596d0;
        case 0x1596d4u: goto label_1596d4;
        case 0x1596d8u: goto label_1596d8;
        case 0x1596dcu: goto label_1596dc;
        case 0x1596e0u: goto label_1596e0;
        case 0x1596e4u: goto label_1596e4;
        case 0x1596e8u: goto label_1596e8;
        case 0x1596ecu: goto label_1596ec;
        case 0x1596f0u: goto label_1596f0;
        case 0x1596f4u: goto label_1596f4;
        case 0x1596f8u: goto label_1596f8;
        case 0x1596fcu: goto label_1596fc;
        case 0x159700u: goto label_159700;
        case 0x159704u: goto label_159704;
        case 0x159708u: goto label_159708;
        case 0x15970cu: goto label_15970c;
        case 0x159710u: goto label_159710;
        case 0x159714u: goto label_159714;
        case 0x159718u: goto label_159718;
        case 0x15971cu: goto label_15971c;
        case 0x159720u: goto label_159720;
        case 0x159724u: goto label_159724;
        case 0x159728u: goto label_159728;
        case 0x15972cu: goto label_15972c;
        case 0x159730u: goto label_159730;
        case 0x159734u: goto label_159734;
        case 0x159738u: goto label_159738;
        case 0x15973cu: goto label_15973c;
        case 0x159740u: goto label_159740;
        case 0x159744u: goto label_159744;
        case 0x159748u: goto label_159748;
        case 0x15974cu: goto label_15974c;
        case 0x159750u: goto label_159750;
        case 0x159754u: goto label_159754;
        case 0x159758u: goto label_159758;
        case 0x15975cu: goto label_15975c;
        case 0x159760u: goto label_159760;
        case 0x159764u: goto label_159764;
        case 0x159768u: goto label_159768;
        case 0x15976cu: goto label_15976c;
        case 0x159770u: goto label_159770;
        case 0x159774u: goto label_159774;
        case 0x159778u: goto label_159778;
        case 0x15977cu: goto label_15977c;
        default: return;
    }

label_158fb0:
    // 0x158fb0: 0x24650000  addiu       $a1, $v1, 0x0
    ctx->pc = 0x158fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_158fb4:
    // 0x158fb4: 0x0  nop
    ctx->pc = 0x158fb4u;
    // NOP
label_158fb8:
    // 0x158fb8: 0xaa2021  addu        $a0, $a1, $t2
    ctx->pc = 0x158fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_158fbc:
    // 0x158fbc: 0x90830220  lbu         $v1, 0x220($a0)
    ctx->pc = 0x158fbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 544)));
label_158fc0:
    // 0x158fc0: 0x286100ff  slti        $at, $v1, 0xFF
    ctx->pc = 0x158fc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
label_158fc4:
    // 0x158fc4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_158fc8:
    if (ctx->pc == 0x158FC8u) {
        ctx->pc = 0x158FCCu;
        goto label_158fcc;
    }
    ctx->pc = 0x158FC4u;
    {
        const bool branch_taken_0x158fc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x158fc4) {
            ctx->pc = 0x158FE0u;
            goto label_158fe0;
        }
    }
    ctx->pc = 0x158FCCu;
label_158fcc:
    // 0x158fcc: 0x84830232  lh          $v1, 0x232($a0)
    ctx->pc = 0x158fccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 562)));
label_158fd0:
    // 0x158fd0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x158fd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_158fd4:
    // 0x158fd4: 0x85a40000  lh          $a0, 0x0($t5)
    ctx->pc = 0x158fd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
label_158fd8:
    // 0x158fd8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x158fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_158fdc:
    // 0x158fdc: 0xa5a30000  sh          $v1, 0x0($t5)
    ctx->pc = 0x158fdcu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 3));
label_158fe0:
    // 0x158fe0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x158fe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_158fe4:
    // 0x158fe4: 0x2903000a  slti        $v1, $t0, 0xA
    ctx->pc = 0x158fe4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)10) ? 1 : 0);
label_158fe8:
    // 0x158fe8: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_158fec:
    if (ctx->pc == 0x158FECu) {
        ctx->pc = 0x158FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158FE8u;
        // 0x158fec: 0x254a0240  addiu       $t2, $t2, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158FF0u;
        goto label_158ff0;
    }
    ctx->pc = 0x158FE8u;
    {
        const bool branch_taken_0x158fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x158FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158FE8u;
        // 0x158fec: 0x254a0240  addiu       $t2, $t2, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158fe8) {
            ctx->pc = 0x158FB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158fb4;
        }
    }
    ctx->pc = 0x158FF0u;
label_158ff0:
    // 0x158ff0: 0x85a40000  lh          $a0, 0x0($t5)
    ctx->pc = 0x158ff0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
label_158ff4:
    // 0x158ff4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x158ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_158ff8:
    // 0x158ff8: 0x28e30002  slti        $v1, $a3, 0x2
    ctx->pc = 0x158ff8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_158ffc:
    // 0x158ffc: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x158ffcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
label_159000:
    // 0x159000: 0x258c1b00  addiu       $t4, $t4, 0x1B00
    ctx->pc = 0x159000u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 6912));
label_159004:
    // 0x159004: 0x89001a  div         $zero, $a0, $t1
    ctx->pc = 0x159004u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_159008:
    // 0x159008: 0x0  nop
    ctx->pc = 0x159008u;
    // NOP
label_15900c:
    // 0x15900c: 0x0  nop
    ctx->pc = 0x15900cu;
    // NOP
label_159010:
    // 0x159010: 0x2012  mflo        $a0
    ctx->pc = 0x159010u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_159014:
    // 0x159014: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
label_159018:
    if (ctx->pc == 0x159018u) {
        ctx->pc = 0x159018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159014u;
        // 0x159018: 0xa5a40000  sh          $a0, 0x0($t5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15901Cu;
        goto label_15901c;
    }
    ctx->pc = 0x159014u;
    {
        const bool branch_taken_0x159014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x159018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159014u;
        // 0x159018: 0xa5a40000  sh          $a0, 0x0($t5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159014) {
            ctx->pc = 0x158F94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x158f94; return; }
        }
    }
    ctx->pc = 0x15901Cu;
label_15901c:
    // 0x15901c: 0x3e00008  jr          $ra
label_159020:
    if (ctx->pc == 0x159020u) {
        ctx->pc = 0x159024u;
        goto label_159024;
    }
    ctx->pc = 0x15901Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15901Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159024u;
label_159024:
    // 0x159024: 0x0  nop
    ctx->pc = 0x159024u;
    // NOP
label_159028:
    // 0x159028: 0x0  nop
    ctx->pc = 0x159028u;
    // NOP
label_15902c:
    // 0x15902c: 0x0  nop
    ctx->pc = 0x15902cu;
    // NOP
label_159030:
    // 0x159030: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x159030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_159034:
    // 0x159034: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x159034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_159038:
    // 0x159038: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x159038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15903c:
    // 0x15903c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15903cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_159040:
    // 0x159040: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x159040u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
label_159044:
    // 0x159044: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x159044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_159048:
    // 0x159048: 0x26521300  addiu       $s2, $s2, 0x1300
    ctx->pc = 0x159048u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4864));
label_15904c:
    // 0x15904c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15904cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159050:
    // 0x159050: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x159050u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159054:
    // 0x159054: 0x0  nop
    ctx->pc = 0x159054u;
    // NOP
label_159058:
    // 0x159058: 0x0  nop
    ctx->pc = 0x159058u;
    // NOP
label_15905c:
    // 0x15905c: 0x92430222  lbu         $v1, 0x222($s2)
    ctx->pc = 0x15905cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 546)));
label_159060:
    // 0x159060: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_159064:
    if (ctx->pc == 0x159064u) {
        ctx->pc = 0x159064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159060u;
        // 0x159064: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159068u;
        goto label_159068;
    }
    ctx->pc = 0x159060u;
    {
        const bool branch_taken_0x159060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x159064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159060u;
        // 0x159064: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159060) {
            ctx->pc = 0x159078u;
            goto label_159078;
        }
    }
    ctx->pc = 0x159068u;
label_159068:
    // 0x159068: 0xc072984  jal         func_1CA610
label_15906c:
    if (ctx->pc == 0x15906Cu) {
        ctx->pc = 0x159070u;
        goto label_159070;
    }
    ctx->pc = 0x159068u;
    SET_GPR_U32(ctx, 31, 0x159070u);
    ctx->pc = 0x1CA610u;
    { ctx->pc = 0x1ca610; return; }
    ctx->pc = 0x159070u;
label_159070:
    // 0x159070: 0xc072b5c  jal         func_1CAD70
label_159074:
    if (ctx->pc == 0x159074u) {
        ctx->pc = 0x159074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159070u;
        // 0x159074: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159078u;
        goto label_159078;
    }
    ctx->pc = 0x159070u;
    SET_GPR_U32(ctx, 31, 0x159078u);
    ctx->pc = 0x159074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159070u;
    // 0x159074: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD70u;
    { ctx->pc = 0x1cad70; return; }
    ctx->pc = 0x159078u;
label_159078:
    // 0x159078: 0x86440230  lh          $a0, 0x230($s2)
    ctx->pc = 0x159078u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 560)));
label_15907c:
    // 0x15907c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15907cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_159080:
    // 0x159080: 0x2a23000c  slti        $v1, $s1, 0xC
    ctx->pc = 0x159080u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)12) ? 1 : 0);
label_159084:
    // 0x159084: 0xa6440232  sh          $a0, 0x232($s2)
    ctx->pc = 0x159084u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 562), (uint16_t)GPR_U32(ctx, 4));
label_159088:
    // 0x159088: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_15908c:
    if (ctx->pc == 0x15908Cu) {
        ctx->pc = 0x15908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159088u;
        // 0x15908c: 0x26520240  addiu       $s2, $s2, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159090u;
        goto label_159090;
    }
    ctx->pc = 0x159088u;
    {
        const bool branch_taken_0x159088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159088u;
        // 0x15908c: 0x26520240  addiu       $s2, $s2, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159088) {
            ctx->pc = 0x159054u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159054;
        }
    }
    ctx->pc = 0x159090u;
label_159090:
    // 0x159090: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x159090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_159094:
    // 0x159094: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x159094u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_159098:
    // 0x159098: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
label_15909c:
    if (ctx->pc == 0x15909Cu) {
        ctx->pc = 0x15909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159098u;
        // 0x15909c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1590A0u;
        goto label_1590a0;
    }
    ctx->pc = 0x159098u;
    {
        const bool branch_taken_0x159098 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159098u;
        // 0x15909c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159098) {
            ctx->pc = 0x159054u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159054;
        }
    }
    ctx->pc = 0x1590A0u;
label_1590a0:
    // 0x1590a0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1590a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1590a4:
    // 0x1590a4: 0x3c0391a2  lui         $v1, 0x91A2
    ctx->pc = 0x1590a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37282 << 16));
label_1590a8:
    // 0x1590a8: 0x8c244900  lw          $a0, 0x4900($at)
    ctx->pc = 0x1590a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_1590ac:
    // 0x1590ac: 0x3463b3c5  ori         $v1, $v1, 0xB3C5
    ctx->pc = 0x1590acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46021);
label_1590b0:
    // 0x1590b0: 0x24850707  addiu       $a1, $a0, 0x707
    ctx->pc = 0x1590b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1799));
label_1590b4:
    // 0x1590b4: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x1590b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1590b8:
    // 0x1590b8: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x1590b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_1590bc:
    // 0x1590bc: 0x0  nop
    ctx->pc = 0x1590bcu;
    // NOP
label_1590c0:
    // 0x1590c0: 0x1810  mfhi        $v1
    ctx->pc = 0x1590c0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1590c4:
    // 0x1590c4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1590c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1590c8:
    // 0x1590c8: 0x31a83  sra         $v1, $v1, 10
    ctx->pc = 0x1590c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 10));
label_1590cc:
    // 0x1590cc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1590ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1590d0:
    // 0x1590d0: 0x288100b5  slti        $at, $a0, 0xB5
    ctx->pc = 0x1590d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)181) ? 1 : 0);
label_1590d4:
    // 0x1590d4: 0x1020005d  beqz        $at, . + 4 + (0x5D << 2)
label_1590d8:
    if (ctx->pc == 0x1590D8u) {
        ctx->pc = 0x1590D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1590D4u;
        // 0x1590d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1590DCu;
        goto label_1590dc;
    }
    ctx->pc = 0x1590D4u;
    {
        const bool branch_taken_0x1590d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1590D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1590D4u;
        // 0x1590d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1590d4) {
            ctx->pc = 0x15924Cu;
            goto label_15924c;
        }
    }
    ctx->pc = 0x1590DCu;
label_1590dc:
    // 0x1590dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1590dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1590e0:
    // 0x1590e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1590e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1590e4:
    // 0x1590e4: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1590e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_1590e8:
    // 0x1590e8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1590e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1590ec:
    // 0x1590ec: 0x24a51300  addiu       $a1, $a1, 0x1300
    ctx->pc = 0x1590ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4864));
label_1590f0:
    // 0x1590f0: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x1590f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1590f4:
    // 0x1590f4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1590f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1590f8:
    // 0x1590f8: 0xa45021  addu        $t2, $a1, $a0
    ctx->pc = 0x1590f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1590fc:
    // 0x1590fc: 0x246f0000  addiu       $t7, $v1, 0x0
    ctx->pc = 0x1590fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_159100:
    // 0x159100: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x159100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
label_159104:
    // 0x159104: 0x24632570  addiu       $v1, $v1, 0x2570
    ctx->pc = 0x159104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9584));
label_159108:
    // 0x159108: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x159108u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15910c:
    // 0x15910c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15910cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159110:
    // 0x159110: 0x1e82021  addu        $a0, $t7, $t0
    ctx->pc = 0x159110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 8)));
label_159114:
    // 0x159114: 0x674821  addu        $t1, $v1, $a3
    ctx->pc = 0x159114u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_159118:
    // 0x159118: 0x248e0000  addiu       $t6, $a0, 0x0
    ctx->pc = 0x159118u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_15911c:
    // 0x15911c: 0x148c821  addu        $t9, $t2, $t0
    ctx->pc = 0x15911cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_159120:
    // 0x159120: 0xa82021  addu        $a0, $a1, $t0
    ctx->pc = 0x159120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_159124:
    // 0x159124: 0x25310000  addiu       $s1, $t1, 0x0
    ctx->pc = 0x159124u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 9), 0));
label_159128:
    // 0x159128: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x159128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_15912c:
    // 0x15912c: 0x0  nop
    ctx->pc = 0x15912cu;
    // NOP
label_159130:
    // 0x159130: 0x864821  addu        $t1, $a0, $a2
    ctx->pc = 0x159130u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_159134:
    // 0x159134: 0x91320220  lbu         $s2, 0x220($t1)
    ctx->pc = 0x159134u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 544)));
label_159138:
    // 0x159138: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x159138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15913c:
    // 0x15913c: 0x902d490d  lbu         $t5, 0x490D($at)
    ctx->pc = 0x15913cu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_159140:
    // 0x159140: 0x12c0c0  sll         $t8, $s2, 3
    ctx->pc = 0x159140u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_159144:
    // 0x159144: 0x312c021  addu        $t8, $t8, $s2
    ctx->pc = 0x159144u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 18)));
label_159148:
    // 0x159148: 0x18c0c0  sll         $t8, $t8, 3
    ctx->pc = 0x159148u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), 3));
label_15914c:
    // 0x15914c: 0x2389021  addu        $s2, $s1, $t8
    ctx->pc = 0x15914cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 24)));
label_159150:
    // 0x159150: 0x92580023  lbu         $t8, 0x23($s2)
    ctx->pc = 0x159150u;
    SET_GPR_ZE32(ctx, 24, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
label_159154:
    // 0x159154: 0x15b00006  bne         $t5, $s0, . + 4 + (0x6 << 2)
label_159158:
    if (ctx->pc == 0x159158u) {
        ctx->pc = 0x159158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159154u;
        // 0x159158: 0x92520022  lbu         $s2, 0x22($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 34)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15915Cu;
        goto label_15915c;
    }
    ctx->pc = 0x159154u;
    {
        const bool branch_taken_0x159154 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 16));
        ctx->pc = 0x159158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159154u;
        // 0x159158: 0x92520022  lbu         $s2, 0x22($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 34)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159154) {
            ctx->pc = 0x159170u;
            goto label_159170;
        }
    }
    ctx->pc = 0x15915Cu;
label_15915c:
    // 0x15915c: 0x2b0d0010  slti        $t5, $t8, 0x10
    ctx->pc = 0x15915cu;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)16) ? 1 : 0);
label_159160:
    // 0x159160: 0x15a00003  bnez        $t5, . + 4 + (0x3 << 2)
label_159164:
    if (ctx->pc == 0x159164u) {
        ctx->pc = 0x159168u;
        goto label_159168;
    }
    ctx->pc = 0x159160u;
    {
        const bool branch_taken_0x159160 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x159160) {
            ctx->pc = 0x159170u;
            goto label_159170;
        }
    }
    ctx->pc = 0x159168u;
label_159168:
    // 0x159168: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x159168u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_15916c:
    // 0x15916c: 0x2718fff0  addiu       $t8, $t8, -0x10
    ctx->pc = 0x15916cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4294967280));
label_159170:
    // 0x159170: 0x126900  sll         $t5, $s2, 4
    ctx->pc = 0x159170u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_159174:
    // 0x159174: 0x1b8c025  or          $t8, $t5, $t8
    ctx->pc = 0x159174u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 13) | GPR_U64(ctx, 24));
label_159178:
    // 0x159178: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x159178u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_15917c:
    // 0x15917c: 0x3266821  addu        $t5, $t9, $a2
    ctx->pc = 0x15917cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
label_159180:
    // 0x159180: 0xa1b8016a  sb          $t8, 0x16A($t5)
    ctx->pc = 0x159180u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 362), (uint8_t)GPR_U32(ctx, 24));
label_159184:
    // 0x159184: 0x85380232  lh          $t8, 0x232($t1)
    ctx->pc = 0x159184u;
    SET_GPR_S32(ctx, 24, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 562)));
label_159188:
    // 0x159188: 0x1c66821  addu        $t5, $t6, $a2
    ctx->pc = 0x159188u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
label_15918c:
    // 0x15918c: 0x24c60240  addiu       $a2, $a2, 0x240
    ctx->pc = 0x15918cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 576));
label_159190:
    // 0x159190: 0x2989000a  slti        $t1, $t4, 0xA
    ctx->pc = 0x159190u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)10) ? 1 : 0);
label_159194:
    // 0x159194: 0x1520ffe5  bnez        $t1, . + 4 + (-0x1B << 2)
label_159198:
    if (ctx->pc == 0x159198u) {
        ctx->pc = 0x159198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159194u;
        // 0x159198: 0xa5b80000  sh          $t8, 0x0($t5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15919Cu;
        goto label_15919c;
    }
    ctx->pc = 0x159194u;
    {
        const bool branch_taken_0x159194 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x159198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159194u;
        // 0x159198: 0xa5b80000  sh          $t8, 0x0($t5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159194) {
            ctx->pc = 0x15912Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15912c;
        }
    }
    ctx->pc = 0x15919Cu;
label_15919c:
    // 0x15919c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x15919cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1591a0:
    // 0x1591a0: 0x24e747b8  addiu       $a3, $a3, 0x47B8
    ctx->pc = 0x1591a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18360));
label_1591a4:
    // 0x1591a4: 0x29640002  slti        $a0, $t3, 0x2
    ctx->pc = 0x1591a4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)2) ? 1 : 0);
label_1591a8:
    // 0x1591a8: 0x1480ffd7  bnez        $a0, . + 4 + (-0x29 << 2)
label_1591ac:
    if (ctx->pc == 0x1591ACu) {
        ctx->pc = 0x1591ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1591A8u;
        // 0x1591ac: 0x25081b00  addiu       $t0, $t0, 0x1B00 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1591B0u;
        goto label_1591b0;
    }
    ctx->pc = 0x1591A8u;
    {
        const bool branch_taken_0x1591a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1591ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1591A8u;
        // 0x1591ac: 0x25081b00  addiu       $t0, $t0, 0x1B00 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1591a8) {
            ctx->pc = 0x159108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159108;
        }
    }
    ctx->pc = 0x1591B0u;
label_1591b0:
    // 0x1591b0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1591b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1591b4:
    // 0x1591b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1591b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1591b8:
    // 0x1591b8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1591b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1591bc:
    // 0x1591bc: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x1591bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
label_1591c0:
    // 0x1591c0: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1591c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1591c4:
    // 0x1591c4: 0x25081300  addiu       $t0, $t0, 0x1300
    ctx->pc = 0x1591c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4864));
label_1591c8:
    // 0x1591c8: 0x1096021  addu        $t4, $t0, $t1
    ctx->pc = 0x1591c8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_1591cc:
    // 0x1591cc: 0x9184367c  lbu         $a0, 0x367C($t4)
    ctx->pc = 0x1591ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 13948)));
label_1591d0:
    // 0x1591d0: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
label_1591d4:
    if (ctx->pc == 0x1591D4u) {
        ctx->pc = 0x1591D8u;
        goto label_1591d8;
    }
    ctx->pc = 0x1591D0u;
    {
        const bool branch_taken_0x1591d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1591d0) {
            ctx->pc = 0x159234u;
            goto label_159234;
        }
    }
    ctx->pc = 0x1591D8u;
label_1591d8:
    // 0x1591d8: 0x8d853668  lw          $a1, 0x3668($t4)
    ctx->pc = 0x1591d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 13928)));
label_1591dc:
    // 0x1591dc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1591dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1591e0:
    // 0x1591e0: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x1591e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1591e4:
    // 0x1591e4: 0x90a60219  lbu         $a2, 0x219($a1)
    ctx->pc = 0x1591e4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 537)));
label_1591e8:
    // 0x1591e8: 0x14870006  bne         $a0, $a3, . + 4 + (0x6 << 2)
label_1591ec:
    if (ctx->pc == 0x1591ECu) {
        ctx->pc = 0x1591ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1591E8u;
        // 0x1591ec: 0x90a50218  lbu         $a1, 0x218($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1591F0u;
        goto label_1591f0;
    }
    ctx->pc = 0x1591E8u;
    {
        const bool branch_taken_0x1591e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        ctx->pc = 0x1591ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1591E8u;
        // 0x1591ec: 0x90a50218  lbu         $a1, 0x218($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1591e8) {
            ctx->pc = 0x159204u;
            goto label_159204;
        }
    }
    ctx->pc = 0x1591F0u;
label_1591f0:
    // 0x1591f0: 0x28c40010  slti        $a0, $a2, 0x10
    ctx->pc = 0x1591f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
label_1591f4:
    // 0x1591f4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_1591f8:
    if (ctx->pc == 0x1591F8u) {
        ctx->pc = 0x1591FCu;
        goto label_1591fc;
    }
    ctx->pc = 0x1591F4u;
    {
        const bool branch_taken_0x1591f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1591f4) {
            ctx->pc = 0x159204u;
            goto label_159204;
        }
    }
    ctx->pc = 0x1591FCu;
label_1591fc:
    // 0x1591fc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1591fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_159200:
    // 0x159200: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x159200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
label_159204:
    // 0x159204: 0x0  nop
    ctx->pc = 0x159204u;
    // NOP
label_159208:
    // 0x159208: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x159208u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_15920c:
    // 0x15920c: 0x8d853674  lw          $a1, 0x3674($t4)
    ctx->pc = 0x15920cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 13940)));
label_159210:
    // 0x159210: 0x863025  or          $a2, $a0, $a2
    ctx->pc = 0x159210u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_159214:
    // 0x159214: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x159214u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_159218:
    // 0x159218: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x159218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_15921c:
    // 0x15921c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x15921cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_159220:
    // 0x159220: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x159220u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_159224:
    // 0x159224: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x159224u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_159228:
    // 0x159228: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x159228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_15922c:
    // 0x15922c: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x15922cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_159230:
    // 0x159230: 0xa08617ea  sb          $a2, 0x17EA($a0)
    ctx->pc = 0x159230u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6122), (uint8_t)GPR_U32(ctx, 6));
label_159234:
    // 0x159234: 0x0  nop
    ctx->pc = 0x159234u;
    // NOP
label_159238:
    // 0x159238: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x159238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_15923c:
    // 0x15923c: 0x28640002  slti        $a0, $v1, 0x2
    ctx->pc = 0x15923cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_159240:
    // 0x159240: 0x25290090  addiu       $t1, $t1, 0x90
    ctx->pc = 0x159240u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
label_159244:
    // 0x159244: 0x1480ffe0  bnez        $a0, . + 4 + (-0x20 << 2)
label_159248:
    if (ctx->pc == 0x159248u) {
        ctx->pc = 0x159248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159244u;
        // 0x159248: 0x256b0240  addiu       $t3, $t3, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15924Cu;
        goto label_15924c;
    }
    ctx->pc = 0x159244u;
    {
        const bool branch_taken_0x159244 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x159248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159244u;
        // 0x159248: 0x256b0240  addiu       $t3, $t3, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159244) {
            ctx->pc = 0x1591C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1591c8;
        }
    }
    ctx->pc = 0x15924Cu;
label_15924c:
    // 0x15924c: 0x0  nop
    ctx->pc = 0x15924cu;
    // NOP
label_159250:
    // 0x159250: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x159250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_159254:
    // 0x159254: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x159254u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_159258:
    // 0x159258: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x159258u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15925c:
    // 0x15925c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15925cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_159260:
    // 0x159260: 0x3e00008  jr          $ra
label_159264:
    if (ctx->pc == 0x159264u) {
        ctx->pc = 0x159264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159260u;
        // 0x159264: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159268u;
        goto label_159268;
    }
    ctx->pc = 0x159260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159260u;
        // 0x159264: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159268u;
label_159268:
    // 0x159268: 0x0  nop
    ctx->pc = 0x159268u;
    // NOP
label_15926c:
    // 0x15926c: 0x0  nop
    ctx->pc = 0x15926cu;
    // NOP
label_159270:
    // 0x159270: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x159270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_159274:
    // 0x159274: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x159274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_159278:
    // 0x159278: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x159278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15927c:
    // 0x15927c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15927cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_159280:
    // 0x159280: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x159280u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159284:
    // 0x159284: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x159284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_159288:
    // 0x159288: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x159288u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
label_15928c:
    // 0x15928c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15928cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_159290:
    // 0x159290: 0x26521300  addiu       $s2, $s2, 0x1300
    ctx->pc = 0x159290u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4864));
label_159294:
    // 0x159294: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x159294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159298:
    // 0x159298: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x159298u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15929c:
    // 0x15929c: 0x0  nop
    ctx->pc = 0x15929cu;
    // NOP
label_1592a0:
    // 0x1592a0: 0x92430220  lbu         $v1, 0x220($s2)
    ctx->pc = 0x1592a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 544)));
label_1592a4:
    // 0x1592a4: 0x286100ff  slti        $at, $v1, 0xFF
    ctx->pc = 0x1592a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
label_1592a8:
    // 0x1592a8: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_1592ac:
    if (ctx->pc == 0x1592ACu) {
        ctx->pc = 0x1592B0u;
        goto label_1592b0;
    }
    ctx->pc = 0x1592A8u;
    {
        const bool branch_taken_0x1592a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1592a8) {
            ctx->pc = 0x1592F0u;
            goto label_1592f0;
        }
    }
    ctx->pc = 0x1592B0u;
label_1592b0:
    // 0x1592b0: 0x92420222  lbu         $v0, 0x222($s2)
    ctx->pc = 0x1592b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 546)));
label_1592b4:
    // 0x1592b4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1592b8:
    if (ctx->pc == 0x1592B8u) {
        ctx->pc = 0x1592B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1592B4u;
        // 0x1592b8: 0x3c02002f  lui         $v0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1592BCu;
        goto label_1592bc;
    }
    ctx->pc = 0x1592B4u;
    {
        const bool branch_taken_0x1592b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1592B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1592B4u;
        // 0x1592b8: 0x3c02002f  lui         $v0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1592b4) {
            ctx->pc = 0x1592F0u;
            goto label_1592f0;
        }
    }
    ctx->pc = 0x1592BCu;
label_1592bc:
    // 0x1592bc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1592bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1592c0:
    // 0x1592c0: 0x24422570  addiu       $v0, $v0, 0x2570
    ctx->pc = 0x1592c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9584));
label_1592c4:
    // 0x1592c4: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x1592c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1592c8:
    // 0x1592c8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1592c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1592cc:
    // 0x1592cc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1592ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1592d0:
    // 0x1592d0: 0x24820000  addiu       $v0, $a0, 0x0
    ctx->pc = 0x1592d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_1592d4:
    // 0x1592d4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1592d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1592d8:
    // 0x1592d8: 0xc044894  jal         func_112250
label_1592dc:
    if (ctx->pc == 0x1592DCu) {
        ctx->pc = 0x1592DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1592D8u;
        // 0x1592dc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1592E0u;
        goto label_1592e0;
    }
    ctx->pc = 0x1592D8u;
    SET_GPR_U32(ctx, 31, 0x1592E0u);
    ctx->pc = 0x1592DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1592D8u;
    // 0x1592dc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112250u, 0x1592D8u, 0x1592E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1592E0u;
label_1592e0:
    // 0x1592e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1592e4:
    if (ctx->pc == 0x1592E4u) {
        ctx->pc = 0x1592E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1592E0u;
        // 0x1592e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1592E8u;
        goto label_1592e8;
    }
    ctx->pc = 0x1592E0u;
    {
        const bool branch_taken_0x1592e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1592E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1592E0u;
        // 0x1592e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1592e0) {
            ctx->pc = 0x1592F0u;
            goto label_1592f0;
        }
    }
    ctx->pc = 0x1592E8u;
label_1592e8:
    // 0x1592e8: 0xc072bac  jal         func_1CAEB0
label_1592ec:
    if (ctx->pc == 0x1592ECu) {
        ctx->pc = 0x1592ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1592E8u;
        // 0x1592ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1592F0u;
        goto label_1592f0;
    }
    ctx->pc = 0x1592E8u;
    SET_GPR_U32(ctx, 31, 0x1592F0u);
    ctx->pc = 0x1592ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1592E8u;
    // 0x1592ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAEB0u;
    { ctx->pc = 0x1caeb0; return; }
    ctx->pc = 0x1592F0u;
label_1592f0:
    // 0x1592f0: 0xc05660c  jal         func_159830
label_1592f4:
    if (ctx->pc == 0x1592F4u) {
        ctx->pc = 0x1592F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1592F0u;
        // 0x1592f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1592F8u;
        goto label_1592f8;
    }
    ctx->pc = 0x1592F0u;
    SET_GPR_U32(ctx, 31, 0x1592F8u);
    ctx->pc = 0x1592F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1592F0u;
    // 0x1592f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159830u;
    { ctx->pc = 0x159830; return; }
    ctx->pc = 0x1592F8u;
label_1592f8:
    // 0x1592f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1592f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1592fc:
    // 0x1592fc: 0x2a23000c  slti        $v1, $s1, 0xC
    ctx->pc = 0x1592fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)12) ? 1 : 0);
label_159300:
    // 0x159300: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
label_159304:
    if (ctx->pc == 0x159304u) {
        ctx->pc = 0x159304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159300u;
        // 0x159304: 0x26520240  addiu       $s2, $s2, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159308u;
        goto label_159308;
    }
    ctx->pc = 0x159300u;
    {
        const bool branch_taken_0x159300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x159304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159300u;
        // 0x159304: 0x26520240  addiu       $s2, $s2, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159300) {
            ctx->pc = 0x15929Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15929c;
        }
    }
    ctx->pc = 0x159308u;
label_159308:
    // 0x159308: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x159308u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15930c:
    // 0x15930c: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x15930cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_159310:
    // 0x159310: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
label_159314:
    if (ctx->pc == 0x159314u) {
        ctx->pc = 0x159314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159310u;
        // 0x159314: 0x267347b8  addiu       $s3, $s3, 0x47B8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 18360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159318u;
        goto label_159318;
    }
    ctx->pc = 0x159310u;
    {
        const bool branch_taken_0x159310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x159314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159310u;
        // 0x159314: 0x267347b8  addiu       $s3, $s3, 0x47B8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 18360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159310) {
            ctx->pc = 0x159298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159298;
        }
    }
    ctx->pc = 0x159318u;
label_159318:
    // 0x159318: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x159318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15931c:
    // 0x15931c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15931cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_159320:
    // 0x159320: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x159320u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_159324:
    // 0x159324: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x159324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_159328:
    // 0x159328: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x159328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15932c:
    // 0x15932c: 0x3e00008  jr          $ra
label_159330:
    if (ctx->pc == 0x159330u) {
        ctx->pc = 0x159330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15932Cu;
        // 0x159330: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159334u;
        goto label_159334;
    }
    ctx->pc = 0x15932Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15932Cu;
        // 0x159330: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15932Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159334u;
label_159334:
    // 0x159334: 0x0  nop
    ctx->pc = 0x159334u;
    // NOP
label_159338:
    // 0x159338: 0x0  nop
    ctx->pc = 0x159338u;
    // NOP
label_15933c:
    // 0x15933c: 0x0  nop
    ctx->pc = 0x15933cu;
    // NOP
label_159340:
    // 0x159340: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x159340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159344:
    // 0x159344: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x159344u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159348:
    // 0x159348: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x159348u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15934c:
    // 0x15934c: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x15934cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_159350:
    // 0x159350: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x159350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_159354:
    // 0x159354: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x159354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_159358:
    // 0x159358: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x159358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_15935c:
    // 0x15935c: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x15935cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_159360:
    // 0x159360: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x159360u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_159364:
    // 0x159364: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x159364u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_159368:
    // 0x159368: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x159368u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_15936c:
    // 0x15936c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15936cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_159370:
    // 0x159370: 0x24640000  addiu       $a0, $v1, 0x0
    ctx->pc = 0x159370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_159374:
    // 0x159374: 0x1071804  sllv        $v1, $a3, $t0
    ctx->pc = 0x159374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 8) & 0x1F));
label_159378:
    // 0x159378: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x159378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_15937c:
    // 0x15937c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_159380:
    if (ctx->pc == 0x159380u) {
        ctx->pc = 0x159384u;
        goto label_159384;
    }
    ctx->pc = 0x15937Cu;
    {
        const bool branch_taken_0x15937c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15937c) {
            ctx->pc = 0x159394u;
            goto label_159394;
        }
    }
    ctx->pc = 0x159384u;
label_159384:
    // 0x159384: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x159384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_159388:
    // 0x159388: 0x84630232  lh          $v1, 0x232($v1)
    ctx->pc = 0x159388u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 562)));
label_15938c:
    // 0x15938c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x15938cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_159390:
    // 0x159390: 0x61100a  movz        $v0, $v1, $at
    ctx->pc = 0x159390u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_159394:
    // 0x159394: 0x0  nop
    ctx->pc = 0x159394u;
    // NOP
label_159398:
    // 0x159398: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x159398u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_15939c:
    // 0x15939c: 0x2903000c  slti        $v1, $t0, 0xC
    ctx->pc = 0x15939cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)12) ? 1 : 0);
label_1593a0:
    // 0x1593a0: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_1593a4:
    if (ctx->pc == 0x1593A4u) {
        ctx->pc = 0x1593A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593A0u;
        // 0x1593a4: 0x25290240  addiu       $t1, $t1, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1593A8u;
        goto label_1593a8;
    }
    ctx->pc = 0x1593A0u;
    {
        const bool branch_taken_0x1593a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1593A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593A0u;
        // 0x1593a4: 0x25290240  addiu       $t1, $t1, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1593a0) {
            ctx->pc = 0x159374u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159374;
        }
    }
    ctx->pc = 0x1593A8u;
label_1593a8:
    // 0x1593a8: 0x3e00008  jr          $ra
label_1593ac:
    if (ctx->pc == 0x1593ACu) {
        ctx->pc = 0x1593B0u;
        goto label_1593b0;
    }
    ctx->pc = 0x1593A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1593A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1593B0u;
label_1593b0:
    // 0x1593b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1593b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1593b4:
    // 0x1593b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1593b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1593b8:
    // 0x1593b8: 0x8c840238  lw          $a0, 0x238($a0)
    ctx->pc = 0x1593b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 568)));
label_1593bc:
    // 0x1593bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1593bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1593c0:
    // 0x1593c0: 0xc51804  sllv        $v1, $a1, $a2
    ctx->pc = 0x1593c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
label_1593c4:
    // 0x1593c4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1593c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1593c8:
    // 0x1593c8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1593cc:
    if (ctx->pc == 0x1593CCu) {
        ctx->pc = 0x1593D0u;
        goto label_1593d0;
    }
    ctx->pc = 0x1593C8u;
    {
        const bool branch_taken_0x1593c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1593c8) {
            ctx->pc = 0x1593D4u;
            goto label_1593d4;
        }
    }
    ctx->pc = 0x1593D0u;
label_1593d0:
    // 0x1593d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1593d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1593d4:
    // 0x1593d4: 0x0  nop
    ctx->pc = 0x1593d4u;
    // NOP
label_1593d8:
    // 0x1593d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1593d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1593dc:
    // 0x1593dc: 0x28c3000c  slti        $v1, $a2, 0xC
    ctx->pc = 0x1593dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)12) ? 1 : 0);
label_1593e0:
    // 0x1593e0: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_1593e4:
    if (ctx->pc == 0x1593E4u) {
        ctx->pc = 0x1593E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593E0u;
        // 0x1593e4: 0xc51804  sllv        $v1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1593E8u;
        goto label_1593e8;
    }
    ctx->pc = 0x1593E0u;
    {
        const bool branch_taken_0x1593e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1593E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593E0u;
        // 0x1593e4: 0xc51804  sllv        $v1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1593e0) {
            ctx->pc = 0x1593C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1593c4;
        }
    }
    ctx->pc = 0x1593E8u;
label_1593e8:
    // 0x1593e8: 0x3e00008  jr          $ra
label_1593ec:
    if (ctx->pc == 0x1593ECu) {
        ctx->pc = 0x1593F0u;
        goto label_1593f0;
    }
    ctx->pc = 0x1593E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1593E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1593F0u;
label_1593f0:
    // 0x1593f0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1593f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1593f4:
    // 0x1593f4: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x1593f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
label_1593f8:
    // 0x1593f8: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x1593f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1593fc:
    // 0x1593fc: 0x24e71300  addiu       $a3, $a3, 0x1300
    ctx->pc = 0x1593fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4864));
label_159400:
    // 0x159400: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x159400u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_159404:
    // 0x159404: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x159404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_159408:
    // 0x159408: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x159408u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_15940c:
    // 0x15940c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15940cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_159410:
    // 0x159410: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x159410u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_159414:
    // 0x159414: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x159414u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_159418:
    // 0x159418: 0xe81821  addu        $v1, $a3, $t0
    ctx->pc = 0x159418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_15941c:
    // 0x15941c: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x15941cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_159420:
    // 0x159420: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x159420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_159424:
    // 0x159424: 0x90670222  lbu         $a3, 0x222($v1)
    ctx->pc = 0x159424u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 546)));
label_159428:
    // 0x159428: 0x14e00026  bnez        $a3, . + 4 + (0x26 << 2)
label_15942c:
    if (ctx->pc == 0x15942Cu) {
        ctx->pc = 0x159430u;
        goto label_159430;
    }
    ctx->pc = 0x159428u;
    {
        const bool branch_taken_0x159428 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x159428) {
            ctx->pc = 0x1594C4u;
            goto label_1594c4;
        }
    }
    ctx->pc = 0x159430u;
label_159430:
    // 0x159430: 0x84650232  lh          $a1, 0x232($v1)
    ctx->pc = 0x159430u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 562)));
label_159434:
    // 0x159434: 0x14e00023  bnez        $a3, . + 4 + (0x23 << 2)
label_159438:
    if (ctx->pc == 0x159438u) {
        ctx->pc = 0x159438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159434u;
        // 0x159438: 0xa64821  addu        $t1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15943Cu;
        goto label_15943c;
    }
    ctx->pc = 0x159434u;
    {
        const bool branch_taken_0x159434 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x159438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159434u;
        // 0x159438: 0xa64821  addu        $t1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159434) {
            ctx->pc = 0x1594C4u;
            goto label_1594c4;
        }
    }
    ctx->pc = 0x15943Cu;
label_15943c:
    // 0x15943c: 0x42a00  sll         $a1, $a0, 8
    ctx->pc = 0x15943cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_159440:
    // 0x159440: 0x90680220  lbu         $t0, 0x220($v1)
    ctx->pc = 0x159440u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 544)));
label_159444:
    // 0x159444: 0xa43823  subu        $a3, $a1, $a0
    ctx->pc = 0x159444u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_159448:
    // 0x159448: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x159448u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_15944c:
    // 0x15944c: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x15944cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_159450:
    // 0x159450: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x159450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_159454:
    // 0x159454: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x159454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
label_159458:
    // 0x159458: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x159458u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_15945c:
    // 0x15945c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x15945cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_159460:
    // 0x159460: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x159460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_159464:
    // 0x159464: 0x830c0  sll         $a2, $t0, 3
    ctx->pc = 0x159464u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_159468:
    // 0x159468: 0x24a50000  addiu       $a1, $a1, 0x0
    ctx->pc = 0x159468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
label_15946c:
    // 0x15946c: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x15946cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_159470:
    // 0x159470: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x159470u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_159474:
    // 0x159474: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x159474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_159478:
    // 0x159478: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x159478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15947c:
    // 0x15947c: 0x90a60015  lbu         $a2, 0x15($a1)
    ctx->pc = 0x15947cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 21)));
label_159480:
    // 0x159480: 0x10c40010  beq         $a2, $a0, . + 4 + (0x10 << 2)
label_159484:
    if (ctx->pc == 0x159484u) {
        ctx->pc = 0x159484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159480u;
        // 0x159484: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159488u;
        goto label_159488;
    }
    ctx->pc = 0x159480u;
    {
        const bool branch_taken_0x159480 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x159484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159480u;
        // 0x159484: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159480) {
            ctx->pc = 0x1594C4u;
            goto label_1594c4;
        }
    }
    ctx->pc = 0x159488u;
label_159488:
    // 0x159488: 0x10c5000e  beq         $a2, $a1, . + 4 + (0xE << 2)
label_15948c:
    if (ctx->pc == 0x15948Cu) {
        ctx->pc = 0x15948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159488u;
        // 0x15948c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159490u;
        goto label_159490;
    }
    ctx->pc = 0x159488u;
    {
        const bool branch_taken_0x159488 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x15948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159488u;
        // 0x15948c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159488) {
            ctx->pc = 0x1594C4u;
            goto label_1594c4;
        }
    }
    ctx->pc = 0x159490u;
label_159490:
    // 0x159490: 0x10c4000c  beq         $a2, $a0, . + 4 + (0xC << 2)
label_159494:
    if (ctx->pc == 0x159494u) {
        ctx->pc = 0x159498u;
        goto label_159498;
    }
    ctx->pc = 0x159490u;
    {
        const bool branch_taken_0x159490 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x159490) {
            ctx->pc = 0x1594C4u;
            goto label_1594c4;
        }
    }
    ctx->pc = 0x159498u;
label_159498:
    // 0x159498: 0xa4690230  sh          $t1, 0x230($v1)
    ctx->pc = 0x159498u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 560), (uint16_t)GPR_U32(ctx, 9));
label_15949c:
    // 0x15949c: 0x84640230  lh          $a0, 0x230($v1)
    ctx->pc = 0x15949cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 560)));
label_1594a0:
    // 0x1594a0: 0x28810384  slti        $at, $a0, 0x384
    ctx->pc = 0x1594a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)900) ? 1 : 0);
label_1594a4:
    // 0x1594a4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_1594a8:
    if (ctx->pc == 0x1594A8u) {
        ctx->pc = 0x1594ACu;
        goto label_1594ac;
    }
    ctx->pc = 0x1594A4u;
    {
        const bool branch_taken_0x1594a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1594a4) {
            ctx->pc = 0x1594B8u;
            goto label_1594b8;
        }
    }
    ctx->pc = 0x1594ACu;
label_1594ac:
    // 0x1594ac: 0x24040383  addiu       $a0, $zero, 0x383
    ctx->pc = 0x1594acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 899));
label_1594b0:
    // 0x1594b0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1594b4:
    if (ctx->pc == 0x1594B4u) {
        ctx->pc = 0x1594B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1594B0u;
        // 0x1594b4: 0xa4640230  sh          $a0, 0x230($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 560), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1594B8u;
        goto label_1594b8;
    }
    ctx->pc = 0x1594B0u;
    {
        const bool branch_taken_0x1594b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1594B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1594B0u;
        // 0x1594b4: 0xa4640230  sh          $a0, 0x230($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 560), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1594b0) {
            ctx->pc = 0x1594C4u;
            goto label_1594c4;
        }
    }
    ctx->pc = 0x1594B8u;
label_1594b8:
    // 0x1594b8: 0x1c800002  bgtz        $a0, . + 4 + (0x2 << 2)
label_1594bc:
    if (ctx->pc == 0x1594BCu) {
        ctx->pc = 0x1594C0u;
        goto label_1594c0;
    }
    ctx->pc = 0x1594B8u;
    {
        const bool branch_taken_0x1594b8 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x1594b8) {
            ctx->pc = 0x1594C4u;
            goto label_1594c4;
        }
    }
    ctx->pc = 0x1594C0u;
label_1594c0:
    // 0x1594c0: 0xa4650230  sh          $a1, 0x230($v1)
    ctx->pc = 0x1594c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 560), (uint16_t)GPR_U32(ctx, 5));
label_1594c4:
    // 0x1594c4: 0x3e00008  jr          $ra
label_1594c8:
    if (ctx->pc == 0x1594C8u) {
        ctx->pc = 0x1594CCu;
        goto label_1594cc;
    }
    ctx->pc = 0x1594C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1594C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1594CCu;
label_1594cc:
    // 0x1594cc: 0x0  nop
    ctx->pc = 0x1594ccu;
    // NOP
label_1594d0:
    // 0x1594d0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1594d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1594d4:
    // 0x1594d4: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x1594d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
label_1594d8:
    // 0x1594d8: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x1594d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1594dc:
    // 0x1594dc: 0x24e71300  addiu       $a3, $a3, 0x1300
    ctx->pc = 0x1594dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4864));
label_1594e0:
    // 0x1594e0: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x1594e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_1594e4:
    // 0x1594e4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1594e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1594e8:
    // 0x1594e8: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x1594e8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_1594ec:
    // 0x1594ec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1594ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1594f0:
    // 0x1594f0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1594f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_1594f4:
    // 0x1594f4: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x1594f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1594f8:
    // 0x1594f8: 0xe81821  addu        $v1, $a3, $t0
    ctx->pc = 0x1594f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1594fc:
    // 0x1594fc: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1594fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_159500:
    // 0x159500: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x159500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_159504:
    // 0x159504: 0x90650222  lbu         $a1, 0x222($v1)
    ctx->pc = 0x159504u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 546)));
label_159508:
    // 0x159508: 0x14a00023  bnez        $a1, . + 4 + (0x23 << 2)
label_15950c:
    if (ctx->pc == 0x15950Cu) {
        ctx->pc = 0x159510u;
        goto label_159510;
    }
    ctx->pc = 0x159508u;
    {
        const bool branch_taken_0x159508 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x159508) {
            ctx->pc = 0x159598u;
            goto label_159598;
        }
    }
    ctx->pc = 0x159510u;
label_159510:
    // 0x159510: 0x42a00  sll         $a1, $a0, 8
    ctx->pc = 0x159510u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_159514:
    // 0x159514: 0x90690220  lbu         $t1, 0x220($v1)
    ctx->pc = 0x159514u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 544)));
label_159518:
    // 0x159518: 0xa44023  subu        $t0, $a1, $a0
    ctx->pc = 0x159518u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_15951c:
    // 0x15951c: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x15951cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_159520:
    // 0x159520: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x159520u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_159524:
    // 0x159524: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x159524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_159528:
    // 0x159528: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x159528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
label_15952c:
    // 0x15952c: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x15952cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_159530:
    // 0x159530: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x159530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_159534:
    // 0x159534: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x159534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_159538:
    // 0x159538: 0x938c0  sll         $a3, $t1, 3
    ctx->pc = 0x159538u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_15953c:
    // 0x15953c: 0x24a50000  addiu       $a1, $a1, 0x0
    ctx->pc = 0x15953cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
label_159540:
    // 0x159540: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x159540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_159544:
    // 0x159544: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x159544u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_159548:
    // 0x159548: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x159548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_15954c:
    // 0x15954c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x15954cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_159550:
    // 0x159550: 0x90a70015  lbu         $a3, 0x15($a1)
    ctx->pc = 0x159550u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 21)));
label_159554:
    // 0x159554: 0x10e40010  beq         $a3, $a0, . + 4 + (0x10 << 2)
label_159558:
    if (ctx->pc == 0x159558u) {
        ctx->pc = 0x159558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159554u;
        // 0x159558: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15955Cu;
        goto label_15955c;
    }
    ctx->pc = 0x159554u;
    {
        const bool branch_taken_0x159554 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x159558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159554u;
        // 0x159558: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159554) {
            ctx->pc = 0x159598u;
            goto label_159598;
        }
    }
    ctx->pc = 0x15955Cu;
label_15955c:
    // 0x15955c: 0x10e5000e  beq         $a3, $a1, . + 4 + (0xE << 2)
label_159560:
    if (ctx->pc == 0x159560u) {
        ctx->pc = 0x159560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15955Cu;
        // 0x159560: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159564u;
        goto label_159564;
    }
    ctx->pc = 0x15955Cu;
    {
        const bool branch_taken_0x15955c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x159560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15955Cu;
        // 0x159560: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15955c) {
            ctx->pc = 0x159598u;
            goto label_159598;
        }
    }
    ctx->pc = 0x159564u;
label_159564:
    // 0x159564: 0x10e4000c  beq         $a3, $a0, . + 4 + (0xC << 2)
label_159568:
    if (ctx->pc == 0x159568u) {
        ctx->pc = 0x15956Cu;
        goto label_15956c;
    }
    ctx->pc = 0x159564u;
    {
        const bool branch_taken_0x159564 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x159564) {
            ctx->pc = 0x159598u;
            goto label_159598;
        }
    }
    ctx->pc = 0x15956Cu;
label_15956c:
    // 0x15956c: 0xa4660230  sh          $a2, 0x230($v1)
    ctx->pc = 0x15956cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 560), (uint16_t)GPR_U32(ctx, 6));
label_159570:
    // 0x159570: 0x84640230  lh          $a0, 0x230($v1)
    ctx->pc = 0x159570u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 560)));
label_159574:
    // 0x159574: 0x28810384  slti        $at, $a0, 0x384
    ctx->pc = 0x159574u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)900) ? 1 : 0);
label_159578:
    // 0x159578: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_15957c:
    if (ctx->pc == 0x15957Cu) {
        ctx->pc = 0x159580u;
        goto label_159580;
    }
    ctx->pc = 0x159578u;
    {
        const bool branch_taken_0x159578 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x159578) {
            ctx->pc = 0x15958Cu;
            goto label_15958c;
        }
    }
    ctx->pc = 0x159580u;
label_159580:
    // 0x159580: 0x24040383  addiu       $a0, $zero, 0x383
    ctx->pc = 0x159580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 899));
label_159584:
    // 0x159584: 0x10000004  b           . + 4 + (0x4 << 2)
label_159588:
    if (ctx->pc == 0x159588u) {
        ctx->pc = 0x159588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159584u;
        // 0x159588: 0xa4640230  sh          $a0, 0x230($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 560), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15958Cu;
        goto label_15958c;
    }
    ctx->pc = 0x159584u;
    {
        const bool branch_taken_0x159584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159584u;
        // 0x159588: 0xa4640230  sh          $a0, 0x230($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 560), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159584) {
            ctx->pc = 0x159598u;
            goto label_159598;
        }
    }
    ctx->pc = 0x15958Cu;
label_15958c:
    // 0x15958c: 0x1c800002  bgtz        $a0, . + 4 + (0x2 << 2)
label_159590:
    if (ctx->pc == 0x159590u) {
        ctx->pc = 0x159594u;
        goto label_159594;
    }
    ctx->pc = 0x15958Cu;
    {
        const bool branch_taken_0x15958c = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x15958c) {
            ctx->pc = 0x159598u;
            goto label_159598;
        }
    }
    ctx->pc = 0x159594u;
label_159594:
    // 0x159594: 0xa4650230  sh          $a1, 0x230($v1)
    ctx->pc = 0x159594u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 560), (uint16_t)GPR_U32(ctx, 5));
label_159598:
    // 0x159598: 0x3e00008  jr          $ra
label_15959c:
    if (ctx->pc == 0x15959Cu) {
        ctx->pc = 0x1595A0u;
        goto label_1595a0;
    }
    ctx->pc = 0x159598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1595A0u;
label_1595a0:
    // 0x1595a0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1595a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1595a4:
    // 0x1595a4: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x1595a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
label_1595a8:
    // 0x1595a8: 0x645021  addu        $t2, $v1, $a0
    ctx->pc = 0x1595a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1595ac:
    // 0x1595ac: 0x25291300  addiu       $t1, $t1, 0x1300
    ctx->pc = 0x1595acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4864));
label_1595b0:
    // 0x1595b0: 0xa4080  sll         $t0, $t2, 2
    ctx->pc = 0x1595b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_1595b4:
    // 0x1595b4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1595b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1595b8:
    // 0x1595b8: 0x10a4023  subu        $t0, $t0, $t2
    ctx->pc = 0x1595b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
label_1595bc:
    // 0x1595bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1595bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1595c0:
    // 0x1595c0: 0x82a00  sll         $a1, $t0, 8
    ctx->pc = 0x1595c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_1595c4:
    // 0x1595c4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1595c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1595c8:
    // 0x1595c8: 0x34180  sll         $t0, $v1, 6
    ctx->pc = 0x1595c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1595cc:
    // 0x1595cc: 0x1251821  addu        $v1, $t1, $a1
    ctx->pc = 0x1595ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
label_1595d0:
    // 0x1595d0: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1595d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1595d4:
    // 0x1595d4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1595d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1595d8:
    // 0x1595d8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1595d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1595dc:
    // 0x1595dc: 0xa4670232  sh          $a3, 0x232($v1)
    ctx->pc = 0x1595dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 562), (uint16_t)GPR_U32(ctx, 7));
label_1595e0:
    // 0x1595e0: 0x84274af4  lh          $a3, 0x4AF4($at)
    ctx->pc = 0x1595e0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_1595e4:
    // 0x1595e4: 0x10e5002b  beq         $a3, $a1, . + 4 + (0x2B << 2)
label_1595e8:
    if (ctx->pc == 0x1595E8u) {
        ctx->pc = 0x1595ECu;
        goto label_1595ec;
    }
    ctx->pc = 0x1595E4u;
    {
        const bool branch_taken_0x1595e4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x1595e4) {
            ctx->pc = 0x159694u;
            goto label_159694;
        }
    }
    ctx->pc = 0x1595ECu;
label_1595ec:
    // 0x1595ec: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1595ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1595f0:
    // 0x1595f0: 0x10e50028  beq         $a3, $a1, . + 4 + (0x28 << 2)
label_1595f4:
    if (ctx->pc == 0x1595F4u) {
        ctx->pc = 0x1595F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1595F0u;
        // 0x1595f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1595F8u;
        goto label_1595f8;
    }
    ctx->pc = 0x1595F0u;
    {
        const bool branch_taken_0x1595f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x1595F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1595F0u;
        // 0x1595f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1595f0) {
            ctx->pc = 0x159694u;
            goto label_159694;
        }
    }
    ctx->pc = 0x1595F8u;
label_1595f8:
    // 0x1595f8: 0x1485001b  bne         $a0, $a1, . + 4 + (0x1B << 2)
label_1595fc:
    if (ctx->pc == 0x1595FCu) {
        ctx->pc = 0x1595FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1595F8u;
        // 0x1595fc: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159600u;
        goto label_159600;
    }
    ctx->pc = 0x1595F8u;
    {
        const bool branch_taken_0x1595f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1595FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1595F8u;
        // 0x1595fc: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1595f8) {
            ctx->pc = 0x159668u;
            goto label_159668;
        }
    }
    ctx->pc = 0x159600u;
label_159600:
    // 0x159600: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x159600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_159604:
    // 0x159604: 0x8c274afc  lw          $a3, 0x4AFC($at)
    ctx->pc = 0x159604u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
label_159608:
    // 0x159608: 0x14e50006  bne         $a3, $a1, . + 4 + (0x6 << 2)
label_15960c:
    if (ctx->pc == 0x15960Cu) {
        ctx->pc = 0x159610u;
        goto label_159610;
    }
    ctx->pc = 0x159608u;
    {
        const bool branch_taken_0x159608 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        if (branch_taken_0x159608) {
            ctx->pc = 0x159624u;
            goto label_159624;
        }
    }
    ctx->pc = 0x159610u;
label_159610:
    // 0x159610: 0x8467023c  lh          $a3, 0x23C($v1)
    ctx->pc = 0x159610u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 572)));
label_159614:
    // 0x159614: 0x84650232  lh          $a1, 0x232($v1)
    ctx->pc = 0x159614u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 562)));
label_159618:
    // 0x159618: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x159618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_15961c:
    // 0x15961c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_159620:
    if (ctx->pc == 0x159620u) {
        ctx->pc = 0x159620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15961Cu;
        // 0x159620: 0xa4650232  sh          $a1, 0x232($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 562), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159624u;
        goto label_159624;
    }
    ctx->pc = 0x15961Cu;
    {
        const bool branch_taken_0x15961c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15961Cu;
        // 0x159620: 0xa4650232  sh          $a1, 0x232($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 562), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15961c) {
            ctx->pc = 0x159694u;
            goto label_159694;
        }
    }
    ctx->pc = 0x159624u;
label_159624:
    // 0x159624: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x159624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_159628:
    // 0x159628: 0x14e50007  bne         $a3, $a1, . + 4 + (0x7 << 2)
label_15962c:
    if (ctx->pc == 0x15962Cu) {
        ctx->pc = 0x15962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159628u;
        // 0x15962c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159630u;
        goto label_159630;
    }
    ctx->pc = 0x159628u;
    {
        const bool branch_taken_0x159628 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        ctx->pc = 0x15962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159628u;
        // 0x15962c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159628) {
            ctx->pc = 0x159648u;
            goto label_159648;
        }
    }
    ctx->pc = 0x159630u;
label_159630:
    // 0x159630: 0x8467023c  lh          $a3, 0x23C($v1)
    ctx->pc = 0x159630u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 572)));
label_159634:
    // 0x159634: 0x84650232  lh          $a1, 0x232($v1)
    ctx->pc = 0x159634u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 562)));
label_159638:
    // 0x159638: 0x24e70064  addiu       $a3, $a3, 0x64
    ctx->pc = 0x159638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 100));
label_15963c:
    // 0x15963c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x15963cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_159640:
    // 0x159640: 0x10000014  b           . + 4 + (0x14 << 2)
label_159644:
    if (ctx->pc == 0x159644u) {
        ctx->pc = 0x159644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159640u;
        // 0x159644: 0xa4650232  sh          $a1, 0x232($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 562), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159648u;
        goto label_159648;
    }
    ctx->pc = 0x159640u;
    {
        const bool branch_taken_0x159640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159640u;
        // 0x159644: 0xa4650232  sh          $a1, 0x232($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 562), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159640) {
            ctx->pc = 0x159694u;
            goto label_159694;
        }
    }
    ctx->pc = 0x159648u;
label_159648:
    // 0x159648: 0x14e50012  bne         $a3, $a1, . + 4 + (0x12 << 2)
label_15964c:
    if (ctx->pc == 0x15964Cu) {
        ctx->pc = 0x159650u;
        goto label_159650;
    }
    ctx->pc = 0x159648u;
    {
        const bool branch_taken_0x159648 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        if (branch_taken_0x159648) {
            ctx->pc = 0x159694u;
            goto label_159694;
        }
    }
    ctx->pc = 0x159650u;
label_159650:
    // 0x159650: 0x8467023c  lh          $a3, 0x23C($v1)
    ctx->pc = 0x159650u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 572)));
label_159654:
    // 0x159654: 0x84650232  lh          $a1, 0x232($v1)
    ctx->pc = 0x159654u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 562)));
label_159658:
    // 0x159658: 0x24e700c8  addiu       $a3, $a3, 0xC8
    ctx->pc = 0x159658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 200));
label_15965c:
    // 0x15965c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x15965cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_159660:
    // 0x159660: 0x1000000c  b           . + 4 + (0xC << 2)
label_159664:
    if (ctx->pc == 0x159664u) {
        ctx->pc = 0x159664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159660u;
        // 0x159664: 0xa4650232  sh          $a1, 0x232($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 562), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159668u;
        goto label_159668;
    }
    ctx->pc = 0x159660u;
    {
        const bool branch_taken_0x159660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159660u;
        // 0x159664: 0xa4650232  sh          $a1, 0x232($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 562), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159660) {
            ctx->pc = 0x159694u;
            goto label_159694;
        }
    }
    ctx->pc = 0x159668u;
label_159668:
    // 0x159668: 0x8c254afc  lw          $a1, 0x4AFC($at)
    ctx->pc = 0x159668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
label_15966c:
    // 0x15966c: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
label_159670:
    if (ctx->pc == 0x159670u) {
        ctx->pc = 0x159674u;
        goto label_159674;
    }
    ctx->pc = 0x15966Cu;
    {
        const bool branch_taken_0x15966c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x15966c) {
            ctx->pc = 0x159694u;
            goto label_159694;
        }
    }
    ctx->pc = 0x159674u;
label_159674:
    // 0x159674: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x159674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_159678:
    // 0x159678: 0x8c254af8  lw          $a1, 0x4AF8($at)
    ctx->pc = 0x159678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19192)));
label_15967c:
    // 0x15967c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_159680:
    if (ctx->pc == 0x159680u) {
        ctx->pc = 0x159684u;
        goto label_159684;
    }
    ctx->pc = 0x15967Cu;
    {
        const bool branch_taken_0x15967c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15967c) {
            ctx->pc = 0x159694u;
            goto label_159694;
        }
    }
    ctx->pc = 0x159684u;
label_159684:
    // 0x159684: 0x8467023c  lh          $a3, 0x23C($v1)
    ctx->pc = 0x159684u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 572)));
label_159688:
    // 0x159688: 0x84650232  lh          $a1, 0x232($v1)
    ctx->pc = 0x159688u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 562)));
label_15968c:
    // 0x15968c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x15968cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_159690:
    // 0x159690: 0xa4650232  sh          $a1, 0x232($v1)
    ctx->pc = 0x159690u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 562), (uint16_t)GPR_U32(ctx, 5));
label_159694:
    // 0x159694: 0x84650232  lh          $a1, 0x232($v1)
    ctx->pc = 0x159694u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 562)));
label_159698:
    // 0x159698: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x159698u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15969c:
    // 0x15969c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15969cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1596a0:
    // 0x1596a0: 0xa4650230  sh          $a1, 0x230($v1)
    ctx->pc = 0x1596a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 560), (uint16_t)GPR_U32(ctx, 5));
label_1596a4:
    // 0x1596a4: 0x683821  addu        $a3, $v1, $t0
    ctx->pc = 0x1596a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1596a8:
    // 0x1596a8: 0x695021  addu        $t2, $v1, $t1
    ctx->pc = 0x1596a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1596ac:
    // 0x1596ac: 0xa0e0016a  sb          $zero, 0x16A($a3)
    ctx->pc = 0x1596acu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 362), (uint8_t)GPR_U32(ctx, 0));
label_1596b0:
    // 0x1596b0: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1596b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_1596b4:
    // 0x1596b4: 0xa5400000  sh          $zero, 0x0($t2)
    ctx->pc = 0x1596b4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 0));
label_1596b8:
    // 0x1596b8: 0x290500ad  slti        $a1, $t0, 0xAD
    ctx->pc = 0x1596b8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)173) ? 1 : 0);
label_1596bc:
    // 0x1596bc: 0xa0e0016b  sb          $zero, 0x16B($a3)
    ctx->pc = 0x1596bcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 363), (uint8_t)GPR_U32(ctx, 0));
label_1596c0:
    // 0x1596c0: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x1596c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_1596c4:
    // 0x1596c4: 0xa5400002  sh          $zero, 0x2($t2)
    ctx->pc = 0x1596c4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 0));
label_1596c8:
    // 0x1596c8: 0xa0e0016c  sb          $zero, 0x16C($a3)
    ctx->pc = 0x1596c8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 364), (uint8_t)GPR_U32(ctx, 0));
label_1596cc:
    // 0x1596cc: 0xa5400004  sh          $zero, 0x4($t2)
    ctx->pc = 0x1596ccu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 4), (uint16_t)GPR_U32(ctx, 0));
label_1596d0:
    // 0x1596d0: 0xa0e0016d  sb          $zero, 0x16D($a3)
    ctx->pc = 0x1596d0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 365), (uint8_t)GPR_U32(ctx, 0));
label_1596d4:
    // 0x1596d4: 0xa5400006  sh          $zero, 0x6($t2)
    ctx->pc = 0x1596d4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 6), (uint16_t)GPR_U32(ctx, 0));
label_1596d8:
    // 0x1596d8: 0xa0e0016e  sb          $zero, 0x16E($a3)
    ctx->pc = 0x1596d8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 366), (uint8_t)GPR_U32(ctx, 0));
label_1596dc:
    // 0x1596dc: 0xa5400008  sh          $zero, 0x8($t2)
    ctx->pc = 0x1596dcu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 8), (uint16_t)GPR_U32(ctx, 0));
label_1596e0:
    // 0x1596e0: 0xa0e0016f  sb          $zero, 0x16F($a3)
    ctx->pc = 0x1596e0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 367), (uint8_t)GPR_U32(ctx, 0));
label_1596e4:
    // 0x1596e4: 0xa540000a  sh          $zero, 0xA($t2)
    ctx->pc = 0x1596e4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 10), (uint16_t)GPR_U32(ctx, 0));
label_1596e8:
    // 0x1596e8: 0xa0e00170  sb          $zero, 0x170($a3)
    ctx->pc = 0x1596e8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 368), (uint8_t)GPR_U32(ctx, 0));
label_1596ec:
    // 0x1596ec: 0xa540000c  sh          $zero, 0xC($t2)
    ctx->pc = 0x1596ecu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 12), (uint16_t)GPR_U32(ctx, 0));
label_1596f0:
    // 0x1596f0: 0xa0e00171  sb          $zero, 0x171($a3)
    ctx->pc = 0x1596f0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 369), (uint8_t)GPR_U32(ctx, 0));
label_1596f4:
    // 0x1596f4: 0x14a0ffeb  bnez        $a1, . + 4 + (-0x15 << 2)
label_1596f8:
    if (ctx->pc == 0x1596F8u) {
        ctx->pc = 0x1596F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1596F4u;
        // 0x1596f8: 0xa540000e  sh          $zero, 0xE($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 14), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1596FCu;
        goto label_1596fc;
    }
    ctx->pc = 0x1596F4u;
    {
        const bool branch_taken_0x1596f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1596F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1596F4u;
        // 0x1596f8: 0xa540000e  sh          $zero, 0xE($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 14), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1596f4) {
            ctx->pc = 0x1596A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1596a4;
        }
    }
    ctx->pc = 0x1596FCu;
label_1596fc:
    // 0x1596fc: 0x290100b5  slti        $at, $t0, 0xB5
    ctx->pc = 0x1596fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)181) ? 1 : 0);
label_159700:
    // 0x159700: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_159704:
    if (ctx->pc == 0x159704u) {
        ctx->pc = 0x159704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159700u;
        // 0x159704: 0x84840  sll         $t1, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159708u;
        goto label_159708;
    }
    ctx->pc = 0x159700u;
    {
        const bool branch_taken_0x159700 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x159704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159700u;
        // 0x159704: 0x84840  sll         $t1, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159700) {
            ctx->pc = 0x159728u;
            goto label_159728;
        }
    }
    ctx->pc = 0x159708u;
label_159708:
    // 0x159708: 0x683821  addu        $a3, $v1, $t0
    ctx->pc = 0x159708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_15970c:
    // 0x15970c: 0x692821  addu        $a1, $v1, $t1
    ctx->pc = 0x15970cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_159710:
    // 0x159710: 0xa0e0016a  sb          $zero, 0x16A($a3)
    ctx->pc = 0x159710u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 362), (uint8_t)GPR_U32(ctx, 0));
label_159714:
    // 0x159714: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x159714u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_159718:
    // 0x159718: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x159718u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
label_15971c:
    // 0x15971c: 0x290500b5  slti        $a1, $t0, 0xB5
    ctx->pc = 0x15971cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)181) ? 1 : 0);
label_159720:
    // 0x159720: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
label_159724:
    if (ctx->pc == 0x159724u) {
        ctx->pc = 0x159724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159720u;
        // 0x159724: 0x25290002  addiu       $t1, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159728u;
        goto label_159728;
    }
    ctx->pc = 0x159720u;
    {
        const bool branch_taken_0x159720 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x159724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159720u;
        // 0x159724: 0x25290002  addiu       $t1, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159720) {
            ctx->pc = 0x159708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159708;
        }
    }
    ctx->pc = 0x159728u;
label_159728:
    // 0x159728: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x159728u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_15972c:
    // 0x15972c: 0x34a77e40  ori         $a3, $a1, 0x7E40
    ctx->pc = 0x15972cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32320);
label_159730:
    // 0x159730: 0x42a00  sll         $a1, $a0, 8
    ctx->pc = 0x159730u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_159734:
    // 0x159734: 0xac67022c  sw          $a3, 0x22C($v1)
    ctx->pc = 0x159734u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 556), GPR_U32(ctx, 7));
label_159738:
    // 0x159738: 0xa44023  subu        $t0, $a1, $a0
    ctx->pc = 0x159738u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_15973c:
    // 0x15973c: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x15973cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
label_159740:
    // 0x159740: 0x828c0  sll         $a1, $t0, 3
    ctx->pc = 0x159740u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_159744:
    // 0x159744: 0x24e72570  addiu       $a3, $a3, 0x2570
    ctx->pc = 0x159744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9584));
label_159748:
    // 0x159748: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x159748u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_15974c:
    // 0x15974c: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x15974cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_159750:
    // 0x159750: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x159750u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_159754:
    // 0x159754: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x159754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_159758:
    // 0x159758: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x159758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_15975c:
    // 0x15975c: 0x540c0  sll         $t0, $a1, 3
    ctx->pc = 0x15975cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_159760:
    // 0x159760: 0x24e70000  addiu       $a3, $a3, 0x0
    ctx->pc = 0x159760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 0));
label_159764:
    // 0x159764: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x159764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_159768:
    // 0x159768: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x159768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15976c:
    // 0x15976c: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x15976cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_159770:
    // 0x159770: 0x90e70015  lbu         $a3, 0x15($a3)
    ctx->pc = 0x159770u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 21)));
label_159774:
    // 0x159774: 0x10e50007  beq         $a3, $a1, . + 4 + (0x7 << 2)
label_159778:
    if (ctx->pc == 0x159778u) {
        ctx->pc = 0x15977Cu;
        goto label_15977c;
    }
    ctx->pc = 0x159774u;
    {
        const bool branch_taken_0x159774 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x159774) {
            ctx->pc = 0x159794u;
            { ctx->pc = 0x159794; return; }
        }
    }
    ctx->pc = 0x15977Cu;
label_15977c:
    // 0x15977c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15977cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x159780u;
    return;
}

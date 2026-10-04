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

// Function: FUN_0019b808
// Address: 0x19b808 - 0x29b810
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b808_part344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x242fb8u: goto label_242fb8;
        case 0x242fbcu: goto label_242fbc;
        case 0x242fc0u: goto label_242fc0;
        case 0x242fc4u: goto label_242fc4;
        case 0x242fc8u: goto label_242fc8;
        case 0x242fccu: goto label_242fcc;
        case 0x242fd0u: goto label_242fd0;
        case 0x242fd4u: goto label_242fd4;
        case 0x242fd8u: goto label_242fd8;
        case 0x242fdcu: goto label_242fdc;
        case 0x242fe0u: goto label_242fe0;
        case 0x242fe4u: goto label_242fe4;
        case 0x242fe8u: goto label_242fe8;
        case 0x242fecu: goto label_242fec;
        case 0x242ff0u: goto label_242ff0;
        case 0x242ff4u: goto label_242ff4;
        case 0x242ff8u: goto label_242ff8;
        case 0x242ffcu: goto label_242ffc;
        case 0x243000u: goto label_243000;
        case 0x243004u: goto label_243004;
        case 0x243008u: goto label_243008;
        case 0x24300cu: goto label_24300c;
        case 0x243010u: goto label_243010;
        case 0x243014u: goto label_243014;
        case 0x243018u: goto label_243018;
        case 0x24301cu: goto label_24301c;
        case 0x243020u: goto label_243020;
        case 0x243024u: goto label_243024;
        case 0x243028u: goto label_243028;
        case 0x24302cu: goto label_24302c;
        case 0x243030u: goto label_243030;
        case 0x243034u: goto label_243034;
        case 0x243038u: goto label_243038;
        case 0x24303cu: goto label_24303c;
        case 0x243040u: goto label_243040;
        case 0x243044u: goto label_243044;
        case 0x243048u: goto label_243048;
        case 0x24304cu: goto label_24304c;
        case 0x243050u: goto label_243050;
        case 0x243054u: goto label_243054;
        case 0x243058u: goto label_243058;
        case 0x24305cu: goto label_24305c;
        case 0x243060u: goto label_243060;
        case 0x243064u: goto label_243064;
        case 0x243068u: goto label_243068;
        case 0x24306cu: goto label_24306c;
        case 0x243070u: goto label_243070;
        case 0x243074u: goto label_243074;
        case 0x243078u: goto label_243078;
        case 0x24307cu: goto label_24307c;
        case 0x243080u: goto label_243080;
        case 0x243084u: goto label_243084;
        case 0x243088u: goto label_243088;
        case 0x24308cu: goto label_24308c;
        case 0x243090u: goto label_243090;
        case 0x243094u: goto label_243094;
        case 0x243098u: goto label_243098;
        case 0x24309cu: goto label_24309c;
        case 0x2430a0u: goto label_2430a0;
        case 0x2430a4u: goto label_2430a4;
        case 0x2430a8u: goto label_2430a8;
        case 0x2430acu: goto label_2430ac;
        case 0x2430b0u: goto label_2430b0;
        case 0x2430b4u: goto label_2430b4;
        case 0x2430b8u: goto label_2430b8;
        case 0x2430bcu: goto label_2430bc;
        case 0x2430c0u: goto label_2430c0;
        case 0x2430c4u: goto label_2430c4;
        case 0x2430c8u: goto label_2430c8;
        case 0x2430ccu: goto label_2430cc;
        case 0x2430d0u: goto label_2430d0;
        case 0x2430d4u: goto label_2430d4;
        case 0x2430d8u: goto label_2430d8;
        case 0x2430dcu: goto label_2430dc;
        case 0x2430e0u: goto label_2430e0;
        case 0x2430e4u: goto label_2430e4;
        case 0x2430e8u: goto label_2430e8;
        case 0x2430ecu: goto label_2430ec;
        case 0x2430f0u: goto label_2430f0;
        case 0x2430f4u: goto label_2430f4;
        case 0x2430f8u: goto label_2430f8;
        case 0x2430fcu: goto label_2430fc;
        case 0x243100u: goto label_243100;
        case 0x243104u: goto label_243104;
        case 0x243108u: goto label_243108;
        case 0x24310cu: goto label_24310c;
        case 0x243110u: goto label_243110;
        case 0x243114u: goto label_243114;
        case 0x243118u: goto label_243118;
        case 0x24311cu: goto label_24311c;
        case 0x243120u: goto label_243120;
        case 0x243124u: goto label_243124;
        case 0x243128u: goto label_243128;
        case 0x24312cu: goto label_24312c;
        case 0x243130u: goto label_243130;
        case 0x243134u: goto label_243134;
        case 0x243138u: goto label_243138;
        case 0x24313cu: goto label_24313c;
        case 0x243140u: goto label_243140;
        case 0x243144u: goto label_243144;
        case 0x243148u: goto label_243148;
        case 0x24314cu: goto label_24314c;
        case 0x243150u: goto label_243150;
        case 0x243154u: goto label_243154;
        case 0x243158u: goto label_243158;
        case 0x24315cu: goto label_24315c;
        case 0x243160u: goto label_243160;
        case 0x243164u: goto label_243164;
        case 0x243168u: goto label_243168;
        case 0x24316cu: goto label_24316c;
        case 0x243170u: goto label_243170;
        case 0x243174u: goto label_243174;
        case 0x243178u: goto label_243178;
        case 0x24317cu: goto label_24317c;
        case 0x243180u: goto label_243180;
        case 0x243184u: goto label_243184;
        case 0x243188u: goto label_243188;
        case 0x24318cu: goto label_24318c;
        case 0x243190u: goto label_243190;
        case 0x243194u: goto label_243194;
        case 0x243198u: goto label_243198;
        case 0x24319cu: goto label_24319c;
        case 0x2431a0u: goto label_2431a0;
        case 0x2431a4u: goto label_2431a4;
        case 0x2431a8u: goto label_2431a8;
        case 0x2431acu: goto label_2431ac;
        case 0x2431b0u: goto label_2431b0;
        case 0x2431b4u: goto label_2431b4;
        case 0x2431b8u: goto label_2431b8;
        case 0x2431bcu: goto label_2431bc;
        case 0x2431c0u: goto label_2431c0;
        case 0x2431c4u: goto label_2431c4;
        case 0x2431c8u: goto label_2431c8;
        case 0x2431ccu: goto label_2431cc;
        case 0x2431d0u: goto label_2431d0;
        case 0x2431d4u: goto label_2431d4;
        case 0x2431d8u: goto label_2431d8;
        case 0x2431dcu: goto label_2431dc;
        case 0x2431e0u: goto label_2431e0;
        case 0x2431e4u: goto label_2431e4;
        case 0x2431e8u: goto label_2431e8;
        case 0x2431ecu: goto label_2431ec;
        case 0x2431f0u: goto label_2431f0;
        case 0x2431f4u: goto label_2431f4;
        case 0x2431f8u: goto label_2431f8;
        case 0x2431fcu: goto label_2431fc;
        case 0x243200u: goto label_243200;
        case 0x243204u: goto label_243204;
        case 0x243208u: goto label_243208;
        case 0x24320cu: goto label_24320c;
        case 0x243210u: goto label_243210;
        case 0x243214u: goto label_243214;
        case 0x243218u: goto label_243218;
        case 0x24321cu: goto label_24321c;
        case 0x243220u: goto label_243220;
        case 0x243224u: goto label_243224;
        case 0x243228u: goto label_243228;
        case 0x24322cu: goto label_24322c;
        case 0x243230u: goto label_243230;
        case 0x243234u: goto label_243234;
        case 0x243238u: goto label_243238;
        case 0x24323cu: goto label_24323c;
        case 0x243240u: goto label_243240;
        case 0x243244u: goto label_243244;
        case 0x243248u: goto label_243248;
        case 0x24324cu: goto label_24324c;
        case 0x243250u: goto label_243250;
        case 0x243254u: goto label_243254;
        case 0x243258u: goto label_243258;
        case 0x24325cu: goto label_24325c;
        case 0x243260u: goto label_243260;
        case 0x243264u: goto label_243264;
        case 0x243268u: goto label_243268;
        case 0x24326cu: goto label_24326c;
        case 0x243270u: goto label_243270;
        case 0x243274u: goto label_243274;
        case 0x243278u: goto label_243278;
        case 0x24327cu: goto label_24327c;
        case 0x243280u: goto label_243280;
        case 0x243284u: goto label_243284;
        case 0x243288u: goto label_243288;
        case 0x24328cu: goto label_24328c;
        case 0x243290u: goto label_243290;
        case 0x243294u: goto label_243294;
        case 0x243298u: goto label_243298;
        case 0x24329cu: goto label_24329c;
        case 0x2432a0u: goto label_2432a0;
        case 0x2432a4u: goto label_2432a4;
        case 0x2432a8u: goto label_2432a8;
        case 0x2432acu: goto label_2432ac;
        case 0x2432b0u: goto label_2432b0;
        case 0x2432b4u: goto label_2432b4;
        case 0x2432b8u: goto label_2432b8;
        case 0x2432bcu: goto label_2432bc;
        case 0x2432c0u: goto label_2432c0;
        case 0x2432c4u: goto label_2432c4;
        case 0x2432c8u: goto label_2432c8;
        case 0x2432ccu: goto label_2432cc;
        case 0x2432d0u: goto label_2432d0;
        case 0x2432d4u: goto label_2432d4;
        case 0x2432d8u: goto label_2432d8;
        case 0x2432dcu: goto label_2432dc;
        case 0x2432e0u: goto label_2432e0;
        case 0x2432e4u: goto label_2432e4;
        case 0x2432e8u: goto label_2432e8;
        case 0x2432ecu: goto label_2432ec;
        case 0x2432f0u: goto label_2432f0;
        case 0x2432f4u: goto label_2432f4;
        case 0x2432f8u: goto label_2432f8;
        case 0x2432fcu: goto label_2432fc;
        case 0x243300u: goto label_243300;
        case 0x243304u: goto label_243304;
        case 0x243308u: goto label_243308;
        case 0x24330cu: goto label_24330c;
        case 0x243310u: goto label_243310;
        case 0x243314u: goto label_243314;
        case 0x243318u: goto label_243318;
        case 0x24331cu: goto label_24331c;
        case 0x243320u: goto label_243320;
        case 0x243324u: goto label_243324;
        case 0x243328u: goto label_243328;
        case 0x24332cu: goto label_24332c;
        case 0x243330u: goto label_243330;
        case 0x243334u: goto label_243334;
        case 0x243338u: goto label_243338;
        case 0x24333cu: goto label_24333c;
        case 0x243340u: goto label_243340;
        case 0x243344u: goto label_243344;
        case 0x243348u: goto label_243348;
        case 0x24334cu: goto label_24334c;
        case 0x243350u: goto label_243350;
        case 0x243354u: goto label_243354;
        case 0x243358u: goto label_243358;
        case 0x24335cu: goto label_24335c;
        case 0x243360u: goto label_243360;
        case 0x243364u: goto label_243364;
        case 0x243368u: goto label_243368;
        case 0x24336cu: goto label_24336c;
        case 0x243370u: goto label_243370;
        case 0x243374u: goto label_243374;
        case 0x243378u: goto label_243378;
        case 0x24337cu: goto label_24337c;
        case 0x243380u: goto label_243380;
        case 0x243384u: goto label_243384;
        case 0x243388u: goto label_243388;
        case 0x24338cu: goto label_24338c;
        case 0x243390u: goto label_243390;
        case 0x243394u: goto label_243394;
        case 0x243398u: goto label_243398;
        case 0x24339cu: goto label_24339c;
        case 0x2433a0u: goto label_2433a0;
        case 0x2433a4u: goto label_2433a4;
        case 0x2433a8u: goto label_2433a8;
        case 0x2433acu: goto label_2433ac;
        case 0x2433b0u: goto label_2433b0;
        case 0x2433b4u: goto label_2433b4;
        case 0x2433b8u: goto label_2433b8;
        case 0x2433bcu: goto label_2433bc;
        case 0x2433c0u: goto label_2433c0;
        case 0x2433c4u: goto label_2433c4;
        case 0x2433c8u: goto label_2433c8;
        case 0x2433ccu: goto label_2433cc;
        case 0x2433d0u: goto label_2433d0;
        case 0x2433d4u: goto label_2433d4;
        case 0x2433d8u: goto label_2433d8;
        case 0x2433dcu: goto label_2433dc;
        case 0x2433e0u: goto label_2433e0;
        case 0x2433e4u: goto label_2433e4;
        case 0x2433e8u: goto label_2433e8;
        case 0x2433ecu: goto label_2433ec;
        case 0x2433f0u: goto label_2433f0;
        case 0x2433f4u: goto label_2433f4;
        case 0x2433f8u: goto label_2433f8;
        case 0x2433fcu: goto label_2433fc;
        case 0x243400u: goto label_243400;
        case 0x243404u: goto label_243404;
        case 0x243408u: goto label_243408;
        case 0x24340cu: goto label_24340c;
        case 0x243410u: goto label_243410;
        case 0x243414u: goto label_243414;
        case 0x243418u: goto label_243418;
        case 0x24341cu: goto label_24341c;
        case 0x243420u: goto label_243420;
        case 0x243424u: goto label_243424;
        case 0x243428u: goto label_243428;
        case 0x24342cu: goto label_24342c;
        case 0x243430u: goto label_243430;
        case 0x243434u: goto label_243434;
        case 0x243438u: goto label_243438;
        case 0x24343cu: goto label_24343c;
        case 0x243440u: goto label_243440;
        case 0x243444u: goto label_243444;
        case 0x243448u: goto label_243448;
        case 0x24344cu: goto label_24344c;
        case 0x243450u: goto label_243450;
        case 0x243454u: goto label_243454;
        case 0x243458u: goto label_243458;
        case 0x24345cu: goto label_24345c;
        case 0x243460u: goto label_243460;
        case 0x243464u: goto label_243464;
        case 0x243468u: goto label_243468;
        case 0x24346cu: goto label_24346c;
        case 0x243470u: goto label_243470;
        case 0x243474u: goto label_243474;
        case 0x243478u: goto label_243478;
        case 0x24347cu: goto label_24347c;
        case 0x243480u: goto label_243480;
        case 0x243484u: goto label_243484;
        case 0x243488u: goto label_243488;
        case 0x24348cu: goto label_24348c;
        case 0x243490u: goto label_243490;
        case 0x243494u: goto label_243494;
        case 0x243498u: goto label_243498;
        case 0x24349cu: goto label_24349c;
        case 0x2434a0u: goto label_2434a0;
        case 0x2434a4u: goto label_2434a4;
        case 0x2434a8u: goto label_2434a8;
        case 0x2434acu: goto label_2434ac;
        case 0x2434b0u: goto label_2434b0;
        case 0x2434b4u: goto label_2434b4;
        case 0x2434b8u: goto label_2434b8;
        case 0x2434bcu: goto label_2434bc;
        case 0x2434c0u: goto label_2434c0;
        case 0x2434c4u: goto label_2434c4;
        case 0x2434c8u: goto label_2434c8;
        case 0x2434ccu: goto label_2434cc;
        case 0x2434d0u: goto label_2434d0;
        case 0x2434d4u: goto label_2434d4;
        case 0x2434d8u: goto label_2434d8;
        case 0x2434dcu: goto label_2434dc;
        case 0x2434e0u: goto label_2434e0;
        case 0x2434e4u: goto label_2434e4;
        case 0x2434e8u: goto label_2434e8;
        case 0x2434ecu: goto label_2434ec;
        case 0x2434f0u: goto label_2434f0;
        case 0x2434f4u: goto label_2434f4;
        case 0x2434f8u: goto label_2434f8;
        case 0x2434fcu: goto label_2434fc;
        case 0x243500u: goto label_243500;
        case 0x243504u: goto label_243504;
        case 0x243508u: goto label_243508;
        case 0x24350cu: goto label_24350c;
        case 0x243510u: goto label_243510;
        case 0x243514u: goto label_243514;
        case 0x243518u: goto label_243518;
        case 0x24351cu: goto label_24351c;
        case 0x243520u: goto label_243520;
        case 0x243524u: goto label_243524;
        case 0x243528u: goto label_243528;
        case 0x24352cu: goto label_24352c;
        case 0x243530u: goto label_243530;
        case 0x243534u: goto label_243534;
        case 0x243538u: goto label_243538;
        case 0x24353cu: goto label_24353c;
        case 0x243540u: goto label_243540;
        case 0x243544u: goto label_243544;
        case 0x243548u: goto label_243548;
        case 0x24354cu: goto label_24354c;
        case 0x243550u: goto label_243550;
        case 0x243554u: goto label_243554;
        case 0x243558u: goto label_243558;
        case 0x24355cu: goto label_24355c;
        case 0x243560u: goto label_243560;
        case 0x243564u: goto label_243564;
        case 0x243568u: goto label_243568;
        case 0x24356cu: goto label_24356c;
        case 0x243570u: goto label_243570;
        case 0x243574u: goto label_243574;
        case 0x243578u: goto label_243578;
        case 0x24357cu: goto label_24357c;
        case 0x243580u: goto label_243580;
        case 0x243584u: goto label_243584;
        case 0x243588u: goto label_243588;
        case 0x24358cu: goto label_24358c;
        case 0x243590u: goto label_243590;
        case 0x243594u: goto label_243594;
        case 0x243598u: goto label_243598;
        case 0x24359cu: goto label_24359c;
        case 0x2435a0u: goto label_2435a0;
        case 0x2435a4u: goto label_2435a4;
        case 0x2435a8u: goto label_2435a8;
        case 0x2435acu: goto label_2435ac;
        case 0x2435b0u: goto label_2435b0;
        case 0x2435b4u: goto label_2435b4;
        case 0x2435b8u: goto label_2435b8;
        case 0x2435bcu: goto label_2435bc;
        case 0x2435c0u: goto label_2435c0;
        case 0x2435c4u: goto label_2435c4;
        case 0x2435c8u: goto label_2435c8;
        case 0x2435ccu: goto label_2435cc;
        case 0x2435d0u: goto label_2435d0;
        case 0x2435d4u: goto label_2435d4;
        case 0x2435d8u: goto label_2435d8;
        case 0x2435dcu: goto label_2435dc;
        case 0x2435e0u: goto label_2435e0;
        case 0x2435e4u: goto label_2435e4;
        case 0x2435e8u: goto label_2435e8;
        case 0x2435ecu: goto label_2435ec;
        case 0x2435f0u: goto label_2435f0;
        case 0x2435f4u: goto label_2435f4;
        case 0x2435f8u: goto label_2435f8;
        case 0x2435fcu: goto label_2435fc;
        case 0x243600u: goto label_243600;
        case 0x243604u: goto label_243604;
        case 0x243608u: goto label_243608;
        case 0x24360cu: goto label_24360c;
        case 0x243610u: goto label_243610;
        case 0x243614u: goto label_243614;
        case 0x243618u: goto label_243618;
        case 0x24361cu: goto label_24361c;
        case 0x243620u: goto label_243620;
        case 0x243624u: goto label_243624;
        case 0x243628u: goto label_243628;
        case 0x24362cu: goto label_24362c;
        case 0x243630u: goto label_243630;
        case 0x243634u: goto label_243634;
        case 0x243638u: goto label_243638;
        case 0x24363cu: goto label_24363c;
        case 0x243640u: goto label_243640;
        case 0x243644u: goto label_243644;
        case 0x243648u: goto label_243648;
        case 0x24364cu: goto label_24364c;
        case 0x243650u: goto label_243650;
        case 0x243654u: goto label_243654;
        case 0x243658u: goto label_243658;
        case 0x24365cu: goto label_24365c;
        case 0x243660u: goto label_243660;
        case 0x243664u: goto label_243664;
        case 0x243668u: goto label_243668;
        case 0x24366cu: goto label_24366c;
        case 0x243670u: goto label_243670;
        case 0x243674u: goto label_243674;
        case 0x243678u: goto label_243678;
        case 0x24367cu: goto label_24367c;
        case 0x243680u: goto label_243680;
        case 0x243684u: goto label_243684;
        case 0x243688u: goto label_243688;
        case 0x24368cu: goto label_24368c;
        case 0x243690u: goto label_243690;
        case 0x243694u: goto label_243694;
        case 0x243698u: goto label_243698;
        case 0x24369cu: goto label_24369c;
        case 0x2436a0u: goto label_2436a0;
        case 0x2436a4u: goto label_2436a4;
        case 0x2436a8u: goto label_2436a8;
        case 0x2436acu: goto label_2436ac;
        case 0x2436b0u: goto label_2436b0;
        case 0x2436b4u: goto label_2436b4;
        case 0x2436b8u: goto label_2436b8;
        case 0x2436bcu: goto label_2436bc;
        case 0x2436c0u: goto label_2436c0;
        case 0x2436c4u: goto label_2436c4;
        case 0x2436c8u: goto label_2436c8;
        case 0x2436ccu: goto label_2436cc;
        case 0x2436d0u: goto label_2436d0;
        case 0x2436d4u: goto label_2436d4;
        case 0x2436d8u: goto label_2436d8;
        case 0x2436dcu: goto label_2436dc;
        case 0x2436e0u: goto label_2436e0;
        case 0x2436e4u: goto label_2436e4;
        case 0x2436e8u: goto label_2436e8;
        case 0x2436ecu: goto label_2436ec;
        case 0x2436f0u: goto label_2436f0;
        case 0x2436f4u: goto label_2436f4;
        case 0x2436f8u: goto label_2436f8;
        case 0x2436fcu: goto label_2436fc;
        case 0x243700u: goto label_243700;
        case 0x243704u: goto label_243704;
        case 0x243708u: goto label_243708;
        case 0x24370cu: goto label_24370c;
        case 0x243710u: goto label_243710;
        case 0x243714u: goto label_243714;
        case 0x243718u: goto label_243718;
        case 0x24371cu: goto label_24371c;
        case 0x243720u: goto label_243720;
        case 0x243724u: goto label_243724;
        case 0x243728u: goto label_243728;
        case 0x24372cu: goto label_24372c;
        case 0x243730u: goto label_243730;
        case 0x243734u: goto label_243734;
        case 0x243738u: goto label_243738;
        case 0x24373cu: goto label_24373c;
        case 0x243740u: goto label_243740;
        case 0x243744u: goto label_243744;
        case 0x243748u: goto label_243748;
        case 0x24374cu: goto label_24374c;
        case 0x243750u: goto label_243750;
        case 0x243754u: goto label_243754;
        case 0x243758u: goto label_243758;
        case 0x24375cu: goto label_24375c;
        case 0x243760u: goto label_243760;
        case 0x243764u: goto label_243764;
        case 0x243768u: goto label_243768;
        case 0x24376cu: goto label_24376c;
        case 0x243770u: goto label_243770;
        case 0x243774u: goto label_243774;
        case 0x243778u: goto label_243778;
        case 0x24377cu: goto label_24377c;
        case 0x243780u: goto label_243780;
        case 0x243784u: goto label_243784;
        default: return;
    }

label_242fb8:
    // 0x242fb8: 0x4810  mfhi        $t1
    ctx->pc = 0x242fb8u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_242fbc:
    // 0x242fbc: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x242fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_242fc0:
    // 0x242fc0: 0x680018  mult        $zero, $v1, $t0
    ctx->pc = 0x242fc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_242fc4:
    // 0x242fc4: 0x91843  sra         $v1, $t1, 1
    ctx->pc = 0x242fc4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 9), 1));
label_242fc8:
    // 0x242fc8: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x242fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_242fcc:
    // 0x242fcc: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x242fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
label_242fd0:
    // 0x242fd0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x242fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_242fd4:
    // 0x242fd4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x242fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_242fd8:
    // 0x242fd8: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x242fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_242fdc:
    // 0x242fdc: 0xa60300a0  sh          $v1, 0xA0($s0)
    ctx->pc = 0x242fdcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 160), (uint16_t)GPR_U32(ctx, 3));
label_242fe0:
    // 0x242fe0: 0x1810  mfhi        $v1
    ctx->pc = 0x242fe0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_242fe4:
    // 0x242fe4: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x242fe4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_242fe8:
    // 0x242fe8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x242fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_242fec:
    // 0x242fec: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x242fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
label_242ff0:
    // 0x242ff0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x242ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_242ff4:
    // 0x242ff4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x242ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_242ff8:
    // 0x242ff8: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x242ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_242ffc:
    // 0x242ffc: 0xa60300a2  sh          $v1, 0xA2($s0)
    ctx->pc = 0x242ffcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 162), (uint16_t)GPR_U32(ctx, 3));
label_243000:
    // 0x243000: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x243000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
label_243004:
    // 0x243004: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x243004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_243008:
    // 0x243008: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x243008u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_24300c:
    // 0x24300c: 0x8c222390  lw          $v0, 0x2390($at)
    ctx->pc = 0x24300cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9104)));
label_243010:
    // 0x243010: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x243010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_243014:
    // 0x243014: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x243014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_243018:
    // 0x243018: 0xc070ae4  jal         func_1C2B90
label_24301c:
    if (ctx->pc == 0x24301Cu) {
        ctx->pc = 0x24301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243018u;
        // 0x24301c: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243020u;
        goto label_243020;
    }
    ctx->pc = 0x243018u;
    SET_GPR_U32(ctx, 31, 0x243020u);
    ctx->pc = 0x24301Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243018u;
    // 0x24301c: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2B90u;
    { ctx->pc = 0x1c2b90; return; }
    ctx->pc = 0x243020u;
label_243020:
    // 0x243020: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x243020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_243024:
    // 0x243024: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x243024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_243028:
    // 0x243028: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x243028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_24302c:
    // 0x24302c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24302cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243030:
    // 0x243030: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x243030u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243034:
    // 0x243034: 0xc066c72  jal         func_19B1C8
label_243038:
    if (ctx->pc == 0x243038u) {
        ctx->pc = 0x243038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243034u;
        // 0x243038: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24303Cu;
        goto label_24303c;
    }
    ctx->pc = 0x243034u;
    SET_GPR_U32(ctx, 31, 0x24303Cu);
    ctx->pc = 0x243038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243034u;
    // 0x243038: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x243034u, 0x24303Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24303Cu;
label_24303c:
    // 0x24303c: 0x8f8392f8  lw          $v1, -0x6D08($gp)
    ctx->pc = 0x24303cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_243040:
    // 0x243040: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x243040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_243044:
    // 0x243044: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x243044u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_243048:
    // 0x243048: 0x8c242380  lw          $a0, 0x2380($at)
    ctx->pc = 0x243048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9088)));
label_24304c:
    // 0x24304c: 0x148001d3  bnez        $a0, . + 4 + (0x1D3 << 2)
label_243050:
    if (ctx->pc == 0x243050u) {
        ctx->pc = 0x243050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24304Cu;
        // 0x243050: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243054u;
        goto label_243054;
    }
    ctx->pc = 0x24304Cu;
    {
        const bool branch_taken_0x24304c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x243050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24304Cu;
        // 0x243050: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24304c) {
            ctx->pc = 0x24379Cu;
            { ctx->pc = 0x24379c; return; }
        }
    }
    ctx->pc = 0x243054u;
label_243054:
    // 0x243054: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x243054u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_243058:
    // 0x243058: 0x8c242394  lw          $a0, 0x2394($at)
    ctx->pc = 0x243058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9108)));
label_24305c:
    // 0x24305c: 0x1480010c  bnez        $a0, . + 4 + (0x10C << 2)
label_243060:
    if (ctx->pc == 0x243060u) {
        ctx->pc = 0x243064u;
        goto label_243064;
    }
    ctx->pc = 0x24305Cu;
    {
        const bool branch_taken_0x24305c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x24305c) {
            ctx->pc = 0x243490u;
            goto label_243490;
        }
    }
    ctx->pc = 0x243064u;
label_243064:
    // 0x243064: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x243064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_243068:
    // 0x243068: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x243068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
label_24306c:
    // 0x24306c: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x24306cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_243070:
    // 0x243070: 0x2484c990  addiu       $a0, $a0, -0x3670
    ctx->pc = 0x243070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953360));
label_243074:
    // 0x243074: 0x8c26238c  lw          $a2, 0x238C($at)
    ctx->pc = 0x243074u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9100)));
label_243078:
    // 0x243078: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x243078u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_24307c:
    // 0x24307c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24307cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_243080:
    // 0x243080: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x243080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_243084:
    // 0x243084: 0x34214a30  ori         $at, $at, 0x4A30
    ctx->pc = 0x243084u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18992);
label_243088:
    // 0x243088: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x243088u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_24308c:
    // 0x24308c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x24308cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_243090:
    // 0x243090: 0x812021  addu        $a0, $a0, $at
    ctx->pc = 0x243090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_243094:
    // 0x243094: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x243094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
label_243098:
    // 0x243098: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x243098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_24309c:
    // 0x24309c: 0x9084000b  lbu         $a0, 0xB($a0)
    ctx->pc = 0x24309cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
label_2430a0:
    // 0x2430a0: 0x2881000f  slti        $at, $a0, 0xF
    ctx->pc = 0x2430a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)15) ? 1 : 0);
label_2430a4:
    // 0x2430a4: 0x102001bd  beqz        $at, . + 4 + (0x1BD << 2)
label_2430a8:
    if (ctx->pc == 0x2430A8u) {
        ctx->pc = 0x2430A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2430A4u;
        // 0x2430a8: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2430ACu;
        goto label_2430ac;
    }
    ctx->pc = 0x2430A4u;
    {
        const bool branch_taken_0x2430a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2430A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2430A4u;
        // 0x2430a8: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2430a4) {
            ctx->pc = 0x24379Cu;
            { ctx->pc = 0x24379c; return; }
        }
    }
    ctx->pc = 0x2430ACu;
label_2430ac:
    // 0x2430ac: 0x240648a0  addiu       $a2, $zero, 0x48A0
    ctx->pc = 0x2430acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18592));
label_2430b0:
    // 0x2430b0: 0x8c2b3ffc  lw          $t3, 0x3FFC($at)
    ctx->pc = 0x2430b0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_2430b4:
    // 0x2430b4: 0x24170080  addiu       $s7, $zero, 0x80
    ctx->pc = 0x2430b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2430b8:
    // 0x2430b8: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x2430b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_2430bc:
    // 0x2430bc: 0x2405019c  addiu       $a1, $zero, 0x19C
    ctx->pc = 0x2430bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 412));
label_2430c0:
    // 0x2430c0: 0x240700d0  addiu       $a3, $zero, 0xD0
    ctx->pc = 0x2430c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_2430c4:
    // 0x2430c4: 0x24080118  addiu       $t0, $zero, 0x118
    ctx->pc = 0x2430c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
label_2430c8:
    // 0x2430c8: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x2430c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2430cc:
    // 0x2430cc: 0x240a0050  addiu       $t2, $zero, 0x50
    ctx->pc = 0x2430ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2430d0:
    // 0x2430d0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2430d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2430d4:
    // 0x2430d4: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2430d4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_2430d8:
    // 0x2430d8: 0x8c2423ac  lw          $a0, 0x23AC($at)
    ctx->pc = 0x2430d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9132)));
label_2430dc:
    // 0x2430dc: 0x1665818  mult        $t3, $t3, $a2
    ctx->pc = 0x2430dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_2430e0:
    // 0x2430e0: 0x44b80a  movz        $s7, $v0, $a0
    ctx->pc = 0x2430e0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 2));
label_2430e4:
    // 0x2430e4: 0x6b1021  addu        $v0, $v1, $t3
    ctx->pc = 0x2430e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_2430e8:
    // 0x2430e8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2430e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2430ec:
    // 0x2430ec: 0x24503020  addiu       $s0, $v0, 0x3020
    ctx->pc = 0x2430ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12320));
label_2430f0:
    // 0x2430f0: 0xc07c17c  jal         func_1F05F0
label_2430f4:
    if (ctx->pc == 0x2430F4u) {
        ctx->pc = 0x2430F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2430F0u;
        // 0x2430f4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2430F8u;
        goto label_2430f8;
    }
    ctx->pc = 0x2430F0u;
    SET_GPR_U32(ctx, 31, 0x2430F8u);
    ctx->pc = 0x2430F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2430F0u;
    // 0x2430f4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F05F0u;
    { ctx->pc = 0x1f05f0; return; }
    ctx->pc = 0x2430F8u;
label_2430f8:
    // 0x2430f8: 0x34028640  ori         $v0, $zero, 0x8640
    ctx->pc = 0x2430f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34368);
label_2430fc:
    // 0x2430fc: 0x26e40008  addiu       $a0, $s7, 0x8
    ctx->pc = 0x2430fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
label_243100:
    // 0x243100: 0xa6020400  sh          $v0, 0x400($s0)
    ctx->pc = 0x243100u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1024), (uint16_t)GPR_U32(ctx, 2));
label_243104:
    // 0x243104: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x243104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_243108:
    // 0x243108: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x243108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_24310c:
    // 0x24310c: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x24310cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_243110:
    // 0x243110: 0x24820080  addiu       $v0, $a0, 0x80
    ctx->pc = 0x243110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_243114:
    // 0x243114: 0xa6030402  sh          $v1, 0x402($s0)
    ctx->pc = 0x243114u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1026), (uint16_t)GPR_U32(ctx, 3));
label_243118:
    // 0x243118: 0x3404fe00  ori         $a0, $zero, 0xFE00
    ctx->pc = 0x243118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_24311c:
    // 0x24311c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x24311cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_243120:
    // 0x243120: 0xae040404  sw          $a0, 0x404($s0)
    ctx->pc = 0x243120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 4));
label_243124:
    // 0x243124: 0x34039240  ori         $v1, $zero, 0x9240
    ctx->pc = 0x243124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37440);
label_243128:
    // 0x243128: 0xa6030410  sh          $v1, 0x410($s0)
    ctx->pc = 0x243128u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1040), (uint16_t)GPR_U32(ctx, 3));
label_24312c:
    // 0x24312c: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x24312cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_243130:
    // 0x243130: 0xa6020412  sh          $v0, 0x412($s0)
    ctx->pc = 0x243130u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1042), (uint16_t)GPR_U32(ctx, 2));
label_243134:
    // 0x243134: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x243134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_243138:
    // 0x243138: 0xae040414  sw          $a0, 0x414($s0)
    ctx->pc = 0x243138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1044), GPR_U32(ctx, 4));
label_24313c:
    // 0x24313c: 0x24633330  addiu       $v1, $v1, 0x3330
    ctx->pc = 0x24313cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13104));
label_243140:
    // 0x243140: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x243140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_243144:
    // 0x243144: 0x9042000b  lbu         $v0, 0xB($v0)
    ctx->pc = 0x243144u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
label_243148:
    // 0x243148: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x243148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24314c:
    // 0x24314c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x24314cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_243150:
    // 0x243150: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x243150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_243154:
    // 0x243154: 0xc055148  jal         func_154520
label_243158:
    if (ctx->pc == 0x243158u) {
        ctx->pc = 0x243158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243154u;
        // 0x243158: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24315Cu;
        goto label_24315c;
    }
    ctx->pc = 0x243154u;
    SET_GPR_U32(ctx, 31, 0x24315Cu);
    ctx->pc = 0x243158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243154u;
    // 0x243158: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154520u, 0x243154u, 0x24315Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24315Cu;
label_24315c:
    // 0x24315c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x24315cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_243160:
    // 0x243160: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x243160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_243164:
    // 0x243164: 0x26e90098  addiu       $t1, $s7, 0x98
    ctx->pc = 0x243164u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 23), 152));
label_243168:
    // 0x243168: 0x340afe00  ori         $t2, $zero, 0xFE00
    ctx->pc = 0x243168u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_24316c:
    // 0x24316c: 0xe2280a  movz        $a1, $a3, $v0
    ctx->pc = 0x24316cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
label_243170:
    // 0x243170: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x243170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_243174:
    // 0x243174: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x243174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_243178:
    // 0x243178: 0xc054e5c  jal         func_153970
label_24317c:
    if (ctx->pc == 0x24317Cu) {
        ctx->pc = 0x24317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243178u;
        // 0x24317c: 0x240801ac  addiu       $t0, $zero, 0x1AC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 428));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243180u;
        goto label_243180;
    }
    ctx->pc = 0x243178u;
    SET_GPR_U32(ctx, 31, 0x243180u);
    ctx->pc = 0x24317Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243178u;
    // 0x24317c: 0x240801ac  addiu       $t0, $zero, 0x1AC (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 428));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x243178u, 0x243180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243180u;
label_243180:
    // 0x243180: 0xc054e70  jal         func_1539C0
label_243184:
    if (ctx->pc == 0x243184u) {
        ctx->pc = 0x243184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243180u;
        // 0x243184: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243188u;
        goto label_243188;
    }
    ctx->pc = 0x243180u;
    SET_GPR_U32(ctx, 31, 0x243188u);
    ctx->pc = 0x243184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243180u;
    // 0x243184: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539C0u, 0x243180u, 0x243188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243188u;
label_243188:
    // 0x243188: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x243188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_24318c:
    // 0x24318c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24318cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_243190:
    // 0x243190: 0x26040420  addiu       $a0, $s0, 0x420
    ctx->pc = 0x243190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1056));
label_243194:
    // 0x243194: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x243194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_243198:
    // 0x243198: 0x9043000b  lbu         $v1, 0xB($v0)
    ctx->pc = 0x243198u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
label_24319c:
    // 0x24319c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x24319cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_2431a0:
    // 0x2431a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2431a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2431a4:
    // 0x2431a4: 0x24423330  addiu       $v0, $v0, 0x3330
    ctx->pc = 0x2431a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13104));
label_2431a8:
    // 0x2431a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2431a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2431ac:
    // 0x2431ac: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x2431acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2431b0:
    // 0x2431b0: 0xc054e74  jal         func_1539D0
label_2431b4:
    if (ctx->pc == 0x2431B4u) {
        ctx->pc = 0x2431B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2431B0u;
        // 0x2431b4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2431B8u;
        goto label_2431b8;
    }
    ctx->pc = 0x2431B0u;
    SET_GPR_U32(ctx, 31, 0x2431B8u);
    ctx->pc = 0x2431B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2431B0u;
    // 0x2431b4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x2431B0u, 0x2431B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2431B8u;
label_2431b8:
    // 0x2431b8: 0x34028940  ori         $v0, $zero, 0x8940
    ctx->pc = 0x2431b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35136);
label_2431bc:
    // 0x2431bc: 0x26e400b4  addiu       $a0, $s7, 0xB4
    ctx->pc = 0x2431bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 180));
label_2431c0:
    // 0x2431c0: 0xa6021340  sh          $v0, 0x1340($s0)
    ctx->pc = 0x2431c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4928), (uint16_t)GPR_U32(ctx, 2));
label_2431c4:
    // 0x2431c4: 0x3405fe00  ori         $a1, $zero, 0xFE00
    ctx->pc = 0x2431c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_2431c8:
    // 0x2431c8: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x2431c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2431cc:
    // 0x2431cc: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x2431ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_2431d0:
    // 0x2431d0: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x2431d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_2431d4:
    // 0x2431d4: 0xa6031342  sh          $v1, 0x1342($s0)
    ctx->pc = 0x2431d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4930), (uint16_t)GPR_U32(ctx, 3));
label_2431d8:
    // 0x2431d8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2431d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2431dc:
    // 0x2431dc: 0xae051344  sw          $a1, 0x1344($s0)
    ctx->pc = 0x2431dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4932), GPR_U32(ctx, 5));
label_2431e0:
    // 0x2431e0: 0x34038ec0  ori         $v1, $zero, 0x8EC0
    ctx->pc = 0x2431e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36544);
label_2431e4:
    // 0x2431e4: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x2431e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_2431e8:
    // 0x2431e8: 0xa6031350  sh          $v1, 0x1350($s0)
    ctx->pc = 0x2431e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4944), (uint16_t)GPR_U32(ctx, 3));
label_2431ec:
    // 0x2431ec: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2431ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2431f0:
    // 0x2431f0: 0xa6021352  sh          $v0, 0x1352($s0)
    ctx->pc = 0x2431f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4946), (uint16_t)GPR_U32(ctx, 2));
label_2431f4:
    // 0x2431f4: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x2431f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_2431f8:
    // 0x2431f8: 0xae051354  sw          $a1, 0x1354($s0)
    ctx->pc = 0x2431f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4948), GPR_U32(ctx, 5));
label_2431fc:
    // 0x2431fc: 0x24635370  addiu       $v1, $v1, 0x5370
    ctx->pc = 0x2431fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21360));
label_243200:
    // 0x243200: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x243200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_243204:
    // 0x243204: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x243204u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_243208:
    // 0x243208: 0x9042000b  lbu         $v0, 0xB($v0)
    ctx->pc = 0x243208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
label_24320c:
    // 0x24320c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x24320cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_243210:
    // 0x243210: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x243210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_243214:
    // 0x243214: 0x9046003b  lbu         $a2, 0x3B($v0)
    ctx->pc = 0x243214u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 59)));
label_243218:
    // 0x243218: 0xc08f20e  jal         func_23C838
label_24321c:
    if (ctx->pc == 0x24321Cu) {
        ctx->pc = 0x24321Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243218u;
        // 0x24321c: 0x24a5ea88  addiu       $a1, $a1, -0x1578 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243220u;
        goto label_243220;
    }
    ctx->pc = 0x243218u;
    SET_GPR_U32(ctx, 31, 0x243220u);
    ctx->pc = 0x24321Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243218u;
    // 0x24321c: 0x24a5ea88  addiu       $a1, $a1, -0x1578 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x243220u;
label_243220:
    // 0x243220: 0x26e700b0  addiu       $a3, $s7, 0xB0
    ctx->pc = 0x243220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 176));
label_243224:
    // 0x243224: 0x26041360  addiu       $a0, $s0, 0x1360
    ctx->pc = 0x243224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4960));
label_243228:
    // 0x243228: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x243228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24322c:
    // 0x24322c: 0x24060234  addiu       $a2, $zero, 0x234
    ctx->pc = 0x24322cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 564));
label_243230:
    // 0x243230: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x243230u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_243234:
    // 0x243234: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x243234u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_243238:
    // 0x243238: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x243238u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_24323c:
    // 0x24323c: 0xc0708ac  jal         func_1C22B0
label_243240:
    if (ctx->pc == 0x243240u) {
        ctx->pc = 0x243240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24323Cu;
        // 0x243240: 0x27ab00d0  addiu       $t3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243244u;
        goto label_243244;
    }
    ctx->pc = 0x24323Cu;
    SET_GPR_U32(ctx, 31, 0x243244u);
    ctx->pc = 0x243240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24323Cu;
    // 0x243240: 0x27ab00d0  addiu       $t3, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x243244u;
label_243244:
    // 0x243244: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x243244u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243248:
    // 0x243248: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x243248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_24324c:
    // 0x24324c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24324cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243250:
    // 0x243250: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x243250u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243254:
    // 0x243254: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x243254u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243258:
    // 0x243258: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x243258u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24325c:
    // 0x24325c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x24325cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_243260:
    // 0x243260: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x243260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_243264:
    // 0x243264: 0x62a821  addu        $s5, $v1, $v0
    ctx->pc = 0x243264u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_243268:
    // 0x243268: 0x92a30000  lbu         $v1, 0x0($s5)
    ctx->pc = 0x243268u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_24326c:
    // 0x24326c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x24326cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_243270:
    // 0x243270: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
label_243274:
    if (ctx->pc == 0x243274u) {
        ctx->pc = 0x243274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243270u;
        // 0x243274: 0x2114021  addu        $t0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243278u;
        goto label_243278;
    }
    ctx->pc = 0x243270u;
    {
        const bool branch_taken_0x243270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x243274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243270u;
        // 0x243274: 0x2114021  addu        $t0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243270) {
            ctx->pc = 0x243310u;
            goto label_243310;
        }
    }
    ctx->pc = 0x243278u;
label_243278:
    // 0x243278: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x243278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_24327c:
    // 0x24327c: 0x34039400  ori         $v1, $zero, 0x9400
    ctx->pc = 0x24327cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37888);
label_243280:
    // 0x243280: 0xa10015b3  sb          $zero, 0x15B3($t0)
    ctx->pc = 0x243280u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 5555), (uint8_t)GPR_U32(ctx, 0));
label_243284:
    // 0x243284: 0x34028700  ori         $v0, $zero, 0x8700
    ctx->pc = 0x243284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
label_243288:
    // 0x243288: 0xa50315c0  sh          $v1, 0x15C0($t0)
    ctx->pc = 0x243288u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5568), (uint16_t)GPR_U32(ctx, 3));
label_24328c:
    // 0x24328c: 0x340afe00  ori         $t2, $zero, 0xFE00
    ctx->pc = 0x24328cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_243290:
    // 0x243290: 0xa50215c2  sh          $v0, 0x15C2($t0)
    ctx->pc = 0x243290u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5570), (uint16_t)GPR_U32(ctx, 2));
label_243294:
    // 0x243294: 0xad0a15c4  sw          $t2, 0x15C4($t0)
    ctx->pc = 0x243294u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 5572), GPR_U32(ctx, 10));
label_243298:
    // 0x243298: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x243298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_24329c:
    // 0x24329c: 0xa50315d0  sh          $v1, 0x15D0($t0)
    ctx->pc = 0x24329cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5584), (uint16_t)GPR_U32(ctx, 3));
label_2432a0:
    // 0x2432a0: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x2432a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_2432a4:
    // 0x2432a4: 0xa50215d2  sh          $v0, 0x15D2($t0)
    ctx->pc = 0x2432a4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5586), (uint16_t)GPR_U32(ctx, 2));
label_2432a8:
    // 0x2432a8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2432a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2432ac:
    // 0x2432ac: 0xad0a15d4  sw          $t2, 0x15D4($t0)
    ctx->pc = 0x2432acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 5588), GPR_U32(ctx, 10));
label_2432b0:
    // 0x2432b0: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x2432b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_2432b4:
    // 0x2432b4: 0xc054e5c  jal         func_153970
label_2432b8:
    if (ctx->pc == 0x2432B8u) {
        ctx->pc = 0x2432B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2432B4u;
        // 0x2432b8: 0x24080280  addiu       $t0, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2432BCu;
        goto label_2432bc;
    }
    ctx->pc = 0x2432B4u;
    SET_GPR_U32(ctx, 31, 0x2432BCu);
    ctx->pc = 0x2432B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2432B4u;
    // 0x2432b8: 0x24080280  addiu       $t0, $zero, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x2432B4u, 0x2432BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2432BCu;
label_2432bc:
    // 0x2432bc: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x2432bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_2432c0:
    // 0x2432c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2432c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2432c4:
    // 0x2432c4: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x2432c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_2432c8:
    // 0x2432c8: 0x24441720  addiu       $a0, $v0, 0x1720
    ctx->pc = 0x2432c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5920));
label_2432cc:
    // 0x2432cc: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x2432ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2432d0:
    // 0x2432d0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2432d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2432d4:
    // 0x2432d4: 0xc054e74  jal         func_1539D0
label_2432d8:
    if (ctx->pc == 0x2432D8u) {
        ctx->pc = 0x2432D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2432D4u;
        // 0x2432d8: 0x2508ea80  addiu       $t0, $t0, -0x1580 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2432DCu;
        goto label_2432dc;
    }
    ctx->pc = 0x2432D4u;
    SET_GPR_U32(ctx, 31, 0x2432DCu);
    ctx->pc = 0x2432D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2432D4u;
    // 0x2432d8: 0x2508ea80  addiu       $t0, $t0, -0x1580 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x2432D4u, 0x2432DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2432DCu;
label_2432dc:
    // 0x2432dc: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x2432dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_2432e0:
    // 0x2432e0: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x2432e0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_2432e4:
    // 0x2432e4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2432e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2432e8:
    // 0x2432e8: 0x24444300  addiu       $a0, $v0, 0x4300
    ctx->pc = 0x2432e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 17152));
label_2432ec:
    // 0x2432ec: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x2432ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2432f0:
    // 0x2432f0: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x2432f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_2432f4:
    // 0x2432f4: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x2432f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_2432f8:
    // 0x2432f8: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x2432f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2432fc:
    // 0x2432fc: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x2432fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_243300:
    // 0x243300: 0xc0708ac  jal         func_1C22B0
label_243304:
    if (ctx->pc == 0x243304u) {
        ctx->pc = 0x243304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243300u;
        // 0x243304: 0x256bea80  addiu       $t3, $t3, -0x1580 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294961792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243308u;
        goto label_243308;
    }
    ctx->pc = 0x243300u;
    SET_GPR_U32(ctx, 31, 0x243308u);
    ctx->pc = 0x243304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243300u;
    // 0x243304: 0x256bea80  addiu       $t3, $t3, -0x1580 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294961792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x243308u;
label_243308:
    // 0x243308: 0x1000004a  b           . + 4 + (0x4A << 2)
label_24330c:
    if (ctx->pc == 0x24330Cu) {
        ctx->pc = 0x243310u;
        goto label_243310;
    }
    ctx->pc = 0x243308u;
    {
        const bool branch_taken_0x243308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243308) {
            ctx->pc = 0x243434u;
            goto label_243434;
        }
    }
    ctx->pc = 0x243310u;
label_243310:
    // 0x243310: 0x26e200cc  addiu       $v0, $s7, 0xCC
    ctx->pc = 0x243310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 204));
label_243314:
    // 0x243314: 0x542021  addu        $a0, $v0, $s4
    ctx->pc = 0x243314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_243318:
    // 0x243318: 0x34038680  ori         $v1, $zero, 0x8680
    ctx->pc = 0x243318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34432);
label_24331c:
    // 0x24331c: 0x2113821  addu        $a3, $s0, $s1
    ctx->pc = 0x24331cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_243320:
    // 0x243320: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x243320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_243324:
    // 0x243324: 0xa4e315c0  sh          $v1, 0x15C0($a3)
    ctx->pc = 0x243324u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 5568), (uint16_t)GPR_U32(ctx, 3));
label_243328:
    // 0x243328: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x243328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_24332c:
    // 0x24332c: 0xa4e215c2  sh          $v0, 0x15C2($a3)
    ctx->pc = 0x24332cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 5570), (uint16_t)GPR_U32(ctx, 2));
label_243330:
    // 0x243330: 0x3406fe00  ori         $a2, $zero, 0xFE00
    ctx->pc = 0x243330u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_243334:
    // 0x243334: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x243334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_243338:
    // 0x243338: 0xace615c4  sw          $a2, 0x15C4($a3)
    ctx->pc = 0x243338u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 5572), GPR_U32(ctx, 6));
label_24333c:
    // 0x24333c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x24333cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_243340:
    // 0x243340: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x243340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_243344:
    // 0x243344: 0x24447900  addiu       $a0, $v0, 0x7900
    ctx->pc = 0x243344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_243348:
    // 0x243348: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x243348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_24334c:
    // 0x24334c: 0x34028780  ori         $v0, $zero, 0x8780
    ctx->pc = 0x24334cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34688);
label_243350:
    // 0x243350: 0xa4e215d0  sh          $v0, 0x15D0($a3)
    ctx->pc = 0x243350u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 5584), (uint16_t)GPR_U32(ctx, 2));
label_243354:
    // 0x243354: 0xa4e415d2  sh          $a0, 0x15D2($a3)
    ctx->pc = 0x243354u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 5586), (uint16_t)GPR_U32(ctx, 4));
label_243358:
    // 0x243358: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x243358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_24335c:
    // 0x24335c: 0xace615d4  sw          $a2, 0x15D4($a3)
    ctx->pc = 0x24335cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 5588), GPR_U32(ctx, 6));
label_243360:
    // 0x243360: 0x24423050  addiu       $v0, $v0, 0x3050
    ctx->pc = 0x243360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12368));
label_243364:
    // 0x243364: 0xa0e315b3  sb          $v1, 0x15B3($a3)
    ctx->pc = 0x243364u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5555), (uint8_t)GPR_U32(ctx, 3));
label_243368:
    // 0x243368: 0x92a30000  lbu         $v1, 0x0($s5)
    ctx->pc = 0x243368u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_24336c:
    // 0x24336c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24336cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_243370:
    // 0x243370: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x243370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_243374:
    // 0x243374: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x243374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_243378:
    // 0x243378: 0xc055148  jal         func_154520
label_24337c:
    if (ctx->pc == 0x24337Cu) {
        ctx->pc = 0x24337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243378u;
        // 0x24337c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243380u;
        goto label_243380;
    }
    ctx->pc = 0x243378u;
    SET_GPR_U32(ctx, 31, 0x243380u);
    ctx->pc = 0x24337Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243378u;
    // 0x24337c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154520u, 0x243378u, 0x243380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243380u;
label_243380:
    // 0x243380: 0x26e300c8  addiu       $v1, $s7, 0xC8
    ctx->pc = 0x243380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 200));
label_243384:
    // 0x243384: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x243384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_243388:
    // 0x243388: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x243388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_24338c:
    // 0x24338c: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x24338cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_243390:
    // 0x243390: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x243390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_243394:
    // 0x243394: 0xe2280a  movz        $a1, $a3, $v0
    ctx->pc = 0x243394u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
label_243398:
    // 0x243398: 0x8fa900c0  lw          $t1, 0xC0($sp)
    ctx->pc = 0x243398u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_24339c:
    // 0x24339c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x24339cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2433a0:
    // 0x2433a0: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x2433a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_2433a4:
    // 0x2433a4: 0x240801bc  addiu       $t0, $zero, 0x1BC
    ctx->pc = 0x2433a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 444));
label_2433a8:
    // 0x2433a8: 0xc054e5c  jal         func_153970
label_2433ac:
    if (ctx->pc == 0x2433ACu) {
        ctx->pc = 0x2433ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2433A8u;
        // 0x2433ac: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2433B0u;
        goto label_2433b0;
    }
    ctx->pc = 0x2433A8u;
    SET_GPR_U32(ctx, 31, 0x2433B0u);
    ctx->pc = 0x2433ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2433A8u;
    // 0x2433ac: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x2433A8u, 0x2433B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2433B0u;
label_2433b0:
    // 0x2433b0: 0x92a30000  lbu         $v1, 0x0($s5)
    ctx->pc = 0x2433b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_2433b4:
    // 0x2433b4: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x2433b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_2433b8:
    // 0x2433b8: 0x24441720  addiu       $a0, $v0, 0x1720
    ctx->pc = 0x2433b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5920));
label_2433bc:
    // 0x2433bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2433bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2433c0:
    // 0x2433c0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x2433c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_2433c4:
    // 0x2433c4: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x2433c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2433c8:
    // 0x2433c8: 0x24423050  addiu       $v0, $v0, 0x3050
    ctx->pc = 0x2433c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12368));
label_2433cc:
    // 0x2433cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2433ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2433d0:
    // 0x2433d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2433d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2433d4:
    // 0x2433d4: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x2433d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2433d8:
    // 0x2433d8: 0xc054e74  jal         func_1539D0
label_2433dc:
    if (ctx->pc == 0x2433DCu) {
        ctx->pc = 0x2433DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2433D8u;
        // 0x2433dc: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2433E0u;
        goto label_2433e0;
    }
    ctx->pc = 0x2433D8u;
    SET_GPR_U32(ctx, 31, 0x2433E0u);
    ctx->pc = 0x2433DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2433D8u;
    // 0x2433dc: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x2433D8u, 0x2433E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2433E0u;
label_2433e0:
    // 0x2433e0: 0x92a60001  lbu         $a2, 0x1($s5)
    ctx->pc = 0x2433e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
label_2433e4:
    // 0x2433e4: 0x28c10063  slti        $at, $a2, 0x63
    ctx->pc = 0x2433e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)99) ? 1 : 0);
label_2433e8:
    // 0x2433e8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2433ec:
    if (ctx->pc == 0x2433ECu) {
        ctx->pc = 0x2433F0u;
        goto label_2433f0;
    }
    ctx->pc = 0x2433E8u;
    {
        const bool branch_taken_0x2433e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2433e8) {
            ctx->pc = 0x2433F8u;
            goto label_2433f8;
        }
    }
    ctx->pc = 0x2433F0u;
label_2433f0:
    // 0x2433f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2433f4:
    if (ctx->pc == 0x2433F4u) {
        ctx->pc = 0x2433F8u;
        goto label_2433f8;
    }
    ctx->pc = 0x2433F0u;
    {
        const bool branch_taken_0x2433f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2433f0) {
            ctx->pc = 0x2433FCu;
            goto label_2433fc;
        }
    }
    ctx->pc = 0x2433F8u;
label_2433f8:
    // 0x2433f8: 0x24060063  addiu       $a2, $zero, 0x63
    ctx->pc = 0x2433f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_2433fc:
    // 0x2433fc: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2433fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_243400:
    // 0x243400: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x243400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_243404:
    // 0x243404: 0xc08f20e  jal         func_23C838
label_243408:
    if (ctx->pc == 0x243408u) {
        ctx->pc = 0x243408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243404u;
        // 0x243408: 0x24a5ea88  addiu       $a1, $a1, -0x1578 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24340Cu;
        goto label_24340c;
    }
    ctx->pc = 0x243404u;
    SET_GPR_U32(ctx, 31, 0x24340Cu);
    ctx->pc = 0x243408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243404u;
    // 0x243408: 0x24a5ea88  addiu       $a1, $a1, -0x1578 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x24340Cu;
label_24340c:
    // 0x24340c: 0x8fa700c0  lw          $a3, 0xC0($sp)
    ctx->pc = 0x24340cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_243410:
    // 0x243410: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x243410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_243414:
    // 0x243414: 0x24444300  addiu       $a0, $v0, 0x4300
    ctx->pc = 0x243414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 17152));
label_243418:
    // 0x243418: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x243418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24341c:
    // 0x24341c: 0x24060234  addiu       $a2, $zero, 0x234
    ctx->pc = 0x24341cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 564));
label_243420:
    // 0x243420: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x243420u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_243424:
    // 0x243424: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x243424u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_243428:
    // 0x243428: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x243428u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_24342c:
    // 0x24342c: 0xc0708ac  jal         func_1C22B0
label_243430:
    if (ctx->pc == 0x243430u) {
        ctx->pc = 0x243430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24342Cu;
        // 0x243430: 0x27ab00d0  addiu       $t3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243434u;
        goto label_243434;
    }
    ctx->pc = 0x24342Cu;
    SET_GPR_U32(ctx, 31, 0x243434u);
    ctx->pc = 0x243430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24342Cu;
    // 0x243430: 0x27ab00d0  addiu       $t3, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x243434u;
label_243434:
    // 0x243434: 0x0  nop
    ctx->pc = 0x243434u;
    // NOP
label_243438:
    // 0x243438: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x243438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_24343c:
    // 0x24343c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x24343cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_243440:
    // 0x243440: 0x263100a0  addiu       $s1, $s1, 0xA0
    ctx->pc = 0x243440u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_243444:
    // 0x243444: 0x26520ea0  addiu       $s2, $s2, 0xEA0
    ctx->pc = 0x243444u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3744));
label_243448:
    // 0x243448: 0x267301e0  addiu       $s3, $s3, 0x1E0
    ctx->pc = 0x243448u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 480));
label_24344c:
    // 0x24344c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x24344cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_243450:
    // 0x243450: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x243450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_243454:
    // 0x243454: 0x2bc20003  slti        $v0, $fp, 0x3
    ctx->pc = 0x243454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)3) ? 1 : 0);
label_243458:
    // 0x243458: 0x1440ff80  bnez        $v0, . + 4 + (-0x80 << 2)
label_24345c:
    if (ctx->pc == 0x24345Cu) {
        ctx->pc = 0x24345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243458u;
        // 0x24345c: 0x26940018  addiu       $s4, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243460u;
        goto label_243460;
    }
    ctx->pc = 0x243458u;
    {
        const bool branch_taken_0x243458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243458u;
        // 0x24345c: 0x26940018  addiu       $s4, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243458) {
            ctx->pc = 0x24325Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24325c;
        }
    }
    ctx->pc = 0x243460u;
label_243460:
    // 0x243460: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x243460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_243464:
    // 0x243464: 0xc070a34  jal         func_1C28D0
label_243468:
    if (ctx->pc == 0x243468u) {
        ctx->pc = 0x243468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243464u;
        // 0x243468: 0x9044000b  lbu         $a0, 0xB($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24346Cu;
        goto label_24346c;
    }
    ctx->pc = 0x243464u;
    SET_GPR_U32(ctx, 31, 0x24346Cu);
    ctx->pc = 0x243468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243464u;
    // 0x243468: 0x9044000b  lbu         $a0, 0xB($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28D0u;
    { ctx->pc = 0x1c28d0; return; }
    ctx->pc = 0x24346Cu;
label_24346c:
    // 0x24346c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x24346cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_243470:
    // 0x243470: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x243470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_243474:
    // 0x243474: 0x2406048a  addiu       $a2, $zero, 0x48A
    ctx->pc = 0x243474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1162));
label_243478:
    // 0x243478: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x243478u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24347c:
    // 0x24347c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24347cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243480:
    // 0x243480: 0xc066c72  jal         func_19B1C8
label_243484:
    if (ctx->pc == 0x243484u) {
        ctx->pc = 0x243484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243480u;
        // 0x243484: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243488u;
        goto label_243488;
    }
    ctx->pc = 0x243480u;
    SET_GPR_U32(ctx, 31, 0x243488u);
    ctx->pc = 0x243484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243480u;
    // 0x243484: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x243480u, 0x243488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243488u;
label_243488:
    // 0x243488: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_24348c:
    if (ctx->pc == 0x24348Cu) {
        ctx->pc = 0x24348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243488u;
        // 0x24348c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243490u;
        goto label_243490;
    }
    ctx->pc = 0x243488u;
    {
        const bool branch_taken_0x243488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243488u;
        // 0x24348c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243488) {
            ctx->pc = 0x2437A0u;
            { ctx->pc = 0x2437a0; return; }
        }
    }
    ctx->pc = 0x243490u;
label_243490:
    // 0x243490: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x243490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_243494:
    // 0x243494: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x243494u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_243498:
    // 0x243498: 0x8c242398  lw          $a0, 0x2398($at)
    ctx->pc = 0x243498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9112)));
label_24349c:
    // 0x24349c: 0x1480000e  bnez        $a0, . + 4 + (0xE << 2)
label_2434a0:
    if (ctx->pc == 0x2434A0u) {
        ctx->pc = 0x2434A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24349Cu;
        // 0x2434a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2434A4u;
        goto label_2434a4;
    }
    ctx->pc = 0x24349Cu;
    {
        const bool branch_taken_0x24349c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2434A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24349Cu;
        // 0x2434a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24349c) {
            ctx->pc = 0x2434D8u;
            goto label_2434d8;
        }
    }
    ctx->pc = 0x2434A4u;
label_2434a4:
    // 0x2434a4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2434a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2434a8:
    // 0x2434a8: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2434a8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_2434ac:
    // 0x2434ac: 0x8c24239c  lw          $a0, 0x239C($at)
    ctx->pc = 0x2434acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9116)));
label_2434b0:
    // 0x2434b0: 0x2881000a  slti        $at, $a0, 0xA
    ctx->pc = 0x2434b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
label_2434b4:
    // 0x2434b4: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_2434b8:
    if (ctx->pc == 0x2434B8u) {
        ctx->pc = 0x2434B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2434B4u;
        // 0x2434b8: 0x42840  sll         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2434BCu;
        goto label_2434bc;
    }
    ctx->pc = 0x2434B4u;
    {
        const bool branch_taken_0x2434b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2434B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2434B4u;
        // 0x2434b8: 0x42840  sll         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2434b4) {
            ctx->pc = 0x243500u;
            goto label_243500;
        }
    }
    ctx->pc = 0x2434BCu;
label_2434bc:
    // 0x2434bc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2434bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2434c0:
    // 0x2434c0: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x2434c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
label_2434c4:
    // 0x2434c4: 0x34214a18  ori         $at, $at, 0x4A18
    ctx->pc = 0x2434c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18968);
label_2434c8:
    // 0x2434c8: 0x2484c990  addiu       $a0, $a0, -0x3670
    ctx->pc = 0x2434c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953360));
label_2434cc:
    // 0x2434cc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2434ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2434d0:
    // 0x2434d0: 0x1000000b  b           . + 4 + (0xB << 2)
label_2434d4:
    if (ctx->pc == 0x2434D4u) {
        ctx->pc = 0x2434D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2434D0u;
        // 0x2434d4: 0x818821  addu        $s1, $a0, $at (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2434D8u;
        goto label_2434d8;
    }
    ctx->pc = 0x2434D0u;
    {
        const bool branch_taken_0x2434d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2434D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2434D0u;
        // 0x2434d4: 0x818821  addu        $s1, $a0, $at (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2434d0) {
            ctx->pc = 0x243500u;
            goto label_243500;
        }
    }
    ctx->pc = 0x2434D8u;
label_2434d8:
    // 0x2434d8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2434d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2434dc:
    // 0x2434dc: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x2434dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
label_2434e0:
    // 0x2434e0: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2434e0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_2434e4:
    // 0x2434e4: 0x2484c990  addiu       $a0, $a0, -0x3670
    ctx->pc = 0x2434e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953360));
label_2434e8:
    // 0x2434e8: 0x8c252390  lw          $a1, 0x2390($at)
    ctx->pc = 0x2434e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9104)));
label_2434ec:
    // 0x2434ec: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x2434ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_2434f0:
    // 0x2434f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2434f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2434f4:
    // 0x2434f4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2434f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2434f8:
    // 0x2434f8: 0x34214a18  ori         $at, $at, 0x4A18
    ctx->pc = 0x2434f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18968);
label_2434fc:
    // 0x2434fc: 0x818821  addu        $s1, $a0, $at
    ctx->pc = 0x2434fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_243500:
    // 0x243500: 0x122000a6  beqz        $s1, . + 4 + (0xA6 << 2)
label_243504:
    if (ctx->pc == 0x243504u) {
        ctx->pc = 0x243508u;
        goto label_243508;
    }
    ctx->pc = 0x243500u;
    {
        const bool branch_taken_0x243500 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x243500) {
            ctx->pc = 0x24379Cu;
            { ctx->pc = 0x24379c; return; }
        }
    }
    ctx->pc = 0x243508u;
label_243508:
    // 0x243508: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x243508u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_24350c:
    // 0x24350c: 0x2881000a  slti        $at, $a0, 0xA
    ctx->pc = 0x24350cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
label_243510:
    // 0x243510: 0x102000a2  beqz        $at, . + 4 + (0xA2 << 2)
label_243514:
    if (ctx->pc == 0x243514u) {
        ctx->pc = 0x243514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243510u;
        // 0x243514: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243518u;
        goto label_243518;
    }
    ctx->pc = 0x243510u;
    {
        const bool branch_taken_0x243510 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x243514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243510u;
        // 0x243514: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243510) {
            ctx->pc = 0x24379Cu;
            { ctx->pc = 0x24379c; return; }
        }
    }
    ctx->pc = 0x243518u;
label_243518:
    // 0x243518: 0x24063110  addiu       $a2, $zero, 0x3110
    ctx->pc = 0x243518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12560));
label_24351c:
    // 0x24351c: 0x8c2b3ffc  lw          $t3, 0x3FFC($at)
    ctx->pc = 0x24351cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_243520:
    // 0x243520: 0x24120098  addiu       $s2, $zero, 0x98
    ctx->pc = 0x243520u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
label_243524:
    // 0x243524: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x243524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_243528:
    // 0x243528: 0x2405019c  addiu       $a1, $zero, 0x19C
    ctx->pc = 0x243528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 412));
label_24352c:
    // 0x24352c: 0x240700d0  addiu       $a3, $zero, 0xD0
    ctx->pc = 0x24352cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_243530:
    // 0x243530: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x243530u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_243534:
    // 0x243534: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x243534u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_243538:
    // 0x243538: 0x240a0050  addiu       $t2, $zero, 0x50
    ctx->pc = 0x243538u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_24353c:
    // 0x24353c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24353cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_243540:
    // 0x243540: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x243540u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_243544:
    // 0x243544: 0x8c2423ac  lw          $a0, 0x23AC($at)
    ctx->pc = 0x243544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9132)));
label_243548:
    // 0x243548: 0x1665818  mult        $t3, $t3, $a2
    ctx->pc = 0x243548u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_24354c:
    // 0x24354c: 0x44900a  movz        $s2, $v0, $a0
    ctx->pc = 0x24354cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_243550:
    // 0x243550: 0x3401c160  ori         $at, $zero, 0xC160
    ctx->pc = 0x243550u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49504);
label_243554:
    // 0x243554: 0x6b1021  addu        $v0, $v1, $t3
    ctx->pc = 0x243554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_243558:
    // 0x243558: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x243558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24355c:
    // 0x24355c: 0x418021  addu        $s0, $v0, $at
    ctx->pc = 0x24355cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_243560:
    // 0x243560: 0xc07c17c  jal         func_1F05F0
label_243564:
    if (ctx->pc == 0x243564u) {
        ctx->pc = 0x243564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243560u;
        // 0x243564: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243568u;
        goto label_243568;
    }
    ctx->pc = 0x243560u;
    SET_GPR_U32(ctx, 31, 0x243568u);
    ctx->pc = 0x243564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243560u;
    // 0x243564: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F05F0u;
    { ctx->pc = 0x1f05f0; return; }
    ctx->pc = 0x243568u;
label_243568:
    // 0x243568: 0x34028740  ori         $v0, $zero, 0x8740
    ctx->pc = 0x243568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34624);
label_24356c:
    // 0x24356c: 0x26440008  addiu       $a0, $s2, 0x8
    ctx->pc = 0x24356cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_243570:
    // 0x243570: 0xa6020400  sh          $v0, 0x400($s0)
    ctx->pc = 0x243570u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1024), (uint16_t)GPR_U32(ctx, 2));
label_243574:
    // 0x243574: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x243574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_243578:
    // 0x243578: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x243578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_24357c:
    // 0x24357c: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x24357cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_243580:
    // 0x243580: 0x24820090  addiu       $v0, $a0, 0x90
    ctx->pc = 0x243580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
label_243584:
    // 0x243584: 0xa6030402  sh          $v1, 0x402($s0)
    ctx->pc = 0x243584u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1026), (uint16_t)GPR_U32(ctx, 3));
label_243588:
    // 0x243588: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x243588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_24358c:
    // 0x24358c: 0x3404fe00  ori         $a0, $zero, 0xFE00
    ctx->pc = 0x24358cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_243590:
    // 0x243590: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x243590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_243594:
    // 0x243594: 0xae040404  sw          $a0, 0x404($s0)
    ctx->pc = 0x243594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 4));
label_243598:
    // 0x243598: 0x34029140  ori         $v0, $zero, 0x9140
    ctx->pc = 0x243598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37184);
label_24359c:
    // 0x24359c: 0xa6020410  sh          $v0, 0x410($s0)
    ctx->pc = 0x24359cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1040), (uint16_t)GPR_U32(ctx, 2));
label_2435a0:
    // 0x2435a0: 0xa6030412  sh          $v1, 0x412($s0)
    ctx->pc = 0x2435a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1042), (uint16_t)GPR_U32(ctx, 3));
label_2435a4:
    // 0x2435a4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x2435a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_2435a8:
    // 0x2435a8: 0xae040414  sw          $a0, 0x414($s0)
    ctx->pc = 0x2435a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1044), GPR_U32(ctx, 4));
label_2435ac:
    // 0x2435ac: 0x24423020  addiu       $v0, $v0, 0x3020
    ctx->pc = 0x2435acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12320));
label_2435b0:
    // 0x2435b0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x2435b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2435b4:
    // 0x2435b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2435b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2435b8:
    // 0x2435b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2435b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2435bc:
    // 0x2435bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2435bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2435c0:
    // 0x2435c0: 0xc055148  jal         func_154520
label_2435c4:
    if (ctx->pc == 0x2435C4u) {
        ctx->pc = 0x2435C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2435C0u;
        // 0x2435c4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2435C8u;
        goto label_2435c8;
    }
    ctx->pc = 0x2435C0u;
    SET_GPR_U32(ctx, 31, 0x2435C8u);
    ctx->pc = 0x2435C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2435C0u;
    // 0x2435c4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154520u, 0x2435C0u, 0x2435C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2435C8u;
label_2435c8:
    // 0x2435c8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2435c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2435cc:
    // 0x2435cc: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x2435ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2435d0:
    // 0x2435d0: 0x264900a8  addiu       $t1, $s2, 0xA8
    ctx->pc = 0x2435d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 168));
label_2435d4:
    // 0x2435d4: 0x340afe00  ori         $t2, $zero, 0xFE00
    ctx->pc = 0x2435d4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_2435d8:
    // 0x2435d8: 0xe2280a  movz        $a1, $a3, $v0
    ctx->pc = 0x2435d8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
label_2435dc:
    // 0x2435dc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2435dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2435e0:
    // 0x2435e0: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x2435e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_2435e4:
    // 0x2435e4: 0xc054e5c  jal         func_153970
label_2435e8:
    if (ctx->pc == 0x2435E8u) {
        ctx->pc = 0x2435E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2435E4u;
        // 0x2435e8: 0x240801ac  addiu       $t0, $zero, 0x1AC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 428));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2435ECu;
        goto label_2435ec;
    }
    ctx->pc = 0x2435E4u;
    SET_GPR_U32(ctx, 31, 0x2435ECu);
    ctx->pc = 0x2435E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2435E4u;
    // 0x2435e8: 0x240801ac  addiu       $t0, $zero, 0x1AC (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 428));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x2435E4u, 0x2435ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2435ECu;
label_2435ec:
    // 0x2435ec: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x2435ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2435f0:
    // 0x2435f0: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x2435f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
label_2435f4:
    // 0x2435f4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_2435f8:
    if (ctx->pc == 0x2435F8u) {
        ctx->pc = 0x2435F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2435F4u;
        // 0x2435f8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2435FCu;
        goto label_2435fc;
    }
    ctx->pc = 0x2435F4u;
    {
        const bool branch_taken_0x2435f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2435F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2435F4u;
        // 0x2435f8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2435f4) {
            ctx->pc = 0x243600u;
            goto label_243600;
        }
    }
    ctx->pc = 0x2435FCu;
label_2435fc:
    // 0x2435fc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2435fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_243600:
    // 0x243600: 0xc054e70  jal         func_1539C0
label_243604:
    if (ctx->pc == 0x243604u) {
        ctx->pc = 0x243608u;
        goto label_243608;
    }
    ctx->pc = 0x243600u;
    SET_GPR_U32(ctx, 31, 0x243608u);
    ctx->pc = 0x1539C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539C0u, 0x243600u, 0x243608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243608u;
label_243608:
    // 0x243608: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x243608u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_24360c:
    // 0x24360c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x24360cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_243610:
    // 0x243610: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x243610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_243614:
    // 0x243614: 0x24423020  addiu       $v0, $v0, 0x3020
    ctx->pc = 0x243614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12320));
label_243618:
    // 0x243618: 0x26040420  addiu       $a0, $s0, 0x420
    ctx->pc = 0x243618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1056));
label_24361c:
    // 0x24361c: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x24361cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_243620:
    // 0x243620: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x243620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_243624:
    // 0x243624: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x243624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_243628:
    // 0x243628: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x243628u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24362c:
    // 0x24362c: 0xc054e74  jal         func_1539D0
label_243630:
    if (ctx->pc == 0x243630u) {
        ctx->pc = 0x243630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24362Cu;
        // 0x243630: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243634u;
        goto label_243634;
    }
    ctx->pc = 0x24362Cu;
    SET_GPR_U32(ctx, 31, 0x243634u);
    ctx->pc = 0x243630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24362Cu;
    // 0x243630: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x24362Cu, 0x243634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243634u;
label_243634:
    // 0x243634: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x243634u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_243638:
    // 0x243638: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x243638u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
label_24363c:
    // 0x24363c: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
label_243640:
    if (ctx->pc == 0x243640u) {
        ctx->pc = 0x243640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24363Cu;
        // 0x243640: 0x265300c8  addiu       $s3, $s2, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243644u;
        goto label_243644;
    }
    ctx->pc = 0x24363Cu;
    {
        const bool branch_taken_0x24363c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x243640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24363Cu;
        // 0x243640: 0x265300c8  addiu       $s3, $s2, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24363c) {
            ctx->pc = 0x2436C0u;
            goto label_2436c0;
        }
    }
    ctx->pc = 0x243644u;
label_243644:
    // 0x243644: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x243644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_243648:
    // 0x243648: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x243648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_24364c:
    // 0x24364c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x24364cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_243650:
    // 0x243650: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x243650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_243654:
    // 0x243654: 0x24423050  addiu       $v0, $v0, 0x3050
    ctx->pc = 0x243654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12368));
label_243658:
    // 0x243658: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x243658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24365c:
    // 0x24365c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24365cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_243660:
    // 0x243660: 0xc055148  jal         func_154520
label_243664:
    if (ctx->pc == 0x243664u) {
        ctx->pc = 0x243664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243660u;
        // 0x243664: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243668u;
        goto label_243668;
    }
    ctx->pc = 0x243660u;
    SET_GPR_U32(ctx, 31, 0x243668u);
    ctx->pc = 0x243664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243660u;
    // 0x243664: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154520u, 0x243660u, 0x243668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243668u;
label_243668:
    // 0x243668: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x243668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_24366c:
    // 0x24366c: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x24366cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_243670:
    // 0x243670: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x243670u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_243674:
    // 0x243674: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x243674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_243678:
    // 0x243678: 0xe2280a  movz        $a1, $a3, $v0
    ctx->pc = 0x243678u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
label_24367c:
    // 0x24367c: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x24367cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_243680:
    // 0x243680: 0x240801a4  addiu       $t0, $zero, 0x1A4
    ctx->pc = 0x243680u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
label_243684:
    // 0x243684: 0xc054e5c  jal         func_153970
label_243688:
    if (ctx->pc == 0x243688u) {
        ctx->pc = 0x243688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243684u;
        // 0x243688: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24368Cu;
        goto label_24368c;
    }
    ctx->pc = 0x243684u;
    SET_GPR_U32(ctx, 31, 0x24368Cu);
    ctx->pc = 0x243688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243684u;
    // 0x243688: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x243684u, 0x24368Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24368Cu;
label_24368c:
    // 0x24368c: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x24368cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_243690:
    // 0x243690: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x243690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_243694:
    // 0x243694: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x243694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_243698:
    // 0x243698: 0x24423050  addiu       $v0, $v0, 0x3050
    ctx->pc = 0x243698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12368));
label_24369c:
    // 0x24369c: 0x260412c0  addiu       $a0, $s0, 0x12C0
    ctx->pc = 0x24369cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4800));
label_2436a0:
    // 0x2436a0: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x2436a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_2436a4:
    // 0x2436a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2436a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2436a8:
    // 0x2436a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2436a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2436ac:
    // 0x2436ac: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x2436acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2436b0:
    // 0x2436b0: 0xc054e74  jal         func_1539D0
label_2436b4:
    if (ctx->pc == 0x2436B4u) {
        ctx->pc = 0x2436B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2436B0u;
        // 0x2436b4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2436B8u;
        goto label_2436b8;
    }
    ctx->pc = 0x2436B0u;
    SET_GPR_U32(ctx, 31, 0x2436B8u);
    ctx->pc = 0x2436B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2436B0u;
    // 0x2436b4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x2436B0u, 0x2436B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2436B8u;
label_2436b8:
    // 0x2436b8: 0x10000015  b           . + 4 + (0x15 << 2)
label_2436bc:
    if (ctx->pc == 0x2436BCu) {
        ctx->pc = 0x2436BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2436B8u;
        // 0x2436bc: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2436C0u;
        goto label_2436c0;
    }
    ctx->pc = 0x2436B8u;
    {
        const bool branch_taken_0x2436b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2436BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2436B8u;
        // 0x2436bc: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2436b8) {
            ctx->pc = 0x243710u;
            goto label_243710;
        }
    }
    ctx->pc = 0x2436C0u;
label_2436c0:
    // 0x2436c0: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2436c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2436c4:
    // 0x2436c4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2436c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2436c8:
    // 0x2436c8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x2436c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2436cc:
    // 0x2436cc: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x2436ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_2436d0:
    // 0x2436d0: 0x2407003f  addiu       $a3, $zero, 0x3F
    ctx->pc = 0x2436d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_2436d4:
    // 0x2436d4: 0x240801a4  addiu       $t0, $zero, 0x1A4
    ctx->pc = 0x2436d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
label_2436d8:
    // 0x2436d8: 0xc054e5c  jal         func_153970
label_2436dc:
    if (ctx->pc == 0x2436DCu) {
        ctx->pc = 0x2436DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2436D8u;
        // 0x2436dc: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2436E0u;
        goto label_2436e0;
    }
    ctx->pc = 0x2436D8u;
    SET_GPR_U32(ctx, 31, 0x2436E0u);
    ctx->pc = 0x2436DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2436D8u;
    // 0x2436dc: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x2436D8u, 0x2436E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2436E0u;
label_2436e0:
    // 0x2436e0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x2436e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2436e4:
    // 0x2436e4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x2436e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_2436e8:
    // 0x2436e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2436e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2436ec:
    // 0x2436ec: 0x24423050  addiu       $v0, $v0, 0x3050
    ctx->pc = 0x2436ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12368));
label_2436f0:
    // 0x2436f0: 0x260412c0  addiu       $a0, $s0, 0x12C0
    ctx->pc = 0x2436f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4800));
label_2436f4:
    // 0x2436f4: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x2436f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_2436f8:
    // 0x2436f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2436f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2436fc:
    // 0x2436fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2436fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_243700:
    // 0x243700: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x243700u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_243704:
    // 0x243704: 0xc054e74  jal         func_1539D0
label_243708:
    if (ctx->pc == 0x243708u) {
        ctx->pc = 0x243708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243704u;
        // 0x243708: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24370Cu;
        goto label_24370c;
    }
    ctx->pc = 0x243704u;
    SET_GPR_U32(ctx, 31, 0x24370Cu);
    ctx->pc = 0x243708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243704u;
    // 0x243708: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x243704u, 0x24370Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24370Cu;
label_24370c:
    // 0x24370c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x24370cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_243710:
    // 0x243710: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x243710u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
label_243714:
    // 0x243714: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_243718:
    if (ctx->pc == 0x243718u) {
        ctx->pc = 0x24371Cu;
        goto label_24371c;
    }
    ctx->pc = 0x243714u;
    {
        const bool branch_taken_0x243714 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x243714) {
            ctx->pc = 0x243750u;
            goto label_243750;
        }
    }
    ctx->pc = 0x24371Cu;
label_24371c:
    // 0x24371c: 0x92260001  lbu         $a2, 0x1($s1)
    ctx->pc = 0x24371cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_243720:
    // 0x243720: 0x28c10063  slti        $at, $a2, 0x63
    ctx->pc = 0x243720u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)99) ? 1 : 0);
label_243724:
    // 0x243724: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_243728:
    if (ctx->pc == 0x243728u) {
        ctx->pc = 0x24372Cu;
        goto label_24372c;
    }
    ctx->pc = 0x243724u;
    {
        const bool branch_taken_0x243724 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x243724) {
            ctx->pc = 0x243734u;
            goto label_243734;
        }
    }
    ctx->pc = 0x24372Cu;
label_24372c:
    // 0x24372c: 0x10000002  b           . + 4 + (0x2 << 2)
label_243730:
    if (ctx->pc == 0x243730u) {
        ctx->pc = 0x243734u;
        goto label_243734;
    }
    ctx->pc = 0x24372Cu;
    {
        const bool branch_taken_0x24372c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24372c) {
            ctx->pc = 0x243738u;
            goto label_243738;
        }
    }
    ctx->pc = 0x243734u;
label_243734:
    // 0x243734: 0x24060063  addiu       $a2, $zero, 0x63
    ctx->pc = 0x243734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_243738:
    // 0x243738: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x243738u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_24373c:
    // 0x24373c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x24373cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_243740:
    // 0x243740: 0xc08f20e  jal         func_23C838
label_243744:
    if (ctx->pc == 0x243744u) {
        ctx->pc = 0x243744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243740u;
        // 0x243744: 0x24a5ea88  addiu       $a1, $a1, -0x1578 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243748u;
        goto label_243748;
    }
    ctx->pc = 0x243740u;
    SET_GPR_U32(ctx, 31, 0x243748u);
    ctx->pc = 0x243744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243740u;
    // 0x243744: 0x24a5ea88  addiu       $a1, $a1, -0x1578 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x243748u;
label_243748:
    // 0x243748: 0x10000003  b           . + 4 + (0x3 << 2)
label_24374c:
    if (ctx->pc == 0x24374Cu) {
        ctx->pc = 0x24374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243748u;
        // 0x24374c: 0x264700c8  addiu       $a3, $s2, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243750u;
        goto label_243750;
    }
    ctx->pc = 0x243748u;
    {
        const bool branch_taken_0x243748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243748u;
        // 0x24374c: 0x264700c8  addiu       $a3, $s2, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243748) {
            ctx->pc = 0x243758u;
            goto label_243758;
        }
    }
    ctx->pc = 0x243750u;
label_243750:
    // 0x243750: 0xa3a000d0  sb          $zero, 0xD0($sp)
    ctx->pc = 0x243750u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 208), (uint8_t)GPR_U32(ctx, 0));
label_243754:
    // 0x243754: 0x264700c8  addiu       $a3, $s2, 0xC8
    ctx->pc = 0x243754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 200));
label_243758:
    // 0x243758: 0x26042f30  addiu       $a0, $s0, 0x2F30
    ctx->pc = 0x243758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12080));
label_24375c:
    // 0x24375c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x24375cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_243760:
    // 0x243760: 0x24060234  addiu       $a2, $zero, 0x234
    ctx->pc = 0x243760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 564));
label_243764:
    // 0x243764: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x243764u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_243768:
    // 0x243768: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x243768u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_24376c:
    // 0x24376c: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x24376cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_243770:
    // 0x243770: 0xc0708ac  jal         func_1C22B0
label_243774:
    if (ctx->pc == 0x243774u) {
        ctx->pc = 0x243774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243770u;
        // 0x243774: 0x27ab00d0  addiu       $t3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243778u;
        goto label_243778;
    }
    ctx->pc = 0x243770u;
    SET_GPR_U32(ctx, 31, 0x243778u);
    ctx->pc = 0x243774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243770u;
    // 0x243774: 0x27ab00d0  addiu       $t3, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x243778u;
label_243778:
    // 0x243778: 0xc070ae4  jal         func_1C2B90
label_24377c:
    if (ctx->pc == 0x24377Cu) {
        ctx->pc = 0x24377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243778u;
        // 0x24377c: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243780u;
        goto label_243780;
    }
    ctx->pc = 0x243778u;
    SET_GPR_U32(ctx, 31, 0x243780u);
    ctx->pc = 0x24377Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243778u;
    // 0x24377c: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2B90u;
    { ctx->pc = 0x1c2b90; return; }
    ctx->pc = 0x243780u;
label_243780:
    // 0x243780: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x243780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_243784:
    // 0x243784: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x243784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x243788u;
    return;
}
